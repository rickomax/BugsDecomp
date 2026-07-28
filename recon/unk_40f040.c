// Module `unk_40f040`.
//
// Reconstructed from Bugs.exe (PC v1.0) by tools/recon.py.
// Generated file -- do not edit by hand; see recon/README.md.
//
// Address range: 0x40f040 - 0x41a830 (70 functions).

#include "bugs.h"


// 0x40f040  sub_40F040
int __cdecl sub_40F040(int a1)
{
  float *v1; // edx
  float *v2; // ecx
  unsigned int v3; // esi
  double v4; // st2
  char v6; // c0
  double v7; // st7
  double v8; // st6
  double v9; // st7
  float v11; // [esp+Ch] [ebp-Ch]
  float v12; // [esp+10h] [ebp-8h]

  sub_40D580(flt_5F8500, flt_604100);
  v1 = *(float **)a1;
  v2 = (float *)((char *)&unk_734DE0 + 16 * dword_623654);
  dword_623688 = (int)v2;
  dword_7C6240 = (int)v2;
  v3 = 0;
  dword_623654 += *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 4) != 0 )
  {
    do
    {
      v4 = flt_6AC23C * v1[1] + flt_6AC240 * v1[2] + *v1 * flt_6AC238 + flt_6AC24C;
      v11 = flt_6AC224 * v1[1] + flt_6AC228 * v1[2] + *v1 * flt_6AC220 + flt_6AC244;
      v12 = flt_6AC230 * v1[1] + flt_6AC234 * v1[2] + *v1 * flt_6AC22C + flt_6AC248;
      v2[2] = v4;
      if ( v6 != 0 )
        v7 = (double)dword_4EFB30 / -v4;
      else
        v7 = (double)dword_4EFB30 / (v4 - -1.0);
      v8 = v7;
      v9 = v7 * v11;
      *((_DWORD *)v2 + 3) = 1;
      *v2 = v9;
      v2[1] = v8 * v12;
      if ( v9 < flt_7BD968 || *v2 > (double)flt_6225CC || v2[1] < (double)flt_7C623C || v2[1] > (double)flt_7C6238 )
        *((_DWORD *)v2 + 3) |= 2u;
      v2 += 4;
      v1 += 4;
      ++v3;
    }
    while ( v3 < *(_DWORD *)(a1 + 4) );
  }
  return 1;
}

// 0x40f1e0  sub_40F1E0
int __cdecl sub_40F1E0(int a1)
{
  float *v2; // edx
  float *v3; // ecx
  _DWORD *v4; // esi
  unsigned int i; // edi
  double v6; // st7
  double v7; // st6
  char v9; // c0
  double v10; // st5
  double v11; // st6
  int v12; // eax
  float v14; // [esp+Ch] [ebp-20h]
  float v15; // [esp+28h] [ebp-4h]
  float v16; // [esp+34h] [ebp+8h]
  float v17; // [esp+34h] [ebp+8h]

  sub_40D580(flt_5F8500, flt_604100);
  if ( dword_4B1A6C != 0 )
    qmemcpy(unk_6040C0, flt_604100, sizeof(unk_6040C0));
  v2 = *(float **)a1;
  v3 = (float *)((char *)&unk_734DE0 + 16 * dword_623654);
  v4 = (_DWORD *)((char *)&unk_6236A0 + 16 * dword_623654);
  dword_623688 = (int)v3;
  dword_7C6240 = (int)v3;
  dword_623680 = (int)v4;
  dword_623654 += *(_DWORD *)(a1 + 4);
  for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
  {
    v14 = flt_6AC224 * v2[1] + flt_6AC228 * v2[2] + *v2 * flt_6AC220 + flt_6AC244;
    v6 = flt_6AC230 * v2[1] + flt_6AC234 * v2[2] + *v2 * flt_6AC22C + flt_6AC248;
    v7 = flt_6AC23C * v2[1] + flt_6AC240 * v2[2] + *v2 * flt_6AC238 + flt_6AC24C;
    v3[2] = v7;
    if ( v9 != 0 )
      v10 = -v7;
    else
      v10 = v7 - -1.0;
    v11 = (double)dword_4EFB30 / v10;
    *((_DWORD *)v3 + 3) = 1;
    v15 = v11 * v14;
    *v3 = v15;
    v3[1] = v11 * v6;
    v16 = (double)(unsigned __int16)dword_4EFB50 + v15;
    *v4 = (int)v16;
    v17 = -(v3[1] - (double)HIWORD(dword_4EFB50));
    v4[1] = (int)v17;
    v4[2] = (int)v3[2];
    v4 += 4;
    if ( *v3 < (double)flt_7BD968
      || *v3 > (double)flt_6225CC
      || v3[1] < (double)flt_7C623C
      || v3[1] > (double)flt_7C6238 )
    {
      v12 = *((_DWORD *)v3 + 3);
      LOBYTE(v12) = v12 | 2;
      *((_DWORD *)v3 + 3) = v12;
    }
    v3 += 4;
    v2 += 4;
  }
  return 1;
}

// 0x40f3d0  sub_40F3D0
int __cdecl sub_40F3D0(char a1, int a2, char a3)
{
  int result; // eax
  char v4; // bl
  int v6; // edx
  int v7; // ecx
  float *v8; // eax
  _DWORD *v9; // edx
  double v10; // st7
  double v11; // st6
  char v13; // c0
  double v14; // st5
  double v15; // st6
  int v16; // eax
  float v17; // [esp+4h] [ebp-20h]
  float v18; // [esp+8h] [ebp-1Ch]
  float v19; // [esp+Ch] [ebp-18h]
  float v20; // [esp+20h] [ebp-4h]
  int i; // [esp+2Ch] [ebp+8h]
  float v22; // [esp+30h] [ebp+Ch]
  float v23; // [esp+30h] [ebp+Ch]

  result = a1;
  v4 = 0;
  if ( a1 > 0 )
  {
    for ( i = a1; i != 0; --i )
    {
      v6 = 16 * *(unsigned __int16 *)(a2 + 2 * v4);
      v7 = v6 + dword_623688;
      if ( (*(_BYTE *)(v6 + dword_623688 + 12) & 1) == 0 )
      {
        v8 = (float *)(dword_7BD960 + 12 * *(unsigned __int16 *)(a2 + 2 * v4));
        v9 = (_DWORD *)(dword_623680 + v6);
        v18 = flt_6AC234 * v8[2] + flt_6AC230 * v8[1] + *v8 * flt_6AC22C;
        v19 = flt_6AC240 * v8[2] + flt_6AC23C * v8[1] + *v8 * flt_6AC238;
        v17 = flt_6AC224 * v8[1] + *v8 * flt_6AC220 + flt_6AC228 * v8[2] + flt_6AC244;
        v10 = v18 + flt_6AC248;
        v11 = v19 + flt_6AC24C;
        *(float *)(v7 + 8) = v11;
        if ( v13 != 0 )
          v14 = -v11;
        else
          v14 = v11 - -1.0;
        v15 = (double)dword_4EFB30 / v14;
        *(_DWORD *)(v7 + 12) = 1;
        v20 = v15 * v17;
        *(float *)v7 = v20;
        *(float *)(v7 + 4) = v15 * v10;
        v22 = (double)(unsigned __int16)dword_4EFB50 + v20;
        *v9 = (int)v22;
        v23 = (double)HIWORD(dword_4EFB50) - *(float *)(v7 + 4);
        v9[1] = (int)v23;
        v9[2] = (int)*(float *)(v7 + 8);
        if ( *(float *)v7 < (double)flt_7BD968
          || *(float *)v7 > (double)flt_6225CC
          || *(float *)(v7 + 4) < (double)flt_7C623C
          || *(float *)(v7 + 4) > (double)flt_7C6238 )
        {
          v16 = *(_DWORD *)(v7 + 12);
          LOBYTE(v16) = v16 | 2;
          *(_DWORD *)(v7 + 12) = v16;
        }
      }
      v4 += a3;
      result = i - 1;
    }
  }
  return result;
}

// 0x40f5a0  sub_40F5A0
int __cdecl sub_40F5A0(float a1, int a2, char a3)
{
  int result; // eax
  char v4; // dl
  int v5; // eax
  int v6; // ecx
  int v7; // ebp
  float *v8; // eax
  double v9; // rtt
  double v10; // rt2
  char v12; // c0
  double v13; // st7
  double v14; // st6
  double v15; // st6
  double v16; // st7
  int i; // [esp+0h] [ebp-10h]
  float v18; // [esp+4h] [ebp-Ch]
  float v19; // [esp+8h] [ebp-8h]
  float v20; // [esp+Ch] [ebp-4h]
  float v21; // [esp+14h] [ebp+4h]
  float v22; // [esp+14h] [ebp+4h]
  float v23; // [esp+14h] [ebp+4h]
  float v24; // [esp+14h] [ebp+4h]

  result = SLOBYTE(a1);
  v4 = 0;
  if ( SLOBYTE(a1) > 0 )
  {
    for ( i = SLOBYTE(a1); i != 0; --i )
    {
      v5 = *(unsigned __int16 *)(a2 + 2 * v4);
      v6 = dword_623688 + 16 * v5;
      if ( (*(_BYTE *)(v6 + 12) & 1) == 0 )
      {
        v7 = 3 * v5;
        v8 = (float *)(dword_7BD960 + 12 * v5);
        v21 = flt_6AC224 * v8[1] + *(float *)(dword_7BD960 + 4 * v7) * flt_6AC220;
        v9 = flt_6AC228 * v8[2] + v21;
        v22 = flt_6AC230 * v8[1] + *(float *)(dword_7BD960 + 4 * v7) * flt_6AC22C;
        v10 = flt_6AC234 * v8[2] + v22;
        v23 = flt_6AC23C * v8[1] + *v8 * flt_6AC238;
        v20 = flt_6AC240 * v8[2] + v23 + flt_6AC24C;
        v18 = v9 + flt_6AC244;
        v19 = v10 + flt_6AC248;
        *(float *)(v6 + 8) = v20;
        if ( v12 != 0 )
        {
          v13 = (double)dword_4EFB30;
          v14 = -v20;
        }
        else
        {
          v14 = v20 - -1.0;
          v13 = (double)dword_4EFB30;
        }
        *(_DWORD *)(v6 + 12) = 1;
        v15 = v13 / v14;
        v16 = v15 * v18;
        v24 = v15 * v19;
        *(float *)v6 = v16;
        *(float *)(v6 + 4) = v24;
        if ( v16 < flt_7BD968 || v16 > flt_6225CC || v24 < (double)flt_7C623C || v24 > (double)flt_7C6238 )
          *(_DWORD *)(v6 + 12) = 3;
      }
      v4 += a3;
      result = i - 1;
    }
  }
  return result;
}

// 0x40f770  sub_40F770
int __cdecl sub_40F770(_DWORD *a1)
{
  int result; // eax
  int v2; // esi
  int v3; // ecx
  int *v4; // edx
  float *v5; // esi
  double v6; // st7
  double v7; // st6
  double v9; // st6
  char v10; // c0
  double v11; // st6
  double v12; // st7
  double v13; // st7
  int v14; // eax
  bool v15; // cc
  float v16; // [esp+0h] [ebp-34h] BYREF
  float v17; // [esp+4h] [ebp-30h]
  float v18; // [esp+8h] [ebp-2Ch]
  int v19; // [esp+Ch] [ebp-28h]
  float v20; // [esp+10h] [ebp-24h]
  int v21; // [esp+14h] [ebp-20h]
  int v22; // [esp+18h] [ebp-1Ch]
  float v23; // [esp+1Ch] [ebp-18h]
  float *v24; // [esp+20h] [ebp-14h]
  int i; // [esp+24h] [ebp-10h]
  int *v26; // [esp+28h] [ebp-Ch]
  int v27; // [esp+2Ch] [ebp-8h]
  _DWORD *v28; // [esp+30h] [ebp-4h]

  v26 = *(int **)(dword_621608 + 4);
  result = *v26;
  for ( i = *v26; i != 0; i = *v26 )
  {
    v27 = 0;
    if ( (int)a1[4] > 0 )
    {
      v28 = a1;
      do
      {
        v2 = *(unsigned __int16 *)(i + 2 * *v28);
        v3 = 16 * v2 + dword_623688;
        if ( (*(_BYTE *)(v3 + 12) & 1) == 0 )
        {
          LODWORD(v23) = dword_7BD960 + 12 * v2;
          v4 = (int *)(16 * v2 + dword_623680);
          v24 = &v16;
          v5 = (float *)LODWORD(v23);
          v6 = *v5 * flt_6AC22C + v5[1] * flt_6AC230 + v5[2] * flt_6AC234 + flt_6AC248;
          v7 = v5[2] * flt_6AC240 + *v5 * flt_6AC238 + v5[1] * flt_6AC23C + flt_6AC24C;
          v16 = *v5 * flt_6AC220 + v5[1] * flt_6AC224 + v5[2] * flt_6AC228 + flt_6AC244;
          v17 = v6;
          v18 = v7;
          *(float *)(v3 + 8) = v18;
          v9 = v18;
          if ( v10 != 0 )
            v11 = -v9;
          else
            v11 = v9 - -1.0;
          v12 = (double)dword_4EFB30 / v11;
          *(float *)v3 = v12 * v16;
          v13 = v12 * v17;
          *(_DWORD *)(v3 + 12) = 1;
          *(float *)(v3 + 4) = v13;
          LODWORD(v23) = (unsigned __int16)dword_4EFB50;
          v23 = (double)(unsigned __int16)dword_4EFB50 + *(float *)v3;
          v22 = (int)v23;
          *v4 = v22;
          LODWORD(v23) = HIWORD(dword_4EFB50);
          v23 = (double)HIWORD(dword_4EFB50) - *(float *)(v3 + 4);
          v21 = (int)v23;
          v4[1] = v21;
          v20 = *(float *)(v3 + 8);
          v19 = (int)v20;
          v4[2] = v19;
          if ( *(float *)v3 < (double)flt_7BD968
            || *(float *)v3 > (double)flt_6225CC
            || *(float *)(v3 + 4) < (double)flt_7C623C
            || *(float *)(v3 + 4) > (double)flt_7C6238 )
          {
            v14 = *(_DWORD *)(v3 + 12);
            LOBYTE(v14) = v14 | 2;
            *(_DWORD *)(v3 + 12) = v14;
          }
        }
        v15 = ++v27 < a1[4];
        ++v28;
      }
      while ( v15 );
    }
    v26 = (int *)v26[1];
    result = *v26;
  }
  return result;
}

// 0x40f980  sub_40F980
int __cdecl sub_40F980(_DWORD *a1)
{
  int result; // eax
  _DWORD *v2; // edx
  int v3; // eax
  int v4; // ecx
  float *v5; // esi
  double v6; // st7
  double v7; // st6
  double v9; // st6
  char v10; // c0
  double v11; // st6
  double v12; // st7
  double v13; // st7
  int v14; // esi
  float v15; // [esp+0h] [ebp-20h] BYREF
  float v16; // [esp+4h] [ebp-1Ch]
  float v17; // [esp+8h] [ebp-18h]
  int v18; // [esp+Ch] [ebp-14h]
  float *v19; // [esp+10h] [ebp-10h]
  int i; // [esp+14h] [ebp-Ch]
  int *v21; // [esp+18h] [ebp-8h]
  int v22; // [esp+1Ch] [ebp-4h]

  v21 = *(int **)(dword_621608 + 4);
  result = *v21;
  for ( i = *v21; i != 0; i = *v21 )
  {
    v2 = a1;
    v22 = 0;
    if ( (int)a1[4] > 0 )
    {
      do
      {
        v3 = *(unsigned __int16 *)(i + 2 * *v2);
        v4 = dword_623688 + 16 * v3;
        if ( (*(_BYTE *)(v4 + 12) & 1) == 0 )
        {
          v18 = dword_7BD960 + 12 * v3;
          v19 = &v15;
          v5 = (float *)v18;
          v6 = *v5 * flt_6AC22C + v5[1] * flt_6AC230 + v5[2] * flt_6AC234 + flt_6AC248;
          v7 = v5[2] * flt_6AC240 + *v5 * flt_6AC238 + v5[1] * flt_6AC23C + flt_6AC24C;
          v15 = *v5 * flt_6AC220 + v5[1] * flt_6AC224 + v5[2] * flt_6AC228 + flt_6AC244;
          v16 = v6;
          v17 = v7;
          *(float *)(v4 + 8) = v17;
          v9 = v17;
          if ( v10 != 0 )
            v11 = -v9;
          else
            v11 = v9 - -1.0;
          v12 = (double)dword_4EFB30 / v11;
          *(float *)v4 = v12 * v15;
          v13 = v12 * v16;
          *(_DWORD *)(v4 + 12) = 1;
          *(float *)(v4 + 4) = v13;
          if ( *(float *)v4 < (double)flt_7BD968
            || *(float *)v4 > (double)flt_6225CC
            || *(float *)(v4 + 4) < (double)flt_7C623C
            || *(float *)(v4 + 4) > (double)flt_7C6238 )
          {
            *(_DWORD *)(v4 + 12) = 3;
          }
        }
        ++v2;
        v14 = a1[4];
        ++v22;
      }
      while ( v22 < v14 );
    }
    v21 = (int *)v21[1];
    result = *v21;
  }
  return result;
}

// 0x40fb20  sub_40FB20
int __cdecl sub_40FB20(unsigned __int16 a1, float *a2)
{
  float *v2; // ecx
  __int64 v3; // rax
  double v5; // st6
  char v6; // c0
  double v7; // st6
  double v8; // st7
  int v9; // eax
  float v11; // [esp+0h] [ebp-10h]
  float v12; // [esp+4h] [ebp-Ch]
  float v13; // [esp+8h] [ebp-8h]

  v2 = (float *)((char *)&unk_734DE0 + 16 * dword_623654);
  dword_623680 = (int)&unk_6236A0 + 16 * dword_623654;
  dword_623688 = (int)v2;
  dword_623654 += a1;
  v3 = a1;
  if ( a1 != 0 )
  {
    do
    {
      v11 = *a2 * flt_6AC220 + a2[1] * flt_6AC224 + a2[2] * flt_6AC228 + flt_6AC244;
      v12 = *a2 * flt_6AC22C + a2[1] * flt_6AC230 + a2[2] * flt_6AC234 + flt_6AC248;
      v13 = a2[2] * flt_6AC240 + *a2 * flt_6AC238 + a2[1] * flt_6AC23C + flt_6AC24C;
      v2[2] = v13;
      v5 = v13;
      if ( v6 != 0 )
        v7 = -v5;
      else
        v7 = v5 - -1.0;
      v8 = (double)dword_4EFB30 / v7;
      *v2 = v8 * v11;
      *((_DWORD *)v2 + 3) = 1;
      v2[1] = v8 * v12;
      if ( *v2 < (double)flt_7BD968
        || *v2 > (double)flt_6225CC
        || v2[1] < (double)flt_7C623C
        || v2[1] > (double)flt_7C6238 )
      {
        v9 = *((_DWORD *)v2 + 3);
        LOBYTE(v9) = v9 | 2;
        *((_DWORD *)v2 + 3) = v9;
      }
      v2 += 4;
      ++HIDWORD(v3);
      a2 += 3;
      LODWORD(v3) = SWORD2(v3);
    }
    while ( SWORD2(v3) < (int)a1 );
  }
  return v3;
}

// 0x40fc90  sub_40FC90
int __cdecl sub_40FC90(unsigned __int16 a1, float *a2)
{
  float *v2; // ecx
  int *v3; // edx
  int result; // eax
  float *v5; // ebx
  double v6; // st7
  double v7; // st6
  double v9; // st6
  char v10; // c0
  double v11; // st6
  double v12; // st7
  double v13; // st7
  int v14; // eax
  bool v15; // zf
  float v16[2]; // [esp+4h] [ebp-24h] BYREF
  float v17; // [esp+Ch] [ebp-1Ch]
  int v18; // [esp+10h] [ebp-18h]
  float v19; // [esp+14h] [ebp-14h]
  int v20; // [esp+18h] [ebp-10h]
  int v21; // [esp+1Ch] [ebp-Ch]
  float v22; // [esp+20h] [ebp-8h]
  float *v23; // [esp+24h] [ebp-4h]
  int v24; // [esp+30h] [ebp+8h]

  v2 = (float *)((char *)&unk_734DE0 + 16 * dword_623654);
  v3 = (int *)((char *)&unk_6236A0 + 16 * dword_623654);
  dword_623688 = (int)v2;
  result = a1;
  dword_623680 = (int)v3;
  dword_623654 += a1;
  if ( a1 != 0 )
  {
    v23 = v16;
    v24 = a1;
    do
    {
      v5 = v23;
      v6 = *a2 * flt_6AC22C + a2[1] * flt_6AC230 + a2[2] * flt_6AC234 + flt_6AC248;
      v7 = a2[2] * flt_6AC240 + *a2 * flt_6AC238 + a2[1] * flt_6AC23C + flt_6AC24C;
      *v23 = *a2 * flt_6AC220 + a2[1] * flt_6AC224 + a2[2] * flt_6AC228 + flt_6AC244;
      v5[1] = v6;
      v5[2] = v7;
      v2[2] = v17;
      v9 = v17;
      if ( v10 != 0 )
        v11 = -v9;
      else
        v11 = v9 - -1.0;
      v12 = (double)dword_4EFB30 / v11;
      *v2 = v12 * v16[0];
      v13 = v12 * v16[1];
      *((_DWORD *)v2 + 3) = 1;
      v2[1] = v13;
      LODWORD(v22) = (unsigned __int16)dword_4EFB50;
      v22 = (double)(unsigned __int16)dword_4EFB50 + *v2;
      v21 = (int)v22;
      *v3 = v21;
      LODWORD(v22) = HIWORD(dword_4EFB50);
      v22 = (double)HIWORD(dword_4EFB50) - v2[1];
      v20 = (int)v22;
      v3[1] = v20;
      v19 = v2[2];
      v18 = (int)v19;
      v3[2] = v18;
      if ( *v2 < (double)flt_7BD968
        || *v2 > (double)flt_6225CC
        || v2[1] < (double)flt_7C623C
        || v2[1] > (double)flt_7C6238 )
      {
        v14 = *((_DWORD *)v2 + 3);
        LOBYTE(v14) = v14 | 2;
        *((_DWORD *)v2 + 3) = v14;
      }
      v2 += 4;
      v3 += 4;
      result = v24 - 1;
      v15 = v24 == 1;
      a2 += 3;
      --v24;
    }
    while ( !v15 );
  }
  return result;
}

// 0x40fe50  sub_40FE50
int __cdecl sub_40FE50(_DWORD *a1)
{
  int *v1; // ecx
  int result; // eax
  float *v4; // ebx
  float *v5; // edi
  float *v6; // [esp+Ch] [ebp-10h]
  float v7; // [esp+24h] [ebp+8h]

  v1 = *(int **)(dword_621608 + 4);
  result = *v1;
  if ( *v1 != 0 && (*(_BYTE *)(result + 2) & 2) != 2 && result != 0 )
  {
    do
    {
      v6 = (float *)(dword_623688 + 16 * *(__int16 *)(result + 2 * *a1));
      v4 = (float *)(dword_623688 + 16 * *(__int16 *)(result + 2 * a1[1]));
      v5 = (float *)(dword_623688 + 16 * *(__int16 *)(result + 2 * a1[2]));
      v7 = (*v6 - *v4) * (v5[1] - v4[1]) - (v6[1] - v4[1]) * (*v5 - *v4);
      if ( v7 < 0.0 )
      {
        *(_DWORD *)(v1[2] + 4) = v1[1];
        *(_DWORD *)(v1[1] + 8) = v1[2];
      }
      v1 = (int *)v1[1];
      result = *v1;
    }
    while ( *v1 != 0 );
  }
  return result;
}

// 0x40ff20  sub_40FF20
int __cdecl sub_40FF20(int a1, int a2, int a3)
{
  __int16 *v3; // eax
  int *v4; // edi
  int v5; // eax
  unsigned __int16 *v6; // esi
  int v7; // ecx
  int v8; // ebp
  char v9; // cl
  unsigned __int16 v10; // ax
  int v11; // edx
  int v12; // ecx
  unsigned __int16 *v13; // ebp
  _DWORD *v14; // eax
  _DWORD *v15; // edi
  char *v16; // edx
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  unsigned __int16 *v20; // ebp
  _DWORD *v21; // eax
  _DWORD *v22; // edi
  char *v23; // edx
  int v24; // eax
  int v25; // edx
  int v26; // ecx
  unsigned __int16 *v27; // ebp
  _DWORD *v28; // eax
  _DWORD *v29; // edi
  char *v30; // edx
  int v31; // eax
  int v32; // edx
  int v33; // ecx
  unsigned __int16 *v34; // ebp
  _DWORD *v35; // eax
  _DWORD *v36; // edi
  char *v37; // edx
  int v38; // eax
  int v39; // edx
  int v40; // ecx
  unsigned __int16 *v41; // ebp
  _DWORD *v42; // eax
  _DWORD *v43; // edi
  char *v44; // edx
  int v45; // eax
  int v46; // edx
  int v47; // ecx
  unsigned __int16 *v48; // ebp
  _DWORD *v49; // eax
  _DWORD *v50; // edi
  char *v51; // edx
  int v52; // eax
  unsigned __int16 v53; // ax
  int v54; // ecx
  int v55; // edx
  unsigned __int16 *v56; // ebp
  _DWORD *v57; // eax
  _DWORD *v58; // edi
  char *v59; // ecx
  int v60; // eax
  int v61; // eax
  int v62; // edx
  int v63; // ecx
  unsigned __int16 *v64; // ebp
  _DWORD *v65; // eax
  _DWORD *v66; // edi
  char *v67; // edx
  int v68; // eax
  int v69; // eax
  double v70; // st7
  float *v71; // ecx
  float *v72; // edx
  float *v73; // edi
  int v74; // ebp
  double v75; // st7
  float v76; // edx
  float *v77; // ebp
  double v78; // st7
  float *v79; // edi
  float *v80; // edx
  float v81; // edx
  double v82; // st7
  double v83; // st7
  double v84; // st7
  int v85; // edi
  double v86; // st7
  int v87; // ebp
  int v88; // eax
  int v89; // edi
  __int16 *v90; // ecx
  int v91; // edx
  __int16 *v92; // edi
  __int16 v93; // dx
  unsigned __int16 v94; // dx
  int v95; // eax
  int v96; // edi
  unsigned __int16 v97; // dx
  int v98; // eax
  unsigned __int16 v99; // dx
  int v100; // eax
  unsigned __int16 v101; // dx
  int v102; // eax
  unsigned __int16 v103; // dx
  int v104; // eax
  unsigned __int16 v105; // dx
  int v106; // eax
  _DWORD *v108; // [esp-14h] [ebp-98h]
  _DWORD *v109; // [esp-14h] [ebp-98h]
  void *v110; // [esp-10h] [ebp-94h]
  void *v111; // [esp-10h] [ebp-94h]
  void *v112; // [esp-Ch] [ebp-90h]
  void *v113; // [esp-Ch] [ebp-90h]
  void *v114; // [esp-8h] [ebp-8Ch]
  void *v115; // [esp-8h] [ebp-8Ch]
  int v116; // [esp-4h] [ebp-88h]
  int v117; // [esp-4h] [ebp-88h]
  int v118; // [esp+10h] [ebp-74h]
  int v119; // [esp+14h] [ebp-70h]
  int v120; // [esp+14h] [ebp-70h]
  int v121; // [esp+14h] [ebp-70h]
  int v122; // [esp+14h] [ebp-70h]
  int v123; // [esp+14h] [ebp-70h]
  int v124; // [esp+14h] [ebp-70h]
  int v125; // [esp+14h] [ebp-70h]
  int v126; // [esp+14h] [ebp-70h]
  float v127; // [esp+14h] [ebp-70h]
  float v128; // [esp+14h] [ebp-70h]
  float v129; // [esp+14h] [ebp-70h]
  float v130; // [esp+14h] [ebp-70h]
  float v131; // [esp+14h] [ebp-70h]
  float v132; // [esp+14h] [ebp-70h]
  float v133; // [esp+14h] [ebp-70h]
  int v134; // [esp+14h] [ebp-70h]
  float v135; // [esp+18h] [ebp-6Ch]
  float v136; // [esp+1Ch] [ebp-68h]
  int v137; // [esp+20h] [ebp-64h]
  float v138; // [esp+24h] [ebp-60h]
  float v139; // [esp+2Ch] [ebp-58h]
  float v140; // [esp+30h] [ebp-54h]
  float v141; // [esp+38h] [ebp-4Ch]
  float v142; // [esp+40h] [ebp-44h]
  float v143; // [esp+44h] [ebp-40h]
  float v144; // [esp+48h] [ebp-3Ch]
  float v145; // [esp+48h] [ebp-3Ch]
  float v146; // [esp+50h] [ebp-34h]
  float v147; // [esp+54h] [ebp-30h]
  float v148; // [esp+58h] [ebp-2Ch]
  float v149; // [esp+5Ch] [ebp-28h]
  float v150; // [esp+60h] [ebp-24h]
  float v151; // [esp+64h] [ebp-20h]
  float *v152; // [esp+68h] [ebp-1Ch]
  float v153; // [esp+68h] [ebp-1Ch]
  float v154; // [esp+68h] [ebp-1Ch]
  float v155; // [esp+68h] [ebp-1Ch]
  float v156; // [esp+68h] [ebp-1Ch]
  int v157; // [esp+74h] [ebp-10h]
  int v158; // [esp+78h] [ebp-Ch]
  int v159; // [esp+7Ch] [ebp-8h]
  int v160; // [esp+80h] [ebp-4h]

  if ( *(unsigned __int16 *)(a3 + 14) != word_4B1AB0 )
  {
    word_4B1AB0 = *(_WORD *)(a3 + 14);
    sub_40CCE0(4 * *(unsigned __int16 *)(a3 + 14));
  }
  flt_6AC244 = (float)dword_4E5E74;
  dword_5F8530 = LODWORD(flt_4EFB48);
  dword_621604 = LODWORD(flt_4EFB38);
  flt_6AC248 = (float)dword_4E5E78;
  flt_6AC24C = (float)dword_4E5E7C;
  flt_6AC220 = (double)word_4E5E60 * 0.00024414;
  flt_6AC224 = (double)word_4E5E62 * 0.00024414;
  flt_6AC228 = (double)word_4E5E64 * 0.00024414;
  flt_6AC22C = (double)word_4E5E66 * 0.00024414;
  flt_621600 = 0.0;
  v137 = 0;
  flt_6AC230 = (double)word_4E5E68 * 0.00024414;
  flt_6AC234 = (double)word_4E5E6A * 0.00024414;
  flt_6AC238 = (double)word_4E5E6C * 0.00024414;
  flt_6AC23C = (double)word_4E5E6E * 0.00024414;
  flt_6AC240 = (double)word_4E5E70 * 0.00024414;
  if ( *(_BYTE *)a3 != 0 )
  {
    dword_621614 = (unsigned __int16)dword_4EFB4C >> 1;
    dword_621610 = -dword_621614;
    dword_621618 = -(HIWORD(dword_4EFB4C) >> 1);
    dword_62161C = HIWORD(dword_4EFB4C) >> 1;
  }
  else
  {
    word_4B39DC = 1;
    word_4B3460 = *(_WORD *)(dword_4B39B4 + 38);
    dword_621614 = (unsigned __int16)dword_4EFB4C >> 1;
    dword_621610 = -dword_621614;
    dword_62161C = HIWORD(dword_4EFB4C) >> 1;
    dword_621618 = -(HIWORD(dword_4EFB4C) >> 1);
    v3 = (__int16 *)&unk_4B3474;
    do
    {
      *v3 = -1;
      v3 += 10;
    }
    while ( (int)v3 < (int)&word_4B3640 );
  }
  ++*(_BYTE *)a3;
  v4 = *(int **)(a1 + 20);
  if ( v4 == NULL )
    return a2;
  v5 = *v4;
  v6 = (unsigned __int16 *)v4[4];
  dword_6225C8 = v4[2];
  dword_7BD960 = v5;
  dword_4B1A9C(v4);
  v8 = v4[5];
  v118 = v8;
  if ( v8 == 0 )
    return a2;
  do
  {
    v9 = *((_BYTE *)v6 + 3);
    switch ( v9 )
    {
      case 0:
      case 4:
        if ( v9 == 4 )
          flt_621600 = (float)(4 * *(__int16 *)(a3 + 6));
        else
          flt_621600 = 0.0;
        v69 = 16 * v6[4];
        v70 = *(float *)(v69 + dword_7C6240 + 8);
        v71 = (float *)(dword_7C6240 + 16 * v6[5]);
        v72 = (float *)(dword_7C6240 + 16 * v6[6]);
        v146 = v71[2];
        v73 = (float *)(dword_7C6240 + 16 * v6[7]);
        v147 = v72[2];
        v148 = v73[2];
        if ( v70 > flt_4EFB38 && v146 > (double)flt_4EFB38 && v147 > (double)flt_4EFB38 && v148 > (double)flt_4EFB38 )
          goto LABEL_77;
        if ( v70 < flt_4EFB48 && v146 < (double)flt_4EFB48 && v147 < (double)flt_4EFB48 && v148 < (double)flt_4EFB48 )
          goto LABEL_77;
        v74 = dword_7C6240 + v69;
        v142 = *v71;
        v75 = *(float *)(dword_7C6240 + 16 * v6[4]);
        v127 = (float)dword_621614;
        v143 = *v72;
        v144 = *v73;
        if ( v75 >= v127 && v142 >= (double)v127 && v143 >= (double)v127 && v144 >= (double)v127 )
          goto LABEL_77;
        if ( (v128 = (float)dword_621610, v75 <= v128)
          && v142 <= (double)v128
          && v143 <= (double)v128
          && v144 <= (double)v128
          || (v7 = *((int *)v71 + 1),
              v129 = (float)dword_62161C,
              v76 = v72[1],
              v145 = v73[1],
              *(float *)(v74 + 4) >= (double)v129)
          && *(float *)&v7 >= (double)v129
          && v76 >= (double)v129
          && v145 >= (double)v129
          || (v130 = (float)dword_621618, *(float *)(v74 + 4) <= (double)v130)
          && *(float *)&v7 <= (double)v130
          && v76 <= (double)v130
          && v145 <= (double)v130 )
        {
LABEL_77:
          v7 = *v6;
          v6 += 2 * *((_DWORD *)v6 + 1);
          v118 -= (unsigned __int16)v7;
        }
        else
        {
          v6 += 8;
          --v118;
        }
        goto LABEL_218;
      case 8:
      case 12:
        if ( v9 == 12 )
          flt_621600 = (float)(4 * *(__int16 *)(a3 + 6));
        else
          flt_621600 = 0.0;
        v7 = (char)(4 * *((_BYTE *)v6 + 6));
        v94 = 0;
        if ( v7 <= 0 )
        {
          v96 = dword_7C6240;
        }
        else
        {
          v95 = 0;
          do
          {
            v96 = dword_7C6240;
            if ( *(float *)(16 * v6[v95 + 4] + dword_7C6240 + 8) <= (double)flt_4EFB38 )
              break;
            v95 = ++v94;
          }
          while ( v94 < v7 );
        }
        if ( v94 == v7 )
          goto LABEL_215;
        v97 = 0;
        if ( v7 > 0 )
        {
          v98 = 0;
          do
          {
            if ( *(float *)(16 * v6[v98 + 4] + v96 + 8) >= (double)flt_4EFB48 )
              break;
            v98 = ++v97;
          }
          while ( v97 < v7 );
        }
        if ( v97 == v7 )
          goto LABEL_214;
        v99 = 0;
        if ( v7 > 0 )
        {
          v100 = 0;
          do
          {
            v153 = (float)dword_621614;
            if ( *(float *)(16 * v6[v100 + 4] + v96) <= (double)v153 )
              break;
            v100 = ++v99;
          }
          while ( v99 < v7 );
        }
        if ( v99 == v7 )
          goto LABEL_214;
        v101 = 0;
        if ( v7 > 0 )
        {
          v102 = 0;
          do
          {
            v154 = (float)dword_621610;
            if ( *(float *)(16 * v6[v102 + 4] + v96) >= (double)v154 )
              break;
            v102 = ++v101;
          }
          while ( v101 < v7 );
        }
        if ( v101 == v7 )
          goto LABEL_214;
        v103 = 0;
        if ( v7 > 0 )
        {
          v104 = 0;
          do
          {
            v155 = (float)dword_62161C;
            if ( *(float *)(16 * v6[v104 + 4] + v96 + 4) <= (double)v155 )
              break;
            v104 = ++v103;
          }
          while ( v103 < v7 );
        }
        if ( v103 == v7 )
          goto LABEL_214;
        v105 = 0;
        if ( v7 > 0 )
        {
          v106 = 0;
          do
          {
            v156 = (float)dword_621618;
            if ( *(float *)(16 * v6[v106 + 4] + v96 + 4) >= (double)v156 )
              break;
            v106 = ++v105;
          }
          while ( v105 < v7 );
        }
        if ( v105 == v7 )
        {
LABEL_214:
          v8 = v118;
LABEL_215:
          HIWORD(v7) = 0;
          v118 = v8 - *v6;
          v6 += 2 * v6[2];
        }
        else
        {
          v6 += 28;
          --v118;
        }
        goto LABEL_218;
      case 16:
        v77 = (float *)(16 * v6[4] + dword_7C6240);
        v78 = v77[2];
        v79 = (float *)(dword_7C6240 + 16 * v6[7]);
        v80 = (float *)(dword_7C6240 + 16 * v6[6]);
        v152 = (float *)(dword_7C6240 + 16 * v6[5]);
        v151 = v79[2];
        v149 = v152[2];
        v7 = *((int *)v80 + 2);
        v150 = *(float *)&v7;
        if ( v78 > 1.0 && v149 > 1.0 && *(float *)&v7 > 1.0 && v151 > 1.0 )
          goto LABEL_177;
        HIWORD(v7) = HIWORD(flt_4EFB48);
        if ( v78 < flt_4EFB48 && v149 < (double)flt_4EFB48 && v150 < (double)flt_4EFB48 && v151 < (double)flt_4EFB48 )
          goto LABEL_177;
        HIWORD(v7) = (dword_7C6240 + 16 * (unsigned int)v6[5]) >> 16;
        v139 = *v77;
        v140 = *v152;
        v131 = (float)dword_621614;
        v138 = *v80;
        v135 = *v79;
        if ( *v77 >= (double)v131 && v140 >= (double)v131 && v138 >= (double)v131 && v135 >= (double)v131 )
          goto LABEL_177;
        v132 = (float)dword_621610;
        if ( v139 <= (double)v132 && v140 <= (double)v132 && v138 <= (double)v132 && v135 <= (double)v132 )
          goto LABEL_177;
        v7 = *((int *)v152 + 1);
        v141 = v77[1];
        v81 = v80[1];
        v136 = v79[1];
        v133 = (float)dword_62161C;
        if ( v141 >= (double)v133 && *(float *)&v7 >= (double)v133 && v81 >= (double)v133 && v136 >= (double)v133 )
          goto LABEL_177;
        if ( v139 >= (double)v140 )
        {
          if ( v140 >= (double)v138 )
          {
            if ( v138 < (double)v135 )
            {
              v82 = v138;
              goto LABEL_110;
            }
          }
          else if ( v140 < (double)v135 )
          {
            v82 = v140;
            goto LABEL_110;
          }
        }
        else if ( v139 >= (double)v138 )
        {
          if ( v138 < (double)v135 )
          {
            v82 = v138;
            goto LABEL_110;
          }
        }
        else if ( v139 < (double)v135 )
        {
          v82 = v139;
          goto LABEL_110;
        }
        v82 = v135;
LABEL_110:
        v157 = (__int64)v82;
        if ( v139 <= (double)v140 )
        {
          if ( v140 <= (double)v138 )
          {
            if ( v138 > (double)v135 )
            {
              v83 = v138;
              goto LABEL_122;
            }
          }
          else if ( v140 > (double)v135 )
          {
            v83 = v140;
            goto LABEL_122;
          }
        }
        else if ( v139 <= (double)v138 )
        {
          if ( v138 > (double)v135 )
          {
            v83 = v138;
            goto LABEL_122;
          }
        }
        else if ( v139 > (double)v135 )
        {
          v83 = v139;
          goto LABEL_122;
        }
        v83 = v135;
LABEL_122:
        v158 = (__int64)v83;
        if ( v141 >= (double)*(float *)&v7 )
        {
          if ( *(float *)&v7 >= (double)v81 )
          {
            if ( v81 < (double)v136 )
            {
              v84 = v81;
              goto LABEL_134;
            }
          }
          else if ( *(float *)&v7 < (double)v136 )
          {
            v84 = *(float *)&v7;
            goto LABEL_134;
          }
        }
        else if ( v141 >= (double)v81 )
        {
          if ( v81 < (double)v136 )
          {
            v84 = v81;
            goto LABEL_134;
          }
        }
        else if ( v141 < (double)v136 )
        {
          v84 = v141;
          goto LABEL_134;
        }
        v84 = v136;
LABEL_134:
        v85 = (__int64)v84;
        v159 = v85;
        if ( v141 <= (double)*(float *)&v7 )
        {
          if ( *(float *)&v7 <= (double)v81 )
          {
            if ( v81 > (double)v136 )
            {
              v86 = v81;
              goto LABEL_146;
            }
          }
          else if ( *(float *)&v7 > (double)v136 )
          {
            v86 = *(float *)&v7;
            goto LABEL_146;
          }
        }
        else if ( v141 <= (double)v81 )
        {
          if ( v81 > (double)v136 )
          {
            v86 = v81;
            goto LABEL_146;
          }
        }
        else if ( v141 > (double)v136 )
        {
          v86 = v141;
          goto LABEL_146;
        }
        v86 = v136;
LABEL_146:
        v87 = (__int64)v86;
        v160 = v87;
        if ( v157 < dword_621610 )
          v157 = dword_621610;
        if ( v158 > dword_621614 )
          v158 = dword_621614;
        if ( v85 < dword_621618 )
          v159 = dword_621618;
        if ( v87 > dword_62161C )
        {
          v87 = dword_62161C;
          v160 = dword_62161C;
        }
        v88 = word_4B39DC;
        v89 = 0;
        v134 = 0;
        if ( word_4B39DC <= 0 )
          goto LABEL_167;
        v90 = &word_4B3460;
        break;
      case 52:
        HIWORD(v11) = 0;
        v10 = *v6;
        dword_604144[0] = (int)&unk_60414C;
        dword_621608 = (int)dword_604140;
        dword_604154 = (int)dword_604140;
        LOWORD(v11) = *v6;
        v12 = 1;
        v118 = v8 - v10;
        v13 = v6;
        if ( *v6 != 0 )
        {
          v14 = &unk_604160;
          v119 = v11;
          v12 = v11 + 1;
          do
          {
            v15 = v14 - 5;
            v16 = (char *)(v14 - 2);
            v14 += 3;
            *v15 = v13;
            *(v14 - 7) = v16;
            *(v14 - 3) = v15;
            v13 += 12;
            --v119;
          }
          while ( v119 != 0 );
        }
        dword_604148[0] = 0;
        v17 = 3 * v12;
        dword_604140[v17] = 0;
        dword_604144[v17] = 0;
        dword_604148[v17] = 0;
        sub_416E90(dword_4692B8);
        sub_40FE50(dword_4692B8);
        v116 = 1;
        v114 = &unk_469920;
        v112 = &unk_469698;
        v110 = &unk_469510;
        v108 = dword_4692B8;
        goto LABEL_19;
      case 56:
        HIWORD(v39) = 0;
        v118 -= *v6;
        dword_621608 = (int)dword_604140;
        dword_604144[0] = (int)&unk_60414C;
        dword_604154 = (int)dword_604140;
        LOWORD(v39) = *v6;
        v40 = 1;
        v41 = v6;
        if ( *v6 != 0 )
        {
          v42 = &unk_604160;
          v123 = v39;
          v40 = v39 + 1;
          do
          {
            v43 = v42 - 5;
            v44 = (char *)(v42 - 2);
            v42 += 3;
            *v43 = v41;
            *(v42 - 7) = v44;
            *(v42 - 3) = v43;
            v41 += 14;
            --v123;
          }
          while ( v123 != 0 );
        }
        dword_604148[0] = 0;
        v45 = 3 * v40;
        dword_604140[v45] = 0;
        dword_604144[v45] = 0;
        dword_604148[v45] = 0;
        sub_416C10(dword_469330);
        sub_40FE50(dword_469330);
        v117 = 1;
        v115 = &unk_469938;
        v113 = &unk_469800;
        v111 = &unk_469560;
        v109 = dword_469330;
        goto LABEL_36;
      case 60:
        HIWORD(v32) = 0;
        v118 -= *v6;
        dword_621608 = (int)dword_604140;
        dword_604144[0] = (int)&unk_60414C;
        dword_604154 = (int)dword_604140;
        LOWORD(v32) = *v6;
        v33 = 1;
        v34 = v6;
        if ( *v6 != 0 )
        {
          v35 = &unk_604160;
          v122 = v32;
          v33 = v32 + 1;
          do
          {
            v36 = v35 - 5;
            v37 = (char *)(v35 - 2);
            v35 += 3;
            *v36 = v34;
            *(v35 - 7) = v37;
            *(v35 - 3) = v36;
            v34 += 16;
            --v122;
          }
          while ( v122 != 0 );
        }
        dword_604148[0] = 0;
        v38 = 3 * v33;
        dword_604140[v38] = 0;
        dword_604144[v38] = 0;
        dword_604148[v38] = 0;
        sub_416E90(dword_4692E8);
        sub_40FE50(dword_4692E8);
        v137 += dword_4B1A78(v137 + a2, dword_4692E8, &unk_469538, &unk_469728, &unk_469928, 1);
        v6 += 16 * *v6;
        goto LABEL_218;
      case 64:
        HIWORD(v62) = 0;
        v118 -= *v6;
        dword_621608 = (int)dword_604140;
        dword_604144[0] = (int)&unk_60414C;
        dword_604154 = (int)dword_604140;
        LOWORD(v62) = *v6;
        v63 = 1;
        v64 = v6;
        if ( *v6 != 0 )
        {
          v65 = &unk_604160;
          v126 = v62;
          v63 = v62 + 1;
          do
          {
            v66 = v65 - 5;
            v67 = (char *)(v65 - 2);
            v65 += 3;
            *v66 = v64;
            *(v65 - 7) = v67;
            *(v65 - 3) = v66;
            v64 += 20;
            --v126;
          }
          while ( v126 != 0 );
        }
        dword_604148[0] = 0;
        v68 = 3 * v63;
        dword_604140[v68] = 0;
        dword_604144[v68] = 0;
        dword_604148[v68] = 0;
        sub_416C10(dword_469360);
        sub_40FE50(dword_469360);
        v137 += dword_4B1A74(v137 + a2, dword_469360, &unk_469588, &unk_469890, &unk_469940, 1);
        v6 += 20 * *v6;
        goto LABEL_218;
      case 68:
        LOWORD(v7) = *v6;
        dword_4B1AA4(v7, v6 + 2);
        --v8;
        v6 += 6 * *v6 + 2;
        goto LABEL_217;
      case 72:
        HIWORD(v18) = 0;
        v118 -= *v6;
        dword_621608 = (int)dword_604140;
        dword_604144[0] = (int)&unk_60414C;
        dword_604154 = (int)dword_604140;
        LOWORD(v18) = *v6;
        v19 = 1;
        v20 = v6;
        if ( *v6 != 0 )
        {
          v21 = &unk_604160;
          v120 = v18;
          v19 = v18 + 1;
          do
          {
            v22 = v21 - 5;
            v23 = (char *)(v21 - 2);
            v21 += 3;
            *v22 = v20;
            *(v21 - 7) = v23;
            *(v21 - 3) = v22;
            v20 += 12;
            --v120;
          }
          while ( v120 != 0 );
        }
        dword_604148[0] = 0;
        v24 = 3 * v19;
        dword_604140[v24] = 0;
        dword_604144[v24] = 0;
        dword_604148[v24] = 0;
        sub_416E90(dword_4692D0);
        sub_40FE50(dword_4692D0);
        v116 = 0;
        v114 = &unk_4B1C08;
        v112 = &unk_4696E0;
        v110 = &unk_4B1AF0;
        v108 = dword_4692D0;
LABEL_19:
        v137 += dword_4B1A78(v137 + a2, v108, v110, v112, v114, v116);
        v6 += 12 * *v6;
        goto LABEL_218;
      case 74:
        HIWORD(v25) = 0;
        v118 -= *v6;
        dword_621608 = (int)dword_604140;
        dword_604144[0] = (int)&unk_60414C;
        dword_604154 = (int)dword_604140;
        LOWORD(v25) = *v6;
        v26 = 1;
        v27 = v6;
        if ( *v6 != 0 )
        {
          v28 = &unk_604160;
          v121 = v25;
          v26 = v25 + 1;
          do
          {
            v29 = v28 - 5;
            v30 = (char *)(v28 - 2);
            v28 += 3;
            *v29 = v27;
            *(v28 - 7) = v30;
            *(v28 - 3) = v29;
            v27 += 14;
            --v121;
          }
          while ( v121 != 0 );
        }
        dword_604148[0] = 0;
        v31 = 3 * v26;
        dword_604140[v31] = 0;
        dword_604144[v31] = 0;
        dword_604148[v31] = 0;
        sub_416E90(dword_469300);
        sub_40FE50(dword_469300);
        v137 += dword_4B1A78(v137 + a2, dword_469300, 0, &unk_469770, &unk_469930, 1);
        v6 += 14 * *v6;
        goto LABEL_218;
      case 76:
        HIWORD(v46) = 0;
        v118 -= *v6;
        dword_621608 = (int)dword_604140;
        dword_604144[0] = (int)&unk_60414C;
        dword_604154 = (int)dword_604140;
        LOWORD(v46) = *v6;
        v47 = 1;
        v48 = v6;
        if ( *v6 != 0 )
        {
          v49 = &unk_604160;
          v124 = v46;
          v47 = v46 + 1;
          do
          {
            v50 = v49 - 5;
            v51 = (char *)(v49 - 2);
            v49 += 3;
            *v50 = v48;
            *(v49 - 7) = v51;
            *(v49 - 3) = v50;
            v48 += 14;
            --v124;
          }
          while ( v124 != 0 );
        }
        dword_604148[0] = 0;
        v52 = 3 * v47;
        dword_604140[v52] = 0;
        dword_604144[v52] = 0;
        dword_604148[v52] = 0;
        sub_416C10(dword_469348);
        sub_40FE50(dword_469348);
        v117 = 0;
        v115 = &unk_4B1C08;
        v113 = &unk_469848;
        v111 = &unk_4B1B40;
        v109 = dword_469348;
LABEL_36:
        v137 += dword_4B1A74(v137 + a2, v109, v111, v113, v115, v117);
        v6 += 14 * *v6;
        goto LABEL_218;
      case 78:
        v53 = *v6;
        dword_604144[0] = (int)&unk_60414C;
        v118 -= v53;
        HIWORD(v54) = 0;
        dword_621608 = (int)dword_604140;
        dword_604154 = (int)dword_604140;
        LOWORD(v54) = *v6;
        v55 = 1;
        v56 = v6;
        if ( *v6 != 0 )
        {
          v57 = &unk_604160;
          v125 = v54;
          v55 = v54 + 1;
          do
          {
            v58 = v57 - 5;
            v59 = (char *)(v57 - 2);
            v57 += 3;
            *v58 = v56;
            *(v57 - 7) = v59;
            *(v57 - 3) = v58;
            v56 += 16;
            --v125;
          }
          while ( v125 != 0 );
        }
        dword_604148[0] = 0;
        v60 = 3 * v55;
        dword_604140[v60] = 0;
        dword_604144[v60] = 0;
        dword_604148[v60] = 0;
        sub_416C10(dword_469378);
        sub_40FE50(dword_469378);
        v61 = dword_4B1A74(v137 + a2, dword_469378, 0, &unk_4698D8, &unk_469948, 1);
        v7 = 32 * *v6;
        v137 += v61;
        v6 = (unsigned __int16 *)((char *)v6 + v7);
        goto LABEL_218;
      case 100:
        if ( *v6 != 0 )
        {
          v7 = *v6;
          v6 += 8 * v7;
          do
          {
            --v8;
            --v7;
          }
          while ( *(float *)&v7 != 0.0 );
LABEL_217:
          v118 = v8;
        }
        goto LABEL_218;
      default:
        return 0;
    }
    while ( *v90 != v6[8] )
    {
      ++v89;
      v90 += 10;
      if ( v89 >= word_4B39DC )
      {
        v134 = v89;
        goto LABEL_167;
      }
    }
    v134 = v89;
    if ( v157 < dword_4B3464[5 * v89] )
      dword_4B3464[5 * v89] = v157;
    if ( v158 > dword_4B3468[5 * v89] )
      dword_4B3468[5 * v89] = v158;
    if ( v159 < dword_4B346C[5 * v89] )
      dword_4B346C[5 * v89] = v159;
    if ( v87 > dword_4B3470[5 * v89] )
      dword_4B3470[5 * v89] = v87;
LABEL_167:
    if ( *(_BYTE *)a3 > *(_BYTE *)(a3 + 1) )
    {
      v7 = 20 * v88;
      word_4B3462[10 * v88] = 1;
    }
    else
    {
      v91 = (unsigned __int16)word_4B39DE;
      v7 = 20 * v88;
      word_4B3462[10 * v88] = 0;
      if ( (_WORD)v91 != 0 )
      {
        v92 = &word_4B2480;
        do
        {
          if ( (unsigned __int16)*v92 == *((_DWORD *)v6 + 4) )
            word_4B3462[10 * v88] = 1;
          ++v92;
          --v91;
        }
        while ( v91 != 0 );
        v89 = v134;
      }
    }
    if ( v89 == v88 )
    {
      v93 = v6[8];
      ++word_4B39DC;
      *(__int16 *)((char *)&word_4B3460 + v7) = v93;
      *(int *)((char *)dword_4B3464 + v7) = v157;
      *(int *)((char *)dword_4B3468 + v7) = v158;
      *(int *)((char *)dword_4B346C + v7) = v159;
      v6 += 10;
      *(int *)((char *)dword_4B3470 + v7) = v160;
      --v118;
    }
    else
    {
LABEL_177:
      v6 += 10;
      --v118;
    }
LABEL_218:
    v8 = v118;
  }
  while ( v118 != 0 );
  return v137 + a2;
}

// 0x4113c0  sub_4113C0
char *sub_4113C0()
{
  char *result; // eax

  result = (char *)&unk_734DE0 + 16 * dword_623654;
  dword_623688 = (int)result;
  return result;
}

// 0x4113e0  sub_4113E0
int __cdecl sub_4113E0(int a1)
{
  unsigned int v1; // edi
  int *v2; // ebx
  int v3; // edx
  int v4; // esi
  int v5; // ecx
  double v6; // st2
  char v8; // c0
  double v9; // st7
  double v10; // st6
  double v11; // st7
  int v12; // eax
  double v13; // st7
  double v14; // st6
  float v16; // [esp+Ch] [ebp-Ch]
  float v17; // [esp+10h] [ebp-8h]

  flt_6AC244 = (float)dword_4E5E74;
  flt_6AC248 = (float)dword_4E5E78;
  flt_6AC24C = (float)dword_4E5E7C;
  flt_6AC220 = (double)word_4E5E60 * 0.00024414;
  v1 = 0;
  flt_6AC224 = (double)word_4E5E62 * 0.00024414;
  flt_6AC228 = (double)word_4E5E64 * 0.00024414;
  flt_6AC22C = (double)word_4E5E66 * 0.00024414;
  flt_6AC230 = (double)word_4E5E68 * 0.00024414;
  flt_6AC234 = (double)word_4E5E6A * 0.00024414;
  flt_6AC238 = (double)word_4E5E6C * 0.00024414;
  flt_6AC23C = (double)word_4E5E6E * 0.00024414;
  flt_6AC240 = (double)word_4E5E70 * 0.00024414;
  v2 = *(int **)(a1 + 20);
  v3 = *v2;
  if ( v2[1] != 0 )
  {
    v4 = dword_623688;
    do
    {
      v5 = 16 * (*(_DWORD *)(v3 + 12) & 0x7FFF);
      v6 = flt_6AC23C * *(float *)(v3 + 4) + flt_6AC240 * *(float *)(v3 + 8) + *(float *)v3 * flt_6AC238 + flt_6AC24C;
      v16 = flt_6AC224 * *(float *)(v3 + 4) + flt_6AC228 * *(float *)(v3 + 8) + *(float *)v3 * flt_6AC220 + flt_6AC244;
      v17 = flt_6AC230 * *(float *)(v3 + 4) + flt_6AC234 * *(float *)(v3 + 8) + *(float *)v3 * flt_6AC22C + flt_6AC248;
      *(float *)(v4 + v5 + 8) = v6;
      if ( v8 != 0 )
        v9 = (double)dword_4EFB30 / -v6;
      else
        v9 = (double)dword_4EFB30 / (v6 - -1.0);
      v10 = v9;
      v11 = v9 * v16;
      if ( (BYTE1(*(_DWORD *)(v3 + 12)) & 0x80u) != 0 )
      {
        v12 = dword_623688;
        v13 = v11 + *(float *)(dword_623688 + v5);
        v14 = v10 * v17 + *(float *)(dword_623688 + v5 + 4);
        if ( byte_4EFB78 != 0 )
        {
          v13 = v13 + *(float *)&dword_4EFB6C;
          v14 = v14 + *(float *)&dword_4EFB70;
          *(float *)(dword_623688 + v5 + 8) = *(float *)&dword_4EFB74;
          v12 = dword_623688;
        }
        *(float *)(v12 + v5) = v13 * 0.5;
        *(float *)(dword_623688 + v5 + 4) = v14 * 0.5;
      }
      else
      {
        ++dword_623654;
        *(float *)(dword_623688 + v5) = v11;
        *(float *)(dword_623688 + v5 + 4) = v10 * v17;
        if ( byte_4EFB78 != 0 )
        {
          *(float *)(dword_623688 + v5) = *(float *)&dword_4EFB6C + *(float *)(dword_623688 + v5);
          *(float *)(dword_623688 + v5 + 4) = *(float *)&dword_4EFB70 + *(float *)(dword_623688 + v5 + 4);
          *(float *)(dword_623688 + v5 + 8) = *(float *)&dword_4EFB74;
        }
      }
      *(_DWORD *)(dword_623688 + v5 + 12) = 1;
      v4 = dword_623688;
      if ( *(float *)(dword_623688 + v5) < (double)flt_7BD968
        || *(float *)(dword_623688 + v5) > (double)flt_6225CC
        || *(float *)(dword_623688 + v5 + 4) < (double)flt_7C623C
        || *(float *)(dword_623688 + v5 + 4) > (double)flt_7C6238 )
      {
        *(_DWORD *)(dword_623688 + v5 + 12) |= 2u;
        v4 = dword_623688;
      }
      v3 += 16;
      ++v1;
    }
    while ( v1 < v2[1] );
  }
  return v2[1];
}

// 0x411780  sub_411780
int sub_411780()
{
  dword_623680 = (int)&unk_6236A0 + 16 * dword_623654;
  dword_623688 = (int)&unk_734DE0 + 16 * dword_623654;
  return 16 * dword_623654;
}

// 0x4117b0  sub_4117B0
int __cdecl sub_4117B0(int a1)
{
  unsigned int v1; // edi
  _DWORD *v2; // eax
  int v3; // edx
  int v4; // esi
  int v5; // ecx
  double v6; // st7
  double v7; // st6
  char v9; // c0
  double v10; // st5
  int v11; // eax
  double v12; // st7
  float v14; // [esp+8h] [ebp-18h]
  _DWORD *v15; // [esp+1Ch] [ebp-4h]
  float v16; // [esp+28h] [ebp+8h]
  float v17; // [esp+28h] [ebp+8h]
  float v18; // [esp+28h] [ebp+8h]
  float v19; // [esp+28h] [ebp+8h]

  v1 = 0;
  flt_6AC220 = (double)word_4E5E60 * 0.00024414062;
  flt_6AC224 = (double)word_4E5E62 * 0.00024414;
  flt_6AC228 = (double)word_4E5E64 * 0.00024414;
  flt_6AC22C = (double)word_4E5E66 * 0.00024414;
  flt_6AC230 = (double)word_4E5E68 * 0.00024414;
  flt_6AC234 = (double)word_4E5E6A * 0.00024414;
  flt_6AC238 = (double)word_4E5E6C * 0.00024414;
  flt_6AC23C = (double)word_4E5E6E * 0.00024414;
  flt_6AC240 = (double)word_4E5E70 * 0.00024414;
  flt_6AC244 = (float)dword_4E5E74;
  flt_6AC248 = (float)dword_4E5E78;
  flt_6AC24C = (float)dword_4E5E7C;
  v2 = *(_DWORD **)(a1 + 20);
  v15 = v2;
  v3 = *v2;
  if ( v2[1] != 0 )
  {
    v4 = dword_623688;
    do
    {
      v5 = 16 * (*(_DWORD *)(v3 + 12) & 0x7FFF);
      v6 = flt_6AC228 * *(float *)(v3 + 8) + flt_6AC224 * *(float *)(v3 + 4) + *(float *)v3 * flt_6AC220 + flt_6AC244;
      v14 = flt_6AC234 * *(float *)(v3 + 8) + flt_6AC230 * *(float *)(v3 + 4) + *(float *)v3 * flt_6AC22C + flt_6AC248;
      v7 = flt_6AC240 * *(float *)(v3 + 8) + flt_6AC23C * *(float *)(v3 + 4) + *(float *)v3 * flt_6AC238 + flt_6AC24C;
      *(float *)(v4 + v5 + 8) = v7;
      if ( v9 != 0 )
        v10 = -v7;
      else
        v10 = v7 - -1.0;
      v16 = (double)dword_4EFB30 / v10;
      if ( (BYTE1(*(_DWORD *)(v3 + 12)) & 0x80u) != 0 )
      {
        v11 = dword_623688;
        v12 = v6 * v16 + *(float *)(dword_623688 + v5);
        v17 = v16 * v14 + *(float *)(dword_623688 + v5 + 4);
        if ( byte_4EFB78 != 0 )
        {
          v12 = v12 + *(float *)&dword_4EFB6C;
          v17 = v17 + *(float *)&dword_4EFB70;
          *(float *)(dword_623688 + v5 + 8) = *(float *)&dword_4EFB74;
          v11 = dword_623688;
        }
        *(float *)(v11 + v5) = v12 * 0.5;
        *(float *)(dword_623688 + v5 + 4) = v17 * 0.5;
      }
      else
      {
        ++dword_623654;
        *(float *)(dword_623688 + v5) = v16 * v6;
        *(float *)(dword_623688 + v5 + 4) = v16 * v14;
        if ( byte_4EFB78 != 0 )
        {
          *(float *)(dword_623688 + v5) = *(float *)&dword_4EFB6C + *(float *)(dword_623688 + v5);
          *(float *)(dword_623688 + v5 + 4) = *(float *)&dword_4EFB70 + *(float *)(dword_623688 + v5 + 4);
          *(float *)(dword_623688 + v5 + 8) = *(float *)&dword_4EFB74;
        }
      }
      v18 = (double)(unsigned __int16)dword_4EFB50 + *(float *)(dword_623688 + v5);
      *(_DWORD *)(v5 + dword_623680) = (int)v18;
      v19 = (double)HIWORD(dword_4EFB50) - *(float *)(dword_623688 + v5 + 4);
      *(_DWORD *)(dword_623680 + v5 + 4) = (int)v19;
      *(_DWORD *)(dword_623680 + v5 + 8) = (int)*(float *)(dword_623688 + v5 + 8);
      *(_DWORD *)(dword_623688 + v5 + 12) = 1;
      v4 = dword_623688;
      if ( *(float *)(dword_623688 + v5) < (double)flt_7BD968
        || *(float *)(dword_623688 + v5) > (double)flt_6225CC
        || *(float *)(dword_623688 + v5 + 4) < (double)flt_7C623C
        || *(float *)(dword_623688 + v5 + 4) > (double)flt_7C6238 )
      {
        *(_DWORD *)(dword_623688 + v5 + 12) |= 2u;
        v4 = dword_623688;
      }
      v3 += 16;
      ++v1;
    }
    while ( v1 < v15[1] );
    v2 = v15;
  }
  return v2[1];
}

// 0x411b60  sub_411B60
unsigned int __cdecl sub_411B60(int a1)
{
  _DWORD *v1; // edx
  unsigned int result; // eax
  _DWORD *v3; // ecx

  v1 = *(_DWORD **)(a1 + 20);
  result = 0;
  if ( v1[1] != 0 )
  {
    v3 = (_DWORD *)(*v1 + 12);
    do
    {
      if ( (*v3 & 0x8000) == 0 )
        ++dword_623654;
      v3 += 4;
      ++result;
    }
    while ( result < v1[1] );
  }
  return result;
}

// 0x411ba0  sub_411BA0
int __cdecl sub_411BA0(int a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ebx
  int v5; // eax
  int v6; // ebp
  unsigned __int16 *v7; // esi
  unsigned __int16 v8; // ax
  int v9; // ecx
  int v10; // edx
  unsigned __int16 *v11; // ebp
  _DWORD *v12; // eax
  int v13; // eax
  unsigned __int16 v14; // cx
  int v15; // ebp
  int v16; // ecx
  int v17; // eax
  unsigned __int16 *v18; // edx
  _DWORD *v19; // eax
  _DWORD *v20; // ecx
  char *v21; // ebp
  int v22; // eax
  unsigned __int16 v23; // dx
  int v24; // ecx
  int v25; // eax
  unsigned __int16 *v26; // edx
  _DWORD *v27; // eax
  _DWORD *v28; // ecx
  char *v29; // ebp
  int v30; // eax
  unsigned __int16 v31; // ax
  int v32; // ebp
  int v33; // ecx
  int v34; // eax
  unsigned __int16 *v35; // edx
  _DWORD *v36; // eax
  _DWORD *v37; // ecx
  char *v38; // ebp
  int v39; // eax
  unsigned __int16 v40; // cx
  int v41; // ebp
  int v42; // ecx
  int v43; // edx
  unsigned __int16 *v44; // ebp
  _DWORD *v45; // eax
  int v46; // eax
  unsigned __int16 v47; // dx
  int v48; // ecx
  int v49; // eax
  unsigned __int16 *v50; // edx
  _DWORD *v51; // eax
  _DWORD *v52; // ecx
  char *v53; // ebp
  int v54; // eax
  unsigned __int16 v55; // ax
  int v56; // ebp
  int v57; // ecx
  int v58; // eax
  unsigned __int16 *v59; // edx
  _DWORD *v60; // eax
  _DWORD *v61; // ecx
  char *v62; // ebp
  int v63; // eax
  unsigned __int16 v64; // cx
  int v65; // ebp
  int v66; // ecx
  int v67; // edx
  unsigned __int16 *v68; // ebp
  _DWORD *v69; // eax
  int v70; // eax
  int v71; // ecx
  int result; // eax
  int v73; // [esp+1Ch] [ebp-4h]
  int v74; // [esp+1Ch] [ebp-4h]
  int v75; // [esp+1Ch] [ebp-4h]
  int v76; // [esp+1Ch] [ebp-4h]
  int v77; // [esp+1Ch] [ebp-4h]
  int v78; // [esp+24h] [ebp+4h]
  int v79; // [esp+24h] [ebp+4h]
  int v80; // [esp+24h] [ebp+4h]
  int v81; // [esp+24h] [ebp+4h]
  int v82; // [esp+24h] [ebp+4h]
  int v83; // [esp+24h] [ebp+4h]
  int v84; // [esp+24h] [ebp+4h]
  int v85; // [esp+24h] [ebp+4h]
  int v86; // [esp+2Ch] [ebp+Ch]

  if ( *(unsigned __int16 *)(a3 + 14) != word_4B1AB0 )
  {
    word_4B1AB0 = *(_WORD *)(a3 + 14);
    sub_40CCE0(4 * *(unsigned __int16 *)(a3 + 14));
  }
  dword_5F8530 = LODWORD(flt_4EFB48);
  dword_621604 = LODWORD(flt_4EFB38);
  v3 = *(__int16 *)(a3 + 6);
  flt_6AC244 = (float)dword_4E5E74;
  flt_6AC248 = (float)dword_4E5E78;
  flt_6AC24C = (float)dword_4E5E7C;
  v4 = 0;
  flt_6AC220 = (double)word_4E5E60 * 0.00024414;
  flt_6AC224 = (double)word_4E5E62 * 0.00024414;
  flt_6AC228 = (double)word_4E5E64 * 0.00024414;
  flt_621600 = (float)(4 * v3);
  flt_6AC22C = (double)word_4E5E66 * 0.00024414;
  flt_6AC230 = (double)word_4E5E68 * 0.00024414;
  flt_6AC234 = (double)word_4E5E6A * 0.00024414;
  flt_6AC238 = (double)word_4E5E6C * 0.00024414;
  dword_621614 = (unsigned __int16)dword_4EFB4C >> 1;
  flt_6AC23C = (double)word_4E5E6E * 0.00024414;
  dword_62161C = HIWORD(dword_4EFB4C) >> 1;
  flt_6AC240 = (double)word_4E5E70 * 0.00024414;
  dword_621610 = -((unsigned __int16)dword_4EFB4C >> 1);
  dword_621618 = -dword_62161C;
  v5 = *(_DWORD *)(a1 + 20);
  if ( v5 == 0 )
    return a2;
  v6 = *(_DWORD *)(v5 + 20);
  v7 = *(unsigned __int16 **)(v5 + 16);
  v86 = v6;
  if ( v6 == 0 )
    return a2;
  while ( 2 )
  {
    switch ( *((_BYTE *)v7 + 3) )
    {
      case '4':
        HIWORD(v9) = 0;
        v8 = *v7;
        dword_604144[0] = (int)&unk_60414C;
        dword_621608 = (int)dword_604140;
        dword_604154 = (int)dword_604140;
        LOWORD(v9) = *v7;
        v10 = 1;
        v86 = v6 - v8;
        v11 = v7;
        if ( *v7 != 0 )
        {
          v12 = &unk_604160;
          v78 = v9;
          v10 = v9 + 1;
          while ( 1 )
          {
            *(v12 - 5) = v11;
            *(v12 - 4) = v12 - 2;
            *v12 = v12 - 5;
            v12 += 3;
            if ( --v78 == 0 )
              break;
            v11 += 12;
          }
        }
        dword_604148[0] = 0;
        v13 = 3 * v10;
        dword_604140[v13] = 0;
        dword_604144[v13] = 0;
        dword_604148[v13] = 0;
        sub_416E90(dword_4692B8);
        sub_40FE50(dword_4692B8);
        v4 += dword_4B1A78(v4 + a2, dword_4692B8, &unk_469510, &unk_469698, &unk_469920, 1);
        v7 += 12 * *v7;
        goto LABEL_50;
      case '8':
        v40 = *v7;
        dword_621608 = (int)dword_604140;
        v41 = v6 - v40;
        v42 = v40;
        dword_604144[0] = (int)&unk_60414C;
        dword_604154 = (int)dword_604140;
        LOWORD(v42) = *v7;
        v43 = 1;
        v86 = v41;
        v44 = v7;
        if ( *v7 != 0 )
        {
          v45 = &unk_604160;
          v82 = v42;
          v43 = v42 + 1;
          while ( 1 )
          {
            *(v45 - 5) = v44;
            *(v45 - 4) = v45 - 2;
            *v45 = v45 - 5;
            v45 += 3;
            if ( --v82 == 0 )
              break;
            v44 += 14;
          }
        }
        dword_604148[0] = 0;
        v46 = 3 * v43;
        dword_604140[v46] = 0;
        dword_604144[v46] = 0;
        dword_604148[v46] = 0;
        sub_416C10(dword_469330);
        sub_40FE50(dword_469330);
        v4 += dword_4B1A74(v4 + a2, dword_469330, &unk_469560, &unk_469800, &unk_469938, 1);
        v7 += 14 * *v7;
        goto LABEL_50;
      case '<':
        HIWORD(v33) = 0;
        v31 = *v7;
        dword_604144[0] = (int)&unk_60414C;
        v32 = v6 - v31;
        dword_621608 = (int)dword_604140;
        dword_604154 = (int)dword_604140;
        LOWORD(v33) = *v7;
        v34 = 1;
        v86 = v32;
        v35 = v7;
        if ( *v7 != 0 )
        {
          v81 = v33;
          v36 = &unk_604160;
          v75 = v33 + 1;
          do
          {
            v37 = v36 - 5;
            v38 = (char *)(v36 - 2);
            v36 += 3;
            *v37 = v35;
            *(v36 - 7) = v38;
            *(v36 - 3) = v37;
            v35 += 16;
            --v81;
          }
          while ( v81 != 0 );
          v34 = v75;
        }
        dword_604148[0] = 0;
        v39 = 3 * v34;
        dword_604140[v39] = 0;
        dword_604144[v39] = 0;
        dword_604148[v39] = 0;
        sub_416E90(dword_4692E8);
        sub_40FE50(dword_4692E8);
        v4 += dword_4B1A78(v4 + a2, dword_4692E8, &unk_469538, &unk_469728, &unk_469928, 1);
        v7 += 16 * *v7;
        goto LABEL_50;
      case '@':
        v64 = *v7;
        dword_621608 = (int)dword_604140;
        v65 = v6 - v64;
        v66 = v64;
        dword_604144[0] = (int)&unk_60414C;
        dword_604154 = (int)dword_604140;
        LOWORD(v66) = *v7;
        v67 = 1;
        v86 = v65;
        v68 = v7;
        if ( *v7 != 0 )
        {
          v69 = &unk_604160;
          v85 = v66;
          v67 = v66 + 1;
          while ( 1 )
          {
            *(v69 - 5) = v68;
            *(v69 - 4) = v69 - 2;
            *v69 = v69 - 5;
            v69 += 3;
            if ( --v85 == 0 )
              break;
            v68 += 20;
          }
        }
        dword_604148[0] = 0;
        v70 = 3 * v67;
        dword_604140[v70] = 0;
        dword_604144[v70] = 0;
        dword_604148[v70] = 0;
        sub_416C10(dword_469360);
        sub_40FE50(dword_469360);
        v4 += dword_4B1A74(v4 + a2, dword_469360, &unk_469588, &unk_469890, &unk_469940, 1);
        v7 += 20 * *v7;
        goto LABEL_50;
      case 'H':
        v14 = *v7;
        dword_621608 = (int)dword_604140;
        v15 = v6 - v14;
        v16 = v14;
        dword_604144[0] = (int)&unk_60414C;
        dword_604154 = (int)dword_604140;
        LOWORD(v16) = *v7;
        v17 = 1;
        v86 = v15;
        v18 = v7;
        if ( *v7 != 0 )
        {
          v79 = v16;
          v19 = &unk_604160;
          v73 = v16 + 1;
          do
          {
            v20 = v19 - 5;
            v21 = (char *)(v19 - 2);
            v19 += 3;
            *v20 = v18;
            *(v19 - 7) = v21;
            *(v19 - 3) = v20;
            v18 += 12;
            --v79;
          }
          while ( v79 != 0 );
          v17 = v73;
        }
        dword_604148[0] = 0;
        v22 = 3 * v17;
        dword_604140[v22] = 0;
        dword_604144[v22] = 0;
        dword_604148[v22] = 0;
        sub_416E90(dword_4692D0);
        sub_40FE50(dword_4692D0);
        v4 += dword_4B1A78(v4 + a2, dword_4692D0, &unk_4B1AF0, &unk_4696E0, &unk_4B1C08, 0);
        v7 += 12 * *v7;
        goto LABEL_50;
      case 'J':
        v23 = *v7;
        HIWORD(v24) = 0;
        dword_621608 = (int)dword_604140;
        dword_604144[0] = (int)&unk_60414C;
        dword_604154 = (int)dword_604140;
        LOWORD(v24) = *v7;
        v25 = 1;
        v86 = v6 - v23;
        v26 = v7;
        if ( *v7 != 0 )
        {
          v80 = v24;
          v27 = &unk_604160;
          v74 = v24 + 1;
          do
          {
            v28 = v27 - 5;
            v29 = (char *)(v27 - 2);
            v27 += 3;
            *v28 = v26;
            *(v27 - 7) = v29;
            *(v27 - 3) = v28;
            v26 += 14;
            --v80;
          }
          while ( v80 != 0 );
          v25 = v74;
        }
        dword_604148[0] = 0;
        v30 = 3 * v25;
        dword_604140[v30] = 0;
        dword_604144[v30] = 0;
        dword_604148[v30] = 0;
        sub_416E90(dword_469300);
        sub_40FE50(dword_469300);
        v4 += dword_4B1A78(v4 + a2, dword_469300, 0, &unk_469770, &unk_469930, 1);
        v7 += 14 * *v7;
        goto LABEL_50;
      case 'L':
        v47 = *v7;
        HIWORD(v48) = 0;
        dword_621608 = (int)dword_604140;
        dword_604144[0] = (int)&unk_60414C;
        dword_604154 = (int)dword_604140;
        LOWORD(v48) = *v7;
        v49 = 1;
        v86 = v6 - v47;
        v50 = v7;
        if ( *v7 != 0 )
        {
          v83 = v48;
          v51 = &unk_604160;
          v76 = v48 + 1;
          do
          {
            v52 = v51 - 5;
            v53 = (char *)(v51 - 2);
            v51 += 3;
            *v52 = v50;
            *(v51 - 7) = v53;
            *(v51 - 3) = v52;
            v50 += 14;
            --v83;
          }
          while ( v83 != 0 );
          v49 = v76;
        }
        dword_604148[0] = 0;
        v54 = 3 * v49;
        dword_604140[v54] = 0;
        dword_604144[v54] = 0;
        dword_604148[v54] = 0;
        sub_416C10(dword_469348);
        sub_40FE50(dword_469348);
        v4 += dword_4B1A74(v4 + a2, dword_469348, &unk_4B1B40, &unk_469848, &unk_4B1C08, 0);
        v7 += 14 * *v7;
        goto LABEL_50;
      case 'N':
        HIWORD(v57) = 0;
        v55 = *v7;
        dword_604144[0] = (int)&unk_60414C;
        v56 = v6 - v55;
        dword_621608 = (int)dword_604140;
        dword_604154 = (int)dword_604140;
        LOWORD(v57) = *v7;
        v58 = 1;
        v86 = v56;
        v59 = v7;
        if ( *v7 != 0 )
        {
          v84 = v57;
          v60 = &unk_604160;
          v77 = v57 + 1;
          do
          {
            v61 = v60 - 5;
            v62 = (char *)(v60 - 2);
            v60 += 3;
            *v61 = v59;
            *(v60 - 7) = v62;
            *(v60 - 3) = v61;
            v59 += 16;
            --v84;
          }
          while ( v84 != 0 );
          v58 = v77;
        }
        dword_604148[0] = 0;
        v63 = 3 * v58;
        dword_604140[v63] = 0;
        dword_604144[v63] = 0;
        dword_604148[v63] = 0;
        sub_416C10(dword_469378);
        sub_40FE50(dword_469378);
        v4 += dword_4B1A74(v4 + a2, dword_469378, 0, &unk_4698D8, &unk_469948, 1);
        v7 += 16 * *v7;
        goto LABEL_50;
      case 'd':
        if ( *v7 != 0 )
        {
          v71 = *v7;
          v7 += 8 * v71;
          do
          {
            --v6;
            --v71;
          }
          while ( v71 != 0 );
          v86 = v6;
        }
LABEL_50:
        v6 = v86;
        if ( v86 != 0 )
          continue;
        result = v4 + a2;
        break;
      default:
        return 0;
    }
    return result;
  }
}

// 0x412540  sub_412540
int sub_412540()
{
  int v0; // edx
  __int16 *v1; // ebp
  int v2; // ecx
  unsigned __int16 v3; // ax
  _DWORD *v4; // esi
  int v5; // eax
  _DWORD *v6; // esi
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // edx
  int *v10; // ecx
  int v11; // eax
  int i; // eax
  _BYTE *v13; // edi
  int *v14; // ebp
  _DWORD *v15; // edx
  int v16; // esi
  int v17; // eax
  int *v18; // ecx
  int v19; // eax
  int k; // eax
  _DWORD *v21; // edi
  _DWORD *v22; // ebp
  int m; // ebx
  int v24; // esi
  int v25; // esi
  int v26; // eax
  int *v27; // esi
  int v28; // eax
  int v29; // ecx
  int v30; // edi
  int v31; // edx
  int *v32; // ebp
  _DWORD *v33; // edx
  int v34; // eax
  double v35; // st7
  double v36; // st7
  double v37; // st6
  _DWORD *n; // edx
  int v39; // eax
  double v40; // st7
  double v41; // st7
  double v42; // st7
  double v43; // st6
  bool v44; // zf
  int v45; // edi
  int *v46; // ebp
  _DWORD *v47; // edx
  int v48; // eax
  double v49; // st7
  double v50; // st7
  double v51; // st6
  _DWORD *ii; // edx
  int v53; // eax
  double v54; // st7
  double v55; // st7
  double v56; // st7
  double v57; // st6
  int v58; // eax
  char *v59; // ebp
  char *v60; // edx
  int v61; // ebx
  int v62; // esi
  int v63; // edi
  char *v64; // esi
  int v65; // eax
  _DWORD *v66; // eax
  char *v67; // ebx
  char *v68; // edi
  int v69; // ebp
  int v70; // esi
  int v71; // edx
  int *v72; // eax
  int v73; // ecx
  unsigned int v74; // edx
  int j; // [esp+358h] [ebp-232CCh]
  int *v77; // [esp+358h] [ebp-232CCh]
  int *v78; // [esp+358h] [ebp-232CCh]
  int v79; // [esp+358h] [ebp-232CCh]
  int *v80; // [esp+358h] [ebp-232CCh]
  int v81; // [esp+35Ch] [ebp-232C8h]
  int v82; // [esp+35Ch] [ebp-232C8h]
  int v83; // [esp+35Ch] [ebp-232C8h]
  int v84; // [esp+360h] [ebp-232C4h]
  _DWORD v85[16]; // [esp+364h] [ebp-232C0h] BYREF
  _BYTE v86[16000]; // [esp+3A4h] [ebp-23280h] BYREF
  _BYTE v87[8000]; // [esp+4224h] [ebp-1F400h] BYREF
  char v88; // [esp+6164h] [ebp-1D4C0h] BYREF
  _BYTE v89[16000]; // [esp+11CE4h] [ebp-11940h] BYREF
  _BYTE v90[56000]; // [esp+15B64h] [ebp-DAC0h] BYREF

  if ( dword_4B1D00 == 0 && dword_4E5E40 > 0 )
  {
    dword_7C6318(16640);
    dword_7C90AC(5888);
    dword_7C9090();
    dword_7C639C(3553);
    dword_7C639C(3042);
    dword_7C639C(3008);
    dword_52FCC0 = dword_4E7DC0[0];
    while ( dword_52FCC0 != 0 )
    {
      dword_7C64D8(4);
      if ( byte_4B3232 != 0 )
      {
        *(float *)(dword_52FCC0 + 44) = flt_467740 * *(float *)(dword_52FCC0 + 44);
        *(float *)(dword_52FCC0 + 48) = flt_467740 * *(float *)(dword_52FCC0 + 48);
        *(float *)(dword_52FCC0 + 52) = flt_467740 * *(float *)(dword_52FCC0 + 52);
        *(float *)(dword_52FCC0 + 60) = flt_467740 * *(float *)(dword_52FCC0 + 60);
        *(float *)(dword_52FCC0 + 64) = flt_467740 * *(float *)(dword_52FCC0 + 64);
        *(float *)(dword_52FCC0 + 68) = flt_467740 * *(float *)(dword_52FCC0 + 68);
        *(float *)(dword_52FCC0 + 76) = flt_467740 * *(float *)(dword_52FCC0 + 76);
        *(float *)(dword_52FCC0 + 80) = flt_467740 * *(float *)(dword_52FCC0 + 80);
        *(float *)(dword_52FCC0 + 84) = flt_467740 * *(float *)(dword_52FCC0 + 84);
      }
      dword_7C64C0(
        *(_DWORD *)(dword_52FCC0 + 76),
        *(_DWORD *)(dword_52FCC0 + 80),
        *(_DWORD *)(dword_52FCC0 + 84));
      dword_7C6538(*(_DWORD *)(dword_52FCC0 + 8));
      dword_7C64C0(
        *(_DWORD *)(dword_52FCC0 + 60),
        *(_DWORD *)(dword_52FCC0 + 64),
        *(_DWORD *)(dword_52FCC0 + 68));
      dword_7C6538(*(_DWORD *)(dword_52FCC0 + 4));
      dword_7C64C0(
        *(_DWORD *)(dword_52FCC0 + 44),
        *(_DWORD *)(dword_52FCC0 + 48),
        *(_DWORD *)(dword_52FCC0 + 52));
      dword_7C6538(*(_DWORD *)dword_52FCC0);
      dword_52FCC0 = *(_DWORD *)(dword_52FCC0 + 12);
      dword_7C62A8();
    }
    dword_52FBA0 = dword_4E7DC4[0];
    while ( dword_52FBA0 != 0 )
    {
      dword_7C64D8(7);
      if ( byte_4B3232 != 0 )
      {
        *(float *)(dword_52FBA0 + 56) = flt_467740 * *(float *)(dword_52FBA0 + 56);
        *(float *)(dword_52FBA0 + 60) = flt_467740 * *(float *)(dword_52FBA0 + 60);
        *(float *)(dword_52FBA0 + 64) = flt_467740 * *(float *)(dword_52FBA0 + 64);
        *(float *)(dword_52FBA0 + 72) = flt_467740 * *(float *)(dword_52FBA0 + 72);
        *(float *)(dword_52FBA0 + 76) = flt_467740 * *(float *)(dword_52FBA0 + 76);
        *(float *)(dword_52FBA0 + 80) = flt_467740 * *(float *)(dword_52FBA0 + 80);
        *(float *)(dword_52FBA0 + 88) = flt_467740 * *(float *)(dword_52FBA0 + 88);
        *(float *)(dword_52FBA0 + 92) = flt_467740 * *(float *)(dword_52FBA0 + 92);
        *(float *)(dword_52FBA0 + 96) = flt_467740 * *(float *)(dword_52FBA0 + 96);
        *(float *)(dword_52FBA0 + 104) = flt_467740 * *(float *)(dword_52FBA0 + 104);
        *(float *)(dword_52FBA0 + 108) = flt_467740 * *(float *)(dword_52FBA0 + 108);
        *(float *)(dword_52FBA0 + 112) = flt_467740 * *(float *)(dword_52FBA0 + 112);
      }
      dword_7C64C0(
        *(_DWORD *)(dword_52FBA0 + 88),
        *(_DWORD *)(dword_52FBA0 + 92),
        *(_DWORD *)(dword_52FBA0 + 96));
      dword_7C6538(*(_DWORD *)(dword_52FBA0 + 8));
      dword_7C64C0(
        *(_DWORD *)(dword_52FBA0 + 104),
        *(_DWORD *)(dword_52FBA0 + 108),
        *(_DWORD *)(dword_52FBA0 + 112));
      dword_7C6538(*(_DWORD *)(dword_52FBA0 + 12));
      dword_7C64C0(
        *(_DWORD *)(dword_52FBA0 + 72),
        *(_DWORD *)(dword_52FBA0 + 76),
        *(_DWORD *)(dword_52FBA0 + 80));
      dword_7C6538(*(_DWORD *)(dword_52FBA0 + 4));
      dword_7C64C0(
        *(_DWORD *)(dword_52FBA0 + 56),
        *(_DWORD *)(dword_52FBA0 + 60),
        *(_DWORD *)(dword_52FBA0 + 64));
      dword_7C6538(*(_DWORD *)dword_52FBA0);
      dword_52FBA0 = *(_DWORD *)(dword_52FBA0 + 16);
      dword_7C62A8();
    }
    dword_7C64AC(1065353216, 1065353216, 1065353216, 1065353216);
    v0 = 1;
    memset(v85, 0, sizeof(v85));
    v1 = &word_622600[dword_4B1C90];
    if ( v1 >= word_622602 )
    {
      v2 = 0;
      do
      {
        v3 = word_622602[v2++];
        v4 = &v85[v3 + 8];
        v5 = *v4 + 2000 * v3;
        ++*v4;
        *(_DWORD *)&v89[4 * v5 + 8000] = v0;
        LOWORD(v5) = word_621620[v2];
        v6 = &v85[(unsigned __int16)v5];
        v7 = *v6 + 2000 * (unsigned __int16)v5;
        ++*v6;
        *(_DWORD *)&v86[4 * v7 + 8000] = v0++;
      }
      while ( &word_622602[v2] <= v1 );
    }
    v8 = v85[9];
    if ( byte_4B3232 != 0 )
    {
      if ( v85[9] > 0 )
      {
        v9 = v90;
        do
        {
          v10 = &dword_4E7DC0[4 * *v9];
          v11 = *v10;
          for ( dword_52FCC0 = *v10; dword_52FCC0 != 0; v11 = dword_52FCC0 )
          {
            *(float *)(v11 + 44) = flt_467740 * *(float *)(v11 + 44);
            *(float *)(dword_52FCC0 + 48) = flt_467740 * *(float *)(dword_52FCC0 + 48);
            *(float *)(dword_52FCC0 + 52) = flt_467740 * *(float *)(dword_52FCC0 + 52);
            *(float *)(dword_52FCC0 + 60) = flt_467740 * *(float *)(dword_52FCC0 + 60);
            *(float *)(dword_52FCC0 + 64) = flt_467740 * *(float *)(dword_52FCC0 + 64);
            *(float *)(dword_52FCC0 + 68) = flt_467740 * *(float *)(dword_52FCC0 + 68);
            *(float *)(dword_52FCC0 + 76) = flt_467740 * *(float *)(dword_52FCC0 + 76);
            *(float *)(dword_52FCC0 + 80) = flt_467740 * *(float *)(dword_52FCC0 + 80);
            *(float *)(dword_52FCC0 + 84) = flt_467740 * *(float *)(dword_52FCC0 + 84);
            dword_52FCC0 = *(_DWORD *)(dword_52FCC0 + 12);
          }
          dword_52FBA0 = v10[1];
          for ( i = dword_52FBA0; dword_52FBA0 != 0; i = dword_52FBA0 )
          {
            *(float *)(i + 56) = flt_467740 * *(float *)(i + 56);
            *(float *)(dword_52FBA0 + 60) = flt_467740 * *(float *)(dword_52FBA0 + 60);
            *(float *)(dword_52FBA0 + 64) = flt_467740 * *(float *)(dword_52FBA0 + 64);
            *(float *)(dword_52FBA0 + 72) = flt_467740 * *(float *)(dword_52FBA0 + 72);
            *(float *)(dword_52FBA0 + 76) = flt_467740 * *(float *)(dword_52FBA0 + 76);
            *(float *)(dword_52FBA0 + 80) = flt_467740 * *(float *)(dword_52FBA0 + 80);
            *(float *)(dword_52FBA0 + 88) = flt_467740 * *(float *)(dword_52FBA0 + 88);
            *(float *)(dword_52FBA0 + 92) = flt_467740 * *(float *)(dword_52FBA0 + 92);
            *(float *)(dword_52FBA0 + 96) = flt_467740 * *(float *)(dword_52FBA0 + 96);
            *(float *)(dword_52FBA0 + 104) = flt_467740 * *(float *)(dword_52FBA0 + 104);
            *(float *)(dword_52FBA0 + 108) = flt_467740 * *(float *)(dword_52FBA0 + 108);
            *(float *)(dword_52FBA0 + 112) = flt_467740 * *(float *)(dword_52FBA0 + 112);
            dword_52FBA0 = *(_DWORD *)(dword_52FBA0 + 16);
          }
          ++v9;
          --v8;
        }
        while ( v8 != 0 );
      }
      v13 = v87;
      v14 = &v85[1];
      for ( j = 4; j != 0; --j )
      {
        if ( *v14 > 0 )
        {
          v15 = v13;
          v16 = *v14;
          do
          {
            v17 = 4 * *v15;
            v18 = &dword_4E7DC0[v17];
            v19 = dword_4E7DC8[v17];
            for ( dword_52FCC0 = v19; dword_52FCC0 != 0; v19 = dword_52FCC0 )
            {
              *(float *)(v19 + 44) = flt_467740 * *(float *)(v19 + 44);
              *(float *)(dword_52FCC0 + 48) = flt_467740 * *(float *)(dword_52FCC0 + 48);
              *(float *)(dword_52FCC0 + 52) = flt_467740 * *(float *)(dword_52FCC0 + 52);
              *(float *)(dword_52FCC0 + 60) = flt_467740 * *(float *)(dword_52FCC0 + 60);
              *(float *)(dword_52FCC0 + 64) = flt_467740 * *(float *)(dword_52FCC0 + 64);
              *(float *)(dword_52FCC0 + 68) = flt_467740 * *(float *)(dword_52FCC0 + 68);
              *(float *)(dword_52FCC0 + 76) = flt_467740 * *(float *)(dword_52FCC0 + 76);
              *(float *)(dword_52FCC0 + 80) = flt_467740 * *(float *)(dword_52FCC0 + 80);
              *(float *)(dword_52FCC0 + 84) = flt_467740 * *(float *)(dword_52FCC0 + 84);
              dword_52FCC0 = *(_DWORD *)(dword_52FCC0 + 12);
            }
            dword_52FBA0 = v18[3];
            for ( k = dword_52FBA0; dword_52FBA0 != 0; k = dword_52FBA0 )
            {
              *(float *)(k + 56) = flt_467740 * *(float *)(k + 56);
              *(float *)(dword_52FBA0 + 60) = flt_467740 * *(float *)(dword_52FBA0 + 60);
              *(float *)(dword_52FBA0 + 64) = flt_467740 * *(float *)(dword_52FBA0 + 64);
              *(float *)(dword_52FBA0 + 72) = flt_467740 * *(float *)(dword_52FBA0 + 72);
              *(float *)(dword_52FBA0 + 76) = flt_467740 * *(float *)(dword_52FBA0 + 76);
              *(float *)(dword_52FBA0 + 80) = flt_467740 * *(float *)(dword_52FBA0 + 80);
              *(float *)(dword_52FBA0 + 88) = flt_467740 * *(float *)(dword_52FBA0 + 88);
              *(float *)(dword_52FBA0 + 92) = flt_467740 * *(float *)(dword_52FBA0 + 92);
              *(float *)(dword_52FBA0 + 96) = flt_467740 * *(float *)(dword_52FBA0 + 96);
              *(float *)(dword_52FBA0 + 104) = flt_467740 * *(float *)(dword_52FBA0 + 104);
              *(float *)(dword_52FBA0 + 108) = flt_467740 * *(float *)(dword_52FBA0 + 108);
              *(float *)(dword_52FBA0 + 112) = flt_467740 * *(float *)(dword_52FBA0 + 112);
              dword_52FBA0 = *(_DWORD *)(dword_52FBA0 + 16);
            }
            ++v15;
            --v16;
          }
          while ( v16 != 0 );
        }
        ++v14;
        v13 += 8000;
      }
      v8 = v85[9];
    }
    dword_7C632C(3553);
    dword_7C639C(3042);
    dword_7C639C(3008);
    v84 = 0;
    if ( v8 > 0 )
    {
      v21 = v86;
      v22 = v90;
      for ( m = v8; m != 0; --m )
      {
        v24 = *v22;
        if ( byte_52FD69[48 * *v22] != 0 )
        {
          *v21++ = v24;
          ++v84;
        }
        else
        {
          dword_7C6368(3553, *v22);
          v25 = 4 * v24;
          v26 = dword_4E7DC0[v25];
          v27 = &dword_4E7DC0[v25];
          dword_52FCC0 = v26;
          if ( v26 != 0 )
          {
            dword_7C64D8(4);
            while ( dword_52FCC0 != 0 )
            {
              dword_7C64D8(4);
              dword_7C64AC(
                *(_DWORD *)(dword_52FCC0 + 76),
                *(_DWORD *)(dword_52FCC0 + 80),
                *(_DWORD *)(dword_52FCC0 + 84),
                *(_DWORD *)(dword_52FCC0 + 88));
              dword_7C905C(*(_DWORD *)(dword_52FCC0 + 32), *(_DWORD *)(dword_52FCC0 + 36));
              dword_7C6538(*(_DWORD *)(dword_52FCC0 + 8));
              dword_7C64AC(
                *(_DWORD *)(dword_52FCC0 + 60),
                *(_DWORD *)(dword_52FCC0 + 64),
                *(_DWORD *)(dword_52FCC0 + 68),
                *(_DWORD *)(dword_52FCC0 + 72));
              dword_7C905C(*(_DWORD *)(dword_52FCC0 + 24), *(_DWORD *)(dword_52FCC0 + 28));
              dword_7C6538(*(_DWORD *)(dword_52FCC0 + 4));
              dword_7C64AC(
                *(_DWORD *)(dword_52FCC0 + 44),
                *(_DWORD *)(dword_52FCC0 + 48),
                *(_DWORD *)(dword_52FCC0 + 52),
                *(_DWORD *)(dword_52FCC0 + 56));
              dword_7C905C(*(_DWORD *)(dword_52FCC0 + 16), *(_DWORD *)(dword_52FCC0 + 20));
              dword_7C6538(*(_DWORD *)dword_52FCC0);
              dword_52FCC0 = *(_DWORD *)(dword_52FCC0 + 12);
              dword_7C62A8();
            }
            dword_7C62A8();
          }
          dword_52FBA0 = v27[1];
          if ( dword_52FBA0 != 0 )
          {
            dword_7C64D8(7);
            while ( dword_52FBA0 != 0 )
            {
              dword_7C64D8(7);
              dword_7C64AC(
                *(_DWORD *)(dword_52FBA0 + 88),
                *(_DWORD *)(dword_52FBA0 + 92),
                *(_DWORD *)(dword_52FBA0 + 96),
                *(_DWORD *)(dword_52FBA0 + 100));
              dword_7C905C(*(_DWORD *)(dword_52FBA0 + 36), *(_DWORD *)(dword_52FBA0 + 40));
              dword_7C6538(*(_DWORD *)(dword_52FBA0 + 8));
              dword_7C64AC(
                *(_DWORD *)(dword_52FBA0 + 104),
                *(_DWORD *)(dword_52FBA0 + 108),
                *(_DWORD *)(dword_52FBA0 + 112),
                *(_DWORD *)(dword_52FBA0 + 116));
              dword_7C905C(*(_DWORD *)(dword_52FBA0 + 44), *(_DWORD *)(dword_52FBA0 + 48));
              dword_7C6538(*(_DWORD *)(dword_52FBA0 + 12));
              dword_7C64AC(
                *(_DWORD *)(dword_52FBA0 + 72),
                *(_DWORD *)(dword_52FBA0 + 76),
                *(_DWORD *)(dword_52FBA0 + 80),
                *(_DWORD *)(dword_52FBA0 + 84));
              dword_7C905C(*(_DWORD *)(dword_52FBA0 + 28), *(_DWORD *)(dword_52FBA0 + 32));
              dword_7C6538(*(_DWORD *)(dword_52FBA0 + 4));
              dword_7C64AC(
                *(_DWORD *)(dword_52FBA0 + 56),
                *(_DWORD *)(dword_52FBA0 + 60),
                *(_DWORD *)(dword_52FBA0 + 64),
                *(_DWORD *)(dword_52FBA0 + 68));
              dword_7C905C(*(_DWORD *)(dword_52FBA0 + 20), *(_DWORD *)(dword_52FBA0 + 24));
              dword_7C6538(*(_DWORD *)dword_52FBA0);
              dword_52FBA0 = *(_DWORD *)(dword_52FBA0 + 16);
              dword_7C62A8();
            }
            dword_7C62A8();
          }
        }
        ++v22;
      }
    }
    dword_7C632C(3008);
    dword_7C632C(3042);
    dword_7C63C8(dword_4AC028, dword_4AC02C);
    dword_7C639C(3553);
    dword_52FBA0 = dword_4E7DCC[0];
    dword_7C64D8(7);
    while ( dword_52FBA0 != 0 )
    {
      dword_7C64D8(7);
      dword_7C64AC(
        *(_DWORD *)(dword_52FBA0 + 88),
        *(_DWORD *)(dword_52FBA0 + 92),
        *(_DWORD *)(dword_52FBA0 + 96),
        *(_DWORD *)(dword_52FBA0 + 100));
      dword_7C905C(*(_DWORD *)(dword_52FBA0 + 36), *(_DWORD *)(dword_52FBA0 + 40));
      dword_7C6538(*(_DWORD *)(dword_52FBA0 + 8));
      dword_7C64AC(
        *(_DWORD *)(dword_52FBA0 + 104),
        *(_DWORD *)(dword_52FBA0 + 108),
        *(_DWORD *)(dword_52FBA0 + 112),
        *(_DWORD *)(dword_52FBA0 + 116));
      dword_7C905C(*(_DWORD *)(dword_52FBA0 + 44), *(_DWORD *)(dword_52FBA0 + 48));
      dword_7C6538(*(_DWORD *)(dword_52FBA0 + 12));
      dword_7C64AC(
        *(_DWORD *)(dword_52FBA0 + 72),
        *(_DWORD *)(dword_52FBA0 + 76),
        *(_DWORD *)(dword_52FBA0 + 80),
        *(_DWORD *)(dword_52FBA0 + 84));
      dword_7C905C(*(_DWORD *)(dword_52FBA0 + 28), *(_DWORD *)(dword_52FBA0 + 32));
      dword_7C6538(*(_DWORD *)(dword_52FBA0 + 4));
      dword_7C64AC(
        *(_DWORD *)(dword_52FBA0 + 56),
        *(_DWORD *)(dword_52FBA0 + 60),
        *(_DWORD *)(dword_52FBA0 + 64),
        *(_DWORD *)(dword_52FBA0 + 68));
      dword_7C905C(*(_DWORD *)(dword_52FBA0 + 20), *(_DWORD *)(dword_52FBA0 + 24));
      dword_7C6538(*(_DWORD *)dword_52FBA0);
      dword_52FBA0 = *(_DWORD *)(dword_52FBA0 + 16);
      dword_7C62A8();
    }
    dword_7C62A8();
    dword_52FCC0 = dword_4E7DC8[0];
    dword_7C64D8(4);
    while ( dword_52FCC0 != 0 )
    {
      dword_7C64D8(4);
      dword_7C64AC(
        *(_DWORD *)(dword_52FCC0 + 44),
        *(_DWORD *)(dword_52FCC0 + 48),
        *(_DWORD *)(dword_52FCC0 + 52),
        *(_DWORD *)(dword_52FCC0 + 56));
      dword_7C905C(*(_DWORD *)(dword_52FCC0 + 16), *(_DWORD *)(dword_52FCC0 + 20));
      dword_7C6538(*(_DWORD *)dword_52FCC0);
      dword_7C64AC(
        *(_DWORD *)(dword_52FCC0 + 60),
        *(_DWORD *)(dword_52FCC0 + 64),
        *(_DWORD *)(dword_52FCC0 + 68),
        *(_DWORD *)(dword_52FCC0 + 72));
      dword_7C905C(*(_DWORD *)(dword_52FCC0 + 24), *(_DWORD *)(dword_52FCC0 + 28));
      dword_7C6538(*(_DWORD *)(dword_52FCC0 + 4));
      dword_7C64AC(
        *(_DWORD *)(dword_52FCC0 + 76),
        *(_DWORD *)(dword_52FCC0 + 80),
        *(_DWORD *)(dword_52FCC0 + 84),
        *(_DWORD *)(dword_52FCC0 + 88));
      dword_7C905C(*(_DWORD *)(dword_52FCC0 + 32), *(_DWORD *)(dword_52FCC0 + 36));
      dword_7C6538(*(_DWORD *)(dword_52FCC0 + 8));
      dword_52FCC0 = *(_DWORD *)(dword_52FCC0 + 12);
      dword_7C62A8();
    }
    dword_7C62A8();
    v28 = 0;
    if ( v85[1] > 0 )
    {
      v28 = v85[1];
      qmemcpy(v89, v87, 4 * v85[1]);
    }
    v29 = 0;
    dword_604130 = 0;
    if ( v28 > 0 )
    {
      v81 = v28;
      v77 = (int *)v89;
      do
      {
        v30 = *v77;
        v31 = 4 * *v77;
        v32 = &dword_4E7DC0[v31];
        v33 = (_DWORD *)dword_4E7DC8[v31];
        for ( dword_52FCC0 = (int)v33; v33 != NULL; dword_52FCC0 = (int)v33 )
        {
          v34 = 5 * v29++;
          *(_DWORD *)((char *)&unk_5FA480 + v34 * 4) = 0;
          dword_5FA484[v34] = 0;
          dword_5FA490[v34] = (int)v33;
          v35 = *(float *)(*v33 + 8);
          flt_5FA488[v34] = *(float *)(*v33 + 8);
          v36 = v35 + *(float *)(v33[1] + 8);
          flt_5FA488[v34] = v36;
          v37 = *(float *)(v33[2] + 8) + v36;
          dword_5F853C[v29] = (int)&unk_5FA480 + v34 * 4;
          dword_604130 = v29;
          flt_5FA488[v34] = v37 * 0.33333334;
          dword_5FA48C[v34] = v30;
          v33 = (_DWORD *)v33[3];
        }
        dword_52FBA0 = v32[3];
        for ( n = (_DWORD *)dword_52FBA0; n != NULL; dword_52FBA0 = (int)n )
        {
          v39 = 5 * v29++;
          *(_DWORD *)((char *)&unk_5FA480 + v39 * 4) = 0;
          dword_5FA484[v39] = 2;
          dword_5FA490[v39] = (int)n;
          v40 = *(float *)(*n + 8);
          flt_5FA488[v39] = *(float *)(*n + 8);
          v41 = v40 + *(float *)(n[1] + 8);
          flt_5FA488[v39] = v41;
          v42 = v41 + *(float *)(n[2] + 8);
          flt_5FA488[v39] = v42;
          v43 = *(float *)(n[3] + 8) + v42;
          dword_5F853C[v29] = (int)&unk_5FA480 + v39 * 4;
          dword_604130 = v29;
          flt_5FA488[v39] = v43 * 0.25;
          dword_5FA48C[v39] = v30;
          n = (_DWORD *)n[4];
        }
        v44 = v81 == 1;
        ++v77;
        --v81;
      }
      while ( !v44 );
    }
    if ( v84 > 0 )
    {
      v78 = (int *)v86;
      v82 = v84;
      do
      {
        v45 = *v78;
        v46 = &dword_4E7DC0[4 * *v78];
        v47 = (_DWORD *)*v46;
        dword_52FCC0 = *v46;
        if ( dword_52FCC0 != 0 )
        {
          do
          {
            v48 = 5 * v29++;
            *(_DWORD *)((char *)&unk_5FA480 + v48 * 4) = 1;
            dword_5FA484[v48] = 0;
            dword_5FA490[v48] = (int)v47;
            v49 = *(float *)(*v47 + 8);
            flt_5FA488[v48] = *(float *)(*v47 + 8);
            v50 = v49 + *(float *)(v47[1] + 8);
            flt_5FA488[v48] = v50;
            v51 = *(float *)(v47[2] + 8) + v50;
            dword_5F853C[v29] = (int)&unk_5FA480 + v48 * 4;
            dword_604130 = v29;
            flt_5FA488[v48] = v51 * 0.33333334;
            dword_5FA48C[v48] = v45;
            v47 = (_DWORD *)v47[3];
            dword_52FCC0 = (int)v47;
          }
          while ( v47 != NULL );
        }
        dword_52FBA0 = v46[1];
        for ( ii = (_DWORD *)dword_52FBA0; ii != NULL; dword_52FBA0 = (int)ii )
        {
          v53 = 5 * v29++;
          *(_DWORD *)((char *)&unk_5FA480 + v53 * 4) = 1;
          dword_5FA484[v53] = 2;
          dword_5FA490[v53] = (int)ii;
          v54 = *(float *)(*ii + 8);
          flt_5FA488[v53] = *(float *)(*ii + 8);
          v55 = v54 + *(float *)(ii[1] + 8);
          flt_5FA488[v53] = v55;
          v56 = v55 + *(float *)(ii[2] + 8);
          flt_5FA488[v53] = v56;
          v57 = *(float *)(ii[3] + 8) + v56;
          dword_5F853C[v29] = (int)&unk_5FA480 + v53 * 4;
          dword_604130 = v29;
          flt_5FA488[v53] = v57 * 0.25;
          dword_5FA48C[v53] = v45;
          ii = (_DWORD *)ii[4];
        }
        v44 = v82 == 1;
        ++v78;
        --v82;
      }
      while ( !v44 );
    }
    if ( v29 - 1 > 0 )
    {
      v58 = 1;
      v59 = (char *)&unk_5F8540;
      v79 = 1;
      do
      {
        if ( v58 < v29 )
        {
          v60 = v59 + 4;
          v61 = v29 - v79;
          do
          {
            v62 = *(_DWORD *)v59;
            if ( *(float *)(*(_DWORD *)v59 + 8) > (double)*(float *)(*(_DWORD *)v60 + 8) )
            {
              *(_DWORD *)v59 = *(_DWORD *)v60;
              *(_DWORD *)v60 = v62;
            }
            v60 += 4;
            --v61;
          }
          while ( v61 != 0 );
          v58 = v79;
        }
        ++v58;
        v59 += 4;
        v79 = v58;
      }
      while ( v58 - 1 < v29 - 1 );
    }
    dword_7C632C(3553);
    if ( dword_4AC030 != 0 )
      dword_7C632C(3008);
    else
      dword_7C639C(3008);
    v63 = 0;
    if ( dword_604130 > 0 )
    {
      v64 = (char *)&unk_5F8540;
      while ( 1 )
      {
        dword_7C6368(3553, *(_DWORD *)(*(_DWORD *)v64 + 12));
        v65 = *(_DWORD *)(*(_DWORD *)v64 + 4);
        if ( v65 == 0 )
          break;
        if ( v65 == 2 )
        {
          dword_7C64D8(7);
          dword_52FBA0 = *(_DWORD *)(*(_DWORD *)v64 + 16);
          dword_7C64AC(
            *(_DWORD *)(dword_52FBA0 + 88),
            *(_DWORD *)(dword_52FBA0 + 92),
            *(_DWORD *)(dword_52FBA0 + 96),
            *(_DWORD *)(dword_52FBA0 + 100));
          dword_7C905C(*(_DWORD *)(dword_52FBA0 + 36), *(_DWORD *)(dword_52FBA0 + 40));
          dword_7C6538(*(_DWORD *)(dword_52FBA0 + 8));
          dword_7C64AC(
            *(_DWORD *)(dword_52FBA0 + 104),
            *(_DWORD *)(dword_52FBA0 + 108),
            *(_DWORD *)(dword_52FBA0 + 112),
            *(_DWORD *)(dword_52FBA0 + 116));
          dword_7C905C(*(_DWORD *)(dword_52FBA0 + 44), *(_DWORD *)(dword_52FBA0 + 48));
          dword_7C6538(*(_DWORD *)(dword_52FBA0 + 12));
          dword_7C64AC(
            *(_DWORD *)(dword_52FBA0 + 72),
            *(_DWORD *)(dword_52FBA0 + 76),
            *(_DWORD *)(dword_52FBA0 + 80),
            *(_DWORD *)(dword_52FBA0 + 84));
          dword_7C905C(*(_DWORD *)(dword_52FBA0 + 28), *(_DWORD *)(dword_52FBA0 + 32));
          dword_7C6538(*(_DWORD *)(dword_52FBA0 + 4));
          dword_7C64AC(
            *(_DWORD *)(dword_52FBA0 + 56),
            *(_DWORD *)(dword_52FBA0 + 60),
            *(_DWORD *)(dword_52FBA0 + 64),
            *(_DWORD *)(dword_52FBA0 + 68));
          dword_7C905C(*(_DWORD *)(dword_52FBA0 + 20), *(_DWORD *)(dword_52FBA0 + 24));
          v66 = (_DWORD *)dword_52FBA0;
LABEL_83:
          dword_7C6538(*v66);
          dword_7C62A8();
        }
        ++v63;
        v64 += 4;
        if ( v63 >= dword_604130 )
          goto LABEL_85;
      }
      dword_7C64D8(4);
      dword_52FCC0 = *(_DWORD *)(*(_DWORD *)v64 + 16);
      dword_7C64AC(
        *(_DWORD *)(dword_52FCC0 + 76),
        *(_DWORD *)(dword_52FCC0 + 80),
        *(_DWORD *)(dword_52FCC0 + 84),
        *(_DWORD *)(dword_52FCC0 + 88));
      dword_7C905C(*(_DWORD *)(dword_52FCC0 + 32), *(_DWORD *)(dword_52FCC0 + 36));
      dword_7C6538(*(_DWORD *)(dword_52FCC0 + 8));
      dword_7C64AC(
        *(_DWORD *)(dword_52FCC0 + 60),
        *(_DWORD *)(dword_52FCC0 + 64),
        *(_DWORD *)(dword_52FCC0 + 68),
        *(_DWORD *)(dword_52FCC0 + 72));
      dword_7C905C(*(_DWORD *)(dword_52FCC0 + 24), *(_DWORD *)(dword_52FCC0 + 28));
      dword_7C6538(*(_DWORD *)(dword_52FCC0 + 4));
      dword_7C64AC(
        *(_DWORD *)(dword_52FCC0 + 44),
        *(_DWORD *)(dword_52FCC0 + 48),
        *(_DWORD *)(dword_52FCC0 + 52),
        *(_DWORD *)(dword_52FCC0 + 56));
      dword_7C905C(*(_DWORD *)(dword_52FCC0 + 16), *(_DWORD *)(dword_52FCC0 + 20));
      v66 = (_DWORD *)dword_52FCC0;
      goto LABEL_83;
    }
LABEL_85:
    dword_7C632C(3008);
    v67 = &v88;
    v80 = &v85[2];
    v83 = 3;
    do
    {
      if ( *v80 > 0 )
      {
        v68 = v67;
        v69 = *v80;
        do
        {
          v70 = *(_DWORD *)v68;
          dword_7C6368(3553, *(_DWORD *)v68);
          dword_52FBA0 = dword_4E7DCC[4 * v70];
          if ( dword_52FBA0 != 0 )
          {
            dword_7C64D8(7);
            while ( dword_52FBA0 != 0 )
            {
              dword_7C64D8(7);
              dword_7C64AC(
                *(_DWORD *)(dword_52FBA0 + 88),
                *(_DWORD *)(dword_52FBA0 + 92),
                *(_DWORD *)(dword_52FBA0 + 96),
                *(_DWORD *)(dword_52FBA0 + 100));
              dword_7C905C(*(_DWORD *)(dword_52FBA0 + 36), *(_DWORD *)(dword_52FBA0 + 40));
              dword_7C6538(*(_DWORD *)(dword_52FBA0 + 8));
              dword_7C64AC(
                *(_DWORD *)(dword_52FBA0 + 104),
                *(_DWORD *)(dword_52FBA0 + 108),
                *(_DWORD *)(dword_52FBA0 + 112),
                *(_DWORD *)(dword_52FBA0 + 116));
              dword_7C905C(*(_DWORD *)(dword_52FBA0 + 44), *(_DWORD *)(dword_52FBA0 + 48));
              dword_7C6538(*(_DWORD *)(dword_52FBA0 + 12));
              dword_7C64AC(
                *(_DWORD *)(dword_52FBA0 + 72),
                *(_DWORD *)(dword_52FBA0 + 76),
                *(_DWORD *)(dword_52FBA0 + 80),
                *(_DWORD *)(dword_52FBA0 + 84));
              dword_7C905C(*(_DWORD *)(dword_52FBA0 + 28), *(_DWORD *)(dword_52FBA0 + 32));
              dword_7C6538(*(_DWORD *)(dword_52FBA0 + 4));
              dword_7C64AC(
                *(_DWORD *)(dword_52FBA0 + 56),
                *(_DWORD *)(dword_52FBA0 + 60),
                *(_DWORD *)(dword_52FBA0 + 64),
                *(_DWORD *)(dword_52FBA0 + 68));
              dword_7C905C(*(_DWORD *)(dword_52FBA0 + 20), *(_DWORD *)(dword_52FBA0 + 24));
              dword_7C6538(*(_DWORD *)dword_52FBA0);
              dword_52FBA0 = *(_DWORD *)(dword_52FBA0 + 16);
              dword_7C62A8();
            }
            dword_7C62A8();
          }
          v68 += 4;
          --v69;
        }
        while ( v69 != 0 );
      }
      v67 += 8000;
      v44 = v83 == 1;
      ++v80;
      --v83;
    }
    while ( !v44 );
    dword_7C63C8(770, 771);
  }
  dword_7C63A4();
  dword_7C90C4();
  v71 = dword_4B1C90;
  if ( dword_4B1C90 >= 0 )
  {
    v72 = dword_4E7DC4;
    v73 = dword_4B1C90 + 1;
    do
    {
      *(v72 - 1) = 0;
      *v72 = 0;
      v72[1] = 0;
      v72[2] = 0;
      v72 += 4;
      --v73;
    }
    while ( v73 != 0 );
  }
  v74 = 2 * v71 + 2;
  dword_4E5E40 = 0;
  memset(word_622600, 0, v74);
  dword_623654 = 0;
  dword_623650 = 0;
  memset(word_621620, 0, v74);
  return 1;
}

// 0x413a20  sub_413A20
int sub_413A20()
{
  dword_7C90AC(5889);
  dword_7C9090();
  dword_7C946C(
    COERCE_UNSIGNED_INT64((double)qword_467748 * -0.5),
    HIDWORD(COERCE_UNSIGNED_INT64((double)qword_467748 * -0.5)),
    COERCE_UNSIGNED_INT64((double)qword_467748 * 0.5),
    HIDWORD(COERCE_UNSIGNED_INT64((double)qword_467748 * 0.5)),
    COERCE_UNSIGNED_INT64((double)*(&qword_467748 + 1) * -0.5),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(&qword_467748 + 1) * -0.5)),
    COERCE_UNSIGNED_INT64((double)*(&qword_467748 + 1) * 0.5),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(&qword_467748 + 1) * 0.5)),
    COERCE_UNSIGNED_INT64((double)dword_4EFB3C),
    HIDWORD(COERCE_UNSIGNED_INT64((double)dword_4EFB3C)),
    0,
    1089470464);
  return dword_7C90AC(5888);
}

// 0x413ab0  sub_413AB0
int sub_413AB0()
{
  dword_6235A0 = 0;
  dword_6235A4 = 0;
  dword_623630 = 255;
  dword_623634 = 255;
  dword_623638 = 255;
  dword_62363C = 255;
  dword_6235D4 = LODWORD(flt_468350[0]);
  dword_6235D0 = LODWORD(flt_467F50[0]);
  dword_6235D8 = LODWORD(flt_46834C);
  dword_6235DC = LODWORD(flt_468350[0]);
  dword_6235E0 = LODWORD(flt_46834C);
  dword_6235A8 = 1;
  dword_6235E4 = LODWORD(flt_46874C);
  dword_6235E8 = LODWORD(flt_467F50[0]);
  dword_6235EC = LODWORD(flt_46874C);
  dword_6235F0 = 1065353216;
  dword_6235F4 = 1065353216;
  dword_6235F8 = 1065353216;
  dword_6235FC = 1065353216;
  dword_623600 = 1065353216;
  dword_623604 = 1065353216;
  dword_623608 = 1065353216;
  dword_62360C = 1065353216;
  dword_623610 = 1065353216;
  dword_623614 = 1065353216;
  dword_623618 = 1065353216;
  dword_62361C = 1065353216;
  dword_623620 = 1065353216;
  dword_623624 = 1065353216;
  dword_623628 = 1065353216;
  dword_62362C = 1065353216;
  return LODWORD(flt_467F50[0]);
}

// 0x413bd0  sub_413BD0
int sub_413BD0()
{
  double v0; // st6
  double v1; // st5
  int result; // eax
  float v3; // [esp+68h] [ebp-10h]
  float v4; // [esp+68h] [ebp-10h]
  float v5; // [esp+6Ch] [ebp-Ch]
  float v6; // [esp+70h] [ebp-8h]
  float v7; // [esp+74h] [ebp-4h]

  v0 = (double)HIWORD(dword_4EFB4C);
  v3 = (float)(unsigned __int16)dword_4EFB4C;
  v1 = *(float *)&dword_6235B8 * v3 * 0.0015625;
  v4 = *(float *)&dword_6235B0 * v3 * 0.0015625 + v3 * -0.5;
  v5 = v0 * 0.5 - *(float *)&dword_6235B4 * v0 * 0.0020833334;
  v7 = v1 + v4;
  v6 = v5 - *(float *)&dword_6235BC * v0 * 0.0020833334;
  if ( dword_6235A8 == 1 )
  {
    dword_7C632C(3553);
    dword_7C6368(3553, dword_6235AC);
  }
  else
  {
    dword_7C639C(3553);
  }
  if ( dword_6235A4 != 0 )
    dword_7C632C(3042);
  else
    dword_7C639C(3042);
  if ( dword_6235A0 != 0 )
  {
    result = dword_6235A0 - 1;
    if ( dword_6235A0 == 1 )
    {
      dword_7C64D8(4);
      return dword_7C62A8();
    }
  }
  else
  {
    dword_7C64D8(7);
    dword_7C64AC(dword_623610, dword_623614, dword_623618, dword_62361C);
    dword_7C905C(dword_6235E0, dword_6235E4);
    dword_7C9488(LODWORD(v4), LODWORD(v6), dword_6235C8);
    dword_7C64AC(dword_623620, dword_623624, dword_623628, dword_62362C);
    dword_7C905C(dword_6235E8, dword_6235EC);
    dword_7C9488(LODWORD(v7), LODWORD(v6), dword_6235CC);
    dword_7C64AC(dword_623600, dword_623604, dword_623608, dword_62360C);
    dword_7C905C(dword_6235D8, dword_6235DC);
    dword_7C9488(LODWORD(v7), LODWORD(v5), dword_6235C4);
    dword_7C64AC(dword_6235F0, dword_6235F4, dword_6235F8, dword_6235FC);
    dword_7C905C(dword_6235D0, dword_6235D4);
    dword_7C9488(LODWORD(v4), LODWORD(v5), dword_6235C0);
    return dword_7C62A8();
  }
  return result;
}

// 0x413e30  sub_413E30
int __cdecl sub_413E30(int a1, int a2, int a3, int a4, int a5)
{
  dword_7C6368(3553, a5);
  if ( a1 == 4 )
    dword_7C90CC(3553, 0, 4, a2, a3, 0, 6408, 5121, a4);
  else
    dword_7C90CC(3553, 0, a1, a2, a3, 0, 6407, 5121, a4);
  dword_7C6614();
  dword_7C62C0(3553, 10242, 1176765440);
  dword_7C62C0(3553, 10243, 1176765440);
  dword_7C62C0(3553, 10241, 1175979008);
  return dword_7C62C0(3553, 10240, 1175979008);
}

// 0x413ef0  sub_413EF0
int sub_413EF0()
{
  return dword_7C6318(16640);
}

// 0x413f00  sub_413F00
int sub_413F00()
{
  dword_6235D4 = LODWORD(flt_468350[0]);
  dword_6235A0 = 0;
  dword_6235A4 = 0;
  dword_6235D8 = LODWORD(flt_46834C);
  dword_6235D0 = LODWORD(flt_467F50[0]);
  dword_6235DC = LODWORD(flt_468350[0]);
  dword_6235E0 = LODWORD(flt_46834C);
  dword_6235A8 = 1;
  dword_6235F0 = 1065353216;
  dword_623600 = 1065353216;
  dword_623610 = 1065353216;
  dword_623620 = 1065353216;
  dword_6235F4 = 1065353216;
  dword_623604 = 1065353216;
  dword_623614 = 1065353216;
  dword_623624 = 1065353216;
  dword_6235F8 = 1065353216;
  dword_623608 = 1065353216;
  dword_623618 = 1065353216;
  dword_623628 = 1065353216;
  dword_6235FC = 1065353216;
  dword_62360C = 1065353216;
  dword_62361C = 1065353216;
  dword_62362C = 1065353216;
  dword_6235E4 = LODWORD(flt_46874C);
  dword_6235E8 = LODWORD(flt_467F50[0]);
  dword_6235EC = LODWORD(flt_46874C);
  return LODWORD(flt_467F50[0]);
}

// 0x414010  sub_414010
int __cdecl sub_414010(int a1, int a2, int a3, int a4)
{
  dword_6235F0 = a1;
  dword_6235F4 = a2;
  dword_6235F8 = a3;
  dword_6235FC = a4;
  dword_623600 = a1;
  dword_623604 = a2;
  dword_623608 = a3;
  dword_62360C = a4;
  dword_623610 = a1;
  dword_623614 = a2;
  dword_623618 = a3;
  dword_62361C = a4;
  dword_623620 = a1;
  dword_623624 = a2;
  dword_623628 = a3;
  dword_62362C = a4;
  return a4;
}

// 0x4140b0  sub_4140B0
int sub_4140B0()
{
  int result; // eax
  double v1; // st6
  double v2; // st7
  double v3; // st3
  float v4; // [esp+10h] [ebp-B8h]
  float v5; // [esp+10h] [ebp-B8h]
  float v6; // [esp+14h] [ebp-B4h]
  _DWORD v7[3]; // [esp+18h] [ebp-B0h] BYREF
  _DWORD v8[3]; // [esp+24h] [ebp-A4h] BYREF
  int v9; // [esp+30h] [ebp-98h] BYREF
  int v10; // [esp+34h] [ebp-94h]
  int v11; // [esp+38h] [ebp-90h]
  int v12; // [esp+3Ch] [ebp-8Ch] BYREF
  int v13; // [esp+40h] [ebp-88h]
  int v14; // [esp+44h] [ebp-84h]
  int v15; // [esp+48h] [ebp-80h] BYREF
  int v16; // [esp+4Ch] [ebp-7Ch]
  char v17; // [esp+54h] [ebp-74h]
  int v18; // [esp+58h] [ebp-70h]
  int v19; // [esp+5Ch] [ebp-6Ch]
  int v20; // [esp+60h] [ebp-68h]
  int v21; // [esp+64h] [ebp-64h]
  int *v22; // [esp+68h] [ebp-60h]
  int v23; // [esp+6Ch] [ebp-5Ch]
  int v24; // [esp+70h] [ebp-58h]
  int v25; // [esp+74h] [ebp-54h]
  int v26; // [esp+78h] [ebp-50h]
  int v27; // [esp+7Ch] [ebp-4Ch]
  _DWORD *v28; // [esp+80h] [ebp-48h]
  int v29; // [esp+84h] [ebp-44h]
  int v30; // [esp+88h] [ebp-40h]
  int v31; // [esp+8Ch] [ebp-3Ch]
  int v32; // [esp+90h] [ebp-38h]
  int v33; // [esp+94h] [ebp-34h]
  _DWORD *v34; // [esp+98h] [ebp-30h]
  int v35; // [esp+9Ch] [ebp-2Ch]
  int v36; // [esp+A0h] [ebp-28h]
  int v37; // [esp+A4h] [ebp-24h]
  int v38; // [esp+A8h] [ebp-20h]
  int v39; // [esp+ACh] [ebp-1Ch]
  int *v40; // [esp+B0h] [ebp-18h]
  int v41; // [esp+B4h] [ebp-14h]
  int v42; // [esp+B8h] [ebp-10h]
  int v43; // [esp+BCh] [ebp-Ch]
  int v44; // [esp+C0h] [ebp-8h]
  int v45; // [esp+C4h] [ebp-4h]

  result = dword_6235A0;
  v1 = (double)(unsigned __int16)dword_4EFB4C;
  v4 = (float)HIWORD(dword_4EFB4C);
  v2 = *(float *)&dword_6235B0 * v1 * 0.0015625;
  v3 = *(float *)&dword_6235B4 * v4 * 0.0020833334;
  v6 = *(float *)&dword_6235BC * v4 * 0.0020833334 + v3;
  if ( dword_6235A0 == 0 )
  {
    v12 = (__int64)v2;
    v13 = (__int64)v3;
    v14 = (__int64)*(float *)&dword_6235C0;
    v5 = *(float *)&dword_6235B8 * v1 * 0.0015625 + v2;
    v9 = (__int64)v5;
    v10 = (__int64)v6;
    v11 = (__int64)*(float *)&dword_6235C4;
    v8[0] = v12;
    v8[1] = v10;
    v8[2] = (__int64)*(float *)&dword_6235C8;
    v7[0] = v9;
    v7[1] = v13;
    v7[2] = (__int64)*(float *)&dword_6235CC;
    v18 = (__int64)*(float *)&dword_6235F0;
    v19 = (__int64)*(float *)&dword_6235F4;
    v20 = (__int64)*(float *)&dword_6235F8;
    v25 = v18;
    v26 = v19;
    v27 = v20;
    v31 = (__int64)*(float *)&dword_623600;
    v32 = (__int64)*(float *)&dword_623604;
    v33 = (__int64)*(float *)&dword_623608;
    v37 = (__int64)*(float *)&dword_623610;
    v38 = (__int64)*(float *)&dword_623614;
    v39 = (__int64)*(float *)&dword_623618;
    v43 = (__int64)*(float *)&dword_623620;
    v44 = (__int64)*(float *)&dword_623624;
    v45 = (__int64)*(float *)&dword_623628;
    v23 = dword_6235D0;
    v24 = dword_6235D4;
    v29 = dword_6235D8;
    v30 = dword_6235DC;
    v35 = dword_6235E0;
    v36 = dword_6235E4;
    v41 = dword_6235E8;
    v42 = dword_6235EC;
    v22 = &v12;
    v28 = v7;
    v21 = 0;
    v34 = v8;
    v40 = &v9;
    v15 = dword_6235AC;
    result = dword_5546A4();
    if ( result != 0 )
    {
      if ( dword_6235A4 != 0 )
      {
        v17 = 0;
        v16 |= 2u;
        sub_41CDD0(&v15);
        if ( off_46AF70 != NULL )
        {
          dword_5A7CA8();
          return dword_5546AC();
        }
      }
      else
      {
        v17 = 4;
        v16 = 0;
        sub_41CDD0(&v15);
        if ( off_46AF70 != NULL )
          dword_554480();
      }
      return dword_5546AC();
    }
  }
  return result;
}

// 0x4143e0  sub_4143E0
int sub_4143E0()
{
  int result; // eax
  double v1; // st6
  double v2; // st7
  double v3; // st3
  float v4; // [esp+10h] [ebp-B8h]
  float v5; // [esp+10h] [ebp-B8h]
  float v6; // [esp+14h] [ebp-B4h]
  _DWORD v7[3]; // [esp+18h] [ebp-B0h] BYREF
  _DWORD v8[3]; // [esp+24h] [ebp-A4h] BYREF
  int v9; // [esp+30h] [ebp-98h] BYREF
  int v10; // [esp+34h] [ebp-94h]
  int v11; // [esp+38h] [ebp-90h]
  int v12; // [esp+3Ch] [ebp-8Ch] BYREF
  int v13; // [esp+40h] [ebp-88h]
  int v14; // [esp+44h] [ebp-84h]
  int v15; // [esp+48h] [ebp-80h] BYREF
  int v16; // [esp+4Ch] [ebp-7Ch]
  char v17; // [esp+54h] [ebp-74h]
  int v18; // [esp+64h] [ebp-64h]
  int *v19; // [esp+68h] [ebp-60h]
  int v20; // [esp+6Ch] [ebp-5Ch]
  int v21; // [esp+70h] [ebp-58h]
  _DWORD *v22; // [esp+80h] [ebp-48h]
  int v23; // [esp+84h] [ebp-44h]
  int v24; // [esp+88h] [ebp-40h]
  _DWORD *v25; // [esp+98h] [ebp-30h]
  int v26; // [esp+9Ch] [ebp-2Ch]
  int v27; // [esp+A0h] [ebp-28h]
  int *v28; // [esp+B0h] [ebp-18h]
  int v29; // [esp+B4h] [ebp-14h]
  int v30; // [esp+B8h] [ebp-10h]

  result = dword_6235A0;
  v1 = (double)(unsigned __int16)dword_4EFB4C;
  v4 = (float)HIWORD(dword_4EFB4C);
  v2 = *(float *)&dword_6235B0 * v1 * 0.0015625;
  v3 = *(float *)&dword_6235B4 * v4 * 0.0020833334;
  v6 = *(float *)&dword_6235BC * v4 * 0.0020833334 + v3;
  if ( dword_6235A0 == 0 )
  {
    v12 = (__int64)v2;
    v13 = (__int64)v3;
    v14 = (__int64)*(float *)&dword_6235C0;
    v5 = *(float *)&dword_6235B8 * v1 * 0.0015625 + v2;
    v9 = (__int64)v5;
    v10 = (__int64)v6;
    v11 = (__int64)*(float *)&dword_6235C4;
    v8[0] = v12;
    v8[1] = v10;
    v8[2] = (__int64)*(float *)&dword_6235C8;
    v7[0] = v9;
    v7[1] = v13;
    v7[2] = (__int64)*(float *)&dword_6235CC;
    v20 = dword_6235D0;
    v21 = dword_6235D4;
    v23 = dword_6235D8;
    v24 = dword_6235DC;
    v26 = dword_6235E0;
    v27 = dword_6235E4;
    v29 = dword_6235E8;
    v30 = dword_6235EC;
    v19 = &v12;
    v22 = v7;
    v18 = 0;
    v25 = v8;
    v28 = &v9;
    v15 = dword_6235AC;
    result = dword_5546A4();
    if ( result != 0 )
    {
      if ( dword_6235A4 != 0 )
      {
        v17 = 0;
        v16 |= 2u;
        sub_41CDD0(&v15);
        dword_5A7CA8();
      }
      else
      {
        v17 = 4;
        v16 = 0;
        sub_41CDD0(&v15);
        dword_554480();
      }
      return dword_5546AC();
    }
  }
  return result;
}

// 0x414620  sub_414620
int __cdecl sub_414620(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, int a6)
{
  int v6; // ecx
  _DWORD *v7; // ebx
  int v8; // edx
  int v9; // edi
  float *v10; // esi
  int v11; // ebp
  float *v12; // esi
  int v13; // eax
  int v14; // ebp
  float *v15; // esi
  int v16; // eax
  int v17; // ebp
  int v18; // eax
  unsigned int v19; // eax
  int v20; // esi
  int v21; // eax
  int v22; // eax
  _DWORD *v23; // esi
  int v25; // [esp+10h] [ebp-10h]
  int v26; // [esp+14h] [ebp-Ch]
  int *v27; // [esp+18h] [ebp-8h]
  int *v28; // [esp+1Ch] [ebp-4h]

  if ( a6 == 1 )
  {
    v27 = &a1;
  }
  else
  {
    off_469970 = &unk_4B1C10;
    v27 = (int *)&off_469970;
  }
  v25 = dword_4E5E40;
  v26 = 0;
  v28 = *(int **)(dword_621608 + 4);
  v6 = *v28;
  if ( *v28 != 0 )
  {
    v7 = (_DWORD *)a2;
    a2 = a1;
    do
    {
      dword_52FCC0 = a2;
      a1 = v6;
      v8 = dword_4E5E80[*(unsigned __int16 *)(*v27 + 2 * *a5)];
      *(_DWORD *)(a2 + 44) = dword_467B50[*(unsigned __int8 *)(*a4 + v6)];
      *(_DWORD *)(dword_52FCC0 + 48) = dword_467B50[*(unsigned __int8 *)(v6 + a4[1])];
      *(_DWORD *)(dword_52FCC0 + 52) = dword_467B50[*(unsigned __int8 *)(v6 + a4[2])];
      *(_DWORD *)(dword_52FCC0 + 56) = 1065353216;
      if ( a4[16] == 12 )
      {
        *(_DWORD *)(dword_52FCC0 + 60) = dword_467B50[*(unsigned __int8 *)(a4[4] + v6)];
        *(_DWORD *)(dword_52FCC0 + 64) = dword_467B50[*(unsigned __int8 *)(a4[5] + v6)];
        *(_DWORD *)(dword_52FCC0 + 68) = dword_467B50[*(unsigned __int8 *)(a4[6] + v6)];
        *(_DWORD *)(dword_52FCC0 + 72) = 1065353216;
        *(_DWORD *)(dword_52FCC0 + 76) = dword_467B50[*(unsigned __int8 *)(a4[8] + v6)];
        *(_DWORD *)(dword_52FCC0 + 80) = dword_467B50[*(unsigned __int8 *)(a4[9] + v6)];
        *(_DWORD *)(dword_52FCC0 + 84) = dword_467B50[*(unsigned __int8 *)(a4[10] + v6)];
      }
      else
      {
        *(_DWORD *)(dword_52FCC0 + 60) = *(_DWORD *)(dword_52FCC0 + 44);
        *(_DWORD *)(dword_52FCC0 + 64) = *(_DWORD *)(dword_52FCC0 + 48);
        *(_DWORD *)(dword_52FCC0 + 68) = *(_DWORD *)(dword_52FCC0 + 52);
        *(_DWORD *)(dword_52FCC0 + 72) = 1065353216;
        *(_DWORD *)(dword_52FCC0 + 76) = *(_DWORD *)(dword_52FCC0 + 44);
        *(_DWORD *)(dword_52FCC0 + 80) = *(_DWORD *)(dword_52FCC0 + 48);
        *(_DWORD *)(dword_52FCC0 + 84) = *(_DWORD *)(dword_52FCC0 + 52);
      }
      *(_DWORD *)(dword_52FCC0 + 88) = 1065353216;
      v9 = dword_52FCC0;
      v10 = (float *)(16 * *(unsigned __int16 *)(v6 + 2 * *v7) + dword_623688 + 8);
      if ( *v10 >= (double)flt_4EFB60 )
      {
        v11 = 0;
      }
      else if ( *v10 >= (double)flt_4EFB48 )
      {
        v11 = 1;
        *(float *)(dword_52FCC0 + 56) = (flt_4EFB68 + *v10) * flt_4EFB64;
        v9 = dword_52FCC0;
      }
      else
      {
        *(_DWORD *)(dword_52FCC0 + 56) = 0;
        v9 = dword_52FCC0;
        v11 = 1;
      }
      v12 = (float *)(16 * *(unsigned __int16 *)(v6 + 2 * v7[1]) + dword_623688 + 8);
      if ( *v12 >= (double)flt_4EFB60 )
      {
        v13 = 0;
      }
      else if ( *v12 >= (double)flt_4EFB48 )
      {
        v13 = 1;
        *(float *)(v9 + 72) = (flt_4EFB68 + *v12) * flt_4EFB64;
        v9 = dword_52FCC0;
      }
      else
      {
        *(_DWORD *)(v9 + 72) = 0;
        v9 = dword_52FCC0;
        v13 = 1;
      }
      v14 = v13 | v11;
      v15 = (float *)(16 * *(unsigned __int16 *)(v6 + 2 * v7[2]) + dword_623688 + 8);
      if ( *v15 >= (double)flt_4EFB60 )
      {
        v16 = 0;
      }
      else if ( *v15 >= (double)flt_4EFB48 )
      {
        v16 = 1;
        *(float *)(v9 + 88) = (flt_4EFB68 + *v15) * flt_4EFB64;
        v9 = dword_52FCC0;
      }
      else
      {
        *(_DWORD *)(v9 + 88) = 0;
        v9 = dword_52FCC0;
        v16 = 1;
      }
      v17 = v16 | v14;
      if ( (*(_BYTE *)(v6 + 2) & 8) != 0 )
      {
        v19 = a5[1];
        LOBYTE(v19) = *(_BYTE *)(v6 + 2 * v19);
        v20 = (v19 >> 5) & 3;
        v21 = dword_52FD74[12 * v8 + v20];
        if ( v21 == 0 )
        {
          v18 = v8;
LABEL_30:
          v22 = 4 * v18;
          *(_DWORD *)(v9 + 12) = dword_4E7DC0[v22];
          dword_4E7DC0[v22] = a2;
          word_622600[v8] = 1;
          goto LABEL_31;
        }
        *(_DWORD *)(v9 + 40) = dword_467730[v20];
        *(_DWORD *)(dword_52FCC0 + 12) = dword_4E7DC8[4 * v21];
        dword_4E7DC8[4 * v21] = dword_52FCC0;
        word_621620[v21] = dword_7BD970;
      }
      else
      {
        v18 = v8;
        if ( v17 == 0 )
          goto LABEL_30;
        *(_DWORD *)(v9 + 12) = dword_4E7DC8[4 * v8];
        dword_4E7DC8[4 * v8] = dword_52FCC0;
        word_621620[v8] = dword_7BD970;
      }
LABEL_31:
      v23 = a3;
      if ( a3 != NULL )
      {
        if ( a6 == 1 )
        {
          *(float *)(dword_52FCC0 + 16) = flt_467F50[*(unsigned __int8 *)(*a3 + v6)];
          *(float *)(dword_52FCC0 + 20) = flt_468350[*(unsigned __int8 *)(v23[1] + v6)];
          *(float *)(dword_52FCC0 + 24) = flt_467F50[*(unsigned __int8 *)(v23[2] + v6)];
          *(float *)(dword_52FCC0 + 28) = flt_468350[*(unsigned __int8 *)(v23[3] + v6)];
          *(float *)(dword_52FCC0 + 32) = flt_467F50[*(unsigned __int8 *)(v23[4] + v6)];
          *(float *)(dword_52FCC0 + 36) = flt_468350[*(unsigned __int8 *)(v23[5] + v6)];
        }
      }
      else
      {
        *(float *)(dword_52FCC0 + 16) = flt_467F50[0];
        *(float *)(dword_52FCC0 + 20) = flt_46874C;
        *(float *)(dword_52FCC0 + 24) = flt_46834C;
        *(float *)(dword_52FCC0 + 28) = flt_46874C;
        *(float *)(dword_52FCC0 + 32) = flt_467F50[0];
        *(float *)(dword_52FCC0 + 36) = flt_468350[0];
      }
      *(_DWORD *)dword_52FCC0 = dword_623688 + 16 * *(unsigned __int16 *)(v6 + 2 * *v7);
      *(_DWORD *)(dword_52FCC0 + 4) = dword_623688 + 16 * *(unsigned __int16 *)(v6 + 2 * v7[1]);
      *(_DWORD *)(dword_52FCC0 + 8) = dword_623688 + 16 * *(unsigned __int16 *)(v6 + 2 * v7[2]);
      v26 += 92;
      ++v25;
      a2 += 92;
      v28 = (int *)v28[1];
      v6 = *v28;
    }
    while ( *v28 != 0 );
  }
  dword_4E5E40 = v25;
  return v26;
}

// 0x414bd0  sub_414BD0
int __cdecl sub_414BD0(int a1, int *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, int a6)
{
  int v6; // edi
  int *v7; // esi
  int v8; // eax
  _DWORD *v9; // ebp
  int v10; // ecx
  double v11; // st7
  double v12; // st7
  double v13; // st7
  double v14; // st7
  double v15; // st7
  double v16; // st7
  double v17; // st7
  double v18; // st7
  double v19; // st7
  float *v20; // ebx
  int v21; // ebp
  float *v22; // ebx
  int v23; // eax
  int v24; // ebp
  float *v25; // ebx
  int v26; // eax
  float *v27; // ebx
  int v28; // ebp
  float *v29; // ebx
  int v30; // eax
  int v31; // ebp
  float *v32; // ebx
  int v33; // eax
  int v34; // eax
  int *v35; // eax
  unsigned int v36; // eax
  int v37; // ebp
  int v38; // ebx
  double v39; // st7
  _DWORD *v40; // ebp
  double v41; // st7
  double v42; // st7
  double v43; // st7
  double v44; // st7
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // ebp
  _DWORD *v49; // eax
  int v50; // ebx
  float *v51; // ecx
  int v52; // ebp
  float *v53; // ecx
  int v54; // eax
  int v55; // ebp
  float *v56; // ecx
  int v57; // eax
  int v58; // ebp
  float *v59; // ecx
  int v60; // eax
  int v61; // ebp
  int *v62; // ecx
  int *v63; // eax
  int *v64; // eax
  int v65; // ebp
  unsigned int v66; // ecx
  int v67; // ebp
  int v68; // eax
  int v69; // eax
  _DWORD *v70; // eax
  int v72; // [esp+10h] [ebp-18h]
  int v73; // [esp+14h] [ebp-14h]
  int **v74; // [esp+18h] [ebp-10h]
  int v75; // [esp+1Ch] [ebp-Ch]
  int *v76; // [esp+20h] [ebp-8h]
  int v77; // [esp+24h] [ebp-4h]

  if ( a6 == 1 )
  {
    v74 = &a2;
  }
  else
  {
    off_469970 = &unk_4B1C10;
    v74 = (int **)&off_469970;
  }
  v72 = dword_4E5E40;
  v73 = 0;
  v76 = *(int **)(dword_621608 + 4);
  v6 = *v76;
  if ( *v76 != 0 )
  {
    v7 = a2;
    do
    {
      a2 = (int *)v6;
      v8 = *v7;
      a2 = (int *)dword_4E5E80[*((unsigned __int16 *)*v74 + *a5)];
      if ( (((unsigned __int8)*(_DWORD *)(16 * *(unsigned __int16 *)(v6 + 2 * v7[1]) + dword_623688 + 12)
           | (unsigned __int8)(*(_DWORD *)(16 * *(unsigned __int16 *)(v6 + 2 * v7[3]) + dword_623688 + 12)
                             | *(_DWORD *)(16 * *(unsigned __int16 *)(v6 + 2 * v7[2]) + dword_623688 + 12)
                             | *(_DWORD *)(16 * *(unsigned __int16 *)(v6 + 2 * v8) + dword_623688 + 12)))
          & 2) != 0 )
      {
        v9 = a4;
        dword_52FCC0 = v73 + a1;
        v10 = v73 + 92 + a1;
        v73 += 184;
        *(float *)(dword_52FCC0 + 44) = dword_467B50[*(unsigned __int8 *)(v6 + *a4)];
        *(float *)(dword_52FCC0 + 48) = dword_467B50[*(unsigned __int8 *)(v9[1] + v6)];
        *(float *)(dword_52FCC0 + 52) = dword_467B50[*(unsigned __int8 *)(v9[2] + v6)];
        *(_DWORD *)(dword_52FCC0 + 88) = 1065353216;
        *(_DWORD *)(dword_52FCC0 + 72) = 1065353216;
        *(_DWORD *)(dword_52FCC0 + 56) = 1065353216;
        *(_DWORD *)(v10 + 88) = 1065353216;
        *(_DWORD *)(v10 + 72) = 1065353216;
        *(_DWORD *)(v10 + 56) = 1065353216;
        if ( v9[16] == 16 )
        {
          v11 = dword_467B50[*(unsigned __int8 *)(v9[4] + v6)];
          *(float *)(v10 + 44) = dword_467B50[*(unsigned __int8 *)(v9[4] + v6)];
          *(float *)(dword_52FCC0 + 60) = v11;
          v12 = dword_467B50[*(unsigned __int8 *)(v9[5] + v6)];
          *(float *)(v10 + 48) = dword_467B50[*(unsigned __int8 *)(v9[5] + v6)];
          *(float *)(dword_52FCC0 + 64) = v12;
          v13 = dword_467B50[*(unsigned __int8 *)(v9[6] + v6)];
          *(float *)(v10 + 52) = dword_467B50[*(unsigned __int8 *)(v9[6] + v6)];
          *(float *)(dword_52FCC0 + 68) = v13;
          v14 = dword_467B50[*(unsigned __int8 *)(v9[8] + v6)];
          *(float *)(v10 + 76) = dword_467B50[*(unsigned __int8 *)(v9[8] + v6)];
          *(float *)(dword_52FCC0 + 76) = v14;
          v15 = dword_467B50[*(unsigned __int8 *)(v9[9] + v6)];
          *(float *)(v10 + 80) = dword_467B50[*(unsigned __int8 *)(v9[9] + v6)];
          *(float *)(dword_52FCC0 + 80) = v15;
          v16 = dword_467B50[*(unsigned __int8 *)(v9[10] + v6)];
          *(float *)(v10 + 84) = dword_467B50[*(unsigned __int8 *)(v9[10] + v6)];
          *(float *)(dword_52FCC0 + 84) = v16;
          *(float *)(v10 + 60) = dword_467B50[*(unsigned __int8 *)(v9[12] + v6)];
          *(float *)(v10 + 64) = dword_467B50[*(unsigned __int8 *)(v9[13] + v6)];
          *(float *)(v10 + 68) = dword_467B50[*(unsigned __int8 *)(v9[14] + v6)];
        }
        else
        {
          *(_DWORD *)(dword_52FCC0 + 76) = *(_DWORD *)(dword_52FCC0 + 44);
          *(_DWORD *)(dword_52FCC0 + 60) = *(_DWORD *)(dword_52FCC0 + 76);
          *(_DWORD *)(dword_52FCC0 + 80) = *(_DWORD *)(dword_52FCC0 + 48);
          *(_DWORD *)(dword_52FCC0 + 64) = *(_DWORD *)(dword_52FCC0 + 80);
          *(_DWORD *)(dword_52FCC0 + 84) = *(_DWORD *)(dword_52FCC0 + 52);
          *(_DWORD *)(dword_52FCC0 + 68) = *(_DWORD *)(dword_52FCC0 + 84);
          v17 = *(float *)(dword_52FCC0 + 44);
          *(float *)(v10 + 76) = *(float *)(dword_52FCC0 + 44);
          *(float *)(v10 + 60) = v17;
          *(float *)(v10 + 44) = v17;
          v18 = *(float *)(dword_52FCC0 + 48);
          *(float *)(v10 + 80) = *(float *)(dword_52FCC0 + 48);
          *(float *)(v10 + 64) = v18;
          *(float *)(v10 + 48) = v18;
          v19 = *(float *)(dword_52FCC0 + 52);
          *(float *)(v10 + 84) = *(float *)(dword_52FCC0 + 52);
          *(float *)(v10 + 68) = v19;
          *(float *)(v10 + 52) = v19;
        }
        v20 = (float *)(16 * *(unsigned __int16 *)(v6 + 2 * *v7) + dword_623688 + 8);
        if ( *v20 >= (double)flt_4EFB60 )
        {
          v21 = 0;
        }
        else
        {
          if ( *v20 >= (double)flt_4EFB48 )
            *(float *)(dword_52FCC0 + 56) = (flt_4EFB68 + *v20) * flt_4EFB64;
          else
            *(_DWORD *)(dword_52FCC0 + 56) = 0;
          v21 = 1;
        }
        v22 = (float *)(16 * *(unsigned __int16 *)(v6 + 2 * v7[1]) + dword_623688 + 8);
        if ( *v22 >= (double)flt_4EFB60 )
        {
          v23 = 0;
        }
        else
        {
          if ( *v22 >= (double)flt_4EFB48 )
            *(float *)(dword_52FCC0 + 72) = (flt_4EFB68 + *v22) * flt_4EFB64;
          else
            *(_DWORD *)(dword_52FCC0 + 72) = 0;
          v23 = 1;
        }
        v24 = v23 | v21;
        v25 = (float *)(16 * *(unsigned __int16 *)(v6 + 2 * v7[2]) + dword_623688 + 8);
        if ( *v25 >= (double)flt_4EFB60 )
        {
          v26 = 0;
        }
        else
        {
          if ( *v25 >= (double)flt_4EFB48 )
            *(float *)(dword_52FCC0 + 88) = (flt_4EFB68 + *v25) * flt_4EFB64;
          else
            *(_DWORD *)(dword_52FCC0 + 88) = 0;
          v26 = 1;
        }
        v75 = v26 | v24;
        v27 = (float *)(16 * *(unsigned __int16 *)(v6 + 2 * *v7) + dword_623688 + 8);
        if ( *v27 >= (double)flt_4EFB60 )
        {
          v28 = 0;
        }
        else if ( *v27 >= (double)flt_4EFB48 )
        {
          v28 = 1;
          *(float *)(v10 + 56) = (flt_4EFB68 + *v27) * flt_4EFB64;
        }
        else
        {
          *(_DWORD *)(v10 + 56) = 0;
          v28 = 1;
        }
        v29 = (float *)(16 * *(unsigned __int16 *)(v6 + 2 * v7[1]) + dword_623688 + 8);
        if ( *v29 >= (double)flt_4EFB60 )
        {
          v30 = 0;
        }
        else if ( *v29 >= (double)flt_4EFB48 )
        {
          v30 = 1;
          *(float *)(v10 + 72) = (flt_4EFB68 + *v29) * flt_4EFB64;
        }
        else
        {
          *(_DWORD *)(v10 + 72) = 0;
          v30 = 1;
        }
        v31 = v30 | v28;
        v32 = (float *)(16 * *(unsigned __int16 *)(v6 + 2 * v7[2]) + dword_623688 + 8);
        if ( *v32 >= (double)flt_4EFB60 )
        {
          v33 = 0;
        }
        else if ( *v32 >= (double)flt_4EFB48 )
        {
          v33 = 1;
          *(float *)(v10 + 88) = (flt_4EFB68 + *v32) * flt_4EFB64;
        }
        else
        {
          *(_DWORD *)(v10 + 88) = 0;
          v33 = 1;
        }
        v77 = v33 | v31;
        if ( (*(_BYTE *)(v6 + 2) & 8) != 0 )
        {
          v36 = a5[1];
          LOBYTE(v36) = *(_BYTE *)(v6 + 2 * v36);
          v37 = (v36 >> 5) & 3;
          v35 = a2;
          v38 = dword_52FD74[12 * (_DWORD)a2 + v37];
          if ( v38 != 0 )
          {
            v39 = *(float *)&dword_467730[v37];
            *(float *)(v10 + 40) = *(float *)&dword_467730[v37];
            *(float *)(dword_52FCC0 + 40) = v39;
            a2 = &dword_4E7DC8[4 * v38];
            *(_DWORD *)(dword_52FCC0 + 12) = *a2;
            *(_DWORD *)(v10 + 12) = dword_52FCC0;
            *a2 = v10;
            word_621620[v38] = dword_7BD970;
          }
          else
          {
            a2 = &dword_4E7DC0[4 * (_DWORD)a2];
            *(_DWORD *)(dword_52FCC0 + 12) = *a2;
            *(_DWORD *)(v10 + 12) = dword_52FCC0;
            *a2 = v10;
LABEL_57:
            word_622600[(_DWORD)v35] = 1;
          }
        }
        else
        {
          v34 = 4 * (_DWORD)a2;
          if ( v75 != 0 )
          {
            *(_DWORD *)(dword_52FCC0 + 12) = dword_4E7DC8[4 * (_DWORD)a2];
            dword_4E7DC8[v34] = dword_52FCC0;
          }
          else
          {
            *(_DWORD *)(dword_52FCC0 + 12) = dword_4E7DC0[4 * (_DWORD)a2];
            dword_4E7DC0[v34] = dword_52FCC0;
          }
          if ( v77 != 0 )
          {
            *(_DWORD *)(v10 + 12) = dword_4E7DC8[v34];
            dword_4E7DC8[v34] = v10;
          }
          else
          {
            *(_DWORD *)(v10 + 12) = dword_4E7DC0[v34];
            dword_4E7DC0[v34] = v10;
          }
          if ( v75 == 0 && v77 == 0 )
          {
            v35 = a2;
            goto LABEL_57;
          }
          word_621620[(_DWORD)a2] = dword_7BD970;
        }
        v40 = a3;
        if ( a3 != NULL )
        {
          if ( a6 == 1 )
          {
            *(float *)(dword_52FCC0 + 16) = flt_467F50[*(unsigned __int8 *)(v6 + *a3)];
            *(float *)(dword_52FCC0 + 20) = flt_468350[*(unsigned __int8 *)(v40[1] + v6)];
            v41 = flt_467F50[*(unsigned __int8 *)(v40[2] + v6)];
            *(float *)(v10 + 16) = flt_467F50[*(unsigned __int8 *)(v40[2] + v6)];
            *(float *)(dword_52FCC0 + 24) = v41;
            v42 = flt_468350[*(unsigned __int8 *)(v40[3] + v6)];
            *(float *)(v10 + 20) = flt_468350[*(unsigned __int8 *)(v40[3] + v6)];
            *(float *)(dword_52FCC0 + 28) = v42;
            v43 = flt_467F50[*(unsigned __int8 *)(v40[4] + v6)];
            *(float *)(v10 + 32) = flt_467F50[*(unsigned __int8 *)(v40[4] + v6)];
            *(float *)(dword_52FCC0 + 32) = v43;
            v44 = flt_468350[*(unsigned __int8 *)(v40[5] + v6)];
            *(float *)(v10 + 36) = flt_468350[*(unsigned __int8 *)(v40[5] + v6)];
            *(float *)(dword_52FCC0 + 36) = v44;
            *(float *)(v10 + 24) = flt_467F50[*(unsigned __int8 *)(v40[6] + v6)];
            *(float *)(v10 + 28) = flt_468350[*(unsigned __int8 *)(v40[7] + v6)];
          }
        }
        else
        {
          *(float *)(v10 + 32) = flt_467F50[0];
          *(float *)(dword_52FCC0 + 32) = flt_467F50[0];
          *(float *)(dword_52FCC0 + 16) = flt_467F50[0];
          *(float *)(v10 + 24) = flt_46834C;
          *(float *)(v10 + 16) = flt_46834C;
          *(float *)(dword_52FCC0 + 24) = flt_46834C;
          *(float *)(v10 + 20) = flt_46874C;
          *(float *)(dword_52FCC0 + 28) = flt_46874C;
          *(float *)(dword_52FCC0 + 20) = flt_46874C;
          *(float *)(v10 + 36) = flt_468350[0];
          *(float *)(v10 + 28) = flt_468350[0];
          *(float *)(dword_52FCC0 + 36) = flt_468350[0];
        }
        *(_DWORD *)dword_52FCC0 = dword_623688 + 16 * *(unsigned __int16 *)(v6 + 2 * *v7);
        v45 = 16 * *(unsigned __int16 *)(v6 + 2 * v7[1]) + dword_623688;
        *(_DWORD *)v10 = v45;
        *(_DWORD *)(dword_52FCC0 + 4) = v45;
        v46 = 16 * *(unsigned __int16 *)(v6 + 2 * v7[2]) + dword_623688;
        *(_DWORD *)(v10 + 8) = v46;
        *(_DWORD *)(dword_52FCC0 + 8) = v46;
        v47 = v72 + 2;
        *(_DWORD *)(v10 + 4) = dword_623688 + 16 * *(unsigned __int16 *)(v6 + 2 * v7[3]);
        goto LABEL_99;
      }
      v48 = v73 + a1;
      v73 += 120;
      v49 = a4;
      dword_52FBA0 = v48;
      *(float *)(v48 + 56) = dword_467B50[*(unsigned __int8 *)(v6 + *a4)];
      *(float *)(dword_52FBA0 + 60) = dword_467B50[*(unsigned __int8 *)(v49[1] + v6)];
      *(float *)(dword_52FBA0 + 64) = dword_467B50[*(unsigned __int8 *)(v49[2] + v6)];
      *(_DWORD *)(dword_52FBA0 + 116) = 1065353216;
      *(_DWORD *)(dword_52FBA0 + 100) = 1065353216;
      *(_DWORD *)(dword_52FBA0 + 84) = 1065353216;
      *(_DWORD *)(dword_52FBA0 + 68) = 1065353216;
      if ( v49[16] == 16 )
      {
        *(float *)(dword_52FBA0 + 72) = dword_467B50[*(unsigned __int8 *)(v49[4] + v6)];
        *(float *)(dword_52FBA0 + 76) = dword_467B50[*(unsigned __int8 *)(v49[5] + v6)];
        *(float *)(dword_52FBA0 + 80) = dword_467B50[*(unsigned __int8 *)(v49[6] + v6)];
        *(float *)(dword_52FBA0 + 88) = dword_467B50[*(unsigned __int8 *)(v49[8] + v6)];
        *(float *)(dword_52FBA0 + 92) = dword_467B50[*(unsigned __int8 *)(v49[9] + v6)];
        *(float *)(dword_52FBA0 + 96) = dword_467B50[*(unsigned __int8 *)(v49[10] + v6)];
        *(float *)(dword_52FBA0 + 104) = dword_467B50[*(unsigned __int8 *)(v49[12] + v6)];
        *(float *)(dword_52FBA0 + 108) = dword_467B50[*(unsigned __int8 *)(v49[13] + v6)];
        *(float *)(dword_52FBA0 + 112) = dword_467B50[*(unsigned __int8 *)(v49[14] + v6)];
      }
      else
      {
        *(_DWORD *)(dword_52FBA0 + 104) = *(_DWORD *)(dword_52FBA0 + 56);
        *(_DWORD *)(dword_52FBA0 + 88) = *(_DWORD *)(dword_52FBA0 + 104);
        *(_DWORD *)(dword_52FBA0 + 72) = *(_DWORD *)(dword_52FBA0 + 88);
        *(_DWORD *)(dword_52FBA0 + 108) = *(_DWORD *)(dword_52FBA0 + 60);
        *(_DWORD *)(dword_52FBA0 + 92) = *(_DWORD *)(dword_52FBA0 + 108);
        *(_DWORD *)(dword_52FBA0 + 76) = *(_DWORD *)(dword_52FBA0 + 92);
        *(_DWORD *)(dword_52FBA0 + 112) = *(_DWORD *)(dword_52FBA0 + 64);
        *(_DWORD *)(dword_52FBA0 + 96) = *(_DWORD *)(dword_52FBA0 + 112);
        *(_DWORD *)(dword_52FBA0 + 80) = *(_DWORD *)(dword_52FBA0 + 96);
      }
      v50 = dword_52FBA0;
      v51 = (float *)(16 * *(unsigned __int16 *)(v6 + 2 * *v7) + dword_623688 + 8);
      if ( *v51 >= (double)flt_4EFB60 )
      {
        v52 = 0;
      }
      else if ( *v51 >= (double)flt_4EFB48 )
      {
        v52 = 1;
        *(float *)(dword_52FBA0 + 68) = (flt_4EFB68 + *v51) * flt_4EFB64;
        v50 = dword_52FBA0;
      }
      else
      {
        *(_DWORD *)(dword_52FBA0 + 68) = 0;
        v50 = dword_52FBA0;
        v52 = 1;
      }
      v53 = (float *)(16 * *(unsigned __int16 *)(v6 + 2 * v7[1]) + dword_623688 + 8);
      if ( *v53 >= (double)flt_4EFB60 )
      {
        v54 = 0;
      }
      else if ( *v53 >= (double)flt_4EFB48 )
      {
        v54 = 1;
        *(float *)(v50 + 84) = (flt_4EFB68 + *v53) * flt_4EFB64;
        v50 = dword_52FBA0;
      }
      else
      {
        *(_DWORD *)(v50 + 84) = 0;
        v50 = dword_52FBA0;
        v54 = 1;
      }
      v55 = v54 | v52;
      v56 = (float *)(16 * *(unsigned __int16 *)(v6 + 2 * v7[2]) + dword_623688 + 8);
      if ( *v56 >= (double)flt_4EFB60 )
      {
        v57 = 0;
      }
      else if ( *v56 >= (double)flt_4EFB48 )
      {
        v57 = 1;
        *(float *)(v50 + 100) = (flt_4EFB68 + *v56) * flt_4EFB64;
        v50 = dword_52FBA0;
      }
      else
      {
        *(_DWORD *)(v50 + 100) = 0;
        v50 = dword_52FBA0;
        v57 = 1;
      }
      v58 = v57 | v55;
      v59 = (float *)(16 * *(unsigned __int16 *)(v6 + 2 * v7[3]) + dword_623688 + 8);
      if ( *v59 >= (double)flt_4EFB60 )
      {
        v60 = 0;
      }
      else if ( *v59 >= (double)flt_4EFB48 )
      {
        v60 = 1;
        *(float *)(v50 + 116) = (flt_4EFB68 + *v59) * flt_4EFB64;
        v50 = dword_52FBA0;
      }
      else
      {
        *(_DWORD *)(v50 + 116) = 0;
        v50 = dword_52FBA0;
        v60 = 1;
      }
      v61 = v60 | v58;
      if ( (*(_BYTE *)(v6 + 2) & 8) != 0 )
      {
        v66 = (unsigned int)a5;
        LOBYTE(v66) = *(_BYTE *)(v6 + 2 * a5[1]);
        v67 = (v66 >> 5) & 3;
        v62 = a2;
        v68 = dword_52FD74[12 * (_DWORD)a2 + v67];
        if ( v68 != 0 )
        {
          *(_DWORD *)(v50 + 52) = dword_467730[v67];
          *(_DWORD *)(dword_52FBA0 + 16) = dword_4E7DCC[4 * v68];
          v65 = dword_52FBA0;
          dword_4E7DCC[4 * v68] = dword_52FBA0;
          word_621620[v68] = dword_7BD970;
          goto LABEL_93;
        }
        v63 = a2;
      }
      else
      {
        v62 = a2;
        v63 = a2;
        if ( v61 != 0 )
        {
          v64 = &dword_4E7DCC[4 * (_DWORD)a2];
          *(_DWORD *)(v50 + 16) = *v64;
          v65 = dword_52FBA0;
          *v64 = dword_52FBA0;
          word_621620[(_DWORD)v62] = dword_7BD970;
          goto LABEL_93;
        }
      }
      v69 = 4 * (_DWORD)v63;
      *(_DWORD *)(v50 + 16) = dword_4E7DC4[v69];
      v65 = dword_52FBA0;
      dword_4E7DC4[v69] = dword_52FBA0;
      word_622600[(_DWORD)v62] = 1;
LABEL_93:
      v70 = a3;
      if ( a3 == NULL )
      {
        *(float *)(v65 + 36) = flt_467F50[0];
        *(float *)(dword_52FBA0 + 20) = flt_467F50[0];
        *(float *)(dword_52FBA0 + 32) = flt_46874C;
        *(float *)(dword_52FBA0 + 24) = flt_46874C;
        *(float *)(dword_52FBA0 + 44) = flt_46834C;
        *(float *)(dword_52FBA0 + 28) = flt_46834C;
        *(float *)(dword_52FBA0 + 48) = flt_468350[0];
        *(float *)(dword_52FBA0 + 40) = flt_468350[0];
        goto LABEL_97;
      }
      if ( a6 == 1 )
      {
        *(float *)(v65 + 20) = flt_467F50[*(unsigned __int8 *)(v6 + *a3)];
        *(float *)(dword_52FBA0 + 24) = flt_468350[*(unsigned __int8 *)(v70[1] + v6)];
        *(float *)(dword_52FBA0 + 28) = flt_467F50[*(unsigned __int8 *)(v70[2] + v6)];
        *(float *)(dword_52FBA0 + 32) = flt_468350[*(unsigned __int8 *)(v70[3] + v6)];
        *(float *)(dword_52FBA0 + 36) = flt_467F50[*(unsigned __int8 *)(v70[4] + v6)];
        *(float *)(dword_52FBA0 + 40) = flt_468350[*(unsigned __int8 *)(v70[5] + v6)];
        *(float *)(dword_52FBA0 + 44) = flt_467F50[*(unsigned __int8 *)(v70[6] + v6)];
        *(float *)(dword_52FBA0 + 48) = flt_468350[*(unsigned __int8 *)(v70[7] + v6)];
LABEL_97:
        v65 = dword_52FBA0;
      }
      *(_DWORD *)v65 = dword_623688 + 16 * *(unsigned __int16 *)(v6 + 2 * *v7);
      *(_DWORD *)(dword_52FBA0 + 4) = dword_623688 + 16 * *(unsigned __int16 *)(v6 + 2 * v7[1]);
      *(_DWORD *)(dword_52FBA0 + 8) = dword_623688 + 16 * *(unsigned __int16 *)(v6 + 2 * v7[2]);
      v47 = v72 + 1;
      *(_DWORD *)(dword_52FBA0 + 12) = dword_623688 + 16 * *(unsigned __int16 *)(v6 + 2 * v7[3]);
LABEL_99:
      v72 = v47;
      v76 = (int *)v76[1];
      v6 = *v76;
    }
    while ( *v76 != 0 );
  }
  dword_4E5E40 = v72;
  return v73;
}

// 0x415a50  sub_415A50
int __cdecl sub_415A50(_DWORD *a1, _DWORD *a2, int *a3, _DWORD *a4, _DWORD *a5, int a6)
{
  int v6; // esi
  _DWORD *v7; // ecx
  int v8; // ecx
  int v9; // eax
  __int64 v10; // rax
  unsigned int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // edx
  float *v19; // esi
  int v20; // edx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  bool v25; // zf
  float *v27; // [esp+10h] [ebp-30h]
  float *v28; // [esp+14h] [ebp-2Ch]
  int *v29; // [esp+1Ch] [ebp-24h]
  int v30; // [esp+20h] [ebp-20h]
  int v31; // [esp+24h] [ebp-1Ch]
  _DWORD *v32; // [esp+28h] [ebp-18h]
  int v33; // [esp+2Ch] [ebp-14h]
  int v34; // [esp+30h] [ebp-10h] BYREF
  float v35; // [esp+34h] [ebp-Ch]
  int v36; // [esp+38h] [ebp-8h]
  float v37; // [esp+3Ch] [ebp-4h]
  float v38; // [esp+48h] [ebp+8h]
  int v39; // [esp+48h] [ebp+8h]
  float v40; // [esp+48h] [ebp+8h]

  if ( a6 == 1 )
  {
    v29 = &v34;
  }
  else
  {
    off_469970 = &unk_4B1C10;
    v29 = (int *)&off_469970;
  }
  v31 = dword_4E5E40;
  v30 = 0;
  v32 = *(_DWORD **)(dword_621608 + 4);
  v6 = *v32;
  v36 = *v32;
  if ( v36 != 0 )
  {
    v7 = a1;
    v33 = (int)a1;
    while ( 1 )
    {
      dword_4EFAC4 = (int)v7;
      v34 = v6;
      *v7 = dword_4E5E80[*(unsigned __int16 *)(*v29 + 2 * *a5)];
      *(_DWORD *)(dword_4EFAC4 + 4) = 1;
      v8 = *(_DWORD *)(16 * *(unsigned __int16 *)(v6 + 2 * a2[1]) + dword_623680 + 8);
      v38 = *(float *)&v8;
      v37 = *(float *)(16 * *(unsigned __int16 *)(v6 + 2 * a2[2]) + dword_623680 + 8);
      if ( v8 >= SLODWORD(v37) )
        v38 = v37;
      v9 = *(_DWORD *)(16 * *(unsigned __int16 *)(v6 + 2 * *a2) + dword_623680 + 8);
      if ( v9 < SLODWORD(v38) || (v9 = LODWORD(v37), v39 = v8, v8 >= SLODWORD(v37)) )
        v39 = v9;
      v10 = (__int64)((double)v39 + flt_621600);
      if ( (int)v10 >= 0 )
        v11 = 0;
      else
        v11 = -(int)v10;
      *(_DWORD *)(dword_4EFAC4 + 8) = 0;
      *(_DWORD *)(dword_4EFAC4 + 28) = dword_4EFBA0[v11];
      dword_4EFBA0[v11] = v33;
      if ( (*(_BYTE *)(v6 + 2) & 8) != 0 )
      {
        LOBYTE(v11) = *(_BYTE *)(v6 + 2 * a5[1]);
        v12 = (v11 >> 5) & 3;
        v13 = dword_4EFAC4;
        if ( v12 == 2 )
          byte_52FD69[48 * *(_DWORD *)dword_4EFAC4] = 1;
        *(_BYTE *)(v13 + 12) = v12;
        *(_DWORD *)(dword_4EFAC4 + 4) |= 2u;
        *(_DWORD *)(dword_4EFAC4 + 8) |= 4u;
      }
      else
      {
        *(_BYTE *)(dword_4EFAC4 + 12) = 4;
      }
      if ( ((*(_BYTE *)(16 * *(unsigned __int16 *)(v6 + 2 * a2[2]) + dword_623688 + 12)
           | (unsigned __int8)(*(_BYTE *)(16 * *(unsigned __int16 *)(v6 + 2 * a2[1]) + dword_623688 + 12)
                             | *(_BYTE *)(16 * *(unsigned __int16 *)(v6 + 2 * *a2) + dword_623688 + 12)))
          & 2) != 0 )
        *(_DWORD *)(dword_4EFAC4 + 4) |= 4u;
      v14 = dword_4EFAC4;
      if ( a6 == 1 && *(_DWORD *)dword_4EFAC4 != 0 )
      {
        v15 = *(_DWORD *)(dword_4EFAC4 + 8);
        LOBYTE(v15) = v15 | 2;
        *(_DWORD *)(dword_4EFAC4 + 8) = v15;
        v14 = dword_4EFAC4;
        if ( byte_52FD69[48 * *(_DWORD *)dword_4EFAC4] != 0 )
        {
          v16 = *(_DWORD *)(dword_4EFAC4 + 8);
          LOBYTE(v16) = v16 | 8;
          *(_DWORD *)(dword_4EFAC4 + 8) = v16;
          v14 = dword_4EFAC4;
        }
      }
      *(_DWORD *)(v14 + 16) = *(unsigned __int8 *)(v6 + *a4);
      *(_DWORD *)(dword_4EFAC4 + 20) = *(unsigned __int8 *)(v6 + a4[1]);
      *(_DWORD *)(dword_4EFAC4 + 24) = *(unsigned __int8 *)(v6 + a4[2]);
      if ( a4[16] == 12 )
      {
        *(_DWORD *)(dword_4EFAC4 + 44) = *(unsigned __int8 *)(v6 + *a4);
        *(_DWORD *)(dword_4EFAC4 + 48) = *(unsigned __int8 *)(v6 + a4[1]);
        *(_DWORD *)(dword_4EFAC4 + 52) = *(unsigned __int8 *)(v6 + a4[2]);
        *(_DWORD *)(dword_4EFAC4 + 68) = *(unsigned __int8 *)(a4[4] + v6);
        *(_DWORD *)(dword_4EFAC4 + 72) = *(unsigned __int8 *)(a4[5] + v6);
        *(_DWORD *)(dword_4EFAC4 + 76) = *(unsigned __int8 *)(a4[6] + v6);
        *(_DWORD *)(dword_4EFAC4 + 92) = *(unsigned __int8 *)(a4[8] + v6);
        *(_DWORD *)(dword_4EFAC4 + 96) = *(unsigned __int8 *)(a4[9] + v6);
        *(_DWORD *)(dword_4EFAC4 + 100) = *(unsigned __int8 *)(a4[10] + v6);
        *(_DWORD *)(dword_4EFAC4 + 8) |= 1u;
      }
      else
      {
        *(_DWORD *)(dword_4EFAC4 + 44) = *(_DWORD *)(dword_4EFAC4 + 16);
        *(_DWORD *)(dword_4EFAC4 + 48) = *(_DWORD *)(dword_4EFAC4 + 20);
        *(_DWORD *)(dword_4EFAC4 + 52) = *(_DWORD *)(dword_4EFAC4 + 24);
        *(_DWORD *)(dword_4EFAC4 + 68) = *(_DWORD *)(dword_4EFAC4 + 16);
        *(_DWORD *)(dword_4EFAC4 + 72) = *(_DWORD *)(dword_4EFAC4 + 20);
        *(_DWORD *)(dword_4EFAC4 + 76) = *(_DWORD *)(dword_4EFAC4 + 24);
        *(_DWORD *)(dword_4EFAC4 + 92) = *(_DWORD *)(dword_4EFAC4 + 16);
        *(_DWORD *)(dword_4EFAC4 + 96) = *(_DWORD *)(dword_4EFAC4 + 20);
        *(_DWORD *)(dword_4EFAC4 + 100) = *(_DWORD *)(dword_4EFAC4 + 24);
      }
      v17 = 12 * *(_DWORD *)dword_4EFAC4;
      v40 = (float)(dword_52FD60[v17] - 1);
      v37 = (float)(dword_52FD64[v17] - 1);
      if ( a3 != NULL )
      {
        if ( (*(_BYTE *)(*v32 + 2) & 2) != 0 )
        {
          v28 = (float *)(dword_623688 + 16 * *(unsigned __int16 *)(v6 + 2 * a2[2]));
          v27 = (float *)(dword_623688 + 16 * *(unsigned __int16 *)(v6 + 2 * a2[1]));
          v19 = (float *)(dword_623688 + 16 * *(unsigned __int16 *)(v6 + 2 * *a2));
          v35 = (*v19 - *v27) * (v28[1] - v27[1]) - (v19[1] - v27[1]) * (*v28 - *v27);
          v20 = *a3;
          if ( v35 < 0.0 )
          {
            v21 = v36;
            *(float *)(dword_4EFAC4 + 84) = flt_467F50[*(unsigned __int8 *)(v36 + v20)] * v40;
            *(float *)(dword_4EFAC4 + 88) = flt_468350[*(unsigned __int8 *)(a3[1] + v21)] * v37;
            *(float *)(dword_4EFAC4 + 60) = flt_467F50[*(unsigned __int8 *)(a3[2] + v21)] * v40;
            *(float *)(dword_4EFAC4 + 64) = flt_468350[*(unsigned __int8 *)(a3[3] + v21)] * v37;
            *(float *)(dword_4EFAC4 + 36) = flt_467F50[*(unsigned __int8 *)(a3[4] + v21)] * v40;
            *(float *)(dword_4EFAC4 + 40) = flt_468350[*(unsigned __int8 *)(a3[5] + v21)] * v37;
            v22 = v34;
            *(_DWORD *)(dword_4EFAC4 + 80) = dword_623680 + 16 * *(unsigned __int16 *)(v34 + 2 * *a2);
            *(_DWORD *)(dword_4EFAC4 + 56) = dword_623680 + 16 * *(unsigned __int16 *)(v22 + 2 * a2[1]);
            *(_DWORD *)(dword_4EFAC4 + 32) = dword_623680 + 16 * *(unsigned __int16 *)(v22 + 2 * a2[2]);
            goto LABEL_38;
          }
          v23 = v36;
          *(float *)(dword_4EFAC4 + 36) = flt_467F50[*(unsigned __int8 *)(v36 + v20)] * v40;
          *(float *)(dword_4EFAC4 + 40) = flt_468350[*(unsigned __int8 *)(a3[1] + v23)] * v37;
          *(float *)(dword_4EFAC4 + 60) = flt_467F50[*(unsigned __int8 *)(a3[2] + v23)] * v40;
          *(float *)(dword_4EFAC4 + 64) = flt_468350[*(unsigned __int8 *)(a3[3] + v23)] * v37;
          *(float *)(dword_4EFAC4 + 84) = flt_467F50[*(unsigned __int8 *)(a3[4] + v23)] * v40;
          *(float *)(dword_4EFAC4 + 88) = flt_468350[*(unsigned __int8 *)(a3[5] + v23)] * v37;
          v24 = v34;
          *(_DWORD *)(dword_4EFAC4 + 32) = dword_623680 + 16 * *(unsigned __int16 *)(v34 + 2 * *a2);
          *(_DWORD *)(dword_4EFAC4 + 56) = dword_623680 + 16 * *(unsigned __int16 *)(v24 + 2 * a2[1]);
          v18 = *(unsigned __int16 *)(v24 + 2 * a2[2]);
        }
        else
        {
          *(float *)(dword_4EFAC4 + 36) = flt_467F50[*(unsigned __int8 *)(v6 + *a3)] * v40;
          *(float *)(dword_4EFAC4 + 40) = flt_468350[*(unsigned __int8 *)(a3[1] + v6)] * v37;
          *(float *)(dword_4EFAC4 + 60) = flt_467F50[*(unsigned __int8 *)(a3[2] + v6)] * v40;
          *(float *)(dword_4EFAC4 + 64) = flt_468350[*(unsigned __int8 *)(a3[3] + v6)] * v37;
          *(float *)(dword_4EFAC4 + 84) = flt_467F50[*(unsigned __int8 *)(a3[4] + v6)] * v40;
          *(float *)(dword_4EFAC4 + 88) = flt_468350[*(unsigned __int8 *)(a3[5] + v6)] * v37;
          *(_DWORD *)(dword_4EFAC4 + 32) = dword_623680 + 16 * *(unsigned __int16 *)(v6 + 2 * *a2);
          *(_DWORD *)(dword_4EFAC4 + 56) = dword_623680 + 16 * *(unsigned __int16 *)(v6 + 2 * a2[1]);
          v18 = *(unsigned __int16 *)(v6 + 2 * a2[2]);
        }
        *(_DWORD *)(dword_4EFAC4 + 80) = dword_623680 + 16 * v18;
      }
      else
      {
        *(float *)(dword_4EFAC4 + 36) = v40 * flt_467F50[0];
        *(float *)(dword_4EFAC4 + 40) = v37 * flt_46874C;
        *(float *)(dword_4EFAC4 + 60) = v40 * flt_46834C;
        *(float *)(dword_4EFAC4 + 64) = v37 * flt_46874C;
        *(float *)(dword_4EFAC4 + 84) = v40 * flt_467F50[0];
        *(float *)(dword_4EFAC4 + 88) = v37 * flt_468350[0];
        *(_DWORD *)(dword_4EFAC4 + 32) = dword_623680 + 16 * *(unsigned __int16 *)(v6 + 2 * *a2);
        *(_DWORD *)(dword_4EFAC4 + 56) = dword_623680 + 16 * *(unsigned __int16 *)(v6 + 2 * a2[1]);
        *(_DWORD *)(dword_4EFAC4 + 80) = dword_623680 + 16 * *(unsigned __int16 *)(v6 + 2 * a2[2]);
      }
LABEL_38:
      v32 = (_DWORD *)v32[1];
      v7 = (_DWORD *)(v33 + 104);
      v25 = *v32 == 0;
      v30 += 104;
      v33 += 104;
      ++v31;
      v36 = *v32;
      if ( v25 )
        break;
      v6 = v36;
    }
  }
  dword_4E5E40 = v31;
  return v30;
}

// 0x416240  sub_416240
int __cdecl sub_416240(_DWORD *a1, _DWORD *a2, int *a3, _DWORD *a4, _DWORD *a5, int a6)
{
  int v6; // esi
  _DWORD *v7; // ecx
  int v8; // ecx
  float v9; // edx
  float v10; // eax
  __int64 v11; // rax
  unsigned int v12; // eax
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // edx
  float *v20; // esi
  int v21; // edx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  bool v26; // zf
  float *v28; // [esp+10h] [ebp-30h]
  float *v29; // [esp+14h] [ebp-2Ch]
  int *v30; // [esp+1Ch] [ebp-24h]
  int v31; // [esp+20h] [ebp-20h]
  int v32; // [esp+24h] [ebp-1Ch]
  _DWORD *v33; // [esp+28h] [ebp-18h]
  int v34; // [esp+2Ch] [ebp-14h]
  int v35; // [esp+30h] [ebp-10h] BYREF
  float v36; // [esp+34h] [ebp-Ch]
  int v37; // [esp+38h] [ebp-8h]
  float v38; // [esp+3Ch] [ebp-4h]
  float v39; // [esp+48h] [ebp+8h]
  float v40; // [esp+48h] [ebp+8h]
  int v41; // [esp+48h] [ebp+8h]
  float v42; // [esp+48h] [ebp+8h]

  if ( a6 == 1 )
  {
    v30 = &v35;
  }
  else
  {
    off_469970 = &unk_4B1C10;
    v30 = (int *)&off_469970;
  }
  v32 = dword_4E5E40;
  v31 = 0;
  v33 = *(_DWORD **)(dword_621608 + 4);
  v6 = *v33;
  v37 = *v33;
  if ( v37 != 0 )
  {
    v7 = a1;
    v34 = (int)a1;
    while ( 1 )
    {
      dword_4EFAC8 = (int)v7;
      v35 = v6;
      *v7 = dword_4E5E80[*(unsigned __int16 *)(*v30 + 2 * *a5)];
      *(_DWORD *)(dword_4EFAC8 + 4) = 0;
      v8 = *(int *)(16 * *(unsigned __int16 *)(v6 + 2 * a2[2]) + dword_623680 + 8);
      v39 = *(float *)&v8;
      v38 = *(float *)(16 * *(unsigned __int16 *)(v6 + 2 * a2[3]) + dword_623680 + 8);
      if ( v8 >= SLODWORD(v38) )
        v39 = v38;
      v9 = *(float *)(16 * *(unsigned __int16 *)(v6 + 2 * a2[1]) + dword_623680 + 8);
      if ( SLODWORD(v9) < SLODWORD(v39) || (v9 = v38, v40 = *(float *)&v8, v8 >= SLODWORD(v38)) )
        v40 = v9;
      if ( *(_DWORD *)(16 * *(unsigned __int16 *)(v6 + 2 * *a2) + dword_623680 + 8) >= SLODWORD(v40) )
      {
        v10 = *(float *)&v8;
        if ( v8 >= SLODWORD(v38) )
          v10 = v38;
        if ( *(_DWORD *)(16 * *(unsigned __int16 *)(v6 + 2 * a2[1]) + dword_623680 + 8) >= SLODWORD(v10) )
        {
          v41 = v8;
          if ( v8 >= SLODWORD(v38) )
            v41 = LODWORD(v38);
        }
        else
        {
          v41 = *(_DWORD *)(16 * *(unsigned __int16 *)(v6 + 2 * a2[1]) + dword_623680 + 8);
        }
      }
      else
      {
        v41 = *(_DWORD *)(16 * *(unsigned __int16 *)(v6 + 2 * *a2) + dword_623680 + 8);
      }
      v11 = (__int64)((double)v41 + flt_621600);
      if ( (int)v11 >= 0 )
        v12 = 0;
      else
        v12 = -(int)v11;
      *(_DWORD *)(dword_4EFAC8 + 8) = 0;
      *(_DWORD *)(dword_4EFAC8 + 28) = dword_4EFBA0[v12];
      dword_4EFBA0[v12] = v34;
      if ( (*(_BYTE *)(v6 + 2) & 8) != 0 )
      {
        LOBYTE(v12) = *(_BYTE *)(v6 + 2 * a5[1]);
        v13 = (v12 >> 5) & 3;
        v14 = dword_4EFAC8;
        if ( v13 == 2 )
          byte_52FD69[48 * *(_DWORD *)dword_4EFAC8] = 1;
        *(_BYTE *)(v14 + 12) = v13;
        *(_DWORD *)(dword_4EFAC8 + 4) |= 2u;
        *(_DWORD *)(dword_4EFAC8 + 8) |= 4u;
      }
      else
      {
        *(_BYTE *)(dword_4EFAC8 + 12) = 4;
      }
      if ( ((*(_BYTE *)(16 * *(unsigned __int16 *)(v6 + 2 * a2[2]) + dword_623688 + 12)
           | (unsigned __int8)(*(_BYTE *)(16 * *(unsigned __int16 *)(v6 + 2 * a2[3]) + dword_623688 + 12)
                             | *(_BYTE *)(16 * *(unsigned __int16 *)(v6 + 2 * a2[1]) + dword_623688 + 12)
                             | *(_BYTE *)(16 * *(unsigned __int16 *)(v6 + 2 * *a2) + dword_623688 + 12)))
          & 2) != 0 )
        *(_DWORD *)(dword_4EFAC8 + 4) |= 4u;
      v15 = dword_4EFAC8;
      if ( a6 == 1 && *(_DWORD *)dword_4EFAC8 != 0 )
      {
        v16 = *(_DWORD *)(dword_4EFAC8 + 8);
        LOBYTE(v16) = v16 | 2;
        *(_DWORD *)(dword_4EFAC8 + 8) = v16;
        v15 = dword_4EFAC8;
        if ( byte_52FD69[48 * *(_DWORD *)dword_4EFAC8] != 0 )
        {
          v17 = *(_DWORD *)(dword_4EFAC8 + 8);
          LOBYTE(v17) = v17 | 8;
          *(_DWORD *)(dword_4EFAC8 + 8) = v17;
          v15 = dword_4EFAC8;
        }
      }
      *(_DWORD *)(v15 + 16) = *(unsigned __int8 *)(v6 + *a4);
      *(_DWORD *)(dword_4EFAC8 + 20) = *(unsigned __int8 *)(v6 + a4[1]);
      *(_DWORD *)(dword_4EFAC8 + 24) = *(unsigned __int8 *)(v6 + a4[2]);
      if ( a4[16] == 16 )
      {
        *(_DWORD *)(dword_4EFAC8 + 44) = *(unsigned __int8 *)(v6 + *a4);
        *(_DWORD *)(dword_4EFAC8 + 48) = *(unsigned __int8 *)(v6 + a4[1]);
        *(_DWORD *)(dword_4EFAC8 + 52) = *(unsigned __int8 *)(v6 + a4[2]);
        *(_DWORD *)(dword_4EFAC8 + 68) = *(unsigned __int8 *)(a4[4] + v6);
        *(_DWORD *)(dword_4EFAC8 + 72) = *(unsigned __int8 *)(a4[5] + v6);
        *(_DWORD *)(dword_4EFAC8 + 76) = *(unsigned __int8 *)(a4[6] + v6);
        *(_DWORD *)(dword_4EFAC8 + 116) = *(unsigned __int8 *)(a4[8] + v6);
        *(_DWORD *)(dword_4EFAC8 + 120) = *(unsigned __int8 *)(a4[9] + v6);
        *(_DWORD *)(dword_4EFAC8 + 124) = *(unsigned __int8 *)(a4[10] + v6);
        *(_DWORD *)(dword_4EFAC8 + 92) = *(unsigned __int8 *)(a4[12] + v6);
        *(_DWORD *)(dword_4EFAC8 + 96) = *(unsigned __int8 *)(a4[13] + v6);
        *(_DWORD *)(dword_4EFAC8 + 100) = *(unsigned __int8 *)(a4[14] + v6);
        *(_DWORD *)(dword_4EFAC8 + 8) |= 1u;
      }
      else
      {
        *(_DWORD *)(dword_4EFAC8 + 44) = *(_DWORD *)(dword_4EFAC8 + 16);
        *(_DWORD *)(dword_4EFAC8 + 48) = *(_DWORD *)(dword_4EFAC8 + 20);
        *(_DWORD *)(dword_4EFAC8 + 52) = *(_DWORD *)(dword_4EFAC8 + 24);
        *(_DWORD *)(dword_4EFAC8 + 68) = *(_DWORD *)(dword_4EFAC8 + 16);
        *(_DWORD *)(dword_4EFAC8 + 72) = *(_DWORD *)(dword_4EFAC8 + 20);
        *(_DWORD *)(dword_4EFAC8 + 76) = *(_DWORD *)(dword_4EFAC8 + 24);
        *(_DWORD *)(dword_4EFAC8 + 92) = *(_DWORD *)(dword_4EFAC8 + 16);
        *(_DWORD *)(dword_4EFAC8 + 96) = *(_DWORD *)(dword_4EFAC8 + 20);
        *(_DWORD *)(dword_4EFAC8 + 100) = *(_DWORD *)(dword_4EFAC8 + 24);
        *(_DWORD *)(dword_4EFAC8 + 116) = *(_DWORD *)(dword_4EFAC8 + 16);
        *(_DWORD *)(dword_4EFAC8 + 120) = *(_DWORD *)(dword_4EFAC8 + 20);
        *(_DWORD *)(dword_4EFAC8 + 124) = *(_DWORD *)(dword_4EFAC8 + 24);
      }
      v18 = 12 * *(_DWORD *)dword_4EFAC8;
      v42 = (float)(dword_52FD60[v18] - 1);
      v38 = (float)(dword_52FD64[v18] - 1);
      if ( a3 != NULL )
      {
        if ( (*(_BYTE *)(*v33 + 2) & 2) != 0 )
        {
          v29 = (float *)(dword_623688 + 16 * *(unsigned __int16 *)(v6 + 2 * a2[2]));
          v28 = (float *)(dword_623688 + 16 * *(unsigned __int16 *)(v6 + 2 * a2[1]));
          v20 = (float *)(dword_623688 + 16 * *(unsigned __int16 *)(v6 + 2 * *a2));
          v36 = (*v20 - *v28) * (v29[1] - v28[1]) - (v20[1] - v28[1]) * (*v29 - *v28);
          v21 = *a3;
          if ( v36 < 0.0 )
          {
            v22 = v37;
            *(float *)(dword_4EFAC8 + 108) = flt_467F50[*(unsigned __int8 *)(v37 + v21)] * v42;
            *(float *)(dword_4EFAC8 + 112) = flt_468350[*(unsigned __int8 *)(a3[1] + v22)] * v38;
            *(float *)(dword_4EFAC8 + 84) = flt_467F50[*(unsigned __int8 *)(a3[2] + v22)] * v42;
            *(float *)(dword_4EFAC8 + 88) = flt_468350[*(unsigned __int8 *)(a3[3] + v22)] * v38;
            *(float *)(dword_4EFAC8 + 36) = flt_467F50[*(unsigned __int8 *)(a3[4] + v22)] * v42;
            *(float *)(dword_4EFAC8 + 40) = flt_468350[*(unsigned __int8 *)(a3[5] + v22)] * v38;
            *(float *)(dword_4EFAC8 + 60) = flt_467F50[*(unsigned __int8 *)(a3[6] + v22)] * v42;
            *(float *)(dword_4EFAC8 + 64) = flt_468350[*(unsigned __int8 *)(a3[7] + v22)] * v38;
            v23 = v35;
            *(_DWORD *)(dword_4EFAC8 + 104) = dword_623680 + 16 * *(unsigned __int16 *)(v35 + 2 * *a2);
            *(_DWORD *)(dword_4EFAC8 + 80) = dword_623680 + 16 * *(unsigned __int16 *)(v23 + 2 * a2[1]);
            *(_DWORD *)(dword_4EFAC8 + 32) = dword_623680 + 16 * *(unsigned __int16 *)(v23 + 2 * a2[2]);
            *(_DWORD *)(dword_4EFAC8 + 56) = dword_623680 + 16 * *(unsigned __int16 *)(v23 + 2 * a2[3]);
            goto LABEL_46;
          }
          v24 = v37;
          *(float *)(dword_4EFAC8 + 36) = flt_467F50[*(unsigned __int8 *)(v37 + v21)] * v42;
          *(float *)(dword_4EFAC8 + 40) = flt_468350[*(unsigned __int8 *)(a3[1] + v24)] * v38;
          *(float *)(dword_4EFAC8 + 60) = flt_467F50[*(unsigned __int8 *)(a3[2] + v24)] * v42;
          *(float *)(dword_4EFAC8 + 64) = flt_468350[*(unsigned __int8 *)(a3[3] + v24)] * v38;
          *(float *)(dword_4EFAC8 + 108) = flt_467F50[*(unsigned __int8 *)(a3[4] + v24)] * v42;
          *(float *)(dword_4EFAC8 + 112) = flt_468350[*(unsigned __int8 *)(a3[5] + v24)] * v38;
          *(float *)(dword_4EFAC8 + 84) = flt_467F50[*(unsigned __int8 *)(a3[6] + v24)] * v42;
          *(float *)(dword_4EFAC8 + 88) = flt_468350[*(unsigned __int8 *)(a3[7] + v24)] * v38;
          v25 = v35;
          *(_DWORD *)(dword_4EFAC8 + 32) = dword_623680 + 16 * *(unsigned __int16 *)(v35 + 2 * *a2);
          *(_DWORD *)(dword_4EFAC8 + 56) = dword_623680 + 16 * *(unsigned __int16 *)(v25 + 2 * a2[1]);
          *(_DWORD *)(dword_4EFAC8 + 104) = dword_623680 + 16 * *(unsigned __int16 *)(v25 + 2 * a2[2]);
          v19 = *(unsigned __int16 *)(v25 + 2 * a2[3]);
        }
        else
        {
          *(float *)(dword_4EFAC8 + 36) = flt_467F50[*(unsigned __int8 *)(v6 + *a3)] * v42;
          *(float *)(dword_4EFAC8 + 40) = flt_468350[*(unsigned __int8 *)(a3[1] + v6)] * v38;
          *(float *)(dword_4EFAC8 + 60) = flt_467F50[*(unsigned __int8 *)(a3[2] + v6)] * v42;
          *(float *)(dword_4EFAC8 + 64) = flt_468350[*(unsigned __int8 *)(a3[3] + v6)] * v38;
          *(float *)(dword_4EFAC8 + 108) = flt_467F50[*(unsigned __int8 *)(a3[4] + v6)] * v42;
          *(float *)(dword_4EFAC8 + 112) = flt_468350[*(unsigned __int8 *)(a3[5] + v6)] * v38;
          *(float *)(dword_4EFAC8 + 84) = flt_467F50[*(unsigned __int8 *)(a3[6] + v6)] * v42;
          *(float *)(dword_4EFAC8 + 88) = flt_468350[*(unsigned __int8 *)(a3[7] + v6)] * v38;
          *(_DWORD *)(dword_4EFAC8 + 32) = dword_623680 + 16 * *(unsigned __int16 *)(v6 + 2 * *a2);
          *(_DWORD *)(dword_4EFAC8 + 56) = dword_623680 + 16 * *(unsigned __int16 *)(v6 + 2 * a2[1]);
          *(_DWORD *)(dword_4EFAC8 + 104) = dword_623680 + 16 * *(unsigned __int16 *)(v6 + 2 * a2[2]);
          v19 = *(unsigned __int16 *)(v6 + 2 * a2[3]);
        }
        *(_DWORD *)(dword_4EFAC8 + 80) = dword_623680 + 16 * v19;
      }
      else
      {
        *(float *)(dword_4EFAC8 + 36) = v42 * flt_467F50[0];
        *(float *)(dword_4EFAC8 + 40) = v38 * flt_46874C;
        *(float *)(dword_4EFAC8 + 60) = v42 * flt_46834C;
        *(float *)(dword_4EFAC8 + 64) = v38 * flt_46874C;
        *(float *)(dword_4EFAC8 + 84) = v42 * flt_467F50[0];
        *(float *)(dword_4EFAC8 + 88) = v38 * flt_468350[0];
        *(float *)(dword_4EFAC8 + 108) = v42 * flt_46834C;
        *(float *)(dword_4EFAC8 + 112) = v38 * flt_468350[0];
        *(_DWORD *)(dword_4EFAC8 + 32) = dword_623680 + 16 * *(unsigned __int16 *)(v6 + 2 * *a2);
        *(_DWORD *)(dword_4EFAC8 + 56) = dword_623680 + 16 * *(unsigned __int16 *)(v6 + 2 * a2[1]);
        *(_DWORD *)(dword_4EFAC8 + 104) = dword_623680 + 16 * *(unsigned __int16 *)(v6 + 2 * a2[2]);
        *(_DWORD *)(dword_4EFAC8 + 80) = dword_623680 + 16 * *(unsigned __int16 *)(v6 + 2 * a2[3]);
      }
LABEL_46:
      v33 = (_DWORD *)v33[1];
      v7 = (_DWORD *)(v34 + 128);
      v26 = *v33 == 0;
      v31 += 128;
      v34 += 128;
      ++v32;
      v37 = *v33;
      if ( v26 )
        break;
      v6 = v37;
    }
  }
  dword_4E5E40 = v32;
  return v31;
}

// 0x416c10  sub_416C10
void __cdecl sub_416C10(_DWORD *a1)
{
  int *v1; // ebx
  int v2; // ecx
  int v3; // edx
  float *v4; // edi
  float v5; // [esp+4h] [ebp-Ch]
  float v6; // [esp+8h] [ebp-8h]
  float v7; // [esp+Ch] [ebp-4h]

  v1 = *(int **)(dword_621608 + 4);
  v5 = (float)dword_621614;
  v2 = *v1;
  v6 = (float)dword_621610;
  v7 = (float)dword_62161C;
  if ( *v1 != 0 )
  {
    v3 = dword_623688;
    do
    {
      v4 = (float *)(v3 + 16 * *(unsigned __int16 *)(v2 + 2 * *a1));
      if ( (v4[2] <= 0.0
         || *(float *)(16 * *(unsigned __int16 *)(v2 + 2 * a1[1]) + v3 + 8) <= 0.0
         || *(float *)(16 * *(unsigned __int16 *)(v2 + 2 * a1[2]) + v3 + 8) <= 0.0
         || *(float *)(16 * *(unsigned __int16 *)(v2 + 2 * a1[3]) + v3 + 8) <= 0.0)
        && (v4[2] >= (double)*(float *)&dword_5F8530
         || *(float *)(16 * *(unsigned __int16 *)(v2 + 2 * a1[1]) + v3 + 8) >= (double)*(float *)&dword_5F8530
         || *(float *)(16 * *(unsigned __int16 *)(v2 + 2 * a1[2]) + v3 + 8) >= (double)*(float *)&dword_5F8530
         || *(float *)(16 * *(unsigned __int16 *)(v2 + 2 * a1[3]) + v3 + 8) >= (double)*(float *)&dword_5F8530)
        && (*v4 <= (double)v5
         || *(float *)(16 * *(unsigned __int16 *)(v2 + 2 * a1[1]) + v3) <= (double)v5
         || *(float *)(16 * *(unsigned __int16 *)(v2 + 2 * a1[2]) + v3) <= (double)v5
         || *(float *)(16 * *(unsigned __int16 *)(v2 + 2 * a1[3]) + v3) <= (double)v5)
        && (*v4 >= (double)v6
         || *(float *)(16 * *(unsigned __int16 *)(v2 + 2 * a1[1]) + v3) >= (double)v6
         || *(float *)(16 * *(unsigned __int16 *)(v2 + 2 * a1[2]) + v3) >= (double)v6
         || *(float *)(16 * *(unsigned __int16 *)(v2 + 2 * a1[3]) + v3) >= (double)v6)
        && (v4[1] <= (double)v7
         || *(float *)(16 * *(unsigned __int16 *)(v2 + 2 * a1[1]) + v3 + 4) <= (double)v7
         || *(float *)(16 * *(unsigned __int16 *)(v2 + 2 * a1[2]) + v3 + 4) <= (double)v7
         || *(float *)(16 * *(unsigned __int16 *)(v2 + 2 * a1[3]) + v3 + 4) <= (double)v7) )
      {
        v1 = (int *)v1[1];
      }
      else
      {
        *(_DWORD *)(v1[2] + 4) = v1[1];
        *(_DWORD *)(v1[1] + 8) = v1[2];
        v1 = (int *)v1[1];
        v3 = dword_623688;
      }
      v2 = *v1;
    }
    while ( *v1 != 0 );
  }
}

// 0x416e90  sub_416E90
void __cdecl sub_416E90(_DWORD *a1)
{
  int *v1; // ebx
  int v2; // ecx
  int v3; // edx
  float *v4; // edi
  float v5; // [esp+4h] [ebp-Ch]
  float v6; // [esp+8h] [ebp-8h]
  float v7; // [esp+Ch] [ebp-4h]

  v1 = *(int **)(dword_621608 + 4);
  v5 = (float)dword_621614;
  v2 = *v1;
  v6 = (float)dword_621610;
  v7 = (float)dword_62161C;
  if ( *v1 != 0 )
  {
    v3 = dword_623688;
    do
    {
      v4 = (float *)(v3 + 16 * *(unsigned __int16 *)(v2 + 2 * *a1));
      if ( (v4[2] <= 0.0
         || *(float *)(16 * *(unsigned __int16 *)(v2 + 2 * a1[1]) + v3 + 8) <= 0.0
         || *(float *)(16 * *(unsigned __int16 *)(v2 + 2 * a1[2]) + v3 + 8) <= 0.0)
        && (v4[2] >= (double)*(float *)&dword_5F8530
         || *(float *)(16 * *(unsigned __int16 *)(v2 + 2 * a1[1]) + v3 + 8) >= (double)*(float *)&dword_5F8530
         || *(float *)(16 * *(unsigned __int16 *)(v2 + 2 * a1[2]) + v3 + 8) >= (double)*(float *)&dword_5F8530)
        && (*v4 <= (double)v5
         || *(float *)(16 * *(unsigned __int16 *)(v2 + 2 * a1[1]) + v3) <= (double)v5
         || *(float *)(16 * *(unsigned __int16 *)(v2 + 2 * a1[2]) + v3) <= (double)v5)
        && (*v4 >= (double)v6
         || *(float *)(16 * *(unsigned __int16 *)(v2 + 2 * a1[1]) + v3) >= (double)v6
         || *(float *)(16 * *(unsigned __int16 *)(v2 + 2 * a1[2]) + v3) >= (double)v6)
        && (v4[1] <= (double)v7
         || *(float *)(16 * *(unsigned __int16 *)(v2 + 2 * a1[1]) + v3 + 4) <= (double)v7
         || *(float *)(16 * *(unsigned __int16 *)(v2 + 2 * a1[2]) + v3 + 4) <= (double)v7) )
      {
        v1 = (int *)v1[1];
      }
      else
      {
        *(_DWORD *)(v1[2] + 4) = v1[1];
        *(_DWORD *)(v1[1] + 8) = v1[2];
        v1 = (int *)v1[1];
        v3 = dword_623688;
      }
      v2 = *v1;
    }
    while ( *v1 != 0 );
  }
}

// 0x417080  sub_417080
int sub_417080()
{
  int result; // eax

  result = dword_5546A4();
  if ( result != 0 )
  {
    dword_553440();
    return dword_5546AC();
  }
  return result;
}

// 0x417110  sub_417110
char __cdecl sub_417110(char a1, char a2, char a3)
{
  LOBYTE(dword_55341C) = a3;
  BYTE1(dword_55341C) = a2;
  BYTE2(dword_55341C) = a1;
  return a3;
}

// 0x417130  sub_417130
char __cdecl sub_417130(char a1, char a2, char a3)
{
  byte_5F84E8 = a3;
  byte_5F84E9 = a2;
  byte_5F84EA = a1;
  return a3;
}

// 0x417150  sub_417150
__int16 sub_417150()
{
  dword_554470 = (int)&unk_46BF78;
  dword_554474 = (int)&unk_47BF78;
  dword_554478 = (int)&unk_48BF78;
  dword_55447C = (int)&unk_49BF78;
  LOWORD(dword_55341C) = word_4B1C5C;
  BYTE2(dword_55341C) = byte_4B1C5E;
  return word_4B1C5C;
}

// 0x4171a0  sub_4171A0
__int16 sub_4171A0()
{
  LOWORD(dword_55341C) = word_4B1C5C;
  BYTE2(dword_55341C) = byte_4B1C5E;
  return word_4B1C5C;
}

// 0x4171c0  sub_4171C0
int __cdecl sub_4171C0(int a1, LONG a2, LONG a3, int a4)
{
  BITMAPINFO *v4; // edi
  LONG v6; // edi
  void *v7; // eax
  int v8; // eax
  int *v9; // ecx

  if ( Block != NULL )
  {
    free(/*Block*/ Block);
    Block = NULL;
  }
  if ( lpBits != NULL )
  {
    free(/*Block*/ lpBits);
    lpBits = NULL;
  }
  v4 = (BITMAPINFO *)malloc(/*Size*/ 0x28u);
  Block = v4;
  if ( v4 == NULL )
    return 0;
  memset(v4, 0, 0x28u);
  v6 = a3;
  Block->bmiHeader.biSize = 40;
  Block->bmiHeader.biWidth = a2;
  Block->bmiHeader.biHeight = a3;
  Block->bmiHeader.biPlanes = 1;
  Block->bmiHeader.biBitCount = a4;
  Block->bmiHeader.biCompression = 0;
  Block->bmiHeader.biSizeImage = 0;
  Block->bmiHeader.biXPelsPerMeter = 0;
  Block->bmiHeader.biYPelsPerMeter = 0;
  Block->bmiHeader.biClrUsed = 0;
  Block->bmiHeader.biClrImportant = 0;
  v7 = malloc(/*Size*/ (a4 >> 3) * a3 * ((a2 + 3) & 0xFFFFFFFC));
  lpBits = v7;
  if ( v7 != NULL )
  {
    dword_553450 = (int)v7;
    v8 = a2 * a3;
    dword_46AF58 = a2;
    dword_46AF5C = a3;
    dword_46AF60 = a4;
    dword_46AF64 = a4 >> 3;
    dword_46AF68 = a2 * a3;
    if ( a3 > 0 )
    {
      v9 = &dword_553460;
      do
      {
        v8 -= a2;
        *v9++ = v8;
        --v6;
      }
      while ( v6 != 0 );
    }
    dword_46AF6C = -a2;
    return 1;
  }
  else
  {
    if ( Block != NULL )
    {
      free(/*Block*/ Block);
      v7 = lpBits;
      Block = NULL;
    }
    if ( v7 != NULL )
    {
      free(/*Block*/ v7);
      lpBits = NULL;
    }
    return 0;
  }
}

// 0x417340  sub_417340
void sub_417340()
{
  if ( Block != NULL )
  {
    free(/*Block*/ Block);
    Block = NULL;
  }
  if ( lpBits != NULL )
  {
    free(/*Block*/ lpBits);
    lpBits = NULL;
  }
}

// 0x417380  sub_417380
int __cdecl sub_417380(HDC hdc)
{
  int result; // eax

  if ( lpBits != NULL )
    return StretchDIBits(
             hdc,
             /*xDest*/ 0,
             /*yDest*/ 0,
             /*DestWidth*/ Block->bmiHeader.biWidth,
             /*DestHeight*/ Block->bmiHeader.biHeight,
             /*xSrc*/ 0,
             /*ySrc*/ 0,
             /*SrcWidth*/ Block->bmiHeader.biWidth,
             /*SrcHeight*/ Block->bmiHeader.biHeight,
             /*lpBits*/ lpBits,
             /*lpbmi*/ Block,
             /*iUsage*/ 0,
             /*rop*/ 0xCC0020u);
  return result;
}

// 0x4173c0  sub_4173C0
int __cdecl sub_4173C0(int a1, int a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // edi
  int v7; // esi
  int v8; // ebp
  double v9; // st7
  int v10; // esi
  __int64 v11; // rax
  int v12; // ecx
  int v13; // ecx
  int v14; // ebx
  char *v15; // edi
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // ebp
  int v20; // eax
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // esi
  int v30; // ecx
  int v31; // edx
  int v32; // esi
  int v33; // edx
  _DWORD *i; // esi
  int v35; // eax
  int v36; // edx
  int v37; // eax
  int v38; // edx
  int v39; // eax
  int v40; // edx
  int v41; // eax
  int v42; // edx
  int v43; // eax
  int v44; // eax
  int v45; // ecx
  int v46; // edx
  int v47; // ecx
  bool v48; // zf
  int v49; // [esp+10h] [ebp-38h]
  int v50; // [esp+14h] [ebp-34h]
  int v51; // [esp+18h] [ebp-30h]
  int v52; // [esp+1Ch] [ebp-2Ch] BYREF
  int v53; // [esp+20h] [ebp-28h] BYREF
  int v54; // [esp+24h] [ebp-24h] BYREF
  int v55; // [esp+28h] [ebp-20h] BYREF
  int v56; // [esp+2Ch] [ebp-1Ch] BYREF
  int v57; // [esp+30h] [ebp-18h]
  int v58; // [esp+34h] [ebp-14h]
  int v59; // [esp+38h] [ebp-10h]
  int v60; // [esp+3Ch] [ebp-Ch]
  int v61; // [esp+40h] [ebp-8h]
  int v62; // [esp+44h] [ebp-4h]
  int v63; // [esp+4Ch] [ebp+4h]
  int v64; // [esp+4Ch] [ebp+4h]
  char v65; // [esp+50h] [ebp+8h]

  result = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = *(_DWORD *)(*(_DWORD *)a2 + 4);
  v57 = result;
  v56 = v4;
  v5 = v4 - result;
  v55 = v5;
  if ( v5 >= 0 )
  {
    v6 = v5 != 0 ? 0x10000 / v5 : 0;
    v7 = (__int64)*(float *)(a1 + 4);
    v8 = v6 * ((__int64)*(float *)(a2 + 4) - v7);
    v9 = *(float *)(a1 + 8);
    v10 = v7 << 16;
    v59 = v8;
    v51 = v10;
    v63 = (__int64)v9;
    v11 = (__int64)*(float *)(a2 + 8);
    HIDWORD(v11) = *(_DWORD *)(a1 + 12);
    result = v6 * (v11 - v63);
    v64 = v63 << 16;
    v49 = HIDWORD(v11) << 16;
    v58 = result;
    v12 = *(_DWORD *)(a2 + 12) - HIDWORD(v11);
    HIDWORD(v11) = *(_DWORD *)(a1 + 16);
    v60 = v6 * v12;
    v50 = HIDWORD(v11) << 16;
    v13 = *(_DWORD *)(a2 + 16) - HIDWORD(v11);
    HIDWORD(v11) = *(_DWORD *)(a1 + 20);
    v61 = v6 * v13;
    v62 = v6 * (*(_DWORD *)(a2 + 20) - HIDWORD(v11));
    v14 = HIDWORD(v11) << 16;
    if ( v57 <= v56 )
    {
      v15 = &byte_555FE6[64 * v57];
      v57 = v55 + 1;
      do
      {
        if ( *v15 == 0 )
        {
          v16 = *(_DWORD *)(v15 + 14) - *(_DWORD *)(v15 + 10);
          if ( v16 >= 0 )
          {
            v17 = 0x10000 / (v16 + 1);
            v18 = *(_DWORD *)(v15 + 6);
            v65 = 0;
            *v15 = 1;
            v19 = v17;
            if ( *(_DWORD *)(v15 + 2) <= v18 )
            {
              *(_DWORD *)(v15 + 22) = sub_41C7E0(&v52, *(_DWORD *)(v15 + 18) - v10, v17);
              v20 = *(_DWORD *)(v15 + 26);
              *(_DWORD *)(v15 + 18) = v10;
              v21 = sub_41C7E0(&v53, v20 - v64, v19);
              v22 = *(_DWORD *)(v15 + 34);
              *(_DWORD *)(v15 + 26) = v64;
              *(_DWORD *)(v15 + 30) = v21;
              v23 = sub_41C7E0(&v54, v22 - v49, v19);
              v24 = *(_DWORD *)(v15 + 42);
              *(_DWORD *)(v15 + 34) = v49;
              *(_DWORD *)(v15 + 38) = v23;
              *(_DWORD *)(v15 + 46) = sub_41C7E0(&v55, v24 - v50, v19);
              v25 = *(_DWORD *)(v15 + 50) - v14;
              *(_DWORD *)(v15 + 42) = v50;
              v26 = sub_41C7E0(&v56, v25, v19);
              v27 = *(_DWORD *)(v15 + 10);
              *(_DWORD *)(v15 + 54) = v26;
              v28 = *(_DWORD *)(v15 + 2) - v27;
              *(_DWORD *)(v15 + 50) = v14;
              if ( v28 > 0 )
              {
                v29 = v28 * v52 + *(_DWORD *)(v15 + 18);
                v30 = v55;
                *(_DWORD *)(v15 + 26) += v28 * v53;
                v31 = v28 * v54;
                *(_DWORD *)(v15 + 18) = v29;
                v32 = v31 + *(_DWORD *)(v15 + 34);
                v33 = v28 * v30 + *(_DWORD *)(v15 + 42);
                *(_DWORD *)(v15 + 34) = v32;
                *(_DWORD *)(v15 + 42) = v33;
                *(_DWORD *)(v15 + 50) = v14 + v28 * v56;
              }
              v65 = 1;
              sub_41C800(v15 - 6);
            }
            for ( i = *(_DWORD **)(v15 - 6); i != NULL; i = (_DWORD *)*i )
            {
              if ( i[2] <= i[3] )
              {
                if ( v65 != 0 )
                {
                  i[7] = v52;
                  i[6] = v51;
                  i[9] = v53;
                  i[8] = v64;
                  i[11] = v54;
                  i[10] = v49;
                  i[13] = v55;
                  i[12] = v50;
                  v43 = v56;
                  i[14] = v14;
                  i[15] = v43;
                }
                else
                {
                  v35 = sub_41C7E0(&v52, i[6] - v51, v19);
                  v36 = i[8];
                  i[6] = v51;
                  i[7] = v35;
                  v37 = sub_41C7E0(&v53, v36 - v64, v19);
                  v38 = i[10];
                  i[8] = v64;
                  i[9] = v37;
                  v39 = sub_41C7E0(&v54, v38 - v49, v19);
                  v40 = i[12];
                  i[10] = v49;
                  i[11] = v39;
                  v41 = sub_41C7E0(&v55, v40 - v50, v19);
                  v42 = i[14];
                  i[13] = v41;
                  i[12] = v50;
                  i[15] = sub_41C7E0(&v56, v42 - v14, v19);
                  i[14] = v14;
                  v65 = 1;
                }
                v44 = i[2] - i[4];
                if ( v44 > 0 )
                {
                  v45 = i[8];
                  i[6] += v44 * v52;
                  v46 = i[10];
                  i[8] = v44 * v53 + v45;
                  v47 = i[12];
                  i[10] = v44 * v54 + v46;
                  i[12] = v44 * v55 + v47;
                  i[14] += v44 * v56;
                }
                sub_41C800(i);
              }
            }
            result = v58;
            v8 = v59;
            v10 = v51;
          }
        }
        v10 += v8;
        v64 += result;
        v49 += v60;
        v14 += v62;
        v15 += 64;
        v48 = v57 == 1;
        v51 = v10;
        v50 += v61;
        --v57;
      }
      while ( !v48 );
    }
  }
  return result;
}

// 0x4177c0  sub_4177C0
int __cdecl sub_4177C0(int a1, int a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // ebp
  int v6; // ebx
  int v7; // ebx
  int v8; // esi
  int v9; // edx
  int v10; // ecx
  int v11; // esi
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // esi
  int v16; // edi
  int *v17; // ebp
  int *v18; // ecx
  int v19; // [esp+10h] [ebp-20h]
  int v20; // [esp+10h] [ebp-20h]
  int v21; // [esp+14h] [ebp-1Ch]
  int v22; // [esp+18h] [ebp-18h]
  int v23; // [esp+1Ch] [ebp-14h]
  int v24; // [esp+20h] [ebp-10h]
  int v25; // [esp+24h] [ebp-Ch]
  int v26; // [esp+28h] [ebp-8h]
  int v27; // [esp+2Ch] [ebp-4h]
  int v28; // [esp+34h] [ebp+4h]
  int *v29; // [esp+38h] [ebp+8h]

  result = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v21 = *(_DWORD *)(*(_DWORD *)a2 + 4);
  v4 = v21 - result;
  v19 = result;
  v22 = v21 - result;
  if ( v21 - result >= 0 )
  {
    v5 = v4 != 0 ? 0x10000 / v4 : 0;
    v6 = (__int64)*(float *)(a1 + 4);
    v26 = v5 * ((__int64)*(float *)(a2 + 4) - v6);
    v7 = v6 << 16;
    v8 = (__int64)*(float *)(a1 + 8);
    v27 = v5 * ((__int64)*(float *)(a2 + 8) - v8);
    v9 = *(_DWORD *)(a1 + 12);
    v10 = *(_DWORD *)(a1 + 16);
    v23 = v5 * (*(_DWORD *)(a2 + 12) - v9);
    v28 = v8 << 16;
    v11 = v10;
    v12 = v5 * (*(_DWORD *)(a2 + 16) - v10);
    v13 = *(_DWORD *)(a1 + 20);
    v24 = v12;
    v14 = v9 << 16;
    v25 = v5 * (*(_DWORD *)(a2 + 20) - v13);
    result = *(_DWORD *)(*(_DWORD *)a2 + 4);
    v15 = v11 << 16;
    v16 = v13 << 16;
    if ( v19 <= v21 )
    {
      v17 = &dword_555FF0[16 * v19];
      v29 = v17;
      v20 = v22 + 1;
      do
      {
        v18 = v17 - 4;
        if ( v17[1] - *v17 >= 0 )
        {
          do
          {
            if ( v18[2] <= v18[3] )
            {
              v18[6] = v7;
              v18[8] = v28;
              v18[10] = v14;
              v18[12] = v15;
              v18[14] = v16;
            }
            v18 = (int *)*v18;
          }
          while ( v18 != NULL );
          v17 = v29;
        }
        v17 += 16;
        v14 += v23;
        v15 += v24;
        v16 += v25;
        v7 += v26;
        v29 = v17;
        v28 += v27;
        result = --v20;
      }
      while ( v20 != 0 );
    }
  }
  return result;
}

// 0x417920  sub_417920
int __cdecl sub_417920(_DWORD *a1, _DWORD *a2)
{
  int result; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // esi
  int v8; // eax
  int v9; // edx
  int v10; // ebx
  int v11; // esi
  int v12; // ebp
  char *v13; // edi
  int v14; // ecx
  int v15; // ecx
  int v16; // ebx
  int v17; // eax
  int v18; // edx
  int v19; // eax
  int v20; // eax
  int v21; // esi
  int v22; // ecx
  bool v23; // zf
  int v24; // edx
  _DWORD *i; // esi
  int v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // edx
  int v30; // edx
  int v31; // eax
  int v32; // ecx
  int v33; // edx
  int v34; // eax
  int v35; // [esp-8h] [ebp-38h]
  int v36; // [esp+10h] [ebp-20h]
  int v37; // [esp+14h] [ebp-1Ch] BYREF
  int v38; // [esp+18h] [ebp-18h] BYREF
  int v39; // [esp+1Ch] [ebp-14h] BYREF
  int v40; // [esp+20h] [ebp-10h]
  int v41; // [esp+24h] [ebp-Ch]
  int v42; // [esp+28h] [ebp-8h]
  int v43; // [esp+2Ch] [ebp-4h]
  int v44; // [esp+34h] [ebp+4h]
  char v45; // [esp+34h] [ebp+4h]
  int v46; // [esp+38h] [ebp+8h]

  result = *(_DWORD *)(*a1 + 4);
  v4 = *(_DWORD *)(*a2 + 4);
  v40 = result;
  v39 = v4;
  v5 = v4 - result;
  v38 = v5;
  if ( v5 > 0 )
  {
    v6 = 0x10000 / v5;
    v7 = a1[3];
    v8 = a1[4];
    v44 = a1[5];
    v9 = v6 * (a2[3] - v7);
    v46 = v8 << 16;
    v10 = v6 * (a2[4] - v8);
    result = v6 * (a2[5] - v44);
    v43 = v9;
    v11 = v7 << 16;
    v12 = v44 << 16;
    v36 = v11;
    v42 = v10;
    v41 = result;
    if ( v40 <= v39 )
    {
      v13 = &byte_555FE6[64 * v40];
      v40 = v38 + 1;
      do
      {
        if ( *v13 != 1 )
        {
          v14 = *(_DWORD *)(v13 + 14);
          *v13 = 1;
          v15 = v14 - *(_DWORD *)(v13 + 10) + 1;
          if ( v15 > 0 )
          {
            v45 = 0;
            v16 = 0x10000 / v15;
            if ( *(_DWORD *)(v13 + 2) <= *(_DWORD *)(v13 + 6) )
            {
              v17 = sub_41C7E0(&v37, *(_DWORD *)(v13 + 34) - v11, 0x10000 / v15);
              v18 = *(_DWORD *)(v13 + 42);
              *(_DWORD *)(v13 + 34) = v11;
              *(_DWORD *)(v13 + 38) = v17;
              v19 = sub_41C7E0(&v38, v18 - v46, v16);
              v35 = *(_DWORD *)(v13 + 50) - v12;
              *(_DWORD *)(v13 + 46) = v19;
              *(_DWORD *)(v13 + 42) = v46;
              v20 = sub_41C7E0(&v39, v35, v16);
              v21 = *(_DWORD *)(v13 + 10);
              v22 = *(_DWORD *)(v13 + 2) - v21;
              v23 = *(_DWORD *)(v13 + 2) == v21;
              *(_DWORD *)(v13 + 54) = v20;
              *(_DWORD *)(v13 + 50) = v12;
              if ( v22 >= 0 && !v23 )
              {
                v24 = *(_DWORD *)(v13 + 46) * v22;
                *(_DWORD *)(v13 + 34) += *(_DWORD *)(v13 + 38) * v22;
                *(_DWORD *)(v13 + 42) += v24;
                *(_DWORD *)(v13 + 50) = v12 + v20 * v22;
              }
              sub_41C800(v13 - 6);
              v45 = 1;
            }
            for ( i = *(_DWORD **)(v13 - 6); i != NULL; i = (_DWORD *)*i )
            {
              if ( i[2] <= i[3] )
              {
                if ( v45 != 0 )
                {
                  i[11] = v37;
                  i[10] = v36;
                  i[13] = v38;
                  i[12] = v46;
                  v30 = v39;
                  i[14] = v12;
                  i[15] = v30;
                }
                else
                {
                  v26 = sub_41C7E0(&v37, i[10] - v36, v16);
                  v27 = i[12];
                  i[10] = v36;
                  i[11] = v26;
                  v28 = sub_41C7E0(&v38, v27 - v46, v16);
                  v29 = i[14];
                  i[13] = v28;
                  i[12] = v46;
                  i[15] = sub_41C7E0(&v39, v29 - v12, v16);
                  i[14] = v12;
                  v45 = 1;
                }
                v31 = i[2] - i[4];
                if ( v31 > 0 )
                {
                  v32 = i[12];
                  i[10] += i[11] * v31;
                  v33 = i[13] * v31;
                  v34 = i[15] * v31;
                  i[12] = v33 + v32;
                  i[14] += v34;
                }
                sub_41C800(i);
              }
            }
            result = v41;
            v10 = v42;
            v9 = v43;
            v11 = v36;
          }
        }
        v11 += v9;
        v12 += result;
        v46 += v10;
        v13 += 64;
        v23 = v40 == 1;
        v36 = v11;
        --v40;
      }
      while ( !v23 );
    }
  }
  return result;
}

// 0x417bc0  sub_417BC0
int __cdecl sub_417BC0(_DWORD *a1, _DWORD *a2)
{
  int result; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // edx
  int v8; // esi
  int v9; // ebp
  int v10; // ecx
  int v11; // edx
  int v12; // ebx
  int v13; // edi
  int v14; // esi
  int *v15; // ebx
  int *v16; // eax
  int v17; // [esp+10h] [ebp-10h]
  int v18; // [esp+14h] [ebp-Ch]
  int v19; // [esp+18h] [ebp-8h]
  int v20; // [esp+1Ch] [ebp-4h]
  int v21; // [esp+24h] [ebp+4h]
  int v22; // [esp+28h] [ebp+8h]

  result = *(_DWORD *)(*a1 + 4);
  v21 = result;
  v17 = *(_DWORD *)(*a2 + 4);
  v18 = v17 - result;
  if ( v17 - result > 0 )
  {
    v4 = 0x10000 / (v17 - result);
    v5 = a1[3];
    v6 = a2[3] - v5;
    v7 = a1[4];
    v8 = a2[4] - v7;
    v9 = a1[5];
    v10 = v5 << 16;
    v11 = v7 << 16;
    v12 = v4 * (a2[5] - v9);
    v19 = v4 * v8;
    v13 = v4 * v6;
    result = *(_DWORD *)(*a2 + 4);
    v20 = v12;
    v14 = v9 << 16;
    if ( v21 <= v17 )
    {
      v15 = &dword_555FF0[16 * v21];
      v22 = v18 + 1;
      do
      {
        v16 = v15 - 4;
        if ( v15[1] - *v15 + 1 > 0 )
        {
          do
          {
            if ( v16[2] <= v16[3] )
            {
              v16[10] = v10;
              v16[12] = v11;
              v16[14] = v14;
            }
            v16 = (int *)*v16;
          }
          while ( v16 != NULL );
        }
        v14 += v20;
        v10 += v13;
        v11 += v19;
        v15 += 16;
        result = --v22;
      }
      while ( v22 != 0 );
    }
  }
  return result;
}

// 0x417ca0  sub_417CA0
int __cdecl sub_417CA0(int *a1, __int16 a2)
{
  int *v2; // edi
  int v3; // ebp
  int v4; // esi
  int *v5; // ecx
  unsigned int v6; // edx
  int result; // eax
  char *v8; // ecx
  __int16 v9; // ax
  char v10; // cl
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // ecx
  int **v15; // ecx
  int *v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // esi
  char *v20; // edx
  int v21; // eax
  int v22; // esi
  int *v23; // edx
  int v24; // ecx
  int v25; // edx
  int v26; // esi
  int *v27; // ecx
  int v28; // ebp
  int v29; // eax
  int v30; // ebx
  int v31; // ebp
  _DWORD **v32; // ecx
  _DWORD *v33; // ecx
  int v34; // edx
  int v35; // eax
  int v36; // esi
  int v37; // esi
  int v38; // esi
  int v39; // esi
  int v40; // esi
  int v41; // esi
  int v42; // esi
  int v43; // esi
  int v44; // [esp+10h] [ebp-10h]
  int v45; // [esp+14h] [ebp-Ch]
  int v46; // [esp+18h] [ebp-8h]
  int *v47; // [esp+1Ch] [ebp-4h]
  int v48; // [esp+24h] [ebp+4h]

  v2 = a1;
  v3 = 4 - ((a1[1] & 1) != 0);
  v48 = v3;
  if ( byte_4B3232 != 0 && v3 - 1 >= 0 )
  {
    v4 = v3;
    v5 = &v2[6 * v3 + 6];
    do
    {
      v6 = *(v5 - 1) * word_467744;
      v5 -= 6;
      v5[5] = v6 / 0xFF;
      v5[6] = v5[6] * word_467744 / 0xFFu;
      v5[7] = v5[7] * word_467744 / 0xFFu;
      --v4;
    }
    while ( v4 != 0 );
  }
  if ( *v2 != 0 )
  {
    result = 48 * *v2;
    if ( byte_52FD6A[result] != 0 )
    {
      v8 = (char *)&unk_52FD6C + result;
      if ( (*(_DWORD *)((_BYTE *)&unk_52FD6C + result) & 0xFFFFFF) == 0 && byte_52FD69[result] != 0 )
      {
        off_46AF70 = NULL;
        return result;
      }
      v2[2] = 33;
      v9 = *(_WORD *)v8;
      v10 = v8[2];
      LOWORD(dword_55341C) = v9;
      BYTE2(dword_55341C) = v10;
    }
    else
    {
      result = *(int *)((char *)&dword_52FD8C + result);
      dword_55340C = result;
      if ( result == 0 )
      {
        off_46AF70 = NULL;
        return result;
      }
      v11 = 12 * *v2;
      if ( byte_52FD69[v11 * 4] != 0 )
        v2[2] |= 8u;
      dword_565FE8 = dword_52FD60[v11];
      dword_5A7CA4 = byte_52FD70[48 * *v2];
    }
  }
  else
  {
    v12 = v2[5];
    v13 = v2[4];
    LOBYTE(dword_55341C) = v2[6];
    BYTE1(dword_55341C) = v12;
    BYTE2(dword_55341C) = v13;
  }
  result = v2[1];
  if ( (result & 2) != 0 && *((char *)v2 + 12) < 4 )
    v14 = v2[2] | 4;
  else
    v14 = v2[2] & 0xFFFFFFFB;
  v2[2] = v14;
  if ( (result & 4) != 0 )
  {
    dword_5A7908 = v14;
    dword_5A7904 = v2[1];
    byte_5A790C = *((_BYTE *)v2 + 12);
    byte_5A790D = *((_BYTE *)v2 + 13);
    dword_5A7900 = *v2;
    dword_5A7910 = v2[4];
    dword_5A7914 = v2[5];
    dword_5A7918 = v2[6];
    v15 = (int **)&flt_5A7920;
    v16 = (int *)&unk_5544A0;
    do
    {
      *v15 = v16;
      v16 += 4;
      v15 += 6;
    }
    while ( (int)v16 < (int)&dword_5546A0 );
    v17 = sub_403ED0((int)(v2 + 8), (int)&flt_5A7AA0, v3);
    result = sub_404220((int)&flt_5A7AA0, (int)&flt_5A7920, v17);
    v3 = result;
    v18 = 0;
    v19 = 0;
    v48 = result;
    if ( result > 0 )
    {
      v20 = (char *)&flt_5A7920;
      while ( 1 )
      {
        result = *(_DWORD *)(*(_DWORD *)v20 + 4);
        if ( result < 0 || result >= dword_46AF5C )
          break;
        ++v18;
        v20 += 24;
        if ( v18 >= v3 )
          goto LABEL_31;
      }
      v19 = 1;
    }
LABEL_31:
    if ( v19 != 0 )
    {
      v21 = sub_4045F0((int)&flt_5A7920, (int)&flt_5A7AA0, v3);
      result = sub_404970((int)&flt_5A7AA0, (int)&flt_5A7920, v21);
      v3 = result;
      v48 = result;
    }
    v2 = &dword_5A7900;
  }
  else
  {
    v22 = 0;
    if ( v3 > 0 )
    {
      v23 = v2 + 8;
      while ( 1 )
      {
        result = *v23;
        v24 = *(_DWORD *)*v23;
        if ( v24 < 0 )
          break;
        if ( v24 >= dword_46AF58 )
          break;
        result = *(_DWORD *)(result + 4);
        if ( result < 0 || result >= dword_46AF5C )
          break;
        ++v22;
        v23 += 6;
        if ( v22 >= v3 )
          goto LABEL_43;
      }
      v3 = 0;
      v48 = 0;
    }
  }
LABEL_43:
  if ( v3 >= 3 )
  {
    off_46AF70 = v2;
    v25 = *(_DWORD *)(v2[8] + 4);
    v26 = v25;
    v44 = v25;
    v27 = v2 + 14;
    v28 = v3 - 1;
    do
    {
      v29 = *(_DWORD *)(*v27 + 4);
      if ( v25 <= v29 )
      {
        v44 = *(_DWORD *)(*v27 + 4);
        v25 = v44;
      }
      if ( v26 >= v29 )
        v26 = *(_DWORD *)(*v27 + 4);
      v27 += 6;
      --v28;
    }
    while ( v28 != 0 );
    v46 = v26;
    v30 = -1;
    v31 = -1;
    result = 0;
    v45 = -1;
    if ( v48 > 0 )
    {
      v32 = (_DWORD **)(v2 + 8);
      v47 = v2 + 8;
      do
      {
        v33 = *v32;
        v34 = v33[1];
        if ( v26 == v34 )
        {
          if ( v30 == -1 )
          {
            v30 = result;
            v45 = result;
          }
          else if ( *v33 >= *(_DWORD *)v2[6 * v30 + 8] )
          {
            v30 = v45;
          }
          else
          {
            v30 = result;
            v45 = result;
          }
        }
        if ( v44 == v34 && (v31 == -1 || *v33 > *(_DWORD *)v2[6 * v31 + 8]) )
          v31 = result;
        v26 = v46;
        ++result;
        v32 = (_DWORD **)(v47 + 6);
        v47 += 6;
      }
      while ( result < v48 );
      v25 = v44;
    }
    if ( v26 <= v25 )
    {
      dword_5546A0 = v26 < 0 ? 0 : v26;
      if ( v25 < dword_46AF5C )
        dword_555FCC = v25;
      else
        dword_555FCC = dword_46AF5C - 1;
      dword_553434 = 0;
      v35 = v30;
      do
      {
        v36 = v35 + 1;
        if ( v35 + 1 == v48 )
          v36 = 0;
        sub_41C990(&v2[6 * v35 + 8], &v2[6 * v36 + 8]);
        v35 = v36;
      }
      while ( v36 != v31 );
      do
      {
        v37 = v35 + 1;
        if ( v35 + 1 == v48 )
          v37 = 0;
        sub_41C920(&v2[6 * v37 + 8], &v2[6 * v35 + 8]);
        v35 = v37;
      }
      while ( v37 != v30 );
      if ( (v2[2] & 0xC) != 0 )
        result = sub_403B00(a2);
      else
        result = sub_403300(a2);
      if ( result > 0 )
      {
        result = v30;
        switch ( v2[2] & 3 )
        {
          case 1:
            do
            {
              v42 = result + 1;
              if ( result + 1 == v48 )
                v42 = 0;
              sub_417BC0(&v2[6 * result + 8], &v2[6 * v42 + 8]);
              result = v42;
            }
            while ( v42 != v31 );
            do
            {
              v43 = result + 1;
              if ( result + 1 == v48 )
                v43 = 0;
              sub_417920(&v2[6 * v43 + 8], &v2[6 * result + 8]);
              result = v43;
            }
            while ( v43 != v30 );
            break;
          case 2:
            do
            {
              v40 = result + 1;
              if ( result + 1 == v48 )
                v40 = 0;
              sub_41CCF0(&v2[6 * result + 8], &v2[6 * v40 + 8]);
              result = v40;
            }
            while ( v40 != v31 );
            do
            {
              v41 = result + 1;
              if ( result + 1 == v48 )
                v41 = 0;
              sub_41CA10(&v2[6 * v41 + 8], &v2[6 * result + 8]);
              result = v41;
            }
            while ( v41 != v30 );
            break;
          case 3:
            do
            {
              v38 = result + 1;
              if ( result + 1 == v48 )
                v38 = 0;
              sub_4177C0((int)&v2[6 * result + 8], (int)&v2[6 * v38 + 8]);
              result = v38;
            }
            while ( v38 != v31 );
            do
            {
              v39 = result + 1;
              if ( result + 1 == v48 )
                v39 = 0;
              sub_4173C0((int)&v2[6 * v39 + 8], (int)&v2[6 * result + 8]);
              result = v39;
            }
            while ( v39 != v30 );
            break;
          default:
            break;
        }
      }
      else
      {
        off_46AF70 = NULL;
      }
    }
    else
    {
      off_46AF70 = NULL;
    }
  }
  else
  {
    off_46AF70 = NULL;
  }
  return result;
}

// 0x418230  sub_418230
int (*sub_418230())()
{
  memset32(&dword_7CA620, (int)PadSetAct, 0x40u);
  dword_7CA6E0 = (int)sub_418DF0;
  dword_7CA6E8 = (int)sub_418DF0;
  dword_7CA708 = (int)sub_418DF0;
  dword_7CA6C8 = (int)sub_418DF0;
  dword_7CA670 = (int)sub_4195C0;
  dword_7CA678 = (int)sub_4195C0;
  dword_7CA698 = (int)sub_4195C0;
  dword_7CA658 = (int)sub_4195C0;
  dword_7CA660 = (int)sub_418C30;
  dword_7CA668 = (int)sub_418C30;
  dword_7CA688 = (int)sub_418C30;
  dword_7CA648 = (int)sub_418C30;
  dword_554480 = sub_419E80;
  dword_5A7CA8 = sub_41A1C0;
  dword_7CA6F0 = (int)sub_419790;
  dword_7CA664 = (int)sub_4191D0;
  dword_7CA674 = (int)sub_419BD0;
  dword_7CA6F8 = (int)sub_419790;
  dword_7CA66C = (int)sub_4191D0;
  dword_7CA67C = (int)sub_419BD0;
  dword_7CA718 = (int)sub_419790;
  dword_7CA68C = (int)sub_4191D0;
  dword_7CA69C = (int)sub_419BD0;
  dword_7CA620 = (int)sub_418370;
  dword_7CA630 = (int)sub_418520;
  dword_7CA628 = (int)sub_418A80;
  dword_7CA638 = (int)sub_419400;
  dword_7CA6D8 = (int)sub_419790;
  dword_7CA624 = (int)sub_418440;
  dword_7CA6A4 = (int)sub_418780;
  dword_7CA634 = (int)sub_418620;
  dword_7CA6B4 = (int)sub_4188B0;
  dword_7CA62C = (int)sub_418FB0;
  dword_7CA64C = (int)sub_4191D0;
  dword_7CA63C = (int)sub_419960;
  dword_7CA65C = (int)sub_419BD0;
  return sub_419BD0;
}

// 0x418370  sub_418370
int sub_418370()
{
  int result; // eax
  char *v1; // esi
  _DWORD *v2; // edx
  int v3; // ecx
  _BYTE *v4; // esi
  int v5; // edi
  char v6; // dl
  _BYTE *v7; // eax
  __int16 v8; // kr00_2
  char *v10; // [esp+8h] [ebp-10h]
  int v11; // [esp+Ch] [ebp-Ch]
  int *v12; // [esp+10h] [ebp-8h]
  _DWORD *v13; // [esp+14h] [ebp-4h]

  result = dword_5546A0;
  v11 = dword_5546A0;
  if ( dword_5546A0 <= dword_555FCC )
  {
    v1 = (char *)&unk_555FE0 + 64 * dword_5546A0;
    v12 = &dword_553460[dword_5546A0];
    v10 = v1;
    do
    {
      v2 = v1;
      v13 = v1;
      if ( v1 != NULL )
      {
        while ( 1 )
        {
          v3 = v2[2];
          if ( v2[3] - v3 + 1 > 0 )
          {
            v4 = (_BYTE *)(dword_553450 + 2 * (v3 + *v12) + v3 + *v12);
            v5 = v2[3] - v3 + 1;
            v6 = dword_55341C;
            v7 = v4 + 1;
            v8 = *(_WORD *)((char *)&dword_55341C + 1);
            do
            {
              *v4 = v6;
              *v7 = v8;
              v4[2] = HIBYTE(v8);
              v4 += 3;
              v7 += 3;
            }
            while ( v5-- > 1 );
            v2 = v13;
            v1 = v10;
          }
          v13 = (_DWORD *)*v2;
          if ( *v2 == 0 )
            break;
          v2 = (_DWORD *)*v2;
        }
        result = v11;
      }
      ++result;
      v1 += 64;
      v11 = result;
      v10 = v1;
      ++v12;
    }
    while ( result <= dword_555FCC );
  }
  return result;
}

// 0x418440  sub_418440
int sub_418440()
{
  int result; // eax
  int v1; // ecx
  _DWORD *v2; // ebp
  int v3; // ebx
  int v4; // eax
  bool v5; // cc
  int v6; // eax
  int v7; // eax
  int v8; // edi
  _BYTE *v9; // esi
  int v10; // edx
  int v11; // ecx
  int v12; // ebp
  int v13; // ebx
  char v14; // eax^2
  int v15; // eax
  _DWORD *v16; // [esp-4h] [ebp-14h]

  result = dword_5546A0;
  do
  {
    v1 = dword_553460[result];
    dword_554468 = result;
    v2 = (_DWORD *)((char *)&unk_555FE0 + 64 * result);
    dword_553438 = dword_553450 + 3 * v1;
    do
    {
      v3 = v2[2];
      v4 = v2[3] + 1;
      v5 = v4 <= v3;
      v6 = v4 - v3;
      if ( !v5 )
      {
        dword_55343C = v6;
        dword_554488 = v2[10];
        v7 = v2[15];
        dword_55342C = v2[11];
        v8 = v2[14];
        dword_55448C = v7;
        v9 = (_BYTE *)(3 * v3 + dword_553438);
        v10 = v2[12];
        v16 = v2;
        v11 = v2[13];
        v12 = dword_55343C;
        do
        {
          v13 = dword_554488 >> 16;
          dword_554488 += dword_55342C;
          v14 = BYTE2(v10);
          v10 += v11;
          v9[2] = v13;
          v9[1] = v14;
          v15 = v8 >> 16;
          v8 += dword_55448C;
          *v9 = v15;
          v9 += 3;
          v5 = v12-- <= 1;
        }
        while ( !v5 );
        v2 = v16;
      }
      v2 = (_DWORD *)*v2;
    }
    while ( v2 != NULL );
    result = dword_554468 + 1;
  }
  while ( dword_554468 + 1 <= dword_555FCC );
  return result;
}

// 0x418520  sub_418520
int sub_418520()
{
  int result; // eax
  int v1; // ebp
  int v2; // ecx
  char *v3; // ebp
  int v4; // ebx
  int v5; // eax
  bool v6; // cc
  int v7; // eax
  int v8; // edi
  _BYTE *v9; // ebp
  unsigned int v10; // ebx
  unsigned int v11; // eax
  char v12; // dl
  int v13; // esi
  int v14; // ebx
  char v15; // cl
  _BYTE *v16; // eax
  char v17; // dl
  int *v18; // [esp-4h] [ebp-14h]

  result = dword_5546A0;
  v1 = dword_554470[*((unsigned __int8 *)off_46AF70 + 12)];
  dword_55344C = v1 + (unsigned __int8)dword_55341C;
  dword_553448 = v1 + BYTE1(dword_55341C);
  dword_553454 = v1 + BYTE2(dword_55341C);
  do
  {
    v2 = dword_553460[result];
    dword_554468 = result;
    v3 = (char *)&unk_555FE0 + 64 * result;
    dword_553438 = dword_553450 + 3 * v2;
    do
    {
      v4 = *((_DWORD *)v3 + 2);
      v5 = *((_DWORD *)v3 + 3);
      v18 = (int *)v3;
      v6 = v5 <= v4;
      v7 = v5 - v4;
      if ( !v6 )
      {
        v8 = v7;
        v9 = (_BYTE *)(3 * v4 + dword_553438);
        do
        {
          v10 = *(_DWORD *)(v9 - 1);
          v11 = v10 >> 8;
          v12 = *(_BYTE *)(dword_55344C + (v10 & 0xFF00));
          v13 = HIWORD(v10) & 0xFF00;
          v14 = dword_553454;
          v15 = *(_BYTE *)(dword_553448 + (v11 & 0xFF00));
          *v9 = v12;
          v16 = v9;
          v17 = *(_BYTE *)(v14 + v13);
          v9[1] = v15;
          v9 += 3;
          v16[2] = v17;
          v6 = v8-- <= 1;
        }
        while ( !v6 );
      }
      v3 = (char *)*v18;
    }
    while ( *v18 > 0 );
    result = dword_554468 + 1;
  }
  while ( dword_554468 + 1 < dword_555FCC );
  return result;
}

// 0x418620  sub_418620
int sub_418620()
{
  int result; // eax
  int v1; // ecx
  _DWORD *v2; // ebp
  int v3; // ebx
  int v4; // eax
  bool v5; // cc
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // esi
  int v10; // ebx
  int v11; // eax
  int v12; // ebp
  unsigned int v13; // ecx
  unsigned int v14; // eax
  int v15; // edi
  unsigned int v16; // ebp
  int v17; // edx
  int v18; // edi
  int v19; // ecx
  int v20; // ebx
  unsigned int v21; // ebp
  int v22; // edi
  _DWORD *v23; // [esp-4h] [ebp-14h]

  result = dword_5546A0;
  dword_554490 = dword_554470[*((unsigned __int8 *)off_46AF70 + 12)];
  do
  {
    v1 = dword_553460[result];
    dword_554468 = result;
    v2 = (_DWORD *)((char *)&unk_555FE0 + 64 * result);
    dword_553438 = dword_553450 + 3 * v1;
    do
    {
      v3 = v2[2];
      v4 = v2[3];
      v5 = v4 <= v3;
      v6 = v4 - v3;
      if ( !v5 )
      {
        dword_55343C = v6;
        v23 = v2;
        v7 = v2[12];
        dword_554488 = v2[10];
        v8 = v2[11];
        dword_55446C = v7;
        v9 = 3 * v3 + dword_553438;
        v10 = v2[13];
        dword_55342C = v8;
        v11 = v2[15];
        dword_553420 = v10;
        v12 = v2[14];
        dword_55448C = v11;
        dword_554484 = v12;
        do
        {
          v13 = *(_DWORD *)(v9 - 1);
          v14 = HIWORD(dword_554484);
          v15 = dword_554490;
          dword_554484 += dword_55448C;
          v16 = dword_55446C;
          *(_BYTE *)v9 = *(_BYTE *)((v13 & 0xFF00) + dword_554490 + v14);
          dword_55446C = dword_553420 + v16;
          v17 = v15;
          v18 = ((v13 >> 8) & 0xFF00) + v15;
          v19 = dword_554488;
          v20 = *(_DWORD *)(v9 + 1);
          LOBYTE(v20) = *(_BYTE *)(v18 + HIWORD(v16));
          v21 = HIWORD(dword_554488);
          *(_BYTE *)(v9 + 1) = v20;
          v22 = v9;
          v9 += 3;
          LOBYTE(v14) = *(_BYTE *)((unsigned __int16)v20 + v17 + v21);
          v5 = dword_55343C-- <= 1;
          dword_554488 = dword_55342C + v19;
          *(_BYTE *)(v22 + 2) = v14;
        }
        while ( !v5 );
        v2 = v23;
      }
      v2 = (_DWORD *)*v2;
    }
    while ( (int)v2 > 0 );
    result = dword_554468 + 1;
  }
  while ( dword_554468 + 1 < dword_555FCC );
  return result;
}

// 0x418780  sub_418780
int sub_418780()
{
  int result; // eax
  int v1; // ecx
  _DWORD *v2; // ebp
  unsigned int v3; // ebx
  unsigned int v4; // edi
  bool v5; // cf
  unsigned int v6; // edi
  int v7; // eax
  int v8; // edi
  unsigned int v9; // ebx
  int v10; // ecx
  int v11; // esi
  int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // ebx
  int v15; // edi
  int v16; // eax
  int v17; // ecx
  unsigned int v18; // edx
  unsigned int v19; // ebx
  int v20; // edi
  int v21; // eax
  int v22; // ecx
  unsigned int v23; // edx

  result = dword_5546A0;
  dword_55344C = (int)&dword_46AF78 + ((16 * (_WORD)dword_55341C) & 0xFC0);
  dword_553448 = (int)&dword_46AF78 + (((unsigned int)dword_55341C >> 4) & 0xFC0);
  dword_553454 = (int)&dword_46AF78 + (((unsigned int)dword_55341C >> 12) & 0xFC0);
  do
  {
    v1 = dword_553460[result];
    dword_554468 = result;
    v2 = (_DWORD *)((char *)&unk_555FE0 + 64 * result);
    dword_553438 = dword_553450 + 3 * v1;
    do
    {
      v3 = v2[2];
      v4 = v2[3];
      v5 = v4 < v3;
      v6 = v4 - v3;
      if ( !v5 )
      {
        v7 = v2[2];
        v8 = 3 * ~v6;
        v9 = v2[14];
        dword_55343C = v8;
        v10 = dword_55344C;
        v11 = 3 * v7 + dword_553438 - v8;
        v12 = v2[15];
        do
        {
          v13 = v9;
          v9 += v12;
          *(_BYTE *)(v11 + v8) = *(_BYTE *)(v10 + (v13 >> 18));
          v8 += 3;
        }
        while ( v8 != 0 );
        v14 = v2[12];
        v15 = dword_55343C;
        v16 = v2[13];
        v17 = dword_553448;
        do
        {
          v18 = v14;
          v14 += v16;
          *(_BYTE *)(v11 + v15 + 1) = *(_BYTE *)(v17 + (v18 >> 18));
          v15 += 3;
        }
        while ( v15 != 0 );
        v19 = v2[10];
        v20 = dword_55343C;
        v21 = v2[11];
        v22 = dword_553454;
        do
        {
          v23 = v19;
          v19 += v21;
          *(_BYTE *)(v11 + v20 + 2) = *(_BYTE *)(v22 + (v23 >> 18));
          v20 += 3;
        }
        while ( v20 != 0 );
      }
      v2 = (_DWORD *)*v2;
    }
    while ( v2 != NULL );
    result = dword_554468 + 1;
  }
  while ( dword_554468 + 1 <= dword_555FCC );
  return result;
}

// 0x4188b0  sub_4188B0
int sub_4188B0()
{
  int result; // eax
  int v1; // ecx
  _DWORD *v2; // ebp
  int v3; // ebx
  int v4; // eax
  bool v5; // cc
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // esi
  int v10; // ebx
  int v11; // eax
  int v12; // ebp
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // ebx
  int v16; // edx
  int v17; // edi
  int v18; // ebx
  unsigned int v19; // ebp
  int v20; // edx
  int v21; // eax
  int v22; // edi
  int v23; // ebx
  _DWORD *v24; // [esp-4h] [ebp-14h]

  result = dword_5546A0;
  dword_554490 = dword_554470[*((unsigned __int8 *)off_46AF70 + 12)];
  dword_55344C = (int)&dword_46AF78 + ((16 * (_WORD)dword_55341C) & 0xFC0);
  dword_553448 = (int)&dword_46AF78 + (((unsigned int)dword_55341C >> 4) & 0xFC0);
  dword_553454 = (int)&dword_46AF78 + (((unsigned int)dword_55341C >> 12) & 0xFC0);
  do
  {
    v1 = dword_553460[result];
    dword_554468 = result;
    v2 = (_DWORD *)((char *)&unk_555FE0 + 64 * result);
    dword_553438 = dword_553450 + 3 * v1;
    do
    {
      v3 = v2[2];
      v4 = v2[3];
      v5 = v4 <= v3;
      v6 = v4 - v3;
      if ( !v5 )
      {
        dword_55343C = v6;
        v24 = v2;
        v7 = v2[12];
        dword_554488 = v2[10];
        v8 = v2[11];
        dword_55446C = v7;
        v9 = 3 * v3 + dword_553438;
        v10 = v2[13];
        dword_55342C = v8;
        v11 = v2[15];
        dword_553420 = v10;
        v12 = v2[14];
        dword_55448C = v11;
        dword_554484 = v12;
        do
        {
          v13 = *(_DWORD *)(v9 - 1);
          v14 = (unsigned int)dword_554484 >> 18;
          dword_554484 += dword_55448C;
          LOBYTE(v14) = *(_BYTE *)((v13 & 0xFF00) + dword_554490 + (unsigned __int8)*(_DWORD *)(dword_55344C + v14));
          v15 = (unsigned int)dword_55446C >> 18;
          dword_55446C += dword_553420;
          v16 = dword_554490;
          v17 = ((v13 >> 8) & 0xFF00) + dword_554490;
          v18 = *(_DWORD *)(dword_553448 + v15);
          v19 = dword_554488;
          *(_BYTE *)v9 = v14;
          v20 = (*(_DWORD *)(v9 + 1) & 0xFF00) + v16;
          v21 = dword_553454;
          *(_BYTE *)(v9 + 1) = *(_BYTE *)(v17 + (unsigned __int8)v18);
          v22 = v9;
          v9 += 3;
          LOBYTE(v21) = *(_BYTE *)(v20 + (unsigned __int8)*(_DWORD *)(v21 + (v19 >> 18)));
          v5 = dword_55343C <= 1;
          v23 = dword_55343C - 1;
          dword_554488 = dword_55342C + v19;
          *(_BYTE *)(v22 + 2) = v21;
          dword_55343C = v23;
        }
        while ( !v5 );
        v2 = v24;
      }
      v2 = (_DWORD *)*v2;
    }
    while ( (int)v2 > 0 );
    result = dword_554468 + 1;
  }
  while ( dword_554468 + 1 < dword_555FCC );
  return result;
}

// 0x418a80  sub_418A80
int sub_418A80()
{
  int *v0; // ebp
  int v1; // ecx
  int result; // eax
  char *v3; // edx
  int *v4; // eax
  int v5; // ecx
  int v6; // edx
  _BYTE *v7; // edi
  _DWORD *v8; // esi
  int v9; // edx
  int v10; // ebp
  int v11; // ebx
  int v12; // ecx
  unsigned __int64 v13; // kr00_8
  bool v14; // cc
  int v15; // eax
  int v16; // esi
  int *v17; // [esp-10h] [ebp-28h]
  char *v18; // [esp+8h] [ebp-10h]
  int v19; // [esp+Ch] [ebp-Ch]
  int *v20; // [esp+10h] [ebp-8h]
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  v0 = &savedregs;
  v1 = dword_5546A0;
  result = dword_555FCC;
  v19 = dword_5546A0;
  if ( dword_5546A0 <= dword_555FCC )
  {
    v3 = (char *)&unk_555FE0 + 64 * dword_5546A0;
    v20 = &dword_553460[dword_5546A0];
    v18 = v3;
    do
    {
      v4 = (int *)v3;
      *(v0 - 1) = (int)v3;
      if ( v3 != NULL )
      {
        while ( 1 )
        {
          dword_55343C = v4[3] - v4[2] + 1;
          if ( dword_55343C > 0 )
          {
            v5 = v4[2] + *(_DWORD *)*(v0 - 2);
            *(v0 - 6) = dword_553450 + 2 * v5 + v5;
            dword_553428 = v4[6] << 16;
            dword_5546A8 = v4[7] << 16;
            dword_555FC8 = v4[8] << 16;
            dword_5A7CA0 = v4[9] << 16;
            dword_553414[0] = (v4[7] >> 16) + (v4[9] >> 16 << dword_5A7CA4);
            dword_553410 = dword_553414[0] + dword_565FE8;
            v6 = (v4[6] >> 16) + (v4[8] >> 16 << dword_5A7CA4);
            *(v0 - 5) = dword_55340C + 2 * v6 + v6;
            v7 = (_BYTE *)*(v0 - 6);
            v8 = (_DWORD *)*(v0 - 5);
            v17 = v0;
            v9 = dword_55343C;
            v10 = -__CFADD__(dword_5A7CA0, dword_555FC8);
            dword_555FC8 += dword_5A7CA0;
            do
            {
              v11 = *(_DWORD *)((char *)v8 + 1);
              v12 = *(_DWORD *)((char *)v8 + 2);
              *v7 = *v8;
              v7[1] = v11;
              v7[2] = v12;
              v7 += 3;
              v13 = __PAIR64__(dword_553414[v10], dword_5546A8) + (unsigned int)dword_553428;
              dword_553428 += dword_5546A8;
              v10 = -__CFADD__(dword_5A7CA0, dword_555FC8);
              dword_555FC8 += dword_5A7CA0;
              v8 = (_DWORD *)((char *)v8 + 3 * HIDWORD(v13));
              v14 = v9-- <= 1;
            }
            while ( !v14 );
            v0 = v17;
            v3 = (char *)*(v17 - 4);
            v4 = (int *)*(v17 - 1);
          }
          v15 = *v4;
          *(v0 - 1) = v15;
          if ( v15 == 0 )
            break;
          v4 = (int *)*(v0 - 1);
        }
        v1 = *(v0 - 3);
      }
      result = dword_555FCC;
      ++v1;
      v3 += 64;
      v16 = *(v0 - 2) + 4;
      v14 = v1 <= dword_555FCC;
      *(v0 - 3) = v1;
      *(v0 - 4) = (int)v3;
      *(v0 - 2) = v16;
    }
    while ( v14 );
  }
  return result;
}

// 0x418c30  sub_418C30
int sub_418C30()
{
  int *v0; // ebp
  int v1; // ecx
  int result; // eax
  char *v3; // edx
  int *v4; // eax
  int v5; // ecx
  int v6; // edx
  _BYTE *v7; // edi
  _DWORD *v8; // esi
  int v9; // edx
  int v10; // ebp
  int v11; // ebx
  int v12; // ecx
  unsigned __int64 v13; // kr00_8
  bool v14; // cc
  int v15; // eax
  int v16; // esi
  int *v17; // [esp-10h] [ebp-28h]
  char *v18; // [esp+8h] [ebp-10h]
  int v19; // [esp+Ch] [ebp-Ch]
  int *v20; // [esp+10h] [ebp-8h]
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  v0 = &savedregs;
  v1 = dword_5546A0;
  result = dword_555FCC;
  v19 = dword_5546A0;
  if ( dword_5546A0 <= dword_555FCC )
  {
    v3 = (char *)&unk_555FE0 + 64 * dword_5546A0;
    v20 = &dword_553460[dword_5546A0];
    v18 = v3;
    do
    {
      v4 = (int *)v3;
      *(v0 - 1) = (int)v3;
      if ( v3 != NULL )
      {
        while ( 1 )
        {
          dword_55343C = v4[3] - v4[2] + 1;
          if ( dword_55343C > 0 )
          {
            v5 = v4[2] + *(_DWORD *)*(v0 - 2);
            *(v0 - 6) = dword_553450 + 2 * v5 + v5;
            dword_553428 = v4[6] << 16;
            dword_5546A8 = v4[7] << 16;
            dword_555FC8 = v4[8] << 16;
            dword_5A7CA0 = v4[9] << 16;
            dword_553414[0] = (v4[7] >> 16) + (v4[9] >> 16 << dword_5A7CA4);
            dword_553410 = dword_553414[0] + dword_565FE8;
            v6 = (v4[6] >> 16) + (v4[8] >> 16 << dword_5A7CA4);
            *(v0 - 5) = dword_55340C + 2 * v6 + v6;
            v7 = (_BYTE *)*(v0 - 6);
            v8 = (_DWORD *)*(v0 - 5);
            v17 = v0;
            v9 = dword_55343C;
            v10 = -__CFADD__(dword_5A7CA0, dword_555FC8);
            dword_555FC8 += dword_5A7CA0;
            do
            {
              v11 = *(_DWORD *)((char *)v8 + 1);
              if ( (*v8 & 0xFFFFFF) != 0 )
              {
                v12 = *(_DWORD *)((char *)v8 + 2);
                *v7 = *v8;
                v7[1] = v11;
                v7[2] = v12;
              }
              v7 += 3;
              v13 = __PAIR64__(dword_553414[v10], dword_5546A8) + (unsigned int)dword_553428;
              dword_553428 += dword_5546A8;
              v10 = -__CFADD__(dword_5A7CA0, dword_555FC8);
              dword_555FC8 += dword_5A7CA0;
              v8 = (_DWORD *)((char *)v8 + 3 * HIDWORD(v13));
              v14 = v9-- <= 1;
            }
            while ( !v14 );
            v0 = v17;
            v3 = (char *)*(v17 - 4);
            v4 = (int *)*(v17 - 1);
          }
          v15 = *v4;
          *(v0 - 1) = v15;
          if ( v15 == 0 )
            break;
          v4 = (int *)*(v0 - 1);
        }
        v1 = *(v0 - 3);
      }
      result = dword_555FCC;
      ++v1;
      v3 += 64;
      v16 = *(v0 - 2) + 4;
      v14 = v1 <= dword_555FCC;
      *(v0 - 3) = v1;
      *(v0 - 4) = (int)v3;
      *(v0 - 2) = v16;
    }
    while ( v14 );
  }
  return result;
}

// 0x418df0  sub_418DF0
int sub_418DF0()
{
  int *v0; // ebp
  int v1; // ecx
  int result; // eax
  char *v3; // edx
  int *v4; // eax
  int v5; // ecx
  int v6; // edx
  _BYTE *v7; // edi
  _DWORD *v8; // esi
  int v9; // edx
  int v10; // ebp
  char v11; // ecx^2
  char v12; // bl
  unsigned __int64 v13; // kr00_8
  bool v14; // cc
  int v15; // eax
  int v16; // esi
  int *v17; // [esp-10h] [ebp-28h]
  char *v18; // [esp+8h] [ebp-10h]
  int v19; // [esp+Ch] [ebp-Ch]
  int *v20; // [esp+10h] [ebp-8h]
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  v0 = &savedregs;
  v1 = dword_5546A0;
  result = dword_555FCC;
  v19 = dword_5546A0;
  if ( dword_5546A0 <= dword_555FCC )
  {
    v3 = (char *)&unk_555FE0 + 64 * dword_5546A0;
    v20 = &dword_553460[dword_5546A0];
    v18 = v3;
    do
    {
      v4 = (int *)v3;
      *(v0 - 1) = (int)v3;
      if ( v3 != NULL )
      {
        while ( 1 )
        {
          dword_55343C = v4[3] - v4[2] + 1;
          if ( dword_55343C > 0 )
          {
            v5 = v4[2] + *(_DWORD *)*(v0 - 2);
            *(v0 - 6) = dword_553450 + 2 * v5 + v5;
            dword_553428 = v4[6] << 16;
            dword_5546A8 = v4[7] << 16;
            dword_555FC8 = v4[8] << 16;
            dword_5A7CA0 = v4[9] << 16;
            dword_553414[0] = (v4[7] >> 16) + (v4[9] >> 16 << dword_5A7CA4);
            dword_553410 = dword_553414[0] + dword_565FE8;
            v6 = (v4[6] >> 16) + (v4[8] >> 16 << dword_5A7CA4);
            *(v0 - 5) = dword_55340C + 2 * v6 + v6;
            v7 = (_BYTE *)*(v0 - 6);
            v8 = (_DWORD *)*(v0 - 5);
            v17 = v0;
            v9 = dword_55343C;
            v10 = -__CFADD__(dword_5A7CA0, dword_555FC8);
            dword_555FC8 += dword_5A7CA0;
            do
            {
              if ( (*v8 & 0xFFFFFF) != 0 )
              {
                v11 = BYTE2(dword_55341C);
                v12 = BYTE1(dword_55341C);
                *v7 = dword_55341C;
                v7[1] = v12;
                v7[2] = v11;
              }
              v7 += 3;
              v13 = __PAIR64__(dword_553414[v10], dword_5546A8) + (unsigned int)dword_553428;
              dword_553428 += dword_5546A8;
              v10 = -__CFADD__(dword_5A7CA0, dword_555FC8);
              dword_555FC8 += dword_5A7CA0;
              v8 = (_DWORD *)((char *)v8 + 3 * HIDWORD(v13));
              v14 = v9-- <= 1;
            }
            while ( !v14 );
            v0 = v17;
            v3 = (char *)*(v17 - 4);
            v4 = (int *)*(v17 - 1);
          }
          v15 = *v4;
          *(v0 - 1) = v15;
          if ( v15 == 0 )
            break;
          v4 = (int *)*(v0 - 1);
        }
        v1 = *(v0 - 3);
      }
      result = dword_555FCC;
      ++v1;
      v3 += 64;
      v16 = *(v0 - 2) + 4;
      v14 = v1 <= dword_555FCC;
      *(v0 - 3) = v1;
      *(v0 - 4) = (int)v3;
      *(v0 - 2) = v16;
    }
    while ( v14 );
  }
  return result;
}

// 0x418fb0  sub_418FB0
int sub_418FB0()
{
  int result; // eax
  int v1; // ecx
  _DWORD *v2; // ebp
  int v3; // ebx
  int v4; // eax
  bool v5; // cc
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // esi
  int v13; // ebx
  int v14; // edi
  int v15; // ebx
  int v16; // edx
  int v17; // eax
  int v18; // ebx
  _DWORD *v19; // esi
  int v20; // ebp
  _BYTE *v21; // edi
  unsigned int v22; // ebx
  unsigned int v23; // eax
  int v24; // ecx
  unsigned int v25; // edx
  int v26; // ebx
  unsigned int v27; // ecx
  int v28; // edx
  int v29; // eax
  unsigned __int64 v30; // rax
  _DWORD *v31; // [esp-4h] [ebp-14h]

  result = dword_5546A0;
  do
  {
    v1 = dword_553460[result];
    dword_554468 = result;
    v2 = (_DWORD *)((char *)&unk_555FE0 + 64 * result);
    dword_553438 = dword_553450 + 3 * v1;
    do
    {
      v3 = v2[2];
      v4 = v2[3] + 1;
      v5 = v4 <= v3;
      v6 = v4 - v3;
      if ( !v5 )
      {
        dword_55343C = v6;
        v7 = v2[7];
        v8 = v2[8];
        dword_553428 = v2[6] << 16;
        v9 = v2[9];
        dword_5546A8 = v7 << 16;
        dword_555FC8 = v8 << 16;
        dword_5A7CA0 = v9 << 16;
        v10 = v2[10];
        v11 = v2[11];
        v12 = v2[13];
        v13 = v2[12];
        dword_553414[0] = (v9 >> 16 << dword_5A7CA4) + (v7 >> 16);
        dword_554488 = v10 - v11;
        dword_55342C = v11;
        dword_553410 = dword_565FE8 + dword_553414[0];
        v14 = v2[14];
        dword_55446C = v13 - v12;
        dword_553420 = v12;
        v15 = v2[15];
        v16 = v2[8];
        v17 = v2[6];
        dword_554484 = v14 - v15;
        v31 = v2;
        dword_55448C = v15;
        v18 = v2[2];
        v19 = (_DWORD *)(3 * ((v16 >> 16 << dword_5A7CA4) + (v17 >> 16)) + dword_55340C);
        v20 = -__CFADD__(dword_5A7CA0, dword_555FC8);
        dword_555FC8 += dword_5A7CA0;
        v21 = (_BYTE *)(3 * v18 + dword_553438);
        do
        {
          v22 = (unsigned __int8)*v19;
          dword_554484 += dword_55448C;
          v23 = (unsigned __int8)*(_DWORD *)((char *)v19 + 1);
          dword_55446C += dword_553420;
          v24 = dword_554488;
          v25 = (unsigned int)dword_55446C >> 12;
          *v21 = *(int *)((char *)&dword_46AF78 + (((unsigned int)dword_554484 >> 12) & 0xFC0) + (v22 >> 2));
          dword_554488 = dword_55342C + v24;
          v26 = (unsigned __int8)*(_DWORD *)((char *)v19 + 2) >> 2;
          v27 = ((unsigned int)(dword_55342C + v24) >> 12) & 0xFC0;
          v28 = *(int *)((char *)&dword_46AF78 + (v23 >> 2) + (v25 & 0xFC0));
          v29 = dword_553428;
          v21[1] = v28;
          v21[2] = *(int *)((char *)&dword_46AF78 + v26 + v27);
          v30 = __PAIR64__(dword_553414[v20], dword_5546A8) + (unsigned int)v29;
          dword_553428 = v30;
          v21 += 3;
          v20 = -__CFADD__(dword_5A7CA0, dword_555FC8);
          dword_555FC8 += dword_5A7CA0;
          v19 = (_DWORD *)((char *)v19 + 3 * HIDWORD(v30));
          v5 = dword_55343C-- <= 1;
        }
        while ( !v5 );
        v2 = v31;
      }
      v2 = (_DWORD *)*v2;
    }
    while ( (int)v2 > 0 );
    result = dword_554468 + 1;
  }
  while ( dword_554468 + 1 <= dword_555FCC );
  return result;
}

// 0x4191d0  sub_4191D0
int sub_4191D0()
{
  int result; // eax
  int v1; // ecx
  _DWORD *v2; // ebp
  int v3; // ebx
  int v4; // eax
  bool v5; // cc
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // esi
  int v13; // ebx
  int v14; // edi
  int v15; // ebx
  int v16; // edx
  int v17; // eax
  int v18; // ebx
  _DWORD *v19; // esi
  int v20; // ebp
  _BYTE *v21; // edi
  int v22; // eax
  unsigned int v23; // ebx
  unsigned int v24; // eax
  int v25; // ecx
  unsigned int v26; // edx
  int v27; // ebx
  unsigned __int64 v28; // rax
  _DWORD *v29; // [esp-4h] [ebp-14h]

  result = dword_5546A0;
  do
  {
    v1 = dword_553460[result];
    dword_554468 = result;
    v2 = (_DWORD *)((char *)&unk_555FE0 + 64 * result);
    dword_553438 = dword_553450 + 3 * v1;
    do
    {
      v3 = v2[2];
      v4 = v2[3] + 1;
      v5 = v4 <= v3;
      v6 = v4 - v3;
      if ( !v5 )
      {
        dword_55343C = v6;
        v7 = v2[7];
        v8 = v2[8];
        dword_553428 = v2[6] << 16;
        v9 = v2[9];
        dword_5546A8 = v7 << 16;
        dword_555FC8 = v8 << 16;
        dword_5A7CA0 = v9 << 16;
        v10 = v2[10];
        v11 = v2[11];
        v12 = v2[13];
        v13 = v2[12];
        dword_553414[0] = (v9 >> 16 << dword_5A7CA4) + (v7 >> 16);
        dword_554488 = v10 - v11;
        dword_55342C = v11;
        dword_553410 = dword_565FE8 + dword_553414[0];
        v14 = v2[14];
        dword_55446C = v13 - v12;
        dword_553420 = v12;
        v15 = v2[15];
        v16 = v2[8];
        v17 = v2[6];
        dword_554484 = v14 - v15;
        v29 = v2;
        dword_55448C = v15;
        v18 = v2[2];
        v19 = (_DWORD *)(3 * ((v16 >> 16 << dword_5A7CA4) + (v17 >> 16)) + dword_55340C);
        v20 = -__CFADD__(dword_5A7CA0, dword_555FC8);
        dword_555FC8 += dword_5A7CA0;
        v21 = (_BYTE *)(3 * v18 + dword_553438);
        do
        {
          v22 = *v19 & 0xFFFFFF;
          if ( v22 != 0 )
          {
            v23 = (unsigned __int8)v22;
            dword_554484 += dword_55448C;
            v24 = (unsigned __int8)*(_DWORD *)((char *)v19 + 1);
            dword_55446C += dword_553420;
            v25 = dword_554488;
            v26 = (unsigned int)dword_55446C >> 12;
            *v21 = *(int *)((char *)&dword_46AF78 + (((unsigned int)dword_554484 >> 12) & 0xFC0) + (v23 >> 2));
            dword_554488 = dword_55342C + v25;
            v27 = *(int *)((char *)&dword_46AF78
                         + ((unsigned __int8)*(_DWORD *)((char *)v19 + 2) >> 2)
                         + (((unsigned int)(dword_55342C + v25) >> 12) & 0xFC0));
            v21[1] = *(int *)((char *)&dword_46AF78 + (v24 >> 2) + (v26 & 0xFC0));
            v21[2] = v27;
          }
          v28 = __PAIR64__(dword_553414[v20], dword_5546A8) + (unsigned int)dword_553428;
          dword_553428 += dword_5546A8;
          v21 += 3;
          v20 = -__CFADD__(dword_5A7CA0, dword_555FC8);
          dword_555FC8 += dword_5A7CA0;
          v19 = (_DWORD *)((char *)v19 + 3 * HIDWORD(v28));
          v5 = dword_55343C-- <= 1;
        }
        while ( !v5 );
        v2 = v29;
      }
      v2 = (_DWORD *)*v2;
    }
    while ( (int)v2 > 0 );
    result = dword_554468 + 1;
  }
  while ( dword_554468 + 1 <= dword_555FCC );
  return result;
}

// 0x419400  sub_419400
int sub_419400()
{
  int result; // eax
  int v1; // ecx
  _DWORD *v2; // ebp
  int v3; // ebx
  int v4; // eax
  bool v5; // cc
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // edi
  int v12; // eax
  int v13; // ebx
  int *v14; // esi
  int v15; // ebp
  _BYTE *v16; // edi
  int v17; // ecx
  unsigned int v18; // eax
  int v19; // ebx
  char v20; // dl
  int v21; // ecx
  int v22; // eax
  int v23; // kr00_4
  unsigned __int64 v24; // kr08_8
  _DWORD *v25; // [esp-4h] [ebp-14h]

  result = dword_5546A0;
  dword_554490 = dword_554470[*((unsigned __int8 *)off_46AF70 + 12)];
  do
  {
    v1 = dword_553460[result];
    dword_554468 = result;
    v2 = (_DWORD *)((char *)&unk_555FE0 + 64 * result);
    dword_553438 = dword_553450 + 3 * v1;
    do
    {
      v3 = v2[2];
      v4 = v2[3];
      v5 = v4 <= v3;
      v6 = v4 - v3;
      if ( !v5 )
      {
        dword_55343C = v6;
        v7 = v2[7];
        v8 = v2[8];
        dword_553428 = v2[6] << 16;
        v9 = v2[9];
        dword_5546A8 = v7 << 16;
        dword_555FC8 = v8 << 16;
        dword_5A7CA0 = v9 << 16;
        v10 = v2[8];
        v11 = (v9 >> 16 << dword_5A7CA4) + (v7 >> 16);
        v12 = v2[6];
        dword_553414[0] = v11;
        v25 = v2;
        dword_553410 = dword_565FE8 + v11;
        v13 = v2[2];
        v8 <<= 16;
        v14 = (int *)(3 * ((v10 >> 16 << dword_5A7CA4) + (v12 >> 16)) + dword_55340C);
        v15 = -__CFADD__(dword_5A7CA0, v8);
        dword_555FC8 = dword_5A7CA0 + v8;
        v16 = (_BYTE *)(3 * v13 + dword_553438);
        do
        {
          v17 = *v14;
          v18 = (unsigned int)*v14 >> 8;
          *v16 = *(_BYTE *)((*(_DWORD *)(v16 - 1) & 0xFF00) + dword_554490 + (unsigned __int8)*v14);
          v19 = BYTE2(v17) + dword_554490;
          v20 = *(_BYTE *)((unsigned __int8)v18 + dword_554490 + (*(_DWORD *)v16 & 0xFF00));
          v21 = (*(_DWORD *)v16 >> 8) & 0xFF00;
          v22 = dword_553428;
          v16[1] = v20;
          v23 = dword_5546A8;
          v16[2] = *(_BYTE *)(v19 + v21);
          v24 = (unsigned int)v23 + __PAIR64__(dword_553414[v15], v22);
          v16 += 3;
          dword_553428 = v23 + v22;
          v15 = -__CFADD__(dword_5A7CA0, dword_555FC8);
          dword_555FC8 += dword_5A7CA0;
          v14 = (int *)((char *)v14 + 3 * HIDWORD(v24));
          v5 = dword_55343C-- <= 1;
        }
        while ( !v5 );
        v2 = v25;
      }
      v2 = (_DWORD *)*v2;
    }
    while ( (int)v2 > 0 );
    result = dword_554468 + 1;
  }
  while ( dword_554468 + 1 < dword_555FCC );
  return result;
}

// 0x4195c0  sub_4195C0
int sub_4195C0()
{
  int result; // eax
  int v1; // ecx
  _DWORD *v2; // ebp
  int v3; // ebx
  int v4; // eax
  bool v5; // cc
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // edi
  int v12; // eax
  int v13; // ebx
  _DWORD *v14; // esi
  int v15; // ebp
  _BYTE *v16; // edi
  int v17; // ebx
  int v18; // edx
  int v19; // ebx
  int v20; // ecx
  unsigned __int64 v21; // kr00_8
  _DWORD *v22; // [esp-4h] [ebp-14h]

  result = dword_5546A0;
  dword_554490 = dword_554470[*((unsigned __int8 *)off_46AF70 + 12)];
  do
  {
    v1 = dword_553460[result];
    dword_554468 = result;
    v2 = (_DWORD *)((char *)&unk_555FE0 + 64 * result);
    dword_553438 = dword_553450 + 3 * v1;
    do
    {
      v3 = v2[2];
      v4 = v2[3];
      v5 = v4 <= v3;
      v6 = v4 - v3;
      if ( !v5 )
      {
        dword_55343C = v6;
        v7 = v2[7];
        v8 = v2[8];
        dword_553428 = v2[6] << 16;
        v9 = v2[9];
        dword_5546A8 = v7 << 16;
        dword_555FC8 = v8 << 16;
        dword_5A7CA0 = v9 << 16;
        v10 = v2[8];
        v11 = (v9 >> 16 << dword_5A7CA4) + (v7 >> 16);
        v12 = v2[6];
        dword_553414[0] = v11;
        v22 = v2;
        dword_553410 = dword_565FE8 + v11;
        v13 = v2[2];
        v8 <<= 16;
        v14 = (_DWORD *)(3 * ((v10 >> 16 << dword_5A7CA4) + (v12 >> 16)) + dword_55340C);
        v15 = -__CFADD__(dword_5A7CA0, v8);
        dword_555FC8 = dword_5A7CA0 + v8;
        v16 = (_BYTE *)(3 * v13 + dword_553438);
        do
        {
          v17 = *v14 & 0xFFFFFF;
          if ( v17 != 0 )
          {
            *v16 = *(_BYTE *)((*(_DWORD *)(v16 - 1) & 0xFF00) + dword_554490 + (unsigned __int8)v17);
            v18 = BYTE1(v17) + dword_554490;
            v19 = BYTE2(v17) + dword_554490;
            v20 = (*(_DWORD *)v16 >> 8) & 0xFF00;
            v16[1] = *(_BYTE *)(v18 + (*(_DWORD *)v16 & 0xFF00));
            v16[2] = *(_BYTE *)(v19 + v20);
          }
          v21 = __PAIR64__(dword_553414[v15], dword_5546A8) + (unsigned int)dword_553428;
          v16 += 3;
          dword_553428 += dword_5546A8;
          v15 = -__CFADD__(dword_5A7CA0, dword_555FC8);
          dword_555FC8 += dword_5A7CA0;
          v14 = (_DWORD *)((char *)v14 + 3 * HIDWORD(v21));
          v5 = dword_55343C-- <= 1;
        }
        while ( !v5 );
        v2 = v22;
      }
      v2 = (_DWORD *)*v2;
    }
    while ( (int)v2 > 0 );
    result = dword_554468 + 1;
  }
  while ( dword_554468 + 1 < dword_555FCC );
  return result;
}

// 0x419790  sub_419790
int sub_419790()
{
  int result; // eax
  int v1; // ecx
  _DWORD *v2; // ebp
  int v3; // ebx
  int v4; // eax
  bool v5; // cc
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // edi
  int v12; // eax
  int v13; // ebx
  _DWORD *v14; // esi
  int v15; // ebp
  _BYTE *v16; // edi
  unsigned __int8 v17; // ecx^2
  unsigned int v18; // eax
  int v19; // ebx
  int v20; // ecx
  unsigned __int64 v21; // kr00_8
  _DWORD *v22; // [esp-4h] [ebp-14h]

  result = dword_5546A0;
  dword_554490 = dword_554470[*((unsigned __int8 *)off_46AF70 + 12)];
  do
  {
    v1 = dword_553460[result];
    dword_554468 = result;
    v2 = (_DWORD *)((char *)&unk_555FE0 + 64 * result);
    dword_553438 = dword_553450 + 3 * v1;
    do
    {
      v3 = v2[2];
      v4 = v2[3];
      v5 = v4 <= v3;
      v6 = v4 - v3;
      if ( !v5 )
      {
        dword_55343C = v6;
        v7 = v2[7];
        v8 = v2[8];
        dword_553428 = v2[6] << 16;
        v9 = v2[9];
        dword_5546A8 = v7 << 16;
        dword_555FC8 = v8 << 16;
        dword_5A7CA0 = v9 << 16;
        v10 = v2[8];
        v11 = (v9 >> 16 << dword_5A7CA4) + (v7 >> 16);
        v12 = v2[6];
        dword_553414[0] = v11;
        v22 = v2;
        dword_553410 = dword_565FE8 + v11;
        v13 = v2[2];
        v8 <<= 16;
        v14 = (_DWORD *)(3 * ((v10 >> 16 << dword_5A7CA4) + (v12 >> 16)) + dword_55340C);
        v15 = -__CFADD__(dword_5A7CA0, v8);
        dword_555FC8 = dword_5A7CA0 + v8;
        v16 = (_BYTE *)(3 * v13 + dword_553438);
        do
        {
          if ( (*v14 & 0xFFFFFF) != 0 )
          {
            v17 = BYTE2(dword_55341C);
            v18 = (unsigned int)dword_55341C >> 8;
            *v16 = *(_BYTE *)((*(_DWORD *)(v16 - 1) & 0xFF00) + dword_554490 + (unsigned __int8)dword_55341C);
            v19 = v17 + dword_554490;
            v20 = (*(_DWORD *)v16 >> 8) & 0xFF00;
            v16[1] = *(_BYTE *)((unsigned __int8)v18 + dword_554490 + (*(_DWORD *)v16 & 0xFF00));
            v16[2] = *(_BYTE *)(v19 + v20);
          }
          v21 = __PAIR64__(dword_553414[v15], dword_5546A8) + (unsigned int)dword_553428;
          v16 += 3;
          dword_553428 += dword_5546A8;
          v15 = -__CFADD__(dword_5A7CA0, dword_555FC8);
          dword_555FC8 += dword_5A7CA0;
          v14 = (_DWORD *)((char *)v14 + 3 * HIDWORD(v21));
          v5 = dword_55343C-- <= 1;
        }
        while ( !v5 );
        v2 = v22;
      }
      v2 = (_DWORD *)*v2;
    }
    while ( (int)v2 > 0 );
    result = dword_554468 + 1;
  }
  while ( dword_554468 + 1 < dword_555FCC );
  return result;
}

// 0x419960  sub_419960
int sub_419960()
{
  int result; // eax
  int v1; // ecx
  _DWORD *v2; // ebp
  int v3; // ebx
  int v4; // eax
  bool v5; // cc
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // esi
  int v13; // ebx
  int v14; // edi
  int v15; // ebx
  int v16; // edx
  int v17; // eax
  int v18; // ebx
  unsigned int *v19; // esi
  int v20; // ebp
  int v21; // edi
  unsigned int v22; // ecx
  unsigned int v23; // ebp
  int v24; // eax
  int v25; // ebx
  unsigned int v26; // ecx
  unsigned int v27; // edx
  int v28; // ecx
  int v29; // edx
  unsigned int v30; // eax
  int v31; // ebx
  __int64 v32; // rax
  int v33; // [esp-8h] [ebp-18h]
  _DWORD *v34; // [esp-4h] [ebp-14h]

  result = dword_5546A0;
  dword_554490 = dword_554470[*((unsigned __int8 *)off_46AF70 + 12)];
  do
  {
    v1 = dword_553460[result];
    dword_554468 = result;
    v2 = (_DWORD *)((char *)&unk_555FE0 + 64 * result);
    dword_553438 = dword_553450 + 3 * v1;
    do
    {
      v3 = v2[2];
      v4 = v2[3];
      v5 = v4 <= v3;
      v6 = v4 - v3;
      if ( !v5 )
      {
        dword_55343C = v6;
        v7 = v2[7];
        v8 = v2[8];
        dword_553428 = v2[6] << 16;
        v9 = v2[9];
        dword_5546A8 = v7 << 16;
        dword_555FC8 = v8 << 16;
        dword_5A7CA0 = v9 << 16;
        v10 = v2[10];
        v11 = v2[11];
        v12 = v2[13];
        v13 = v2[12];
        dword_553414[0] = (v9 >> 16 << dword_5A7CA4) + (v7 >> 16);
        dword_554488 = v10;
        dword_55342C = v11;
        dword_553410 = dword_565FE8 + dword_553414[0];
        v14 = v2[14];
        dword_55446C = v13;
        dword_553420 = v12;
        v15 = v2[15];
        v16 = v2[8];
        v17 = v2[6];
        dword_554484 = v14;
        v34 = v2;
        dword_55448C = v15;
        v18 = v2[2];
        v19 = (unsigned int *)(3 * ((v16 >> 16 << dword_5A7CA4) + (v17 >> 16)) + dword_55340C);
        v20 = -__CFADD__(dword_5A7CA0, dword_555FC8);
        dword_555FC8 += dword_5A7CA0;
        v21 = 3 * v18 + dword_553438;
        do
        {
          v22 = (unsigned int)dword_554484 >> 12;
          v33 = v20;
          dword_554484 += dword_55448C;
          v23 = *v19;
          v24 = dword_553420;
          v25 = (unsigned __int8)*(int *)((char *)&dword_46AF78 + ((*v19 >> 2) & 0x3F) + (v22 & 0xFC0));
          v26 = *v19 >> 10;
          v27 = dword_55446C;
          *(_BYTE *)v21 = *(_BYTE *)((*(_DWORD *)(v21 - 1) & 0xFF00) + dword_554490 + v25);
          dword_55446C = v27 + v24;
          LOBYTE(v25) = *(_BYTE *)((unsigned __int8)*(int *)((char *)&dword_46AF78 + ((v27 >> 12) & 0xFC0)
                                                                                   + (v26 & 0x3F))
                                 + (*(_DWORD *)v21 & 0xFF00)
                                 + dword_554490);
          v28 = dword_554488 + dword_55342C;
          v29 = dword_554490;
          v30 = ((unsigned int)dword_554488 >> 12) & 0xFC0;
          *(_BYTE *)(v21 + 1) = v25;
          v31 = *(_DWORD *)(v21 + 2);
          dword_554488 = v28;
          LOBYTE(v31) = *(_BYTE *)((unsigned __int16)((_WORD)v31 << 8)
                                 + v29
                                 + (unsigned __int8)*(int *)((char *)&dword_46AF78 + ((v23 >> 18) & 0x3F) + v30));
          v32 = (unsigned int)dword_553428;
          *(_BYTE *)(v21 + 2) = v31;
          v21 += 3;
          dword_553428 = dword_5546A8 + v32;
          v20 = -__CFADD__(dword_5A7CA0, dword_555FC8);
          HIDWORD(v32) = 3 * ((__PAIR64__(dword_553414[v33], dword_5546A8) + v32) >> 32);
          dword_555FC8 += dword_5A7CA0;
          v19 = (unsigned int *)((char *)v19 + HIDWORD(v32));
          v5 = dword_55343C-- <= 1;
        }
        while ( !v5 );
        v2 = v34;
      }
      v2 = (_DWORD *)*v2;
    }
    while ( (int)v2 > 0 );
    result = dword_554468 + 1;
  }
  while ( dword_554468 + 1 < dword_555FCC );
  return result;
}

// 0x419bd0  sub_419BD0
int sub_419BD0()
{
  int result; // eax
  int v1; // ecx
  _DWORD *v2; // ebp
  int v3; // ebx
  int v4; // eax
  bool v5; // cc
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // ecx
  int v12; // esi
  int v13; // ebx
  int v14; // edi
  int v15; // ebx
  int v16; // edx
  int v17; // eax
  int v18; // ebx
  _DWORD *v19; // esi
  int v20; // ebp
  int v21; // edi
  int v22; // ebx
  unsigned int v23; // ecx
  unsigned int v24; // ebp
  int v25; // eax
  unsigned int v26; // edx
  char v27; // bl
  int v28; // ecx
  int v29; // edx
  unsigned int v30; // eax
  int v31; // ebx
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // [esp-8h] [ebp-18h]
  _DWORD *v36; // [esp-4h] [ebp-14h]

  result = dword_5546A0;
  dword_554490 = dword_554470[*((unsigned __int8 *)off_46AF70 + 12)];
  do
  {
    v1 = dword_553460[result];
    dword_554468 = result;
    v2 = (_DWORD *)((char *)&unk_555FE0 + 64 * result);
    dword_553438 = dword_553450 + 3 * v1;
    do
    {
      v3 = v2[2];
      v4 = v2[3];
      v5 = v4 <= v3;
      v6 = v4 - v3;
      if ( !v5 )
      {
        dword_55343C = v6;
        v7 = v2[7];
        v8 = v2[8];
        dword_553428 = v2[6] << 16;
        v9 = v2[9];
        dword_5546A8 = v7 << 16;
        dword_555FC8 = v8 << 16;
        dword_5A7CA0 = v9 << 16;
        v10 = v2[10];
        v11 = v2[11];
        v12 = v2[13];
        v13 = v2[12];
        dword_553414[0] = (v9 >> 16 << dword_5A7CA4) + (v7 >> 16);
        dword_554488 = v10;
        dword_55342C = v11;
        dword_553410 = dword_565FE8 + dword_553414[0];
        v14 = v2[14];
        dword_55446C = v13;
        dword_553420 = v12;
        v15 = v2[15];
        v16 = v2[8];
        v17 = v2[6];
        dword_554484 = v14;
        v36 = v2;
        dword_55448C = v15;
        v18 = v2[2];
        v19 = (_DWORD *)(3 * ((v16 >> 16 << dword_5A7CA4) + (v17 >> 16)) + dword_55340C);
        v20 = -__CFADD__(dword_5A7CA0, dword_555FC8);
        dword_555FC8 += dword_5A7CA0;
        v21 = 3 * v18 + dword_553438;
        do
        {
          v22 = *v19 & 0xFFFFFF;
          if ( v22 != 0 )
          {
            v23 = (unsigned int)dword_554484 >> 12;
            v35 = v20;
            dword_554484 += dword_55448C;
            v24 = v22;
            v25 = dword_553420;
            v26 = dword_55446C;
            *(_BYTE *)v21 = *(_BYTE *)((*(_DWORD *)(v21 - 1) & 0xFF00)
                                     + dword_554490
                                     + (unsigned __int8)*(int *)((char *)&dword_46AF78
                                                               + ((unsigned __int8)v22 >> 2)
                                                               + (v23 & 0xFC0)));
            dword_55446C = v26 + v25;
            v27 = *(_BYTE *)((unsigned __int8)*(int *)((char *)&dword_46AF78
                                                     + ((v26 >> 12) & 0xFC0)
                                                     + ((unsigned __int16)v22 >> 10))
                           + (*(_DWORD *)v21 & 0xFF00)
                           + dword_554490);
            v28 = dword_554488 + dword_55342C;
            v29 = dword_554490;
            v30 = ((unsigned int)dword_554488 >> 12) & 0xFC0;
            *(_BYTE *)(v21 + 1) = v27;
            v31 = *(_DWORD *)(v21 + 2);
            dword_554488 = v28;
            v32 = (unsigned __int8)*(int *)((char *)&dword_46AF78 + ((v24 >> 18) & 0x3F) + v30);
            v20 = v35;
            LOBYTE(v31) = *(_BYTE *)((unsigned __int16)((_WORD)v31 << 8) + v29 + v32);
            v33 = (unsigned int)dword_553428;
            *(_BYTE *)(v21 + 2) = v31;
            v21 += 3;
          }
          else
          {
            dword_554488 += dword_55342C;
            v33 = (unsigned int)dword_553428;
            dword_55446C += dword_553420;
            v21 += 3;
            dword_554484 += dword_55342C;
          }
          dword_553428 = dword_5546A8 + v33;
          v34 = __PAIR64__(dword_553414[v20], dword_5546A8) + v33;
          v20 = -__CFADD__(dword_5A7CA0, dword_555FC8);
          dword_555FC8 += dword_5A7CA0;
          v19 = (_DWORD *)((char *)v19 + 3 * HIDWORD(v34));
          v5 = dword_55343C-- <= 1;
        }
        while ( !v5 );
        v2 = v36;
      }
      v2 = (_DWORD *)*v2;
    }
    while ( (int)v2 > 0 );
    result = dword_554468 + 1;
  }
  while ( dword_554468 + 1 < dword_555FCC );
  return result;
}

// 0x419e80  sub_419E80
int sub_419E80()
{
  int *v0; // eax
  int v1; // edi
  int v2; // edx
  int v3; // ebx
  int v4; // esi
  double v5; // st7
  char v7; // c0
  double v8; // st6
  double v9; // st6
  double v11; // st5
  char v12; // c3
  double v13; // st4
  double v14; // st3
  int v15; // esi
  int v16; // ebx
  double v17; // st3
  int v18; // eax
  signed int v19; // edi
  int v20; // ebp
  signed int v21; // ebx
  int v22; // ecx
  int v23; // eax
  int result; // eax
  signed int v25; // ecx
  int v26; // edx
  int v27; // eax
  float v28; // [esp+10h] [ebp-24h]
  int v29; // [esp+10h] [ebp-24h]
  int v30; // [esp+10h] [ebp-24h]
  float v31; // [esp+14h] [ebp-20h]
  float v32; // [esp+18h] [ebp-1Ch]
  float v33; // [esp+1Ch] [ebp-18h]
  float v34; // [esp+20h] [ebp-14h]
  int v35; // [esp+20h] [ebp-14h]
  float v36; // [esp+24h] [ebp-10h]
  float v37; // [esp+28h] [ebp-Ch]
  signed int i; // [esp+28h] [ebp-Ch]
  float v39; // [esp+2Ch] [ebp-8h]
  float v40; // [esp+2Ch] [ebp-8h]
  signed int v41; // [esp+2Ch] [ebp-8h]
  float v42; // [esp+30h] [ebp-4h]
  int v43; // [esp+30h] [ebp-4h]

  v0 = *((int **)off_46AF70 + 8);
  v1 = *v0;
  v2 = **((_DWORD **)off_46AF70 + 14);
  v3 = v0[1];
  v4 = *(_DWORD *)(*((_DWORD *)off_46AF70 + 20) + 4);
  v33 = (float)*v0;
  v32 = v33;
  v5 = (double)v4;
  v34 = (float)v2;
  v37 = (float)v3;
  v28 = v34;
  v36 = v5;
  v31 = v37;
  if ( v7 != 0 )
    v32 = 0.0;
  if ( v37 < 0.0 )
    v31 = 0.0;
  v8 = (double)(unsigned __int16)dword_4EFB4C;
  if ( v34 > v8 )
    v28 = v8;
  v39 = (float)HIWORD(dword_4EFB4C);
  if ( v5 > v39 )
    v5 = v39;
  v9 = *((float *)off_46AF70 + 22);
  v40 = *((float *)off_46AF70 + 9);
  v11 = *((float *)off_46AF70 + 10);
  v42 = *((float *)off_46AF70 + 15);
  if ( v12 != 0 )
    v13 = v40;
  else
    v13 = (v32 - v33) * (*((float *)off_46AF70 + 15) - *((float *)off_46AF70 + 9)) / (double)(v2 - v1) + v40;
  if ( v28 == v34 )
    v14 = v42;
  else
    v14 = v42 - (v34 - v28) * (*((float *)off_46AF70 + 15) - *((float *)off_46AF70 + 9)) / (double)(v2 - v1);
  if ( v5 != v36 )
    v9 = v9 + (v36 - v5) * (*((float *)off_46AF70 + 10) - *((float *)off_46AF70 + 22)) / (double)(v4 - v3);
  if ( v31 != v37 )
    v11 = v11 - (v31 - v37) * (*((float *)off_46AF70 + 10) - *((float *)off_46AF70 + 22)) / (double)(v4 - v3);
  v15 = dword_553450 + 2 * ((__int64)v32 + dword_553460[(__int64)v31]) + (__int64)v32 + dword_553460[(__int64)v31];
  v16 = (__int64)((double)(int)(__int64)v28 - v32);
  v17 = v14 - v13;
  if ( v16 != 0 )
    v18 = (int)((unsigned int)(__int64)v17 << 16) / v16;
  else
    v18 = (unsigned int)(__int64)v17 << 16;
  v43 = v18;
  v19 = ((unsigned int)(__int64)v13 << 16) + v18 * v16;
  v20 = dword_46AF6C - v16;
  v35 = dword_46AF6C - v16;
  v29 = (__int64)((double)(int)(__int64)v11 - v9);
  v21 = (v29 + (unsigned int)(__int64)v9) << 16;
  v41 = v21;
  v22 = (__int64)((double)(int)(__int64)v5 - v31);
  if ( v22 != 0 )
    v23 = (v29 << 16) / v22;
  else
    v23 = v29 << 16;
  v30 = v23;
  result = v21 - v22 * v23;
  for ( i = result; v21 > i; v41 = v21 )
  {
    v25 = (unsigned int)(__int64)v13 << 16;
    v26 = dword_565FE8 * (v21 >> 16);
    if ( v25 < v19 )
    {
      do
      {
        v27 = dword_55340C + 2 * (v26 + (v25 >> 16)) + v26 + (v25 >> 16);
        if ( (*(_DWORD *)v27 & 0xFFFFFF) != 0 )
        {
          *(_WORD *)v15 = *(_WORD *)v27;
          *(_BYTE *)(v15 + 2) = *(_BYTE *)(v27 + 2);
          v21 = v41;
        }
        v15 += 3;
        v25 += v43;
      }
      while ( v25 < v19 );
      v20 = v35;
    }
    result = i;
    v15 += v20 + 2 * v20;
    v21 -= v30;
  }
  return result;
}

// 0x41a1c0  sub_41A1C0
int sub_41A1C0()
{
  char *v0; // ebx
  int *v1; // eax
  int v2; // esi
  int v3; // ecx
  int v4; // edi
  int v5; // edx
  double v6; // st7
  char v8; // c0
  double v9; // st6
  double v10; // st6
  double v12; // st5
  char v13; // c3
  double v14; // st4
  double v15; // st3
  unsigned __int8 *v16; // esi
  int v17; // edi
  double v18; // st3
  int v19; // eax
  int v20; // edi
  signed int v21; // ebp
  int v22; // ecx
  int v23; // edi
  int v24; // edi
  int result; // eax
  signed int v26; // ecx
  int v27; // edi
  int v28; // edx
  int v29; // eax
  float v30; // [esp+10h] [ebp-28h]
  float v31; // [esp+14h] [ebp-24h]
  float v32; // [esp+18h] [ebp-20h]
  signed int i; // [esp+18h] [ebp-20h]
  float v34; // [esp+1Ch] [ebp-1Ch]
  int v35; // [esp+1Ch] [ebp-1Ch]
  float v36; // [esp+20h] [ebp-18h]
  float v37; // [esp+24h] [ebp-14h]
  int v38; // [esp+24h] [ebp-14h]
  float v39; // [esp+28h] [ebp-10h]
  int v40; // [esp+28h] [ebp-10h]
  char *v41; // [esp+2Ch] [ebp-Ch]
  float v42; // [esp+30h] [ebp-8h]
  float v43; // [esp+30h] [ebp-8h]
  signed int v44; // [esp+30h] [ebp-8h]
  float v45; // [esp+34h] [ebp-4h]
  signed int v46; // [esp+34h] [ebp-4h]

  v0 = (char *)off_46AF70;
  v1 = *((int **)off_46AF70 + 8);
  v2 = *v1;
  v3 = **((_DWORD **)off_46AF70 + 14);
  v4 = v1[1];
  v5 = *(_DWORD *)(*((_DWORD *)off_46AF70 + 20) + 4);
  v34 = (float)*v1;
  v32 = v34;
  v6 = (double)v5;
  v36 = (float)v3;
  v41 = (char *)off_46AF70;
  v39 = (float)v4;
  v31 = v36;
  v37 = v6;
  v30 = v39;
  if ( v8 != 0 )
    v32 = 0.0;
  if ( v39 < 0.0 )
    v30 = 0.0;
  v9 = (double)(unsigned __int16)dword_4EFB4C;
  if ( v36 > v9 )
    v31 = v9;
  v42 = (float)HIWORD(dword_4EFB4C);
  if ( v6 > v42 )
    v6 = v42;
  v10 = *((float *)off_46AF70 + 22);
  v43 = *((float *)off_46AF70 + 9);
  v12 = *((float *)off_46AF70 + 10);
  v45 = *((float *)off_46AF70 + 15);
  if ( v13 != 0 )
    v14 = v43;
  else
    v14 = (v32 - v34) * (*((float *)off_46AF70 + 15) - *((float *)off_46AF70 + 9)) / (double)(v3 - v2) + v43;
  if ( v31 == v36 )
    v15 = v45;
  else
    v15 = v45 - (v36 - v31) * (*((float *)off_46AF70 + 15) - *((float *)off_46AF70 + 9)) / (double)(v3 - v2);
  if ( v6 != v37 )
    v10 = v10 + (v37 - v6) * (*((float *)off_46AF70 + 10) - *((float *)off_46AF70 + 22)) / (double)(v5 - v4);
  if ( v30 != v39 )
    v12 = v12 - (v30 - v39) * (*((float *)off_46AF70 + 10) - *((float *)off_46AF70 + 22)) / (double)(v5 - v4);
  v16 = (unsigned __int8 *)(dword_553450
                          + 2 * ((__int64)v32 + dword_553460[(__int64)v30])
                          + (__int64)v32
                          + dword_553460[(__int64)v30]);
  v17 = (__int64)((double)(int)(__int64)v31 - v32);
  v18 = v15 - v14;
  if ( v17 != 0 )
    v19 = (int)((unsigned int)(__int64)v18 << 16) / v17;
  else
    v19 = (unsigned int)(__int64)v18 << 16;
  v40 = v19;
  v46 = ((unsigned int)(__int64)v14 << 16) + v19 * v17;
  v35 = dword_46AF6C - v17;
  v20 = (__int64)((double)(int)(__int64)v12 - v10);
  v21 = (v20 + (unsigned int)(__int64)v10) << 16;
  v44 = v21;
  v22 = (__int64)((double)(int)(__int64)v6 - v30);
  if ( v22 != 0 )
  {
    v38 = (v20 << 16) / v22;
    v23 = v38;
  }
  else
  {
    v23 = v20 << 16;
    v38 = v23;
  }
  v24 = v22 * v23;
  result = v21 - v24;
  for ( i = v21 - v24; v21 > i; v44 = v21 )
  {
    v26 = (unsigned int)(__int64)v14 << 16;
    v27 = dword_565FE8 * (v21 >> 16);
    if ( v26 < v46 )
    {
      v28 = dword_55340C;
      do
      {
        v29 = 3 * (v27 + (v26 >> 16));
        if ( (*(_DWORD *)(v28 + v29) & 0xFFFFFF) != 0 )
        {
          v16[2] = *(_BYTE *)((v16[2] << 8) + dword_554470[v0[12]] + *(unsigned __int8 *)(v28 + v29 + 2));
          v16[1] = *(_BYTE *)(*(unsigned __int8 *)(dword_55340C + v29 + 1) + dword_554470[v41[12]] + (v16[1] << 8));
          v21 = v44;
          v0 = v41;
          *v16 = *(_BYTE *)(*(unsigned __int8 *)(dword_55340C + v29) + dword_554470[v41[12]] + (*v16 << 8));
          v28 = dword_55340C;
        }
        v16 += 3;
        v26 += v40;
      }
      while ( v26 < v46 );
    }
    v16 += 2 * v35 + v35;
    result = i;
    v21 -= v38;
  }
  return result;
}

// 0x41a590  sub_41A590
FILE *__cdecl sub_41A590(char *Str, int a2)
{
  FILE *result; // eax
  FILE *v3; // esi
  int v4; // ebp
  _BYTE *v5; // edi
  int v6; // eax
  char v7; // al
  int v8; // eax
  char v9; // al
  int v10; // eax
  char v11; // al
  int v12; // eax

  result = FsFOpen(/*FileName*/ Str, /*Mode*/ aRb);
  v3 = result;
  if ( result != NULL
    && (strstr(Str, /*SubStr*/ dword_46AEDC) != NULL || (result = (FILE *)strstr(Str, /*SubStr*/ aBmp)) != NULL) )
  {
    fseek(/*Stream*/ v3, /*Offset*/ 54, /*Origin*/ 0);
    v4 = 256;
    v5 = (_BYTE *)(a2 + 2);
    do
    {
      v6 = v3->_cnt - 1;
      v3->_cnt = v6;
      if ( v6 < 0 )
        v7 = _filbuf(/*File*/ v3);
      else
        v7 = *v3->_ptr++;
      *(v5 - 2) = v7;
      v8 = v3->_cnt - 1;
      v3->_cnt = v8;
      if ( v8 < 0 )
        v9 = _filbuf(/*File*/ v3);
      else
        v9 = *v3->_ptr++;
      *(v5 - 1) = v9;
      v10 = v3->_cnt - 1;
      v3->_cnt = v10;
      if ( v10 < 0 )
        v11 = _filbuf(/*File*/ v3);
      else
        v11 = *v3->_ptr++;
      *v5 = v11;
      v5[1] = -1;
      v12 = v3->_cnt - 1;
      v3->_cnt = v12;
      if ( v12 < 0 )
        _filbuf(/*File*/ v3);
      else
        ++v3->_ptr;
      v5 += 4;
      --v4;
    }
    while ( v4 != 0 );
    return (FILE *)fclose(/*Stream*/ v3);
  }
  return result;
}

// 0x41a680  sub_41A680
int __cdecl sub_41A680(int a1)
{
  int result; // eax

  result = a1;
  dword_565FE4 = (int)sub_41B2F0;
  dword_555FC0 = (int)sub_41A7B0;
  dword_553404 = (int)sub_41A830;
  dword_554464 = (int)sub_41A750;
  dword_565FE0 = sub_41A780;
  if ( a1 != 0 )
  {
    dword_5546A4 = sub_41ACD0;
    dword_5546AC = sub_41AD60;
    dword_553440 = sub_41ADB0;
    dword_553408 = sub_41A970;
    dword_553444 = (int (__cdecl *)(_DWORD))sub_41AE80;
    dword_555FC4 = sub_41AC70;
    dword_5546B0 = (int)sub_41AE10;
  }
  else
  {
    dword_5546A4 = sub_41C870;
    dword_5546AC = PadSetAct;
    dword_553440 = sub_41C880;
    dword_553408 = sub_41AF40;
    dword_553444 = (int (__cdecl *)(_DWORD))sub_41B190;
    dword_555FC4 = (int (*)(void))sub_417340;
    dword_5546B0 = (int)sub_41B140;
  }
  return result;
}

// 0x41a750  sub_41A750
unsigned int __cdecl sub_41A750(int a1, int a2, int a3)
{
  int v3; // eax
  unsigned int result; // eax

  v3 = a2;
  LOBYTE(v3) = a2 & 0xF8;
  result = (a1 >> 3) | (4 * ((32 * (a3 & 0xFFFFFFF8)) | v3));
  dword_553424 = *((unsigned __int8 *)off_46AEC0 + result);
  return result;
}

// 0x41a780  sub_41A780
unsigned int __cdecl sub_41A780(int a1, int a2, int a3)
{
  int v3; // eax
  unsigned int result; // eax

  v3 = a2;
  LOBYTE(v3) = a2 & 0xF8;
  result = (a1 >> 3) | (4 * ((32 * (a3 & 0xFFFFFFF8)) | v3));
  dword_5F84E0 = *((unsigned __int8 *)off_46AEC0 + result);
  return result;
}

// 0x41a7b0  sub_41A7B0
void *sub_41A7B0()
{
  void *result; // eax

  sub_41A590(/*Str*/ aDataDefaultBmp, (int)byte_5A7CC0);
  sub_420970(/*FileName*/ aDataDefaultBmp, /*Buffer*/ &unk_5A84E0);
  dword_5A80C0[0] = (int)off_46AEC4;
  result = off_46AED0;
  dword_5A80C4 = (int)off_46AEC8;
  dword_5A80C8 = (int)off_46AECC;
  dword_5A80CC = (int)off_46AED0;
  *(_BYTE *)off_46AEC0 = 0;
  dword_5F84E4 = dword_5A80C4;
  dword_553424 = 78;
  dword_4B1C48 = 1;
  return result;
}

// 0x41a830  sub_41A830
void *__cdecl sub_41A830(const char *a1)
{
  FILE *v1; // eax
  char *v2; // eax
  void *result; // eax
  char Str[256]; // [esp+8h] [ebp-100h] BYREF

  v1 = NULL;
  if ( *a1 != 0 )
  {
    strcpy(Str, a1);
    v2 = strstr(Str, /*SubStr*/ aB_0);
    if ( v2 == NULL )
      v2 = strstr(Str, /*SubStr*/ aB);
    strcpy(v2, ".bmp");
    v1 = FsFOpen(/*FileName*/ Str, /*Mode*/ aRb);
  }
  if ( v1 != NULL )
  {
    fclose(/*Stream*/ v1);
    sub_41A590(Str, (int)&byte_5A7CC0);
    sub_420970(/*FileName*/ Str, /*Buffer*/ &unk_5A84E0);
  }
  else
  {
    sub_41A590(/*Str*/ aDataDefaultBmp, (int)&byte_5A7CC0);
    sub_420970(/*FileName*/ aDataDefaultBmp, /*Buffer*/ &unk_5A84E0);
  }
  dword_5A80C0 = (int)off_46AEC4;
  result = off_46AED0;
  dword_5A80C4 = (int)off_46AEC8;
  dword_5A80C8 = (int)off_46AECC;
  dword_5A80CC = (int)off_46AED0;
  *(_BYTE *)off_46AEC0 = 0;
  dword_5F84E4 = dword_5A80C4;
  dword_553424 = 0;
  dword_4B1C48 = 1;
  return result;
}
