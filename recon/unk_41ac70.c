// Module `unk_41ac70`.
//
// Reconstructed from Bugs.exe (PC v1.0) by tools/recon.py.
// Generated file -- do not edit by hand; see recon/README.md.
//
// Address range: 0x41ac70 - 0x42a6a0 (128 functions).

#include "bugs.h"


// 0x41ac70  sub_41AC70
LPDIRECTDRAW sub_41AC70()
{
  LPDIRECTDRAW result; // eax

  if ( dword_4B1C44 != 0 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)dword_4B1C44 + 8))(dword_4B1C44);
    dword_4B1C44 = 0;
  }
  if ( dword_4B1C3C != 0 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)dword_4B1C3C + 8))(dword_4B1C3C);
    dword_4B1C3C = 0;
  }
  if ( dword_4B1C38 != 0 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)dword_4B1C38 + 8))(dword_4B1C38);
    dword_4B1C38 = 0;
  }
  result = dword_4B1C34;
  if ( dword_4B1C34 != NULL )
  {
    result = (LPDIRECTDRAW)dword_4B1C34->lpVtbl->Release(/*This*/ dword_4B1C34);
    dword_4B1C34 = NULL;
  }
  return result;
}

// 0x41acd0  sub_41ACD0
int sub_41ACD0()
{
  int v0; // eax
  _DWORD v2[27]; // [esp+0h] [ebp-6Ch] BYREF

  v2[0] = 108;
  if ( dword_5A7CAC != 0 )
  {
    ++dword_5A7CAC;
    return 1;
  }
  else
  {
    v0 = (*(int (__stdcall **)(int, _DWORD, _DWORD *, int, _DWORD))(*(_DWORD *)dword_4B1C3C + 100))(
           dword_4B1C3C,
           0,
           v2,
           1,
           0);
    if ( v0 != 0 )
    {
      if ( v0 == -2005532222 && (*(int (__stdcall **)(int))(*(_DWORD *)dword_4B1C38 + 108))(dword_4B1C38) != 0 )
        (*(void (__stdcall **)(int))(*(_DWORD *)dword_4B1C3C + 108))(dword_4B1C3C);
      return 0;
    }
    else
    {
      dword_554494 = v2[9];
      ++dword_5A7CAC;
      return 1;
    }
  }
}

// 0x41ad60  sub_41AD60
int sub_41AD60()
{
  int result; // eax

  while ( (*(int (__stdcall **)(int, _DWORD))(*(_DWORD *)dword_4B1C3C + 128))(dword_4B1C3C, 0) == -2005532132 )
    ;
  result = --dword_5A7CAC;
  if ( dword_5A7CAC < 0 )
    dword_5A7CAC = 0;
  return result;
}

// 0x41adb0  sub_41ADB0
int sub_41ADB0()
{
  int result; // eax

  result = dword_62364C;
  if ( dword_62364C != 0 )
  {
    memset(
      (void *)(dword_554494 + dword_553460[dword_62364C]),
      0,
      dword_46AF64 * (dword_46AF68 - dword_553460[dword_62364C]));
    return 0;
  }
  else
  {
    memset((void *)dword_554494, 0, dword_46AF64 * dword_46AF68);
  }
  return result;
}

// 0x41ae10  sub_41AE10
int __cdecl sub_41AE10(int a1)
{
  char *v1; // ecx
  int v2; // eax
  int i; // ebp
  char v4; // dl
  char v6; // [esp+Ch] [ebp-400h] BYREF
  _BYTE v7[1023]; // [esp+Dh] [ebp-3FFh] BYREF

  v1 = &v6;
  v2 = a1 + 1;
  for ( i = 256; i != 0; --i )
  {
    v4 = *(_BYTE *)(v2 + 1);
    v2 += 4;
    *v1 = v4;
    v7[v2 - 1 - a1 - 4] = *(_BYTE *)(v2 - 4);
    v7[v2 - a1 - 4] = *(_BYTE *)(v2 - 5);
    v1 += 4;
  }
  return (*(int (__stdcall **)(int, _DWORD, _DWORD, int, char *))(*(_DWORD *)dword_4B1C44 + 24))(
           dword_4B1C44,
           0,
           0,
           256,
           &v6);
}

// 0x41ae80  sub_41AE80
int sub_41AE80()
{
  int v0; // ecx
  char *v1; // edi
  unsigned __int8 *v2; // esi
  int v3; // eax
  __int16 v4; // dx
  int v5; // edx
  unsigned int v6; // ebx
  unsigned int v7; // edx
  int result; // eax

  if ( dword_4B1C48 != 0 )
  {
    v0 = word_467744;
    v1 = (char *)&unk_5A80E4;
    v2 = (unsigned __int8 *)&unk_5A7CC5;
    v3 = 0;
    do
    {
      v4 = (unsigned __int8)byte_5A7CC6[v3];
      v3 += 4;
      byte_5A80E2[v3] = (unsigned __int16)(v0 * v4) >> 8;
      v5 = *v2;
      v2 += 4;
      v1 += 4;
      v6 = (unsigned int)(v5 * v0) >> 8;
      v7 = (v0 * (unsigned int)(unsigned __int8)byte_5A7CC0[v3]) >> 8;
      byte_5A80E1[v3] = v6;
      *(v1 - 4) = v7;
    }
    while ( v3 < 1016 );
    dword_5546B0(&unk_5A80E0);
    dword_4B1C48 = 0;
  }
  result = (*(int (__stdcall **)(int, _DWORD, int))(*(_DWORD *)dword_4B1C38 + 44))(dword_4B1C38, 0, 1);
  if ( result == -2005532222 )
  {
    result = (*(int (__stdcall **)(int))(*(_DWORD *)dword_4B1C38 + 108))(dword_4B1C38);
    if ( result != 0 )
      return (*(int (__stdcall **)(int))(*(_DWORD *)dword_4B1C3C + 108))(dword_4B1C3C);
  }
  return result;
}

// 0x41af40  sub_41AF40
int __cdecl sub_41AF40(int a1, LONG a2, LONG a3, int a4)
{
  BITMAPINFO *v4; // edi
  int v6; // eax
  signed int v7; // esi
  void *v8; // eax
  signed int i; // ecx
  int v10; // eax
  int *v11; // ecx
  LONG j; // edx

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
  v4 = (BITMAPINFO *)malloc(/*Size*/ 0x428u);
  Block = v4;
  if ( v4 == NULL )
    return 0;
  memset(v4, 0, 0x428u);
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
  v6 = 0;
  dword_553430 = (int)Block->bmiColors;
  do
  {
    *(_BYTE *)(dword_553430 + v6 + 2) = byte_5A7CC2[v6];
    *(_BYTE *)(dword_553430 + v6 + 1) = byte_5A7CC1[v6];
    *(_BYTE *)(dword_553430 + v6) = byte_5A7CC0[v6];
    *(_BYTE *)(dword_553430 + v6 + 3) = 0;
    v6 += 4;
  }
  while ( v6 < 1024 );
  v7 = (a4 >> 3) * a3 * ((a2 + 3) & 0xFFFFFFFC);
  v8 = malloc(/*Size*/ v7);
  lpBits = v8;
  if ( v8 != NULL )
  {
    for ( i = 0; i < v7; ++i )
    {
      *((_BYTE *)v8 + i) = 32;
      v8 = lpBits;
    }
    dword_554494 = (int)v8;
    dword_553450 = (int)v8;
    v10 = a2 * a3;
    dword_46AF58 = a2;
    dword_46AF5C = a3;
    dword_46AF60 = a4;
    dword_46AF64 = a4 >> 3;
    dword_46AF68 = a2 * a3;
    if ( a3 > 0 )
    {
      v11 = dword_553460;
      for ( j = a3; j != 0; --j )
      {
        v10 -= a2;
        *v11++ = v10;
      }
    }
    dword_46AF6C = -a2;
    return 1;
  }
  else
  {
    if ( Block != NULL )
    {
      free(/*Block*/ Block);
      v8 = lpBits;
      Block = NULL;
    }
    if ( v8 != NULL )
    {
      free(/*Block*/ v8);
      lpBits = NULL;
    }
    return 0;
  }
}

// 0x41b140  sub_41B140
int __cdecl sub_41B140(int a1)
{
  int result; // eax
  int v2; // ecx
  char v3; // bl

  result = 0;
  v2 = a1 + 1;
  do
  {
    v3 = *(_BYTE *)(v2 + 1);
    v2 += 4;
    *(_BYTE *)(dword_553430 + result + 2) = v3;
    *(_BYTE *)(dword_553430 + result + 1) = *(_BYTE *)(v2 - 4);
    *(_BYTE *)(dword_553430 + result) = *(_BYTE *)(v2 - 5);
    *(_BYTE *)(dword_553430 + result + 3) = 0;
    result += 4;
  }
  while ( result < 1024 );
  return result;
}

// 0x41b190  sub_41B190
void *__cdecl sub_41B190(HDC hdc)
{
  void *result; // eax
  int v2; // ecx
  char *v3; // edi
  unsigned __int8 *v4; // esi
  int v5; // eax
  __int16 v6; // dx
  int v7; // edx
  unsigned int v8; // ebx
  unsigned int v9; // edx
  _BYTE *v10; // ecx
  _BYTE *v11; // esi
  _BYTE *v12; // edi
  _BYTE *v13; // eax
  _BYTE *v14; // ebp
  int i; // edx
  HPALETTE Palette; // edi
  HPALETTE v17; // ebp
  _BYTE plpal[1028]; // [esp+0h] [ebp-404h] BYREF

  result = lpBits;
  if ( lpBits != NULL )
  {
    if ( dword_4B1C48 != 0 )
    {
      v2 = word_467744;
      v3 = (char *)&unk_5A80E4;
      v4 = (unsigned __int8 *)&unk_5A7CC5;
      v5 = 0;
      do
      {
        v6 = (unsigned __int8)byte_5A7CC6[v5];
        v5 += 4;
        byte_5A80E2[v5] = (unsigned __int16)(v2 * v6) >> 8;
        v7 = *v4;
        v4 += 4;
        v3 += 4;
        v8 = (unsigned int)(v7 * v2) >> 8;
        v9 = (v2 * (unsigned int)(unsigned __int8)byte_5A7CC0[v5]) >> 8;
        byte_5A80E1[v5] = v8;
        *(v3 - 4) = v9;
      }
      while ( v5 < 1016 );
      dword_5546B0(&unk_5A80E0);
      dword_4B1C48 = 0;
    }
    *(_WORD *)plpal = 768;
    *(_WORD *)&plpal[2] = 256;
    memset(&plpal[4], 0, 0x400u);
    v10 = &plpal[-dword_553430 + 3];
    v11 = &plpal[-dword_553430 + 4];
    v12 = &plpal[-dword_553430 + 5];
    v13 = (_BYTE *)(dword_553430 + 1);
    v14 = &plpal[-dword_553430 + 6];
    for ( i = 256; i != 0; --i )
    {
      v13[(_DWORD)v10] = v13[1];
      v13[(_DWORD)v11] = *v13;
      v13[(_DWORD)v12] = *(v13 - 1);
      v13[(_DWORD)v14] = 0;
      v13 += 4;
    }
    Palette = CreatePalette((const LOGPALETTE *)plpal);
    v17 = SelectPalette(hdc, /*hPal*/ Palette, /*bForceBkgd*/ true);
    RealizePalette(hdc);
    StretchDIBits(
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
    SelectPalette(hdc, /*hPal*/ v17, /*bForceBkgd*/ false);
    return (void *)DeleteObject(/*ho*/ Palette);
  }
  return result;
}

// 0x41b2f0  sub_41B2F0
char __cdecl sub_41B2F0(int a1, __int16 a2)
{
  char v3; // al
  int v4; // ebp
  int *v5; // edi
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  char v10; // al
  int v11; // eax
  int **v12; // edx
  int *v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // esi
  float *v17; // edx
  int v18; // eax
  int v19; // esi
  int *v20; // edx
  int v21; // ecx
  int v22; // edx
  int v23; // esi
  int *v24; // ecx
  int v25; // ebp
  int v26; // eax
  int v27; // ebx
  int v28; // ebp
  _DWORD **v29; // ecx
  _DWORD *v30; // ecx
  int v31; // edx
  int v32; // eax
  int v33; // esi
  int v34; // esi
  int v35; // esi
  int v36; // esi
  int v38; // [esp+10h] [ebp-10h]
  int v39; // [esp+14h] [ebp-Ch]
  int v40; // [esp+18h] [ebp-8h]
  int *v41; // [esp+1Ch] [ebp-4h]
  int v42; // [esp+24h] [ebp+4h]

  dword_5F84E4 = dword_5A80C0[0];
  v3 = *(_BYTE *)(a1 + 4);
  v4 = 3;
  v5 = (int *)a1;
  v42 = 3;
  if ( (v3 & 1) == 0 )
  {
    v4 = 4;
    v42 = 4;
  }
  if ( *(_DWORD *)a1 != 0 )
  {
    v6 = 48 * *(_DWORD *)a1;
    if ( byte_52FD6A[v6] == 0 )
    {
      v6 = *(int *)((char *)&dword_52FD8C + v6);
      dword_553418 = v6;
      if ( v6 == 0 )
      {
        off_46AF70 = NULL;
        return v6;
      }
      v8 = 12 * *(_DWORD *)a1;
      if ( byte_52FD69[v8 * 4] != 0 )
        *(_DWORD *)(a1 + 8) |= 8u;
      dword_565FE8 = dword_52FD60[v8];
      dword_5A7CA4 = byte_52FD70[48 * *(_DWORD *)a1];
      goto LABEL_16;
    }
    if ( byte_52FD6B[v6] == 0 && byte_52FD69[v6] != 0 )
    {
      off_46AF70 = NULL;
      return v6;
    }
    *(_DWORD *)(a1 + 8) = 0;
    v7 = (unsigned __int8)byte_52FD6B[v6];
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 24);
    LOBYTE(v9) = v9 & 0xF8;
    v7 = *((unsigned __int8 *)off_46AEC0
         + ((*(int *)(a1 + 16) >> 3) | (4 * (*(_DWORD *)(a1 + 20) & 0xFFFFFFF8 | (32 * v9)))));
  }
  dword_553424 = v7;
LABEL_16:
  if ( (*(_BYTE *)(a1 + 4) & 2) != 0 && (v10 = *(_BYTE *)(a1 + 12)) < 4 )
  {
    *(_DWORD *)(a1 + 8) |= 4u;
    dword_5F84E4 = dword_5A80C0[v10];
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 8);
    LOBYTE(v11) = v11 & 0xFB;
    *(_DWORD *)(a1 + 8) = v11;
  }
  if ( (*(_BYTE *)(a1 + 4) & 4) != 0 )
  {
    dword_5A7908 = *(_DWORD *)(a1 + 8);
    dword_5A7904 = *(_DWORD *)(a1 + 4);
    byte_5A790C = *(_BYTE *)(a1 + 12);
    byte_5A790D = *(_BYTE *)(a1 + 13);
    dword_5A7900 = *(_DWORD *)a1;
    v12 = (int **)flt_5A7920;
    v13 = (int *)&unk_5544A0;
    do
    {
      *v12 = v13;
      v13 += 4;
      v12 += 6;
    }
    while ( (int)v13 < (int)&dword_5546A0 );
    v14 = sub_404D20((int **)(a1 + 32), flt_5A7AA0, v4);
    v6 = sub_404F20((int)flt_5A7AA0, flt_5A7920, v14);
    v4 = v6;
    v15 = 0;
    v16 = 0;
    v42 = v6;
    if ( v6 > 0 )
    {
      v17 = flt_5A7920;
      while ( 1 )
      {
        v6 = *(_DWORD *)(*(_DWORD *)v17 + 4);
        if ( v6 < 0 || v6 >= dword_46AF5C )
          break;
        ++v15;
        v17 += 6;
        if ( v15 >= v4 )
          goto LABEL_30;
      }
      v16 = 1;
    }
LABEL_30:
    if ( v16 != 0 )
    {
      v18 = sub_405180(flt_5A7920, flt_5A7AA0, v4);
      v6 = sub_405390(flt_5A7AA0, flt_5A7920, v18);
      v4 = v6;
      v42 = v6;
    }
    v5 = &dword_5A7900;
  }
  else
  {
    v19 = 0;
    v20 = (int *)(a1 + 32);
    while ( 1 )
    {
      v6 = *v20;
      v21 = *(_DWORD *)*v20;
      if ( v21 < 0 )
        break;
      if ( v21 >= dword_46AF58 )
        break;
      v6 = *(_DWORD *)(v6 + 4);
      if ( v6 < 0 || v6 >= dword_46AF5C )
        break;
      ++v19;
      v20 += 6;
      if ( v19 >= v4 )
        goto LABEL_41;
    }
    v4 = 0;
    v42 = 0;
  }
LABEL_41:
  if ( v4 >= 3 )
  {
    off_46AF70 = v5;
    v22 = *(_DWORD *)(v5[8] + 4);
    v23 = v22;
    v38 = v22;
    v24 = v5 + 14;
    v25 = v4 - 1;
    do
    {
      v26 = *(_DWORD *)(*v24 + 4);
      if ( v22 <= v26 )
      {
        v38 = *(_DWORD *)(*v24 + 4);
        v22 = v38;
      }
      if ( v23 >= v26 )
        v23 = *(_DWORD *)(*v24 + 4);
      v24 += 6;
      --v25;
    }
    while ( v25 != 0 );
    v40 = v23;
    v27 = -1;
    v28 = -1;
    v6 = 0;
    v39 = -1;
    if ( v42 > 0 )
    {
      v29 = (_DWORD **)(v5 + 8);
      v41 = v5 + 8;
      do
      {
        v30 = *v29;
        v31 = v30[1];
        if ( v23 == v31 )
        {
          if ( v27 == -1 )
          {
            v27 = v6;
            v39 = v6;
          }
          else if ( *v30 >= *(_DWORD *)v5[6 * v27 + 8] )
          {
            v27 = v39;
          }
          else
          {
            v27 = v6;
            v39 = v6;
          }
        }
        if ( v38 == v31 && (v28 == -1 || *v30 > *(_DWORD *)v5[6 * v28 + 8]) )
          v28 = v6;
        v23 = v40;
        ++v6;
        v29 = (_DWORD **)(v41 + 6);
        v41 += 6;
      }
      while ( v6 < v42 );
      v22 = v38;
    }
    if ( v23 <= v22 )
    {
      dword_5546A0 = v23 < 0 ? 0 : v23;
      if ( v22 < dword_46AF5C )
        dword_555FCC = v22;
      else
        dword_555FCC = dword_46AF5C - 1;
      dword_553434 = 0;
      v32 = v27;
      do
      {
        v33 = v32 + 1;
        if ( v32 + 1 == v42 )
          v33 = 0;
        sub_41C990(&v5[6 * v32 + 8], &v5[6 * v33 + 8]);
        v32 = v33;
      }
      while ( v33 != v28 );
      do
      {
        v34 = v32 + 1;
        if ( v32 + 1 == v42 )
          v34 = 0;
        sub_41C920(&v5[6 * v34 + 8], &v5[6 * v32 + 8]);
        v32 = v34;
      }
      while ( v34 != v27 );
      if ( (v5[2] & 0xC) != 0 )
        v6 = sub_403B00(a2);
      else
        v6 = sub_403300(a2);
      if ( v6 > 0 )
      {
        v6 = v27;
        if ( (v5[2] & 2) != 0 )
        {
          do
          {
            v35 = v6 + 1;
            if ( v6 + 1 == v42 )
              v35 = 0;
            sub_41CCF0(&v5[6 * v6 + 8], &v5[6 * v35 + 8]);
            v6 = v35;
          }
          while ( v35 != v28 );
          do
          {
            v36 = v6 + 1;
            if ( v6 + 1 == v42 )
              v36 = 0;
            sub_41CA10(&v5[6 * v36 + 8], &v5[6 * v6 + 8]);
            v6 = v36;
          }
          while ( v36 != v27 );
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
  return v6;
}

// 0x41b750  sub_41B750
int (__cdecl *sub_41B750())(int, int, int, int, int, int, int, int)
{
  memset32(&dword_7CA620, (int)PadSetAct, 0x40u);
  dword_7CA6E0 = (int)sub_41BBF0;
  dword_7CA6C8 = (int)sub_41BBF0;
  dword_7CA630 = (int)sub_41B8A0;
  dword_7CA634 = (int)sub_41B8A0;
  dword_554480 = sub_41C1A0;
  dword_5A7CA8 = sub_41C4B0;
  dword_7CA660 = (int)sub_41BA90;
  dword_7CA670 = (int)sub_41BEC0;
  dword_7CA6F0 = (int)sub_41C030;
  dword_7CA620 = (int)sub_41B820;
  dword_7CA628 = (int)sub_41B950;
  dword_7CA648 = (int)sub_41BA90;
  dword_7CA638 = (int)sub_41BD50;
  dword_7CA658 = (int)sub_41BEC0;
  dword_7CA6D8 = (int)sub_41C030;
  dword_7CA624 = (int)sub_41B820;
  dword_7CA62C = (int)sub_41B950;
  dword_7CA64C = (int)sub_41BA90;
  dword_7CA63C = (int)sub_41BD50;
  dword_7CA65C = (int)sub_41BEC0;
  return sub_41BEC0;
}

// 0x41b820  sub_41B820
__int16 __usercall sub_41B820/*@<ax>*/(int a1/*@<eax>*/)
{
  unsigned int v1; // esi
  int *v2; // edx
  _DWORD *v3; // ebp
  int v4; // eax
  int v5; // edi
  unsigned int v6; // ebx
  unsigned int v7; // ecx
  bool v8; // cf
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  char *v11; // edi
  char v12; // bl
  unsigned int v13; // ecx
  int v15; // [esp-8h] [ebp-18h]
  _DWORD *v16; // [esp-4h] [ebp-14h]

  LOBYTE(a1) = dword_553424;
  BYTE1(a1) = dword_553424;
  v1 = dword_5546A0;
  v4 = a1 << 16;
  v2 = &dword_553460[dword_5546A0];
  LOBYTE(v4) = dword_553424;
  v3 = (_DWORD *)((char *)&unk_555FE0 + 64 * dword_5546A0);
  BYTE1(v4) = dword_553424;
  while ( v1 <= dword_555FCC )
  {
    v16 = v3;
    v5 = *v2 + dword_554494;
    do
    {
      v6 = v3[2];
      v7 = v3[3];
      v8 = v7 < v6;
      v9 = v7 - v6;
      if ( !v8 )
      {
        v15 = v5;
        v10 = v9 + 1;
        v11 = (char *)(v6 + v5);
        v12 = v10;
        if ( v10 >= 8 )
        {
          v13 = v10 >> 2;
          memset32(v11, v4, v13);
          v11 += 4 * v13;
          v10 = v12 & 3;
        }
        memset(v11, v4, v10);
        v5 = v15;
      }
      v3 = (_DWORD *)*v3;
    }
    while ( v3 != NULL );
    ++v1;
    ++v2;
    v3 = v16 + 16;
  }
  return v4;
}

// 0x41b8a0  sub_41B8A0
int sub_41B8A0()
{
  int result; // eax
  int v1; // edx
  char *v2; // ebp
  int v3; // edi
  _DWORD *v4; // esi
  int v5; // ecx
  int v6; // eax
  unsigned __int8 *v7; // ecx
  int v8; // ebx
  int *v9; // [esp+4h] [ebp-8h]
  int v10; // [esp+8h] [ebp-4h]

  result = dword_5546A0;
  v10 = dword_5546A0;
  v1 = dword_5F84E4 + (dword_553424 << 8);
  if ( dword_5546A0 < dword_555FCC )
  {
    v2 = (char *)&unk_555FE0 + 64 * dword_5546A0;
    v9 = &dword_553460[dword_5546A0];
    do
    {
      v3 = *v9 + dword_554494;
      v4 = v2;
      if ( v2 != NULL )
      {
        do
        {
          v5 = v4[2];
          v6 = v4[3] - v5;
          if ( v6 > 0 )
          {
            v7 = (unsigned __int8 *)(v3 + v5);
            do
            {
              v8 = *v7++;
              --v6;
              *(v7 - 1) = *(_BYTE *)(v1 + v8);
            }
            while ( v6 > 0 );
          }
          v4 = (_DWORD *)*v4;
        }
        while ( v4 != NULL );
        result = v10;
      }
      ++result;
      v2 += 64;
      v10 = result;
      ++v9;
    }
    while ( result < dword_555FCC );
  }
  return result;
}

// 0x41b950  sub_41B950
int __thiscall sub_41B950(void *this)
{
  int *v1; // ebp
  int v2; // edx
  int result; // eax
  int *v4; // ecx
  _DWORD *v5; // ebp
  int v6; // edx
  int v7; // esi
  int v8; // eax
  int v9; // ebx
  int v10; // edi
  int v11; // edx
  int v12; // eax
  _BYTE *v13; // esi
  int v14; // edx
  int v15; // edi
  int v16; // ecx
  bool v17; // cf
  int v18; // ebx
  int v19; // ebp
  int v20; // edi
  int v21; // ecx
  int *v22; // [esp-10h] [ebp-14h]
  void *v23; // [esp+0h] [ebp-4h]
  int savedregs; // [esp+4h] [ebp+0h] BYREF

  v1 = &savedregs;
  v23 = this;
  v2 = dword_5546A0;
  result = dword_555FCC;
  for ( dword_554468 = dword_5546A0; v2 <= dword_555FCC; dword_554468 = v2 )
  {
    v4 = (int *)((char *)&unk_555FE0 + 64 * v2);
    dword_554460 = dword_554494 + dword_553460[v2];
    *(v1 - 1) = (int)v4;
    if ( v4 != NULL )
    {
      while ( 1 )
      {
        dword_55343C = v4[3] - v4[2] + 1;
        if ( dword_55343C > 0 )
        {
          v22 = v1;
          v5 = (_DWORD *)*(v1 - 1);
          v6 = v5[7];
          v7 = v5[9];
          dword_553428 = v6 << 16;
          v8 = v5[6];
          dword_555FC8 = v7 << 16;
          v9 = v5[8];
          v10 = v9;
          dword_553414[0] = (v7 >> 16 << dword_5A7CA4) + (v6 >> 16);
          dword_553410 = dword_565FE8 + dword_553414[0];
          v11 = v8;
          v9 <<= 16;
          v12 = v8 << 16;
          v13 = (_BYTE *)((v10 >> 16 << dword_5A7CA4) + (v11 >> 16) + dword_553418);
          v14 = dword_553428;
          v15 = v5[2] + dword_554460;
          v16 = -dword_55343C;
          v17 = __CFADD__(dword_555FC8, v9);
          v18 = dword_555FC8 + v9;
          v19 = -v17;
          v20 = v15 + dword_55343C;
          do
          {
            LOBYTE(v18) = *v13;
            v13 = (_BYTE *)((__PAIR64__((unsigned int)v13, v14) + __PAIR64__(dword_553414[v19], v12)) >> 32);
            v12 += v14;
            v17 = __CFADD__(dword_555FC8, v18);
            v18 += dword_555FC8;
            v19 = -v17;
            *(_BYTE *)(v20 + v16++) = v18;
          }
          while ( v16 != 0 );
          v1 = v22;
          v2 = dword_554468;
          v4 = (int *)*(v22 - 1);
        }
        v21 = *v4;
        *(v1 - 1) = v21;
        if ( v21 == 0 )
          break;
        v4 = (int *)*(v1 - 1);
      }
    }
    result = dword_555FCC;
    ++v2;
  }
  return result;
}

// 0x41ba90  sub_41BA90
int sub_41BA90()
{
  int *v0; // ebp
  int result; // eax
  char *v2; // edx
  int v3; // esi
  int *v4; // ecx
  int v5; // ebx
  _DWORD *v6; // ebp
  int v7; // edx
  int v8; // esi
  int v9; // eax
  int v10; // ebx
  int v11; // edi
  int v12; // edx
  int v13; // eax
  _BYTE *v14; // esi
  int v15; // edx
  int v16; // edi
  int v17; // ecx
  bool v18; // cf
  int v19; // ebx
  int v20; // ebp
  int v21; // edi
  int v22; // ecx
  int v23; // esi
  bool v24; // cc
  int *v25; // [esp-10h] [ebp-20h]
  char *v26; // [esp+0h] [ebp-10h]
  int v27; // [esp+4h] [ebp-Ch]
  int *v28; // [esp+8h] [ebp-8h]
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v0 = &savedregs;
  result = dword_5546A0;
  v27 = dword_5546A0;
  if ( dword_5546A0 < dword_555FCC )
  {
    v2 = (char *)&unk_555FE0 + 64 * dword_5546A0;
    v28 = &dword_553460[dword_5546A0];
    v26 = v2;
    do
    {
      v3 = dword_554494;
      v4 = (int *)v2;
      v5 = *(_DWORD *)*(v0 - 2);
      *(v0 - 1) = (int)v2;
      dword_554460 = v5 + v3;
      if ( v2 != NULL )
      {
        while ( 1 )
        {
          dword_55343C = v4[3] - v4[2] + 1;
          if ( dword_55343C > 0 )
          {
            v25 = v0;
            v6 = (_DWORD *)*(v0 - 1);
            v7 = v6[7];
            v8 = v6[9];
            dword_553428 = v7 << 16;
            v9 = v6[6];
            dword_555FC8 = v8 << 16;
            v10 = v6[8];
            v11 = v10;
            dword_553414[0] = (v8 >> 16 << dword_5A7CA4) + (v7 >> 16);
            dword_553410 = dword_565FE8 + dword_553414[0];
            v12 = v9;
            v10 <<= 16;
            v13 = v9 << 16;
            v14 = (_BYTE *)((v11 >> 16 << dword_5A7CA4) + (v12 >> 16) + dword_553418);
            v15 = dword_553428;
            v16 = v6[2] + dword_554460;
            v17 = -dword_55343C;
            v18 = __CFADD__(dword_555FC8, v10);
            v19 = dword_555FC8 + v10;
            v20 = -v18;
            v21 = v16 + dword_55343C;
            do
            {
              LOBYTE(v19) = *v14;
              v14 = (_BYTE *)((__PAIR64__((unsigned int)v14, v15) + __PAIR64__(dword_553414[v20], v13)) >> 32);
              v13 += v15;
              v18 = __CFADD__(dword_555FC8, v19);
              v19 += dword_555FC8;
              v20 = -v18;
              if ( (_BYTE)v19 != 0 )
                *(_BYTE *)(v21 + v17) = v19;
              ++v17;
            }
            while ( v17 != 0 );
            v0 = v25;
            v4 = (int *)*(v25 - 1);
            v2 = (char *)*(v25 - 4);
          }
          v22 = *v4;
          *(v0 - 1) = v22;
          if ( v22 == 0 )
            break;
          v4 = (int *)*(v0 - 1);
        }
        result = *(v0 - 3);
      }
      ++result;
      v2 += 64;
      v23 = *(v0 - 2) + 4;
      v24 = result < dword_555FCC;
      *(v0 - 3) = result;
      *(v0 - 4) = (int)v2;
      *(v0 - 2) = v23;
    }
    while ( v24 );
  }
  return result;
}

// 0x41bbf0  sub_41BBF0
int sub_41BBF0()
{
  int *v0; // ebp
  int result; // eax
  char *v2; // edx
  int v3; // esi
  int *v4; // ecx
  int v5; // ebx
  _DWORD *v6; // ebp
  int v7; // edx
  int v8; // esi
  int v9; // eax
  int v10; // ebx
  int v11; // edi
  int v12; // edx
  int v13; // eax
  _BYTE *v14; // esi
  int v15; // edx
  int v16; // edi
  int v17; // ecx
  bool v18; // cf
  int v19; // ebx
  int v20; // ebp
  int v21; // edi
  int v22; // ecx
  int v23; // esi
  bool v24; // cc
  int *v25; // [esp-10h] [ebp-20h]
  char *v26; // [esp+0h] [ebp-10h]
  int v27; // [esp+4h] [ebp-Ch]
  int *v28; // [esp+8h] [ebp-8h]
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v0 = &savedregs;
  result = dword_5546A0;
  v27 = dword_5546A0;
  if ( dword_5546A0 <= dword_555FCC )
  {
    v2 = (char *)&unk_555FE0 + 64 * dword_5546A0;
    v28 = &dword_553460[dword_5546A0];
    v26 = v2;
    do
    {
      v3 = dword_554494;
      v4 = (int *)v2;
      v5 = *(_DWORD *)*(v0 - 2);
      *(v0 - 1) = (int)v2;
      dword_554460 = v5 + v3;
      if ( v2 != NULL )
      {
        while ( 1 )
        {
          dword_55343C = v4[3] - v4[2] + 1;
          if ( dword_55343C > 0 )
          {
            v25 = v0;
            v6 = (_DWORD *)*(v0 - 1);
            v7 = v6[7];
            v8 = v6[9];
            dword_553428 = v7 << 16;
            v9 = v6[6];
            dword_555FC8 = v8 << 16;
            v10 = v6[8];
            v11 = v10;
            dword_553414[0] = (v8 >> 16 << dword_5A7CA4) + (v7 >> 16);
            dword_553410 = dword_565FE8 + dword_553414[0];
            v12 = v9;
            v10 <<= 16;
            v13 = v9 << 16;
            v14 = (_BYTE *)((v11 >> 16 << dword_5A7CA4) + (v12 >> 16) + dword_553418);
            v15 = dword_553428;
            v16 = v6[2] + dword_554460;
            v17 = -dword_55343C;
            v18 = __CFADD__(dword_555FC8, v10);
            v19 = dword_555FC8 + v10;
            v20 = -v18;
            v21 = v16 + dword_55343C;
            do
            {
              LOBYTE(v19) = *v14;
              v14 = (_BYTE *)((__PAIR64__((unsigned int)v14, v15) + __PAIR64__(dword_553414[v20], v13)) >> 32);
              v13 += v15;
              v18 = __CFADD__(dword_555FC8, v19);
              v19 += dword_555FC8;
              v20 = -v18;
              if ( (_BYTE)v19 != 0 )
                *(_BYTE *)(v21 + v17) = dword_553424;
              ++v17;
            }
            while ( v17 != 0 );
            v0 = v25;
            v4 = (int *)*(v25 - 1);
            v2 = (char *)*(v25 - 4);
          }
          v22 = *v4;
          *(v0 - 1) = v22;
          if ( v22 == 0 )
            break;
          v4 = (int *)*(v0 - 1);
        }
        result = *(v0 - 3);
      }
      ++result;
      v2 += 64;
      v23 = *(v0 - 2) + 4;
      v24 = result <= dword_555FCC;
      *(v0 - 3) = result;
      *(v0 - 4) = (int)v2;
      *(v0 - 2) = v23;
    }
    while ( v24 );
  }
  return result;
}

// 0x41bd50  sub_41BD50
int sub_41BD50()
{
  int *v0; // ebp
  int result; // eax
  char *v2; // edx
  int v3; // esi
  int *v4; // ecx
  int v5; // ebx
  _DWORD *v6; // ebp
  int v7; // ebx
  int v8; // esi
  int v9; // eax
  int v10; // edx
  int v11; // edi
  int v12; // eax
  _BYTE *v13; // esi
  int v14; // ebx
  int v15; // ecx
  int v16; // edi
  bool v17; // cf
  int v18; // edx
  int v19; // ebp
  int v20; // edi
  int v21; // ecx
  int v22; // esi
  bool v23; // cc
  int *v24; // [esp-10h] [ebp-20h]
  char *v25; // [esp+0h] [ebp-10h]
  int v26; // [esp+4h] [ebp-Ch]
  int *v27; // [esp+8h] [ebp-8h]
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v0 = &savedregs;
  result = dword_5546A0;
  v26 = dword_5546A0;
  if ( dword_5546A0 < dword_555FCC )
  {
    v2 = (char *)&unk_555FE0 + 64 * dword_5546A0;
    v27 = &dword_553460[dword_5546A0];
    v25 = v2;
    do
    {
      v3 = dword_554494;
      v4 = (int *)v2;
      v5 = *(_DWORD *)*(v0 - 2);
      *(v0 - 1) = (int)v2;
      dword_554460 = v5 + v3;
      if ( v2 != NULL )
      {
        while ( 1 )
        {
          dword_55343C = v4[3] - v4[2];
          if ( dword_55343C > 0 )
          {
            v24 = v0;
            v6 = (_DWORD *)*(v0 - 1);
            v7 = v6[7];
            v8 = v6[9];
            dword_553428 = v7 << 16;
            v9 = v6[6];
            dword_555FC8 = v8 << 16;
            v10 = v6[8];
            v11 = v10;
            dword_553414[0] = (v8 >> 16 << dword_5A7CA4) + (v7 >> 16);
            dword_553410 = dword_565FE8 + dword_553414[0];
            v14 = v9;
            v10 <<= 16;
            v12 = v9 << 16;
            v13 = (_BYTE *)((v11 >> 16 << dword_5A7CA4) + (v14 >> 16) + dword_553418);
            HIWORD(v14) = 0;
            v15 = -dword_55343C;
            v16 = v6[2] + dword_554460;
            v17 = __CFADD__(dword_555FC8, v10);
            v18 = dword_555FC8 + v10;
            v19 = -v17;
            v20 = v16 + dword_55343C;
            do
            {
              BYTE1(v14) = *v13;
              v13 = (_BYTE *)((__PAIR64__((unsigned int)v13, dword_553428) + __PAIR64__(dword_553414[v19], v12)) >> 32);
              v12 += dword_553428;
              LOBYTE(v14) = *(_BYTE *)(v20 + v15);
              v17 = __CFADD__(dword_555FC8, v18);
              v18 += dword_555FC8;
              v19 = -v17;
              *(_BYTE *)(v20 + v15++) = *(_BYTE *)(dword_5F84E4 + v14);
            }
            while ( v15 != 0 );
            v0 = v24;
            v4 = (int *)*(v24 - 1);
            v2 = (char *)*(v24 - 4);
          }
          v21 = *v4;
          *(v0 - 1) = v21;
          if ( v21 == 0 )
            break;
          v4 = (int *)*(v0 - 1);
        }
        result = *(v0 - 3);
      }
      ++result;
      v2 += 64;
      v22 = *(v0 - 2) + 4;
      v23 = result < dword_555FCC;
      *(v0 - 3) = result;
      *(v0 - 4) = (int)v2;
      *(v0 - 2) = v22;
    }
    while ( v23 );
  }
  return result;
}

// 0x41bec0  sub_41BEC0
int sub_41BEC0()
{
  int *v0; // ebp
  int result; // eax
  char *v2; // edx
  int v3; // esi
  int *v4; // ecx
  int v5; // ebx
  _DWORD *v6; // ebp
  int v7; // ebx
  int v8; // esi
  int v9; // eax
  int v10; // edx
  int v11; // edi
  int v12; // eax
  _BYTE *v13; // esi
  int v14; // ebx
  int v15; // edi
  int v16; // ecx
  bool v17; // cf
  int v18; // edx
  int v19; // ebp
  int v20; // edi
  int v21; // ecx
  int v22; // esi
  bool v23; // cc
  int *v24; // [esp-10h] [ebp-20h]
  char *v25; // [esp+0h] [ebp-10h]
  int v26; // [esp+4h] [ebp-Ch]
  int *v27; // [esp+8h] [ebp-8h]
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v0 = &savedregs;
  result = dword_5546A0;
  v26 = dword_5546A0;
  if ( dword_5546A0 < dword_555FCC )
  {
    v2 = (char *)&unk_555FE0 + 64 * dword_5546A0;
    v27 = &dword_553460[dword_5546A0];
    v25 = v2;
    do
    {
      v3 = dword_554494;
      v4 = (int *)v2;
      v5 = *(_DWORD *)*(v0 - 2);
      *(v0 - 1) = (int)v2;
      dword_554460 = v5 + v3;
      if ( v2 != NULL )
      {
        while ( 1 )
        {
          dword_55343C = v4[3] - v4[2];
          if ( dword_55343C > 0 )
          {
            v24 = v0;
            v6 = (_DWORD *)*(v0 - 1);
            v7 = v6[7];
            v8 = v6[9];
            dword_553428 = v7 << 16;
            v9 = v6[6];
            dword_555FC8 = v8 << 16;
            v10 = v6[8];
            v11 = v10;
            dword_553414[0] = (v8 >> 16 << dword_5A7CA4) + (v7 >> 16);
            dword_553410 = dword_565FE8 + dword_553414[0];
            v14 = v9;
            v10 <<= 16;
            v12 = v9 << 16;
            v13 = (_BYTE *)((v11 >> 16 << dword_5A7CA4) + (v14 >> 16) + dword_553418);
            HIWORD(v14) = 0;
            v15 = v6[2] + dword_554460;
            v16 = -dword_55343C;
            v17 = __CFADD__(dword_555FC8, v10);
            v18 = dword_555FC8 + v10;
            v19 = -v17;
            v20 = v15 + dword_55343C;
            do
            {
              BYTE1(v14) = *v13;
              v13 = (_BYTE *)((__PAIR64__((unsigned int)v13, dword_553428) + __PAIR64__(dword_553414[v19], v12)) >> 32);
              v12 += dword_553428;
              v17 = __CFADD__(dword_555FC8, v18);
              v18 += dword_555FC8;
              v19 = -v17;
              if ( BYTE1(v14) != 0 )
              {
                LOBYTE(v14) = *(_BYTE *)(v20 + v16);
                *(_BYTE *)(v20 + v16) = *(_BYTE *)(dword_5F84E4 + v14);
              }
              ++v16;
            }
            while ( v16 != 0 );
            v0 = v24;
            v4 = (int *)*(v24 - 1);
            v2 = (char *)*(v24 - 4);
          }
          v21 = *v4;
          *(v0 - 1) = v21;
          if ( v21 == 0 )
            break;
          v4 = (int *)*(v0 - 1);
        }
        result = *(v0 - 3);
      }
      ++result;
      v2 += 64;
      v22 = *(v0 - 2) + 4;
      v23 = result < dword_555FCC;
      *(v0 - 3) = result;
      *(v0 - 4) = (int)v2;
      *(v0 - 2) = v22;
    }
    while ( v23 );
  }
  return result;
}

// 0x41c030  sub_41C030
int sub_41C030()
{
  int *v0; // ebp
  int result; // eax
  char *v2; // edx
  int v3; // esi
  int *v4; // ecx
  int v5; // ebx
  _DWORD *v6; // ebp
  int v7; // ebx
  int v8; // esi
  int v9; // eax
  int v10; // edx
  int v11; // edi
  int v12; // eax
  char *v13; // esi
  int v14; // ebx
  int v15; // edi
  int v16; // ecx
  bool v17; // cf
  int v18; // edx
  int v19; // ebp
  int v20; // edi
  char v21; // bh
  int v22; // ecx
  int v23; // esi
  bool v24; // cc
  int *v25; // [esp-10h] [ebp-20h]
  char *v26; // [esp+0h] [ebp-10h]
  int v27; // [esp+4h] [ebp-Ch]
  int *v28; // [esp+8h] [ebp-8h]
  int savedregs; // [esp+10h] [ebp+0h] BYREF

  v0 = &savedregs;
  result = dword_5546A0;
  v27 = dword_5546A0;
  if ( dword_5546A0 < dword_555FCC )
  {
    v2 = (char *)&unk_555FE0 + 64 * dword_5546A0;
    v28 = &dword_553460[dword_5546A0];
    v26 = v2;
    do
    {
      v3 = dword_554494;
      v4 = (int *)v2;
      v5 = *(_DWORD *)*(v0 - 2);
      *(v0 - 1) = (int)v2;
      dword_554460 = v5 + v3;
      if ( v2 != NULL )
      {
        while ( 1 )
        {
          dword_55343C = v4[3] - v4[2];
          if ( dword_55343C > 0 )
          {
            v25 = v0;
            v6 = (_DWORD *)*(v0 - 1);
            v7 = v6[7];
            v8 = v6[9];
            dword_553428 = v7 << 16;
            v9 = v6[6];
            dword_555FC8 = v8 << 16;
            v10 = v6[8];
            v11 = v10;
            dword_553414[0] = (v8 >> 16 << dword_5A7CA4) + (v7 >> 16);
            dword_553410 = dword_565FE8 + dword_553414[0];
            v14 = v9;
            v10 <<= 16;
            v12 = v9 << 16;
            v13 = (char *)((v11 >> 16 << dword_5A7CA4) + (v14 >> 16) + dword_553418);
            HIWORD(v14) = 0;
            v15 = v6[2] + dword_554460;
            v16 = -dword_55343C;
            v17 = __CFADD__(dword_555FC8, v10);
            v18 = dword_555FC8 + v10;
            v19 = -v17;
            v20 = v15 + dword_55343C;
            do
            {
              v21 = *v13;
              v13 = (char *)((__PAIR64__((unsigned int)v13, dword_553428) + __PAIR64__(dword_553414[v19], v12)) >> 32);
              v12 += dword_553428;
              v17 = __CFADD__(dword_555FC8, v18);
              v18 += dword_555FC8;
              v19 = -v17;
              if ( v21 != 0 )
              {
                BYTE1(v14) = dword_553424;
                LOBYTE(v14) = *(_BYTE *)(v20 + v16);
                *(_BYTE *)(v20 + v16) = *(_BYTE *)(dword_5F84E4 + v14);
              }
              ++v16;
            }
            while ( v16 != 0 );
            v0 = v25;
            v4 = (int *)*(v25 - 1);
            v2 = (char *)*(v25 - 4);
          }
          v22 = *v4;
          *(v0 - 1) = v22;
          if ( v22 == 0 )
            break;
          v4 = (int *)*(v0 - 1);
        }
        result = *(v0 - 3);
      }
      ++result;
      v2 += 64;
      v23 = *(v0 - 2) + 4;
      v24 = result < dword_555FCC;
      *(v0 - 3) = result;
      *(v0 - 4) = (int)v2;
      *(v0 - 2) = v23;
    }
    while ( v24 );
  }
  return result;
}

// 0x41c1a0  sub_41C1A0
int sub_41C1A0()
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
  _BYTE *v15; // esi
  signed int v16; // ebp
  int v17; // edi
  double v18; // st3
  int v19; // eax
  int v20; // ebx
  signed int v21; // edi
  int v22; // ecx
  int v23; // eax
  int result; // eax
  signed int v25; // ecx
  int v26; // eax
  int v27; // edx
  char v28; // cl
  float v29; // [esp+10h] [ebp-24h]
  int v30; // [esp+10h] [ebp-24h]
  int v31; // [esp+10h] [ebp-24h]
  float v32; // [esp+14h] [ebp-20h]
  float v33; // [esp+18h] [ebp-1Ch]
  float v34; // [esp+1Ch] [ebp-18h]
  float v35; // [esp+20h] [ebp-14h]
  float v36; // [esp+24h] [ebp-10h]
  int v37; // [esp+24h] [ebp-10h]
  float v38; // [esp+28h] [ebp-Ch]
  float v39; // [esp+2Ch] [ebp-8h]
  float v40; // [esp+2Ch] [ebp-8h]
  int i; // [esp+2Ch] [ebp-8h]
  float v42; // [esp+30h] [ebp-4h]
  int v43; // [esp+30h] [ebp-4h]

  v0 = *((int **)off_46AF70 + 8);
  v1 = *v0;
  v2 = **((_DWORD **)off_46AF70 + 14);
  v3 = v0[1];
  v4 = *(_DWORD *)(*((_DWORD *)off_46AF70 + 20) + 4);
  v34 = (float)*v0;
  v33 = v34;
  v5 = (double)v4;
  v35 = (float)v2;
  v38 = (float)v3;
  v29 = v35;
  v36 = v5;
  v32 = v38;
  if ( v7 != 0 )
    v33 = 0.0;
  if ( v38 < 0.0 )
    v32 = 0.0;
  v8 = (double)(unsigned __int16)dword_4EFB4C;
  if ( v35 > v8 )
    v29 = v8;
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
    v13 = (v33 - v34) * (*((float *)off_46AF70 + 15) - *((float *)off_46AF70 + 9)) / (double)(v2 - v1) + v40;
  if ( v29 == v35 )
    v14 = v42;
  else
    v14 = v42 - (v35 - v29) * (*((float *)off_46AF70 + 15) - *((float *)off_46AF70 + 9)) / (double)(v2 - v1);
  if ( v5 != v36 )
    v9 = v9 + (v36 - v5) * (*((float *)off_46AF70 + 10) - *((float *)off_46AF70 + 22)) / (double)(v4 - v3);
  if ( v32 != v38 )
    v11 = v11 - (v32 - v38) * (*((float *)off_46AF70 + 10) - *((float *)off_46AF70 + 22)) / (double)(v4 - v3);
  v15 = (_BYTE *)(dword_554494 + (__int64)v33 + dword_553460[(__int64)v32]);
  v16 = (unsigned int)(__int64)v13 << 16;
  v17 = (__int64)((double)(int)(__int64)v29 - v33);
  v18 = v14 - v13;
  if ( v17 != 0 )
    v19 = (int)((unsigned int)(__int64)v18 << 16) / v17;
  else
    v19 = (unsigned int)(__int64)v18 << 16;
  v43 = v19;
  v20 = v16 + v19 * v17;
  v37 = dword_46AF6C - v17;
  v30 = (__int64)((double)(int)(__int64)v11 - v9);
  v21 = (v30 + (unsigned int)(__int64)v9) << 16;
  v22 = (__int64)((double)(int)(__int64)v5 - v32);
  if ( v22 != 0 )
    v23 = (v30 << 16) / v22;
  else
    v23 = v30 << 16;
  v31 = v23;
  result = v22 * v23;
  v25 = v21 - result;
  for ( i = v21 - result; v21 > v25; v15 += v37 )
  {
    v26 = v16;
    v27 = dword_565FE8 * (v21 >> 16);
    if ( v16 < v20 )
    {
      do
      {
        v28 = *(_BYTE *)(v27 + (v26 >> 16) + dword_553418);
        if ( v28 != 0 )
          *v15 = v28;
        ++v15;
        v26 += v43;
      }
      while ( v26 < v20 );
      v25 = i;
      v16 = (unsigned int)(__int64)v13 << 16;
    }
    result = v37;
    v21 -= v31;
  }
  return result;
}

// 0x41c4b0  sub_41C4B0
signed int sub_41C4B0()
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
  _BYTE *v15; // esi
  int v16; // edi
  double v17; // st3
  int v18; // eax
  signed int v19; // ebx
  int v20; // edi
  signed int v21; // ebp
  int v22; // ecx
  int v23; // edi
  int v24; // edi
  signed int result; // eax
  signed int v26; // ecx
  int v27; // edi
  float v28; // [esp+10h] [ebp-24h]
  float v29; // [esp+14h] [ebp-20h]
  float v30; // [esp+18h] [ebp-1Ch]
  float v31; // [esp+1Ch] [ebp-18h]
  int v32; // [esp+1Ch] [ebp-18h]
  float v33; // [esp+20h] [ebp-14h]
  signed int v34; // [esp+20h] [ebp-14h]
  float v35; // [esp+24h] [ebp-10h]
  int v36; // [esp+24h] [ebp-10h]
  float v37; // [esp+28h] [ebp-Ch]
  int v38; // [esp+28h] [ebp-Ch]
  float v39; // [esp+2Ch] [ebp-8h]
  float v40; // [esp+2Ch] [ebp-8h]
  float v41; // [esp+30h] [ebp-4h]
  int i; // [esp+30h] [ebp-4h]

  v0 = *((int **)off_46AF70 + 8);
  v1 = *v0;
  v2 = **((_DWORD **)off_46AF70 + 14);
  v3 = v0[1];
  v4 = *(_DWORD *)(*((_DWORD *)off_46AF70 + 20) + 4);
  v31 = (float)*v0;
  v30 = v31;
  v5 = (double)v4;
  v33 = (float)v2;
  v37 = (float)v3;
  v29 = v33;
  v35 = v5;
  v28 = v37;
  if ( v7 != 0 )
    v30 = 0.0;
  if ( v37 < 0.0 )
    v28 = 0.0;
  v8 = (double)(unsigned __int16)dword_4EFB4C;
  if ( v33 > v8 )
    v29 = v8;
  v39 = (float)HIWORD(dword_4EFB4C);
  if ( v5 > v39 )
    v5 = v39;
  v9 = *((float *)off_46AF70 + 22);
  v40 = *((float *)off_46AF70 + 9);
  v11 = *((float *)off_46AF70 + 10);
  v41 = *((float *)off_46AF70 + 15);
  if ( v12 != 0 )
    v13 = v40;
  else
    v13 = (v30 - v31) * (*((float *)off_46AF70 + 15) - *((float *)off_46AF70 + 9)) / (double)(v2 - v1) + v40;
  if ( v29 == v33 )
    v14 = v41;
  else
    v14 = v41 - (v33 - v29) * (*((float *)off_46AF70 + 15) - *((float *)off_46AF70 + 9)) / (double)(v2 - v1);
  if ( v5 != v35 )
    v9 = v9 + (v35 - v5) * (*((float *)off_46AF70 + 10) - *((float *)off_46AF70 + 22)) / (double)(v4 - v3);
  if ( v28 != v37 )
    v11 = v11 - (v28 - v37) * (*((float *)off_46AF70 + 10) - *((float *)off_46AF70 + 22)) / (double)(v4 - v3);
  v15 = (_BYTE *)(dword_554494 + (__int64)v30 + dword_553460[(__int64)v28]);
  v16 = (__int64)((double)(int)(__int64)v29 - v30);
  v17 = v14 - v13;
  if ( v16 != 0 )
    v18 = (int)((unsigned int)(__int64)v17 << 16) / v16;
  else
    v18 = (unsigned int)(__int64)v17 << 16;
  v38 = v18;
  v19 = ((unsigned int)(__int64)v13 << 16) + v18 * v16;
  v34 = v19;
  v32 = dword_46AF6C - v16;
  v20 = (__int64)((double)(int)(__int64)v11 - v9);
  v21 = (v20 + (unsigned int)(__int64)v9) << 16;
  v22 = (__int64)((double)(int)(__int64)v5 - v28);
  if ( v22 != 0 )
  {
    v36 = (v20 << 16) / v22;
    v23 = v36;
  }
  else
  {
    v23 = v20 << 16;
    v36 = v23;
  }
  v24 = v22 * v23;
  result = v21 - v24;
  for ( i = v21 - v24; v21 > result; v15 += v32 )
  {
    v26 = (unsigned int)(__int64)v13 << 16;
    v27 = dword_565FE8 * (v21 >> 16);
    if ( v26 < v19 )
    {
      do
      {
        if ( *(_BYTE *)(v27 + (v26 >> 16) + dword_553418) != 0 )
        {
          v19 = v34;
          *v15 = *(_BYTE *)((unsigned __int8)*v15
                          + (*(unsigned __int8 *)(v27 + (v26 >> 16) + dword_553418) << 8)
                          + dword_5F84E4);
        }
        ++v15;
        v26 += v38;
      }
      while ( v26 < v19 );
      result = i;
    }
    v21 -= v36;
  }
  return result;
}

// 0x41c7e0  sub_41C7E0
int __cdecl sub_41C7E0(_DWORD *a1, int a2, int a3)
{
  char v3; // sf
  int result; // eax

  result = (unsigned __int64)(a3 * (__int64)a2) >> 16;
  if ( v3 != ((unsigned __int64)(a3 * (__int64)a2) >> 32 != 0) )
    ++result;
  *a1 = result;
  return result;
}

// 0x41c800  sub_41C800
char __cdecl sub_41C800(_DWORD *a1)
{
  int v1; // eax
  int v2; // esi
  int v3; // edx
  int v4; // esi

  LOBYTE(v1) = *((_BYTE *)off_46AF70 + 8);
  v2 = a1[3] - a1[2];
  if ( (v1 & 2) != 0 )
  {
    v1 = a1[6] + v2 * a1[7];
    v3 = a1[8] + v2 * a1[9];
    if ( v1 < 0
      || v3 < 0
      || (v4 = 12 * *(_DWORD *)off_46AF70, v1 > dword_52FD60[v4] << 16)
      || (v1 = dword_52FD64[v4] << 16, v3 > v1) )
    {
      a1[3] = 1;
      a1[2] = 2;
    }
  }
  return v1;
}

// 0x41c870  sub_41C870
BOOL sub_41C870()
{
  return lpBits != NULL;
}

// 0x41c880  sub_41C880
int sub_41C880()
{
  int v0; // ecx

  if ( dword_62364C != 0 )
    v0 = dword_46AF68 - dword_553460[dword_46AF5C - dword_62364C];
  else
    v0 = dword_46AF68;
  memset((void *)dword_553450, 0, dword_46AF64 * v0);
  return 0;
}

// 0x41c8d0  sub_41C8D0
_DWORD *__cdecl sub_41C8D0(int a1)
{
  _DWORD *result; // eax

  dword_4B1A70 = sub_41D330;
  if ( dword_9CA824 != 0 )
  {
    _cfltcvt_init_3();
    sub_418230();
  }
  else
  {
    sub_41A680(a1);
    sub_41B750();
  }
  result = &unk_555FE0;
  do
  {
    *result = 0;
    result += 16;
  }
  while ( (int)result < (int)&dword_565FE0 );
  return result;
}

// 0x41c920  sub_41C920
int __cdecl sub_41C920(int *a1, int a2)
{
  int result; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // ecx
  int v6; // esi
  int v7; // edi
  int *v8; // edx
  int v9; // ecx

  result = *a1;
  v3 = *(_DWORD *)(*a1 + 4);
  v4 = *(_DWORD *)(*(_DWORD *)a2 + 4) - v3;
  if ( v4 != 0 )
  {
    if ( v4 > 0 )
    {
      v6 = *(_DWORD *)result << 16;
      result = ((**(_DWORD **)a2 - *(_DWORD *)result) << 16) / v4;
      if ( v3 <= *(_DWORD *)(*(_DWORD *)a2 + 4) )
      {
        v7 = v4 + 1;
        v8 = &dword_555FE8[16 * v3];
        do
        {
          v9 = v6;
          v6 += result;
          v9 >>= 16;
          v8[2] = v9;
          *v8 = v9;
          v8 += 16;
          --v7;
        }
        while ( v7 != 0 );
      }
    }
  }
  else
  {
    result = *(_DWORD *)result;
    v5 = v3 << 6;
    *(int *)((char *)dword_555FF0 + v5) = result;
    *(int *)((char *)dword_555FE8 + v5) = result;
  }
  return result;
}

// 0x41c990  sub_41C990
int __cdecl sub_41C990(int *a1, int a2)
{
  int result; // eax
  int v3; // ecx
  int v4; // edi
  int v5; // ecx
  int v6; // esi
  int *v7; // ecx
  int v8; // edi
  int v9; // edx

  result = *a1;
  v3 = *(_DWORD *)(*a1 + 4);
  v4 = *(_DWORD *)(*(_DWORD *)a2 + 4) - v3;
  if ( v4 != 0 )
  {
    if ( v4 > 0 )
    {
      v6 = *(_DWORD *)result << 16;
      result = ((**(_DWORD **)a2 - *(_DWORD *)result) << 16) / v4;
      if ( v3 <= *(_DWORD *)(*(_DWORD *)a2 + 4) )
      {
        v7 = &dword_555FEC[16 * v3];
        v8 = v4 + 1;
        do
        {
          v9 = v6;
          v6 += result;
          v9 >>= 16;
          v7[2] = v9;
          *v7 = v9;
          *((_BYTE *)v7 - 6) = 0;
          v7 += 16;
          --v8;
        }
        while ( v8 != 0 );
      }
    }
  }
  else
  {
    result = *(_DWORD *)result;
    v5 = v3 << 6;
    *(int *)((char *)&dword_555FF4 + v5) = result;
    *(int *)((char *)dword_555FEC + v5) = result;
    byte_555FE6[v5] = 0;
  }
  return result;
}

// 0x41ca10  sub_41CA10
int __cdecl sub_41CA10(int a1, float *a2)
{
  int v2; // ebp
  int result; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // ebx
  int v7; // esi
  double v8; // st7
  int v9; // ebx
  int v10; // ebp
  int v11; // ecx
  int v12; // ebp
  char *v13; // edi
  int v14; // eax
  int v15; // edx
  int v16; // esi
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // edx
  int v22; // ecx
  int v23; // ecx
  int v24; // edx
  int v25; // ecx
  int v26; // eax
  _DWORD *i; // esi
  int v28; // eax
  int v29; // edx
  int v30; // ecx
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // edx
  bool v37; // zf
  int v38; // [esp+10h] [ebp-18h] BYREF
  int v39; // [esp+14h] [ebp-14h]
  int v40; // [esp+18h] [ebp-10h]
  int v41; // [esp+1Ch] [ebp-Ch]
  int v42; // [esp+20h] [ebp-8h]
  int v43; // [esp+24h] [ebp-4h]

  v2 = a1;
  result = *(_DWORD *)a1;
  v4 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v41 = *(_DWORD *)(*(_DWORD *)a2 + 4);
  v5 = v41 - v4;
  v40 = v41 - v4;
  if ( v41 - v4 >= 0 )
  {
    a1 = v5 != 0 ? 0x10000 / v5 : 0;
    v6 = (__int64)*(float *)(v2 + 4);
    v7 = a1 * ((__int64)a2[1] - v6);
    v8 = *(float *)(v2 + 8);
    v9 = v6 << 16;
    v42 = v7;
    v39 = v9;
    v10 = (__int64)v8;
    result = v41;
    v11 = a1 * ((__int64)a2[2] - v10);
    v12 = v10 << 16;
    v43 = v11;
    if ( v4 <= v41 )
    {
      v13 = &byte_555FE6[64 * v4];
      v41 = v40 + 1;
      do
      {
        if ( *v13 == 0 )
        {
          v14 = *(_DWORD *)(v13 + 14) - *(_DWORD *)(v13 + 10);
          if ( v14 >= 0 )
          {
            v15 = *(_DWORD *)(v13 + 2);
            LOBYTE(a2) = 0;
            *v13 = 1;
            v16 = 0x10000 / (v14 + 1);
            v17 = *(_DWORD *)(v13 + 6);
            v40 = v16;
            if ( v15 <= v17 )
            {
              v18 = sub_41C7E0(&a1, *(_DWORD *)(v13 + 18) - v9, v16);
              v19 = *(_DWORD *)(v13 + 26);
              *(_DWORD *)(v13 + 22) = v18;
              *(_DWORD *)(v13 + 18) = v9;
              v20 = sub_41C7E0(&v38, v19 - v12, v16);
              v21 = *(_DWORD *)(v13 + 2);
              v22 = v21 - *(_DWORD *)(v13 + 10);
              *(_DWORD *)(v13 + 30) = v20;
              *(_DWORD *)(v13 + 26) = v12;
              if ( v22 > 0 )
              {
                *(_DWORD *)(v13 + 18) += v22 * a1;
                *(_DWORD *)(v13 + 26) = v12 + v22 * v38;
              }
              v23 = *(_DWORD *)(v13 + 6) - v21;
              LOBYTE(a2) = 1;
              if ( (*((_BYTE *)off_46AF70 + 8) & 2) != 0 )
              {
                v24 = *(_DWORD *)(v13 + 18) + *(_DWORD *)(v13 + 22) * v23;
                v25 = *(_DWORD *)(v13 + 26) + v20 * v23;
                if ( v24 < 0
                  || v25 < 0
                  || (v26 = 12 * *(_DWORD *)off_46AF70, v24 > dword_52FD60[v26] << 16)
                  || v25 > dword_52FD64[v26] << 16 )
                {
                  *(_DWORD *)(v13 + 6) = 1;
                  *(_DWORD *)(v13 + 2) = 2;
                }
              }
            }
            for ( i = *(_DWORD **)(v13 - 6); i != NULL; i = (_DWORD *)*i )
            {
              if ( i[2] <= i[3] )
              {
                if ( (_BYTE)a2 != 0 )
                {
                  v31 = a1;
                  i[6] = v9;
                  i[7] = v31;
                  i[9] = v38;
                  i[8] = v12;
                }
                else
                {
                  v28 = sub_41C7E0(&a1, i[6] - v9, v40);
                  v29 = i[8];
                  v30 = v40;
                  i[7] = v28;
                  i[6] = v9;
                  i[9] = sub_41C7E0(&v38, v29 - v12, v30);
                  i[8] = v12;
                  LOBYTE(a2) = 1;
                }
                v32 = i[2] - i[4];
                if ( v32 > 0 )
                {
                  i[6] += v32 * a1;
                  i[8] += v32 * v38;
                }
                v33 = i[3] - i[2];
                if ( (*((_BYTE *)off_46AF70 + 8) & 2) != 0 )
                {
                  v34 = i[6] + i[7] * v33;
                  v35 = i[8] + i[9] * v33;
                  if ( v34 < 0 || v35 < 0 )
                  {
                    i[3] = 1;
                    i[2] = 2;
                  }
                  else
                  {
                    v36 = 12 * *(_DWORD *)off_46AF70;
                    if ( v34 > dword_52FD60[v36] << 16 || v35 > dword_52FD64[v36] << 16 )
                    {
                      i[3] = 1;
                      i[2] = 2;
                    }
                    v9 = v39;
                  }
                }
              }
            }
            v7 = v42;
            v11 = v43;
          }
        }
        v9 += v7;
        v12 += v11;
        v13 += 64;
        result = v41 - 1;
        v37 = v41 == 1;
        v39 = v9;
        --v41;
      }
      while ( !v37 );
    }
  }
  return result;
}

// 0x41ccf0  sub_41CCF0
int __cdecl sub_41CCF0(float *a1, float *a2)
{
  int result; // eax
  int v4; // ebx
  int v5; // ecx
  int v6; // edi
  int v7; // ebp
  int v8; // esi
  int v9; // edi
  int *v10; // ebx
  int v11; // edx
  int *v12; // ecx
  int v13; // [esp+10h] [ebp-Ch]
  int v14; // [esp+14h] [ebp-8h]
  int v15; // [esp+18h] [ebp-4h]
  int v16; // [esp+20h] [ebp+4h]

  result = *(_DWORD *)a1;
  v13 = *(_DWORD *)(*(_DWORD *)a2 + 4);
  v4 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v5 = v13 - v4;
  v14 = v13 - v4;
  if ( v13 - v4 >= 0 )
  {
    v16 = v5 != 0 ? 0x10000 / v5 : 0;
    v6 = (__int64)a1[1];
    v7 = (__int64)a1[2];
    v8 = v6 << 16;
    v15 = v16 * ((__int64)a2[1] - v6);
    v9 = v7 << 16;
    result = v16 * ((__int64)a2[2] - v7);
    if ( v4 <= v13 )
    {
      v10 = &dword_555FF4[16 * v4];
      v11 = v14 + 1;
      do
      {
        v12 = v10 - 5;
        if ( *(v10 - 1) <= *v10 )
        {
          do
          {
            if ( v12[2] <= v12[3] )
            {
              v12[6] = v8;
              v12[8] = v9;
            }
            v12 = (int *)*v12;
          }
          while ( v12 != NULL );
          v8 += v15;
          v9 += result;
        }
        v10 += 16;
        --v11;
      }
      while ( v11 != 0 );
    }
  }
  return result;
}

// 0x41cdd0  sub_41CDD0
int __cdecl sub_41CDD0(int a1)
{
  int result; // eax
  int *v2; // ecx
  double v3; // st7
  double v4; // st7
  double v5; // st7
  double v6; // st7
  char v7; // cl

  result = a1;
  off_46AF70 = (_UNKNOWN *)a1;
  if ( *(_DWORD *)a1 != 0 )
  {
    dword_565FE8 = dword_52FD60[12 * *(_DWORD *)a1];
    dword_55340C = dword_52FD8C[12 * *(_DWORD *)a1];
    dword_553418 = dword_52FD8C[12 * *(_DWORD *)a1];
    if ( dword_55340C != 0 )
    {
      dword_5A7CA4 = byte_52FD70[48 * *(_DWORD *)a1];
      v2 = &dword_52FD64[12 * *(_DWORD *)a1];
      v3 = (double)(*v2 - 1) * *(float *)(a1 + 40);
      *(float *)(a1 + 40) = v3;
      *(float *)(a1 + 64) = v3;
      v4 = (double)(*v2 - 1) * *(float *)(a1 + 88);
      *(float *)(a1 + 88) = v4;
      *(float *)(a1 + 112) = v4;
      v5 = (double)(dword_565FE8 - 1) * *(float *)(a1 + 36);
      *(float *)(a1 + 36) = v5;
      *(float *)(a1 + 84) = v5;
      LOBYTE(v2) = *(_BYTE *)(a1 + 4);
      v6 = (double)(dword_565FE8 - 1) * *(float *)(a1 + 60);
      *(float *)(a1 + 60) = v6;
      *(float *)(a1 + 108) = v6;
      if ( ((unsigned __int8)v2 & 2) != 0 )
      {
        v7 = *(_BYTE *)(a1 + 12);
        if ( v7 >= 4 )
        {
          *(_DWORD *)(a1 + 8) &= ~4u;
        }
        else
        {
          dword_5F84E4 = dword_5A80C0[v7];
          *(_DWORD *)(a1 + 8) |= 4u;
        }
      }
    }
    else
    {
      off_46AF70 = NULL;
    }
  }
  return result;
}

// 0x41cee0  sub_41CEE0
int __cdecl sub_41CEE0(int a1, __int16 a2)
{
  int result; // eax
  int v3; // edx
  double v4; // st7
  double v5; // st7
  char v6; // al
  double v7; // st7
  double v8; // st7
  char v9; // al
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edx
  char *v14; // esi
  _DWORD *v15; // eax
  int v16; // ecx
  int v17; // ecx

  off_46AF70 = (_UNKNOWN *)a1;
  result = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 != 0 )
  {
    dword_565FE8 = dword_52FD60[12 * result];
    dword_55340C = dword_52FD8C[12 * *(_DWORD *)a1];
    result = 48 * *(_DWORD *)a1;
    dword_553418 = *(int *)((char *)dword_52FD8C + result);
    if ( dword_55340C != 0 )
    {
      dword_5A7CA4 = byte_52FD70[48 * *(_DWORD *)a1];
      v3 = 12 * *(_DWORD *)a1;
      v4 = (double)(dword_52FD64[v3] - 1) * *(float *)(a1 + 40);
      *(float *)(a1 + 40) = v4;
      *(float *)(a1 + 64) = v4;
      v5 = (double)(dword_52FD64[v3] - 1) * *(float *)(a1 + 88);
      *(float *)(a1 + 88) = v5;
      *(float *)(a1 + 112) = v5;
      v6 = *(_BYTE *)(a1 + 4);
      v7 = (double)(dword_565FE8 - 1) * *(float *)(a1 + 36);
      *(float *)(a1 + 36) = v7;
      *(float *)(a1 + 84) = v7;
      v8 = (double)(dword_565FE8 - 1) * *(float *)(a1 + 60);
      *(float *)(a1 + 60) = v8;
      *(float *)(a1 + 108) = v8;
      if ( (v6 & 2) != 0 )
      {
        v9 = *(_BYTE *)(a1 + 12);
        if ( v9 >= 4 )
        {
          v10 = *(_DWORD *)(a1 + 8);
          LOBYTE(v10) = v10 & 0xFB;
        }
        else
        {
          dword_5F84E4 = dword_5A80C0[v9];
          v10 = *(_DWORD *)(a1 + 8);
          LOBYTE(v10) = v10 | 4;
        }
        *(_DWORD *)(a1 + 8) = v10;
      }
      if ( byte_4B3232 != 0 && dword_46AF60 > 8 )
      {
        v11 = *(_DWORD *)(a1 + 8);
        LOBYTE(v11) = v11 | 1;
        *(_DWORD *)(a1 + 8) = v11;
        v12 = word_467744;
        *(_DWORD *)(a1 + 124) = word_467744;
        *(_DWORD *)(a1 + 120) = v12;
        *(_DWORD *)(a1 + 116) = v12;
        *(_DWORD *)(a1 + 96) = v12;
        *(_DWORD *)(a1 + 100) = v12;
        *(_DWORD *)(a1 + 92) = v12;
        *(_DWORD *)(a1 + 76) = v12;
        *(_DWORD *)(a1 + 72) = v12;
        *(_DWORD *)(a1 + 68) = v12;
        *(_DWORD *)(a1 + 48) = v12;
        *(_DWORD *)(a1 + 52) = v12;
        *(_DWORD *)(a1 + 44) = v12;
        *(_DWORD *)(a1 + 24) = v12;
        *(_DWORD *)(a1 + 20) = v12;
        *(_DWORD *)(a1 + 16) = v12;
      }
      if ( (*(_BYTE *)(a1 + 8) & 0x20) != 0 )
        dword_554464(*(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 20), *(_DWORD *)(a1 + 24));
      sub_41D0D0(a1);
      result = (int)off_46AF70;
      if ( off_46AF70 != NULL )
      {
        result = sub_403CC0(a2);
        if ( result > 0 )
        {
          v13 = dword_5546A0;
          result = dword_555FCC;
          if ( dword_5546A0 <= dword_555FCC )
          {
            v14 = (char *)&unk_555FE0 + 64 * dword_5546A0;
            do
            {
              v15 = v14;
              do
              {
                v16 = v15[2];
                if ( v16 <= v15[3] )
                {
                  v17 = v16 - v15[4];
                  if ( v17 > 0 )
                    v15[6] += v17 * v15[7];
                }
                v15 = (_DWORD *)*v15;
              }
              while ( v15 != NULL );
              result = dword_555FCC;
              ++v13;
              v14 += 64;
            }
            while ( v13 <= dword_555FCC );
          }
        }
        else
        {
          off_46AF70 = NULL;
        }
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

// 0x41d0d0  sub_41D0D0
int __cdecl sub_41D0D0(int a1)
{
  int *v2; // eax
  int v3; // edx
  double v4; // st7
  int v5; // edi
  int v6; // ecx
  _DWORD *v7; // eax
  int v8; // ebx
  int v9; // esi
  __int64 v10; // rax
  int v11; // ebx
  int v12; // edx
  int result; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int *v17; // ecx
  int v18; // edx
  int *v19; // ecx
  int v20; // edx
  int v21; // [esp+10h] [ebp-1Ch]
  int v22; // [esp+10h] [ebp-1Ch]
  unsigned int v23; // [esp+14h] [ebp-18h]
  int v24; // [esp+18h] [ebp-14h]
  int v25; // [esp+1Ch] [ebp-10h]
  int v26; // [esp+20h] [ebp-Ch]
  int v27; // [esp+24h] [ebp-8h]
  int v28; // [esp+30h] [ebp+4h]

  v2 = *(int **)(a1 + 32);
  v3 = *(_DWORD *)(a1 + 80);
  v4 = *(float *)(a1 + 36);
  v5 = *v2;
  v6 = v2[1];
  v7 = *(_DWORD **)(a1 + 56);
  v28 = v6;
  v8 = *v7 - v5 + 1;
  v21 = *(_DWORD *)(v3 + 4) - v6 + 1;
  v23 = (unsigned int)(__int64)v4 << 16;
  v24 = (__int64)*(float *)(a1 + 60) << 16;
  v26 = (int)(v24 - v23 + 0x10000) / v8;
  v9 = (__int64)*(float *)(a1 + 88) << 16;
  v10 = (__int64)*(float *)(a1 + 40);
  v11 = v5 + v8 - 1;
  v12 = *(_DWORD *)(a1 + 8);
  v25 = ((((int)v10 + 1) << 16) - v9) / v21;
  result = v6 + v21 - 1;
  v22 = result;
  if ( (v12 & 2) != 0 )
  {
    if ( v11 < 0
      || result < 0
      || (result = dword_46AF58 - 1, v5 > dword_46AF58 - 1)
      || (result = dword_46AF5C - 1, v6 > dword_46AF5C - 1) )
    {
      off_46AF70 = NULL;
      return result;
    }
    if ( v5 < 0 )
    {
      v23 -= v5 * v26;
      v5 = 0;
    }
    if ( v11 > dword_46AF58 - 1 )
    {
      v24 += v26 * (dword_46AF58 - v11 - 1);
      v11 = dword_46AF58 - 1;
    }
    if ( v6 < 0 )
      v28 = 0;
    v14 = v22;
    if ( v22 > dword_46AF5C - 1 )
    {
      v22 = dword_46AF5C - 1;
      v9 += v25 * (v14 - dword_46AF5C + 1);
    }
    *(_DWORD *)(a1 + 8) = v12 & 0xFFFFFFFD;
  }
  v15 = v11 - v5 + 1;
  if ( v15 > 0 )
  {
    v16 = (int)(v24 - v23 + 0x10000) / v15;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    {
      if ( v22 >= v28 )
      {
        v17 = &dword_555FE8[16 * v22];
        v27 = v22 - v28 + 1;
        do
        {
          v17[2] = v5;
          *v17 = v5;
          v17[3] = v11;
          v17[1] = v11;
          v17[4] = v23;
          v17[5] = v16;
          v17[6] = v9;
          v17[7] = 0;
          v18 = *(_DWORD *)(a1 + 16) << 16;
          v17[12] = v18;
          v17[10] = v18;
          v17[8] = v18;
          v17[13] = 0;
          v17[11] = 0;
          v17[9] = 0;
          v17 -= 16;
          v9 += v25;
          --v27;
        }
        while ( v27 != 0 );
      }
    }
    else if ( v22 >= v28 )
    {
      v19 = &dword_555FE8[16 * v22];
      v20 = v22 - v28 + 1;
      do
      {
        v19[2] = v5;
        *v19 = v5;
        v19[3] = v11;
        v19[1] = v11;
        v19[4] = v23;
        v19[5] = v16;
        v19[6] = v9;
        v19[7] = 0;
        v9 += v25;
        v19 -= 16;
        --v20;
      }
      while ( v20 != 0 );
    }
  }
  dword_5546A0 = v28;
  dword_555FCC = v22;
  return v22;
}

// 0x41d330  sub_41D330
int sub_41D330()
{
  int *v0; // esi
  int *v1; // ebx
  int v2; // edx
  int *v3; // ecx
  int v4; // eax
  _DWORD *v5; // edi
  _DWORD *v6; // ebp
  int i; // eax
  int j; // eax
  int v10; // [esp+0h] [ebp-Ch]
  int *v11; // [esp+4h] [ebp-8h]
  int v12; // [esp+8h] [ebp-4h]

  v12 = 1;
  if ( dword_5546A4() != 0 )
  {
    if ( dword_4B1D00 == 0 && dword_4E5E40 > 0 )
    {
      v0 = &dword_555FB8;
      v1 = &dword_5678F8;
      dword_555FB8 = 0;
      dword_5678F8 = 0;
      if ( byte_4B3448 == 0 )
        dword_553440();
      sub_4032E0();
      v2 = 0;
      v3 = dword_4EFBA0;
      v10 = 0;
      v11 = dword_4EFBA0;
      do
      {
        v4 = *v3;
        if ( *v3 != 0 )
        {
          v5 = v1 + 1;
          v6 = v0 + 1;
          do
          {
            dword_4EFAC8 = v4;
            if ( byte_52FD69[48 * *(_DWORD *)v4] != 0 || (*(_BYTE *)(v4 + 8) & 0x10) != 0 )
            {
              v5 -= 2;
              v1 -= 2;
              if ( v5 >= dword_566004 )
              {
                *v1 = v4;
                *v5 = v2;
              }
              else
              {
                v1 += 2;
                v5 += 2;
              }
            }
            else if ( (*(_BYTE *)(v4 + 4) & 2) != 0 )
            {
              v6 -= 2;
              v0 -= 2;
              if ( v6 >= dword_5546C4 )
              {
                *v0 = v4;
                *v6 = v2;
              }
              else
              {
                v0 += 2;
                v6 += 2;
              }
            }
            else
            {
              dword_565FE4(v4, v2);
              if ( off_46AF70 != NULL )
                ((void (*)(void))dword_7CA620[*(_DWORD *)(dword_4EFAC8 + 8)])();
              v4 = dword_4EFAC8;
              v2 = v10;
            }
            v4 = *(_DWORD *)(v4 + 28) != v4 ? *(_DWORD *)(v4 + 28) : 0;
          }
          while ( v4 != 0 );
          v3 = v11;
        }
        *v3++ = 0;
        v10 = ++v2;
        v11 = v3;
      }
      while ( (int)v3 < (int)&dword_52FB9C );
      for ( i = *v0; i != 0; v0 += 2 )
      {
        dword_565FE4(i, v0[1]);
        if ( off_46AF70 != NULL )
          ((void (*)(void))dword_7CA620[*(_DWORD *)(*v0 + 8)])();
        i = v0[2];
      }
      for ( j = *v1; j != 0; v1 += 2 )
      {
        if ( (*(_BYTE *)(j + 8) & 0x10) != 0 )
          sub_41CEE0(j, v1[1]);
        else
          dword_565FE4(j, v1[1]);
        if ( off_46AF70 != NULL )
          ((void (*)(void))dword_7CA620[*(_DWORD *)(*v1 + 8)])();
        j = v1[2];
      }
    }
    dword_5546AC();
  }
  else
  {
    v12 = 0;
  }
  dword_4E5E40 = 0;
  dword_623654 = 0;
  dword_623650 = 0;
  return v12;
}

// 0x41d530  sub_41D530
double __cdecl sub_41D530(char *a1)
{
  unsigned __int16 v1; // bx
  int v2; // edi
  unsigned __int16 v3; // ax
  int v4; // eax
  int v5; // ebx
  double result; // st7
  int v7; // edi
  double v8; // [esp+18h] [ebp-8h]

  HIBYTE(v1) = a1[6];
  v2 = (unsigned __int8)a1[1] | ((*a1 & 0x7F) << 8);
  HIBYTE(v3) = a1[2];
  LOBYTE(v1) = a1[7];
  LOBYTE(v3) = a1[3];
  v4 = (unsigned __int8)a1[5] | (((unsigned __int8)a1[4] | (v3 << 8)) << 8);
  v5 = (unsigned __int8)a1[9] | (((unsigned __int8)a1[8] | (v1 << 8)) << 8);
  if ( v2 != 0 || v4 != 0 || v5 != 0 )
  {
    if ( v2 == 0x7FFF )
    {
      result = dbl_4AE620;
    }
    else
    {
      v7 = v2 - 16414;
      v8 = ldexp(/*X*/ (double)(v4 + 0x80000000) - -2147483648.0, /*Y*/ v7);
      result = ldexp(/*X*/ (double)(v5 + 0x80000000) - -2147483648.0, /*Y*/ v7 - 32) + v8;
    }
  }
  else
  {
    result = 0.0;
  }
  if ( *a1 < 0 )
    return -result;
  return result;
}

// 0x41d640  sub_41D640
LPDIRECTSOUND sub_41D640()
{
  LPDIRECTSOUND result; // eax

  result = ppDS;
  if ( ppDS != NULL )
  {
    result = (LPDIRECTSOUND)dword_55338C;
    if ( dword_55338C != 0 )
      return (LPDIRECTSOUND)StopTrack((int)&dword_553320);
  }
  return result;
}

// 0x41d670  sub_41D670
int sub_41D670()
{
  int result; // eax

  if ( dword_55338C != 0 )
    return (*(int (__stdcall **)(int, int))(*(_DWORD *)dword_55338C + 60))(
             dword_55338C,
             100 * (dword_9CA854 - 100));
  return result;
}

// 0x41d6a0  sub_41D6A0
void sub_41D6A0()
{
  dword_4ABF78 = 40;
}

// 0x41d6b0  sub_41D6B0
LPDIRECTSOUND __cdecl sub_41D6B0(int a1)
{
  LPDIRECTSOUND result; // eax
  int v2; // eax
  int v3; // [esp-8h] [ebp-110h]
  char Buffer[256]; // [esp+8h] [ebp-100h] BYREF

  result = ppDS;
  if ( ppDS != NULL )
  {
    byte_4B1C70 = 0;
  }
  else
  {
    byte_4B1C78 = 0;
    sub_41DA80();
    result = ppDS;
    ++byte_4B1C70;
    if ( ppDS == NULL )
      return result;
  }
  if ( dword_9CA854 >= 50 )
  {
    if ( byte_4B3232 != 0 || byte_4B2277 != 0 )
    {
      if ( dword_55338C == 0 )
        return result;
    }
    else
    {
      if ( a1 != 0 )
      {
        if ( dword_55338C != 0 )
        {
          if ( dword_4ABF94 == a1 )
          {
            result = (LPDIRECTSOUND)RefillTrackBuffer((int)dword_553320, 0xFFFFFFFF, -1);
            if ( result != NULL )
              goto LABEL_19;
            ResetTrack(dword_553320);
            _close(/*FileHandle*/ dword_4ABF90);
            result = ppDS;
            dword_4ABF90 = -1;
            if ( ppDS == NULL )
              goto LABEL_19;
          }
          else
          {
            ResetTrack(dword_553320);
            _close(/*FileHandle*/ dword_4ABF90);
            result = ppDS;
            dword_4ABF90 = -1;
            if ( ppDS == NULL )
              goto LABEL_19;
          }
          ResetTrack(dword_553320);
          dword_4ABF94 = 0;
          sprintf(Buffer, /*Format*/ "..\\track\\Track%d.xa", a1);
          result = (LPDIRECTSOUND)FsOpen(/*FileName*/ Buffer, 0x8000);
          dword_4ABF90 = (int)result;
          if ( result == (LPDIRECTSOUND)-1 )
          {
LABEL_19:
            if ( dword_553394 == 0 )
              return (LPDIRECTSOUND)PlayTrack((int)dword_553320);
            return result;
          }
        }
        else
        {
          if ( result == NULL )
            goto LABEL_19;
          ResetTrack(dword_553320);
          dword_4ABF94 = 0;
          sprintf(Buffer, /*Format*/ "..\\track\\Track%d.xa", a1);
          result = (LPDIRECTSOUND)FsOpen(/*FileName*/ Buffer, 0x8000);
          dword_4ABF90 = (int)result;
          if ( result == (LPDIRECTSOUND)-1 )
            goto LABEL_19;
        }
        v3 = (int)result;
        v2 = _filelength(/*FileHandle*/ (int)result);
        SetTrackSource(dword_553320, v2, v3, 1);
        result = (LPDIRECTSOUND)(*(int (__stdcall **)(int, int))(*(_DWORD *)dword_55338C + 60))(
                                  dword_55338C,
                                  100 * (dword_9CA854 - 100));
        dword_4ABF94 = a1;
        goto LABEL_19;
      }
      if ( dword_55338C == 0 )
        return result;
    }
    return (LPDIRECTSOUND)ResetTrack(dword_553320);
  }
  return result;
}

// 0x41d910  sub_41D910
int sub_41D910()
{
  memset(&byte_4B3A20, 0, 0x78u);
  word_4B3652 = 0;
  byte_4B39D4 = 0;
  return 0;
}

// 0x41d930  sub_41D930
int __cdecl sub_41D930(char *a1)
{
  __int16 v1; // si
  int result; // eax
  char v3; // cl

  if ( word_4B3652 == 40 )
  {
    dword_45F2B0 = 0;
  }
  else
  {
    v1 = word_4B3652 + 1;
    result = 3 * word_4B3652;
    byte_4B3A20[result] = *a1;
    byte_4B3A21[result] = a1[1];
    v3 = a1[2];
    word_4B3652 = v1;
    byte_4B3A22[result] = v3;
  }
  return result;
}

// 0x41d980  sub_41D980
char sub_41D980()
{
  int v0; // eax
  char *v1; // ecx
  char *v2; // eax

  LOBYTE(v0) = byte_4B2277;
  if ( byte_4B2277 == 0 && dword_9CA854 >= 50 )
  {
    v0 = 0;
    if ( word_4B3652 > 0 )
    {
      v1 = byte_4B3A20;
      do
      {
        if ( (unsigned __int8)*v1 == *(_WORD *)(dword_4B324C + 38) )
          break;
        ++v0;
        v1 += 3;
      }
      while ( v0 < word_4B3652 );
    }
    if ( v0 == word_4B3652 )
    {
      byte_4B39D4 = 0;
      LOBYTE(v0) = (unsigned __int8)sub_41D6B0(0);
    }
    else if ( word_4B3B76 != *(_WORD *)(dword_4B324C + 38) )
    {
      v0 *= 3;
      if ( byte_4B39D4 == byte_4B3A21[v0] && byte_4B39D4 == byte_4B3A22[v0] )
      {
        word_4B3B76 = *(_WORD *)(dword_4B324C + 38);
      }
      else if ( byte_4B28C8 == 0 )
      {
        v2 = &byte_4B3A20[v0];
        word_4B3B76 = *(_WORD *)(dword_4B324C + 38);
        dword_54EFC4 = (int)v2;
        if ( (unsigned __int8)v2[1] > dword_4ABF78 )
        {
          v2[1] = dword_4ABF78 - 1;
          *(_BYTE *)(dword_54EFC4 + 2) = dword_4ABF78 - 1;
          v2 = (char *)dword_54EFC4;
        }
        byte_4B39D4 = v2[1];
        LOBYTE(v0) = (unsigned __int8)sub_41D6B0((unsigned __int8)byte_4B39D4);
      }
    }
  }
  return v0;
}

// 0x41da80  sub_41DA80
int sub_41DA80()
{
  int result; // eax
  int i; // eax
  int j; // eax
  int v3; // edi
  int v4; // esi
  int v5; // [esp+18h] [ebp-98h]
  int v6; // [esp+28h] [ebp-88h] BYREF
  _DWORD v7[4]; // [esp+2Ch] [ebp-84h] BYREF
  _DWORD v8[5]; // [esp+3Ch] [ebp-74h] BYREF
  int v9[24]; // [esp+50h] [ebp-60h] BYREF

  result = dword_4ABF80;
  dword_5533A0 = 0;
  if ( dword_4ABF80 != 0 || byte_4B1C70 >= 5 )
  {
    if ( byte_4B1C78 != 0 )
    {
      sub_41F4D0();
      if ( ppDS != NULL && dword_55338C != 0 )
        StopTrack((int)dword_553320);
      for ( result = dword_4B1C7C; result > 0; dword_4B1C7C = result )
      {
        v3 = 0;
        v4 = *((_DWORD *)*(&dword_54EFE0 + result) + 13) != 0 ? 2 : 10;
        do
        {
          v5 = *((_DWORD *)*(&dword_54EFE0 + result) + v3);
          (*(void (__stdcall **)(int))(*(_DWORD *)v5 + 8))(v5);
          result = dword_4B1C7C;
          ++v3;
        }
        while ( v3 < v4 );
        if ( *(&dword_54EFE0 + dword_4B1C7C) != NULL )
        {
          free(/*Block*/ *(&dword_54EFE0 + dword_4B1C7C));
          result = dword_4B1C7C;
          *(&dword_54EFE0 + dword_4B1C7C) = NULL;
        }
        --result;
      }
      dword_5533A0 = 0;
      dword_4B1C84 = 0;
    }
    else
    {
      if ( ppDS != NULL )
      {
        FiniTrack((int)dword_553320);
        if ( dword_4ABF90 != -1 )
          _close(/*FileHandle*/ dword_4ABF90);
        if ( ppDS != NULL )
        {
          ppDS->lpVtbl->Release(/*This*/ ppDS);
          ppDS = NULL;
        }
        for ( i = dword_4B1C7C; i > 0; dword_4B1C7C = i )
        {
          if ( *(&dword_54EFE0 + i) != NULL )
          {
            free(/*Block*/ *(&dword_54EFE0 + i));
            i = dword_4B1C7C;
            *(&dword_54EFE0 + dword_4B1C7C) = NULL;
          }
          --i;
        }
        dword_5533A0 = 0;
        dword_4B1C84 = 0;
      }
      memset(&dword_54EFE0, 0, 0x200u);
      if ( DirectSoundCreate(/*pcGuidDevice*/ NULL, /*ppDS*/ &ppDS, /*pUnkOuter*/ NULL) != 0 )
      {
        FiniTrack((int)dword_553320);
        if ( dword_4ABF90 != -1 )
          _close(/*FileHandle*/ dword_4ABF90);
        if ( ppDS != NULL )
        {
          ppDS->lpVtbl->Release(/*This*/ ppDS);
          ppDS = NULL;
        }
        for ( result = dword_4B1C7C; result > 0; dword_4B1C7C = result )
        {
          if ( *(&dword_54EFE0 + result) != NULL )
          {
            free(/*Block*/ *(&dword_54EFE0 + result));
            result = dword_4B1C7C;
            *(&dword_54EFE0 + dword_4B1C7C) = NULL;
          }
          --result;
        }
        dword_5533A0 = 0;
        dword_4B1C84 = 0;
        dword_4ABF80 = 0;
      }
      else
      {
        v6 = 0;
        ppDS->lpVtbl->SetCooperativeLevel(/*This*/ ppDS, /*hwnd*/ hWnd, /*dwLevel*/ 2);
        v9[0] = 96;
        if ( ppDS->lpVtbl->GetCaps(/*This*/ ppDS, /*pDSCaps*/ (LPDSCAPS)v9) != 0 )
          v9[0] = 0;
        v7[0] = 131073;
        v8[1] = 1;
        v7[1] = 44100;
        v7[3] = 1048580;
        v7[2] = 176400;
        v8[0] = 20;
        memset(&v8[2], 0, 12);
        if ( ppDS->lpVtbl->CreateSoundBuffer(
               /*This*/ ppDS,
               /*pcDSBufferDesc*/ (LPCDSBUFFERDESC)v8,
               /*ppDSBuffer*/ (LPDIRECTSOUNDBUFFER *)&v6,
               /*pUnkOuter*/ NULL) != 0 )
        {
          FiniTrack((int)dword_553320);
          if ( dword_4ABF90 != -1 )
            _close(/*FileHandle*/ dword_4ABF90);
          if ( ppDS != NULL )
          {
            ppDS->lpVtbl->Release(/*This*/ ppDS);
            ppDS = NULL;
          }
          for ( j = dword_4B1C7C; j > 0; dword_4B1C7C = j )
          {
            if ( *(&dword_54EFE0 + j) != NULL )
            {
              free(/*Block*/ *(&dword_54EFE0 + j));
              j = dword_4B1C7C;
              *(&dword_54EFE0 + dword_4B1C7C) = NULL;
            }
            --j;
          }
          dword_5533A0 = 0;
          dword_4B1C84 = 0;
          dword_4ABF80 = 0;
        }
        else
        {
          (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)v6 + 56))(v6, v7);
        }
        result = InitTrack(
                   dword_553320,
                   (int *)ppDS,
                   (int)&unk_45C960,
                   (int)&unk_45C978,
                   dword_45C940,
                   0);
        byte_4B1C78 = 1;
      }
    }
  }
  return result;
}

// 0x41ddf0  sub_41DDF0
LPDIRECTSOUND sub_41DDF0()
{
  LPDIRECTSOUND result; // eax

  if ( hWnd != NULL )
  {
    result = ppDS;
    if ( ppDS != NULL )
      return (LPDIRECTSOUND)ppDS->lpVtbl->SetCooperativeLevel(/*This*/ ppDS, /*hwnd*/ hWnd, /*dwLevel*/ 2);
  }
  return result;
}

// 0x41de10  sub_41DE10
int sub_41DE10()
{
  memset(&word_4B24C0, 0, 0xC0u);
  dword_4ABF8C = 1;
  word_4B2A48 = 0;
  return 0;
}

// 0x41de40  sub_41DE40
int sub_41DE40()
{
  int result; // eax

  FiniTrack((int)dword_553320);
  if ( dword_4ABF90 != -1 )
    _close(/*FileHandle*/ dword_4ABF90);
  if ( ppDS != NULL )
  {
    ppDS->lpVtbl->Release(/*This*/ ppDS);
    ppDS = NULL;
  }
  for ( result = dword_4B1C7C; result > 0; dword_4B1C7C = result )
  {
    if ( *(&dword_54EFE0 + result) != NULL )
    {
      free(/*Block*/ *(&dword_54EFE0 + result));
      result = dword_4B1C7C;
      *(&dword_54EFE0 + dword_4B1C7C) = NULL;
    }
    --result;
  }
  dword_5533A0 = 0;
  dword_4B1C84 = 0;
  return result;
}

// 0x41dec0  sub_41DEC0
unsigned int __cdecl sub_41DEC0(int a1)
{
  unsigned int result; // eax
  __int16 v2; // si
  char v3; // cl

  if ( word_4B2A48 == 128 )
  {
    dword_45F2B0 = 0;
  }
  else
  {
    result = 8 * word_4B2A48;
    v2 = word_4B2A48 + 1;
    word_4B24C0[result / 2] = *(_WORD *)a1;
    byte_4B24C2[result] = *(_BYTE *)(a1 + 2);
    byte_4B24C3[result] = *(_BYTE *)(a1 + 3);
    word_4B24C4[result / 2] = *(_WORD *)(a1 + 4);
    byte_4B24C6[result] = *(_BYTE *)(a1 + 6);
    v3 = *(_BYTE *)(a1 + 7);
    word_4B2A48 = v2;
    byte_4B24C7[result] = v3;
  }
  return result;
}

// 0x41df30  sub_41DF30
void __cdecl sub_41DF30(int a1, __int16 a2, __int16 a3, char a4)
{
  __int16 v4; // bx
  __int16 *v5; // edi
  __int16 v6; // bp
  __int16 v7; // ax
  __int16 i; // si
  unsigned int v9; // eax
  __int16 v10; // cx
  int v11; // eax
  __int16 v12; // cx
  int v13; // eax

  LOBYTE(v4) = a3;
  v5 = word_4B24C0;
  if ( (a3 & 1) != 0 )
  {
    v6 = 0;
    while ( word_4B3260[10 * v6] < 0 )
    {
      if ( ++v6 >= 24 )
        return;
    }
    v7 = word_4B2A48;
    for ( i = 0; i < word_4B2A48; ++i )
    {
      if ( (unsigned __int16)*v5 == a2 )
        break;
      v5 += 4;
    }
    if ( *((char *)v5 + 4) < 0 )
    {
      if ( rand() < *((unsigned __int8 *)v5 + 7) << 7 )
        return;
      v7 = word_4B2A48;
    }
    if ( i != v7 )
    {
      v9 = 10 * v6;
      HIBYTE(v4) = HIBYTE(a3) | 0x80;
      dword_4B3264[v9 / 2] = a1;
      dword_4B3268[v9 / 2] = (int)v5;
      word_4B3260[v9] = v4;
      byte_4B326E[v9 * 2] = a4;
    }
  }
  else if ( (a3 & 2) != 0 )
  {
    v10 = 0;
    while ( word_4B3260[10 * v10] >= 0
         || dword_4B3264[5 * v10] != a1
         || *(unsigned __int16 *)dword_4B3268[5 * v10] != a2 )
    {
      if ( ++v10 >= 24 )
        goto LABEL_22;
    }
    v11 = 10 * v10;
    byte_4B326E[v11 * 2] = a4;
    word_4B3260[v11] = -32766;
LABEL_22:
    if ( v10 == 24 )
    {
      v12 = 0;
      while ( (word_4B3260[10 * v12] & 0x8000) == 0 || *(unsigned __int16 *)dword_4B3268[5 * v12] != a2 )
      {
        if ( ++v12 >= 24 )
          return;
      }
      v13 = 10 * v12;
      byte_4B326E[v13 * 2] = a4;
      word_4B3260[v13] = -32766;
    }
  }
}

// 0x41e0b0  sub_41E0B0
LPDIRECTSOUND __cdecl sub_41E0B0(int *a1)
{
  LPDIRECTSOUND result; // eax
  int v2; // edx

  result = ppDS;
  if ( ppDS != NULL )
  {
    v2 = *a1;
    memset(&dword_54AFC0, 0, 0x4004u);
    result = (LPDIRECTSOUND)((v2 << 7) + 4);
    qmemcpy(&dword_54AFC0, a1, (unsigned int)result);
  }
  return result;
}

// 0x41e0f0  sub_41E0F0
LPDIRECTSOUND __cdecl sub_41E0F0(int *a1)
{
  LPDIRECTSOUND result; // eax
  int v2; // edx

  result = ppDS;
  if ( ppDS != NULL )
  {
    v2 = *a1;
    memset(&unk_54F1E0, 0, 0x4004u);
    result = (LPDIRECTSOUND)((v2 << 7) + 4);
    qmemcpy(&unk_54F1E0, a1, (unsigned int)result);
  }
  return result;
}

// 0x41e130  sub_41E130
LPDIRECTSOUND sub_41E130()
{
  LPDIRECTSOUND result; // eax

  sub_41F4D0();
  result = ppDS;
  if ( ppDS != NULL )
  {
    result = (LPDIRECTSOUND)dword_55338C;
    if ( dword_55338C != 0 )
      return (LPDIRECTSOUND)StopTrack((int)dword_553320);
  }
  return result;
}

// 0x41e160  sub_41E160
void __cdecl sub_41E160(int *a1)
{
  int v1; // edi
  int v2; // ebp
  _DWORD *v3; // esi
  int v4; // eax
  int v5; // ecx
  int v6; // ecx
  int i; // ecx

  if ( ppDS != NULL )
  {
    v1 = 0;
    v2 = *a1;
    v3 = a1 + 1;
    if ( *a1 <= 0 )
    {
      dword_4ABF8C = dword_4B1C7C;
    }
    else
    {
      while ( 1 )
      {
        v4 = sub_41E9D0((char *)a1 + *v3);
        v5 = dword_4B1C7C;
        dword_54EFE4[dword_4B1C7C] = v4;
        if ( v4 == 0 )
          break;
        v6 = v5 + 1;
        ++v1;
        ++v3;
        dword_4B1C7C = v6;
        if ( v1 >= v2 )
        {
          dword_4ABF8C = v6;
          return;
        }
      }
      FiniTrack((int)dword_553320);
      if ( dword_4ABF90 != -1 )
        _close(/*FileHandle*/ dword_4ABF90);
      if ( ppDS != NULL )
      {
        ppDS->lpVtbl->Release(/*This*/ ppDS);
        ppDS = NULL;
      }
      for ( i = dword_4B1C7C; i > 0; dword_4B1C7C = i )
      {
        if ( *(&dword_54EFE0 + i) != NULL )
        {
          free(/*Block*/ *(&dword_54EFE0 + i));
          i = dword_4B1C7C;
          *(&dword_54EFE0 + dword_4B1C7C) = NULL;
        }
        --i;
      }
      dword_5533A0 = 0;
      dword_4B1C84 = 0;
      dword_4ABF80 = 0;
      dword_4ABF8C = i;
    }
  }
}

// 0x41e260  sub_41E260
LPDIRECTSOUND sub_41E260()
{
  LPDIRECTSOUND result; // eax
  char Buffer[32]; // [esp+0h] [ebp-20h] BYREF

  result = ppDS;
  if ( ppDS != NULL )
  {
    if ( FileHandle != -1 )
      _close(/*FileHandle*/ FileHandle);
    if ( *((_BYTE *)dword_52FD00 + 65616) > 5u )
      sprintf(Buffer, /*Format*/ aSpeechesSpeech_0);
    else
      sprintf(Buffer, /*Format*/ "..\\speeches\\Speech%02d.xa", *((unsigned __int8 *)dword_52FD00 + 65616));
    FileHandle = FsOpen(/*FileName*/ Buffer, 0);
    return (LPDIRECTSOUND)InitTrack(
                            dword_5532A0,
                            (int *)ppDS,
                            (int)&unk_45C960,
                            (int)&unk_45C978,
                            dword_45C950,
                            0);
  }
  return result;
}

// 0x41e300  sub_41E300
int sub_41E300()
{
  int result; // eax

  FiniTrack((int)dword_5532A0);
  result = FileHandle;
  if ( FileHandle != -1 )
    return _close(/*FileHandle*/ FileHandle);
  return result;
}

// 0x41e330  sub_41E330
char sub_41E330()
{
  __int64 v0; // rax
  int v1; // edi
  BOOL v2; // eax
  int v3; // edi
  int v4; // esi
  int v5; // ecx
  int *v6; // eax
  int v7; // ebp
  LARGE_INTEGER PerformanceCount; // [esp+10h] [ebp-8h] BYREF

  if ( ppDS != NULL && dword_9CA854 >= 50 )
  {
    LOBYTE(v0) = byte_4B2277;
    if ( byte_4B2277 == 0 )
    {
      ResetTrack(dword_5532A0);
      LOBYTE(v0) = (unsigned __int8)sub_41D6B0(dword_4ABF94);
      return v0;
    }
    if ( byte_4B2277 != 1 )
    {
      if ( byte_4B2277 == 2 )
      {
        v1 = (unsigned __int8)byte_4B322E;
        ResetTrack(dword_5532A0);
        if ( FileHandle == -1 )
        {
          v2 = false;
        }
        else
        {
          v3 = v1 - 2;
          v4 = 0;
          if ( v3 > 0 )
          {
            v5 = v3;
            v6 = &dword_45C340[64 * *((unsigned __int8 *)dword_52FD00 + 65616)];
            do
            {
              v7 = *v6++;
              v4 += v7;
              --v5;
            }
            while ( v5 != 0 );
          }
          v2 = _lseek(/*FileHandle*/ FileHandle, /*Offset*/ v4, /*Origin*/ 0) == v4
            && SetTrackSource(
                 dword_5532A0,
                 dword_45C340[64 * *((unsigned __int8 *)dword_52FD00 + 65616) + v3],
                 FileHandle,
                 0) == 0;
        }
        if ( v2 )
        {
          LOBYTE(v0) = PlayTrack((int)dword_5532A0);
          byte_4B2277 = 4;
          return v0;
        }
        dword_4ABF9C = 0;
        QueryPerformanceCounter(/*lpPerformanceCount*/ &stru_4B1C68);
        LOBYTE(v0) = byte_4B322E;
        if ( (unsigned __int8)byte_4B322E >= 2u )
        {
          v0 = 1000LL
             * (unsigned int)dword_45C338[64 * *((unsigned __int8 *)dword_52FD00 + 65616) + (unsigned __int8)byte_4B322E]
             / 44100;
          dword_4B1C60 = v0;
          byte_4B2277 = 4;
          return v0;
        }
LABEL_34:
        dword_4B1C60 = 0;
        byte_4B2277 = 4;
        return v0;
      }
      if ( byte_4B2277 == 8 )
      {
        if ( dword_55338C != 0 )
        {
          LOBYTE(v0) = StopTrack((int)dword_553320);
          byte_4B2277 = 2;
          return v0;
        }
        goto LABEL_36;
      }
      if ( byte_4B2277 != 4 )
        return v0;
      if ( dword_4ABF9C != 0 )
      {
        RefillTrackBuffer((int)dword_5532A0, 0xFFFFFFFF, -1);
        LODWORD(v0) = CheckTrackDone((int)dword_5532A0);
        if ( (_DWORD)v0 != 0 )
          byte_4B2277 = 0;
        return v0;
      }
      QueryPerformanceCounter(/*lpPerformanceCount*/ &PerformanceCount);
      PerformanceCount.QuadPart -= stru_4B1C68.QuadPart;
      v0 = (__int64)((double)PerformanceCount.QuadPart * flt_7C95C0);
      if ( v0 < 0 )
        return v0;
      if ( SHIDWORD(v0) <= 0 )
      {
        if ( (unsigned int)v0 >= dword_4B1C60 )
          byte_4B2277 = 0;
        return v0;
      }
LABEL_39:
      byte_4B2277 = 0;
    }
  }
  else
  {
    LOBYTE(v0) = byte_4B2277;
    switch ( byte_4B2277 )
    {
      case 0:
        return v0;
      case 2:
        dword_4ABF9C = 0;
        QueryPerformanceCounter(/*lpPerformanceCount*/ &stru_4B1C68);
        LOBYTE(v0) = byte_4B322E;
        if ( (unsigned __int8)byte_4B322E >= 2u )
        {
          v0 = 1000LL
             * (unsigned int)dword_45C338[64 * *((unsigned __int8 *)dword_52FD00 + 65616) + (unsigned __int8)byte_4B322E]
             / 44100;
          dword_4B1C60 = v0;
          byte_4B2277 = 4;
          return v0;
        }
        goto LABEL_34;
      case 8:
LABEL_36:
        byte_4B2277 = 2;
        return v0;
      case 4:
        QueryPerformanceCounter(/*lpPerformanceCount*/ &PerformanceCount);
        PerformanceCount.QuadPart -= stru_4B1C68.QuadPart;
        v0 = (__int64)((double)PerformanceCount.QuadPart * flt_7C95C0);
        if ( v0 >= (unsigned int)dword_4B1C60 )
          goto LABEL_39;
        break;
      default:
        break;
    }
  }
  return v0;
}

// 0x41e6b0  sub_41E6B0
LPDIRECTSOUNDBUFFER *__cdecl sub_41E6B0(
        struct IDirectSoundBuffer *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        struct IDirectSoundBuffer *a6,
        struct IDirectSoundBuffer *a7)
{
  LPDIRECTSOUNDBUFFER *v7; // eax
  LPDIRECTSOUNDBUFFER *v8; // esi
  LPDIRECTSOUNDBUFFER *v9; // edi
  int i; // ebx
  LPDIRECTSOUNDBUFFER *v12; // edi
  int j; // ebp

  v7 = (LPDIRECTSOUNDBUFFER *)malloc(/*Size*/ 0x38u);
  v8 = v7;
  if ( v7 == NULL )
    return NULL;
  v7[10] = a6;
  v7[11] = a7;
  v7[12] = a1;
  if ( sub_41E7D0(a1, a2, a3, a4, a5, v7) == 0 )
  {
    free(/*Block*/ v8);
    return NULL;
  }
  if ( a6 == NULL && a7 == NULL )
  {
    v8[13] = NULL;
    v9 = v8 + 1;
    for ( i = 9; i != 0; --i )
    {
      *v9 = NULL;
      ppDS->lpVtbl->DuplicateSoundBuffer(/*This*/ ppDS, /*pDSBufferOriginal*/ *v8, /*ppDSBufferDuplicate*/ v9++);
    }
    return v8;
  }
  v8[13] = (LPDIRECTSOUNDBUFFER)1;
  if ( sub_41E7D0(a1, (char *)a6 + a2, (char *)a7 - (char *)a6, a4, a5, v8 + 1) == 0 )
  {
    free(/*Block*/ v8);
    v8 = NULL;
  }
  if ( v8 == NULL )
    return v8;
  v12 = v8 + 2;
  for ( j = 4; j != 0; --j )
  {
    *v12 = NULL;
    v12[1] = NULL;
    ppDS->lpVtbl->DuplicateSoundBuffer(/*This*/ ppDS, /*pDSBufferOriginal*/ *v8, /*ppDSBufferDuplicate*/ v12);
    ppDS->lpVtbl->DuplicateSoundBuffer(/*This*/ ppDS, /*pDSBufferOriginal*/ v8[1], /*ppDSBufferDuplicate*/ v12 + 1);
    v12 += 2;
  }
  return v8;
}

// 0x41e7d0  sub_41E7D0
int __cdecl sub_41E7D0(DWORD a1, char *a2, char *a3, unsigned int a4, char *a5, LPDIRECTSOUNDBUFFER *a6)
{
  LPDIRECTSOUNDBUFFER *v6; // edi
  DWORD v7; // esi
  char *v8; // ebp
  LPDIRECTSOUNDBUFFER v9; // eax
  char *v10; // edi
  char v11; // al
  char *v12; // esi
  DWORD v13; // ecx
  int i; // eax
  _DWORD v16[3]; // [esp+10h] [ebp-24h] BYREF
  __int16 v17; // [esp+1Ch] [ebp-18h]
  __int16 v18; // [esp+1Eh] [ebp-16h]
  _DWORD v19[5]; // [esp+20h] [ebp-14h] BYREF

  v16[1] = a1;
  v18 = (__int16)a5;
  v16[2] = (int)(a1 * a4 * (_DWORD)a5) / 8;
  v6 = a6;
  v19[3] = 0;
  HIWORD(v16[0]) = a4;
  v7 = (DWORD)a3;
  v17 = (int)((unsigned __int16)a5 * a4) / 8;
  *a6 = NULL;
  v19[4] = v16;
  LOWORD(v16[0]) = 1;
  v19[0] = 20;
  v19[1] = 65760;
  v19[2] = v7;
  if ( ppDS->lpVtbl->CreateSoundBuffer(
         /*This*/ ppDS,
         /*pcDSBufferDesc*/ (LPCDSBUFFERDESC)v19,
         /*ppDSBuffer*/ v6,
         /*pUnkOuter*/ NULL) != 0 )
  {
    FiniTrack((int)dword_553320);
    if ( dword_4ABF90 != -1 )
      _close(/*FileHandle*/ dword_4ABF90);
    if ( ppDS != NULL )
    {
      ppDS->lpVtbl->Release(/*This*/ ppDS);
      ppDS = NULL;
    }
    for ( i = dword_4B1C7C; i > 0; dword_4B1C7C = i )
    {
      if ( *(&dword_54EFE0 + i) != NULL )
      {
        free(/*Block*/ *(&dword_54EFE0 + i));
        i = dword_4B1C7C;
        *(&dword_54EFE0 + dword_4B1C7C) = NULL;
      }
      --i;
    }
    dword_5533A0 = 0;
    dword_4B1C84 = 0;
    dword_4ABF80 = 0;
    *v6 = NULL;
    return 0;
  }
  else
  {
    v8 = a2;
    if ( a2 == NULL )
      return 1;
    v9 = *v6;
    a4 = 0;
    a1 = 0;
    if ( v9->lpVtbl->Lock(
           /*This*/ v9,
           /*dwOffset*/ 0,
           /*dwBytes*/ v7,
           /*ppvAudioPtr1*/ (LPVOID *)&a3,
           /*pdwAudioBytes1*/ &a4,
           /*ppvAudioPtr2*/ (LPVOID *)&a5,
           /*pdwAudioBytes2*/ &a1,
           /*dwFlags*/ 1) != 0 )
    {
      return 1;
    }
    else
    {
      qmemcpy(a3, v8, a4);
      v10 = a5;
      if ( a5 != NULL )
      {
        v11 = a1;
        v12 = &v8[a4];
        v13 = a1 >> 2;
        qmemcpy(a5, &v8[a4], 4 * (a1 >> 2));
        qmemcpy(&v10[4 * v13], &v12[4 * v13], v11 & 3);
        v10 = a5;
      }
      (*a6)->lpVtbl->Unlock(/*This*/ *a6, /*pvAudioPtr1*/ a3, /*dwAudioBytes1*/ a4, /*pvAudioPtr2*/ v10, /*dwAudioBytes2*/ a1);
      return 1;
    }
  }
}

// 0x41e9d0  sub_41E9D0
LPDIRECTSOUNDBUFFER *__cdecl sub_41E9D0(int a1)
{
  LPDIRECTSOUNDBUFFER *result; // eax
  int v2; // ecx
  double v3; // st7
  int v4; // eax
  char v5; // dl
  int v6; // ecx
  char v7; // dl
  int v8; // ecx
  int v9; // ebx
  char v10; // dl
  int v11; // eax
  int v12; // ebx
  char v13; // dl
  char v14; // cl
  unsigned int v15; // eax
  char *v16; // esi
  _BYTE *v17; // edi
  char *v18; // esi
  unsigned int v19; // ecx
  char v20; // dl
  int v21; // esi
  char v22; // al
  char v23; // cl
  char v24; // al
  char v25; // cl
  unsigned int v26; // eax
  int v27; // edi
  int v28; // eax
  int v29; // ebp
  int v30; // esi
  int v31; // ecx
  char v32; // dl
  __int64 v33; // rax
  int v34; // ecx
  _DWORD *v35; // edx
  int v36; // ecx
  int v37; // edx
  _DWORD *v38; // edi
  int v39; // [esp+10h] [ebp-198h]
  int v40; // [esp+10h] [ebp-198h]
  int v41; // [esp+14h] [ebp-194h]
  __int16 v42; // [esp+1Ah] [ebp-18Eh]
  __int16 v43; // [esp+1Ch] [ebp-18Ch]
  __int16 v44; // [esp+1Eh] [ebp-18Ah]
  __int16 v45; // [esp+20h] [ebp-188h]
  __int16 v46; // [esp+22h] [ebp-186h]
  double v47; // [esp+24h] [ebp-184h] BYREF
  int v48; // [esp+2Ch] [ebp-17Ch]
  int v49; // [esp+30h] [ebp-178h]
  int v50; // [esp+34h] [ebp-174h]
  int v51; // [esp+38h] [ebp-170h]
  int v52; // [esp+3Ch] [ebp-16Ch]
  int v53; // [esp+40h] [ebp-168h]
  int v54; // [esp+44h] [ebp-164h]
  int i; // [esp+48h] [ebp-160h]
  int v56; // [esp+4Ch] [ebp-15Ch]
  int v57; // [esp+50h] [ebp-158h]
  int v58; // [esp+54h] [ebp-154h]
  _DWORD v59[20]; // [esp+58h] [ebp-150h] BYREF
  _BYTE v60[256]; // [esp+A8h] [ebp-100h] BYREF

  if ( ppDS == NULL )
    return NULL;
  BYTE4(v47) = 0;
  v41 = 0;
  LODWORD(v47) = *(_DWORD *)a1;
  result = (LPDIRECTSOUNDBUFFER *)strcmp((const char *)&v47, aRiff);
  if ( result != NULL )
  {
    LOBYTE(v39) = *(_BYTE *)(a1 + 7);
    BYTE1(v39) = *(_BYTE *)(a1 + 6);
    BYTE2(v39) = *(_BYTE *)(a1 + 5);
    HIBYTE(v39) = *(_BYTE *)(a1 + 4);
    LODWORD(v47) = *(_DWORD *)(a1 + 8);
    v2 = 12;
    v3 = v47;
    for ( i = v39 + 8; v2 < i; v2 = v40 + v8 )
    {
      v4 = *(_DWORD *)(v2 + a1);
      v5 = *(_BYTE *)(v2 + a1 + 7);
      v6 = v2 + 4;
      LODWORD(v47) = v4;
      LOBYTE(v40) = v5;
      v7 = *(_BYTE *)(v6 + a1 + 1);
      BYTE1(v40) = *(_BYTE *)(v6 + a1 + 2);
      LOBYTE(v4) = *(_BYTE *)(v6 + a1);
      v8 = v6 + 4;
      BYTE2(v40) = v7;
      HIBYTE(v40) = v4;
      v52 = v8;
      if ( strcmp((const char *)&v47, aMark) == 0 )
      {
        v9 = v8 + 2;
        v58 = v8 + v40;
        if ( v8 + 2 < v8 + v40 )
        {
          do
          {
            LOBYTE(v46) = *(_BYTE *)(v9 + a1 + 1);
            HIBYTE(v46) = *(_BYTE *)(v9 + a1);
            v10 = *(_BYTE *)(v9 + a1 + 5);
            v11 = v41;
            v12 = v9 + 2;
            LOBYTE(v48) = v10;
            v59[v11] = v46;
            v13 = *(_BYTE *)(v12 + a1 + 1);
            BYTE1(v48) = *(_BYTE *)(v12 + a1 + 2);
            v14 = *(_BYTE *)(v12 + a1);
            BYTE2(v48) = v13;
            HIBYTE(v48) = v14;
            v12 += 4;
            v59[v11 + 10] = v48;
            v15 = *(char *)(v12 + a1);
            v16 = (char *)(++v12 + a1);
            v9 = v15 + v12;
            qmemcpy(v60, v16, 4 * (v15 >> 2));
            v18 = &v16[4 * (v15 >> 2)];
            v17 = &v60[4 * (v15 >> 2)];
            v19 = v15++ & 3;
            qmemcpy(v17, v18, v19);
            *((_BYTE *)&v59[19] + v15 + 3) = 0;
            LOBYTE(v15) = abs32(v15);
            if ( (int)v15 % 2 == 1 )
              ++v9;
            ++v41;
          }
          while ( v9 < v58 );
          v8 = v52;
        }
      }
      if ( strcmp((const char *)&v47, aComm) == 0 )
      {
        LOBYTE(v45) = *(_BYTE *)(v8 + a1 + 1);
        HIBYTE(v45) = *(_BYTE *)(v8 + a1);
        v20 = *(_BYTE *)(v8 + a1 + 4);
        v21 = v8 + 2;
        v50 = v45;
        BYTE1(v49) = v20;
        v22 = *(_BYTE *)(v8 + 2 + a1 + 1);
        LOBYTE(v49) = *(_BYTE *)(v8 + 2 + a1 + 3);
        v23 = *(_BYTE *)(v8 + 2 + a1);
        v21 += 4;
        BYTE2(v49) = v22;
        HIBYTE(v49) = v23;
        v24 = *(_BYTE *)(v21 + a1 + 1);
        v25 = *(_BYTE *)(v21 + a1);
        v21 += 2;
        v56 = v49;
        LOBYTE(v43) = v24;
        HIBYTE(v43) = v25;
        v53 = v43;
        v3 = sub_41D530((char *)(v21 + a1));
        v26 = *(char *)(v21 + a1 + 14);
        qmemcpy(v60, (const void *)(v21 + 14 + a1 + 1), v26);
        v8 = v52;
        v60[v26] = 0;
      }
      if ( strcmp((const char *)&v47, aInst) == 0 )
      {
        LOBYTE(v44) = *(_BYTE *)(v8 + 10 + a1 + 1);
        HIBYTE(v44) = *(_BYTE *)(v8 + 12 + a1 - 2);
        v54 = v44;
        LOBYTE(v42) = *(_BYTE *)(v8 + 12 + a1 + 1);
        HIBYTE(v42) = *(_BYTE *)(v8 + 12 + a1);
        v57 = v42;
      }
      if ( strcmp((const char *)&v47, aSsnd) == 0 )
        v51 = v8 + a1 + 2;
    }
    v27 = v50;
    v28 = 0;
    v29 = v53 / 8;
    v30 = v53 / 8 * v56 * v50;
    if ( v30 > 0 )
    {
      do
      {
        v31 = v51;
        v28 += 2;
        v32 = *(_BYTE *)(v28 + v51 - 1);
        *(_BYTE *)(v28 + v51 - 1) = *(_BYTE *)(v28 + v51 - 2);
        *(_BYTE *)(v28 + v31 - 2) = v32;
      }
      while ( v28 < v30 );
    }
    v33 = (__int64)v3;
    if ( v41 <= 1 )
    {
      v36 = 0;
      HIDWORD(v33) = 0;
    }
    else
    {
      v34 = 0;
      v35 = v59;
      do
      {
        if ( *v35 == v54 )
          break;
        ++v34;
        ++v35;
      }
      while ( v34 < v41 );
      v36 = v59[v34 + 10];
      v37 = 0;
      v38 = v59;
      do
      {
        if ( *v38 == v57 )
          break;
        ++v37;
        ++v38;
      }
      while ( v37 < v41 );
      v27 = v50;
      HIDWORD(v33) = v59[v37 + 10];
    }
    return sub_41E6B0(
             (struct IDirectSoundBuffer *)v33,
             v51,
             v30,
             v27,
             v53,
             (struct IDirectSoundBuffer *)(v29 * v36 * v27),
             (struct IDirectSoundBuffer *)(v29 * HIDWORD(v33) * v27));
  }
  return result;
}

// 0x41ee30  sub_41EE30
LPDIRECTSOUND __cdecl sub_41EE30(__int16 a1)
{
  LPDIRECTSOUND result; // eax
  int v2; // ecx
  int *v3; // esi
  int v4; // eax
  int v5; // ecx
  int v6; // edi
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // edx
  __int16 v11; // ax
  __int16 *v12; // esi
  int v13; // ecx
  __int16 *v14; // ebx
  unsigned __int16 v15; // di
  int v16; // edx
  _DWORD *v17; // edx
  int v18; // edx
  __int16 v19; // ax
  unsigned int v20; // eax
  int v21; // eax
  int v22; // esi
  int v23; // ecx
  int *v24; // eax
  bool v25; // zf
  int v26; // ecx
  int v27; // ebx
  int *v28; // esi
  int v29; // ebx
  int v30; // edx
  int v31; // ecx
  int *v32; // eax
  int v33; // edx
  int v34; // eax
  __int16 *v35; // edx
  int v36; // esi
  int v37; // ebx
  int *v38; // eax
  int v39; // ecx
  int v40; // edx
  _DWORD *v41; // eax
  int v42; // ecx
  int j; // ebx
  char v44; // bl
  int v45; // eax
  __int16 v46; // ax
  unsigned int v47; // eax
  int v48; // ebx
  int k; // esi
  int m; // eax
  int v51; // [esp-Ch] [ebp-4Ch]
  int v52; // [esp-8h] [ebp-48h]
  int v53; // [esp-8h] [ebp-48h]
  int v54; // [esp-8h] [ebp-48h]
  int v55; // [esp-8h] [ebp-48h]
  int v56; // [esp-8h] [ebp-48h]
  int v57; // [esp-8h] [ebp-48h]
  int v58; // [esp-4h] [ebp-44h]
  int v59; // [esp-4h] [ebp-44h]
  int v60; // [esp-4h] [ebp-44h]
  int v61; // [esp-4h] [ebp-44h]
  int v62; // [esp+14h] [ebp-2Ch] BYREF
  unsigned int v63; // [esp+18h] [ebp-28h] BYREF
  long double v64; // [esp+1Ch] [ebp-24h]
  char v65[4]; // [esp+24h] [ebp-1Ch] BYREF
  int v66; // [esp+28h] [ebp-18h] BYREF
  __int16 *v67; // [esp+2Ch] [ebp-14h]
  __int16 *v68; // [esp+30h] [ebp-10h]
  int v69; // [esp+34h] [ebp-Ch]
  int i; // [esp+38h] [ebp-8h]
  char v71[4]; // [esp+3Ch] [ebp-4h] BYREF

  result = ppDS;
  if ( ppDS != NULL )
  {
    if ( dword_553394 == 0 && dword_4ABF78 != 0 )
    {
      v2 = dword_54EFC4;
      if ( dword_54EFC4 != 0 )
      {
        if ( *(unsigned __int8 *)(dword_54EFC4 + 2) > dword_4ABF78 )
        {
          *(_BYTE *)(dword_54EFC4 + 2) = dword_4ABF78 - 1;
          v2 = dword_54EFC4;
        }
        byte_4B39D4 = *(_BYTE *)(v2 + 2);
        sub_41D6B0((unsigned __int8)byte_4B39D4);
      }
    }
    i = 0;
    if ( dword_4B1C84 > 0 )
    {
      v3 = dword_553208;
      do
      {
        v4 = *v3;
        v5 = *(v3 - 1);
        v6 = *(v3 - 2);
        v66 = v5;
        if ( v4 == 0 )
        {
          v7 = 4 * v5;
          v51 = *((_DWORD *)*(&dword_54EFE0 + v6) + v5);
          if ( (*(int (__stdcall **)(int, unsigned int *, int *))(*(_DWORD *)v51 + 16))(v51, &v63, &v62) == 0 )
          {
            v8 = (int)*(&dword_54EFE0 + v6);
            if ( v63 >= *(_DWORD *)(v8 + 40) )
            {
              (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(v8 + 4 * v66 + 4) + 48))(
                *(_DWORD *)(v8 + 4 * v66 + 4),
                0,
                0,
                1);
              v58 = *(_DWORD *)((char *)*(&dword_54EFE0 + v6) + v7);
              (*(void (__stdcall **)(int))(*(_DWORD *)v58 + 72))(v58);
              *v3 = 1;
            }
          }
        }
        v3 += 4;
        ++i;
      }
      while ( i < dword_4B1C84 );
    }
    result = (LPDIRECTSOUND)dword_54AFC0;
    if ( dword_54AFC0 > 0 )
    {
      v9 = 0;
      for ( i = 0; ; v9 = i )
      {
        v10 = 5 * v9;
        v11 = word_4B3260[10 * v9];
        v12 = &word_4B3260[2 * v10];
        v67 = v12;
        if ( v11 >= 0 )
          goto LABEL_83;
        v13 = *((_DWORD *)v12 + 2);
        if ( (*(_DWORD *)(v13 + 4) & 0x400) != 0 )
        {
          v14 = &word_54F1E4[64 * *(unsigned __int8 *)(v13 + 2) + 4 * *(unsigned __int8 *)(v13 + 3)];
          v15 = dword_4B1C80 + *v14;
          v68 = v14;
        }
        else
        {
          v16 = *(unsigned __int8 *)(v13 + 3) + 16 * *(unsigned __int8 *)(v13 + 2);
          v15 = word_54AFC4[4 * v16];
          v68 = &word_54AFC4[4 * v16];
          v14 = v68;
        }
        if ( v15 >= 0x80u )
          goto LABEL_83;
        v17 = *(&dword_54EFE0 + v15);
        if ( v17 == NULL || *v17 == 0 )
          goto LABEL_83;
        if ( (v11 & 1) != 0 )
          break;
        if ( (v11 & 2) != 0 )
        {
          if ( v17[13] != 0 )
          {
            v37 = 0;
            if ( dword_4B1C84 <= 0 )
              goto LABEL_73;
            v38 = dword_55320C;
            while ( v15 != *(v38 - 3) || *v38 != *((_DWORD *)v12 + 1) )
            {
              ++v37;
              v38 += 4;
              if ( v37 >= dword_4B1C84 )
              {
                *v12 = 0;
                goto LABEL_83;
              }
            }
            v39 = dword_553204[4 * v37];
            HIDWORD(v64) = &dword_553200[4 * v37];
            v59 = *((_DWORD *)*(&dword_54EFE0 + *(_DWORD *)HIDWORD(v64)) + v39);
            (*(void (__stdcall **)(int))(*(_DWORD *)v59 + 72))(v59);
            v60 = *((_DWORD *)*(&dword_54EFE0 + *(_DWORD *)HIDWORD(v64)) + dword_553204[4 * v37] + 1);
            (*(void (__stdcall **)(int))(*(_DWORD *)v60 + 72))(v60);
            v40 = dword_4B1C84 - 1;
            if ( v37 < dword_4B1C84 - 1 )
            {
              v41 = (_DWORD *)HIDWORD(v64);
              v42 = v40 - v37;
              do
              {
                --v42;
                v62 = (int)(v41 + 4);
                *v41 = v41[4];
                v41[1] = v41[5];
                v41[2] = v41[6];
                v41[3] = v41[7];
                v41 = (_DWORD *)v62;
              }
              while ( v42 != 0 );
            }
            dword_4B1C84 = v40;
            *v12 = 0;
          }
          else
          {
            for ( j = 0; j < 40; j += 4 )
            {
              v61 = *(_DWORD *)((char *)*(&dword_54EFE0 + v15) + j);
              (*(void (__stdcall **)(int))(*(_DWORD *)v61 + 72))(v61);
            }
            *v12 = 0;
          }
        }
        else
        {
          if ( (v11 & 4) == 0 )
            goto LABEL_83;
          if ( v17[13] != 0 )
          {
            if ( (*(_BYTE *)(v13 + 4) & 0x20) != 0 )
            {
              v45 = *((_DWORD *)v12 + 1);
              if ( v45 != 0 && (v46 = sub_41F6A0(v45, v13), v12[6] = v46, v46 != 0) )
              {
                v47 = *((unsigned __int8 *)v14 + 4) + 100;
                if ( v47 > 0x7F )
                  v47 = 127;
                v48 = (3000
                     * (((int)(dword_9CA850
                             * ((*((unsigned __int8 *)v12 + 12) + *((unsigned __int8 *)v12 + 13)) >> 1)
                             / 100
                             * v47) >> 7)
                      - 127)) >> 7;
                for ( k = 0; k < 40; k += 4 )
                {
                  v56 = *(_DWORD *)((char *)*(&dword_54EFE0 + v15) + k);
                  (*(void (__stdcall **)(int, int))(*(_DWORD *)v56 + 60))(v56, v48);
                }
              }
              else
              {
                *v12 = 2;
              }
            }
          }
          else
          {
            v44 = 0;
            if ( (*(int (__stdcall **)(_DWORD, int *))(*(_DWORD *)*v17 + 36))(*v17, &v66) != 0 )
            {
LABEL_72:
              if ( (v66 & 1) != 0 )
                goto LABEL_83;
LABEL_73:
              *v12 = 0;
              goto LABEL_83;
            }
            while ( (v66 & 1) == 0 )
            {
              if ( ++v44 >= 10
                || (*(int (__stdcall **)(_DWORD, int *))(**(_DWORD **)*(&dword_54EFE0 + v15) + 36))(
                     *(_DWORD *)*(&dword_54EFE0 + v15),
                     &v66) != 0 )
              {
                goto LABEL_72;
              }
            }
          }
        }
LABEL_83:
        result = (LPDIRECTSOUND)++i;
        if ( i >= 24 )
          return result;
      }
      if ( *((unsigned __int8 *)v12 + 14) != a1 )
        goto LABEL_83;
      v18 = *((_DWORD *)v12 + 1);
      v19 = v11 & 0xFFFE;
      *v12 = v19;
      if ( v18 == 0 )
        goto LABEL_73;
      LOBYTE(v19) = v19 | 4;
      *v12 = v19;
      if ( (*(_BYTE *)(v13 + 4) & 2) != 0 )
        v12[6] = 257 * *(unsigned __int8 *)(v13 + 6);
      else
        v12[6] = sub_41F6A0(v18, v13);
      v20 = *((unsigned __int8 *)v14 + 4) + 100;
      if ( v20 > 0x7F )
        v20 = 127;
      v62 = (int)(dword_9CA850 * ((*((unsigned __int8 *)v12 + 12) + *((unsigned __int8 *)v12 + 13)) >> 1) / 100 * v20) >> 7;
      v21 = (int)*(&dword_54EFE0 + v15);
      v22 = 0;
      v23 = *(_DWORD *)(v21 + 52);
      v24 = *(int **)v21;
      v25 = v23 == 0;
      v26 = *v24;
      v69 = 0;
      if ( v25 )
      {
        (*(void (__stdcall **)(int *, char *))(v26 + 36))(v24, v71);
        if ( (v71[0] & 1) == 0 )
          goto LABEL_38;
        do
        {
          if ( ++v22 >= 10 )
            break;
          v52 = *((_DWORD *)*(&dword_54EFE0 + v15) + v22);
          (*(void (__stdcall **)(int, char *))(*(_DWORD *)v52 + 36))(v52, v71);
        }
        while ( (v71[0] & 1) != 0 );
      }
      else
      {
        (*(void (__stdcall **)(int *, char *))(v26 + 36))(v24, v71);
        for ( m = *((_DWORD *)*(&dword_54EFE0 + v15) + 1); ; m = *((_DWORD *)*(&dword_54EFE0 + v15) + v22 + 1) )
        {
          (*(void (__stdcall **)(int, char *))(*(_DWORD *)m + 36))(m, v65);
          if ( (v71[0] & 1) == 0 && (v65[0] & 4) == 0 )
            break;
          v22 += 2;
          if ( v22 >= 10 )
            break;
          v57 = *((_DWORD *)*(&dword_54EFE0 + v15) + v22);
          (*(void (__stdcall **)(int, char *))(*(_DWORD *)v57 + 36))(v57, v71);
        }
      }
      v69 = v22;
LABEL_38:
      if ( v22 < 10 )
      {
        v27 = (int)*(&dword_54EFE0 + v15);
        HIDWORD(v64) = *((unsigned __int8 *)v68 + 6);
        v28 = *(int **)(v27 + 4 * v69);
        v64 = pow(2.0, 5.0 - (double)SHIDWORD(v64) * 0.08333333333333333) * (double)*(unsigned int *)(v27 + 48);
        v63 = (int)v64;
        (*(void (__stdcall **)(int *, int))(*v28 + 68))(v28, (int)v64);
        v29 = (3000 * (*((unsigned __int8 *)v67 + 12) - *((unsigned __int8 *)v67 + 13))) >> 7;
        (*(void (__stdcall **)(int *, int))(*v28 + 64))(v28, v29);
        v30 = *v28;
        v62 = (3000 * (v62 - 127)) >> 7;
        (*(void (__stdcall **)(int *, int))(v30 + 60))(v28, v62);
        if ( *((_DWORD *)*(&dword_54EFE0 + v15) + 13) != 0 )
        {
          v31 = dword_4B1C84;
          if ( dword_4B1C84 < 10 )
          {
            HIDWORD(v64) = 1;
            i = 0;
            if ( dword_4B1C84 > 0 )
            {
              v68 = (__int16 *)dword_4B1C84;
              i = dword_4B1C84;
              v32 = dword_55320C;
              do
              {
                if ( v15 == *(v32 - 3) && *v32 == *((_DWORD *)v67 + 1) )
                  HIDWORD(v64) = 0;
                v32 += 4;
                v68 = (__int16 *)((char *)v68 - 1);
              }
              while ( v68 != NULL );
              v31 = dword_4B1C84;
            }
            if ( HIDWORD(v64) != 0 )
            {
              v33 = v69;
              v34 = 4 * v31;
              dword_553200[v34] = v15;
              dword_553204[v34] = v33;
              v35 = v67;
              dword_553208[v34] = 0;
              dword_4B1C84 = v31 + 1;
              dword_55320C[v34] = *((_DWORD *)v35 + 1);
              (*(void (__stdcall **)(int *, _DWORD, _DWORD, _DWORD))(*v28 + 48))(v28, 0, 0, 0);
              v36 = 4 * v69 + 4;
              v53 = *(_DWORD *)((char *)*(&dword_54EFE0 + v15) + v36);
              (*(void (__stdcall **)(int, int))(*(_DWORD *)v53 + 64))(v53, -v29);
              v54 = *(_DWORD *)((char *)*(&dword_54EFE0 + v15) + v36);
              (*(void (__stdcall **)(int, unsigned int))(*(_DWORD *)v54 + 68))(v54, v63);
              v55 = *(_DWORD *)((char *)*(&dword_54EFE0 + v15) + v36);
              (*(void (__stdcall **)(int, int))(*(_DWORD *)v55 + 60))(v55, v62);
            }
          }
        }
        else
        {
          (*(void (__stdcall **)(int *, _DWORD, _DWORD, _DWORD))(*v28 + 48))(v28, 0, 0, 0);
        }
      }
      goto LABEL_83;
    }
  }
  return result;
}

// 0x41f4d0  sub_41F4D0
int sub_41F4D0()
{
  int result; // eax
  int v1; // esi
  int *v2; // ebx
  int v3; // edi
  int *v4; // ebp
  int v5; // ecx
  int v6; // [esp+Ch] [ebp-Ch]
  int v7; // [esp+10h] [ebp-8h]
  char v8[4]; // [esp+14h] [ebp-4h] BYREF

  result = 0;
  v6 = 0;
  if ( ppDS != NULL && dword_5533A0[0] == 0 )
  {
    v1 = 1;
    v7 = -1;
    if ( dword_4B1C7C >= 1 )
    {
      v2 = dword_54EFE4;
      do
      {
        if ( *v2 != 0 )
        {
          v3 = 0;
          v4 = &dword_5533A0[result];
          do
          {
            v5 = *(_DWORD *)(v3 + *v2);
            if ( v5 != 0 )
            {
              (*(void (__stdcall **)(int, char *))(*(_DWORD *)v5 + 36))(v5, v8);
              if ( (v8[0] & 5) != 0 )
              {
                (*(void (__stdcall **)(_DWORD))(**(_DWORD **)(v3 + *v2) + 72))(*(_DWORD *)(v3 + *v2));
                if ( v7 != v1 )
                {
                  v4[1] = v1;
                  ++v4;
                  ++v6;
                  v7 = v1;
                }
              }
            }
            v3 += 4;
          }
          while ( v3 < 40 );
          result = v6;
        }
        ++v1;
        ++v2;
      }
      while ( v1 <= dword_4B1C7C );
    }
    dword_5533A0[0] = result;
  }
  return result;
}

// 0x41f590  sub_41F590
LPDIRECTSOUND sub_41F590()
{
  LPDIRECTSOUND result; // eax
  int v1; // edi
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  int v4; // edi
  int *v5; // esi
  int v6; // [esp-18h] [ebp-18h]
  int v7; // [esp-18h] [ebp-18h]

  result = ppDS;
  if ( ppDS != NULL )
  {
    v1 = 1;
    if ( dword_5533A0[0] >= 1 )
    {
      v2 = &unk_5533A4;
      do
      {
        v3 = *(&dword_54EFE0 + *v2);
        if ( v3 != NULL && v3[13] == 0 )
          (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)*v3 + 48))(*v3, 0, 0, 0);
        ++v1;
        ++v2;
      }
      while ( v1 <= dword_5533A0[0] );
    }
    result = (LPDIRECTSOUND)dword_4B1C84;
    v4 = 0;
    if ( dword_4B1C84 > 0 )
    {
      v5 = dword_553200;
      do
      {
        if ( v5[2] != 0 )
        {
          v6 = *((_DWORD *)*(&dword_54EFE0 + *v5) + v5[1] + 1);
          (*(void (__stdcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)v6 + 48))(v6, 0, 0, 1);
        }
        else
        {
          v7 = *((_DWORD *)*(&dword_54EFE0 + *v5) + v5[1]);
          (*(void (__stdcall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v7 + 48))(v7, 0, 0, 0);
        }
        result = (LPDIRECTSOUND)dword_4B1C84;
        ++v4;
        v5 += 4;
      }
      while ( v4 < dword_4B1C84 );
    }
    dword_5533A0[0] = 0;
  }
  return result;
}

// 0x41f650  sub_41F650
__int16 __cdecl sub_41F650(int a1)
{
  __int16 *v1; // ecx
  int i; // edx
  int v3; // eax

  v1 = word_4B3260;
  for ( i = 24; i != 0; --i )
  {
    LOWORD(v3) = *v1;
    if ( (HIBYTE(*v1) & 0x80u) != 0 && *((_DWORD *)v1 + 1) == a1 && (*(_BYTE *)(*((_DWORD *)v1 + 2) + 4) & 0x10) != 0 )
    {
      v3 = (v3 & 1) != 0 ? 0 : 32770;
      *v1 = v3;
    }
    v1 += 10;
  }
  return v3;
}

// 0x41f6a0  sub_41F6A0
__int16 __cdecl sub_41F6A0(_DWORD *a1, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // edx
  int v5; // eax
  int v6; // esi
  int v7; // edi
  int v8; // ebp
  int v9; // ebx
  int v10; // edi
  int v11; // esi
  int v12; // esi
  int v13; // ebp
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // eax
  int v17; // eax
  int v18; // [esp-14h] [ebp-2Ch]
  __int16 v19; // [esp+0h] [ebp-18h]
  int v20[2]; // [esp+8h] [ebp-10h] BYREF
  int v21; // [esp+10h] [ebp-8h]

  if ( a1 == (_DWORD *)dword_4B324C )
    return 25700;
  if ( (*(_BYTE *)(a2 + 5) & 1) != 0 && (v3 = (_DWORD *)a1[30]) != NULL && (v4 = (_DWORD *)*v3, *v3 != 0) )
  {
    v5 = v4[34] + a1[58];
    v6 = v4[33] + a1[57];
    v7 = v4[35] + a1[59];
  }
  else
  {
    v6 = a1[57];
    v5 = a1[58];
    v7 = a1[59];
  }
  v20[1] = v5 - dword_4B38D0;
  v20[0] = v6 - dword_4B38CC;
  v21 = v7 - dword_4B38D4;
  v8 = sub_407990(v20);
  if ( v8 >= 4096 )
  {
    v19 = 0;
  }
  else
  {
    v18 = v7 - dword_4B38C8;
    v20[0] = v6 - dword_4B38C0;
    v21 = v7 - dword_4B38C8;
    v9 = dword_4B38CC - dword_4B38C0;
    v10 = dword_4B38D4 - dword_4B38C8;
    v11 = ratan2(v6 - dword_4B38C0, v18);
    v12 = v11 - ratan2(v9, v10);
    if ( v12 > 2048 )
      v12 -= 4096;
    if ( v12 < -2048 )
      v12 += 4096;
    v13 = v8 << 7 >> 12;
    v14 = 127 - v13;
    if ( v12 < 0 )
    {
      if ( v12 < -1024 )
        v12 = -2048 - v12;
      LOBYTE(v19) = 127 - v13;
      HIBYTE(v19) = v14 + ((v14 * v12) >> 10);
    }
    else
    {
      if ( v12 > 1024 )
        v12 = 2048 - v12;
      HIBYTE(v19) = 127 - v13;
      LOBYTE(v19) = v14 - ((v14 * v12) >> 10);
    }
  }
  if ( (*(_BYTE *)(a2 + 5) & 2) != 0 )
  {
    v15 = *(unsigned __int8 *)(a2 + 6);
    v16 = v15 + (unsigned __int8)v19;
    if ( v16 > 0x7F )
      LOBYTE(v16) = 127;
    LOBYTE(v19) = v16;
    v17 = v15 + HIBYTE(v19);
    if ( v17 > 127 )
      LOBYTE(v17) = 127;
    HIBYTE(v19) = v17;
  }
  return v19;
}

// 0x41f870  sub_41F870
int sub_41F870()
{
  return ResetTrack(dword_5532A0);
}

// 0x41f880  sub_41F880
__int16 __cdecl sub_41F880(int a1, int a2)
{
  int v4; // eax
  int v5; // edi
  __int16 result; // ax
  int v7; // ebp
  int v8; // eax
  char *v9; // edx
  char *v10; // edx
  double v11; // st7
  int v12; // ebx
  double v13; // st7
  char *v14; // edx
  char *v15; // edx
  double v16; // st6
  double v17; // st6
  bool v18; // zf
  int v19; // [esp+10h] [ebp-14h]
  int v20; // [esp+10h] [ebp-14h]
  int v21; // [esp+14h] [ebp-10h]
  float v22; // [esp+14h] [ebp-10h]
  int v23; // [esp+14h] [ebp-10h]
  int v24; // [esp+18h] [ebp-Ch]
  int v25; // [esp+18h] [ebp-Ch]
  int v26; // [esp+20h] [ebp-4h]
  int v27; // [esp+28h] [ebp+4h]
  float v28; // [esp+28h] [ebp+4h]
  int v29; // [esp+28h] [ebp+4h]
  int v30; // [esp+2Ch] [ebp+8h]
  float v31; // [esp+2Ch] [ebp+8h]

  v19 = 20 - dword_4EFB40;
  v4 = *(_DWORD *)(a1 + 248);
  *(_DWORD *)(a2 + 12) = v4;
  v5 = *(_DWORD *)(a1 + 120) + 12;
  *(_WORD *)(a2 + 8) = *(_WORD *)(*(_DWORD *)(a1 + 120) + 20);
  LOWORD(v4) = *(_WORD *)(v4 + 12);
  *(_WORD *)(a2 + 10) = v4;
  if ( (__int16)v4 > 240 )
    *(_WORD *)(a2 + 10) = 240;
  result = *(_WORD *)(a2 + 8);
  if ( result > 256 )
  {
    v21 = (unsigned __int16)dword_4EFB4C >> 1;
    v26 = (unsigned __int16)dword_4EFB4C * result / (unsigned __int16)dword_4EFB58;
    v27 = *(__int16 *)(a1 + 222) * v26 / result;
    v7 = v26 - v27 - v21;
    v8 = v27 / v26;
    v30 = v7;
    v24 = v27 / v26;
    if ( v26 * (v27 / v26) != v27 )
      v24 = ++v8;
    if ( v7 <= -v21 )
    {
      v12 = dword_4EFB8C;
    }
    else
    {
      v9 = (char *)&unk_6AC260 + 16 * dword_623650++;
      dword_623684 = (int)v9;
      v10 = (char *)&unk_734DE0 + 16 * dword_623654;
      dword_623654 += 4;
      dword_623688 = (int)v10;
      dword_52FBA0 = dword_4EFB8C;
      *(_DWORD *)(dword_4EFB8C + 16) = dword_4E7DC4[4 * *(unsigned __int16 *)(v5 + 6)];
      dword_4E7DC4[4 * *(unsigned __int16 *)(v5 + 6)] = dword_4EFB8C;
      word_622600[*(unsigned __int16 *)(v5 + 6)] = 1;
      *(float *)(dword_52FBA0 + 20) = (double)*(__int16 *)(a1 + 222) / (double)*(__int16 *)(a2 + 8);
      *(_DWORD *)(dword_52FBA0 + 24) = 1065057148;
      *(_DWORD *)(dword_52FBA0 + 28) = 1065353216;
      *(_DWORD *)(dword_52FBA0 + 32) = 1065057148;
      *(float *)(dword_52FBA0 + 36) = (double)*(__int16 *)(a1 + 222) / (double)*(__int16 *)(a2 + 8);
      *(_DWORD *)(dword_52FBA0 + 40) = 1016107121;
      *(_DWORD *)(dword_52FBA0 + 44) = 1065353216;
      *(_DWORD *)(dword_52FBA0 + 48) = 1016107121;
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
      *(float *)dword_623688 = (float)-((unsigned __int16)dword_4EFB4C >> 1);
      *(float *)(dword_623688 + 4) = (float)-(HIWORD(dword_4EFB4C)
                                            * *(__int16 *)(*(_DWORD *)(a2 + 12) + 8)
                                            / HIWORD(dword_4EFB58));
      v11 = (double)(v19 + 1000);
      *(float *)(dword_623688 + 8) = v11;
      *(_DWORD *)dword_52FBA0 = dword_623688;
      v28 = (float)v7;
      *(float *)(dword_623688 + 16) = v28;
      *(float *)(dword_623688 + 20) = (float)-(HIWORD(dword_4EFB4C)
                                             * *(__int16 *)(*(_DWORD *)(a2 + 12) + 8)
                                             / HIWORD(dword_4EFB58));
      v22 = (float)v19;
      *(float *)(dword_623688 + 24) = v22;
      *(_DWORD *)(dword_52FBA0 + 4) = dword_623688 + 16;
      *(float *)(dword_623688 + 32) = (float)-((unsigned __int16)dword_4EFB4C >> 1);
      *(float *)(dword_623688 + 36) = *(float *)(dword_623688 + 4)
                                    - (double)(HIWORD(dword_4EFB4C)
                                             * *(__int16 *)(*(_DWORD *)(a2 + 12) + 12)
                                             / HIWORD(dword_4EFB58));
      *(float *)(dword_623688 + 40) = v11;
      *(_DWORD *)(dword_52FBA0 + 8) = dword_623688 + 32;
      *(float *)(dword_623688 + 48) = v28;
      *(float *)(dword_623688 + 52) = *(float *)(dword_623688 + 4)
                                    - (double)(HIWORD(dword_4EFB4C)
                                             * *(__int16 *)(*(_DWORD *)(a2 + 12) + 12)
                                             / HIWORD(dword_4EFB58));
      *(float *)(dword_623688 + 56) = v22;
      *(_DWORD *)(dword_52FBA0 + 12) = dword_623688 + 48;
      v8 = v24;
      v12 = dword_4EFB8C + 120;
      ++dword_4E5E40;
      dword_4EFB8C += 120;
    }
    if ( v8 > 0 )
    {
      v29 = *(__int16 *)(a2 + 8);
      v13 = (double)v19;
      v23 = v8;
      do
      {
        v20 = v7 + v26;
        v25 = v7 + v26;
        if ( v7 + v26 > (unsigned __int16)dword_4EFB4C )
        {
          v25 = (unsigned __int16)dword_4EFB4C;
          v29 = *(__int16 *)(a2 + 8)
              - (unsigned __int16)dword_4EFB58
              * (v7 + v26 - (unsigned __int16)dword_4EFB4C)
              / (unsigned __int16)dword_4EFB4C;
        }
        dword_52FBA0 = v12;
        v14 = (char *)&unk_6AC260 + 16 * dword_623650++;
        dword_623684 = (int)v14;
        v15 = (char *)&unk_734DE0 + 16 * dword_623654;
        dword_623654 += 4;
        dword_623688 = (int)v15;
        v16 = (double)v29;
        *(_DWORD *)(v12 + 16) = dword_4E7DC4[4 * *(unsigned __int16 *)(v5 + 6)];
        dword_4E7DC4[4 * *(unsigned __int16 *)(v5 + 6)] = dword_4EFB8C;
        word_622600[*(unsigned __int16 *)(v5 + 6)] = 1;
        *(_DWORD *)(dword_52FBA0 + 20) = 0;
        *(_DWORD *)(dword_52FBA0 + 24) = 1065057148;
        *(float *)(dword_52FBA0 + 28) = v16 / (double)*(__int16 *)(a2 + 8);
        *(_DWORD *)(dword_52FBA0 + 32) = 1065057148;
        *(_DWORD *)(dword_52FBA0 + 36) = 0;
        *(_DWORD *)(dword_52FBA0 + 40) = 1016107121;
        *(float *)(dword_52FBA0 + 44) = v16 / (double)*(__int16 *)(a2 + 8);
        *(_DWORD *)(dword_52FBA0 + 48) = 1016107121;
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
        v17 = (double)v30;
        *(_DWORD *)(dword_52FBA0 + 100) = 1065353216;
        *(_DWORD *)(dword_52FBA0 + 104) = 1065353216;
        *(_DWORD *)(dword_52FBA0 + 108) = 1065353216;
        *(_DWORD *)(dword_52FBA0 + 112) = 1065353216;
        *(_DWORD *)(dword_52FBA0 + 116) = 1065353216;
        *(float *)dword_623688 = v17;
        *(float *)(dword_623688 + 4) = (float)-(HIWORD(dword_4EFB4C)
                                              * *(__int16 *)(*(_DWORD *)(a2 + 12) + 8)
                                              / HIWORD(dword_4EFB58));
        *(float *)(dword_623688 + 8) = v13;
        *(_DWORD *)dword_52FBA0 = dword_623688;
        v31 = (float)v25;
        *(float *)(dword_623688 + 16) = v31;
        *(float *)(dword_623688 + 20) = (float)-(HIWORD(dword_4EFB4C)
                                               * *(__int16 *)(*(_DWORD *)(a2 + 12) + 8)
                                               / HIWORD(dword_4EFB58));
        *(float *)(dword_623688 + 24) = v13;
        *(_DWORD *)(dword_52FBA0 + 4) = dword_623688 + 16;
        *(float *)(dword_623688 + 32) = v17;
        *(float *)(dword_623688 + 36) = *(float *)(dword_623688 + 4)
                                      - (double)(HIWORD(dword_4EFB4C)
                                               * *(__int16 *)(*(_DWORD *)(a2 + 12) + 12)
                                               / HIWORD(dword_4EFB58));
        *(float *)(dword_623688 + 40) = v13;
        *(_DWORD *)(dword_52FBA0 + 8) = dword_623688 + 32;
        v7 += v26;
        *(float *)(dword_623688 + 48) = v31;
        v30 = v20;
        *(float *)(dword_623688 + 52) = *(float *)(dword_623688 + 4)
                                      - (double)(HIWORD(dword_4EFB4C)
                                               * *(__int16 *)(*(_DWORD *)(a2 + 12) + 12)
                                               / HIWORD(dword_4EFB58));
        *(float *)(dword_623688 + 56) = v13;
        *(_DWORD *)(dword_52FBA0 + 12) = dword_623688 + 48;
        ++dword_4E5E40;
        v12 = dword_4EFB8C + 120;
        v18 = v23 == 1;
        dword_4EFB8C += 120;
        --v23;
      }
      while ( !v18 );
    }
    result = 240 - *(_WORD *)(a2 + 10);
    v18 = *(_WORD *)(a2 + 10) == 240;
    *(_WORD *)(a2 + 10) = result;
    if ( result >= 0 && !v18 )
      return sub_40CC70(0, 0, 0);
  }
  return result;
}

// 0x420040  sub_420040
__int16 __cdecl sub_420040(int a1, int a2)
{
  int v3; // eax
  int v4; // edi
  int v6; // ebx
  __int16 result; // ax
  __int16 v8; // dx
  int v9; // eax
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  char *v13; // edx
  int v14; // edx
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // edx
  char *v21; // ebp
  int v22; // ebp
  int v23; // edx
  double v24; // st7
  double v25; // st7
  int v26; // ebx
  int v27; // ebp
  unsigned __int16 v28; // cx
  int v29; // edx
  int v30; // eax
  int v31; // eax
  bool v32; // zf
  int v33; // [esp+10h] [ebp-28h]
  int v34; // [esp+14h] [ebp-24h]
  int v35; // [esp+14h] [ebp-24h]
  int v36; // [esp+18h] [ebp-20h]
  int v37; // [esp+1Ch] [ebp-1Ch]
  int v38; // [esp+20h] [ebp-18h]
  int v39; // [esp+24h] [ebp-14h]
  int v40; // [esp+24h] [ebp-14h]
  int v41; // [esp+2Ch] [ebp-Ch]
  int v42; // [esp+3Ch] [ebp+4h]
  int v43; // [esp+40h] [ebp+8h]

  v3 = *(_DWORD *)(a1 + 248);
  v4 = 20 - dword_4EFB40;
  *(_DWORD *)(a2 + 12) = v3;
  v6 = *(_DWORD *)(a1 + 120) + 12;
  v41 = v6;
  *(_WORD *)(a2 + 8) = *(_WORD *)(*(_DWORD *)(a1 + 120) + 20);
  result = *(_WORD *)(v3 + 12);
  *(_WORD *)(a2 + 10) = result;
  if ( result > 240 )
    *(_WORD *)(a2 + 10) = 240;
  v8 = *(_WORD *)(a2 + 8);
  if ( v8 > 256 )
  {
    v42 = (unsigned __int16)dword_4EFB4C >> 1;
    v33 = (unsigned __int16)dword_4EFB4C * v8 / (unsigned __int16)dword_4EFB58;
    v9 = *(__int16 *)(a1 + 222) * v33 / v8;
    v39 = v9;
    v43 = v33 - v9 - v42;
    if ( v43 > v42 )
      v43 = (unsigned __int16)dword_4EFB4C >> 1;
    v10 = v9 / v33;
    v34 = v10;
    if ( v33 * v10 != v39 )
      v34 = v10 + 1;
    v11 = v43;
    v12 = -v4;
    if ( v43 > -v42 )
    {
      v13 = (char *)&unk_6AC260 + 16 * dword_623650++;
      dword_623684 = (int)v13;
      v14 = 16 * dword_623654;
      dword_623654 += 4;
      dword_4EFAC8 = dword_4EFB8C;
      dword_623680 = (int)&unk_6236A0 + v14;
      *(_DWORD *)(dword_4EFB8C + 4) = 0;
      *(_DWORD *)dword_4EFAC8 = *(unsigned __int16 *)(v6 + 6);
      *(_DWORD *)(dword_4EFAC8 + 28) = dword_4EFBA0[-v4];
      dword_4EFBA0[-v4] = dword_4EFB8C;
      v15 = dword_4EFAC8;
      word_622600[*(unsigned __int16 *)(v6 + 6)] = 1;
      *(_DWORD *)(v15 + 8) = 16;
      *(float *)(dword_4EFAC8 + 36) = (double)*(__int16 *)(a1 + 222) / (double)*(__int16 *)(a2 + 8);
      *(_DWORD *)(dword_4EFAC8 + 40) = 1065057148;
      *(_DWORD *)(dword_4EFAC8 + 60) = 1065353216;
      *(_DWORD *)(dword_4EFAC8 + 64) = 1065057148;
      *(float *)(dword_4EFAC8 + 84) = (double)*(__int16 *)(a1 + 222) / (double)*(__int16 *)(a2 + 8);
      *(_DWORD *)(dword_4EFAC8 + 88) = 1016107121;
      *(_DWORD *)(dword_4EFAC8 + 108) = 1065353216;
      *(_DWORD *)(dword_4EFAC8 + 112) = 1016107121;
      dword_62364C = HIWORD(dword_4EFB4C) * *(__int16 *)(*(_DWORD *)(a2 + 12) + 12) / HIWORD(dword_4EFB58);
      *(_DWORD *)dword_623680 = -((unsigned __int16)dword_4EFB4C >> 1);
      *(_DWORD *)(dword_623680 + 4) = -(HIWORD(dword_4EFB4C)
                                      * *(__int16 *)(*(_DWORD *)(a2 + 12) + 8)
                                      / HIWORD(dword_4EFB58));
      *(_DWORD *)(dword_623680 + 8) = v4;
      *(_DWORD *)(dword_4EFAC8 + 32) = dword_623680;
      *(_DWORD *)(dword_623680 + 16) = v43;
      *(_DWORD *)(dword_623680 + 20) = -(HIWORD(dword_4EFB4C)
                                       * *(__int16 *)(*(_DWORD *)(a2 + 12) + 8)
                                       / HIWORD(dword_4EFB58));
      *(_DWORD *)(dword_623680 + 24) = v4;
      *(_DWORD *)(dword_4EFAC8 + 56) = dword_623680 + 16;
      *(_DWORD *)(dword_623680 + 32) = -((unsigned __int16)dword_4EFB4C >> 1);
      *(_DWORD *)(dword_623680 + 36) = *(_DWORD *)(dword_623680 + 4)
                                     - HIWORD(dword_4EFB4C)
                                     * *(__int16 *)(*(_DWORD *)(a2 + 12) + 12)
                                     / HIWORD(dword_4EFB58);
      *(_DWORD *)(dword_623680 + 40) = v4;
      *(_DWORD *)(dword_4EFAC8 + 80) = dword_623680 + 32;
      *(_DWORD *)(dword_623680 + 48) = v43;
      *(_DWORD *)(dword_623680 + 52) = *(_DWORD *)(dword_623680 + 4)
                                     - HIWORD(dword_4EFB4C)
                                     * *(__int16 *)(*(_DWORD *)(a2 + 12) + 12)
                                     / HIWORD(dword_4EFB58);
      *(_DWORD *)(dword_623680 + 56) = v4;
      *(_DWORD *)(dword_4EFAC8 + 104) = dword_623680 + 48;
      *(_DWORD *)dword_623680 += (unsigned __int16)dword_4EFB50;
      *(_DWORD *)(dword_623680 + 4) = HIWORD(dword_4EFB50) - *(_DWORD *)(dword_623680 + 4);
      *(_DWORD *)(dword_623680 + 16) += (unsigned __int16)dword_4EFB50;
      *(_DWORD *)(dword_623680 + 20) = HIWORD(dword_4EFB50) - *(_DWORD *)(dword_623680 + 20);
      *(_DWORD *)(dword_623680 + 32) += (unsigned __int16)dword_4EFB50;
      *(_DWORD *)(dword_623680 + 36) = HIWORD(dword_4EFB50) - *(_DWORD *)(dword_623680 + 36);
      *(_DWORD *)(dword_623680 + 48) += (unsigned __int16)dword_4EFB50;
      *(_DWORD *)(dword_623680 + 52) = HIWORD(dword_4EFB50) - *(_DWORD *)(dword_623680 + 52);
      v16 = dword_623680;
      v17 = (unsigned __int16)dword_4EFB4C - 1;
      if ( *(_DWORD *)(dword_623680 + 16) > v17 )
      {
        *(_DWORD *)(dword_623680 + 16) = v17;
        v16 = dword_623680;
      }
      v18 = (unsigned __int16)dword_4EFB4C - 1;
      if ( *(_DWORD *)(v16 + 48) > v18 )
        *(_DWORD *)(v16 + 48) = v18;
      ++dword_4E5E40;
      v11 = v43;
      dword_4EFB8C += 128;
    }
    if ( v34 > 0 )
    {
      v38 = *(__int16 *)(a2 + 8);
      v37 = v42 - v11;
      v19 = v33 + v11;
      v36 = v33 + v11;
      v40 = v34;
      while ( 1 )
      {
        v35 = v19;
        if ( v19 > (unsigned __int16)dword_4EFB4C )
        {
          v20 = *(__int16 *)(a2 + 8)
              - (unsigned __int16)dword_4EFB58 * (v19 - (unsigned __int16)dword_4EFB4C) / (unsigned __int16)dword_4EFB4C;
          v19 = (unsigned __int16)dword_4EFB4C;
          v38 = v20;
          v35 = (unsigned __int16)dword_4EFB4C;
        }
        v21 = (char *)&unk_6AC260 + 16 * dword_623650++;
        dword_623684 = (int)v21;
        v22 = 16 * dword_623654;
        dword_623654 += 4;
        dword_4EFAC8 = dword_4EFB8C;
        dword_623680 = (int)&unk_6236A0 + v22;
        *(_DWORD *)(dword_4EFB8C + 4) = 0;
        *(_DWORD *)dword_4EFAC8 = *(unsigned __int16 *)(v6 + 6);
        *(_DWORD *)(dword_4EFAC8 + 28) = dword_4EFBA0[v12];
        dword_4EFBA0[v12] = dword_4EFB8C;
        v23 = dword_4EFAC8;
        v24 = (double)v38;
        word_622600[*(unsigned __int16 *)(v6 + 6)] = 1;
        *(_DWORD *)(v23 + 36) = 0;
        *(_DWORD *)(dword_4EFAC8 + 40) = 1065057148;
        *(float *)(dword_4EFAC8 + 60) = v24 / (double)*(__int16 *)(a2 + 8);
        *(_DWORD *)(dword_4EFAC8 + 64) = 1065057148;
        *(_DWORD *)(dword_4EFAC8 + 84) = 0;
        *(_DWORD *)(dword_4EFAC8 + 88) = 1016107121;
        *(float *)(dword_4EFAC8 + 108) = v24 / (double)*(__int16 *)(a2 + 8);
        *(_DWORD *)(dword_4EFAC8 + 112) = 1016107121;
        if ( v19 > v42 )
        {
          v35 = v42;
          v25 = (double)v37 / (double)(v19 - v43);
          *(float *)(dword_4EFAC8 + 60) = v25 * *(float *)(dword_4EFAC8 + 60);
          *(float *)(dword_4EFAC8 + 108) = v25 * *(float *)(dword_4EFAC8 + 108);
        }
        v26 = (__int64)(double)v43;
        *(_DWORD *)dword_623680 = v26;
        *(_DWORD *)(dword_623680 + 4) = (__int64)(double)-(HIWORD(dword_4EFB4C)
                                                         * *(__int16 *)(*(_DWORD *)(a2 + 12) + 8)
                                                         / HIWORD(dword_4EFB58));
        *(_DWORD *)(dword_623680 + 8) = v4;
        *(_DWORD *)(dword_4EFAC8 + 32) = dword_623680;
        v27 = (__int64)(double)v35;
        *(_DWORD *)(dword_623680 + 16) = v27;
        *(_DWORD *)(dword_623680 + 20) = (__int64)(double)-(HIWORD(dword_4EFB4C)
                                                          * *(__int16 *)(*(_DWORD *)(a2 + 12) + 8)
                                                          / HIWORD(dword_4EFB58));
        *(_DWORD *)(dword_623680 + 24) = v4;
        *(_DWORD *)(dword_4EFAC8 + 56) = dword_623680 + 16;
        *(_DWORD *)(dword_623680 + 32) = v26;
        *(_DWORD *)(dword_623680 + 36) = *(_DWORD *)(dword_623680 + 4)
                                       - HIWORD(dword_4EFB4C)
                                       * *(__int16 *)(*(_DWORD *)(a2 + 12) + 12)
                                       / HIWORD(dword_4EFB58);
        *(_DWORD *)(dword_623680 + 40) = v4;
        *(_DWORD *)(dword_4EFAC8 + 80) = dword_623680 + 32;
        *(_DWORD *)(dword_623680 + 48) = v27;
        *(_DWORD *)(dword_623680 + 52) = *(_DWORD *)(dword_623680 + 4)
                                       - HIWORD(dword_4EFB4C)
                                       * *(__int16 *)(*(_DWORD *)(a2 + 12) + 12)
                                       / HIWORD(dword_4EFB58);
        *(_DWORD *)(dword_623680 + 56) = v4;
        *(_DWORD *)(dword_4EFAC8 + 104) = dword_623680 + 48;
        *(_DWORD *)dword_623680 += (unsigned __int16)dword_4EFB50;
        *(_DWORD *)(dword_623680 + 4) = HIWORD(dword_4EFB50) - *(_DWORD *)(dword_623680 + 4);
        *(_DWORD *)(dword_623680 + 16) += (unsigned __int16)dword_4EFB50;
        *(_DWORD *)(dword_623680 + 20) = HIWORD(dword_4EFB50) - *(_DWORD *)(dword_623680 + 20);
        *(_DWORD *)(dword_623680 + 32) += (unsigned __int16)dword_4EFB50;
        *(_DWORD *)(dword_623680 + 36) = HIWORD(dword_4EFB50) - *(_DWORD *)(dword_623680 + 36);
        *(_DWORD *)(dword_623680 + 48) += (unsigned __int16)dword_4EFB50;
        *(_DWORD *)(dword_623680 + 52) = HIWORD(dword_4EFB50) - *(_DWORD *)(dword_623680 + 52);
        v28 = dword_4EFB4C;
        v29 = dword_623680;
        v30 = (unsigned __int16)dword_4EFB4C - 1;
        if ( *(_DWORD *)(dword_623680 + 16) > v30 )
        {
          *(_DWORD *)(dword_623680 + 16) = v30;
          v28 = dword_4EFB4C;
          v29 = dword_623680;
        }
        v31 = v28 - 1;
        if ( *(_DWORD *)(v29 + 48) > v31 )
          *(_DWORD *)(v29 + 48) = v31;
        *(_DWORD *)(dword_4EFAC8 + 8) = 16;
        ++dword_4E5E40;
        v36 += v33;
        dword_4EFB8C += 128;
        v32 = v40 == 1;
        v43 += v33;
        v37 -= v33;
        --v40;
        if ( v32 )
          break;
        v19 = v36;
        v12 = -v4;
        v6 = v41;
      }
    }
    result = 240 - *(_WORD *)(a2 + 10);
    v32 = *(_WORD *)(a2 + 10) == 240;
    *(_WORD *)(a2 + 10) = result;
    if ( result >= 0 && !v32 )
      return sub_40CC70(0, 0, 0);
  }
  return result;
}

// 0x420970  sub_420970
FILE *__cdecl sub_420970(char *FileName, void *Buffer)
{
  FILE *result; // eax
  FILE *v3; // esi
  size_t v4; // edi

  result = FsFOpen(FileName, /*Mode*/ aRb);
  v3 = result;
  if ( result != NULL )
  {
    fseek(/*Stream*/ result, /*Offset*/ 0, /*Origin*/ 2);
    v4 = ftell(/*Stream*/ v3);
    fseek(/*Stream*/ v3, /*Offset*/ 0, /*Origin*/ 0);
    fseek(/*Stream*/ v3, /*Offset*/ 1078, /*Origin*/ 0);
    fread(Buffer, /*ElementSize*/ 1u, /*ElementCount*/ v4, /*Stream*/ v3);
    fclose(/*Stream*/ v3);
    return (FILE *)Buffer;
  }
  return result;
}

// 0x4209e0  sub_4209E0
int sub_4209E0()
{
  int result; // eax
  int v1; // ebx
  char *v2; // edi
  char *v3; // esi
  double v4; // st7
  int v5; // edx
  int v6; // ebx
  char *v7; // edi
  double *v8; // esi
  double v9; // st6
  unsigned __int8 v11; // c0
  unsigned __int8 v12; // c3
  unsigned __int8 v14; // c0
  unsigned __int8 v15; // c3
  unsigned __int8 v17; // c0
  unsigned __int8 v18; // c3
  double v19; // st7
  __int64 v20; // rax
  double v21; // st7
  int v22[2]; // [esp+10h] [ebp-18h] BYREF
  int v23[2]; // [esp+18h] [ebp-10h] BYREF
  int v24[2]; // [esp+20h] [ebp-8h] BYREF

  result = dword_548C60;
  v1 = 0;
  if ( dword_548C60 > 0 )
  {
    v2 = (char *)&unk_547468;
    v3 = &byte_548C81;
    do
    {
      v4 = (double)(unsigned __int8)*(v3 - 1);
      v22[0] = (unsigned __int8)*v3;
      v5 = (unsigned __int8)v3[1];
      *(double *)v23 = v4 * 0.00392156862745098;
      *(double *)v24 = (double)v22[0] * 0.00392156862745098;
      *(double *)v22 = (double)v5 * 0.00392156862745098;
      sub_425450(
        *(double *)v23,
        *(double *)v24,
        *(double *)v22,
        (int)(v2 - 8),
        (int)v2,
        (int)(v2 + 8));
      result = dword_548C60;
      ++v1;
      v3 += 4;
      v2 += 24;
    }
    while ( v1 < dword_548C60 );
  }
  v6 = 0;
  if ( result > 0 )
  {
    v7 = &byte_548C81;
    v8 = (double *)&unk_547468;
    do
    {
      v9 = dbl_9CA878 + *(v8 - 1);
      *(v8 - 1) = v9;
      if ( (v11 | v12) == 0 )
        *(v8 - 1) = v9 - 360.0;
      v8[1] = dbl_9CA888 * v8[1];
      if ( (v14 | v15) == 0 )
      {
        *((_DWORD *)v8 + 2) = 0;
        *((_DWORD *)v8 + 3) = 1072693248;
      }
      *v8 = dbl_9CA880 * *v8;
      if ( (v17 | v18) == 0 )
      {
        *(_DWORD *)v8 = 0;
        *((_DWORD *)v8 + 1) = 1072693248;
      }
      sub_425170((int)v23, (int)v24, (int)v22, *(v8 - 1), *v8, v8[1]);
      v19 = *(double *)v24 * 255.0;
      *(v7 - 1) = (__int64)(*(double *)v23 * 255.0);
      v20 = (__int64)v19;
      v21 = *(double *)v22 * 255.0;
      *v7 = v20;
      v7[1] = (__int64)v21;
      result = dword_548C60;
      ++v6;
      v8 += 3;
      v7 += 4;
    }
    while ( v6 < dword_548C60 );
  }
  return result;
}

// 0x420ba0  sub_420BA0
char __usercall sub_420BA0/*@<al>*/(int a1/*@<ebp>*/, unsigned int a2/*@<edi>*/, _BYTE *a3, unsigned __int8 *a4, _BYTE *a5)
{
  unsigned int v5; // eax
  char v6; // cl
  int v7; // edx
  int v8; // ebp
  int v9; // edi
  int v10; // edx
  int v11; // edi
  int v12; // edx
  int v13; // edi

  if ( dword_4B1CD0 != 0 )
  {
    v5 = (unsigned int)a4;
    LOWORD(a2) = *((unsigned __int8 *)off_46AEC0
                 + ((*a4 >> 3) | (unsigned __int16)(4 * ((32 * (a4[2] & 0xF8)) | a4[1] & 0xF8))));
    a2 *= 4;
    a4[2] = byte_5A7CC0[(unsigned __int16)a2];
    a4[1] = byte_5A7CC1[(unsigned __int16)a2];
    *a4 = byte_5A7CC2[(unsigned __int16)a2];
    v6 = a5[9];
    if ( (v6 & 1) != 0 && a4[3] == 0 )
      a2 = 0;
    if ( v6 != 0 && a4[3] < 0x1Fu )
      a2 = 0;
  }
  else
  {
    v5 = (unsigned int)a4;
    LOWORD(a2) = (unsigned __int8)byte_4B5C40[*a4];
  }
  HIWORD(v7) = 0;
  switch ( a5[8] )
  {
    case 8:
      v5 = a2 >> 2;
      *a3 = a2 >> 2;
      break;
    case 0xF:
    case 0x10:
      LOWORD(a1) = (unsigned __int8)(*(_BYTE *)v5 >> (8 - *a5));
      v8 = a1 << a5[1];
      *(_WORD *)a3 = v8;
      LOWORD(a2) = (unsigned __int8)(*(_BYTE *)(v5 + 1) >> (8 - a5[2]));
      v9 = v8 | (a2 << a5[3]);
      *(_WORD *)a3 = v9;
      LOWORD(v7) = (unsigned __int8)(*(_BYTE *)(v5 + 2) >> (8 - a5[4]));
      v10 = v9 | (v7 << a5[5]);
      *(_WORD *)a3 = v10;
      LOWORD(v5) = (unsigned __int8)(*(_BYTE *)(v5 + 3) >> (8 - a5[6]));
      v5 = v10 | (v5 << a5[7]);
      *(_WORD *)a3 = v5;
      break;
    case 0x18:
      a3[(unsigned __int8)a5[1] >> 3] = *(_BYTE *)v5;
      a3[(unsigned __int8)a5[3] >> 3] = *(_BYTE *)(v5 + 1);
      LOBYTE(v5) = *(_BYTE *)(v5 + 2);
      a3[(unsigned __int8)a5[5] >> 3] = v5;
      break;
    case 0x20:
      v11 = *(unsigned __int8 *)v5 << a5[1];
      *(_DWORD *)a3 = v11;
      v12 = v11 | (*(unsigned __int8 *)(v5 + 1) << a5[3]);
      *(_DWORD *)a3 = v12;
      v13 = v12 | (*(unsigned __int8 *)(v5 + 2) << a5[5]);
      *(_DWORD *)a3 = v13;
      *(_DWORD *)a3 = v13 | (*(unsigned __int8 *)(v5 + 3) << a5[7]);
      break;
    default:
      return v5;
  }
  return v5;
}

// 0x420d90  sub_420D90
int __cdecl sub_420D90(int a1, _BYTE *a2, int a3, int a4, int a5)
{
  int v5; // eax
  signed int v6; // edi
  int v7; // ecx
  int v8; // eax
  _BYTE *v9; // ebp
  unsigned __int8 v10; // bl
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // cl
  unsigned __int8 v13; // al
  int v14; // ecx
  unsigned __int8 v15; // dl
  unsigned __int8 v16; // cl
  unsigned __int8 v17; // bl
  unsigned __int8 v18; // al
  int v19; // ecx
  double v20; // st7
  unsigned __int8 v21; // bl
  unsigned __int8 v22; // dl
  unsigned __int8 v23; // cl
  unsigned __int8 v24; // al
  bool v25; // zf
  unsigned int v26; // ebx
  unsigned int v27; // ecx
  int i; // esi
  int j; // esi
  int v30; // ecx
  char *v31; // eax
  int v32; // edx
  int k; // esi
  int m; // esi
  int n; // esi
  _BYTE *v36; // esi
  int v37; // ecx
  char *v38; // eax
  __int16 v39; // bp
  unsigned int v40; // edx
  int ii; // eax
  int v42; // ecx
  char *v43; // eax
  int v44; // eax
  int v46; // ebp
  char v47; // cl
  int kk; // ebx
  __int64 v49; // rax
  int jj; // ebx
  __int64 v52; // rax
  int v53; // [esp+20h] [ebp-1Ch]
  int v54; // [esp+24h] [ebp-18h]
  float v55; // [esp+24h] [ebp-18h]
  unsigned __int8 v56[4]; // [esp+28h] [ebp-14h] BYREF
  long double v57; // [esp+2Ch] [ebp-10h]
  __int64 v58; // [esp+34h] [ebp-8h]
  int v59; // [esp+44h] [ebp+8h]
  int v60; // [esp+44h] [ebp+8h]
  unsigned int v61; // [esp+48h] [ebp+Ch]
  float v62; // [esp+48h] [ebp+Ch]
  float v63; // [esp+50h] [ebp+14h]
  float v64; // [esp+50h] [ebp+14h]

  v61 = 48 * a3;
  byte_52FD69[v61] = 0;
  if ( *(_BYTE *)a1 != 16 || (*(_DWORD *)(a1 + 4) & 7u) > 2 )
    return 0;
  v5 = *(__int16 *)(a1 + 16);
  v6 = *(__int16 *)(a1 + 18);
  dword_548C60 = 0;
  v7 = *(_DWORD *)(a1 + 4) & 7;
  v53 = v5;
  LODWORD(v57) = v6;
  v54 = -6;
  if ( (_BYTE)v7 == 2 )
  {
    v26 = dword_4AC094;
    goto LABEL_92;
  }
  v8 = *(__int16 *)(a1 + 16);
  v9 = (_BYTE *)(a1 + 20);
  v54 = v8;
  dword_52FD40 = (int)&byte_548C80;
  dword_548C60 = v8;
  if ( v8 > 0 )
  {
    LODWORD(v57) = v8;
    do
    {
      *(_BYTE *)dword_52FD40 = 8 * *v9;
      LOWORD(v7) = *(_WORD *)v9;
      *(_BYTE *)(dword_52FD40 + 1) = 8 * ((unsigned int)v7 >> 5);
      HIWORD(v7) = HIWORD(dword_52FD40);
      *(_BYTE *)(dword_52FD40 + 2) = 8 * (*(_WORD *)v9 >> 10);
      if ( *(_WORD *)v9 != 0 )
      {
        switch ( word_52FD72[v61 / 2] )
        {
          case 0:
            v10 = *(_BYTE *)dword_52FD40;
            v11 = *(_BYTE *)(dword_52FD40 + 1);
            if ( *(_BYTE *)dword_52FD40 == v11 && v10 == *(_BYTE *)(dword_52FD40 + 2) )
            {
              *(_BYTE *)(dword_52FD40 + 3) = v10 >> 1;
              HIWORD(v7) = HIWORD(dword_52FD40);
              *(_BYTE *)dword_52FD40 = -1;
              *(_BYTE *)(dword_52FD40 + 1) = -1;
              *(_BYTE *)(dword_52FD40 + 2) = -1;
            }
            else
            {
              v12 = *(_BYTE *)(dword_52FD40 + 2);
              v13 = *(_BYTE *)(dword_52FD40 + 1);
              if ( v11 <= v12 )
                v13 = *(_BYTE *)(dword_52FD40 + 2);
              if ( v10 <= (unsigned int)v13 )
              {
                if ( v11 <= v12 )
                  v14 = *(unsigned __int8 *)(dword_52FD40 + 2);
                else
                  v14 = *(unsigned __int8 *)(dword_52FD40 + 1);
              }
              else
              {
                v14 = v10;
              }
              *(_BYTE *)(dword_52FD40 + 3) = v14 / 2;
              *(_BYTE *)dword_52FD40 += -1 - v14;
              *(_BYTE *)(dword_52FD40 + 1) += -1 - v14;
              HIWORD(v7) = HIWORD(dword_52FD40);
              *(_BYTE *)(dword_52FD40 + 2) += -1 - v14;
            }
            break;
          case 1:
            v15 = *(_BYTE *)dword_52FD40;
            v16 = *(_BYTE *)(dword_52FD40 + 1);
            if ( *(_BYTE *)dword_52FD40 != v16 || v15 != *(_BYTE *)(dword_52FD40 + 2) )
            {
              v17 = *(_BYTE *)(dword_52FD40 + 2);
              v18 = *(_BYTE *)(dword_52FD40 + 1);
              if ( v16 <= v17 )
                v18 = *(_BYTE *)(dword_52FD40 + 2);
              if ( *(unsigned __int8 *)dword_52FD40 <= (unsigned int)v18 )
              {
                if ( v16 <= v17 )
                  v19 = *(unsigned __int8 *)(dword_52FD40 + 2);
                else
                  v19 = *(unsigned __int8 *)(dword_52FD40 + 1);
              }
              else
              {
                v19 = *(unsigned __int8 *)dword_52FD40;
              }
              *(_BYTE *)(dword_52FD40 + 3) = v19 - v19 / 4;
              goto LABEL_43;
            }
            *(_BYTE *)(dword_52FD40 + 3) = v15 - (v15 >> 2);
            *(_BYTE *)dword_52FD40 = -1;
            *(_BYTE *)(dword_52FD40 + 1) = -1;
            HIWORD(v7) = HIWORD(dword_52FD40);
            *(_BYTE *)(dword_52FD40 + 2) = -1;
            break;
          case 2:
            v7 = *(unsigned __int8 *)(dword_52FD40 + 1);
            LODWORD(v58) = *(unsigned __int8 *)dword_52FD40;
            v20 = (double)(int)v58;
            LODWORD(v58) = *(unsigned __int8 *)(dword_52FD40 + 2);
            *(_BYTE *)(dword_52FD40 + 3) = (__int64)(v20 * 0.299 - (double)v7 * -0.587 - (double)(int)v58 * -0.114);
            break;
          case 3:
            v21 = *(_BYTE *)dword_52FD40;
            v22 = *(_BYTE *)(dword_52FD40 + 1);
            if ( *(_BYTE *)dword_52FD40 == v22 && v21 == *(_BYTE *)(dword_52FD40 + 2) )
            {
              *(_BYTE *)(dword_52FD40 + 3) = v21 >> 2;
              *(_BYTE *)dword_52FD40 = -1;
              HIWORD(v7) = HIWORD(dword_52FD40);
              *(_BYTE *)(dword_52FD40 + 1) = -1;
              *(_BYTE *)(dword_52FD40 + 2) = -1;
            }
            else
            {
              v23 = *(_BYTE *)(dword_52FD40 + 2);
              v24 = *(_BYTE *)(dword_52FD40 + 1);
              if ( v22 <= v23 )
                v24 = *(_BYTE *)(dword_52FD40 + 2);
              if ( v21 <= (unsigned int)v24 )
              {
                if ( v22 <= v23 )
                  v19 = *(unsigned __int8 *)(dword_52FD40 + 2);
                else
                  v19 = *(unsigned __int8 *)(dword_52FD40 + 1);
              }
              else
              {
                v19 = v21;
              }
              *(_BYTE *)(dword_52FD40 + 3) = v19 / 4;
LABEL_43:
              *(_BYTE *)dword_52FD40 += -1 - v19;
              *(_BYTE *)(dword_52FD40 + 1) += -1 - v19;
              HIWORD(v7) = HIWORD(dword_52FD40);
              *(_BYTE *)(dword_52FD40 + 2) += -1 - v19;
            }
            break;
          case 4:
            *(_BYTE *)(dword_52FD40 + 3) = -1;
            break;
          default:
            break;
        }
      }
      else
      {
        *(_BYTE *)(dword_52FD40 + 3) = 0;
        byte_52FD69[v61] |= 1u;
      }
      if ( dword_4AC034 != 0 )
      {
        *(_BYTE *)dword_52FD40 = byte_4B5B40[*(unsigned __int8 *)dword_52FD40];
        *(_BYTE *)(dword_52FD40 + 1) = byte_4B5B40[*(unsigned __int8 *)(dword_52FD40 + 1)];
        *(_BYTE *)(dword_52FD40 + 2) = byte_4B5B40[*(unsigned __int8 *)(dword_52FD40 + 2)];
        *(_BYTE *)dword_52FD40 = byte_4D5D40[*(unsigned __int8 *)dword_52FD40];
        *(_BYTE *)(dword_52FD40 + 1) = byte_4D5D40[*(unsigned __int8 *)(dword_52FD40 + 1)];
        v7 = *(unsigned __int8 *)(dword_52FD40 + 2);
        *(_BYTE *)(dword_52FD40 + 2) = byte_4D5D40[v7];
      }
      v9 += 2;
      v25 = LODWORD(v57) == 1;
      dword_52FD40 += 4;
      --LODWORD(v57);
    }
    while ( !v25 );
  }
  v26 = dword_4AC094;
  if ( (unsigned int)dword_4AC094 > 1 )
    goto LABEL_70;
  v27 = v61;
  if ( word_52FD72[v61 / 2] == 1 )
  {
    if ( dword_4AC094 == 1 )
    {
      for ( i = 0; i < 256; ++i )
      {
        v58 = (unsigned int)i;
        v57 = (double)(unsigned int)i * 0.00390625;
        byte_4B5B40[i] = (__int64)(pow(v57, 0.5882352941176471) * 256.0);
      }
    }
    else
    {
      for ( j = 0; j < 256; ++j )
      {
        v58 = (unsigned int)j;
        v57 = (double)(unsigned int)j * 0.00390625;
        byte_4B5B40[j] = (__int64)(pow(v57, 0.8333333333333334) * 256.0);
      }
    }
    sub_424F70(0.0, 1.1);
    v30 = v54;
    if ( v54 > 0 )
    {
      v31 = &byte_548C81;
      do
      {
        v32 = (unsigned __int8)*(v31 - 1);
        v31 += 4;
        *(v31 - 5) = byte_4B5B40[v32];
        *(v31 - 4) = byte_4B5B40[(unsigned __int8)*(v31 - 4)];
        *(v31 - 3) = byte_4B5B40[(unsigned __int8)*(v31 - 3)];
        *(v31 - 5) = byte_4D5D40[(unsigned __int8)*(v31 - 5)];
        *(v31 - 4) = byte_4D5D40[(unsigned __int8)*(v31 - 4)];
        --v30;
        *(v31 - 3) = byte_4D5D40[(unsigned __int8)*(v31 - 3)];
      }
      while ( v30 != 0 );
    }
    if ( dword_4AC094 == 1 )
    {
      for ( k = 0; k < 256; ++k )
      {
        v58 = (unsigned int)k;
        v57 = (double)(unsigned int)k * 0.00390625;
        byte_4B5B40[k] = (__int64)(pow(v57, 0.5882352941176471) * 256.0);
      }
    }
    else if ( dword_4AC094 == 2 )
    {
      for ( m = 0; m < 256; ++m )
      {
        v58 = (unsigned int)m;
        v57 = (double)(unsigned int)m * 0.00390625;
        byte_4B5B40[m] = (__int64)(pow(v57, 0.8333333333333334) * 256.0);
      }
    }
    else
    {
      for ( n = 0; n < 256; ++n )
      {
        v58 = (unsigned int)n;
        v57 = (double)(unsigned int)n * 0.00390625;
        byte_4B5B40[n] = (__int64)(pow(v57, 1.0) * 256.0);
      }
    }
    LODWORD(v58) = byte_9CA898;
    sub_424F70((double)byte_9CA898, qword_9CA890);
    v26 = dword_4AC094;
LABEL_70:
    v27 = v61;
  }
  if ( *(__int16 *)((char *)word_52FD72 + v27) != 4 )
    byte_52FD69[v27] |= 2u;
  if ( dword_4AC034 != 0 )
  {
    sub_4209E0();
    v26 = dword_4AC094;
  }
  if ( dword_4B1CD0 != 0 )
  {
    v36 = off_46AEC0;
    v37 = 0;
    v38 = &byte_548C81;
    do
    {
      v39 = *v38 & 0xF8 | (32 * (v38[1] & 0xF8));
      v40 = (unsigned __int8)*(v38 - 1);
      v38 += 4;
      byte_4B5C3F[++v37] = v36[(v40 >> 3) | (unsigned __int16)(4 * v39)];
    }
    while ( (int)v38 < (int)((char *)&dword_549080 + 1) );
  }
  else
  {
    for ( ii = 0; ii < 256; ++ii )
      byte_4B5C40[ii] = ii;
  }
  if ( word_52FD72[v61 / 2] == 2 && v26 >= 2 )
  {
    v42 = dword_548C60;
    if ( dword_548C60 > 0 )
    {
      v43 = &byte_548C81;
      do
      {
        *(v43 - 1) = 0;
        *v43 = 0;
        v43[1] = 0;
        v43 += 4;
        --v42;
      }
      while ( v42 != 0 );
    }
  }
  v44 = *(_DWORD *)(a1 + 4) & 7;
  if ( v44 == 1 )
    v53 = 2 * *(__int16 *)(a1 + 4 * (v54 >> 1) + 28);
  if ( v44 == 0 )
    v53 = 4 * *(__int16 *)(a1 + 4 * (v54 >> 1) + 28);
  v6 = *(__int16 *)(a1 + 4 * (v54 >> 1) + 30);
  LODWORD(v57) = v6;
LABEL_92:
  v46 = a1 + 4 * (v54 >> 1) + 32;
  v47 = byte_52FD69[v61];
  BYTE1(dword_4AC040) = v47;
  if ( v26 < 2 )
  {
    if ( v26 != 0 )
      LOBYTE(dword_4AC040) = 24;
    else
      LOBYTE(dword_4AC040) = 8;
    switch ( (char)dword_4AC040 )
    {
      case 16:
        byte_4AC039 = 10;
        byte_4AC038 = 5;
        byte_4AC03A = 5;
        byte_4AC03B = 5;
        byte_4AC03C = 5;
        byte_4AC03D = 0;
        byte_4AC03E = 0;
        byte_4AC03F = 0;
        break;
      case 24:
        byte_4AC038 = 8;
        byte_4AC039 = 16;
        byte_4AC03A = 8;
        byte_4AC03B = 8;
        byte_4AC03C = 8;
        byte_4AC03D = 0;
        break;
      case 32:
        byte_4AC038 = 8;
        byte_4AC039 = 0;
        byte_4AC03A = 8;
        byte_4AC03B = 8;
        byte_4AC03C = 8;
        byte_4AC03D = 16;
        byte_4AC03E = 8;
        byte_4AC03F = 24;
        break;
      default:
        break;
    }
  }
  else
  {
    byte_4AC039 = 0;
    byte_4AC038 = 8;
    byte_4AC03A = 8;
    byte_4AC03B = 8;
    byte_4AC03C = 8;
    byte_4AC03D = 16;
    if ( v47 != 0 )
    {
      LOBYTE(dword_4AC040) = 32;
      byte_4AC03E = 8;
      byte_4AC03F = 24;
    }
    else
    {
      LOBYTE(dword_4AC040) = 24;
    }
  }
  *(float *)&v58 = (double)v53 / (double)a4;
  v55 = (double)SLODWORD(v57) / (double)a5;
  v62 = (float)(v6 - 1);
  if ( a4 < v53 || a5 < v6 )
  {
    if ( a5 - 1 >= 0 )
    {
      LODWORD(v57) = a5;
      do
      {
        v64 = 0.0;
        v60 = (__int64)v62;
        v62 = v62 - v55;
        if ( a4 > 0 )
        {
          for ( jj = a4; jj != 0; --jj )
          {
            v52 = (__int64)v64;
            v64 = *(float *)&v58 + v64;
            sub_421CF0(v52, v60, v53, v6, v46, *(_DWORD *)(a1 + 4) & 7, v56);
            sub_420BA0(v46, v6, a2, v56, &byte_4AC038);
            a2 += (unsigned __int8)dword_4AC040 >> 3;
          }
        }
        --LODWORD(v57);
      }
      while ( LODWORD(v57) != 0 );
    }
  }
  else if ( a5 - 1 >= 0 )
  {
    LODWORD(v57) = a5;
    do
    {
      v63 = 0.0;
      v59 = (__int64)v62;
      v62 = v62 - v55;
      if ( a4 > 0 )
      {
        for ( kk = a4; kk != 0; --kk )
        {
          v49 = (__int64)v63;
          v63 = *(float *)&v58 + v63;
          sub_421FD0(v49, v59, v53, v6, v46, *(_DWORD *)(a1 + 4) & 7, v56);
          sub_420BA0(v46, v6, a2, v56, &byte_4AC038);
          a2 += (unsigned __int8)dword_4AC040 >> 3;
        }
      }
      --LODWORD(v57);
    }
    while ( LODWORD(v57) != 0 );
    return 1;
  }
  return 1;
}

// 0x4217f0  sub_4217F0
int __cdecl sub_4217F0(int a1, _BYTE *a2, int a3, int a4, int a5)
{
  int v6; // edx
  unsigned int v7; // eax
  signed int v8; // edi
  int v9; // ecx
  int v10; // ebp
  _BYTE *v11; // esi
  int i; // edi
  int v13; // eax
  _BYTE *v14; // edi
  int v15; // esi
  char *v16; // eax
  __int16 v17; // dx
  unsigned int v18; // ecx
  int j; // eax
  int v20; // eax
  int v21; // eax
  int v23; // ebp
  __int64 v24; // rax
  __int64 v26; // rax
  unsigned __int8 v27[4]; // [esp+10h] [ebp-14h] BYREF
  int k; // [esp+14h] [ebp-10h]
  int m; // [esp+18h] [ebp-Ch]
  float v30; // [esp+1Ch] [ebp-8h]
  float v31; // [esp+20h] [ebp-4h]
  int v32; // [esp+28h] [ebp+4h]
  int v33; // [esp+2Ch] [ebp+8h]
  int v34; // [esp+2Ch] [ebp+8h]
  int v35; // [esp+30h] [ebp+Ch]
  float v36; // [esp+30h] [ebp+Ch]
  float v37; // [esp+38h] [ebp+14h]
  float v38; // [esp+38h] [ebp+14h]

  v6 = 48 * a3;
  v35 = v6;
  byte_52FD69[v6] = 0;
  *(__int16 *)((char *)word_52FD72 + v6) = 4;
  if ( *(_BYTE *)a1 != 16 || (*(_DWORD *)(a1 + 4) & 7u) > 2 )
    return 0;
  v7 = *(__int16 *)(a1 + 16);
  v8 = *(__int16 *)(a1 + 18);
  dword_548C60 = 0;
  v9 = *(_DWORD *)(a1 + 4) & 7;
  v32 = v7;
  k = v8;
  v10 = -6;
  if ( (_BYTE)v9 != 2 )
  {
    v10 = *(__int16 *)(a1 + 16);
    dword_52FD40 = (int)&byte_548C80;
    v11 = (_BYTE *)(a1 + 20);
    dword_548C60 = v10;
    if ( v10 > 0 )
    {
      for ( i = v10; i != 0; --i )
      {
        *(_BYTE *)dword_52FD40 = 8 * *v11;
        LOWORD(v7) = *(_WORD *)v11;
        *(_BYTE *)(dword_52FD40 + 1) = 8 * (v7 >> 5);
        *(_BYTE *)(dword_52FD40 + 2) = 8 * (*(_WORD *)v11 >> 10);
        if ( *(_WORD *)v11 != 0 )
        {
          *(_BYTE *)(dword_52FD40 + 3) = -1;
        }
        else
        {
          v13 = dword_52FD40;
          byte_52FD69[v6] = 1;
          *(_BYTE *)(v13 + 3) = 0;
        }
        if ( dword_4AC034 != 0 )
        {
          *(_BYTE *)dword_52FD40 = byte_4B5B40[*(unsigned __int8 *)dword_52FD40];
          *(_BYTE *)(dword_52FD40 + 1) = byte_4B5B40[*(unsigned __int8 *)(dword_52FD40 + 1)];
          *(_BYTE *)(dword_52FD40 + 2) = byte_4B5B40[*(unsigned __int8 *)(dword_52FD40 + 2)];
          *(_BYTE *)dword_52FD40 = byte_4D5D40[*(unsigned __int8 *)dword_52FD40];
          *(_BYTE *)(dword_52FD40 + 1) = byte_4D5D40[*(unsigned __int8 *)(dword_52FD40 + 1)];
          *(_BYTE *)(dword_52FD40 + 2) = byte_4D5D40[*(unsigned __int8 *)(dword_52FD40 + 2)];
        }
        v11 += 2;
        v7 = dword_52FD40 + 4;
        dword_52FD40 += 4;
      }
    }
    if ( dword_4AC034 != 0 )
    {
      sub_4209E0();
      v6 = v35;
    }
    if ( dword_4B1CD0 != 0 )
    {
      v14 = off_46AEC0;
      v15 = 0;
      v16 = &byte_548C81;
      do
      {
        v17 = (32 * (v16[1] & 0xF8)) | *v16 & 0xF8;
        v18 = (unsigned __int8)*(v16 - 1);
        v16 += 4;
        byte_4B5C3F[++v15] = v14[(v18 >> 3) | (unsigned __int16)(4 * v17)];
      }
      while ( (int)v16 < (int)((char *)&dword_549080 + 1) );
      v6 = v35;
    }
    else
    {
      for ( j = 0; j < 256; ++j )
        byte_4B5C40[j] = j;
    }
    v20 = *(_DWORD *)(a1 + 4) & 7;
    if ( v20 == 1 )
    {
      v21 = 2 * *(__int16 *)(a1 + 4 * (v10 >> 1) + 28);
    }
    else
    {
      if ( v20 != 0 )
      {
LABEL_25:
        v8 = *(__int16 *)(a1 + 4 * (v10 >> 1) + 30);
        k = v8;
        goto LABEL_26;
      }
      v21 = 4 * *(__int16 *)(a1 + 4 * (v10 >> 1) + 28);
    }
    v32 = v21;
    goto LABEL_25;
  }
LABEL_26:
  BYTE1(dword_4AC040) = byte_52FD69[v6];
  v23 = a1 + 4 * (v10 >> 1) + 32;
  if ( dword_9CA824 != 0 )
  {
    if ( dword_9CA824 == 1 )
      LOBYTE(dword_4AC040) = 24;
  }
  else
  {
    LOBYTE(dword_4AC040) = 8;
  }
  switch ( (char)dword_4AC040 )
  {
    case 16:
      byte_4AC039 = 10;
      byte_4AC038 = 5;
      byte_4AC03A = 5;
      byte_4AC03B = 5;
      byte_4AC03C = 5;
      byte_4AC03D = 0;
      byte_4AC03E = 0;
      byte_4AC03F = 0;
      break;
    case 24:
      byte_4AC038 = 8;
      byte_4AC039 = 16;
      byte_4AC03A = 8;
      byte_4AC03B = 8;
      byte_4AC03C = 8;
      byte_4AC03D = 0;
      break;
    case 32:
      byte_4AC038 = 8;
      byte_4AC039 = 0;
      byte_4AC03A = 8;
      byte_4AC03B = 8;
      byte_4AC03C = 8;
      byte_4AC03D = 16;
      byte_4AC03E = 8;
      byte_4AC03F = 24;
      break;
    default:
      break;
  }
  v31 = (double)v32 / (double)a4;
  v30 = (double)k / (double)a5;
  v36 = (float)(v8 - 1);
  if ( a4 < v32 || a5 < v8 )
  {
    if ( a5 - 1 >= 0 )
    {
      for ( k = a5; k != 0; --k )
      {
        v38 = 0.0;
        v34 = (__int64)v36;
        v36 = v36 - v30;
        if ( a4 > 0 )
        {
          for ( m = a4; m != 0; --m )
          {
            v26 = (__int64)v38;
            v38 = v31 + v38;
            sub_421CF0(v26, v34, v32, v8, v23, *(_DWORD *)(a1 + 4) & 7, v27);
            sub_420BA0(v23, v8, a2, v27, &byte_4AC038);
            a2 += (unsigned __int8)dword_4AC040 >> 3;
          }
        }
      }
    }
  }
  else if ( a5 - 1 >= 0 )
  {
    for ( m = a5; m != 0; --m )
    {
      v37 = 0.0;
      v33 = (__int64)v36;
      v36 = v36 - v30;
      if ( a4 > 0 )
      {
        for ( k = a4; k != 0; --k )
        {
          v24 = (__int64)v37;
          v37 = v31 + v37;
          sub_421FD0(v24, v33, v32, v8, v23, *(_DWORD *)(a1 + 4) & 7, v27);
          sub_420BA0(v23, v8, a2, v27, &byte_4AC038);
          a2 += (unsigned __int8)dword_4AC040 >> 3;
        }
      }
    }
    return 1;
  }
  return 1;
}

// 0x421cf0  sub_421CF0
int __cdecl sub_421CF0(int a1, int a2, int a3, int a4, int a5, int a6, _BYTE *a7)
{
  int v7; // ecx
  int v8; // esi
  int v9; // ebx
  int v10; // ebp
  int v11; // edx
  int v12; // edi
  _BYTE *v13; // eax
  int v14; // ecx
  _BYTE *v15; // eax
  int v16; // ecx
  int v17; // esi
  char *v18; // eax
  char v19; // dl
  char v20; // cl
  char v21; // dl
  bool v22; // cc
  char v23; // cl
  unsigned int v25; // esi
  unsigned int v26; // ebx
  unsigned int v27; // ebp
  unsigned int v28; // edi
  unsigned int v29; // eax
  int i; // ecx
  int v31; // [esp+10h] [ebp-54h]
  int v32; // [esp+14h] [ebp-50h]
  int v33; // [esp+18h] [ebp-4Ch]
  _BYTE v34[72]; // [esp+1Ch] [ebp-48h] BYREF
  int v35; // [esp+68h] [ebp+4h]
  int v36; // [esp+6Ch] [ebp+8h]

  v7 = a3;
  v8 = 0;
  v9 = a2 - 1;
  v10 = a5;
  v33 = a1 - 1;
  v11 = a5 + (a2 - 1) * a3;
  v31 = 0;
  v32 = 0;
  v35 = v11;
  while ( 2 )
  {
    v12 = v33;
    v36 = 0;
    do
    {
      *(_DWORD *)&v34[4 * v8 + 36] = 0;
      if ( v12 >= 0 && v9 >= 0 && v9 < a4 && v12 < v7 )
      {
        if ( a6 != 0 )
        {
          if ( a6 == 1 )
          {
            v10 = *(unsigned __int8 *)(v12 + v11);
            v15 = &v34[4 * v8 + 1];
            *(v15 - 1) = byte_548C80[4 * v10];
            *v15 = byte_548C81[4 * v10];
            v15[1] = byte_548C82[4 * v10];
            v15[2] = byte_548C83[4 * v10];
LABEL_20:
            v11 = v35;
            *(_DWORD *)&v34[4 * v8 + 36] = 1;
            goto LABEL_21;
          }
          if ( a6 != 2 )
            return 0;
          v13 = &v34[4 * v8 + 1];
          v14 = v9 * 2 * v7 + a5 + 2 * v12;
          LOWORD(v14) = *(_WORD *)v14;
          *(v13 - 1) = 8 * v14;
          *v13 = 8 * (v14 >> 5);
          v13[1] = 8 * ((__int16)v14 >> 10);
          v13[2] = -1;
          if ( (_WORD)v14 != 0 )
            v13[2] = -1;
          else
            v13[2] = 0;
        }
        else
        {
          v16 = v9 * (v7 / 2);
          v17 = v12 / 2;
          if ( v12 % 2 != 0 )
          {
            if ( v12 % 2 == 1 )
              v10 = *(unsigned __int8 *)(v17 + v16 + a5) >> 4;
          }
          else
          {
            v10 = *(_BYTE *)(v17 + v16 + a5) & 0xF;
          }
          v18 = &v34[4 * v31 + 1];
          v19 = byte_548C81[4 * v10];
          *(v18 - 1) = byte_548C80[4 * v10];
          v20 = byte_548C82[4 * v10];
          *v18 = v19;
          v21 = byte_548C83[4 * v10];
          v18[1] = v20;
          v18[2] = v21;
        }
        v8 = v31;
        v7 = a3;
        goto LABEL_20;
      }
LABEL_21:
      ++v8;
      ++v12;
      v22 = v36 + 1 < 3;
      v31 = v8;
      ++v36;
    }
    while ( v22 );
    ++v9;
    v11 += v7;
    v22 = v32 + 1 < 3;
    v35 = v11;
    ++v32;
    if ( v22 )
      continue;
    break;
  }
  if ( BYTE1(dword_4AC040) == 0 || v34[16] != 0 || v34[17] != 0 || v34[18] != 0 )
  {
    v25 = 0;
    v26 = 0;
    v27 = 0;
    v28 = 0;
    v29 = 0;
    for ( i = 0; i < 36; i += 4 )
    {
      if ( *(_DWORD *)&v34[i + 36] != 0
        && (BYTE1(dword_4AC040) == 0 || v34[i] != 0 || v34[i + 1] != 0 || v34[i + 2] != 0) )
      {
        v29 += (unsigned __int8)v34[i];
        v28 += (unsigned __int8)v34[i + 1];
        v27 += (unsigned __int8)v34[i + 2];
        v26 += (unsigned __int8)v34[i + 3];
        ++v25;
      }
    }
    if ( v25 != 0 )
    {
      *a7 = v29 / v25;
      a7[1] = v28 / v25;
      a7[2] = v27 / v25;
      a7[3] = v26 / v25;
    }
    else
    {
      *a7 = -1;
      a7[1] = -1;
      a7[2] = -1;
      a7[3] = -1;
    }
    return 1;
  }
  else
  {
    v23 = v34[19];
    *a7 = 0;
    a7[1] = 0;
    a7[2] = 0;
    a7[3] = v23;
    return 1;
  }
}

// 0x421fd0  sub_421FD0
int __cdecl sub_421FD0(int a1, int a2, int a3, int a4, int a5, int a6, _BYTE *a7)
{
  int v8; // edx
  _BYTE *v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx

  if ( a6 == 0 )
  {
    v11 = a2 * (a3 >> 1);
    v12 = a1 >> 1;
    if ( (a1 & 1) != 0 )
      v10 = *(unsigned __int8 *)(v12 + v11 + a5) >> 4;
    else
      v10 = *(_BYTE *)(v12 + v11 + a5) & 0xF;
    goto LABEL_13;
  }
  if ( a6 == 1 )
  {
    v10 = *(unsigned __int8 *)(a5 + a2 * a3 + a1);
LABEL_13:
    *a7 = byte_548C80[4 * v10];
    a7[1] = byte_548C81[4 * v10];
    a7[2] = byte_548C82[4 * v10];
    a7[3] = byte_548C83[4 * v10];
    return 1;
  }
  if ( a6 != 2 )
    return 0;
  v8 = a2 * 2 * a3 + a5;
  v9 = (_BYTE *)(v8 + 2 * a1);
  *a7 = 8 * *v9;
  LOWORD(v8) = *(_WORD *)v9;
  a7[1] = 8 * (v8 >> 5);
  a7[2] = 8 * (*(__int16 *)v9 >> 10);
  a7[3] = -1;
  if ( *(_WORD *)v9 != 0 )
    a7[3] = -1;
  else
    a7[3] = 0;
  return 1;
}

// 0x4220d0  sub_4220D0
int sub_4220D0()
{
  int v0; // ebp
  const char *v1; // esi
  int v2; // eax
  const char *v3; // edi
  int i; // ecx
  int k; // ecx
  int j; // ecx
  int n; // ecx
  int m; // ecx
  int ii; // ecx
  int jj; // ecx
  int kk; // ecx
  double v12; // st7
  double v13; // st6
  double v14; // st5
  double v15; // st4
  int mm; // ecx
  int nn; // ecx

  v0 = 9;
  if ( (dword_4AC094 & 2) != 0 )
  {
    dword_4B1CC0 = 0;
    dword_4B1CD0 = 0;
    dword_4AC030 = 1;
    dword_4AC034 = 1;
    dword_4B1CC8 = 0;
    dword_4B1CCC = 0;
    dword_4B1CC4 = 0;
    dword_7C62C0(3553, 10242, 1176765440);
    dword_7C62C0(3553, 10243, 1176765440);
    dword_7C62C0(3553, 10241, 1175979008);
    dword_7C62C0(3553, 10240, 1175979008);
    v1 = (const char *)dword_7C6304(7936);
    v2 = dword_7C6304(7937);
    v3 = (const char *)v2;
    if ( v1 != NULL && v2 != 0 )
    {
      if ( strstr(/*Str*/ v1, /*SubStr*/ a3dfx) != NULL )
        v0 = 0;
      if ( strstr(/*Str*/ v3, /*SubStr*/ a3dfx) != NULL )
        v0 = 0;
      if ( strstr(/*Str*/ v1, /*SubStr*/ aNec) != NULL )
        v0 = 2;
      if ( strstr(/*Str*/ v3, /*SubStr*/ aNec) != NULL )
        v0 = 2;
      if ( strstr(/*Str*/ v1, /*SubStr*/ aRendition) != NULL )
        v0 = 1;
      if ( strstr(/*Str*/ v3, /*SubStr*/ aRendition) != NULL )
        v0 = 1;
      if ( strstr(/*Str*/ v1, /*SubStr*/ off_4AC074) != NULL )
        v0 = 5;
      if ( strstr(/*Str*/ v3, /*SubStr*/ aRagePro) != NULL )
        v0 = 5;
      if ( strstr(/*Str*/ v1, /*SubStr*/ aNvidia) != NULL )
        v0 = 4;
      if ( strstr(/*Str*/ v3, /*SubStr*/ aRiva) != NULL )
        v0 = 4;
      if ( strstr(/*Str*/ v1, /*SubStr*/ aReal3d) != NULL )
        v0 = 7;
      if ( strstr(/*Str*/ v3, /*SubStr*/ aDirect3d) != NULL )
        v0 = 6;
    }
  }
  else if ( (unsigned int)dword_4AC094 <= 1 )
  {
    v0 = 8;
  }
  if ( byte_9CA876 == 8 && dword_4B1CC4 != 0 )
    dword_4B1CC0 = 1;
  if ( dword_4AC010 != 9 )
    v0 = dword_4AC010;
  switch ( v0 )
  {
    case 0:
      dword_4B1CCC = 1;
      dword_4AC024 = 256;
      dword_4B1CC8 = 0;
      dword_4B1CC0 = 0;
      dword_4AC030 = 0;
      for ( i = 0; i < 256; ++i )
      {
        if ( flt_467F50[i] > 1.0 )
          flt_467F50[i] = 1.0;
        if ( flt_468350[i] > 1.0 )
          flt_468350[i] = 1.0;
        if ( flt_467F50[i] < 0.0 )
          flt_467F50[i] = 0.0;
        if ( flt_468350[i] < 0.0 )
          flt_468350[i] = 0.0;
      }
      break;
    case 1:
      dword_4AC024 = 512;
      dword_4B1CCC = 0;
      dword_4B1CC8 = 0;
      dword_4B1CC0 = 0;
      dword_4AC030 = 0;
      for ( j = 0; j < 256; ++j )
      {
        if ( flt_467F50[j] > 1.0 )
          flt_467F50[j] = 1.0;
        if ( flt_468350[j] > 0.98235297 )
          flt_468350[j] = 0.98235297;
        if ( flt_467F50[j] < 0.0 )
          flt_467F50[j] = 0.0;
        if ( flt_468350[j] < 0.017647 )
          flt_468350[j] = 0.017647;
      }
      break;
    case 2:
      dword_4AC024 = 512;
      dword_4B1CCC = 0;
      dword_4B1CC8 = 0;
      dword_4B1CC0 = 0;
      dword_4AC030 = 0;
      for ( k = 0; k < 256; ++k )
      {
        if ( flt_467F50[k] > 1.0 )
          flt_467F50[k] = 1.0;
        if ( flt_468350[k] > 0.98235297 )
          flt_468350[k] = 0.98235297;
        if ( flt_467F50[k] < 0.0 )
          flt_467F50[k] = 0.0;
        if ( flt_468350[k] < 0.017647 )
          flt_468350[k] = 0.017647;
      }
      break;
    case 4:
      dword_4AC024 = 512;
      dword_4B1CCC = 0;
      dword_4B1CC8 = 0;
      dword_4B1CC0 = 0;
      dword_4AC030 = 0;
      for ( m = 0; m < 256; ++m )
      {
        if ( flt_467F50[m] > 1.0 )
          flt_467F50[m] = 1.0;
        if ( flt_468350[m] > 1.0 )
          flt_468350[m] = 1.0;
        if ( flt_467F50[m] < 0.0 )
          flt_467F50[m] = 0.0;
        if ( flt_468350[m] < 0.0 )
          flt_468350[m] = 0.0;
      }
      break;
    case 5:
      dword_4AC024 = 512;
      dword_4B1CCC = 0;
      dword_4B1CC8 = 0;
      dword_4B1CC0 = 0;
      dword_4AC030 = 0;
      for ( n = 0; n < 256; ++n )
      {
        if ( flt_467F50[n] > 0.98235297 )
          flt_467F50[n] = 0.98235297;
        if ( flt_468350[n] > 0.98235297 )
          flt_468350[n] = 0.98235297;
        if ( flt_467F50[n] < 0.017647 )
          flt_467F50[n] = 0.017647;
        if ( flt_468350[n] < 0.017647 )
          flt_468350[n] = 0.017647;
      }
      break;
    case 6:
      dword_4AC030 = 1;
      dword_4AC024 = 512;
      dword_4B1CCC = 0;
      dword_4B1CC8 = 0;
      dword_4B1CC0 = 0;
      for ( ii = 0; ii < 256; ++ii )
      {
        if ( flt_467F50[ii] > 1.0 )
          flt_467F50[ii] = 1.0;
        if ( flt_468350[ii] > 0.98235297 )
          flt_468350[ii] = 0.98235297;
        if ( flt_467F50[ii] < 0.0 )
          flt_467F50[ii] = 0.0;
        if ( flt_468350[ii] < 0.017647 )
          flt_468350[ii] = 0.017647;
      }
      break;
    case 8:
      dword_4AC024 = 512;
      dword_4B1CCC = 0;
      dword_4B1CC8 = 0;
      if ( dword_9CA824 == 0 )
      {
        dword_4B1CC4 = 1;
        dword_4B1CC0 = 1;
        dword_4B1CD0 = 1;
      }
      dword_4AC034 = 1;
      dword_4AC030 = 0;
      for ( jj = 0; jj < 256; ++jj )
      {
        if ( flt_467F50[jj] > 1.0 )
          flt_467F50[jj] = 1.0;
        if ( flt_468350[jj] > 1.0 )
          flt_468350[jj] = 1.0;
        if ( flt_467F50[jj] < 0.0 )
          flt_467F50[jj] = 0.0;
        if ( flt_468350[jj] < 0.0 )
          flt_468350[jj] = 0.0;
      }
      break;
    default:
      dword_4AC024 = 512;
      dword_4B1CCC = 0;
      dword_4B1CC8 = 0;
      dword_4B1CC0 = 0;
      dword_4AC030 = 0;
      for ( kk = 0; kk < 256; ++kk )
      {
        if ( flt_467F50[kk] > 1.0 )
          flt_467F50[kk] = 1.0;
        if ( flt_468350[kk] > 1.0 )
          flt_468350[kk] = 1.0;
        if ( flt_467F50[kk] < 0.0 )
          flt_467F50[kk] = 0.0;
        if ( flt_468350[kk] < 0.0 )
          flt_468350[kk] = 0.0;
      }
      break;
  }
  if ( flt_4AC014 > -1.0 && flt_4AC01C > -1.0 && flt_4AC018 > -1.0 && flt_4AC020 > -1.0 )
  {
    v12 = flt_4AC020;
    v13 = flt_4AC018;
    v14 = flt_4AC01C;
    v15 = flt_4AC014;
    for ( mm = 0; mm < 256; ++mm )
    {
      if ( v15 < flt_467F50[mm] )
        flt_467F50[mm] = v15;
      if ( flt_468350[mm] > v14 )
        flt_468350[mm] = v14;
      if ( flt_467F50[mm] < v13 )
        flt_467F50[mm] = v13;
      if ( flt_468350[mm] < v12 )
        flt_468350[mm] = v12;
    }
  }
  if ( v0 != 8 )
  {
    for ( nn = 0; nn < 256; ++nn )
    {
      if ( flt_467F50[nn] > 0.99000001 )
        flt_467F50[nn] = 0.99000001;
      if ( flt_468350[nn] > 0.99000001 )
        flt_468350[nn] = 0.99000001;
      if ( flt_467F50[nn] < 0.0099999998 )
        flt_467F50[nn] = 0.0099999998;
      if ( flt_468350[nn] < 0.0099999998 )
        flt_468350[nn] = 0.0099999998;
    }
  }
  if ( dword_4B1CC4 == 0 )
    dword_4B1CC0 = 0;
  if ( dword_4AC030 != 0 )
  {
    dword_467730[0] = 1056964608;
    dword_467734 = 1056964608;
    dword_467738 = 1056964608;
    dword_46773C = 1056964608;
    dword_4AC02C = 768;
    dword_4AC028 = 1;
  }
  else
  {
    dword_4AC02C = 771;
    dword_4AC028 = 770;
  }
  return 1;
}

// 0x422a20  sub_422A20
int __cdecl sub_422A20(int a1, int a2)
{
  __int16 v2; // ax
  int v3; // esi
  int v4; // edx
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // bx
  unsigned int v7; // eax

  v2 = 0;
  if ( (void *)dword_4B1CBC == DstBuf )
    dword_4B1CD4 = 0;
  v3 = a1 + 4;
  if ( (*(_BYTE *)(a1 + 4) & 8) != 0 )
    v2 = *(_WORD *)(a1 + 8);
  v4 = v2;
  v5 = *(_WORD *)(v3 + v2 + 12);
  v6 = *(_WORD *)(v3 + v4 + 14);
  *(_DWORD *)dword_4B1CBC = a2;
  v7 = v6 * 2 * v5 + v4 + 24;
  dword_4B1CBC += 4;
  qmemcpy((void *)dword_4B1CBC, (const void *)a1, v7);
  dword_4B1CBC += v7;
  dword_4B1CD4 += v7;
  return 1;
}

// 0x422ac0  sub_422AC0
char sub_422AC0()
{
  char *v0; // eax
  char *v1; // eax
  int i; // esi
  int j; // esi
  int k; // esi
  int v5; // eax
  int *v6; // edx
  __int16 v7; // cx
  __int16 *m; // eax
  int v9; // eax
  int v10; // edi
  char *n; // eax
  char v12; // dl
  char *v13; // eax
  __int16 v14; // cx
  int v15; // ecx
  int *v16; // ebp
  int v17; // ecx
  int v18; // ebx
  int v19; // ebp
  int v20; // ebp
  int v21; // ecx
  int ii; // eax
  int v23; // edi
  int v24; // ecx
  __int64 v25; // rax
  int v26; // esi
  int v27; // ebx
  int v28; // eax
  __int16 *v29; // ecx
  int v30; // eax
  char v31; // cl
  int v32; // ebp
  __int16 v33; // ax
  bool v34; // zf
  void *v35; // edi
  int v36; // ebp
  int v37; // edi
  int v38; // ecx
  int kk; // eax
  int v40; // esi
  int v41; // ecx
  __int64 v42; // rax
  int v43; // ebx
  __int16 v44; // ax
  int v45; // eax
  int *v46; // esi
  int v47; // ecx
  int v48; // esi
  __int16 v49; // ax
  int v50; // esi
  int v51; // edi
  int v52; // ecx
  int i1; // eax
  int v54; // ebx
  __int64 v55; // rax
  int v56; // eax
  _BYTE *v57; // esi
  int v58; // eax
  char v59; // cl
  int v60; // esi
  __int16 v61; // ax
  int v62; // ebp
  int v63; // esi
  int v64; // edi
  int v65; // ecx
  int nn; // eax
  int v67; // ebx
  __int64 v68; // rax
  int v69; // eax
  int v71; // [esp+24h] [ebp-13Ch]
  int v72; // [esp+28h] [ebp-138h]
  int v73; // [esp+28h] [ebp-138h]
  int jj; // [esp+28h] [ebp-138h]
  int v75; // [esp+28h] [ebp-138h]
  int v76; // [esp+28h] [ebp-138h]
  int v77; // [esp+34h] [ebp-12Ch]
  int v78; // [esp+34h] [ebp-12Ch]
  int v79; // [esp+34h] [ebp-12Ch]
  int mm; // [esp+34h] [ebp-12Ch]
  int v81; // [esp+38h] [ebp-128h]
  int v82; // [esp+38h] [ebp-128h]
  _WORD v83[5]; // [esp+44h] [ebp-11Ch] BYREF
  int v84; // [esp+4Eh] [ebp-112h]
  char Str[256]; // [esp+60h] [ebp-100h] BYREF

  v72 = 0;
  if ( dword_4B1CE0 != 0 )
  {
    memset(&word_4D5E40, 0, 0x10000u);
    sub_4248C0();
    strcpy(Str, byte_52FBC0);
    v0 = strstr(Str, /*SubStr*/ aB_0);
    if ( v0 == NULL )
      v0 = strstr(Str, /*SubStr*/ aB);
    v0[1] = 98;
    v0[2] = 109;
    v0[3] = 112;
    v1 = strstr(Str, /*SubStr*/ asc_4AC090);
    if ( v1 != NULL )
      *v1 = 0;
    sub_425610(Str, &word_4D5E40);
  }
  sub_424F70((double)byte_9CA898, qword_9CA890);
  if ( dword_4AC094 == 1 )
  {
    for ( i = 0; i < 256; ++i )
      byte_4B5B40[i] = (__int64)(pow((double)(unsigned int)i * 0.00390625, 0.5882352941176471) * 256.0);
  }
  else if ( dword_4AC094 == 2 )
  {
    for ( j = 0; j < 256; ++j )
      byte_4B5B40[j] = (__int64)(pow((double)(unsigned int)j * 0.00390625, 0.8333333333333334) * 256.0);
  }
  else
  {
    for ( k = 0; k < 256; ++k )
      byte_4B5B40[k] = (__int64)(pow((double)(unsigned int)k * 0.00390625, 1.0) * 256.0);
  }
  LOBYTE(v5) = dword_4AC094;
  if ( (dword_4AC094 & 2) != 0 )
  {
    v6 = dword_52FD84;
    do
    {
      if ( (*(_BYTE *)v6 & 0x20) != 0 )
      {
        v7 = *((_WORD *)v6 - 9);
        for ( m = (__int16 *)v6 - 9; v7 != 0; m = &word_52FD72[v9] )
        {
          *v6 |= dword_52FD84[12 * v7];
          v9 = 24 * *m;
          v7 = word_52FD72[v9];
        }
        v5 = *v6;
        LOBYTE(v5) = *v6 & 0xDF;
        *v6 = v5;
      }
      v6 += 12;
    }
    while ( (int)v6 < (int)dword_547484 );
    if ( dword_4B1CA4 != NULL )
    {
      v10 = dword_4B1CD4;
      for ( n = (char *)DstBuf; v10 != 0; n = &v13[v15 - 4] )
      {
        v12 = n[8];
        v13 = n + 8;
        v14 = 0;
        if ( (v12 & 8) != 0 )
          v14 = *((_WORD *)v13 + 2);
        v15 = 2 * *(unsigned __int16 *)&v13[v14 + 12] * *(unsigned __int16 *)&v13[v14 + 14] + v14 + 24;
        v10 -= v15;
      }
      LOBYTE(v5) = dword_4B1CD4;
      v16 = (int *)DstBuf;
      v81 = 1995;
      v77 = dword_4B1CD4;
      if ( dword_4B1CD4 != 0 )
      {
        do
        {
          v17 = *v16;
          v18 = v71;
          v19 = (int)(v16 + 2);
          v73 = v17;
          sub_40CE00(v19, (int)v83);
          v20 = v19 - 4;
          switch ( *(_DWORD *)v83 )
          {
            case 0:
              v18 = 4 * v83[4];
              goto LABEL_35;
            case 1:
              v18 = 2 * v83[4];
              goto LABEL_35;
            case 2:
              v18 = v83[4];
              goto LABEL_35;
            case 3:
              v18 = (715827883 * (unsigned __int64)v83[4]) >> 32;
LABEL_35:
              v71 = v18;
              break;
            default:
              break;
          }
          v21 = v18;
          for ( ii = 0; ii < 16; ++ii )
          {
            if ( v21 == 0 )
              break;
            v21 >>= 1;
          }
          if ( ii != 0 )
            v23 = (__int64)pow(2.0, (double)(ii - 1));
          else
            v23 = 0;
          v24 = (unsigned __int16)v84;
          LODWORD(v25) = 0;
          do
          {
            if ( v24 == 0 )
              break;
            v24 >>= 1;
            LODWORD(v25) = v25 + 1;
          }
          while ( (int)v25 < 16 );
          if ( (_DWORD)v25 != 0 )
            v25 = (__int64)pow(2.0, (double)((int)v25 - 1));
          if ( byte_9CA877 != 0 )
          {
            if ( v23 < v18 )
              v23 *= 2;
            if ( (int)v25 < (unsigned __int16)v84 )
              LODWORD(v25) = 2 * v25;
          }
          v26 = v73;
          v27 = dword_52FD84[12 * v73];
          if ( v23 == 512 && (_DWORD)v25 == 512 )
            v26 = 1995;
          for ( jj = 0; v27 != 0; ++jj )
          {
            if ( jj <= 0 )
              v28 = v26;
            else
              v28 = --v81;
            if ( (v27 & 0x10) != 0 )
            {
              v27 &= ~0x10u;
              v29 = &word_52FD72[24 * v28];
              *v29 = 4;
            }
            else if ( (v27 & 1) != 0 )
            {
              v27 &= ~1u;
              v29 = &word_52FD72[24 * v28];
              *v29 = 0;
            }
            else if ( (v27 & 2) != 0 )
            {
              v27 &= ~2u;
              v29 = &word_52FD72[24 * v28];
              *v29 = 1;
            }
            else if ( (v27 & 4) != 0 )
            {
              v27 &= ~4u;
              v29 = &word_52FD72[24 * v28];
              *v29 = 2;
            }
            else if ( (v27 & 8) != 0 )
            {
              v27 &= ~8u;
              v29 = &word_52FD72[24 * v28];
              *v29 = 3;
            }
            else
            {
              v27 = 0;
              v29 = &word_52FD72[24 * v28];
              *v29 = 4;
            }
            if ( *v29 < 4 )
            {
              dword_52FD74[12 * v26 + *v29] = v28;
              dword_52FD74[12 * v28 + *v29] = v28;
            }
            v30 = sub_423510(v20, v28, 3);
            dword_4E5E80[v30] = v30;
          }
          v31 = *(_BYTE *)(v20 + 4);
          v32 = v20 + 4;
          v33 = 0;
          if ( (v31 & 8) != 0 )
            v33 = *(_WORD *)(v32 + 4);
          v5 = *(unsigned __int16 *)(v32 + v33 + 14) * 2 * *(unsigned __int16 *)(v32 + v33 + 12) + v33 + 24;
          v34 = v77 == v5;
          v16 = (int *)(v32 + v5 - 4);
          v77 -= v5;
        }
        while ( !v34 );
        dword_4B1CBC = (int)DstBuf;
        return v5;
      }
    }
    goto LABEL_163;
  }
  if ( (unsigned int)dword_4AC094 > 1 )
    goto LABEL_163;
  dword_4B1C8C = 0;
  dword_4B1C9C = 0;
  dword_52FD88 = 0;
  dword_52FD8C[0] = 0;
  dword_4B1CA0 = 1995;
  dword_547398 = 0;
  dword_54739C = (int)dword_4B1CAC;
  dword_553404(byte_52FBC0);
  v35 = DstBuf;
  v36 = v71;
  v78 = dword_4B1CD4;
  if ( dword_4B1CD4 != 0 )
  {
    do
    {
      v37 = (int)v35 + 8;
      sub_40CE00(v37, (int)v83);
      switch ( *(_DWORD *)v83 )
      {
        case 0:
          v36 = 4 * v83[4];
          goto LABEL_84;
        case 1:
          v36 = 2 * v83[4];
          goto LABEL_84;
        case 2:
          v36 = v83[4];
          goto LABEL_84;
        case 3:
          v36 = (715827883 * (unsigned __int64)v83[4]) >> 32;
LABEL_84:
          v71 = v36;
          break;
        default:
          break;
      }
      v38 = v36;
      for ( kk = 0; kk < 16; ++kk )
      {
        if ( v38 == 0 )
          break;
        v38 >>= 1;
      }
      if ( kk != 0 )
        v40 = (__int64)pow(2.0, (double)(kk - 1));
      else
        v40 = 0;
      v41 = (unsigned __int16)v84;
      LODWORD(v42) = 0;
      do
      {
        if ( v41 == 0 )
          break;
        v41 >>= 1;
        LODWORD(v42) = v42 + 1;
      }
      while ( (int)v42 < 16 );
      if ( (_DWORD)v42 != 0 )
        v42 = (__int64)pow(2.0, (double)((int)v42 - 1));
      if ( byte_9CA877 != 0 )
      {
        if ( v40 < v36 )
          v40 *= 2;
        if ( (int)v42 < (unsigned __int16)v84 )
          LODWORD(v42) = 2 * v42;
      }
      v43 = dword_46AF64;
      if ( v40 != 512 || (_DWORD)v42 != 512 )
        v72 += dword_46AF64 * v42 * v40;
      v44 = 0;
      if ( (*(_BYTE *)v37 & 8) != 0 )
        v44 = *(_WORD *)(v37 + 4);
      v45 = *(unsigned __int16 *)(v37 + v44 + 14) * 2 * *(unsigned __int16 *)(v37 + v44 + 12) + v44 + 24;
      v34 = v78 == v45;
      v35 = (void *)(v37 + v45 - 4);
      v78 -= v45;
    }
    while ( !v34 );
  }
  else
  {
    v43 = dword_46AF64;
  }
  if ( v72 <= 0 )
  {
    LOBYTE(v5) = dword_4B1CD4;
    v57 = DstBuf;
    for ( mm = dword_4B1CD4; mm != 0; mm -= v62 )
    {
      v58 = *(_DWORD *)v57;
      v59 = v57[8];
      v60 = (int)(v57 + 8);
      v76 = v58;
      v61 = 0;
      if ( (v59 & 8) != 0 )
        v61 = *(_WORD *)(v60 + 4);
      v62 = *(unsigned __int16 *)(v60 + v61 + 14) * 2 * *(unsigned __int16 *)(v60 + v61 + 12) + v61 + 24;
      sub_40CE00(v60, (int)v83);
      v63 = v60 - 4;
      v64 = (unsigned __int16)v84;
      switch ( *(_DWORD *)v83 )
      {
        case 0:
          v65 = 4 * v83[4];
          v71 = v65;
          break;
        case 1:
          v65 = 2 * v83[4];
          v71 = v65;
          break;
        case 2:
          v65 = v83[4];
          v71 = v83[4];
          break;
        case 3:
          v65 = (715827883 * (unsigned __int64)v83[4]) >> 32;
          v71 = v65;
          break;
        default:
          v65 = v71;
          break;
      }
      for ( nn = 0; nn < 16; ++nn )
      {
        if ( v65 == 0 )
          break;
        v65 >>= 1;
      }
      if ( nn != 0 )
        v67 = (__int64)pow(2.0, (double)(nn - 1));
      else
        v67 = 0;
      LODWORD(v68) = 0;
      do
      {
        if ( v64 == 0 )
          break;
        v64 >>= 1;
        LODWORD(v68) = v68 + 1;
      }
      while ( (int)v68 < 16 );
      if ( (_DWORD)v68 != 0 )
        v68 = (__int64)pow(2.0, (double)((int)v68 - 1));
      if ( v67 == 512 && (_DWORD)v68 == 512 )
        v69 = sub_423510(v63, 1995, 1);
      else
        v69 = sub_423510(v63, v76, 0);
      dword_4E5E80[v69] = v69;
      sub_423960(v69);
      v57 = (_BYTE *)(v62 + v63);
      LOBYTE(v5) = mm - v62;
    }
    goto LABEL_163;
  }
  if ( dword_4B1CA8 != NULL )
  {
    free(/*Block*/ dword_4B1CA8);
    v43 = dword_46AF64;
  }
  dword_4B1CB0 = v72 + (v43 << 18);
  v5 = (int)malloc(/*Size*/ dword_4B1CB0);
  dword_4B1CA8 = (void *)v5;
  if ( v5 == 0
    || (v46 = (int *)DstBuf, dword_52FD8C[0] = v5, LOBYTE(v5) = dword_4B1CD4, v79 = dword_4B1CD4, dword_4B1CD4 == 0) )
  {
LABEL_163:
    dword_4B1CBC = (int)DstBuf;
    return v5;
  }
  do
  {
    v47 = *v46;
    v48 = (int)(v46 + 2);
    v75 = v47;
    v49 = 0;
    if ( (*(_BYTE *)v48 & 8) != 0 )
      v49 = *(_WORD *)(v48 + 4);
    v82 = *(unsigned __int16 *)(v48 + v49 + 14) * 2 * *(unsigned __int16 *)(v48 + v49 + 12) + v49 + 24;
    sub_40CE00(v48, (int)v83);
    v50 = v48 - 4;
    v51 = (unsigned __int16)v84;
    switch ( *(_DWORD *)v83 )
    {
      case 0:
        v36 = 4 * v83[4];
        break;
      case 1:
        v36 = 2 * v83[4];
        break;
      case 2:
        v36 = v83[4];
        break;
      case 3:
        v36 = (715827883 * (unsigned __int64)v83[4]) >> 32;
        break;
      default:
        break;
    }
    v52 = v36;
    for ( i1 = 0; i1 < 16; ++i1 )
    {
      if ( v52 == 0 )
        break;
      v52 >>= 1;
    }
    if ( i1 != 0 )
      v54 = (__int64)pow(2.0, (double)(i1 - 1));
    else
      v54 = 0;
    LODWORD(v55) = 0;
    do
    {
      if ( v51 == 0 )
        break;
      v51 >>= 1;
      LODWORD(v55) = v55 + 1;
    }
    while ( (int)v55 < 16 );
    if ( (_DWORD)v55 != 0 )
      v55 = (__int64)pow(2.0, (double)((int)v55 - 1));
    if ( v54 == 512 && (_DWORD)v55 == 512 )
      v56 = sub_423510(v50, 1995, 1);
    else
      v56 = sub_423510(v50, v75, 0);
    dword_4E5E80[v56] = v56;
    sub_423960(v56);
    LOBYTE(v5) = v82;
    v46 = (int *)(v82 + v50);
    v79 -= v82;
  }
  while ( v79 != 0 );
  dword_4B1CBC = (int)DstBuf;
  return v5;
}

// 0x423510  sub_423510
int __cdecl sub_423510(int a1, int a2, int a3)
{
  int v3; // edi
  int v4; // ecx
  int i; // eax
  int v6; // esi
  int v7; // ecx
  __int64 v8; // rax
  char v9; // cl
  _BYTE *v10; // ebx
  unsigned int v11; // eax
  int v12; // esi
  int v13; // edi
  int v14; // ebp
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  bool v18; // cc
  char v19; // al
  int v21; // [esp+Ch] [ebp-58h]
  int v22; // [esp+10h] [ebp-54h]
  int v23; // [esp+14h] [ebp-50h]
  int v24; // [esp+1Ch] [ebp-48h]
  int v25; // [esp+38h] [ebp-2Ch]
  int v26; // [esp+3Ch] [ebp-28h]
  int v27; // [esp+40h] [ebp-24h]
  int v28; // [esp+44h] [ebp-20h]
  _WORD v29[5]; // [esp+48h] [ebp-1Ch] BYREF
  int v30; // [esp+52h] [ebp-12h]

  sub_40CE00(a1 + 4, (int)v29);
  switch ( *(_DWORD *)v29 )
  {
    case 0:
      v3 = 4 * v29[4];
      break;
    case 1:
      v3 = 2 * v29[4];
      break;
    case 2:
      v3 = v29[4];
      break;
    case 3:
      v3 = (715827883 * (unsigned __int64)v29[4]) >> 32;
      break;
    default:
      v3 = a1;
      break;
  }
  v4 = v3;
  for ( i = 0; i < 16; ++i )
  {
    if ( v4 == 0 )
      break;
    v4 >>= 1;
  }
  if ( i != 0 )
    v6 = (__int64)pow(2.0, (double)(i - 1));
  else
    v6 = 0;
  v7 = (unsigned __int16)v30;
  LODWORD(v8) = 0;
  do
  {
    if ( v7 == 0 )
      break;
    v7 >>= 1;
    LODWORD(v8) = v8 + 1;
  }
  while ( (int)v8 < 16 );
  if ( (_DWORD)v8 != 0 )
    v8 = (__int64)pow(2.0, (double)((int)v8 - 1));
  if ( byte_9CA877 != 0 )
  {
    if ( v6 < v3 )
      v6 *= 2;
    if ( (int)v8 < (unsigned __int16)v30 )
      LODWORD(v8) = 2 * v8;
  }
  if ( v6 > dword_4AC024 )
    v6 = dword_4AC024;
  if ( (int)v8 > dword_4AC024 )
    LODWORD(v8) = dword_4AC024;
  if ( dword_4B1CCC != 0 )
  {
    if ( (int)v8 > v6 )
      v6 = v8;
    LODWORD(v8) = v6;
  }
  v25 = v6;
  if ( v6 >= (int)v8 )
    v25 = v8;
  if ( dword_4B1CC8 == 0 )
    v25 = 2;
  v28 = v8;
  v9 = 0;
  v27 = v6;
  v26 = 0;
  if ( v25 > 1 )
  {
    v10 = (_BYTE *)a1;
    v11 = dword_4AC094;
    while ( 1 )
    {
      v12 = a2;
      v13 = v27 >> v9;
      v14 = v28 >> v9;
      if ( v27 >> v9 == 512 && v14 == 512 )
        v12 = 1995;
      if ( v12 == 1995 )
      {
        v15 = 1995;
        dword_4B1CA0 = 1995;
        dword_547398 = 0;
        dword_54739C = (int)dword_4B1CAC;
      }
      else
      {
        v15 = dword_4B1CA0;
      }
      if ( v12 < 1995 )
      {
        if ( dword_4B1C90 < v12 )
          dword_4B1C90 = v12;
        dword_549080[dword_4B1C8C] = v12;
      }
      else
      {
        v25 = 0;
      }
      if ( (v11 & 2) != 0 )
        break;
      if ( v11 <= 1 )
      {
        if ( a3 != 0 )
        {
          if ( a3 == 1 )
          {
            v10 = (_BYTE *)(dword_52FD88[12 * v15] + dword_52FD8C[12 * v15]);
            if ( &v10[dword_52FD88[12 * v12]] <= (char *)dword_4B1CAC + dword_4B1CB4 )
              dword_4B1CA0 = v12;
            else
              v10 = NULL;
          }
        }
        else
        {
          v10 = (_BYTE *)(dword_52FD88[12 * dword_4B1C9C] + dword_52FD8C[12 * dword_4B1C9C]);
          if ( &v10[dword_52FD88[12 * v12]] < (char *)dword_4B1CA8 + dword_4B1CB0 )
            dword_4B1C9C = v12;
          else
            v10 = NULL;
        }
        v16 = dword_46AF64 * v13 * v14;
        v17 = 12 * v12;
        dword_52FD60[v17] = v13;
        dword_52FD64[v17] = v14;
        dword_52FD88[v17] = v16;
        dword_52FD8C[v17] = (int)v10;
        sub_4217F0(a1, v10, v12, v13, v14);
        goto LABEL_67;
      }
LABEL_68:
      v9 = v26 + 1;
      v18 = v25 >> 1 <= 1;
      v25 >>= 1;
      ++v26;
      if ( v18 )
        goto LABEL_71;
    }
    sub_420D90(a1, dword_4B1CA4, v12, v13, v14);
    dword_7C632C(3553);
    dword_7C6368(3553, v12);
    dword_7C62C0(3553, 10242, 1176765440);
    dword_7C62C0(3553, 10243, 1176765440);
    dword_7C62C0(3553, 10241, 1175979008);
    dword_7C62C0(3553, 10240, 1175979008);
    dword_7C6614();
    if ( dword_4B1CC0 != 0 && dword_548C60 != 0 )
    {
      dword_7C90CC(3553, v26, 32997, v13, v14, 0, 6400, 5121, dword_4B1CA4);
    }
    else
    {
      if ( byte_52FD69[48 * v12] != 0 )
      {
        v24 = 6408;
        v23 = v14;
        v22 = v13;
        v21 = 4;
      }
      else
      {
        v24 = 6407;
        v23 = v14;
        v22 = v13;
        v21 = 3;
      }
      dword_7C90CC(3553, v26, v21, v22, v23, 0, v24, 5121, dword_4B1CA4);
    }
    dword_7C6614();
LABEL_67:
    v11 = dword_4AC094;
    goto LABEL_68;
  }
  v12 = a1;
LABEL_71:
  if ( v12 < 1995 )
  {
    v19 = byte_52FD69[48 * v12];
    ++dword_4B1C8C;
    if ( (v19 & 1) != 0 )
      ++dword_4B1C98;
    if ( v19 != 0 )
      ++dword_4B1C94;
  }
  return v12;
}

// 0x423960  sub_423960
int __cdecl sub_423960(int a1)
{
  int i; // eax
  int j; // eax
  int result; // eax
  int v4; // edx
  _DWORD *v5; // edi
  int v6; // esi
  _DWORD *v7; // ebp
  _DWORD *v8; // edx
  int v9; // esi
  _DWORD *v10; // edi
  int v11; // ecx

  byte_52FD70[48 * a1] = 0;
  for ( i = dword_52FD60[12 * a1] >> 1; i > 0; ++byte_52FD70[48 * a1] )
    i >>= 1;
  byte_52FD6F[48 * a1] = 0;
  for ( j = dword_52FD64[12 * a1] >> 1; j > 0; ++byte_52FD6F[48 * a1] )
    j >>= 1;
  result = dword_52FD60[12 * a1] * dword_52FD64[12 * a1];
  if ( result < 4096 && result > 0 && word_52FD72[24 * a1] == 4 )
  {
    v4 = dword_46AF60;
    byte_52FD6A[48 * a1] = 1;
    if ( v4 == 8 )
    {
      v5 = (_DWORD *)dword_52FD8C[12 * a1];
      v6 = 1;
      v7 = v5 + 1;
      result /= 4;
      if ( result > 1 )
      {
        while ( *v5 == *v7 )
        {
          ++v5;
          ++v7;
          if ( ++v6 >= result )
            goto LABEL_14;
        }
        byte_52FD6A[48 * a1] = 0;
      }
LABEL_14:
      if ( byte_52FD6A[48 * a1] != 0 )
      {
        result = dword_52FD8C[12 * a1];
        byte_52FD6B[48 * a1] = *(_BYTE *)result;
      }
    }
    else
    {
      v8 = (_DWORD *)dword_52FD8C[12 * a1];
      v9 = 1;
      v10 = (_DWORD *)((char *)v8 + 3);
      if ( result > 1 )
      {
        while ( ((*v8 ^ *v10) & 0xFFFFFF) == 0 )
        {
          v8 = (_DWORD *)((char *)v8 + 3);
          v10 = (_DWORD *)((char *)v10 + 3);
          if ( ++v9 >= result )
            goto LABEL_21;
        }
        byte_52FD6A[48 * a1] = 0;
      }
LABEL_21:
      if ( byte_52FD6A[48 * a1] != 0 )
      {
        result = (int)&unk_52FD6C + 48 * a1;
        v11 = dword_52FD8C[12 * a1];
        *(_WORD *)result = *(_WORD *)v11;
        *(_BYTE *)(result + 2) = *(_BYTE *)(v11 + 2);
      }
    }
  }
  else
  {
    byte_52FD6A[48 * a1] = 0;
  }
  return result;
}

// 0x423ab0  sub_423AB0
void *sub_423AB0()
{
  dword_4B1CA0 = 1995;
  dword_4B1C8C = 0;
  dword_4B1C9C = 0;
  dword_52FD88[0] = 0;
  dword_52FD8C[0] = 0;
  dword_547398 = 0;
  dword_54739C = (int)dword_4B1CAC;
  return dword_4B1CAC;
}

// 0x423ae0  sub_423AE0
void *sub_423AE0()
{
  void *result; // eax

  result = (void *)dword_4AC094;
  if ( (unsigned int)dword_4AC094 < 2 )
  {
    if ( dword_4B1CAC != NULL )
      free(/*Block*/ dword_4B1CAC);
    dword_4B1CB4 = 1310720 * dword_46AF64;
    result = malloc(/*Size*/ 1310720 * dword_46AF64);
    dword_4B1CAC = result;
    dword_4B1CA4 = NULL;
  }
  else
  {
    if ( dword_4AC094 == 2 )
    {
      result = malloc(/*Size*/ 0x100000u);
      dword_4B1CA4 = result;
    }
    dword_4B1CAC = NULL;
  }
  return result;
}

// 0x423b50  sub_423B50
void sub_423B50()
{
  if ( dword_4B1CA4 != NULL )
    free(/*Block*/ dword_4B1CA4);
  if ( dword_4B1CA8 != NULL )
    free(/*Block*/ dword_4B1CA8);
  if ( dword_4B1CAC != NULL )
    free(/*Block*/ dword_4B1CAC);
  dword_4B1CA4 = NULL;
  dword_4B1CA8 = NULL;
  dword_4B1CAC = NULL;
}

// 0x423bb0  sub_423BB0
void sub_423BB0()
{
  int *v0; // eax
  int v1; // edx
  int v2; // ecx

  if ( (dword_4AC094 & 2) != 0 )
  {
    dword_7C632C(3553);
    dword_7C6574(dword_4B1C8C, dword_549080);
    dword_7C6614();
  }
  else if ( (unsigned int)dword_4AC094 <= 1 )
  {
    if ( dword_4B1CA8 != NULL )
    {
      free(/*Block*/ dword_4B1CA8);
      dword_4B1CA8 = NULL;
    }
    if ( dword_4B1C8C - 1 >= 0 )
    {
      v0 = &dword_549080[dword_4B1C8C - 1];
      v1 = dword_4B1C8C;
      v2 = dword_4B1C9C;
      do
      {
        if ( *v0 == v2 )
          v2 = 0;
        --v0;
        --v1;
      }
      while ( v1 != 0 );
      dword_4B1C9C = v2;
    }
  }
  dword_4B1C8C = 0;
  dword_4B1C90 = 0;
  dword_4B1CA0 = 0;
  dword_4B1C94 = 0;
  dword_4B1C98 = 0;
}

// 0x423c50  sub_423C50
int __cdecl sub_423C50(int a1, int a2)
{
  int result; // eax
  double v3; // st7
  int v4; // [esp+Ch] [ebp-20h]
  struct tagMSG Msg; // [esp+10h] [ebp-1Ch] BYREF
  float v6; // [esp+30h] [ebp+4h]
  int v7; // [esp+30h] [ebp+4h]
  int v8; // [esp+34h] [ebp+8h]

  result = dword_4AC094;
  if ( dword_4AC094 != 16 )
  {
    if ( (unsigned int)dword_4AC094 <= 1 )
      dword_4B1C4C = 0;
    result = a1;
    if ( a1 == 2048 )
    {
      dword_4B1A80();
      dword_4B1C4C = 0;
      dword_4B1C48 = 1;
      dword_4B1CDC = 0;
    }
    else
    {
      if ( a1 - dword_4B1CDC < 102400 && a1 != a2 )
        return result;
      dword_4B1CDC = a1;
    }
    dword_4B1A8C();
    dword_6235D0 = LODWORD(flt_467F50[0]);
    dword_6235D4 = LODWORD(flt_46874C);
    dword_6235D8 = LODWORD(flt_46834C);
    *(float *)&v4 = (float)(-6 - dword_4EFB3C);
    dword_6235AC = 1995;
    dword_6235C0 = v4;
    dword_6235C4 = v4;
    dword_6235C8 = v4;
    dword_6235CC = v4;
    dword_6235B0 = 0;
    dword_6235B4 = 0;
    dword_6235B8 = 1142931456;
    dword_6235BC = 1139769344;
    dword_6235DC = LODWORD(flt_46874C);
    dword_6235E0 = LODWORD(flt_467F50[0]);
    dword_6235E4 = 1031798784;
    dword_6235E8 = LODWORD(flt_46834C);
    dword_6235EC = 1031798784;
    dword_4B1A7C();
    if ( (byte_4B3E48 & 1) != 0 )
    {
      v6 = (double)a1 * 300.0 / (double)a2;
      if ( dword_4B1CD8 != (__int64)v6 )
      {
        dword_4B1CD8 = (__int64)v6;
        *(float *)&v8 = (v6 - -109.0) * 0.001953125;
        dword_4B1A8C();
        dword_6235D8 = v8;
        v3 = v6 * 1.25;
        *(float *)&v7 = (float)-dword_4EFB3C;
        dword_6235B0 = 1124597760;
        *(float *)&dword_6235B8 = v3;
        dword_6235C4 = v7;
        dword_6235B4 = 1137475584;
        dword_6235BC = 1098907648;
        dword_6235D0 = 1046085632;
        dword_6235D4 = 1023410176;
        dword_6235C0 = v7;
        dword_6235C8 = v7;
        dword_6235CC = v7;
        dword_6235DC = 1023410176;
        dword_6235E0 = 1046085632;
        dword_6235E4 = 0;
        dword_6235E8 = v8;
        dword_6235EC = 0;
        dword_4B1A7C();
      }
    }
    InvalidateRect(/*hWnd*/ hWnd, /*lpRect*/ NULL, /*bErase*/ false);
    UpdateWindow(/*hWnd*/ hWnd);
    while ( PeekMessageA(/*lpMsg*/ &Msg, /*hWnd*/ NULL, /*wMsgFilterMin*/ 0, /*wMsgFilterMax*/ 0, /*wRemoveMsg*/ 1u) )
    {
      TranslateMessage(/*lpMsg*/ &Msg);
      DispatchMessageA(/*lpMsg*/ &Msg);
    }
    result = dword_4AC094;
    if ( (unsigned int)dword_4AC094 <= 1 )
      dword_4B1C4C = 255;
  }
  return result;
}

// 0x423f30  sub_423F30
unsigned __int16 *__cdecl sub_423F30(int a1)
{
  int v1; // edx
  unsigned __int16 *result; // eax
  int v3; // ecx
  int v4; // edi
  unsigned int v5; // edx
  int v6; // ecx
  int v7; // esi
  int v8; // edx
  int v9; // ecx
  int v10; // ecx
  int v11; // edx
  int *v12; // ecx
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  int v18; // esi
  int v19; // edx
  int v20; // ecx
  int *v21; // ecx
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  int v25; // edx
  int v26; // ecx
  int v27; // esi
  int v28; // edx
  int v29; // ecx
  int v30; // ecx
  int v31; // edx
  int *v32; // ecx
  int v33; // ecx
  int v34; // edx
  int v35; // ecx
  int v36; // edx
  int v37; // ecx
  int v38; // esi
  int v39; // edx
  int v40; // ecx
  int *v41; // ecx
  int v42; // ecx
  int v43; // edx
  int v44; // ecx
  int v45; // edx
  int v46; // ecx
  int v47; // edx
  unsigned __int16 v48; // cx
  int v49; // ecx
  int v50; // esi
  int v51; // edx
  int v52; // ecx
  int *v53; // ecx
  int v54; // ecx
  int v55; // edx
  int v56; // ecx
  int v57; // edx
  int v58; // ecx
  int v59; // esi
  int v60; // edx
  int v61; // ecx
  int v62; // ecx
  int v63; // edx
  int *v64; // ecx
  int v65; // ecx
  int v66; // edx
  int v67; // ecx
  int v68; // edx
  int v69; // ecx
  int v70; // edx
  unsigned __int16 v71; // cx
  int v72; // ecx
  int v73; // esi
  int v74; // edx
  int v75; // ecx
  int *v76; // ecx
  int v77; // ecx
  int v78; // edx
  int v79; // ecx
  int v80; // edx
  int v81; // ecx
  int v82; // esi
  int v83; // edx
  int v84; // ecx
  int v85; // ecx
  int v86; // edx
  int *v87; // ecx
  int v88; // ecx
  int v89; // edx
  int v90; // ecx
  int v91; // edx
  int v92; // ecx
  int v93; // esi
  int v94; // edx
  int v95; // ecx
  int *v96; // ecx
  int v97; // ecx
  int v98; // edx
  int v99; // ecx
  int v100; // edx
  int v101; // [esp+10h] [ebp-4h]
  int v102; // [esp+18h] [ebp+4h]

  v1 = *(_DWORD *)(a1 + 8);
  result = (unsigned __int16 *)(a1 + 12);
  v3 = a1 + 12;
  while ( v1 != 0 )
  {
    result = *(unsigned __int16 **)(v3 + 16);
    v4 = *(_DWORD *)(v3 + 20);
    --v1;
    v3 += 28;
    v102 = v1;
    v101 = v3;
    if ( v4 != 0 )
    {
      while ( 2 )
      {
        v5 = 0;
        switch ( *((_BYTE *)result + 3) )
        {
          case 0:
          case 4:
            result += 8;
            goto LABEL_165;
          case 8:
          case 0xC:
            result += 28;
            goto LABEL_165;
          case 0x10:
            result += 10;
            goto LABEL_165;
          case 0x14:
            v4 -= *result;
            result += 8 * *result;
            goto LABEL_166;
          case 0x18:
            v4 -= *result;
            result += 10 * *result;
            goto LABEL_166;
          case 0x1C:
            HIWORD(v6) = 0;
            v4 -= *result;
            if ( *result != 0 )
            {
              LOWORD(v6) = *result;
              v7 = v6;
              do
              {
                if ( (result[1] & 8) != 0 )
                {
                  LOBYTE(v5) = *((_BYTE *)result + 10);
                  v8 = (v5 >> 5) & 3;
                }
                else
                {
                  v8 = 4;
                }
                v9 = result[3];
                if ( v8 != 0 )
                {
                  switch ( v8 )
                  {
                    case 1:
                      v12 = &dword_52FD84[12 * v9];
                      v5 = *v12 | 2;
                      break;
                    case 2:
                      v13 = 12 * v9;
                      v14 = dword_52FD84[v13];
                      v12 = &dword_52FD84[v13];
                      v5 = v14 | 4;
                      break;
                    case 3:
                      v12 = &dword_52FD84[12 * v9];
                      v5 = *v12 | 8;
                      break;
                    default:
                      v15 = 12 * v9;
                      v16 = dword_52FD84[v15];
                      v12 = &dword_52FD84[v15];
                      v5 = v16 | 0x10;
                      break;
                  }
                }
                else
                {
                  v10 = 12 * v9;
                  v11 = dword_52FD84[v10];
                  v12 = &dword_52FD84[v10];
                  v5 = v11 | 1;
                }
                *v12 = v5;
                result += 12;
                --v7;
              }
              while ( v7 != 0 );
            }
            goto LABEL_166;
          case 0x20:
            HIWORD(v17) = 0;
            v4 -= *result;
            if ( *result != 0 )
            {
              LOWORD(v17) = *result;
              v18 = v17;
              do
              {
                if ( (result[1] & 8) != 0 )
                {
                  LOBYTE(v5) = *((_BYTE *)result + 10);
                  v19 = (v5 >> 5) & 3;
                }
                else
                {
                  v19 = 4;
                }
                v20 = result[3];
                if ( v19 != 0 )
                {
                  switch ( v19 )
                  {
                    case 1:
                      v22 = 12 * v20;
                      v23 = dword_52FD84[v22];
                      v21 = &dword_52FD84[v22];
                      v5 = v23 | 2;
                      break;
                    case 2:
                      v21 = &dword_52FD84[12 * v20];
                      v5 = *v21 | 4;
                      break;
                    case 3:
                      v24 = 12 * v20;
                      v25 = dword_52FD84[v24];
                      v21 = &dword_52FD84[v24];
                      v5 = v25 | 8;
                      break;
                    default:
                      v21 = &dword_52FD84[12 * v20];
                      v5 = *v21 | 0x10;
                      break;
                  }
                }
                else
                {
                  v21 = &dword_52FD84[12 * v20];
                  v5 = *v21 | 1;
                }
                *v21 = v5;
                result += 14;
                --v18;
              }
              while ( v18 != 0 );
            }
            goto LABEL_166;
          case 0x24:
            v4 -= *result;
            result += 10 * *result;
            goto LABEL_166;
          case 0x28:
          case 0x48:
            v4 -= *result;
            result += 12 * *result;
            goto LABEL_166;
          case 0x2C:
            HIWORD(v26) = 0;
            v4 -= *result;
            if ( *result != 0 )
            {
              LOWORD(v26) = *result;
              v27 = v26;
              do
              {
                if ( (result[1] & 8) != 0 )
                {
                  LOBYTE(v5) = *((_BYTE *)result + 10);
                  v28 = (v5 >> 5) & 3;
                }
                else
                {
                  v28 = 4;
                }
                v29 = result[3];
                if ( v28 != 0 )
                {
                  switch ( v28 )
                  {
                    case 1:
                      v32 = &dword_52FD84[12 * v29];
                      v5 = *v32 | 2;
                      break;
                    case 2:
                      v33 = 12 * v29;
                      v34 = dword_52FD84[v33];
                      v32 = &dword_52FD84[v33];
                      v5 = v34 | 4;
                      break;
                    case 3:
                      v32 = &dword_52FD84[12 * v29];
                      v5 = *v32 | 8;
                      break;
                    default:
                      v35 = 12 * v29;
                      v36 = dword_52FD84[v35];
                      v32 = &dword_52FD84[v35];
                      v5 = v36 | 0x10;
                      break;
                  }
                }
                else
                {
                  v30 = 12 * v29;
                  v31 = dword_52FD84[v30];
                  v32 = &dword_52FD84[v30];
                  v5 = v31 | 1;
                }
                *v32 = v5;
                result += 16;
                --v27;
              }
              while ( v27 != 0 );
            }
            goto LABEL_166;
          case 0x30:
            HIWORD(v81) = 0;
            v4 -= *result;
            if ( *result != 0 )
            {
              LOWORD(v81) = *result;
              v82 = v81;
              do
              {
                if ( (result[1] & 8) != 0 )
                {
                  LOBYTE(v5) = *((_BYTE *)result + 10);
                  v83 = (v5 >> 5) & 3;
                }
                else
                {
                  v83 = 4;
                }
                v84 = result[3];
                if ( v83 != 0 )
                {
                  switch ( v83 )
                  {
                    case 1:
                      v87 = &dword_52FD84[12 * v84];
                      v5 = *v87 | 2;
                      break;
                    case 2:
                      v88 = 12 * v84;
                      v89 = dword_52FD84[v88];
                      v87 = &dword_52FD84[v88];
                      v5 = v89 | 4;
                      break;
                    case 3:
                      v87 = &dword_52FD84[12 * v84];
                      v5 = *v87 | 8;
                      break;
                    default:
                      v90 = 12 * v84;
                      v91 = dword_52FD84[v90];
                      v87 = &dword_52FD84[v90];
                      v5 = v91 | 0x10;
                      break;
                  }
                }
                else
                {
                  v85 = 12 * v84;
                  v86 = dword_52FD84[v85];
                  v87 = &dword_52FD84[v85];
                  v5 = v86 | 1;
                }
                *v87 = v5;
                result += 18;
                --v82;
              }
              while ( v82 != 0 );
            }
            goto LABEL_166;
          case 0x34:
            HIWORD(v37) = 0;
            v4 -= *result;
            if ( *result != 0 )
            {
              LOWORD(v37) = *result;
              v38 = v37;
              do
              {
                if ( (result[1] & 8) != 0 )
                {
                  LOBYTE(v5) = *((_BYTE *)result + 10);
                  v39 = (v5 >> 5) & 3;
                }
                else
                {
                  v39 = 4;
                }
                v40 = result[3];
                if ( v39 != 0 )
                {
                  switch ( v39 )
                  {
                    case 1:
                      v42 = 12 * v40;
                      v43 = dword_52FD84[v42];
                      v41 = &dword_52FD84[v42];
                      v5 = v43 | 2;
                      break;
                    case 2:
                      v41 = &dword_52FD84[12 * v40];
                      v5 = *v41 | 4;
                      break;
                    case 3:
                      v44 = 12 * v40;
                      v45 = dword_52FD84[v44];
                      v41 = &dword_52FD84[v44];
                      v5 = v45 | 8;
                      break;
                    default:
                      v41 = &dword_52FD84[12 * v40];
                      v5 = *v41 | 0x10;
                      break;
                  }
                }
                else
                {
                  v41 = &dword_52FD84[12 * v40];
                  v5 = *v41 | 1;
                }
                *v41 = v5;
                result += 12;
                --v38;
              }
              while ( v38 != 0 );
            }
            goto LABEL_166;
          case 0x38:
            HIWORD(v58) = 0;
            v4 -= *result;
            if ( *result != 0 )
            {
              LOWORD(v58) = *result;
              v59 = v58;
              do
              {
                if ( (result[1] & 8) != 0 )
                {
                  LOBYTE(v5) = *((_BYTE *)result + 10);
                  v60 = (v5 >> 5) & 3;
                }
                else
                {
                  v60 = 4;
                }
                v61 = result[3];
                if ( v60 != 0 )
                {
                  switch ( v60 )
                  {
                    case 1:
                      v64 = &dword_52FD84[12 * v61];
                      v5 = *v64 | 2;
                      break;
                    case 2:
                      v65 = 12 * v61;
                      v66 = dword_52FD84[v65];
                      v64 = &dword_52FD84[v65];
                      v5 = v66 | 4;
                      break;
                    case 3:
                      v64 = &dword_52FD84[12 * v61];
                      v5 = *v64 | 8;
                      break;
                    default:
                      v67 = 12 * v61;
                      v68 = dword_52FD84[v67];
                      v64 = &dword_52FD84[v67];
                      v5 = v68 | 0x10;
                      break;
                  }
                }
                else
                {
                  v62 = 12 * v61;
                  v63 = dword_52FD84[v62];
                  v64 = &dword_52FD84[v62];
                  v5 = v63 | 1;
                }
                *v64 = v5;
                result += 14;
                --v59;
              }
              while ( v59 != 0 );
            }
            goto LABEL_166;
          case 0x3C:
            HIWORD(v49) = 0;
            v4 -= *result;
            if ( *result != 0 )
            {
              LOWORD(v49) = *result;
              v50 = v49;
              do
              {
                if ( (result[1] & 8) != 0 )
                {
                  LOBYTE(v5) = *((_BYTE *)result + 10);
                  v51 = (v5 >> 5) & 3;
                }
                else
                {
                  v51 = 4;
                }
                v52 = result[3];
                if ( v51 != 0 )
                {
                  switch ( v51 )
                  {
                    case 1:
                      v54 = 12 * v52;
                      v55 = dword_52FD84[v54];
                      v53 = &dword_52FD84[v54];
                      v5 = v55 | 2;
                      break;
                    case 2:
                      v53 = &dword_52FD84[12 * v52];
                      v5 = *v53 | 4;
                      break;
                    case 3:
                      v56 = 12 * v52;
                      v57 = dword_52FD84[v56];
                      v53 = &dword_52FD84[v56];
                      v5 = v57 | 8;
                      break;
                    default:
                      v53 = &dword_52FD84[12 * v52];
                      v5 = *v53 | 0x10;
                      break;
                  }
                }
                else
                {
                  v53 = &dword_52FD84[12 * v52];
                  v5 = *v53 | 1;
                }
                *v53 = v5;
                result += 16;
                --v50;
              }
              while ( v50 != 0 );
            }
            goto LABEL_166;
          case 0x40:
            HIWORD(v72) = 0;
            v4 -= *result;
            if ( *result != 0 )
            {
              LOWORD(v72) = *result;
              v73 = v72;
              do
              {
                if ( (result[1] & 8) != 0 )
                {
                  LOBYTE(v5) = *((_BYTE *)result + 10);
                  v74 = (v5 >> 5) & 3;
                }
                else
                {
                  v74 = 4;
                }
                v75 = result[3];
                if ( v74 != 0 )
                {
                  switch ( v74 )
                  {
                    case 1:
                      v77 = 12 * v75;
                      v78 = dword_52FD84[v77];
                      v76 = &dword_52FD84[v77];
                      v5 = v78 | 2;
                      break;
                    case 2:
                      v76 = &dword_52FD84[12 * v75];
                      v5 = *v76 | 4;
                      break;
                    case 3:
                      v79 = 12 * v75;
                      v80 = dword_52FD84[v79];
                      v76 = &dword_52FD84[v79];
                      v5 = v80 | 8;
                      break;
                    default:
                      v76 = &dword_52FD84[12 * v75];
                      v5 = *v76 | 0x10;
                      break;
                  }
                }
                else
                {
                  v76 = &dword_52FD84[12 * v75];
                  v5 = *v76 | 1;
                }
                *v76 = v5;
                result += 20;
                --v73;
              }
              while ( v73 != 0 );
            }
            goto LABEL_166;
          case 0x44:
            result += 6 * *result + 2;
LABEL_165:
            --v4;
            goto LABEL_166;
          case 0x4A:
            HIWORD(v46) = 0;
            v4 -= *result;
            if ( *result != 0 )
            {
              LOWORD(v46) = *result;
              v47 = v46;
              do
              {
                v48 = result[2];
                result += 14;
                --v47;
                dword_52FD84[12 * v48] = 16;
              }
              while ( v47 != 0 );
            }
            goto LABEL_166;
          case 0x4C:
            v4 -= *result;
            result += 14 * *result;
            goto LABEL_166;
          case 0x4E:
            HIWORD(v69) = 0;
            v4 -= *result;
            if ( *result != 0 )
            {
              LOWORD(v69) = *result;
              v70 = v69;
              do
              {
                v71 = result[2];
                result += 16;
                --v70;
                dword_52FD84[12 * v71] = 16;
              }
              while ( v70 != 0 );
            }
            goto LABEL_166;
          case 0x64:
            HIWORD(v92) = 0;
            if ( *result != 0 )
            {
              LOWORD(v92) = *result;
              v93 = v92;
              do
              {
                if ( (result[1] & 8) != 0 )
                {
                  LOBYTE(v5) = *((_BYTE *)result + 6);
                  v94 = (v5 >> 5) & 3;
                }
                else
                {
                  v94 = 4;
                }
                v95 = result[5];
                if ( v94 != 0 )
                {
                  switch ( v94 )
                  {
                    case 1:
                      v97 = 12 * v95;
                      v98 = dword_52FD84[v97];
                      v96 = &dword_52FD84[v97];
                      v5 = v98 | 2;
                      break;
                    case 2:
                      v96 = &dword_52FD84[12 * v95];
                      v5 = *v96 | 4;
                      break;
                    case 3:
                      v99 = 12 * v95;
                      v100 = dword_52FD84[v99];
                      v96 = &dword_52FD84[v99];
                      v5 = v100 | 8;
                      break;
                    default:
                      v96 = &dword_52FD84[12 * v95];
                      v5 = *v96 | 0x10;
                      break;
                  }
                }
                else
                {
                  v96 = &dword_52FD84[12 * v95];
                  v5 = *v96 | 1;
                }
                *v96 = v5;
                result += 8;
                --v4;
                --v93;
              }
              while ( v93 != 0 );
            }
LABEL_166:
            if ( v4 != 0 )
              continue;
            v1 = v102;
            v3 = v101;
            break;
          default:
            return result;
        }
        break;
      }
    }
  }
  return result;
}

// 0x424820  sub_424820
__int16 __cdecl sub_424820(int a1, int a2)
{
  int *v2; // eax
  int v3; // ebp
  unsigned __int16 *v4; // edx
  int v5; // edi
  int v6; // eax
  __int16 i; // cx

  LOWORD(v2) = a1;
  if ( a1 != 0 )
  {
    v3 = *(_DWORD *)(a1 + 20);
    v4 = *(unsigned __int16 **)(a1 + 16);
    while ( v3 != 0 )
    {
      if ( *((_BYTE *)v4 + 3) != 100 )
        break;
      v2 = (int *)*v4;
      if ( *v4 != 0 )
      {
        v5 = *v4;
        do
        {
          v6 = v4[5];
          for ( i = word_52FD72[24 * (unsigned __int16)v6]; i != 0; i = word_52FD72[24 * i] )
          {
            if ( i == a2 )
              break;
            v6 = i;
          }
          v4 += 8;
          word_52FD72[24 * v6] = a2;
          v2 = &dword_52FD84[12 * *(v4 - 3)];
          --v3;
          --v5;
          *v2 |= 0x20u;
        }
        while ( v5 != 0 );
      }
    }
  }
  return (__int16)v2;
}

// 0x4248c0  sub_4248C0
int sub_4248C0()
{
  __int16 *v0; // eax
  unsigned int v1; // ebp
  int *v2; // eax
  unsigned int i; // edi
  int v4; // edx
  _DWORD *v5; // eax
  __int16 v6; // cx
  int v7; // ecx
  int result; // eax
  int *v9; // esi
  int v10; // eax
  _DWORD *v11; // esi
  int v12; // edi
  int v13; // ebx
  char v14; // cl
  _DWORD *v15; // esi
  __int16 v16; // ax
  bool v17; // cf
  int v18; // [esp+10h] [ebp-Ch]
  int v19; // [esp+10h] [ebp-Ch]
  int v20; // [esp+14h] [ebp-8h]
  int v21; // [esp+18h] [ebp-4h]

  v0 = word_52FD72;
  do
  {
    if ( *(_DWORD *)(v0 + 9) == 32 )
      *(_DWORD *)(v0 + 9) = dword_52FD84[12 * *v0];
    *v0 = 4;
    v0 += 24;
  }
  while ( (int)v0 < (int)word_547472 );
  v1 = dword_4B1CD4;
  v2 = (int *)DstBuf;
  for ( i = 0; i < dword_4B1CD4; v2 = (_DWORD *)((char *)v5 + v7 - 4) )
  {
    v4 = *v2;
    v5 = v2 + 2;
    v18 = v4;
    v6 = 0;
    if ( (*(_BYTE *)v5 & 8) != 0 )
      v6 = *((_WORD *)v5 + 2);
    v7 = 2 * *(unsigned __int16 *)((char *)v5 + v6 + 12) * *(unsigned __int16 *)((char *)v5 + v6 + 14) + v6 + 24;
    i += v7;
  }
  result = v18;
  v9 = (int *)DstBuf;
  v20 = v18;
  v21 = 0;
  if ( dword_4B1CD4 != 0 )
  {
    do
    {
      v10 = *v9;
      v11 = v9 + 1;
      v12 = 0;
      v19 = v10;
      v13 = dword_52FD84[12 * v10];
      if ( v13 != 0 )
      {
        while ( 1 )
        {
          if ( v12 > 0 )
            v10 = ++v20;
          if ( (v13 & 0x10) != 0 )
          {
            v13 ^= 0x10u;
            word_52FD72[24 * v10] = 4;
          }
          else if ( (v13 & 1) != 0 )
          {
            v13 ^= 1u;
            word_52FD72[24 * v10] = 0;
          }
          else if ( (v13 & 2) != 0 )
          {
            v13 ^= 2u;
            word_52FD72[24 * v10] = 1;
          }
          else if ( (v13 & 4) != 0 )
          {
            v13 ^= 4u;
            word_52FD72[24 * v10] = 2;
          }
          else if ( (v13 & 8) != 0 )
          {
            v13 ^= 8u;
            word_52FD72[24 * v10] = 3;
          }
          sub_424A90(v11, word_52FD72[24 * v10]);
          ++v12;
          if ( v13 == 0 )
            break;
          v10 = v19;
        }
        v1 = dword_4B1CD4;
      }
      v14 = *((_BYTE *)v11 + 4);
      v15 = v11 + 1;
      v16 = 0;
      if ( (v14 & 8) != 0 )
        v16 = *((_WORD *)v15 + 2);
      result = *(unsigned __int16 *)((char *)v15 + v16 + 14) * 2 * *(unsigned __int16 *)((char *)v15 + v16 + 12)
             + v16
             + 24;
      v17 = result + v21 < v1;
      v9 = (_DWORD *)((char *)v15 + result - 4);
      v21 += result;
    }
    while ( v17 );
  }
  dword_4B1CBC = (int)DstBuf;
  return result;
}

// 0x424a90  sub_424A90
int __cdecl sub_424A90(int a1, int a2)
{
  int v2; // edx
  unsigned int v3; // eax
  int v4; // ebp
  int v5; // ecx
  unsigned int v6; // edi
  _BYTE *v7; // ecx
  unsigned int i; // esi
  int v9; // eax
  int v10; // eax
  int v11; // ebx
  int j; // edi
  unsigned int k; // esi
  unsigned __int16 v14; // cx
  unsigned __int8 v16; // [esp+10h] [ebp-8h] BYREF
  unsigned __int8 v17; // [esp+11h] [ebp-7h]
  unsigned __int8 v18; // [esp+12h] [ebp-6h]
  unsigned int v19; // [esp+14h] [ebp-4h]

  v2 = a1;
  if ( *(_BYTE *)a1 != 16 || (*(_DWORD *)(a1 + 4) & 7u) > 2 )
    return 0;
  v3 = *(__int16 *)(a1 + 16);
  v4 = *(__int16 *)(a1 + 18);
  dword_548C60 = 0;
  v5 = *(_DWORD *)(a1 + 4) & 7;
  v19 = v3;
  v6 = -6;
  if ( (_BYTE)v5 != 2 )
  {
    v6 = *(__int16 *)(a1 + 16);
    dword_52FD40 = (int)byte_548C80;
    v7 = (_BYTE *)(a1 + 20);
    dword_548C60 = v6;
    if ( v6 != 0 )
    {
      for ( i = v6; i != 0; --i )
      {
        *(_BYTE *)dword_52FD40 = 8 * *v7;
        LOWORD(v3) = *(_WORD *)v7;
        *(_BYTE *)(dword_52FD40 + 1) = 8 * (v3 >> 5);
        *(_BYTE *)(dword_52FD40 + 2) = 8 * (*(_WORD *)v7 >> 10);
        if ( (char)v7[1] < 0 )
        {
          if ( a2 != 0 )
          {
            switch ( a2 )
            {
              case 1:
                *(_BYTE *)(dword_52FD40 + 3) = 96;
                break;
              case 2:
                *(_BYTE *)(dword_52FD40 + 3) = 0x80;
                break;
              case 3:
              case 4:
                v9 = dword_52FD40;
LABEL_20:
                *(_BYTE *)(v9 + 3) = -1;
                break;
              default:
                break;
            }
          }
          else
          {
            *(_BYTE *)(dword_52FD40 + 3) = 0x80;
          }
        }
        else
        {
          v9 = dword_52FD40;
          if ( *(_BYTE *)dword_52FD40 != 0 || *(_BYTE *)(dword_52FD40 + 1) != 0 || *(_BYTE *)(dword_52FD40 + 2) != 0 )
            goto LABEL_20;
          *(_BYTE *)(dword_52FD40 + 3) = 0;
        }
        v7 += 2;
        v3 = dword_52FD40 + 4;
        dword_52FD40 += 4;
      }
    }
    v10 = *(_DWORD *)(a1 + 4) & 7;
    if ( v10 == 1 )
      v19 = 2 * *(__int16 *)(a1 + 4 * (v6 >> 1) + 28);
    if ( v10 == 0 )
      v19 = 4 * *(__int16 *)(a1 + 4 * (v6 >> 1) + 28);
    v4 = *(__int16 *)(a1 + 4 * (v6 >> 1) + 30);
  }
  v11 = a1 + 4 * (v6 >> 1) + 32;
  for ( j = v4 - 1; j >= 0; --j )
  {
    for ( k = 0; k < v19; ++k )
    {
      sub_421FD0(k, j, v19, v4, v11, *(_DWORD *)(v2 + 4) & 7, &v16);
      if ( a2 == 1 )
      {
        v16 >>= 1;
        v17 >>= 1;
        v18 >>= 1;
        v14 = (v18 >> 3) + 4 * ((v17 & 0x78) + 32 * (v16 & 0x78));
      }
      else
      {
        v14 = (v18 >> 3) + 4 * ((v17 & 0xF8) + 32 * (v16 & 0xF8));
      }
      ++word_4D5E40[v14];
      v2 = a1;
    }
  }
  return 1;
}

// 0x424ce0  sub_424CE0
char *__cdecl sub_424CE0(char *Str)
{
  char *v1; // eax
  char *v2; // eax
  char *v3; // eax
  char *v4; // eax
  char *v5; // eax
  char *v6; // eax
  char *v7; // eax
  char *v8; // eax
  char *v9; // eax
  char *result; // eax

  v1 = strstr(Str, /*SubStr*/ aQ_0);
  if ( v1 != NULL || (v1 = strstr(Str, /*SubStr*/ aQ)) != NULL )
    dword_4AC0C8 = atoi(/*String*/ v1 + 2);
  v2 = strstr(Str, /*SubStr*/ aSam);
  if ( v2 != NULL || (v2 = strstr(Str, /*SubStr*/ aSam_0)) != NULL )
    dword_4AC0CC = atoi(/*String*/ v2 + 4);
  v3 = strstr(Str, /*SubStr*/ aR_2);
  if ( v3 != NULL || (v3 = strstr(Str, /*SubStr*/ aR_3)) != NULL )
    dword_4AC0BC = atoi(/*String*/ v3 + 2);
  v4 = strstr(Str, /*SubStr*/ aO);
  if ( v4 != NULL || (v4 = strstr(Str, /*SubStr*/ aO_0)) != NULL )
    dword_4AC0B8 = atoi(/*String*/ v4 + 2);
  v5 = strstr(Str, /*SubStr*/ aW);
  if ( v5 != NULL || (v5 = strstr(Str, /*SubStr*/ aW_0)) != NULL )
    dword_4AC0C0 = atoi(/*String*/ v5 + 2);
  if ( strstr(Str, /*SubStr*/ aN_0) != NULL || strstr(Str, /*SubStr*/ aN) != NULL )
    dword_4AC0D0 = 1;
  v6 = strstr(Str, /*SubStr*/ aSort);
  if ( v6 != NULL || (v6 = strstr(Str, /*SubStr*/ aSort_0)) != NULL )
    dword_4AC0C4 = atoi(/*String*/ v6 + 5);
  v7 = strstr(Str, /*SubStr*/ aLum);
  if ( v7 != NULL || (v7 = strstr(Str, /*SubStr*/ aLum_0)) != NULL )
    dbl_4AC0E0 = (double)atoi(/*String*/ v7 + 3) * 0.01;
  v8 = strstr(Str, /*SubStr*/ aSat);
  if ( v8 != NULL || (v8 = strstr(Str, /*SubStr*/ aSat_0)) != NULL )
    dbl_4AC0D8 = (double)atoi(/*String*/ v8 + 4) * 0.01;
  v9 = strstr(Str, /*SubStr*/ aMul);
  if ( v9 != NULL || (v9 = strstr(Str, /*SubStr*/ aMul_0)) != NULL )
    dbl_4AC0F0 = (double)atoi(/*String*/ v9 + 4) * 0.01;
  result = strstr(Str, /*SubStr*/ aGam);
  if ( result != NULL || (result = strstr(Str, /*SubStr*/ aGam_0)) != NULL )
  {
    result = (char *)atoi(/*String*/ result + 4);
    dbl_4AC0E8 = (double)(int)result * 0.01;
  }
  return result;
}

// 0x424f70  sub_424F70
int __cdecl sub_424F70(double a1, double a2)
{
  int v2; // esi
  __int64 v3; // rax
  int v5; // [esp+0h] [ebp-4h]

  v2 = 0;
  v5 = 0;
  do
  {
    v3 = (__int64)((double)v5 * a2 + a1);
    if ( (int)v3 > 255 )
      LODWORD(v3) = 255;
    if ( (int)v3 < 0 )
      LODWORD(v3) = 0;
    byte_4D5D40[v2++] = v3;
    v5 = v2;
  }
  while ( v2 < 256 );
  return v3;
}

// 0x424fc0  sub_424FC0
void __cdecl sub_424FC0(int a1, int a2, int a3, double a4, double a5)
{
  int v5; // ebx
  int *v6; // edi
  unsigned __int8 *v7; // esi
  double v8; // st7
  int v9; // eax
  int v10; // ebx
  int *v11; // esi
  _BYTE *v12; // edi
  double v13; // st6
  unsigned __int8 v15; // c0
  unsigned __int8 v16; // c3
  unsigned __int8 v18; // c0
  unsigned __int8 v19; // c3
  unsigned __int8 v21; // c0
  unsigned __int8 v22; // c3
  double v23; // st7
  __int64 v24; // rax
  double v25; // st7
  int v26[2]; // [esp+Ch] [ebp-1820h] BYREF
  int v27[2]; // [esp+14h] [ebp-1818h] BYREF
  int v28[2]; // [esp+1Ch] [ebp-1810h] BYREF
  double v29; // [esp+24h] [ebp-1808h]
  int v30[1534]; // [esp+34h] [ebp-17F8h] BYREF

  v5 = a2;
  if ( a2 > 0 )
  {
    v6 = v30;
    v7 = (unsigned __int8 *)(a1 + 2);
    do
    {
      v8 = (double)*(v7 - 2);
      v26[0] = *(v7 - 1);
      v9 = *v7;
      *(double *)v28 = v8 * 0.00392156862745098;
      *(double *)v27 = (double)v26[0] * 0.00392156862745098;
      *(double *)v26 = (double)v9 * 0.00392156862745098;
      sub_425450(
        *(double *)v28,
        *(double *)v27,
        *(double *)v26,
        (int)(v6 - 2),
        (int)v6,
        (int)(v6 + 2));
      v7 += 3;
      v6 += 6;
      --v5;
    }
    while ( v5 != 0 );
    v10 = a2;
    v11 = v30;
    v29 = (double)a3;
    v12 = (_BYTE *)(a1 + 2);
    do
    {
      v13 = *((double *)v11 - 1) + v29;
      *((double *)v11 - 1) = v13;
      if ( (v15 | v16) == 0 )
        *((double *)v11 - 1) = v13 - 360.0;
      *((double *)v11 + 1) = *((double *)v11 + 1) * a5;
      if ( (v18 | v19) == 0 )
      {
        v11[2] = 0;
        v11[3] = 1072693248;
      }
      *(double *)v11 = *(double *)v11 * a4;
      if ( (v21 | v22) == 0 )
      {
        *v11 = 0;
        v11[1] = 1072693248;
      }
      sub_425170(
        (int)v28,
        (int)v27,
        (int)v26,
        *((double *)v11 - 1),
        *(double *)v11,
        *((double *)v11 + 1));
      v23 = *(double *)v27 * 255.0;
      *(v12 - 2) = (__int64)(*(double *)v28 * 255.0);
      v24 = (__int64)v23;
      v25 = *(double *)v26 * 255.0;
      *(v12 - 1) = v24;
      *v12 = (__int64)v25;
      v11 += 6;
      v12 += 3;
      --v10;
    }
    while ( v10 != 0 );
  }
}

// 0x425170  sub_425170
void __cdecl sub_425170(double *a1, double *a2, double *a3, double a4, double a5, double a6)
{
  double v6; // st7
  unsigned __int8 v8; // c0
  unsigned __int8 v9; // c3
  int v10; // edx
  double *v11; // esi
  int v12; // ecx
  long double v13; // st4
  unsigned __int8 v15; // c0
  unsigned __int8 v16; // c3
  long double v17; // [esp+10h] [ebp+10h]
  long double v18; // [esp+10h] [ebp+10h]

  if ( a6 == 0.0 )
  {
    *(_DWORD *)a1 = 0;
    *((_DWORD *)a1 + 1) = 0;
    *(_DWORD *)a2 = 0;
    *((_DWORD *)a2 + 1) = 0;
    *(_DWORD *)a3 = 0;
    *((_DWORD *)a3 + 1) = 0;
  }
  else if ( a5 == 0.0 )
  {
    *a1 = a6;
    *a2 = a6;
    *a3 = a6;
  }
  else
  {
    if ( a4 < 0.0 )
      a4 = a4 - -360.0;
    v6 = a6 * 3.0;
    if ( (v8 | v9) != 0 )
    {
      v10 = (int)a3;
      v11 = a1;
      v12 = (int)a2;
      *a3 = (1.0 - a5) * 0.3333333333333333;
      v13 = (cos(a4 * 0.01745329238474369) * a5 / cos((60.0 - a4) * 0.01745329238474369) - -1.0) * 0.3333333333333333;
      *a1 = v13;
      *a2 = 1.0 - v13 - *a3;
      *a3 = *a3 * v6;
      *a1 = *a1 * v6;
      *a2 = *a2 * v6;
    }
    else
    {
      if ( (v15 | v16) != 0 )
      {
        v11 = a1;
        v12 = (int)a2;
        v10 = (int)a3;
        *a1 = (1.0 - a5) * 0.3333333333333333;
        v17 = (cos((a4 - 120.0) * 0.017453293) * a5 / cos((60.0 - (a4 - 120.0)) * 0.017453293) - -1.0)
            * 0.3333333333333333;
        *a2 = v17;
        *a3 = 1.0 - *a1 - v17;
        *a1 = *a1 * v6;
      }
      else
      {
        v12 = (int)a2;
        v10 = (int)a3;
        v11 = a1;
        *a2 = (1.0 - a5) * 0.3333333333333333;
        v18 = (cos((a4 - 240.0) * 0.017453293) * a5 / cos((60.0 - (a4 - 240.0)) * 0.017453293) - -1.0)
            * 0.3333333333333333;
        *a3 = v18;
        *a1 = (1.0 - *a2 - v18) * v6;
      }
      *(double *)v12 = *(double *)v12 * v6;
      *(double *)v10 = *(double *)v10 * v6;
    }
    if ( *v11 > 1.0 )
    {
      *(_DWORD *)v11 = 0;
      *((_DWORD *)v11 + 1) = 1072693248;
    }
    if ( *(double *)v12 > 1.0 )
    {
      *(_DWORD *)v12 = 0;
      *(_DWORD *)(v12 + 4) = 1072693248;
    }
    if ( *(double *)v10 > 1.0 )
    {
      *(_DWORD *)v10 = 0;
      *(_DWORD *)(v10 + 4) = 1072693248;
    }
    if ( *v11 < 0.0 )
    {
      *(_DWORD *)v11 = 0;
      *((_DWORD *)v11 + 1) = 0;
    }
    if ( *(double *)v12 < 0.0 )
    {
      *(_DWORD *)v12 = 0;
      *(_DWORD *)(v12 + 4) = 0;
    }
    if ( *(double *)v10 < 0.0 )
    {
      *(_DWORD *)v10 = 0;
      *(_DWORD *)(v10 + 4) = 0;
    }
  }
}

// 0x425450  sub_425450
void __cdecl sub_425450(double a1, double a2, double a3, long double *a4, double *a5, int a6)
{
  unsigned __int8 v7; // c0
  unsigned __int8 v8; // c3
  char v10; // c3
  unsigned __int8 v12; // c0
  unsigned __int8 v13; // c3
  long double v14; // st7
  double v15; // [esp+0h] [ebp-10h]
  double v16; // [esp+8h] [ebp-8h]
  long double v17; // [esp+14h] [ebp+4h]

  if ( (v7 | v8) != 0 && a1 <= a3 )
  {
    v15 = a1;
  }
  else if ( a2 > a1 || a2 > a3 )
  {
    v15 = a3;
  }
  else
  {
    v15 = a2;
  }
  v16 = a3 + a2 + a1;
  *(double *)a6 = v16 * 0.3333333333333333;
  if ( v10 != 0 && a2 == a3 )
  {
    *(_DWORD *)a5 = 0;
    *((_DWORD *)a5 + 1) = 0;
    *(_DWORD *)a4 = 0;
    *((_DWORD *)a4 + 1) = 0;
  }
  else
  {
    v17 = (a1 - a2 * 0.5 - a3 * 0.5) / sqrt((a2 - a3) * (a1 - a3) + (a1 - a2) * (a1 - a2));
    *a5 = 1.0 - 3.0 / v16 * v15;
    if ( (v12 | v13) == 0 )
      v17 = 1.0;
    if ( v17 < -1.0 )
      v17 = -1.0;
    v14 = acos(v17) * 57.29577951;
    *a4 = v14;
    if ( a3 > a2 )
      *a4 = 360.0 - v14;
    if ( *a5 > 1.0 )
    {
      *(_DWORD *)a5 = 0;
      *((_DWORD *)a5 + 1) = 1072693248;
    }
    if ( *(double *)a6 > 1.0 )
    {
      *(_DWORD *)a6 = 0;
      *(_DWORD *)(a6 + 4) = 1072693248;
    }
  }
}

// 0x425610  sub_425610
void __usercall sub_425610(unsigned int a1/*@<esi>*/, char *Str, _WORD *a3)
{
  _WORD *v3; // eax
  int i; // edi
  FILE *v5; // esi
  char *v6; // eax
  const char *v7; // edi
  int j; // eax
  int v9; // esi
  char *v10; // edi
  __int64 v11; // rax
  double v12; // st7
  int v13; // esi
  __int64 v14; // rax
  int k; // eax
  int v16; // ecx
  int v17; // ebp
  int v18; // edi
  unsigned __int16 v19; // bp
  unsigned int v20; // esi
  int v21; // ebx
  unsigned __int16 v22; // di
  unsigned __int8 v23; // al
  int v24; // ecx
  void *v25; // eax
  void *v26; // eax
  void *v27; // eax
  void *v28; // [esp-4h] [ebp-2Ch]
  void *v29; // [esp-4h] [ebp-2Ch]
  int v30; // [esp+10h] [ebp-18h]
  int v31; // [esp+14h] [ebp-14h]
  int m; // [esp+14h] [ebp-14h]
  double v33; // [esp+1Ch] [ebp-Ch]
  int v34; // [esp+1Ch] [ebp-Ch]
  char *Block; // [esp+24h] [ebp-4h]

  v3 = a3;
  for ( i = 0x8000; i != 0; --i )
  {
    LOWORD(a1) = *v3;
    if ( (unsigned __int8)(8 * (a1 >> 5))
       + (unsigned __int8)(8 * (*v3 >> 10))
       + (unsigned int)(unsigned __int8)(8 * *(_BYTE *)v3) < 3 )
      *v3 = 0;
    ++v3;
  }
  v5 = FsFOpen(/*FileName*/ Str, /*Mode*/ aWb);
  if ( v5 == NULL )
  {
    ConPrintf(/*Format*/ "FAILED to open output file : %s\n", Str);
    v6 = strstr(Str, /*SubStr*/ asc_4AC1DC);
    Str = v6;
    if ( v6 != NULL )
    {
      v7 = v6 + 7;
      Str = v6 + 7;
      v5 = FsFOpen(/*FileName*/ v6 + 7, /*Mode*/ aWb);
      ConPrintf(/*Format*/ "trying %s\n", v7);
      if ( v5 == NULL )
        ConPrintf(/*Format*/ "FAILED to open output file : %s\n", v7);
    }
  }
  fclose(/*Stream*/ v5);
  if ( dword_4AC0C8 != 0 )
  {
    if ( dword_4AC0C8 == 1 )
      sub_428840(a3, byte_4B4000, 254);
    else
      sub_428170(a3, byte_4B4000, 254);
  }
  else
  {
    sub_427B50(a3, byte_4B4000, 254);
  }
  for ( j = 765; j >= 3; --j )
    byte_4B4000[j] = byte_4B3FFD[j];
  Block = (char *)malloc(/*Size*/ 0x50000u);
  v9 = 0;
  v33 = 1.0 / dbl_4AC0E8;
  do
  {
    v10 = &byte_4B4000[v9];
    v11 = (__int64)(pow((double)(unsigned __int8)byte_4B4000[v9++] * 0.00392156862745098, v33) * 255.0);
    *v10 = v11;
  }
  while ( v9 < 768 );
  v12 = dbl_4AC0F0;
  v13 = 0;
  v31 = 0;
  do
  {
    v14 = (__int64)((double)v31 * v12);
    if ( (int)v14 > 255 )
      LODWORD(v14) = 255;
    if ( (int)v14 < 0 )
      LOBYTE(v14) = 0;
    byte_4D5D40[v13++] = v14;
    v31 = v13;
  }
  while ( v13 < 256 );
  for ( k = 0; k < 768; byte_4B3FFF[k] = byte_4D5D40[v16] )
    v16 = (unsigned __int8)byte_4B4000[k++];
  sub_424FC0((int)byte_4B4000, 255, 0, dbl_4AC0D8, dbl_4AC0E0);
  sub_425BD0(dword_4AC0BC, dword_4AC0C0);
  ConPrintf(/*Format*/ aCreatingInvers);
  v17 = 0;
  for ( m = 0; ; v17 = m )
  {
    v18 = 0;
    v30 = 0;
    v34 = 8 * v17;
    v19 = (_WORD)v17 << 10;
    while ( 1 )
    {
      v20 = 0;
      v21 = 8 * v18;
      v22 = 32 * v18;
      do
      {
        v23 = off_4AC118(v34, v21, 8 * v20, byte_4B4000, 256);
        v24 = v22 | v19 | (unsigned __int16)v20++;
        a3[v24] = v23;
      }
      while ( v20 < 0x20 );
      if ( (unsigned int)++v30 >= 0x20 )
        break;
      v18 = v30;
    }
    if ( (unsigned int)++m >= 0x20 )
      break;
  }
  sub_425BD0(8, dword_4AC0C0);
  v28 = (void *)sub_4270E0(0, byte_4B4000);
  qmemcpy(Block, v28, 0x10000u);
  free(/*Block*/ v28);
  v25 = (void *)sub_426B10(
                  0,
                  byte_4B4000,
                  0,
                  1072693248,
                  0,
                  1072693248,
                  -1717986918,
                  1072273817,
                  3);
  qmemcpy(Block + 0x10000, v25, 0x10000u);
  free(/*Block*/ v25);
  v26 = (void *)sub_426B10(
                  0,
                  byte_4B4000,
                  0,
                  1072693248,
                  858993459,
                  1070805811,
                  0,
                  1072693248,
                  0);
  qmemcpy(Block + 0x20000, v26, 0x10000u);
  free(/*Block*/ v26);
  v27 = (void *)sub_426B10(
                  0,
                  byte_4B4000,
                  0,
                  1072693248,
                  0,
                  -1074790400,
                  0,
                  1072693248,
                  0);
  qmemcpy(Block + 196608, v27, 0x10000u);
  free(/*Block*/ v27);
  v29 = (void *)sub_426F10(0, byte_4B4000, 0, 1071644672);
  qmemcpy(Block + 0x40000, v29, 0x10000u);
  free(/*Block*/ v29);
  if ( dword_4AC0D0 != 0 )
    sub_425A60(byte_4B4000);
  sub_426980(/*FileName*/ Str, (int)byte_4B4000, Block, /*ElementCount*/ 0x50000u);
  free(Block);
}

// 0x425a60  sub_425A60
__int64 __cdecl sub_425A60(int a1)
{
  int v1; // edi
  _BYTE *v2; // esi
  double v3; // st7
  double v5; // st6
  char v6; // c0
  double v7; // st6
  __int64 result; // rax
  float v9; // [esp+8h] [ebp-4h]
  float v10; // [esp+8h] [ebp-4h]
  float v11; // [esp+10h] [ebp+4h]
  float v12; // [esp+10h] [ebp+4h]

  v1 = 255;
  v2 = (_BYTE *)(a1 + 5);
  do
  {
    v9 = (double)(unsigned __int8)*v2 * 0.0039215689;
    v11 = (double)(unsigned __int8)*(v2 - 1) * 0.0039215689;
    v3 = (double)(unsigned __int8)*(v2 - 2) * 0.0039215689;
    if ( v9 + v11 + v3 > 0.0 )
    {
      v10 = v9 - (v11 * -0.1290322580645161 + v3 * -0.35);
      v5 = v11 - v3 * -0.2258064516129032;
      v3 = v3 * 0.6451612903225806 * 0.55 - 0.1;
      if ( v6 != 0 )
        v3 = 0.0;
      v12 = v5;
      v7 = v12 * 0.5 - 0.05;
      v11 = v7;
      if ( v7 < 0.0 )
        v11 = 0.0;
      v9 = v10 * 0.45;
    }
    *(v2 - 2) = (__int64)(0.5 - v3 * -255.0);
    *(v2 - 1) = (__int64)(0.5 - v11 * -255.0);
    result = (__int64)(0.5 - v9 * -255.0);
    *v2 = result;
    v2 += 3;
    --v1;
  }
  while ( v1 != 0 );
  return result;
}

// 0x425bd0  sub_425BD0
int __cdecl sub_425BD0(int a1, int a2)
{
  int result; // eax

  switch ( a2 )
  {
    case 1:
      dbl_4AC0F8 = 0.299;
      dbl_4AC100 = 0.587;
      dbl_4AC108 = 0.114;
      dbl_4AC110 = 0.3333;
      break;
    case 2:
      dbl_4AC0F8 = 0.3;
      dbl_4AC100 = 0.5;
      dbl_4AC108 = 0.2;
      dbl_4AC110 = 0.3333;
      break;
    case 3:
      dbl_4AC0F8 = 0.3333;
      dbl_4AC100 = 0.3333;
      dbl_4AC108 = 0.3333;
      dbl_4AC110 = 0.3333;
      break;
    default:
      dbl_4AC0F8 = 1.0;
      dbl_4AC100 = 1.0;
      dbl_4AC108 = 1.0;
      dbl_4AC110 = 1.0;
      break;
  }
  result = a1;
  switch ( a1 )
  {
    case 1:
      off_4AC118 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))sub_425DE0;
      break;
    case 2:
      off_4AC118 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))&sub_426090;
      break;
    case 3:
      off_4AC118 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))sub_4261A0;
      break;
    case 4:
      off_4AC118 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))sub_4263F0;
      break;
    case 5:
      off_4AC118 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))sub_426620;
      break;
    case 8:
      off_4AC118 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))sub_425DB0;
      break;
    default:
      off_4AC118 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))&sub_425F90;
      break;
  }
  return result;
}

// 0x425db0  sub_425DB0
int __cdecl sub_425DB0(int a1, int a2, int a3)
{
  int v3; // eax

  v3 = a1;
  LOBYTE(v3) = a1 & 0xF8;
  return (unsigned __int16)word_4D5E40[128 * v3 + 4 * (a2 & 0xFFFFFFF8) + (a3 >> 3)];
}

// 0x425de0  sub_425DE0
int __cdecl sub_425DE0(int a1, int a2, int a3, int a4)
{
  int v4; // edx
  unsigned __int8 *i; // edi
  signed int v6; // eax
  int v7; // esi
  signed int v8; // ecx
  double v9; // st7
  char v10; // bl
  char v11; // dl
  bool v12; // cc
  char v13; // al
  double v14; // st7
  char v17; // [esp+Ch] [ebp-1Ch]
  char v18; // [esp+Dh] [ebp-1Bh]
  char v19; // [esp+Eh] [ebp-1Ah]
  int v20; // [esp+10h] [ebp-18h]
  int v21; // [esp+14h] [ebp-14h]
  double v22; // [esp+20h] [ebp-8h]

  v4 = a1;
  v18 = 0;
  v19 = 0;
  v17 = 0;
  if ( a1 > a2 )
    v17 = a1 > a3;
  if ( a2 > a1 && a2 > a3 )
    v19 = 1;
  if ( a3 > a1 && a3 > a2 )
    v18 = 1;
  v22 = 3.402823466385289e38;
  v21 = 1;
  v20 = 1;
  for ( i = (unsigned __int8 *)(a4 + 5); ; i += 3 )
  {
    v6 = *(i - 2);
    v7 = *i;
    v8 = *(i - 1);
    v9 = (double)(v6 - v4);
    v10 = 0;
    v11 = 0;
    v12 = v8 <= (unsigned int)v6;
    if ( v8 < (unsigned int)v6 )
    {
      v11 = v6 > v7;
      v12 = v8 <= v6;
    }
    if ( !v12 && v8 > v7 )
      v10 = 1;
    if ( v7 <= v6 || (v13 = 1, v7 <= v8) )
      v13 = 0;
    v14 = (double)(v7 - a3) * (double)(v7 - a3) * dbl_4AC108
        + (double)(v8 - a2) * (double)(v8 - a2) * dbl_4AC100
        + v9 * v9 * dbl_4AC0F8;
    if ( v17 == v11 || v18 == v13 || v19 == v10 )
      v14 = v14 * 0.9;
    if ( v14 == 0.0 )
      break;
    if ( v14 < v22 )
    {
      v22 = v14;
      v21 = v20;
    }
    if ( (unsigned int)++v20 >= 0xFF )
      return v21;
    v4 = a1;
  }
  return v20;
}

// 0x425f90  sub_425F90
int __cdecl sub_425F90(int a1, int a2, int a3, int a4)
{
  unsigned int v4; // esi
  unsigned __int8 *v5; // ecx
  double v6; // st7
  double v7; // st6
  int v9; // [esp+Ch] [ebp-14h]
  double v10; // [esp+18h] [ebp-8h]

  v4 = 1;
  v10 = 3.402823466385289e38;
  v9 = 1;
  v5 = (unsigned __int8 *)(a4 + 5);
  do
  {
    v6 = (double)(*v5 - a3);
    v7 = v6 * v6 * dbl_4AC108
       + (double)(*(v5 - 1) - a2) * (double)(*(v5 - 1) - a2) * dbl_4AC100
       + (double)(*(v5 - 2) - a1) * (double)(*(v5 - 2) - a1) * dbl_4AC0F8;
    if ( v7 < v10 )
    {
      v10 = v7;
      v9 = v4;
    }
    ++v4;
    v5 += 3;
  }
  while ( v4 < 0xFF );
  return v9;
}

// 0x426090  sub_426090
int __cdecl sub_426090(int a1, int a2, int a3, int a4)
{
  unsigned int v4; // esi
  unsigned __int8 *v5; // ecx
  double v6; // st6
  double v7; // st6
  int v9; // [esp+Ch] [ebp-1Ch]
  double v10; // [esp+10h] [ebp-18h]
  double v11; // [esp+18h] [ebp-10h]
  double v12; // [esp+20h] [ebp-8h]

  v4 = 1;
  v12 = 3.402823466385289e38;
  v9 = 1;
  v5 = (unsigned __int8 *)(a4 + 5);
  do
  {
    v6 = (double)(*(v5 - 2) - a1);
    v10 = (double)(*(v5 - 1) - a2) * (double)(*(v5 - 1) - a2) * dbl_4AC100;
    v11 = (double)(*v5 - a3) * (double)(*v5 - a3) * dbl_4AC108;
    v7 = v6 * v6 * dbl_4AC0F8 * (v6 * v6 * dbl_4AC0F8) + v10 * v10 + v11 * v11;
    if ( v7 < v12 )
    {
      v12 = v7;
      v9 = v4;
    }
    ++v4;
    v5 += 3;
  }
  while ( v4 < 0xFF );
  return v9;
}

// 0x4261a0  sub_4261A0
int __cdecl sub_4261A0(int a1, int a2, int a3, int a4)
{
  int v4; // edi
  unsigned __int8 *i; // esi
  double v6; // st6
  double v7; // st6
  int v9; // [esp+4h] [ebp-70h]
  double v10; // [esp+Ch] [ebp-68h]
  double v11; // [esp+14h] [ebp-60h]
  double v12; // [esp+1Ch] [ebp-58h]
  double v13; // [esp+24h] [ebp-50h]
  double v14; // [esp+24h] [ebp-50h]
  double v15; // [esp+2Ch] [ebp-48h]
  double v16; // [esp+2Ch] [ebp-48h]
  double v17; // [esp+34h] [ebp-40h]
  double v18; // [esp+34h] [ebp-40h]
  double v19; // [esp+3Ch] [ebp-38h]
  int v20[2]; // [esp+44h] [ebp-30h] BYREF
  int v21[2]; // [esp+4Ch] [ebp-28h] BYREF
  int v22[2]; // [esp+54h] [ebp-20h] BYREF
  int v23[2]; // [esp+5Ch] [ebp-18h] BYREF
  int v24[2]; // [esp+64h] [ebp-10h] BYREF
  int v25; // [esp+6Ch] [ebp-8h] BYREF

  sub_425450(
    (double)a1 * 0.00392156862745098,
    (double)a2 * 0.00392156862745098,
    (double)a3 * 0.00392156862745098,
    (long double *)v20,
    (double *)v22,
    (int)v24);
  v19 = 3.402823466385289e38;
  v9 = 0;
  v4 = 1;
  for ( i = (unsigned __int8 *)(a4 + 5); ; i += 3 )
  {
    v12 = (double)*(i - 2);
    v11 = (double)*(i - 1);
    v10 = (double)*i;
    v17 = (double)(int)((__int64)v12 - a1);
    v15 = (double)(int)((__int64)v11 - a2);
    v13 = (double)(int)((__int64)v10 - a3);
    sub_425450(v12, v11, v10, (long double *)v21, (double *)v23, (int)&v25);
    v18 = v17 * v17 * dbl_4AC0F8;
    v16 = v15 * v15 * dbl_4AC100;
    v14 = v13 * v13 * dbl_4AC108;
    v6 = *(double *)v20 - *(double *)v21;
    if ( v6 > 180.0 )
      v6 = v6 - 360.0;
    v7 = (*(double *)v22 - *(double *)v23) * dbl_4AC110 * 180.0
       + dbl_4AC110 * (*(double *)v20 - *(double *)v21) * 180.0
       + (*(double *)v24 - -1.4) * ((double)(int)abs32((__int64)v6) * dbl_4AC110)
       + v14
       + v16
       + v18;
    if ( v7 == 0.0 )
      break;
    if ( v7 < v19 )
    {
      v19 = v7;
      v9 = v4;
    }
    if ( (unsigned int)++v4 >= 0xFF )
      return v9;
  }
  return v4;
}

// 0x4263f0  sub_4263F0
int __cdecl sub_4263F0(int a1, int a2, int a3, int a4)
{
  int v4; // edi
  unsigned __int8 *i; // esi
  double v6; // st7
  double v7; // st7
  int v9; // [esp+4h] [ebp-70h]
  double v10; // [esp+Ch] [ebp-68h]
  double v11; // [esp+14h] [ebp-60h]
  double v12; // [esp+1Ch] [ebp-58h]
  double v13; // [esp+24h] [ebp-50h]
  double v14; // [esp+24h] [ebp-50h]
  double v15; // [esp+2Ch] [ebp-48h]
  double v16; // [esp+2Ch] [ebp-48h]
  double v17; // [esp+34h] [ebp-40h]
  double v18; // [esp+34h] [ebp-40h]
  double v19; // [esp+3Ch] [ebp-38h]
  int v20[2]; // [esp+44h] [ebp-30h] BYREF
  int v21[2]; // [esp+4Ch] [ebp-28h] BYREF
  int v22[2]; // [esp+54h] [ebp-20h] BYREF
  int v23[2]; // [esp+5Ch] [ebp-18h] BYREF
  int v24; // [esp+64h] [ebp-10h] BYREF
  int v25; // [esp+6Ch] [ebp-8h] BYREF

  sub_425450(
    (double)a1 * 0.00392156862745098,
    (double)a2 * 0.00392156862745098,
    (double)a3 * 0.00392156862745098,
    (long double *)v20,
    (double *)v22,
    (int)&v24);
  v19 = 3.402823466385289e38;
  v9 = 0;
  v4 = 1;
  for ( i = (unsigned __int8 *)(a4 + 5); ; i += 3 )
  {
    v12 = (double)*(i - 2);
    v11 = (double)*(i - 1);
    v10 = (double)*i;
    v17 = (double)(int)((__int64)v12 - a1);
    v15 = (double)(int)((__int64)v11 - a2);
    v13 = (double)(int)((__int64)v10 - a3);
    sub_425450(v12, v11, v10, (long double *)v21, (double *)v23, (int)&v25);
    v18 = v17 * v17 * dbl_4AC0F8;
    v16 = v15 * v15 * dbl_4AC100;
    v14 = v13 * v13 * dbl_4AC108;
    v6 = *(double *)v20 - *(double *)v21;
    if ( *(double *)v20 - *(double *)v21 > 180.0 )
      v6 = v6 - 360.0;
    v7 = v14
       - (double)(int)abs32((__int64)v6) * dbl_4AC110 * -2.0
       + (*(double *)v22 - *(double *)v23) * dbl_4AC110 * 180.0
       + v16
       + v18;
    if ( v7 == 0.0 )
      break;
    if ( v7 < v19 )
    {
      v19 = v7;
      v9 = v4;
    }
    if ( (unsigned int)++v4 >= 0xFF )
      return v9;
  }
  return v4;
}

// 0x426620  sub_426620
int __cdecl sub_426620(int a1, int a2, int a3, int a4)
{
  int v4; // edi
  unsigned __int8 *i; // esi
  double v6; // st4
  double v7; // st7
  int v9; // [esp+0h] [ebp-6Ch]
  double v10; // [esp+4h] [ebp-68h]
  double v11; // [esp+Ch] [ebp-60h]
  double v12; // [esp+14h] [ebp-58h]
  double v13; // [esp+1Ch] [ebp-50h]
  double v14; // [esp+24h] [ebp-48h]
  double v15; // [esp+2Ch] [ebp-40h]
  double v16; // [esp+34h] [ebp-38h]
  int v17[2]; // [esp+3Ch] [ebp-30h] BYREF
  int v18[2]; // [esp+44h] [ebp-28h] BYREF
  int v19; // [esp+4Ch] [ebp-20h] BYREF
  double v20; // [esp+54h] [ebp-18h] BYREF
  int v21; // [esp+5Ch] [ebp-10h] BYREF
  double v22; // [esp+64h] [ebp-8h] BYREF

  sub_425450(
    (double)a1 * 0.00392156862745098,
    (double)a2 * 0.00392156862745098,
    (double)a3 * 0.00392156862745098,
    (long double *)v17,
    &v20,
    (int)&v19);
  v14 = 3.402823466385289e38;
  v9 = 0;
  v4 = 1;
  for ( i = (unsigned __int8 *)(a4 + 5); ; i += 3 )
  {
    v13 = (double)*(i - 2);
    v12 = (double)*(i - 1);
    v11 = (double)*i;
    sub_425450(v13, v12, v11, (long double *)v18, &v22, (int)&v21);
    v6 = (double)(int)abs32((__int64)(*(double *)v17 - *(double *)v18));
    if ( v6 > 180.0 )
      v6 = v6 - 360.0;
    v15 = (double)(int)((__int64)v13 - a1);
    v10 = (double)(int)((__int64)v11 - a3);
    v16 = (double)(int)((__int64)v12 - a2);
    v7 = v15 * v15 * dbl_4AC0F8 + v6 * v6 * dbl_4AC110 + v10 * v10 * dbl_4AC108 + v16 * v16 * dbl_4AC100;
    if ( v7 == 0.0 )
      break;
    if ( v7 < v14 )
    {
      v14 = v7;
      v9 = v4;
    }
    if ( (unsigned int)++v4 >= 0xFF )
      return v9;
  }
  return v4;
}

// 0x426820  sub_426820
FILE *__cdecl sub_426820(char *FileName, int a2, void *a3)
{
  int v3; // ebp
  FILE *result; // eax
  FILE *v5; // esi
  char *v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  _BYTE Buffer[2]; // [esp+Ch] [ebp-38h] BYREF
  int v12; // [esp+Eh] [ebp-36h]
  __int16 v13; // [esp+12h] [ebp-32h]
  __int16 v14; // [esp+14h] [ebp-30h]
  int v15; // [esp+16h] [ebp-2Eh]
  int v16; // [esp+1Ah] [ebp-2Ah]
  int v17; // [esp+1Eh] [ebp-26h]
  int v18; // [esp+22h] [ebp-22h]
  __int16 v19; // [esp+26h] [ebp-1Eh]
  __int16 v20; // [esp+28h] [ebp-1Ch]
  int v21; // [esp+2Ah] [ebp-1Ah]
  int v22; // [esp+2Eh] [ebp-16h]
  int v23; // [esp+32h] [ebp-12h]
  int v24; // [esp+36h] [ebp-Eh]
  int v25; // [esp+3Ah] [ebp-Ah]
  int v26; // [esp+3Eh] [ebp-6h]

  v3 = 256;
  qmemcpy(Buffer, "BM", sizeof(Buffer));
  v12 = 66614;
  v13 = 0;
  v14 = 0;
  v15 = 1078;
  v16 = 40;
  v17 = 256;
  v18 = 256;
  v19 = 1;
  v20 = 8;
  v21 = 0;
  v22 = 0x10000;
  v23 = 0;
  v24 = 0;
  v25 = 256;
  v26 = 256;
  result = FsFOpen(FileName, /*Mode*/ aWb);
  v5 = result;
  if ( result != NULL )
  {
    fwrite(Buffer, /*ElementSize*/ 0x36u, /*ElementCount*/ 1u, /*Stream*/ result);
    v6 = (char *)(a2 + 1);
    do
    {
      v7 = v5->_cnt - 1;
      v5->_cnt = v7;
      if ( v7 < 0 )
        _flsbuf(/*Ch*/ (unsigned __int8)v6[1], /*File*/ v5);
      else
        *v5->_ptr++ = v6[1];
      v8 = v5->_cnt - 1;
      v5->_cnt = v8;
      if ( v8 < 0 )
        _flsbuf(/*Ch*/ (unsigned __int8)*v6, /*File*/ v5);
      else
        *v5->_ptr++ = *v6;
      v9 = v5->_cnt - 1;
      v5->_cnt = v9;
      if ( v9 < 0 )
        _flsbuf(/*Ch*/ (unsigned __int8)*(v6 - 1), /*File*/ v5);
      else
        *v5->_ptr++ = *(v6 - 1);
      v10 = v5->_cnt - 1;
      v5->_cnt = v10;
      if ( v10 < 0 )
        _flsbuf(/*Ch*/ 0, /*File*/ v5);
      else
        *v5->_ptr++ = 0;
      v6 += 3;
      --v3;
    }
    while ( v3 != 0 );
    fwrite(/*Buffer*/ a3, /*ElementSize*/ 1u, /*ElementCount*/ 0x10000u, /*Stream*/ v5);
    return (FILE *)fclose(/*Stream*/ v5);
  }
  return result;
}

// 0x426980  sub_426980
FILE *__cdecl sub_426980(char *FileName, int a2, void *a3, int ElementCount)
{
  int v4; // ebp
  FILE *result; // eax
  FILE *v6; // esi
  char *v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  _BYTE Buffer[2]; // [esp+Ch] [ebp-38h] BYREF
  int v13; // [esp+Eh] [ebp-36h]
  __int16 v14; // [esp+12h] [ebp-32h]
  __int16 v15; // [esp+14h] [ebp-30h]
  int v16; // [esp+16h] [ebp-2Eh]
  int v17; // [esp+1Ah] [ebp-2Ah]
  int v18; // [esp+1Eh] [ebp-26h]
  int v19; // [esp+22h] [ebp-22h]
  __int16 v20; // [esp+26h] [ebp-1Eh]
  __int16 v21; // [esp+28h] [ebp-1Ch]
  int v22; // [esp+2Ah] [ebp-1Ah]
  int v23; // [esp+2Eh] [ebp-16h]
  int v24; // [esp+32h] [ebp-12h]
  int v25; // [esp+36h] [ebp-Eh]
  int v26; // [esp+3Ah] [ebp-Ah]
  int v27; // [esp+3Eh] [ebp-6h]

  v4 = 256;
  qmemcpy(Buffer, "BM", sizeof(Buffer));
  v23 = (ElementCount << 8) / 256;
  v13 = v23 + 1078;
  v14 = 0;
  v15 = 0;
  v16 = 1078;
  v17 = 40;
  v18 = 256;
  v19 = ElementCount / 256;
  v20 = 1;
  v21 = 8;
  v22 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 256;
  v27 = 256;
  result = FsFOpen(FileName, /*Mode*/ aWb);
  v6 = result;
  if ( result != NULL )
  {
    fwrite(Buffer, /*ElementSize*/ 0x36u, /*ElementCount*/ 1u, /*Stream*/ result);
    v7 = (char *)(a2 + 1);
    do
    {
      v8 = v6->_cnt - 1;
      v6->_cnt = v8;
      if ( v8 < 0 )
        _flsbuf(/*Ch*/ (unsigned __int8)v7[1], /*File*/ v6);
      else
        *v6->_ptr++ = v7[1];
      v9 = v6->_cnt - 1;
      v6->_cnt = v9;
      if ( v9 < 0 )
        _flsbuf(/*Ch*/ (unsigned __int8)*v7, /*File*/ v6);
      else
        *v6->_ptr++ = *v7;
      v10 = v6->_cnt - 1;
      v6->_cnt = v10;
      if ( v10 < 0 )
        _flsbuf(/*Ch*/ (unsigned __int8)*(v7 - 1), /*File*/ v6);
      else
        *v6->_ptr++ = *(v7 - 1);
      v11 = v6->_cnt - 1;
      v6->_cnt = v11;
      if ( v11 < 0 )
        _flsbuf(/*Ch*/ 0, /*File*/ v6);
      else
        *v6->_ptr++ = 0;
      v7 += 3;
      --v4;
    }
    while ( v4 != 0 );
    fwrite(/*Buffer*/ a3, /*ElementSize*/ 1u, ElementCount, /*Stream*/ v6);
    return (FILE *)fclose(/*Stream*/ v6);
  }
  return result;
}

// 0x426b10  sub_426B10
char *__cdecl sub_426B10(char *ArgList, int a2, double a3, double a4, double a5, char a6)
{
  char *result; // eax
  char *v7; // edi
  int v8; // esi
  unsigned __int8 *v9; // eax
  char *v10; // ebx
  unsigned __int8 *v11; // edi
  double v13; // st7
  char v14; // c0
  float v15; // [esp+Ch] [ebp-3Ch]
  float v16; // [esp+Ch] [ebp-3Ch]
  float v17; // [esp+10h] [ebp-38h]
  float v18; // [esp+10h] [ebp-38h]
  float v19; // [esp+14h] [ebp-34h]
  float v20; // [esp+18h] [ebp-30h]
  float v21; // [esp+1Ch] [ebp-2Ch]
  float v22; // [esp+20h] [ebp-28h]
  int v23; // [esp+24h] [ebp-24h]
  char *v24; // [esp+28h] [ebp-20h]
  long double v25; // [esp+40h] [ebp-8h]
  long double v26; // [esp+40h] [ebp-8h]

  result = (char *)malloc(/*Size*/ 0x10000u);
  v7 = result;
  v24 = result;
  if ( result != NULL )
  {
    ConPrintf(/*Format*/ aBuildingAdding);
    v8 = 0;
    while ( 1 )
    {
      ConPrintf(/*Format*/ "Color %-3i \n", v8);
      v23 = 255;
      v9 = (unsigned __int8 *)(v8 + a2 + 2 * v8);
      v10 = &v7[256 * v8 + 255];
      v11 = (unsigned __int8 *)(a2 + 767);
      while ( 1 )
      {
        v17 = (float)*(v11 - 2);
        v15 = (float)*(v11 - 1);
        v21 = (float)*v11;
        if ( (a6 & 4) != 0 )
        {
          v25 = 1.0 / a5;
          v17 = pow(v17 * 0.00392156862745098, v25) * 255.0;
          v15 = pow(v15 * 0.00392156862745098, v25) * 255.0;
          v9 = (unsigned __int8 *)(v8 + a2 + 2 * v8);
          v21 = pow(v21 * 0.00392156862745098, v25) * 255.0;
        }
        v19 = (float)*v9;
        v20 = (float)v9[1];
        v22 = (float)v9[2];
        if ( (a6 & 8) != 0 )
        {
          v26 = 1.0 / a5;
          v19 = pow(v19 * 0.00392156862745098, v26) * 255.0;
          v20 = pow(v20 * 0.00392156862745098, v26) * 255.0;
          v22 = pow(v22 * 0.00392156862745098, v26) * 255.0;
        }
        if ( (a6 & 1) != 0 )
        {
          v17 = v17 * a5;
          v15 = v15 * a5;
          v21 = v21 * a5;
        }
        if ( (a6 & 2) != 0 )
        {
          v19 = v19 * a5;
          v20 = v20 * a5;
          v22 = v22 * a5;
        }
        v18 = v17 * a3 + v19 * a4;
        v16 = v15 * a3 + v20 * a4;
        v13 = v21 * a3 + v22 * a4;
        if ( v14 != 0 )
          v18 = 0.0;
        if ( v16 < 0.0 )
          v16 = 0.0;
        if ( v13 < 0.0 )
          v13 = 0.0;
        if ( v18 > 255.0 )
          v18 = 255.0;
        if ( v16 > 255.0 )
          v16 = 255.0;
        if ( v13 > 255.0 )
          v13 = 255.0;
        *v10 = off_4AC118((__int64)v18, (__int64)v16, (__int64)v13, a2, 256);
        if ( v8 == 0 )
          *v10 = v23;
        v11 -= 3;
        --v10;
        if ( --v23 < 0 )
          break;
        v9 = (unsigned __int8 *)(v8 + a2 + 2 * v8);
      }
      if ( ++v8 >= 256 )
        break;
      v7 = v24;
    }
    if ( ArgList != NULL )
    {
      ConPrintf(/*Format*/ "\nWriting Adding table : %s\n", ArgList);
      sub_426820(/*FileName*/ ArgList, a2, v24);
    }
    return v24;
  }
  return result;
}

// 0x426f10  sub_426F10
char *__cdecl sub_426F10(char *ArgList, int a2, double a3)
{
  char *result; // eax
  char *v4; // edi
  int v5; // ebp
  int v6; // eax
  char *v7; // esi
  unsigned __int8 *v8; // ebx
  unsigned __int8 *v9; // edi
  int v10; // [esp+4h] [ebp-1Ch]
  char *v11; // [esp+8h] [ebp-18h]
  double v12; // [esp+18h] [ebp-8h]

  result = (char *)malloc(/*Size*/ 0x10000u);
  v4 = result;
  v11 = result;
  if ( result != NULL )
  {
    ConPrintf(/*Format*/ aBuildingAlphaT);
    v5 = 0;
    while ( 1 )
    {
      ConPrintf(/*Format*/ "Color %-3i \n", v5);
      v6 = a2;
      v7 = &v4[256 * v5];
      v10 = 0;
      v9 = (unsigned __int8 *)(a2 + 2);
      while ( 1 )
      {
        v8 = (unsigned __int8 *)(v5 + a2 + 2 * v5);
        v12 = 1.0 - a3;
        *v7 = off_4AC118(
                (__int64)(((double)*v8 * 0.0039215689 * a3 + (double)*(v9 - 2) * 0.0039215689 * v12) * 255.0),
                (__int64)(((double)v8[1] * 0.0039215689 * a3 + (double)*(v9 - 1) * 0.0039215689 * v12) * 255.0),
                (__int64)(((double)v8[2] * 0.0039215689 * a3 + (double)*v9 * 0.0039215689 * v12) * 255.0),
                v6,
                256);
        if ( v5 == 0 )
          *v7 = v10;
        v9 += 3;
        ++v7;
        if ( ++v10 >= 256 )
          break;
        v6 = a2;
      }
      if ( ++v5 >= 256 )
        break;
      v4 = v11;
    }
    if ( ArgList != NULL )
    {
      ConPrintf(/*Format*/ "\nWriting Alpha Blending table : %s\n", ArgList);
      sub_426820(/*FileName*/ ArgList, a2, v11);
    }
    return v11;
  }
  return result;
}

// 0x4270e0  sub_4270E0
_BYTE *__cdecl sub_4270E0(char *ArgList, int a2)
{
  _BYTE *result; // eax
  _BYTE *v3; // ebp
  int v4; // edi
  int v5; // ebx
  unsigned int v6; // esi
  unsigned __int16 v7; // di
  char v8; // al
  int v9; // edx
  char v10; // dl
  int m; // edi
  int v12; // esi
  int *v13; // ecx
  int v14; // eax
  unsigned int i; // [esp+4h] [ebp-Ch]
  int j; // [esp+8h] [ebp-8h]
  int k; // [esp+8h] [ebp-8h]

  result = malloc(/*Size*/ 0x10000u);
  v3 = result;
  if ( result != NULL )
  {
    ConPrintf(/*Format*/ aBuildingRevers);
    for ( i = 0; i < 0x20; ++i )
    {
      v4 = 0;
      for ( j = 0; ; v4 = j )
      {
        v5 = 8 * v4;
        v6 = 0;
        v7 = i | (32 * v4);
        do
        {
          v8 = off_4AC118(8 * i, v5, 8 * v6, a2, 256);
          v9 = v7 | (unsigned __int16)((_WORD)v6++ << 10);
          v3[v9] = v8;
        }
        while ( v6 < 0x20 );
        if ( (unsigned int)++j >= 0x20 )
          break;
      }
    }
    v10 = -1;
    for ( k = 248; k >= 128; k -= 8 )
    {
      for ( m = 0; m < 256; m += 16 )
      {
        ++v10;
        v12 = 0;
        do
        {
          v13 = (int *)&v3[(unsigned __int16)(m + (((_WORD)v12 + (_WORD)k) << 8))];
          LOBYTE(v5) = v10;
          BYTE1(v5) = v10;
          v14 = v5 << 16;
          LOWORD(v14) = v5;
          ++v12;
          *v13 = v14;
          v13[1] = v14;
          v13[2] = v14;
          v13[3] = v14;
        }
        while ( v12 < 8 );
      }
    }
    if ( ArgList != NULL )
    {
      ConPrintf(/*Format*/ "\nWriting Reverse Map table : %s\n", ArgList);
      sub_426820(/*FileName*/ ArgList, a2, v3);
    }
    return v3;
  }
  return result;
}

// 0x427230  sub_427230
int __cdecl sub_427230(int a1, int a2, int a3, void *a4, int a5)
{
  int v5; // edx
  int v6; // esi
  int result; // eax
  int v8; // ecx
  int v9; // esi
  int v10; // ebp
  int v11; // ecx
  int v12; // edi
  int v13; // ebx
  int v14; // edx
  int v15; // esi
  int v16; // edx
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  unsigned __int8 *v20; // ebp
  int v21; // esi
  int v22; // [esp+14h] [ebp-8h]
  int v23; // [esp+18h] [ebp-4h]

  v5 = 8 - a3;
  v6 = 1 << a3;
  result = 1 << (8 - a3);
  dword_4B1D90 = 1 << a3;
  v8 = v6 * v6;
  dword_4B1D54 = 1 << a3;
  v9 = v6 * v6 * v6;
  dword_4B1D18 = v8;
  dword_4B1D24 = result;
  dword_4B1D44 = 1 << (2 * (8 - a3));
  if ( v9 > 0 )
  {
    memset(a4, 0xFFu, 4 * v9);
    result = dword_4B1D24;
  }
  v10 = 0;
  dword_4B1D30 = 0;
  if ( a1 > 0 )
  {
    while ( 1 )
    {
      if ( v5 == 3 )
      {
        dword_4B1D24 = 2;
        dword_4B1D44 = 4;
        v11 = a2 + 2 * v10;
        dword_4B1D74 = *(unsigned __int8 *)(v10 + v11);
        dword_4B1DA8 = *(unsigned __int8 *)(v10 + v11 + 1);
        v12 = dword_4B1D74 >> 3;
        v13 = dword_4B1DA8 >> 3;
        v14 = *(unsigned __int8 *)(v10 + v11 + 2);
        v15 = v14 >> 3;
        v22 = dword_4B1DA8 >> 2;
        v23 = v14 >> 2;
        dword_4B1D28 = (dword_4B1D74 >> 2) - 2 * (dword_4B1D74 >> 3) - 1;
        dword_4B1D38 = (dword_4B1DA8 >> 2) - 2 * (dword_4B1DA8 >> 3) - 1;
        dword_4B1D2C = ((v14 >> 2) - 2 * v15 - 1) * ((v14 >> 2) - 2 * v15 - 1)
                     + dword_4B1D38 * dword_4B1D38
                     + dword_4B1D28 * dword_4B1D28;
        v16 = 2 * (dword_4B1D74 >> 3) - (dword_4B1D74 >> 2);
        v17 = 2 * (dword_4B1DA8 >> 3);
        dword_4B1D74 >>= 3;
        dword_4B1DA8 >>= 3;
        dword_4B1D10 = 4 * v16 + 4;
        dword_4B1D5C = v15;
        dword_4B1D48 = 4 * (v17 - v22) + 4;
        v18 = dword_4B1D54;
        dword_4B1DA0 = 4 * (2 * v15 - v23) + 4;
        v19 = dword_4B1D18;
      }
      else
      {
        v20 = (unsigned __int8 *)(a2 + 2 * v10 + v10);
        v12 = *v20 >> v5;
        dword_4B1D74 = v12;
        v13 = v20[1] >> v5;
        dword_4B1DA8 = v13;
        v15 = v20[2] >> v5;
        dword_4B1D5C = v15;
        dword_4B1D28 = *v20 - v12 * dword_4B1D24 - result / 2;
        dword_4B1D38 = v20[1] - v13 * dword_4B1D24 - result / 2;
        dword_4B1D2C = v20[2] - v15 * dword_4B1D24 - result / 2;
        dword_4B1D2C = dword_4B1D2C * dword_4B1D2C + dword_4B1D38 * dword_4B1D38 + dword_4B1D28 * dword_4B1D28;
        dword_4B1D10 = 2 * (dword_4B1D44 * (v12 + 1) - *v20 * dword_4B1D24);
        dword_4B1D48 = 2 * (dword_4B1D44 * (v13 + 1) - v20[1] * dword_4B1D24);
        v19 = dword_4B1D18;
        v18 = dword_4B1D54;
        dword_4B1DA0 = 2 * (dword_4B1D44 * (v15 + 1) - v20[2] * dword_4B1D24);
      }
      v21 = v12 * v19 + v13 * v18 + v15;
      dword_4B1D20 = (int)a4 + 4 * v21;
      dword_4B1D98 = a5 + 2 * v21;
      sub_427530();
      result = a1;
      v10 = ++dword_4B1D30;
      if ( dword_4B1D30 >= a1 )
        break;
      result = dword_4B1D24;
      v5 = 8 - a3;
    }
  }
  return result;
}

// 0x427530  sub_427530
int sub_427530()
{
  int v0; // edx
  int v1; // ebx
  int v2; // ebp
  int v3; // esi
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // ebp
  int v8; // esi
  int i; // eax
  int v11; // [esp+10h] [ebp-4h]

  v0 = dword_4B1D2C;
  v1 = dword_4B1D10;
  v2 = dword_4B1D20;
  v3 = dword_4B1D74;
  v4 = 2 * dword_4B1D44;
  dword_4B1D94 = dword_4B1D98;
  v11 = 0;
  dword_4B1D28 = dword_4B1D2C;
  dword_4B1D60 = dword_4B1D10;
  dword_4B1D4C = dword_4B1D20;
  v5 = 1;
  if ( dword_4B1D74 < dword_4B1D90 )
  {
    while ( 1 )
    {
      if ( sub_4276E0(v5) != 0 )
      {
        v11 = 1;
      }
      else if ( v11 != 0 )
      {
        v0 = dword_4B1D2C;
        v1 = dword_4B1D10;
        v2 = dword_4B1D20;
        v6 = dword_4B1D18;
        goto LABEL_7;
      }
      v6 = dword_4B1D18;
      ++v3;
      dword_4B1D4C += 4 * dword_4B1D18;
      dword_4B1D94 += dword_4B1D18;
      v7 = dword_4B1D60 + dword_4B1D28;
      dword_4B1D60 += v4;
      v5 = 0;
      dword_4B1D28 = v7;
      if ( v3 >= dword_4B1D90 )
      {
        v0 = dword_4B1D2C;
        v1 = dword_4B1D10;
        v2 = dword_4B1D20;
        goto LABEL_7;
      }
    }
  }
  v6 = dword_4B1D18;
LABEL_7:
  dword_4B1D60 = v1 - v4;
  v8 = dword_4B1D74 - 1;
  dword_4B1D28 = v0 - (v1 - v4);
  dword_4B1D4C = v2 - 4 * v6;
  dword_4B1D94 = dword_4B1D98 - v6;
  for ( i = 1; v8 >= 0; dword_4B1D28 -= dword_4B1D60 )
  {
    if ( sub_4276E0(i) != 0 )
    {
      v11 = 1;
    }
    else if ( v11 != 0 )
    {
      return v11;
    }
    --v8;
    dword_4B1D4C -= 4 * dword_4B1D18;
    dword_4B1D94 -= dword_4B1D18;
    dword_4B1D60 -= v4;
    i = 0;
  }
  return v11;
}

// 0x4276e0  sub_4276E0
int __cdecl sub_4276E0(int a1)
{
  int v1; // edi
  int v2; // ebx
  int v3; // esi
  int v4; // edx
  int v5; // ebp
  int v6; // ecx
  int v7; // eax
  int v8; // ebp
  int v9; // esi
  int i; // eax
  bool v11; // zf
  int v12; // eax
  int v13; // ebp
  int v14; // edx

  v1 = 2 * dword_4B1D44;
  v2 = 0;
  if ( a1 != 0 )
  {
    dword_4B1D1C = dword_4B1DA8;
    dword_4B1D84 = 0;
    dword_4B1D70 = dword_4B1D90 - 1;
    dword_4B1D80 = dword_4B1D48;
  }
  v3 = dword_4B1D1C;
  v4 = dword_4B1D28;
  v5 = dword_4B1D4C;
  dword_4B1DA4 = dword_4B1D94;
  dword_4B1D58 = dword_4B1D94;
  dword_4B1D7C = dword_4B1D80;
  dword_4B1D38 = dword_4B1D28;
  dword_4B1D50 = dword_4B1D28;
  dword_4B1D34 = dword_4B1D4C;
  dword_4B1D3C = dword_4B1D4C;
  v6 = 1;
  if ( dword_4B1D1C <= dword_4B1D70 )
  {
    while ( 1 )
    {
      if ( sub_4279B0(v6) != 0 )
      {
        if ( v2 == 0 )
        {
          if ( v3 > dword_4B1D1C )
          {
            dword_4B1D4C = dword_4B1D3C;
            dword_4B1D1C = v3;
            dword_4B1D94 = dword_4B1D58;
            dword_4B1D28 = dword_4B1D50;
            dword_4B1D80 = dword_4B1D7C;
          }
          v2 = 1;
        }
      }
      else if ( v2 != 0 )
      {
        v4 = dword_4B1D28;
        v5 = dword_4B1D4C;
        v7 = dword_4B1D54;
        goto LABEL_12;
      }
      v7 = dword_4B1D54;
      ++v3;
      dword_4B1D34 += 4 * dword_4B1D54;
      dword_4B1D3C += 4 * dword_4B1D54;
      dword_4B1DA4 += dword_4B1D54;
      dword_4B1D58 += dword_4B1D54;
      v8 = dword_4B1D7C + dword_4B1D38;
      dword_4B1D50 += dword_4B1D7C;
      dword_4B1D7C += v1;
      v6 = 0;
      dword_4B1D38 = v8;
      if ( v3 > dword_4B1D70 )
      {
        v4 = dword_4B1D28;
        v5 = dword_4B1D4C;
        goto LABEL_12;
      }
    }
  }
  v7 = dword_4B1D54;
LABEL_12:
  v9 = dword_4B1D1C - 1;
  dword_4B1D7C = dword_4B1D80 - v1;
  dword_4B1D38 = v4 - (dword_4B1D80 - v1);
  dword_4B1D50 = v4 - (dword_4B1D80 - v1);
  dword_4B1D34 = v5 - 4 * v7;
  dword_4B1D3C = v5 - 4 * v7;
  dword_4B1DA4 = dword_4B1D94 - v7;
  dword_4B1D58 = dword_4B1D94 - v7;
  for ( i = 1; v9 >= dword_4B1D84; dword_4B1D50 = v14 )
  {
    v11 = sub_4279B0(i) == 0;
    v12 = dword_4B1D7C;
    if ( v11 )
    {
      if ( v2 != 0 )
        return v2;
    }
    else if ( v2 == 0 )
    {
      dword_4B1D4C = dword_4B1D3C;
      dword_4B1D1C = v9;
      dword_4B1D94 = dword_4B1D58;
      dword_4B1D28 = dword_4B1D50;
      dword_4B1D80 = dword_4B1D7C;
      v2 = 1;
    }
    --v9;
    dword_4B1D7C -= v1;
    dword_4B1D34 -= 4 * dword_4B1D54;
    dword_4B1D3C -= 4 * dword_4B1D54;
    dword_4B1DA4 -= dword_4B1D54;
    dword_4B1D58 -= dword_4B1D54;
    v13 = dword_4B1D38 - (v12 - v1);
    v14 = dword_4B1D50 - (v12 - v1);
    i = 0;
    dword_4B1D38 = v13;
  }
  return v2;
}

// 0x4279b0  sub_4279B0
int __cdecl sub_4279B0(int a1)
{
  int v1; // ebx
  int v2; // ecx
  unsigned int v3; // edi
  int v4; // edx
  unsigned int *v5; // esi
  _BYTE *v6; // ebp
  int v7; // eax
  unsigned int *v8; // esi
  int v9; // ecx
  _BYTE *v10; // ebp
  int v11; // edx
  unsigned int v12; // edi
  int v13; // eax
  int v15; // [esp+10h] [ebp-8h]
  int v16; // [esp+10h] [ebp-8h]
  char v17; // [esp+14h] [ebp-4h]
  int v18; // [esp+1Ch] [ebp+4h]

  v17 = dword_4B1D30;
  v1 = 2 * dword_4B1D44;
  if ( a1 != 0 )
  {
    dword_4B1D14 = dword_4B1D5C;
    dword_4B1D8C = 0;
    dword_4B1D64 = dword_4B1D90 - 1;
    dword_4B1D6C = dword_4B1DA0;
  }
  v2 = dword_4B1D14;
  v3 = dword_4B1D38;
  v4 = dword_4B1D6C;
  v5 = (unsigned int *)dword_4B1D34;
  v6 = (_BYTE *)dword_4B1DA4;
  v18 = 0;
  v7 = dword_4B1D64;
  v15 = dword_4B1D64;
  if ( dword_4B1D14 <= dword_4B1D64 )
  {
    while ( *v5 <= v3 )
    {
      ++v2;
      ++v5;
      v3 += v4;
      ++v6;
      v4 += v1;
      if ( v2 > dword_4B1D64 )
        goto LABEL_10;
    }
    if ( v2 > dword_4B1D14 )
    {
      dword_4B1D14 = v2;
      dword_4B1D34 = (int)v5;
      dword_4B1DA4 = (int)v6;
      dword_4B1D38 = v3;
      dword_4B1D6C = v4;
    }
    v7 = dword_4B1D64;
    v18 = 1;
  }
LABEL_10:
  if ( v2 <= v7 )
  {
    do
    {
      if ( *v5 <= v3 )
        break;
      *v5 = v3;
      *v6 = v17;
      ++v2;
      ++v5;
      v3 += v4;
      ++v6;
      v4 += v1;
    }
    while ( v2 <= v15 );
  }
  v8 = (unsigned int *)(dword_4B1D34 - 4);
  v16 = dword_4B1D8C;
  v9 = dword_4B1D6C - v1;
  v10 = (_BYTE *)(dword_4B1DA4 - 1);
  v11 = dword_4B1D14 - 1;
  v12 = dword_4B1D38 - (dword_4B1D6C - v1);
  v13 = dword_4B1D8C;
  if ( v18 == 0 )
  {
    if ( v11 < dword_4B1D8C )
      return v18;
    while ( *v8 <= v12 )
    {
      v9 -= v1;
      --v11;
      --v8;
      --v10;
      v12 -= v9;
      if ( v11 < dword_4B1D8C )
        goto LABEL_19;
    }
    v13 = dword_4B1D8C;
    dword_4B1D14 = v11;
    dword_4B1D34 = (int)v8;
    dword_4B1DA4 = (int)v10;
    dword_4B1D38 = v12;
    dword_4B1D6C = v9;
    v18 = 1;
  }
LABEL_19:
  if ( v11 >= v13 )
  {
    do
    {
      if ( *v8 <= v12 )
        break;
      *v8 = v12;
      *v10 = v17;
      v9 -= v1;
      --v11;
      --v8;
      --v10;
      v12 -= v9;
    }
    while ( v11 >= v16 );
  }
  return v18;
}

// 0x427b50  sub_427B50
int __cdecl sub_427B50(_WORD *a1, int a2, unsigned int a3)
{
  _WORD *v3; // ecx
  unsigned int v4; // eax
  int v5; // edx
  int v6; // ebp
  int v7; // ecx
  unsigned int v8; // edi
  unsigned int v9; // eax
  unsigned int *v10; // edx
  unsigned __int8 v11; // al
  unsigned __int8 v12; // cl
  int v13; // ebx
  unsigned int v14; // ebp
  unsigned int v15; // edx
  int *v16; // ecx
  int v17; // edx
  int v18; // eax
  unsigned int v19; // esi
  unsigned int v20; // edx
  int v22; // [esp+10h] [ebp-58h]
  char *v23; // [esp+14h] [ebp-54h]
  char *v24; // [esp+1Ch] [ebp-4Ch]
  _DWORD v25[6]; // [esp+20h] [ebp-48h] BYREF
  _DWORD v26[6]; // [esp+38h] [ebp-30h] BYREF
  _DWORD v27[6]; // [esp+50h] [ebp-18h] BYREF

  v3 = a1;
  v4 = 0;
  v25[2] = 0;
  v5 = 0;
  do
  {
    if ( *v3 != 0 )
    {
      *((_DWORD *)off_4AC11C + v5++) = v4;
      v25[2] += (unsigned __int16)*v3;
    }
    ++v4;
    ++v3;
  }
  while ( v4 <= 0x7FFF );
  v25[0] = 0;
  v25[1] = v5 - 1;
  v25[3] = 0;
  sub_427DC0(v25);
  v6 = 1;
  v22 = 1;
  qmemcpy(unk_4B4340, v25, sizeof(unk_4B4340));
  if ( a3 > 1 )
  {
    v23 = (char *)&unk_4B4358;
    do
    {
      v7 = -1;
      v8 = 255;
      v9 = 0;
      v10 = (unsigned int *)&unk_4B434C;
      do
      {
        if ( *(v10 - 3) != *(v10 - 2) && *v10 < v8 )
        {
          v8 = *v10;
          v7 = v9;
        }
        ++v9;
        v10 += 6;
      }
      while ( v9 <= v6 - 1 );
      if ( v7 == -1 )
        break;
      v24 = (char *)&unk_4B4340 + 24 * v7;
      qmemcpy(v25, v24, sizeof(v25));
      v11 = BYTE1(v25[4]) - LOBYTE(v25[4]);
      v12 = HIBYTE(v25[4]) - BYTE2(v25[4]);
      if ( (unsigned __int8)(HIBYTE(v25[4]) - BYTE2(v25[4])) <= (unsigned __int8)(BYTE1(v25[4]) - LOBYTE(v25[4])) )
      {
        dword_4B4300 = 0;
        if ( v12 < v11 )
          continue;
      }
      dword_4B4300 = 1;
      if ( v11 == 0 && v12 == 0 )
        dword_4B4300 = 2;
      qsort(
        /*Base*/ (char *)off_4AC11C + 4 * v25[0],
        /*NumOfElements*/ v25[1] - v25[0] + 1,
        /*SizeOfElements*/ 4u,
        /*CompareFunction*/ CompareFunction);
      v13 = v25[0];
      v14 = 0;
      if ( v25[0] <= (unsigned int)(v25[1] - 1) )
      {
        v15 = v25[2] >> 1;
        v16 = (int *)((char *)off_4AC11C + 4 * v25[0]);
        while ( v14 < v15 )
        {
          v17 = *v16++;
          v14 += (unsigned __int16)a1[v17];
          if ( ++v13 > (unsigned int)(v25[1] - 1) )
            break;
          v15 = v25[2] >> 1;
        }
      }
      qmemcpy(v26, v25, sizeof(v26));
      v26[1] = v13 - 1;
      v26[2] = v14;
      v26[3] = v25[3] + 1;
      sub_427DC0(v26);
      v18 = v25[2];
      qmemcpy(v24, v26, 24);
      qmemcpy(v27, v25, sizeof(v27));
      v27[0] = v13;
      v27[2] = v18 - v14;
      v27[3] = v25[3] + 1;
      sub_427DC0(v27);
      qmemcpy(v23, v27, 24);
      v19 = v22 + 1;
      v23 += 24;
      v20 = ++v22 % 0xAu;
      if ( v20 == 0 )
        fprintf(/*Stream*/ &Stream, /*Format*/ ".");
      v6 = v22;
    }
    while ( v19 < a3 );
  }
  sub_427E50(a1, a2, v6);
  return v6;
}

// 0x427dc0  sub_427DC0
unsigned int *__cdecl sub_427DC0(unsigned int *a1)
{
  unsigned int *result; // eax
  unsigned int v2; // esi
  unsigned int v3; // edi
  bool v4; // cc
  unsigned int v5; // edx
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // cl
  unsigned __int8 v8; // cl

  result = a1;
  v2 = *a1;
  v3 = a1[1];
  v4 = *a1 <= v3;
  *((_BYTE *)a1 + 16) = -1;
  *((_BYTE *)a1 + 17) = 0;
  *((_BYTE *)a1 + 18) = -1;
  *((_BYTE *)a1 + 19) = 0;
  *((_BYTE *)a1 + 20) = -1;
  *((_BYTE *)a1 + 21) = 0;
  if ( v4 )
  {
    do
    {
      v5 = *((_DWORD *)off_4AC11C + v2);
      v6 = 8 * (v5 >> 10);
      if ( v6 > *((_BYTE *)a1 + 17) )
        *((_BYTE *)a1 + 17) = v6;
      if ( v6 < *((_BYTE *)a1 + 16) )
        *((_BYTE *)a1 + 16) = v6;
      v7 = 8 * (v5 >> 5);
      if ( v7 > *((_BYTE *)a1 + 19) )
        *((_BYTE *)a1 + 19) = v7;
      if ( v7 < *((_BYTE *)a1 + 18) )
        *((_BYTE *)a1 + 18) = v7;
      v8 = 8 * v5;
      if ( (unsigned __int8)(8 * v5) > *((_BYTE *)a1 + 21) )
        *((_BYTE *)a1 + 21) = v8;
      if ( v8 < *((_BYTE *)a1 + 20) )
        *((_BYTE *)a1 + 20) = v8;
      ++v2;
    }
    while ( v2 <= v3 );
  }
  return result;
}

// 0x427e50  sub_427E50
unsigned int __cdecl sub_427E50(int a1, int a2, int a3)
{
  _BYTE *v3; // ebp
  unsigned int v4; // ebx
  double v5; // st7
  double v6; // st6
  double v7; // st5
  unsigned int *v8; // ecx
  int v9; // esi
  unsigned int v10; // eax
  double v11; // st4
  unsigned int v12; // ebx
  unsigned int v13; // edx
  void *v14; // ebp
  int v15; // edi
  unsigned __int8 *v16; // esi
  unsigned int v17; // edx
  unsigned int v18; // ecx
  double v19; // rt1
  double v20; // st5
  double v21; // st6
  bool v22; // cc
  unsigned int result; // eax
  char *v24; // [esp+10h] [ebp-48h]
  float v25; // [esp+10h] [ebp-48h]
  float v26; // [esp+14h] [ebp-44h]
  int v27; // [esp+18h] [ebp-40h]
  unsigned int v28; // [esp+1Ch] [ebp-3Ch]
  unsigned __int8 *v29; // [esp+2Ch] [ebp-2Ch]
  float v30; // [esp+30h] [ebp-28h]
  float v31; // [esp+34h] [ebp-24h]
  float v32; // [esp+38h] [ebp-20h]
  _DWORD v33[6]; // [esp+40h] [ebp-18h] BYREF
  float v34; // [esp+60h] [ebp+8h]
  float v35; // [esp+60h] [ebp+8h]
  char *v36; // [esp+64h] [ebp+Ch]

  v3 = (_BYTE *)(a2 + 2);
  v4 = 0;
  v24 = (char *)&unk_4B4340;
  v29 = (unsigned __int8 *)(a2 + 2);
  do
  {
    v5 = 0.0;
    v6 = 0.0;
    v7 = 0.0;
    qmemcpy(v33, v24, sizeof(v33));
    if ( v33[0] <= v33[1] )
    {
      v8 = (unsigned int *)((char *)off_4AC11C + 4 * v33[0]);
      v9 = v33[1] - v33[0] + 1;
      do
      {
        v10 = *v8++;
        v11 = (double)*(unsigned __int16 *)(a1 + 2 * v10);
        v7 = v7 + (double)(unsigned __int8)(8 * (v10 >> 10)) * v11;
        --v9;
        v6 = v6 + (double)(unsigned __int8)(8 * (v10 >> 5)) * v11;
        v5 = v5 + (double)(unsigned __int8)(8 * v10) * v11;
      }
      while ( v9 != 0 );
    }
    v34 = (float)v33[2];
    *(v3 - 2) = (__int64)(v7 / v34);
    *(v3 - 1) = (__int64)(v6 / v34);
    *v3 = (__int64)(v5 / v34);
    ++v4;
    v3 += 3;
    v24 += 24;
  }
  while ( v4 <= a3 - 1 );
  v12 = 0;
  v13 = a3 - 1;
  v36 = (char *)&unk_4B4340;
  v14 = &unk_4B4340;
  v27 = 0;
  v28 = v13;
  do
  {
    qmemcpy(v33, v36, sizeof(v33));
    v15 = v33[0];
    if ( v33[0] <= v33[1] )
    {
      do
      {
        v16 = v29;
        v26 = 3.4028235e38;
        v17 = *((_DWORD *)off_4AC11C + v15);
        v18 = 0;
        while ( 1 )
        {
          v30 = (float)(unsigned __int8)(8 * (v17 >> 10));
          v19 = (double)*(v16 - 2) - v30;
          v35 = v19;
          v31 = (float)(unsigned __int8)(8 * (*((_DWORD *)off_4AC11C + v15) >> 5));
          v20 = (double)*(v16 - 1) - v31;
          v25 = v20;
          v32 = (float)(unsigned __int8)(8 * v17);
          v21 = v19 * v35 + v20 * v25 + ((double)*v16 - v32) * ((double)*v16 - v32);
          if ( v21 == 0.0 )
            break;
          if ( v21 < v26 )
          {
            v26 = v21;
            LOWORD(v14) = v18;
          }
          ++v18;
          v16 += 3;
          if ( v18 > v28 )
            goto LABEL_15;
        }
        LOWORD(v14) = v18;
LABEL_15:
        v22 = (unsigned int)++v15 <= v33[1];
        *(_WORD *)(a1 + 2 * v17) = (_WORD)v14;
      }
      while ( v22 );
      v12 = v27;
    }
    if ( v12 % 0xA == 0 )
      fprintf(/*Stream*/ &Stream, /*Format*/ ".");
    result = v28;
    v27 = ++v12;
    v36 += 24;
  }
  while ( v12 <= v28 );
  return result;
}

// 0x428110  CompareFunction
int __cdecl CompareFunction(unsigned int *a1, unsigned int *a2)
{
  unsigned int v2; // edx
  unsigned int v3; // eax
  char v4; // al
  unsigned int v5; // eax

  v2 = *a1;
  v3 = *a2;
  switch ( dword_4B4300 )
  {
    case 0:
      LOBYTE(a1) = 8 * (v2 >> 10);
      v5 = v3 >> 10;
      goto LABEL_7;
    case 1:
      LOBYTE(a1) = 8 * (v2 >> 5);
      v5 = v3 >> 5;
LABEL_7:
      v4 = 8 * v5;
      goto LABEL_8;
    case 2:
      v4 = 8 * v3;
      LOBYTE(a1) = v4;
LABEL_8:
      LOBYTE(a2) = v4;
      break;
    default:
      break;
  }
  return (unsigned __int8)a1 - (unsigned __int8)a2;
}

// 0x428170  sub_428170
int __cdecl sub_428170(_WORD *a1, int a2, unsigned int a3)
{
  unsigned int v3; // ebp
  unsigned int v4; // ebx
  unsigned int v5; // eax
  _WORD *v6; // esi
  _DWORD *v7; // eax
  int v8; // eax
  int i; // eax
  int v10; // ecx
  _WORD *v11; // esi
  _DWORD *v12; // esi
  int j; // edi
  unsigned __int16 v14; // si
  int v15; // edi
  _BYTE *v16; // ecx
  _BYTE *v17; // eax
  char v18; // dl
  int v19; // esi
  _WORD *v20; // edi
  __int16 v21; // ax
  char v23; // [esp+10h] [ebp-31Ch] BYREF
  char v24; // [esp+11h] [ebp-31Bh]
  char v25; // [esp+12h] [ebp-31Ah]
  unsigned int v26; // [esp+18h] [ebp-314h]
  char ArgList[4]; // [esp+1Ch] [ebp-310h] BYREF
  int v28; // [esp+20h] [ebp-30Ch] BYREF
  unsigned int v29; // [esp+24h] [ebp-308h]
  int v30; // [esp+28h] [ebp-304h]
  char v31; // [esp+2Ch] [ebp-300h] BYREF
  _BYTE v32[767]; // [esp+2Dh] [ebp-2FFh] BYREF

  v3 = 0;
  v4 = 0;
  v29 = 0;
  v26 = 0;
  v5 = 0;
  v6 = a1;
  do
  {
    if ( *v6 != 0 )
    {
      if ( v4 == 0 && v5 != 0 )
      {
        v26 = v5;
        v4 = v5;
      }
      v3 = v5;
    }
    ++v5;
    ++v6;
  }
  while ( v5 < 0x8000 );
  v29 = v3;
  v7 = malloc(/*Size*/ 0x44u);
  if ( v7 == NULL )
  {
    ConPrintf(/*Format*/ "Error allocating %ld bytes in getMem\n", 68);
    exit(/*Code*/ -1);
  }
  dword_4B1D68 = (int)v7;
  *v7 = 0;
  *(_DWORD *)(dword_4B1D68 + 4) = (_BYTE)dword_4AC128 == 0;
  v8 = dword_4B1D68;
  if ( *(_DWORD *)(dword_4B1D68 + 4) != 0 )
  {
    ++dword_4B1DAC;
  }
  else
  {
    *(_DWORD *)(dword_4B1D68 + 64) = dword_4B4320;
    dword_4B4320 = v8;
    v8 = dword_4B1D68;
  }
  *(_DWORD *)(v8 + 12) = 0;
  *(_BYTE *)(dword_4B1D68 + 8) = 0;
  *(_DWORD *)(dword_4B1D68 + 12) = 0;
  *(_DWORD *)(dword_4B1D68 + 24) = 0;
  *(_DWORD *)(dword_4B1D68 + 20) = 0;
  *(_DWORD *)(dword_4B1D68 + 16) = 0;
  for ( i = 32; i < 64; *(_DWORD *)(dword_4B1D68 + i - 4) = 0 )
    i += 4;
  v10 = dword_4B1D68;
  v28 = dword_4B1D68;
  if ( v4 <= v3 )
  {
    v11 = &a1[v4];
    do
    {
      if ( *v11 != 0 )
      {
        v23 = (v4 >> 10) & 0x1F;
        v24 = (v4 >> 5) & 0x1F;
        v25 = v4 & 0x1F;
        sub_428490(&v28, &v23, 0);
        while ( dword_4B1DAC > a3 )
          sub_428640();
      }
      ConPrintf(/*Format*/ asc_4AC2D8);
      ++v4;
      ++v11;
    }
    while ( v4 <= v3 );
    v10 = v28;
    v4 = v26;
  }
  *(_DWORD *)ArgList = 0;
  if ( *(_DWORD *)(v10 + 4) != 0 )
  {
    v31 = *(_DWORD *)(v10 + 16) / *(_DWORD *)(v10 + 12);
    v32[0] = *(_DWORD *)(v10 + 20) / *(_DWORD *)(v10 + 12);
    v32[1] = *(_DWORD *)(v10 + 24) / *(_DWORD *)(v10 + 12);
    *(_BYTE *)(v10 + 8) = 0;
    ++*(_DWORD *)ArgList;
  }
  else
  {
    v12 = (_DWORD *)(v10 + 32);
    for ( j = 8; j != 0; --j )
    {
      if ( *v12 != 0 )
        sub_428740(*v12, &v31, ArgList);
      ++v12;
    }
    v4 = v26;
  }
  v14 = *(_WORD *)ArgList;
  ConPrintf(/*Format*/ "%i", *(_DWORD *)ArgList);
  v15 = v14;
  v30 = v14;
  if ( v14 != 0 )
  {
    v16 = v32;
    v17 = (_BYTE *)(a2 + 2);
    do
    {
      v18 = *(v16 - 1);
      v16 += 3;
      *(v17 - 2) = 8 * v18;
      *(v17 - 1) = 8 * *(v16 - 3);
      *v17 = 8 * v32[(_DWORD)v17 - 1 - a2];
      v17 += 3;
      --v15;
    }
    while ( v15 != 0 );
    v4 = v26;
  }
  if ( v4 <= v3 )
  {
    v19 = v28;
    v20 = &a1[v4];
    do
    {
      v23 = (v4 >> 10) & 0x1F;
      v24 = (v4 >> 5) & 0x1F;
      v25 = v4 & 0x1F;
      if ( v19 != 0 )
      {
        if ( *(_DWORD *)(v19 + 4) != 0 )
        {
          v21 = *(unsigned __int8 *)(v19 + 8);
        }
        else
        {
          v21 = sub_4287D0(
                  *(_DWORD *)(v19
                            + 4
                            * (((unsigned __int8)(byte_4AC125[-*(_DWORD *)v19] & v25) >> (5 - *(_BYTE *)v19))
                             | (2
                              * (((unsigned __int8)(byte_4AC125[-*(_DWORD *)v19] & v24) >> (5 - *(_BYTE *)v19))
                               | (2 * ((unsigned __int8)(byte_4AC125[-*(_DWORD *)v19] & v23) >> (5 - *(_BYTE *)v19))))))
                            + 32),
                  &v23);
          v19 = v28;
          v3 = v29;
        }
      }
      else
      {
        v21 = 0;
      }
      *v20 = v21;
      ++v4;
      ++v20;
    }
    while ( v4 <= v3 );
  }
  return v30;
}

// 0x428490  sub_428490
int __cdecl sub_428490(int a1, unsigned __int8 *a2, int a3)
{
  int v3; // ebx
  _DWORD *v5; // eax
  int v6; // eax
  int j; // eax
  int result; // eax
  char *v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]
  int *i; // [esp+24h] [ebp+Ch]

  v3 = a3;
  v10 = 5 - a3;
  v9 = &byte_4AC125[-a3];
  for ( i = &dword_4B4320[a3]; ; ++i )
  {
    if ( *(_DWORD *)a1 == 0 )
    {
      v5 = malloc(/*Size*/ 0x44u);
      if ( v5 == NULL )
      {
        ConPrintf(/*Format*/ "Error allocating %ld bytes in getMem\n", 68);
        exit(/*Code*/ -1);
      }
      dword_4B1D68 = (int)v5;
      *v5 = v3;
      *(_DWORD *)(dword_4B1D68 + 4) = v3 == (unsigned __int8)dword_4AC128;
      v6 = dword_4B1D68;
      if ( *(_DWORD *)(dword_4B1D68 + 4) != 0 )
      {
        ++dword_4B1DAC;
      }
      else
      {
        *(_DWORD *)(dword_4B1D68 + 64) = *i;
        *i = v6;
        v6 = dword_4B1D68;
      }
      *(_DWORD *)(v6 + 12) = 0;
      *(_BYTE *)(dword_4B1D68 + 8) = 0;
      *(_DWORD *)(dword_4B1D68 + 12) = 0;
      *(_DWORD *)(dword_4B1D68 + 24) = 0;
      *(_DWORD *)(dword_4B1D68 + 20) = 0;
      *(_DWORD *)(dword_4B1D68 + 16) = 0;
      for ( j = 32; j < 64; *(_DWORD *)(dword_4B1D68 + j - 4) = 0 )
        j += 4;
      *(_DWORD *)a1 = dword_4B1D68;
    }
    if ( *(_DWORD *)(*(_DWORD *)a1 + 4) != 0 )
      break;
    ++v3;
    a1 = *(_DWORD *)a1
       + 4
       * (((unsigned __int8)(*v9 & a2[2]) >> v10)
        | (2 * (((unsigned __int8)(*v9 & a2[1]) >> v10) | (2 * ((unsigned __int8)(*v9 & *a2) >> v10)))))
       + 32;
    --v9;
    --v10;
  }
  ++*(_DWORD *)(*(_DWORD *)a1 + 12);
  *(_DWORD *)(*(_DWORD *)a1 + 16) += *a2;
  *(_DWORD *)(*(_DWORD *)a1 + 20) += a2[1];
  result = a2[2];
  *(_DWORD *)(*(_DWORD *)a1 + 24) += result;
  return result;
}

// 0x428640  sub_428640
int sub_428640()
{
  unsigned __int8 v0; // al
  int v1; // ebp
  int v2; // ebx
  int v3; // ecx
  _DWORD *v4; // esi
  void **v5; // edi
  _DWORD *v6; // eax
  int result; // eax
  unsigned __int8 i; // [esp+10h] [ebp-Ch]
  int v9; // [esp+14h] [ebp-8h]
  int v10; // [esp+18h] [ebp-4h]

  v0 = dword_4AC128;
  v1 = 0;
  v2 = 0;
  v3 = 0;
  for ( i = 0; dword_4B431C[(unsigned __int8)dword_4AC128] == 0; v0 = dword_4AC128 )
    LOBYTE(dword_4AC128) = dword_4AC128 - 1;
  v9 = 8;
  v4 = (_DWORD *)dword_4B431C[v0];
  v5 = (void **)(v4 + 8);
  dword_4B431C[v0] = v4[16];
  do
  {
    v6 = *v5;
    if ( *v5 != NULL )
    {
      ++i;
      v1 += v6[4];
      v2 += v6[5];
      v10 = v6[6] + v3;
      v4[3] += v6[3];
      free(/*Block*/ *v5);
      v3 = v10;
    }
    ++v5;
    --v9;
  }
  while ( v9 != 0 );
  v4[1] = 1;
  v4[4] = v1;
  v4[5] = v2;
  v4[6] = v3;
  result = 1 - i;
  dword_4B1DAC += result;
  return result;
}

// 0x428740  sub_428740
int __cdecl sub_428740(int a1, int a2, int *a3)
{
  int result; // eax
  int *v4; // esi
  int i; // edi

  if ( *(_DWORD *)(a1 + 4) != 0 )
  {
    *(_BYTE *)(*a3 + a2 + 2 * *a3) = *(_DWORD *)(a1 + 16) / *(_DWORD *)(a1 + 12);
    *(_BYTE *)(*a3 + a2 + 2 * *a3 + 1) = *(_DWORD *)(a1 + 20) / *(_DWORD *)(a1 + 12);
    *(_BYTE *)(*a3 + a2 + 2 * *a3 + 2) = *(_DWORD *)(a1 + 24) / *(_DWORD *)(a1 + 12);
    *(_BYTE *)(a1 + 8) = *(_BYTE *)a3;
    result = *a3 + 1;
    *a3 = result;
  }
  else
  {
    v4 = (int *)(a1 + 32);
    for ( i = 8; i != 0; --i )
    {
      result = *v4;
      if ( *v4 != 0 )
        result = sub_428740(result, a2, a3);
      ++v4;
    }
  }
  return result;
}

// 0x4287d0  sub_4287D0
int __cdecl sub_4287D0(int a1, _BYTE *a2)
{
  int v2; // edx

  v2 = a1;
  if ( a1 == 0 )
    return 0;
  while ( *(_DWORD *)(v2 + 4) == 0 )
  {
    v2 = *(_DWORD *)(v2
                   + 4
                   * (((unsigned __int8)(byte_4AC125[-*(_DWORD *)v2] & a2[2]) >> (5 - *(_BYTE *)v2))
                    | (2
                     * (((unsigned __int8)(byte_4AC125[-*(_DWORD *)v2] & a2[1]) >> (5 - *(_BYTE *)v2))
                      | (2 * ((unsigned __int8)(byte_4AC125[-*(_DWORD *)v2] & *a2) >> (5 - *(_BYTE *)v2))))))
                   + 32);
    if ( v2 == 0 )
      return 0;
  }
  return *(unsigned __int8 *)(v2 + 8);
}

// 0x428840  sub_428840
int __cdecl sub_428840(int a1, int a2, int a3)
{
  unsigned __int16 *v3; // ecx
  int v4; // eax
  unsigned __int16 v5; // dx
  int v7; // eax
  int v8; // ebp
  char *v9; // ecx
  int *v10; // ebx
  unsigned int v11; // esi
  int v12; // edx
  _BYTE *v13; // ecx
  int v14; // esi
  char *v15; // ecx
  _BYTE *v16; // eax
  int v17; // [esp+10h] [ebp-32Ch] BYREF
  int v18; // [esp+14h] [ebp-328h] BYREF
  int v19; // [esp+18h] [ebp-324h] BYREF
  int v20; // [esp+1Ch] [ebp-320h] BYREF
  int v21; // [esp+20h] [ebp-31Ch] BYREF
  int v22; // [esp+24h] [ebp-318h] BYREF
  int v23; // [esp+28h] [ebp-314h] BYREF
  int v24; // [esp+2Ch] [ebp-310h] BYREF
  int v25; // [esp+30h] [ebp-30Ch] BYREF
  int v26; // [esp+34h] [ebp-308h] BYREF
  int v27; // [esp+38h] [ebp-304h] BYREF
  char v28; // [esp+3Ch] [ebp-300h] BYREF
  char v29; // [esp+3Dh] [ebp-2FFh] BYREF

  v3 = (unsigned __int16 *)a1;
  v4 = 0;
  dword_4B1D88 = NULL;
  dword_4B1D78 = NULL;
  do
  {
    v5 = *v3++;
    *(_DWORD *)((char *)off_4AC12C + v4) = v5;
    v4 += 4;
  }
  while ( v4 < 0x20000 );
  dword_4B1D88 = malloc(/*Size*/ 4 * a3 + 4);
  if ( dword_4B1D88 == NULL )
    return 1;
  dword_4B1D78 = malloc(/*Size*/ 48 * a3);
  if ( dword_4B1D78 == NULL )
    return 1;
  sub_428B70(0, 0, 0, 31, 31, 31, &v20, &v17, &v18, &v21, &v19, &v22);
  sub_428E90(v20, v17, v18, v21, v19, v22, &v23, &v25, &v27, &v24, &v26);
  *((_DWORD *)dword_4B1D78 + 1) = v23;
  *(_DWORD *)dword_4B1D78 = 1;
  *((_DWORD *)dword_4B1D78 + 2) = v25;
  *((_DWORD *)dword_4B1D78 + 3) = v27;
  *((_DWORD *)dword_4B1D78 + 4) = v24;
  *((_DWORD *)dword_4B1D78 + 5) = v26;
  *((_DWORD *)dword_4B1D78 + 6) = v20;
  *((_DWORD *)dword_4B1D78 + 7) = v17;
  *((_DWORD *)dword_4B1D78 + 8) = v18;
  *((_DWORD *)dword_4B1D78 + 9) = v21;
  *((_DWORD *)dword_4B1D78 + 10) = v19;
  *((_DWORD *)dword_4B1D78 + 11) = v22;
  dword_4B1D9C = 1;
  dword_4B1D40 = 0;
  if ( v21 + v19 + v22 - v18 - v20 != v17 )
  {
    *((_DWORD *)dword_4B1D88 + 1) = dword_4B1D78;
    dword_4B1D40 = 1;
  }
  ConPrintf(/*Format*/ asc_45F284);
  while ( dword_4B1D9C < a3 )
  {
    if ( dword_4B1D40 != 0 )
      v7 = *((_DWORD *)dword_4B1D88 + 1);
    else
      v7 = 0;
    if ( v7 == 0 )
      break;
    sub_429000(v7);
    ConPrintf(/*Format*/ asc_4AC2D8);
  }
  ConPrintf(/*Format*/ asc_45F284);
  v8 = dword_4B1D9C;
  v9 = &v28;
  if ( dword_4B1D9C > 0 )
  {
    v10 = (int *)((char *)dword_4B1D78 + 12);
    do
    {
      v11 = *(v10 - 2);
      if ( v11 == 0 )
        v11 = 1;
      v12 = *v10;
      v10 += 12;
      v13 = v9 + 1;
      *(v13++ - 1) = ((v11 >> 1) + 8 * v12) / v11;
      *(v13 - 1) = ((v11 >> 1) + 8 * *(v10 - 11)) / v11;
      v9 = v13 + 1;
      --v8;
      *(v9 - 1) = ((v11 >> 1) + 8 * *(v10 - 10)) / v11;
    }
    while ( v8 != 0 );
    v8 = dword_4B1D9C;
  }
  v14 = 0;
  if ( v8 > 0 )
  {
    v15 = &v29;
    v16 = (_BYTE *)(a2 + 2);
    do
    {
      ++v14;
      *(v16 - 2) = *(v15 - 1);
      *(v16 - 1) = *v15;
      *v16 = v16[(_DWORD)(&v28 - a2)];
      v15 += 3;
      v16 += 3;
    }
    while ( v14 < dword_4B1D9C );
  }
  free(/*Block*/ dword_4B1D88);
  free(/*Block*/ dword_4B1D78);
  sub_427230(dword_4B1D9C, (int)&v28, 5, &unk_4B5D40, a1);
  return v8;
}

// 0x428b70  sub_428B70
int __cdecl sub_428B70(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11,
        _DWORD *a12)
{
  int v12; // eax
  int v13; // ebp
  char *v15; // ebx
  int v16; // ecx
  int *v17; // edx
  int v18; // esi
  int v19; // eax
  int *v20; // ecx
  int v21; // ebp
  int *v22; // edx
  int v23; // esi
  int v24; // eax
  int *v25; // ecx
  int v26; // ebx
  _DWORD *v27; // ebx
  _DWORD *v28; // edx
  int v29; // esi
  int v30; // eax
  _DWORD *v31; // ecx
  char *v32; // ebx
  int v33; // esi
  int *v34; // edx
  int *v35; // ecx
  int v36; // eax
  int v37; // ebp
  int *v38; // ebx
  int *v39; // edx
  int v40; // esi
  int *v41; // ecx
  int v42; // eax
  int v43; // ebp
  int result; // eax
  char *v45; // edx
  int v46; // esi
  char *v47; // ecx
  int v48; // [esp+10h] [ebp-8h]
  int v49; // [esp+10h] [ebp-8h]
  char *v50; // [esp+14h] [ebp-4h]
  char *v51; // [esp+14h] [ebp-4h]
  char *v52; // [esp+20h] [ebp+8h]
  int v53; // [esp+30h] [ebp+18h]
  int v54; // [esp+30h] [ebp+18h]
  int v55; // [esp+30h] [ebp+18h]
  int v56; // [esp+30h] [ebp+18h]
  char *v57; // [esp+34h] [ebp+1Ch]

  v12 = a1;
  v13 = a2;
  v48 = a1;
  v15 = (char *)off_4AC12C + 4096 * a1 + 128 * a2 + 4 * a3;
  v16 = a4;
  v50 = v15;
  if ( a1 <= a4 )
  {
    while ( 1 )
    {
      v17 = (int *)v15;
      v18 = v13;
      if ( v13 <= a5 )
        break;
LABEL_8:
      v15 += 4096;
      if ( ++v48 > a4 )
        goto LABEL_11;
    }
    while ( 1 )
    {
      v19 = a3;
      v20 = v17;
      if ( a3 <= a6 )
        break;
LABEL_6:
      v17 += 32;
      if ( ++v18 > a5 )
      {
        v13 = a2;
        v12 = a1;
        goto LABEL_8;
      }
    }
    while ( 1 )
    {
      v21 = *v20++;
      if ( v21 != 0 )
        break;
      if ( ++v19 > a6 )
        goto LABEL_6;
    }
    v13 = a2;
    *a7 = v48;
    v12 = a1;
LABEL_11:
    v16 = a4;
  }
  v22 = (int *)v50;
  v57 = v50;
  v53 = v13;
  if ( v13 <= a5 )
  {
    while ( 1 )
    {
      v23 = v12;
      if ( v12 <= v16 )
        break;
LABEL_19:
      v22 = (int *)(v57 + 128);
      v57 += 128;
      if ( ++v53 > a5 )
        goto LABEL_22;
    }
    while ( 1 )
    {
      v24 = a3;
      v25 = v22;
      if ( a3 <= a6 )
        break;
LABEL_17:
      v22 += 1024;
      if ( ++v23 > a4 )
      {
        v12 = a1;
        v16 = a4;
        goto LABEL_19;
      }
    }
    while ( 1 )
    {
      v26 = *v25++;
      if ( v26 != 0 )
        break;
      if ( ++v24 > a6 )
        goto LABEL_17;
    }
    v16 = a4;
    *a8 = v53;
    v12 = a1;
  }
LABEL_22:
  v27 = v50;
  v54 = a3;
  if ( a3 <= a6 )
  {
    while ( 1 )
    {
      v28 = v27;
      v29 = v12;
      if ( v12 <= v16 )
        break;
LABEL_29:
      ++v27;
      if ( ++v54 > a6 )
        goto LABEL_32;
    }
    while ( 1 )
    {
      v30 = v13;
      v31 = v28;
      if ( a2 <= a5 )
        break;
LABEL_27:
      v13 = a2;
      v28 += 1024;
      if ( ++v29 > a4 )
      {
        v12 = a1;
        v16 = a4;
        goto LABEL_29;
      }
    }
    while ( *v31 == 0 )
    {
      ++v30;
      v31 += 32;
      if ( v30 > a5 )
        goto LABEL_27;
    }
    v13 = a2;
    v12 = a1;
    *a9 = v54;
    v16 = a4;
  }
LABEL_32:
  v49 = v16;
  v32 = (char *)off_4AC12C + 4096 * v16 + 128 * a5 + 4 * a6;
  v51 = v32;
  if ( v16 >= v12 )
  {
    while ( 1 )
    {
      v33 = a5;
      v34 = (int *)v32;
      if ( a5 >= v13 )
        break;
LABEL_39:
      v32 -= 4096;
      if ( --v49 < v12 )
        goto LABEL_42;
    }
    while ( 1 )
    {
      v35 = v34;
      v36 = a6;
      if ( a6 >= a3 )
        break;
LABEL_37:
      v13 = a2;
      v34 -= 32;
      if ( --v33 < a2 )
      {
        v12 = a1;
        goto LABEL_39;
      }
    }
    while ( 1 )
    {
      v37 = *v35--;
      if ( v37 != 0 )
        break;
      if ( --v36 < a3 )
        goto LABEL_37;
    }
    v13 = a2;
    *a10 = v49;
    v12 = a1;
LABEL_42:
    v16 = a4;
  }
  v38 = (int *)v51;
  v55 = a5;
  if ( a5 >= v13 )
  {
    while ( 1 )
    {
      v39 = v38;
      v40 = v16;
      if ( v16 >= v12 )
        break;
LABEL_50:
      v38 -= 32;
      if ( --v55 < v13 )
        goto LABEL_53;
    }
    while ( 1 )
    {
      v41 = v39;
      v42 = a6;
      if ( a6 >= a3 )
        break;
LABEL_48:
      v12 = a1;
      v39 -= 1024;
      if ( --v40 < a1 )
      {
        v13 = a2;
        v16 = a4;
        goto LABEL_50;
      }
    }
    while ( 1 )
    {
      v43 = *v41--;
      if ( v43 != 0 )
        break;
      if ( --v42 < a3 )
        goto LABEL_48;
    }
    v13 = a2;
    *a11 = v55;
  }
LABEL_53:
  result = a3;
  v45 = v51;
  v52 = v51;
  v56 = a6;
  if ( a6 >= a3 )
  {
    while ( 1 )
    {
      v46 = a5;
      if ( a5 >= v13 )
        break;
LABEL_59:
      v45 = v52 - 4;
      result = v56 - 1;
      v52 -= 4;
      if ( --v56 < a3 )
        return result;
    }
    while ( 1 )
    {
      result = a4;
      v47 = v45;
      if ( a4 >= a1 )
        break;
LABEL_58:
      v45 -= 128;
      if ( --v46 < v13 )
        goto LABEL_59;
    }
    while ( *(_DWORD *)v47 == 0 )
    {
      --result;
      v47 -= 4096;
      if ( result < a1 )
        goto LABEL_58;
    }
    *a12 = v56;
  }
  return result;
}

// 0x428e90  sub_428E90
_DWORD *__cdecl sub_428E90(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11)
{
  int v11; // ebx
  int v12; // ecx
  int v13; // esi
  int v14; // eax
  int v15; // edx
  int v16; // edi
  int v17; // edx
  int *v18; // edi
  int v19; // ebp
  int v20; // eax
  char *v22; // [esp+8h] [ebp-20h]
  int v23; // [esp+Ch] [ebp-1Ch]
  int v24; // [esp+10h] [ebp-18h]
  int v25; // [esp+14h] [ebp-14h]
  int v26; // [esp+18h] [ebp-10h]
  int v27; // [esp+1Ch] [ebp-Ch]
  int v28; // [esp+20h] [ebp-8h]
  int v29; // [esp+24h] [ebp-4h]
  int *v30; // [esp+2Ch] [ebp+4h]

  v11 = a1;
  v12 = a3;
  v23 = 0;
  v24 = 0;
  v27 = 0;
  v26 = 0;
  v25 = 0;
  v13 = a2;
  v28 = a1;
  v22 = (char *)off_4AC12C + 4096 * a1 + 128 * a2 + 4 * a3;
  if ( a1 <= a4 )
  {
    v14 = a6;
    v15 = a5;
    do
    {
      v16 = v11 * v11;
      v29 = v11 * v11;
      v30 = (int *)v22;
      if ( v13 <= v15 )
      {
        while ( 1 )
        {
          v17 = v16 + v13 * v13;
          v18 = v30;
          if ( v12 <= v14 )
          {
            do
            {
              v19 = *v18++;
              if ( v19 != 0 )
              {
                v20 = *(v18 - 1);
                v23 += v20;
                v25 += v11 * v20;
                v26 += v13 * v20;
                v27 += v12 * v20;
                v11 = v28;
                v24 += v20 * (v17 + v12 * v12);
                v14 = a6;
              }
              ++v12;
            }
            while ( v12 <= v14 );
            v12 = a3;
          }
          ++v13;
          v30 += 32;
          v15 = a5;
          if ( v13 > a5 )
            break;
          v16 = v29;
        }
        v13 = a2;
      }
      ++v11;
      v22 += 4096;
      v28 = v11;
    }
    while ( v11 <= a4 );
  }
  *a7 = v23;
  *a8 = v24;
  *a9 = v25;
  *a10 = v26;
  *a11 = v27;
  return a11;
}

// 0x429000  sub_429000
unsigned int __cdecl sub_429000(_DWORD *a1)
{
  _DWORD *v1; // edi
  unsigned int v2; // edx
  int v3; // esi
  unsigned int v4; // ecx
  unsigned int v5; // eax
  int v6; // esi
  unsigned int v7; // ebp
  int v8; // ecx
  int v9; // esi
  int v10; // eax
  int v11; // esi
  int v12; // esi
  int v13; // ebp
  int v14; // ebp
  int v15; // ebp
  unsigned int v16; // edx
  unsigned int v17; // ebp
  __int64 v18; // rax
  double v19; // st6
  int v20; // ecx
  unsigned int v21; // ebx
  unsigned int v22; // ebp
  __int64 v23; // rax
  unsigned int v24; // ecx
  unsigned int result; // eax
  unsigned int v26; // edx
  _DWORD **v27; // ecx
  int v28; // esi
  unsigned int *v29; // ebx
  unsigned int v30; // edi
  unsigned int *v31; // edx
  unsigned int v32; // edx
  unsigned int v33; // edi
  unsigned int *v34; // edx
  unsigned int v35; // edx
  unsigned int i; // edi
  unsigned int *v37; // edx
  _DWORD **v38; // ecx
  unsigned int v39; // edx
  int v40; // esi
  unsigned int v41; // ebx
  unsigned int j; // eax
  unsigned int *v43; // edx
  unsigned int v44; // ebx
  int v45; // esi
  _DWORD *v46; // edx
  unsigned int *v47; // ecx
  unsigned int v48; // [esp+18h] [ebp-10Ch] BYREF
  unsigned int v49; // [esp+1Ch] [ebp-108h] BYREF
  unsigned int v50; // [esp+20h] [ebp-104h]
  unsigned int v51; // [esp+24h] [ebp-100h] BYREF
  unsigned int v52; // [esp+28h] [ebp-FCh]
  unsigned int v53; // [esp+2Ch] [ebp-F8h]
  unsigned int v54; // [esp+30h] [ebp-F4h]
  unsigned int v55; // [esp+34h] [ebp-F0h] BYREF
  unsigned int v56; // [esp+38h] [ebp-ECh]
  unsigned int v57; // [esp+3Ch] [ebp-E8h] BYREF
  int v58; // [esp+40h] [ebp-E4h] BYREF
  int v59; // [esp+44h] [ebp-E0h] BYREF
  int v60; // [esp+48h] [ebp-DCh] BYREF
  int v61; // [esp+4Ch] [ebp-D8h] BYREF
  _DWORD *v62; // [esp+50h] [ebp-D4h]
  int v63; // [esp+54h] [ebp-D0h] BYREF
  _DWORD *v64; // [esp+58h] [ebp-CCh] BYREF
  int v65; // [esp+5Ch] [ebp-C8h] BYREF
  int v66; // [esp+60h] [ebp-C4h]
  int v67; // [esp+64h] [ebp-C0h]
  __int64 v68; // [esp+68h] [ebp-BCh]
  int v69; // [esp+70h] [ebp-B4h] BYREF
  int v70; // [esp+74h] [ebp-B0h] BYREF
  int v71; // [esp+78h] [ebp-ACh] BYREF
  int v72; // [esp+7Ch] [ebp-A8h]
  int v73; // [esp+80h] [ebp-A4h] BYREF
  int v74; // [esp+84h] [ebp-A0h]
  unsigned int v75; // [esp+88h] [ebp-9Ch]
  int v76; // [esp+8Ch] [ebp-98h]
  __int64 v77; // [esp+90h] [ebp-94h]
  unsigned int v78; // [esp+98h] [ebp-8Ch]
  unsigned int v79; // [esp+9Ch] [ebp-88h]
  int v80; // [esp+A0h] [ebp-84h] BYREF
  unsigned int v81; // [esp+A4h] [ebp-80h]
  _DWORD *v82; // [esp+A8h] [ebp-7Ch]
  int v83; // [esp+ACh] [ebp-78h] BYREF
  _DWORD *v84; // [esp+B0h] [ebp-74h] BYREF
  int v85; // [esp+B4h] [ebp-70h] BYREF
  int v86; // [esp+B8h] [ebp-6Ch] BYREF
  int v87; // [esp+BCh] [ebp-68h] BYREF
  __int64 v88; // [esp+C0h] [ebp-64h]
  __int64 v89; // [esp+C8h] [ebp-5Ch]
  __int64 v90; // [esp+D0h] [ebp-54h]
  __int64 v91; // [esp+D8h] [ebp-4Ch]
  __int64 v92; // [esp+E0h] [ebp-44h]
  __int64 v93; // [esp+E8h] [ebp-3Ch]
  unsigned int v94; // [esp+F0h] [ebp-34h]
  unsigned int v95; // [esp+F4h] [ebp-30h]
  _DWORD *v96; // [esp+F8h] [ebp-2Ch]
  __int64 v97; // [esp+FCh] [ebp-28h]
  __int64 v98; // [esp+104h] [ebp-20h]
  __int64 v99; // [esp+10Ch] [ebp-18h]
  __int64 v100; // [esp+114h] [ebp-10h]
  __int64 v101; // [esp+11Ch] [ebp-8h]

  v75 = -1;
  v1 = (char *)dword_4B1D78 + 48 * dword_4B1D9C;
  v96 = v1;
  ++dword_4B1D9C;
  v2 = a1[1];
  v3 = a1[8];
  v4 = a1[4];
  v81 = a1[3];
  v5 = a1[5];
  v95 = v2;
  v53 = v2;
  v76 = v3;
  v6 = a1[9];
  v7 = a1[2];
  v78 = v4;
  v8 = a1[7];
  v50 = v81;
  v62 = (_DWORD *)v6;
  v9 = a1[10];
  v79 = v5;
  v10 = a1[6];
  v52 = v78;
  v67 = v9;
  v11 = a1[11];
  v56 = v79;
  v66 = v11;
  v12 = 0;
  v94 = v7;
  v54 = v7;
  v72 = v10;
  v74 = v8;
  v57 = 0;
  v51 = 0;
  v49 = 0;
  v48 = 0;
  v55 = 0;
  v13 = v10;
  if ( v10 < (int)v62 )
  {
    do
    {
      sub_428E90(
        v13,
        v8,
        v76,
        v13,
        v67,
        v66,
        &v73,
        &v61,
        &v58,
        &v60,
        &v59);
      v51 += v61;
      v49 += v58;
      v48 += v60;
      v53 -= v73;
      v54 -= v61;
      v50 -= v58;
      v52 -= v60;
      v99 = v48;
      v88 = v49;
      v57 += v73;
      v55 += v59;
      v77 = v55;
      v56 -= v59;
      v97 = v57;
      v68 = v52;
      v90 = v50;
      v92 = v56;
      v89 = v53;
      v91 = v51;
      v93 = v54;
      if ( (unsigned int)(__int64)((double)v54
                                 - ((double)v56 * (double)v56 + (double)v68 * (double)v68 + (double)v90 * (double)v90)
                                 / (double)v53)
         + (unsigned int)(__int64)((double)v51
                                 - ((double)v99 * (double)v99 + (double)v88 * (double)v88 + (double)v77 * (double)v77)
                                 / (double)v57) < v75 )
      {
        v75 = (__int64)((double)v54
                      - ((double)v56 * (double)v56 + (double)v68 * (double)v68 + (double)v90 * (double)v90)
                      / (double)v53)
            + (__int64)((double)v51
                      - ((double)v99 * (double)v99 + (double)v88 * (double)v88 + (double)v77 * (double)v77)
                      / (double)v57);
        v82 = (_DWORD *)v13;
      }
      v8 = v74;
      ++v13;
    }
    while ( v13 < (int)v62 );
    v10 = v72;
    v1 = v96;
  }
  v57 = 0;
  v53 = v95;
  v54 = v94;
  v50 = v81;
  v52 = v78;
  v56 = v79;
  v51 = 0;
  v49 = 0;
  v48 = 0;
  v55 = 0;
  LODWORD(v97) = -1;
  v14 = v8;
  if ( v8 < v67 )
  {
    while ( 1 )
    {
      sub_428E90(
        v10,
        v14,
        v76,
        (int)v62,
        v14,
        v66,
        &v73,
        &v61,
        &v58,
        &v60,
        &v59);
      v51 += v61;
      v49 += v58;
      v48 += v60;
      v53 -= v73;
      v54 -= v61;
      v50 -= v58;
      v52 -= v60;
      v93 = v48;
      v91 = v49;
      v57 += v73;
      v55 += v59;
      v89 = v55;
      v56 -= v59;
      v92 = v57;
      v90 = v52;
      v88 = v50;
      v77 = v56;
      v68 = v53;
      v98 = v54;
      v100 = v51;
      if ( (unsigned int)(__int64)((double)v51
                                 - ((double)v93 * (double)v93 + (double)v91 * (double)v91 + (double)v89 * (double)v89)
                                 / (double)v57)
         + (unsigned int)(__int64)((double)v54
                                 - ((double)v90 * (double)v90 + (double)v88 * (double)v88 + (double)v77 * (double)v77)
                                 / (double)v53) < (unsigned int)v97 )
      {
        LODWORD(v97) = (__int64)((double)v51
                               - ((double)v93 * (double)v93 + (double)v91 * (double)v91 + (double)v89 * (double)v89)
                               / (double)v57)
                     + (__int64)((double)v54
                               - ((double)v90 * (double)v90 + (double)v88 * (double)v88 + (double)v77 * (double)v77)
                               / (double)v53);
        LODWORD(v99) = v14;
      }
      if ( ++v14 >= v67 )
        break;
      v10 = v72;
    }
    v8 = v74;
    v10 = v72;
    v1 = v96;
  }
  v53 = v95;
  v54 = v94;
  v50 = v81;
  v52 = v78;
  v56 = v79;
  v57 = 0;
  v51 = 0;
  v49 = 0;
  v48 = 0;
  v55 = 0;
  LODWORD(v77) = -1;
  LODWORD(v68) = v76;
  if ( v76 < v66 )
  {
    v15 = v76;
    do
    {
      sub_428E90(
        v10,
        v8,
        v15,
        (int)v62,
        v67,
        v15,
        &v73,
        &v61,
        &v58,
        &v60,
        &v59);
      v51 += v61;
      v49 += v58;
      v48 += v60;
      v53 -= v73;
      v54 -= v61;
      v50 -= v58;
      v52 -= v60;
      v100 = v48;
      v98 = v49;
      v57 += v73;
      v55 += v59;
      v93 = v55;
      v56 -= v59;
      v91 = v57;
      v89 = v52;
      v92 = v50;
      v90 = v56;
      v68 = v53;
      v101 = v54;
      if ( (unsigned int)(__int64)((double)v51
                                 - ((double)v100 * (double)v100 + (double)v98 * (double)v98 + (double)v93 * (double)v93)
                                 / (double)v57)
         + (unsigned int)(__int64)((double)v54
                                 - ((double)v89 * (double)v89 + (double)v92 * (double)v92 + (double)v90 * (double)v90)
                                 / (double)v53) < (unsigned int)v77 )
      {
        LODWORD(v77) = (__int64)((double)v51
                               - ((double)v100 * (double)v100 + (double)v98 * (double)v98 + (double)v93 * (double)v93)
                               / (double)v57)
                     + (__int64)((double)v54
                               - ((double)v89 * (double)v89 + (double)v92 * (double)v92 + (double)v90 * (double)v90)
                               / (double)v53);
        LODWORD(v88) = v15;
      }
      v8 = v74;
      ++v15;
      v10 = v72;
    }
    while ( v15 < v66 );
    v1 = v96;
  }
  v16 = v97;
  LODWORD(v68) = 0;
  if ( (unsigned int)v97 >= v75 )
    v16 = v75;
  else
    LODWORD(v68) = 1;
  if ( (unsigned int)v77 < v16 )
    LODWORD(v68) = 2;
  v84 = v62;
  v86 = v67;
  v87 = v66;
  v83 = v10;
  v80 = v8;
  v85 = v76;
  if ( (_DWORD)v68 == 0 )
  {
    v71 = v8;
    v64 = v82;
    v63 = v67;
    v65 = v66;
    v70 = (int)v82 + 1;
    goto LABEL_29;
  }
  if ( (_DWORD)v68 == 1 )
  {
    v70 = v10;
    v64 = v62;
    v63 = v99;
    v65 = v66;
    v71 = v99 + 1;
LABEL_29:
    v69 = v76;
    goto LABEL_30;
  }
  v70 = v10;
  v64 = v62;
  v63 = v67;
  v65 = v88;
  v71 = v8;
  v69 = v88 + 1;
LABEL_30:
  sub_428B70(
    v10,
    v8,
    v76,
    (int)v64,
    v63,
    v65,
    &v83,
    &v80,
    &v85,
    &v64,
    &v63,
    &v65);
  sub_428B70(
    v70,
    v71,
    v69,
    (int)v84,
    v86,
    v87,
    &v70,
    &v71,
    &v69,
    &v84,
    &v86,
    &v87);
  sub_428E90(
    v83,
    v80,
    v85,
    (int)v64,
    v63,
    v65,
    &v57,
    &v51,
    &v49,
    &v48,
    &v55);
  v17 = v57;
  v53 = v95 - v57;
  v54 = v94 - v51;
  v50 = v81 - v49;
  v52 = v78 - v48;
  v56 = v79 - v55;
  v18 = (__int64)((double)v51
                - ((double)v48 * (double)v48 + (double)v49 * (double)v49 + (double)v55 * (double)v55) / (double)v57);
  HIDWORD(v18) = v49;
  *a1 = v18;
  LODWORD(v18) = v48;
  a1[3] = HIDWORD(v18);
  HIDWORD(v18) = v83;
  a1[4] = v18;
  LODWORD(v18) = v80;
  a1[6] = HIDWORD(v18);
  HIDWORD(v18) = v64;
  a1[7] = v18;
  LODWORD(v18) = v63;
  a1[9] = HIDWORD(v18);
  HIDWORD(v18) = v52;
  a1[10] = v18;
  v19 = (double)v50;
  a1[2] = v51;
  a1[5] = v55;
  a1[8] = v85;
  v20 = v65;
  a1[1] = v17;
  a1[11] = v20;
  v21 = v53;
  v22 = v54;
  v23 = (__int64)((double)v54
                - ((double)HIDWORD(v18) * (double)HIDWORD(v18) + v19 * v19 + (double)v56 * (double)v56) / (double)v53);
  HIDWORD(v23) = v50;
  v24 = v56;
  *v1 = v23;
  LODWORD(v23) = v52;
  v1[1] = v21;
  v1[2] = v22;
  v1[3] = HIDWORD(v23);
  v1[4] = v23;
  v1[5] = v24;
  v1[6] = v70;
  v1[7] = v71;
  v1[8] = v69;
  v1[9] = v84;
  v1[10] = v86;
  v1[11] = v87;
  if ( (_DWORD *)((char *)v64 + v63 + v65 - v83 - v80 - v85) != NULL )
    v12 = 2;
  result = (unsigned int)v84 + v86 + v87 - v70 - v71 - v69;
  if ( result != 0 )
    ++v12;
  switch ( v12 )
  {
    case 0:
      result = (unsigned int)dword_4B1D88;
      *((_DWORD *)dword_4B1D88 + 1) = *((_DWORD *)dword_4B1D88 + dword_4B1D40);
      v26 = --dword_4B1D40;
      if ( dword_4B1D40 != 0 )
      {
        v27 = (_DWORD **)dword_4B1D88;
        result = 2;
        v28 = 1;
        v29 = *((unsigned int **)dword_4B1D88 + 1);
        v30 = *v29;
        if ( v26 < 2 )
          goto LABEL_56;
        do
        {
          if ( result < v26 && *v27[result] < *v27[result + 1] )
            ++result;
          v31 = v27[result];
          if ( v30 >= *v31 )
            goto LABEL_56;
          v27[v28] = v31;
          v26 = dword_4B1D40;
          v27 = (_DWORD **)dword_4B1D88;
          v28 = result;
          result *= 2;
        }
        while ( result <= dword_4B1D40 );
        *((_DWORD *)dword_4B1D88 + v28) = v29;
      }
      break;
    case 1:
      v28 = 1;
      *((_DWORD *)dword_4B1D88 + 1) = v1;
      v27 = (_DWORD **)dword_4B1D88;
      v32 = dword_4B1D40;
      result = 2;
      v29 = *((unsigned int **)dword_4B1D88 + 1);
      v33 = *v29;
      if ( (unsigned int)dword_4B1D40 < 2 )
        goto LABEL_56;
      do
      {
        if ( result < v32 && *v27[result] < *v27[result + 1] )
          ++result;
        v34 = v27[result];
        if ( v33 >= *v34 )
          goto LABEL_56;
        v27[v28] = v34;
        v32 = dword_4B1D40;
        v27 = (_DWORD **)dword_4B1D88;
        v28 = result;
        result *= 2;
      }
      while ( result <= dword_4B1D40 );
      *((_DWORD *)dword_4B1D88 + v28) = v29;
      break;
    case 2:
      v27 = (_DWORD **)dword_4B1D88;
      v35 = dword_4B1D40;
      result = 2;
      v28 = 1;
      v29 = *((unsigned int **)dword_4B1D88 + 1);
      for ( i = *v29; result <= dword_4B1D40; result *= 2 )
      {
        if ( result < v35 && *v27[result] < *v27[result + 1] )
          ++result;
        v37 = v27[result];
        if ( i >= *v37 )
          break;
        v27[v28] = v37;
        v35 = dword_4B1D40;
        v27 = (_DWORD **)dword_4B1D88;
        v28 = result;
      }
LABEL_56:
      v27[v28] = v29;
      break;
    case 3:
      v38 = (_DWORD **)dword_4B1D88;
      v39 = dword_4B1D40;
      v40 = 1;
      v82 = *((_DWORD **)dword_4B1D88 + 1);
      v41 = *v82;
      for ( j = 2; j <= dword_4B1D40; j *= 2 )
      {
        if ( j < v39 && *v38[j] < *v38[j + 1] )
          ++j;
        v43 = v38[j];
        if ( v41 >= *v43 )
          break;
        v38[v40] = v43;
        v39 = dword_4B1D40;
        v38 = (_DWORD **)dword_4B1D88;
        v40 = j;
      }
      v38[v40] = v82;
      v44 = *v1;
      v45 = ++dword_4B1D40;
      result = (unsigned int)dword_4B1D40 >> 1;
      if ( (unsigned int)dword_4B1D40 >> 1 != 0 )
      {
        while ( 1 )
        {
          v46 = dword_4B1D88;
          v47 = *((unsigned int **)dword_4B1D88 + result);
          if ( *v47 >= v44 )
            break;
          *((_DWORD *)dword_4B1D88 + v45) = v47;
          v45 = result;
          result >>= 1;
          if ( result == 0 )
            goto LABEL_66;
        }
      }
      else
      {
LABEL_66:
        v46 = dword_4B1D88;
      }
      v46[v45] = v1;
      break;
    default:
      return result;
  }
  return result;
}

// 0x429e60  sub_429E60
unsigned int sub_429E60()
{
  HANDLE CurrentThread; // esi
  int ThreadPriority; // eax
  unsigned __int8 v2; // al
  signed int v3; // esi
  unsigned __int8 v4; // al
  signed int v5; // edx
  int v6; // edx
  unsigned __int64 v7; // kr00_8
  unsigned __int8 v8; // al
  signed int v9; // esi
  unsigned __int8 v10; // al
  signed int v11; // edx
  int v12; // edx
  unsigned __int64 v13; // kr08_8
  unsigned int v14; // esi
  HANDLE hThread; // [esp+Ch] [ebp-Ch]
  int nPriority; // [esp+10h] [ebp-8h]

  CurrentThread = GetCurrentThread();
  hThread = CurrentThread;
  ThreadPriority = GetThreadPriority(/*hThread*/ CurrentThread);
  nPriority = ThreadPriority;
  if ( ThreadPriority != 0x7FFFFFFF )
    SetThreadPriority(/*hThread*/ CurrentThread, /*nPriority*/ ThreadPriority + 1);
  if ( dword_4AC308 == 2 || dword_4AC308 == 1 )
  {
    v3 = GetTickCount() / 0x3E8;
  }
  else
  {
    __outbyte(0x70u, 0);
    v2 = __inbyte(0x71u);
    v3 = v2;
  }
  do
  {
    if ( dword_4AC308 == 2 || dword_4AC308 == 1 )
    {
      v5 = GetTickCount() / 0x3E8;
    }
    else
    {
      __outbyte(0x70u, 0);
      v4 = __inbyte(0x71u);
      v5 = v4;
    }
    if ( v5 >= v3 )
      v6 = v5 - v3 > 0;
    else
      v6 = v5 - v3 + 10;
  }
  while ( v6 == 0 );
  v7 = __rdtsc();
  dword_4B1DEC = HIDWORD(v7);
  dword_4B1DF0 = v7;
  if ( dword_4AC308 == 2 || dword_4AC308 == 1 )
  {
    v9 = GetTickCount() / 0x3E8;
  }
  else
  {
    __outbyte(0x70u, 0);
    v8 = __inbyte(0x71u);
    v9 = v8;
  }
  do
  {
    if ( dword_4AC308 == 2 || dword_4AC308 == 1 )
    {
      v11 = GetTickCount() / 0x3E8;
    }
    else
    {
      __outbyte(0x70u, 0);
      v10 = __inbyte(0x71u);
      v11 = v10;
    }
    if ( v11 >= v9 )
      v12 = v11 - v9 > 0;
    else
      v12 = v11 - v9 + 10;
  }
  while ( v12 == 0 );
  v13 = __rdtsc();
  dword_4B1DEC = HIDWORD(v13);
  dword_4B1DF0 = v13;
  if ( nPriority != 0x7FFFFFFF )
    SetThreadPriority(hThread, nPriority);
  v14 = ((int)v13 - (int)v7) / 0xF4240u;
  if ( ((int)v13 - (int)v7) / 0x186A0u - 10 * v14 >= 6 )
    ++v14;
  return v14;
}

// 0x42a010  sub_42A010
signed __int8 sub_42A010()
{
  unsigned __int8 v2; // al
  unsigned __int8 v3; // cl
  unsigned __int8 v5; // al
  BOOL v6; // edx
  unsigned __int8 v7; // al
  unsigned __int8 v8; // cl
  unsigned __int8 v9; // al
  BOOL v10; // esi
  signed __int8 result; // al
  int v14; // edi

  _CF = false;
  _OF = false;
  _ZF = true;
  _SF = false;
  __asm { pushfw }
  _disable();
  __outbyte(0x22u, 0xC2u);
  v2 = __inbyte(0x23u);
  v3 = v2;
  __asm
  {
    popfw
    pushfw
  }
  _disable();
  __outbyte(0x22u, 0xC2u);
  __outbyte(0x23u, v2 ^ 4);
  __asm
  {
    popfw
    pushfw
  }
  _disable();
  __outbyte(0x22u, 0xC0u);
  __inbyte(0x23u);
  __asm
  {
    popfw
    pushfw
  }
  _disable();
  __outbyte(0x22u, 0xC2u);
  v5 = __inbyte(0x23u);
  __asm { popfw }
  _CF = v5 < v3;
  _OF = __OFSUB__(v5, v3);
  _ZF = v5 == v3;
  _SF = (char)(v5 - v3) < 0;
  v6 = v5 != v3;
  __asm { pushfw }
  _disable();
  __outbyte(0x22u, 0xC2u);
  __outbyte(0x23u, v3);
  __asm
  {
    popfw
    pushfw
  }
  _disable();
  __outbyte(0x22u, 0xC3u);
  v7 = __inbyte(0x23u);
  v8 = v7;
  __asm
  {
    popfw
    pushfw
  }
  _disable();
  __outbyte(0x22u, 0xC3u);
  __outbyte(0x23u, v7 ^ 0x80);
  __asm
  {
    popfw
    pushfw
  }
  _disable();
  __outbyte(0x22u, 0xC0u);
  __inbyte(0x23u);
  __asm
  {
    popfw
    pushfw
  }
  _disable();
  __outbyte(0x22u, 0xC3u);
  v9 = __inbyte(0x23u);
  __asm { popfw }
  _CF = v9 < v8;
  _OF = __OFSUB__(v9, v8);
  _ZF = v9 == v8;
  _SF = (char)(v9 - v8) < 0;
  v10 = v9 != v8;
  __asm { pushfw }
  _disable();
  __outbyte(0x22u, 0xC3u);
  result = v8;
  __outbyte(0x23u, v8);
  __asm { popfw }
  if ( !v6 )
  {
    _ZF = !v10;
    _SF = v10 < 0;
    if ( !v10 )
    {
      v14 = 253;
      goto LABEL_7;
    }
    goto LABEL_5;
  }
  _ZF = !v10;
  _SF = v10 < 0;
  if ( v10 )
  {
LABEL_5:
    __asm { pushfw }
    _disable();
    __outbyte(0x22u, 0xFEu);
    result = __inbyte(0x23u);
    __asm { popfw }
    v14 = result;
    goto LABEL_7;
  }
  v14 = 254;
LABEL_7:
  if ( v14 < 48 || v14 > 252 )
  {
    dword_4B3FF0 = 4;
    dword_4B3FF4 = 15;
  }
  else if ( v14 >= 80 )
  {
    dword_4B3FF0 = 6;
    dword_4B3FF4 = 15;
    dword_4B1DD8 = 1;
  }
  else
  {
    dword_4B3FF0 = 5;
    dword_4B3FF4 = 15;
  }
  return result;
}

// 0x42a150  sub_42A150
int __usercall sub_42A150/*@<eax>*/(char a1/*@<efl>*/)
{
  int result; // eax
  unsigned int v2; // esi
  LSTATUS v18; // edi
  unsigned int v19; // esi
  HKEY CurrentThread; // ebx
  int ThreadPriority; // edi
  unsigned int v22; // eax
  int i; // ecx
  char v24; // t0
  unsigned int v25; // ecx
  struct _OSVERSIONINFOA VersionInformation; // [esp+Ch] [ebp-E4h] BYREF
  struct _SYSTEM_INFO SystemInfo; // [esp+A0h] [ebp-50h] BYREF
  struct _MEMORYSTATUS Buffer; // [esp+C4h] [ebp-2Ch] BYREF
  HKEY phkResult; // [esp+E4h] [ebp-Ch] BYREF
  BYTE Data[4]; // [esp+E8h] [ebp-8h] BYREF
  DWORD cbData; // [esp+ECh] [ebp-4h] BYREF

  result = dword_4B1DCC;
  v2 = 0;
  if ( dword_4B1DCC == 0 )
  {
    GetSystemInfo(/*lpSystemInfo*/ &SystemInfo);
    dword_4AC314 = SystemInfo.dwNumberOfProcessors;
    dword_4B1DE8 = SystemInfo.wProcessorArchitecture;
    VersionInformation.dwOSVersionInfoSize = 148;
    if ( GetVersionExA(/*lpVersionInformation*/ &VersionInformation) )
    {
      dword_4B1DB8 = VersionInformation.dwBuildNumber;
      dword_4B1DB4 = VersionInformation.dwMajorVersion;
      dword_4B1DB0 = VersionInformation.dwMinorVersion;
      if ( VersionInformation.dwPlatformId != 0 )
      {
        if ( VersionInformation.dwPlatformId == 1 )
          dword_4AC308 = 1;
        else
          dword_4AC308 = 2;
      }
      else
      {
        dword_4AC308 = 3;
      }
    }
    dword_4B1DCC = 1;
    Buffer.dwLength = 32;
    GlobalMemoryStatus(/*lpBuffer*/ &Buffer);
    result = Buffer.dwAvailPhys;
    dword_4B1DBC = Buffer.dwTotalPhys;
    dword_4B1DC0 = Buffer.dwAvailPhys;
    dword_4B1DC4 = Buffer.dwTotalVirtual;
    dword_4B1DC8 = Buffer.dwAvailVirtual;
  }
  if ( dword_4B1DE8 == 0 )
  {
    _CF = 0;
    _OF = 0;
    _ZF = 1;
    _SF = 0;
    dword_4B3FEC = 0;
    __asm { pushfw }
    cbData = 1;
    dword_4B1DDC = 1;
    _EAX = 0;
    __asm { cpuid }
    dword_4B3FC8 = _EAX;
    dword_4B3FCC = _EBX;
    dword_4B3FD0 = _ECX;
    dword_4B3FD4 = _EDX;
    *(_DWORD *)Str = _EBX;
    dword_4B3FE4 = _EDX;
    dword_4B3FE8 = _ECX;
    if ( _EAX > 0 )
    {
      _EAX = 1;
      __asm { cpuid }
      dword_4B3FC8 = _EAX;
      dword_4B3FCC = _EBX;
      dword_4B3FD0 = _ECX;
      dword_4B3FD4 = _EDX;
      dword_4B3FF4 = (_EAX >> 4) & 0xF;
      dword_4B3FF0 = (_EAX >> 8) & 0xF;
      dword_4B1DD4 = _EDX & 1;
      dword_4B1DD8 = (_EDX & 0x800000) != 0;
    }
    if ( dword_4B1DD4 != 0 )
      dword_4B1DE0 = 0;
    if ( dword_4B3FF0 > 4 )
    {
      if ( strstr(/*Str*/ Str, /*SubStr*/ off_4AC310) == NULL || (dword_4B1DD0 = 0, dword_4B3FF0 >= 5) )
        dword_4B1DD0 = 1;
    }
    cbData = a1 == 2;
    if ( a1 == 2 )
    {
      if ( dword_4AC308 == 2 )
      {
        result = RegOpenKeyExA(
                   /*hKey*/ HKEY_LOCAL_MACHINE,
                   /*lpSubKey*/ aHardwareDescri,
                   /*ulOptions*/ 0,
                   /*samDesired*/ 0x20019u,
                   &phkResult);
        if ( result == 0 )
        {
          *(_DWORD *)Data = 0;
          cbData = 4;
          v18 = RegQueryValueExA(
                  /*hKey*/ phkResult,
                  /*lpValueName*/ aMhz,
                  /*lpReserved*/ NULL,
                  /*lpType*/ NULL,
                  /*lpData*/ Data,
                  /*lpcbData*/ &cbData);
          if ( v18 != 0 )
          {
            v18 = RegQueryValueExA(
                    /*hKey*/ phkResult,
                    /*lpValueName*/ aMhz_0,
                    /*lpReserved*/ NULL,
                    /*lpType*/ NULL,
                    /*lpData*/ Data,
                    /*lpcbData*/ &cbData);
            if ( v18 != 0 )
              v18 = RegQueryValueExA(
                      /*hKey*/ phkResult,
                      /*lpValueName*/ aMhz_1,
                      /*lpReserved*/ NULL,
                      /*lpType*/ NULL,
                      /*lpData*/ Data,
                      /*lpcbData*/ &cbData);
          }
          result = RegCloseKey(/*hKey*/ phkResult);
          if ( v18 == 0 )
          {
            dword_4B1DE4 = *(_DWORD *)Data;
            return result;
          }
        }
      }
      else
      {
        v19 = -1;
        CurrentThread = (HKEY)GetCurrentThread();
        phkResult = CurrentThread;
        ThreadPriority = GetThreadPriority(/*hThread*/ CurrentThread);
        if ( ThreadPriority != 0x7FFFFFFF )
          SetThreadPriority(/*hThread*/ CurrentThread, /*nPriority*/ ThreadPriority + 1);
        for ( cbData = 10; cbData != 0; --cbData )
        {
          __outbyte(0x43u, 0xB8u);
          LOBYTE(v22) = __inbyte(0x61u);
          __outbyte(0x61u, v22 | 1);
          __outbyte(0x42u, 0);
          __outbyte(0x42u, 0);
          HIWORD(v22) = 0;
          for ( i = 0xFFFF; i != 0; --i )
            ;
          LOBYTE(v22) = __inbyte(0x42u);
          BYTE1(v22) = v22;
          LOBYTE(v22) = __inbyte(0x42u);
          v24 = v22;
          LOBYTE(v22) = BYTE1(v22);
          BYTE1(v22) = v24;
          LOWORD(v22) = -(__int16)v22;
          *(_DWORD *)Data = v22;
          if ( v22 < v19 )
            v19 = v22;
        }
        if ( ThreadPriority != 0x7FFFFFFF )
          SetThreadPriority(/*hThread*/ phkResult, /*nPriority*/ ThreadPriority);
        v25 = 100000 * v19 / 0x1D216;
        if ( v25 % 0x1D216 >= 0xE90B )
          ++v25;
        v2 = 0x1FFFE / v25;
        result = 0x1FFFE / v25;
        if ( 0x1FFFE % v25 > v25 >> 1 )
          ++v2;
      }
      dword_4B1DE4 = v2;
    }
    else
    {
      result = sub_429E60();
      dword_4B1DE4 = result;
    }
  }
  return result;
}

// 0x42a6a0  sub_42A6A0
int __usercall sub_42A6A0/*@<eax>*/(char a1/*@<efl>*/)
{
  const char *v1; // eax
  const char *v2; // eax

  sub_42A150(a1);
  printf(/*Format*/ "\n\n");
  printf(/*Format*/ "TotalPhys(physical mem in byte) %d\n", dword_4B1DBC);
  printf(/*Format*/ "AvailPhys(free physical mem in byte) %d\n", dword_4B1DC0);
  printf(/*Format*/ "TotalVirtual(user bytes of address space) %d\n", dword_4B1DC4);
  printf(/*Format*/ "AvailVirtual(free user byte) %d\n", dword_4B1DC8);
  switch ( dword_4AC308 )
  {
    case 0:
      printf(/*Format*/ "Platform is DOS  ");
      break;
    case 1:
      printf(/*Format*/ "Platform is WIN95  ");
      break;
    case 2:
      printf(/*Format*/ "Platform is NT  ");
      break;
    case 3:
      printf(/*Format*/ "Platform is WIN  ");
      break;
    default:
      break;
  }
  printf(/*Format*/ "Version %d.%d\n", dword_4B1DB4, dword_4B1DB0);
  printf(/*Format*/ "Build number %d\n", dword_4B1DB8);
  printf(/*Format*/ "\n\n");
  v1 = (const char *)&off_4AC42C;
  if ( dword_4B1DDC == 0 )
    v1 = aNo;
  printf(/*Format*/ "CPU has cpuid instruction? %s\n", v1);
  printf(/*Format*/ "CPU vender is %s\n", Str);
  printf(/*Format*/ "CPU family is %d\n", dword_4B3FF0);
  printf(/*Format*/ "CPU model is %d\n", dword_4B3FF4);
  if ( dword_4B1DD4 != 0 )
    printf(/*Format*/ "CPU has fpu \n");
  v2 = (const char *)&off_4AC42C;
  if ( dword_4B1DD8 == 0 )
    v2 = aNo;
  printf(/*Format*/ "CPU has mmx? %s\n", v2);
  printf(/*Format*/ "CPU speed %i\n", dword_4B1DE4);
  printf(/*Format*/ "Number of Processor %d\n", dword_4AC314);
  return dword_4B1DD4;
}
