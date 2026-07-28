// Module `unk_42d410`.
//
// Reconstructed from Bugs.exe (PC v1.0) by tools/recon.py.
// Generated file -- do not edit by hand; see recon/README.md.
//
// Address range: 0x42d410 - 0x431160 (72 functions).

#include "bugs.h"


// 0x42d410  sub_42D410
int __cdecl sub_42D410(int a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 108);
  if ( result != 0 )
  {
    *(_DWORD *)(result + 20) |= 0x100u;
    result = *(_DWORD *)(a1 + 108);
    if ( *(_DWORD *)(result + 112) == a1 )
      *(_DWORD *)(result + 112) = 0;
    *(_DWORD *)(a1 + 108) = 0;
  }
  return result;
}

// 0x42d440  sub_42D440
int __cdecl sub_42D440(int a1)
{
  *(_BYTE *)(a1 + 60) |= 0x40u;
  return a1;
}

// 0x42d450  sub_42D450
int __cdecl sub_42D450(int a1, int a2)
{
  byte_4B3243 = 0;
  byte_4B3242 = *(_BYTE *)(a2 + 4);
  byte_4B3246 = *(_BYTE *)(a2 + 6);
  return a2;
}

// 0x42d470  sub_42D470
int __cdecl sub_42D470(_DWORD *a1, int a2)
{
  int v2; // edx
  int v3; // eax
  int result; // eax
  int v5[4]; // [esp+0h] [ebp-10h] BYREF

  v2 = a1[58];
  v3 = a1[59];
  v5[0] = a1[57] - dword_4B38CC;
  v5[1] = v2 - dword_4B38D0;
  v5[2] = v3 - dword_4B38D4;
  result = sub_407990(v5);
  if ( result < 2048 )
  {
    byte_4B3242 = *(_BYTE *)(a2 + 4);
    result = *(unsigned __int16 *)(a2 + 6) * result / 2048;
    byte_4B3243 = *(_BYTE *)(a2 + 6) - result;
  }
  return result;
}

// 0x42d500  sub_42D500
void __cdecl sub_42D500(_DWORD *a1, int a2)
{
  int v2; // edx
  int v3; // eax
  int v4; // eax
  unsigned __int16 v5; // dx
  int v6[4]; // [esp+0h] [ebp-10h] BYREF

  if ( word_4B3948 == 0 )
  {
    v2 = a1[58];
    v3 = a1[59];
    v6[0] = a1[57] - dword_4B38CC;
    v6[1] = v2 - dword_4B38D0;
    v6[2] = v3 - dword_4B38D4;
    v4 = sub_407990(v6);
    if ( v4 < 2048 )
    {
      v5 = *(_WORD *)(a2 + 6);
      word_4B394A = 0;
      word_4B3946 = 11 * *(_WORD *)(a2 + 4);
      word_4B3948 = *(_WORD *)(a2 + 6) - v5 * v4 / 2048;
    }
  }
}

// 0x42d5b0  sub_42D5B0
__int16 __cdecl sub_42D5B0(int a1, int a2)
{
  int v2; // eax

  v2 = *(unsigned __int16 *)(a2 + 6);
  if ( (_WORD)v2 != 0 )
  {
    if ( --v2 != 0 )
    {
      if ( --v2 == 0 )
      {
        LOWORD(v2) = *(unsigned __int8 *)(a2 + 4);
        BYTE2(dword_4B2368) = *(_BYTE *)(a2 + 4);
      }
    }
    else
    {
      HIBYTE(dword_4B2368) = *(_BYTE *)(a2 + 4);
    }
  }
  else
  {
    byte_4B2190 = *(_BYTE *)(a2 + 4);
  }
  return v2;
}

// 0x42d5f0  sub_42D5F0
__int16 __cdecl sub_42D5F0(int a1, int a2)
{
  __int16 result; // ax

  result = *(_WORD *)(a2 + 4);
  if ( result == 0 )
    return sub_44C000(1, 256);
  if ( result == 1 )
    return sub_44C030(2, 256);
  return result;
}

// 0x42d630  sub_42D630
int sub_42D630()
{
  return sub_44C000(65, 1024);
}

// 0x42d640  sub_42D640
char __cdecl sub_42D640(int a1, int a2)
{
  char result; // al
  int v3; // ecx

  result = dword_4B3160;
  if ( dword_4B3160 <= 0 && word_4B39BC == 0 )
  {
    result = byte_4B3232;
    if ( byte_4B3232 == 0 )
    {
      if ( (dword_4B3940 & 0x100) == 0 && *(int *)(dword_4B324C + 20) >= 0 || (result = 0, (dword_4B3940 & 0x200) != 0) )
      {
        *(_WORD *)(dword_4B324C + 56) = *(_WORD *)(a2 + 4);
        *((_BYTE *)dword_52FD00 + 65601) -= *(_BYTE *)(a2 + 4);
        *(_DWORD *)(dword_4B324C + 20) |= 0x2000000u;
        result = a1;
        dword_4B3160 = 30;
        v3 = *(_DWORD *)(a1 + 24);
        BYTE1(v3) |= 0x40u;
        *(_DWORD *)(a1 + 24) = v3;
        if ( *((char *)dword_52FD00 + 65601) <= 0 && (*(_DWORD *)(dword_4B324C + 20) & 0x1000000) == 0 )
        {
          BYTE1(v3) |= 0x20u;
          *(_DWORD *)(a1 + 24) = v3;
        }
      }
    }
  }
  return result;
}

// 0x42d710  sub_42D710
void sub_42D710()
{
  BYTE1(dword_4B3940) &= ~0x20u;
}

// 0x42d720  sub_42D720
void sub_42D720()
{
  BYTE1(dword_4B3940) |= 0x20u;
}

// 0x42d730  sub_42D730
void sub_42D730()
{
  dword_4B215C = -200;
  dword_4B2150 = 600;
  dword_4B2154 = 1100;
}

// 0x42d750  sub_42D750
int __cdecl sub_42D750(int a1, int a2)
{
  int result; // eax

  result = *(unsigned __int16 *)(a2 + 6) + 100 * *(unsigned __int16 *)(a2 + 4);
  dword_4B215C = result;
  return result;
}

// 0x42d770  sub_42D770
int __cdecl sub_42D770(int a1, int a2)
{
  int result; // eax

  result = *(unsigned __int16 *)(a2 + 6) + 100 * *(unsigned __int16 *)(a2 + 4);
  dword_4B2150 = result;
  return result;
}

// 0x42d790  sub_42D790
int __cdecl sub_42D790(int a1, int a2)
{
  int result; // eax

  result = *(unsigned __int16 *)(a2 + 6) + 100 * *(unsigned __int16 *)(a2 + 4);
  dword_4B2154 = result;
  return result;
}

// 0x42d7b0  sub_42D7B0
int __cdecl sub_42D7B0(int a1, int a2)
{
  int result; // eax

  result = 25 * *(char *)(a2 + 4);
  dword_4B2378 = *(char *)(a2 + 6) + 100 * *(char *)(a2 + 4);
  return result;
}

// 0x42d7d0  sub_42D7D0
int __cdecl sub_42D7D0(int a1, int a2)
{
  dword_4B2378 = *(unsigned __int16 *)(a2 + 6) | (*(unsigned __int16 *)(a2 + 4) << 8);
  return a2;
}

// 0x42d7f0  sub_42D7F0
char __cdecl sub_42D7F0(int a1, int a2)
{
  unsigned __int16 v2; // ax
  char result; // al

  v2 = *(_WORD *)(a2 + 4);
  if ( v2 <= 1u )
  {
    if ( v2 == 1 )
    {
      byte_4B322E = 0;
      byte_4B28C8 = 0;
      *((_BYTE *)dword_52FD00 + 65766) = byte_4B2374;
      sub_41D670();
      sub_41D640();
      result = sub_41F870();
      byte_4B2277 = 1;
    }
    else
    {
      result = byte_4B2277;
      byte_4B322E = 0;
      if ( byte_4B2277 != 0 )
      {
        byte_4B2277 = 0;
        *((_BYTE *)dword_52FD00 + 65766) = byte_4B2374;
        byte_4B28C8 = 0;
        return sub_41E330();
      }
    }
  }
  else
  {
    PadSetAct();
    result = *(_BYTE *)(a2 + 4);
    byte_4B2277 = 8;
    byte_4B322E = result;
  }
  return result;
}

// 0x42d890  sub_42D890
void __cdecl sub_42D890(int a1, int a2)
{
  sub_41DF30(a1, *(_WORD *)(a2 + 4), 2, dword_4B2368);
}

// 0x42d8c0  sub_42D8C0
void sub_42D8C0()
{
  LOWORD(dword_4B3940) = dword_4B3940 & 0x7FFF;
}

// 0x42d8d0  sub_42D8D0
void sub_42D8D0()
{
  LOWORD(dword_4B3940) = dword_4B3940 | 0x8000;
}

// 0x42d8e0  sub_42D8E0
int __cdecl sub_42D8E0(int a1)
{
  dword_4B39B8 = a1;
  return a1;
}

// 0x42d8f0  sub_42D8F0
int __cdecl sub_42D8F0(int a1)
{
  int v2; // ecx

  v2 = *(_DWORD *)(a1 + 24);
  BYTE1(v2) |= 4u;
  *(_DWORD *)(a1 + 24) = v2;
  return a1;
}

// 0x42d900  sub_42D900
unsigned __int16 __cdecl sub_42D900(int a1, int a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  unsigned __int16 result; // ax

  v2 = ratan2(
         *(_DWORD *)(dword_4B324C + 228) - *(_DWORD *)(a1 + 228),
         *(_DWORD *)(dword_4B324C + 236) - *(_DWORD *)(a1 + 236));
  v3 = v2 + (v2 < 0 ? 0x1000 : 0);
  v4 = *(__int16 *)(a1 + 222) % 4096 + (*(__int16 *)(a1 + 222) % 4096 < 0 ? 0x1000 : 0);
  v5 = v3 - v4 + (v3 - v4 < 0 ? 0x1000 : 0);
  if ( v5 > 2048 )
    v5 -= 4096;
  result = *(_WORD *)(a2 + 6);
  byte_4B2260[result] = v5 >> 4;
  return result;
}

// 0x42d990  sub_42D990
void sub_42D990()
{
  BYTE1(dword_4B3940) &= 0xFCu;
}

// 0x42d9a0  sub_42D9A0
int __cdecl sub_42D9A0(int a1, int a2)
{
  int result; // eax

  result = *(unsigned __int16 *)(a2 + 4);
  dword_4B39D8 = result;
  return result;
}

// 0x42d9b0  sub_42D9B0
int __cdecl sub_42D9B0(int a1, int a2)
{
  int v2; // edx
  int v3; // esi

  v2 = *((unsigned __int8 *)dword_52FD00 + *(unsigned __int16 *)(a2 + 4) + 65600);
  v3 = v2;
  if ( (dword_4B28E4 & 1) != 0 )
  {
    if ( v2 == 1 )
      sub_44E4B0(54, 0, 0);
    else
      sub_44E4B0(46, 0, 0);
  }
  else if ( v2 == 1 )
  {
    sub_44E4B0(70, 0, 0);
  }
  else
  {
    sub_44E4B0(62, 0, 0);
  }
  if ( (dword_4B28E4 & 2) != 0 )
  {
    if ( v3 == 2 )
      sub_44E4B0(55, 0, 0);
    else
      sub_44E4B0(47, 0, 0);
  }
  else if ( v3 == 2 )
  {
    sub_44E4B0(71, 0, 0);
  }
  else
  {
    sub_44E4B0(63, 0, 0);
  }
  if ( (dword_4B28E4 & 4) != 0 )
  {
    if ( v3 == 3 )
      sub_44E4B0(56, 0, 0);
    else
      sub_44E4B0(48, 0, 0);
  }
  else if ( v3 == 3 )
  {
    sub_44E4B0(72, 0, 0);
  }
  else
  {
    sub_44E4B0(64, 0, 0);
  }
  if ( (dword_4B28E4 & 8) != 0 )
  {
    if ( v3 == 4 )
      sub_44E4B0(57, 0, 0);
    else
      sub_44E4B0(49, 0, 0);
  }
  else if ( v3 == 4 )
  {
    sub_44E4B0(73, 0, 0);
  }
  else
  {
    sub_44E4B0(65, 0, 0);
  }
  if ( (dword_4B28E4 & 0x10) != 0 )
  {
    if ( v3 == 5 )
      sub_44E4B0(58, 0, 0);
    else
      sub_44E4B0(50, 0, 0);
  }
  else if ( v3 == 5 )
  {
    sub_44E4B0(74, 0, 0);
  }
  else
  {
    sub_44E4B0(66, 0, 0);
  }
  if ( (dword_4B28E4 & 0x20) != 0 )
  {
    if ( v3 == 6 )
      return sub_44E4B0(59, 0, 0);
    else
      return sub_44E4B0(51, 0, 0);
  }
  else if ( v3 == 6 )
  {
    return sub_44E4B0(75, 0, 0);
  }
  else
  {
    return sub_44E4B0(67, 0, 0);
  }
}

// 0x42db10  sub_42DB10
void sub_42DB10()
{
  LOBYTE(dword_4B3940) = dword_4B3940 | 1;
}

// 0x42db20  sub_42DB20
void sub_42DB20()
{
  LOBYTE(dword_4B3940) = dword_4B3940 & 0xFE;
}

// 0x42db30  sub_42DB30
void sub_42DB30()
{
  LOWORD(dword_4B3940) = 16;
}

// 0x42db40  sub_42DB40
int sub_42DB40()
{
  int result; // eax

  result = dword_4B324C;
  *(_DWORD *)(dword_4B324C + 20) &= 0xFFFFFFF6;
  return result;
}

// 0x42db50  sub_42DB50
void sub_42DB50()
{
  LOBYTE(dword_4B3940) = dword_4B3940 | 0x20;
}

// 0x42db60  sub_42DB60
void sub_42DB60()
{
  LOBYTE(dword_4B3940) = dword_4B3940 & 0xDF;
}

// 0x42db70  sub_42DB70
void sub_42DB70()
{
  LOBYTE(dword_4B3940) = dword_4B3940 | 4;
}

// 0x42db80  sub_42DB80
int __cdecl sub_42DB80(int a1, int a2)
{
  int result; // eax
  _BYTE *v3; // ebx
  int v4; // esi
  int v5; // ecx
  int v6; // ecx

  result = (int)dword_52FD00;
  v3 = (char *)dword_52FD00 + *(unsigned __int16 *)(a2 + 4) + 65600;
  v4 = (unsigned __int8)*v3;
  if ( ((1 << (v4 - 1)) & dword_4B28E4) == 0 )
  {
    result = (unsigned __int8)*v3;
    if ( (*((_WORD *)dword_52FD00 + 32776) & 0x6000) != 0 )
    {
      if ( (unsigned __int8)*v3 <= 6u )
      {
        do
        {
          if ( ((1 << (result - 1)) & dword_4B28E4) != 0 )
            break;
          ++result;
        }
        while ( result <= 6 );
      }
      if ( result > 6 )
      {
        if ( (*((_WORD *)dword_52FD00 + 32776) & 0x2000) != 0 )
        {
          *v3 = v4 - 3;
          return v4 - 3;
        }
        result = 6;
        while ( 1 )
        {
          v5 = result - 1;
          if ( ((1 << (result - 1)) & dword_4B28E4) != 0 )
            break;
          --result;
          if ( v5 < 1 )
          {
            *v3 = v5;
            return result;
          }
        }
      }
    }
    else
    {
      if ( *v3 != 0 )
      {
        do
        {
          v6 = result - 1;
          if ( ((1 << (result - 1)) & dword_4B28E4) != 0 )
            break;
          --result;
        }
        while ( v6 >= 1 );
      }
      if ( result < 1 )
      {
        if ( (*((_WORD *)dword_52FD00 + 32776) & 0x8000) != 0 )
        {
          *v3 = v4 + 3;
          return v4 + 3;
        }
        for ( result = 1; result <= 6; ++result )
        {
          if ( ((1 << (result - 1)) & dword_4B28E4) != 0 )
            break;
        }
      }
    }
    *v3 = result;
  }
  return result;
}

// 0x42dc80  sub_42DC80
__int16 __cdecl sub_42DC80(int a1, int a2)
{
  unsigned int v2; // eax
  int v3; // ecx

  LOWORD(v2) = *(_WORD *)(a2 + 6);
  if ( (unsigned __int16)v2 <= 0x14u )
  {
    v2 = 16 * *(unsigned __int16 *)(a2 + 6);
    v3 = dword_4B3E88[v2 / 4];
    if ( v3 >= dword_4B3E8C[v2 / 4] - 1 )
      dword_4B3E88[4 * *(unsigned __int16 *)(a2 + 6)] = 0;
    else
      dword_4B3E88[4 * *(unsigned __int16 *)(a2 + 6)] = v3 + 1;
  }
  return v2;
}

// 0x42dcc0  sub_42DCC0
__int16 __cdecl sub_42DCC0(int a1, int a2)
{
  unsigned int v2; // eax
  int v3; // ecx

  LOWORD(v2) = *(_WORD *)(a2 + 6);
  if ( (unsigned __int16)v2 <= 0x14u )
  {
    v2 = 16 * *(unsigned __int16 *)(a2 + 6);
    v3 = dword_4B3E88[v2 / 4];
    if ( v3 <= 0 )
      v3 = dword_4B3E8C[4 * *(unsigned __int16 *)(a2 + 6)];
    dword_4B3E88[4 * *(unsigned __int16 *)(a2 + 6)] = v3 - 1;
  }
  return v2;
}

// 0x42dcf0  sub_42DCF0
__int16 __cdecl sub_42DCF0(int a1, int a2)
{
  unsigned int v2; // eax
  int v3; // ecx

  LOWORD(v2) = *(_WORD *)(a2 + 6);
  if ( (unsigned __int16)v2 <= 0x14u )
  {
    v2 = 16 * *(unsigned __int16 *)(a2 + 6);
    v3 = dword_4B3E88[v2 / 4];
    if ( v3 >= 0 && v3 <= dword_4B3E8C[4 * *(unsigned __int16 *)(a2 + 6)] - 1 )
      dword_4B3E88[4 * *(unsigned __int16 *)(a2 + 6)] = *(unsigned __int16 *)(a2 + 4);
  }
  return v2;
}

// 0x42dd30  sub_42DD30
unsigned __int16 __cdecl sub_42DD30(int a1, int a2)
{
  unsigned __int16 result; // ax

  result = *(_WORD *)(a2 + 6);
  if ( result <= 0x14u )
  {
    result = 16 * *(_WORD *)(a2 + 6);
    if ( *(_WORD *)(a2 + 4) >= 0x14u )
      dword_4B3E8C[4 * *(unsigned __int16 *)(a2 + 6)] = 0;
    else
      dword_4B3E8C[4 * *(unsigned __int16 *)(a2 + 6)] = *(unsigned __int16 *)(a2 + 4);
  }
  return result;
}

// 0x42dd70  sub_42DD70
int *__cdecl sub_42DD70(int a1, int a2)
{
  int **v2; // ecx
  int *result; // eax
  int v4; // esi
  int *v5; // edi
  int v6; // ecx
  int v7; // eax
  int *v8; // ecx
  int v9; // eax
  int v10; // ecx

  v2 = (int **)&dword_4B3E88[4 * *(unsigned __int16 *)(a2 + 6)];
  result = *v2;
  if ( (int)*v2 > 0 )
  {
    v4 = dword_7C62A0;
    v5 = *v2;
    *v2 = (int *)((char *)result - 1);
    do
    {
      v6 = 4 * *(unsigned __int16 *)(a2 + 6);
      v7 = dword_4B3E88[v6];
      v8 = &dword_4B3E88[v6];
      if ( *(_BYTE *)(v4 + 12 * v7 + 8) == 1 )
        break;
      *v8 = v7 - 1;
    }
    while ( v7 >= 0 );
    v9 = 4 * *(unsigned __int16 *)(a2 + 6);
    v10 = dword_4B3E88[v9];
    result = &dword_4B3E88[v9];
    if ( v10 < 0 )
      *result = (int)v5;
  }
  return result;
}

// 0x42ddf0  sub_42DDF0
int *__cdecl sub_42DDF0(int a1, int a2)
{
  int **v3; // ecx
  int *result; // eax
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  int *v8; // ecx
  int v9; // edi
  int v10; // ebp
  int v11; // edx
  int v12; // eax
  int *v13; // edx
  int v14; // ecx
  int *v15; // [esp+18h] [ebp+8h]

  v3 = (int **)&dword_4B3E88[4 * *(unsigned __int16 *)(a2 + 6)];
  result = *v3;
  if ( (int)*v3 < 7 )
  {
    v15 = *v3;
    if ( byte_4B3E6C != 0 )
    {
      v5 = dword_7C62A0;
      *v3 = (int *)((char *)result + 1);
      do
      {
        v6 = 4 * *(unsigned __int16 *)(a2 + 6);
        v7 = dword_4B3E88[v6];
        v8 = &dword_4B3E88[v6];
        if ( *(_BYTE *)(v5 + 12 * v7 + 8) == 1 )
          break;
        *v8 = v7 + 1;
      }
      while ( v7 <= 7 );
    }
    else
    {
      v9 = dword_7C62A0;
      v10 = dword_7C95E4;
      *v3 = (int *)((char *)result + 1);
      do
      {
        v11 = 4 * *(unsigned __int16 *)(a2 + 6);
        v12 = dword_4B3E88[v11];
        v13 = &dword_4B3E88[v11];
        v14 = v9 + 12 * v12;
        if ( *(_BYTE *)(v14 + 8) == 1 )
          break;
        if ( *(_DWORD *)v14 >= v10 )
          break;
        if ( *(_DWORD *)(v14 + 4) >= v10 )
          break;
        *v13 = v12 + 1;
      }
      while ( v12 <= 7 );
    }
    result = &dword_4B3E88[4 * *(unsigned __int16 *)(a2 + 6)];
    if ( *result > 7 )
      *result = (int)v15;
  }
  return result;
}

// 0x42ded0  sub_42DED0
_QWORD *__cdecl sub_42DED0(int a1, int a2)
{
  _QWORD *result; // eax
  int v3; // ecx

  result = (_QWORD *)dword_7C62A0;
  v3 = 0;
  while ( qword_9CA830 != *result )
  {
    ++v3;
    result = (_QWORD *)((char *)result + 12);
    if ( v3 > 7 )
      return result;
  }
  result = (_QWORD *)(16 * *(unsigned __int16 *)(a2 + 6));
  *(int *)((char *)dword_4B3E88 + (_DWORD)result) = v3;
  return result;
}

// 0x42df10  sub_42DF10
int __cdecl sub_42DF10(int a1, int a2)
{
  dword_4B3E80[4 * *(unsigned __int16 *)(a2 + 6)] = *(unsigned __int16 *)(a2 + 4);
  return a2;
}

// 0x42df30  sub_42DF30
int __cdecl sub_42DF30(int a1, int a2)
{
  dword_4B3E84[4 * *(unsigned __int16 *)(a2 + 6)] = *(unsigned __int16 *)(a2 + 4);
  return a2;
}

// 0x42df50  sub_42DF50
int __cdecl sub_42DF50(int a1, int a2)
{
  int result; // eax

  if ( dword_9CA838 != 0 )
  {
    result = 4 * *(unsigned __int16 *)(a2 + 6);
    dword_4B3E88[result] = 1;
  }
  else
  {
    dword_4B3E88[4 * *(unsigned __int16 *)(a2 + 6)] = 0;
    return a2;
  }
  return result * 4;
}

// 0x42df90  sub_42DF90
int __cdecl sub_42DF90(int a1, int a2)
{
  int result; // eax

  result = 4 * *(unsigned __int16 *)(a2 + 6);
  dword_4B3E88[result] = dword_9CA83C;
  return result * 4;
}

// 0x42dfb0  sub_42DFB0
int __cdecl sub_42DFB0(int a1, int a2)
{
  int result; // eax

  result = dword_4AC094;
  if ( dword_4AC094 == 2 )
  {
    result = 16 * *(unsigned __int16 *)(a2 + 6);
    *(int *)((char *)dword_4B3E88 + result) = 0;
  }
  else if ( dword_4AC094 != 0 )
  {
    if ( dword_4AC094 == 1 )
      dword_4B3E88[4 * *(unsigned __int16 *)(a2 + 6)] = 2;
  }
  else
  {
    dword_4B3E88[4 * *(unsigned __int16 *)(a2 + 6)] = 1;
    return a2;
  }
  return result;
}

// 0x42e010  sub_42E010
int __cdecl sub_42E010(int a1, int a2)
{
  int result; // eax

  dword_4B3E60 = *(_DWORD *)(dword_7C62A0 + 12 * dword_4B3E88[4 * *(unsigned __int16 *)(a2 + 6)]);
  result = dword_4B3E88[4 * *(unsigned __int16 *)(a2 + 6)];
  dword_4B3E64 = *(_DWORD *)(dword_7C62A0 + 12 * result + 4);
  return result;
}

// 0x42e060  sub_42E060
int __cdecl sub_42E060(int a1, int a2)
{
  int result; // eax

  result = 4 * *(unsigned __int16 *)(a2 + 6);
  dword_4B3E68 = dword_4B3E88[result];
  return result * 4;
}

// 0x42e080  sub_42E080
int __cdecl sub_42E080(int a1, int a2)
{
  int result; // eax

  if ( dword_9CA82C != 2 || dword_4B3EE8 != 0 )
  {
    result = 4 * *(unsigned __int16 *)(a2 + 6);
    byte_4B3E6C = dword_4B3E88[result];
  }
  else
  {
    byte_4B3E6C = 1;
    dword_4B3E88[4 * *(unsigned __int16 *)(a2 + 6)] = 1;
    return 1;
  }
  return result * 4;
}

// 0x42e0d0  sub_42E0D0
int __cdecl sub_42E0D0(int a1, int a2)
{
  int result; // eax

  result = 4 * *(unsigned __int16 *)(a2 + 6);
  dword_4B3E70 = dword_4B3E88[result];
  return result * 4;
}

// 0x42e0f0  sub_42E0F0
FILE *__cdecl sub_42E0F0(int a1, int a2)
{
  int v2; // edi
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // eax
  int *v10; // ecx
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  int *v17; // ecx
  FILE *result; // eax

  if ( byte_4B3E6C != 0 )
  {
    v4 = dword_4B3E64;
    v5 = dword_4B3E60;
  }
  else
  {
    v2 = dword_7C95E4;
    v3 = dword_7C62A0;
    v4 = dword_4B3E64;
    v5 = dword_4B3E60;
    while ( v5 >= v2 && v4 >= dword_7C95E0 )
    {
      v6 = 4 * *(unsigned __int16 *)(a2 + 6);
      v7 = dword_4B3E88[v6];
      dword_4B3E88[v6] = v7 - 1;
      if ( v7 >= 0 )
      {
        do
        {
          v8 = 4 * *(unsigned __int16 *)(a2 + 6);
          v9 = dword_4B3E88[v8];
          v10 = &dword_4B3E88[v8];
          if ( *(_BYTE *)(v3 + 12 * v9 + 8) == 1 )
            break;
          *v10 = v9 - 1;
        }
        while ( v9 >= 0 );
      }
      v5 = *(_DWORD *)(v3 + 12 * dword_4B3E88[4 * *(unsigned __int16 *)(a2 + 6)]);
      dword_4B3E60 = v5;
      v4 = *(_DWORD *)(v3 + 12 * dword_4B3E88[4 * *(unsigned __int16 *)(a2 + 6)] + 4);
      dword_4B3E64 = v4;
    }
  }
  HIDWORD(qword_9CA830) = v4;
  dword_9CA83C = dword_4B3E68;
  dword_9CA838 = byte_4B3E6C;
  LODWORD(qword_9CA830) = v5;
  if ( dword_9CA82C == 0 && dword_4B3E70 == 0 )
    dword_4B3E70 = dword_9CA824;
  if ( dword_4B3E70 != 0 )
  {
    if ( dword_4B3E70 == 1 )
    {
      dword_9CA824 = 0;
    }
    else if ( dword_4B3E70 == 2 )
    {
      dword_9CA824 = 1;
    }
  }
  else
  {
    dword_9CA824 = 2;
  }
  sub_4099B0();
  if ( dword_9CA824 == 2 && dword_9CA82C == 2 )
  {
    v11 = dword_4B3E60;
    if ( dword_4B3E60 >= 1024 )
    {
      v12 = dword_7C62A0;
      do
      {
        v13 = 4 * *(unsigned __int16 *)(a2 + 6);
        v14 = dword_4B3E88[v13];
        dword_4B3E88[v13] = v14 - 1;
        if ( v14 >= 0 )
        {
          do
          {
            v15 = 4 * *(unsigned __int16 *)(a2 + 6);
            v16 = dword_4B3E88[v15];
            v17 = &dword_4B3E88[v15];
            if ( *(_BYTE *)(v12 + 12 * v16 + 8) == 1 )
              break;
            *v17 = v16 - 1;
          }
          while ( v16 >= 0 );
        }
        v11 = *(_DWORD *)(v12 + 12 * dword_4B3E88[4 * *(unsigned __int16 *)(a2 + 6)]);
        dword_4B3E60 = v11;
        dword_4B3E64 = *(_DWORD *)(v12 + 12 * dword_4B3E88[4 * *(unsigned __int16 *)(a2 + 6)] + 4);
      }
      while ( v11 >= 1024 );
    }
  }
  else
  {
    v11 = dword_4B3E60;
  }
  LODWORD(qword_9CA830) = v11;
  HIDWORD(qword_9CA830) = dword_4B3E64;
  result = WriteConfig();
  dword_52FB9C = dword_45F2B0;
  dword_45F2B0 = 19;
  return result;
}

// 0x42e330  sub_42E330
int *__cdecl sub_42E330(int a1, int a2)
{
  int *result; // eax
  int i; // ecx
  int v4; // eax

  result = (int *)(16 * *(unsigned __int16 *)(a2 + 6));
  if ( *(int *)((char *)dword_4B3E88 + (_DWORD)result) != 0 )
  {
    result = &dword_4B3E88[4 * *(unsigned __int16 *)(a2 + 4)];
    for ( i = *result; i > 5; result = &dword_4B3E88[v4] )
    {
      *result = i - 1;
      v4 = 4 * *(unsigned __int16 *)(a2 + 4);
      i = dword_4B3E88[v4];
    }
  }
  return result;
}

// 0x42e390  sub_42E390
void sub_42E390()
{
  dword_4B3FC0 = 0;
}

// 0x42e3a0  sub_42E3A0
FILE *sub_42E3A0()
{
  if ( dword_9CA854 >= 95 )
    dword_9CA854 = 0;
  else
    dword_9CA854 += 5;
  sub_41D670();
  return WriteConfig();
}

// 0x42e3d0  sub_42E3D0
FILE *sub_42E3D0()
{
  if ( dword_9CA854 <= 50 )
    dword_9CA854 = 100;
  else
    dword_9CA854 -= 5;
  sub_41D670();
  return WriteConfig();
}

// 0x42e400  sub_42E400
FILE *sub_42E400()
{
  if ( dword_9CA850 >= 100 )
    dword_9CA850 = 0;
  else
    dword_9CA850 += 10;
  return WriteConfig();
}

// 0x42e430  sub_42E430
FILE *sub_42E430()
{
  if ( dword_9CA850 <= 0 )
    dword_9CA850 = 100;
  else
    dword_9CA850 -= 10;
  return WriteConfig();
}

// 0x42e460  sub_42E460
int __cdecl sub_42E460(int a1, int a2)
{
  dword_4B3E88[4 * *(unsigned __int16 *)(a2 + 6)] = dword_9CA854 / 5 - 10;
  return a2;
}

// 0x42e490  sub_42E490
int __cdecl sub_42E490(int a1, int a2)
{
  dword_4B3E88[4 * *(unsigned __int16 *)(a2 + 6)] = dword_9CA850 / 10;
  return a2;
}

// 0x42e4c0  sub_42E4C0
int sub_42E4C0()
{
  int result; // eax

  result = dword_45F2B0;
  dword_45F2B0 = 20;
  dword_52FB9C = result;
  return result;
}

// 0x42e4e0  sub_42E4E0
int sub_42E4E0()
{
  int result; // eax

  if ( (byte_4B3E48 & 4) == 0 )
  {
    result = dword_4B3E34;
    if ( dword_4B3E34 != 0 )
      return sub_423C50(dword_4B3E30, dword_4B3E34);
  }
  return result;
}

// 0x42e510  sub_42E510
int __cdecl sub_42E510(_DWORD *a1, int a2, int a3)
{
  int v3; // ebx
  int result; // eax
  int v5; // ecx
  _DWORD *v6; // edx
  int v7; // edx
  int v8; // ecx
  _DWORD *v9; // edx
  _DWORD *i; // edx
  int v11; // ecx
  _DWORD *j; // edx
  int v13; // ebp

  v3 = 0;
  result = 0;
  v5 = 0;
  Offset = 0;
  if ( a2 > 0 )
  {
    v6 = a1;
    do
    {
      if ( *v6 == a3 )
        break;
      ++v5;
      v6 += 3;
    }
    while ( v5 < a2 );
  }
  v7 = a1[3 * v5 + 2];
  v8 = 0;
  dword_4B3E40 = v7;
  if ( a2 > 0 )
  {
    v9 = a1;
    do
    {
      if ( *v9 == 6 )
        break;
      ++v8;
      v9 += 3;
    }
    while ( v8 < a2 );
  }
  for ( i = &a1[3 * v8]; *i != a3; ++v8 )
  {
    if ( v8 >= a2 )
      break;
    result += i[2];
    i += 3;
  }
  v11 = v8 + 1;
  for ( j = &a1[3 * v11]; *j != 4; Offset = v3 )
  {
    if ( v11 >= a2 )
      break;
    v13 = j[2];
    j += 3;
    v3 += v13;
    ++v11;
  }
  return result;
}

// 0x42e5b0  sub_42E5B0
int __cdecl sub_42E5B0(int FileHandle, char *DstBuf)
{
  int v3; // ebx
  int v5; // esi
  int v6; // eax
  int i; // esi
  int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // esi
  int v12; // [esp+10h] [ebp-4h]
  int FileHandlea; // [esp+18h] [ebp+4h]

  v12 = dword_4B3E40;
  v3 = FsSeek(FileHandle, /*Offset*/ 0, /*Origin*/ 1);
  v5 = dword_4B3E40 / 4096;
  for ( FileHandlea = dword_4B3E40 / 4096; v5 > 0; FileHandlea = v5 )
  {
    v6 = FsRead(FileHandle, DstBuf, /*MaxCharCount*/ 0x1000u);
    if ( v6 == -1 )
    {
      for ( i = 20; i > 0; --i )
      {
        if ( v6 != -1 )
          break;
        FsSeek(FileHandle, /*Offset*/ v3, /*Origin*/ 0);
        v6 = FsRead(FileHandle, DstBuf, /*MaxCharCount*/ 0x1000u);
      }
      v5 = FileHandlea;
    }
    if ( v6 != 4096 )
    {
      sub_42E740(FileHandle);
      while ( 1 )
        ;
    }
    DstBuf += 4096;
    dword_4B3E40 -= 4096;
    v3 += 4096;
    dword_4B3E30 += 4096;
    if ( (byte_4B3E48 & 4) == 0 && dword_4B3E34 != 0 )
      sub_423C50(dword_4B3E30, dword_4B3E34);
    --v5;
  }
  if ( dword_4B3E40 % 4096 != 0 )
  {
    v8 = FsRead(FileHandle, DstBuf, /*MaxCharCount*/ dword_4B3E40 % 4096);
    dword_4B3E40 -= v8;
    dword_4B3E30 += v8;
    if ( (byte_4B3E48 & 4) == 0 && dword_4B3E34 != 0 )
      sub_423C50(dword_4B3E30, dword_4B3E34);
  }
  v9 = (v12 >> 31) ^ abs32(v12) & 0x7FF;
  v10 = v9 - (v12 >> 31);
  if ( v9 != v12 >> 31 )
  {
    FsSeek(FileHandle, /*Offset*/ 2048 - v10, /*Origin*/ 1);
    dword_4B3E30 += 2048 - v10;
  }
  return 0;
}

// 0x42e740  sub_42E740
int __cdecl sub_42E740(int FileHandle)
{
  FsClose(FileHandle);
  return 0;
}

// 0x42e750  sub_42E750
int __cdecl sub_42E750(char *a1, int a2)
{
  int v2; // edx
  int result; // eax

  v2 = a2;
  result = 0;
  if ( a2 > 0 )
  {
    do
    {
      result += *a1++;
      --v2;
    }
    while ( v2 != 0 );
  }
  return result;
}

// 0x42e770  sub_42E770
__int16 __cdecl sub_42E770(int a1)
{
  unsigned int i; // eax
  unsigned int v3; // edi
  _WORD *v4; // esi
  int **v5; // eax
  int *j; // esi
  unsigned int v7; // edx
  int *k; // edx
  int **v9; // eax
  unsigned int v11; // [esp+14h] [ebp+4h]

  LOWORD(i) = *(_WORD *)(a1 + 44);
  if ( (_WORD)i == 14 || (_WORD)i == 2 || (_WORD)i == 34 )
  {
    v11 = *(_DWORD *)(a1 + 244);
    for ( i = v11; i != 0; v11 = i )
    {
      v3 = 0;
      v4 = (_WORD *)(i + 6);
      do
      {
        if ( *v4 == 0xFFF0 )
          break;
        v5 = *(int ***)(a1 + 248);
        if ( v5 != NULL )
        {
          do
          {
            if ( *((unsigned __int16 *)v5 + 2) == (unsigned __int16)*v4 )
              break;
            v5 = (int **)*v5;
          }
          while ( v5 != NULL );
          if ( v5 != NULL )
            *v4 = 32 * (((int)v5 - *(_DWORD *)(a1 + 248)) >> 5);
        }
        i = v11;
        ++v3;
        ++v4;
      }
      while ( v3 < 5 );
      i = *(_DWORD *)i;
    }
    for ( j = *(int **)(a1 + 248); j != NULL; j = (int *)*j )
    {
      if ( *((_WORD *)j + 5) != 0 )
      {
        i = *(_DWORD *)(a1 + 252);
        if ( i != 0 )
        {
          do
          {
            if ( *(unsigned __int16 *)(i + 4) == *((unsigned __int16 *)j + 5) )
              break;
            i = *(_DWORD *)i;
          }
          while ( i != 0 );
          if ( i != 0 )
          {
            v7 = (int)((unsigned __int64)(954437177LL * (int)(i - *(_DWORD *)(a1 + 252))) >> 32) >> 3;
            i = (unsigned int)((unsigned __int64)(954437177LL * (int)(i - *(_DWORD *)(a1 + 252))) >> 32) >> 31;
            *((_WORD *)j + 15) = 36 * ((v7 >> 31) + v7);
          }
        }
      }
    }
    for ( k = *(int **)(a1 + 252); k != NULL; k = (int *)*k )
    {
      if ( *((_WORD *)k + 3) != 0 )
      {
        i = *(_DWORD *)(a1 + 244);
        if ( i != 0 )
        {
          do
          {
            if ( *(unsigned __int16 *)(i + 4) == *((unsigned __int16 *)k + 3) )
              break;
            i = *(_DWORD *)i;
          }
          while ( i != 0 );
          if ( i != 0 )
          {
            i = 16 * ((int)(i - *(_DWORD *)(a1 + 244)) >> 4);
            *((_WORD *)k + 3) = i;
          }
        }
      }
      if ( (k[6] & 0x20) != 0 )
      {
        v9 = *(int ***)(a1 + 244);
        if ( v9 != NULL )
        {
          do
          {
            if ( *((unsigned __int16 *)v9 + 2) == k[7] )
              break;
            v9 = (int **)*v9;
          }
          while ( v9 != NULL );
          if ( v9 != NULL )
            k[7] = 16 * (((int)v9 - *(_DWORD *)(a1 + 244)) >> 4);
        }
        i = *(_DWORD *)(a1 + 244);
        if ( i != 0 )
        {
          do
          {
            if ( *(unsigned __int16 *)(i + 4) == k[8] )
              break;
            i = *(_DWORD *)i;
          }
          while ( i != 0 );
          if ( i != 0 )
          {
            i = 16 * ((int)(i - *(_DWORD *)(a1 + 244)) >> 4);
            k[8] = i;
          }
        }
      }
    }
  }
  return i;
}

// 0x42e910  sub_42E910
int __cdecl sub_42E910(__int16 a1)
{
  char *v1; // ebp
  _BYTE *v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // kr28_4
  char *v5; // esi
  unsigned int v6; // kr48_4
  char *v7; // esi
  unsigned int v8; // kr4C_4
  int v9; // esi
  int v11; // edi
  char *v12; // eax
  int v13; // ecx
  int i; // edx
  int v15; // edx
  int *v16; // eax
  char *v17; // ecx
  int v18; // esi
  char *v19; // edi
  int v20; // ebx
  unsigned __int8 *v21; // esi
  unsigned __int8 v22; // al
  int *v23; // ebp
  int j; // eax
  _DWORD *v25; // edi
  char *v26; // ebp
  int v27; // edx
  int v28; // ecx
  unsigned __int8 v29; // al
  int v30; // ebx
  unsigned int v31; // edi
  int v32; // eax
  int v33; // eax
  _BYTE *v34; // eax
  unsigned int v35; // ecx
  int m; // edi
  int v37; // ebp
  char v38; // al
  int v39; // eax
  unsigned __int8 v40; // al
  int v41; // kr08_4
  int v42; // eax
  int v43; // edi
  unsigned __int8 i54; // al
  int v45; // kr10_4
  int i58; // eax
  int i56; // eax
  int v48; // ebp
  int i62; // eax
  int v50; // ebp
  int i57; // eax
  int v52; // eax
  _WORD *v53; // ecx
  int i61; // eax
  int i59; // eax
  int i60; // eax
  int i55; // eax
  unsigned __int16 v58; // ax
  int v59; // eax
  int v60; // edi
  unsigned __int8 v61; // al
  char *v62; // ebx
  int v63; // kr18_4
  int i51; // eax
  int v65; // ebp
  int i50; // eax
  unsigned __int16 v67; // ax
  int i47; // eax
  int v69; // edx
  int i49; // eax
  int i48; // eax
  int v72; // eax
  int v73; // ecx
  int i52; // eax
  int i53; // eax
  unsigned __int8 i63; // al
  int i64; // eax
  char *v78; // edi
  unsigned __int8 v79; // al
  int v80; // ebx
  int v81; // edi
  int n; // eax
  int ii; // eax
  int mm; // eax
  char v85; // al
  int v86; // edx
  int nn; // eax
  char v88; // al
  int v89; // edx
  int jj; // eax
  int kk; // eax
  unsigned __int8 i1; // al
  int i2; // eax
  unsigned __int8 i65; // al
  int i66; // eax
  unsigned __int8 i72; // al
  int i73; // eax
  int v98; // eax
  unsigned __int8 i67; // al
  int v100; // kr2C_4
  int i69; // eax
  int i71; // eax
  int v103; // eax
  int i68; // eax
  int i70; // eax
  unsigned __int8 v106; // al
  int i74; // eax
  char v108; // al
  int v109; // edx
  int v110; // eax
  int v111; // edi
  unsigned __int8 v112; // al
  int v113; // kr34_4
  int i42; // eax
  int i40; // eax
  int i44; // eax
  int i43; // eax
  int i41; // eax
  int i45; // eax
  int *v120; // ecx
  int *i46; // eax
  _DWORD *v122; // eax
  int v123; // eax
  int v124; // edi
  int v125; // ecx
  unsigned __int8 v126; // al
  _DWORD *v127; // edx
  int v128; // kr3C_4
  int i21; // eax
  int i22; // eax
  int i10; // eax
  int i34; // eax
  int i39; // eax
  int i35; // eax
  int i36; // eax
  int i20; // eax
  int i3; // eax
  int i38; // eax
  int i4; // eax
  int i37; // eax
  int v141; // edx
  __int16 v142; // cx
  int v143; // eax
  int v144; // ecx
  int v145; // eax
  int i6; // eax
  int i17; // eax
  int i18; // eax
  int i7; // eax
  int i8; // eax
  int i5; // eax
  int v152; // ebp
  int v153; // eax
  int v154; // eax
  int i9; // eax
  bool v156; // zf
  int i15; // eax
  int i23; // eax
  _DWORD **v159; // ecx
  _DWORD *i24; // eax
  _DWORD *v161; // eax
  int i30; // eax
  _DWORD **v163; // ecx
  _DWORD *i31; // eax
  _DWORD *v165; // eax
  int i25; // eax
  _DWORD **v167; // ecx
  _DWORD *i26; // eax
  _DWORD *v169; // eax
  int i32; // eax
  _DWORD **v171; // ecx
  _DWORD *i33; // eax
  _DWORD *v173; // eax
  int i27; // eax
  _DWORD **v175; // ecx
  _DWORD *i28; // eax
  _DWORD *v177; // eax
  __int16 *v178; // eax
  int i29; // edx
  __int16 v180; // bp
  int i11; // eax
  int v182; // eax
  int i16; // eax
  int i12; // eax
  _DWORD *v185; // eax
  int i13; // edx
  int i14; // eax
  int v188; // eax
  int v189; // eax
  int v190; // edx
  int i19; // eax
  __int16 v192; // ax
  int v193; // ecx
  int k; // eax
  int v195; // edi
  int v196; // edi
  _BYTE *v197; // eax
  unsigned int v198; // ecx
  int v199; // ebp
  unsigned int v200; // ecx
  int v201; // edi
  char *v202; // eax
  int v203; // eax
  void *v204; // edi
  unsigned int v205; // ecx
  int v206; // edi
  char *v207; // eax
  int v208; // [esp-4h] [ebp-370h]
  int v209; // [esp-4h] [ebp-370h]
  char v210[4]; // [esp+10h] [ebp-35Ch] BYREF
  char *v211; // [esp+14h] [ebp-358h]
  char v212; // [esp+1Bh] [ebp-351h]
  int v213; // [esp+1Ch] [ebp-350h]
  unsigned int v214; // [esp+20h] [ebp-34Ch]
  int v215; // [esp+24h] [ebp-348h]
  char v216; // [esp+2Ah] [ebp-342h]
  char v217; // [esp+2Bh] [ebp-341h]
  int v218; // [esp+2Ch] [ebp-340h] BYREF
  int v219; // [esp+30h] [ebp-33Ch]
  int v220; // [esp+34h] [ebp-338h]
  int v221; // [esp+38h] [ebp-334h]
  int v222; // [esp+3Ch] [ebp-330h]
  int v223; // [esp+40h] [ebp-32Ch]
  int v224; // [esp+44h] [ebp-328h]
  int v225; // [esp+48h] [ebp-324h]
  int v226; // [esp+4Ch] [ebp-320h]
  int v227; // [esp+50h] [ebp-31Ch]
  int v228; // [esp+54h] [ebp-318h]
  int v229; // [esp+58h] [ebp-314h]
  void *Block; // [esp+ACh] [ebp-2C0h]
  int v231; // [esp+B0h] [ebp-2BCh]
  int v232; // [esp+B4h] [ebp-2B8h]
  char *v233; // [esp+B8h] [ebp-2B4h]
  int v234; // [esp+BCh] [ebp-2B0h]
  unsigned int v235; // [esp+C0h] [ebp-2ACh]
  int v236; // [esp+C4h] [ebp-2A8h]
  int v237; // [esp+C8h] [ebp-2A4h]
  int v238; // [esp+CCh] [ebp-2A0h]
  int v239; // [esp+D0h] [ebp-29Ch] BYREF
  char v240; // [esp+D4h] [ebp-298h] BYREF
  _DWORD v241[2]; // [esp+D8h] [ebp-294h]
  char v242; // [esp+E0h] [ebp-28Ch] BYREF
  char Str[260]; // [esp+148h] [ebp-224h] BYREF
  char v244[28]; // [esp+24Ch] [ebp-120h] BYREF
  CHAR Buffer[260]; // [esp+268h] [ebp-104h] BYREF
  char *v247; // [esp+374h] [ebp+8h]
  char *v248; // [esp+374h] [ebp+8h]

  Block = malloc(/*Size*/ 0x2DC6C0u);
  v1 = (char *)dword_52FD00 + 1572864;
  dword_4ABF8C = 1;
  word_4B3170 = 1;
  v247 = (char *)dword_52FD00 + 1572864;
  memset(byte_4B2260, 0, 0x100u);
  v211 = (char *)dword_52FD00 + 1572864;
  dword_4B38C8 = 0;
  dword_4B38C4 = 0;
  dword_4B38C0 = 0;
  dword_4B3740 = 0;
  dword_4B2390 = 0;
  dword_4B371C = 0;
  dword_4B3238 = 0;
  v215 = 0;
  v214 = 0;
  dword_4B3A04 = 0;
  v234 = 0;
  v212 = 0;
  v216 = 0;
  v217 = 0;
  sub_449010();
  sub_41DA80();
  sub_41DE10();
  v2 = dword_52FD00;
  if ( *((char *)dword_52FD00 + 65601) <= 0 )
  {
    *((_BYTE *)dword_52FD00 + 65601) = 6;
    v2 = dword_52FD00;
  }
  if ( v2[65616] > 5u )
  {
    v2[65616] = 0;
    v2 = dword_52FD00;
  }
  v2[65766] = byte_4B2374;
  dword_4B3E30 = 0;
  v3 = 16 * a1;
  v235 = v3;
  dword_4B3E4C = 0;
  word_4AD386[v3 / 2] = 1;
  v233 = strcpy(Str, (&off_4AD380)[v3 / 4]);
  if ( dword_4B1DFC != 0 )
  {
    _itoa(/*Value*/ *((unsigned __int8 *)dword_52FD00 + 65616), /*Buffer*/ v210, /*Radix*/ 10);
    v4 = strlen(Str) + 1;
    v5 = strrchr(Str, /*Ch*/ 46);
    memcpy(v5 + 2, /*Src*/ v5, /*Size*/ &Str[v4] - v5);
    *v5 = 95;
    v5[1] = v210[0];
  }
  else if ( dword_4AC094 == 0
         && (a1 == 7 || a1 == 8 || a1 == 21 || a1 == 23 || a1 == 22 || a1 == 24 || a1 == 25 || a1 == 34 || a1 == 54) )
  {
    v6 = strlen(Str) + 1;
    v7 = strrchr(Str, /*Ch*/ 46);
    memcpy(v7 + 2, /*Src*/ v7, /*Size*/ &Str[v6] - v7);
    *v7 = 95;
    v7[1] = 56;
  }
  v8 = strlen(Str) + 1;
  Str[(__int16)(v8 - 3)] = 0;
  v9 = FsOpen(/*FileName*/ Str, 0);
  if ( v9 < 0 )
  {
    LoadStringA(/*hInstance*/ hInstance, /*uID*/ *((_DWORD *)off_45F344 + 3), /*lpBuffer*/ Buffer, /*cchBufferMax*/ 260);
    if ( ShowRetryDialog(/*Format*/ "%s: %s", Buffer, Str) == 2 )
    {
LABEL_22:
      dword_45F2B0 = 0;
      v9 = -1;
      goto LABEL_24;
    }
    while ( 1 )
    {
      FsFindRoot();
      v9 = FsOpen(/*FileName*/ Str, 0);
      if ( v9 >= 0 )
        break;
      if ( ShowRetryDialog(/*Format*/ "%s: %s", Buffer, Str) == 2 )
        goto LABEL_22;
    }
  }
  FsSeek(/*FileHandle*/ v9, /*Offset*/ 0, /*Origin*/ 0);
  Str[(__int16)(v8 - 3)] = 59;
LABEL_24:
  dword_4B3E44 = v9;
  if ( v9 == -1 )
    return 1;
  v11 = FsSeek(/*FileHandle*/ v9, /*Offset*/ 0, /*Origin*/ 2);
  FsSeek(/*FileHandle*/ v9, /*Offset*/ 0, /*Origin*/ 0);
  dword_4B3E34 = v11;
  dword_4B3E40 = 2048;
  sub_42E5B0(/*FileHandle*/ dword_4B3E44, /*DstBuf*/ v1);
  v12 = v1;
  v13 = 0;
  for ( i = 2044; i != 0; --i )
    v13 += *v12++;
  if ( v13 != *((_DWORD *)v1 + 511) )
  {
    sub_42E740(/*FileHandle*/ dword_4B3E44);
    return 1;
  }
  dword_4B3E3C = *(_DWORD *)v1;
  v15 = *((_DWORD *)v1 + 1);
  v231 = v15;
  v16 = (int *)(v1 + 8);
  if ( v15 != 0 )
  {
    v17 = &v240;
    do
    {
      v18 = *v16;
      v16 += 3;
      *((_DWORD *)v17 - 1) = v18;
      *(_DWORD *)v17 = *(v16 - 2);
      *((_DWORD *)v17 + 1) = *(v16 - 1);
      v17 += 12;
      --v15;
    }
    while ( v15 != 0 );
  }
  v19 = (char *)Block;
  dword_4B3E40 = v241[0];
  v20 = 1;
  sub_42E5B0(/*FileHandle*/ dword_4B3E44, /*DstBuf*/ (char *)Block);
  sub_431160(v19, v1);
  v21 = (unsigned __int8 *)v1;
  if ( v1[1] == 69 )
  {
    v21 = (unsigned __int8 *)(v1 + 1);
    if ( *v1 == 45 )
    {
      v22 = *v21;
      if ( *v21 != 46 )
      {
        v23 = (int *)&v242;
        do
        {
          ++v21;
          if ( v22 == 69 )
          {
            for ( j = 0; j < 1; ++j )
              *((_BYTE *)&v218 + j) = v21[j];
            v25 = DstBuf;
            dword_4B3E40 = *v23;
            ++v20;
            v23 += 3;
            sub_42E5B0(/*FileHandle*/ dword_4B3E44, /*DstBuf*/ (char *)DstBuf);
            *v25 = &unk_4B3B00;
            ++v21;
          }
          v22 = *v21;
        }
        while ( *v21 != 46 );
      }
      v1 = v247;
      v19 = (char *)Block;
      ++v21;
    }
  }
  v26 = v1 + 184320;
  dword_4B3E40 = v241[3 * v20];
  v248 = v26;
  sub_42E5B0(/*FileHandle*/ dword_4B3E44, /*DstBuf*/ v19);
  sub_431160(v19, v26);
  v29 = *v21;
  if ( *v21 != 47 )
  {
    v30 = v231;
    v31 = (unsigned int)v211;
    do
    {
      ++v21;
      v32 = v29 - 44;
      if ( v32 == 0 )
      {
        if ( v217 != 1 )
        {
          while ( 1 )
            ;
        }
        if ( v216 != 0 )
        {
          v193 = dword_4B2364;
        }
        else
        {
          v193 = v31;
          dword_4B2364 = v31;
          v31 += dword_4B38A4;
        }
        for ( k = 0; k < 15; k += 5 )
        {
          dword_4B3660[k] = 9;
          dword_4B3664[k] = v31;
          v195 = v31 + 2048;
          dword_4B36A0[k] = 8;
          dword_4B36A4[k] = v195;
          v195 += 1024;
          dword_4B36E0[k] = 9;
          dword_4B36E4[k] = v195;
          v31 = v195 + 2048;
        }
        dword_4EFB8C = v193;
        dword_4B3450 = v193;
        dword_4B24A0 = v31;
        dword_4B372C = dword_4B38A4 + v193 - 1024;
        dword_4B2A50 = dword_4B38A4 + v193 - 1024;
        dword_4B2A54 = dword_4B38A4 + v193 - 1024;
        dword_4B3164 = v31 + 500 * word_4B28C0;
        dword_4B2240 = dword_4B3164 + 20 * word_4B3774;
        dword_4B3B70 = dword_4B2240 + 184 * word_4B2244;
        dword_4B3A98 = dword_4B3B70 + 88 * word_4B3644;
        dword_4B374C = dword_4B3A98 + 12 * word_4B2376;
        *(int *)((char *)&dword_4B39FE + 2) = dword_4B374C + 60 * word_4B322C;
        v213 = dword_4B374C + 60 * word_4B322C;
        dword_4B373C = dword_4B247C + *(int *)((char *)&dword_4B39FE + 2);
        v211 = (char *)(dword_4B247C + *(int *)((char *)&dword_4B39FE + 2) + 8 * word_4B3640);
        if ( dword_4B3744 != 0 )
        {
          dword_4B3734 = dword_4B247C + *(int *)((char *)&dword_4B39FE + 2) + 8 * word_4B3640;
          v211 = (char *)(dword_4B3744 + dword_4B3734);
        }
        else
        {
          dword_4B3734 = 0;
        }
        if ( v214 != 0 && v215 != 0 )
        {
          if ( v214 < (unsigned int)v211 )
          {
            if ( v215 - 1 < 0 )
              goto LABEL_453;
            v199 = (int)v211;
            v200 = v214 - (_DWORD)v211;
            v201 = v215;
            v202 = &v211[v215 - 1];
            do
            {
              *v202 = v202[v200];
              --v202;
              --v201;
            }
            while ( v201 != 0 );
          }
          else
          {
            v196 = v215;
            v197 = v211;
            v198 = v214 - (_DWORD)v211;
            do
            {
              *v197 = v197[v198];
              ++v197;
              --v196;
            }
            while ( v196 != 0 );
LABEL_453:
            v199 = (int)v211;
          }
          dword_4B3A04 = v199;
          v214 = 0;
          v211 = (char *)(v215 + v199);
        }
        InitListPool(dword_4B24A0, 500, 500 * word_4B28C0);
        InitListPool(dword_4B2240, 184, 184 * word_4B2244);
        InitListPool(dword_4B3164, 20, 20 * word_4B3774);
        InitListPool(dword_4B3B70, 88, 88 * word_4B3644);
        InitListPool(dword_4B3A98, 12, 12 * word_4B2376);
        InitListPool(dword_4B374C, 60, 60 * word_4B322C);
        memset(*(void **)((char *)&dword_4B39FE + 2), 0, dword_4B247C);
        v203 = sub_42E510(&v239, v231, 4);
        v26 = v211;
        *(_DWORD *)v210 = v203;
        v248 = v211;
        if ( v212 == 1 )
        {
          v212 = 2;
          dword_4B364C = (int)&v211[v238];
          dword_4B2494 = (int)&v211[v238];
          dword_4B2470 = (int)&v211[v238 + 8];
        }
        sub_448C90();
        sub_448D40();
        v204 = Block;
        sub_42E5B0(/*FileHandle*/ dword_4B3E44, /*DstBuf*/ (char *)Block);
        sub_431160(v204, v26);
        v30 = v231;
        v31 = (unsigned int)v211;
        goto LABEL_458;
      }
      v33 = v32 - 1;
      if ( v33 != 0 )
      {
        if ( v33 != 30 )
          goto LABEL_458;
        dword_4B2364 = v31;
        v31 += dword_4B38A4;
        v216 = 1;
        v211 = (char *)v31;
        if ( v214 == 0 || v215 == 0 )
        {
LABEL_55:
          v26 = (char *)v31;
          v248 = (char *)v31;
          v38 = *((_BYTE *)dword_52FD00 + 65616);
          if ( v38 != 0 )
          {
            switch ( v38 )
            {
              case 1:
                v39 = sub_42E510(&v239, v30, 5);
                break;
              case 2:
                v39 = sub_42E510(&v239, v30, 7);
                break;
              case 3:
                v39 = sub_42E510(&v239, v30, 8);
                break;
              case 4:
                v39 = sub_42E510(&v239, v30, 9);
                break;
              case 5:
                v39 = sub_42E510(&v239, v30, 10);
                break;
              default:
LABEL_68:
                FsSeek(/*FileHandle*/ dword_4B3E44, /*Offset*/ *(int *)v210, /*Origin*/ 1);
                sub_42E5B0(/*FileHandle*/ dword_4B3E44, /*DstBuf*/ (char *)Block);
                sub_431160(Block, v31);
                dword_4B3E30 += Offset + *(_DWORD *)v210;
                FsSeek(/*FileHandle*/ dword_4B3E44, /*Offset*/ Offset, /*Origin*/ 1);
                goto LABEL_458;
            }
          }
          else
          {
            v39 = sub_42E510(&v239, v30, 6);
          }
          *(_DWORD *)v210 = v39;
          goto LABEL_68;
        }
        if ( v214 < v31 )
        {
          if ( v215 - 1 >= 0 )
          {
            v37 = (int)v211;
            v205 = v214 - (_DWORD)v211;
            v206 = v215;
            v207 = &v211[v215 - 1];
            do
            {
              *v207 = v207[v205];
              --v207;
              --v206;
            }
            while ( v206 != 0 );
            goto LABEL_54;
          }
        }
        else
        {
          v34 = (_BYTE *)v31;
          v35 = v214 - v31;
          for ( m = v215; m != 0; --m )
          {
            *v34 = v34[v35];
            ++v34;
          }
        }
        v37 = (int)v211;
LABEL_54:
        v30 = v231;
        dword_4B3A04 = v37;
        v211 = (char *)(v215 + v37);
        v214 = 0;
        v31 = v215 + v37;
        goto LABEL_55;
      }
      v40 = *v21;
      if ( *v21 == 46 )
        goto LABEL_433;
      do
      {
        ++v21;
        v41 = v28;
        v28 = 0;
        switch ( v40 )
        {
          case 0u:
            v79 = *v21;
            if ( *v21 == 46 )
              goto LABEL_431;
            v80 = v236;
            v81 = *(_DWORD *)v210;
            while ( 2 )
            {
              ++v21;
              switch ( v79 )
              {
                case 1u:
                  for ( n = 0; n < 8; ++n )
                  {
                    LOBYTE(v27) = v21[n];
                    *((_BYTE *)&v218 + n) = v27;
                  }
                  v238 = v218;
                  v28 = (int)&v211[v219];
                  v212 = 1;
                  dword_4B3E40 = v219;
                  v211 += v219;
                  v21 += 8;
                  goto LABEL_184;
                case 2u:
                  for ( ii = 0; ii < 8; ++ii )
                    *((_BYTE *)&v218 + ii) = v21[ii];
                  v81 = v218;
                  *(_DWORD *)v210 = v218;
                  dword_4B3E40 = v219;
                  dword_4B2380 = 4112;
                  sub_41E160((int *)&v26[v218]);
                  v27 = dword_4B3E40;
                  v28 = dword_4B3E40 + dword_4B2380;
                  dword_4B2380 += dword_4B3E40;
                  v21 += 8;
                  goto LABEL_184;
                case 4u:
                  for ( jj = 0; jj < 8; ++jj )
                    *((_BYTE *)&v218 + jj) = v21[jj];
                  sub_41DEC0((int)&v218);
                  v21 += 8;
                  goto LABEL_184;
                case 0x44u:
                  for ( kk = 0; kk < 12; ++kk )
                    *((_BYTE *)&v218 + kk) = v21[kk];
                  PadSetAct();
                  v21 += 12;
                  goto LABEL_184;
                case 0x4Cu:
                  for ( mm = 0; mm < 48; ++mm )
                    *((_BYTE *)&v218 + mm) = v21[mm];
                  v85 = *((_BYTE *)dword_52FD00 + 65616);
                  if ( v85 != 0 )
                  {
                    switch ( v85 )
                    {
                      case 1:
                        v80 = v220;
                        dword_4B3E40 = v221;
                        break;
                      case 2:
                        v80 = v222;
                        v86 = v223;
LABEL_160:
                        dword_4B3E40 = v86;
                        break;
                      case 3:
                        v80 = v224;
                        dword_4B3E40 = v225;
                        break;
                      case 4:
                        v80 = v226;
                        dword_4B3E40 = v227;
                        break;
                      case 5:
                        v80 = v228;
                        v86 = v229;
                        goto LABEL_160;
                      default:
                        break;
                    }
                  }
                  else
                  {
                    v80 = v218;
                    dword_4B3E40 = v219;
                  }
                  dword_4B3750 = (int)&v26[v80];
                  dword_4B236C = (int)&v26[v80];
                  dword_4B3440 = (int)&v26[v80 + 8];
                  sub_41E0F0((int *)&v26[v80]);
                  v27 = dword_4B3E40;
                  v28 = (int)&v211[dword_4B3E40];
                  v211 += dword_4B3E40;
                  v21 += 48;
LABEL_184:
                  v79 = *v21;
                  if ( *v21 == 46 )
                  {
                    v236 = v80;
                    goto LABEL_431;
                  }
                  continue;
                case 0x4Du:
                  for ( nn = 0; nn < 48; ++nn )
                    *((_BYTE *)&v218 + nn) = v21[nn];
                  v88 = *((_BYTE *)dword_52FD00 + 65616);
                  if ( v88 != 0 )
                  {
                    if ( v88 != 1 )
                    {
                      switch ( v88 )
                      {
                        case 2:
                          v81 = v222;
                          v89 = v223;
                          *(_DWORD *)v210 = v222;
                          break;
                        case 3:
                          v81 = v224;
                          *(_DWORD *)v210 = v224;
                          dword_4B3E40 = v225;
                          goto LABEL_177;
                        case 4:
                          v81 = v226;
                          *(_DWORD *)v210 = v226;
                          dword_4B3E40 = v227;
                          goto LABEL_177;
                        case 5:
                          v81 = v228;
                          v89 = v229;
                          *(_DWORD *)v210 = v228;
                          break;
                        default:
                          goto LABEL_177;
                      }
                      dword_4B3E40 = v89;
                      goto LABEL_177;
                    }
                    v81 = v220;
                    *(_DWORD *)v210 = v220;
                    dword_4B3E40 = v221;
                  }
                  else
                  {
                    v81 = v218;
                    *(_DWORD *)v210 = v218;
                    dword_4B3E40 = v219;
                  }
LABEL_177:
                  dword_4B238C = dword_4B2380;
                  dword_4B1C80 = dword_4ABF8C;
                  sub_41E160((int *)&v26[v81]);
                  v21 += 48;
                  goto LABEL_184;
                default:
                  goto LABEL_184;
              }
            }
          case 5u:
            sub_41D910();
            for ( i1 = *v21; *v21 != 46; i1 = *v21 )
            {
              ++v21;
              if ( i1 == 6 )
              {
                for ( i2 = 0; i2 < 3; ++i2 )
                  *((_BYTE *)&v218 + i2) = v21[i2];
                sub_41D930((char *)&v218);
                v21 += 3;
              }
            }
            goto LABEL_431;
          case 7u:
          case 0xAu:
            goto LABEL_276;
          case 8u:
            v234 = 1;
LABEL_276:
            v123 = AllocListNode(dword_4B24A0, 500, 500 * word_4B28C0);
            v124 = v123;
            if ( v123 == 0 )
            {
              while ( 1 )
                ;
            }
            if ( (_WORD)v234 != 0 )
              dword_4B2390 = AppendListNode(dword_4B2390, v123);
            else
              dword_4B3740 = AppendListNode(dword_4B3740, v123);
            *(_WORD *)(v124 + 264) = 2560;
            *(_DWORD *)(v124 + 192) = v124 + 204;
            *(_WORD *)(v124 + 38) = -1;
            v126 = *v21;
            v234 = 0;
            if ( v126 != 46 )
            {
              v127 = (_DWORD *)v213;
              do
              {
                ++v21;
                v128 = v125;
                v125 = 0;
                switch ( v126 )
                {
                  case 0xBu:
                    for ( i3 = 0; i3 < 4; ++i3 )
                      *((_BYTE *)&v218 + i3) = v21[i3];
                    sub_424820(*(_DWORD *)(v237 + 84), (unsigned __int16)v218);
                    *(_WORD *)(v124 + 368) = v218;
                    v127 = (_DWORD *)v213;
                    *(_WORD *)(v124 + 370) = HIWORD(v218);
                    v21 += 4;
                    break;
                  case 0xCu:
                    for ( i4 = 0; i4 < 4; ++i4 )
                      *((_BYTE *)&v218 + i4) = v21[i4];
                    *(_WORD *)(v124 + 372) = v218;
                    LOWORD(v125) = HIWORD(v218);
                    *(_WORD *)(v124 + 374) = HIWORD(v218);
                    goto LABEL_428;
                  case 0xFu:
                    for ( i5 = 0; i5 < 2; ++i5 )
                      *((_BYTE *)&v218 + i5) = v21[i5];
                    v152 = sub_448970((unsigned __int16)v218);
                    if ( v152 == 0 )
                    {
                      while ( 1 )
                        ;
                    }
                    v153 = AllocListNode(dword_4B3A98, 12, 12 * word_4B2376);
                    if ( v153 == 0 )
                    {
                      while ( 1 )
                        ;
                    }
                    *(_DWORD *)(v153 + 8) = v152;
                    if ( *(_WORD *)(v152 + 10) == 256 )
                      v237 = v152;
                    v154 = AppendListNode(*(_DWORD *)(v124 + 116), v153);
                    v26 = v248;
                    v127 = (_DWORD *)v213;
                    *(_DWORD *)(v124 + 116) = v154;
                    v21 += 2;
                    break;
                  case 0x10u:
                    for ( i6 = 0; i6 < 12; ++i6 )
                      *((_BYTE *)&v218 + i6) = v21[i6];
                    v21 += 12;
                    *(_DWORD *)(v124 + 228) = v218;
                    *(_DWORD *)(v124 + 232) = v219;
                    *(_DWORD *)(v124 + 236) = v220;
                    v125 = v219;
                    *(_DWORD *)(v124 + 256) = v219;
                    break;
                  case 0x11u:
                    for ( i7 = 0; i7 < 6; ++i7 )
                      *((_BYTE *)&v218 + i7) = v21[i7];
                    v21 += 6;
                    *(_WORD *)(v124 + 220) = v218;
                    LOWORD(v125) = HIWORD(v218);
                    *(_WORD *)(v124 + 222) = HIWORD(v218);
                    *(_WORD *)(v124 + 224) = v219;
                    break;
                  case 0x12u:
                    for ( i8 = 0; i8 < 12; ++i8 )
                      *((_BYTE *)&v218 + i8) = v21[i8];
                    v21 += 12;
                    *(_DWORD *)(v124 + 204) = v218;
                    v125 = v219;
                    *(_DWORD *)(v124 + 208) = v219;
                    *(_DWORD *)(v124 + 212) = v220;
                    break;
                  case 0x13u:
                    for ( i9 = 0; i9 < 1; ++i9 )
                    {
                      LOBYTE(v125) = v21[i9];
                      *((_BYTE *)&v218 + i9) = v125;
                    }
                    v156 = (unsigned __int16)(unsigned __int8)v218 == 1;
                    *(_WORD *)(v124 + 44) = (unsigned __int8)v218;
                    if ( v156 )
                    {
                      dword_4B39B8 = v124;
                      dword_4B324C = v124;
                      dword_4B3724 = v124 + 228;
                      *(_WORD *)(v124 + 60) = 64;
                      *(_WORD *)(v124 + 62) = 0x3FFF;
                    }
                    ++v21;
                    break;
                  case 0x15u:
                    for ( i10 = 0; i10 < 1; ++i10 )
                    {
                      LOBYTE(v125) = v21[i10];
                      *((_BYTE *)&v218 + i10) = v125;
                    }
                    *(_WORD *)(v124 + 42) = (unsigned __int8)v218;
                    ++v21;
                    break;
                  case 0x16u:
                    for ( i11 = 0; i11 < 8; ++i11 )
                      *((_BYTE *)&v218 + i11) = v21[i11];
                    *(_DWORD *)(v124 + 8) = v218;
                    v182 = *(_DWORD *)(v124 + 116);
                    v125 = v219;
                    *(_DWORD *)(v124 + 12) = v219;
                    if ( v182 != 0 && (*(_WORD *)(*(_DWORD *)(v182 + 8) + 10) & 0x180) != 0 )
                      *(_DWORD *)(v124 + 8) |= 0x200000u;
                    v21 += 8;
                    break;
                  case 0x17u:
                    for ( i12 = 0; i12 < 36; ++i12 )
                      *((_BYTE *)&v218 + i12) = v21[i12];
                    v185 = (_DWORD *)(v124 + 260);
                    v125 = (int)&v218 - v124 - 260;
                    for ( i13 = 9; i13 != 0; --i13 )
                    {
                      *v185 = *(_DWORD *)((char *)v185 + v125);
                      ++v185;
                    }
                    v26 = v248;
                    v127 = (_DWORD *)v213;
                    v21 += 36;
                    break;
                  case 0x18u:
                    for ( i14 = 0; i14 < 4; ++i14 )
                      *((_BYTE *)&v218 + i14) = v21[i14];
                    *(_DWORD *)(v124 + 280) = v124 + 296;
                    *(_WORD *)(v124 + 296) = v218;
                    *(_DWORD *)(v124 + 298) = v219;
                    v188 = sub_448970(v220);
                    if ( v188 == 0 )
                    {
                      while ( 1 )
                        ;
                    }
                    *(_DWORD *)(v124 + 304) = *(_DWORD *)(v188 + 84);
                    v189 = sub_448970(v221);
                    if ( v189 == 0 )
                    {
                      while ( 1 )
                        ;
                    }
                    v190 = *(_DWORD *)(v189 + 84);
                    *(_DWORD *)(v124 + 4) = 2;
                    *(_DWORD *)(v124 + 308) = v190;
                    v127 = (_DWORD *)v213;
                    v21 += 16;
                    break;
                  case 0x19u:
                    for ( i15 = 0; i15 < 4; ++i15 )
                    {
                      LOBYTE(v125) = v21[i15];
                      *((_BYTE *)&v218 + i15) = v125;
                    }
                    goto LABEL_428;
                  case 0x1Au:
                    for ( i16 = 0; i16 < 4; ++i16 )
                    {
                      LOBYTE(v125) = v21[i16];
                      *((_BYTE *)&v218 + i16) = v125;
                    }
                    *(_WORD *)(v124 + 256) = v218;
                    goto LABEL_428;
                  case 0x1Bu:
                    for ( i17 = 0; i17 < 6; ++i17 )
                      *((_BYTE *)&v218 + i17) = v21[i17];
                    v21 += 6;
                    *(_WORD *)(v124 + 72) = v218;
                    LOWORD(v125) = HIWORD(v218);
                    *(_WORD *)(v124 + 74) = HIWORD(v218);
                    *(_WORD *)(v124 + 76) = v219;
                    break;
                  case 0x1Cu:
                    for ( i18 = 0; i18 < 8; ++i18 )
                      *((_BYTE *)&v218 + i18) = v21[i18];
                    *(_DWORD *)(v124 + 80) = v218;
                    *(_WORD *)(v124 + 84) = v219;
                    *(_WORD *)(v124 + 46) = HIWORD(v219);
                    v125 = SHIWORD(v219) * SHIWORD(v219);
                    *(_DWORD *)(v124 + 48) = v125;
                    v21 += 8;
                    break;
                  case 0x1Du:
                    for ( i19 = 0; i19 < 4; ++i19 )
                    {
                      LOBYTE(v125) = v21[i19];
                      *((_BYTE *)&v218 + i19) = v125;
                    }
                    v192 = *(_WORD *)(v124 + 44);
                    if ( v192 == 14 || v192 == 31 )
                    {
                      *(_WORD *)(v124 + 406) = v218;
                    }
                    else if ( v192 == 8 )
                    {
                      *(_WORD *)(v124 + 352) = v218;
                    }
                    else
                    {
                      LOWORD(v125) = v218;
                      *(_WORD *)(v124 + 380) = v218;
                    }
                    goto LABEL_428;
                  case 0x1Eu:
                    for ( i20 = 0; i20 < 2; ++i20 )
                    {
                      LOBYTE(v125) = v21[i20];
                      *((_BYTE *)&v218 + i20) = v125;
                    }
                    v21 += 2;
                    *(_WORD *)(v124 + 30) = v218;
                    break;
                  case 0x1Fu:
                    for ( i21 = 0; i21 < 1; ++i21 )
                    {
                      LOBYTE(v125) = v21[i21];
                      *((_BYTE *)&v218 + i21) = v125;
                    }
                    *(_WORD *)(v124 + 38) = (unsigned __int8)v218;
                    ++v21;
                    break;
                  case 0x27u:
                    for ( i22 = 0; i22 < 4; ++i22 )
                    {
                      LOBYTE(v125) = v21[i22];
                      *((_BYTE *)&v218 + i22) = v125;
                    }
                    *(_WORD *)(v124 + 28) = v218;
                    goto LABEL_428;
                  case 0x30u:
                    for ( i23 = 0; i23 < 32; ++i23 )
                      *((_BYTE *)&v218 + i23) = v21[i23];
                    v159 = *(_DWORD ***)(v124 + 248);
                    if ( v159 != NULL )
                    {
                      for ( i24 = *v159; i24 != NULL; i24 = (_DWORD *)*i24 )
                        v159 = (_DWORD **)i24;
                      *v159 = v127;
                      v161 = v127;
                    }
                    else
                    {
                      *v127 = 0;
                      v161 = v127;
                      *(_DWORD *)(v124 + 248) = v127;
                    }
                    v127 += 8;
                    v213 = (int)v127;
                    if ( (int)v127 - *(int *)((char *)&dword_4B39FE + 2) >= dword_4B247C )
                    {
                      while ( 1 )
                        ;
                    }
                    v21 += 32;
                    v161[1] = v218;
                    *((_WORD *)v161 + 4) = v219;
                    *((_WORD *)v161 + 5) = v220;
                    v161[3] = v221;
                    HIWORD(v125) = HIWORD(v222);
                    v161[4] = v222;
                    v161[5] = v223;
                    v161[6] = v224;
                    LOWORD(v125) = v225;
                    *((_WORD *)v161 + 14) = v225;
                    break;
                  case 0x31u:
                    for ( i25 = 0; i25 < 32; ++i25 )
                      *((_BYTE *)&v218 + i25) = v21[i25];
                    v167 = *(_DWORD ***)(v124 + 252);
                    if ( v167 != NULL )
                    {
                      for ( i26 = *v167; i26 != NULL; i26 = (_DWORD *)*i26 )
                        v167 = (_DWORD **)i26;
                      *v167 = v127;
                      v169 = v127;
                    }
                    else
                    {
                      *v127 = 0;
                      v169 = v127;
                      *(_DWORD *)(v124 + 252) = v127;
                    }
                    v127 += 9;
                    v213 = (int)v127;
                    if ( (int)v127 - *(int *)((char *)&dword_4B39FE + 2) >= dword_4B247C )
                    {
                      while ( 1 )
                        ;
                    }
                    v21 += 32;
                    v169[1] = v218;
                    v169[2] = v219;
                    v169[3] = v220;
                    v169[4] = v221;
                    v169[5] = v222;
                    v169[6] = v223;
                    v169[7] = v224;
                    v125 = v225;
                    v169[8] = v225;
                    break;
                  case 0x32u:
                    for ( i27 = 0; i27 < 12; ++i27 )
                      *((_BYTE *)&v218 + i27) = v21[i27];
                    v175 = *(_DWORD ***)(v124 + 244);
                    if ( v175 != NULL )
                    {
                      for ( i28 = *v175; i28 != NULL; i28 = (_DWORD *)*i28 )
                        v175 = (_DWORD **)i28;
                      *v175 = v127;
                      v177 = v127;
                    }
                    else
                    {
                      *v127 = 0;
                      v177 = v127;
                      *(_DWORD *)(v124 + 244) = v127;
                    }
                    v213 = (int)(v127 + 4);
                    if ( (int)v127 - *(int *)((char *)&dword_4B39FE + 2) + 16 >= dword_4B247C )
                    {
                      while ( 1 )
                        ;
                    }
                    v125 = (int)v177 + 6;
                    *((_WORD *)v177 + 2) = v218;
                    v178 = (__int16 *)&v218 + 1;
                    for ( i29 = 5; i29 != 0; --i29 )
                    {
                      v180 = *v178++;
                      *(_WORD *)v125 = v180;
                      v125 += 2;
                    }
                    v26 = v248;
                    v127 = (_DWORD *)v213;
                    v21 += 12;
                    break;
                  case 0x34u:
                    for ( i30 = 0; i30 < 24; ++i30 )
                      *((_BYTE *)&v218 + i30) = v21[i30];
                    v163 = *(_DWORD ***)(v124 + 248);
                    if ( v163 != NULL )
                    {
                      for ( i31 = *v163; i31 != NULL; i31 = (_DWORD *)*i31 )
                        v163 = (_DWORD **)i31;
                      *v163 = v127;
                      v165 = v127;
                    }
                    else
                    {
                      *v127 = 0;
                      v165 = v127;
                      *(_DWORD *)(v124 + 248) = v127;
                    }
                    v127 += 7;
                    v213 = (int)v127;
                    if ( (int)v127 - *(int *)((char *)&dword_4B39FE + 2) >= dword_4B247C )
                    {
                      while ( 1 )
                        ;
                    }
                    v21 += 24;
                    v165[1] = v218;
                    *((_WORD *)v165 + 4) = v219;
                    v165[3] = v220;
                    HIWORD(v125) = HIWORD(v221);
                    v165[4] = v221;
                    *((_WORD *)v165 + 5) = v222;
                    *((_WORD *)v165 + 10) = HIWORD(v222);
                    *((_WORD *)v165 + 11) = v223;
                    LOWORD(v125) = HIWORD(v223);
                    *((_WORD *)v165 + 12) = HIWORD(v223);
                    break;
                  case 0x35u:
                    for ( i32 = 0; i32 < 40; ++i32 )
                      *((_BYTE *)&v218 + i32) = v21[i32];
                    v171 = *(_DWORD ***)(v124 + 252);
                    if ( v171 != NULL )
                    {
                      for ( i33 = *v171; i33 != NULL; i33 = (_DWORD *)*i33 )
                        v171 = (_DWORD **)i33;
                      *v171 = v127;
                      v173 = v127;
                    }
                    else
                    {
                      *v127 = 0;
                      v173 = v127;
                      *(_DWORD *)(v124 + 252) = v127;
                    }
                    v127 += 11;
                    v213 = (int)v127;
                    if ( (int)v127 - *(int *)((char *)&dword_4B39FE + 2) >= dword_4B247C )
                    {
                      while ( 1 )
                        ;
                    }
                    v21 += 40;
                    v173[1] = v218;
                    *((_WORD *)v173 + 4) = v219;
                    *((_WORD *)v173 + 5) = v220;
                    *((_WORD *)v173 + 6) = HIWORD(v219);
                    *((_BYTE *)v173 + 14) = BYTE2(v220);
                    *((_BYTE *)v173 + 17) = BYTE1(v221);
                    *((_BYTE *)v173 + 15) = HIBYTE(v220);
                    *((_BYTE *)v173 + 16) = v221;
                    *((_WORD *)v173 + 9) = HIWORD(v221);
                    *((_WORD *)v173 + 10) = v222;
                    v173[10] = v227;
                    *((_WORD *)v173 + 11) = HIWORD(v222);
                    *((_WORD *)v173 + 12) = v223;
                    v173[7] = v224;
                    v173[8] = v225;
                    v125 = v226;
                    v173[9] = v226;
                    break;
                  case 0x38u:
                    for ( i34 = 0; i34 < 2; ++i34 )
                      *((_BYTE *)&v218 + i34) = v21[i34];
                    *(_WORD *)(v124 + 32) = v218;
                    v125 = (__int16)v218 * (__int16)v218;
                    v21 += 2;
                    *(_DWORD *)(v124 + 48) += v125;
                    break;
                  case 0x39u:
                    for ( i35 = 0; i35 < 2; ++i35 )
                    {
                      LOBYTE(v125) = v21[i35];
                      *((_BYTE *)&v218 + i35) = v125;
                    }
                    v21 += 2;
                    *(_WORD *)(v124 + 40) = v218 + 16;
                    break;
                  case 0x3Au:
                    for ( i36 = 0; i36 < 4; ++i36 )
                      *((_BYTE *)&v218 + i36) = v21[i36];
                    *(_WORD *)(v124 + 60) = v218;
                    LOWORD(v125) = HIWORD(v218);
                    *(_WORD *)(v124 + 62) = HIWORD(v218);
LABEL_428:
                    v21 += 4;
                    break;
                  case 0x41u:
                    for ( i37 = 0; i37 < 20; ++i37 )
                      *((_BYTE *)&v218 + i37) = v21[i37];
                    v141 = 0;
                    *(_DWORD *)(v124 + 376) = v213;
                    v142 = v218;
                    if ( (_WORD)v218 != 0 )
                    {
                      v143 = 0;
                      do
                      {
                        ++v141;
                        *(_WORD *)(v143 + *(_DWORD *)(v124 + 376)) = v142;
                        v143 = 2 * v141;
                        v142 = *((_WORD *)&v218 + v141);
                      }
                      while ( v142 != 0 );
                      v26 = v248;
                    }
                    v144 = v213;
                    *(_BYTE *)(v124 + 330) = v141;
                    v145 = v144 + 2 * (((_WORD)v141 + 1) & 0xFFFE);
                    v125 = dword_4B247C;
                    v213 = v145;
                    if ( v145 - *(int *)((char *)&dword_4B39FE + 2) >= dword_4B247C )
                    {
                      while ( 1 )
                        ;
                    }
                    v127 = (_DWORD *)v213;
                    v21 += 20;
                    break;
                  case 0x42u:
                    for ( i38 = 0; i38 < 6; ++i38 )
                      *((_BYTE *)&v218 + i38) = v21[i38];
                    v21 += 6;
                    *(_WORD *)(v124 + 80) = v218;
                    LOWORD(v125) = HIWORD(v218);
                    *(_WORD *)(v124 + 82) = HIWORD(v218);
                    *(_WORD *)(v124 + 84) = v219;
                    break;
                  case 0x46u:
                    for ( i39 = 0; i39 < 2; ++i39 )
                    {
                      LOBYTE(v125) = v21[i39];
                      *((_BYTE *)&v218 + i39) = v125;
                    }
                    v21 += 2;
                    *(_WORD *)(v124 + 58) = v218;
                    break;
                  default:
                    v125 = v128;
                    break;
                }
                v126 = *v21;
              }
              while ( *v21 != 46 );
            }
            sub_42E770(v124);
            goto LABEL_431;
          case 9u:
            v110 = AllocListNode(dword_4B374C, 60, 60 * word_4B322C);
            v111 = v110;
            if ( v110 == 0 )
            {
              while ( 1 )
                ;
            }
            dword_4B3238 = AppendListNode(dword_4B3238, v110);
            v112 = *v21;
            if ( *v21 != 46 )
            {
              v27 = v213;
              do
              {
                ++v21;
                v113 = v28;
                v28 = 0;
                switch ( v112 )
                {
                  case 0x10u:
                    for ( i40 = 0; i40 < 12; ++i40 )
                      *((_BYTE *)&v218 + i40) = v21[i40];
                    v21 += 12;
                    *(_DWORD *)(v111 + 16) = v218;
                    v28 = v219;
                    *(_DWORD *)(v111 + 20) = v219;
                    *(_DWORD *)(v111 + 24) = v220;
                    break;
                  case 0x11u:
                    for ( i41 = 0; i41 < 6; ++i41 )
                      *((_BYTE *)&v218 + i41) = v21[i41];
                    v21 += 6;
                    *(_WORD *)(v111 + 32) = v218;
                    LOWORD(v28) = HIWORD(v218);
                    *(_WORD *)(v111 + 34) = HIWORD(v218);
                    *(_WORD *)(v111 + 36) = v219;
                    break;
                  case 0x16u:
                    for ( i42 = 0; i42 < 8; ++i42 )
                      *((_BYTE *)&v218 + i42) = v21[i42];
                    v21 += 8;
                    *(_DWORD *)(v111 + 8) = v218;
                    v28 = v219;
                    *(_DWORD *)(v111 + 12) = v219;
                    break;
                  case 0x1Cu:
                    for ( i43 = 0; i43 < 8; ++i43 )
                      *((_BYTE *)&v218 + i43) = v21[i43];
                    v21 += 8;
                    *(_DWORD *)(v111 + 40) = v218;
                    *(_WORD *)(v111 + 44) = v219;
                    LOWORD(v28) = HIWORD(v219);
                    *(_WORD *)(v111 + 54) = HIWORD(v219);
                    break;
                  case 0x1Fu:
                    for ( i44 = 0; i44 < 1; ++i44 )
                    {
                      LOBYTE(v28) = v21[i44];
                      *((_BYTE *)&v218 + i44) = v28;
                    }
                    *(_WORD *)(v111 + 52) = (unsigned __int8)v218;
                    ++v21;
                    break;
                  case 0x33u:
                    for ( i45 = 0; i45 < 32; ++i45 )
                      *((_BYTE *)&v218 + i45) = v21[i45];
                    v120 = *(int **)(v111 + 48);
                    if ( v120 != NULL )
                    {
                      for ( i46 = (int *)*v120; i46 != NULL; i46 = (int *)*i46 )
                        v120 = i46;
                      *v120 = v27;
                      v122 = (_DWORD *)v27;
                    }
                    else
                    {
                      *(_DWORD *)v27 = 0;
                      v122 = (_DWORD *)v27;
                      *(_DWORD *)(v111 + 48) = v27;
                    }
                    v27 += 36;
                    v213 = v27;
                    if ( v27 - *(int *)((char *)&dword_4B39FE + 2) >= dword_4B247C )
                    {
                      while ( 1 )
                        ;
                    }
                    v21 += 32;
                    v122[1] = v218;
                    v122[2] = v219;
                    v122[3] = v220;
                    v122[4] = v221;
                    v122[5] = v222;
                    v122[6] = v223;
                    v122[7] = v224;
                    v28 = v225;
                    v122[8] = v225;
                    break;
                  default:
                    v28 = v113;
                    break;
                }
                v112 = *v21;
              }
              while ( *v21 != 46 );
            }
            goto LABEL_431;
          case 0x20u:
            v59 = AllocListNode(dword_4B3B70, 88, 88 * word_4B3644);
            v60 = v59;
            if ( v59 == 0 )
            {
              while ( 1 )
                ;
            }
            dword_4B371C = AppendListNode(dword_4B371C, v59);
            *(_WORD *)(v60 + 16) = 0;
            v61 = *v21;
            if ( *v21 != 46 )
            {
              v62 = v233;
              do
              {
                ++v21;
                v63 = v27;
                v27 = 0;
                switch ( v61 )
                {
                  case 0x10u:
                    for ( i47 = 0; i47 < 12; ++i47 )
                      *((_BYTE *)&v218 + i47) = v21[i47];
                    *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v62 + 1) + 68) + 24) = v218;
                    *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v62 + 1) + 68) + 28) = v219;
                    *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v62 + 1) + 68) + 32) = v220;
                    TransMatrix(
                      (_DWORD *)(*((_DWORD *)v62 + 1) + 4),
                      (_DWORD *)(*(_DWORD *)(*((_DWORD *)v62 + 1) + 68) + 24));
                    v69 = dword_4B371C;
                    dword_4B37A0[*(_DWORD *)(v60 + 12)] = v232;
                    dword_4B371C = RemoveListNode(v69, v60);
                    v21 += 12;
                    break;
                  case 0x11u:
                    for ( i48 = 0; i48 < 6; ++i48 )
                      *((_BYTE *)&v218 + i48) = v21[i48];
                    v72 = sub_448AF0();
                    v232 = v72;
                    if ( v72 == 0 )
                    {
                      while ( 1 )
                        ;
                    }
                    *(_BYTE *)(v72 + 8) |= 2u;
                    v73 = *(_DWORD *)(v72 + 16);
                    v62 = (char *)(v72 + 12);
                    v233 = (char *)(v72 + 12);
                    *(_DWORD *)(v72 + 24) = -1;
                    *(_DWORD *)(v72 + 12) = 0;
                    *(_DWORD *)(v72 + 20) = *(_DWORD *)(v60 + 84);
                    *(_DWORD *)(v73 + 76) = 0;
                    *(_DWORD *)(*((_DWORD *)v62 + 1) + 72) = 0;
                    *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v62 + 1) + 68) + 16) = v218;
                    *(_WORD *)(*(_DWORD *)(*((_DWORD *)v62 + 1) + 68) + 20) = v219;
                    **((_DWORD **)v62 + 1) = 0;
                    RotMatrix(
                      (__int16 *)(*(_DWORD *)(*(_DWORD *)(v72 + 16) + 68) + 16),
                      (_WORD *)(*(_DWORD *)(v72 + 16) + 4));
                    v21 += 6;
                    break;
                  case 0x12u:
                    for ( i49 = 0; i49 < 12; ++i49 )
                      *((_BYTE *)&v218 + i49) = v21[i49];
                    **(_DWORD **)(*((_DWORD *)v62 + 1) + 68) = v218;
                    *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v62 + 1) + 68) + 4) = v218;
                    *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v62 + 1) + 68) + 8) = v218;
                    ScaleMatrix((__int16 *)(*((_DWORD *)v62 + 1) + 4), *(_DWORD **)(*((_DWORD *)v62 + 1) + 68));
                    v21 += 12;
                    break;
                  case 0x21u:
                    for ( i50 = 0; i50 < 4; ++i50 )
                    {
                      LOBYTE(v27) = v21[i50];
                      *((_BYTE *)&v218 + i50) = v27;
                    }
                    v67 = v218;
                    *(_WORD *)(v60 + 78) = 0;
                    v21 += 4;
                    *(_DWORD *)(v60 + 12) = v67;
                    break;
                  case 0x24u:
                    for ( i51 = 0; i51 < 8; ++i51 )
                      *((_BYTE *)&v218 + i51) = v21[i51];
                    *(_DWORD *)v210 = v218;
                    v65 = (int)&v248[v218];
                    dword_4B3E40 = v219;
                    *(_WORD *)(v60 + 10) = 2;
                    *(_DWORD *)(v60 + 84) = v65 + 4;
                    GsMapModelingData(v65 + 4);
                    *(_DWORD *)(v60 + 84) += 8;
                    sub_423F30(v65);
                    v26 = v248;
                    v62 = v233;
                    v21 += 8;
                    break;
                  case 0x39u:
                    for ( i52 = 0; i52 < 2; ++i52 )
                    {
                      LOBYTE(v28) = v21[i52];
                      *((_BYTE *)&v218 + i52) = v28;
                    }
                    LOWORD(v27) = v218;
                    v21 += 2;
                    *(_WORD *)(v232 + 182) = v218;
                    break;
                  case 0x43u:
                    for ( i53 = 0; i53 < 1; ++i53 )
                    {
                      LOBYTE(v28) = v21[i53];
                      *((_BYTE *)&v218 + i53) = v28;
                    }
                    LOBYTE(v27) = v218;
                    ++v21;
                    *(_BYTE *)(v232 + 181) = v218;
                    break;
                  default:
                    v27 = v63;
                    break;
                }
                v61 = *v21;
              }
              while ( *v21 != 46 );
            }
            goto LABEL_431;
          case 0x22u:
            v42 = AllocListNode(dword_4B3B70, 88, 88 * word_4B3644);
            v43 = v42;
            if ( v42 == 0 )
            {
              while ( 1 )
                ;
            }
            dword_4B371C = AppendListNode(dword_4B371C, v42);
            *(_WORD *)(v43 + 16) = 0;
            *(_WORD *)(v43 + 18) = 0;
            for ( i54 = *v21; *v21 != 46; i54 = *v21 )
            {
              ++v21;
              v45 = v28;
              v28 = 0;
              switch ( i54 )
              {
                case 0xDu:
                  for ( i55 = 0; i55 < 12; ++i55 )
                    *((_BYTE *)&v218 + i55) = v21[i55];
                  *(_DWORD *)(v43 + 14 * *(unsigned __int16 *)(v43 + 18) + 36) = v218;
                  *(_WORD *)(v43 + 14 * *(unsigned __int16 *)(v43 + 18) + 40) = v219;
                  *(_BYTE *)(v43 + 14 * *(unsigned __int16 *)(v43 + 18) + 45) = BYTE1(v220);
                  *(_BYTE *)(v43 + 14 * (*(unsigned __int16 *)(v43 + 18) + 3)) = BYTE2(v219);
                  *(_WORD *)(v43 + 14 * *(unsigned __int16 *)(v43 + 18) + 46) = BYTE2(v220);
                  v27 = 7 * *(unsigned __int16 *)(v43 + 18);
                  *(_WORD *)(v43 + 14 * *(unsigned __int16 *)(v43 + 18) + 48) = HIBYTE(v220);
                  *(_BYTE *)(v43 + 14 * *(unsigned __int16 *)(v43 + 18) + 43) = HIBYTE(v219);
                  v58 = *(_WORD *)(v43 + 18);
                  LOBYTE(v27) = v220;
                  v28 = 7 * v58;
                  *(_BYTE *)(v43 + 14 * v58 + 44) = v220;
                  ++*(_WORD *)(v43 + 18);
                  goto LABEL_99;
                case 0x24u:
                  for ( i56 = 0; i56 < 8; ++i56 )
                    *((_BYTE *)&v218 + i56) = v21[i56];
                  *(_DWORD *)v210 = v218;
                  v48 = (int)&v248[v218];
                  dword_4B3E40 = v219;
                  v208 = (int)&v248[v218 + 4];
                  *(_DWORD *)(v43 + 84) = v208;
                  GsMapModelingData(v208);
                  *(_DWORD *)(v43 + 84) += 8;
                  sub_423F30(v48);
                  v26 = v248;
                  *(_WORD *)(v43 + 10) = 2;
                  v21 += 8;
                  break;
                case 0x25u:
                  for ( i57 = 0; i57 < 8; ++i57 )
                    *((_BYTE *)&v218 + i57) = v21[i57];
                  v52 = AllocListNode(dword_4B3164, 20, 20 * word_4B3774);
                  if ( v52 == 0 )
                  {
                    while ( 1 )
                      ;
                  }
                  *(_DWORD *)(v43 + 84) = v52;
                  HIWORD(v27) = HIWORD(v219);
                  *(_DWORD *)v210 = v218;
                  dword_4B3E40 = v219;
                  *(_DWORD *)(v52 + 8) = &v26[v218];
                  *(_WORD *)(v43 + 10) = 4;
                  v53 = *(_WORD **)(v52 + 8);
                  LOWORD(v27) = v53[1];
                  v53 += 2;
                  *(_WORD *)(v52 + 18) = (unsigned __int16)v27 >> 1;
                  *(_DWORD *)(v52 + 8) = v53;
                  LOWORD(v27) = *v53;
                  v28 = (int)(v53 + 2);
                  *(_WORD *)(v52 + 14) = v27;
                  *(_DWORD *)(v52 + 8) = v28;
                  LOWORD(v28) = *(_WORD *)(v28 + 4);
                  v21 += 8;
                  *(_WORD *)(v52 + 16) = v28;
                  break;
                case 0x26u:
                  for ( i58 = 0; i58 < 4; ++i58 )
                  {
                    LOBYTE(v27) = v21[i58];
                    *((_BYTE *)&v218 + i58) = v27;
                  }
                  v21 += 4;
                  *(_WORD *)(v43 + 8) = v218;
                  break;
                case 0x27u:
                  for ( i59 = 0; i59 < 4; ++i59 )
                  {
                    LOBYTE(v28) = v21[i59];
                    *((_BYTE *)&v218 + i59) = v28;
                  }
                  v27 = HIWORD(v218);
                  v21 += 4;
                  *(_DWORD *)(v43 + 12) = HIWORD(v218);
                  *(_WORD *)(v43 + 78) = v218;
                  break;
                case 0x28u:
                  for ( i60 = 0; i60 < 3; ++i60 )
                    *((_BYTE *)&v218 + i60) = v21[i60];
                  HIWORD(v28) = 0;
                  *(_BYTE *)(v43 + 4 * *(unsigned __int16 *)(v43 + 16) + 20) = v218;
                  LOWORD(v28) = *(_WORD *)(v43 + 16);
                  *(_BYTE *)(v43 + 4 * (unsigned __int16)v28 + 21) = BYTE1(v218);
                  LOBYTE(v28) = BYTE2(v218);
                  HIWORD(v27) = 0;
                  *(_BYTE *)(v43 + 4 * *(unsigned __int16 *)(v43 + 16) + 22) = BYTE2(v218);
                  LOWORD(v27) = *(_WORD *)(v43 + 16);
                  *(_BYTE *)(v43 + 4 * (unsigned __int16)v27 + 23) = 0;
                  ++*(_WORD *)(v43 + 16);
                  v21 += 3;
                  break;
                case 0x3Fu:
                  for ( i61 = 0; i61 < 12; ++i61 )
                    *((_BYTE *)&v218 + i61) = v21[i61];
                  v28 = v220;
                  *(_DWORD *)v210 = v219;
                  dword_4B3E40 = v220;
                  *(_DWORD *)(v43 + 84) = &v26[v219];
                  *(_WORD *)(v43 + 10) = 1;
                  LOWORD(v27) = v218;
                  *(_WORD *)(v43 + 80) = v218;
LABEL_99:
                  v21 += 12;
                  break;
                case 0x40u:
                  for ( i62 = 0; i62 < 8; ++i62 )
                    *((_BYTE *)&v218 + i62) = v21[i62];
                  *(_DWORD *)v210 = v218;
                  v50 = (int)&v248[v218];
                  dword_4B3E40 = v219;
                  v209 = (int)&v248[v218 + 4];
                  *(_DWORD *)(v43 + 84) = v209;
                  GsMapModelingData(v209);
                  *(_DWORD *)(v43 + 84) += 8;
                  sub_423F30(v50);
                  v26 = v248;
                  *(_WORD *)(v43 + 10) = 256;
                  v21 += 8;
                  break;
                default:
                  v28 = v45;
                  break;
              }
            }
            goto LABEL_431;
          case 0x29u:
            for ( i63 = *v21; *v21 != 46; i63 = *v21 )
            {
              ++v21;
              if ( i63 == 42 )
              {
                for ( i64 = 0; i64 < 8; ++i64 )
                  *((_BYTE *)&v218 + i64) = v21[i64];
                *(_DWORD *)v210 = v218;
                v78 = &v26[v218];
                dword_4B3E40 = v219;
                sub_422A20((int)&v26[v218], v219);
                sub_40CE00((int)(v78 + 4), (int)v244);
                v21 += 8;
              }
            }
            goto LABEL_431;
          case 0x36u:
            for ( i65 = *v21; *v21 != 46; i65 = *v21 )
            {
              ++v21;
              if ( i65 == 55 )
              {
                for ( i66 = 0; i66 < 8; ++i66 )
                {
                  LOBYTE(v28) = v21[i66];
                  *((_BYTE *)&v218 + i66) = v28;
                }
                v27 = v219;
                *(_DWORD *)v210 = v218;
                dword_4B3E40 = v219;
                dword_4B2490 = (int)&v26[v218];
                v21 += 8;
              }
            }
            goto LABEL_431;
          case 0x3Bu:
            for ( i67 = *v21; *v21 != 46; i67 = *v21 )
            {
              ++v21;
              v100 = v27;
              HIWORD(v27) = 0;
              switch ( i67 )
              {
                case '+':
                  for ( i68 = 0; i68 < 12; ++i68 )
                    *((_BYTE *)&v218 + i68) = v21[i68];
                  v27 = v218;
                  v28 = v220;
                  dword_4B38C0 = v218;
                  dword_4B38C4 = v219;
                  dword_4B38C8 = v220;
                  v21 += 12;
                  break;
                case '<':
                  for ( i69 = 0; i69 < 4; ++i69 )
                    *((_BYTE *)&v218 + i69) = v21[i69];
                  v28 = (__int16)v218;
                  LOWORD(v27) = BYTE2(v218);
                  dword_4B2378 = (__int16)v218;
                  word_4B3170 = BYTE2(v218);
                  word_4B28CA = HIBYTE(v218);
                  v21 += 4;
                  break;
                case '=':
                  for ( i70 = 0; i70 < 6; ++i70 )
                    *((_BYTE *)&v218 + i70) = v21[i70];
                  word_4B237C = SHIWORD(v218) / 4;
                  word_4B3A9C = (__int16)v219 / 4;
                  word_4B38A0 = (__int16)v218 / 4;
                  word_4B3728 = (__int16)v218 / 4 - 128;
                  sub_40CCE0(4 * (unsigned __int16)((__int16)v218 / 4));
                  v21 += 6;
                  break;
                case '>':
                  for ( i71 = 0; i71 < 28; ++i71 )
                    *((_BYTE *)&v218 + i71) = v21[i71];
                  word_4B3774 = v218;
                  word_4B2244 = HIWORD(v218) + 100;
                  word_4B28C0 = HIWORD(v219) + 100;
                  word_4B2376 = v220 + 100;
                  word_4B3644 = v219 + 100;
                  v28 = v223 + 500;
                  v103 = v222;
                  v27 = v221 + 20000;
                  LOBYTE(v103) = v222 & 0xF8;
                  dword_4B247C = v221 + 20000;
                  LOWORD(v27) = HIWORD(v220);
                  dword_4B38A4 = v103;
                  word_4B3640 = v223 + 500;
                  word_4B322C = HIWORD(v220);
                  dword_4B3744 = v224;
                  v217 = 1;
                  if ( (__int16)(v223 + 500) < 300 )
                    word_4B3640 = 300;
                  v21 += 28;
                  break;
                default:
                  v27 = v100;
                  break;
              }
            }
            goto LABEL_431;
          case 0x47u:
            for ( i72 = *v21; *v21 != 46; i72 = *v21 )
            {
              ++v21;
              if ( i72 == 72 )
              {
                for ( i73 = 0; i73 < 8; ++i73 )
                  *((_BYTE *)&v218 + i73) = v21[i73];
                v27 = v219;
                v28 = (int)dword_52FD00;
                *(_DWORD *)v210 = v218;
                dword_4B3E40 = v219;
                v98 = (int)&v26[v218];
                *((_BYTE *)dword_52FD00 + 65615) = 1;
                dword_4B249C = v98;
                v21 += 8;
              }
            }
            goto LABEL_431;
          case 0x49u:
            v106 = *v21;
            if ( *v21 == 46 )
              goto LABEL_431;
            break;
          default:
            v28 = v41;
            goto LABEL_431;
        }
        do
        {
          ++v21;
          if ( v106 != 74 )
            goto LABEL_243;
          for ( i74 = 0; i74 < 48; ++i74 )
          {
            LOBYTE(v28) = v21[i74];
            *((_BYTE *)&v218 + i74) = v28;
          }
          v27 = (int)dword_52FD00;
          v108 = *((_BYTE *)dword_52FD00 + 65616);
          if ( v108 != 0 )
          {
            switch ( v108 )
            {
              case 1:
                v27 = v221;
                v215 = v221;
                v214 = (unsigned int)&v26[v220];
                break;
              case 2:
                v28 = v223;
                v109 = v222;
                v215 = v223;
LABEL_241:
                v27 = (int)&v26[v109];
                v214 = v27;
                break;
              case 3:
                v28 = (int)&v26[v224];
                v215 = v225;
                v214 = (unsigned int)&v26[v224];
                break;
              case 4:
                v27 = v227;
                v215 = v227;
                v214 = (unsigned int)&v26[v226];
                break;
              case 5:
                v28 = v229;
                v109 = v228;
                v215 = v229;
                goto LABEL_241;
              default:
                break;
            }
          }
          else
          {
            v28 = (int)&v26[v218];
            v215 = v219;
            v214 = (unsigned int)&v26[v218];
          }
          v21 += 48;
LABEL_243:
          v106 = *v21;
        }
        while ( *v21 != 46 );
LABEL_431:
        v40 = *v21;
      }
      while ( *v21 != 46 );
      v30 = v231;
      v31 = (unsigned int)v211;
LABEL_433:
      ++v21;
LABEL_458:
      v29 = *v21;
    }
    while ( *v21 != 47 );
  }
  strcpy(byte_52FBC0, *(char **)((char *)&off_4AD380 + v235));
  sub_422AC0();
  if ( Block != NULL )
    free(Block);
  sub_42E740(/*FileHandle*/ dword_4B3E44);
  if ( v212 != 0 )
    sub_41E0B0((int *)dword_4B364C);
  byte_4B3E48 = 0;
  byte_4B3A9E = 0;
  byte_4B3240 = 0;
  return 0;
}

// 0x430fd0  sub_430FD0
int __cdecl sub_430FD0(int a1)
{
  int result; // eax
  __int16 v2; // cx
  char v3; // al
  int v4; // eax
  int v5; // eax

  PadInfoMode();
  sub_447620();
  byte_4B3E48 = 0;
  PadSetAct();
  result = a1;
  v2 = word_4AD384[8 * a1];
  if ( v2 != 0 )
  {
    byte_4B3E48 = 4;
    if ( a1 == 3 )
    {
      v3 = *((_BYTE *)dword_52FD00 + 65637);
      switch ( v3 )
      {
        case 1:
          v4 = 104;
          break;
        case 2:
          v4 = 95;
          break;
        case 3:
          v4 = 100;
          break;
        case 4:
          v4 = 84;
          break;
        default:
          v5 = -(v3 != 5);
          LOBYTE(v5) = v5 & 0xA8;
          v4 = v5 + 89;
          break;
      }
    }
    else
    {
      v4 = v2;
    }
    if ( v4 != 1 )
      dword_4B1DFC = 1;
    result = sub_42E910(v4);
    if ( result != 0 )
    {
      dword_45F2B0 = 0;
      return result;
    }
    dword_4B1DFC = 0;
    byte_4B3E48 = 2;
  }
  byte_4B3771 = 0;
  return result;
}

// 0x4310a0  sub_4310A0
__int16 __cdecl sub_4310A0(int a1)
{
  int v1; // eax

  LOWORD(v1) = word_4AD384[8 * a1];
  if ( (_WORD)v1 != 0 )
  {
    byte_4B3E48 = 4;
    v1 = sub_42E910(v1);
    if ( v1 != 0 )
      dword_45F2B0 = 0;
  }
  return v1;
}

// 0x4310f0  sub_4310F0
char __cdecl sub_4310F0(__int16 a1)
{
  int v1; // eax

  sub_447620();
  v1 = sub_42E910(a1);
  if ( v1 != 0 )
  {
    dword_45F2B0 = 0;
  }
  else
  {
    sub_434DA0(dword_4B2490);
    PadInfoMode();
    sub_447EB0(dword_4B3740);
    sub_41E260();
    PadSetAct();
    sub_41E330();
    LOBYTE(v1) = sub_41D980();
    dword_4ABF78 = 40;
    byte_4B28C8 = 0;
  }
  return v1;
}

// 0x431160  sub_431160
char __cdecl sub_431160(_BYTE *a1, _BYTE *a2)
{
  unsigned int v2; // edi
  int v3; // ebp
  int v4; // esi
  char v5; // cl
  __int16 v6; // ax
  int v7; // ebx
  __int16 v8; // ax
  int v10; // esi
  char *v11; // edx
  int v12; // ebp
  unsigned __int16 v13; // ax
  __int16 v14; // ax
  char v15; // al
  unsigned __int16 v16; // ax
  char *v17; // ecx
  int v18; // esi
  char v19; // al
  __int16 v20; // ax
  char result; // al
  char v22; // [esp+13h] [ebp-10Dh]
  char v23; // [esp+14h] [ebp-10Ch]
  unsigned __int16 v24; // [esp+14h] [ebp-10Ch]
  int v25; // [esp+18h] [ebp-108h]
  char v26; // [esp+1Ch] [ebp-104h]
  _WORD v27[128]; // [esp+20h] [ebp-100h]

  v2 = 0x7Fu >> (*a1 & 7);
  v22 = 1;
  v3 = 19;
  v23 = *a1 & 7;
  if ( (unsigned __int16)v2 < 0x1Fu )
    LOWORD(v3) = (unsigned __int16)v2 >> 1;
  v26 = 7 - v23;
  v4 = 0;
  v5 = (*a1 >> 3) & 3;
  do
  {
    v6 = v4;
    if ( (unsigned __int16)v4 > (unsigned __int16)v3 )
      v6 = v3 + ((v4 - v3) << v5);
    v7 = (unsigned __int16)v4++;
    v27[v7] = v6 + 2;
    v8 = v2;
    v2 += 0xFFFF;
  }
  while ( v8 != 0 );
  v10 = (unsigned __int8)a1[3] + ((unsigned __int8)a1[2] << 8) + ((unsigned __int8)a1[1] << 16);
  v11 = a1 + 4;
  v25 = v10;
  v12 = 127 >> v23;
  do
  {
    LOBYTE(v13) = *v11;
    HIBYTE(v13) = 1;
    ++v11;
    v24 = v13;
    if ( v13 != 0 )
    {
      while ( 1 )
      {
        v14 = v24 & 1;
        v24 >>= 1;
        if ( v24 == 0 )
          break;
        if ( v14 != 0 )
        {
          v15 = *v11++;
          *a2++ = v15;
        }
        else
        {
          v16 = ((unsigned __int8)*v11 << 8) + (unsigned __int8)v11[1];
          v11 += 2;
          v17 = &a2[-(v16 >> v26)];
          v18 = (unsigned __int16)v12;
          LOWORD(v18) = v27[v12 & v16];
          do
          {
            v19 = *v17++;
            *a2 = v19;
            v20 = v18;
            ++a2;
            v18 += 0xFFFF;
          }
          while ( v20 != 0 );
          v10 = v25;
        }
        if ( v10 == 0 )
        {
          v22 = 0;
          break;
        }
        v25 = --v10;
      }
    }
    result = v22;
  }
  while ( v22 != 0 );
  return result;
}
