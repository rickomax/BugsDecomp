// Module `unk_409e90`.
//
// Reconstructed from Bugs.exe (PC v1.0) by tools/recon.py.
// Generated file -- do not edit by hand; see recon/README.md.
//
// Address range: 0x409e90 - 0x40cce0 (21 functions).

#include "bugs.h"


// 0x409e90  sub_409E90
int sub_409E90()
{
  FILE *v0; // eax
  FILE *v1; // esi
  char v3; // [esp+4h] [ebp-154h] BYREF
  char Str[80]; // [esp+8h] [ebp-150h] BYREF
  char FileName[256]; // [esp+58h] [ebp-100h] BYREF

  strcpy(FileName, "..\\bin\\bugs.ini");
  v0 = FsFOpen(FileName, /*Mode*/ aRt);
  v1 = v0;
  if ( v0 == NULL )
    return 0;
  rewind(/*Stream*/ v0);
  if ( (v1->_flag & 0x10) == 0 )
  {
    while ( fgets(/*Buffer*/ Str, /*MaxCount*/ 80, /*Stream*/ v1) != NULL
         && strstr(Str, /*SubStr*/ aLanguage) == NULL
         && (v1->_flag & 0x10) == 0 )
      ;
  }
  sscanf(/*Buffer*/ Str, /*Format*/ "Language=%i", &v3);
  rewind(/*Stream*/ v1);
  if ( (v1->_flag & 0x10) == 0 )
  {
    while ( fgets(/*Buffer*/ Str, /*MaxCount*/ 80, /*Stream*/ v1) != NULL
         && strstr(Str, /*SubStr*/ aFirsttime) == NULL
         && (v1->_flag & 0x10) == 0 )
      ;
  }
  sscanf(/*Buffer*/ Str, /*Format*/ "FirstTime=%i", &v3);
  byte_4B1A31 = v3;
  fclose(/*Stream*/ v1);
  return 1;
}

// 0x409fc0  sub_409FC0
int sub_409FC0()
{
  FILE *v0; // eax
  FILE *v1; // esi
  size_t v2; // edi
  char *v3; // eax
  char FileName[4096]; // [esp+8h] [ebp-2000h] BYREF
  char Buffer[4096]; // [esp+1008h] [ebp-1000h] BYREF

  memset(Buffer, 0, sizeof(Buffer));
  strcpy(FileName, "..\\bin\\bugs.ini");
  v0 = FsFOpen(FileName, /*Mode*/ aR);
  v1 = v0;
  if ( v0 == NULL )
    return 0;
  rewind(/*Stream*/ v0);
  v2 = fread(Buffer, /*ElementSize*/ 1u, /*ElementCount*/ 0x1000u, /*Stream*/ v1);
  if ( v2 != 0 )
  {
    v3 = strstr(/*Str*/ Buffer, /*SubStr*/ aFirsttime_0);
    if ( v3 != NULL )
      v3[10] = (byte_4B1A31 != 0) + 48;
    rewind(/*Stream*/ v1);
    fwrite(Buffer, /*ElementSize*/ v2, /*ElementCount*/ 1u, /*Stream*/ v1);
  }
  fclose(/*Stream*/ v1);
  return 1;
}

// 0x40a0b0  sub_40A0B0
int __cdecl sub_40A0B0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // eax
  _DWORD *i; // ebx
  int v5; // eax
  _DWORD *j; // ebx
  int v7; // ecx
  int v9; // edi
  int v10; // esi

  v3 = a1;
  for ( i = a3; v3 != NULL; ++i )
  {
    if ( *v3 == dword_7C6248 )
      break;
    *i = v3;
    v3 = (_DWORD *)v3[18];
  }
  v5 = *(i - 1);
  for ( j = i - 1; v5 != 0; --j )
  {
    if ( j < a3 )
      break;
    v7 = *(_DWORD *)(v5 + 72);
    *(_DWORD *)v5 = dword_7C6248;
    if ( v7 != 0 )
      CompMatrixLV((__int16 *)(*(_DWORD *)(v5 + 72) + 36), (__int16 *)(v5 + 4), v5 + 36);
    else
      qmemcpy((void *)(v5 + 36), (const void *)(v5 + 4), 0x20u);
    v5 = *(j - 1);
  }
  if ( a1[9] == 0 && a1[10] == 0 && a1[11] == 0 && a1[12] == 0 && BYTE1(a1[13]) == 0 )
    return 0;
  qmemcpy(a2, a1 + 9, 0x20u);
  v9 = a2[6];
  v10 = a2[7];
  a2[5] += dword_4EFB20;
  a2[6] = dword_4EFB24 + v9;
  a2[7] = dword_4EFB28 + v10;
  CompMatrix2LV(&word_4EFAE0, (__int16 *)a2);
  return 1;
}

// 0x40a1b0  sub_40A1B0
int __cdecl sub_40A1B0(_DWORD *a1, void *a2)
{
  int v2; // ecx
  _DWORD *v3; // ebx
  _DWORD *i; // eax
  int result; // eax
  _DWORD *v6; // ebx
  _DWORD v7[50]; // [esp+10h] [ebp-C8h] BYREF

  v2 = dword_7C6248;
  v3 = v7;
  for ( i = a1; i != NULL; ++v3 )
  {
    if ( *i == v2 )
      break;
    *v3 = i;
    i = (_DWORD *)i[18];
  }
  result = *(v3 - 1);
  v6 = v3 - 1;
  if ( result != 0 )
  {
    while ( v6 >= v7 )
    {
      *(_DWORD *)result = v2;
      if ( *(_DWORD *)(result + 72) != 0 )
        CompMatrixLV((__int16 *)(*(_DWORD *)(result + 72) + 36), (__int16 *)(result + 4), result + 36);
      else
        qmemcpy((void *)(result + 36), (const void *)(result + 4), 0x20u);
      result = *--v6;
      if ( result == 0 )
        break;
      v2 = dword_7C6248;
    }
  }
  qmemcpy(a2, a1 + 9, 0x20u);
  return result;
}

// 0x40a250  sub_40A250
int __cdecl sub_40A250(int a1)
{
  char *v1; // ebp
  char *v2; // eax
  int result; // eax
  __int16 v4; // ax
  int v5; // eax
  int *v6; // eax
  int v7; // eax
  int v8; // eax
  int *i; // ebx
  __int16 v10; // ax
  _DWORD *v11; // [esp+4h] [ebp-4h]

  dword_7C6248 = GetTickCount();
  v1 = (char *)dword_4EFAC0;
  v11 = (char *)dword_4EFAC0 + 288;
  v2 = (char *)dword_4EFAC0 + 96;
  *((_DWORD *)dword_4EFAC0 + 20) = 0x40000000;
  *((_DWORD *)v1 + 21) = v2;
  result = a1;
  *((_DWORD *)v1 + 42) = 0;
  *((_DWORD *)v1 + 43) = 0;
  *((_WORD *)v1 + 142) = -1;
  *(_WORD *)v1 = 0;
  for ( *((_DWORD *)v1 + 63) = a1; result != 0; *((_DWORD *)v1 + 63) = result )
  {
    v4 = *(_WORD *)(*((_DWORD *)v1 + 63) + 38);
    if ( *((_WORD *)v1 + 142) != v4 )
    {
      *((_WORD *)v1 + 142) = v4;
      v5 = *(_DWORD *)(dword_4B39B4 + 244);
      *((_DWORD *)v1 + 64) = v5;
      if ( v5 != 0 )
      {
        do
        {
          v6 = *((int **)v1 + 64);
          if ( v6[1] == *(__int16 *)(*((_DWORD *)v1 + 63) + 38) )
            break;
          v7 = *v6;
          *((_DWORD *)v1 + 64) = v7;
        }
        while ( v7 != 0 );
      }
      v8 = *((_DWORD *)v1 + 64);
      if ( v8 != 0 )
        sub_407950(v8 + 32, (int)&word_52FD20);
    }
    for ( i = *(int **)(*((_DWORD *)v1 + 63) + 120); i != NULL; i = (int *)*i )
    {
      v10 = *((_WORD *)i + 4);
      if ( (v10 & 6) != 0 )
      {
        if ( sub_40A0B0((_DWORD *)i[4], (_DWORD *)v1 + 1, v11) != 0 && *((char *)i + 9) >= 0 )
        {
          qmemcpy(i + 37, v1 + 4, 0x20u);
          *((_BYTE *)i + 180) = 1;
        }
        else
        {
          *((_BYTE *)i + 180) = 0;
        }
      }
      else if ( (v10 & 0x80u) == 0 )
      {
        if ( (v10 & 0x100) != 0 )
        {
          *((_WORD *)v1 + 130) = *(_WORD *)(*(_DWORD *)(i[4] + 68) + 16);
          *((_WORD *)v1 + 131) = *(_WORD *)(*(_DWORD *)(i[4] + 68) + 18);
          *((_WORD *)v1 + 132) = *(_WORD *)(*(_DWORD *)(i[4] + 68) + 20);
          RotMatrix((__int16 *)v1 + 130, (_WORD *)v1 + 2);
          *((_WORD *)v1 + 130) = 0;
          *((_WORD *)v1 + 131) = 0;
          *((_WORD *)v1 + 132) = -4096;
          gte_ApplyMatrix((__int16 *)v1 + 2, (__int16 *)v1 + 130, (int *)v1 + 67);
          word_52FD26 = *((_WORD *)v1 + 134);
          word_52FD28 = *((_WORD *)v1 + 136);
          word_52FD2A = *((_WORD *)v1 + 138);
        }
        else if ( (v10 & 0x200) != 0 )
        {
          *((_WORD *)v1 + 130) = *(_WORD *)(*(_DWORD *)(i[4] + 68) + 16);
          *((_WORD *)v1 + 131) = *(_WORD *)(*(_DWORD *)(i[4] + 68) + 18);
          *((_WORD *)v1 + 132) = *(_WORD *)(*(_DWORD *)(i[4] + 68) + 20);
          RotMatrix((__int16 *)v1 + 130, (_WORD *)v1 + 2);
          *((_WORD *)v1 + 130) = 0;
          *((_WORD *)v1 + 131) = 0;
          *((_WORD *)v1 + 132) = -4096;
          gte_ApplyMatrix((__int16 *)v1 + 2, (__int16 *)v1 + 130, (int *)v1 + 67);
          word_52FD2C = *((_WORD *)v1 + 134);
          word_52FD2E = *((_WORD *)v1 + 136);
          word_52FD30 = *((_WORD *)v1 + 138);
          *((_WORD *)v1 + 142) = -1;
        }
      }
      else
      {
        *((_WORD *)v1 + 130) = *(_WORD *)(*(_DWORD *)(i[4] + 68) + 16);
        *((_WORD *)v1 + 131) = *(_WORD *)(*(_DWORD *)(i[4] + 68) + 18);
        *((_WORD *)v1 + 132) = *(_WORD *)(*(_DWORD *)(i[4] + 68) + 20);
        RotMatrix((__int16 *)v1 + 130, (_WORD *)v1 + 2);
        *((_WORD *)v1 + 130) = 0;
        *((_WORD *)v1 + 131) = 0;
        *((_WORD *)v1 + 132) = -4096;
        gte_ApplyMatrix((__int16 *)v1 + 2, (__int16 *)v1 + 130, (int *)v1 + 67);
        word_52FD20 = *((_WORD *)v1 + 134);
        word_52FD22 = *((_WORD *)v1 + 136);
        word_52FD24 = *((_WORD *)v1 + 138);
      }
    }
    result = *(_DWORD *)(*((_DWORD *)v1 + 63) + 16);
  }
  return result;
}

// 0x40a590  sub_40A590
__int16 __cdecl sub_40A590(int a1)
{
  int *v1; // eax
  __int16 v2; // cx
  int v3; // ecx
  _DWORD *j; // ebp
  _DWORD *v5; // ebx
  _DWORD *v6; // eax
  int v7; // eax
  _DWORD *v8; // ebx
  int *v10; // [esp+0h] [ebp-100h]
  int i; // [esp+4h] [ebp-FCh]
  int v12; // [esp+8h] [ebp-F8h] BYREF
  int v13; // [esp+Ch] [ebp-F4h]
  int v14; // [esp+10h] [ebp-F0h]
  _DWORD v15[8]; // [esp+18h] [ebp-E8h] BYREF
  _DWORD v16[50]; // [esp+38h] [ebp-C8h] BYREF

  for ( i = a1; i != 0; i = *(_DWORD *)(i + 16) )
  {
    v1 = *(int **)(i + 120);
    v10 = v1;
    if ( v1 != NULL )
    {
      while ( 1 )
      {
        v2 = *((_WORD *)v1 + 4);
        if ( v2 >= 0 && (v2 & 0x40) != 0 )
        {
          BYTE1(dword_4B3940) |= 1u;
          v3 = dword_7C6248;
          v12 = 0;
          v13 = 0;
          v14 = 1000;
          v5 = v16;
          v6 = (_DWORD *)v1[4];
          for ( j = v6; v6 != NULL; ++v5 )
          {
            if ( *v6 == v3 )
              break;
            *v5 = v6;
            v6 = (_DWORD *)v6[18];
          }
          v7 = *(v5 - 1);
          v8 = v5 - 1;
          if ( v7 != 0 )
          {
            while ( v8 >= v16 )
            {
              *(_DWORD *)v7 = v3;
              if ( *(_DWORD *)(v7 + 72) != 0 )
                CompMatrixLV((__int16 *)(*(_DWORD *)(v7 + 72) + 36), (__int16 *)(v7 + 4), v7 + 36);
              else
                qmemcpy((void *)(v7 + 36), (const void *)(v7 + 4), 0x20u);
              v7 = *--v8;
              if ( v7 == 0 )
                break;
              v3 = dword_7C6248;
            }
          }
          qmemcpy(v15, j + 9, sizeof(v15));
          dword_4B38C0 = v15[5];
          dword_4B38C4 = v15[6];
          dword_4B38C8 = v15[7];
          ApplyMatrixLV((__int16 *)v15, &v12, &v12);
          dword_4B38CC = dword_4B38C0 + v12;
          dword_4B38D0 = dword_4B38C4 + v13;
          v1 = v10;
          dword_4B38D4 = dword_4B38C8 + v14;
        }
        v10 = (int *)*v1;
        if ( *v1 == 0 )
          break;
        v1 = (int *)*v1;
      }
    }
  }
  return 1;
}

// 0x40a720  sub_40A720
int __cdecl sub_40A720(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, char a9, int a10, char a11)
{
  double v11; // st7
  int v12; // esi
  char *v13; // edx
  int v14; // ecx
  int result; // eax

  if ( (a11 & 0x10) != 0 )
    v11 = (double)(-2 - dword_4EFB3C);
  else
    v11 = (double)-*(_DWORD *)(*(_DWORD *)(a10 + 52) + 212);
  v12 = dword_4E5E40;
  dword_52FBA0 = dword_4EFB8C;
  if ( (a9 & 8) != 0 )
  {
    *(_DWORD *)(dword_4EFB8C + 52) = dword_467730[(BYTE2(a4) >> 5) & 3];
    *(_DWORD *)(dword_52FBA0 + 16) = dword_4E7DCC[4 * HIWORD(a2)];
    dword_4E7DCC[4 * HIWORD(a2)] = dword_52FBA0;
    if ( *(_WORD *)(*(_DWORD *)(a10 + 52) + 44) == 21 )
      word_621620[HIWORD(a2)] = 4;
    else
      word_621620[HIWORD(a2)] = 1;
  }
  else
  {
    *(_DWORD *)(dword_4EFB8C + 16) = dword_4E7DC4[4 * HIWORD(a2)];
    dword_4E7DC4[4 * HIWORD(a2)] = dword_4EFB8C;
    word_622600[HIWORD(a2)] = 1;
  }
  *(float *)(dword_52FBA0 + 20) = flt_467F50;
  *(float *)(dword_52FBA0 + 24) = flt_46874C;
  *(float *)(dword_52FBA0 + 28) = flt_46834C;
  *(float *)(dword_52FBA0 + 32) = flt_46874C;
  *(float *)(dword_52FBA0 + 36) = flt_467F50;
  *(float *)(dword_52FBA0 + 40) = flt_468350;
  *(float *)(dword_52FBA0 + 44) = flt_46834C;
  *(float *)(dword_52FBA0 + 48) = flt_468350;
  *(_DWORD *)(dword_52FBA0 + 56) = 1065353216;
  *(_DWORD *)(dword_52FBA0 + 60) = 1065353216;
  *(_DWORD *)(dword_52FBA0 + 64) = 1065353216;
  *(_DWORD *)(dword_52FBA0 + 68) = 1065353216;
  *(_DWORD *)(dword_52FBA0 + 72) = 1065353216;
  *(_DWORD *)(dword_52FBA0 + 76) = 1065353216;
  *(_DWORD *)(dword_52FBA0 + 80) = 1065353216;
  *(_DWORD *)(dword_52FBA0 + 84) = 1065353216;
  *(_DWORD *)(dword_52FBA0 + 88) = 1065353216;
  *(_DWORD *)(dword_52FBA0 + 92) = 1065353216;
  *(_DWORD *)(dword_52FBA0 + 96) = 1065353216;
  *(_DWORD *)(dword_52FBA0 + 100) = 1065353216;
  *(_DWORD *)(dword_52FBA0 + 104) = 1065353216;
  *(_DWORD *)(dword_52FBA0 + 108) = 1065353216;
  *(_DWORD *)(dword_52FBA0 + 112) = 1065353216;
  *(_DWORD *)(dword_52FBA0 + 116) = 1065353216;
  v13 = (char *)&unk_6AC260 + 16 * dword_623650++;
  v14 = dword_623654;
  dword_623684 = (int)v13;
  dword_623654 += 4;
  dword_623688 = (int)&unk_734DE0 + 16 * v14;
  *(float *)dword_623688 = (float)((unsigned __int16)dword_4EFB4C * (__int16)a1 / (unsigned __int16)dword_4EFB58);
  *(float *)(dword_623688 + 4) = (float)-(HIWORD(dword_4EFB4C) * SHIWORD(a1) / HIWORD(dword_4EFB58));
  *(float *)(dword_623688 + 8) = v11;
  *(_DWORD *)dword_52FBA0 = dword_623688;
  *(float *)(dword_623688 + 16) = (float)((unsigned __int16)dword_4EFB4C * (__int16)a3 / (unsigned __int16)dword_4EFB58);
  *(float *)(dword_623688 + 20) = (float)-(HIWORD(dword_4EFB4C) * SHIWORD(a3) / HIWORD(dword_4EFB58));
  *(float *)(dword_623688 + 24) = v11;
  *(_DWORD *)(dword_52FBA0 + 4) = dword_623688 + 16;
  *(float *)(dword_623688 + 32) = (float)((unsigned __int16)dword_4EFB4C * (__int16)a5 / (unsigned __int16)dword_4EFB58);
  *(float *)(dword_623688 + 36) = (float)-(HIWORD(dword_4EFB4C) * SHIWORD(a5) / HIWORD(dword_4EFB58));
  *(float *)(dword_623688 + 40) = v11;
  *(_DWORD *)(dword_52FBA0 + 8) = dword_623688 + 32;
  *(float *)(dword_623688 + 48) = (float)((unsigned __int16)dword_4EFB4C * (__int16)a7 / (unsigned __int16)dword_4EFB58);
  *(float *)(dword_623688 + 52) = (float)-(HIWORD(dword_4EFB4C) * SHIWORD(a7) / HIWORD(dword_4EFB58));
  *(float *)(dword_623688 + 56) = v11;
  *(_DWORD *)(dword_52FBA0 + 12) = dword_623688 + 48;
  dword_4E5E40 = v12 + 1;
  result = dword_4EFB8C + 120;
  dword_4EFB8C += 120;
  return result;
}

// 0x40ab50  sub_40AB50
int __cdecl sub_40AB50(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, char a9, int a10, char a11)
{
  int result; // eax
  int v12; // edi
  int v13; // ebp
  int v14; // ebx
  int v15; // eax
  _DWORD *v16; // eax
  int v17; // edi
  int v18; // esi
  int v19; // edx
  int v20; // ebx
  int v21; // edi
  int v22; // esi
  int v23; // edx
  int v24; // ecx
  int v25; // edx
  int v26; // ebx
  int v27; // edi
  int v28; // esi
  int v29; // ebx
  int v30; // edi
  int v31; // esi
  int v32; // edx
  int v33; // [esp+10h] [ebp-14h]
  int v34; // [esp+14h] [ebp-10h]
  int v35; // [esp+18h] [ebp-Ch]
  int v36; // [esp+1Ch] [ebp-8h]
  int v37; // [esp+20h] [ebp-4h]
  int v38; // [esp+50h] [ebp+2Ch]

  result = a10;
  if ( (a11 & 0x10) != 0 )
    v12 = 0;
  else
    v12 = *(_DWORD *)(*(_DWORD *)(a10 + 52) + 212) - *(__int16 *)(a10 + 10);
  if ( v12 >= 0 )
  {
    result = dword_4EFB40 + 200;
    if ( v12 <= dword_4EFB40 + 200 )
    {
      v36 = -(HIWORD(dword_4EFB4C) * SHIWORD(a1) / HIWORD(dword_4EFB58));
      v38 = (unsigned __int16)dword_4EFB4C * (__int16)a3 / (unsigned __int16)dword_4EFB58;
      v33 = -(HIWORD(dword_4EFB4C) * SHIWORD(a3) / HIWORD(dword_4EFB58));
      v34 = (unsigned __int16)dword_4EFB4C * (__int16)a5 / (unsigned __int16)dword_4EFB58;
      v35 = -(HIWORD(dword_4EFB4C) * SHIWORD(a5) / HIWORD(dword_4EFB58));
      v13 = (unsigned __int16)dword_4EFB4C * (__int16)a1 / (unsigned __int16)dword_4EFB58;
      v14 = (unsigned __int16)dword_4EFB4C * (__int16)a7 / (unsigned __int16)dword_4EFB58;
      result = -(HIWORD(dword_4EFB4C) * SHIWORD(a7) / HIWORD(dword_4EFB58));
      if ( (v13 >= dword_7BD964 || v38 >= dword_7BD964 || v34 >= dword_7BD964 || v14 >= dword_7BD964)
        && (v13 <= dword_6225C4 || v38 <= dword_6225C4 || v34 <= dword_6225C4 || v14 <= dword_6225C4)
        && (v36 >= dword_6225C0 || v33 >= dword_6225C0 || v35 >= dword_6225C0 || result >= dword_6225C0)
        && (v36 <= dword_7C6244 || v33 <= dword_7C6244 || v35 <= dword_7C6244 || result <= dword_7C6244) )
      {
        v37 = dword_4E5E40;
        dword_4EFAC8 = dword_4EFB8C;
        *(_DWORD *)dword_4EFB8C = HIWORD(a2);
        *(_DWORD *)(dword_4EFAC8 + 4) = 0;
        *(float *)(dword_4EFAC8 + 36) = flt_467F50;
        *(float *)(dword_4EFAC8 + 40) = flt_46874C;
        *(float *)(dword_4EFAC8 + 60) = flt_46834C;
        *(float *)(dword_4EFAC8 + 64) = flt_46874C;
        *(float *)(dword_4EFAC8 + 84) = flt_467F50;
        *(float *)(dword_4EFAC8 + 88) = flt_468350;
        *(float *)(dword_4EFAC8 + 108) = flt_46834C;
        *(float *)(dword_4EFAC8 + 112) = flt_468350;
        dword_623684 = (int)&unk_6AC260 + 16 * dword_623650++;
        dword_623680 = (int)&unk_6236A0 + 16 * dword_623654;
        dword_623654 += 4;
        *(_DWORD *)dword_623680 = v13;
        *(_DWORD *)(dword_623680 + 4) = v36;
        *(_DWORD *)(dword_623680 + 8) = v12;
        *(_DWORD *)(dword_4EFAC8 + 32) = dword_623680;
        *(_DWORD *)(dword_623680 + 16) = v38;
        *(_DWORD *)(dword_623680 + 20) = v33;
        *(_DWORD *)(dword_623680 + 24) = v12;
        *(_DWORD *)(dword_4EFAC8 + 56) = dword_623680 + 16;
        *(_DWORD *)(dword_623680 + 32) = v34;
        *(_DWORD *)(dword_623680 + 36) = v35;
        *(_DWORD *)(dword_623680 + 40) = v12;
        *(_DWORD *)(dword_4EFAC8 + 80) = dword_623680 + 32;
        *(_DWORD *)(dword_623680 + 48) = v14;
        *(_DWORD *)(dword_623680 + 52) = result;
        *(_DWORD *)(dword_623680 + 56) = v12;
        *(_DWORD *)(dword_4EFAC8 + 104) = dword_623680 + 48;
        if ( (a9 & 8) != 0 )
        {
          *(_BYTE *)(dword_4EFAC8 + 12) = (BYTE2(a4) >> 5) & 3;
          *(_DWORD *)(dword_4EFAC8 + 28) = dword_4EFBA0[v12];
          v15 = dword_4EFAC8;
          dword_4EFBA0[v12] = dword_4EFAC8;
          *(_DWORD *)(v15 + 4) |= 2u;
          if ( *(_WORD *)(*(_DWORD *)(a10 + 52) + 44) == 21 )
            word_621620[HIWORD(a2)] = 4;
          else
            word_621620[HIWORD(a2)] = 1;
          *(_DWORD *)(dword_4EFAC8 + 8) = 20;
          v16 = (_DWORD *)dword_623680;
          if ( *(_DWORD *)dword_623680 < dword_7BD964 )
            goto LABEL_45;
          v17 = *(_DWORD *)(dword_623680 + 16);
          if ( v17 < dword_7BD964 )
            goto LABEL_45;
          v18 = *(_DWORD *)(dword_623680 + 32);
          if ( v18 < dword_7BD964 )
            goto LABEL_45;
          v19 = *(_DWORD *)(dword_623680 + 48);
          if ( v19 < dword_7BD964 )
            goto LABEL_45;
          if ( *(_DWORD *)dword_623680 > dword_6225C4 || v17 > dword_6225C4 || v18 > dword_6225C4 || v19 > dword_6225C4 )
          {
            *(_DWORD *)(dword_4EFAC8 + 8) = 22;
            goto LABEL_63;
          }
          v20 = *(_DWORD *)(dword_623680 + 4);
          if ( v20 < dword_6225C0
            || (v21 = *(_DWORD *)(dword_623680 + 20)) < dword_6225C0
            || (v22 = *(_DWORD *)(dword_623680 + 36)) < dword_6225C0
            || (v23 = *(_DWORD *)(dword_623680 + 52)) < dword_6225C0 )
          {
            *(_DWORD *)(dword_4EFAC8 + 8) = 22;
            goto LABEL_63;
          }
          if ( v20 > dword_7C6244 || v21 > dword_7C6244 || v22 > dword_7C6244 )
          {
LABEL_45:
            *(_DWORD *)(dword_4EFAC8 + 8) = 22;
            goto LABEL_63;
          }
          if ( v23 <= dword_7C6244 )
          {
LABEL_64:
            *v16 += (unsigned __int16)dword_4EFB50;
            *(_DWORD *)(dword_623680 + 4) = HIWORD(dword_4EFB50) - *(_DWORD *)(dword_623680 + 4);
            *(_DWORD *)(dword_623680 + 16) += (unsigned __int16)dword_4EFB50;
            *(_DWORD *)(dword_623680 + 20) = HIWORD(dword_4EFB50) - *(_DWORD *)(dword_623680 + 20);
            *(_DWORD *)(dword_623680 + 32) += (unsigned __int16)dword_4EFB50;
            *(_DWORD *)(dword_623680 + 36) = HIWORD(dword_4EFB50) - *(_DWORD *)(dword_623680 + 36);
            *(_DWORD *)(dword_623680 + 48) += (unsigned __int16)dword_4EFB50;
            *(_DWORD *)(dword_623680 + 52) = HIWORD(dword_4EFB50) - *(_DWORD *)(dword_623680 + 52);
            dword_4E5E40 = v37 + 1;
            result = dword_4EFB8C + 128;
            dword_4EFB8C += 128;
            return result;
          }
          *(_DWORD *)(dword_4EFAC8 + 8) = 22;
        }
        else
        {
          *(_DWORD *)(dword_4EFAC8 + 28) = dword_4EFBA0[v12];
          v24 = dword_4EFB8C;
          word_622600[HIWORD(a2)] = 1;
          v25 = dword_4EFAC8;
          dword_4EFBA0[v12] = v24;
          *(_DWORD *)(v25 + 8) = 16;
          v16 = (_DWORD *)dword_623680;
          if ( *(_DWORD *)dword_623680 >= dword_7BD964 )
          {
            v26 = *(_DWORD *)(dword_623680 + 16);
            if ( v26 >= dword_7BD964 )
            {
              v27 = *(_DWORD *)(dword_623680 + 32);
              if ( v27 >= dword_7BD964 )
              {
                v28 = *(_DWORD *)(dword_623680 + 48);
                if ( v28 >= dword_7BD964 )
                {
                  if ( *(_DWORD *)dword_623680 > dword_6225C4
                    || v26 > dword_6225C4
                    || v27 > dword_6225C4
                    || v28 > dword_6225C4 )
                  {
                    *(_DWORD *)(dword_4EFAC8 + 8) = 18;
                    goto LABEL_63;
                  }
                  v29 = *(_DWORD *)(dword_623680 + 4);
                  if ( v29 < dword_6225C0
                    || (v30 = *(_DWORD *)(dword_623680 + 20)) < dword_6225C0
                    || (v31 = *(_DWORD *)(dword_623680 + 36)) < dword_6225C0
                    || (v32 = *(_DWORD *)(dword_623680 + 52)) < dword_6225C0 )
                  {
                    *(_DWORD *)(dword_4EFAC8 + 8) = 18;
                    goto LABEL_63;
                  }
                  if ( v29 <= dword_7C6244 && v30 <= dword_7C6244 && v31 <= dword_7C6244 && v32 <= dword_7C6244 )
                    goto LABEL_64;
                }
              }
            }
          }
          *(_DWORD *)(dword_4EFAC8 + 8) = 18;
        }
LABEL_63:
        *(_DWORD *)(dword_4EFAC8 + 4) |= 4u;
        v16 = (_DWORD *)dword_623680;
        goto LABEL_64;
      }
    }
  }
  return result;
}

// 0x40b190  sub_40B190
int __cdecl sub_40B190(__int16 *a1)
{
  int v1; // edi
  double v2; // st7
  unsigned __int16 v3; // ax
  int v4; // ebx
  int *v5; // ecx
  int v6; // edx
  float v7; // eax
  double v8; // st5
  double v9; // st6
  int result; // eax
  float v11; // [esp+Ch] [ebp-14h]
  float v12; // [esp+14h] [ebp-Ch]
  int v13; // [esp+18h] [ebp-8h]
  int v14; // [esp+1Ch] [ebp-4h]
  float v15; // [esp+24h] [ebp+4h]
  float v16; // [esp+24h] [ebp+4h]

  v1 = *((_DWORD *)a1 + 8);
  v2 = (double)(int)(__int64)((double)*a1 * flt_4EFB7C);
  v13 = (__int64)((double)(*((unsigned __int8 *)a1 + 4) + 1) * *(float *)&dword_4EFB84 + v2);
  v12 = (float)(int)(__int64)((double)-a1[1] * flt_4EFB80);
  v14 = (__int64)(v12 - (double)(*((unsigned __int8 *)a1 + 5) + 1) * *(float *)&dword_4EFB84);
  dword_52FBA0 = dword_4EFB8C;
  v3 = a1[3];
  v4 = dword_4E5E40;
  v5 = &dword_4E7DC4[4 * v3];
  *(_DWORD *)(dword_4EFB8C + 16) = *v5;
  v6 = dword_52FBA0;
  word_622600[v3] = 1;
  v7 = flt_467F50;
  *v5 = v6;
  *(float *)(v6 + 20) = v7;
  *(float *)(dword_52FBA0 + 24) = flt_46874C;
  *(float *)(dword_52FBA0 + 28) = flt_46834C;
  *(float *)(dword_52FBA0 + 32) = flt_46874C;
  *(float *)(dword_52FBA0 + 36) = flt_467F50;
  *(float *)(dword_52FBA0 + 40) = flt_468350;
  *(float *)(dword_52FBA0 + 44) = flt_46834C;
  *(float *)(dword_52FBA0 + 48) = flt_468350;
  if ( v1 != 0 )
  {
    v8 = (double)(unsigned __int8)v1 * 0.0039215689;
    v15 = (double)BYTE2(v1) * 0.0039215689;
    v11 = (double)BYTE1(v1) * 0.0039215689;
    *(float *)(dword_52FBA0 + 56) = v15;
    *(float *)(dword_52FBA0 + 60) = v11;
    *(float *)(dword_52FBA0 + 64) = v8;
    *(_DWORD *)(dword_52FBA0 + 68) = 1065353216;
    *(float *)(dword_52FBA0 + 72) = v15;
    *(float *)(dword_52FBA0 + 76) = v11;
    *(float *)(dword_52FBA0 + 80) = v8;
    *(_DWORD *)(dword_52FBA0 + 84) = 1065353216;
    *(float *)(dword_52FBA0 + 88) = v15;
    *(float *)(dword_52FBA0 + 92) = v11;
    *(float *)(dword_52FBA0 + 96) = v8;
    *(_DWORD *)(dword_52FBA0 + 100) = 1065353216;
    *(float *)(dword_52FBA0 + 104) = v15;
    *(float *)(dword_52FBA0 + 108) = v11;
    *(float *)(dword_52FBA0 + 112) = v8;
  }
  else
  {
    *(_DWORD *)(dword_52FBA0 + 56) = 1065353216;
    *(_DWORD *)(dword_52FBA0 + 60) = 1065353216;
    *(_DWORD *)(dword_52FBA0 + 64) = 1065353216;
    *(_DWORD *)(dword_52FBA0 + 68) = 1065353216;
    *(_DWORD *)(dword_52FBA0 + 72) = 1065353216;
    *(_DWORD *)(dword_52FBA0 + 76) = 1065353216;
    *(_DWORD *)(dword_52FBA0 + 80) = 1065353216;
    *(_DWORD *)(dword_52FBA0 + 84) = 1065353216;
    *(_DWORD *)(dword_52FBA0 + 88) = 1065353216;
    *(_DWORD *)(dword_52FBA0 + 92) = 1065353216;
    *(_DWORD *)(dword_52FBA0 + 96) = 1065353216;
    *(_DWORD *)(dword_52FBA0 + 100) = 1065353216;
    *(_DWORD *)(dword_52FBA0 + 104) = 1065353216;
    *(_DWORD *)(dword_52FBA0 + 108) = 1065353216;
    *(_DWORD *)(dword_52FBA0 + 112) = 1065353216;
  }
  *(_DWORD *)(dword_52FBA0 + 116) = 1065353216;
  dword_623684 = (int)&unk_6AC260 + 16 * dword_623650++;
  dword_623688 = (int)&unk_734DE0 + 16 * dword_623654;
  dword_623654 += 4;
  *(float *)dword_623688 = v2;
  *(float *)(dword_623688 + 4) = v12;
  v9 = (double)v13;
  *(_DWORD *)(dword_623688 + 8) = 0;
  *(_DWORD *)dword_52FBA0 = dword_623688;
  *(float *)(dword_623688 + 16) = v9;
  *(float *)(dword_623688 + 20) = v12;
  *(_DWORD *)(dword_623688 + 24) = 0;
  *(_DWORD *)(dword_52FBA0 + 4) = dword_623688 + 16;
  *(float *)(dword_623688 + 32) = v2;
  v16 = (float)v14;
  *(float *)(dword_623688 + 36) = v16;
  *(_DWORD *)(dword_623688 + 40) = 0;
  *(_DWORD *)(dword_52FBA0 + 8) = dword_623688 + 32;
  *(float *)(dword_623688 + 48) = v9;
  *(float *)(dword_623688 + 52) = v16;
  *(_DWORD *)(dword_623688 + 56) = 0;
  *(_DWORD *)(dword_52FBA0 + 12) = dword_623688 + 48;
  result = dword_4EFB8C + 120;
  dword_4E5E40 = v4 + 1;
  dword_4EFB8C += 120;
  return result;
}

// 0x40b5b0  sub_40B5B0
int __cdecl sub_40B5B0(__int16 *a1)
{
  int v2; // edi
  int v3; // ebp
  int v4; // ebx
  int v5; // esi
  int result; // eax
  char *v7; // ecx
  _DWORD *v8; // eax
  int v9; // ebp
  int v10; // ebx
  int v11; // edi
  int v12; // ebp
  int v13; // ebx
  int v14; // edi
  int v15; // esi
  int v16; // [esp+10h] [ebp-10h]
  int v17; // [esp+18h] [ebp-8h]
  int v18; // [esp+1Ch] [ebp-4h]
  int v19; // [esp+24h] [ebp+4h]

  v16 = *a1;
  v19 = *((_DWORD *)a1 + 8);
  v18 = (unsigned __int16)a1[3];
  v2 = (__int64)((double)v16 * flt_4EFB7C);
  v3 = (__int64)((double)-a1[1] * flt_4EFB80);
  v4 = (__int64)((double)*((unsigned __int8 *)a1 + 4) * *(float *)&dword_4EFB84 + (double)v2);
  v5 = (__int64)((double)v3 - (double)*((unsigned __int8 *)a1 + 5) * *(float *)&dword_4EFB84);
  result = dword_7BD964;
  if ( v2 >= dword_7BD964 || v4 >= dword_7BD964 )
  {
    result = dword_6225C4;
    if ( v2 <= dword_6225C4 || v4 <= dword_6225C4 )
    {
      result = dword_6225C0;
      if ( v3 >= dword_6225C0 || v5 >= dword_6225C0 )
      {
        result = dword_7C6244;
        if ( v3 <= dword_7C6244 || v5 <= dword_7C6244 )
        {
          v17 = dword_4E5E40;
          dword_4EFAC8 = dword_4EFB8C;
          *(_DWORD *)(dword_4EFB8C + 4) = 0;
          *(_DWORD *)(dword_4EFAC8 + 8) = 0;
          *(_DWORD *)dword_4EFAC8 = v18;
          word_622600[v18] = 1;
          *(_DWORD *)(dword_4EFAC8 + 8) |= 0x10u;
          *(float *)(dword_4EFAC8 + 36) = flt_467F50;
          *(float *)(dword_4EFAC8 + 40) = flt_46874C;
          *(float *)(dword_4EFAC8 + 60) = flt_46834C;
          *(float *)(dword_4EFAC8 + 64) = flt_46874C;
          *(float *)(dword_4EFAC8 + 84) = flt_467F50;
          *(float *)(dword_4EFAC8 + 88) = flt_468350;
          *(float *)(dword_4EFAC8 + 108) = flt_46834C;
          *(float *)(dword_4EFAC8 + 112) = flt_468350;
          if ( v19 != 0 )
          {
            *(_DWORD *)(dword_4EFAC8 + 16) = BYTE2(v19);
            *(_DWORD *)(dword_4EFAC8 + 20) = BYTE1(v19);
            *(_DWORD *)(dword_4EFAC8 + 24) = (unsigned __int8)v19;
            *(_DWORD *)(dword_4EFAC8 + 8) |= 0x20u;
          }
          v7 = (char *)&unk_6AC260 + 16 * dword_623650++;
          dword_623684 = (int)v7;
          dword_623680 = (int)&unk_6236A0 + 16 * dword_623654;
          dword_623654 += 4;
          *(_DWORD *)dword_623680 = v2;
          *(_DWORD *)(dword_623680 + 4) = v3;
          *(_DWORD *)(dword_623680 + 8) = 0;
          *(_DWORD *)(dword_4EFAC8 + 32) = dword_623680;
          *(_DWORD *)(dword_623680 + 16) = v4;
          *(_DWORD *)(dword_623680 + 20) = v3;
          *(_DWORD *)(dword_623680 + 24) = 0;
          *(_DWORD *)(dword_4EFAC8 + 56) = dword_623680 + 16;
          *(_DWORD *)(dword_623680 + 32) = v2;
          *(_DWORD *)(dword_623680 + 36) = v5;
          *(_DWORD *)(dword_623680 + 40) = 0;
          *(_DWORD *)(dword_4EFAC8 + 80) = dword_623680 + 32;
          *(_DWORD *)(dword_623680 + 48) = v4;
          *(_DWORD *)(dword_623680 + 52) = v5;
          *(_DWORD *)(dword_623680 + 56) = 0;
          *(_DWORD *)(dword_4EFAC8 + 104) = dword_623680 + 48;
          *(_DWORD *)(dword_4EFAC8 + 28) = dword_4EFBA0[0];
          v8 = (_DWORD *)dword_623680;
          dword_4EFBA0[0] = dword_4EFAC8;
          if ( *(_DWORD *)dword_623680 < dword_7BD964
            || (v9 = *(_DWORD *)(dword_623680 + 16)) < dword_7BD964
            || (v10 = *(_DWORD *)(dword_623680 + 32)) < dword_7BD964
            || (v11 = *(_DWORD *)(dword_623680 + 48)) < dword_7BD964
            || *(_DWORD *)dword_623680 > dword_6225C4
            || v9 > dword_6225C4
            || v10 > dword_6225C4
            || v11 > dword_6225C4
            || (v12 = *(_DWORD *)(dword_623680 + 4)) < dword_6225C0
            || (v13 = *(_DWORD *)(dword_623680 + 20)) < dword_6225C0
            || (v14 = *(_DWORD *)(dword_623680 + 36)) < dword_6225C0
            || (v15 = *(_DWORD *)(dword_623680 + 52)) < dword_6225C0
            || v12 > dword_7C6244
            || v13 > dword_7C6244
            || v14 > dword_7C6244
            || v15 > dword_7C6244 )
          {
            *(_DWORD *)(dword_4EFAC8 + 8) |= 2u;
            *(_DWORD *)(dword_4EFAC8 + 4) |= 4u;
            v8 = (_DWORD *)dword_623680;
          }
          *v8 += (unsigned __int16)dword_4EFB50;
          *(_DWORD *)(dword_623680 + 4) = HIWORD(dword_4EFB50) - *(_DWORD *)(dword_623680 + 4);
          *(_DWORD *)(dword_623680 + 16) += (unsigned __int16)dword_4EFB50;
          *(_DWORD *)(dword_623680 + 20) = HIWORD(dword_4EFB50) - *(_DWORD *)(dword_623680 + 20);
          *(_DWORD *)(dword_623680 + 32) += (unsigned __int16)dword_4EFB50;
          *(_DWORD *)(dword_623680 + 36) = HIWORD(dword_4EFB50) - *(_DWORD *)(dword_623680 + 36);
          *(_DWORD *)(dword_623680 + 48) += (unsigned __int16)dword_4EFB50;
          *(_DWORD *)(dword_623680 + 52) = HIWORD(dword_4EFB50) - *(_DWORD *)(dword_623680 + 52);
          result = dword_4EFB8C + 128;
          dword_4E5E40 = v17 + 1;
          dword_4EFB8C += 128;
        }
      }
    }
  }
  return result;
}

// 0x40b9e0  sub_40B9E0
int __cdecl sub_40B9E0(int a1)
{
  int v1; // ecx

  dword_7C961C(v1);
  ++dword_4E5E40;
  dword_623654 += 4;
  *(float *)dword_623688 = (float)(((unsigned __int16)dword_4EFB4C >> 1) - 1);
  *(float *)(dword_623688 + 4) = (float)((HIWORD(dword_4EFB4C) >> 1) - 1);
  *(_DWORD *)(dword_623688 + 8) = 0;
  *(float *)(dword_623688 + 16) = (float)(1 - ((unsigned __int16)dword_4EFB4C >> 1));
  *(float *)(dword_623688 + 20) = (float)((HIWORD(dword_4EFB4C) >> 1) - 1);
  *(_DWORD *)(dword_623688 + 24) = 0;
  *(float *)(dword_623688 + 32) = (float)(((unsigned __int16)dword_4EFB4C >> 1) - 1);
  *(float *)(dword_623688 + 36) = (float)(1 - (HIWORD(dword_4EFB4C) >> 1));
  *(_DWORD *)(dword_623688 + 40) = 0;
  *(float *)(dword_623688 + 48) = (float)(1 - ((unsigned __int16)dword_4EFB4C >> 1));
  *(float *)(dword_623688 + 52) = (float)(1 - (HIWORD(dword_4EFB4C) >> 1));
  *(_DWORD *)(dword_623688 + 56) = 0;
  dword_52FBA0 = a1;
  *(_DWORD *)(a1 + 16) = dword_4E7DCC[0];
  dword_4E7DCC[0] = dword_52FBA0;
  *(float *)(dword_52FBA0 + 116) = flt_467740;
  *(float *)(dword_52FBA0 + 100) = flt_467740;
  *(float *)(dword_52FBA0 + 84) = flt_467740;
  *(float *)(dword_52FBA0 + 68) = flt_467740;
  *(float *)(dword_52FBA0 + 52) = flt_467740;
  *(float *)(dword_52FBA0 + 104) = (double)(unsigned __int8)byte_4B2190 * flt_467740 * 0.00390625;
  *(_DWORD *)(dword_52FBA0 + 88) = *(_DWORD *)(dword_52FBA0 + 104);
  *(_DWORD *)(dword_52FBA0 + 72) = *(_DWORD *)(dword_52FBA0 + 88);
  *(_DWORD *)(dword_52FBA0 + 56) = *(_DWORD *)(dword_52FBA0 + 72);
  *(float *)(dword_52FBA0 + 108) = (double)HIBYTE(dword_4B2368) * flt_467740 * 0.00390625;
  *(_DWORD *)(dword_52FBA0 + 92) = *(_DWORD *)(dword_52FBA0 + 108);
  *(_DWORD *)(dword_52FBA0 + 76) = *(_DWORD *)(dword_52FBA0 + 92);
  *(_DWORD *)(dword_52FBA0 + 60) = *(_DWORD *)(dword_52FBA0 + 76);
  *(float *)(dword_52FBA0 + 112) = (double)BYTE2(dword_4B2368) * flt_467740 * 0.00390625;
  *(_DWORD *)(dword_52FBA0 + 96) = *(_DWORD *)(dword_52FBA0 + 112);
  *(_DWORD *)(dword_52FBA0 + 80) = *(_DWORD *)(dword_52FBA0 + 96);
  *(_DWORD *)(dword_52FBA0 + 64) = *(_DWORD *)(dword_52FBA0 + 80);
  *(_DWORD *)dword_52FBA0 = dword_623688;
  *(_DWORD *)(dword_52FBA0 + 4) = dword_623688 + 16;
  *(_DWORD *)(dword_52FBA0 + 8) = dword_623688 + 32;
  *(_DWORD *)(dword_52FBA0 + 12) = dword_623688 + 48;
  return a1 + 120;
}

// 0x40bcc0  sub_40BCC0
int __cdecl sub_40BCC0(int a1, int a2)
{
  ((void (__cdecl *)())dword_7C961C)();
  dword_623654 += 4;
  ++dword_4E5E40;
  *(_DWORD *)dword_623680 = 0;
  *(_DWORD *)(dword_623680 + 4) = 0;
  *(_DWORD *)(dword_623680 + 8) = 0;
  *(_DWORD *)(dword_623680 + 16) = dword_46AF58 - 1;
  *(_DWORD *)(dword_623680 + 20) = 0;
  *(_DWORD *)(dword_623680 + 24) = 0;
  *(_DWORD *)(dword_623680 + 32) = dword_46AF58 - 1;
  *(_DWORD *)(dword_623680 + 36) = dword_46AF5C - 1;
  *(_DWORD *)(dword_623680 + 40) = 0;
  *(_DWORD *)(dword_623680 + 48) = 0;
  *(_DWORD *)(dword_623680 + 52) = dword_46AF5C - 1;
  *(_DWORD *)(dword_623680 + 56) = 0;
  dword_4EFAC8 = a1;
  *(_DWORD *)(a1 + 28) = dword_4EFBA0[0];
  dword_4EFBA0[0] = dword_4EFAC8;
  *(_DWORD *)dword_4EFAC8 = 0;
  *(_DWORD *)(dword_4EFAC8 + 4) = 2;
  *(_DWORD *)(dword_4EFAC8 + 8) = 4;
  *(_BYTE *)(dword_4EFAC8 + 12) = 1;
  *(_DWORD *)(dword_4EFAC8 + 16) = (unsigned __int8)byte_4B2190 * a2 / 4096;
  *(_DWORD *)(dword_4EFAC8 + 20) = HIBYTE(dword_4B2368) * a2 / 4096;
  *(_DWORD *)(dword_4EFAC8 + 24) = BYTE2(dword_4B2368) * a2 / 4096;
  *(_DWORD *)(dword_4EFAC8 + 32) = dword_623680;
  *(_DWORD *)(dword_4EFAC8 + 56) = dword_623680 + 16;
  *(_DWORD *)(dword_4EFAC8 + 80) = dword_623680 + 32;
  *(_DWORD *)(dword_4EFAC8 + 104) = dword_623680 + 48;
  return a1 + 128;
}

// 0x40be70  sub_40BE70
int __cdecl sub_40BE70(int a1)
{
  int v1; // ecx

  dword_7C961C(v1);
  ++dword_4E5E40;
  dword_623654 += 4;
  *(float *)dword_623688 = (float)(((unsigned __int16)dword_4EFB4C >> 1) - 1);
  *(float *)(dword_623688 + 4) = (float)((HIWORD(dword_4EFB4C) >> 1) - 1);
  *(_DWORD *)(dword_623688 + 8) = -1054867456;
  *(float *)(dword_623688 + 16) = (float)(1 - ((unsigned __int16)dword_4EFB4C >> 1));
  *(float *)(dword_623688 + 20) = (float)((HIWORD(dword_4EFB4C) >> 1) - 1);
  *(_DWORD *)(dword_623688 + 24) = -1054867456;
  *(float *)(dword_623688 + 32) = (float)(((unsigned __int16)dword_4EFB4C >> 1) - 1);
  *(float *)(dword_623688 + 36) = (float)(1 - (HIWORD(dword_4EFB4C) >> 1));
  *(_DWORD *)(dword_623688 + 40) = -1054867456;
  *(float *)(dword_623688 + 48) = (float)(1 - ((unsigned __int16)dword_4EFB4C >> 1));
  *(float *)(dword_623688 + 52) = (float)(1 - (HIWORD(dword_4EFB4C) >> 1));
  *(_DWORD *)(dword_623688 + 56) = -1054867456;
  dword_52FBA0 = a1;
  *(_DWORD *)(a1 + 16) = dword_4E7DCC[0];
  dword_4E7DCC[0] = dword_52FBA0;
  *(_DWORD *)(dword_52FBA0 + 116) = 1056964608;
  *(_DWORD *)(dword_52FBA0 + 100) = 1056964608;
  *(_DWORD *)(dword_52FBA0 + 84) = 1056964608;
  *(_DWORD *)(dword_52FBA0 + 68) = 1056964608;
  *(_DWORD *)(dword_52FBA0 + 52) = 1056964608;
  *(_DWORD *)(dword_52FBA0 + 104) = 1045220557;
  *(_DWORD *)(dword_52FBA0 + 88) = 1045220557;
  *(_DWORD *)(dword_52FBA0 + 72) = 1045220557;
  *(_DWORD *)(dword_52FBA0 + 56) = 1045220557;
  *(_DWORD *)(dword_52FBA0 + 108) = 1045220557;
  *(_DWORD *)(dword_52FBA0 + 92) = 1045220557;
  *(_DWORD *)(dword_52FBA0 + 76) = 1045220557;
  *(_DWORD *)(dword_52FBA0 + 60) = 1045220557;
  *(_DWORD *)(dword_52FBA0 + 112) = 1045220557;
  *(_DWORD *)(dword_52FBA0 + 96) = 1045220557;
  *(_DWORD *)(dword_52FBA0 + 80) = 1045220557;
  *(_DWORD *)(dword_52FBA0 + 64) = 1045220557;
  *(_DWORD *)dword_52FBA0 = dword_623688;
  *(_DWORD *)(dword_52FBA0 + 4) = dword_623688 + 16;
  *(_DWORD *)(dword_52FBA0 + 8) = dword_623688 + 32;
  *(_DWORD *)(dword_52FBA0 + 12) = dword_623688 + 48;
  return a1 + 120;
}

// 0x40c0d0  sub_40C0D0
int __cdecl sub_40C0D0(int a1)
{
  ((void (__cdecl *)())dword_7C961C)();
  ++dword_4E5E40;
  dword_623654 += 4;
  *(float *)dword_623688 = (float)(((unsigned __int16)dword_4EFB4C >> 1) - 1);
  *(float *)(dword_623688 + 4) = (float)((HIWORD(dword_4EFB4C) >> 1) - 1);
  *(_DWORD *)(dword_623688 + 8) = 1092616192;
  *(float *)(dword_623688 + 16) = (float)(1 - ((unsigned __int16)dword_4EFB4C >> 1));
  *(float *)(dword_623688 + 20) = (float)((HIWORD(dword_4EFB4C) >> 1) - 1);
  *(_DWORD *)(dword_623688 + 24) = 1092616192;
  *(float *)(dword_623688 + 32) = (float)(((unsigned __int16)dword_4EFB4C >> 1) - 1);
  *(float *)(dword_623688 + 36) = (float)(1 - (HIWORD(dword_4EFB4C) >> 1));
  *(_DWORD *)(dword_623688 + 40) = 1092616192;
  *(float *)(dword_623688 + 48) = (float)(1 - ((unsigned __int16)dword_4EFB4C >> 1));
  *(float *)(dword_623688 + 52) = (float)(1 - (HIWORD(dword_4EFB4C) >> 1));
  *(_DWORD *)(dword_623688 + 56) = 1092616192;
  *(_DWORD *)dword_623680 = 0;
  *(_DWORD *)(dword_623680 + 4) = 0;
  *(_DWORD *)(dword_623680 + 8) = 10;
  *(_DWORD *)(dword_623680 + 16) = dword_46AF58 - 1;
  *(_DWORD *)(dword_623680 + 20) = 0;
  *(_DWORD *)(dword_623680 + 24) = 10;
  *(_DWORD *)(dword_623680 + 32) = dword_46AF58 - 1;
  *(_DWORD *)(dword_623680 + 36) = dword_46AF5C - 1;
  *(_DWORD *)(dword_623680 + 40) = 10;
  *(_DWORD *)(dword_623680 + 48) = 0;
  *(_DWORD *)(dword_623680 + 52) = dword_46AF5C - 1;
  *(_DWORD *)(dword_623680 + 56) = 10;
  dword_4EFAC8 = a1;
  *(_DWORD *)(a1 + 28) = dword_4EFBC8;
  dword_4EFBC8 = dword_4EFAC8;
  *(_DWORD *)dword_4EFAC8 = 0;
  *(_DWORD *)(dword_4EFAC8 + 4) = 2;
  *(_DWORD *)(dword_4EFAC8 + 8) = 4;
  *(_BYTE *)(dword_4EFAC8 + 12) = 0;
  *(_DWORD *)(dword_4EFAC8 + 44) = 50;
  *(_DWORD *)(dword_4EFAC8 + 116) = 50;
  *(_DWORD *)(dword_4EFAC8 + 92) = 50;
  *(_DWORD *)(dword_4EFAC8 + 16) = 50;
  *(_DWORD *)(dword_4EFAC8 + 48) = 50;
  *(_DWORD *)(dword_4EFAC8 + 120) = 50;
  *(_DWORD *)(dword_4EFAC8 + 96) = 50;
  *(_DWORD *)(dword_4EFAC8 + 20) = 50;
  *(_DWORD *)(dword_4EFAC8 + 52) = 50;
  *(_DWORD *)(dword_4EFAC8 + 124) = 50;
  *(_DWORD *)(dword_4EFAC8 + 100) = 50;
  *(_DWORD *)(dword_4EFAC8 + 24) = 50;
  *(_DWORD *)(dword_4EFAC8 + 32) = dword_623680;
  *(_DWORD *)(dword_4EFAC8 + 56) = dword_623680 + 16;
  *(_DWORD *)(dword_4EFAC8 + 80) = dword_623680 + 32;
  *(_DWORD *)(dword_4EFAC8 + 104) = dword_623680 + 48;
  return a1 + 128;
}

// 0x40c3b0  sub_40C3B0
int __cdecl sub_40C3B0(int a1, int a2)
{
  _DWORD *v2; // eax
  int v3; // edx
  int v4; // edx

  ((void (__cdecl *)())dword_7C961C)();
  dword_623654 += 4;
  ++dword_4E5E40;
  *(_DWORD *)dword_623680 = *(__int16 *)(a1 + 4) + dword_46AF58 / 2;
  *(_DWORD *)(dword_623680 + 4) = *(__int16 *)(a1 + 6) + dword_46AF5C / 2;
  *(_DWORD *)(dword_623680 + 8) = 0;
  *(_DWORD *)(dword_623680 + 16) = *(__int16 *)(a1 + 4) + dword_46AF58 / 2 + *(unsigned __int16 *)(a1 + 8) - 1;
  *(_DWORD *)(dword_623680 + 20) = *(__int16 *)(a1 + 6) + dword_46AF5C / 2;
  *(_DWORD *)(dword_623680 + 24) = 0;
  *(_DWORD *)(dword_623680 + 32) = *(__int16 *)(a1 + 4) + dword_46AF58 / 2 + *(unsigned __int16 *)(a1 + 8) - 1;
  *(_DWORD *)(dword_623680 + 36) = *(unsigned __int16 *)(a1 + 10) + dword_46AF5C / 2 + *(__int16 *)(a1 + 6) - 1;
  *(_DWORD *)(dword_623680 + 40) = 0;
  *(_DWORD *)(dword_623680 + 48) = *(__int16 *)(a1 + 4) + dword_46AF58 / 2;
  *(_DWORD *)(dword_623680 + 52) = *(unsigned __int16 *)(a1 + 10) + dword_46AF5C / 2 + *(__int16 *)(a1 + 6) - 1;
  *(_DWORD *)(dword_623680 + 56) = 0;
  v2 = (_DWORD *)dword_623680;
  if ( *(int *)dword_623680 < 0 )
  {
    *(_DWORD *)dword_623680 = 0;
    v2 = (_DWORD *)dword_623680;
  }
  v3 = dword_46AF58;
  if ( v2[4] >= dword_46AF58 )
  {
    v2[4] = dword_46AF58 - 1;
    v2 = (_DWORD *)dword_623680;
    v3 = dword_46AF58;
  }
  if ( v2[8] >= v3 )
  {
    v2[8] = v3 - 1;
    v2 = (_DWORD *)dword_623680;
  }
  if ( (int)v2[12] < 0 )
  {
    v2[12] = 0;
    v2 = (_DWORD *)dword_623680;
  }
  if ( (int)v2[1] < 0 )
  {
    v2[1] = 0;
    v2 = (_DWORD *)dword_623680;
  }
  if ( (int)v2[5] < 0 )
  {
    v2[5] = 0;
    v2 = (_DWORD *)dword_623680;
  }
  v4 = dword_46AF5C;
  if ( v2[9] >= dword_46AF5C )
  {
    v2[9] = dword_46AF5C - 1;
    v2 = (_DWORD *)dword_623680;
    v4 = dword_46AF5C;
  }
  if ( v2[13] >= v4 )
    v2[13] = v4 - 1;
  dword_4EFAC8 = a2;
  *(_DWORD *)(a2 + 28) = dword_4EFBA0[0];
  dword_4EFBA0[0] = dword_4EFAC8;
  *(_DWORD *)dword_4EFAC8 = 0;
  *(_DWORD *)(dword_4EFAC8 + 4) = 0;
  *(_DWORD *)(dword_4EFAC8 + 8) = 0;
  if ( *(_DWORD *)a1 != 0 )
  {
    *(_DWORD *)(dword_4EFAC8 + 4) = 2;
    *(_BYTE *)(dword_4EFAC8 + 12) = 0;
  }
  else
  {
    *(_BYTE *)(dword_4EFAC8 + 12) = 4;
  }
  *(_DWORD *)(dword_4EFAC8 + 16) = *(unsigned __int8 *)(a1 + 12);
  *(_DWORD *)(dword_4EFAC8 + 20) = *(unsigned __int8 *)(a1 + 13);
  *(_DWORD *)(dword_4EFAC8 + 24) = *(unsigned __int8 *)(a1 + 14);
  *(_DWORD *)(dword_4EFAC8 + 32) = dword_623680;
  *(_DWORD *)(dword_4EFAC8 + 56) = dword_623680 + 16;
  *(_DWORD *)(dword_4EFAC8 + 80) = dword_623680 + 32;
  *(_DWORD *)(dword_4EFAC8 + 104) = dword_623680 + 48;
  return a2 + 128;
}

// 0x40c640  sub_40C640
int __cdecl sub_40C640(int a1, int a2)
{
  int v2; // ecx

  ((void (__cdecl *)())dword_7C961C)();
  dword_623654 += 4;
  ++dword_4E5E40;
  *(float *)dword_623688 = (float)*(__int16 *)(a1 + 4);
  *(float *)(dword_623688 + 4) = (float)*(__int16 *)(a1 + 6);
  *(_DWORD *)(dword_623688 + 8) = 0;
  *(float *)(dword_623688 + 16) = (float)(*(__int16 *)(a1 + 4) + *(unsigned __int16 *)(a1 + 8) - 1);
  *(float *)(dword_623688 + 20) = (float)*(__int16 *)(a1 + 6);
  *(_DWORD *)(dword_623688 + 24) = 0;
  *(float *)(dword_623688 + 32) = (float)*(__int16 *)(a1 + 4);
  *(float *)(dword_623688 + 36) = (float)(*(unsigned __int16 *)(a1 + 10) + *(__int16 *)(a1 + 6) - 1);
  *(_DWORD *)(dword_623688 + 40) = 0;
  *(float *)(dword_623688 + 48) = (float)(*(__int16 *)(a1 + 4) + *(unsigned __int16 *)(a1 + 8) - 1);
  *(float *)(dword_623688 + 52) = (float)(*(unsigned __int16 *)(a1 + 10) + *(__int16 *)(a1 + 6) - 1);
  *(_DWORD *)(dword_623688 + 56) = 0;
  dword_52FBA0 = a2;
  *(_DWORD *)(a2 + 16) = dword_4E7DC4[0];
  dword_4E7DC4[0] = dword_52FBA0;
  v2 = 1056964608;
  if ( *(_DWORD *)a1 == 0 )
    v2 = 1065353216;
  *(_DWORD *)(dword_52FBA0 + 116) = v2;
  *(_DWORD *)(dword_52FBA0 + 100) = v2;
  *(_DWORD *)(dword_52FBA0 + 84) = v2;
  *(_DWORD *)(dword_52FBA0 + 68) = v2;
  *(_DWORD *)(dword_52FBA0 + 52) = v2;
  *(float *)(dword_52FBA0 + 104) = (float)*(unsigned __int8 *)(a1 + 12);
  *(_DWORD *)(dword_52FBA0 + 88) = *(_DWORD *)(dword_52FBA0 + 104);
  *(_DWORD *)(dword_52FBA0 + 72) = *(_DWORD *)(dword_52FBA0 + 88);
  *(_DWORD *)(dword_52FBA0 + 56) = *(_DWORD *)(dword_52FBA0 + 72);
  *(float *)(dword_52FBA0 + 108) = (float)*(unsigned __int8 *)(a1 + 13);
  *(_DWORD *)(dword_52FBA0 + 92) = *(_DWORD *)(dword_52FBA0 + 108);
  *(_DWORD *)(dword_52FBA0 + 76) = *(_DWORD *)(dword_52FBA0 + 92);
  *(_DWORD *)(dword_52FBA0 + 60) = *(_DWORD *)(dword_52FBA0 + 76);
  *(float *)(dword_52FBA0 + 112) = (float)*(unsigned __int8 *)(a1 + 14);
  *(_DWORD *)(dword_52FBA0 + 96) = *(_DWORD *)(dword_52FBA0 + 112);
  *(_DWORD *)(dword_52FBA0 + 80) = *(_DWORD *)(dword_52FBA0 + 96);
  *(_DWORD *)(dword_52FBA0 + 64) = *(_DWORD *)(dword_52FBA0 + 80);
  *(_DWORD *)dword_52FBA0 = dword_623688;
  *(_DWORD *)(dword_52FBA0 + 4) = dword_623688 + 16;
  *(_DWORD *)(dword_52FBA0 + 8) = dword_623688 + 32;
  *(_DWORD *)(dword_52FBA0 + 12) = dword_623688 + 48;
  return a2 + 128;
}

// 0x40c8b0  sub_40C8B0
int __cdecl sub_40C8B0(__int16 *a1)
{
  int i; // ecx
  int j; // ecx
  int result; // eax
  int v5; // [esp+8h] [ebp+4h]
  int v6; // [esp+8h] [ebp+4h]

  for ( i = 0; i < 64; *(_DWORD *)(dword_623688 + i - 8) = -1018691584 )
  {
    v5 = *a1;
    i += 16;
    a1 += 2;
    *(float *)(dword_623688 + i - 16) = (double)v5 * flt_4EFB7C;
    *(float *)(dword_623688 + i - 12) = (double)-*(a1 - 1) * flt_4EFB80;
  }
  for ( j = 64; j < 128; *(_DWORD *)(dword_623688 + j - 8) = -1027080192 )
  {
    v6 = *a1;
    j += 16;
    a1 += 2;
    *(float *)(dword_623688 + j - 16) = (double)v6 * flt_4EFB7C;
    *(float *)(dword_623688 + j - 12) = (double)-*(a1 - 1) * flt_4EFB80;
  }
  result = dword_623654 + 8;
  dword_623654 += 8;
  return result;
}

// 0x40c980  sub_40C980
int __cdecl sub_40C980(__int16 *a1)
{
  int result; // eax
  int *v2; // ecx
  int v3; // edx
  float v4; // [esp+14h] [ebp+8h]
  float v5; // [esp+14h] [ebp+8h]

  *(float *)(dword_623688 + 16) = (double)*a1 * flt_4EFB7C;
  *(float *)(dword_623688 + 20) = (double)-a1[1] * flt_4EFB80;
  *(_DWORD *)(dword_623688 + 24) = -1035468800;
  *(float *)(dword_623688 + 32) = (double)a1[2] * flt_4EFB7C;
  *(float *)(dword_623688 + 36) = (double)-a1[3] * flt_4EFB80;
  *(_DWORD *)(dword_623688 + 40) = -1035468800;
  *(float *)(dword_623688 + 48) = (double)a1[4] * flt_4EFB7C;
  *(float *)(dword_623688 + 52) = (double)-a1[5] * flt_4EFB80;
  *(_DWORD *)(dword_623688 + 56) = -1035468800;
  *(float *)dword_623688 = (double)a1[6] * flt_4EFB7C;
  *(float *)(dword_623688 + 4) = (double)-a1[7] * flt_4EFB80;
  *(_DWORD *)(dword_623688 + 8) = -1035468800;
  *(float *)(dword_623688 + 64) = (double)a1[8] * flt_4EFB7C;
  *(float *)(dword_623688 + 68) = (double)-a1[9] * flt_4EFB80;
  *(_DWORD *)(dword_623688 + 72) = -1046478848;
  *(float *)(dword_623688 + 80) = (double)a1[10] * flt_4EFB7C;
  *(float *)(dword_623688 + 84) = (double)-a1[11] * flt_4EFB80;
  *(_DWORD *)(dword_623688 + 88) = -1046478848;
  *(float *)(dword_623688 + 96) = (double)a1[12] * flt_4EFB7C;
  *(float *)(dword_623688 + 100) = (double)-a1[13] * flt_4EFB80;
  *(_DWORD *)(dword_623688 + 104) = -1046478848;
  *(float *)(dword_623688 + 112) = (double)a1[14] * flt_4EFB7C;
  *(float *)(dword_623688 + 116) = (double)-a1[15] * flt_4EFB80;
  *(_DWORD *)(dword_623688 + 120) = -1046478848;
  for ( result = 0; result < 128; result += 16 )
  {
    v4 = (double)(unsigned __int16)dword_4EFB50 + *(float *)(dword_623688 + result);
    *(_DWORD *)(result + dword_623680) = (int)v4;
    v5 = (double)HIWORD(dword_4EFB50) - *(float *)(dword_623688 + result + 4);
    *(_DWORD *)(dword_623680 + result + 4) = (int)v5;
    v2 = (int *)(dword_623680 + result + 8);
    v3 = (int)*(float *)(dword_623688 + result + 8);
    *v2 = v3;
  }
  dword_623654 += 8;
  return result;
}

// 0x40cc30  sub_40CC30
int __cdecl sub_40CC30(int a1, int a2)
{
  qword_467748 = a1;
  (*(int *)0x46774C) = a2;
  dword_4AC0A0 = a1 / 2;
  dword_4AC0A8 = a2 / 2;
  dword_4AC09C = a1 / -2;
  dword_4AC0A4 = a2 / -2;
  return a2 / -2;
}

// 0x40cc70  sub_40CC70
int __cdecl sub_40CC70(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int result; // eax

  result = dword_4AC094;
  if ( (dword_4AC094 & 2) != 0 )
    return sub_40D970(a1, a2, a3);
  if ( (unsigned int)dword_4AC094 <= 1 )
    return dword_565FE0(a1, a2, a3);
  return result;
}

// 0x40cce0  sub_40CCE0
int __cdecl sub_40CCE0(int a1)
{
  int result; // eax
  double v2; // st7

  if ( (unsigned int)dword_9CA83C > 2 )
  {
    result = a1;
  }
  else
  {
    a1 += (unsigned __int16)word_4B38A0 * (9 * dword_9CA83C / 2);
    result = a1;
    if ( a1 > 0xFFFF )
    {
      result = 0xFFFF;
      a1 = 0xFFFF;
    }
  }
  v2 = (double)a1;
  dword_4EFB40 = result;
  flt_4EFB44 = v2;
  flt_4EFB48 = (float)-result;
  flt_4EFB68 = v2;
  flt_4EFB60 = v2 * -0.75;
  flt_4EFB64 = 1.0 / (v2 * 0.25);
  return result;
}
