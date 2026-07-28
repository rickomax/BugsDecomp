// Module `track`.
//
// Reconstructed from Bugs.exe (PC v1.0) by tools/recon.py.
// Generated file -- do not edit by hand; see recon/README.md.
//
// Address range: 0x401000 - 0x401e10 (12 functions).

#include "bugs.h"


// 0x401000  InitTrack
// IDA symbol: sub_401000
// Documented as misc/track in doc/functions.md.
int __cdecl InitTrack(_DWORD *a1, int *a2, int a3, int a4, unsigned int *a5, int a6)
{
  int v7; // ebx
  BOOL v8; // eax
  int v9; // edx
  BOOL v10; // eax
  unsigned int *v11; // eax
  unsigned int v12; // edx
  int v13; // ecx
  int v14; // eax
  __int16 v16; // ax
  unsigned int *v17; // ebx
  int v18; // [esp+10h] [ebp-1Ch]
  int v19; // [esp+18h] [ebp-14h] BYREF
  int v20; // [esp+1Ch] [ebp-10h]
  int v21; // [esp+20h] [ebp-Ch]
  int v22; // [esp+24h] [ebp-8h]
  int v23; // [esp+28h] [ebp-4h]
  float v24; // [esp+30h] [ebp+4h]

  if ( a1[27] != 0 )
    return 2;
  v7 = a4;
  v8 = *(_WORD *)a4 == 1;
  if ( *(_WORD *)a4 == 1 )
    v8 = *(_WORD *)(a4 + 2) == *(_WORD *)(a3 + 2);
  if ( !v8 )
    return 4;
  if ( *(_WORD *)a3 == 1 )
    v8 = *(_WORD *)(a4 + 14) == *(_WORD *)(a3 + 14);
  if ( !v8 )
    return 4;
  v9 = *(_DWORD *)(a3 + 4);
  v10 = *(_DWORD *)(a4 + 4) == v9;
  if ( *(_DWORD *)(a4 + 4) != v9 )
    return 4;
  if ( *(_WORD *)a3 == 2 )
    v10 = *(_WORD *)(a3 + 14) == 4 && *(_WORD *)(a4 + 14) == 16;
  if ( !v10
    || *(unsigned __int16 *)(a3 + 12) != *(unsigned __int16 *)(a3 + 2) * *(unsigned __int16 *)(a3 + 14) / 8
    || *(unsigned __int16 *)(a4 + 12) != *(unsigned __int16 *)(a4 + 2) * *(unsigned __int16 *)(a4 + 14) / 8
    || *(_DWORD *)(a3 + 8) != *(unsigned __int16 *)(a3 + 12) * *(_DWORD *)(a3 + 4)
    || *(_DWORD *)(a4 + 8) != *(unsigned __int16 *)(a4 + 12) * *(_DWORD *)(a4 + 4) )
  {
    return 4;
  }
  v11 = a5;
  if ( a5[2] + a5[1] >= *a5 )
    return 5;
  qmemcpy(a1, unk_45C000, 124);
  v12 = *v11;
  v18 = *(_DWORD *)(v7 + 8);
  v19 = 20;
  v20 = 0;
  v22 = 0;
  v23 = 0;
  v21 = (__int64)((double)v12 * (double)v18 * 0.001);
  v13 = *a2;
  v23 = v7;
  v20 = 65760;
  a4 = 0;
  if ( (*(int (__stdcall **)(int *, int *, int *, _DWORD))(v13 + 12))(a2, &v19, &a4, 0) != 0 )
    v14 = 0;
  else
    v14 = a4;
  a1[27] = v14;
  if ( v14 == 0 )
    return 3;
  v24 = (double)*(unsigned int *)(v7 + 8) * 0.001;
  if ( a6 != 0 )
  {
    a1[8] = a6;
    a1[22] = 0;
  }
  else
  {
    a1[8] = malloc(/*Size*/ (__int64)((double)a5[1] * v24 - -0.5));
    a1[22] = 1;
  }
  *a1 = *(_DWORD *)a3;
  a1[1] = *(_DWORD *)(a3 + 4);
  a1[2] = *(_DWORD *)(a3 + 8);
  a1[3] = *(_DWORD *)(a3 + 12);
  *((_WORD *)a1 + 8) = *(_WORD *)(a3 + 16);
  a1[9] = *(_DWORD *)v7;
  a1[10] = *(_DWORD *)(v7 + 4);
  a1[11] = *(_DWORD *)(v7 + 8);
  a1[12] = *(_DWORD *)(v7 + 12);
  v16 = *(_WORD *)(v7 + 16);
  v17 = a5;
  *((_WORD *)a1 + 26) = v16;
  a1[23] = (__int64)((double)*v17 * v24 - -0.5);
  a1[24] = (__int64)((double)v17[1] * v24 - -0.5);
  a1[25] = (__int64)((double)v17[2] * v24 - -0.5);
  a1[26] = (__int64)((double)v17[3] * v24 - -0.5);
  return 0;
}

// 0x401330  FiniTrack
// IDA symbol: sub_401330
// Documented as misc/track in doc/functions.md.
void __cdecl FiniTrack(int a1)
{
  int v1; // eax

  if ( a1 != 0 )
  {
    v1 = *(_DWORD *)(a1 + 108);
    if ( v1 != 0 )
    {
      if ( *(_DWORD *)(a1 + 20) != 0 )
      {
        if ( *(_DWORD *)(a1 + 116) != 0 )
        {
          (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v1 + 72))(*(_DWORD *)(a1 + 108));
          *(_DWORD *)(a1 + 116) = 0;
        }
        (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 108) + 52))(*(_DWORD *)(a1 + 108), 0);
        *(_DWORD *)(a1 + 20) = 0;
        *(_DWORD *)(a1 + 24) = 0;
        *(_DWORD *)(a1 + 28) = 0;
        *(_DWORD *)(a1 + 56) = 0;
        *(_DWORD *)(a1 + 60) = 0;
        *(_DWORD *)(a1 + 64) = 0;
        *(_DWORD *)(a1 + 68) = 0;
        *(_DWORD *)(a1 + 72) = 0;
        *(_DWORD *)(a1 + 76) = 0;
        *(_DWORD *)(a1 + 80) = 0;
        *(_DWORD *)(a1 + 84) = 0;
        *(_DWORD *)(a1 + 112) = 0;
        *(_DWORD *)(a1 + 120) = 0;
      }
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 108) + 8))(*(_DWORD *)(a1 + 108));
      if ( *(_DWORD *)(a1 + 88) != 0 )
        free(/*Block*/ *(void **)(a1 + 32));
      qmemcpy((void *)a1, unk_45C000, 124);
    }
  }
}

// 0x4013c0  SetTrackSource
// IDA symbol: sub_4013C0
// Documented as misc/track in doc/functions.md.
int __cdecl SetTrackSource(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // eax
  double v6; // st7
  int v7; // [esp+Ch] [ebp-8h]

  v4 = a1[27];
  if ( v4 == 0 )
    return 1;
  if ( a1[5] != 0 )
  {
    if ( a1[29] != 0 )
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v4 + 72))(a1[27]);
      a1[29] = 0;
    }
    (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)a1[27] + 52))(a1[27], 0);
    a1[5] = 0;
    a1[6] = 0;
    a1[7] = 0;
    a1[14] = 0;
    a1[15] = 0;
    a1[16] = 0;
    a1[17] = 0;
    a1[18] = 0;
    a1[19] = 0;
    a1[20] = 0;
    a1[21] = 0;
    a1[28] = 0;
    a1[30] = 0;
  }
  a1[6] = a3;
  v6 = (double)(unsigned int)a1[11];
  a1[5] = a2;
  v7 = a1[2];
  a1[21] = a4;
  a1[18] = (__int64)(v6 * (double)a2 / (double)v7);
  (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)a1[27] + 52))(a1[27], 0);
  RefillTrackBuffer(a1, -1, -1);
  return 0;
}

// 0x401490  ResetTrack
// IDA symbol: sub_401490
// Documented as misc/track in doc/functions.md.
int __cdecl ResetTrack(_DWORD *a1)
{
  int result; // eax

  result = a1[27];
  if ( result != 0 )
  {
    if ( a1[29] != 0 )
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)result + 72))(a1[27]);
      a1[29] = 0;
    }
    (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)a1[27] + 52))(a1[27], 0);
    a1[5] = 0;
    a1[6] = 0;
    a1[7] = 0;
    a1[14] = 0;
    a1[15] = 0;
    a1[16] = 0;
    a1[17] = 0;
    a1[18] = 0;
    a1[19] = 0;
    a1[20] = 0;
    a1[21] = 0;
    a1[28] = 0;
    a1[30] = 0;
    return 0;
  }
  return result;
}

// 0x4014f0  RefillTrackBuffer
// IDA symbol: sub_4014F0
// Documented as misc/track in doc/functions.md.
int __cdecl RefillTrackBuffer(int a1, unsigned int a2, int a3)
{
  int v3; // esi
  int result; // eax
  BOOL v5; // edi
  int v6; // ebp
  unsigned int v7; // edi
  int v8; // edx
  int v9; // ebx
  int v10; // ebp
  int v11; // edi
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // edi
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // edi
  unsigned int v21; // eax
  unsigned int v22; // edx
  char *v23; // edi
  char v24; // bp
  int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  char *v28; // edi
  char v29; // dl
  int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // ebx
  int v33; // [esp+84h] [ebp-18h] BYREF
  char v34[4]; // [esp+88h] [ebp-14h] BYREF
  unsigned int v35; // [esp+8Ch] [ebp-10h] BYREF
  unsigned int v36; // [esp+90h] [ebp-Ch] BYREF
  char *v37; // [esp+94h] [ebp-8h] BYREF
  char *v38; // [esp+98h] [ebp-4h] BYREF

  v3 = a1;
  result = *(_DWORD *)(a1 + 108);
  if ( result != 0 )
  {
    (*(void (__stdcall **)(int, int *, char *))(*(_DWORD *)result + 16))(result, &a1, v34);
    v5 = *(_DWORD *)(v3 + 84) == 0
      && (unsigned int)(a1 + *(_DWORD *)(v3 + 68) * *(_DWORD *)(v3 + 92)) >= *(_DWORD *)(v3 + 72);
    if ( v5 && *(_DWORD *)(v3 + 112) == 0 && *(_DWORD *)(v3 + 116) != 0 )
    {
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v3 + 108) + 72))(*(_DWORD *)(v3 + 108));
      *(_DWORD *)(v3 + 116) = 0;
    }
    *(_DWORD *)(v3 + 112) = v5;
    if ( v5 )
      return 0;
    v6 = a3;
    if ( a3 == -1 )
      a3 = *(_DWORD *)(v3 + 100);
    else
      a3 = *(unsigned int *)(v3 + 44) * (__int64)a3 / 1000;
    v7 = a2;
    if ( a2 == -1 )
      v7 = UpdateTrack(v3, &v33);
    if ( *(_DWORD *)(v3 + 84) != 0 )
    {
      v32 = *(_DWORD *)(v3 + 20) - *(_DWORD *)(v3 + 28);
      if ( v7 > v32 )
      {
        RefillTrackBuffer(v3, v32, 0);
        *(_DWORD *)(v3 + 76) = 0;
        *(_DWORD *)(v3 + 80) = 0;
        _lseek(/*FileHandle*/ *(_DWORD *)(v3 + 24), /*Offset*/ -*(_DWORD *)(v3 + 20), /*Origin*/ 1);
        *(_DWORD *)(v3 + 28) = 0;
        return RefillTrackBuffer(v3, v7 - v32, v6);
      }
    }
    else
    {
      v8 = *(_DWORD *)(v3 + 28);
      if ( v7 >= *(_DWORD *)(v3 + 20) - v8 )
        v7 = *(_DWORD *)(v3 + 20) - v8;
    }
    v9 = *(unsigned __int16 *)(v3 + 12) * v7;
    v10 = *(unsigned __int16 *)(v3 + 48) * v7;
    if ( v7 != 0 )
    {
      v11 = 0;
      a1 = 0;
      do
      {
        if ( v11 != 0 )
          break;
        if ( (*(int (__stdcall **)(_DWORD, _DWORD, int, char **, unsigned int *, char **, unsigned int *, _DWORD))(**(_DWORD **)(v3 + 108) + 44))(
               *(_DWORD *)(v3 + 108),
               *(_DWORD *)(v3 + 56),
               v10,
               &v37,
               &v35,
               &v38,
               &v36,
               0) != 0
          || v36 + v35 != v10 )
        {
          if ( *(_DWORD *)(v3 + 116) != 0 )
          {
            (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v3 + 108) + 72))(*(_DWORD *)(v3 + 108));
            *(_DWORD *)(v3 + 116) = 0;
          }
          v15 = *(_DWORD *)(v3 + 108);
          v16 = *(_DWORD *)(v3 + 56);
          v33 = 1;
          ++a1;
          (*(void (__stdcall **)(int, int))(*(_DWORD *)v15 + 52))(v15, v16);
        }
        else
        {
          v12 = _read(/*FileHandle*/ *(_DWORD *)(v3 + 24), /*DstBuf*/ *(void **)(v3 + 32), /*MaxCharCount*/ v9);
          if ( v12 != v9 )
            goto LABEL_34;
          v13 = *(_DWORD *)(v3 + 20);
          v14 = v12 + *(_DWORD *)(v3 + 28);
          *(_DWORD *)(v3 + 28) = v14;
          if ( v14 >= v13 && *(_DWORD *)(v3 + 84) == 0 )
            *(_DWORD *)(v3 + 120) = 1;
          v11 = 1;
        }
      }
      while ( a1 < 2 );
      if ( a1 == 2 )
      {
LABEL_34:
        (*(void (__stdcall **)(_DWORD, char *, unsigned int, char *, unsigned int))(**(_DWORD **)(v3 + 108) + 76))(
          *(_DWORD *)(v3 + 108),
          v37,
          v35,
          v38,
          v36);
        return 0;
      }
      v17 = v35 / *(unsigned __int16 *)(v3 + 48);
      ConvertTrackAudio(v3, *(_DWORD *)(v3 + 32), v37, v17);
      v18 = v36;
      if ( v36 != 0 )
      {
        v9 = *(_DWORD *)(v3 + 32);
        ConvertTrackAudio(
          v3,
          v9 + *(unsigned __int16 *)(v3 + 12) * v17,
          v38,
          v36 / *(unsigned __int16 *)(v3 + 48));
        v18 = v36;
      }
      (*(void (__stdcall **)(_DWORD, char *, unsigned int, char *, unsigned int))(**(_DWORD **)(v3 + 108) + 76))(
        *(_DWORD *)(v3 + 108),
        v37,
        v35,
        v38,
        v18);
    }
    v19 = *(_DWORD *)(v3 + 60);
    v20 = v10 + *(_DWORD *)(v3 + 56);
    *(_DWORD *)(v3 + 56) = v20;
    if ( v20 <= v19 )
    {
      v21 = v19 - v20;
    }
    else
    {
      v21 = 0;
      *(_DWORD *)(v3 + 60) = v20 % *(_DWORD *)(v3 + 92);
    }
    v22 = *(_DWORD *)(v3 + 92);
    if ( v20 >= v22 )
      *(_DWORD *)(v3 + 56) = v20 - v22;
    if ( a3 != v21 )
    {
      if ( (*(int (__stdcall **)(_DWORD, _DWORD, unsigned int, char **, unsigned int *, char **, unsigned int *, _DWORD))(**(_DWORD **)(v3 + 108) + 44))(
             *(_DWORD *)(v3 + 108),
             *(_DWORD *)(v3 + 60),
             a3 - v21,
             &v37,
             &v35,
             &v38,
             &v36,
             0) != 0 )
      {
        v27 = v36;
      }
      else
      {
        v23 = v37;
        v24 = v35;
        LOBYTE(v9) = *(_WORD *)(v3 + 50) != 8 ? 0 : 0x80;
        BYTE1(v9) = v9;
        v25 = v9 << 16;
        LOWORD(v25) = v9;
        v26 = v35 >> 2;
        memset32(v37, v25, v35 >> 2);
        memset(&v23[4 * v26], v9, v24 & 3);
        v27 = v36;
        if ( v36 != 0 )
        {
          v28 = v38;
          v29 = v36;
          v30 = v9 << 16;
          LOWORD(v30) = v9;
          v31 = v36 >> 2;
          memset32(v38, v30, v36 >> 2);
          memset(&v28[4 * v31], v9, v29 & 3);
          v27 = v36;
        }
        *(_DWORD *)(v3 + 60) = (*(_DWORD *)(v3 + 60) + v27 + v35) % *(_DWORD *)(v3 + 92);
      }
      (*(void (__stdcall **)(_DWORD, char *, unsigned int, char *, unsigned int))(**(_DWORD **)(v3 + 108) + 76))(
        *(_DWORD *)(v3 + 108),
        v37,
        v35,
        v38,
        v27);
    }
    if ( v33 != 0 && *(_DWORD *)(v3 + 112) == 0 && *(_DWORD *)(v3 + 116) == 0 && *(_DWORD *)(v3 + 20) != 0 )
    {
      (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(v3 + 108) + 48))(
        *(_DWORD *)(v3 + 108),
        0,
        0,
        1);
      *(_DWORD *)(v3 + 116) = 1;
    }
    return 1;
  }
  return result;
}

// 0x4018d0  PlayTrack
// IDA symbol: sub_4018D0
// Documented as misc/track in doc/functions.md.
int __cdecl PlayTrack(int a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 116);
  if ( result == 0 )
  {
    result = *(_DWORD *)(a1 + 112);
    if ( result == 0 )
    {
      result = *(_DWORD *)(a1 + 20);
      if ( result != 0 )
      {
        result = (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(a1 + 108) + 48))(
                   *(_DWORD *)(a1 + 108),
                   0,
                   0,
                   1);
        *(_DWORD *)(a1 + 116) = 1;
      }
    }
  }
  return result;
}

// 0x401910  StopTrack
// IDA symbol: sub_401910
// Documented as misc/track in doc/functions.md.
int __cdecl StopTrack(int a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 116);
  if ( result != 0 )
  {
    result = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(a1 + 108) + 72))(*(_DWORD *)(a1 + 108));
    *(_DWORD *)(a1 + 116) = 0;
  }
  return result;
}

// 0x401930  CheckTrackDone
// IDA symbol: sub_401930
// Documented as misc/track in doc/functions.md.
BOOL __cdecl CheckTrackDone(int a1)
{
  int v1; // esi
  BOOL v2; // edi
  _BYTE v4[4]; // [esp+8h] [ebp-4h] BYREF

  v1 = a1;
  (*(void (__stdcall **)(_DWORD, int *, _BYTE *))(**(_DWORD **)(a1 + 108) + 16))(
    *(_DWORD *)(a1 + 108),
    &a1,
    v4);
  v2 = *(_DWORD *)(v1 + 84) == 0
    && (unsigned int)(a1 + *(_DWORD *)(v1 + 68) * *(_DWORD *)(v1 + 92)) >= *(_DWORD *)(v1 + 72);
  if ( v2 && *(_DWORD *)(v1 + 112) == 0 && *(_DWORD *)(v1 + 116) != 0 )
  {
    (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v1 + 108) + 72))(*(_DWORD *)(v1 + 108));
    *(_DWORD *)(v1 + 116) = 0;
  }
  *(_DWORD *)(v1 + 112) = v2;
  return v2;
}

// 0x4019a0  UpdateTrack
// IDA symbol: sub_4019A0
// Documented as misc/track in doc/functions.md.
unsigned int __cdecl UpdateTrack(unsigned int a1, _DWORD *a2)
{
  unsigned int v2; // esi
  unsigned int v3; // edi
  unsigned int v4; // eax
  _DWORD *v6; // ebx
  unsigned int v7; // ebp
  unsigned int v8; // ecx
  unsigned int v9; // edx
  BOOL v10; // edi
  unsigned int v11; // eax
  int v12; // [esp+1Ch] [ebp-8h] BYREF
  int v13; // [esp+20h] [ebp-4h] BYREF

  v2 = a1;
  (*(void (__stdcall **)(_DWORD, unsigned int *, int *))(**(_DWORD **)(a1 + 108) + 16))(
    *(_DWORD *)(a1 + 108),
    &a1,
    &v12);
  v3 = a1;
  v4 = a1;
  if ( a1 < *(_DWORD *)(v2 + 64) )
  {
    v4 = a1 + *(_DWORD *)(v2 + 92);
    ++*(_DWORD *)(v2 + 68);
  }
  if ( *(_DWORD *)(v2 + 120) != 0 )
    return 0;
  v6 = a2;
  v7 = 0;
  *a2 = 0;
  v8 = *(_DWORD *)(v2 + 60);
  v9 = *(_DWORD *)(v2 + 56);
  if ( v8 < v9 )
    v8 += *(_DWORD *)(v2 + 92);
  if ( v4 < v9 || v4 > v8 )
  {
    v11 = v4 - *(_DWORD *)(v2 + 64);
    if ( v11 < *(_DWORD *)(v2 + 104) )
      v11 = 0;
    v7 = v11 / *(unsigned __int16 *)(v2 + 48);
  }
  else
  {
    v10 = false;
    if ( *(_DWORD *)(v2 + 116) != 0 )
    {
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v2 + 108) + 72))(*(_DWORD *)(v2 + 108));
      *(_DWORD *)(v2 + 116) = 0;
      *v6 = 1;
    }
    (*(void (__stdcall **)(_DWORD, _DWORD **, int *))(**(_DWORD **)(v2 + 108) + 16))(
      *(_DWORD *)(v2 + 108),
      &a2,
      &v13);
    if ( *(_DWORD *)(v2 + 84) == 0 )
      v10 = (unsigned int)a2 + *(_DWORD *)(v2 + 92) * *(_DWORD *)(v2 + 68) >= *(_DWORD *)(v2 + 72);
    if ( v10 && *(_DWORD *)(v2 + 112) == 0 && *(_DWORD *)(v2 + 116) != 0 )
    {
      (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v2 + 108) + 72))(*(_DWORD *)(v2 + 108));
      *(_DWORD *)(v2 + 116) = 0;
    }
    *(_DWORD *)(v2 + 112) = v10;
    if ( v10 )
    {
      v3 = a1;
    }
    else
    {
      v7 = *(_DWORD *)(v2 + 96) / (unsigned int)*(unsigned __int16 *)(v2 + 48);
      (*(void (__stdcall **)(_DWORD, _DWORD))(**(_DWORD **)(v2 + 108) + 52))(
        *(_DWORD *)(v2 + 108),
        *(_DWORD *)(v2 + 56));
      v3 = a1;
      if ( a1 < *(_DWORD *)(v2 + 64) && a1 < *(_DWORD *)(v2 + 56) )
        --*(_DWORD *)(v2 + 68);
    }
  }
  if ( v7 != 0 )
    *(_DWORD *)(v2 + 64) = v3;
  return v7;
}

// 0x401af0  ConvertTrackAudio
// IDA symbol: sub_401AF0
// Documented as misc/track in doc/functions.md.
int __cdecl ConvertTrackAudio(int a1, const void *a2, void *a3, int a4)
{
  int result; // eax
  __int16 v5; // si
  __int16 v6; // di
  __int16 v7; // cx

  result = a1;
  v5 = *(_WORD *)(a1 + 14);
  v6 = *(_WORD *)(a1 + 50);
  if ( v5 == v6
    && *(_DWORD *)(a1 + 4) == *(_DWORD *)(a1 + 40)
    && *(_WORD *)(a1 + 2) == *(_WORD *)(a1 + 38)
    && *(_WORD *)a1 == *(_WORD *)(a1 + 36) )
  {
    qmemcpy(a3, a2, a4 * *(unsigned __int16 *)(a1 + 12));
  }
  else if ( *(_WORD *)a1 == 2 && *(_WORD *)(a1 + 36) == 1 )
  {
    v7 = *(_WORD *)(a1 + 2);
    if ( v7 == 2 && *(_WORD *)(a1 + 38) == 2 )
    {
      if ( *(_DWORD *)(a1 + 4) == *(_DWORD *)(a1 + 40) && v5 == 4 && v6 == 16 )
        return CvtStereoAdpcm(a1, a2, a3, a4);
    }
    else if ( v7 == 1 && *(_WORD *)(a1 + 38) == 2 && *(_DWORD *)(a1 + 4) == *(_DWORD *)(a1 + 40) && v5 == 4 && v6 == 16 )
    {
      return CvtMonoAdpcm(a1, a2, a3, a4);
    }
  }
  return result;
}

// 0x401be0  CvtStereoAdpcm
// IDA symbol: sub_401BE0
// Documented as misc/track in doc/functions.md.
__int16 *__cdecl CvtStereoAdpcm(__int16 *a1, char *a2, _WORD *a3, int a4)
{
  __int16 *result; // eax
  int v6; // ecx
  char v7; // si
  bool v8; // sf
  int v9; // ecx
  int v10; // ebx
  int v11; // eax
  int v12; // esi
  int v13; // ebx
  int v14; // eax
  int v15; // [esp+10h] [ebp-1Ch]
  unsigned int v16; // [esp+14h] [ebp-18h]
  unsigned int v17; // [esp+18h] [ebp-14h]
  _WORD *v19; // [esp+20h] [ebp-Ch]
  int v20; // [esp+24h] [ebp-8h]
  int v21; // [esp+28h] [ebp-4h]
  int v22; // [esp+38h] [ebp+Ch]
  int v23; // [esp+3Ch] [ebp+10h]
  int v24; // [esp+40h] [ebp+14h]
  int v25; // [esp+40h] [ebp+14h]

  result = a1;
  if ( a1 != NULL )
  {
    v23 = a1[38];
    v21 = a1[41];
    v22 = a1[39];
    v6 = a1[40];
  }
  else
  {
    v22 = 0;
    v23 = 0;
    v21 = 0;
    v6 = 0;
  }
  v17 = dword_45C0C0[v6];
  v16 = dword_45C0C0[v21];
  if ( a4 != 0 )
  {
    v15 = a4;
    while ( 1 )
    {
      v7 = *a2;
      v8 = dword_45C080[*a2 & 0xF] + v6 < 0;
      v9 = dword_45C080[*a2 & 0xF] + v6;
      v20 = v9;
      if ( v8 )
      {
        v20 = 0;
        v9 = 0;
      }
      if ( v9 > 88 )
        v20 = 88;
      v10 = __ROR4__(v7 & 7, 3);
      v24 = (v17 >> 3)
          + (__CFSHL__(4 * v10, 1) ? v17 >> 2 : 0)
          + (__CFSHL__(2 * v10, 1) ? v17 >> 1 : 0)
          + (__CFSHL__(v10, 1) ? v17 : 0);
      v11 = (v7 & 8) != 0 ? v23 - v24 : v24 + v23;
      v23 = v11;
      if ( v11 <= 0x7FFF )
      {
        if ( v11 < -32768 )
          v23 = -32768;
      }
      else
      {
        v23 = 0x7FFF;
      }
      v12 = (int)(unsigned __int8)*a2 >> 4;
      v17 = dword_45C0C0[v20];
      *a3 = v23;
      v19 = a3 + 1;
      v21 += dword_45C080[v12];
      if ( v21 < 0 )
        v21 = 0;
      if ( v21 > 88 )
        v21 = 88;
      v13 = __ROR4__(v12 & 7, 3);
      v25 = (v16 >> 3)
          + (__CFSHL__(4 * v13, 1) ? v16 >> 2 : 0)
          + (__CFSHL__(2 * v13, 1) ? v16 >> 1 : 0)
          + (__CFSHL__(v13, 1) ? v16 : 0);
      v14 = (v12 & 8) != 0 ? v22 - v25 : v25 + v22;
      v22 = v14;
      if ( v14 <= 0x7FFF )
      {
        if ( v14 < -32768 )
          v22 = -32768;
      }
      else
      {
        v22 = 0x7FFF;
      }
      v16 = dword_45C0C0[v21];
      *v19 = v22;
      a3 = v19 + 1;
      if ( --v15 == 0 )
        break;
      ++a2;
      v6 = v20;
    }
    result = a1;
    LOWORD(v6) = v20;
  }
  if ( result != NULL )
  {
    result[40] = v6;
    result[38] = v23;
    result[41] = v21;
    result[39] = v22;
  }
  return result;
}

// 0x401e10  CvtMonoAdpcm
// IDA symbol: sub_401E10
// Documented as misc/track in doc/functions.md.
unsigned __int8 *__cdecl CvtMonoAdpcm(int a1, unsigned __int8 *a2, _WORD *a3, int a4)
{
  int v4; // ecx
  unsigned __int8 *result; // eax
  int v6; // esi
  int v7; // edi
  int v8; // esi
  int v9; // ebx
  unsigned int v10; // ecx
  int v11; // edi
  int v12; // ebx
  int v13; // edx
  bool v14; // zf
  unsigned __int8 *v15; // [esp+10h] [ebp-10h]
  int v16; // [esp+14h] [ebp-Ch]
  _WORD *v18; // [esp+18h] [ebp-8h]
  unsigned int v19; // [esp+1Ch] [ebp-4h]
  int v20; // [esp+2Ch] [ebp+Ch]
  int v21; // [esp+2Ch] [ebp+Ch]
  int v22; // [esp+30h] [ebp+10h]
  int v23; // [esp+30h] [ebp+10h]

  v4 = a1;
  result = a2;
  if ( a1 != 0 )
  {
    v6 = *(__int16 *)(a1 + 78);
    v22 = *(__int16 *)(a1 + 76);
  }
  else
  {
    v22 = 0;
    v6 = 0;
  }
  v19 = dword_45C0C0[v6];
  if ( a4 != 0 )
  {
    v16 = a4;
    while ( 1 )
    {
      v7 = *result;
      v15 = result + 1;
      v8 = dword_45C080[v7 & 0xF] + v6;
      if ( v8 < 0 )
        v8 = 0;
      if ( v8 > 88 )
        v8 = 88;
      v9 = __ROR4__(v7 & 7, 3);
      v20 = (v19 >> 3)
          + (__CFSHL__(4 * v9, 1) ? v19 >> 2 : 0)
          + (__CFSHL__(2 * v9, 1) ? v19 >> 1 : 0)
          + (__CFSHL__(v9, 1) ? v19 : 0);
      v23 = (v7 & 8) != 0 ? v22 - v20 : v20 + v22;
      if ( v23 <= 0x7FFF )
      {
        if ( v23 < -32768 )
          v23 = -32768;
      }
      else
      {
        v23 = 0x7FFF;
      }
      v10 = dword_45C0C0[v8];
      *a3 = v23;
      v11 = (v7 >> 4) & 0xF;
      v18 = a3 + 1;
      v6 = dword_45C080[v11] + v8;
      if ( v6 < 0 )
        v6 = 0;
      if ( v6 > 88 )
        v6 = 88;
      v12 = __ROR4__(v11 & 7, 3);
      v21 = (v10 >> 3)
          + (__CFSHL__(4 * v12, 1) ? v10 >> 2 : 0)
          + (__CFSHL__(2 * v12, 1) ? v10 >> 1 : 0)
          + (__CFSHL__(v12, 1) ? v10 : 0);
      v22 = (v11 & 8) != 0 ? v23 - v21 : v21 + v23;
      if ( v22 <= 0x7FFF )
      {
        if ( v22 < -32768 )
          v22 = -32768;
      }
      else
      {
        v22 = 0x7FFF;
      }
      v13 = dword_45C0C0[v6];
      *v18 = v22;
      a3 = v18 + 1;
      result = (unsigned __int8 *)(v16 - 1);
      v14 = v16 == 1;
      v19 = v13;
      --v16;
      if ( v14 )
        break;
      result = v15;
    }
    v4 = a1;
  }
  if ( v4 != 0 )
  {
    *(_WORD *)(v4 + 78) = v6;
    *(_WORD *)(v4 + 76) = v22;
  }
  return result;
}
