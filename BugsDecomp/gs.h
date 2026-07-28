// High-level emulation of PS1's GS (Graphics System) API, i.e. libgs.
//
// Only the parts of libgs the game actually uses are declared here. The port's
// versions are not always faithful to the PSX originals; where they differ, the
// difference is noted on the function.

#pragma once


#include "gte.h"


// A node of the coordinate system hierarchy. `coord` is the transform relative
// to `super`; `workm` caches the transform relative to the root, and is only
// valid while `flg` matches the current update ID.
typedef struct GsCOORDINATE2
{
    // update ID `workm` was computed for, or 0 if it is stale
    unsigned long flg;
    // transform relative to `super`
    MATRIX coord;
    // cached transform relative to the root
    MATRIX workm;
    // unused by the port
    SVECTOR *rotate;
    // parent coordinate system, or NULL if this is a root
    struct GsCOORDINATE2 *super;
    // unused by the port
    struct GsCOORDINATE2 *sub;
} GsCOORDINATE2;

// A reference view, i.e. a viewer position and the point it looks at.
typedef struct GsRVIEW2
{
    // position of the viewer
    long vpx, vpy, vpz;
    // position the viewer is looking at
    long vrx, vry, vrz;
    // twist about the view axis; ignored by the port
    long rz;
    // coordinate system the positions are relative to; ignored by the port,
    // which always treats them as world space
    GsCOORDINATE2 *super;
} GsRVIEW2;

// An object of a TMD, as laid out in the file. The three pointers are stored as
// offsets until `GsMapModelingData` relocates them.
typedef struct TMD_OBJECT
{
    // vertices
    unsigned long *vertTop;
    size_t nVert;
    // normals
    unsigned long *normalTop;
    size_t nNormal;
    // primitives
    unsigned long *primTop;
    size_t nPrim;
    // scale factor; unused
    long scale;
} TMD_OBJECT;


/// <summary>
/// Sets the projection distance, i.e. how far the projection plane sits from
/// the viewer. Larger values narrow the field of view.
///
/// NOTE: the original leaves an unspecified value in the return register, which
/// no caller makes use of.
/// </summary>
/// <param name="h">Projection distance</param>
EXTERN_C void GsSetProjection(long h);
// NOTE: 1.0 only. This calls the OpenGL renderer's projection setup, whose 1.6
// address is not yet known.
PATCH_CODE_1_0(0x40cd80, GsSetProjection);

/// <summary>
/// Relocates the vertex, normal and primitive pointers of a TMD's objects from
/// file-relative offsets to addresses, so the TMD can be drawn in place.
///
/// NOTE: only the low half of the object count is read, so a TMD with more than
/// 32767 objects is mapped incorrectly. This matches the PSX original.
/// </summary>
/// <param name="tmd">TMD data, starting just past its ID field</param>
/// <returns>An artifact of the mapping loop; not meaningful</returns>
EXTERN_C unsigned long *GsMapModelingData(unsigned long *tmd);
PATCH_CODE(0x40cdc0, 0x40cd60, GsMapModelingData);

/// <summary>
/// Initializes a coordinate system to the identity transform under a given
/// parent.
/// </summary>
/// <param name="super">Parent coordinate system, or NULL for a root</param>
/// <param name="coord">Out coordinate system</param>
/// <returns>coord</returns>
EXTERN_C GsCOORDINATE2 *GsInitCoordinate2(
    GsCOORDINATE2 *super,
    GsCOORDINATE2 *coord
);
PATCH_CODE(0x40ce90, 0x40ce30, GsInitCoordinate2);

/// <summary>
/// Computes the view matrices for a reference view.
///
/// NOTE: unlike the PSX original, the port ignores the view's `rz` and `super`,
/// and always builds the view in world space with no twist.
/// </summary>
/// <param name="view">In reference view</param>
/// <returns>Always 1</returns>
EXTERN_C int GsSetRefView2L(const GsRVIEW2 *view);
PATCH_CODE(0x40cf10, 0x40ceb0, GsSetRefView2L);
