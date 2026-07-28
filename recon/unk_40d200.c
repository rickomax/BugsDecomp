// Module `unk_40d200`.
//
// Reconstructed from Bugs.exe (PC v1.0) by tools/recon.py.
// Generated file -- do not edit by hand; see recon/README.md.
//
// Address range: 0x40d200 - 0x40d580 (5 functions).

#include "bugs.h"


// 0x40d200  sub_40D200
int __cdecl sub_40D200(unsigned __int16 a1, unsigned __int16 a2, unsigned __int16 a3, unsigned __int16 a4)
{
  unsigned int v5; // edi
  double v6; // st7
  double v7; // st6
  double v8; // st4
  double v9; // st5
  int result; // eax
  float v11; // [esp+14h] [ebp+4h]
  float v12; // [esp+1Ch] [ebp+Ch]

  v5 = a1;
  v6 = (double)a1;
  v7 = (double)a3;
  LOWORD(dword_4EFB58) = a3;
  HIWORD(dword_4EFB58) = a4;
  LOWORD(dword_4EFB4C) = a1;
  HIWORD(dword_4EFB4C) = a2;
  v11 = v6 / v7;
  v8 = (double)a2;
  v9 = (double)a4;
  flt_4EFB7C = v11;
  flt_4EFB80 = v8 / v9;
  if ( v11 < 2.0 )
  {
    if ( flt_4EFB7C < 1.5 )
    {
      if ( flt_4EFB7C < 1.0 )
      {
        dword_4EFB84 = 1062836634;
        dword_4EFB88 = 1069547520;
      }
      else
      {
        dword_4EFB84 = 1065353216;
        dword_4EFB88 = 1065353216;
      }
    }
    else
    {
      dword_4EFB84 = 1069547520;
      dword_4EFB88 = 1065353216;
    }
  }
  else
  {
    dword_4EFB84 = 0x40000000;
    dword_4EFB88 = 1065353216;
  }
  LOWORD(dword_4EFB50) = a1 >> 1;
  HIWORD(dword_4EFB50) = a2 >> 1;
  dword_4EFB3C = 0;
  dword_4EFB40 = 10000;
  word_4EFB5C = (__int64)(v9 / (v7 * 0.625) * 4096.0);
  word_4EFB54 = (__int64)(v11 * 4096.0);
  v12 = v8;
  word_4EFB56 = (word_4EFB54 * (__int16)(__int64)(v12 / (v6 * 0.625) * 4096.0)) >> 12;
  result = a2 >> 1;
  flt_7BD968 = (float)-(v5 >> 1);
  dword_6225C4 = (v5 >> 1) - 1;
  flt_6225CC = (float)dword_6225C4;
  flt_7C623C = (float)(1 - result);
  dword_7BD964 = -(v5 >> 1);
  dword_6225C0 = 1 - result;
  dword_7C6244 = result;
  dword_4EFB6C = 0;
  flt_7C6238 = (float)(a2 >> 1);
  dword_4EFB70 = 0;
  dword_4EFB74 = 0;
  byte_4EFB78 = 0;
  return result;
}

// 0x40d440  sub_40D440
void __cdecl sub_40D440(int a1, int a2, int a3)
{
  dword_4EFB6C = a1;
  dword_4EFB70 = a2;
  dword_4EFB74 = a3;
  byte_4EFB78 = *(float *)&a1 != 0.0 || *(float *)&a2 != 0.0 && *(float *)&a3 != 0.0;
}

// 0x40d4a0  sub_40D4A0
int sub_40D4A0()
{
  int v0; // esi
  int *v1; // eax
  int v2; // edx
  unsigned int v3; // esi

  v0 = dword_4B1C90;
  memset(dword_4EFBA0, 0, 0x3FFFCu);
  if ( dword_4B1C90 >= 0 )
  {
    v1 = dword_4E7DC4;
    v2 = dword_4B1C90 + 1;
    do
    {
      *(v1 - 1) = 0;
      *v1 = 0;
      v1[1] = 0;
      v1[2] = 0;
      v1 += 4;
      --v2;
    }
    while ( v2 != 0 );
  }
  dword_4E5E40 = 0;
  v3 = 2 * v0 + 2;
  memset(word_622600, 0, v3);
  memset(word_621620, 0, v3);
  return 1;
}

// 0x40d520  sub_40D520
int sub_40D520()
{
  unsigned int v0; // edx

  dword_4E5E40 = 0;
  memset(dword_4EFBA0, 0, 0x3FFFCu);
  v0 = 2 * dword_4B1C90 + 2;
  memset(word_622600, 0, v0);
  memset(word_621620, 0, v0);
  return 1;
}

// 0x40d580  sub_40D580
float *__cdecl sub_40D580(float *a1, float *a2)
{
  *a1 = (double)word_623660 * 0.00024414;
  a1[1] = (double)word_623662 * 0.00024414;
  a1[2] = (double)word_623664 * 0.00024414;
  a1[3] = (double)word_623666 * 0.00024414;
  a1[4] = (double)word_623668 * 0.00024414;
  a1[5] = (double)word_62366A * 0.00024414;
  a1[6] = (double)word_62366C * 0.00024414;
  a1[7] = (double)word_62366E * 0.00024414;
  a1[8] = (double)word_623670 * 0.00024414;
  *a2 = (double)word_6225E0 * 0.00024414;
  a2[1] = (double)word_6225E2 * 0.00024414;
  a2[2] = (double)word_6225E4 * 0.00024414;
  a2[3] = (double)word_6225E6 * 0.00024414;
  a2[4] = (double)word_6225E8 * 0.00024414;
  a2[5] = (double)word_6225EA * 0.00024414;
  a2[6] = (double)word_6225EC * 0.00024414;
  a2[7] = (double)word_6225EE * 0.00024414;
  a2[8] = (double)word_6225F0 * 0.00024414;
  return a2;
}
