// Module `unk_408bf0`.
//
// Reconstructed from Bugs.exe (PC v1.0) by tools/recon.py.
// Generated file -- do not edit by hand; see recon/README.md.
//
// Address range: 0x408bf0 - 0x4099b0 (17 functions).

#include "bugs.h"


// 0x408bf0  sub_408BF0
int __cdecl sub_408BF0(__int16 *a1)
{
  int result; // eax

  word_7C94A4 = *a1;
  word_7C94A6 = a1[1];
  word_7C94AC = a1[2];
  word_7C94AE = a1[3];
  word_7C94B4 = a1[4];
  word_7C94B6 = a1[5];
  word_7C94BC = a1[6];
  word_7C94BE = a1[7];
  result = a1[8];
  dword_7C94C4 = result;
  return result;
}

// 0x408c60  sub_408C60
int __cdecl sub_408C60(__int16 *a1, int *a2)
{
  int result; // eax

  *a2 = (word_7C94A4 * *a1 + a1[2] * word_7C94AC + a1[1] * word_7C94A6) >> 12;
  a2[1] = (word_7C94AE * *a1 + a1[2] * word_7C94B6 + a1[1] * word_7C94B4) >> 12;
  result = word_7C94BC * *a1;
  a2[2] = (result + a1[2] * dword_7C94C4 + a1[1] * word_7C94BE) >> 12;
  return result;
}

// 0x408d10  sub_408D10
int __cdecl sub_408D10(__int16 *a1)
{
  int result; // eax

  word_7C94A0 = *a1;
  word_7C94A2 = a1[1];
  result = a1[2];
  dword_7C94A8 = result;
  return result;
}

// 0x408d40  sub_408D40
_WORD *__cdecl sub_408D40(_WORD *a1)
{
  *a1 = dword_7C94E8;
  a1[1] = dword_7C94F0;
  a1[2] = dword_7C94F8;
  return a1;
}

// 0x408d70  sub_408D70
int sub_408D70()
{
  dword_7C94E8 = (word_7C94AC * dword_7C94A8 + word_7C94A2 * word_7C94A6 + word_7C94A0 * word_7C94A4) >> 12;
  dword_7C94F0 = (word_7C94B6 * dword_7C94A8 + word_7C94A2 * word_7C94B4 + word_7C94A0 * word_7C94AE) >> 12;
  dword_7C94F8 = (dword_7C94A8 * dword_7C94C4 + word_7C94A2 * word_7C94BE + word_7C94A0 * word_7C94BC) >> 12;
  return dword_7C94A8 * dword_7C94C4;
}

// 0x408e10  sub_408E10
int __cdecl sub_408E10(int *a1)
{
  int result; // eax

  dword_7C94CC = *a1;
  dword_7C94D4 = a1[1];
  result = a1[2];
  dword_7C94DC = result;
  return result;
}

// 0x408e30  sub_408E30
int sub_408E30()
{
  int v0; // ecx
  bool v1; // sf
  int v2; // ecx
  int v3; // ecx
  int result; // eax
  __int16 v5; // cx

  v0 = (dword_7C94A8 * dword_7C94C4 + word_7C94A2 * word_7C94BE + word_7C94A0 * word_7C94BC) >> 12;
  v1 = dword_7C94DC + v0 < 0;
  v2 = dword_7C94DC + v0;
  dword_7C9578 = v2;
  if ( v1 )
    v3 = -v2;
  else
    v3 = v2 + 1;
  result = dword_4EFB30
         * (dword_7C94D4 + ((word_7C94B6 * dword_7C94A8 + word_7C94A2 * word_7C94B4 + word_7C94A0 * word_7C94AE) >> 12))
         / v3;
  dword_7C9568 = dword_4EFB30
               * (dword_7C94CC
                + ((word_7C94AC * dword_7C94A8 + word_7C94A2 * word_7C94A6 + word_7C94A0 * word_7C94A4) >> 12))
               / v3;
  v5 = dword_7C9568;
  dword_7C9570 = result;
  if ( dword_7C9568 >= -32768 )
  {
    if ( dword_7C9568 > 0x7FFF )
      v5 = 0x7FFF;
  }
  else
  {
    v5 = 0x8000;
  }
  word_7C9510 = v5;
  if ( result >= -32768 )
  {
    if ( result > 0x7FFF )
      result = 0x7FFF;
    word_7C9512 = result;
  }
  else
  {
    word_7C9512 = 0x8000;
    return -32768;
  }
  return result;
}

// 0x408f60  sub_408F60
_DWORD *__cdecl sub_408F60(_DWORD *a1)
{
  *a1 = dword_7C9578;
  return a1;
}

// 0x408f70  sub_408F70
_WORD *__cdecl sub_408F70(_WORD *a1)
{
  *a1 = word_7C9510;
  a1[1] = word_7C9512;
  return a1;
}

// 0x408f90  sub_408F90
int sub_408F90()
{
  char *CommandLineA; // ebx
  char *v1; // eax
  char *v2; // edx
  const char *v3; // edx
  signed int v4; // ebp
  unsigned int v5; // kr04_4
  char *v6; // edx
  const char *v7; // edx
  unsigned int v8; // kr08_4
  char *v9; // eax
  char *v10; // eax
  char *v11; // edx
  const char *v12; // edx
  unsigned int v13; // kr0C_4
  char v14; // al
  char *v15; // eax
  unsigned int i; // kr14_4
  char v17; // al
  signed int v19; // [esp+10h] [ebp-4h]

  CommandLineA = GetCommandLineA();
  byte_7C9360[0] = 0;
  v1 = strstr(/*Str*/ CommandLineA, /*SubStr*/ SubStr);
  if ( v1 != NULL || (v1 = strstr(/*Str*/ CommandLineA, /*SubStr*/ aB_1)) != NULL )
  {
    strncpy(/*Destination*/ Destination, /*Source*/ v1 + 2, /*Count*/ 2u);
    byte_4B1A3A = 0;
  }
  v2 = strstr(/*Str*/ CommandLineA, /*SubStr*/ aP);
  if ( v2 != NULL || (v2 = strstr(/*Str*/ CommandLineA, /*SubStr*/ aP_0)) != NULL )
  {
    v3 = v2 + 3;
    v4 = 0;
    v5 = strlen(v3) + 1;
    if ( (int)(v5 - 1) > 0 )
    {
      do
      {
        if ( v3[v4] == 32 )
          break;
        ++v4;
      }
      while ( v4 < (int)(v5 - 1) );
    }
    strncpy(/*Destination*/ byte_7C9360, /*Source*/ v3, /*Count*/ v4);
    byte_7C9360[v4] = 0;
    dword_4B1D04 = 2;
  }
  else
  {
    v4 = v19;
  }
  v6 = strstr(/*Str*/ CommandLineA, /*SubStr*/ aR_0);
  if ( v6 == NULL )
    v6 = strstr(/*Str*/ CommandLineA, /*SubStr*/ aR_1);
  if ( v6 != NULL )
  {
    v7 = v6 + 3;
    v4 = 0;
    v8 = strlen(v7) + 1;
    if ( (int)(v8 - 1) > 0 )
    {
      do
      {
        if ( v7[v4] == 32 )
          break;
        ++v4;
      }
      while ( v4 < (int)(v8 - 1) );
    }
    strncpy(/*Destination*/ byte_7C9360, /*Source*/ v7, /*Count*/ v4);
    byte_7C9360[v4] = 0;
    dword_4B1D04 = 1;
  }
  v9 = strstr(/*Str*/ CommandLineA, /*SubStr*/ asc_467698);
  if ( v9 != NULL || (v9 = strstr(/*Str*/ CommandLineA, /*SubStr*/ asc_467694)) != NULL )
    qword_9CA830 = atoi(/*String*/ v9 + 2);
  v10 = strstr(/*Str*/ CommandLineA, /*SubStr*/ aY_0);
  if ( v10 != NULL || (v10 = strstr(/*Str*/ CommandLineA, /*SubStr*/ aY)) != NULL )
    (*(int *)0x9CA834) = atoi(/*String*/ v10 + 2);
  if ( strstr(/*Str*/ CommandLineA, /*SubStr*/ aNoSync) != NULL || strstr(/*Str*/ CommandLineA, /*SubStr*/ aNoSync_0) != NULL )
    dword_45F2A4 = 0;
  if ( strstr(/*Str*/ CommandLineA, /*SubStr*/ aNoSkip) != NULL || strstr(/*Str*/ CommandLineA, /*SubStr*/ aNoSkip_0) != NULL )
  {
    dword_45F2A0 = 0;
    dword_4B1900 = 1;
  }
  else
  {
    dword_4B1900 = 0;
  }
  if ( strstr(/*Str*/ CommandLineA, /*SubStr*/ aFull) != NULL || strstr(/*Str*/ CommandLineA, /*SubStr*/ aFull_0) != NULL )
    dword_9CA838 = 1;
  if ( strstr(/*Str*/ CommandLineA, /*SubStr*/ aWin) != NULL || strstr(/*Str*/ CommandLineA, /*SubStr*/ aWin_0) != NULL )
    dword_9CA838 = 0;
  if ( strstr(/*Str*/ CommandLineA, /*SubStr*/ aOgl) != NULL || strstr(/*Str*/ CommandLineA, /*SubStr*/ aOgl_0) != NULL )
    dword_9CA824 = 2;
  if ( strstr(/*Str*/ CommandLineA, /*SubStr*/ aOpengl) != NULL || strstr(/*Str*/ CommandLineA, /*SubStr*/ aOpengl_0) != NULL )
    dword_9CA824 = 2;
  if ( strstr(/*Str*/ CommandLineA, /*SubStr*/ aSoft) != NULL || strstr(/*Str*/ CommandLineA, /*SubStr*/ aSoft_0) != NULL )
    dword_9CA824 = 1;
  if ( strstr(/*Str*/ CommandLineA, /*SubStr*/ aSoft8) != NULL || strstr(/*Str*/ CommandLineA, /*SubStr*/ aSoft8_0) != NULL )
    dword_9CA824 = 0;
  if ( strstr(/*Str*/ CommandLineA, /*SubStr*/ aSoftpal) != NULL
    || strstr(/*Str*/ CommandLineA, /*SubStr*/ aSoftpal_0) != NULL )
  {
    dword_9CA824 = 0;
  }
  if ( strstr(/*Str*/ CommandLineA, /*SubStr*/ aSoftrgb) != NULL
    || strstr(/*Str*/ CommandLineA, /*SubStr*/ aSoftrgb_0) != NULL )
  {
    dword_9CA824 = 1;
  }
  if ( strstr(/*Str*/ CommandLineA, /*SubStr*/ aSoft16) != NULL || strstr(/*Str*/ CommandLineA, /*SubStr*/ aSoft16_0) != NULL )
    dword_9CA824 = 1;
  if ( strstr(/*Str*/ CommandLineA, /*SubStr*/ aSoft24) != NULL || strstr(/*Str*/ CommandLineA, /*SubStr*/ aSoft24_0) != NULL )
    dword_9CA824 = 1;
  if ( strstr(/*Str*/ CommandLineA, /*SubStr*/ aSkipIntro) != NULL
    || strstr(/*Str*/ CommandLineA, /*SubStr*/ aSkipIntro_0) != NULL )
  {
    dword_45F2A8 = 0;
  }
  if ( strstr(/*Str*/ CommandLineA, /*SubStr*/ aCons) != NULL || strstr(/*Str*/ CommandLineA, /*SubStr*/ aCons_0) != NULL )
    dword_4B18E8 = 1;
  if ( strstr(/*Str*/ CommandLineA, /*SubStr*/ aFntp) != NULL || strstr(/*Str*/ CommandLineA, /*SubStr*/ aFntp_0) != NULL )
    dword_4B1CE4 = 1;
  v11 = strstr(/*Str*/ CommandLineA, /*SubStr*/ aDll);
  if ( v11 != NULL || (v11 = strstr(/*Str*/ CommandLineA, /*SubStr*/ aDll_0)) != NULL )
  {
    v12 = v11 + 5;
    v4 = 0;
    v13 = strlen(v12) + 1;
    if ( (int)(v13 - 1) > 0 )
    {
      do
      {
        v14 = v12[v4];
        if ( v14 == 32 )
          break;
        if ( v14 == 47 )
          break;
        if ( v14 == 0 )
          break;
        ++v4;
      }
      while ( v4 < (int)(v13 - 1) );
    }
    strncpy(/*Destination*/ LibFileName, /*Source*/ v12, /*Count*/ v4);
    LibFileName[v4] = 0;
  }
  if ( strstr(/*Str*/ CommandLineA, /*SubStr*/ aPal) != NULL || strstr(/*Str*/ CommandLineA, /*SubStr*/ aPal_0) != NULL )
    dword_4B1CE0 = atoi(/*String*/ Destination);
  v15 = strstr(/*Str*/ CommandLineA, /*SubStr*/ aPal_1);
  if ( v15 != NULL || (v15 = strstr(/*Str*/ CommandLineA, /*SubStr*/ aPal_2)) != NULL )
  {
    strcpy((char *)&dword_7C9120, "..\\bze\\");
    strcat((char *)&dword_7C9120, v15 + 5);
    for ( i = strlen((const char *)&dword_7C9120) + 1; v4 < (int)(i - 1); ++v4 )
    {
      v17 = *((_BYTE *)&dword_7C9120 + v4);
      if ( v17 == 32 )
        break;
      if ( v17 == 47 )
        break;
      if ( v17 == 0 )
        break;
    }
    *((_BYTE *)&dword_7C9120 + v4) = 0;
    dword_4B1CE0 = -1;
  }
  if ( strstr(/*Str*/ CommandLineA, /*SubStr*/ asc_467538) != NULL
    || strstr(/*Str*/ CommandLineA, /*SubStr*/ asc_467538) != NULL )
  {
    dword_4B1CE0 = -100;
  }
  return sub_424CE0(/*Str*/ CommandLineA);
}

// 0x409540  sub_409540
FILE *__cdecl sub_409540(char *FileName)
{
  FILE *result; // eax
  FILE *v2; // esi
  size_t v3; // edi

  result = FsFOpen(FileName, /*Mode*/ aRb);
  v2 = result;
  v3 = 0;
  if ( result != NULL )
  {
    fseek(/*Stream*/ result, /*Offset*/ 0, /*Origin*/ 2);
    v3 = ftell(/*Stream*/ v2);
    fseek(/*Stream*/ v2, /*Offset*/ 0, /*Origin*/ 0);
    fread(/*Buffer*/ (char *)dword_4B1CA4 + 0x100000, /*ElementSize*/ 1u, /*ElementCount*/ v3, /*Stream*/ v2);
    result = (FILE *)fclose(/*Stream*/ v2);
  }
  ElementCount = v3;
  dword_4B1D04 = 2;
  dword_4B1D08 = 0;
  return result;
}

// 0x4095c0  sub_4095C0
int __cdecl sub_4095C0(char *FileName)
{
  FILE *v1; // esi
  int result; // eax

  v1 = FsFOpen(FileName, /*Mode*/ aWb);
  result = ElementCount;
  if ( v1 != NULL )
  {
    fwrite(/*Buffer*/ (char *)dword_4B1CA4 + 0x100000, /*ElementSize*/ 1u, /*ElementCount*/ ElementCount, /*Stream*/ v1);
    result = fclose(/*Stream*/ v1);
  }
  dword_4B1D04 = 0;
  return result;
}

// 0x409610  sub_409610
int __stdcall sub_409610(_DWORD *a1, int a2)
{
  int v3; // eax
  int v4; // edx
  int v5; // ecx

  if ( dword_4B1A58 > 127 )
    return 0;
  v3 = dword_4B1A50;
  v4 = dword_4B1A58 + 1;
  v5 = 4 * (dword_4B1A58 + 532 * dword_4B1A50) - 2128;
  *(int *)((char *)&dword_7C6890 + v5) = a1[3];
  *(int *)((char *)&dword_7C6A90 + v5) = a1[2];
  *(int *)((char *)&dword_7C6C90 + v5) = a1[21];
  dword_4B1A58 = v4;
  dword_7C603C[532 * v3] = v4;
  return 1;
}

// 0x409680  sub_409680
int __stdcall sub_409680(_DWORD *a1, int a2, const char *a3, int a4, int a5, int a6)
{
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  _DWORD *v10; // edx

  v6 = a4;
  v7 = 2128 * dword_4B1A50;
  v8 = dword_4B1A54 + 1;
  ++dword_7C6888[532 * dword_4B1A50];
  dword_4B1A54 = v8;
  if ( *(_DWORD *)(a4 + 156) != 0 )
  {
    v9 = v7 + 88 * v8;
    *(int *)((char *)&dword_7C6720 + v9) = 1;
  }
  else
  {
    v6 = a5;
    v9 = v7 + 88 * v8;
    *(int *)((char *)&dword_7C6720 + v9) = 0;
  }
  *(int *)((char *)&dword_7C6724 + v9) = *(_DWORD *)(v6 + 8) == 1;
  v10 = (_DWORD *)((char *)&unk_7C6710 + v9);
  *v10 = *a1;
  v10[1] = a1[1];
  v10[2] = a1[2];
  v10[3] = a1[3];
  strcpy(&byte_7C66D0[v9], a3);
  return 1;
}

// 0x409750  Callback
BOOL __stdcall Callback(GUID *lpGUID, const char *a2, LPSTR a3, LPVOID a4)
{
  int v4; // eax
  int *v5; // esi
  struct IDirectDrawVtbl *lpVtbl; // edx
  LPDIRECTDRAW v7; // esi
  LPDIRECTDRAW lpDD; // [esp+3Ch] [ebp-144h] BYREF
  int v10; // [esp+40h] [ebp-140h] BYREF
  int v11; // [esp+44h] [ebp-13Ch] BYREF

  ++dword_4B1A50;
  v4 = 532 * dword_4B1A50;
  if ( lpGUID != NULL )
  {
    *(GUID *)&dword_7C66C0[532 * dword_4B1A50] = *lpGUID;
  }
  else
  {
    v5 = &dword_7C66C0[v4];
    dword_7C66C0[532 * dword_4B1A50] = 0;
    v5[1] = 0;
    v5[2] = 0;
    v5[3] = 0;
  }
  strcpy(&byte_7C6640[v4 * 4], a2);
  DirectDrawCreate(lpGUID, /*lplpDD*/ &lpDD, /*pUnkOuter*/ NULL);
  dword_4B1A58 = 0;
  lpVtbl = lpDD->lpVtbl;
  v7 = lpDD;
  v11 = 316;
  lpVtbl->GetCaps(/*This*/ lpDD, (LPDDCAPS)&v11, NULL);
  v7->lpVtbl->EnumDisplayModes(/*This*/ v7, 0, NULL, NULL, (LPDDENUMMODESCALLBACK)sub_409610);
  lpDD->lpVtbl->QueryInterface(/*This*/ lpDD, /*riid*/ &stru_45CCD8, /*ppvObj*/ (LPVOID *)&v10);
  dword_4B1A54 = 0;
  (*(void (__stdcall **)(int, int (__stdcall *)(_DWORD *, int, const char *, int, int, int), _DWORD))(*(_DWORD *)v10 + 16))(
    v10,
    sub_409680,
    0);
  (*(void (__stdcall **)(int))(*(_DWORD *)v10 + 8))(v10);
  lpDD->lpVtbl->Release(/*This*/ lpDD);
  return true;
}

// 0x409880  sub_409880
int sub_409880()
{
  int result; // eax
  int *v1; // edi
  int v2; // eax
  int v3; // esi
  int *v4; // eax
  int *v5; // ecx
  int *v6; // edx
  int *v7; // esi
  int v8; // edi
  int v9; // ebx
  bool v10; // zf
  int v11; // [esp+0h] [ebp-18h]
  int v12; // [esp+4h] [ebp-14h]
  int i; // [esp+8h] [ebp-10h]
  int *v14; // [esp+Ch] [ebp-Ch]
  int v15; // [esp+10h] [ebp-8h]
  int v16; // [esp+14h] [ebp-4h]

  DirectDrawEnumerateA(/*lpCallback*/ (LPDDENUMCALLBACKA)Callback, /*lpContext*/ NULL);
  result = dword_4B1A50;
  if ( dword_4B1A50 > 0 )
  {
    v1 = (int *)&unk_7C688C;
    v11 = 0;
    v14 = (int *)&unk_7C688C;
    v15 = dword_4B1A50;
    do
    {
      v2 = 0;
      for ( i = 0; v2 < *v1; i = v2 )
      {
        v12 = 0;
        if ( *v1 > 0 )
        {
          v3 = v2 + v11;
          v4 = v1 + 129;
          v3 *= 4;
          v5 = (int *)((char *)&dword_7C6890 + v3);
          v6 = (int *)((char *)&dword_7C6A90 + v3);
          v7 = (int *)((char *)&dword_7C6C90 + v3);
          do
          {
            if ( v4[128] + *v4 * *(v4 - 128) > *v7 + *v5 * *v6 )
            {
              v8 = *v5;
              v9 = *v6;
              v16 = *v7;
              *v5 = *(v4 - 128);
              *v6 = *v4;
              *v7 = v4[128];
              *(v4 - 128) = v8;
              *v4 = v9;
              v4[128] = v16;
            }
            v1 = v14;
            ++v4;
            ++v12;
          }
          while ( v12 < *v14 );
          v2 = i;
        }
        ++v2;
      }
      v1 += 532;
      result = v15 - 1;
      v10 = v15 == 1;
      v14 = v1;
      v11 += 532;
      --v15;
    }
    while ( !v10 );
  }
  return result;
}

// 0x4099b0  sub_4099B0
int sub_4099B0()
{
  _BYTE *v0; // edx
  int *v1; // ecx
  int result; // eax

  if ( dword_9CA82C == 2 && dword_9CA824 == 2 )
  {
    v0 = &unk_4674D0;
  }
  else
  {
    v0 = &unk_467410;
    if ( dword_9CA838 == 0 )
      v0 = &unk_467470;
  }
  dword_7C62A0 = (int)v0;
  v1 = &dword_7C6A90;
  do
  {
    for ( result = 0; result <= 84; result += 12 )
    {
      if ( *(v1 - 128) == *(_DWORD *)&v0[result] && *v1 == *(_DWORD *)&v0[result + 4] && v1[128] == 16 )
      {
        v0[result + 8] = 1;
        v0 = (_BYTE *)dword_7C62A0;
      }
    }
    ++v1;
  }
  while ( (int)v1 < (int)dword_7C6B90 );
  return result;
}
