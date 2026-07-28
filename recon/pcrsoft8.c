// Module `pcrsoft8`.
//
// Reconstructed from Bugs.exe (PC v1.0) by tools/recon.py.
// Generated file -- do not edit by hand; see recon/README.md.
//
// Address range: 0x41a970 - 0x41a970 (1 function).
//
// Code here refers to the original source file name "D:\Projets\Bugs\src\pcrsoft8.c".

#include "bugs.h"


// 0x41a970  sub_41A970
int __cdecl sub_41A970(HWND a1, int a2, int a3, int a4)
{
  LPDIRECTDRAW v4; // ecx
  HRESULT v5; // eax
  int v7; // edi
  int v8; // edx
  int *v9; // eax
  int v10; // esi
  int i; // eax
  char v12; // dl
  char v13; // cl
  int j; // eax
  char v15; // cl
  char v16; // dl
  int v17; // [esp+38h] [ebp-874h] BYREF
  int v18; // [esp+3Ch] [ebp-870h] BYREF
  _DWORD v19[283]; // [esp+40h] [ebp-86Ch] BYREF
  _BYTE v20[1024]; // [esp+4ACh] [ebp-400h] BYREF

  dword_46AF58 = a2;
  dword_46AF60 = a4;
  v4 = dword_4B1C34;
  dword_46AF5C = a3;
  if ( dword_4B1C34 != NULL )
  {
    v5 = v17;
  }
  else
  {
    if ( (unsigned int)dword_9CA824 > 2 )
      v5 = DirectDrawCreate(/*lpGUID*/ (GUID *)&unk_7C5E70 + 133 * dword_9CA824, /*lplpDD*/ &dword_4B1C34, /*pUnkOuter*/ NULL);
    else
      v5 = DirectDrawCreate(/*lpGUID*/ NULL, /*lplpDD*/ &dword_4B1C34, /*pUnkOuter*/ NULL);
    if ( v5 != 0 )
    {
      ConPrintf(/*Format*/ "file: %s  l: %d  \n  ->msg: DirectDrawCreate failed\n", aDProjetsBugsSr_0, 294);
      return 0;
    }
    v4 = dword_4B1C34;
  }
  if ( v5 != 0 )
    return 0;
  if ( v4->lpVtbl->SetCooperativeLevel(/*This*/ v4, a1, 23) != 0
    || dword_4B1C34->lpVtbl->SetDisplayMode(/*This*/ dword_4B1C34, dword_46AF58, dword_46AF5C, dword_46AF60) != 0
    || (memset(v19, 0, 0x6Cu),
        v19[0] = 108,
        v19[5] = 1,
        v19[1] = 33,
        v19[26] = 2584,
        dword_4B1C34->lpVtbl->CreateSurface(
          /*This*/ dword_4B1C34,
          (LPDDSURFACEDESC)v19,
          (LPDIRECTDRAWSURFACE *)&dword_4B1C38,
          NULL) != 0)
    || (v17 = 4,
        (*(int (__stdcall **)(int, int *, int *))(*(_DWORD *)dword_4B1C38 + 48))(
          dword_4B1C38,
          &v17,
          &dword_4B1C3C) != 0) )
  {
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
    if ( dword_4B1C34 != NULL )
    {
      dword_4B1C34->lpVtbl->Release(/*This*/ dword_4B1C34);
      dword_4B1C34 = NULL;
    }
    return 0;
  }
  else
  {
    (*(void (__stdcall **)(int, int *))(*(_DWORD *)dword_4B1C3C + 56))(dword_4B1C3C, &v18);
    memset(v19, 0, 0x6Cu);
    v19[0] = 108;
    (*(void (__stdcall **)(int, _DWORD *))(*(_DWORD *)dword_4B1C3C + 88))(dword_4B1C3C, v19);
    v7 = v19[2];
    dword_46AF58 = v19[3];
    dword_46AF68 = (dword_46AF60 >> 3) * v19[3] * v19[2];
    dword_46AF5C = v19[2];
    v8 = 0;
    dword_46AF64 = dword_46AF60 >> 3;
    dword_46AF6C = v19[4] / (dword_46AF60 >> 3);
    if ( v19[2] > 0 )
    {
      v9 = dword_553460;
      v10 = (dword_46AF60 >> 3) * (v19[4] / (dword_46AF60 >> 3));
      do
      {
        *v9 = v8;
        v8 += v10;
        ++v9;
        --v7;
      }
      while ( v7 != 0 );
    }
    for ( i = 0; i < 256; ++i )
    {
      v12 = byte_5A7CC1[i * 4];
      LOBYTE(v19[i + 27]) = byte_5A7CC0[i * 4];
      v13 = byte_5A7CC2[i * 4];
      BYTE1(v19[i + 27]) = v12;
      BYTE2(v19[i + 27]) = v13;
      HIBYTE(v19[i + 27]) = 0;
    }
    for ( j = 0; j < 256; ++j )
    {
      v15 = BYTE1(v19[j + 27]);
      v20[j * 4] = BYTE2(v19[j + 27]);
      v16 = v19[j + 27];
      v20[j * 4 + 1] = v15;
      v20[j * 4 + 2] = v16;
    }
    dword_4B1C34->lpVtbl->CreatePalette(
      /*This*/ dword_4B1C34,
      4,
      (LPPALETTEENTRY)v20,
      (LPDIRECTDRAWPALETTE *)&dword_4B1C44,
      NULL);
    if ( dword_4B1C44 != 0 )
    {
      (*(void (__stdcall **)(int, int))(*(_DWORD *)dword_4B1C38 + 124))(dword_4B1C38, dword_4B1C44);
      (*(void (__stdcall **)(int, int))(*(_DWORD *)dword_4B1C3C + 124))(dword_4B1C3C, dword_4B1C44);
    }
    return 1;
  }
}
