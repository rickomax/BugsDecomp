// Module `unk_42d1e0`.
//
// Reconstructed from Bugs.exe (PC v1.0) by tools/recon.py.
// Generated file -- do not edit by hand; see recon/README.md.
//
// Address range: 0x42d1e0 - 0x42d390 (11 functions).

#include "bugs.h"


// 0x42d1e0  sub_42D1E0
int __cdecl sub_42D1E0(int a1, int a2)
{
  int result; // eax

  result = sub_44E4B0(*(unsigned __int16 *)(a2 + 4), 0, 0);
  dword_4B3FC4 = result;
  return result;
}

// 0x42d200  sub_42D200
int __cdecl sub_42D200(int a1, int a2)
{
  __int16 v2; // cx
  int result; // eax
  int v4; // ecx

  v2 = *(_WORD *)(a2 + 4);
  result = dword_4B3740;
  if ( v2 == 255 )
  {
    if ( dword_4B3740 != 0 )
    {
      do
      {
        if ( *(_WORD *)(result + 44) == 32 )
          *(_DWORD *)(result + 20) |= 0x100u;
        result = *(_DWORD *)result;
      }
      while ( result != 0 );
    }
  }
  else if ( dword_4B3740 != 0 )
  {
    do
    {
      if ( *(_WORD *)(result + 28) == v2 )
        break;
      result = *(_DWORD *)result;
    }
    while ( result != 0 );
    if ( result != 0 )
    {
      v4 = *(_DWORD *)(result + 20);
      BYTE1(v4) |= 1u;
      *(_DWORD *)(result + 20) = v4;
    }
  }
  return result;
}

// 0x42d250  sub_42D250
int __cdecl sub_42D250(int a1, int a2)
{
  int result; // eax

  result = sub_44E4B0((unsigned __int8)byte_4B2260[*(unsigned __int16 *)(a2 + 6)], 0, 0);
  dword_4B3FC4 = result;
  return result;
}

// 0x42d280  sub_42D280
int __cdecl sub_42D280(int a1, int a2)
{
  int result; // eax

  result = sub_44E4B0(*((unsigned __int8 *)dword_52FD00 + *(unsigned __int16 *)(a2 + 6) + 65600), 0, 0);
  dword_4B3FC4 = result;
  return result;
}

// 0x42d2b0  sub_42D2B0
int __cdecl sub_42D2B0(int a1)
{
  *(_DWORD *)(a1 + 348) |= 0x10u;
  return a1;
}

// 0x42d2c0  sub_42D2C0
int __cdecl sub_42D2C0(int a1)
{
  *(_DWORD *)(a1 + 348) &= ~0x10u;
  return a1;
}

// 0x42d2d0  sub_42D2D0
_WORD *__cdecl sub_42D2D0(_WORD *a1)
{
  dword_4B3B8C = 0;
  dword_4B3C44 = 0;
  a1[201] = 0;
  a1[203] = a1[116];
  return a1;
}

// 0x42d300  sub_42D300
int __cdecl sub_42D300(int a1, int a2)
{
  byte_4B3241 = *(_BYTE *)(a2 + 4);
  return a2;
}

// 0x42d310  sub_42D310
int __cdecl sub_42D310(int a1, int a2)
{
  int result; // eax

  result = a1;
  if ( a1 != dword_4B324C || *(_DWORD *)(a1 + 344) != 37 || (byte_4B39D0 & 1) != 0 )
  {
    byte_4B3242 = *(_BYTE *)(a2 + 4);
    byte_4B3243 = *(_BYTE *)(a2 + 6);
    byte_4B3246 = 0;
    return a2;
  }
  return result;
}

// 0x42d350  sub_42D350
int __cdecl sub_42D350(int a1, int a2)
{
  if ( word_4B3948 == 0 )
    word_4B394A = 0;
  word_4B3946 = 11 * *(_WORD *)(a2 + 4);
  word_4B3948 = *(_WORD *)(a2 + 6);
  return a2;
}

// 0x42d390  sub_42D390
__int16 __cdecl sub_42D390(int a1, int a2)
{
  __int16 result; // ax
  _BYTE *v3; // ecx
  int i; // edx
  __int16 v5; // ax
  char v6; // cl
  unsigned __int16 v7; // [esp+8h] [ebp+8h]

  result = *(_WORD *)(a2 + 4);
  v3 = dword_52FD00;
  v7 = *((unsigned __int8 *)dword_52FD00 + *(unsigned __int16 *)(a2 + 6) + 65600);
  if ( result > 0 )
  {
    for ( i = result; i != 0; --i )
    {
      if ( (v7 & 1) == 0 )
      {
        HIBYTE(v5) = v3[65852];
        LOBYTE(v5) = v3[65607];
        v3[65607] = ++v5;
        v6 = HIBYTE(v5);
        result = (__int16)dword_52FD00;
        *((_BYTE *)dword_52FD00 + 65852) = v6;
        v3 = dword_52FD00;
      }
      v7 >>= 1;
    }
  }
  return result;
}
