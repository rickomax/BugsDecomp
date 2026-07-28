// Module `gs`.
//
// Reconstructed from Bugs.exe (PC v1.0) by tools/recon.py.
// Generated file -- do not edit by hand; see recon/README.md.
//
// Address range: 0x40cd80 - 0x40cf10 (5 functions).

#include "bugs.h"


// 0x40cd80  GsSetProjection
// IDA symbol: sub_40CD80
// Documented as sdk/gs in doc/functions.md.
char __cdecl GsSetProjection(int a1)
{
  char result; // al

  dword_4EFB30 = a1;
  flt_4EFB34 = (float)a1;
  result = dword_4AC094;
  flt_4EFB38 = (float)(a1 / -2);
  if ( (dword_4AC094 & 2) != 0 )
    return sub_413A20(a1);
  return result;
}

// 0x40cdc0  GsMapModelingData
// IDA symbol: sub_40CDC0
// Documented as sdk/gs in doc/functions.md.
int __cdecl GsMapModelingData(int a1)
{
  int result; // eax
  int v2; // ecx
  int v3; // edx
  int v4; // esi

  result = a1;
  v2 = a1 + 8;
  v3 = *(__int16 *)(a1 + 4);
  if ( v3 > 0 )
  {
    result = a1 + 24;
    do
    {
      v4 = *(_DWORD *)(result - 16);
      result += 28;
      *(_DWORD *)(result - 44) = v2 + v4;
      *(_DWORD *)(result - 36) += v2;
      --v3;
      *(_DWORD *)(result - 28) += v2;
    }
    while ( v3 != 0 );
  }
  return result;
}

// 0x40ce00  sub_40CE00
int __cdecl sub_40CE00(int a1, int a2)
{
  int result; // eax
  __int16 v3; // si

  result = a2;
  *(_DWORD *)a2 = *(_DWORD *)a1 & 7;
  if ( (*(_BYTE *)a1 & 8) != 0 )
  {
    v3 = *(_WORD *)(a1 + 4);
    *(_WORD *)(a2 + 16) = *(_WORD *)(a1 + 8);
    *(_WORD *)(a2 + 18) = *(_WORD *)(a1 + 10);
    *(_WORD *)(a2 + 20) = *(_WORD *)(a1 + 12);
    *(_WORD *)(a2 + 22) = *(_WORD *)(a1 + 14);
    *(_DWORD *)(a2 + 24) = a1 + 16;
  }
  else
  {
    v3 = 0;
  }
  *(_WORD *)(a2 + 4) = *(_WORD *)(a1 + v3 + 8);
  *(_WORD *)(a2 + 6) = *(_WORD *)(a1 + v3 + 10);
  *(_WORD *)(a2 + 8) = *(_WORD *)(a1 + v3 + 12);
  *(_WORD *)(a2 + 10) = *(_WORD *)(a1 + v3 + 14);
  *(_DWORD *)(a2 + 12) = a1 + v3 + 16;
  return result;
}

// 0x40ce90  GsInitCoordinate2
// IDA symbol: sub_40CE90
// Documented as sdk/gs in doc/functions.md.
int __cdecl GsInitCoordinate2(int a1, int a2)
{
  *(_DWORD *)(a2 + 72) = a1;
  *(_DWORD *)(a2 + 76) = 0;
  *(_DWORD *)a2 = 0;
  *(_WORD *)(a2 + 4) = 4096;
  *(_WORD *)(a2 + 6) = 0;
  *(_WORD *)(a2 + 8) = 0;
  *(_WORD *)(a2 + 10) = 0;
  *(_WORD *)(a2 + 12) = 4096;
  *(_WORD *)(a2 + 14) = 0;
  *(_WORD *)(a2 + 16) = 0;
  *(_WORD *)(a2 + 18) = 0;
  *(_WORD *)(a2 + 20) = 4096;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  *(_DWORD *)(a2 + 32) = 0;
  *(_WORD *)(a2 + 36) = 4096;
  *(_WORD *)(a2 + 38) = 0;
  *(_WORD *)(a2 + 40) = 0;
  *(_WORD *)(a2 + 42) = 0;
  *(_WORD *)(a2 + 44) = 4096;
  *(_WORD *)(a2 + 46) = 0;
  *(_WORD *)(a2 + 48) = 0;
  *(_WORD *)(a2 + 50) = 0;
  *(_WORD *)(a2 + 52) = 4096;
  *(_DWORD *)(a2 + 56) = 0;
  *(_DWORD *)(a2 + 60) = 0;
  *(_DWORD *)(a2 + 64) = 0;
  return a2;
}

// 0x40cf10  GsSetRefView2L
// IDA symbol: sub_40CF10
// Documented as sdk/gs in doc/functions.md.
int __cdecl GsSetRefView2L(_DWORD *a1)
{
  int v2; // ebp
  int v3; // esi
  int v4; // edx
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v12; // [esp+10h] [ebp-6Ch]
  int v13; // [esp+1Ch] [ebp-60h] BYREF
  int v14; // [esp+20h] [ebp-5Ch]
  int v15; // [esp+24h] [ebp-58h]
  int v16[4]; // [esp+2Ch] [ebp-50h] BYREF
  __int16 v17[10]; // [esp+3Ch] [ebp-40h] BYREF
  int v18; // [esp+50h] [ebp-2Ch]
  int v19; // [esp+54h] [ebp-28h]
  int v20; // [esp+58h] [ebp-24h]
  __int16 v21[10]; // [esp+5Ch] [ebp-20h] BYREF
  int v22; // [esp+70h] [ebp-Ch]
  int v23; // [esp+74h] [ebp-8h]
  int v24; // [esp+78h] [ebp-4h]
  int v25; // [esp+80h] [ebp+4h]

  v2 = a1[4];
  v3 = *a1 - a1[3];
  v4 = a1[1];
  v5 = a1[2] - a1[5];
  dword_4EFB20 = -*a1;
  v6 = -a1[1];
  v25 = v4 - v2;
  dword_4EFB24 = v6;
  dword_4EFB28 = -a1[2];
  word_4EFB00 = 4096;
  word_4EFB02 = 0;
  word_4EFB04 = 0;
  word_4EFB06 = 0;
  word_4EFB08 = 4096;
  word_4EFB0A = 0;
  word_4EFB0C = 0;
  word_4EFB0E = 0;
  word_4EFB10 = 4096;
  dword_4EFB14 = 0;
  dword_4EFB18 = 0;
  dword_4EFB1C = 0;
  v17[0] = 4096;
  v17[1] = 0;
  v17[2] = 0;
  v17[3] = 0;
  v17[4] = 4096;
  v17[5] = 0;
  v17[6] = 0;
  v17[7] = 0;
  v17[8] = 4096;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v13 = 4096;
  v14 = word_4EFB5C;
  v15 = 4096;
  ScaleMatrix(v17, &v13);
  v7 = ratan2(v3, v5);
  RotMatrixY(6144 - v7, &word_4EFB00);
  v12 = (__int64)sqrt((double)(v5 * v5 + v3 * v3));
  v8 = ratan2(v25, v12);
  RotMatrixX(-v8, &word_4EFB00);
  MulMatrix2_0(v17, (int)&word_4EFB00);
  qmemcpy(word_52FCE0, &word_4EFB00, 32);
  ApplyMatrixLV(word_52FCE0, &dword_4EFB20, v16);
  dword_52FCF4 = v16[0];
  dword_52FCF8 = v16[1];
  dword_52FCFC = v16[2];
  v13 = word_4EFB54;
  word_4EFAE0 = 4096;
  word_4EFAE2 = 0;
  word_4EFAE4 = 0;
  word_4EFAE6 = 0;
  word_4EFAE8 = 4096;
  word_4EFAEA = 0;
  word_4EFAEC = 0;
  word_4EFAEE = 0;
  word_4EFAF0 = 4096;
  dword_4EFAF4 = 0;
  dword_4EFAF8 = 0;
  dword_4EFAFC = 0;
  v21[0] = 4096;
  v21[1] = 0;
  v21[2] = 0;
  v21[3] = 0;
  v21[4] = 4096;
  v21[5] = 0;
  v21[6] = 0;
  v21[7] = 0;
  v21[8] = 4096;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v14 = word_4EFB56;
  v15 = 4096;
  ScaleMatrix(v21, &v13);
  v9 = ratan2(v3, v5);
  RotMatrixY(2048 - v9, &word_4EFAE0);
  v10 = ratan2(v25, v12);
  RotMatrixX(2048 - v10, &word_4EFAE0);
  MulMatrix2_0(v21, (int)&word_4EFAE0);
  return 1;
}
