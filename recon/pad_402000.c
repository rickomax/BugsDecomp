// Module `pad_402000`.
//
// Reconstructed from Bugs.exe (PC v1.0) by tools/recon.py.
// Generated file -- do not edit by hand; see recon/README.md.
//
// Address range: 0x402000 - 0x403260 (16 functions).

#include "bugs.h"


// 0x402000  EnumDInputDevs
// IDA symbol: sub_402000
// Documented as port/pad in doc/functions.md.
int __stdcall EnumDInputDevs(int a1, int a2)
{
  int v3; // esi
  int v4; // [esp+58h] [ebp-2Ch] BYREF
  int v5; // [esp+5Ch] [ebp-28h]
  int v6; // [esp+60h] [ebp-24h]
  int v7; // [esp+64h] [ebp-20h]
  int v8; // [esp+68h] [ebp-1Ch]
  int v9; // [esp+6Ch] [ebp-18h] BYREF
  int v10; // [esp+70h] [ebp-14h]
  int v11; // [esp+74h] [ebp-10h]
  int v12; // [esp+78h] [ebp-Ch]
  int v13; // [esp+7Ch] [ebp-8h]
  int v14; // [esp+80h] [ebp-4h]

  if ( (*(int (__stdcall **)(LPVOID, int, int *, _DWORD))(*(_DWORD *)ppv + 12))(ppv, a1 + 4, &a1, 0) >= 0 )
  {
    v3 = (**(int (__stdcall ***)(int, void *, int *))a1)(a1, &unk_45CC98, &dword_4B18C4);
    (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 8))(a1);
    if ( v3 >= 0 )
    {
      dword_9CA858 = 1;
      (*(void (__stdcall **)(int, int *))(*(_DWORD *)dword_4B18C4 + 44))(dword_4B18C4, dword_44ED80);
      (*(void (__stdcall **)(int, HWND, int))(*(_DWORD *)dword_4B18C4 + 52))(dword_4B18C4, hWnd, 9);
      v9 = 24;
      v10 = 16;
      v11 = 0;
      v12 = 1;
      v13 = -127;
      v14 = 128;
      (*(void (__stdcall **)(int, int, int *))(*(_DWORD *)dword_4B18C4 + 24))(dword_4B18C4, 4, &v9);
      v9 = 24;
      v10 = 16;
      v11 = 4;
      v12 = 1;
      v13 = -127;
      v14 = 128;
      (*(void (__stdcall **)(int, int, int *))(*(_DWORD *)dword_4B18C4 + 24))(dword_4B18C4, 4, &v9);
      v4 = 20;
      v5 = 16;
      v6 = 4;
      v7 = 1;
      v8 = 2000;
      (*(void (__stdcall **)(int, int, int *))(*(_DWORD *)dword_4B18C4 + 24))(dword_4B18C4, 5, &v4);
      v4 = 20;
      v5 = 16;
      v6 = 0;
      v7 = 1;
      v8 = 2000;
      (*(void (__stdcall **)(int, int, int *))(*(_DWORD *)dword_4B18C4 + 24))(dword_4B18C4, 5, &v4);
      return 0;
    }
    else
    {
      dword_4B18C4 = 0;
      return 1;
    }
  }
  else
  {
    dword_4B18C4 = 0;
    return 1;
  }
}

// 0x402180  ReadJoystick
// IDA symbol: sub_402180
// Documented as port/pad in doc/functions.md.
int __cdecl ReadJoystick(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int result; // eax
  int v4; // eax
  int v5; // eax
  int i; // ecx
  _DWORD v7[20]; // [esp+18h] [ebp-50h] BYREF

  *a1 = 0;
  *a2 = 0;
  *a3 = 0;
  result = dword_4B18C4;
  if ( dword_4B18C4 != 0 )
  {
    v4 = (*(int (__stdcall **)(int))(*(_DWORD *)dword_4B18C4 + 100))(dword_4B18C4);
    if ( v4 == -2147024866 || v4 == -2147024884 )
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)dword_4B18C4 + 28))(dword_4B18C4);
      v4 = (*(int (__stdcall **)(int))(*(_DWORD *)dword_4B18C4 + 100))(dword_4B18C4);
    }
    if ( v4 >= 0 )
    {
      if ( (*(int (__stdcall **)(int, int, _DWORD *))(*(_DWORD *)dword_4B18C4 + 36))(dword_4B18C4, 80, v7) >= 0 )
      {
        v5 = v7[1];
        *a1 = v7[0];
        *a2 = v5;
        *a3 = 0;
        for ( i = 0; i < 32; ++i )
        {
          if ( *((_BYTE *)&v7[12] + i) != 0 )
            *a3 |= 1 << i;
        }
        return 1;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}

// 0x402250  GetKeyName
// IDA symbol: sub_402250
// Documented as port/pad in doc/functions.md.
_UNKNOWN **__cdecl GetKeyName(int a1)
{
  int v1; // eax
  int v2; // edx
  int *v3; // ecx

  v1 = dword_45E050;
  v2 = 0;
  if ( dword_45E050 == -1 )
    return NULL;
  v3 = &dword_45E050;
  while ( a1 != v1 )
  {
    v1 = v3[9];
    v3 += 9;
    ++v2;
    if ( v1 == -1 )
      return NULL;
  }
  return &off_45E030 + 9 * v2;
}

// 0x402290  MapAltKeyboardInput
// IDA symbol: sub_402290
// Documented as port/pad in doc/functions.md.
_BYTE *MapAltKeyboardInput()
{
  _BYTE *result; // eax
  char v1; // dl
  char v2; // cl
  char v3; // cl
  char v4; // dl

  dword_9CA9C0();
  result = (_BYTE *)dword_4B18D8;
  if ( dword_4B18D8 != 0 )
  {
    v1 = ~*(_BYTE *)(dword_4B18D8 + 2);
    v2 = ~*(_BYTE *)(dword_4B18D8 + 3);
    *(_BYTE *)(dword_4B18D8 + 2) = v1;
    result[3] = v2;
    if ( byte_9CA988 != 0 )
      result[2] = v1 | 0x10;
    if ( byte_9CA98D != 0 )
      result[2] |= 0x20u;
    if ( byte_9CA990 != 0 )
      result[2] |= 0x40u;
    if ( byte_9CA98B != 0 )
      result[2] |= 0x80u;
    if ( byte_9CA8CF != 0 )
      result[2] |= 1u;
    if ( byte_9CA8DC != 0 )
      result[2] |= 8u;
    if ( byte_9CA8C0[(unsigned __int8)byte_9CA86A] != 0 )
      result[3] = v2 | 1;
    if ( byte_9CA8C0[(unsigned __int8)byte_9CA86B] != 0 )
      result[3] |= 2u;
    if ( byte_9CA8C0[(unsigned __int8)dword_9CA86C] != 0 )
      result[3] |= 4u;
    if ( byte_9CA8C0[BYTE1(dword_9CA86C)] != 0 )
      result[3] |= 8u;
    if ( byte_9CA8C0[BYTE2(dword_9CA86C)] != 0 )
      result[3] |= 0x10u;
    if ( byte_9CA8C0[HIBYTE(dword_9CA86C)] != 0 )
      result[3] |= 0x20u;
    if ( byte_9CA8C0[(unsigned __int8)dword_9CA870] != 0 )
      result[3] |= 0x40u;
    if ( byte_9CA8C0[BYTE1(dword_9CA870)] != 0 )
      result[3] |= 0x80u;
    v3 = result[2];
    if ( v1 != v3 )
      result[1] = 65;
    v4 = ~result[3];
    result[2] = ~v3;
    result[3] = v4;
  }
  return result;
}

// 0x4023e0  MapKeyboardInput
// IDA symbol: sub_4023E0
// Documented as port/pad in doc/functions.md.
_BYTE *__thiscall MapKeyboardInput(void *this)
{
  _BYTE *result; // eax
  char v2; // dl
  char v3; // cl
  char v4; // cl
  char v5; // dl

  word_4B18D0 = 0;
  dword_9CA9C0(this);
  result = (_BYTE *)dword_4B18D8;
  if ( dword_4B18D8 != 0 )
  {
    v2 = ~*(_BYTE *)(dword_4B18D8 + 2);
    v3 = ~*(_BYTE *)(dword_4B18D8 + 3);
    *(_BYTE *)(dword_4B18D8 + 2) = v2;
    result[3] = v3;
    if ( byte_9CA8C0[(unsigned __int8)byte_9CA866] != 0 )
      result[2] = v2 | 0x10;
    if ( byte_9CA8C0[unk_9CA868] != 0 )
      result[2] |= 0x20u;
    if ( byte_9CA8C0[(unsigned __int8)byte_9CA867] != 0 )
      result[2] |= 0x40u;
    if ( byte_9CA8C0[(unsigned __int8)byte_9CA869] != 0 )
      result[2] |= 0x80u;
    if ( byte_9CA8C0[unk_9CA874] != 0 )
      result[2] |= 1u;
    if ( byte_9CA8C0[(unsigned __int8)byte_9CA875] != 0 )
      result[2] |= 8u;
    if ( byte_9CA8C0[(unsigned __int8)byte_9CA86A] != 0 )
      result[3] = v3 | 1;
    if ( byte_9CA8C0[(unsigned __int8)byte_9CA86B] != 0 )
      result[3] |= 2u;
    if ( byte_9CA8C0[(unsigned __int8)dword_9CA86C] != 0 )
      result[3] |= 4u;
    if ( byte_9CA8C0[BYTE1(dword_9CA86C)] != 0 )
      result[3] |= 8u;
    if ( byte_9CA8C0[BYTE2(dword_9CA86C)] != 0 )
      result[3] |= 0x10u;
    if ( byte_9CA8C0[HIBYTE(dword_9CA86C)] != 0 )
      result[3] |= 0x20u;
    if ( byte_9CA8C0[(unsigned __int8)dword_9CA870] != 0 )
      result[3] |= 0x40u;
    if ( byte_9CA8C0[BYTE1(dword_9CA870)] != 0 )
      result[3] |= 0x80u;
    if ( byte_9CA8DC != 0 )
      LOBYTE(word_4B18D0) = word_4B18D0 | 1;
    if ( byte_9CA8C1 != 0 )
      LOBYTE(word_4B18D0) = word_4B18D0 | 2;
    if ( byte_9CA8F9 != 0 )
      LOBYTE(word_4B18D0) = word_4B18D0 | 4;
    v4 = result[2];
    if ( v2 != v4 )
      result[1] = 65;
    v5 = ~result[3];
    result[2] = ~v4;
    result[3] = v5;
  }
  return result;
}

// 0x4025b0  sub_4025B0
int __cdecl sub_4025B0(int a1)
{
  if ( a1 == 1 )
  {
    dword_9CA9C4 = 1;
    dword_9CA9C0 = (int (__cdecl *)(_DWORD))ReadKbdDInput;
    InitDInput();
    if ( dword_4B18C8 == 0 )
      dword_9CA9C0 = (int (__cdecl *)(_DWORD))&ReadKbdWinMsg;
    return 1;
  }
  else
  {
    dword_9CA9C4 = 0;
    dword_9CA9C0 = (int (__cdecl *)(_DWORD))&ReadKbdWinMsg;
    return 1;
  }
}

// 0x402610  InitDInput
// IDA symbol: sub_402610
// Documented as port/pad in doc/functions.md.
int InitDInput()
{
  _DWORD v1[4]; // [esp+20h] [ebp-10h] BYREF

  if ( dword_4B18C4 != 0 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)dword_4B18C4 + 32))(dword_4B18C4);
    (*(void (__stdcall **)(int))(*(_DWORD *)dword_4B18C4 + 8))(dword_4B18C4);
    dword_4B18C4 = 0;
  }
  if ( dword_9CA9C4 == 1 )
  {
    if ( dword_9CA8A0 != 0 )
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)dword_4B18C8 + 32))(dword_4B18C8);
      dword_9CA8A0 = 0;
    }
    if ( dword_4B18C8 != 0 )
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)dword_4B18C8 + 8))(dword_4B18C8);
      dword_4B18C8 = 0;
    }
  }
  if ( ppv != NULL )
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv);
  ppv = NULL;
  CoUninitialize();
  if ( CoInitialize(/*pvReserved*/ NULL) < 0 )
    return 0;
  if ( CoCreateInstance(/*rclsid*/ &rclsid, /*pUnkOuter*/ NULL, /*dwClsContext*/ 1u, /*riid*/ &riid, /*ppv*/ &ppv) < 0 )
    return 0;
  if ( (*(int (__stdcall **)(LPVOID, HINSTANCE, int))(*(_DWORD *)ppv + 28))(ppv, hInstance, 1280) < 0 )
    return 0;
  v1[0] = 1864182625;
  v1[1] = 298833312;
  v1[3] = 21587;
  v1[2] = 1162135487;
  if ( (*(int (__stdcall **)(LPVOID, _DWORD *, int *, _DWORD))(*(_DWORD *)ppv + 12))(
         ppv,
         v1,
         &dword_4B18C8,
         0) < 0 )
  {
    dword_4B18C8 = 0;
  }
  else
  {
    (*(void (__stdcall **)(int, int *))(*(_DWORD *)dword_4B18C8 + 44))(dword_4B18C8, dword_44FDA0);
    (*(void (__stdcall **)(int, HWND, int))(*(_DWORD *)dword_4B18C8 + 52))(dword_4B18C8, hWnd, 6);
    dword_9CA8A0 = (*(int (__stdcall **)(int))(*(_DWORD *)dword_4B18C8 + 28))(dword_4B18C8) >= 0;
  }
  (*(void (__stdcall **)(LPVOID, int, int (__stdcall *)(int, int), _DWORD, int))(*(_DWORD *)ppv + 16))(
    ppv,
    4,
    EnumDInputDevs,
    0,
    1);
  return 1;
}

// 0x402790  FiniDInput
// IDA symbol: sub_402790
// Documented as port/pad in doc/functions.md.
void FiniDInput()
{
  if ( dword_4B18C4 != 0 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)dword_4B18C4 + 32))(dword_4B18C4);
    (*(void (__stdcall **)(int))(*(_DWORD *)dword_4B18C4 + 8))(dword_4B18C4);
    dword_4B18C4 = 0;
  }
  if ( dword_9CA9C4 == 1 )
  {
    if ( dword_9CA8A0 != 0 )
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)dword_4B18C8 + 32))(dword_4B18C8);
      dword_9CA8A0 = 0;
    }
    if ( dword_4B18C8 != 0 )
    {
      (*(void (__stdcall **)(int))(*(_DWORD *)dword_4B18C8 + 8))(dword_4B18C8);
      dword_4B18C8 = 0;
    }
  }
  if ( ppv != NULL )
    (*(void (__stdcall **)(LPVOID))(*(_DWORD *)ppv + 8))(ppv);
  ppv = NULL;
  CoUninitialize();
}

// 0x402810  ReadKbdDInput
// IDA symbol: sub_402810
// Documented as port/pad in doc/functions.md.
int ReadKbdDInput()
{
  int result; // eax
  int v1; // esi

  result = (*(int (__stdcall **)(int, int, char *))(*(_DWORD *)dword_4B18C8 + 36))(
             dword_4B18C8,
             256,
             byte_9CA8C0);
  v1 = result;
  if ( result != 0 )
  {
    while ( 1 )
    {
      if ( v1 != -2147024866
        || (dword_9CA8A0 = 0, (*(int (__stdcall **)(int))(*(_DWORD *)dword_4B18C8 + 28))(dword_4B18C8) < 0) )
      {
        if ( v1 != -2147024884 )
          break;
        dword_9CA8A0 = 0;
        if ( (*(int (__stdcall **)(int))(*(_DWORD *)dword_4B18C8 + 28))(dword_4B18C8) < 0 )
          break;
      }
      dword_9CA8A0 = 1;
      result = (*(int (__stdcall **)(int, int, char *))(*(_DWORD *)dword_4B18C8 + 36))(
                 dword_4B18C8,
                 256,
                 byte_9CA8C0);
      v1 = result;
      if ( result == 0 )
        return result;
    }
    return ReadKbdWinMsg();
  }
  return result;
}

// 0x4028a0  ReadKbdWinMsg
// IDA symbol: sub_4028A0
// Documented as port/pad in doc/functions.md.
int ReadKbdWinMsg()
{
  char v1; // [esp+0h] [ebp-12Ch]
  BYTE KeyState[13]; // [esp+10h] [ebp-11Ch] BYREF
  int v3; // [esp+1Dh] [ebp-10Fh]
  int v4; // [esp+24h] [ebp-108h]
  int v5; // [esp+2Bh] [ebp-101h]
  unsigned __int8 v6; // [esp+30h] [ebp-FCh]
  unsigned __int8 v7; // [esp+31h] [ebp-FBh]
  unsigned __int8 v8; // [esp+32h] [ebp-FAh]
  unsigned __int8 v9; // [esp+33h] [ebp-F9h]
  unsigned __int8 v10; // [esp+34h] [ebp-F8h]
  unsigned __int8 v11; // [esp+35h] [ebp-F7h]
  unsigned __int8 v12; // [esp+36h] [ebp-F6h]
  unsigned __int8 v13; // [esp+37h] [ebp-F5h]
  int v14; // [esp+38h] [ebp-F4h]
  unsigned __int8 v15; // [esp+3Ch] [ebp-F0h]
  unsigned __int8 v16; // [esp+3Dh] [ebp-EFh]
  unsigned __int8 v17; // [esp+3Eh] [ebp-EEh]
  unsigned __int8 v18; // [esp+40h] [ebp-ECh]
  unsigned __int8 v19; // [esp+41h] [ebp-EBh]
  unsigned __int8 v20; // [esp+42h] [ebp-EAh]
  unsigned __int8 v21; // [esp+43h] [ebp-E9h]
  unsigned __int8 v22; // [esp+44h] [ebp-E8h]
  unsigned __int8 v23; // [esp+45h] [ebp-E7h]
  unsigned __int8 v24; // [esp+46h] [ebp-E6h]
  unsigned __int8 v25; // [esp+47h] [ebp-E5h]
  unsigned __int8 v26; // [esp+48h] [ebp-E4h]
  unsigned __int8 v27; // [esp+49h] [ebp-E3h]
  unsigned __int8 v28; // [esp+51h] [ebp-DBh]
  unsigned __int8 v29; // [esp+52h] [ebp-DAh]
  unsigned __int8 v30; // [esp+53h] [ebp-D9h]
  unsigned __int8 v31; // [esp+54h] [ebp-D8h]
  unsigned __int8 v32; // [esp+55h] [ebp-D7h]
  unsigned __int8 v33; // [esp+56h] [ebp-D6h]
  unsigned __int8 v34; // [esp+57h] [ebp-D5h]
  unsigned __int8 v35; // [esp+58h] [ebp-D4h]
  unsigned __int8 v36; // [esp+59h] [ebp-D3h]
  unsigned __int8 v37; // [esp+5Ah] [ebp-D2h]
  unsigned __int8 v38; // [esp+5Bh] [ebp-D1h]
  unsigned __int8 v39; // [esp+5Ch] [ebp-D0h]
  unsigned __int8 v40; // [esp+5Dh] [ebp-CFh]
  unsigned __int8 v41; // [esp+5Eh] [ebp-CEh]
  unsigned __int8 v42; // [esp+5Fh] [ebp-CDh]
  unsigned __int8 v43; // [esp+60h] [ebp-CCh]
  unsigned __int8 v44; // [esp+61h] [ebp-CBh]
  unsigned __int8 v45; // [esp+62h] [ebp-CAh]
  unsigned __int8 v46; // [esp+63h] [ebp-C9h]
  unsigned __int8 v47; // [esp+64h] [ebp-C8h]
  unsigned __int8 v48; // [esp+65h] [ebp-C7h]
  unsigned __int8 v49; // [esp+66h] [ebp-C6h]
  unsigned __int8 v50; // [esp+67h] [ebp-C5h]
  unsigned __int8 v51; // [esp+68h] [ebp-C4h]
  unsigned __int8 v52; // [esp+69h] [ebp-C3h]
  unsigned __int8 v53; // [esp+6Ah] [ebp-C2h]
  unsigned __int8 v54; // [esp+70h] [ebp-BCh]
  unsigned __int8 v55; // [esp+71h] [ebp-BBh]
  unsigned __int8 v56; // [esp+72h] [ebp-BAh]
  unsigned __int8 v57; // [esp+73h] [ebp-B9h]
  unsigned __int8 v58; // [esp+74h] [ebp-B8h]
  unsigned __int8 v59; // [esp+75h] [ebp-B7h]
  unsigned __int8 v60; // [esp+76h] [ebp-B6h]
  unsigned __int8 v61; // [esp+77h] [ebp-B5h]
  unsigned __int8 v62; // [esp+78h] [ebp-B4h]
  unsigned __int8 v63; // [esp+79h] [ebp-B3h]
  unsigned __int8 v64; // [esp+7Ah] [ebp-B2h]
  unsigned __int8 v65; // [esp+7Bh] [ebp-B1h]
  unsigned __int8 v66; // [esp+7Dh] [ebp-AFh]
  unsigned __int8 v67; // [esp+7Eh] [ebp-AEh]
  unsigned __int8 v68; // [esp+7Fh] [ebp-ADh]
  unsigned __int8 v69; // [esp+80h] [ebp-ACh]
  unsigned __int8 v70; // [esp+81h] [ebp-ABh]
  unsigned __int8 v71; // [esp+82h] [ebp-AAh]
  unsigned __int8 v72; // [esp+83h] [ebp-A9h]
  unsigned __int8 v73; // [esp+84h] [ebp-A8h]
  unsigned __int8 v74; // [esp+85h] [ebp-A7h]
  unsigned __int8 v75; // [esp+86h] [ebp-A6h]
  unsigned __int8 v76; // [esp+87h] [ebp-A5h]
  unsigned __int8 v77; // [esp+88h] [ebp-A4h]
  unsigned __int8 v78; // [esp+89h] [ebp-A3h]
  unsigned __int8 v79; // [esp+8Ah] [ebp-A2h]
  unsigned __int8 v80; // [esp+8Bh] [ebp-A1h]
  unsigned __int8 v81; // [esp+A0h] [ebp-8Ch]
  unsigned __int8 v82; // [esp+A1h] [ebp-8Bh]
  unsigned __int8 v83; // [esp+B0h] [ebp-7Ch]
  unsigned __int8 v84; // [esp+B1h] [ebp-7Bh]
  unsigned __int8 v85; // [esp+B2h] [ebp-7Ah]
  unsigned __int8 v86; // [esp+B3h] [ebp-79h]
  unsigned __int8 v87; // [esp+B4h] [ebp-78h]
  unsigned __int8 v88; // [esp+B5h] [ebp-77h]
  struct tagMSG Msg; // [esp+110h] [ebp-1Ch] BYREF

  while ( PeekMessageA(/*lpMsg*/ &Msg, /*hWnd*/ NULL, /*wMsgFilterMin*/ 0, /*wMsgFilterMax*/ 0, /*wRemoveMsg*/ 1u) )
  {
    if ( Msg.message == 18 )
      dword_45F2B0 = 0;
    TranslateMessage(/*lpMsg*/ &Msg);
    DispatchMessageA(/*lpMsg*/ &Msg);
  }
  if ( !GetKeyboardState(/*lpKeyState*/ KeyState) )
    ConPrintf(/*Format*/ aKeyboardHandle, /*ArgList*/ v1);
  byte_9CA8C1 = (unsigned __int8)v5 >> 7;
  byte_9CA8FB = v69 >> 7;
  byte_9CA8FC = v70 >> 7;
  byte_9CA8FD = v71 >> 7;
  byte_9CA8FE = v72 >> 7;
  byte_9CA8FF = v73 >> 7;
  byte_9CA900 = v74 >> 7;
  byte_9CA901 = v75 >> 7;
  byte_9CA902 = v76 >> 7;
  byte_9CA903 = v77 >> 7;
  byte_9CA904 = v78 >> 7;
  byte_9CA917 = v79 >> 7;
  byte_9CA918 = v80 >> 7;
  byte_9CA8CB = v18 >> 7;
  byte_9CA8C2 = v19 >> 7;
  byte_9CA8C3 = v20 >> 7;
  byte_9CA8C4 = v21 >> 7;
  byte_9CA8C5 = v22 >> 7;
  byte_9CA8C6 = v23 >> 7;
  byte_9CA8C7 = v24 >> 7;
  byte_9CA8C8 = v25 >> 7;
  byte_9CA8C9 = v26 >> 7;
  byte_9CA8CA = v27 >> 7;
  byte_9CA8D0 = v44 >> 7;
  byte_9CA8D1 = v50 >> 7;
  byte_9CA8D2 = v32 >> 7;
  byte_9CA8D3 = v45 >> 7;
  byte_9CA8D4 = v47 >> 7;
  byte_9CA8D5 = v52 >> 7;
  byte_9CA8D6 = v48 >> 7;
  byte_9CA8D7 = v36 >> 7;
  byte_9CA8D8 = v42 >> 7;
  byte_9CA8D9 = v43 >> 7;
  byte_9CA8DE = v28 >> 7;
  byte_9CA8DF = v46 >> 7;
  byte_9CA8E0 = v31 >> 7;
  byte_9CA8E1 = v33 >> 7;
  byte_9CA8E2 = v34 >> 7;
  byte_9CA8E3 = v35 >> 7;
  byte_9CA8E4 = v37 >> 7;
  byte_9CA8E5 = v38 >> 7;
  byte_9CA8E6 = v39 >> 7;
  byte_9CA8EC = v53 >> 7;
  byte_9CA8ED = v51 >> 7;
  byte_9CA8EE = v30 >> 7;
  byte_9CA8EF = v49 >> 7;
  byte_9CA8F0 = v29 >> 7;
  byte_9CA8F1 = v41 >> 7;
  byte_9CA8F2 = v40 >> 7;
  byte_9CA8F9 = v6 >> 7;
  byte_9CA907 = v61 >> 7;
  byte_9CA908 = v62 >> 7;
  byte_9CA909 = v63 >> 7;
  byte_9CA90B = v58 >> 7;
  byte_9CA90C = v59 >> 7;
  byte_9CA90D = v60 >> 7;
  byte_9CA90F = v55 >> 7;
  byte_9CA910 = v56 >> 7;
  byte_9CA911 = v57 >> 7;
  byte_9CA912 = v54 >> 7;
  byte_9CA8F7 = v64 >> 7;
  byte_9CA8CF = KeyState[9] >> 7;
  byte_9CA8DD = v85 >> 7;
  byte_9CA8EA = v83 >> 7;
  byte_9CA8F6 = v84 >> 7;
  byte_9CA8F8 = v87 >> 7;
  byte_9CA8FA = (unsigned __int8)v4 >> 7;
  byte_9CA905 = v81 >> 7;
  byte_9CA906 = v82 >> 7;
  byte_9CA8CE = KeyState[8] >> 7;
  byte_9CA90A = v66 >> 7;
  byte_9CA90E = v65 >> 7;
  byte_9CA8DC = (unsigned __int8)v3 >> 7;
  byte_9CA913 = v67 >> 7;
  byte_9CA95C = (unsigned __int8)v3 >> 7;
  byte_9CA95D = v86 >> 7;
  byte_9CA975 = v68 >> 7;
  byte_9CA977 = v15 >> 7;
  byte_9CA978 = v88 >> 7;
  byte_9CA987 = v10 >> 7;
  byte_9CA988 = v12 >> 7;
  byte_9CA989 = v7 >> 7;
  byte_9CA98B = v11 >> 7;
  byte_9CA98D = v13 >> 7;
  byte_9CA98F = v9 >> 7;
  byte_9CA990 = (unsigned __int8)v14 >> 7;
  byte_9CA991 = v8 >> 7;
  byte_9CA992 = v16 >> 7;
  byte_9CA993 = v17 >> 7;
  return v17 >> 7;
}

// 0x402fd0  PadStartCom
// IDA symbol: sub_402FD0
// Documented as sdk/pad in doc/functions.md.
// attributes: thunk
int PadStartCom()
{
  return InitDInput();
}

// 0x402fe0  PadGetState
// IDA symbol: sub_402FE0
// Documented as sdk/pad in doc/functions.md.
int PadGetState()
{
  return 6;
}

// 0x402ff0  PadInitDirect
// IDA symbol: sub_402FF0
// Documented as sdk/pad in doc/functions.md.
int __cdecl PadInitDirect(int a1, int a2)
{
  dword_4B18D8 = a1;
  dword_4B18DC = a2;
  return a1;
}

// 0x403010  MapJoystickInput
// IDA symbol: sub_403010
// Documented as port/pad in doc/functions.md.
void MapJoystickInput()
{
  _BYTE *v0; // esi
  int v1; // edx
  int v2; // eax
  char v3; // al
  char v4; // dl

  v0 = (_BYTE *)dword_4B18D8;
  if ( dword_4B18D8 != 0 )
  {
    *(_BYTE *)dword_4B18D8 = 0;
    v0[1] = 65;
    v0[2] = -1;
    v0[3] = -1;
    v0[4] = 0x80;
    v0[5] = 0x80;
    v0[6] = 0x80;
    v0[7] = 0x80;
    if ( ReadJoystick(&dword_4B1860, dword_4B1864, &dword_4B1878) != 0 )
    {
      dword_4B1860 += 128;
      if ( (unsigned int)dword_4B1860 > 0xFF )
        dword_4B1860 = 255;
      dword_4B1864[0] += 128;
      if ( dword_4B1864[0] > 0xFFu )
        dword_4B1864[0] = 255;
      v0[1] = 115;
      v1 = dword_4B1878;
      dword_4B1878 = 0;
      v0[3] = 0;
      if ( ((1 << dword_9CA85C) & v1) != 0 )
        v0[3] = 16;
      if ( ((1 << SBYTE1(dword_9CA85C)) & v1) != 0 )
        v0[3] |= 0x20u;
      if ( ((1 << SBYTE2(dword_9CA85C)) & v1) != 0 )
        v0[3] |= 0x40u;
      if ( ((1 << SHIBYTE(dword_9CA85C)) & v1) != 0 )
        v0[3] |= 0x80u;
      if ( ((1 << dword_9CA860) & v1) != 0 )
        v0[3] |= 4u;
      if ( ((1 << SBYTE1(dword_9CA860)) & v1) != 0 )
        v0[3] |= 8u;
      if ( ((1 << SBYTE2(dword_9CA860)) & v1) != 0 )
        v0[3] |= 1u;
      if ( ((1 << SHIBYTE(dword_9CA860)) & v1) != 0 )
        v0[3] |= 2u;
      v2 = dword_4B1878;
      if ( ((1 << byte_9CA864) & v1) != 0 )
      {
        BYTE1(v2) = BYTE1(dword_4B1878) | 1;
        dword_4B1878 = v2;
      }
      if ( ((1 << byte_9CA865) & v1) != 0 )
      {
        BYTE1(v2) |= 2u;
        dword_4B1878 = v2;
      }
      v3 = 4 * (BYTE1(v2) & 0xF);
      v0[2] = v3;
      if ( dword_4B1864[0] < 0x10u )
        v0[2] = v3 | 0x10;
      if ( (unsigned int)dword_4B1860 > 0xE0 )
        v0[2] |= 0x20u;
      if ( dword_4B1864[0] > 0xE0u )
        v0[2] |= 0x40u;
      if ( (unsigned int)dword_4B1860 < 0x10 )
        v0[2] |= 0x80u;
      v4 = ~v0[3];
      v0[2] = ~v0[2];
      v0[3] = v4;
      v0[4] = dword_4B1860;
      v0[5] = dword_4B1864[0];
      v0[6] = dword_4B1860;
      v0[7] = dword_4B1864[0];
    }
  }
}

// 0x403210  GetPressedButton
// IDA symbol: sub_403210
// Documented as port/pad in doc/functions.md.
int GetPressedButton()
{
  int result; // eax

  if ( ReadJoystick(&dword_4B1860, dword_4B1864, dword_4B1878) == 0 )
    return 255;
  result = 0;
  while ( ((1 << result) & dword_4B1878[0]) == 0 )
  {
    if ( ++result >= 16 )
      return 254;
  }
  return result;
}

// 0x403260  GetButtonName
// IDA symbol: sub_403260
// Documented as port/pad in doc/functions.md.
char *__cdecl GetButtonName(unsigned int a1)
{
  int v1; // eax

  v1 = 0;
  if ( a1 <= 0x10 )
  {
    sprintf(/*Buffer*/ Buffer, /*Format*/ "BUTTON%i", a1);
    v1 = 1;
  }
  if ( a1 == 255 )
  {
    strcpy(Buffer, "NULL");
    v1 = 1;
  }
  if ( a1 == 254 )
  {
    v1 = 1;
    strcpy(Buffer, " ");
  }
  return v1 != 0 ? Buffer : NULL;
}
