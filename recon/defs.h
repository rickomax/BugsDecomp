// Types and helpers used by the reconstructed sources.
//
// Hex-Rays output leans on a small vocabulary of its own; this header supplies
// it so the reconstruction reads as ordinary C.

#pragma once


#include <windows.h>


// sized types
typedef unsigned char _BYTE;
typedef unsigned short _WORD;
typedef unsigned int _DWORD;
typedef unsigned long long _QWORD;
// an object whose layout is not known
typedef unsigned char _UNKNOWN;

#ifndef _MSC_VER
// `__intN` is a keyword under MSVC, which is what the game was built with
#define __int8 char
#define __int16 short
#define __int32 int
#define __int64 long long
#endif

// sub-word accessors
#define LOBYTE(x) (*((_BYTE *)&(x) + 0))
#define BYTE1(x) (*((_BYTE *)&(x) + 1))
#define BYTE2(x) (*((_BYTE *)&(x) + 2))
#define HIBYTE(x) (*((_BYTE *)&(x) + 3))
#define LOWORD(x) (*((_WORD *)&(x) + 0))
#define HIWORD(x) (*((_WORD *)&(x) + 1))
#define LODWORD(x) (*((_DWORD *)&(x) + 0))
#define HIDWORD(x) (*((_DWORD *)&(x) + 1))
#define SLOBYTE(x) (*((char *)&(x) + 0))
#define SHIWORD(x) (*((short *)&(x) + 1))
#define SLODWORD(x) (*((int *)&(x) + 0))
#define SHIDWORD(x) (*((int *)&(x) + 1))

// a copy whose size is a compile-time constant
#define qmemcpy memcpy

// a 64-bit value built from two 32-bit halves
#define __PAIR64__(hi, lo) \
    (((unsigned long long)(unsigned int)(hi) << 32) | (unsigned int)(lo))
#define COERCE_UNSIGNED_INT64(x) (*(unsigned long long *)&(x))
#define COERCE_FLOAT(x) (*(float *)&(x))
#define COERCE_DOUBLE(x) (*(double *)&(x))

// NOTE: approximations. Hex-Rays uses these for functions with a calling
// convention it could not match to a standard one; the register assignments
// they carry are preserved as `/*@<reg>*/` comments on the declaration, so the
// real convention is not lost even though it cannot be spelled in C.
#define __usercall __cdecl
#define __userpurge __cdecl
#define __noreturn __declspec(noreturn)
