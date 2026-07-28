
#include "stdafx.h"
#include "common.h"
#include "gs.h"
#include "gte.h"


// selected renderer; see the `renderer` values documented for config.pc. The
// game tests bit 1 rather than comparing, so only the OpenGL renderer (2)
// matches.
#define renderer (*(const int *)0x4ac094)
#define RENDERER_OPENGL_BIT 2

// projection distance, and the copies the PC renderers work from
#define projDist (*(long *)0x4efb30)
#define projDistF (*(float *)0x4efb34)
#define projOfsF (*(float *)0x4efb38)

// view rotation, built by GsSetRefView2L and used to transform objects into
// screen space
#define viewMtx (*(MATRIX *)0x4efae0)
// the same view a half turn about X away, which `worldScreenMtx` is built from
#define viewMtxFlipped (*(MATRIX *)0x4efb00)
// world-space translation to the viewer, i.e. the negated view position
#define viewTrans (*(VECTOR *)0x4efb20)
// world-to-screen matrix, the flipped view matrix plus its translation
#define worldScreenMtx (*(MATRIX *)0x52fce0)

// Q12 scale factors correcting for the display aspect ratio, set up along with
// the rest of the view when the resolution changes
#define viewScaleX (*(const short *)0x4efb54)
#define viewScaleY (*(const short *)0x4efb56)
#define viewScaleFlippedY (*(const short *)0x4efb5c)

// sets the OpenGL projection matrix from the near/far planes and the viewport;
// takes no arguments, but is called with the projection distance anyway
#define SetGLProjection ((void (*)(long))0x413a20)


void GsSetProjection(long h)
{
    projDist = h;
    projDistF = (float)h;
    projOfsF = (float)(h / -2);

    if (renderer & RENDERER_OPENGL_BIT)
        SetGLProjection(h);
}

unsigned long *GsMapModelingData(unsigned long *tmd)
{
    // `tmd` points just past the TMD's ID, i.e. at { flags, nobj, objects[] };
    // the offsets in each object are relative to the start of the object table
    char *base = (char *)(tmd + 2);
    // NOTE: only the low half of the object count is read
    short nobj = *(const short *)(tmd + 1);

    if (nobj <= 0)
        return tmd;

    TMD_OBJECT *obj = (TMD_OBJECT *)base;
    for (; nobj > 0; nobj--, obj++)
    {
        obj->vertTop = (unsigned long *)(base + (size_t)obj->vertTop);
        obj->normalTop = (unsigned long *)(base + (size_t)obj->normalTop);
        obj->primTop = (unsigned long *)(base + (size_t)obj->primTop);
    }

    // whatever the loop pointer ended up at; the caller has no use for it
    return (unsigned long *)obj + 4;
}

GsCOORDINATE2 *GsInitCoordinate2(GsCOORDINATE2 *super, GsCOORDINATE2 *coord)
{
    coord->super = super;
    coord->sub = NULL;

    // the cached transform starts out stale
    coord->flg = 0;

    // both transforms start out as the identity; note the padding of each
    // matrix is left as it was
    IdentMatrix(&coord->coord);
    coord->coord.t[0] = 0;
    coord->coord.t[1] = 0;
    coord->coord.t[2] = 0;
    IdentMatrix(&coord->workm);
    coord->workm.t[0] = 0;
    coord->workm.t[1] = 0;
    coord->workm.t[2] = 0;

    return coord;
}

int GsSetRefView2L(const GsRVIEW2 *view)
{
    // vector from the point being looked at to the viewer
    int dx = view->vpx - view->vrx;
    int dy = view->vpy - view->vry;
    int dz = view->vpz - view->vrz;

    viewTrans.vx = -view->vpx;
    viewTrans.vy = -view->vpy;
    viewTrans.vz = -view->vpz;

    // heading, and pitch against the distance covered on the ground; the
    // original recomputes both for the second matrix
    int heading = ratan2(dx, dz);
    int ground = (int)sqrt((double)(dz * dz + dx * dx));
    int pitch = ratan2(dy, ground);

    // build one view and hand it the translation to the viewer, giving the
    // world-to-screen matrix
    MATRIX scale;
    VECTOR scaleBy;
    IdentMatrix(&viewMtxFlipped);
    viewMtxFlipped.t[0] = 0;
    viewMtxFlipped.t[1] = 0;
    viewMtxFlipped.t[2] = 0;
    IdentMatrix(&scale);
    scale.t[0] = 0;
    scale.t[1] = 0;
    scale.t[2] = 0;
    scaleBy.vx = 0x1000;
    scaleBy.vy = viewScaleFlippedY;
    scaleBy.vz = 0x1000;
    ScaleMatrix(&scale, &scaleBy);
    RotMatrixY(0x1800 - heading, &viewMtxFlipped);
    RotMatrixX(-pitch, &viewMtxFlipped);
    MulMatrix2_0(&scale, &viewMtxFlipped);

    worldScreenMtx = viewMtxFlipped;
    VECTOR trans;
    ApplyMatrixLV(&worldScreenMtx, &viewTrans, &trans);
    worldScreenMtx.t[0] = trans.vx;
    worldScreenMtx.t[1] = trans.vy;
    worldScreenMtx.t[2] = trans.vz;

    // build the view objects are transformed into, a half turn about X away
    // from the one above and scaled for the display aspect ratio
    IdentMatrix(&viewMtx);
    viewMtx.t[0] = 0;
    viewMtx.t[1] = 0;
    viewMtx.t[2] = 0;
    IdentMatrix(&scale);
    scale.t[0] = 0;
    scale.t[1] = 0;
    scale.t[2] = 0;
    scaleBy.vx = viewScaleX;
    scaleBy.vy = viewScaleY;
    scaleBy.vz = 0x1000;
    ScaleMatrix(&scale, &scaleBy);
    RotMatrixY(0x800 - heading, &viewMtx);
    RotMatrixX(0x800 - pitch, &viewMtx);
    MulMatrix2_0(&scale, &viewMtx);

    return 1;
}
