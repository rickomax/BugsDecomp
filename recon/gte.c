// Module `gte`.
//
// Reconstructed from Bugs.exe (PC v1.0) by tools/recon.py.
// Generated file -- do not edit by hand; see recon/README.md.
//
// Address range: 0x4079e0 - 0x408bc0 (27 functions).

#include "bugs.h"


// 0x4079e0  SquareRoot0
// IDA symbol: sub_4079E0
// Documented as sdk/gte in doc/functions.md.
int __cdecl SquareRoot0(int a1)
{
  return (int)sqrt((double)a1);
}

// 0x407a00  ratan2
// IDA symbol: sub_407A00
// Documented as sdk/gte in doc/functions.md.
int __cdecl ratan2(int a1, int a2)
{
  return (int)(atan2((double)a1, (double)a2) * 651.89865);
}

// 0x407a30  rcos
// IDA symbol: sub_407A30
// Documented as sdk/gte in doc/functions.md.
int __cdecl rcos(int a1)
{
  int v1; // eax

  LOWORD(v1) = a1;
  if ( a1 < 0 )
    v1 = -a1;
  return dword_4633F0[v1 & 0xFFF];
}

// 0x407a50  rsin
// IDA symbol: sub_407A50
// Documented as sdk/gte in doc/functions.md.
int __cdecl rsin(__int16 a1)
{
  return dword_45F3F0[(a1 + 4096) & 0xFFF];
}

// 0x407a70  RotMatrix
// IDA symbol: sub_407A70
// Documented as sdk/gte in doc/functions.md.
_WORD *__cdecl RotMatrix(__int16 *a1, _WORD *a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax

  v2 = a1[2];
  if ( v2 < 0 )
    v2 = -v2;
  *a2 = dword_4633F0[v2 & 0xFFF];
  v3 = dword_45F3F0[a1[2] & 0xFFF];
  a2[2] = 0;
  a2[1] = -(__int16)v3;
  a2[3] = dword_45F3F0[a1[2] & 0xFFF];
  v4 = a1[2];
  if ( v4 < 0 )
    v4 = -v4;
  v5 = dword_4633F0[v4 & 0xFFF];
  a2[5] = 0;
  a2[4] = v5;
  a2[6] = 0;
  a2[7] = 0;
  a2[8] = 4096;
  RotMatrixY(a1[1], a2);
  RotMatrixX(*a1, a2);
  return a2;
}

// 0x407b10  RotMatrixYXZ
// IDA symbol: sub_407B10
// Documented as sdk/gte in doc/functions.md.
_WORD *__cdecl RotMatrixYXZ(__int16 *a1, _WORD *a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax

  v2 = a1[2];
  if ( v2 < 0 )
    v2 = -v2;
  *a2 = dword_4633F0[v2 & 0xFFF];
  v3 = dword_45F3F0[a1[2] & 0xFFF];
  a2[2] = 0;
  a2[1] = -(__int16)v3;
  a2[3] = dword_45F3F0[a1[2] & 0xFFF];
  v4 = a1[2];
  if ( v4 < 0 )
    v4 = -v4;
  v5 = dword_4633F0[v4 & 0xFFF];
  a2[5] = 0;
  a2[4] = v5;
  a2[6] = 0;
  a2[7] = 0;
  a2[8] = 4096;
  RotMatrixX(*a1, a2);
  RotMatrixY(a1[1], a2);
  return a2;
}

// 0x407bb0  RotMatrixZYX
// IDA symbol: sub_407BB0
// Documented as sdk/gte in doc/functions.md.
_WORD *__cdecl RotMatrixZYX(__int16 *a1, _WORD *a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax

  *a2 = 4096;
  a2[1] = 0;
  a2[2] = 0;
  a2[3] = 0;
  v2 = *a1;
  if ( v2 < 0 )
    v2 = -v2;
  a2[4] = dword_4633F0[v2 & 0xFFF];
  v3 = dword_45F3F0[*a1 & 0xFFF];
  a2[6] = 0;
  a2[5] = -(__int16)v3;
  a2[7] = dword_45F3F0[*a1 & 0xFFF];
  v4 = *a1;
  if ( v4 < 0 )
    v4 = -v4;
  a2[8] = dword_4633F0[v4 & 0xFFF];
  RotMatrixY(a1[1], a2);
  RotMatrixZ(a1[2], a2);
  return a2;
}

// 0x407c50  RotMatrixX
// IDA symbol: sub_407C50
// Documented as sdk/gte in doc/functions.md.
__int16 *__cdecl RotMatrixX(int a1, __int16 *a2)
{
  int v2; // edx
  int v3; // esi
  __int16 *result; // eax
  int v5; // ecx
  int v6; // ebp
  int v7; // edi
  int v8; // esi
  int v9; // ebx
  int v10; // edx
  int v11; // edx
  __int16 v12; // [esp+16h] [ebp-1Ah]
  __int16 v13; // [esp+18h] [ebp-18h]
  __int16 v14; // [esp+1Ah] [ebp-16h]

  LOWORD(v2) = a1;
  LOWORD(v3) = a1;
  if ( a1 < 0 )
    v3 = -a1;
  result = a2;
  v5 = dword_45F3F0[a1 & 0xFFF];
  v12 = ((a2[3] * dword_4633F0[v3 & 0xFFF]) >> 12) - ((a2[6] * v5) >> 12);
  LOWORD(v3) = a1;
  if ( a1 < 0 )
    v3 = -a1;
  v6 = a2[7];
  v13 = ((a2[4] * dword_4633F0[v3 & 0xFFF]) >> 12) - ((v6 * v5) >> 12);
  LOWORD(v3) = a1;
  if ( a1 < 0 )
    v3 = -a1;
  v14 = ((a2[5] * dword_4633F0[v3 & 0xFFF]) >> 12) - ((a2[8] * v5) >> 12);
  LOWORD(v3) = a1;
  if ( a1 < 0 )
    v3 = -a1;
  v7 = ((a2[3] * v5) >> 12) + ((a2[6] * dword_4633F0[v3 & 0xFFF]) >> 12);
  LOWORD(v3) = a1;
  if ( a1 < 0 )
    v3 = -a1;
  v8 = ((a2[4] * v5) >> 12) + ((v6 * dword_4633F0[v3 & 0xFFF]) >> 12);
  if ( a1 < 0 )
    v2 = -a1;
  v9 = a2[8];
  v10 = dword_4633F0[v2 & 0xFFF];
  a2[6] = v7;
  v11 = ((a2[5] * v5) >> 12) + ((v9 * v10) >> 12);
  a2[3] = v12;
  a2[4] = v13;
  a2[7] = v8;
  a2[5] = v14;
  a2[8] = v11;
  return result;
}

// 0x407dc0  RotMatrixY
// IDA symbol: sub_407DC0
// Documented as sdk/gte in doc/functions.md.
__int16 *__cdecl RotMatrixY(int a1, __int16 *a2)
{
  int v2; // edx
  int v3; // esi
  __int16 *result; // eax
  int v5; // ecx
  int v6; // ebp
  int v7; // edi
  int v8; // esi
  int v9; // ebx
  int v10; // edx
  int v11; // edx
  __int16 v12; // [esp+10h] [ebp-20h]
  __int16 v13; // [esp+12h] [ebp-1Eh]
  __int16 v14; // [esp+14h] [ebp-1Ch]

  LOWORD(v2) = a1;
  LOWORD(v3) = a1;
  if ( a1 < 0 )
    v3 = -a1;
  result = a2;
  v5 = dword_45F3F0[a1 & 0xFFF];
  v12 = ((a2[6] * v5) >> 12) + ((*a2 * dword_4633F0[v3 & 0xFFF]) >> 12);
  LOWORD(v3) = a1;
  if ( a1 < 0 )
    v3 = -a1;
  v6 = a2[7];
  v13 = ((v6 * v5) >> 12) + ((a2[1] * dword_4633F0[v3 & 0xFFF]) >> 12);
  LOWORD(v3) = a1;
  if ( a1 < 0 )
    v3 = -a1;
  v14 = ((a2[8] * v5) >> 12) + ((a2[2] * dword_4633F0[v3 & 0xFFF]) >> 12);
  LOWORD(v3) = a1;
  if ( a1 < 0 )
    v3 = -a1;
  v7 = ((a2[6] * dword_4633F0[v3 & 0xFFF]) >> 12) - ((*a2 * v5) >> 12);
  LOWORD(v3) = a1;
  if ( a1 < 0 )
    v3 = -a1;
  v8 = ((v6 * dword_4633F0[v3 & 0xFFF]) >> 12) - ((a2[1] * v5) >> 12);
  if ( a1 < 0 )
    v2 = -a1;
  v9 = a2[8];
  v10 = dword_4633F0[v2 & 0xFFF];
  a2[6] = v7;
  v11 = ((v9 * v10) >> 12) - ((a2[2] * v5) >> 12);
  *a2 = v12;
  a2[1] = v13;
  a2[7] = v8;
  a2[2] = v14;
  a2[8] = v11;
  return result;
}

// 0x407f20  RotMatrixZ
// IDA symbol: sub_407F20
// Documented as sdk/gte in doc/functions.md.
__int16 *__cdecl RotMatrixZ(int a1, __int16 *a2)
{
  int v2; // edx
  int v3; // esi
  __int16 *result; // eax
  int v5; // ecx
  int v6; // ebp
  int v7; // edi
  int v8; // esi
  int v9; // ebx
  int v10; // edx
  int v11; // edx
  __int16 v12; // [esp+10h] [ebp-20h]
  __int16 v13; // [esp+12h] [ebp-1Eh]
  __int16 v14; // [esp+14h] [ebp-1Ch]

  LOWORD(v2) = a1;
  LOWORD(v3) = a1;
  if ( a1 < 0 )
    v3 = -a1;
  result = a2;
  v5 = dword_45F3F0[a1 & 0xFFF];
  v12 = ((*a2 * dword_4633F0[v3 & 0xFFF]) >> 12) - ((a2[3] * v5) >> 12);
  LOWORD(v3) = a1;
  if ( a1 < 0 )
    v3 = -a1;
  v6 = a2[4];
  v13 = ((a2[1] * dword_4633F0[v3 & 0xFFF]) >> 12) - ((v6 * v5) >> 12);
  LOWORD(v3) = a1;
  if ( a1 < 0 )
    v3 = -a1;
  v14 = ((a2[2] * dword_4633F0[v3 & 0xFFF]) >> 12) - ((a2[5] * v5) >> 12);
  LOWORD(v3) = a1;
  if ( a1 < 0 )
    v3 = -a1;
  v7 = ((*a2 * v5) >> 12) + ((a2[3] * dword_4633F0[v3 & 0xFFF]) >> 12);
  LOWORD(v3) = a1;
  if ( a1 < 0 )
    v3 = -a1;
  v8 = ((a2[1] * v5) >> 12) + ((v6 * dword_4633F0[v3 & 0xFFF]) >> 12);
  if ( a1 < 0 )
    v2 = -a1;
  v9 = a2[5];
  v10 = dword_4633F0[v2 & 0xFFF];
  a2[3] = v7;
  v11 = ((a2[2] * v5) >> 12) + ((v9 * v10) >> 12);
  *a2 = v12;
  a2[1] = v13;
  a2[4] = v8;
  a2[2] = v14;
  a2[5] = v11;
  return result;
}

// 0x408080  ScaleMatrix
// IDA symbol: sub_408080
// Documented as sdk/gte in doc/functions.md.
__int16 *__cdecl ScaleMatrix(__int16 *a1, _DWORD *a2)
{
  int v3; // edx
  int v4; // esi
  int v5; // edx
  int v6; // esi
  int v7; // edx
  int v8; // esi
  int v9; // edx
  int v10; // esi
  int v11; // edx
  int v12; // esi
  int v13; // edx
  int v14; // esi
  int v15; // edx

  *a1 = (*a2 * *a1) >> 12;
  v3 = a1[2];
  a1[1] = (a1[1] * a2[1]) >> 12;
  v4 = v3 * a2[2];
  v5 = a1[3];
  a1[2] = v4 >> 12;
  v6 = v5 * *a2;
  v7 = a1[4];
  a1[3] = v6 >> 12;
  v8 = v7 * a2[1];
  v9 = a1[5];
  a1[4] = v8 >> 12;
  v10 = v9 * a2[2];
  v11 = a1[6];
  a1[5] = v10 >> 12;
  v12 = v11 * *a2;
  v13 = a1[7];
  a1[6] = v12 >> 12;
  v14 = v13 * a2[1];
  v15 = a1[8];
  a1[7] = v14 >> 12;
  a1[8] = (v15 * a2[2]) >> 12;
  return a1;
}

// 0x408120  TransMatrix
// IDA symbol: sub_408120
// Documented as sdk/gte in doc/functions.md.
_DWORD *__cdecl TransMatrix(_DWORD *a1, _DWORD *a2)
{
  a1[5] = *a2;
  a1[6] = a2[1];
  a1[7] = a2[2];
  return a1;
}

// 0x408140  ApplyMatrix
// IDA symbol: sub_408140
// Documented as sdk/gte in doc/functions.md.
int *__cdecl ApplyMatrix(__int16 *a1, __int16 *a2, int *a3)
{
  int v3; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi

  v3 = *a2 * *a1;
  *a3 = v3;
  v5 = a2[1] * a1[1] + v3;
  *a3 = v5;
  *a3 = (v5 + a2[2] * a1[2]) >> 12;
  v6 = *a2 * a1[3];
  a3[1] = v6;
  v7 = a2[1] * a1[4] + v6;
  a3[1] = v7;
  a3[1] = (v7 + a2[2] * a1[5]) >> 12;
  v8 = *a2 * a1[6];
  a3[2] = v8;
  v9 = a2[1] * a1[7] + v8;
  a3[2] = v9;
  a3[2] = (v9 + a2[2] * a1[8]) >> 12;
  return a3;
}

// 0x4081e0  ApplyMatrixSV
// IDA symbol: sub_4081E0
// Documented as sdk/gte in doc/functions.md.
_DWORD *__cdecl ApplyMatrixSV(__int16 *a1, __int16 *a2, _DWORD *a3)
{
  int v3; // ecx
  int v4; // edx
  int v5; // esi
  int v7; // [esp+Ch] [ebp-8h]
  int v8; // [esp+10h] [ebp-4h]

  v3 = a2[2];
  v4 = a2[1];
  v5 = *a2;
  LOWORD(v7) = (v5 * *a1 + v4 * a1[1] + v3 * a1[2]) >> 12;
  HIWORD(v7) = (v5 * a1[3] + v4 * a1[4] + v3 * a1[5]) >> 12;
  LOWORD(v8) = (v4 * a1[7] + v3 * a1[8] + v5 * a1[6]) >> 12;
  *a3 = v7;
  a3[1] = v8;
  return a3;
}

// 0x408280  ApplyMatrixLV
// IDA symbol: sub_408280
// Documented as sdk/gte in doc/functions.md.
int *__cdecl ApplyMatrixLV(__int16 *a1, _DWORD *a2, int *a3)
{
  int v3; // ebx
  int v4; // ebp
  int v5; // edx
  int v6; // esi
  int v8; // [esp+1Ch] [ebp-4h]

  v3 = a2[1];
  v4 = a2[2];
  v5 = v4 * a1[5] + v3 * a1[4] + *a2 * a1[3];
  v6 = v4 * a1[8] + v3 * a1[7] + *a2 * a1[6];
  *a3 = (v4 * a1[2] + v3 * a1[1] + *a2 * *a1) >> 12;
  a3[1] = v5 >> 12;
  a3[2] = v6 >> 12;
  a3[3] = v8;
  return a3;
}

// 0x408310  MulMatrix0
// IDA symbol: sub_408310
// Documented as sdk/gte in doc/functions.md.
_WORD *__cdecl MulMatrix0(__int16 *a1, __int16 *a2, _WORD *a3)
{
  *a3 = (*a2 * *a1 + a2[3] * a1[1] + a1[2] * a2[6]) >> 12;
  a3[1] = (a2[4] * a1[1] + a1[2] * a2[7] + a2[1] * *a1) >> 12;
  a3[2] = (a1[2] * a2[8] + a1[1] * a2[5] + a2[2] * *a1) >> 12;
  a3[3] = (a2[6] * a1[5] + a2[3] * a1[4] + a1[3] * *a2) >> 12;
  a3[4] = (a2[4] * a1[4] + a2[7] * a1[5] + a2[1] * a1[3]) >> 12;
  a3[5] = (a2[2] * a1[3] + a2[5] * a1[4] + a2[8] * a1[5]) >> 12;
  a3[6] = (a2[3] * a1[7] + a2[6] * a1[8] + a1[6] * *a2) >> 12;
  a3[7] = (a2[7] * a1[8] + a2[1] * a1[6] + a2[4] * a1[7]) >> 12;
  a3[8] = (a2[2] * a1[6] + a2[8] * a1[8] + a2[5] * a1[7]) >> 12;
  return a3;
}

// 0x4084b0  MulMatrix2
// IDA symbol: sub_4084B0
// Documented as sdk/gte in doc/functions.md.
__int16 *__cdecl MulMatrix2(__int16 *a1, __int16 *a2)
{
  __int16 *result; // eax
  int v3; // ebx
  int v4; // edi
  int v5; // esi
  int v6; // edx
  int v7; // edx
  int v8; // esi
  int v9; // edx
  int v10; // ecx
  _BYTE v11[20]; // [esp+10h] [ebp-20h]
  int v12; // [esp+38h] [ebp+8h]

  result = a2;
  v3 = *a2;
  v4 = a2[3];
  *(_WORD *)v11 = (a2[6] * a1[2] + *a1 * v3 + v4 * a1[1]) >> 12;
  *(_WORD *)&v11[2] = (a1[1] * a2[4] + a1[2] * a2[7] + *a1 * a2[1]) >> 12;
  v5 = a1[4];
  *(_WORD *)&v11[4] = (a1[1] * a2[5] + *a1 * a2[2] + a1[2] * a2[8]) >> 12;
  v12 = a1[3];
  v6 = a1[5];
  *(_WORD *)&v11[6] = (result[6] * v6 + v4 * v5 + v3 * v12) >> 12;
  *(_WORD *)&v11[8] = (result[4] * v5 + result[1] * v12 + result[7] * v6) >> 12;
  v7 = result[2] * v12 + result[5] * v5 + result[8] * v6;
  v8 = a1[7];
  *(_WORD *)&v11[10] = v7 >> 12;
  v9 = a1[8];
  v10 = a1[6];
  *(_WORD *)&v11[12] = (result[6] * v9 + result[3] * v8 + *result * v10) >> 12;
  *(_WORD *)&v11[16] = (result[8] * v9 + result[5] * v8 + result[2] * v10) >> 12;
  *(_WORD *)&v11[14] = (result[1] * v10 + result[7] * v9 + result[4] * v8) >> 12;
  qmemcpy(result, v11, 20);
  return result;
}

// 0x408660  MulMatrix2_0
// IDA symbol: sub_408660
// Documented as port/gte in doc/functions.md.
int __cdecl MulMatrix2_0(__int16 *a1, int a2)
{
  int v2; // edx
  int v3; // eax
  _DWORD v5[8]; // [esp+Ch] [ebp-20h] BYREF

  MulMatrix0(a1, (__int16 *)a2, v5);
  v2 = *(_DWORD *)(a2 + 20);
  v3 = *(_DWORD *)(a2 + 24);
  v5[7] = *(_DWORD *)(a2 + 28);
  v5[5] = v2;
  v5[6] = v3;
  qmemcpy((void *)a2, v5, 32);
  return a2;
}

// 0x4086b0  CompMatrixLV
// IDA symbol: sub_4086B0
// Documented as sdk/gte in doc/functions.md.
int __cdecl CompMatrixLV(__int16 *a1, __int16 *a2, int a3)
{
  *(_WORD *)a3 = (*a2 * *a1 + a1[1] * a2[3] + a2[6] * a1[2]) >> 12;
  *(_WORD *)(a3 + 2) = (a2[4] * a1[1] + a1[2] * a2[7] + a2[1] * *a1) >> 12;
  *(_WORD *)(a3 + 4) = (a1[2] * a2[8] + a1[1] * a2[5] + a2[2] * *a1) >> 12;
  *(_WORD *)(a3 + 6) = (a2[6] * a1[5] + a2[3] * a1[4] + a1[3] * *a2) >> 12;
  *(_WORD *)(a3 + 8) = (a2[4] * a1[4] + a2[7] * a1[5] + a2[1] * a1[3]) >> 12;
  *(_WORD *)(a3 + 10) = (a2[2] * a1[3] + a2[5] * a1[4] + a2[8] * a1[5]) >> 12;
  *(_WORD *)(a3 + 12) = (a2[3] * a1[7] + a2[6] * a1[8] + a1[6] * *a2) >> 12;
  *(_WORD *)(a3 + 14) = (a2[7] * a1[8] + a2[1] * a1[6] + a2[4] * a1[7]) >> 12;
  *(_WORD *)(a3 + 16) = (a2[2] * a1[6] + a2[8] * a1[8] + a2[5] * a1[7]) >> 12;
  *(_DWORD *)(a3 + 20) = *((_DWORD *)a1 + 5)
                       + ((a1[1] * *((_DWORD *)a2 + 6) + a1[2] * *((_DWORD *)a2 + 7) + *((_DWORD *)a2 + 5) * *a1) >> 12);
  *(_DWORD *)(a3 + 24) = *((_DWORD *)a1 + 6)
                       + ((a1[4] * *((_DWORD *)a2 + 6) + a1[3] * *((_DWORD *)a2 + 5) + a1[5] * *((_DWORD *)a2 + 7)) >> 12);
  *(_DWORD *)(a3 + 28) = *((_DWORD *)a1 + 7)
                       + ((a1[7] * *((_DWORD *)a2 + 6) + a1[8] * *((_DWORD *)a2 + 7) + a1[6] * *((_DWORD *)a2 + 5)) >> 12);
  return a3;
}

// 0x4088d0  CompMatrix2LV
// IDA symbol: sub_4088D0
// Documented as port/gte in doc/functions.md.
__int16 *__cdecl CompMatrix2LV(__int16 *a1, __int16 *a2)
{
  _BYTE v3[32]; // [esp+Ch] [ebp-20h] BYREF

  CompMatrixLV(a1, a2, (int)v3);
  qmemcpy(a2, v3, 32);
  return a2;
}

// 0x408910  sub_408910
void __cdecl sub_408910(const void *a1)
{
  qmemcpy(&word_4E5E60, a1, 0x20u);
}

// 0x408930  sub_408930
int __cdecl sub_408930(int a1)
{
  int v1; // ecx
  int v2; // edi
  __int64 v3; // rax
  __int16 v5[10]; // [esp+Ch] [ebp-20h] BYREF
  int v6; // [esp+20h] [ebp-Ch]
  int v7; // [esp+24h] [ebp-8h]
  int v8; // [esp+28h] [ebp-4h]

  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  v5[8] = 4096;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v5[0] = word_4EFB54;
  v5[4] = word_4EFB56;
  RotMatrixX(2048, v5);
  MulMatrix0(v5, (__int16 *)a1, &word_4E5E60);
  dword_4E5E74 = *(_DWORD *)(a1 + 20);
  dword_4E5E78 = *(_DWORD *)(a1 + 24);
  v1 = dword_4E5E78 * HIWORD(dword_4EFB4C);
  v2 = *(_DWORD *)(a1 + 28);
  v3 = 2004318071LL * v1;
  *(float *)&dword_4EFB6C = (float)(dword_4E5E74 * (unsigned __int16)dword_4EFB4C / 512);
  dword_4E5E78 = 0;
  dword_4E5E74 = 0;
  byte_4EFB78 = 1;
  dword_4E5E7C = -v2;
  *(float *)&dword_4EFB70 = (float)(int)(((unsigned int)(HIDWORD(v3) - v1) >> 31) + ((HIDWORD(v3) - v1) >> 7));
  return v3;
}

// 0x408a40  IdentMatrix
// IDA symbol: sub_408A40
// Documented as port/gte in doc/functions.md.
_WORD *__cdecl IdentMatrix(_WORD *a1)
{
  *a1 = 4096;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 4096;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 4096;
  return a1;
}

// 0x408a70  PadInfoMode
// IDA symbol: sub_408A70
// Shared implementation, also known as: PadSetActAlign, PadSetMainMode
// Documented as sdk/pad in doc/functions.md.
int PadInfoMode()
{
  return 0;
}

// 0x408a80  gte_ApplyMatrix
// IDA symbol: sub_408A80
// Documented as sdk/gte in doc/functions.md.
int __cdecl gte_ApplyMatrix(__int16 *a1, __int16 *a2, int *a3)
{
  int v3; // esi
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int result; // eax

  v3 = *a2 * *a1;
  *a3 = v3;
  v4 = a2[1] * a1[1] + v3;
  *a3 = v4;
  *a3 = (v4 + a2[2] * a1[2]) >> 12;
  v5 = *a2 * a1[3];
  a3[1] = v5;
  v6 = a2[1] * a1[4] + v5;
  a3[1] = v6;
  a3[1] = (v6 + a2[2] * a1[5]) >> 12;
  v7 = *a2 * a1[6];
  a3[2] = v7;
  v8 = a2[1] * a1[7] + v7;
  a3[2] = v8;
  result = (v8 + a2[2] * a1[8]) >> 12;
  a3[2] = result;
  return result;
}

// 0x408b20  gte_ApplyMatrixSV
// IDA symbol: sub_408B20
// Documented as sdk/gte in doc/functions.md.
_DWORD *__cdecl gte_ApplyMatrixSV(__int16 *a1, __int16 *a2, _DWORD *a3)
{
  int v3; // ecx
  int v4; // edx
  int v5; // esi
  int v7; // [esp+Ch] [ebp-8h]
  int v8; // [esp+10h] [ebp-4h]

  v3 = a2[2];
  v4 = a2[1];
  v5 = *a2;
  LOWORD(v7) = (v3 * a1[2] + v4 * a1[1] + v5 * *a1) >> 12;
  HIWORD(v7) = (v3 * a1[5] + v5 * a1[3] + v4 * a1[4]) >> 12;
  LOWORD(v8) = (v5 * a1[6] + v4 * a1[7] + v3 * a1[8]) >> 12;
  *a3 = v7;
  a3[1] = v8;
  return a3;
}

// 0x408bc0  Square0
// IDA symbol: sub_408BC0
// Documented as sdk/gte in doc/functions.md.
int __cdecl Square0(_DWORD *a1, _DWORD *a2)
{
  int result; // eax

  *a2 = *a1 * *a1;
  a2[1] = a1[1] * a1[1];
  result = a1[2];
  a2[2] = result * result;
  return result;
}
