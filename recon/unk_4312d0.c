// Module `unk_4312d0`.
//
// Reconstructed from Bugs.exe (PC v1.0) by tools/recon.py.
// Generated file -- do not edit by hand; see recon/README.md.
//
// Address range: 0x4312d0 - 0x448970 (76 functions).

#include "bugs.h"


// 0x4312d0  sub_4312D0
int sub_4312D0()
{
  int v0; // ebx
  int v1; // ebp
  int v2; // esi
  int v3; // edi
  int v5; // [esp+14h] [ebp-Ch]
  int v6; // [esp+18h] [ebp-8h]

  v0 = dword_4B38C8;
  v1 = dword_4B38C4;
  v2 = dword_4B38CC;
  v3 = dword_4B38C0;
  v5 = dword_4B38D0;
  v6 = dword_4B38D4;
  word_4B3E2A = 0;
  sub_437560(dword_4B324C + 228);
  if ( v2 != 0 )
  {
    dword_4B38CC = v2;
    dword_4B38D0 = v5;
    dword_4B3968 = v5;
    dword_4B3964 = v2;
    dword_4B38D4 = v6;
    dword_4B396C = v6;
  }
  if ( v3 != 0 )
  {
    dword_4B38C0 = v3;
    dword_4B3928 = v3;
    dword_4B3954 = v3;
    dword_4B3974 = v3;
    dword_4B38C4 = v1;
    dword_4B392C = v1;
    dword_4B3958 = v1;
    dword_4B3978 = v1;
    dword_4B38C8 = v0;
    dword_4B3930 = v0;
    dword_4B395C = v0;
    dword_4B397C = v0;
  }
  if ( dword_4B324C != 0 )
  {
    dword_4B3E00 = *(_DWORD *)(dword_4B324C + 228);
    dword_4B3E04 = *(_DWORD *)(dword_4B324C + 232);
    dword_4B3E08 = *(_DWORD *)(dword_4B324C + 236);
  }
  dword_4B3950 = 0;
  word_4B3DAC = 0;
  LOWORD(dword_4B3940) = 64;
  word_4B3DF0 = 0;
  dword_4B215C = -200;
  dword_4B2150 = 600;
  dword_4B2154 = 1100;
  word_4B3E28 = 0;
  *((_BYTE *)dword_52FD00 + 65654) = 0;
  dword_4B3DA8 = 1100;
  word_4B3E2C = 0;
  word_4B3DA4 = 0;
  return 1100;
}

// 0x431430  sub_431430
void sub_431430()
{
  __int16 v0; // ax

  if ( word_4B3948 != 0 )
  {
    word_4B394C = (word_4B3948 * rsin(word_4B394A)) >> 11;
    word_4B394E = (word_4B3948 * rcos(word_4B394A)) >> 12;
    v0 = word_4B3946 + word_4B394A;
    dword_4B38CC += word_4B394C;
    dword_4B38D0 += word_4B394E;
    word_4B394A += word_4B3946;
    if ( word_4B394A < 2048 )
    {
      if ( v0 < 4096 )
        return;
      word_4B394A = v0 - 4096;
    }
    if ( word_4B3948 <= 3 )
      word_4B3948 = 0;
    else
      word_4B3948 -= 3;
  }
  else
  {
    word_4B394C = 0;
    word_4B394E = 0;
  }
}

// 0x431510  sub_431510
int __cdecl sub_431510(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  int v4; // eax
  int v5; // eax
  __int16 v6; // ax
  __int16 v7; // cx
  __int16 v8; // bx
  _WORD *v9; // edx
  __int16 v10; // ax
  __int16 v11; // dx
  unsigned int v12; // ecx
  int v13; // eax
  __int16 *v14; // ebx
  __int16 *v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // edx
  __int16 v19; // cx
  int result; // eax
  int v21; // eax
  __int16 v22; // cx
  _WORD *v23; // ebx
  __int16 *v24; // edi
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  bool v28; // cc
  __int16 *v29; // eax
  int v30; // [esp-8h] [ebp-18h]

  *(_DWORD *)(a3 + 56) = *a1 + *a2;
  *(_DWORD *)(a3 + 60) = a2[1] + a1[1];
  *(_DWORD *)(a3 + 64) = a1[2] + a2[2];
  v4 = dword_4B39AC;
  *(_DWORD *)(a3 + 100) = dword_4B39AC;
  if ( v4 == 0 )
    return 0;
  while ( 1 )
  {
    v5 = *(_DWORD *)(a3 + 100);
    if ( (a4 & *(_DWORD *)(v5 + 8)) == 0 )
      goto LABEL_17;
    sub_4078B0(v5 + 72, (_DWORD *)(v5 + 80), (_DWORD *)(a3 + 88));
    if ( *(_DWORD *)(a3 + 88) == 0 )
      goto LABEL_17;
    v6 = *(_WORD *)(a3 + 56);
    v7 = *(_WORD *)(a3 + 60);
    v8 = *(_WORD *)(a3 + 64);
    v9 = *(_WORD **)(a3 + 100);
    *(_WORD *)(a3 + 50) = v7;
    *(_WORD *)(a3 + 52) = v8;
    *(_WORD *)(a3 + 48) = v6;
    *(_WORD *)(a3 + 48) = v6 - v9[114];
    *(_WORD *)(a3 + 50) = v7 - v9[116];
    v10 = v8 - v9[118];
    v11 = *(_WORD *)(a3 + 48);
    *(_WORD *)(a3 + 52) = v10;
    v12 = v11 * v11 + v10 * v10;
    *(_DWORD *)(a3 + 88) = v12;
    v13 = *(_DWORD *)(a3 + 100);
    if ( v12 > *(_DWORD *)(v13 + 48) )
      goto LABEL_17;
    *(_DWORD *)(a3 + 96) = *(__int16 *)(v13 + 32);
    *(_WORD *)(a3 + 32) = 4096 - *(_WORD *)(v13 + 220);
    *(_WORD *)(a3 + 34) = 4096 - *(_WORD *)(v13 + 222);
    *(_WORD *)(a3 + 36) = 4096 - *(_WORD *)(v13 + 224);
    if ( ((*(_WORD *)(v13 + 220) + *(_WORD *)(v13 + 224)) & 0xFFF) != 0 )
    {
      RotMatrixZYX((__int16 *)(a3 + 32), (_WORD *)a3);
      goto LABEL_10;
    }
    if ( (*(_WORD *)(v13 + 222) & 0xFFF) != 0 )
    {
      *(_WORD *)(a3 + 2) = 0;
      *(_WORD *)(a3 + 4) = 0;
      *(_WORD *)(a3 + 6) = 0;
      *(_WORD *)(a3 + 10) = 0;
      *(_WORD *)(a3 + 12) = 0;
      *(_WORD *)(a3 + 14) = 0;
      *(_DWORD *)(a3 + 20) = 0;
      *(_DWORD *)(a3 + 24) = 0;
      *(_DWORD *)(a3 + 28) = 0;
      v30 = *(__int16 *)(a3 + 34);
      *(_WORD *)a3 = 4096;
      *(_WORD *)(a3 + 8) = 4096;
      *(_WORD *)(a3 + 16) = 4096;
      RotMatrixY(v30, (__int16 *)a3);
LABEL_10:
      v14 = (__int16 *)(a3 + 40);
      ApplyMatrixSV((__int16 *)a3, (__int16 *)(a3 + 48), (_DWORD *)(a3 + 40));
      goto LABEL_11;
    }
    v14 = (__int16 *)(a3 + 40);
    *(_WORD *)(a3 + 42) = *(_WORD *)(a3 + 50);
    *(_WORD *)(a3 + 40) = v11;
    *(_WORD *)(a3 + 44) = *(_WORD *)(a3 + 52);
LABEL_11:
    v15 = *(__int16 **)(a3 + 100);
    v16 = *(_DWORD *)(a3 + 96);
    v17 = *v14;
    if ( v17 >= v15[36] - v16 && v17 <= v16 + v15[40] )
    {
      v18 = *(__int16 *)(a3 + 44);
      if ( v18 >= v15[38] - v16 && v18 <= v16 + v15[42] )
      {
        v19 = *(_WORD *)(a3 + 42);
        if ( v19 > v15[41] && v19 - 240 <= v15[37] )
          break;
      }
    }
LABEL_17:
    result = *(_DWORD *)(*(_DWORD *)(a3 + 100) + 16);
    *(_DWORD *)(a3 + 100) = result;
    if ( result == 0 )
      return result;
  }
  *(_DWORD *)(a3 + 88) = *(__int16 *)(*(_DWORD *)(a3 + 100) + 82) - *(__int16 *)(a3 + 42);
  v21 = *(_DWORD *)(a3 + 100);
  *(_WORD *)(a3 + 72) = *(_WORD *)a1 - *(_WORD *)(v21 + 228);
  v22 = *((_WORD *)a1 + 4) - *(_WORD *)(v21 + 236);
  *(_WORD *)(a3 + 74) = 0;
  *(_WORD *)(a3 + 76) = v22;
  RotMatrixZYX((__int16 *)(a3 + 32), (_WORD *)a3);
  v23 = (_WORD *)(a3 + 80);
  ApplyMatrixSV((__int16 *)a3, (__int16 *)(a3 + 72), (_DWORD *)(a3 + 80));
  *(_DWORD *)(a3 + 92) = ratan2(*(__int16 *)(a3 + 80), *(__int16 *)(a3 + 84));
  v24 = (__int16 *)(a3 + 40);
  *(_WORD *)(a3 + 40) = *(_WORD *)a2;
  *(_WORD *)(a3 + 42) = *((_WORD *)a2 + 2);
  *(_WORD *)(a3 + 44) = *((_WORD *)a2 + 4);
  ApplyMatrixSV((__int16 *)a3, (__int16 *)(a3 + 40), (_DWORD *)(a3 + 40));
  v25 = *(_DWORD *)(a3 + 96) + 2;
  *(_DWORD *)(a3 + 96) = v25;
  v26 = v25;
  v27 = *(_DWORD *)(a3 + 92);
  if ( v27 >= 0 )
  {
    v28 = *(_DWORD *)(a3 + 92) < ratan2(
                                   v26 + *(__int16 *)(*(_DWORD *)(a3 + 100) + 80),
                                   v26 + *(__int16 *)(*(_DWORD *)(a3 + 100) + 84));
    v29 = *(__int16 **)(a3 + 100);
    if ( !v28 )
    {
      v28 = *(_DWORD *)(a3 + 92) < ratan2(*(_DWORD *)(a3 + 96) + v29[40], v29[38] - *(_DWORD *)(a3 + 96));
      v29 = *(__int16 **)(a3 + 100);
      if ( v28 )
      {
        *v24 = *(_WORD *)(a3 + 96) + v29[40] - *v23;
        goto LABEL_28;
      }
LABEL_27:
      *(_WORD *)(a3 + 44) = v29[38] - *(_WORD *)(a3 + 84) - *(_WORD *)(a3 + 96);
      goto LABEL_28;
    }
LABEL_24:
    *(_WORD *)(a3 + 44) = *(_WORD *)(a3 + 96) + v29[42] - *(_WORD *)(a3 + 84);
    goto LABEL_28;
  }
  *(_DWORD *)(a3 + 92) = -v27;
  v28 = *(_DWORD *)(a3 + 92) < -ratan2(
                                  *(__int16 *)(*(_DWORD *)(a3 + 100) + 72) - v26,
                                  v26 + *(__int16 *)(*(_DWORD *)(a3 + 100) + 84));
  v29 = *(__int16 **)(a3 + 100);
  if ( v28 )
    goto LABEL_24;
  v28 = *(_DWORD *)(a3 + 92) < -ratan2(v29[36] - *(_DWORD *)(a3 + 96), v29[38] - *(_DWORD *)(a3 + 96));
  v29 = *(__int16 **)(a3 + 100);
  if ( !v28 )
    goto LABEL_27;
  *v24 = v29[36] - *v23 - *(_WORD *)(a3 + 96);
LABEL_28:
  RotMatrix(v29 + 110, (_WORD *)a3);
  ApplyMatrixSV((__int16 *)a3, (__int16 *)(a3 + 40), (_DWORD *)(a3 + 40));
  *a2 = *v24;
  a2[1] = *(_DWORD *)(a3 + 88);
  a2[2] = *(__int16 *)(a3 + 44);
  return *(_DWORD *)(a3 + 100);
}

// 0x4318e0  sub_4318E0
int __cdecl sub_4318E0(int a1, _DWORD *a2, _WORD *a3, int a4)
{
  int v5; // ebx
  _DWORD *v6; // edi
  int v7; // ebp
  int v8; // eax
  int v9; // ebp
  int v10; // edx
  __int16 v12; // di
  int v13; // edx
  __int16 *v14; // ecx
  _DWORD *v15; // [esp+20h] [ebp+10h]

  v15 = (_DWORD *)(a4 + 104);
  v5 = 0;
  v6 = (_DWORD *)(a4 + 48);
  *(_DWORD *)(a4 + 64) = *a2;
  *(_DWORD *)(a4 + 68) = a2[1];
  *(_DWORD *)(a4 + 72) = a2[2];
  *(_WORD *)(a4 + 8) = *a3;
  *(_WORD *)(a4 + 10) = a3[2];
  *(_WORD *)(a4 + 12) = a3[4];
  *(_WORD *)a4 = 0;
  *(_WORD *)(a4 + 4) = 0;
  do
  {
    *(_WORD *)(a4 + 2) = *(_WORD *)(a1 + 2) + word_4ADAA8[v5];
    RotMatrix((__int16 *)a4, (_WORD *)(a4 + 16));
    gte_ApplyMatrix((__int16 *)(a4 + 16), (__int16 *)(a4 + 8), (int *)(a4 + 48));
    *(_DWORD *)(a4 + 68) = a2[1];
    *v15 = 0;
    v7 = *v6 + *(_DWORD *)(a4 + 56);
    *(_WORD *)(a4 + 90) = -1;
    sub_434E40(a4 + 64, a4 + 48, a4 + 80, v15);
    v8 = *(_DWORD *)(a4 + 56);
    v9 = v7 - (*v6 + v8);
    word_4B3DC0[v5] = SquareRoot0(v8 * v8 + *v6 * *v6);
    if ( (*(_BYTE *)(a4 + 82) & 4) == 0 && v9 == 0 )
      break;
    v10 = v5++;
  }
  while ( v10 < 24 );
  *(_DWORD *)a3 = *v6;
  *((_DWORD *)a3 + 1) = *(_DWORD *)(a4 + 52);
  *((_DWORD *)a3 + 2) = *(_DWORD *)(a4 + 56);
  *(_WORD *)(a1 + 2) = word_4ADAA8[v5];
  if ( v5 < 24 )
    return v5 != 0;
  v12 = 0;
  v13 = 0;
  v14 = word_4B3DC0;
  do
  {
    *(_WORD *)(a4 + 8) = 0;
    if ( *v14 > v13 )
    {
      v13 = *v14;
      *(_WORD *)(a4 + 8) = v12;
    }
    ++v14;
    ++v12;
  }
  while ( (int)v14 < (int)&word_4B3DF0 );
  *(_WORD *)(a1 + 2) = word_4ADAA8[*(__int16 *)(a4 + 8)];
  return 2;
}

// 0x431a60  sub_431A60
void __cdecl sub_431A60(int a1, int a2)
{
  int v2; // edi
  int *v3; // ebx
  __int16 *v4; // esi
  _WORD *v5; // eax
  unsigned __int16 *v6; // eax
  int v7; // ebx
  __int16 v8; // dx
  int v9; // ecx
  int v10; // eax
  unsigned __int8 v11; // cl
  BOOL v12; // ecx
  int *v13; // ebx
  __int16 *v14; // ebp
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  __int16 v19; // bx
  __int16 v20; // ax
  int v21; // eax
  int v22; // eax
  __int16 v23; // bp
  int v24; // ebx
  int v25; // ecx
  int v26; // eax
  __int16 v27; // ax
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // ecx
  int v34; // eax
  int v35; // edi
  int v36; // edx
  int v37; // ecx
  int v38; // eax
  __int16 v39; // ax
  int v40; // eax
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  int v46; // edx
  bool v47; // zf
  int v48; // eax
  __int16 v49; // ax
  __int64 v50; // rax
  int v51; // ecx
  int v52; // ecx
  __int16 v53; // bx
  int v54; // ecx
  int v55; // eax
  __int16 v56; // dx
  int *v57; // ebx
  int *v58; // ebp
  int v59; // eax
  int v60; // eax
  int v61; // ecx
  int v62; // ecx
  int v63; // edx
  int v64; // eax
  int v65; // eax
  __int16 v66; // ax
  __int16 v67; // dx
  __int16 v68; // ax
  int v69; // eax
  int v70; // ecx
  int v71; // eax
  int v72; // ecx
  __int16 v73; // ax
  int v74; // edx
  int i; // eax
  int v76; // ecx
  int v77; // edx
  int v78; // edx
  int v79; // ecx
  int v80; // edx
  int v81; // ecx
  int v82; // edx
  int v83; // eax
  int v84; // eax
  int v85; // edi
  int v86; // ecx
  int v87; // ecx
  int v88; // eax
  int v89; // edi
  int v90; // edi
  int v91; // ecx
  int v92; // edi
  int v93; // edi
  int v94; // eax
  int v95; // eax
  int v96; // ecx
  int v97; // [esp+10h] [ebp-8h]
  __int16 *v98; // [esp+10h] [ebp-8h]
  int v99; // [esp+14h] [ebp-4h]
  char *v100; // [esp+1Ch] [ebp+4h]

  v2 = a1;
  if ( a1 != 0 )
  {
    v3 = (int *)(a1 + 228);
    v4 = (__int16 *)dword_4EFAC0;
    v100 = (char *)dword_4EFAC0 + 248;
    v5 = (_WORD *)sub_436CD0(v2 + 228, *(_WORD *)(v2 + 38));
    *((_DWORD *)v4 + 47) = v5;
    if ( v5 != NULL )
    {
      *(_WORD *)(dword_4B324C + 38) = *v5;
      dword_4B3248 = *((_DWORD *)v4 + 47);
    }
    else
    {
      dword_4B3248 = 0;
    }
    v6 = (unsigned __int16 *)sub_436CD0(&dword_4B38C0, -1);
    *((_DWORD *)v4 + 47) = v6;
    if ( v6 == NULL )
      v6 = (unsigned __int16 *)dword_4B3248;
    dword_4B39C8 = (int)v6;
    if ( v6 != NULL )
    {
      *(_DWORD *)(dword_4B39B4 + 120) = dword_4B37A0[*v6];
      *(_WORD *)(dword_4B39B4 + 40) = *(_WORD *)(*(_DWORD *)(dword_4B39B4 + 120) + 182);
      *(_WORD *)(dword_4B39B4 + 38) = *(_WORD *)dword_4B39C8;
    }
    dword_4B3748 &= ~2u;
    if ( *(_DWORD *)(v2 + 120) != 0 )
    {
      v7 = *v3;
      if ( dword_4B3E00 != v7 || dword_4B3E04 != *(_DWORD *)(v2 + 232) || dword_4B3E08 != *(_DWORD *)(v2 + 236) )
        a2 = 1;
      dword_4B3E00 = v7;
      dword_4B3E04 = *(_DWORD *)(v2 + 232);
      dword_4B3E08 = *(_DWORD *)(v2 + 236);
      if ( *(_WORD *)(v2 + 44) == 14 )
        a2 = 1;
      v8 = dword_4B3940;
      if ( (dword_4B3940 & 0x40) != 0 && (dword_4B3940 & 0x300) == 0 )
      {
        if ( word_4B3DF0 >= 10 )
        {
          LOBYTE(dword_4B3940) = dword_4B3940 & 0xBF;
          v8 = dword_4B3940;
        }
        else
        {
          ++word_4B3DF0;
          a2 = 1;
        }
      }
      if ( word_4B3DAC != 0 )
      {
        --word_4B3DAC;
        *(_DWORD *)(v2 + 20) |= 0x80000000;
        dword_4B3950 = 0;
        sub_431430();
        return;
      }
      if ( dword_4B3950 != 0 )
      {
        v9 = *(_DWORD *)(dword_4B3950 + 388);
        if ( v9 != 0 && (*(_DWORD *)(v9 + 16) & 0x200) != 0 )
        {
          v2 = dword_4B3950;
          *(_DWORD *)(dword_4B3950 + 20) |= 0x80000000;
          v8 = dword_4B3940;
        }
      }
      if ( (v8 & 0x300) != 0 )
      {
        *(_DWORD *)(v2 + 20) |= 0x80000000;
        LOBYTE(dword_4B3940) = dword_4B3940 | 0x40;
        dword_4B3950 = 0;
        word_4B3DF0 = 0;
        sub_431430();
        return;
      }
      *((_DWORD *)v4 + 50) = dword_4B215C;
      *((_DWORD *)v4 + 49) = dword_4B2150;
      *((_DWORD *)v4 + 48) = dword_4B2154;
      if ( (*(_DWORD *)(v2 + 20) & 0x1000000) != 0 )
        *((_DWORD *)v4 + 48) = 500;
      if ( (*((_BYTE *)dword_52FD00 + 65546) & 0x10) != 0 && dword_4B3160 == 0 )
      {
        v10 = *(_DWORD *)(v2 + 20);
        if ( (v10 & 0x1015609) == 0 && (*(_BYTE *)(v2 + 24) & 4) == 0 && (dword_4B3940 & 0x2000) == 0 )
        {
          v11 = dword_4B226C;
          if ( (_BYTE)dword_4B226C != 0 )
            goto LABEL_63;
          v12 = (v10 & 0x10000000) == 0 || a2 == 0;
          if ( v12 && *((_BYTE *)dword_52FD00 + 65654) == 0 && (dword_4B3940 & 0x10) == 0 )
          {
            v13 = (int *)(v4 + 56);
            *(_DWORD *)(v2 + 20) = v10 | 0x80000000;
            *((_DWORD *)v4 + 38) = 0;
            *((_DWORD *)v4 + 37) = 0;
            *((_DWORD *)v4 + 36) = 0;
            v14 = (__int16 *)&unk_4ADADA;
            do
            {
              *((_DWORD *)v4 + 12) = *(_DWORD *)(v2 + 228);
              *((_DWORD *)v4 + 13) = *(_DWORD *)(v2 + 232) + *((_DWORD *)v4 + 50);
              *((_DWORD *)v4 + 14) = *(_DWORD *)(v2 + 236);
              *v13 = *(v14 - 1) >> 1;
              *((_DWORD *)v4 + 29) = 0;
              *((_DWORD *)v4 + 30) = *v14 >> 1;
              if ( sub_431510((_DWORD *)v4 + 12, v13, (int)v100, 147456) == 0 )
              {
                v13 = (int *)(v4 + 56);
                *((_DWORD *)v4 + 28) += *(v14 - 1) >> 1;
                *((_DWORD *)v4 + 29) = 0;
                *((_DWORD *)v4 + 30) += *v14 >> 1;
                sub_431510((_DWORD *)v4 + 12, (_DWORD *)v4 + 28, (int)v100, 147456);
              }
              *((_DWORD *)v4 + 13) = *(_DWORD *)(v2 + 232) + *((_DWORD *)v4 + 50);
              v4[87] = -1;
              sub_434E40(v4 + 24, v13, v4 + 82, v100);
              v14 += 2;
              *((_DWORD *)v4 + 36) += *v13;
              *((_DWORD *)v4 + 38) += *((_DWORD *)v4 + 30);
            }
            while ( (int)v14 < (int)word_4ADAFA );
            *((_DWORD *)v4 + 36) = (3000 * *((_DWORD *)v4 + 36)) >> 12;
            v15 = (3000 * *((_DWORD *)v4 + 38)) >> 12;
            *((_DWORD *)v4 + 38) = v15;
            if ( word_4B3DA4 == 0 || a2 != 0 )
            {
              v16 = *((_DWORD *)v4 + 36);
              if ( (v16 | v15) == 0 || a2 != 0 )
              {
                dword_4B38CC += (*(_DWORD *)(v2 + 228) + v16 - dword_4B38CC) >> 2;
                dword_4B38D0 += (*(_DWORD *)(v2 + 232) - dword_4B38D0 - 400) >> 2;
                dword_4B38D4 += (*(_DWORD *)(v2 + 236) + *((_DWORD *)v4 + 38) - dword_4B38D4) >> 2;
              }
              else
              {
                dword_4B38CC = *(_DWORD *)(v2 + 228) + v16;
                dword_4B38D0 = *(_DWORD *)(v2 + 232) - 400;
                v17 = *((_DWORD *)v4 + 38);
                v18 = *(_DWORD *)(v2 + 236);
                word_4B3DA4 = 1;
                dword_4B38D4 = v18 + v17;
              }
            }
            *v4 = 0;
            v4[1] = 0;
            v4[2] = -150;
            v19 = ((40 * *((__int16 *)dword_52FD00 + 32778)) >> 7) + word_4B3E20;
            word_4B3E20 = v19;
            v20 = ((40 * *((__int16 *)dword_52FD00 + 32777)) >> 7) + word_4B3E22;
            word_4B3E22 = v20;
            if ( v20 < -330 )
            {
              v20 = -330;
              word_4B3E22 = -330;
            }
            if ( v20 > 330 )
            {
              v20 = 330;
              word_4B3E22 = 330;
            }
            if ( v19 < -330 )
            {
              v19 = -330;
              word_4B3E20 = -330;
            }
            if ( v19 > 330 )
              word_4B3E20 = 330;
            *((_DWORD *)v4 + 59) = v20 + *(__int16 *)(v2 + 222);
            v4[102] = 4096;
            v4[103] = 0;
            v4[104] = 0;
            v4[105] = 0;
            v4[106] = 4096;
            v4[107] = 0;
            v4[108] = 0;
            v4[109] = 0;
            v4[110] = 4096;
            *((_DWORD *)v4 + 56) = 0;
            *((_DWORD *)v4 + 57) = 0;
            *((_DWORD *)v4 + 58) = 0;
            RotMatrixX(word_4B3E20, v4 + 102);
            RotMatrixY(*((_DWORD *)v4 + 59), v4 + 102);
            ApplyMatrix(v4 + 102, v4, (int *)v4 + 20);
            dword_4B38C0 += (*((_DWORD *)v4 + 20) + dword_4B38CC - dword_4B38C0) >> 1;
            dword_4B38C4 += (dword_4B38D0 - *((_DWORD *)v4 + 21) - dword_4B38C4) >> 1;
            dword_4B38C8 += (dword_4B38D4 + *((_DWORD *)v4 + 22) - dword_4B38C8) >> 1;
            sub_431430();
            v21 = dword_4B3748;
            LOBYTE(v21) = dword_4B3748 | 2;
            dword_4B3748 = v21;
            return;
          }
        }
      }
      v11 = dword_4B226C;
LABEL_63:
      v22 = dword_4B3748;
      LOBYTE(dword_4B3940) = dword_4B3940 & 0xEF;
      v23 = dword_4B3940;
      LOBYTE(v22) = dword_4B3748 & 0xFD;
      dword_4B3748 = v22;
      word_4B3E22 = 0;
      word_4B3E20 = 0;
      word_4B3DA4 = 0;
      if ( (dword_4B3940 & 0xC00) != 0 )
      {
        if ( (dword_4B3940 & 0x800) != 0 )
        {
          v24 = dword_4B38CC - ((dword_4B38CC - dword_4B3994) >> 2);
          dword_4B38CC = v24;
          v25 = dword_4B399C;
          dword_4B38D0 -= (dword_4B38D0 - dword_4B3998) >> 2;
          v26 = dword_4B38D4;
        }
        else
        {
          v24 = dword_4B38CC - ((dword_4B38CC - *(_DWORD *)(v2 + 228)) >> 2);
          dword_4B38CC = v24;
          dword_4B38D0 -= (dword_4B38D0 - *(_DWORD *)(v2 + 232) + 400) >> 2;
          v26 = dword_4B38D4;
          v25 = *(_DWORD *)(v2 + 236);
        }
        dword_4B38D4 = v26 - ((dword_4B38D4 - v25) >> 2);
        if ( (dword_4B3940 & 0x1000) != 0 )
        {
          *v4 = dword_4B3984 - v24;
          v4[1] = dword_4B3988 - dword_4B38D0;
          v27 = dword_4B398C - dword_4B38D4;
          v4[2] = dword_4B398C - dword_4B38D4;
          v28 = SquareRoot0(*v4 * *v4 + v27 * v27 + v4[1] * v4[1]);
          *((_DWORD *)v4 + 59) = v28;
          if ( v28 == 0 )
            *((_DWORD *)v4 + 59) = 1;
          v29 = *((_DWORD *)v4 + 59);
          *((_DWORD *)v4 + 6) = (*v4 << 12) / v29;
          *((_DWORD *)v4 + 7) = (v4[1] << 12) / v29;
          v30 = *((_DWORD *)v4 + 6);
          *((_DWORD *)v4 + 8) = (v4[2] << 12) / v29;
          v31 = dword_4B39A4 * v30;
          *((_DWORD *)v4 + 59) = dword_4B39A4;
          v24 = dword_4B38CC;
          v32 = dword_4B38CC + (v31 >> 12);
          dword_4B3984 = v32;
          v33 = dword_4B38D0 + ((*((_DWORD *)v4 + 59) * *((_DWORD *)v4 + 7)) >> 12);
          dword_4B3988 = v33;
          v23 = dword_4B3940;
          v34 = dword_4B38D4 + ((*((_DWORD *)v4 + 59) * *((_DWORD *)v4 + 8)) >> 12);
          dword_4B398C = v34;
        }
        else
        {
          v34 = dword_4B398C;
          v33 = dword_4B3988;
          v32 = dword_4B3984;
        }
        if ( (v23 & 0x400) != 0 )
        {
          v35 = dword_4B38C0 - ((dword_4B38C0 - v32) >> 2);
          v36 = dword_4B38C4 - ((dword_4B38C4 - v33) >> 2);
          dword_4B38C0 = v35;
          v37 = dword_4B38C8 - ((dword_4B38C8 - v34) >> 2);
          v23 = dword_4B3940;
          dword_4B38C4 = v36;
          dword_4B38C8 = v37;
        }
        else
        {
          v37 = dword_4B38C8;
          v36 = dword_4B38C4;
          v35 = dword_4B38C0;
        }
        if ( (v23 & 0x4000) != 0 )
        {
          dword_4B392C = v36;
          dword_4B3958 = v36;
          dword_4B3978 = v36;
          dword_4B3928 = v35;
          dword_4B3954 = v35;
          dword_4B3974 = v35;
          dword_4B3930 = v37;
          dword_4B395C = v37;
          dword_4B397C = v37;
          dword_4B3964 = v24;
          dword_4B3968 = dword_4B38D0;
          dword_4B396C = dword_4B38D4;
        }
        if ( (dword_4B3940 & 8) != 0 )
          LOWORD(dword_4B3940) = dword_4B3940 & 0xA3F7;
        *v4 = dword_4B38C0;
        v4[1] = dword_4B38C4;
        v4[2] = dword_4B38C8;
        *v4 -= dword_4B38CC;
        v4[1] -= dword_4B38D0;
        v4[2] -= dword_4B38D4;
        word_4B3E1A = ratan2(*v4, v4[2]);
        word_4B3E2C = word_4B3E1A;
        v38 = SquareRoot0(*v4 * *v4 + v4[2] * v4[2]);
        LOBYTE(dword_4B3940) = dword_4B3940 | 0x40;
        word_4B3E28 = 60;
        dword_4B3DA8 = v38 + 1;
        word_4B3DF0 = 0;
        sub_431430();
        return;
      }
      LOWORD(dword_4B3940) = dword_4B3940 & 0xA3E7;
      dword_4B3E10 = 0;
      v39 = *((_WORD *)dword_52FD00 + 32773);
      if ( (v39 & 4) != 0 || (v11 | *(_DWORD *)(v2 + 20) & 0x1000000) != 0 )
      {
LABEL_99:
        dword_4B392C = dword_4B3978;
        dword_4B38D0 = dword_4B3968;
        word_4B3E1A %= 4096;
        dword_4B3930 = dword_4B397C;
        dword_4B3928 = dword_4B3974;
        dword_4B38D4 = dword_4B396C;
        dword_4B38CC = dword_4B3964;
        dword_4B38C4 = dword_4B3958;
        dword_4B38C0 = dword_4B3954;
        dword_4B38C8 = dword_4B395C;
        v4[72] = 0;
        v4[73] = 0;
        v4[74] = 0;
        *v4 = dword_4B3928;
        v4[1] = dword_4B392C;
        v4[2] = dword_4B3930;
        *v4 -= *(_WORD *)(v2 + 228);
        v4[1] -= *(_WORD *)(v2 + 232);
        v4[2] -= *(_WORD *)(v2 + 236);
        v4[4] = 0;
        v45 = v4[2] * v4[2];
        v46 = *v4 * *v4;
        v47 = v46 + v45 == 0;
        v48 = v46 + v45;
        v4[6] = 0;
        if ( v47 )
        {
          *((_DWORD *)v4 + 59) = 100;
          v4[5] = *(_WORD *)(v2 + 222) - 2048;
        }
        else
        {
          *((_DWORD *)v4 + 59) = SquareRoot0(v48) + 1;
          v4[5] = ratan2(*v4, v4[2]);
        }
        if ( a2 != 0 )
        {
          v49 = 60;
          word_4B3E28 = 60;
        }
        else
        {
          v49 = word_4B3E28;
        }
        if ( v49 > 0 )
          word_4B3E28 = --v49;
        if ( (dword_4B3940 & 2) == 0 && (v49 == 0 || a2 != 0) )
        {
          v50 = *(__int16 *)(v2 + 222) + 2048;
          v51 = (HIDWORD(v50) ^ ((WORD2(v50) ^ (unsigned __int16)v50) - WORD2(v50)) & 0xFFF) - HIDWORD(v50);
          v53 = v4[5];
          LODWORD(v50) = v53 % 4096 + (v53 % 4096 < 0 ? 0x1000 : 0);
          v52 = v51 + (v51 < 0 ? 0x1000 : 0);
          v54 = v52 - v50 + (v52 - (int)v50 < 0 ? 0x1000 : 0);
          if ( v54 > 2048 )
            v54 -= 4096;
          v55 = (30 * v54) >> 11;
          if ( v55 != 0 )
            v4[5] = v53 + v55;
          else
            LOBYTE(dword_4B3940) = dword_4B3940 | 2;
        }
        if ( (dword_4B3940 & 2) != 0 )
          v4[5] = word_4B3E1A;
        else
          word_4B3E1A = v4[5];
        v56 = v4[118];
        v4[9] = 0;
        v4[8] = 0;
        v4[10] = v56;
        RotMatrix(v4 + 4, v4 + 102);
        v57 = (int *)(v4 + 24);
        ApplyMatrix(v4 + 102, v4 + 8, (int *)v4 + 12);
        v58 = (int *)(v4 + 56);
        *((_DWORD *)v4 + 28) = *(_DWORD *)(v2 + 228);
        *((_DWORD *)v4 + 29) = *(_DWORD *)(v2 + 232) - 500;
        *((_DWORD *)v4 + 30) = *(_DWORD *)(v2 + 236);
        if ( (*(_BYTE *)(v2 + 20) & 0x16) == 0 )
        {
          *((_DWORD *)v4 + 29) = *(_DWORD *)(v2 + 232);
          v4[87] = -1;
          sub_436D90(v4 + 56, v4 + 82, v100);
          *((_DWORD *)v4 + 47) = *((_DWORD *)v4 + 46);
          *((_DWORD *)v4 + 29) = *(_DWORD *)(v2 + 232) - 500;
          sub_436D90(v4 + 56, v4 + 82, v100);
          v59 = *((_DWORD *)v4 + 46);
          if ( *((_DWORD *)v4 + 47) == v59 || (v4[83] & 6) == 0 || v4[87] == -1 )
          {
            *((_DWORD *)v4 + 29) = *(_DWORD *)(v2 + 232) - 500;
          }
          else
          {
            v60 = *(_DWORD *)(v59 + 20) + 500;
            *((_DWORD *)v4 + 29) = v60;
            v61 = *(_DWORD *)(v2 + 232);
            if ( v61 < v60 )
              *((_DWORD *)v4 + 29) = v61;
          }
        }
        v62 = *v57;
        v63 = *((_DWORD *)v4 + 13);
        *((_DWORD *)v4 + 61) = *((_DWORD *)v4 + 29);
        v64 = *((_DWORD *)v4 + 14);
        *((_DWORD *)v4 + 16) = v62;
        *((_DWORD *)v4 + 18) = v64;
        *((_DWORD *)v4 + 17) = v63;
        v4[87] = -1;
        sub_434E40(v4 + 56, v4 + 24, v4 + 82, v100);
        dword_4B3928 = *(_DWORD *)(v2 + 228) + *v57;
        dword_4B3930 = *(_DWORD *)(v2 + 236) + *((_DWORD *)v4 + 14);
        v65 = SquareRoot0(*((_DWORD *)v4 + 14) * *((_DWORD *)v4 + 14) + *v57 * *v57);
        LOBYTE(v65) = v65 | 1;
        *((_DWORD *)v4 + 59) = v65;
        v66 = ratan2(*v57, *((_DWORD *)v4 + 14));
        v4[5] = v66;
        if ( (dword_4B3940 & 2) == 0 )
        {
          *((_DWORD *)v4 + 13) = 0;
          *v57 = 0;
          *((_DWORD *)v4 + 14) = *((_DWORD *)v4 + 59);
          *v58 = *(_DWORD *)(v2 + 228);
          *((_DWORD *)v4 + 29) = dword_4B38C4;
          *((_DWORD *)v4 + 30) = *(_DWORD *)(v2 + 236);
          v67 = v4[4];
          v4[21] = v66;
          v68 = v4[6];
          v4[20] = v67;
          v4[22] = v68;
          sub_4318E0((int)(v4 + 20), (_DWORD *)v4 + 28, v4 + 24, (int)v100);
          v4[5] += v4[21] >> 2;
        }
        v69 = *((_DWORD *)v4 + 48);
        v70 = *((_DWORD *)v4 + 59);
        if ( v70 < v69 - 100 )
          *((_DWORD *)v4 + 59) = v70 + ((v69 - v70 - 100) >> 3);
        v71 = *((_DWORD *)v4 + 48);
        v72 = *((_DWORD *)v4 + 59);
        if ( v72 > v71 + 100 )
          *((_DWORD *)v4 + 59) = v72 + ((v71 - v72 + 100) >> 1);
        v73 = v4[118];
        v4[9] = 0;
        v4[10] = v73;
        v4[8] = 0;
        RotMatrixZYX(v4 + 4, v4 + 102);
        ApplyMatrix(v4 + 102, v4 + 8, (int *)v4 + 12);
        v74 = *((_DWORD *)v4 + 61);
        *v58 = *(_DWORD *)(v2 + 228);
        *((_DWORD *)v4 + 29) = v74;
        *((_DWORD *)v4 + 30) = *(_DWORD *)(v2 + 236);
        v4[87] = -1;
        sub_434E40(v4 + 56, v4 + 24, v4 + 82, v100);
        v99 = SquareRoot0(*((_DWORD *)v4 + 14) * *((_DWORD *)v4 + 14) + *v57 * *v57);
        v4[8] = 0;
        v4[9] = 0;
        v4[10] = 200;
        ApplyMatrix(v4 + 102, v4 + 8, (int *)v4 + 16);
        *((_DWORD *)v4 + 20) = 0;
        *((_DWORD *)v4 + 21) = 0;
        *((_DWORD *)v4 + 22) = 0;
        v97 = v99 / 200;
        for ( i = 0; v97 >= 0; --v97 )
        {
          if ( i != 0 )
            break;
          *((_DWORD *)v4 + 29) = *(_DWORD *)(v2 + 232) - 500;
          if ( v97 == 0 )
          {
            v4[10] = v99 % 200;
            ApplyMatrix(v4 + 102, v4 + 8, (int *)v4 + 16);
          }
          i = sub_431510((_DWORD *)v4 + 28, (_DWORD *)v4 + 16, (int)v100, 0x20000);
          v76 = *((_DWORD *)v4 + 16);
          v77 = *((_DWORD *)v4 + 20);
          *v58 += v76;
          v78 = v76 + v77;
          v79 = *((_DWORD *)v4 + 30);
          *((_DWORD *)v4 + 20) = v78;
          v80 = *((_DWORD *)v4 + 18);
          *((_DWORD *)v4 + 22) += v80;
          *((_DWORD *)v4 + 30) = v80 + v79;
        }
        v81 = *((_DWORD *)v4 + 21);
        v82 = *((_DWORD *)v4 + 22);
        *v57 = *((_DWORD *)v4 + 20);
        *((_DWORD *)v4 + 13) = v81;
        *((_DWORD *)v4 + 14) = v82;
        v98 = (__int16 *)&unk_4ADADA;
        dword_4B3928 = *(_DWORD *)(v2 + 228) + *v57;
        dword_4B3930 = *(_DWORD *)(v2 + 236) + *((_DWORD *)v4 + 14);
        *((_DWORD *)v4 + 38) = 0;
        *((_DWORD *)v4 + 37) = 0;
        *((_DWORD *)v4 + 36) = 0;
        *((_DWORD *)v4 + 13) = *(_DWORD *)(v2 + 232) - 500;
        do
        {
          *v57 = dword_4B3928;
          *((_DWORD *)v4 + 13) = dword_4B392C;
          *((_DWORD *)v4 + 14) = dword_4B3930;
          *v58 = *(v98 - 1) >> 1;
          *((_DWORD *)v4 + 29) = 0;
          *((_DWORD *)v4 + 30) = *v98 >> 1;
          *((_DWORD *)v4 + 13) = *(_DWORD *)(v2 + 232) - 200;
          if ( sub_431510(v57, v58, (int)v100, 0x20000) == 0 )
          {
            v58 = (int *)(v4 + 56);
            v57 = (int *)(v4 + 24);
            *((_DWORD *)v4 + 28) += *(v98 - 1) >> 1;
            *((_DWORD *)v4 + 29) = 0;
            *((_DWORD *)v4 + 30) += *v98 >> 1;
            sub_431510((_DWORD *)v4 + 12, (_DWORD *)v4 + 28, (int)v100, 0x20000);
          }
          *((_DWORD *)v4 + 13) = *((_DWORD *)v4 + 61);
          v4[87] = -1;
          sub_434E40(v57, v58, v4 + 82, v100);
          *((_DWORD *)v4 + 36) += *v58;
          v83 = *((_DWORD *)v4 + 30) + *((_DWORD *)v4 + 38);
          *((_DWORD *)v4 + 38) = v83;
          v98 += 2;
        }
        while ( (int)v98 < (int)word_4ADAFA );
        if ( a2 == 0 && (*((_DWORD *)v4 + 36) | v83) != 0 )
        {
          LOBYTE(dword_4B3940) = dword_4B3940 | 2;
          if ( SquareRoot0(*((_DWORD *)v4 + 38) * *((_DWORD *)v4 + 38) + *((_DWORD *)v4 + 36) * *((_DWORD *)v4 + 36)) > 500 )
            word_4B3E1A -= dword_4B3E10;
        }
        *((int *)v4 + 36) >>= 2;
        *((int *)v4 + 38) >>= 2;
        dword_4B3928 += *((_DWORD *)v4 + 36);
        dword_4B3930 += *((_DWORD *)v4 + 38);
        *v4 = dword_4B3928;
        v4[1] = dword_4B392C;
        v4[2] = dword_4B3930;
        *v4 -= *(_WORD *)(v2 + 228);
        v4[1] -= *(_WORD *)(v2 + 232);
        v4[2] -= *(_WORD *)(v2 + 236);
        *((_DWORD *)v4 + 59) = SquareRoot0(*v4 * *v4 + v4[2] * v4[2]) + 1;
        v4[5] = ratan2(*v4, v4[2]);
        v4[6] = 0;
        v4[4] = 0;
        if ( a2 != 0 || (dword_4B3940 & 0xC0) != 0 )
        {
          dword_4B3DA8 = *((_DWORD *)v4 + 59);
          word_4B3E2C = v4[5];
        }
        else
        {
          *((_DWORD *)v4 + 59) = dword_4B3DA8;
          v4[5] = word_4B3E2C;
        }
        v4[10] = v4[118];
        v4[9] = 0;
        v4[8] = 0;
        RotMatrix(v4 + 4, v4 + 102);
        ApplyMatrix(v4 + 102, v4 + 8, (int *)v4 + 6);
        dword_4B3928 = *(_DWORD *)(v2 + 228) + *((_DWORD *)v4 + 6);
        dword_4B3930 = *(_DWORD *)(v2 + 236) + *((_DWORD *)v4 + 8);
        v4[10] = v4[118] + 400;
        ApplyMatrix(v4 + 102, v4 + 8, (int *)v4 + 6);
        dword_4B38CC += (*(_DWORD *)(v2 + 228) - dword_4B38CC) >> 2;
        dword_4B38D0 += (*(_DWORD *)(v2 + 232) + *((_DWORD *)v4 + 50) - dword_4B38D0) >> 2;
        dword_4B38D4 += (*(_DWORD *)(v2 + 236) - dword_4B38D4) >> 2;
        dword_4B38C0 += (*(_DWORD *)(v2 + 228) + *((_DWORD *)v4 + 6) - dword_4B38C0) >> 2;
        dword_4B38C8 += (*(_DWORD *)(v2 + 236) + *((_DWORD *)v4 + 8) - dword_4B38C8) >> 2;
        v84 = *((_DWORD *)v4 + 61);
        *((_DWORD *)v4 + 12) = dword_4B3928;
        *((_DWORD *)v4 + 13) = v84;
        *((_DWORD *)v4 + 14) = dword_4B3930;
        v4[87] = -1;
        sub_436D90(v4 + 24, v4 + 82, v100);
        if ( (v4[83] & 8) != 0 && *((_DWORD *)v4 + 45) < *(_DWORD *)(v2 + 232) )
        {
          v4[87] = -1;
          ++*((_DWORD *)v4 + 13);
          sub_436D90(v4 + 24, v4 + 82, v100);
        }
        if ( (v4[83] & 4) != 0 || v4[87] == -1 )
        {
          v89 = *(_DWORD *)(v2 + 232) - *((_DWORD *)v4 + 49);
          v88 = dword_4B38C4;
          if ( dword_4B38C4 <= v89 + 100 )
          {
            if ( dword_4B38C4 >= v89 - 100 )
              goto LABEL_165;
            v90 = v89 - dword_4B38C4 - 100;
          }
          else
          {
            v90 = v89 - dword_4B38C4 + 100;
          }
          v88 = (v90 >> 3) + dword_4B38C4;
        }
        else
        {
          v85 = *(_DWORD *)(v2 + 232);
          v86 = *((_DWORD *)v4 + 45);
          if ( v85 < v86 )
            v86 = v85;
          v87 = v86 - *((_DWORD *)v4 + 49);
          v88 = dword_4B38C4;
          if ( dword_4B38C4 <= v87 + 100 )
          {
            if ( dword_4B38C4 >= v87 - 100 )
              goto LABEL_165;
            v88 = ((v87 - dword_4B38C4 - 100) >> 3) + dword_4B38C4;
          }
          else
          {
            v88 = ((v87 - dword_4B38C4 + 100) >> 3) + dword_4B38C4;
          }
        }
        dword_4B38C4 = v88;
LABEL_165:
        dword_4B3964 = dword_4B38CC;
        dword_4B3968 = dword_4B38D0;
        dword_4B396C = dword_4B38D4;
        dword_4B3954 = dword_4B38C0;
        dword_4B3958 = v88;
        dword_4B392C = v88;
        dword_4B395C = dword_4B38C8;
        *((_DWORD *)v4 + 12) = dword_4B38C0;
        *((_DWORD *)v4 + 13) = dword_4B38C4;
        *((_DWORD *)v4 + 14) = dword_4B38C8;
        v4[87] = -1;
        sub_436D90(v4 + 24, v4 + 82, v100);
        v91 = *((_DWORD *)v4 + 46);
        v92 = *((_DWORD *)v4 + 45);
        *((_DWORD *)v4 + 13) = dword_4B38C4 - 600;
        *((_DWORD *)v4 + 47) = v91;
        v93 = v92 - 10;
        v4[87] = -1;
        sub_436D90(v4 + 24, v4 + 82, v100);
        v94 = *((_DWORD *)v4 + 46);
        if ( *((_DWORD *)v4 + 47) != v94 && (v4[83] & 6) != 0 && v4[87] != -1 )
        {
          v95 = *(_DWORD *)(v94 + 20);
          if ( v95 < v93 - 600 )
            v96 = ((v95 - dword_4B38C4 + 600) >> 3) + dword_4B38C4;
          else
            v96 = ((v93 - dword_4B38C4) >> 3) + dword_4B38C4;
          dword_4B38C4 = v96;
          dword_4B3958 = v96;
          dword_4B392C = v96;
        }
        dword_4B3974 = dword_4B3928;
        dword_4B3978 = dword_4B392C;
        dword_4B397C = dword_4B3930;
        sub_431430();
        LOBYTE(dword_4B3940) = dword_4B3940 & 0x7F;
        return;
      }
      if ( dword_4B3950 != 0 )
      {
        *((_DWORD *)v4 + 28) = *(_DWORD *)(v2 + 228) - *(_DWORD *)(dword_4B3950 + 228);
        v40 = *(_DWORD *)(v2 + 236) - *(_DWORD *)(dword_4B3950 + 236);
        *((_DWORD *)v4 + 30) = v40;
        v41 = ratan2(*((_DWORD *)v4 + 28), v40);
        v42 = v41 + (v41 < 0 ? 0x1000 : 0);
        v43 = word_4B3E1A % 4096 + (word_4B3E1A % 4096 < 0 ? 0x1000 : 0);
        v44 = v42 - v43 + (v42 - v43 < 0 ? 0x1000 : 0);
        if ( v44 > 2048 )
          v44 -= 4096;
        LOBYTE(dword_4B3940) = dword_4B3940 | 2;
        word_4B3E1A += v44 >> 4;
        if ( dword_4B2154 >= 1500 )
          *((_DWORD *)v4 + 48) = dword_4B2154;
        else
          *((_DWORD *)v4 + 48) = 1500;
        dword_4B3950 = 0;
        goto LABEL_99;
      }
      if ( (v39 & 1) != 0 )
      {
        if ( (v39 & 2) != 0 )
          goto LABEL_94;
        if ( (dword_4B3940 & 0x8000) == 0 )
        {
          LOBYTE(dword_4B3940) = dword_4B3940 | 0x82;
          word_4B3E1A += 38;
          dword_4B3E10 = 38;
          goto LABEL_99;
        }
      }
      if ( (v39 & 2) == 0 )
      {
LABEL_97:
        if ( a2 != 0 )
          LOBYTE(dword_4B3940) = dword_4B3940 & 0xFD;
        goto LABEL_99;
      }
LABEL_94:
      if ( (v39 & 1) == 0 && (dword_4B3940 & 0x8000) == 0 )
      {
        LOBYTE(dword_4B3940) = dword_4B3940 | 0x82;
        word_4B3E1A -= 38;
        dword_4B3E10 = -38;
        goto LABEL_99;
      }
      goto LABEL_97;
    }
  }
}

// 0x433150  sub_433150
int __cdecl sub_433150(int a1, int a2, int *a3)
{
  bool v3; // zf
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ecx
  __int16 *v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // edx
  int v11; // ecx
  int result; // eax

  v3 = dword_4B39AC == 0;
  *a3 = dword_4B39AC;
  if ( v3 )
    return 0;
  while ( 1 )
  {
    v4 = *a3;
    if ( (a2 & *(_DWORD *)(*a3 + 8)) != 0
      && *(_WORD *)(v4 + 42) == 2
      && a1 != v4
      && *(_DWORD *)(a1 + 112) != v4
      && *(_DWORD *)(a1 + 108) != v4
      && *(_DWORD *)(v4 + 112) != a1 )
    {
      sub_4078B0(v4 + 72, (_DWORD *)(v4 + 80), a3 + 20);
      if ( a3[20] != 0 )
      {
        *((_WORD *)a3 + 34) = *(_WORD *)(a1 + 228);
        v5 = *a3;
        *((_WORD *)a3 + 35) = *(_WORD *)(a1 + 232);
        *((_WORD *)a3 + 36) = *(_WORD *)(a1 + 236);
        *((_WORD *)a3 + 34) -= *(_WORD *)(v5 + 228);
        *((_WORD *)a3 + 35) -= *(_WORD *)(v5 + 232);
        *((_WORD *)a3 + 36) -= *(_WORD *)(v5 + 236);
        v6 = *((__int16 *)a3 + 34) * *((__int16 *)a3 + 34) + *((__int16 *)a3 + 36) * *((__int16 *)a3 + 36);
        a3[21] = v6;
        if ( v6 <= *(_DWORD *)(v5 + 48) )
        {
          a3[22] = *(__int16 *)(v5 + 32);
          *((_WORD *)a3 + 26) = 4096 - *(_WORD *)(v5 + 220);
          *((_WORD *)a3 + 27) = 4096 - *(_WORD *)(v5 + 222);
          *((_WORD *)a3 + 28) = 4096 - *(_WORD *)(v5 + 224);
          RotMatrixZYX((__int16 *)a3 + 26, (_WORD *)a3 + 10);
          ApplyMatrixSV((__int16 *)a3 + 10, (__int16 *)a3 + 34, a3 + 15);
          v7 = (__int16 *)*a3;
          v8 = a3[22];
          v9 = *((__int16 *)a3 + 30);
          if ( v9 >= *(__int16 *)(*a3 + 72) - v8 && v9 <= v8 + v7[40] )
          {
            v10 = *((__int16 *)a3 + 32);
            if ( v10 >= v7[38] - v8 && v10 <= v8 + v7[42] )
            {
              v11 = *((__int16 *)a3 + 31);
              if ( v11 + *(__int16 *)(a1 + 74) >= v7[41] && v11 + *(__int16 *)(a1 + 82) <= v7[37] )
                break;
            }
          }
        }
      }
    }
    result = *(_DWORD *)(*a3 + 16);
    *a3 = result;
    if ( result == 0 )
      return result;
  }
  return *a3;
}

// 0x433300  sub_433300
int __cdecl sub_433300(int a1, int a2, int *a3)
{
  bool v3; // zf
  int v4; // eax
  int v5; // ecx
  __int16 v6; // dx
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int result; // eax

  *((_WORD *)a3 + 18) = 4096 - *(_WORD *)(a1 + 220);
  *((_WORD *)a3 + 19) = 4096 - *(_WORD *)(a1 + 222);
  *((_WORD *)a3 + 20) = 4096 - *(_WORD *)(a1 + 224);
  RotMatrixZYX((__int16 *)a3 + 18, (_WORD *)a3 + 2);
  a3[21] = *(_DWORD *)(a1 + 228);
  a3[22] = *(_DWORD *)(a1 + 232);
  a3[23] = *(_DWORD *)(a1 + 236);
  *((_WORD *)a3 + 30) = *(_WORD *)(a1 + 72);
  *((_WORD *)a3 + 31) = *(_WORD *)(a1 + 74);
  *((_WORD *)a3 + 32) = *(_WORD *)(a1 + 76);
  *((_WORD *)a3 + 34) = *(_WORD *)(a1 + 80);
  *((_WORD *)a3 + 35) = *(_WORD *)(a1 + 82);
  *((_WORD *)a3 + 36) = *(_WORD *)(a1 + 84);
  a3[20] = *(__int16 *)(a1 + 32);
  v3 = dword_4B39AC == 0;
  *a3 = dword_4B39AC;
  if ( v3 )
    return 0;
  while ( 1 )
  {
    v4 = *a3;
    if ( (a2 & *(_DWORD *)(*a3 + 8)) != 0
      && *(_WORD *)(v4 + 42) == 2
      && a1 != v4
      && *(_DWORD *)(a1 + 112) != v4
      && *(_DWORD *)(a1 + 108) != v4
      && *(_DWORD *)(v4 + 112) != a1 )
    {
      sub_4078B0(v4 + 72, (_DWORD *)(v4 + 80), a3 + 19);
      if ( a3[19] != 0 )
      {
        v5 = *a3;
        *((_WORD *)a3 + 26) = *(_WORD *)(*a3 + 228);
        *((_WORD *)a3 + 27) = *(_WORD *)(v5 + 232);
        LOWORD(v5) = *(_WORD *)(v5 + 236);
        *((_WORD *)a3 + 26) -= *((_WORD *)a3 + 42);
        v6 = *((_WORD *)a3 + 44);
        *((_WORD *)a3 + 28) = v5;
        *((_WORD *)a3 + 27) -= v6;
        LOWORD(v5) = *((_WORD *)a3 + 26);
        *((_WORD *)a3 + 28) -= *((_WORD *)a3 + 46);
        v7 = (__int16)v5 * (__int16)v5 + *((__int16 *)a3 + 28) * *((__int16 *)a3 + 28);
        a3[19] = v7;
        if ( v7 <= *(_DWORD *)(a1 + 48) )
        {
          ApplyMatrixSV((__int16 *)a3 + 2, (__int16 *)a3 + 26, a3 + 11);
          v8 = a3[20];
          v9 = *((__int16 *)a3 + 22);
          if ( v9 >= *((__int16 *)a3 + 30) - v8 && v9 <= *((__int16 *)a3 + 34) + v8 )
          {
            v10 = *((__int16 *)a3 + 24);
            if ( v10 >= *((__int16 *)a3 + 32) - v8 && v10 <= *((__int16 *)a3 + 36) + v8 )
            {
              v11 = *((__int16 *)a3 + 23);
              if ( v11 + *(__int16 *)(*a3 + 74) >= *((__int16 *)a3 + 35)
                && v11 + *(__int16 *)(*a3 + 82) <= *((__int16 *)a3 + 31) )
              {
                break;
              }
            }
          }
        }
      }
    }
    result = *(_DWORD *)(*a3 + 16);
    *a3 = result;
    if ( result == 0 )
      return result;
  }
  return *a3;
}

// 0x4334f0  sub_4334F0
int __cdecl sub_4334F0(int a1, _WORD *a2, int a3, int a4, int a5)
{
  int v5; // edi
  int v6; // eax
  unsigned int v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  __int16 v11; // ax

  v5 = dword_4B39AC;
  if ( dword_4B39AC == 0 )
    return 0;
  while ( 1 )
  {
    v6 = *(_DWORD *)(v5 + 8);
    if ( (a3 & v6) != 0 && *(_WORD *)(v5 + 42) == 2 && v5 != a1 && (v6 & a4) == 0 )
    {
      sub_4078B0(v5 + 72, (_DWORD *)(v5 + 80), (_DWORD *)(a5 + 80));
      if ( *(_DWORD *)(a5 + 80) != 0 )
      {
        *(_WORD *)(a5 + 68) = *a2;
        *(_WORD *)(a5 + 70) = a2[2];
        *(_WORD *)(a5 + 72) = a2[4];
        *(_WORD *)(a5 + 68) -= *(_WORD *)(v5 + 228);
        *(_WORD *)(a5 + 70) -= *(_WORD *)(v5 + 232);
        *(_WORD *)(a5 + 72) -= *(_WORD *)(v5 + 236);
        v7 = *(__int16 *)(a5 + 68) * *(__int16 *)(a5 + 68) + *(__int16 *)(a5 + 72) * *(__int16 *)(a5 + 72);
        *(_DWORD *)(a5 + 84) = v7;
        if ( v7 <= *(_DWORD *)(v5 + 48) )
        {
          v8 = *(__int16 *)(v5 + 32) + 4;
          *(_WORD *)(a5 + 52) = 4096 - *(_WORD *)(v5 + 220);
          *(_WORD *)(a5 + 54) = 4096 - *(_WORD *)(v5 + 222);
          *(_WORD *)(a5 + 56) = 4096 - *(_WORD *)(v5 + 224);
          RotMatrixZYX((__int16 *)(a5 + 52), (_WORD *)(a5 + 20));
          ApplyMatrixSV((__int16 *)(a5 + 20), (__int16 *)(a5 + 68), (_DWORD *)(a5 + 60));
          v9 = *(__int16 *)(a5 + 60);
          if ( v9 >= *(__int16 *)(v5 + 72) - v8 && v9 <= *(__int16 *)(v5 + 80) + v8 )
          {
            v10 = *(__int16 *)(a5 + 64);
            if ( v10 >= *(__int16 *)(v5 + 76) - v8 && v10 <= v8 + *(__int16 *)(v5 + 84) )
            {
              v11 = *(_WORD *)(a5 + 62);
              if ( v11 >= *(__int16 *)(v5 + 82) && v11 <= *(__int16 *)(v5 + 74) )
                break;
            }
          }
        }
      }
    }
    v5 = *(_DWORD *)(v5 + 16);
    if ( v5 == 0 )
      return 0;
  }
  return v5;
}

// 0x433670  sub_433670
int __cdecl sub_433670(_DWORD *a1, __int16 *a2, int a3, int a4)
{
  __int16 *v4; // edx
  _DWORD *v5; // ebx
  __int16 v7; // cx
  int result; // eax
  int v9; // eax
  _DWORD *v10; // ecx
  _DWORD *v11; // eax
  int v12; // eax
  _WORD *v13; // edi
  unsigned int v14; // ecx
  int v15; // eax
  _WORD *v16; // eax
  int v17; // ecx
  int v18; // edx
  __int16 *v19; // eax
  __int16 *v20; // edi
  __int16 v21; // ax
  int v22; // edx
  int v23; // eax
  int v24; // ecx
  int v25; // ebx
  bool v26; // sf
  __int16 *v27; // eax
  int v28; // edx
  __int16 v29; // ax
  int v30; // ecx
  __int16 v31; // ax
  int v32; // ecx
  _WORD *v33; // eax
  __int16 v34; // cx
  __int16 v35; // cx
  __int16 v36; // cx
  __int16 v37; // cx
  int i; // edi
  int v39; // eax
  __int16 *v40; // eax
  int v41; // edx
  __int16 v42; // cx
  int v43; // edi
  __int16 v44; // cx
  int v45; // edx
  __int16 v46; // cx
  int v47; // edi
  int v48; // ebx
  __int16 v49; // cx
  int v50; // edi
  int v51; // edx
  __int16 v52; // cx
  int v53; // edi
  int v54; // edx
  __int16 v55; // cx
  int v56; // edi
  int v57; // ebx
  int v58; // edi
  int v59; // edx
  int v60; // ecx
  __int16 v61; // ax
  __int16 v62; // ax
  int v63; // edi
  int v64; // ecx
  int v65; // eax
  int v66; // eax
  __int16 *v67; // edi
  unsigned int v68; // ecx
  int v69; // edx
  int v70; // [esp+10h] [ebp-20h]
  unsigned int v71; // [esp+14h] [ebp-1Ch]
  int v72; // [esp+18h] [ebp-18h]
  int j; // [esp+1Ch] [ebp-14h]
  __int16 v74; // [esp+20h] [ebp-10h]
  __int16 v75; // [esp+28h] [ebp-8h]
  __int16 v76; // [esp+2Ch] [ebp-4h]
  int v77; // [esp+3Ch] [ebp+Ch]
  int v78; // [esp+3Ch] [ebp+Ch]

  v4 = a2;
  v5 = a1;
  v7 = 0;
  *(_DWORD *)(a3 + 88) = *a2 + a1[57];
  result = 0;
  *(_DWORD *)(a3 + 92) = a2[1] + a1[58];
  *(_DWORD *)(a3 + 96) = a2[2] + a1[59];
  *(_WORD *)(a3 + 134) = 0;
  *(_WORD *)(a3 + 132) = 0;
  v70 = 0;
  v71 = -1;
  LOWORD(v72) = 0;
  v74 = 0;
  *(_DWORD *)(a3 + 136) = dword_4B39AC;
  while ( 1 )
  {
    if ( v7 == 0 && result != 0 && (*(_DWORD *)(result + 8) & 0x20000) == 0 )
    {
      if ( *(_DWORD *)(a3 + 136) == 0 )
      {
        v7 = 1;
        *(_DWORD *)(a3 + 136) = dword_4B39AC;
        v74 = 1;
      }
      goto LABEL_8;
    }
    if ( *(_DWORD *)(a3 + 136) == 0 )
      break;
LABEL_8:
    if ( v7 != 0 && (*(_DWORD *)(*(_DWORD *)(a3 + 136) + 8) & 0x20000) == 0 )
      goto LABEL_107;
    v9 = *(_DWORD *)(a3 + 136);
    if ( (a4 & *(_DWORD *)(v9 + 8)) == 0 )
      goto LABEL_107;
    if ( *(_WORD *)(v9 + 42) != 2 )
      goto LABEL_107;
    if ( v5 == (_DWORD *)v9 )
      goto LABEL_107;
    if ( v5[28] == v9 )
      goto LABEL_107;
    if ( v5[27] == v9 )
      goto LABEL_107;
    v10 = *(_DWORD **)(v9 + 112);
    if ( v10 == v5 || *(_DWORD **)(v9 + 108) == v5 || v10 == (_DWORD *)dword_4B324C )
      goto LABEL_107;
    *(_DWORD *)(a3 + 140) = v10;
    if ( v10 != NULL )
    {
      do
      {
        v11 = *(_DWORD **)(a3 + 140);
        if ( v11 == v5 )
          break;
        v12 = v11[28];
        *(_DWORD *)(a3 + 140) = v12;
      }
      while ( v12 != 0 );
    }
    if ( *(_DWORD *)(a3 + 140) != 0 )
      goto LABEL_107;
    sub_4078B0(*(_DWORD *)(a3 + 136) + 72, (_DWORD *)(*(_DWORD *)(a3 + 136) + 80), (_DWORD *)(a3 + 120));
    if ( *(_DWORD *)(a3 + 120) == 0 )
      goto LABEL_107;
    v13 = (_WORD *)(a3 + 80);
    *(_WORD *)(a3 + 80) = *(_WORD *)(a3 + 88);
    *(_WORD *)(a3 + 82) = *(_WORD *)(a3 + 92);
    *(_WORD *)(a3 + 84) = *(_WORD *)(a3 + 96);
    *(_WORD *)(a3 + 80) -= *(_WORD *)(*(_DWORD *)(a3 + 136) + 228);
    *(_WORD *)(a3 + 82) -= *(_WORD *)(*(_DWORD *)(a3 + 136) + 232);
    *(_WORD *)(a3 + 84) -= *(_WORD *)(*(_DWORD *)(a3 + 136) + 236);
    v14 = *(__int16 *)(a3 + 80) * *(__int16 *)(a3 + 80) + *(__int16 *)(a3 + 84) * *(__int16 *)(a3 + 84);
    *(_DWORD *)(a3 + 196) = v14;
    v15 = *(__int16 *)(*(_DWORD *)(a3 + 136) + 32)
        + *(unsigned __int16 *)(*(_DWORD *)(a3 + 136) + 46)
        + *((unsigned __int16 *)v5 + 23)
        + *((__int16 *)v5 + 16);
    if ( v14 > v15 * v15 )
      goto LABEL_107;
    *(_DWORD *)(a3 + 144) = v5;
    *(_DWORD *)(a3 + 148) = *(_DWORD *)(a3 + 136);
    *v13 = *(_WORD *)(*(_DWORD *)(a3 + 144) + 228);
    *(_WORD *)(a3 + 82) = *(_WORD *)(*(_DWORD *)(a3 + 144) + 232);
    *(_WORD *)(a3 + 84) = *(_WORD *)(*(_DWORD *)(a3 + 144) + 236);
    *v13 -= *(_WORD *)(*(_DWORD *)(a3 + 148) + 228);
    *(_WORD *)(a3 + 82) -= *(_WORD *)(*(_DWORD *)(a3 + 148) + 232);
    *(_WORD *)(a3 + 84) -= *(_WORD *)(*(_DWORD *)(a3 + 148) + 236);
    *(_WORD *)(a3 + 82) += a2[1];
    *(_DWORD *)(a3 + 128) = *(__int16 *)(*(_DWORD *)(a3 + 148) + 32);
    v16 = *(_WORD **)(a3 + 148);
    *(_WORD *)(a3 + 64) = 4096 - v16[110];
    *(_WORD *)(a3 + 66) = 4096 - v16[111];
    *(_WORD *)(a3 + 68) = 4096 - v16[112];
    RotMatrixZYX((__int16 *)(a3 + 64), (_WORD *)a3);
    ApplyMatrixSV((__int16 *)a3, (__int16 *)(a3 + 80), (_DWORD *)(a3 + 72));
    ApplyMatrixSV((__int16 *)a3, a2, (_DWORD *)(a3 + 104));
    v17 = *(__int16 *)(a3 + 74);
    *(_DWORD *)(a3 + 120) = *(__int16 *)(*(_DWORD *)(a3 + 136) + 82) - v17;
    v18 = *(_DWORD *)(a3 + 144);
    v19 = *(__int16 **)(a3 + 148);
    v77 = a2[1];
    if ( v77 + v17 + *(__int16 *)(v18 + 74) <= v19[41] || v77 + v17 + *(__int16 *)(v18 + 82) > v19[37] )
      goto LABEL_107;
    v20 = (__int16 *)(a3 + 152);
    *(_WORD *)(a3 + 152) = (v19[36] >> 1) + (v19[40] >> 1);
    v21 = (v19[42] >> 1) + (v19[38] >> 1);
    v22 = *(__int16 *)(a3 + 76);
    *(_WORD *)(a3 + 156) = v21;
    v23 = ratan2(*(__int16 *)(a3 + 72) - *(__int16 *)(a3 + 152), v22 - v21);
    v24 = *(_DWORD *)(a3 + 128);
    v25 = *(__int16 *)(a3 + 156);
    *(_DWORD *)(a3 + 124) = v23;
    v26 = v23 < 0;
    v27 = *(__int16 **)(a3 + 148);
    v28 = v27[42];
    if ( v26 )
    {
      v31 = ratan2(v27[36] - v24 - *v20, v24 + v28 - v25);
      v32 = *(_DWORD *)(a3 + 128);
      *(_WORD *)(a3 + 204) = v31;
      *(_WORD *)(a3 + 206) = ratan2(
                               *(__int16 *)(*(_DWORD *)(a3 + 148) + 72) - v32 - *v20,
                               *(__int16 *)(*(_DWORD *)(a3 + 148) + 76) - v32 - *(__int16 *)(a3 + 156));
    }
    else
    {
      v29 = ratan2(v24 + v27[40] - *v20, v24 + v28 - v25);
      v30 = *(_DWORD *)(a3 + 128);
      *(_WORD *)(a3 + 200) = v29;
      *(_WORD *)(a3 + 202) = ratan2(
                               v30 + *(__int16 *)(*(_DWORD *)(a3 + 148) + 80) - *v20,
                               *(__int16 *)(*(_DWORD *)(a3 + 148) + 76) - v30 - *(__int16 *)(a3 + 156));
    }
    v33 = *(_WORD **)(a3 + 144);
    v34 = v33[36] - v33[16];
    *(_WORD *)(a3 + 168) = v34;
    *v20 = v34;
    v35 = v33[16] + v33[40];
    *(_WORD *)(a3 + 176) = v35;
    *(_WORD *)(a3 + 160) = v35;
    v36 = v33[16] + v33[42];
    *(_WORD *)(a3 + 164) = v36;
    *(_WORD *)(a3 + 156) = v36;
    v37 = v33[38] - v33[16];
    *(_WORD *)(a3 + 188) = 0;
    *(_WORD *)(a3 + 184) = 0;
    *(_WORD *)(a3 + 178) = 0;
    *(_WORD *)(a3 + 180) = v37;
    *(_WORD *)(a3 + 172) = v37;
    *(_WORD *)(a3 + 170) = 0;
    *(_WORD *)(a3 + 162) = 0;
    *(_WORD *)(a3 + 154) = 0;
    *(_WORD *)(a3 + 186) = v33[37];
    RotMatrix(v33 + 110, (_WORD *)(a3 + 32));
    sub_408BF0((__int16 *)(a3 + 32));
    *(_DWORD *)(a3 + 192) = v20;
    for ( i = 5; i != 0; --i )
    {
      sub_408D10(*(__int16 **)(a3 + 192));
      sub_408D70();
      sub_408D40(*(_WORD **)(a3 + 192));
      *(_DWORD *)(a3 + 192) += 8;
    }
    sub_408BF0((__int16 *)a3);
    *(_DWORD *)(a3 + 192) = a3 + 152;
    v78 = 0;
    for ( j = 5; j != 0; --j )
    {
      **(_WORD **)(a3 + 192) += *(_WORD *)(a3 + 80);
      *(_WORD *)(*(_DWORD *)(a3 + 192) + 4) += *(_WORD *)(a3 + 84);
      sub_408D10(*(__int16 **)(a3 + 192));
      sub_408D70();
      sub_408D40(*(_WORD **)(a3 + 192));
      v39 = *(_DWORD *)(a3 + 124);
      if ( v39 < 0 )
      {
        if ( v39 <= *(__int16 *)(a3 + 204) )
        {
          v54 = *(_DWORD *)(a3 + 148);
          if ( v39 <= *(__int16 *)(a3 + 206) )
          {
            v40 = *(__int16 **)(a3 + 192);
            v49 = *(_WORD *)(v54 + 76);
            v58 = *(_DWORD *)(a3 + 128);
            if ( *(__int16 *)(a3 + 108) + v40[2] >= v49 - v58
              && *(__int16 *)(a3 + 104) + *v40 >= *(__int16 *)(v54 + 72) - v58 )
            {
              if ( (*(_DWORD *)(v54 + 8) & 0x2000000) == 0 )
                goto LABEL_62;
LABEL_64:
              ++v78;
            }
          }
          else
          {
            v40 = *(__int16 **)(a3 + 192);
            v55 = *(_WORD *)(v54 + 72);
            v56 = *(_DWORD *)(a3 + 128);
            if ( *(__int16 *)(a3 + 104) + *v40 >= v55 - v56 )
            {
              v57 = v40[2] + *(__int16 *)(a3 + 108);
              if ( v57 <= v56 + *(__int16 *)(v54 + 84) && v57 >= *(__int16 *)(v54 + 76) - v56 )
              {
                if ( (*(_DWORD *)(v54 + 8) & 0x2000000) == 0 )
                  *(_WORD *)(a3 + 104) = v55 - *v40 - *(_WORD *)(a3 + 128);
                goto LABEL_64;
              }
            }
          }
        }
        else
        {
          v40 = *(__int16 **)(a3 + 192);
          v51 = *(_DWORD *)(a3 + 148);
          v52 = *(_WORD *)(v51 + 84);
          v53 = *(_DWORD *)(a3 + 128);
          if ( *(__int16 *)(a3 + 108) + v40[2] <= v53 + v52
            && *(__int16 *)(a3 + 104) + *v40 >= *(__int16 *)(v51 + 72) - v53 )
          {
            if ( (*(_DWORD *)(v51 + 8) & 0x2000000) != 0 )
              goto LABEL_64;
            v44 = *(_WORD *)(a3 + 128) + v52 - v40[2];
            goto LABEL_63;
          }
        }
      }
      else if ( v39 >= *(__int16 *)(a3 + 200) )
      {
        v45 = *(_DWORD *)(a3 + 148);
        if ( v39 >= *(__int16 *)(a3 + 202) )
        {
          v40 = *(__int16 **)(a3 + 192);
          v49 = *(_WORD *)(v45 + 76);
          v50 = *(_DWORD *)(a3 + 128);
          if ( *(__int16 *)(a3 + 108) + v40[2] >= v49 - v50
            && *(__int16 *)(a3 + 104) + *v40 <= v50 + *(__int16 *)(v45 + 80) )
          {
            if ( (*(_DWORD *)(v45 + 8) & 0x2000000) != 0 )
              goto LABEL_64;
LABEL_62:
            v44 = v49 - v40[2] - *(_WORD *)(a3 + 128);
            goto LABEL_63;
          }
        }
        else
        {
          v40 = *(__int16 **)(a3 + 192);
          v46 = *(_WORD *)(v45 + 80);
          v47 = *(_DWORD *)(a3 + 128);
          if ( *(__int16 *)(a3 + 104) + *v40 <= v47 + v46 )
          {
            v48 = v40[2] + *(__int16 *)(a3 + 108);
            if ( v48 <= v47 + *(__int16 *)(v45 + 84) && v48 >= *(__int16 *)(v45 + 76) - v47 )
            {
              if ( (*(_DWORD *)(v45 + 8) & 0x2000000) == 0 )
                *(_WORD *)(a3 + 104) = *(_WORD *)(a3 + 128) + v46 - *v40;
              goto LABEL_64;
            }
          }
        }
      }
      else
      {
        v40 = *(__int16 **)(a3 + 192);
        v41 = *(_DWORD *)(a3 + 148);
        v42 = *(_WORD *)(v41 + 84);
        v43 = *(_DWORD *)(a3 + 128);
        if ( *(__int16 *)(a3 + 108) + v40[2] <= v43 + v42
          && *(__int16 *)(a3 + 104) + *v40 <= v43 + *(__int16 *)(v41 + 80) )
        {
          if ( (*(_DWORD *)(v41 + 8) & 0x2000000) != 0 )
            goto LABEL_64;
          v44 = *(_WORD *)(a3 + 128) + v42 - v40[2];
LABEL_63:
          *(_WORD *)(a3 + 108) = v44;
          goto LABEL_64;
        }
      }
      *(_DWORD *)(a3 + 192) = v40 + 4;
    }
    if ( v78 != 0 )
      goto LABEL_85;
    HIWORD(dword_4B3D60) = *(_WORD *)(a3 + 152);
    LOWORD(dword_4B3D60) = *(_WORD *)(a3 + 156);
    HIWORD(dword_4B3D64) = *(_WORD *)(a3 + 160);
    LOWORD(dword_4B3D64) = *(_WORD *)(a3 + 164);
    HIWORD(dword_4B3D68) = *(_WORD *)(a3 + 168);
    LOWORD(dword_4B3D68) = *(_WORD *)(a3 + 172);
    v59 = 5;
    HIWORD(dword_4B3D6C) = *(_WORD *)(a3 + 176);
    LOWORD(dword_4B3D6C) = *(_WORD *)(a3 + 180);
    v60 = -1;
    *(_WORD *)(a3 + 200) = 0;
    dword_4B3D78 = -1;
    while ( 2 )
    {
      v61 = *(_WORD *)(a3 + 200);
      if ( v61 < 4 )
      {
        switch ( v61 )
        {
          case 0:
            v62 = *(_WORD *)(a3 + 128) + *(_WORD *)(*(_DWORD *)(a3 + 148) + 80);
            goto LABEL_77;
          case 1:
            word_4B3D72 = *(_WORD *)(a3 + 128) + *(_WORD *)(*(_DWORD *)(a3 + 148) + 80);
            word_4B3D70 = *(_WORD *)(*(_DWORD *)(a3 + 148) + 76) - *(_WORD *)(a3 + 128);
            break;
          case 2:
            word_4B3D72 = *(_WORD *)(*(_DWORD *)(a3 + 148) + 72) - *(_WORD *)(a3 + 128);
            word_4B3D70 = *(_WORD *)(*(_DWORD *)(a3 + 148) + 76) - *(_WORD *)(a3 + 128);
            break;
          case 3:
            v62 = *(_WORD *)(*(_DWORD *)(a3 + 148) + 72) - *(_WORD *)(a3 + 128);
LABEL_77:
            word_4B3D72 = v62;
            word_4B3D70 = *(_WORD *)(a3 + 128) + *(_WORD *)(*(_DWORD *)(a3 + 148) + 84);
            break;
          default:
            break;
        }
        dword_4B3D78 = 0;
        v59 = 0;
        ++*(_WORD *)(a3 + 200);
        v60 = dword_4B3D78;
        if ( dword_4B3D78 >= 0 )
          break;
        continue;
      }
      break;
    }
    if ( v60 <= 0 )
    {
      v66 = 0;
    }
    else
    {
      if ( v59 == 0 )
      {
        *(_WORD *)(a3 + 112) = HIWORD(dword_4B3D64) - HIWORD(dword_4B3D60);
        *(_WORD *)(a3 + 116) = dword_4B3D64 - dword_4B3D60;
        dword_4B3D90 = word_4B3D72 - SHIWORD(dword_4B3D60);
        dword_4B3D98 = word_4B3D70 - (__int16)dword_4B3D60;
      }
      v63 = SquareRoot0(*(__int16 *)(a3 + 116) * *(__int16 *)(a3 + 116) + *(__int16 *)(a3 + 112)
                                                                           * *(__int16 *)(a3 + 112));
      v64 = SquareRoot0(dword_4B3D98 * dword_4B3D98 + dword_4B3D90 * dword_4B3D90);
      dword_4B3D80 = (*(__int16 *)(a3 + 112) << 12) / v63;
      v65 = (*(__int16 *)(a3 + 116) << 12) / v63;
      dword_4B3D80 = (dword_4B3D80 * v64) >> 12;
      dword_4B3D88 = (v65 * v64) >> 12;
      *(_WORD *)(a3 + 104) += dword_4B3D90 - dword_4B3D80;
      v66 = 1;
      *(_WORD *)(a3 + 108) += dword_4B3D98 - dword_4B3D88;
    }
    if ( v66 != 0 )
    {
LABEL_85:
      RotMatrix((__int16 *)(*(_DWORD *)(a3 + 148) + 220), (_WORD *)a3);
      v67 = (__int16 *)(a3 + 72);
      ApplyMatrixSV((__int16 *)a3, (__int16 *)(a3 + 104), (_DWORD *)(a3 + 72));
      if ( v70 == 0 || (*(_DWORD *)(*(_DWORD *)(a3 + 148) + 8) & 0x20000) != 0 )
      {
        v75 = *v67;
        *a2 = *v67;
        v76 = *(_WORD *)(a3 + 76);
        a2[2] = v76;
      }
      else
      {
        v75 = (*v67 + *a2) >> 1;
        v76 = (a2[2] + *(__int16 *)(a3 + 76)) >> 1;
        *a2 = v75;
        a2[2] = v76;
      }
      v68 = *(_DWORD *)(a3 + 196);
      if ( (v68 < v71 || (*(_BYTE *)(*(_DWORD *)(a3 + 136) + 8) & 8) != 0 || v70 != 0 && (*(_BYTE *)(v70 + 8) & 8) != 0)
        && (v70 == 0 || (*(_DWORD *)(v70 + 8) & 0x20000) == 0 || (*(_DWORD *)(*(_DWORD *)(a3 + 136) + 8) & 0x20000) != 0) )
      {
        v69 = *(_DWORD *)(*(_DWORD *)(a3 + 136) + 8);
        if ( (v69 & 8) != 0 )
        {
          if ( v70 != 0 && (*(_BYTE *)(v70 + 8) & 8) != 0 )
          {
            if ( v68 < v71 )
            {
              v71 = *(_DWORD *)(a3 + 196);
              v70 = *(_DWORD *)(a3 + 136);
              v72 = *(_DWORD *)(a3 + 120);
            }
          }
          else
          {
            v70 = *(_DWORD *)(a3 + 136);
            v71 = *(_DWORD *)(a3 + 196);
            v72 = *(_DWORD *)(a3 + 120);
          }
        }
        else if ( v70 == 0
               || (*(_BYTE *)(v70 + 8) & 8) == 0 && ((*(_DWORD *)(v70 + 8) & 0x20000) == 0 || (v69 & 0x2000000) == 0) )
        {
          v70 = *(_DWORD *)(a3 + 136);
          v71 = *(_DWORD *)(a3 + 196);
          v72 = *(_DWORD *)(a3 + 120);
        }
      }
    }
LABEL_107:
    result = v70;
    v5 = a1;
    v7 = v74;
    *(_DWORD *)(a3 + 136) = *(_DWORD *)(*(_DWORD *)(a3 + 136) + 16);
    v4 = a2;
  }
  if ( result != 0 )
  {
    *v4 = v75;
    v4[2] = v76;
    v4[1] = v72;
  }
  return result;
}

// 0x4343a0  sub_4343A0
int __cdecl sub_4343A0(_WORD *a1, int a2, int a3)
{
  __int16 *v3; // eax
  __int16 *v4; // edi
  int v5; // ecx
  int v6; // eax
  __int16 *v7; // ecx
  int v8; // ebp
  int v9; // edx
  bool v10; // sf
  int v11; // eax
  __int16 v12; // ax
  int v13; // ebp
  __int16 v14; // ax
  int v15; // ebp
  __int16 *v16; // eax
  __int16 v17; // cx
  __int16 v18; // cx
  __int16 v19; // cx
  __int16 v20; // cx
  int i; // ebx
  int v22; // ebx
  int v23; // eax
  int v24; // ecx
  __int16 *v25; // eax
  int v26; // edx
  int v27; // edx
  bool v28; // cc
  __int16 *v29; // ecx
  int v30; // edi
  int v31; // ecx
  int v32; // edx
  int v33; // edx
  __int16 *v34; // ecx
  int v35; // edi

  sub_4078B0(a2 + 72, (_DWORD *)(a2 + 80), (_DWORD *)(a3 + 120));
  if ( *(_DWORD *)(a3 + 120) != 0 )
  {
    *(_WORD *)(a3 + 80) = a1[114];
    *(_WORD *)(a3 + 82) = a1[116];
    *(_WORD *)(a3 + 84) = a1[118];
    *(_WORD *)(a3 + 80) -= *(_WORD *)(a2 + 228);
    *(_WORD *)(a3 + 82) -= *(_WORD *)(a2 + 232);
    *(_WORD *)(a3 + 84) -= *(_WORD *)(a2 + 236);
    *(_DWORD *)(a3 + 144) = a1;
    *(_DWORD *)(a3 + 148) = a2;
    *(_WORD *)(a3 + 80) = a1[114];
    *(_WORD *)(a3 + 82) = a1[116];
    *(_WORD *)(a3 + 84) = a1[118];
    *(_WORD *)(a3 + 80) -= *(_WORD *)(a2 + 228);
    *(_WORD *)(a3 + 82) -= *(_WORD *)(a2 + 232);
    *(_WORD *)(a3 + 84) -= *(_WORD *)(a2 + 236);
    *(_DWORD *)(a3 + 128) = *(__int16 *)(a2 + 32);
    *(_WORD *)(a3 + 64) = 4096 - *(_WORD *)(a2 + 220);
    *(_WORD *)(a3 + 66) = 4096 - *(_WORD *)(a2 + 222);
    *(_WORD *)(a3 + 68) = 4096 - *(_WORD *)(a2 + 224);
    RotMatrixZYX((__int16 *)(a3 + 64), (_WORD *)a3);
    ApplyMatrixSV((__int16 *)a3, (__int16 *)(a3 + 80), (_DWORD *)(a3 + 72));
    v3 = *(__int16 **)(a3 + 148);
    v4 = (__int16 *)(a3 + 152);
    *(_WORD *)(a3 + 152) = (v3[36] >> 1) + (v3[40] >> 1);
    LOWORD(v3) = (v3[42] >> 1) + (v3[38] >> 1);
    v5 = *(__int16 *)(a3 + 76) - (__int16)v3;
    *(_WORD *)(a3 + 156) = (_WORD)v3;
    v6 = ratan2(*(__int16 *)(a3 + 72) - *(__int16 *)(a3 + 152), v5);
    v7 = *(__int16 **)(a3 + 148);
    v8 = *(__int16 *)(a3 + 156);
    *(_DWORD *)(a3 + 124) = v6;
    v9 = v7[42];
    v10 = v6 < 0;
    v11 = *(_DWORD *)(a3 + 128);
    if ( v10 )
    {
      v14 = ratan2(v11 + v7[36] - *v4, v11 + v9 - v8);
      v15 = *(__int16 *)(a3 + 156);
      *(_WORD *)(a3 + 204) = v14;
      *(_WORD *)(a3 + 206) = ratan2(
                               *(_DWORD *)(a3 + 128) + *(__int16 *)(*(_DWORD *)(a3 + 148) + 72) - *v4,
                               *(__int16 *)(*(_DWORD *)(a3 + 148) + 76) - v15 - *(_DWORD *)(a3 + 128));
    }
    else
    {
      v12 = ratan2(v11 + v7[40] - *v4, v11 + v9 - v8);
      v13 = *(__int16 *)(a3 + 156);
      *(_WORD *)(a3 + 200) = v12;
      *(_WORD *)(a3 + 202) = ratan2(
                               *(_DWORD *)(a3 + 128) + *(__int16 *)(*(_DWORD *)(a3 + 148) + 80) - *v4,
                               *(__int16 *)(*(_DWORD *)(a3 + 148) + 76) - v13 - *(_DWORD *)(a3 + 128));
    }
    v16 = *(__int16 **)(a3 + 144);
    v17 = v16[36] - v16[16];
    v16 += 110;
    *(_WORD *)(a3 + 168) = v17;
    *v4 = v17;
    v18 = *(v16 - 94) + *(v16 - 70);
    *(_WORD *)(a3 + 176) = v18;
    *(_WORD *)(a3 + 160) = v18;
    v19 = *(v16 - 94) + *(v16 - 68);
    *(_WORD *)(a3 + 164) = v19;
    *(_WORD *)(a3 + 156) = v19;
    v20 = *(v16 - 72) - *(v16 - 94);
    *(_WORD *)(a3 + 188) = 0;
    *(_WORD *)(a3 + 186) = 0;
    *(_WORD *)(a3 + 184) = 0;
    *(_WORD *)(a3 + 178) = 0;
    *(_WORD *)(a3 + 170) = 0;
    *(_WORD *)(a3 + 162) = 0;
    *(_WORD *)(a3 + 154) = 0;
    *(_WORD *)(a3 + 180) = v20;
    *(_WORD *)(a3 + 172) = v20;
    RotMatrix(v16, (_WORD *)(a3 + 32));
    sub_408BF0((__int16 *)(a3 + 32));
    *(_DWORD *)(a3 + 192) = v4;
    for ( i = 4; i != 0; --i )
    {
      sub_408D10(*(__int16 **)(a3 + 192));
      sub_408D70();
      sub_408D40(*(_WORD **)(a3 + 192));
      *(_DWORD *)(a3 + 192) += 8;
    }
    sub_408BF0((__int16 *)a3);
    v22 = 0;
    *(_DWORD *)(a3 + 192) = v4;
    while ( 1 )
    {
      **(_WORD **)(a3 + 192) += *(_WORD *)(a3 + 80);
      *(_WORD *)(*(_DWORD *)(a3 + 192) + 4) += *(_WORD *)(a3 + 84);
      sub_408D10(*(__int16 **)(a3 + 192));
      sub_408D70();
      sub_408D40(*(_WORD **)(a3 + 192));
      v23 = *(_DWORD *)(a3 + 124);
      if ( v23 < 0 )
      {
        if ( v23 <= *(__int16 *)(a3 + 204) )
        {
          v33 = *(_DWORD *)(a3 + 128);
          v28 = v23 <= *(__int16 *)(a3 + 206);
          v34 = *(__int16 **)(a3 + 148);
          v25 = *(__int16 **)(a3 + 192);
          if ( v28 )
          {
            if ( v25[2] >= v34[38] - v33 && *v25 >= v34[36] - v33 )
              return 1;
          }
          else if ( *v25 >= v34[36] - v33 )
          {
            v35 = v25[2];
            if ( v35 <= v33 + v34[42] && v35 >= v34[38] - v33 )
              return 1;
          }
        }
        else
        {
          v31 = *(_DWORD *)(a3 + 148);
          v25 = *(__int16 **)(a3 + 192);
          v32 = *(_DWORD *)(a3 + 128);
          if ( v25[2] <= v32 + *(__int16 *)(v31 + 84) && *v25 >= *(__int16 *)(v31 + 72) - v32 )
            return 1;
        }
      }
      else if ( v23 >= *(__int16 *)(a3 + 200) )
      {
        v27 = *(_DWORD *)(a3 + 128);
        v28 = v23 < *(__int16 *)(a3 + 202);
        v29 = *(__int16 **)(a3 + 148);
        v25 = *(__int16 **)(a3 + 192);
        if ( v28 )
        {
          if ( *v25 <= v27 + v29[40] )
          {
            v30 = v25[2];
            if ( v30 <= v27 + v29[42] && v30 >= v29[38] - v27 )
              return 1;
          }
        }
        else if ( v25[2] >= v29[38] - v27 && *v25 <= v27 + v29[40] )
        {
          return 1;
        }
      }
      else
      {
        v24 = *(_DWORD *)(a3 + 148);
        v25 = *(__int16 **)(a3 + 192);
        v26 = *(_DWORD *)(a3 + 128);
        if ( v25[2] <= v26 + *(__int16 *)(v24 + 84) && *v25 <= v26 + *(__int16 *)(v24 + 80) )
          return 1;
      }
      ++v22;
      *(_DWORD *)(a3 + 192) = v25 + 4;
      if ( v22 >= 5 )
        return 0;
    }
  }
  return 0;
}

// 0x4348b0  sub_4348B0
int __cdecl sub_4348B0(_WORD *a1, int a2)
{
  __int16 v2; // si

  *(_WORD *)(a2 + 64) = 4096 - a1[110];
  *(_WORD *)(a2 + 66) = 4096 - a1[111];
  *(_WORD *)(a2 + 68) = 4096 - a1[112];
  *(_WORD *)(a2 + 80) = *(_WORD *)(dword_4B324C + 228);
  *(_WORD *)(a2 + 82) = *(_WORD *)(dword_4B324C + 232);
  *(_WORD *)(a2 + 84) = *(_WORD *)(dword_4B324C + 236);
  *(_WORD *)(a2 + 80) -= a1[114];
  *(_WORD *)(a2 + 82) -= a1[116];
  *(_WORD *)(a2 + 84) -= a1[118];
  *(_WORD *)a2 = 4096;
  *(_WORD *)(a2 + 2) = 0;
  *(_WORD *)(a2 + 4) = 0;
  *(_WORD *)(a2 + 6) = 0;
  *(_WORD *)(a2 + 8) = 4096;
  *(_WORD *)(a2 + 10) = 0;
  *(_WORD *)(a2 + 12) = 0;
  *(_WORD *)(a2 + 14) = 0;
  *(_WORD *)(a2 + 16) = 4096;
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  RotMatrixZYX((__int16 *)(a2 + 64), (_WORD *)a2);
  ApplyMatrixSV((__int16 *)a2, (__int16 *)(a2 + 80), (_DWORD *)(a2 + 72));
  v2 = *(_WORD *)(a2 + 76);
  if ( v2 >= (__int16)a1[38] )
    return v2 <= a1[42] ? 0 : 2;
  else
    return 1;
}

// 0x4349b0  sub_4349B0
_BOOL2 __cdecl sub_4349B0(int a1, _WORD *a2, int a3)
{
  __int16 *v3; // ebx
  unsigned int v4; // eax
  __int16 v5; // ax
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  __int16 v9; // si

  v3 = (__int16 *)(a3 + 68);
  *(_WORD *)(a3 + 68) = *a2;
  *(_WORD *)(a3 + 70) = a2[2];
  *(_WORD *)(a3 + 72) = a2[4];
  *(_WORD *)(a3 + 68) -= *(_WORD *)(a1 + 228);
  *(_WORD *)(a3 + 70) -= *(_WORD *)(a1 + 232);
  *(_WORD *)(a3 + 72) -= *(_WORD *)(a1 + 236);
  v4 = *v3 * *v3 + *(__int16 *)(a3 + 72) * *(__int16 *)(a3 + 72);
  *(_DWORD *)(a3 + 84) = v4;
  if ( v4 > *(_DWORD *)(a1 + 48) )
    return false;
  *(_DWORD *)(a3 + 88) = *(__int16 *)(a1 + 32);
  *(_WORD *)(a3 + 52) = 4096 - *(_WORD *)(a1 + 220);
  *(_WORD *)(a3 + 54) = 4096 - *(_WORD *)(a1 + 222);
  v5 = 4096 - *(_WORD *)(a1 + 224);
  *(_WORD *)(a3 + 20) = 4096;
  *(_WORD *)(a3 + 28) = 4096;
  *(_WORD *)(a3 + 36) = 4096;
  *(_WORD *)(a3 + 56) = v5;
  *(_WORD *)(a3 + 22) = 0;
  *(_WORD *)(a3 + 24) = 0;
  *(_WORD *)(a3 + 26) = 0;
  *(_WORD *)(a3 + 30) = 0;
  *(_WORD *)(a3 + 32) = 0;
  *(_WORD *)(a3 + 34) = 0;
  *(_DWORD *)(a3 + 40) = 0;
  *(_DWORD *)(a3 + 44) = 0;
  *(_DWORD *)(a3 + 48) = 0;
  RotMatrixZYX((__int16 *)(a3 + 52), (_WORD *)(a3 + 20));
  ApplyMatrixSV((__int16 *)(a3 + 20), v3, (_DWORD *)(a3 + 60));
  v6 = *(_DWORD *)(a3 + 88);
  v7 = *(__int16 *)(a3 + 60);
  if ( v7 <= *(__int16 *)(a1 + 72) - v6 )
    return false;
  if ( v7 >= v6 + *(__int16 *)(a1 + 80) )
    return false;
  v8 = *(__int16 *)(a3 + 64);
  if ( v8 <= *(__int16 *)(a1 + 76) - v6 )
    return false;
  if ( v8 >= v6 + *(__int16 *)(a1 + 84) )
    return false;
  v9 = *(_WORD *)(a3 + 62);
  return v9 < *(__int16 *)(a1 + 74) && v9 > *(__int16 *)(a1 + 82);
}

// 0x434b00  sub_434B00
_BOOL2 __cdecl sub_434B00(int a1, __int16 *a2, int a3)
{
  __int16 *v3; // ebx
  unsigned int v4; // eax
  __int16 v5; // ax
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // eax

  v3 = (__int16 *)(a3 + 68);
  *(_WORD *)(a3 + 68) = a2[114];
  *(_WORD *)(a3 + 70) = a2[116];
  *(_WORD *)(a3 + 72) = a2[118];
  *(_WORD *)(a3 + 68) -= *(_WORD *)(a1 + 228);
  *(_WORD *)(a3 + 70) -= *(_WORD *)(a1 + 232);
  *(_WORD *)(a3 + 72) -= *(_WORD *)(a1 + 236);
  v4 = *v3 * *v3 + *(__int16 *)(a3 + 72) * *(__int16 *)(a3 + 72);
  *(_DWORD *)(a3 + 84) = v4;
  if ( v4 > *(_DWORD *)(a1 + 48) )
    return false;
  *(_DWORD *)(a3 + 88) = *(__int16 *)(a1 + 32);
  *(_WORD *)(a3 + 52) = 4096 - *(_WORD *)(a1 + 220);
  *(_WORD *)(a3 + 54) = 4096 - *(_WORD *)(a1 + 222);
  v5 = 4096 - *(_WORD *)(a1 + 224);
  *(_WORD *)(a3 + 20) = 4096;
  *(_WORD *)(a3 + 28) = 4096;
  *(_WORD *)(a3 + 36) = 4096;
  *(_WORD *)(a3 + 56) = v5;
  *(_WORD *)(a3 + 22) = 0;
  *(_WORD *)(a3 + 24) = 0;
  *(_WORD *)(a3 + 26) = 0;
  *(_WORD *)(a3 + 30) = 0;
  *(_WORD *)(a3 + 32) = 0;
  *(_WORD *)(a3 + 34) = 0;
  *(_DWORD *)(a3 + 40) = 0;
  *(_DWORD *)(a3 + 44) = 0;
  *(_DWORD *)(a3 + 48) = 0;
  RotMatrixZYX((__int16 *)(a3 + 52), (_WORD *)(a3 + 20));
  ApplyMatrixSV((__int16 *)(a3 + 20), v3, (_DWORD *)(a3 + 60));
  v6 = *(_DWORD *)(a3 + 88);
  v7 = *(__int16 *)(a3 + 60);
  if ( v7 <= *(__int16 *)(a1 + 72) - v6 )
    return false;
  if ( v7 >= v6 + *(__int16 *)(a1 + 80) )
    return false;
  v8 = *(__int16 *)(a3 + 64);
  if ( v8 <= *(__int16 *)(a1 + 76) - v6 )
    return false;
  if ( v8 >= v6 + *(__int16 *)(a1 + 84) )
    return false;
  v9 = *(__int16 *)(a3 + 62);
  return v9 + a2[41] < *(__int16 *)(a1 + 74) && v9 + a2[37] > *(__int16 *)(a1 + 82);
}

// 0x434c70  sub_434C70
int __cdecl sub_434C70(int a1, _WORD *a2, int a3)
{
  int v3; // edi
  __int16 v4; // ax
  __int16 v5; // cx
  __int16 v6; // bp
  __int16 v7; // bx
  __int16 v8; // ax

  v3 = dword_4B3238;
  if ( dword_4B3238 != 0 )
  {
    while ( 1 )
    {
      if ( (*(_BYTE *)(v3 + 8) & 2) != 0 || *(_WORD *)(v3 + 52) == *(_WORD *)(a1 + 38) )
      {
        *(_WORD *)(a3 + 48) = *a2;
        *(_WORD *)(a3 + 50) = a2[2];
        *(_WORD *)(a3 + 52) = a2[4];
        *(_WORD *)(a3 + 48) -= *(_WORD *)(v3 + 16);
        *(_WORD *)(a3 + 50) -= *(_WORD *)(v3 + 20);
        *(_WORD *)(a3 + 52) -= *(_WORD *)(v3 + 24);
        v4 = *(_WORD *)(a3 + 50);
        v5 = *(_WORD *)(a3 + 52);
        if ( v4 + *(__int16 *)(a1 + 82) <= 0 && v4 >= *(__int16 *)(v3 + 42) )
        {
          if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
          {
            v6 = *(_WORD *)(a3 + 48);
            if ( v6 >= 0 && v6 <= *(__int16 *)(v3 + 40) && v5 >= 0 && v5 <= *(__int16 *)(v3 + 44) )
              return v3;
          }
          else
          {
            *(_WORD *)(a3 + 32) = 4096 - *(_WORD *)(v3 + 32);
            *(_WORD *)(a3 + 34) = 4096 - *(_WORD *)(v3 + 34);
            *(_WORD *)(a3 + 36) = 4096 - *(_WORD *)(v3 + 36);
            RotMatrixZYX((__int16 *)(a3 + 32), (_WORD *)a3);
            ApplyMatrixSV((__int16 *)a3, (__int16 *)(a3 + 48), (_DWORD *)(a3 + 40));
            v7 = *(_WORD *)(a3 + 40);
            if ( v7 >= 0 && v7 <= *(__int16 *)(v3 + 40) )
            {
              v8 = *(_WORD *)(a3 + 44);
              if ( v8 >= 0 && v8 <= *(__int16 *)(v3 + 44) )
                return v3;
            }
          }
        }
      }
      v3 = *(_DWORD *)v3;
      if ( v3 == 0 )
        return 0;
    }
  }
  return 0;
}

// 0x434da0  sub_434DA0
_DWORD *__cdecl sub_434DA0(_DWORD *a1)
{
  int v1; // edx
  _DWORD *result; // eax
  int v3; // esi
  _WORD *i; // ecx
  int v5; // eax
  int v6; // edi
  int *v7; // eax
  int v8; // ecx
  char *v9; // edx

  v1 = *a1;
  result = NULL;
  memset(dword_4B3C60, 0, 0xF0u);
  v3 = 0;
  dword_4B3D74 = v1;
  dword_4B3DA0 = (int)(a1 + 1);
  for ( i = a1 + 1; (__int16)v3 < v1; result = (_DWORD *)(__int16)v3 )
  {
    if ( *i >= 0x3Cu )
    {
      while ( 1 )
        ;
    }
    v5 = (unsigned __int16)*i;
    v6 = dword_4B3C60[v5];
    v7 = &dword_4B3C60[v5];
    if ( v6 == 0 )
    {
      *v7 = (int)i;
      v1 = dword_4B3D74;
    }
    i += 34;
    ++v3;
  }
  v8 = 0;
  if ( v1 > 0 )
  {
    result = a1 + 9;
    do
    {
      v9 = (char *)a1 + *result;
      *(result - 1) += a1;
      *result = v9;
      result += 17;
      ++v8;
    }
    while ( (__int16)v8 < dword_4B3D74 );
  }
  return result;
}

// 0x434e40  sub_434E40
int __cdecl sub_434E40(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  int v5; // ebp
  __int16 *v6; // ebx
  int result; // eax
  int v8; // edi
  __int16 v9; // ax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  _DWORD *v16; // ebp
  int v17; // ecx
  int v18; // eax
  __int16 v19; // ax
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  __int16 v24; // dx
  int v25; // ecx
  int v26; // eax
  __int16 v27; // dx
  int v28; // ecx
  int v29; // eax
  int v30; // ecx
  int v31; // ebp
  __int16 v32; // dx
  int v33; // eax
  int v34; // edx
  int v35; // eax
  int v36; // ebp
  int v37; // edx
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  BOOL v45; // edx
  int v46; // ecx
  int v47; // eax
  int v48; // eax
  int v49; // ecx
  BOOL v50; // edx
  int v51; // ecx
  int v52; // eax
  int v53; // ecx
  __int16 v54; // ax
  __int16 v55; // cx
  __int16 v56; // dx
  __int16 v57; // cx
  __int16 v58; // ax
  int v59; // eax
  int v60; // ecx
  BOOL v61; // edx
  int v62; // eax
  int v63; // ecx
  int v64; // eax
  int v65; // ebp
  int v66; // ecx
  int v67; // ebp
  int v68; // ecx
  int v69; // eax
  int v70; // ecx
  int v71; // eax
  int v72; // ecx
  int v73; // eax
  int v74; // ebp
  int v75; // eax
  int v76; // edx
  BOOL v77; // ecx
  int v78; // eax
  int v79; // edx
  __int16 v80; // ax
  __int16 v81; // cx
  __int16 v82; // cx
  __int16 v83; // ax
  int v84; // edx
  int v85; // eax
  int v86; // ecx
  int v87; // eax
  int v88; // ecx
  int v89; // eax
  __int16 v90; // cx
  __int16 v91; // ax
  __int16 v92; // dx
  int v93; // eax
  int v94; // ecx
  __int16 v95; // dx
  __int16 v96; // dx
  __int16 v97; // dx
  int v98; // edx
  __int16 v99; // dx
  __int16 v100; // dx
  __int16 v101; // dx
  int v102; // edx
  int v103; // eax
  int v104; // eax
  int v105; // ecx
  int v106; // eax
  int v107; // edx
  __int16 v108; // dx
  int v109; // edx
  int v110; // ecx
  int v111; // ecx
  __int16 *v112; // ecx
  int v113; // eax
  int v114; // edx
  int v115; // eax
  int v116; // ebp
  int v117; // eax
  int v118; // ebp
  BOOL v119; // eax
  int v120; // eax
  int v121; // edx
  BOOL v122; // ecx
  __int16 v123; // ax
  __int16 v124; // ax
  __int16 v125; // ax
  int v126; // edx
  __int16 v127; // ax
  int v128; // ecx
  __int16 v129; // ax
  __int16 v130; // ax
  __int16 v131; // ax
  __int16 v132; // di
  int v133; // eax
  __int16 v134; // cx
  __int16 v135; // cx
  __int16 v136; // cx
  int v137; // edx
  __int16 v138; // cx
  __int16 v139; // cx
  __int16 v140; // cx
  int v141; // edx
  int v142; // eax
  int v143; // edx
  int v144; // ecx
  int v145; // eax
  int v146; // ecx
  int v147; // edx
  __int16 v148; // ax
  int v149; // edx
  int v150; // ecx
  int v151; // ecx
  __int16 *v152; // ecx
  int v153; // eax
  int v154; // edx
  int v155; // eax
  int v156; // ebp
  int v157; // ebp
  int v158; // eax
  BOOL v159; // edx
  int v160; // ecx
  int v161; // ebp
  BOOL v162; // edx
  __int16 v163; // ax
  __int16 v164; // ax
  __int16 v165; // ax
  int v166; // ecx
  __int16 v167; // cx
  __int16 v168; // cx
  __int16 v169; // cx
  __int16 v170; // di
  int v171; // ecx
  __int16 v172; // dx
  __int16 v173; // dx
  __int16 v174; // dx
  __int16 v175; // dx
  __int16 v176; // dx
  __int16 v177; // dx
  __int16 v178; // ax
  int v179; // eax
  bool v180; // zf
  __int16 v181; // ax
  __int16 v182; // ax
  __int16 v183; // [esp+24h] [ebp+10h]

  if ( a4 + 456 >= (unsigned int)dword_4EFAC0 + 1024 )
  {
    while ( 1 )
      ;
  }
  v5 = a3;
  *(_DWORD *)a4 = *a1;
  *(_DWORD *)(a4 + 4) = a1[1];
  *(_DWORD *)(a4 + 8) = a1[2];
  v6 = (__int16 *)sub_436CD0(a4, *(_WORD *)(a3 + 10));
  result = 0;
  *(_DWORD *)(a3 + 20) = v6;
  if ( v6 == NULL )
  {
    *(_WORD *)a3 = 1;
    *(_WORD *)(a3 + 2) = 1;
    *(_WORD *)(a3 + 4) = 0;
    *(_WORD *)(a3 + 6) = 0;
    *(_WORD *)(a3 + 8) = 0;
    *(_WORD *)(a3 + 10) = -1;
    return result;
  }
  *(_WORD *)(a4 + 442) = 0;
  *(_WORD *)(a4 + 440) = 0;
  *(_WORD *)(a4 + 444) = 0;
  *(_WORD *)(a4 + 2 * *(__int16 *)(a4 + 440) + 408) = 0;
  v8 = a4 + 68 * *(__int16 *)(a4 + 442) + 208;
  *(_DWORD *)(a4 + 4 * *(__int16 *)(a4 + 440) + 344) = v8;
  v9 = *v6;
  *(_WORD *)v8 = *v6;
  v183 = v9;
  *(_WORD *)(v8 + 2) = v6[1];
  *(_WORD *)(v8 + 4) = v6[2];
  *(_WORD *)(v8 + 6) = v6[3];
  *(_WORD *)(v8 + 8) = v6[4];
  *(_WORD *)(v8 + 10) = v6[5];
  *(_DWORD *)(v8 + 12) = *((_DWORD *)v6 + 3);
  *(_DWORD *)(v8 + 16) = *((_DWORD *)v6 + 4);
  *(_DWORD *)(v8 + 20) = *((_DWORD *)v6 + 5);
  *(_DWORD *)(v8 + 24) = *((_DWORD *)v6 + 6);
  *(_DWORD *)(a4 + 96) = *(_DWORD *)a4;
  *(_DWORD *)(a4 + 100) = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(a4 + 104) = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(a4 + 112) = *(_DWORD *)a4;
  *(_DWORD *)(a4 + 116) = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(a4 + 120) = *(_DWORD *)(a4 + 8);
  if ( a2 == NULL
    || (*(_DWORD *)(a4 + 16) = *a2,
        v10 = a2[2],
        *(_DWORD *)(a4 + 20) = v10,
        result = *(_DWORD *)(a4 + 16),
        (v10 | result) == 0) )
  {
    v178 = *(_WORD *)(*((_DWORD *)v6 + 7)
                    + 2
                    * ((*(_DWORD *)(a4 + 96) - *(_DWORD *)(v8 + 12)) / 320
                     + *(unsigned __int16 *)(v8 + 4) * ((*(_DWORD *)(a4 + 104) - *(_DWORD *)(v8 + 16)) / 320)));
    *(_WORD *)(a4 + 446) = v178;
    *(_WORD *)(a3 + 8) = v178 & 0xF000;
    *(_WORD *)(a4 + 446) &= 0xFFFu;
    *(_DWORD *)(a4 + 80) = *(_DWORD *)(a4 + 96) % 320;
    *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 104) % 320;
    *(_WORD *)(a4 + 2 * (__int16)++*(_WORD *)(a4 + 440) + 408) = *(char *)(*(_DWORD *)(a4 + 80) / 40
                                                                         + *((_DWORD *)v6 + 8)
                                                                         + 8
                                                                         * (*(_DWORD *)(a4 + 88) / 40
                                                                          + 8 * *(unsigned __int16 *)(a4 + 446)));
    v179 = *(__int16 *)(a4 + 440);
    LOWORD(v179) = *(_WORD *)(a4 + 2 * v179 + 408);
    if ( (__int16)v179 > 0 )
    {
      v180 = (_WORD)v179 == 126;
      if ( (__int16)v179 >= 126 )
        goto LABEL_291;
      v179 = -v179;
    }
    v180 = (_WORD)v179 == 126;
LABEL_291:
    if ( v180 )
    {
      a1[1] = *(_DWORD *)(v8 + 20);
      *(_WORD *)a3 = *(_WORD *)(a4 + 408);
      *(_WORD *)(a3 + 2) = 8;
    }
    else
    {
      a1[1] = *(_DWORD *)(v8 + 20);
      *(_WORD *)a3 = *(_WORD *)(a4 + 408);
      if ( (_WORD)v179 != 127 )
      {
        *(_WORD *)(a3 + 2) = 2;
        v181 = *(_WORD *)(a4 + 2 * *(__int16 *)(a4 + 440) + 408);
        *(_WORD *)(a4 + 448) = v181;
        if ( v181 > 0 )
        {
          *(_WORD *)(a4 + 448) = -v181;
          *(_BYTE *)(a3 + 2) |= 0x20u;
        }
        v182 = *(_WORD *)(v8 + 2) * *(_WORD *)(a4 + 448);
        *(_WORD *)(a4 + 448) = v182;
        *(_WORD *)(a3 + 4) = v182;
        *(_WORD *)(a3 + 6) = *(_WORD *)(a4 + 448);
        *(_WORD *)(a3 + 10) = *(_WORD *)v8;
        *(_DWORD *)(a3 + 12) = *(_DWORD *)(v8 + 24);
        *(_DWORD *)(a3 + 20) = v6;
        return 1;
      }
      *(_WORD *)(a3 + 2) = 6;
    }
    *(_WORD *)(a3 + 4) = 0;
    *(_WORD *)(a3 + 6) = 0;
    *(_WORD *)(a3 + 10) = *(_WORD *)v8;
    *(_DWORD *)(a3 + 12) = *(_DWORD *)(v8 + 24);
    *(_DWORD *)(a3 + 20) = v6;
    return 1;
  }
  if ( result == 0 )
  {
    if ( v10 == 0 )
      return result;
    if ( v10 <= 0 )
    {
      *(_WORD *)(a4 + 194) = -320;
      *(_WORD *)(a4 + 198) = -40;
      v142 = *(_DWORD *)(a4 + 8) - *(_DWORD *)(a4 + 8) % 320 - 1;
    }
    else
    {
      *(_WORD *)(a4 + 194) = 320;
      *(_WORD *)(a4 + 198) = 40;
      v142 = *(_DWORD *)(a4 + 8) - *(_DWORD *)(a4 + 8) % 320 + 320;
    }
    *(_DWORD *)(a4 + 164) = v142;
    *(_WORD *)(a4 + 448) = (*(_DWORD *)(a4 + 96) - *(_DWORD *)(v8 + 12)) / 320;
    v143 = *(_DWORD *)(a4 + 96) % 320;
    *(_DWORD *)(a4 + 80) = v143;
    *(_WORD *)(a4 + 452) = v143 / 40;
    while ( 1 )
    {
      v144 = *(_DWORD *)(a4 + 104);
      v145 = *(_DWORD *)(v8 + 16);
      if ( v144 < v145 || v144 >= *(unsigned __int16 *)(v8 + 10) + v145 )
      {
        *(_DWORD *)(a4 + 84) = *(_DWORD *)(a4 + 100);
        *(_DWORD *)(a4 + 100) = *(_DWORD *)(a4 + 4);
        v6 = (__int16 *)sub_436CD0(a4 + 96, *(_WORD *)(v5 + 10));
        if ( v6 == NULL )
        {
          v163 = *(_WORD *)(a4 + 440);
          if ( v163 >= 1 )
            --v163;
          *(_WORD *)(a4 + 444) = v163;
          a1[1] = *(_DWORD *)(v8 + 20);
          a2[2] = *(_DWORD *)(a4 + 120) - *(_DWORD *)(a4 + 8);
          *(_WORD *)v5 = *(_WORD *)(a4 + 408);
          *(_WORD *)(v5 + 2) = 2;
          v164 = *(_WORD *)(a4 + 2 * *(__int16 *)(a4 + 444) + 408);
          *(_WORD *)(a4 + 448) = v164;
          if ( v164 == 126 )
          {
            *(_WORD *)(a4 + 448) = 0;
            *(_WORD *)(v5 + 2) = 2;
          }
          else if ( v164 > 0 )
          {
            *(_WORD *)(a4 + 448) = -v164;
          }
          *(_WORD *)(v5 + 4) = *(_WORD *)(v8 + 2) * *(_WORD *)(a4 + 448);
          v165 = *(_WORD *)(a4 + 2 * *(__int16 *)(a4 + 440) + 408);
          *(_WORD *)(a4 + 448) = v165;
          if ( v165 == 126 )
          {
            *(_WORD *)(a4 + 448) = 0;
            *(_WORD *)(v5 + 2) = 2;
          }
          else if ( v165 > 0 )
          {
            *(_WORD *)(a4 + 448) = -v165;
            *(_BYTE *)(v5 + 2) |= 0x20u;
          }
          *(_WORD *)(v5 + 6) = *(_WORD *)(v8 + 2) * *(_WORD *)(a4 + 448);
          *(_WORD *)(v5 + 10) = v183;
          v166 = *(_DWORD *)(v8 + 24);
          *(_DWORD *)(v5 + 20) = 0;
          *(_DWORD *)(v5 + 12) = v166;
          return 0;
        }
        *(_WORD *)(a4 + 442) = 1;
        *(_DWORD *)(a4 + 100) = *(_DWORD *)(a4 + 84);
        v146 = 17 * *(__int16 *)(a4 + 442);
        v183 = *v6;
        v8 = a4 + 68 * *(__int16 *)(a4 + 442) + 208;
        *(_WORD *)v8 = *v6;
        *(_WORD *)(v8 + 2) = v6[1];
        *(_WORD *)(v8 + 4) = v6[2];
        *(_WORD *)(v8 + 6) = v6[3];
        *(_WORD *)(v8 + 8) = v6[4];
        *(_WORD *)(v8 + 10) = v6[5];
        *(_DWORD *)(v8 + 12) = *((_DWORD *)v6 + 3);
        *(_DWORD *)(v8 + 16) = *((_DWORD *)v6 + 4);
        v147 = *(_DWORD *)(a4 + 4 * v146 + 220);
        *(_DWORD *)(v8 + 20) = *((_DWORD *)v6 + 5);
        *(_DWORD *)(v8 + 24) = *((_DWORD *)v6 + 6);
        *(_WORD *)(a4 + 448) = (*(_DWORD *)(a4 + 96) - v147) / 320;
      }
      v148 = *(_WORD *)(*((_DWORD *)v6 + 7)
                      + 2
                      * (*(__int16 *)(a4 + 448)
                       + *(unsigned __int16 *)(v8 + 4) * ((*(_DWORD *)(a4 + 104) - *(_DWORD *)(v8 + 16)) / 320)));
      *(_WORD *)(a4 + 446) = v148;
      *(_WORD *)(v5 + 8) = v148 & 0xF000;
      *(_WORD *)(a4 + 446) &= 0xFFFu;
      v149 = *(_DWORD *)(a4 + 104) % 320;
      *(_DWORD *)(a4 + 88) = v149;
      *(_DWORD *)(a4 + 104) -= v149;
      v150 = *(_DWORD *)(a4 + 88);
      if ( *(__int16 *)(a4 + 198) <= 0 )
        v151 = v150 - *(_DWORD *)(a4 + 88) % 40 - 1;
      else
        v151 = v150 - *(_DWORD *)(a4 + 88) % 40 + 40;
      *(_DWORD *)(a4 + 28) = v151;
      v152 = (__int16 *)(a4 + 440);
      do
      {
        *(_WORD *)(a4 + 2 * ++*v152 + 408) = *(char *)(*(__int16 *)(a4 + 452)
                                                     + 8
                                                     * (*(_DWORD *)(a4 + 88) / 40 + 8 * *(unsigned __int16 *)(a4 + 446))
                                                     + *((_DWORD *)v6 + 8));
        v154 = *v152;
        *(_DWORD *)(a4 + 4 * v154 + 344) = v8;
        v153 = *v152;
        LOWORD(v154) = *(_WORD *)(a4 + 2 * v153 + 408);
        if ( (_WORD)v154 == 126 )
        {
          LOWORD(v154) = 0;
        }
        else if ( (__int16)v154 > 0 && (__int16)v154 < 126 )
        {
          v154 = -v154;
        }
        if ( *v152 == 15 )
        {
          v152 = (__int16 *)(a4 + 440);
          *(_WORD *)(a4 + 408) = *(_WORD *)(a4 + 2 * v153 + 402);
          v155 = *(__int16 *)(a4 + 440);
          *(_WORD *)(a4 + 410) = *(_WORD *)(a4 + 2 * v155 + 404);
          *(_WORD *)(a4 + 412) = *(_WORD *)(a4 + 2 * v155 + 406);
          *(_WORD *)(a4 + 414) = *(_WORD *)(a4 + 2 * v155 + 408);
          *(_DWORD *)(a4 + 344) = *(_DWORD *)(a4 + 4 * v155 + 332);
          *(_DWORD *)(a4 + 348) = *(_DWORD *)(a4 + 4 * v155 + 336);
          *(_DWORD *)(a4 + 352) = *(_DWORD *)(a4 + 4 * v155 + 340);
          *(_DWORD *)(a4 + 356) = *(_DWORD *)(a4 + 4 * v155 + 344);
          *(_WORD *)(a4 + 440) = 3;
        }
        v89 = a3;
        if ( (_WORD)v154 == 127 && (v152 = (__int16 *)(a4 + 440), *(__int16 *)(a4 + 440) > 1)
          || *(_DWORD *)(v8 + 20) + *(unsigned __int16 *)(v8 + 2) * (__int16)v154 - *(_DWORD *)(a4 + 4) < -100 )
        {
          v167 = *(_WORD *)(a4 + 440);
          if ( v167 >= 1 )
            *(_WORD *)(a4 + 440) = v167 - 1;
          v84 = *(_DWORD *)(a4 + 4 * *(__int16 *)(a4 + 440) + 344);
          a1[1] = *(_DWORD *)(v84 + 20);
          a2[2] = *(_DWORD *)(a4 + 120) - *(_DWORD *)(a4 + 8);
          *(_WORD *)a3 = *(_WORD *)(a4 + 408);
          if ( *(_WORD *)(a4 + 440) == 14 )
            *(_WORD *)(a3 + 2) = 2;
          else
            *(_WORD *)(a3 + 2) = 6;
          v90 = *(_WORD *)(a4 + 2 * *(__int16 *)(a4 + 440) + 408);
          *(_WORD *)(a4 + 448) = v90;
          if ( v90 != 126 )
            goto LABEL_262;
          *(_WORD *)(a4 + 448) = 0;
          *(_WORD *)(a3 + 2) = 12;
LABEL_264:
          v168 = *(_WORD *)(a4 + 448) * *(_WORD *)(v84 + 2);
          *(_WORD *)(a4 + 448) = v168;
          *(_WORD *)(v89 + 4) = v168;
          *(_WORD *)(v89 + 6) = *(_WORD *)(a4 + 448);
          *(_WORD *)(v89 + 10) = *(_WORD *)v84;
          *(_DWORD *)(v89 + 12) = *(_DWORD *)(v84 + 24);
          *(_DWORD *)(v89 + 20) = v84;
          return 1;
        }
        v156 = *(_DWORD *)(a4 + 88);
        *(_WORD *)(a4 + 170) = *(_WORD *)(a4 + 88) + *(_WORD *)(a4 + 104) - *(_WORD *)(a4 + 8);
        *(_DWORD *)(a4 + 120) = v156 + *(_DWORD *)(a4 + 104);
        *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 28);
        *(_DWORD *)(a4 + 28) += *(__int16 *)(a4 + 198);
        if ( *(_DWORD *)(a4 + 88) >= 0x140u )
          goto LABEL_239;
        v157 = *(_DWORD *)(a4 + 20);
        v158 = *(__int16 *)(a4 + 170);
        if ( v157 <= 0 )
          v159 = v157 < v158;
        else
          v159 = v157 > v158;
      }
      while ( v159 );
      v89 = a3;
LABEL_239:
      *(_DWORD *)(a4 + 104) = *(_DWORD *)(a4 + 164);
      v160 = *(__int16 *)(a4 + 170);
      *(_DWORD *)(a4 + 164) += *(__int16 *)(a4 + 194);
      v161 = *(_DWORD *)(a4 + 20);
      if ( v161 <= 0 )
        v162 = v161 < v160;
      else
        v162 = v161 > v160;
      if ( !v162 )
      {
        v169 = *(_WORD *)(a4 + 440);
        if ( v169 >= 1 )
          --v169;
        *(_WORD *)(a4 + 444) = v169;
        v170 = *(_WORD *)(a4 + 440);
        v171 = *(_DWORD *)(a4 + 4 * v170 + 344);
        if ( *(_WORD *)(a4 + 2 * v170 + 408) == 126 )
        {
          if ( v170 < 0 )
            *(_WORD *)(a4 + 440) = 0;
          v180 = *(_WORD *)(a4 + 2 * *(__int16 *)(a4 + 440) + 408) == 126;
          a1[1] = *(_DWORD *)(v171 + 20);
          *(_WORD *)v89 = *(_WORD *)(a4 + 408);
          if ( !v180 )
          {
            v172 = *(_WORD *)(a4 + 2 * *(__int16 *)(a4 + 444) + 408);
            *(_WORD *)(a4 + 448) = v172;
            if ( v172 == 126 )
            {
              *(_WORD *)(a4 + 448) = 0;
              *(_WORD *)(v89 + 2) = 8;
            }
            else
            {
              *(_WORD *)(v89 + 2) = 2;
              v173 = *(_WORD *)(a4 + 448);
              if ( v173 > 0 )
              {
                *(_WORD *)(a4 + 448) = -v173;
                *(_BYTE *)(v89 + 2) |= 0x20u;
              }
            }
            v174 = *(_WORD *)(a4 + 448) * *(_WORD *)(v171 + 2);
            *(_WORD *)(a4 + 448) = v174;
            *(_WORD *)(v89 + 4) = v174;
            *(_WORD *)(v89 + 6) = *(_WORD *)(a4 + 448);
            *(_WORD *)(v89 + 10) = *(_WORD *)v171;
            *(_DWORD *)(v89 + 12) = *(_DWORD *)(v171 + 24);
            *(_DWORD *)(v89 + 20) = v171;
            return 1;
          }
          *(_WORD *)(v89 + 2) = 8;
          *(_WORD *)(v89 + 4) = 0;
          *(_WORD *)(v89 + 6) = 0;
        }
        else
        {
          a1[1] = *(_DWORD *)(v171 + 20);
          *(_WORD *)v89 = *(_WORD *)(a4 + 408);
          v175 = *(_WORD *)(a4 + 2 * *(__int16 *)(a4 + 444) + 408);
          *(_WORD *)(a4 + 448) = v175;
          if ( v175 == 126 )
          {
            *(_WORD *)(a4 + 448) = 0;
            *(_WORD *)(v89 + 2) = 8;
          }
          else
          {
            *(_WORD *)(v89 + 2) = 2;
            v176 = *(_WORD *)(a4 + 448);
            if ( v176 > 0 )
              *(_WORD *)(a4 + 448) = -v176;
          }
          *(_WORD *)(v89 + 4) = *(_WORD *)(v171 + 2) * *(_WORD *)(a4 + 448);
          v177 = *(_WORD *)(a4 + 2 * *(__int16 *)(a4 + 440) + 408);
          *(_WORD *)(a4 + 448) = v177;
          if ( v177 == 126 )
          {
            *(_WORD *)(a4 + 448) = 0;
            *(_WORD *)(v89 + 2) = 8;
          }
          else if ( v177 > 0 )
          {
            *(_WORD *)(a4 + 448) = -v177;
            *(_BYTE *)(v89 + 2) |= 0x20u;
          }
          *(_WORD *)(v89 + 6) = *(_WORD *)(v171 + 2) * *(_WORD *)(a4 + 448);
        }
        *(_WORD *)(v89 + 10) = *(_WORD *)v171;
        *(_DWORD *)(v89 + 12) = *(_DWORD *)(v171 + 24);
        *(_DWORD *)(v89 + 20) = v171;
        return 1;
      }
      v5 = a3;
    }
  }
  if ( v10 == 0 )
  {
    if ( result <= 0 )
    {
      *(_WORD *)(a4 + 192) = -320;
      *(_WORD *)(a4 + 196) = -40;
      v103 = *(_DWORD *)a4 - *(_DWORD *)a4 % 320 - 1;
    }
    else
    {
      *(_WORD *)(a4 + 192) = 320;
      *(_WORD *)(a4 + 196) = 40;
      v103 = *(_DWORD *)a4 - *(_DWORD *)a4 % 320 + 320;
    }
    *(_DWORD *)(a4 + 160) = v103;
    v104 = *(_DWORD *)(a4 + 104);
    *(_WORD *)(a4 + 450) = *(_WORD *)(v8 + 4) * ((v104 - *(_DWORD *)(v8 + 16)) / 320);
    *(_DWORD *)(a4 + 88) = v104 % 320;
    *(_WORD *)(a4 + 454) = 8 * (v104 % 320 / 40);
    while ( 1 )
    {
      v105 = *(_DWORD *)(a4 + 96);
      v106 = *(_DWORD *)(v8 + 12);
      if ( v105 < v106 || v105 >= *(unsigned __int16 *)(v8 + 8) + v106 )
      {
        *(_DWORD *)(a4 + 84) = *(_DWORD *)(a4 + 100);
        *(_DWORD *)(a4 + 100) = *(_DWORD *)(a4 + 4);
        v6 = (__int16 *)sub_436CD0(a4 + 96, *(_WORD *)(v5 + 10));
        if ( v6 == NULL )
        {
          v123 = *(_WORD *)(a4 + 440);
          if ( v123 >= 1 )
            --v123;
          *(_WORD *)(a4 + 444) = v123;
          a1[1] = *(_DWORD *)(v8 + 20);
          *a2 = *(_DWORD *)(a4 + 112) - *(_DWORD *)a4;
          *(_WORD *)v5 = *(_WORD *)(a4 + 408);
          *(_WORD *)(v5 + 2) = 2;
          v124 = *(_WORD *)(a4 + 2 * *(__int16 *)(a4 + 444) + 408);
          *(_WORD *)(a4 + 448) = v124;
          if ( v124 == 126 )
          {
            *(_WORD *)(a4 + 448) = 0;
            *(_WORD *)(v5 + 2) = 8;
          }
          else if ( v124 > 0 )
          {
            *(_WORD *)(a4 + 448) = -v124;
          }
          *(_WORD *)(v5 + 4) = *(_WORD *)(v8 + 2) * *(_WORD *)(a4 + 448);
          v125 = *(_WORD *)(a4 + 2 * *(__int16 *)(a4 + 440) + 408);
          *(_WORD *)(a4 + 448) = v125;
          if ( v125 == 126 )
          {
            *(_WORD *)(a4 + 448) = 0;
            *(_WORD *)(v5 + 2) = 8;
          }
          else if ( v125 > 0 )
          {
            *(_WORD *)(a4 + 448) = -v125;
            *(_BYTE *)(v5 + 2) |= 0x20u;
          }
          *(_WORD *)(v5 + 6) = *(_WORD *)(v8 + 2) * *(_WORD *)(a4 + 448);
          *(_WORD *)(v5 + 10) = v183;
          v126 = *(_DWORD *)(v8 + 24);
          *(_DWORD *)(v5 + 20) = 0;
          *(_DWORD *)(v5 + 12) = v126;
          return 0;
        }
        *(_WORD *)(a4 + 442) = 1;
        *(_DWORD *)(a4 + 100) = *(_DWORD *)(a4 + 84);
        v183 = *v6;
        v8 = a4 + 68 * *(__int16 *)(a4 + 442) + 208;
        *(_WORD *)v8 = *v6;
        *(_WORD *)(v8 + 2) = v6[1];
        *(_WORD *)(v8 + 4) = v6[2];
        *(_WORD *)(v8 + 6) = v6[3];
        *(_WORD *)(v8 + 8) = v6[4];
        *(_WORD *)(v8 + 10) = v6[5];
        *(_DWORD *)(v8 + 12) = *((_DWORD *)v6 + 3);
        v107 = *((_DWORD *)v6 + 4);
        *(_DWORD *)(v8 + 16) = v107;
        *(_DWORD *)(v8 + 20) = *((_DWORD *)v6 + 5);
        *(_DWORD *)(v8 + 24) = *((_DWORD *)v6 + 6);
        *(_WORD *)(a4 + 450) = *(_WORD *)(v8 + 4) * ((*(_DWORD *)(a4 + 104) - v107) / 320);
      }
      v108 = *(_WORD *)(*((_DWORD *)v6 + 7)
                      + 2 * (*(__int16 *)(a4 + 450) + (*(_DWORD *)(a4 + 96) - *(_DWORD *)(v8 + 12)) / 320));
      *(_WORD *)(a4 + 446) = v108;
      *(_WORD *)(v5 + 8) = v108 & 0xF000;
      *(_WORD *)(a4 + 446) &= 0xFFFu;
      v109 = *(_DWORD *)(a4 + 96) % 320;
      *(_DWORD *)(a4 + 80) = v109;
      *(_DWORD *)(a4 + 96) -= v109;
      v110 = *(_DWORD *)(a4 + 80);
      if ( *(__int16 *)(a4 + 196) <= 0 )
        v111 = v110 - *(_DWORD *)(a4 + 80) % 40 - 1;
      else
        v111 = v110 - *(_DWORD *)(a4 + 80) % 40 + 40;
      *(_DWORD *)(a4 + 24) = v111;
      v112 = (__int16 *)(a4 + 440);
      do
      {
        *(_WORD *)(a4 + 2 * ++*v112 + 408) = *(char *)(*(__int16 *)(a4 + 454)
                                                     + (*(unsigned __int16 *)(a4 + 446) << 6)
                                                     + *(_DWORD *)(a4 + 80) / 40
                                                     + *((_DWORD *)v6 + 8));
        v114 = *v112;
        *(_DWORD *)(a4 + 4 * v114 + 344) = v8;
        v113 = *v112;
        LOWORD(v114) = *(_WORD *)(a4 + 2 * v113 + 408);
        if ( (_WORD)v114 == 126 )
        {
          LOWORD(v114) = 0;
        }
        else if ( (__int16)v114 > 0 && (__int16)v114 < 126 )
        {
          v114 = -v114;
        }
        if ( *v112 == 15 )
        {
          v112 = (__int16 *)(a4 + 440);
          *(_WORD *)(a4 + 408) = *(_WORD *)(a4 + 2 * v113 + 402);
          v115 = *(__int16 *)(a4 + 440);
          *(_WORD *)(a4 + 410) = *(_WORD *)(a4 + 2 * v115 + 404);
          *(_WORD *)(a4 + 412) = *(_WORD *)(a4 + 2 * v115 + 406);
          *(_WORD *)(a4 + 414) = *(_WORD *)(a4 + 2 * v115 + 408);
          *(_DWORD *)(a4 + 344) = *(_DWORD *)(a4 + 4 * v115 + 332);
          *(_DWORD *)(a4 + 348) = *(_DWORD *)(a4 + 4 * v115 + 336);
          *(_DWORD *)(a4 + 352) = *(_DWORD *)(a4 + 4 * v115 + 340);
          *(_DWORD *)(a4 + 356) = *(_DWORD *)(a4 + 4 * v115 + 344);
          *(_WORD *)(a4 + 440) = 3;
        }
        v116 = a3;
        if ( (_WORD)v114 == 127 && (v112 = (__int16 *)(a4 + 440), *(__int16 *)(a4 + 440) > 1)
          || *(_DWORD *)(v8 + 20) + *(unsigned __int16 *)(v8 + 2) * (__int16)v114 - *(_DWORD *)(a4 + 4) < -100 )
        {
          v127 = *(_WORD *)(a4 + 440);
          if ( v127 >= 1 )
            *(_WORD *)(a4 + 440) = v127 - 1;
          v128 = *(_DWORD *)(a4 + 4 * *(__int16 *)(a4 + 440) + 344);
          a1[1] = *(_DWORD *)(v128 + 20);
          *a2 = *(_DWORD *)(a4 + 112) - *(_DWORD *)a4;
          *(_WORD *)a3 = *(_WORD *)(a4 + 408);
          if ( *(_WORD *)(a4 + 440) == 14 )
            *(_WORD *)(a3 + 2) = 2;
          else
            *(_WORD *)(a3 + 2) = 6;
          v129 = *(_WORD *)(a4 + 2 * *(__int16 *)(a4 + 440) + 408);
          *(_WORD *)(a4 + 448) = v129;
          if ( v129 == 126 )
          {
            *(_WORD *)(a4 + 448) = 0;
            *(_WORD *)(a3 + 2) = 12;
          }
          else if ( v129 > 0 )
          {
            *(_WORD *)(a4 + 448) = -v129;
            *(_BYTE *)(a3 + 2) |= 0x20u;
          }
          v130 = *(_WORD *)(a4 + 448) * *(_WORD *)(v128 + 2);
          *(_WORD *)(a4 + 448) = v130;
          *(_WORD *)(a3 + 4) = v130;
          *(_WORD *)(a3 + 6) = *(_WORD *)(a4 + 448);
          *(_WORD *)(a3 + 10) = *(_WORD *)v128;
          *(_DWORD *)(a3 + 12) = *(_DWORD *)(v128 + 24);
          *(_DWORD *)(a3 + 20) = v128;
          return 1;
        }
        v117 = *(_DWORD *)(a4 + 96);
        *(_WORD *)(a4 + 168) = *(_WORD *)(a4 + 80) + *(_WORD *)(a4 + 96) - *(_WORD *)a4;
        *(_DWORD *)(a4 + 112) = *(_DWORD *)(a4 + 80) + v117;
        *(_DWORD *)(a4 + 80) = *(_DWORD *)(a4 + 24);
        *(_DWORD *)(a4 + 24) += *(__int16 *)(a4 + 196);
        if ( *(_DWORD *)(a4 + 80) >= 0x140u )
          goto LABEL_162;
        v118 = *(_DWORD *)(a4 + 16);
        if ( v118 <= 0 )
          v119 = v118 < *(__int16 *)(a4 + 168);
        else
          v119 = v118 > *(__int16 *)(a4 + 168);
      }
      while ( v119 );
      v116 = a3;
LABEL_162:
      *(_DWORD *)(a4 + 96) = *(_DWORD *)(a4 + 160);
      *(_DWORD *)(a4 + 160) += *(__int16 *)(a4 + 192);
      v120 = *(_DWORD *)(a4 + 16);
      v121 = *(__int16 *)(a4 + 168);
      if ( v120 <= 0 )
        v122 = v120 < v121;
      else
        v122 = v120 > v121;
      if ( !v122 )
      {
        v131 = *(_WORD *)(a4 + 440);
        if ( v131 >= 1 )
          --v131;
        *(_WORD *)(a4 + 444) = v131;
        v132 = *(_WORD *)(a4 + 440);
        v133 = *(_DWORD *)(a4 + 4 * v132 + 344);
        if ( *(_WORD *)(a4 + 2 * v132 + 408) == 126 )
        {
          if ( v132 < 0 )
            *(_WORD *)(a4 + 440) = 0;
          if ( *(_WORD *)(a4 + 2 * *(__int16 *)(a4 + 440) + 408) != 126 )
          {
            a1[1] = *(_DWORD *)(v133 + 20);
            *(_WORD *)v116 = *(_WORD *)(a4 + 408);
            v134 = *(_WORD *)(a4 + 2 * *(__int16 *)(a4 + 444) + 408);
            *(_WORD *)(a4 + 448) = v134;
            if ( v134 == 126 )
            {
              *(_WORD *)(a4 + 448) = 0;
              *(_WORD *)(v116 + 2) = 8;
            }
            else
            {
              *(_WORD *)(v116 + 2) = 2;
              v135 = *(_WORD *)(a4 + 448);
              if ( v135 > 0 )
              {
                *(_WORD *)(a4 + 448) = -v135;
                *(_BYTE *)(v116 + 2) |= 0x20u;
              }
            }
            v136 = *(_WORD *)(a4 + 448) * *(_WORD *)(v133 + 2);
            *(_WORD *)(a4 + 448) = v136;
            *(_WORD *)(v116 + 4) = v136;
            *(_WORD *)(v116 + 6) = *(_WORD *)(a4 + 448);
            *(_WORD *)(v116 + 10) = *(_WORD *)v133;
            v137 = *(_DWORD *)(v133 + 24);
            *(_DWORD *)(v116 + 20) = v133;
            *(_DWORD *)(v116 + 12) = v137;
            return 1;
          }
          a1[1] = *(_DWORD *)(v133 + 20);
          *(_WORD *)v116 = *(_WORD *)(a4 + 408);
          *(_WORD *)(v116 + 2) = 8;
          *(_WORD *)(v116 + 4) = 0;
          *(_WORD *)(v116 + 6) = 0;
        }
        else
        {
          a1[1] = *(_DWORD *)(v133 + 20);
          *(_WORD *)v116 = *(_WORD *)(a4 + 408);
          v138 = *(_WORD *)(a4 + 2 * *(__int16 *)(a4 + 444) + 408);
          *(_WORD *)(a4 + 448) = v138;
          if ( v138 == 126 )
          {
            *(_WORD *)(a4 + 448) = 0;
            *(_WORD *)(v116 + 2) = 8;
          }
          else
          {
            *(_WORD *)(v116 + 2) = 2;
            v139 = *(_WORD *)(a4 + 448);
            if ( v139 > 0 )
              *(_WORD *)(a4 + 448) = -v139;
          }
          *(_WORD *)(v116 + 4) = *(_WORD *)(v133 + 2) * *(_WORD *)(a4 + 448);
          v140 = *(_WORD *)(a4 + 2 * *(__int16 *)(a4 + 440) + 408);
          *(_WORD *)(a4 + 448) = v140;
          if ( v140 == 126 )
          {
            *(_WORD *)(a4 + 448) = 0;
            *(_WORD *)(v116 + 2) = 8;
          }
          else if ( v140 > 0 )
          {
            *(_WORD *)(a4 + 448) = -v140;
            *(_BYTE *)(v116 + 2) |= 0x20u;
          }
          *(_WORD *)(v116 + 6) = *(_WORD *)(v133 + 2) * *(_WORD *)(a4 + 448);
        }
        *(_WORD *)(v116 + 10) = *(_WORD *)v133;
        v141 = *(_DWORD *)(v133 + 24);
        *(_DWORD *)(v116 + 20) = v133;
        *(_DWORD *)(v116 + 12) = v141;
        return 1;
      }
      v5 = a3;
    }
  }
  if ( result <= 0 )
  {
    *(_WORD *)(a4 + 192) = -320;
    *(_WORD *)(a4 + 196) = -40;
    *(_DWORD *)(a4 + 160) = *(_DWORD *)a4 - *(_DWORD *)a4 % 320 - 1;
  }
  else
  {
    *(_WORD *)(a4 + 192) = 320;
    *(_WORD *)(a4 + 196) = 40;
    *(_DWORD *)(a4 + 160) = *(_DWORD *)a4 - *(_DWORD *)a4 % 320 + 320;
  }
  v11 = *(_DWORD *)(a4 + 20);
  if ( v11 > 0 )
  {
    *(_WORD *)(a4 + 194) = 320;
    *(_WORD *)(a4 + 198) = 40;
    v12 = *(_DWORD *)(a4 + 8) - *(_DWORD *)(a4 + 8) % 320 + 320;
LABEL_16:
    *(_DWORD *)(a4 + 164) = v12;
    goto LABEL_17;
  }
  if ( v11 < 0 )
  {
    *(_WORD *)(a4 + 194) = -320;
    *(_WORD *)(a4 + 198) = -40;
    v12 = *(_DWORD *)(a4 + 8) - *(_DWORD *)(a4 + 8) % 320 - 1;
    goto LABEL_16;
  }
LABEL_17:
  *(_DWORD *)(a4 + 200) = (*(_DWORD *)(a4 + 20) << 12) / *(_DWORD *)(a4 + 16);
  v13 = (*(_DWORD *)(a4 + 16) << 12) / *(_DWORD *)(a4 + 20);
  *(_DWORD *)(a4 + 204) = v13;
  *(_DWORD *)(a4 + 144) = *(_DWORD *)a4 + ((v13 * (*(_DWORD *)(a4 + 164) - *(_DWORD *)(a4 + 8))) >> 12);
  *(_DWORD *)(a4 + 148) = *(_DWORD *)(a4 + 164);
  *(_DWORD *)(a4 + 152) = *(_DWORD *)(a4 + 160);
  *(_DWORD *)(a4 + 156) = *(_DWORD *)(a4 + 8)
                        + ((*(_DWORD *)(a4 + 200) * (*(_DWORD *)(a4 + 160) - *(_DWORD *)a4)) >> 12);
  while ( 1 )
  {
    v14 = *(_DWORD *)(a4 + 96);
    v15 = *(_DWORD *)(v8 + 12);
    v16 = (_DWORD *)(a4 + 96);
    if ( v14 < v15
      || v14 >= *(unsigned __int16 *)(v8 + 8) + v15
      || (v17 = *(_DWORD *)(a4 + 104), v18 = *(_DWORD *)(v8 + 16), v17 < v18)
      || v17 >= *(unsigned __int16 *)(v8 + 10) + v18 )
    {
      *(_DWORD *)(a4 + 84) = *(_DWORD *)(a4 + 100);
      *(_DWORD *)(a4 + 100) = *(_DWORD *)(a4 + 4);
      v6 = (__int16 *)sub_436CD0(a4 + 96, *(_WORD *)(a3 + 10));
      if ( v6 == NULL )
      {
        v80 = *(_WORD *)(a4 + 440);
        if ( v80 >= 1 )
          --v80;
        *(_WORD *)(a4 + 444) = v80;
        a1[1] = *(_DWORD *)(v8 + 20);
        *a2 = *(_DWORD *)(a4 + 112) - *(_DWORD *)a4;
        a2[2] = *(_DWORD *)(a4 + 120) - *(_DWORD *)(a4 + 8);
        *(_WORD *)a3 = *(_WORD *)(a4 + 408);
        *(_WORD *)(a3 + 2) = 2;
        v81 = *(_WORD *)(a4 + 2 * *(__int16 *)(a4 + 444) + 408);
        *(_WORD *)(a4 + 448) = v81;
        if ( v81 == 126 )
        {
          *(_WORD *)(a4 + 448) = 0;
        }
        else if ( v81 > 0 )
        {
          *(_WORD *)(a4 + 448) = -v81;
        }
        *(_WORD *)(a3 + 4) = *(_WORD *)(v8 + 2) * *(_WORD *)(a4 + 448);
        v82 = *(_WORD *)(a4 + 2 * *(__int16 *)(a4 + 440) + 408);
        *(_WORD *)(a4 + 448) = v82;
        if ( v82 == 126 )
        {
          *(_WORD *)(a4 + 448) = 0;
        }
        else if ( v82 > 0 )
        {
          *(_WORD *)(a4 + 448) = -v82;
          *(_BYTE *)(a3 + 2) |= 0x20u;
        }
        *(_WORD *)(a3 + 6) = *(_WORD *)(v8 + 2) * *(_WORD *)(a4 + 448);
        *(_WORD *)(a3 + 10) = v183;
        *(_DWORD *)(a3 + 12) = *(_DWORD *)(v8 + 24);
        *(_DWORD *)(a3 + 20) = 0;
        return 0;
      }
      *(_WORD *)(a4 + 442) = 1;
      *(_DWORD *)(a4 + 100) = *(_DWORD *)(a4 + 84);
      v183 = *v6;
      v8 = a4 + 68 * *(__int16 *)(a4 + 442) + 208;
      *(_WORD *)v8 = *v6;
      *(_WORD *)(v8 + 2) = v6[1];
      *(_WORD *)(v8 + 4) = v6[2];
      *(_WORD *)(v8 + 6) = v6[3];
      *(_WORD *)(v8 + 8) = v6[4];
      *(_WORD *)(v8 + 10) = v6[5];
      *(_DWORD *)(v8 + 12) = *((_DWORD *)v6 + 3);
      *(_DWORD *)(v8 + 16) = *((_DWORD *)v6 + 4);
      *(_DWORD *)(v8 + 20) = *((_DWORD *)v6 + 5);
      *(_DWORD *)(v8 + 24) = *((_DWORD *)v6 + 6);
    }
    v19 = *(_WORD *)(*((_DWORD *)v6 + 7)
                   + 2
                   * ((*v16 - *(_DWORD *)(v8 + 12)) / 320
                    + *(unsigned __int16 *)(v8 + 4) * ((*(_DWORD *)(a4 + 104) - *(_DWORD *)(v8 + 16)) / 320)));
    *(_WORD *)(a4 + 446) = v19;
    *(_WORD *)(a3 + 8) = v19 & 0xF000;
    *(_WORD *)(a4 + 446) &= 0xFFFu;
    *(_DWORD *)(a4 + 80) = *v16 % 320;
    *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 104) % 320;
    *v16 -= *(_DWORD *)(a4 + 80);
    *(_DWORD *)(a4 + 104) -= *(_DWORD *)(a4 + 88);
    v20 = *(_DWORD *)(a4 + 80);
    if ( *(__int16 *)(a4 + 196) <= 0 )
      v21 = v20 - *(_DWORD *)(a4 + 80) % 40 - 1;
    else
      v21 = v20 - *(_DWORD *)(a4 + 80) % 40 + 40;
    *(_DWORD *)(a4 + 24) = v21;
    v22 = *(_DWORD *)(a4 + 88);
    if ( *(__int16 *)(a4 + 198) <= 0 )
      v23 = v22 - *(_DWORD *)(a4 + 88) % 40 - 1;
    else
      v23 = v22 - *(_DWORD *)(a4 + 88) % 40 + 40;
    *(_DWORD *)(a4 + 28) = v23;
    *(_DWORD *)(a4 + 32) = *(_DWORD *)(a4 + 80) + ((*(_DWORD *)(a4 + 204) * (v23 - *(_DWORD *)(a4 + 88))) >> 12);
    *(_DWORD *)(a4 + 40) = *(_DWORD *)(a4 + 28);
    *(_DWORD *)(a4 + 48) = *(_DWORD *)(a4 + 24);
    *(_DWORD *)(a4 + 56) = *(_DWORD *)(a4 + 88)
                         + ((*(_DWORD *)(a4 + 200) * (*(_DWORD *)(a4 + 24) - *(_DWORD *)(a4 + 80))) >> 12);
    while ( 1 )
    {
      *(_WORD *)(a4 + 2 * (__int16)++*(_WORD *)(a4 + 440) + 408) = *(char *)(*(_DWORD *)(a4 + 80) / 40
                                                                           + *((_DWORD *)v6 + 8)
                                                                           + 8
                                                                           * (*(_DWORD *)(a4 + 88) / 40
                                                                            + 8 * *(unsigned __int16 *)(a4 + 446)));
      v25 = *(__int16 *)(a4 + 440);
      *(_DWORD *)(a4 + 4 * v25 + 344) = v8;
      v24 = *(_WORD *)(a4 + 440);
      LOWORD(v25) = *(_WORD *)(a4 + 2 * v24 + 408);
      if ( (_WORD)v25 == 126 )
      {
        LOWORD(v25) = 0;
      }
      else if ( (__int16)v25 > 0 && (__int16)v25 < 126 )
      {
        v25 = -v25;
      }
      if ( v24 == 15 )
      {
        *(_WORD *)(a4 + 408) = *(_WORD *)(a4 + 432);
        v26 = *(__int16 *)(a4 + 440);
        *(_WORD *)(a4 + 410) = *(_WORD *)(a4 + 2 * v26 + 404);
        *(_WORD *)(a4 + 412) = *(_WORD *)(a4 + 2 * v26 + 406);
        *(_WORD *)(a4 + 414) = *(_WORD *)(a4 + 2 * v26 + 408);
        *(_DWORD *)(a4 + 344) = *(_DWORD *)(a4 + 4 * v26 + 332);
        *(_DWORD *)(a4 + 348) = *(_DWORD *)(a4 + 4 * v26 + 336);
        *(_DWORD *)(a4 + 352) = *(_DWORD *)(a4 + 4 * v26 + 340);
        *(_DWORD *)(a4 + 356) = *(_DWORD *)(a4 + 4 * v26 + 344);
        *(_WORD *)(a4 + 440) = 3;
      }
      if ( (_WORD)v25 == 127 && *(__int16 *)(a4 + 440) > 1
        || *(_DWORD *)(v8 + 20) + *(unsigned __int16 *)(v8 + 2) * (__int16)v25 - *(_DWORD *)(a4 + 4) < -100 )
      {
        v83 = *(_WORD *)(a4 + 440);
        if ( v83 >= 1 )
          *(_WORD *)(a4 + 440) = v83 - 1;
        v84 = *(_DWORD *)(a4 + 4 * *(__int16 *)(a4 + 440) + 344);
        a1[1] = *(_DWORD *)(v84 + 20);
        *(_DWORD *)(a4 + 96) = *(_DWORD *)(a4 + 112) - *(_DWORD *)a4;
        *(_DWORD *)(a4 + 104) = *(_DWORD *)(a4 + 120) - *(_DWORD *)(a4 + 8);
        v85 = *(_DWORD *)(a4 + 16);
        v86 = *(_DWORD *)(a4 + 96);
        if ( v85 <= 0 )
        {
          if ( v86 > v85 )
            goto LABEL_103;
        }
        else if ( v86 < v85 )
        {
LABEL_103:
          *(_DWORD *)(a4 + 16) = v86;
        }
        v87 = *(_DWORD *)(a4 + 20);
        v88 = *(_DWORD *)(a4 + 104);
        if ( v87 <= 0 )
        {
          if ( v88 > v87 )
            goto LABEL_108;
        }
        else if ( v88 < v87 )
        {
LABEL_108:
          *(_DWORD *)(a4 + 20) = v88;
        }
        *a2 = *(_DWORD *)(a4 + 16);
        a2[2] = *(_DWORD *)(a4 + 20);
        v89 = a3;
        *(_WORD *)a3 = *(_WORD *)(a4 + 408);
        if ( *(_WORD *)(a4 + 440) == 14 )
          *(_WORD *)(a3 + 2) = 2;
        else
          *(_WORD *)(a3 + 2) = 22;
        v90 = *(_WORD *)(a4 + 2 * *(__int16 *)(a4 + 440) + 408);
        *(_WORD *)(a4 + 448) = v90;
        if ( v90 == 126 )
        {
          *(_WORD *)(a4 + 448) = 0;
          *(_WORD *)(a3 + 2) = 28;
          goto LABEL_264;
        }
LABEL_262:
        if ( v90 > 0 )
        {
          *(_WORD *)(a4 + 448) = -v90;
          *(_BYTE *)(v89 + 2) |= 0x20u;
        }
        goto LABEL_264;
      }
      v27 = *(_WORD *)(a4 + 168);
      *(_DWORD *)(a4 + 112) = *(_DWORD *)(a4 + 80) + *(_DWORD *)(a4 + 96);
      v28 = *(_DWORD *)(a4 + 104);
      v29 = *(_DWORD *)(a4 + 88);
      *(_WORD *)(a4 + 172) = v27;
      v30 = v29 + v28;
      LOWORD(v29) = *(_WORD *)(a4 + 170);
      *(_DWORD *)(a4 + 120) = v30;
      LOWORD(v30) = *(_WORD *)(a4 + 96) - *(_WORD *)a4;
      v31 = *(_DWORD *)(a4 + 32);
      v32 = *(_WORD *)(a4 + 88) + *(_WORD *)(a4 + 104) - *(_WORD *)(a4 + 8);
      *(_WORD *)(a4 + 174) = v29;
      LOWORD(v30) = *(_WORD *)(a4 + 80) + v30;
      *(_WORD *)(a4 + 170) = v32;
      v33 = *(_DWORD *)(a4 + 80);
      v34 = v33 - *(_DWORD *)(a4 + 48);
      v35 = v33 - v31;
      v36 = *(_DWORD *)(a4 + 88);
      *(_DWORD *)(a4 + 72) = v34;
      v37 = *(_DWORD *)(a4 + 56);
      *(_WORD *)(a4 + 168) = v30;
      v38 = v36 - *(_DWORD *)(a4 + 40);
      *(_DWORD *)(a4 + 64) = v35;
      *(_DWORD *)(a4 + 68) = v38;
      *(_DWORD *)(a4 + 76) = v36 - v37;
      v39 = SquareRoot0(v38 * v38 + v35 * v35);
      v40 = *(_DWORD *)(a4 + 76);
      *(_DWORD *)(a4 + 176) = v39;
      v41 = SquareRoot0(v40 * v40 + *(_DWORD *)(a4 + 72) * *(_DWORD *)(a4 + 72));
      v42 = *(_DWORD *)(a4 + 176);
      *(_DWORD *)(a4 + 180) = v41;
      if ( v42 >= v41 )
      {
        v48 = *(_DWORD *)(a4 + 16);
        v49 = *(__int16 *)(a4 + 168);
        if ( v48 <= 0 )
          v50 = v48 < v49;
        else
          v50 = v48 > v49;
        if ( v50 )
        {
          v51 = *(_DWORD *)(a4 + 52);
          *(_DWORD *)(a4 + 80) = *(_DWORD *)(a4 + 48);
          v52 = *(_DWORD *)(a4 + 56);
          *(_DWORD *)(a4 + 84) = v51;
          *(_DWORD *)(a4 + 88) = v52;
          v53 = *(__int16 *)(a4 + 196) + *(_DWORD *)(a4 + 24);
          *(_DWORD *)(a4 + 24) = v53;
          *(_DWORD *)(a4 + 48) = v53;
          *(_DWORD *)(a4 + 56) = v52 + ((*(__int16 *)(a4 + 196) * *(_DWORD *)(a4 + 200)) >> 12);
        }
        else
        {
          *(_WORD *)(a4 + 170) = *(_WORD *)(a4 + 20);
        }
      }
      else
      {
        v43 = *(_DWORD *)(a4 + 20);
        v44 = *(__int16 *)(a4 + 170);
        if ( v43 <= 0 )
          v45 = v43 < v44;
        else
          v45 = v43 > v44;
        if ( v45 )
        {
          v46 = *(_DWORD *)(a4 + 36);
          *(_DWORD *)(a4 + 80) = *(_DWORD *)(a4 + 32);
          *(_DWORD *)(a4 + 84) = v46;
          *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 40);
          v47 = *(__int16 *)(a4 + 198) + *(_DWORD *)(a4 + 28);
          *(_DWORD *)(a4 + 28) = v47;
          *(_DWORD *)(a4 + 40) = v47;
          *(_DWORD *)(a4 + 32) += (*(__int16 *)(a4 + 198) * *(_DWORD *)(a4 + 204)) >> 12;
        }
        else
        {
          *(_WORD *)(a4 + 168) = *(_WORD *)(a4 + 16);
        }
      }
      v54 = *(_WORD *)(a4 + 16) + *(_WORD *)a4;
      *(_WORD *)(a4 + 448) = v54;
      v55 = *(_WORD *)(a4 + 80) + *(_WORD *)(a4 + 96);
      *(_WORD *)(a4 + 450) = *(_WORD *)(a4 + 8) + *(_WORD *)(a4 + 20);
      v56 = *(_WORD *)(a4 + 88) + *(_WORD *)(a4 + 104);
      *(_WORD *)(a4 + 452) = v55;
      *(_WORD *)(a4 + 454) = v56;
      if ( *(int *)(a4 + 16) >= 0 )
      {
        if ( v55 > v54 )
          *(_DWORD *)(a4 + 80) += v54 - v55;
      }
      else if ( v55 < v54 )
      {
        *(_DWORD *)(a4 + 80) += v54 - v55;
      }
      v57 = *(_WORD *)(a4 + 450);
      v58 = *(_WORD *)(a4 + 454);
      if ( *(int *)(a4 + 20) >= 0 )
      {
        if ( v58 <= v57 )
          goto LABEL_64;
      }
      else if ( v58 >= v57 )
      {
        goto LABEL_64;
      }
      *(_DWORD *)(a4 + 88) += v57 - v58;
LABEL_64:
      if ( *(_DWORD *)(a4 + 80) >= 0x140u || *(_DWORD *)(a4 + 88) >= 0x140u )
        break;
      v59 = *(_DWORD *)(a4 + 16);
      v60 = *(__int16 *)(a4 + 168);
      v61 = v59 <= 0 ? v59 < v60 : v59 > v60;
      if ( !v61 )
      {
        v62 = *(_DWORD *)(a4 + 20);
        v63 = *(__int16 *)(a4 + 170);
        if ( v62 <= 0 )
          v61 = v62 < v63;
        else
          LOBYTE(v61) = v62 > v63;
        if ( !v61 )
          break;
      }
    }
    v64 = *(_DWORD *)a4 - *(_DWORD *)(a4 + 144);
    v65 = *(_DWORD *)(a4 + 8);
    *(_DWORD *)(a4 + 136) = *(_DWORD *)a4 - *(_DWORD *)(a4 + 152);
    v66 = v65;
    v67 = v65 - *(_DWORD *)(a4 + 156);
    v68 = v66 - *(_DWORD *)(a4 + 148);
    *(_DWORD *)(a4 + 128) = v64;
    *(_DWORD *)(a4 + 132) = v68;
    *(_DWORD *)(a4 + 140) = v67;
    v69 = SquareRoot0(v68 * v68 + v64 * v64);
    v70 = *(_DWORD *)(a4 + 140);
    *(_DWORD *)(a4 + 184) = v69;
    v71 = SquareRoot0(v70 * v70 + *(_DWORD *)(a4 + 136) * *(_DWORD *)(a4 + 136));
    v72 = *(_DWORD *)(a4 + 184);
    *(_DWORD *)(a4 + 188) = v71;
    if ( v72 >= v71 )
    {
      *(_DWORD *)(a4 + 96) = *(_DWORD *)(a4 + 152);
      *(_DWORD *)(a4 + 104) = *(_DWORD *)(a4 + 156);
      v74 = *(__int16 *)(a4 + 192) + *(_DWORD *)(a4 + 160);
      *(_DWORD *)(a4 + 160) = v74;
      *(_DWORD *)(a4 + 152) = v74;
      *(_DWORD *)(a4 + 156) += (*(__int16 *)(a4 + 192) * *(_DWORD *)(a4 + 200)) >> 12;
    }
    else
    {
      *(_DWORD *)(a4 + 96) = *(_DWORD *)(a4 + 144);
      *(_DWORD *)(a4 + 104) = *(_DWORD *)(a4 + 148);
      v73 = *(__int16 *)(a4 + 194) + *(_DWORD *)(a4 + 164);
      *(_DWORD *)(a4 + 164) = v73;
      *(_DWORD *)(a4 + 148) = v73;
      *(_DWORD *)(a4 + 144) += (*(__int16 *)(a4 + 194) * *(_DWORD *)(a4 + 204)) >> 12;
    }
    v75 = *(_DWORD *)(a4 + 16);
    v76 = *(__int16 *)(a4 + 168);
    if ( v75 <= 0 )
      v77 = v75 < v76;
    else
      v77 = v75 > v76;
    if ( !v77 )
    {
      v78 = *(_DWORD *)(a4 + 20);
      v79 = *(__int16 *)(a4 + 170);
      if ( v78 <= 0 )
        v77 = v78 < v79;
      else
        LOBYTE(v77) = v78 > v79;
      if ( !v77 )
        break;
    }
  }
  v91 = *(_WORD *)(a4 + 440);
  if ( v91 >= 1 )
    --v91;
  *(_WORD *)(a4 + 444) = v91;
  v92 = *(_WORD *)(a4 + 440);
  v93 = *(_DWORD *)(a4 + 4 * v92 + 344);
  if ( *(_WORD *)(a4 + 2 * v92 + 408) != 126 )
  {
    a1[1] = *(_DWORD *)(v93 + 20);
    v94 = a3;
    *(_WORD *)a3 = *(_WORD *)(a4 + 408);
    v99 = *(_WORD *)(a4 + 2 * *(__int16 *)(a4 + 444) + 408);
    *(_WORD *)(a4 + 448) = v99;
    if ( v99 == 126 )
    {
      *(_WORD *)(a4 + 448) = 0;
      *(_WORD *)(a3 + 2) = 8;
    }
    else
    {
      *(_WORD *)(a3 + 2) = 2;
      v100 = *(_WORD *)(a4 + 448);
      if ( v100 > 0 )
        *(_WORD *)(a4 + 448) = -v100;
    }
    *(_WORD *)(a3 + 4) = *(_WORD *)(v93 + 2) * *(_WORD *)(a4 + 448);
    v101 = *(_WORD *)(a4 + 2 * *(__int16 *)(a4 + 440) + 408);
    *(_WORD *)(a4 + 448) = v101;
    if ( v101 > 0 )
    {
      *(_WORD *)(a4 + 448) = -v101;
      *(_BYTE *)(a3 + 2) |= 0x20u;
    }
    *(_WORD *)(a3 + 6) = *(_WORD *)(v93 + 2) * *(_WORD *)(a4 + 448);
    goto LABEL_133;
  }
  if ( v92 < 0 )
    *(_WORD *)(a4 + 440) = 0;
  v180 = *(_WORD *)(a4 + 2 * *(__int16 *)(a4 + 440) + 408) == 126;
  a1[1] = *(_DWORD *)(v93 + 20);
  v94 = a3;
  *(_WORD *)a3 = *(_WORD *)(a4 + 408);
  if ( v180 )
  {
    *(_WORD *)(a3 + 2) = 8;
    *(_WORD *)(a3 + 4) = 0;
    *(_WORD *)(a3 + 6) = 0;
LABEL_133:
    *(_WORD *)(v94 + 10) = *(_WORD *)v93;
    v102 = *(_DWORD *)(v93 + 24);
    *(_DWORD *)(v94 + 20) = v93;
    *(_DWORD *)(v94 + 12) = v102;
    return 1;
  }
  v95 = *(_WORD *)(a4 + 2 * *(__int16 *)(a4 + 444) + 408);
  *(_WORD *)(a4 + 448) = v95;
  if ( v95 == 126 )
  {
    *(_WORD *)(a4 + 448) = 0;
    *(_WORD *)(a3 + 2) = 8;
  }
  else
  {
    *(_WORD *)(a3 + 2) = 2;
    v96 = *(_WORD *)(a4 + 448);
    if ( v96 > 0 )
    {
      *(_WORD *)(a4 + 448) = -v96;
      *(_BYTE *)(a3 + 2) |= 0x20u;
    }
  }
  v97 = *(_WORD *)(a4 + 448) * *(_WORD *)(v93 + 2);
  *(_WORD *)(a4 + 448) = v97;
  *(_WORD *)(a3 + 4) = v97;
  *(_WORD *)(a3 + 6) = *(_WORD *)(a4 + 448);
  *(_WORD *)(a3 + 10) = *(_WORD *)v93;
  v98 = *(_DWORD *)(v93 + 24);
  *(_DWORD *)(a3 + 20) = v93;
  *(_DWORD *)(a3 + 12) = v98;
  return 1;
}

// 0x436cd0  sub_436CD0
unsigned __int16 *__cdecl sub_436CD0(int *a1, __int16 a2)
{
  int v2; // esi
  int v3; // ebp
  int v4; // edi
  unsigned __int16 *result; // eax
  int v6; // ecx
  int v7; // ecx
  int i; // edx
  int v9; // ecx
  int v10; // ecx
  int v11; // [esp+14h] [ebp+4h]

  v2 = *a1;
  v3 = a1[1];
  v4 = a1[2];
  v11 = v3;
  if ( a2 >= 0 && (result = (unsigned __int16 *)dword_4B3C60[a2]) != NULL )
  {
    while ( 1 )
    {
      if ( v3 <= *((_DWORD *)result + 5) && v3 > *((_DWORD *)result + 6) )
      {
        v6 = *((_DWORD *)result + 3);
        if ( v2 >= v6 && v2 < v6 + result[4] )
        {
          v7 = *((_DWORD *)result + 4);
          if ( v4 >= v7 && v4 < v7 + result[5] )
            break;
        }
      }
      result += 34;
      if ( *result != a2 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    result = (unsigned __int16 *)dword_4B3DA0;
    for ( i = 0; (__int16)i < dword_4B3D74; ++i )
    {
      if ( v3 <= *((_DWORD *)result + 5) && v3 > *((_DWORD *)result + 6) )
      {
        v9 = *((_DWORD *)result + 3);
        if ( v2 >= v9 )
        {
          if ( v2 < v9 + result[4] )
          {
            v10 = *((_DWORD *)result + 4);
            if ( v4 >= v10 && v4 < v10 + result[5] )
              return result;
          }
          v3 = v11;
        }
      }
      result += 34;
    }
    return NULL;
  }
  return result;
}

// 0x436d90  sub_436D90
_DWORD *__cdecl sub_436D90(_DWORD *a1, int a2, int a3)
{
  int *v3; // ebp
  unsigned __int16 *v4; // ecx
  _DWORD *result; // eax
  __int16 v6; // ax
  __int64 v7; // rax
  int v8; // ebx
  __int16 v9; // ax
  __int16 v10; // ax
  __int16 v11; // ax

  v3 = (int *)(a3 + 16);
  *(_DWORD *)(a3 + 16) = *a1;
  *(_DWORD *)(a3 + 20) = a1[1];
  *(_DWORD *)(a3 + 24) = a1[2];
  v4 = sub_436CD0((int *)(a3 + 16), *(_WORD *)(a2 + 10));
  result = NULL;
  *(_DWORD *)(a2 + 20) = v4;
  if ( v4 == NULL )
  {
    *(_WORD *)a2 = 1;
    *(_WORD *)(a2 + 2) = 1;
    *(_WORD *)(a2 + 4) = 0;
    *(_WORD *)(a2 + 6) = 0;
    *(_WORD *)(a2 + 8) = 0;
    *(_WORD *)(a2 + 10) = -1;
    return result;
  }
  v6 = *(_WORD *)(*((_DWORD *)v4 + 7)
                + 2 * ((*v3 - *((_DWORD *)v4 + 3)) / 320 + v4[2] * ((*(_DWORD *)(a3 + 24) - *((_DWORD *)v4 + 4)) / 320)));
  *(_WORD *)(a3 + 34) = v6;
  *(_WORD *)(a2 + 8) = v6 & 0xF000;
  v7 = *v3;
  *(_WORD *)(a3 + 34) &= 0xFFFu;
  HIDWORD(v7) = v7 % 320;
  LODWORD(v7) = *(_DWORD *)(a3 + 24);
  v8 = *(unsigned __int16 *)(a3 + 34);
  *(_DWORD *)a3 = HIDWORD(v7);
  *(_DWORD *)(a3 + 8) = (int)v7 % 320;
  v9 = *(char *)(SHIDWORD(v7) / 40 + *((_DWORD *)v4 + 8) + 8 * ((int)v7 % 320 / 40 + 8 * v8));
  *(_WORD *)(a3 + 32) = v9;
  if ( v9 == 126 )
  {
    result = a1;
    a1[1] = *((_DWORD *)v4 + 5);
    *(_WORD *)a2 = 0;
    *(_WORD *)(a2 + 2) = 8;
LABEL_7:
    *(_WORD *)(a2 + 4) = 0;
    *(_WORD *)(a2 + 6) = 0;
    *(_WORD *)(a2 + 10) = *v4;
    *(_DWORD *)(a2 + 16) = result[1];
    return result;
  }
  if ( v9 == 127 )
  {
    result = a1;
    a1[1] = *((_DWORD *)v4 + 5);
    *(_WORD *)a2 = 0;
    *(_WORD *)(a2 + 2) = 6;
    goto LABEL_7;
  }
  a1[1] = *((_DWORD *)v4 + 5);
  *(_WORD *)a2 = *(_WORD *)(a3 + 32);
  *(_WORD *)(a2 + 2) = 2;
  v10 = *(_WORD *)(a3 + 32);
  if ( v10 > 0 )
  {
    *(_WORD *)(a3 + 32) = -v10;
    *(_BYTE *)(a2 + 2) |= 0x20u;
  }
  v11 = *(_WORD *)(a3 + 32) * v4[1];
  *(_WORD *)(a3 + 32) = v11;
  *(_WORD *)(a2 + 4) = v11;
  *(_WORD *)(a2 + 6) = *(_WORD *)(a3 + 32);
  *(_WORD *)(a2 + 10) = *v4;
  result = *((_DWORD **)v4 + 5);
  *(_DWORD *)(a2 + 16) = (char *)result + *(__int16 *)(a3 + 32);
  return result;
}

// 0x436f50  sub_436F50
char __cdecl sub_436F50(int a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // edi
  int v14; // ecx
  __int16 v15; // ax
  unsigned int v16; // ecx

  v3 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(a1 + 232);
  v5 = v4 + v3;
  if ( v4 + v3 >= v4 + 200 && (*(_BYTE *)(a1 + 20) & 1) == 0 )
  {
    if ( *(__int16 *)(a1 + 264) >= 3072 )
      *(_WORD *)(a1 + 264) = 3072;
    v6 = rsin(*(_WORD *)(a1 + 264) + 1024);
    *(_WORD *)(a1 + 264) += 68;
    v7 = 70 - ((-70 * v6) >> 12);
    v8 = *(_DWORD *)(a1 + 20);
    *(_WORD *)(a1 + 278) = v7;
    if ( (v8 & 0x10000) != 0 )
      v9 = *(_DWORD *)(a1 + 232) + 12;
    else
      v9 = *(_DWORD *)(a1 + 232) + (__int16)v7;
    if ( v5 <= v9 )
    {
      LOWORD(v10) = *(_WORD *)(a3 + 2);
      if ( (_WORD)v10 == 8 || (_WORD)v10 == 1 )
      {
        v11 = v8 & 0xFFFFFFFD;
        *(_DWORD *)(a1 + 20) = v11;
        if ( (v11 & 4) == 0 )
        {
          BYTE1(v11) |= 2u;
          *(_DWORD *)(a1 + 20) = v11;
        }
      }
      else
      {
        *(_WORD *)(a1 + 270) = *(_WORD *)(a3 + 8);
        *(_WORD *)(a1 + 264) = 2048;
        *(_DWORD *)(a1 + 20) = v8 & 0xFFFEFDFD | 2;
      }
      goto LABEL_39;
    }
    if ( (v8 & 0x10000) != 0 )
      *(_DWORD *)(a2 + 4) = 12;
    else
      *(_DWORD *)(a2 + 4) = *(__int16 *)(a1 + 278);
    v10 = *(_DWORD *)(a1 + 20) & 0xFFFFFFFD;
    *(_DWORD *)(a1 + 20) = v10;
    if ( (v10 & 4) != 0 )
      goto LABEL_39;
LABEL_38:
    BYTE1(v10) |= 2u;
    *(_DWORD *)(a1 + 20) = v10;
    goto LABEL_39;
  }
  v12 = *(_DWORD *)(a1 + 20);
  if ( (v12 & 1) == 0 )
  {
    if ( (v12 & 2) != 0 )
    {
      if ( v3 <= 0 )
      {
        if ( v3 > -70 && (v3 & 0xFFFFFFFE) != 0 )
          *(_DWORD *)(a2 + 4) = v3 >> 1;
      }
      else if ( (v3 & 0xFFFFFFFE) != 0 )
      {
        *(_DWORD *)(a2 + 4) = v3 >> 1;
      }
    }
    else if ( (v12 & 4) == 0 )
    {
      if ( v3 <= 70 )
      {
        if ( v3 < -70 )
          *(_DWORD *)(a2 + 4) = -70;
      }
      else
      {
        *(_DWORD *)(a2 + 4) = 70;
      }
    }
  }
  v13 = *(_DWORD *)(a1 + 232);
  v14 = *(__int16 *)(a1 + 268);
  *(_WORD *)(a1 + 278) = *(_WORD *)(a2 + 4);
  if ( v13 + *(_DWORD *)(a2 + 4) == *(_DWORD *)(a1 + 256) + v14 )
  {
    v15 = *(_WORD *)(a3 + 2);
    if ( v15 != 8 && v15 != 1 )
    {
      LOWORD(v10) = *(_WORD *)(a3 + 8);
      v16 = *(_DWORD *)(a1 + 20) & 0xFFFEFDFF;
      *(_WORD *)(a1 + 270) = v10;
      *(_WORD *)(a1 + 264) = 2048;
      *(_DWORD *)(a1 + 20) = v16 | 2;
      goto LABEL_39;
    }
  }
  v10 = *(_DWORD *)(a1 + 20);
  if ( (v10 & 2) == 0 )
  {
    LOBYTE(v10) = v10 & 0xFD;
    *(_DWORD *)(a1 + 20) = v10;
    if ( (v10 & 5) == 0 )
      goto LABEL_38;
  }
LABEL_39:
  if ( (*(_BYTE *)(a1 + 20) & 4) != 0 )
    *(_DWORD *)(a2 + 4) = v3;
  return v10;
}

// 0x437160  sub_437160
int __cdecl sub_437160(int a1, int a2, int a3, int a4)
{
  _DWORD *v5; // ebp
  __int16 v6; // cx
  int v7; // ecx
  int v8; // eax
  __int16 v9; // cx
  int v10; // edx
  int v11; // edx
  int v12; // eax
  int result; // eax
  int v14; // [esp+20h] [ebp+10h]

  v5 = (_DWORD *)(a1 + 228);
  *(_DWORD *)a4 = *(_DWORD *)(a1 + 228);
  *(_DWORD *)(a4 + 4) = *(_DWORD *)(a1 + 232);
  *(_DWORD *)(a4 + 8) = *(_DWORD *)(a1 + 236);
  v6 = *(_WORD *)(a1 + 266);
  v14 = a4 + 32;
  if ( v6 < 0 )
    *(_DWORD *)(a1 + 232) += v6;
  *(_DWORD *)(a4 + 16) = *(_DWORD *)(a1 + 232);
  *(_WORD *)(a4 + 24) = *(_WORD *)a2;
  *(_WORD *)(a4 + 26) = *(_WORD *)(a2 + 8);
  sub_434E40(v5, (_DWORD *)a2, a3, a4 + 32);
  *(_DWORD *)(a4 + 12) = *(_DWORD *)a2;
  *(_DWORD *)(a4 + 20) = *(_DWORD *)(a2 + 8);
  v7 = *(_DWORD *)(a1 + 236);
  *v5 += *(_DWORD *)a2;
  v8 = a3;
  *(_DWORD *)(a1 + 236) = *(_DWORD *)(a2 + 8) + v7;
  v9 = *(_WORD *)(a3 + 2);
  if ( (v9 & 0x10) != 0 )
  {
    v10 = *(__int16 *)(a4 + 24);
    *(_WORD *)(a4 + 26) -= *(_WORD *)(a2 + 8);
    v11 = v10 - *(_DWORD *)a2;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)a2 = v11;
    *(_DWORD *)(a1 + 232) = *(_DWORD *)(a4 + 16);
    sub_434E40(v5, (_DWORD *)a2, a3, v14);
    if ( *(_DWORD *)a2 != 0 )
    {
      *(_DWORD *)(a4 + 12) += *(_DWORD *)a2;
      *v5 += *(_DWORD *)a2;
    }
    else
    {
      *(_WORD *)(a1 + 272) = 0;
    }
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 8) = *(__int16 *)(a4 + 26);
    *(_DWORD *)(a1 + 232) = *(_DWORD *)(a4 + 16);
    sub_434E40(v5, (_DWORD *)a2, a3, v14);
    v12 = *(_DWORD *)(a2 + 8);
    if ( v12 != 0 )
    {
      *(_DWORD *)(a4 + 20) += v12;
      *(_DWORD *)(a1 + 236) += *(_DWORD *)(a2 + 8);
    }
    else
    {
      *(_WORD *)(a1 + 274) = 0;
    }
    v8 = a3;
  }
  else if ( (v9 & 4) != 0 )
  {
    *(_WORD *)(a1 + 272) = 0;
    *(_WORD *)(a1 + 274) = 0;
    *(_DWORD *)(a1 + 20) |= 0x100000u;
  }
  if ( (*(_BYTE *)(v8 + 2) & 8) != 0 && (a1 == dword_4B324C || (*(_BYTE *)(a1 + 20) & 1) == 0) )
  {
    ++*(_DWORD *)(a1 + 232);
    *(_WORD *)(a4 + 28) = *(_WORD *)(v8 + 10);
    sub_436D90(v5, v8, v14);
    *(_WORD *)(a3 + 10) = *(_WORD *)(a4 + 28);
    v8 = a3;
  }
  *(_DWORD *)(a1 + 256) = *(_DWORD *)(a1 + 232);
  *(_WORD *)(a1 + 268) = *(_WORD *)(v8 + 6);
  *v5 = *(_DWORD *)a4;
  *(_DWORD *)(a1 + 232) = *(_DWORD *)(a4 + 4);
  result = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(a1 + 236) = result;
  *(_DWORD *)a2 = *(_DWORD *)(a4 + 12);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a4 + 20);
  return result;
}

// 0x437360  sub_437360
_DWORD *__cdecl sub_437360(int a1, _DWORD *a2, int a3, int a4)
{
  int v6; // esi
  int v7; // eax
  int v8; // ebp
  _DWORD *result; // eax
  int v10; // edi
  __int16 v11; // cx
  int v12; // [esp+14h] [ebp+4h]
  int v13; // [esp+20h] [ebp+10h]

  v13 = a4 + 40;
  v6 = *(_DWORD *)(a1 + 256) + *(__int16 *)(a1 + 268);
  v7 = *(_DWORD *)(a1 + 20);
  v12 = v6;
  if ( (v7 & 1) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 232) + *(__int16 *)(a1 + 266);
    if ( *(__int16 *)(a1 + 264) > 2048 )
    {
      v11 = *(_WORD *)(a3 + 2);
      if ( v8 <= v6 || v11 == 8 )
      {
        if ( v11 == 8 || v11 == 1 )
          ++*(_DWORD *)(a1 + 256);
        if ( v8 < v6 )
        {
          v12 = v8;
          goto LABEL_12;
        }
      }
    }
    else if ( *(__int16 *)(a1 + 82) + v8 >= *(_DWORD *)(a3 + 12) )
    {
      if ( v8 < v6 )
      {
        v12 = *(_DWORD *)(a1 + 232) + *(__int16 *)(a1 + 266);
        goto LABEL_12;
      }
    }
    else if ( v8 <= v6 )
    {
      *(_DWORD *)a4 = *a2 + *(_DWORD *)(a1 + 228);
      *(_DWORD *)(a4 + 4) = *(_DWORD *)(a3 + 12) - 1;
      *(_DWORD *)(a4 + 8) = a2[2] + *(_DWORD *)(a1 + 236);
      *(_WORD *)(a4 + 26) = -1;
      sub_436D90((_DWORD *)a4, a4 + 16, v13);
      if ( (*(_BYTE *)(a4 + 18) & 8) == 0 )
      {
        v12 = *(_DWORD *)(a3 + 12) - *(__int16 *)(a1 + 82);
        if ( v12 > v6 )
          v12 = v6;
        goto LABEL_12;
      }
      if ( v8 < v6 )
      {
        v12 = v8;
LABEL_12:
        result = (_DWORD *)(v12 - *(_DWORD *)(a1 + 232));
        a2[1] = result;
        return result;
      }
      v7 = *(_DWORD *)(a1 + 20);
    }
    LOBYTE(v7) = v7 & 0xF6;
    *(_DWORD *)(a1 + 20) = v7;
    goto LABEL_12;
  }
  if ( (v7 & 4) != 0 )
  {
    result = a2;
    v10 = *(_DWORD *)(a1 + 232);
    if ( v6 < a2[1] + v10 )
      a2[1] = v6 - v10;
  }
  else
  {
    result = (_DWORD *)a3;
    if ( (*(_BYTE *)(a3 + 2) & 1) != 0 )
    {
      a2[1] = 200;
    }
    else
    {
      result = *(_DWORD **)(a1 + 232);
      a2[1] = v6 - (_DWORD)result;
    }
  }
  return result;
}

// 0x437500  sub_437500
char __cdecl sub_437500(int a1, _DWORD *a2, int a3, int a4)
{
  __int16 v4; // ax

  *(_WORD *)(a3 + 10) = *(_WORD *)(a1 + 38);
  sub_437160(a1, (int)a2, a3, a4);
  if ( (*(_BYTE *)(a3 + 2) & 4) != 0 )
    *(_DWORD *)(a1 + 20) |= 0x100000u;
  v4 = *(_WORD *)(a3 + 10);
  if ( v4 != -1 )
    *(_WORD *)(a1 + 38) = v4;
  sub_437360(a1, a2, a3, a4);
  return sub_436F50(a1, (int)a2, a3);
}

// 0x437560  sub_437560
__int16 __cdecl sub_437560(int *a1)
{
  __int16 v1; // ax
  __int16 result; // ax
  __int16 v3[4]; // [esp+0h] [ebp-38h] BYREF
  int v4[4]; // [esp+8h] [ebp-30h] BYREF
  __int16 v5[16]; // [esp+18h] [ebp-20h] BYREF

  v3[1] = 0;
  v3[0] = 0;
  v3[2] = -100;
  RotMatrix((__int16 *)(dword_4B324C + 220), v5);
  ApplyMatrix(v5, v3, v4);
  dword_4B3964 = *a1;
  dword_4B38CC = dword_4B3964;
  dword_4B3968 = a1[1] - 400;
  dword_4B38D0 = dword_4B3968;
  dword_4B396C = a1[2];
  dword_4B38D4 = dword_4B396C;
  dword_4B3928 = v4[0] + *a1;
  dword_4B3954 = dword_4B3928;
  dword_4B38C0 = dword_4B3928;
  dword_4B3974 = dword_4B3928;
  dword_4B392C = a1[1] - 400;
  dword_4B3958 = dword_4B392C;
  dword_4B38C4 = dword_4B392C;
  dword_4B3978 = dword_4B392C;
  dword_4B3930 = a1[2] + v4[2];
  dword_4B395C = dword_4B3930;
  dword_4B38C8 = dword_4B3930;
  dword_4B397C = dword_4B3930;
  v1 = *(_WORD *)(dword_4B324C + 222);
  word_4B3DF0 = 0;
  result = v1 + 2048;
  LOBYTE(dword_4B3940) = dword_4B3940 | 0x40;
  word_4B3E2C = result;
  word_4B3E1A = result;
  return result;
}

// 0x437680  sub_437680
_DWORD *__cdecl sub_437680(int a1, int a2, _DWORD *a3)
{
  _DWORD *result; // eax
  int v4; // ecx
  int v5; // ecx
  int *v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // edi

  result = a3;
  v4 = *(_DWORD *)(a1 + 388);
  if ( v4 != 0 )
    a3[7] = *(unsigned __int16 *)(v4 + 6);
  else
    a3[7] = 0;
  v5 = *(_DWORD *)(a1 + 244);
  a3[3] = v5;
  a3[5] = a2;
  if ( v5 != 0 )
  {
    do
    {
      v6 = (int *)a3[3];
      if ( *((unsigned __int16 *)v6 + 2) == a2 )
        break;
      v7 = *v6;
      a3[3] = v7;
    }
    while ( v7 != 0 );
  }
  v8 = a3[3];
  *a3 = *(unsigned __int16 *)(v8 + 6) + *(_DWORD *)(a1 + 248);
  v9 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 384) = v8;
  *(_DWORD *)(a1 + 388) = *a3;
  *(_DWORD *)(a1 + 20) = v9 & 0xF9FFFDF6;
  if ( (*(_BYTE *)(*a3 + 8) & 0x40) == 0 || *(unsigned __int16 *)(*a3 + 6) != a3[7] )
  {
    *(_DWORD *)(a1 + 344) = 0;
    *(_WORD *)(a1 + 326) = 0;
    *(_BYTE *)(a1 + 332) = 0;
    *(_WORD *)(a1 + 380) = 0;
    *(_DWORD *)(a1 + 348) = 0;
  }
  return result;
}

// 0x437740  sub_437740
int __cdecl sub_437740(int *a1)
{
  int result; // eax
  __int16 *v2; // ebx
  bool v3; // zf
  _DWORD *v4; // edi
  int v5; // eax
  int v6; // edx
  __int16 v7; // cx
  int v8; // eax
  int v9; // edx
  int v10; // ecx

  result = *a1;
  v2 = (__int16 *)(a1 + 1);
  v3 = *a1 == 0;
  *((_WORD *)a1 + 2) = 0;
  *((_WORD *)a1 + 3) = 0;
  *((_WORD *)a1 + 4) = 0;
  if ( !v3 )
  {
    v4 = a1 + 3;
    do
    {
      gte_ApplyMatrix((__int16 *)(*a1 + 4), v2, a1 + 3);
      v5 = *a1;
      v6 = *a1;
      *v4 += *(_DWORD *)(*a1 + 24);
      v7 = *(_WORD *)v4;
      a1[4] += *(_DWORD *)(v5 + 28);
      v8 = *(_DWORD *)(v6 + 32);
      v9 = a1[5];
      *v2 = v7;
      v10 = *a1;
      a1[5] = v8 + v9;
      LOWORD(v8) = *((_WORD *)a1 + 10);
      *((_WORD *)a1 + 3) = *((_WORD *)a1 + 8);
      *((_WORD *)a1 + 4) = v8;
      result = *(_DWORD *)(v10 + 72);
      *a1 = result;
    }
    while ( result != 0 );
  }
  return result;
}

// 0x4377c0  sub_4377C0
__int16 *__cdecl sub_4377C0(_DWORD *a1)
{
  __int16 *result; // eax
  int v2; // eax

  result = (__int16 *)a1[30];
  if ( result != NULL && (a1[2] & 0x200000) == 0 )
  {
    v2 = a1[48];
    a1[31] = 0;
    TransMatrix(a1 + 32, (_DWORD *)(v2 + 24));
    RotMatrix((__int16 *)(a1[48] + 16), (_WORD *)a1 + 64);
    return ScaleMatrix((__int16 *)a1 + 64, (_DWORD *)a1[48]);
  }
  return result;
}

// 0x437820  sub_437820
_DWORD *__cdecl sub_437820(int a1)
{
  __int16 *v2; // [esp-8h] [ebp-10h]

  v2 = (__int16 *)(*(_DWORD *)(a1 + 68) + 16);
  *(_DWORD *)a1 = 0;
  RotMatrix(v2, (_WORD *)(a1 + 4));
  ScaleMatrix((__int16 *)(a1 + 4), *(_DWORD **)(a1 + 68));
  return TransMatrix((_DWORD *)(a1 + 4), (_DWORD *)(*(_DWORD *)(a1 + 68) + 24));
}

// 0x437860  sub_437860
int __cdecl sub_437860(int a1, _DWORD *a2, int a3)
{
  int result; // eax

  *(_DWORD *)a3 = a2[57] - *(_DWORD *)(a1 + 228);
  *(_DWORD *)(a3 + 4) = a2[58] - *(_DWORD *)(a1 + 232);
  *(_DWORD *)(a3 + 8) = a2[59] - *(_DWORD *)(a1 + 236);
  *(_DWORD *)(a3 + 16) = *(_DWORD *)(a1 + 228);
  *(_DWORD *)(a3 + 20) = *(_DWORD *)(a1 + 232);
  *(_DWORD *)(a3 + 24) = *(_DWORD *)(a1 + 236);
  *(_DWORD *)(a3 + 56) = 0;
  *(_WORD *)(a3 + 42) = *(_WORD *)(a1 + 38);
  sub_434E40((_DWORD *)(a3 + 16), (_DWORD *)a3, a3 + 32, a3 + 56);
  a2[57] = *(_DWORD *)(a1 + 228) + *(_DWORD *)a3;
  result = *(_DWORD *)(a1 + 236);
  a2[59] = result + *(_DWORD *)(a3 + 8);
  return result;
}

// 0x437910  sub_437910
int __cdecl sub_437910(int a1, int a2, int **a3)
{
  int result; // eax
  int *v4; // ecx
  int *v5; // ecx
  int *v6; // ecx
  int v7; // edx
  int *v8; // ecx
  int *v9; // ecx
  int *v10; // ecx
  int *v11; // ecx
  int *v12; // ecx
  int v13; // esi
  int v14; // eax
  int v15; // edx

  result = (int)a3;
  if ( (*(_DWORD *)(dword_4B324C + 20) & 0x1000000) == 0 )
  {
    v4 = *(int **)(dword_4B324C + 244);
    a3[3] = v4;
    if ( v4 != NULL )
    {
      do
      {
        v5 = a3[3];
        if ( *((unsigned __int16 *)v5 + 2) == a2 )
          break;
        v6 = (int *)*v5;
        a3[3] = v6;
      }
      while ( v6 != NULL );
    }
    v7 = *((unsigned __int16 *)a3[3] + 3);
    a3[2] = (int *)(unsigned __int16)v7;
    v8 = *(int **)(dword_4B324C + 248);
    *a3 = v8;
    if ( v8 != NULL )
    {
      do
      {
        if ( *((unsigned __int16 *)*a3 + 2) == v7 )
          break;
        v9 = (int *)**a3;
        *a3 = v9;
      }
      while ( v9 != NULL );
    }
    v10 = *(int **)(dword_4B324C + 252);
    a3[1] = v10;
    if ( v10 != NULL )
    {
      do
      {
        v11 = a3[1];
        if ( *((_WORD *)v11 + 2) == *((_WORD *)*a3 + 5) )
          break;
        v12 = (int *)*v11;
        a3[1] = v12;
      }
      while ( v12 != NULL );
    }
    *(_WORD *)(dword_4B324C + 380) = a2;
    *(_DWORD *)(dword_4B324C + 384) = a3[3];
    *(_DWORD *)(dword_4B324C + 388) = *a3;
    *(_DWORD *)(dword_4B324C + 392) = a3[1];
    *(_DWORD *)(dword_4B324C + 344) = 0;
    *(_DWORD *)(dword_4B324C + 104) = 0;
    if ( ((*a3)[4] & 0x800) != 0 )
      *(_DWORD *)(dword_4B324C + 20) &= 0xFFFFFDF6;
    result = dword_4B324C;
    *(_WORD *)(dword_4B324C + 382) = 0;
    *(_WORD *)(dword_4B324C + 224) = 0;
    v13 = *(_DWORD *)(dword_4B324C + 108);
    if ( v13 != 0 && *(_WORD *)(v13 + 44) != 34 )
    {
      v14 = *(_DWORD *)(v13 + 20);
      BYTE1(v14) = BYTE1(v14) & 0xE7 | 0x10;
      *(_DWORD *)(v13 + 196) = 0;
      *(_DWORD *)(v13 + 20) = v14;
      *(_DWORD *)(v13 + 192) = v13 + 204;
      *(_WORD *)(v13 + 38) = *(_WORD *)(a1 + 38);
      *(_WORD *)(v13 + 220) = *(_WORD *)(dword_4B324C + 220);
      *(_WORD *)(v13 + 222) = *(_WORD *)(dword_4B324C + 222);
      LOWORD(v14) = *(_WORD *)(dword_4B324C + 224);
      *(_DWORD *)(v13 + 112) = 0;
      *(_WORD *)(v13 + 224) = v14;
      *(_DWORD *)(dword_4B324C + 108) = 0;
      v15 = *(_DWORD *)(v13 + 192);
      *(_DWORD *)(v13 + 124) = 0;
      RotMatrix((__int16 *)(v15 + 16), (_WORD *)(v13 + 128));
      ScaleMatrix((__int16 *)(v13 + 128), *(_DWORD **)(v13 + 192));
      TransMatrix((_DWORD *)(v13 + 128), (_DWORD *)(*(_DWORD *)(v13 + 192) + 24));
      result = sub_437860(dword_4B324C, (_DWORD *)v13, (int)(a3 + 4));
    }
    word_4B3C20 = -1;
  }
  return result;
}

// 0x437b20  sub_437B20
__int16 __cdecl sub_437B20(int a1, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  __int16 result; // ax
  int v6[4]; // [esp+8h] [ebp-10h] BYREF

  v3 = dword_4B324C;
  if ( *(_DWORD *)(dword_4B324C + 112) != 0 )
  {
    *(_DWORD *)(dword_4B324C + 196) = 0;
    *(_DWORD *)(dword_4B324C + 192) = dword_4B324C + 204;
    *(_DWORD *)(*(_DWORD *)(dword_4B324C + 112) + 108) = dword_4B324C;
    v4 = dword_4B324C;
    if ( dword_4B324C != 0 )
    {
      *(_DWORD *)(*(_DWORD *)(dword_4B324C + 112) + 108) = 0;
      v4 = dword_4B324C;
    }
    *(_DWORD *)(v4 + 112) = 0;
    *(_DWORD *)(dword_4B324C + 20) &= 0xFFFFFFEB;
    v3 = dword_4B324C;
  }
  *(_DWORD *)(v3 + 228) = a1;
  result = a2;
  *(_DWORD *)(dword_4B324C + 232) = a2;
  *(_DWORD *)(dword_4B324C + 236) = a3;
  if ( (dword_4B3940 & 0x300) == 0 && (dword_4B3940 & 4) == 0 && *((char *)dword_52FD00 + 65654) <= 0 )
  {
    v6[1] = a2;
    v6[0] = a1;
    v6[2] = a3;
    result = sub_437560(v6);
  }
  LOBYTE(dword_4B3940) = dword_4B3940 & 0xFB;
  dword_4B3748 |= 1u;
  word_4B3C20 = -1;
  return result;
}

// 0x437c20  sub_437C20
void __cdecl sub_437C20(__int16 a1)
{
  int v1; // ecx
  char v2; // al

  v1 = dword_4B324C;
  v2 = byte_4B39D0;
  if ( (*(_DWORD *)(dword_4B324C + 20) & 0x10000) != 0 )
  {
    if ( (byte_4B39D0 & 8) != 0 )
      goto LABEL_7;
    byte_4B39D0 |= 8u;
    sub_41DF30(dword_4B324C, 13, 1, dword_4B2368);
  }
  else
  {
    if ( (byte_4B39D0 & 8) == 0 )
      goto LABEL_7;
    byte_4B39D0 &= ~8u;
    sub_41DF30(dword_4B324C, 13, 2, dword_4B2368);
  }
  v1 = dword_4B324C;
  v2 = byte_4B39D0;
LABEL_7:
  if ( (*(_BYTE *)(v1 + 24) & 4) == 0 )
  {
    if ( (v2 & 0x10) == 0 )
      return;
    goto LABEL_15;
  }
  if ( (*((_BYTE *)dword_52FD00 + 65547) & 0xF0) == 0 || a1 != 139 )
  {
    if ( (v2 & 0x10) == 0 )
      return;
LABEL_15:
    byte_4B39D0 = v2 & 0xEF;
    sub_41DF30(v1, 27, 2, dword_4B2368);
    return;
  }
  if ( (v2 & 0x10) == 0 )
  {
    byte_4B39D0 = v2 | 0x10;
    sub_41DF30(v1, 27, 1, dword_4B2368);
  }
}

// 0x437d00  sub_437D00
void __cdecl sub_437D00(__int16 a1, _DWORD *a2)
{
  int v2; // ecx
  int v3; // esi
  int v4; // eax
  int v5; // edx
  __int16 *v6; // edx

  byte_4B3242 = 0;
  byte_4B3241 = 0;
  dword_4B3160 = 0;
  word_4B3DAC = 0;
  *(_WORD *)(dword_4B324C + 382) = 0;
  *(_WORD *)(dword_4B324C + 380) = a1;
  *(_DWORD *)(dword_4B324C + 20) |= 0x1000004u;
  *(_DWORD *)(dword_4B324C + 20) &= ~0x10000u;
  v2 = dword_4B324C;
  word_4B3948 = 0;
  word_4B394C = 0;
  word_4B394E = 0;
  if ( *(_DWORD *)(dword_4B324C + 112) != 0 )
  {
    *(_DWORD *)(dword_4B324C + 196) = 0;
    *(_DWORD *)(dword_4B324C + 192) = dword_4B324C + 204;
    *(_DWORD *)(*(_DWORD *)(dword_4B324C + 112) + 108) = 0;
    *(_DWORD *)(dword_4B324C + 112) = 0;
    *(_DWORD *)(dword_4B324C + 20) &= 0xFFFFFFEB;
    v2 = dword_4B324C;
  }
  v3 = *(_DWORD *)(v2 + 108);
  if ( v3 != 0 )
  {
    if ( *(_WORD *)(v3 + 44) == 34 )
    {
      v4 = *(_DWORD *)(v3 + 20);
      BYTE1(v4) |= 1u;
      *(_DWORD *)(v3 + 20) = v4;
    }
    v5 = *(_DWORD *)(v3 + 20);
    *(_DWORD *)(v3 + 196) = 0;
    BYTE1(v5) = BYTE1(v5) & 0xE7 | 0x10;
    *(_DWORD *)(v3 + 192) = v3 + 204;
    *(_DWORD *)(v3 + 20) = v5;
    *(_DWORD *)(v3 + 112) = 0;
    *(_DWORD *)(dword_4B324C + 108) = 0;
    v6 = (__int16 *)(*(_DWORD *)(v3 + 192) + 16);
    *(_DWORD *)(v3 + 124) = 0;
    RotMatrix(v6, (_WORD *)(v3 + 128));
    ScaleMatrix((__int16 *)(v3 + 128), *(_DWORD **)(v3 + 192));
    TransMatrix((_DWORD *)(v3 + 128), (_DWORD *)(*(_DWORD *)(v3 + 192) + 24));
    v2 = dword_4B324C;
  }
  if ( a2 != NULL )
  {
    *(_DWORD *)(v2 + 228) = *a2;
    *(_DWORD *)(dword_4B324C + 232) = a2[1];
    *(_DWORD *)(dword_4B324C + 236) = a2[2];
    *(_WORD *)(dword_4B324C + 222) = 0;
    word_4B3E1A = 0;
    dword_4B38C0 = *a2;
    dword_4B38C4 = a2[1];
    dword_4B38C8 = a2[2];
    dword_4B38CC = *a2;
    dword_4B38D0 = a2[1];
    dword_4B38D4 = a2[2];
    word_4B3E2C = *(_WORD *)(dword_4B324C + 222) + 2048;
    word_4B3E1A = word_4B3E2C;
  }
  sub_437C20(0);
  word_4B3C20 = -1;
}

// 0x437f00  sub_437F00
int __cdecl sub_437F00(int a1, int a2)
{
  int v2; // ebx
  int v3; // eax
  bool v4; // zf
  int result; // eax
  __int16 v6; // dx
  int v7; // edx

  if ( dword_4B3160 > 0
    || word_4B39BC != 0
    || byte_4B3232 != 0
    || byte_4B2263 != 0
    || ((dword_4B3940 & 0x100) != 0 || *(int *)(dword_4B324C + 20) < 0) && (dword_4B3940 & 0x200) == 0 )
  {
    return 0;
  }
  if ( (*(_DWORD *)(dword_4B324C + 20) & 0x1000000) != 0 )
    return 0;
  v2 = *(_DWORD *)(a1 + 20);
  BYTE1(v2) |= 0x80u;
  *(_DWORD *)(a1 + 20) = v2;
  v3 = *(_DWORD *)(dword_4B324C + 388);
  if ( v3 == 0 || (*(_DWORD *)(v3 + 12) & 0x4000) == 0 )
    return 0;
  *(_DWORD *)(dword_4B324C + 52) = *(unsigned __int16 *)(a1 + 28);
  v4 = *(_WORD *)(a1 + 44) == 31;
  result = 1;
  *(_DWORD *)(a1 + 52) = 1;
  if ( v4 )
  {
    *(_WORD *)(dword_4B324C + 56) = *(_WORD *)(a1 + 30);
    *((_BYTE *)dword_52FD00 + 65601) -= *(_BYTE *)(a1 + 30);
    *(_DWORD *)(dword_4B324C + 20) |= 0x2000000u;
    dword_4B3160 = 30;
    goto LABEL_23;
  }
  if ( a2 == 0
    || (*(_DWORD *)(a1 + 8) & 0x10000000) != 0 && (*(_BYTE *)(a1 + 20) & 1) != 0
    || (*(_DWORD *)(a2 + 12) & 0x200000) != 0 )
  {
    dword_4B3160 = 30;
    *(_WORD *)(dword_4B324C + 56) = 1;
    --*((_BYTE *)dword_52FD00 + 65601);
  }
  else
  {
    v6 = *(_WORD *)(a2 + 22);
    if ( v6 == 0 )
      goto LABEL_23;
    if ( v6 > 2 )
      v6 = 2;
    *(_WORD *)(dword_4B324C + 56) = v6;
    *((_BYTE *)dword_52FD00 + 65601) -= v6;
    dword_4B3160 = 30;
  }
  *(_DWORD *)(dword_4B324C + 20) |= 0x2000000u;
LABEL_23:
  v7 = *(_DWORD *)(a1 + 24);
  BYTE1(v7) |= 0x40u;
  *(_DWORD *)(a1 + 24) = v7;
  if ( *((char *)dword_52FD00 + 65601) <= 0 )
  {
    BYTE1(v7) |= 0x20u;
    *(_DWORD *)(a1 + 24) = v7;
  }
  return result;
}

// 0x4380b0  sub_4380B0
_WORD *__cdecl sub_4380B0(int a1, _WORD *a2, int a3, int a4, int a5)
{
  int *v7; // ebp
  int v8; // ecx
  int v9; // ebx
  int v10; // eax
  int v11; // edx
  __int16 v12; // bx
  __int16 v13; // ax
  __int16 v14; // ax
  int v15; // eax
  int v16; // ecx
  BOOL v17; // eax
  bool v18; // cc
  __int16 v19; // ax
  _WORD *v21; // [esp+10h] [ebp-8h]
  int v22; // [esp+1Ch] [ebp+4h]
  _WORD *v23; // [esp+28h] [ebp+10h]
  _DWORD *v24; // [esp+2Ch] [ebp+14h]

  v24 = (_DWORD *)(a5 + 144);
  *(_DWORD *)(a5 + 64) = *(_DWORD *)(a1 + 228);
  *(_DWORD *)(a5 + 68) = *(_DWORD *)(a1 + 232);
  v21 = &unk_4ADDB0;
  *(_DWORD *)(a5 + 72) = *(_DWORD *)(a1 + 236);
  *(_WORD *)(a5 + 8) = *a2;
  *(_WORD *)(a5 + 10) = a2[2];
  *(_WORD *)(a5 + 12) = a2[4];
  *(_WORD *)a5 = *(_WORD *)(a1 + 220);
  *(_WORD *)(a5 + 4) = *(_WORD *)(a1 + 224);
  if ( (a4 & 0x80000) == 0 )
    v21 = &unk_4ADD98;
  v22 = 0;
  v7 = (int *)(a5 + 48);
  v23 = v21;
  while ( 1 )
  {
    *(_WORD *)(a5 + 2) = *v23;
    RotMatrix((__int16 *)a5, (_WORD *)(a5 + 16));
    gte_ApplyMatrix((__int16 *)(a5 + 16), (__int16 *)(a5 + 8), (int *)(a5 + 48));
    *(_DWORD *)(a5 + 80) = *v7 + *(_DWORD *)(a5 + 56);
    *(_DWORD *)(a5 + 68) = *(_DWORD *)(a1 + 232);
    *v24 = 0;
    *(_WORD *)(a5 + 94) = *(_WORD *)(a1 + 38);
    sub_434E40((_DWORD *)(a5 + 64), (_DWORD *)(a5 + 48), a5 + 84, (int)v24);
    v8 = *(_DWORD *)(a5 + 56);
    v9 = *(_DWORD *)(a5 + 80);
    *(_DWORD *)(a5 + 140) = *(__int16 *)(a5 + 94);
    v10 = *v7;
    *(_DWORD *)(a5 + 80) = v9 - (v8 + *v7);
    v11 = *(_DWORD *)(a1 + 20);
    if ( (v11 & 4) != 0 )
    {
      *(_WORD *)(a5 + 86) = *(_WORD *)(a5 + 86) & 0xFFF5 | 2;
    }
    else
    {
      v12 = *(_WORD *)(a5 + 86);
      if ( (v12 & 8) != 0 )
      {
        *(_DWORD *)(a5 + 124) = *(_DWORD *)(a5 + 64) + v10;
        *(_DWORD *)(a5 + 128) = *(_DWORD *)(a5 + 68) + 1;
        *(_DWORD *)(a5 + 132) = *(_DWORD *)(a5 + 72) + v8;
        *(_WORD *)(a5 + 94) = *(_WORD *)(a1 + 38);
        sub_436D90((_DWORD *)(a5 + 124), a5 + 84, (int)v24);
        if ( *(_WORD *)(a5 + 94) == 0xFFFF )
        {
          *(_BYTE *)(a5 + 86) |= 8u;
          *(_WORD *)(a5 + 94) = *(_WORD *)(a1 + 38);
        }
        else
        {
          v13 = *(_WORD *)(a5 + 86);
          if ( (v13 & 2) != 0 && *(_DWORD *)(a5 + 100) - *(_DWORD *)(a1 + 232) > 200 )
          {
            LOBYTE(v13) = v13 & 0xF1 | 8;
            *(_WORD *)(a5 + 86) = v13;
          }
        }
      }
      else if ( (v12 & 2) != 0
             && (v11 & 0x219) == 0
             && *(_DWORD *)(a5 + 68) + *(__int16 *)(a5 + 90) - *(_DWORD *)(a1 + 232) > 200 )
      {
        *(_WORD *)(a5 + 86) = v12 & 0xFFF1 | 8;
      }
    }
    *(_WORD *)(a1 + 268) = *(_WORD *)(a5 + 90);
    v14 = *(_WORD *)(a5 + 86);
    if ( (v14 & 4) != 0 || (a3 & 0x80000) == 0 && (v14 & 8) != 0 || *(_DWORD *)(a5 + 80) != 0 )
      *(_DWORD *)(a1 + 20) |= 0x100000u;
    if ( (*(_BYTE *)(a5 + 86) & 8) != 0 )
    {
      v15 = *(_DWORD *)(a1 + 24);
      LOBYTE(v15) = v15 | 0x20;
      *(_DWORD *)(a1 + 24) = v15;
    }
    v16 = a3 & 0x40000000;
    v17 = (a3 & 0x40000000) == 0 && *(_DWORD *)(a5 + 140) != *(__int16 *)(a1 + 38);
    if ( !v17 && (((~a3 & 0x80000 | 0x40000u) >> 16) & *(_BYTE *)(a5 + 86)) == 0 && *(_DWORD *)(a5 + 80) == 0 )
      break;
    v18 = ++v22 < 9;
    ++v23;
    if ( !v18 )
    {
      v16 = a3 & 0x40000000;
      break;
    }
  }
  if ( v16 != 0 )
  {
    if ( *(_DWORD *)(a1 + 112) == dword_4B324C )
      v19 = *(_WORD *)dword_4B3248;
    else
      v19 = *(_WORD *)(a5 + 140);
    *(_WORD *)(a1 + 38) = v19;
  }
  if ( ((*(_BYTE *)(a1 + 24) & 0x20) == 0 || (a3 & 0x80000) != 0)
    && (v16 != 0 || (*(_DWORD *)(a1 + 20) & 0x100000) != 0 || v22 >= 9) )
  {
    *(_WORD *)(a1 + 222) += (__int16)v21[v22] >> 3;
  }
  else
  {
    *(_WORD *)(a1 + 222) += *(_WORD *)(a5 + 2);
  }
  if ( v22 == 9 && (*(_DWORD *)(a1 + 20) & 0x100000) != 0 )
  {
    *(_WORD *)(a1 + 222) += 2048;
    *((_DWORD *)a2 + 2) = 0;
    *((_DWORD *)a2 + 1) = 0;
    *(_DWORD *)a2 = 0;
    return a2;
  }
  else
  {
    *(_DWORD *)a2 = *v7;
    *((_DWORD *)a2 + 1) = *(_DWORD *)(a5 + 52);
    *((_DWORD *)a2 + 2) = *(_DWORD *)(a5 + 56);
    return a2;
  }
}

// 0x4383f0  sub_4383F0
int __cdecl sub_4383F0(int a1, int a2)
{
  _DWORD *v2; // ebp
  int v3; // eax
  unsigned int v4; // ecx
  __int16 v6; // cx
  int v7; // eax
  __int64 v8; // rax
  __int16 v9; // cx
  __int16 v10; // ax
  int v11; // eax
  int v12; // eax

  *(_DWORD *)(a2 + 152) = *(_DWORD *)(a1 + 120) + 12;
  *(_WORD *)(a2 + 56) = *(_WORD *)(a1 + 228);
  *(_WORD *)(a2 + 58) = *(_WORD *)(a1 + 232);
  *(_WORD *)(a2 + 60) = *(_WORD *)(a1 + 236);
  sub_408BF0(word_52FCE0);
  sub_408E10(&dword_52FCF4);
  sub_408D10((__int16 *)(a2 + 56));
  sub_408E30();
  v2 = (_DWORD *)(a2 + 84);
  sub_408F60((_DWORD *)(a2 + 84));
  if ( *(int *)(a2 + 84) >= 150 )
  {
    *(_DWORD *)(a2 + 144) = 1638400 / (*v2 | 1);
    sub_408F70((_WORD *)(a2 + 76));
    *(_DWORD *)(a2 + 92) = 0;
    v6 = *(_WORD *)(a2 + 76);
    *(_DWORD *)(a2 + 88) = &unk_808080;
    v7 = *(_DWORD *)(a2 + 144);
    *(_WORD *)(a2 + 80) = v6 + ((*(_DWORD *)(a1 + 204) * ((v7 * 2 * *(__int16 *)(a1 + 80)) >> 12)) >> 12);
    *(_WORD *)(a2 + 76) = v6 + ((*(_DWORD *)(a1 + 204) * ((v7 * 2 * *(__int16 *)(a1 + 72)) >> 12)) >> 12);
    v8 = (__int64)((double)((*(_DWORD *)(a1 + 208) * ((v7 * 2 * *(__int16 *)(a1 + 82)) >> 12)) >> 12)
                 * ((double)word_4EFB5C
                  * 0.00024414062));
    *(_WORD *)(a2 + 148) = v8;
    v9 = *(_WORD *)(a2 + 78);
    if ( (*(_DWORD *)(a1 + 12) & 0x8000000) != 0 )
    {
      *(_WORD *)(a2 + 82) = v9 + ((__int16)v8 >> 1);
      v10 = *(_WORD *)(a2 + 148) - (*(__int16 *)(a2 + 148) >> 1);
      *(_WORD *)(a2 + 148) = v10;
      *(_WORD *)(a2 + 78) = v9 - v10;
    }
    else
    {
      *(_WORD *)(a2 + 82) = v8 + v9;
    }
    *(_WORD *)(*(_DWORD *)(a2 + 152) + 16) = *(_WORD *)(a2 + 76);
    **(_WORD **)(a2 + 152) = *(_WORD *)(*(_DWORD *)(a2 + 152) + 16);
    *(_WORD *)(*(_DWORD *)(a2 + 152) + 10) = *(_WORD *)(a2 + 82);
    *(_WORD *)(*(_DWORD *)(a2 + 152) + 2) = *(_WORD *)(*(_DWORD *)(a2 + 152) + 10);
    *(_WORD *)(*(_DWORD *)(a2 + 152) + 24) = *(_WORD *)(a2 + 80);
    *(_WORD *)(*(_DWORD *)(a2 + 152) + 8) = *(_WORD *)(*(_DWORD *)(a2 + 152) + 24);
    *(_WORD *)(*(_DWORD *)(a2 + 152) + 26) = *(_WORD *)(a2 + 78);
    *(_WORD *)(*(_DWORD *)(a2 + 152) + 18) = *(_WORD *)(*(_DWORD *)(a2 + 152) + 26);
    v11 = *v2 - 50;
    *(_DWORD *)(a1 + 212) = v11;
    if ( v11 < 0 )
      *(_DWORD *)(a1 + 212) = 0;
    v12 = *(_DWORD *)(a1 + 4);
    LOBYTE(v12) = v12 | 2;
    *(_DWORD *)(a1 + 4) = v12;
    return a2 + 88;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 24);
    v4 = *(_DWORD *)(a1 + 4) & 0xFFFFFFFD;
    BYTE1(v3) |= 1u;
    *(_DWORD *)(a1 + 24) = v3;
    *(_DWORD *)(a1 + 4) = v4;
    return a2 + 88;
  }
}

// 0x438610  sub_438610
void __cdecl sub_438610(int a1, int **a2)
{
  int v2; // eax
  int *v3; // edi
  int v4; // eax
  int v5; // eax
  unsigned int v6; // edx
  int v7; // eax
  int v8; // eax
  __int16 *v9; // [esp-8h] [ebp-28h]
  int v10[4]; // [esp+10h] [ebp-10h] BYREF

  if ( word_4B39BC == 0 )
  {
    v2 = sub_434C70(a1, (_WORD *)(a1 + 228), (int)a2);
    if ( v2 != 0 )
    {
      v3 = *(int **)(v2 + 48);
      if ( v3 != NULL )
      {
        while ( *(_WORD *)(a1 + 28) != 6 && v3[1] != 6 || (*(_BYTE *)(a1 + 12) & 2) == 0 )
        {
          if ( *(unsigned __int16 *)(a1 + 28) == v3[1] )
          {
            v4 = v3[2];
            if ( (v4 == 0 || (v4 & *(_DWORD *)(a1 + 20)) != 0)
              && (*((_BYTE *)v3 + 12) == 0 || TestLogicCond(a1, (_BYTE *)v3 + 12) != 0) )
            {
              if ( *((_BYTE *)v3 + 15) != 0 )
                RunLogicAction(a1, (int)(v3 + 3));
              if ( v3[5] < 0 )
                sub_437910(a1, v3[6], a2);
              if ( (v3[5] & 0x800) != 0 )
                sub_437B20(v3[6], v3[7], v3[8]);
              if ( ((unsigned int)&unk_800000 & v3[5]) != 0 )
              {
                dword_4B2180 = v3[6];
                dword_4B2184 = v3[7];
                dword_4B2188 = v3[8];
              }
              if ( (v3[5] & 0x40000000) != 0 )
              {
                *(_DWORD *)(a1 + 228) = v3[6];
                *(_DWORD *)(a1 + 232) = v3[7];
                *(_DWORD *)(a1 + 236) = v3[8];
                v5 = *(_DWORD *)(a1 + 112);
                if ( v5 != 0 )
                {
                  if ( *(_DWORD *)(v5 + 108) == a1 )
                    *(_DWORD *)(v5 + 108) = 0;
                  v6 = *(_DWORD *)(a1 + 20) & 0xFFFFFFEB;
                  *(_DWORD *)(a1 + 196) = 0;
                  *(_DWORD *)(a1 + 192) = a1 + 204;
                  *(_DWORD *)(a1 + 112) = 0;
                  *(_DWORD *)(a1 + 20) = v6 | 0x202;
                  v9 = (__int16 *)(*(_DWORD *)(a1 + 192) + 16);
                  *(_DWORD *)(a1 + 124) = 0;
                  RotMatrix(v9, (_WORD *)(a1 + 128));
                  ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
                  TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
                }
              }
              if ( (v3[5] & 0x80000) != 0 )
              {
                *((_DWORD *)dword_52FD00 + 0x4000) = v3[6];
                word_4B39BC = 1;
              }
              if ( (v3[5] & 0x200000) != 0 )
              {
                sub_437D00(v3[6], NULL);
                *((_BYTE *)dword_52FD00 + 65601) = 0;
              }
              if ( (v3[5] & 0x400000) != 0 )
                dword_4B2370 = v3[6];
              if ( (v3[5] & 0x100000) != 0 )
              {
                dword_4B2460 = v3[6];
                dword_4B2464 = v3[7];
                dword_4B2468 = v3[8];
                if ( dword_4B324C != 0 )
                  dword_4B246C = *(__int16 *)(dword_4B324C + 222);
                else
                  dword_4B246C = 0;
              }
              v7 = v3[5];
              if ( (v7 & 0x10000) != 0 )
                break;
              if ( (v7 & 0x200) != 0 )
                sub_41DF30(0, v3[6], 1, dword_4B2368);
              if ( (v3[5] & 0x2000) != 0 )
                sub_437680(a1, v3[6], a2);
              if ( (v3[5] & 0x40) != 0 )
              {
                v10[0] = v3[6];
                v10[1] = v3[7];
                v10[2] = v3[8];
                sub_437560(v10);
              }
              if ( (BYTE1(v3[5]) & 0x80u) == 0 )
                return;
            }
          }
          v3 = (int *)*v3;
          if ( v3 == NULL )
            return;
        }
        v8 = *(_DWORD *)(a1 + 20);
        BYTE1(v8) |= 1u;
        *(_DWORD *)(a1 + 20) = v8;
      }
    }
  }
}

// 0x4388e0  sub_4388E0
int __cdecl sub_4388E0(int a1, int a2, int a3)
{
  int result; // eax
  int v4; // esi
  int v5; // esi
  char v6; // cl
  char v7; // dl
  char v8; // bl
  __int16 v9; // di
  __int16 v10; // [esp+Ch] [ebp+Ch]

  if ( (*(_BYTE *)(a1 + 8) & 0x20) != 0 )
    return sub_4389A0(a1, a2, a3);
  if ( (a3 & 1) != 0 )
    v4 = *(unsigned __int16 *)(a2 + 2);
  else
    v4 = *(unsigned __int8 *)(*(_DWORD *)(a2 + 28) + 2 * *(unsigned __int16 *)(a2 + 2));
  v5 = *(_DWORD *)(a2 + 32) + 16 * v4;
  result = *(_DWORD *)(a1 + 120) + 12;
  v6 = *(_BYTE *)(v5 + 8);
  v7 = *(_BYTE *)(v5 + 9);
  v8 = v6 + *(_WORD *)(v5 + 12) - 1;
  v10 = *(_WORD *)(v5 + 14) - 1;
  *(_WORD *)(result + 14) = *(_WORD *)(v5 + 6);
  v9 = *(_WORD *)(v5 + 10);
  *(_BYTE *)(result + 4) = v6;
  *(_BYTE *)(result + 20) = v6;
  *(_WORD *)(result + 6) = v9;
  *(_BYTE *)(result + 5) = v7;
  *(_BYTE *)(result + 12) = v8;
  *(_BYTE *)(result + 13) = v7;
  *(_BYTE *)(result + 21) = v7 + v10;
  *(_BYTE *)(result + 28) = v8;
  *(_BYTE *)(result + 29) = v7 + v10;
  *(_DWORD *)(result + 32) = *(_BYTE *)(v5 + 2) & 8;
  return result;
}

// 0x4389a0  sub_4389A0
_WORD *__cdecl sub_4389A0(int a1, int a2, char a3)
{
  int v4; // edx
  int v5; // eax
  int v6; // edx
  unsigned __int16 v7; // si
  int v8; // ecx
  _WORD *result; // eax
  unsigned __int8 v10; // bl
  int v11; // esi
  int v12; // [esp+18h] [ebp+8h]
  __int16 v13; // [esp+1Ch] [ebp+Ch]

  if ( (a3 & 1) != 0 )
  {
    v4 = *(_DWORD *)(a2 + 32);
    v5 = 16 * *(unsigned __int16 *)(a2 + 2);
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 32);
    v4 = 16 * *(unsigned __int8 *)(*(_DWORD *)(a2 + 28) + 2 * *(unsigned __int16 *)(a2 + 2));
  }
  v6 = v5 + v4;
  v7 = *(_WORD *)(v6 + 6);
  v8 = 2 - ((v7 >> 7) & 3);
  result = (_WORD *)(*(_DWORD *)(a1 + 120) + 12);
  v12 = *(unsigned __int16 *)(v6 + 12) >> v8;
  v13 = *(_WORD *)(v6 + 14);
  v10 = *(_BYTE *)(v6 + 9);
  *result = ((v7 & 0xF) << 6) + (*(unsigned __int8 *)(v6 + 8) >> v8);
  result[1] = 16 * (v7 & 0x10) + v10;
  result[4] = *(_WORD *)(a2 + 44);
  result[5] = *(_WORD *)(a2 + 46);
  result[8] = v12;
  result[9] = v13;
  result[2] = 16 * (*(_BYTE *)(v6 + 10) & 0x3F);
  result[3] = *(_WORD *)(v6 + 10) >> 6;
  LOWORD(v6) = *(_WORD *)(v6 + 10);
  v11 = (__int16)result[4];
  result[3] = v6;
  dword_4E5E80[v11] = (unsigned __int16)v6;
  result[6] = *(_WORD *)(a2 + 48);
  result[7] = *(_WORD *)(a2 + 50);
  if ( v8 == 2 )
  {
    result[10] = 16;
    result[11] = 1;
  }
  else if ( v8 == 1 )
  {
    result[10] = 256;
    result[11] = 1;
  }
  else
  {
    result[10] = 0;
    result[11] = 0;
  }
  return result;
}

// 0x438ae0  sub_438AE0
int __cdecl sub_438AE0(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  _DWORD *v5; // ebx
  int v8; // eax
  int v9; // ecx
  int v11; // eax
  _DWORD *i; // edi
  _DWORD *v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // edx
  unsigned __int16 v17; // ax
  int v18; // eax
  int v19; // ebx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // edx
  char v24; // dl
  int v25; // eax
  int v26; // eax
  char v27; // al
  int v28; // eax
  unsigned __int16 v29; // di
  int v30; // eax
  __int16 v31; // cx
  unsigned __int8 *v32; // eax
  int v33; // ebx
  int v34; // eax
  int v35; // eax
  int v36; // edi
  int v37; // eax
  bool v38; // zf
  int v39; // edx
  __int16 *v40; // ebx
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // edi
  int v46; // eax
  _DWORD *v47; // edx
  int v48; // eax
  _DWORD *v49; // edi
  int v50; // ecx
  int v51; // edi
  __int16 *v52; // ebx
  char v53; // al
  int v54; // eax
  int v55; // eax
  __int16 *v56; // [esp-8h] [ebp-5Ch]
  __int16 *v57; // [esp-8h] [ebp-5Ch]
  __int16 *v58; // [esp+10h] [ebp-44h]
  __int16 v59; // [esp+14h] [ebp-40h] BYREF
  __int16 v60; // [esp+16h] [ebp-3Eh]
  __int16 v61; // [esp+18h] [ebp-3Ch]
  int v62; // [esp+1Ch] [ebp-38h] BYREF
  int v63; // [esp+20h] [ebp-34h]
  int v64; // [esp+24h] [ebp-30h]
  char v65[8]; // [esp+3Ch] [ebp-18h] BYREF
  char v66[16]; // [esp+44h] [ebp-10h] BYREF
  __int16 v67; // [esp+58h] [ebp+4h]
  unsigned __int16 v68; // [esp+5Ch] [ebp+8h]
  int v69; // [esp+64h] [ebp+10h]

  v5 = a4;
  if ( ((unsigned __int8)a4 & 0x20) != 0 )
  {
    *(_DWORD *)(a2 + 24) = 256;
    return 32;
  }
  if ( ((unsigned __int8)a4 & 4) != 0 && ((v8 = *(_DWORD *)(a2 + 24)) & 0x10) != 0 )
  {
    LOBYTE(v8) = v8 & 0xEF;
    *(_DWORD *)(a2 + 24) = v8;
  }
  else if ( ((unsigned __int8)a4 & 0x10) != 0 )
  {
    v55 = *(_DWORD *)(a2 + 24);
    LOBYTE(v55) = v55 | 0x10;
    *(_DWORD *)(a2 + 24) = v55;
    return 512;
  }
  v9 = *(_DWORD *)(a2 + 24);
  BYTE1(v9) &= 0xCFu;
  *(_DWORD *)(a2 + 24) = v9;
  if ( *(_DWORD *)(a1 + 120) != 0 )
  {
    i = a4;
  }
  else
  {
    v11 = sub_448AF0();
    *(_DWORD *)(a1 + 120) = v11;
    if ( v11 == 0 )
    {
      while ( 1 )
        ;
    }
    for ( i = *(_DWORD **)(a1 + 116); i != NULL; i = (_DWORD *)*i )
    {
      if ( *(_WORD *)(i[2] + 78) == 8 )
        break;
    }
    *(_DWORD *)(a2 + 40) = *(_DWORD *)(i[2] + 84);
    if ( (*(_DWORD *)(a1 + 8) & 0x200000) != 0 )
    {
      *(_WORD *)(*(_DWORD *)(a1 + 120) + 8) = 1;
      if ( *(_DWORD *)(a1 + 112) == 0 )
      {
        *(_DWORD *)(a1 + 196) = 0;
        *(_DWORD *)(a1 + 192) = a1 + 204;
      }
      if ( *(_DWORD *)(a1 + 120) != 0 && (*(_DWORD *)(a1 + 8) & 0x200000) == 0 )
      {
        v13 = (_DWORD *)(*(_DWORD *)(a1 + 192) + 24);
        *(_DWORD *)(a1 + 124) = 0;
        TransMatrix((_DWORD *)(a1 + 128), v13);
        RotMatrix((__int16 *)(*(_DWORD *)(a1 + 192) + 16), (_WORD *)(a1 + 128));
        ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
      }
      v56 = (__int16 *)(*(_DWORD *)(a1 + 192) + 16);
      *(_DWORD *)(a1 + 124) = 0;
      RotMatrix(v56, (_WORD *)(a1 + 128));
      ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
      TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
      v5 = a4;
    }
    else
    {
      *(_WORD *)(*(_DWORD *)(a1 + 120) + 8) = 32;
    }
  }
  if ( ((unsigned __int8)v5 & 0xB) != 0 )
  {
    v14 = a3;
    if ( ((unsigned __int8)v5 & 8) == 0 )
    {
      i = *(_DWORD **)(a1 + 116);
      if ( i == NULL )
        goto LABEL_27;
      do
      {
        if ( *(unsigned __int16 *)(i[2] + 78) == a3 )
          break;
        i = (_DWORD *)*i;
      }
      while ( i != NULL );
      if ( i == NULL )
      {
LABEL_27:
        *(_DWORD *)(a2 + 24) = 256;
        return 1024;
      }
    }
    v15 = *(_DWORD *)(*(_DWORD *)(a2 + 40) + 16);
    if ( (*(_DWORD *)(a1 + 8) & 0x200000) != 0 )
    {
      v16 = *(_DWORD *)(a1 + 204);
      v17 = *(_WORD *)(v15 + 12);
      *(_WORD *)(a1 + 74) = 0;
      v18 = -(v16 * (v17 >> 1)) >> 12;
      *(_WORD *)(a1 + 76) = v18;
      *(_WORD *)(a1 + 72) = v18;
      v19 = *(_DWORD *)(a1 + 208);
      v20 = (v16 * (*(unsigned __int16 *)(v15 + 12) >> 1)) >> 12;
      *(_WORD *)(a1 + 84) = v20;
      *(_WORD *)(a1 + 80) = v20;
      v21 = *(_DWORD *)(a1 + 12);
      *(_WORD *)(a1 + 82) = -(__int16)((*(unsigned __int16 *)(v15 + 14) * v19) >> 12);
      if ( (v21 & 0x4000000) != 0 )
        *(_DWORD *)(a1 + 232) += *(unsigned __int16 *)(v15 + 14) >> 1;
      v5 = a4;
      v22 = (v16 * 2 * *(unsigned __int16 *)(v15 + 12)) >> 12;
      *(_WORD *)(a1 + 32) += v22;
      LOWORD(v22) = *(_WORD *)(a1 + 80) + v22;
      *(_WORD *)(a1 + 46) = v22;
      v23 = (unsigned __int16)v22 * (unsigned __int16)v22;
      v14 = a3;
      *(_DWORD *)(a1 + 48) = v23;
    }
    *(_DWORD *)(a2 + 20) = v14;
    BYTE1(v5) |= 0x12u;
    *(_DWORD *)(a2 + 12) = i[2] + 20;
    *(_BYTE *)(a2 + 7) = *(_BYTE *)(i[2] + 16);
    *(_DWORD *)(a2 + 16) = i[2] + 36;
    v24 = *(_BYTE *)(i[2] + 18);
    *(_DWORD *)(a2 + 32) = v15;
    *(_BYTE *)(a2 + 9) = v24;
    *(_BYTE *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 24) = v5;
    *(_DWORD *)(a2 + 36) = v15;
    *(_WORD *)a2 = *(_WORD *)(i[2] + 80) - 1;
    v25 = *(_DWORD *)(i[2] + 84);
    *(_WORD *)(a2 + 2) = 0;
    *(_DWORD *)(a2 + 28) = v25;
    LOBYTE(v25) = *(_BYTE *)(v25 + 1);
    *(_BYTE *)(a2 + 5) = v25;
    *(_BYTE *)(a2 + 8) = v25;
  }
  if ( *(_WORD *)(a2 + 2) == *(_WORD *)a2 && *(_BYTE *)(a2 + 8) == 0 )
  {
    v26 = *(_DWORD *)(a2 + 24);
    if ( (v26 & 2) != 0 )
    {
      BYTE1(v26) = BYTE1(v26) & 0xFC | 1;
      *(_DWORD *)(a2 + 24) = v26;
      return (v26 & 0x800) != 0 ? 512 : 256;
    }
    if ( (v26 & 1) != 0 )
    {
      LOBYTE(v26) = v26 | 0x80;
      *(_DWORD *)(a2 + 24) = v26;
    }
    v27 = *(_BYTE *)(*(_DWORD *)(a2 + 28) + 1);
    *(_WORD *)(a2 + 2) = 0;
    *(_BYTE *)(a2 + 5) = v27;
    *(_BYTE *)(a2 + 8) = v27;
    v28 = *(_DWORD *)(a2 + 24);
    BYTE1(v28) |= 0x10u;
    *(_DWORD *)(a2 + 24) = v28;
  }
  sub_4388E0(a1, a2, 0);
  if ( *(_BYTE *)(a2 + 8) == 0 && *(_BYTE *)(a2 + 7) != 0 )
  {
    v29 = 0;
    do
    {
      v30 = *(_DWORD *)(a2 + 12);
      v31 = *(unsigned __int8 *)(v30 + 4 * v29 + 1);
      v32 = (unsigned __int8 *)(v30 + 4 * v29);
      if ( *(_WORD *)(a2 + 2) == v31 )
        sub_41DF30(a1, *v32, 1, dword_4B2368);
      ++v29;
    }
    while ( v29 < *(unsigned __int8 *)(a2 + 7) );
  }
  v67 = 1;
  if ( *(_BYTE *)(a2 + 9) != 0 && *(_BYTE *)(a2 + 8) == 0 )
  {
    v68 = 0;
    while ( 1 )
    {
      v33 = 14 * v68;
      v34 = v33 + *(_DWORD *)(a2 + 16);
      v69 = v33;
      if ( *(_WORD *)(a2 + 2) != *(_WORD *)(v34 + 4) || *(_DWORD *)(a1 + 104) == 0 )
        goto LABEL_95;
      v67 = TestLogicCond(a1, (_BYTE *)(v34 + 6));
      if ( v67 != 0 )
        break;
LABEL_96:
      if ( ++v68 >= *(unsigned __int8 *)(a2 + 9) )
        goto LABEL_97;
    }
    RunLogicAction(a1, *(_DWORD *)(a2 + 16) + v33 + 6);
    if ( (*(_BYTE *)(*(_DWORD *)(a2 + 16) + v33 + 2) & 0x40) != 0 && *(_DWORD *)(a1 + 108) != 0 )
    {
      sub_447BC0(*(_DWORD *)(a1 + 108));
      *(_DWORD *)(a1 + 108) = 0;
    }
    v35 = *(_DWORD *)(a2 + 16) + v33;
    if ( (*(_BYTE *)(v35 + 2) & 1) != 0 )
    {
      v36 = sub_448EB0(*(_WORD *)v35, v66, v65);
      if ( v36 != 0 )
      {
        v37 = *(_DWORD *)(a1 + 24);
        BYTE1(v37) |= 8u;
        *(_DWORD *)(a1 + 24) = v37;
        v38 = *(_WORD *)(v36 + 28) == 1;
        *(_DWORD *)(v36 + 308) = 0;
        *(_DWORD *)(v36 + 312) = 0;
        *(_DWORD *)(v36 + 316) = 0;
        *(_WORD *)(v36 + 300) = 0;
        *(_WORD *)(v36 + 302) = 0;
        *(_WORD *)(v36 + 304) = 0;
        *(_DWORD *)(v36 + 284) = 4096;
        *(_DWORD *)(v36 + 288) = 4096;
        *(_DWORD *)(v36 + 292) = 4096;
        if ( v38 )
          dword_4B3748 |= 1u;
        v39 = *(_DWORD *)(v36 + 112);
        if ( v39 != 0 && *(_DWORD *)(v39 + 108) == v36 )
          *(_DWORD *)(v39 + 108) = 0;
        *(_DWORD *)(v36 + 196) = *(_DWORD *)(a1 + 104);
        *(_WORD *)(v36 + 38) = *(_WORD *)(a1 + 38);
        *(_DWORD *)(v36 + 112) = a1;
        *(_DWORD *)(v36 + 192) = v36 + 284;
        if ( *(char *)(*(_DWORD *)(a2 + 16) + v33 + 3) >= 0 )
        {
          if ( *(_DWORD *)(a1 + 108) != 0 )
            sub_447BC0(*(_DWORD *)(a1 + 108));
          *(_DWORD *)(a1 + 108) = v36;
        }
        v40 = (__int16 *)(v36 + 124);
        *(_WORD *)(v36 + 38) = *(_WORD *)(a1 + 38);
        v57 = (__int16 *)(*(_DWORD *)(v36 + 192) + 16);
        *(_DWORD *)(v36 + 124) = 0;
        RotMatrix(v57, (_WORD *)(v36 + 128));
        ScaleMatrix((__int16 *)(v36 + 128), *(_DWORD **)(v36 + 192));
        TransMatrix((_DWORD *)(v36 + 128), (_DWORD *)(*(_DWORD *)(v36 + 192) + 24));
        v58 = (__int16 *)(v36 + 124);
        v59 = 0;
        v60 = 0;
        v61 = 0;
        if ( v36 != -124 )
        {
          do
          {
            gte_ApplyMatrix(v40 + 2, &v59, &v62);
            v62 += *((_DWORD *)v58 + 6);
            v63 += *((_DWORD *)v58 + 7);
            v64 += *((_DWORD *)v58 + 8);
            v59 = v62;
            v60 = v63;
            v61 = v64;
            v58 = *((__int16 **)v58 + 18);
            v40 = v58;
          }
          while ( v58 != NULL );
        }
        v33 = v69;
        *(_DWORD *)(v36 + 228) = v62;
        *(_DWORD *)(v36 + 232) = v63;
        *(_DWORD *)(v36 + 236) = v64;
      }
    }
    v41 = v33 + *(_DWORD *)(a2 + 16);
    if ( (*(_BYTE *)(v41 + 2) & 2) != 0 )
    {
      v42 = sub_448EB0(*(_WORD *)v41, a1 + 88, a1 + 220);
      if ( v42 != 0 )
        *(_WORD *)(v42 + 38) = *(_WORD *)(a1 + 38);
    }
    v43 = *(_DWORD *)(a2 + 16) + v33;
    if ( (*(_BYTE *)(v43 + 3) & 4) != 0 )
    {
      v44 = sub_448EB0(*(_WORD *)v43, a1 + 88, *(_DWORD *)(*(_DWORD *)(a1 + 104) + 68) + 16);
      v45 = v44;
      if ( v44 != 0 )
      {
        *(_WORD *)(v44 + 38) = *(_WORD *)(a1 + 38);
        v46 = *(_DWORD *)(v44 + 120);
        *(_WORD *)(v45 + 222) += *(_WORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 104) + 72) + 68) + 18);
        if ( v46 != 0 && (*(_DWORD *)(v45 + 8) & 0x200000) == 0 )
        {
          v47 = (_DWORD *)(*(_DWORD *)(v45 + 192) + 24);
          *(_DWORD *)(v45 + 124) = 0;
          TransMatrix((_DWORD *)(v45 + 128), v47);
          RotMatrix((__int16 *)(*(_DWORD *)(v45 + 192) + 16), (_WORD *)(v45 + 128));
          ScaleMatrix((__int16 *)(v45 + 128), *(_DWORD **)(v45 + 192));
        }
      }
    }
    if ( (*(_BYTE *)(*(_DWORD *)(a2 + 16) + v33 + 2) & 4) != 0 )
    {
      v48 = dword_4B324C;
      if ( (*(_DWORD *)(dword_4B324C + 20) & 0x3000000) != 0 || *(_DWORD *)(dword_4B324C + 112) != 0 )
        goto LABEL_86;
      v49 = (_DWORD *)(a1 + 88);
      if ( sub_4349B0(dword_4B324C, (_WORD *)(a1 + 88), a5) )
      {
        if ( *(char *)(*(_DWORD *)(a2 + 16) + v33 + 2) >= 0 )
        {
          *(_DWORD *)(dword_4B324C + 420) = *(_DWORD *)(dword_4B324C + 228) - *v49;
          *(_DWORD *)(dword_4B324C + 424) = *(_DWORD *)(dword_4B324C + 232) - *(_DWORD *)(a1 + 92);
          *(_DWORD *)(dword_4B324C + 428) = *(_DWORD *)(dword_4B324C + 236) - *(_DWORD *)(a1 + 96);
        }
        else
        {
          *(_DWORD *)(dword_4B324C + 420) = 0;
          *(_DWORD *)(dword_4B324C + 424) = 0;
          *(_DWORD *)(dword_4B324C + 428) = 0;
        }
        *(_DWORD *)(dword_4B324C + 228) = *v49;
        *(_DWORD *)(dword_4B324C + 232) = *(_DWORD *)(a1 + 92);
        *(_DWORD *)(dword_4B324C + 236) = *(_DWORD *)(a1 + 96);
        *(_DWORD *)(dword_4B324C + 396) = *(_DWORD *)(dword_4B324C + 204);
        *(_DWORD *)(dword_4B324C + 400) = *(_DWORD *)(dword_4B324C + 208);
        *(_DWORD *)(dword_4B324C + 404) = *(_DWORD *)(dword_4B324C + 212);
        *(_WORD *)(dword_4B324C + 412) = 0;
        *(_WORD *)(dword_4B324C + 414) = 0;
        *(_WORD *)(dword_4B324C + 416) = 0;
        *(_DWORD *)(dword_4B324C + 192) = dword_4B324C + 396;
        *(_DWORD *)(dword_4B324C + 196) = *(_DWORD *)(a1 + 104);
        *(_WORD *)(dword_4B324C + 382) = 0;
        *(_WORD *)(dword_4B324C + 380) = *(_WORD *)(*(_DWORD *)(a2 + 16) + v69);
        *(_DWORD *)(dword_4B324C + 20) = 0x2000000;
        *(_DWORD *)(a1 + 108) = dword_4B324C;
        *(_DWORD *)(dword_4B324C + 112) = a1;
        v50 = dword_4B324C;
        *(_DWORD *)(dword_4B324C + 124) = 0;
        v51 = v50 + 124;
        v52 = (__int16 *)(v50 + 128);
        RotMatrix((__int16 *)(*(_DWORD *)(v50 + 192) + 16), (_WORD *)(v50 + 128));
        ScaleMatrix(v52, *(_DWORD **)(v51 + 68));
        TransMatrix(v52, (_DWORD *)(*(_DWORD *)(v51 + 68) + 24));
        v48 = dword_4B324C;
        v33 = v69;
        goto LABEL_86;
      }
    }
    v48 = dword_4B324C;
LABEL_86:
    if ( (*(_BYTE *)(*(_DWORD *)(a2 + 16) + v33 + 2) & 8) != 0
      && *(_DWORD *)(v48 + 112) == a1
      && *(_DWORD *)(a1 + 108) != 0 )
    {
      *(_WORD *)(v48 + 220) = *(_WORD *)(a1 + 220);
      *(_WORD *)(dword_4B324C + 222) = *(_WORD *)(a1 + 222) + 2048;
      *(_WORD *)(dword_4B324C + 224) = *(_WORD *)(a1 + 224);
      *(_DWORD *)(dword_4B324C + 192) = dword_4B324C + 204;
      *(_DWORD *)(dword_4B324C + 196) = 0;
      *(_DWORD *)(dword_4B324C + 112) = 0;
      *(_DWORD *)(a1 + 108) = 0;
      *(_WORD *)(dword_4B324C + 382) = 0;
      *(_WORD *)(dword_4B324C + 380) = *(_WORD *)(*(_DWORD *)(a2 + 16) + v33);
      v48 = dword_4B324C;
    }
    if ( (*(_BYTE *)(*(_DWORD *)(a2 + 16) + v33 + 3) & 1) != 0
      && (*(_DWORD *)(v48 + 20) & 0x3000000) == 0
      && *(_DWORD *)(v48 + 112) == 0
      && sub_4349B0(v48, (_WORD *)(a1 + 88), a5) )
    {
      *(_WORD *)(dword_4B324C + 222) = *(_WORD *)(a1 + 222) + 2048;
      *(_WORD *)(dword_4B324C + 382) = 0;
      *(_WORD *)(dword_4B324C + 380) = *(_WORD *)(*(_DWORD *)(a2 + 16) + v33);
      *(_DWORD *)(dword_4B324C + 20) = 0x2000000;
    }
LABEL_95:
    if ( v67 == 1 )
      goto LABEL_97;
    goto LABEL_96;
  }
LABEL_97:
  if ( *(_BYTE *)(a2 + 8) == 0 )
  {
    v53 = *(_BYTE *)(*(_DWORD *)(a2 + 28) + 2 * (unsigned __int16)++*(_WORD *)(a2 + 2) + 1);
    *(_BYTE *)(a2 + 5) = v53;
    *(_BYTE *)(a2 + 8) = v53;
  }
  v38 = *(_WORD *)(a2 + 2) == *(_WORD *)a2;
  --*(_BYTE *)(a2 + 8);
  if ( v38 )
  {
    v54 = *(_DWORD *)(a2 + 24);
    BYTE1(v54) |= 0x20u;
    *(_DWORD *)(a2 + 24) = v54;
  }
  return 512;
}

// 0x439550  sub_439550
int __cdecl sub_439550(int a1, int a2, int a3, unsigned __int16 a4, int a5)
{
  int v6; // ecx
  int v7; // ebp
  int v8; // eax
  int v9; // eax
  _DWORD *i; // eax
  _DWORD *j; // edi
  int v12; // edx
  int v13; // edx
  int v14; // eax
  char v15; // dl
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // di
  int v18; // eax
  __int16 v19; // dx
  int v20; // eax
  char v21; // al
  char v22; // cl
  int v23; // edx
  int v24; // eax
  unsigned __int8 *v25; // edi
  unsigned __int8 v26; // cl
  unsigned __int16 v27; // ax
  int v28; // edi
  int v29; // eax
  int v30; // eax
  int v31; // edi
  int v32; // eax
  bool v33; // zf
  int v34; // ecx
  __int16 *v35; // eax
  __int16 *v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // edi
  int v40; // eax
  int v41; // edi
  int v42; // edx
  int v43; // eax
  int v44; // ecx
  _DWORD *v45; // eax
  _DWORD *v46; // edi
  int v47; // ecx
  _DWORD *v48; // eax
  _DWORD *v49; // edi
  int v50; // edi
  __int16 v51; // cx
  int v52; // edi
  int v53; // eax
  __int16 v54; // dx
  int v55; // ecx
  int v56; // edi
  __int16 v57; // cx
  int v58; // eax
  char v59; // dl
  unsigned __int16 v60; // si
  char v61; // al
  unsigned __int16 v62; // dx
  char v63; // cl
  unsigned __int16 v64; // ax
  int v65; // edx
  int v66; // eax
  __int16 *v67; // [esp-8h] [ebp-5Ch]
  __int16 *v68; // [esp-8h] [ebp-5Ch]
  __int16 *v69; // [esp-8h] [ebp-5Ch]
  __int16 *v70; // [esp+10h] [ebp-44h]
  __int16 v71; // [esp+14h] [ebp-40h] BYREF
  __int16 v72; // [esp+16h] [ebp-3Eh]
  __int16 v73; // [esp+18h] [ebp-3Ch]
  int v74; // [esp+1Ch] [ebp-38h] BYREF
  int v75; // [esp+20h] [ebp-34h]
  int v76; // [esp+24h] [ebp-30h]
  char v77[8]; // [esp+3Ch] [ebp-18h] BYREF
  char v78[16]; // [esp+44h] [ebp-10h] BYREF
  int v79; // [esp+5Ch] [ebp+8h]
  int k; // [esp+60h] [ebp+Ch]
  __int16 *v81; // [esp+60h] [ebp+Ch]
  int v82; // [esp+64h] [ebp+10h]
  unsigned __int16 v83; // [esp+64h] [ebp+10h]

  if ( (*(_DWORD *)(a1 + 8) & 0x200000) != 0 )
    return sub_438AE0(a1, a2, a3, (_DWORD *)a4, a5);
  LOWORD(v6) = a4;
  if ( a4 == 0 )
  {
    v7 = a2;
    v8 = *(_DWORD *)(a2 + 24);
    if ( (v8 & 0x10) != 0 )
      return 512;
    if ( (v8 & 0x100) != 0 )
      return (v8 & 0x800) != 0 ? 512 : 256;
LABEL_12:
    *(_DWORD *)(v7 + 24) &= 0xFFFFCFFF;
    if ( *(_DWORD *)(a1 + 120) != 0 )
    {
      j = (_DWORD *)a5;
    }
    else
    {
      for ( i = *(_DWORD **)(a1 + 116); i != NULL; i = (_DWORD *)*i )
      {
        if ( *(_WORD *)(i[2] + 78) == 7 )
          break;
      }
      *(_DWORD *)(v7 + 32) = *(_DWORD *)(i[2] + 84);
      for ( j = *(_DWORD **)(a1 + 116); j != NULL; j = (_DWORD *)*j )
      {
        if ( *(_WORD *)(j[2] + 78) == 4 )
          break;
      }
      *(_DWORD *)(v7 + 36) = *(_DWORD *)(*(_DWORD *)(j[2] + 84) + 8);
      *(_WORD *)(v7 + 2) = 0;
      sub_44E5A0(a1, v7, a5);
      *(_DWORD *)(*(_DWORD *)(a1 + 120) + 100) = a1 + 124;
      if ( *(_DWORD *)(a1 + 112) == 0 )
      {
        *(_DWORD *)(a1 + 196) = 0;
        *(_DWORD *)(a1 + 192) = a1 + 204;
      }
      v12 = *(_DWORD *)(v7 + 24);
      BYTE1(v12) &= ~0x40u;
      *(_DWORD *)(v7 + 24) = v12;
      if ( *(_DWORD *)(a1 + 120) != 0 && (*(_DWORD *)(a1 + 8) & 0x200000) == 0 )
      {
        v13 = *(_DWORD *)(a1 + 192);
        *(_DWORD *)(a1 + 124) = 0;
        TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(v13 + 24));
        RotMatrix((__int16 *)(*(_DWORD *)(a1 + 192) + 16), (_WORD *)(a1 + 128));
        ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
      }
      LOWORD(v6) = a4;
    }
    if ( (v6 & 0xB) != 0 )
    {
      if ( (v6 & 8) != 0 )
      {
        v14 = *(_DWORD *)(v7 + 28);
      }
      else
      {
        j = *(_DWORD **)(a1 + 116);
        if ( j == NULL )
          goto LABEL_33;
        do
        {
          if ( *(unsigned __int16 *)(j[2] + 78) == a3 )
            break;
          j = (_DWORD *)*j;
        }
        while ( j != NULL );
        if ( j == NULL )
        {
LABEL_33:
          *(_DWORD *)(v7 + 24) = 256;
          return 1024;
        }
        v14 = *(_DWORD *)(j[2] + 84);
      }
      v6 = (unsigned __int16)v6;
      *(_DWORD *)(v7 + 20) = a3;
      BYTE1(v6) |= 0x12u;
      *(_DWORD *)(v7 + 12) = j[2] + 20;
      *(_BYTE *)(v7 + 7) = *(_BYTE *)(j[2] + 16);
      *(_DWORD *)(v7 + 16) = j[2] + 36;
      v15 = *(_BYTE *)(j[2] + 18);
      *(_DWORD *)(v7 + 28) = v14;
      *(_BYTE *)(v7 + 9) = v15;
      *(_BYTE *)(v7 + 4) = 0;
      *(_DWORD *)(v7 + 24) = v6;
      *(_DWORD *)(v7 + 36) = *(_DWORD *)(v14 + 8);
      *(_WORD *)v7 = *(_WORD *)(v14 + 14) - 1;
      *(_BYTE *)(v7 + 5) = *(_BYTE *)(v14 + 18);
      *(_WORD *)(v7 + 2) = 0;
      *(_BYTE *)(v7 + 8) = 0;
    }
    if ( *(_BYTE *)(v7 + 8) == 0 )
    {
      v16 = *(_WORD *)(v7 + 2);
      v17 = *(_WORD *)v7;
      if ( v16 == *(_WORD *)v7 )
      {
        *(_DWORD *)(a1 + 20) &= 0xFFF7EFFF;
        v8 = *(_DWORD *)(v7 + 24);
        if ( (v8 & 2) != 0 )
        {
LABEL_140:
          BYTE1(v8) = BYTE1(v8) & 0xFC | 1;
          *(_DWORD *)(v7 + 24) = v8;
          return (v8 & 0x800) != 0 ? 512 : 256;
        }
        if ( (v8 & 1) != 0 )
        {
          LOBYTE(v8) = v8 | 0x80;
          *(_DWORD *)(v7 + 24) = v8;
        }
        v18 = *(_DWORD *)(v7 + 28);
        *(_DWORD *)(v7 + 36) = *(_DWORD *)(v18 + 8);
        v19 = *(_WORD *)(v18 + 14);
        v20 = *(_DWORD *)(v7 + 24);
        BYTE1(v20) |= 0x10u;
        *(_WORD *)v7 = v19 - 1;
        *(_DWORD *)(v7 + 24) = v20;
        *(_WORD *)(v7 + 2) = 0;
        *(_BYTE *)(v7 + 8) = 0;
        sub_44E5A0(a1, v7, a5);
      }
      else if ( *(_BYTE *)(v7 + 4) != 0 )
      {
        if ( *(unsigned __int8 *)(v7 + 4) + (unsigned int)v16 >= v17 )
        {
          v22 = *(_BYTE *)(v7 + 5);
          *(_WORD *)(v7 + 2) = v17 - 1;
          *(_BYTE *)(v7 + 8) = v22;
        }
        else
        {
          *(_WORD *)(v7 + 2) = v16 + *(unsigned __int8 *)(v7 + 4) - 1;
          do
          {
            sub_44E5A0(a1, v7, a5);
            v21 = *(_BYTE *)(v7 + 4) - 1;
            *(_BYTE *)(v7 + 4) = v21;
          }
          while ( v21 != 0 );
        }
      }
      else
      {
        sub_44E5A0(a1, v7, a5);
      }
      if ( *(_BYTE *)(v7 + 8) == 0 && *(_BYTE *)(v7 + 7) != 0 )
      {
        v23 = 0;
        v82 = 0;
        do
        {
          v24 = 4 * (unsigned __int16)v23;
          v25 = (unsigned __int8 *)(v24 + *(_DWORD *)(v7 + 12));
          if ( *(_WORD *)(v7 + 2) == v25[1] )
          {
            v26 = v25[3];
            if ( v26 != 0 )
            {
              v25[3] = v26 - 1;
            }
            else
            {
              v25[3] = v25[2];
              sub_41DF30(a1, *(unsigned __int8 *)(v24 + *(_DWORD *)(v7 + 12)), 1, dword_4B2368);
              v23 = v82;
            }
          }
          v82 = ++v23;
        }
        while ( (unsigned __int16)v23 < *(unsigned __int8 *)(v7 + 7) );
      }
      if ( *(_BYTE *)(v7 + 9) != 0 )
      {
        if ( *(_BYTE *)(v7 + 8) == 0 )
        {
          v27 = 0;
          v83 = 0;
          while ( 1 )
          {
            v28 = 14 * v27;
            v79 = v28;
            v29 = v28 + *(_DWORD *)(v7 + 16);
            if ( (*(_WORD *)(v7 + 2) == *(_WORD *)(v29 + 4) || (*(_BYTE *)(v29 + 3) & 8) != 0)
              && (*(_DWORD *)(a1 + 104) != 0 || (*(_BYTE *)(v29 + 3) & 0x40) != 0)
              && (unsigned __int16)TestLogicCond(a1, (_BYTE *)(v29 + 6)) != 0 )
            {
              break;
            }
LABEL_132:
            v27 = ++v83;
            if ( v83 >= *(unsigned __int8 *)(v7 + 9) )
              goto LABEL_133;
          }
          RunLogicAction(a1, v28 + *(_DWORD *)(v7 + 16) + 6);
          if ( (*(_BYTE *)(v28 + *(_DWORD *)(v7 + 16) + 2) & 0x40) != 0 && *(_DWORD *)(a1 + 108) != 0 )
            sub_447BC0(*(_DWORD *)(a1 + 108));
          v30 = v28 + *(_DWORD *)(v7 + 16);
          if ( (*(_BYTE *)(v30 + 2) & 1) != 0 )
          {
            v31 = sub_448EB0(*(_WORD *)v30, v78, v77);
            if ( v31 != 0 )
            {
              v32 = *(_DWORD *)(a1 + 24);
              BYTE1(v32) |= 8u;
              *(_DWORD *)(a1 + 24) = v32;
              *(_DWORD *)(v31 + 288) = 4096;
              *(_DWORD *)(v31 + 292) = 4096;
              *(_DWORD *)(v31 + 284) = 4096;
              v33 = *(_WORD *)(v31 + 28) == 1;
              *(_DWORD *)(v31 + 308) = 0;
              *(_DWORD *)(v31 + 312) = 0;
              *(_DWORD *)(v31 + 316) = 0;
              *(_WORD *)(v31 + 300) = 0;
              *(_WORD *)(v31 + 302) = 0;
              *(_WORD *)(v31 + 304) = 0;
              if ( v33 )
                dword_4B3748 |= 1u;
              v34 = *(_DWORD *)(v31 + 112);
              if ( v34 != 0 && *(_DWORD *)(v34 + 108) == v31 )
                *(_DWORD *)(v34 + 108) = 0;
              *(_DWORD *)(v31 + 196) = *(_DWORD *)(a1 + 104);
              *(_WORD *)(v31 + 38) = *(_WORD *)(a1 + 38);
              *(_DWORD *)(v31 + 112) = a1;
              *(_DWORD *)(v31 + 192) = v31 + 284;
              if ( *(char *)(v79 + *(_DWORD *)(v7 + 16) + 3) >= 0 )
              {
                if ( *(_DWORD *)(a1 + 108) != 0 )
                  sub_447BC0(*(_DWORD *)(a1 + 108));
                *(_DWORD *)(a1 + 108) = v31;
              }
              *(_WORD *)(v31 + 38) = *(_WORD *)(a1 + 38);
              v35 = (__int16 *)(*(_DWORD *)(v31 + 192) + 16);
              *(_DWORD *)(v31 + 124) = 0;
              RotMatrix(v35, (_WORD *)(v31 + 128));
              ScaleMatrix((__int16 *)(v31 + 128), *(_DWORD **)(v31 + 192));
              TransMatrix((_DWORD *)(v31 + 128), (_DWORD *)(*(_DWORD *)(v31 + 192) + 24));
              v36 = (__int16 *)(v31 + 124);
              v70 = (__int16 *)(v31 + 124);
              v71 = 0;
              v72 = 0;
              v73 = 0;
              if ( v31 != -124 )
              {
                do
                {
                  gte_ApplyMatrix(v36 + 2, &v71, &v74);
                  v74 += *((_DWORD *)v70 + 6);
                  v75 += *((_DWORD *)v70 + 7);
                  v76 += *((_DWORD *)v70 + 8);
                  v71 = v74;
                  v72 = v75;
                  v73 = v76;
                  v70 = *((__int16 **)v70 + 18);
                  v36 = v70;
                }
                while ( v70 != NULL );
              }
              *(_DWORD *)(v31 + 228) = v74;
              *(_DWORD *)(v31 + 232) = v75;
              *(_DWORD *)(v31 + 236) = v76;
            }
            v28 = v79;
          }
          v37 = v28 + *(_DWORD *)(v7 + 16);
          if ( (*(_BYTE *)(v37 + 2) & 2) != 0 )
          {
            v38 = sub_448EB0(*(_WORD *)v37, a1 + 88, a1 + 220);
            v39 = v38;
            if ( v38 != 0 )
            {
              *(_WORD *)(v38 + 38) = *(_WORD *)(a1 + 38);
              if ( a1 == dword_4B324C )
                *(_DWORD *)(v38 + 12) |= 0x20000u;
              if ( (*(_BYTE *)(v79 + *(_DWORD *)(v7 + 16) + 3) & 0x20) != 0 )
              {
                v67 = (__int16 *)(*(_DWORD *)(v38 + 192) + 16);
                *(_DWORD *)(v38 + 124) = 0;
                RotMatrix(v67, (_WORD *)(v38 + 128));
                ScaleMatrix((__int16 *)(v39 + 128), *(_DWORD **)(v39 + 192));
                TransMatrix((_DWORD *)(v39 + 128), (_DWORD *)(*(_DWORD *)(v39 + 192) + 24));
                *(_WORD *)(v39 + 130) = 0;
                *(_WORD *)(v39 + 128) = 4096;
                *(_WORD *)(v39 + 132) = 0;
                *(_WORD *)(v39 + 134) = 0;
                *(_WORD *)(v39 + 136) = 4096;
                *(_WORD *)(v39 + 138) = 0;
                *(_WORD *)(v39 + 140) = 0;
                *(_WORD *)(v39 + 142) = 0;
                *(_WORD *)(v39 + 144) = 4096;
                *(_DWORD *)(v39 + 148) = 0;
                *(_DWORD *)(v39 + 152) = 0;
                *(_DWORD *)(v39 + 156) = 0;
                for ( k = *(_DWORD *)(a1 + 104); k != 0; k = *(_DWORD *)(k + 72) )
                  MulMatrix2((__int16 *)(k + 4), (__int16 *)(v39 + 128));
                v40 = *(_DWORD *)(v39 + 12);
                LOBYTE(v40) = v40 | 0x20;
                *(_DWORD *)(v39 + 12) = v40;
              }
              else
              {
                *(_DWORD *)(v38 + 204) = **(_DWORD **)(*(_DWORD *)(a1 + 104) + 68);
                *(_DWORD *)(v38 + 208) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 104) + 68) + 4);
                *(_DWORD *)(v38 + 212) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 104) + 68) + 8);
              }
            }
          }
          if ( (*(_BYTE *)(v79 + *(_DWORD *)(v7 + 16) + 2) & 0x20) != 0 )
          {
            v41 = *(_DWORD *)(a1 + 108);
            if ( v41 != 0 )
            {
              v42 = *(_DWORD *)(v41 + 20);
              *(_DWORD *)(v41 + 196) = 0;
              BYTE1(v42) = BYTE1(v42) & 0xE7 | 0x10;
              *(_DWORD *)(v41 + 192) = v41 + 204;
              *(_DWORD *)(v41 + 20) = v42;
              *(_DWORD *)(v41 + 228) = *(_DWORD *)(a1 + 88);
              *(_DWORD *)(v41 + 232) = *(_DWORD *)(a1 + 92);
              *(_DWORD *)(v41 + 236) = *(_DWORD *)(a1 + 96);
              *(_WORD *)(v41 + 38) = *(_WORD *)(a1 + 38);
              *(_WORD *)(v41 + 220) = *(_WORD *)(a1 + 220);
              *(_WORD *)(v41 + 222) = *(_WORD *)(a1 + 222);
              *(_WORD *)(v41 + 224) = *(_WORD *)(a1 + 224);
              *(_DWORD *)(v41 + 112) = 0;
              *(_DWORD *)(a1 + 108) = 0;
              v68 = (__int16 *)(*(_DWORD *)(v41 + 192) + 16);
              *(_DWORD *)(v41 + 124) = 0;
              RotMatrix(v68, (_WORD *)(v41 + 128));
              ScaleMatrix((__int16 *)(v41 + 128), *(_DWORD **)(v41 + 192));
              TransMatrix((_DWORD *)(v41 + 128), (_DWORD *)(*(_DWORD *)(v41 + 192) + 24));
              sub_437860(a1, (_DWORD *)v41, a5);
              v43 = dword_4B324C;
              if ( a1 != dword_4B324C )
                goto LABEL_97;
              *(_DWORD *)(v41 + 12) |= 0x20000u;
            }
          }
          v43 = dword_4B324C;
LABEL_97:
          v44 = v79 + *(_DWORD *)(v7 + 16);
          if ( (*(_BYTE *)(v44 + 3) & 4) != 0 )
          {
            v45 = (_DWORD *)sub_448EB0(*(_WORD *)v44, a1 + 88, a1 + 220);
            v46 = v45;
            if ( v45 != NULL )
            {
              sub_437860(a1, v45, a5);
              *((_WORD *)v46 + 19) = *(_WORD *)(a1 + 38);
              *((_WORD *)v46 + 111) += *(_WORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 104) + 68) + 18);
              v43 = dword_4B324C;
              if ( a1 != dword_4B324C )
                goto LABEL_102;
              v46[3] |= 0x20000u;
            }
            v43 = dword_4B324C;
          }
LABEL_102:
          v47 = v79 + *(_DWORD *)(v7 + 16);
          if ( (*(_BYTE *)(v47 + 3) & 2) != 0 )
          {
            v48 = (_DWORD *)sub_448EB0(*(_WORD *)v47, a1 + 88, a1 + 220);
            v49 = v48;
            if ( v48 != NULL )
            {
              sub_437860(a1, v48, a5);
              *((_WORD *)v49 + 110) += *(_WORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 104) + 68) + 16);
              *((_WORD *)v49 + 19) = *(_WORD *)(a1 + 38);
              v43 = dword_4B324C;
              if ( a1 != dword_4B324C )
                goto LABEL_107;
              v49[3] |= 0x20000u;
            }
            v43 = dword_4B324C;
          }
LABEL_107:
          v50 = v79;
          v51 = *(_WORD *)(v79 + *(_DWORD *)(v7 + 16) + 2);
          if ( (v51 & 4) != 0 && (*(_DWORD *)(v43 + 20) & 0x3000000) == 0 )
          {
            if ( (v51 & 0x1000) != 0
              || (v33 = !sub_4349B0(v43, (_WORD *)(a1 + 88), a5), v43 = dword_4B324C, !v33) )
            {
              if ( *(_DWORD *)(v43 + 112) != 0 )
              {
                *(_DWORD *)(v43 + 196) = 0;
                *(_DWORD *)(dword_4B324C + 192) = dword_4B324C + 204;
                *(_DWORD *)(*(_DWORD *)(dword_4B324C + 112) + 108) = 0;
                *(_DWORD *)(dword_4B324C + 112) = 0;
                *(_DWORD *)(dword_4B324C + 20) &= 0xFFFFFFEB;
                v43 = dword_4B324C;
              }
              v52 = *(_DWORD *)(v43 + 108);
              if ( v52 != 0 )
              {
                v53 = *(_DWORD *)(v52 + 20);
                *(_DWORD *)(v52 + 196) = 0;
                BYTE1(v53) = BYTE1(v53) & 0xE7 | 0x10;
                *(_DWORD *)(v52 + 192) = v52 + 204;
                *(_DWORD *)(v52 + 20) = v53;
                *(_WORD *)(v52 + 38) = *(_WORD *)(a1 + 38);
                *(_WORD *)(v52 + 220) = *(_WORD *)(dword_4B324C + 220);
                *(_WORD *)(v52 + 222) = *(_WORD *)(dword_4B324C + 222);
                v54 = *(_WORD *)(dword_4B324C + 224);
                *(_DWORD *)(v52 + 112) = 0;
                *(_WORD *)(v52 + 224) = v54;
                *(_DWORD *)(dword_4B324C + 108) = 0;
                v69 = (__int16 *)(*(_DWORD *)(v52 + 192) + 16);
                *(_DWORD *)(v52 + 124) = 0;
                RotMatrix(v69, (_WORD *)(v52 + 128));
                ScaleMatrix((__int16 *)(v52 + 128), *(_DWORD **)(v52 + 192));
                TransMatrix((_DWORD *)(v52 + 128), (_DWORD *)(*(_DWORD *)(v52 + 192) + 24));
                sub_437860(dword_4B324C, (_DWORD *)v52, a5);
                v43 = dword_4B324C;
              }
              if ( *(char *)(v79 + *(_DWORD *)(v7 + 16) + 2) >= 0 )
              {
                *(_DWORD *)(v43 + 420) = *(_DWORD *)(v43 + 228) - *(_DWORD *)(a1 + 88);
                *(_DWORD *)(dword_4B324C + 424) = *(_DWORD *)(dword_4B324C + 232) - *(_DWORD *)(a1 + 92);
                *(_DWORD *)(dword_4B324C + 428) = *(_DWORD *)(dword_4B324C + 236) - *(_DWORD *)(a1 + 96);
              }
              else
              {
                *(_DWORD *)(v43 + 420) = 0;
                *(_DWORD *)(dword_4B324C + 424) = 0;
                *(_DWORD *)(dword_4B324C + 428) = 0;
              }
              *(_DWORD *)(dword_4B324C + 228) = *(_DWORD *)(a1 + 88);
              *(_DWORD *)(dword_4B324C + 232) = *(_DWORD *)(a1 + 92);
              *(_DWORD *)(dword_4B324C + 236) = *(_DWORD *)(a1 + 96);
              *(_DWORD *)(dword_4B324C + 396) = 4096;
              *(_DWORD *)(dword_4B324C + 400) = 4096;
              *(_DWORD *)(dword_4B324C + 404) = 4096;
              *(_WORD *)(dword_4B324C + 412) = 0;
              *(_WORD *)(dword_4B324C + 414) = 0;
              *(_WORD *)(dword_4B324C + 416) = 0;
              *(_DWORD *)(dword_4B324C + 192) = dword_4B324C + 396;
              *(_DWORD *)(dword_4B324C + 196) = *(_DWORD *)(a1 + 104);
              *(_WORD *)(dword_4B324C + 382) = 0;
              *(_WORD *)(dword_4B324C + 380) = *(_WORD *)(v79 + *(_DWORD *)(v7 + 16));
              *(_DWORD *)(dword_4B324C + 20) = 4;
              *(_DWORD *)(a1 + 108) = dword_4B324C;
              *(_DWORD *)(dword_4B324C + 112) = a1;
              v55 = dword_4B324C;
              *(_DWORD *)(dword_4B324C + 124) = 0;
              v56 = v55 + 124;
              v81 = (__int16 *)(v55 + 128);
              RotMatrix((__int16 *)(*(_DWORD *)(v55 + 192) + 16), (_WORD *)(v55 + 128));
              ScaleMatrix(v81, *(_DWORD **)(v56 + 68));
              TransMatrix(v81, (_DWORD *)(*(_DWORD *)(v56 + 68) + 24));
              v43 = dword_4B324C;
              v50 = v79;
            }
          }
          v57 = *(_WORD *)(v50 + *(_DWORD *)(v7 + 16) + 2);
          if ( (v57 & 8) != 0 && *(_DWORD *)(v43 + 112) == a1 && *(_DWORD *)(a1 + 108) != 0 )
          {
            if ( (v57 & 0x80u) != 0 )
            {
              *(_DWORD *)(v43 + 228) = *(_DWORD *)(a1 + 88);
              *(_DWORD *)(dword_4B324C + 232) = *(_DWORD *)(a1 + 92);
              *(_DWORD *)(dword_4B324C + 236) = *(_DWORD *)(a1 + 96);
              v43 = dword_4B324C;
            }
            *(_WORD *)(v43 + 220) = *(_WORD *)(a1 + 220);
            *(_WORD *)(dword_4B324C + 222) = *(_WORD *)(a1 + 222) + 2048;
            *(_WORD *)(dword_4B324C + 224) = *(_WORD *)(a1 + 224);
            *(_DWORD *)(dword_4B324C + 192) = dword_4B324C + 204;
            *(_DWORD *)(dword_4B324C + 196) = 0;
            *(_DWORD *)(dword_4B324C + 112) = 0;
            *(_DWORD *)(a1 + 108) = 0;
            *(_WORD *)(dword_4B324C + 382) = 0;
            *(_WORD *)(dword_4B324C + 380) = *(_WORD *)(v50 + *(_DWORD *)(v7 + 16));
            sub_437860(a1, (_DWORD *)dword_4B324C, a5);
            v58 = *(_DWORD *)(a1 + 388);
            if ( v58 != 0 )
              *((_BYTE *)dword_52FD00 + 65601) -= *(_BYTE *)(v58 + 22);
            *(_DWORD *)(dword_4B324C + 20) &= 0xFDFFFFDB;
            v43 = dword_4B324C;
          }
          if ( (*(_BYTE *)(v50 + *(_DWORD *)(v7 + 16) + 3) & 1) != 0
            && (*(_DWORD *)(v43 + 20) & 0x3000020) == 0
            && *(_DWORD *)(v43 + 112) == 0
            && sub_4349B0(v43, (_WORD *)(a1 + 88), a5) )
          {
            *(_WORD *)(dword_4B324C + 222) = *(_WORD *)(a1 + 222) + 2048;
            *(_WORD *)(dword_4B324C + 382) = 0;
            *(_WORD *)(dword_4B324C + 380) = *(_WORD *)(v79 + *(_DWORD *)(v7 + 16));
            *(_DWORD *)(dword_4B324C + 20) = 0x2000000;
          }
          goto LABEL_132;
        }
      }
      else
      {
LABEL_133:
        if ( *(_BYTE *)(v7 + 8) == 0 )
        {
          v59 = *(_BYTE *)(v7 + 5);
          ++*(_WORD *)(v7 + 2);
          *(_BYTE *)(v7 + 8) = v59;
        }
      }
    }
    v60 = *(_WORD *)v7;
    v61 = *(_BYTE *)(v7 + 8) - 1;
    v62 = *(_WORD *)v7;
    *(_BYTE *)(v7 + 8) = v61;
    v63 = v61;
    v64 = *(_WORD *)(v7 + 2);
    if ( v64 == v62 - 1 )
    {
      v65 = *(_DWORD *)(v7 + 24);
      BYTE1(v65) |= 0x20u;
      *(_DWORD *)(v7 + 24) = v65;
    }
    if ( v63 == 0 && v64 == v60 )
    {
      v8 = *(_DWORD *)(v7 + 24);
      if ( (v8 & 2) != 0 )
        goto LABEL_140;
    }
    return 512;
  }
  if ( (a4 & 0x20) != 0 )
  {
    *(_DWORD *)(a2 + 24) = 256;
    return 32;
  }
  v7 = a2;
  if ( (a4 & 4) != 0 )
  {
    v9 = *(_DWORD *)(a2 + 24);
    if ( (v9 & 0x10) != 0 )
    {
      LOBYTE(v9) = v9 & 0xEF;
      *(_DWORD *)(a2 + 24) = v9;
      goto LABEL_12;
    }
  }
  if ( (a4 & 0x10) == 0 )
    goto LABEL_12;
  v66 = *(_DWORD *)(a2 + 24);
  LOBYTE(v66) = v66 | 0x10;
  *(_DWORD *)(a2 + 24) = v66;
  return 512;
}

// 0x43a3c0  sub_43A3C0
char __cdecl sub_43A3C0(int a1)
{
  __int16 v1; // dx
  int v2; // eax
  char v3; // cl
  int v4; // eax
  int v5; // eax
  __int16 v6; // dx
  int v7; // edx
  unsigned int v8; // edx

  v1 = *(_WORD *)(a1 + 264);
  v2 = *(_DWORD *)(a1 + 20);
  if ( v1 >= 2048 )
    LOBYTE(v2) = v2 | 8;
  else
    LOBYTE(v2) = v2 & 0xF7;
  *(_DWORD *)(a1 + 20) = v2;
  if ( v1 <= 3072 && ((v3 = v2, (v2 & 4) == 0) ? (v4 = 1) : (v4 = v2 & 0x10), v4 != 0) )
  {
    if ( (v3 & 8) != 0 )
    {
      v5 = -(*(__int16 *)(a1 + 260) * rsin(v1)) >> 11;
      LOBYTE(v5) = v5 & 0xFE;
    }
    else
    {
      v5 = -(*(__int16 *)(a1 + 260) * rsin(v1)) >> 12;
    }
    v6 = *(_WORD *)(a1 + 262);
    *(_WORD *)(a1 + 266) = v5;
    *(_WORD *)(a1 + 264) += v6;
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 20);
    *(_WORD *)(a1 + 266) = 0;
    v8 = v7 & 0xFFFFFFF6;
    v5 = v8;
    *(_DWORD *)(a1 + 20) = v8;
    if ( (v8 & 2) == 0 )
    {
      BYTE1(v5) = BYTE1(v8) | 2;
      *(_DWORD *)(a1 + 20) = v5;
    }
  }
  return v5;
}

// 0x43a480  sub_43A480
int __cdecl sub_43A480(_WORD *a1, _WORD *a2, int a3, int a4)
{
  _WORD *v4; // ecx
  int v6; // ebp
  bool v7; // zf
  int v8; // eax
  unsigned int v9; // ecx
  __int16 v10; // dx
  int v11; // eax
  int v12; // ecx
  int v13; // ebx
  int v14; // edi
  int v15; // ecx
  _DWORD *v16; // eax
  _DWORD **v17; // ecx
  _DWORD *v18; // eax
  int v19; // ebx
  int v20; // edi
  __int16 v21; // cx
  __int16 v22; // ax
  __int16 v23; // dx
  __int16 v24; // cx
  __int16 v25; // di
  int v26; // eax
  bool v27; // sf
  __int16 *v28; // ebp
  _WORD *v29; // eax
  int v30; // ecx
  __int16 *v31; // edi
  _WORD *v32; // eax
  int v33; // ecx
  __int16 v34; // di
  int v35; // ecx
  int v36; // edi
  int v37; // edx
  int v38; // eax
  __int16 v39; // dx
  int v40; // ebx
  int v41; // eax
  int v42; // edx
  int v43; // eax
  int v44; // eax
  int v46; // ecx
  int v47; // edx
  int i; // [esp+10h] [ebp-20h]
  __int16 v49; // [esp+14h] [ebp-1Ch]
  __int16 v50; // [esp+18h] [ebp-18h]
  __int16 v51; // [esp+1Ch] [ebp-14h]
  int v52[4]; // [esp+20h] [ebp-10h] BYREF
  int v53; // [esp+3Ch] [ebp+Ch]
  int j; // [esp+3Ch] [ebp+Ch]
  __int16 v55; // [esp+3Ch] [ebp+Ch]

  v4 = a1;
  v6 = 0;
  *(_WORD *)(a3 + 56) = a1[36];
  *(_WORD *)(a3 + 58) = a1[37];
  *(_WORD *)(a3 + 60) = a1[38];
  *(_WORD *)(a3 + 64) = a1[40];
  *(_WORD *)(a3 + 66) = a1[41];
  *(_WORD *)(a3 + 68) = a1[42];
  v7 = dword_4B39AC == 0;
  *(_DWORD *)(a3 + 48) = dword_4B39AC;
  if ( !v7 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(a3 + 48);
      if ( (a4 & *(_DWORD *)(v8 + 8)) == 0
        || (*(_BYTE *)(v8 + 20) & 1) != 0
        || *(_WORD *)(v8 + 38) != v4[19]
        || *(_WORD *)(v8 + 42) != 2
        || v4 == (_WORD *)v8
        || *(_DWORD *)(v8 + 120) == 0 )
      {
        goto LABEL_53;
      }
      *(_WORD *)(a3 + 40) = *a2;
      *(_WORD *)(a3 + 42) = a2[2];
      *(_WORD *)(a3 + 44) = a2[4];
      *(_WORD *)(a3 + 40) -= *(_WORD *)(v8 + 228);
      *(_WORD *)(a3 + 42) -= *(_WORD *)(v8 + 232);
      *(_WORD *)(a3 + 44) -= *(_WORD *)(v8 + 236);
      v9 = *(__int16 *)(a3 + 40) * *(__int16 *)(a3 + 40) + *(__int16 *)(a3 + 44) * *(__int16 *)(a3 + 44);
      *(_DWORD *)(a3 + 488) = v9;
      if ( v9 <= *(_DWORD *)(v8 + 48) )
      {
        *(_WORD *)(a3 + 32) = 4096 - *(_WORD *)(v8 + 220);
        v10 = 4096 - *(_WORD *)(v8 + 222);
        *(_WORD *)(a3 + 32) = 0;
        *(_WORD *)(a3 + 36) = 0;
        *(_WORD *)(a3 + 34) = v10;
        RotMatrixZYX((__int16 *)(a3 + 32), (_WORD *)a3);
        ApplyMatrix((__int16 *)a3, (__int16 *)(a3 + 40), (int *)(a3 + 492));
        v11 = *(_DWORD *)(a3 + 48);
        v12 = *(__int16 *)(v11 + 32);
        *(_DWORD *)(a3 + 488) = v12;
        if ( (*(_DWORD *)(v11 + 8) & 0x400000) != 0 )
        {
          v13 = *(_DWORD *)(a3 + 492);
          if ( v13 >= -v12 && v13 <= v12 )
          {
            v14 = *(_DWORD *)(a3 + 500);
            if ( v14 >= -v12 && v14 <= v12 )
            {
              v15 = *(_DWORD *)(a3 + 496) - 300;
              if ( v15 >= 0 && v15 <= *(__int16 *)(v11 + 334) )
              {
                v46 = *(_DWORD *)(a3 + 48);
                *(_DWORD *)(a3 + 72) = v46;
                *(_DWORD *)(a3 + 76) = v46 + 124;
                *(_WORD *)(a3 + 82) = *(_WORD *)(a3 + 496);
                return a3 + 72;
              }
            }
          }
          goto LABEL_52;
        }
        v16 = *(_DWORD **)(v11 + 120);
        *(_DWORD *)(a3 + 52) = v16;
        if ( *v16 != 0 )
        {
          do
          {
            v17 = *(_DWORD ***)(a3 + 52);
            v18 = *v17;
            *(_DWORD *)(a3 + 52) = *v17;
          }
          while ( *v18 != 0 );
        }
        v19 = *(_DWORD *)(*(_DWORD *)(a3 + 52) + 16);
        memset(v52, 0, 12);
        sub_408E10(v52);
        for ( i = 0; *(_DWORD *)(v19 + 72) != 0; i = ++v6 )
        {
          if ( (__int16)v6 >= 20 )
            break;
          v20 = a3 + 20 * (__int16)v6;
          *(_WORD *)(v20 + 88) = *(_WORD *)(*(_DWORD *)(v19 + 68) + 24);
          *(_WORD *)(v20 + 90) = *(_WORD *)(*(_DWORD *)(v19 + 68) + 28);
          v21 = *(_WORD *)(*(_DWORD *)(v19 + 68) + 32);
          *(_DWORD *)(v20 + 104) = v19;
          *(_WORD *)(v20 + 92) = v21;
          if ( (__int16)v6 >= 2 )
          {
            sub_408BF0((__int16 *)(*(_DWORD *)(v20 + 84) + 4));
            v22 = *(_WORD *)(v20 + 70);
            v23 = *(_WORD *)(v20 + 68);
            v24 = *(_WORD *)(v20 + 72);
            v25 = v6 - 2;
            v50 = v22;
            v26 = (__int16)(v6 - 2);
            v51 = v24;
            v49 = v23;
            v27 = (__int16)(v6 - 2) < 0;
            v28 = (__int16 *)(a3 + 20 * v26 + 88);
            if ( !v27 )
            {
              v53 = v26 + 1;
              do
              {
                sub_408D10(v28);
                sub_408D70();
                sub_408D40(v28);
                v28 -= 10;
                --v53;
              }
              while ( v53 != 0 );
              v23 = v49;
            }
            v29 = (_WORD *)(a3 + 20 * v25 + 88);
            if ( v25 >= 0 )
            {
              v30 = v25 + 1;
              do
              {
                *v29 += v23;
                v29[1] += v50;
                v29[2] += v51;
                v29 -= 10;
                --v30;
              }
              while ( v30 != 0 );
            }
            v6 = i;
          }
          v19 = *(_DWORD *)(v19 + 72);
        }
        *(_WORD *)(a3 + 32) = *(_WORD *)(*(_DWORD *)(v19 + 68) + 16);
        *(_WORD *)(a3 + 36) = 0;
        *(_WORD *)(a3 + 34) = 0;
        RotMatrixZYX((__int16 *)(a3 + 32), (_WORD *)a3);
        sub_408BF0((__int16 *)a3);
        v31 = (__int16 *)(a3 + 88);
        if ( (__int16)v6 > 0 )
        {
          for ( j = (__int16)v6; j != 0; --j )
          {
            sub_408D10(v31);
            sub_408D70();
            sub_408D40(v31);
            v31 += 10;
          }
        }
        *(_WORD *)(a3 + 98) = *(_WORD *)(*(_DWORD *)(a3 + 48) + 334);
        *(_WORD *)(a3 + 100) = 0;
        if ( (__int16)v6 > 1 )
        {
          v32 = (_WORD *)(a3 + 90);
          v33 = (__int16)v6 - 1;
          do
          {
            v34 = *v32 - v32[10];
            v32 += 10;
            v32[4] = v34;
            --v33;
            v32[5] = *(v32 - 9) - v32[1];
          }
          while ( v33 != 0 );
        }
        v55 = 0;
        v35 = a3 + 88;
        if ( (__int16)v6 > 0 )
        {
          v36 = *(_DWORD *)(a3 + 488);
          v37 = *(_DWORD *)(a3 + 492);
          v38 = -v36;
          while ( 1 )
          {
            if ( v37 >= v38 && v37 <= v36 )
            {
              v39 = *(_WORD *)(v35 + 12);
              v40 = *(_DWORD *)(a3 + 500);
              v41 = *(__int16 *)(v35 + 4);
              if ( v39 < 0 )
              {
                if ( v40 < v41 + v39 - v36 || v40 > v36 + v41 )
                  goto LABEL_50;
              }
              else if ( v40 > v36 + v41 + v39 || v40 < v41 - v36 )
              {
                goto LABEL_50;
              }
              v42 = *(__int16 *)(v35 + 2);
              v43 = *(_DWORD *)(a3 + 496) - 300;
              if ( v43 > v42 && v43 < v42 + *(__int16 *)(v35 + 10) )
              {
                *(_DWORD *)(*(_DWORD *)(a3 + 48) + 316) = *(_DWORD *)(v35 + 16);
                v47 = *(_DWORD *)(a3 + 48);
                *(_DWORD *)(a3 + 72) = v47;
                *(_DWORD *)(a3 + 76) = v47 + 124;
                *(_WORD *)(a3 + 80) = *(_WORD *)v35;
                *(_WORD *)(a3 + 82) = *(_WORD *)(a3 + 496);
                *(_WORD *)(a3 + 84) = *(_WORD *)(v35 + 4);
                return a3 + 72;
              }
            }
LABEL_50:
            v35 += 20;
            if ( ++v55 >= (__int16)v6 )
              break;
            v38 = -*(_DWORD *)(a3 + 488);
            v37 = *(_DWORD *)(a3 + 492);
          }
        }
        v6 = 0;
      }
LABEL_52:
      v4 = a1;
LABEL_53:
      v44 = *(_DWORD *)(*(_DWORD *)(a3 + 48) + 16);
      *(_DWORD *)(a3 + 48) = v44;
      if ( v44 == 0 )
        return 0;
    }
  }
  return 0;
}

// 0x43a920  sub_43A920
__int16 __usercall sub_43A920/*@<ax>*/(int a1/*@<esi>*/, int a2, int a3, int *a4)
{
  int v5; // edi
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // edx

  *a4 = *(_DWORD *)(a2 + 112);
  if ( *(_DWORD *)(a2 + 112) == 0 )
    return 1;
  v5 = *a4;
  v6 = *(_DWORD **)(*a4 + 120);
  if ( (*(_DWORD *)(*a4 + 8) & 0x400000) != 0 )
  {
    v7 = *(_DWORD *)(a3 + 4) + *(_DWORD *)(a2 + 424) - 300;
    if ( v7 > 0 )
      return v7 >= *(__int16 *)(v5 + 334);
    else
      return 2;
  }
  else
  {
    v8 = *(_DWORD *)(a3 + 4) + *(_DWORD *)(a2 + 424) - 300;
    v9 = 0;
    if ( v6 == NULL )
      goto LABEL_13;
    do
    {
      LOWORD(a1) = *(_WORD *)(v5 + 334);
      v9 += a1;
      if ( v8 < (__int16)v9 )
        break;
      v6 = (_DWORD *)*v6;
    }
    while ( v6 != NULL );
    if ( v6 != NULL && v8 > 0 )
    {
      v10 = v6[4];
      *(_DWORD *)(v5 + 316) = v10;
      return 0;
    }
    else
    {
LABEL_13:
      *(_DWORD *)(v5 + 316) = *(_DWORD *)(*(_DWORD *)(*a4 + 120) + 16);
      return (v8 <= 0) + 1;
    }
  }
}

// 0x43a9f0  sub_43A9F0
int __cdecl sub_43A9F0(int a1)
{
  __int16 *v1; // esi
  signed int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int *v7; // eax
  int v8; // eax
  int v9; // eax
  int *v10; // eax
  int v11; // eax
  int v12; // eax
  int *v13; // eax
  int v14; // eax
  int v15; // eax
  int *v16; // eax
  int v17; // eax
  int v18; // eax
  int *v19; // eax
  int v20; // eax
  int v21; // eax
  int *v22; // eax
  int v23; // eax
  int v24; // eax
  int *v25; // eax
  int v26; // eax
  int v27; // eax
  int *v28; // eax
  int v29; // eax
  int v30; // eax
  int *v31; // eax
  int v32; // eax
  int v33; // eax
  int *v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // edx
  __int16 v40; // ax
  __int16 v41; // bx
  int v42; // ecx
  int v43; // eax
  __int16 v44; // bp
  int v45; // eax
  __int64 v46; // rax
  int v47; // edx
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  __int16 v52; // cx
  __int16 v53; // ax
  __int16 v54; // ax
  __int16 v55; // cx
  int v56; // eax
  int v57; // eax
  int v58; // eax
  __int16 v59; // ax
  __int16 v60; // ax
  int v61; // edx
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  __int16 v67; // ax
  __int16 v68; // ax
  int v69; // eax
  int v70; // ecx
  __int16 v71; // ax
  int *v72; // ebx
  int v73; // eax
  _DWORD *v74; // ebp
  __int16 v75; // cx
  __int16 v76; // ax
  int v77; // eax
  __int16 v78; // ax
  int v79; // eax
  __int16 v80; // ax
  int v81; // eax
  __int16 v82; // ax
  int v83; // eax
  int v84; // eax
  int v85; // eax
  __int16 v86; // cx
  int v87; // eax
  int v88; // edx
  int v89; // eax
  _DWORD *v90; // ebp
  _DWORD *v91; // eax
  __int16 v92; // cx
  int v93; // eax
  int v94; // edx
  int v95; // ecx
  int v96; // eax
  int v97; // ecx
  _DWORD *v98; // ebp
  _DWORD *v99; // eax
  __int16 v100; // cx
  int v101; // eax
  int v102; // edx
  int v103; // ecx
  int v104; // eax
  int v105; // ecx
  _DWORD *v106; // ebp
  int v107; // edx
  int v108; // eax
  int v109; // ecx
  int v110; // eax
  int v111; // edx
  int v112; // ecx
  int v113; // edx
  int v114; // eax
  int v115; // ecx
  _DWORD *v116; // ebp
  int v117; // edx
  int v118; // eax
  int v119; // ecx
  int v120; // eax
  int v121; // edx
  int v122; // ecx
  int v123; // edx
  int v124; // eax
  int v125; // eax
  int v126; // eax
  int *v127; // ebx
  __int16 v128; // ax
  int v129; // ecx
  __int16 v130; // dx
  int v131; // eax
  int v132; // ecx
  __int16 v133; // ax
  __int16 v134; // ax
  int v135; // ecx
  int v136; // ebp
  int v137; // ecx
  int v138; // eax
  int v139; // eax
  int v140; // edx
  int v141; // ecx
  int v142; // ecx
  __int16 v143; // cx
  __int16 v144; // ax
  unsigned int v145; // eax
  int v146; // edx
  int v147; // ecx
  int v148; // eax
  int v149; // edx
  __int16 v150; // ax
  int v151; // edx
  __int16 v152; // ax
  int v153; // ecx
  __int16 v154; // ax
  int v155; // eax
  int v156; // eax
  __int16 v157; // cx
  int v158; // eax
  int v159; // eax
  int v160; // eax
  int v161; // ecx
  int v162; // eax
  int v163; // ecx
  int v164; // eax
  int v165; // eax
  int v166; // ebp
  unsigned int v167; // eax
  __int16 v168; // ax
  __int16 v169; // ax
  __int16 v170; // ax
  int v171; // ecx
  int v172; // edx
  int v173; // edx
  int v174; // eax
  _DWORD *v175; // eax
  int v176; // edx
  int v177; // ecx
  int v178; // eax
  int v179; // eax
  int v180; // ecx
  int v181; // eax
  _DWORD *v182; // ebp
  _DWORD *v183; // eax
  __int16 v184; // cx
  int v185; // eax
  int v186; // edx
  int v187; // ecx
  unsigned int v188; // eax
  int v189; // ecx
  int v190; // eax
  int v191; // ecx
  _DWORD *v192; // ebp
  __int16 v193; // cx
  __int16 v194; // dx
  int v195; // eax
  __int16 v196; // dx
  __int16 v197; // cx
  __int16 v198; // dx
  int v199; // eax
  int v200; // eax
  int v201; // eax
  __int16 v202; // ax
  int i; // ebx
  int v204; // edx
  __int16 *v205; // ebp
  int v206; // ebx
  int v207; // ecx
  int v208; // eax
  int v209; // eax
  bool v210; // zf
  _DWORD *v211; // ebp
  __int16 v212; // bx
  _DWORD *v213; // ebp
  _DWORD *v214; // ebx
  __int16 v215; // dx
  int v216; // eax
  int v217; // eax
  __int16 v218; // cx
  int v219; // eax
  __int16 v220; // dx
  int v221; // eax
  int v222; // eax
  __int16 v223; // ax
  int v224; // ecx
  __int16 v225; // dx
  int v226; // eax
  int v227; // ecx
  int v228; // ecx
  __int16 v229; // dx
  int *v230; // eax
  int v231; // ecx
  int v232; // eax
  int v233; // ecx
  __int16 *v234; // edx
  int v235; // eax
  int v236; // eax
  int v237; // ecx
  int v238; // ecx
  int v239; // eax
  int v240; // edx
  int v241; // eax
  int v242; // edx
  int v243; // ecx
  int v244; // eax
  int v245; // edx
  int v246; // eax
  int v247; // ecx
  int v248; // eax
  int v249; // ecx
  int v250; // eax
  int v251; // edx
  int v252; // eax
  int v253; // edx
  int v254; // eax
  int v255; // eax
  int v256; // ecx
  int v257; // ecx
  int v258; // eax
  int v259; // edx
  int v260; // eax
  int v261; // ecx
  int v262; // eax
  int v263; // eax
  int v264; // ecx
  int v265; // ebx
  int v266; // ecx
  int v267; // eax
  int v268; // edx
  int v269; // eax
  __int16 v270; // ax
  int v271; // ecx
  int v272; // eax
  int v273; // ecx
  __int16 v274; // ax
  int v275; // ecx
  char v276; // al
  int v277; // eax
  int v278; // eax
  int v279; // ebx
  int v280; // ebp
  __int16 *v281; // ebx
  int v282; // eax
  int v283; // ebp
  int v284; // ebx
  int v285; // eax
  unsigned int v286; // eax
  int v287; // eax
  __int16 v288; // ax
  int v289; // eax
  int v290; // ecx
  _DWORD *v291; // ebp
  int v292; // edx
  int v293; // eax
  int v294; // ecx
  int v295; // eax
  int v296; // edx
  int v297; // ecx
  int v298; // edx
  int v299; // eax
  int v300; // ebp
  int v301; // ebx
  int v302; // ecx
  _DWORD *v303; // ebx
  _DWORD *v304; // eax
  __int16 v305; // cx
  int v306; // eax
  int v307; // edx
  int v308; // ecx
  int v309; // eax
  _DWORD *v310; // ecx
  int v311; // eax
  int v312; // ecx
  unsigned int v313; // eax
  int v314; // eax
  int v315; // ecx
  __int16 *v316; // eax
  int v317; // eax
  int v318; // eax
  int v319; // ecx
  int v320; // eax
  int *v321; // eax
  int v322; // eax
  int v323; // eax
  int v324; // ecx
  int v325; // edx
  int v326; // eax
  int v327; // edx
  int v328; // eax
  int v329; // eax
  int v330; // eax
  int v331; // edx
  int v332; // eax
  int v333; // edx
  unsigned __int16 v334; // ax
  unsigned __int16 v335; // ax
  int v336; // eax
  __int16 v337; // ax
  int v338; // eax
  __int16 v339; // cx
  int v340; // eax
  int v341; // ecx
  __int16 v342; // ax
  int v343; // eax
  int v344; // eax
  __int16 v345; // cx
  int *v346; // eax
  int v347; // eax
  int v348; // eax
  int *v349; // eax
  int v350; // eax
  int v351; // eax
  int *v352; // eax
  int v353; // eax
  _WORD *v354; // ebx
  int v355; // edx
  int v356; // ecx
  _DWORD *v357; // ebp
  int v358; // eax
  int v359; // eax
  int v360; // ecx
  int v361; // eax
  int v362; // eax
  int v363; // ebx
  int v364; // ebp
  int v365; // eax
  _DWORD *v366; // ebp
  int v367; // edx
  int v368; // eax
  int v369; // ecx
  int v370; // eax
  int v371; // edx
  int v372; // ecx
  int v373; // edx
  int v374; // eax
  int v375; // eax
  int v376; // ecx
  int **v377; // ebp
  int v378; // eax
  int v379; // eax
  int v380; // eax
  __int16 v381; // dx
  int v382; // eax
  int v383; // eax
  int v384; // eax
  int v385; // ecx
  int v386; // eax
  int v387; // eax
  int result; // eax
  int v389; // [esp-8h] [ebp-20h]
  int v390; // [esp-8h] [ebp-20h]
  __int16 *v391; // [esp-8h] [ebp-20h]
  __int16 *v392; // [esp-8h] [ebp-20h]
  __int16 *v393; // [esp-8h] [ebp-20h]
  __int16 *v394; // [esp-8h] [ebp-20h]
  int *v395; // [esp+10h] [ebp-8h]
  int v396; // [esp+14h] [ebp-4h]
  int v397; // [esp+1Ch] [ebp+4h]
  int v398; // [esp+1Ch] [ebp+4h]
  __int16 v399; // [esp+1Ch] [ebp+4h]
  int v400; // [esp+1Ch] [ebp+4h]
  __int16 v401; // [esp+1Ch] [ebp+4h]
  int v402; // [esp+1Ch] [ebp+4h]
  int v403; // [esp+1Ch] [ebp+4h]
  int v404; // [esp+1Ch] [ebp+4h]
  __int16 v405; // [esp+1Ch] [ebp+4h]
  __int16 v406; // [esp+1Ch] [ebp+4h]
  int v407; // [esp+1Ch] [ebp+4h]
  int v408; // [esp+1Ch] [ebp+4h]
  __int16 v409; // [esp+1Ch] [ebp+4h]
  int v410; // [esp+1Ch] [ebp+4h]
  __int16 v411; // [esp+1Ch] [ebp+4h]

  v1 = (__int16 *)dword_4EFAC0;
  v395 = (int *)((char *)dword_4EFAC0 + 328);
  memset(dword_4EFAC0, 0, 0x148u);
  dword_4B3C24 = *(_DWORD *)(a1 + 20);
  v3 = *(_DWORD *)(a1 + 20) & 0xFFF9BFFF;
  *(_DWORD *)(a1 + 20) = v3;
  if ( *((_BYTE *)dword_52FD00 + 65615) == 0 && ((dword_4B3940 & 0x100) != 0 || v3 < 0) )
  {
    dword_4B3C18 = 0;
    dword_4B3C10 = 0;
    dword_4B3C38 = 0;
    dword_4B3C30 = 0;
    dword_4B3B90 = 2048;
    if ( (dword_4B3940 & 0x200) == 0 )
      *((_WORD *)dword_52FD00 + 32773) &= 0x800u;
  }
  if ( (dword_4B3748 & 2) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 4);
    LOBYTE(v4) = v4 & 0xFD;
    *(_DWORD *)(a1 + 4) = v4;
    v5 = *(_DWORD *)(a1 + 24);
    BYTE1(v5) |= 1u;
    *(_DWORD *)(a1 + 24) = v5;
    *(_DWORD *)(a1 + 20) |= 0x80000000;
  }
  if ( *(_DWORD *)(a1 + 120) == 0 )
  {
    *(_WORD *)(a1 + 224) = 0;
    *(_WORD *)(a1 + 220) = 0;
    dword_4B3C28 = 0;
    dword_4B3160 = 0;
    dword_4B3C00 = 0;
    dword_4B3BB0 = 0;
    dword_4B3BB4 = 0;
    dword_4B3BB8 = 0;
    word_4B3B98 = 0;
    word_4B3B9A = 0;
    word_4B3B9C = 0;
    v6 = *(_DWORD *)(a1 + 244);
    *((_DWORD *)v1 + 54) = v6;
    if ( v6 != 0 )
    {
      do
      {
        v7 = *((int **)v1 + 54);
        if ( *((_WORD *)v7 + 2) == 2 )
          break;
        v8 = *v7;
        *((_DWORD *)v1 + 54) = v8;
      }
      while ( v8 != 0 );
    }
    if ( *((_DWORD *)v1 + 54) == 0 )
    {
      v9 = *(_DWORD *)(a1 + 244);
      *((_DWORD *)v1 + 54) = v9;
      if ( v9 != 0 )
      {
        do
        {
          v10 = *((int **)v1 + 54);
          if ( *((_WORD *)v10 + 2) == 1 )
            break;
          v11 = *v10;
          *((_DWORD *)v1 + 54) = v11;
        }
        while ( v11 != 0 );
      }
    }
    *(_DWORD *)(a1 + 384) = *((_DWORD *)v1 + 54);
    *(_WORD *)(a1 + 382) = 0;
    v1[112] = *(_WORD *)(*((_DWORD *)v1 + 54) + 6);
    v12 = *(_DWORD *)(a1 + 248);
    *((_DWORD *)v1 + 51) = v12;
    if ( v12 != 0 )
    {
      do
      {
        v13 = *((int **)v1 + 51);
        if ( *((_WORD *)v13 + 2) == v1[112] )
          break;
        v14 = *v13;
        *((_DWORD *)v1 + 51) = v14;
      }
      while ( v14 != 0 );
    }
    v15 = *(_DWORD *)(a1 + 252);
    *((_DWORD *)v1 + 52) = v15;
    if ( v15 != 0 )
    {
      do
      {
        v16 = *((int **)v1 + 52);
        if ( *((_WORD *)v16 + 2) == *(_WORD *)(*((_DWORD *)v1 + 51) + 10) )
          break;
        v17 = *v16;
        *((_DWORD *)v1 + 52) = v17;
      }
      while ( v17 != 0 );
    }
    *(_DWORD *)(a1 + 388) = *((_DWORD *)v1 + 51);
    *(_DWORD *)(a1 + 392) = *((_DWORD *)v1 + 52);
    *(_WORD *)(a1 + 380) = *(_WORD *)(*((_DWORD *)v1 + 54) + 4);
    word_4B3DAC = 0;
    *(_DWORD *)(a1 + 20) = 0;
    dword_4B3C40 = 0;
    dword_4B3C18 = 0;
    dword_4B3C10 = 0;
    dword_4B3C38 = 0;
    dword_4B3C30 = 0;
    dword_4B3B90 = 2048;
    *(_DWORD *)(a1 + 404) = 4096;
    *(_DWORD *)(a1 + 400) = 4096;
    *(_DWORD *)(a1 + 396) = 4096;
    dword_4B3780 = *(_DWORD *)(a1 + 228);
    dword_4B3784 = *(_DWORD *)(a1 + 232);
    dword_4B3788 = *(_DWORD *)(a1 + 236);
    word_4B3C20 = -1;
    dword_4B3B94 = 0;
    dword_4B3B8C = 0;
    sub_4312D0();
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 20) = 0;
  }
  v18 = *(_DWORD *)(a1 + 244);
  *((_DWORD *)v1 + 54) = v18;
  if ( v18 != 0 )
  {
    do
    {
      v19 = *((int **)v1 + 54);
      if ( *((_WORD *)v19 + 2) == *(_WORD *)(a1 + 380) )
        break;
      v20 = *v19;
      *((_DWORD *)v1 + 54) = v20;
    }
    while ( v20 != 0 );
  }
  v1[112] = *(_WORD *)(*((_DWORD *)v1 + 54) + 2 * *(unsigned __int16 *)(a1 + 382) + 6);
  *(_DWORD *)(a1 + 384) = *((_DWORD *)v1 + 54);
  if ( v1[112] == -16 || *(_WORD *)(a1 + 382) >= 5u )
  {
    v27 = *(_DWORD *)(a1 + 244);
    *((_DWORD *)v1 + 54) = v27;
    if ( v27 != 0 )
    {
      do
      {
        v28 = *((int **)v1 + 54);
        if ( *((_WORD *)v28 + 2) == 1 )
          break;
        v29 = *v28;
        *((_DWORD *)v1 + 54) = v29;
      }
      while ( v29 != 0 );
    }
    *(_DWORD *)(a1 + 20) &= 0xFDFFFFDF;
    *(_WORD *)(a1 + 380) = 1;
    *(_DWORD *)(a1 + 384) = *((_DWORD *)v1 + 54);
    *(_WORD *)(a1 + 382) = 0;
    v1[112] = *(_WORD *)(*((_DWORD *)v1 + 54) + 6);
    v30 = *(_DWORD *)(a1 + 248);
    *((_DWORD *)v1 + 51) = v30;
    if ( v30 != 0 )
    {
      do
      {
        v31 = *((int **)v1 + 51);
        if ( *((_WORD *)v31 + 2) == v1[112] )
          break;
        v32 = *v31;
        *((_DWORD *)v1 + 51) = v32;
      }
      while ( v32 != 0 );
    }
    v33 = *(_DWORD *)(a1 + 252);
    *((_DWORD *)v1 + 52) = v33;
    if ( v33 != 0 )
    {
      do
      {
        v34 = *((int **)v1 + 52);
        if ( *((_WORD *)v34 + 2) == *(_WORD *)(*((_DWORD *)v1 + 51) + 10) )
          break;
        v35 = *v34;
        *((_DWORD *)v1 + 52) = v35;
      }
      while ( v35 != 0 );
    }
    word_4B3444 = *(_WORD *)(a1 + 344);
    *(_DWORD *)(a1 + 388) = *((_DWORD *)v1 + 51);
    *(_DWORD *)(a1 + 392) = *((_DWORD *)v1 + 52);
    *(_DWORD *)(a1 + 384) = *((_DWORD *)v1 + 54);
    *(_DWORD *)(a1 + 344) = 0;
    v36 = *(_DWORD *)(a1 + 112);
    if ( v36 != 0 && (*(_BYTE *)(v36 + 8) & 4) != 0 && (*(_BYTE *)(a1 + 20) & 2) != 0 )
    {
      *(_DWORD *)(a1 + 196) = 0;
      *(_DWORD *)(a1 + 192) = a1 + 204;
      *(_WORD *)(a1 + 222) = *(_WORD *)(a1 + 414);
      *(_DWORD *)(*(_DWORD *)(a1 + 112) + 108) = 0;
      *(_DWORD *)(a1 + 112) = 0;
      *(_DWORD *)(a1 + 20) &= ~4u;
    }
  }
  else
  {
    v21 = *(_DWORD *)(a1 + 248);
    *((_DWORD *)v1 + 51) = v21;
    if ( v21 != 0 )
    {
      do
      {
        v22 = *((int **)v1 + 51);
        if ( *((_WORD *)v22 + 2) == v1[112] )
          break;
        v23 = *v22;
        *((_DWORD *)v1 + 51) = v23;
      }
      while ( v23 != 0 );
    }
    v24 = *(_DWORD *)(a1 + 252);
    *((_DWORD *)v1 + 52) = v24;
    if ( v24 != 0 )
    {
      do
      {
        v25 = *((int **)v1 + 52);
        if ( *((_WORD *)v25 + 2) == *(_WORD *)(*((_DWORD *)v1 + 51) + 10) )
          break;
        v26 = *v25;
        *((_DWORD *)v1 + 52) = v26;
      }
      while ( v26 != 0 );
    }
    *(_DWORD *)(a1 + 388) = *((_DWORD *)v1 + 51);
  }
  v37 = *(_DWORD *)(a1 + 24);
  if ( (*(_DWORD *)(*((_DWORD *)v1 + 51) + 16) & 0x1000) != 0 )
    v37 |= 2u;
  else
    LOBYTE(v37) = v37 & 0xFD;
  *(_DWORD *)(a1 + 24) = v37;
  if ( (*(_DWORD *)(*((_DWORD *)v1 + 51) + 16) & 0x2000) != 0 )
  {
    *(_DWORD *)(a1 + 24) |= 4u;
    if ( *(_DWORD *)(dword_4B324C + 436) != 0 )
    {
      byte_4B3242 = 5;
      byte_4B3243 = 80;
      byte_4B3246 = 0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 24) &= ~4u;
  }
  v38 = *((_DWORD *)v1 + 51);
  if ( *(int *)(v38 + 16) < 0 )
  {
    *((_DWORD *)v1 + 75) = a1 + 124;
    v365 = *((_DWORD *)v1 + 75);
    v1[152] = 0;
    v1[153] = 0;
    v1[154] = 0;
    if ( v365 != 0 )
    {
      v366 = v1 + 156;
      do
      {
        gte_ApplyMatrix((__int16 *)(*((_DWORD *)v1 + 75) + 4), v1 + 152, (int *)v1 + 78);
        v367 = *((_DWORD *)v1 + 75);
        v368 = *((_DWORD *)v1 + 79);
        *v366 += *(_DWORD *)(v367 + 24);
        v369 = v367;
        v370 = *(_DWORD *)(v367 + 28) + v368;
        v371 = *((_DWORD *)v1 + 80);
        *((_DWORD *)v1 + 79) = v370;
        v372 = *(_DWORD *)(v369 + 32);
        v1[153] = v1[158];
        *((_DWORD *)v1 + 80) = v372 + v371;
        LOWORD(v372) = v1[160];
        v1[152] = *(_WORD *)v366;
        v373 = *((_DWORD *)v1 + 75);
        v1[154] = v372;
        v374 = *(_DWORD *)(v373 + 72);
        *((_DWORD *)v1 + 75) = v374;
      }
      while ( v374 != 0 );
    }
    *(_DWORD *)(a1 + 228) = *((_DWORD *)v1 + 78);
    *(_DWORD *)(a1 + 232) = *((_DWORD *)v1 + 79);
    *(_DWORD *)(a1 + 236) = *((_DWORD *)v1 + 80);
    goto LABEL_609;
  }
  v39 = *(_DWORD *)(a1 + 20);
  if ( v39 >= 0 || *((_BYTE *)dword_52FD00 + 65615) != 0 )
  {
    if ( (*(_BYTE *)(v38 + 12) & 2) != 0
      && ((*(_DWORD *)(a1 + 20) & 0x80000000) == 0 || *((_BYTE *)dword_52FD00 + 65615) != 0) )
    {
      if ( (v39 & 0x209) == 0 )
        LOWORD(dword_4B39FE) = ratan2(dword_4B38CC - dword_4B38C0, dword_4B38D4 - dword_4B38C8);
      v40 = *((_WORD *)dword_52FD00 + 32777);
      if ( v40 != 0 || *((_WORD *)dword_52FD00 + 32778) != 0 )
      {
        v41 = 128
            / word_4B3234
            * (SquareRoot0(*((__int16 *)dword_52FD00 + 32778) * *((__int16 *)dword_52FD00 + 32778) + v40 * v40)
             - word_4B3234);
        if ( v41 > 128 )
          v41 = 128;
        if ( (*(_DWORD *)(*((_DWORD *)v1 + 51) + 16) & 0x4000000) != 0 )
          *(_WORD *)(a1 + 382) = v41 >= 120;
        v42 = *(_DWORD *)(*((_DWORD *)v1 + 51) + 16);
        if ( (v42 & 0x8000000) != 0 )
        {
          v43 = v41;
          if ( (v42 & 0x4000000) != 0 && v41 < 120 )
            v43 = (4369 * v41) >> 12;
          dword_4B3BC0 += v43;
          *(_BYTE *)(a1 + 329) = 5 - dword_4B3BC0 / 32;
          dword_4B3BC0 %= -32;
        }
        v44 = (unsigned int)(dword_4B2384 * v41 * *(__int16 *)(*((_DWORD *)v1 + 51) + 20)) >> 7;
        if ( v44 == 0 )
          v44 = 1;
        if ( *(_DWORD *)(a1 + 196) != 0 )
        {
          v1[116] = 0;
          v1[117] = 0;
          v1[118] = 1000;
          *((_DWORD *)v1 + 57) = a1 + 124;
          if ( a1 != -124 )
          {
            do
            {
              ApplyMatrixSV((__int16 *)(*((_DWORD *)v1 + 57) + 4), v1 + 116, (_DWORD *)v1 + 58);
              v45 = *(_DWORD *)(*((_DWORD *)v1 + 57) + 72);
              *((_DWORD *)v1 + 57) = v45;
            }
            while ( v45 != 0 );
          }
          *((_DWORD *)v1 + 44) = ratan2(v1[116], v1[118]);
          *(_WORD *)(a1 + 222) = v1[88];
          v46 = (__int16)dword_4B39FE
              + ratan2(*((__int16 *)dword_52FD00 + 32777), *((__int16 *)dword_52FD00 + 32778));
          v47 = *((_DWORD *)v1 + 44)
              - ((HIDWORD(v46) ^ ((WORD2(v46) ^ (unsigned __int16)v46) - WORD2(v46)) & 0xFFF)
               - HIDWORD(v46));
          *((_DWORD *)v1 + 44) = v47;
          if ( v47 > 2048 )
            *((_DWORD *)v1 + 44) = v47 - 4096;
          v48 = *((_DWORD *)v1 + 44);
          if ( v48 < -2048 )
            *((_DWORD *)v1 + 44) = v48 + 4096;
          word_4B3C20 = -v1[88];
          v49 = *((_DWORD *)v1 + 44);
          if ( v49 < 0 )
            *((_DWORD *)v1 + 44) = -v49;
          v50 = 2048 - *((_DWORD *)v1 + 44);
          *((_DWORD *)v1 + 44) = v50;
          v1[6] += (v50 * v44) >> 11;
        }
        else
        {
          *((_DWORD *)v1 + 44) = v44;
          v51 = ratan2(*((__int16 *)dword_52FD00 + 32777), *((__int16 *)dword_52FD00 + 32778));
          v397 = v51;
          if ( (BYTE1(*(_DWORD *)(*((_DWORD *)v1 + 51) + 12)) & 0x80u) == 0 )
          {
            v51 += dword_4B39FE;
            v397 = v51;
          }
          v52 = v397;
          if ( (__int16)v397 > 2048 )
          {
            v51 -= 4096;
            HIWORD(v397) = HIWORD(v51);
            v52 = v51;
          }
          if ( v52 < -2048 )
          {
            v397 = v51 + 4096;
            v52 = v51 + 4096;
          }
          v53 = *(_WORD *)(a1 + 222);
          if ( v53 > 2048 )
            *(_WORD *)(a1 + 222) = v53 - 4096;
          v54 = *(_WORD *)(a1 + 222);
          if ( v54 < -2048 )
            *(_WORD *)(a1 + 222) = v54 + 4096;
          v55 = v52 - *(_WORD *)(a1 + 222);
          LOWORD(v397) = v55;
          v56 = v397;
          if ( v55 > 2048 )
          {
            v56 = v397 - 4096;
            v55 -= 4096;
          }
          if ( v55 < -2048 )
          {
            v56 += 4096;
            v55 = v56;
          }
          *(_WORD *)(a1 + 224) = v55 >> 3;
          word_4B3C20 = v55;
          if ( v55 < 0 )
            v56 = -v56;
          v1[6] += (*((_DWORD *)v1 + 44) * (__int16)(2048 - v56)) >> 11;
        }
      }
      v57 = *((_DWORD *)v1 + 51);
      if ( (*(_DWORD *)(v57 + 12) & 0x100000) != 0 )
        v1[6] += dword_4B2384 * *(_WORD *)(v57 + 20);
    }
    else
    {
      dword_4B3B94 = 0;
      v58 = *((_DWORD *)v1 + 51);
      if ( (*(_DWORD *)(v58 + 12) & 0x100000) != 0 )
        v1[6] += dword_4B2384 * *(_WORD *)(v58 + 20);
      v59 = *(__int16 *)(a1 + 224) >> 2;
      if ( v59 != 0 )
        *(_WORD *)(a1 + 224) = -v59;
      else
        *(_WORD *)(a1 + 224) = 0;
    }
    if ( word_4B3C20 != -1 )
    {
      v60 = word_4B3C20 >> 2;
      if ( word_4B3C20 >> 2 != 0 )
      {
        word_4B3C20 -= v60;
      }
      else
      {
        v60 = word_4B3C20;
        word_4B3C20 = -1;
      }
      *(_WORD *)(*(_DWORD *)(a1 + 192) + 18) += v60;
    }
  }
  if ( (*(_BYTE *)(*((_DWORD *)v1 + 51) + 16) & 0x10) != 0 )
  {
    v61 = *(_DWORD *)(a1 + 228);
    if ( *(_DWORD *)(a1 + 196) != 0 )
    {
      *((_DWORD *)v1 + 60) = dword_4B38C0 - v61;
      v62 = dword_4B38C8 - *(_DWORD *)(a1 + 236);
      *((_DWORD *)v1 + 62) = v62;
      v63 = *(__int16 *)(a1 + 222) - ratan2(*((_DWORD *)v1 + 60), v62) % 4096;
      *((_DWORD *)v1 + 44) = v63;
      if ( v63 > 2048 )
        *((_DWORD *)v1 + 44) = v63 - 4096;
      v64 = *((_DWORD *)v1 + 44);
      if ( v64 < -2048 )
        *((_DWORD *)v1 + 44) = v64 + 4096;
      *(_WORD *)(*(_DWORD *)(a1 + 192) + 18) -= v1[88];
    }
    else
    {
      *((_DWORD *)v1 + 60) = dword_4B38C0 - v61;
      v65 = dword_4B38C8 - *(_DWORD *)(a1 + 236);
      *((_DWORD *)v1 + 62) = v65;
      *(_WORD *)(a1 + 222) = ratan2(*((_DWORD *)v1 + 60), v65);
    }
  }
  if ( (*(_BYTE *)(a1 + 20) & 2) == 0 )
    *(_WORD *)(a1 + 224) = 0;
  v66 = *((_DWORD *)v1 + 51);
  if ( (*(_BYTE *)(v66 + 12) & 0x10) != 0
    && (*(_DWORD *)(v66 + 16) & 0x40000000) == 0
    && (*((_BYTE *)dword_52FD00 + 65548) & 0x40) == 0
    && (*(_BYTE *)(a1 + 20) & 8) == 0 )
  {
    v67 = *(_WORD *)(a1 + 264);
    if ( v67 > 1536 && v67 < 2048 )
      *(_WORD *)(a1 + 264) = 2048;
  }
  if ( (*(_DWORD *)(*((_DWORD *)v1 + 51) + 12) & 0xC00) != 0 )
  {
    v68 = *((_WORD *)dword_52FD00 + 32777);
    if ( v68 != 0 || *((_WORD *)dword_52FD00 + 32778) != 0 )
    {
      v69 = SquareRoot0(*((__int16 *)dword_52FD00 + 32778) * *((__int16 *)dword_52FD00 + 32778) + v68 * v68);
      LOWORD(v398) = v69;
      if ( (__int16)v69 > 127 )
      {
        v69 = 127;
        LOWORD(v398) = 127;
      }
      v70 = *((_DWORD *)v1 + 51);
      if ( (*(_DWORD *)(v70 + 12) & 0x400) != 0 )
        v398 = -v69;
      v1[5] += (unsigned int)(dword_4B2384 * (__int16)v398 * *(__int16 *)(v70 + 20)) >> 7;
    }
  }
  if ( (*(_DWORD *)(*((_DWORD *)v1 + 51) + 12) & 0x200) != 0 && *(_DWORD *)(a1 + 112) != 0 )
  {
    *(_DWORD *)(a1 + 428) = 0;
    *(_DWORD *)(a1 + 420) = 0;
    v71 = sub_43A920((int)v1, a1, (int)(v1 + 4), v395);
    v1[86] = v71;
    if ( v71 != 0 )
    {
      if ( v71 == 2 )
      {
        if ( (*(_DWORD *)(*((_DWORD *)v1 + 51) + 12) & 0x400) != 0 )
          v1[5] = 0;
      }
      else if ( v71 == 1 )
      {
        *(_DWORD *)(a1 + 196) = 0;
        *(_DWORD *)(a1 + 192) = a1 + 204;
        *(_WORD *)(a1 + 222) = *(_WORD *)(a1 + 414);
        *(_DWORD *)(*(_DWORD *)(a1 + 112) + 108) = 0;
        *(_DWORD *)(a1 + 112) = 0;
        *(_DWORD *)(a1 + 20) &= ~4u;
        ++*(_WORD *)(a1 + 382);
      }
    }
  }
  RotMatrix((__int16 *)(a1 + 220), v1 + 36);
  v72 = (int *)(v1 + 12);
  gte_ApplyMatrix(v1 + 36, v1 + 4, (int *)v1 + 6);
  *((_DWORD *)v1 + 6) += *(__int16 *)(a1 + 64);
  *((_DWORD *)v1 + 7) += *(__int16 *)(a1 + 66);
  *((_DWORD *)v1 + 8) += *(__int16 *)(a1 + 68);
  *(_WORD *)(a1 + 68) = 0;
  *(_WORD *)(a1 + 66) = 0;
  *(_WORD *)(a1 + 64) = 0;
  *((_DWORD *)v1 + 10) = *((_DWORD *)v1 + 6);
  *((_DWORD *)v1 + 11) = *((_DWORD *)v1 + 7);
  *((_DWORD *)v1 + 12) = *((_DWORD *)v1 + 8);
  v73 = *(_DWORD *)(a1 + 20);
  if ( v73 < 0 && *((_BYTE *)dword_52FD00 + 65615) == 0 )
    goto LABEL_204;
  if ( (v73 & 2) != 0 )
  {
    v74 = v1 + 28;
    *((_DWORD *)v1 + 62) = 0;
    *((_DWORD *)v1 + 61) = 0;
    *((_DWORD *)v1 + 60) = 0;
    *((_DWORD *)v1 + 14) = *v72 + *(_DWORD *)(a1 + 228);
    *((_DWORD *)v1 + 15) = *((_DWORD *)v1 + 7) + *(_DWORD *)(a1 + 232);
    *((_DWORD *)v1 + 16) = *((_DWORD *)v1 + 8) + *(_DWORD *)(a1 + 236);
    v1[57] = *(_WORD *)(a1 + 38);
    sub_436D90((_DWORD *)v1 + 14, (int)(v1 + 52), (int)v395);
    if ( (v1[53] & 0x20) == 0 )
    {
      v87 = *(_DWORD *)(a1 + 20);
      if ( (v87 & 0x10000000) != 0 )
        *(_DWORD *)(a1 + 20) = v87 & 0xEFFFFFFF;
      goto LABEL_204;
    }
    if ( (*(_DWORD *)(a1 + 20) & 0x10000000) == 0 )
    {
      dword_4B3C10 = *v72 >> 2;
      dword_4B3C18 = *((int *)v1 + 8) >> 2;
      *(_DWORD *)(a1 + 20) |= 0x10000000u;
    }
    *v74 = *(_DWORD *)(a1 + 228) + 160;
    *((_DWORD *)v1 + 15) = *(_DWORD *)(a1 + 232);
    v75 = v1[30];
    *((_DWORD *)v1 + 16) = *(_DWORD *)(a1 + 236);
    v399 = v75;
    v1[57] = -1;
    sub_436D90((_DWORD *)v1 + 14, (int)(v1 + 52), (int)v395);
    v76 = v1[53];
    if ( (v76 & 0xC) == 0 && (v76 & 0x20) != 0 )
    {
      v77 = *((_DWORD *)v1 + 30) - *(_DWORD *)(a1 + 232);
      *((_DWORD *)v1 + 44) = v77;
      if ( v77 >= -100 && v77 < 200 )
        *((_DWORD *)v1 + 60) += (3000 * (*((_DWORD *)v1 + 30) - v399)) >> 12;
    }
    *v74 = *(_DWORD *)(a1 + 228) - 160;
    *((_DWORD *)v1 + 15) = *(_DWORD *)(a1 + 232);
    *((_DWORD *)v1 + 16) = *(_DWORD *)(a1 + 236);
    v1[57] = -1;
    sub_436D90((_DWORD *)v1 + 14, (int)(v1 + 52), (int)v395);
    v78 = v1[53];
    if ( (v78 & 0xC) == 0 && (v78 & 0x20) != 0 )
    {
      v79 = *((_DWORD *)v1 + 30) - *(_DWORD *)(a1 + 232);
      *((_DWORD *)v1 + 44) = v79;
      if ( v79 >= -100 && v79 < 200 )
        *((_DWORD *)v1 + 60) += (3000 * (v399 - *((_DWORD *)v1 + 30))) >> 12;
    }
    *v74 = *(_DWORD *)(a1 + 228);
    *((_DWORD *)v1 + 15) = *(_DWORD *)(a1 + 232);
    *((_DWORD *)v1 + 16) = *(_DWORD *)(a1 + 236) + 160;
    v1[57] = -1;
    sub_436D90((_DWORD *)v1 + 14, (int)(v1 + 52), (int)v395);
    v80 = v1[53];
    if ( (v80 & 0xC) == 0 && (v80 & 0x20) != 0 )
    {
      v81 = *((_DWORD *)v1 + 30) - *(_DWORD *)(a1 + 232);
      *((_DWORD *)v1 + 44) = v81;
      if ( v81 >= -100 && v81 < 200 )
        *((_DWORD *)v1 + 62) += (3000 * (*((_DWORD *)v1 + 30) - v399)) >> 12;
    }
    *v74 = *(_DWORD *)(a1 + 228);
    *((_DWORD *)v1 + 15) = *(_DWORD *)(a1 + 232);
    *((_DWORD *)v1 + 16) = *(_DWORD *)(a1 + 236) - 160;
    v1[57] = -1;
    sub_436D90((_DWORD *)v1 + 14, (int)(v1 + 52), (int)v395);
    v82 = v1[53];
    if ( (v82 & 0xC) == 0 && (v82 & 0x20) != 0 )
    {
      v83 = *((_DWORD *)v1 + 30) - *(_DWORD *)(a1 + 232);
      *((_DWORD *)v1 + 44) = v83;
      if ( v83 >= -100 && v83 < 200 )
        *((_DWORD *)v1 + 62) += (3000 * (v399 - *((_DWORD *)v1 + 30))) >> 12;
    }
    v84 = *((_DWORD *)v1 + 60);
    v400 = (v84 - dword_4B3C30) >> 4;
    if ( (_WORD)v400 != 0 )
      v84 = (__int16)v400 + dword_4B3C30;
    dword_4B3C30 = v84;
    v85 = *((_DWORD *)v1 + 62);
    v86 = (v85 - dword_4B3C38) >> 4;
    if ( v86 == 0 )
      goto LABEL_203;
    goto LABEL_202;
  }
  if ( (v73 & 0x10) == 0 )
    goto LABEL_204;
  v88 = *(_DWORD *)(a1 + 112);
  if ( v88 == 0 || ((unsigned int)&unk_800000 & *(_DWORD *)(v88 + 12)) == 0 )
    goto LABEL_204;
  if ( (v73 & 0x10000000) == 0 )
  {
    if ( (dword_4B3C18 | dword_4B3C10) == 0 )
    {
      dword_4B3C10 = *v72;
      dword_4B3C18 = *((_DWORD *)v1 + 8);
    }
    *(_DWORD *)(a1 + 20) |= 0x10000000u;
  }
  v401 = *(_WORD *)(a1 + 232);
  *(_DWORD *)(*(_DWORD *)(a1 + 192) + 24) += 160;
  *((_DWORD *)v1 + 75) = a1 + 124;
  v89 = *((_DWORD *)v1 + 75);
  v1[152] = 0;
  v1[153] = 0;
  v1[154] = 0;
  if ( v89 != 0 )
  {
    v90 = v1 + 156;
    do
    {
      gte_ApplyMatrix((__int16 *)(*((_DWORD *)v1 + 75) + 4), v1 + 152, (int *)v1 + 78);
      v91 = *((_DWORD **)v1 + 75);
      *v90 += v91[6];
      v92 = *(_WORD *)v90;
      *((_DWORD *)v1 + 79) += v91[7];
      v93 = v91[8];
      v94 = *((_DWORD *)v1 + 80);
      v1[152] = v92;
      v95 = *((_DWORD *)v1 + 75);
      *((_DWORD *)v1 + 80) = v93 + v94;
      LOWORD(v93) = v1[160];
      v1[153] = v1[158];
      v1[154] = v93;
      v96 = *(_DWORD *)(v95 + 72);
      *((_DWORD *)v1 + 75) = v96;
    }
    while ( v96 != 0 );
  }
  *((_DWORD *)v1 + 60) += (3000 * (*((_DWORD *)v1 + 79) - v401)) >> 12;
  *(_DWORD *)(*(_DWORD *)(a1 + 192) + 24) -= 320;
  *((_DWORD *)v1 + 75) = a1 + 124;
  v97 = *((_DWORD *)v1 + 75);
  v1[152] = 0;
  v1[153] = 0;
  v1[154] = 0;
  if ( v97 != 0 )
  {
    v98 = v1 + 156;
    do
    {
      gte_ApplyMatrix((__int16 *)(*((_DWORD *)v1 + 75) + 4), v1 + 152, (int *)v1 + 78);
      v99 = *((_DWORD **)v1 + 75);
      *v98 += v99[6];
      v100 = *(_WORD *)v98;
      *((_DWORD *)v1 + 79) += v99[7];
      v101 = v99[8];
      v102 = *((_DWORD *)v1 + 80);
      v1[152] = v100;
      v103 = *((_DWORD *)v1 + 75);
      *((_DWORD *)v1 + 80) = v101 + v102;
      LOWORD(v101) = v1[160];
      v1[153] = v1[158];
      v1[154] = v101;
      v104 = *(_DWORD *)(v103 + 72);
      *((_DWORD *)v1 + 75) = v104;
    }
    while ( v104 != 0 );
  }
  *(_DWORD *)(*(_DWORD *)(a1 + 192) + 24) += 160;
  *((_DWORD *)v1 + 60) += (3000 * (v401 - *((_DWORD *)v1 + 79))) >> 12;
  *(_DWORD *)(*(_DWORD *)(a1 + 192) + 32) += 160;
  *((_DWORD *)v1 + 75) = a1 + 124;
  v105 = *((_DWORD *)v1 + 75);
  v1[153] = 0;
  v1[152] = 0;
  v1[154] = 0;
  if ( v105 != 0 )
  {
    v106 = v1 + 156;
    do
    {
      gte_ApplyMatrix((__int16 *)(*((_DWORD *)v1 + 75) + 4), v1 + 152, (int *)v1 + 78);
      v107 = *((_DWORD *)v1 + 75);
      v108 = *((_DWORD *)v1 + 79);
      *v106 += *(_DWORD *)(v107 + 24);
      v109 = v107;
      v110 = *(_DWORD *)(v107 + 28) + v108;
      v111 = *((_DWORD *)v1 + 80);
      *((_DWORD *)v1 + 79) = v110;
      v112 = *(_DWORD *)(v109 + 32);
      v1[153] = v1[158];
      *((_DWORD *)v1 + 80) = v112 + v111;
      LOWORD(v112) = v1[160];
      v1[152] = *(_WORD *)v106;
      v113 = *((_DWORD *)v1 + 75);
      v1[154] = v112;
      v114 = *(_DWORD *)(v113 + 72);
      *((_DWORD *)v1 + 75) = v114;
    }
    while ( v114 != 0 );
  }
  *((_DWORD *)v1 + 62) += (3000 * (*((_DWORD *)v1 + 79) - v401)) >> 12;
  *(_DWORD *)(*(_DWORD *)(a1 + 192) + 32) -= 320;
  *((_DWORD *)v1 + 75) = a1 + 124;
  v115 = *((_DWORD *)v1 + 75);
  v1[152] = 0;
  v1[153] = 0;
  v1[154] = 0;
  if ( v115 != 0 )
  {
    v116 = v1 + 156;
    do
    {
      gte_ApplyMatrix((__int16 *)(*((_DWORD *)v1 + 75) + 4), v1 + 152, (int *)v1 + 78);
      v117 = *((_DWORD *)v1 + 75);
      v118 = *((_DWORD *)v1 + 79);
      *v116 += *(_DWORD *)(v117 + 24);
      v119 = v117;
      v120 = *(_DWORD *)(v117 + 28) + v118;
      v121 = *((_DWORD *)v1 + 80);
      *((_DWORD *)v1 + 79) = v120;
      v122 = *(_DWORD *)(v119 + 32);
      v1[153] = v1[158];
      *((_DWORD *)v1 + 80) = v122 + v121;
      LOWORD(v122) = v1[160];
      v1[152] = *(_WORD *)v116;
      v123 = *((_DWORD *)v1 + 75);
      v1[154] = v122;
      v124 = *(_DWORD *)(v123 + 72);
      *((_DWORD *)v1 + 75) = v124;
    }
    while ( v124 != 0 );
  }
  *(_DWORD *)(*(_DWORD *)(a1 + 192) + 32) += 160;
  *((_DWORD *)v1 + 62) += (3000 * (v401 - *((_DWORD *)v1 + 79))) >> 12;
  v125 = *((_DWORD *)v1 + 60);
  v402 = (v125 - dword_4B3C30) >> 4;
  if ( (_WORD)v402 != 0 )
    v125 = (__int16)v402 + dword_4B3C30;
  dword_4B3C30 = v125;
  v85 = *((_DWORD *)v1 + 62);
  v86 = (v85 - dword_4B3C38) >> 4;
  if ( v86 != 0 )
LABEL_202:
    v85 = v86 + dword_4B3C38;
LABEL_203:
  dword_4B3C38 = v85;
LABEL_204:
  v126 = *(_DWORD *)(a1 + 20);
  if ( (v126 & 0x201) != 0 )
  {
    v127 = (int *)(v1 + 12);
    dword_4B3C30 = *((_DWORD *)v1 + 6);
    dword_4B3C38 = *((_DWORD *)v1 + 8);
  }
  else
  {
    if ( (v126 & 0x10000000) != 0 )
    {
      v127 = (int *)(v1 + 12);
      v128 = v1[12] - dword_4B3C10;
      if ( v128 != 0 )
      {
        if ( v128 >= 0 )
          v129 = dword_4B3C10 + 1;
        else
          v129 = dword_4B3C10 - 1;
      }
      else
      {
        v129 = *v127;
      }
      dword_4B3C10 = v129;
      v130 = v1[16] - dword_4B3C18;
      if ( v130 != 0 )
      {
        if ( v130 >= 0 )
          v131 = dword_4B3C18 + 1;
        else
          v131 = dword_4B3C18 - 1;
      }
      else
      {
        v131 = *((_DWORD *)v1 + 8);
      }
      dword_4B3C18 = v131;
      *v127 = v129;
      *((_DWORD *)v1 + 8) = dword_4B3C18;
    }
    else
    {
      v132 = 0;
      v133 = dword_4B3C30 >> 2;
      if ( v133 != 0 )
        dword_4B3C30 -= v133;
      else
        dword_4B3C30 = 0;
      v134 = dword_4B3C38 >> 2;
      if ( v134 != 0 )
        v132 = dword_4B3C38 - v134;
      v127 = (int *)(v1 + 12);
      dword_4B3C38 = v132;
      v135 = *((_DWORD *)v1 + 6);
      v403 = (dword_4B3B90 * (v135 - dword_4B3C10)) >> 12;
      if ( (_WORD)v403 != 0 || dword_4B3B90 != 2048 )
        v136 = (__int16)v403 + dword_4B3C10;
      else
        v136 = v135;
      dword_4B3C10 = v136;
      v137 = *((_DWORD *)v1 + 8);
      v404 = (dword_4B3B90 * (v137 - dword_4B3C18)) >> 12;
      if ( (_WORD)v404 != 0 || dword_4B3B90 != 2048 )
        v137 = (__int16)v404 + dword_4B3C18;
      dword_4B3C18 = v137;
      *v127 = v136;
      *((_DWORD *)v1 + 8) = dword_4B3C18;
    }
    *v127 += dword_4B3C30;
    *((_DWORD *)v1 + 8) += dword_4B3C38;
  }
  v138 = 2048;
  if ( dword_4B3B90 < 2048 )
    v138 = dword_4B3B90 + 16;
  dword_4B3B90 = v138;
  v139 = *((_DWORD *)v1 + 51);
  if ( (*(_BYTE *)(v139 + 12) & 0x10) != 0 )
  {
    v140 = *(_DWORD *)(a1 + 20);
    if ( (v140 & 0x209) == 0 || (v140 & 0x400) != 0 )
    {
      v141 = *(_DWORD *)(a1 + 112);
      if ( v141 == 0 )
      {
        if ( (v140 & 0x80u) != 0 )
        {
          *(_WORD *)(a1 + 220) = 0;
          RotMatrix((__int16 *)(a1 + 220), (_WORD *)(a1 + 128));
          RotMatrix((__int16 *)(a1 + 220), v1 + 36);
          gte_ApplyMatrix(v1 + 36, v1 + 4, v127);
          v155 = *(_DWORD *)(a1 + 20);
          LOBYTE(v155) = v155 & 0x79 | 2;
          *(_DWORD *)(a1 + 20) = v155;
        }
        v156 = *((_DWORD *)v1 + 51);
        v157 = *(_WORD *)(v156 + 22);
        LOWORD(v156) = *(_WORD *)(v156 + 24);
        *(_WORD *)(a1 + 266) = 0;
        *(_WORD *)(a1 + 264) = 1024;
        *(_WORD *)(a1 + 262) = v156;
        *(_WORD *)(a1 + 260) = v157;
        goto LABEL_257;
      }
      v142 = *(_DWORD *)(v141 + 8);
      if ( (v142 & 4) != 0 )
      {
        v143 = *(_WORD *)(v139 + 22);
        v144 = *(_WORD *)(v139 + 24);
        *(_WORD *)(a1 + 264) = 1024;
        *(_WORD *)(a1 + 262) = v144;
        v145 = *(_DWORD *)(a1 + 20) & 0xEFFFF9F1;
        *(_WORD *)(a1 + 260) = v143;
        *(_DWORD *)(a1 + 20) = v145 | 1;
        *(_DWORD *)(a1 + 196) = 0;
        *(_DWORD *)(a1 + 192) = a1 + 204;
        v146 = *(_DWORD *)(a1 + 112);
        LOWORD(v145) = *(_WORD *)(a1 + 414);
        *(_WORD *)(a1 + 266) = 0;
        *(_WORD *)(a1 + 222) = *(_WORD *)(v146 + 222) + v145;
        *(_DWORD *)(*(_DWORD *)(a1 + 112) + 108) = 0;
        *(_DWORD *)(a1 + 112) = 0;
        goto LABEL_258;
      }
      if ( (v142 & 8) != 0 )
      {
        v147 = *(__int16 *)(v139 + 24);
        *((_DWORD *)v1 + 44) = v147;
        v148 = *(_DWORD *)(a1 + 112);
        if ( (BYTE1(*(_DWORD *)(v148 + 8)) & 0x80u) == 0 )
        {
          if ( *(_WORD *)(v148 + 44) != 14 )
            goto LABEL_253;
          v149 = *(_DWORD *)(v148 + 388);
          if ( v149 == 0 || (*(_DWORD *)(v149 + 16) & 0x10000000) == 0 )
            goto LABEL_253;
        }
        if ( *(_WORD *)(v148 + 44) == 5 )
        {
          v150 = *(_WORD *)(v148 + 30);
          if ( v150 != 0 )
          {
            v151 = v150;
LABEL_252:
            *((_DWORD *)v1 + 44) = v151;
            goto LABEL_253;
          }
          *((_DWORD *)v1 + 44) = (2600 * v147) >> 12;
        }
        else
        {
          v152 = *(_WORD *)(v148 + 406);
          if ( v152 == 0 )
          {
            v151 = (2600 * v147) >> 12;
            goto LABEL_252;
          }
          *((_DWORD *)v1 + 44) = v152;
        }
LABEL_253:
        *((_DWORD *)v1 + 46) = *(_DWORD *)(a1 + 228) - *(_DWORD *)(*(_DWORD *)(a1 + 112) + 228);
        *((_DWORD *)v1 + 47) = 0;
        *((_DWORD *)v1 + 48) = *(_DWORD *)(a1 + 236) - *(_DWORD *)(*(_DWORD *)(a1 + 112) + 236);
        *((_DWORD *)v1 + 14) = *(_DWORD *)(*(_DWORD *)(a1 + 112) + 228);
        *((_DWORD *)v1 + 15) = *(_DWORD *)(*(_DWORD *)(a1 + 112) + 232);
        *((_DWORD *)v1 + 16) = *(_DWORD *)(*(_DWORD *)(a1 + 112) + 236);
        *((_DWORD *)v1 + 15) = *(_DWORD *)(a1 + 232);
        v1[57] = *(_WORD *)(a1 + 38);
        sub_434E40((_DWORD *)v1 + 14, (_DWORD *)v1 + 46, (int)(v1 + 52), (int)v395);
        *(_DWORD *)(a1 + 228) = *((_DWORD *)v1 + 46) + *(_DWORD *)(*(_DWORD *)(a1 + 112) + 228);
        *(_DWORD *)(a1 + 236) = *((_DWORD *)v1 + 48) + *(_DWORD *)(*(_DWORD *)(a1 + 112) + 236);
        *((_DWORD *)v1 + 64) = *(_DWORD *)(a1 + 112);
        *((_DWORD *)v1 + 65) = *(_DWORD *)(a1 + 196);
        *((_DWORD *)v1 + 66) = *(_DWORD *)(a1 + 192);
        *(_DWORD *)(a1 + 196) = 0;
        *(_DWORD *)(a1 + 192) = a1 + 204;
        *(_DWORD *)(*(_DWORD *)(a1 + 112) + 108) = 0;
        *(_DWORD *)(a1 + 112) = 0;
        *(_DWORD *)(a1 + 20) &= 0xFFFFFFEB;
        v153 = *((_DWORD *)v1 + 44);
        v154 = *(_WORD *)(*((_DWORD *)v1 + 51) + 22);
        *(_WORD *)(a1 + 266) = 0;
        *(_WORD *)(a1 + 264) = 1024;
        *(_WORD *)(a1 + 262) = v153;
        *(_WORD *)(a1 + 260) = v154;
LABEL_257:
        *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xEFFFF9F0 | 1;
      }
    }
  }
LABEL_258:
  v158 = *(_DWORD *)(a1 + 20);
  if ( (v158 & 1) != 0
    && ((v158 & 0x200) == 0 || (v158 & 0x400) != 0)
    && (v158 >= 0 || *((_BYTE *)dword_52FD00 + 65615) != 0) )
  {
    sub_43A3C0(a1);
  }
  v159 = *(_DWORD *)(a1 + 20);
  if ( ((unsigned int)&unk_810000 & *(_DWORD *)(*((_DWORD *)v1 + 51) + 12)) != 0 )
    LOBYTE(v159) = v159 | 0x40;
  else
    LOBYTE(v159) = v159 & 0xBF;
  *(_DWORD *)(a1 + 20) = v159;
  if ( ((unsigned int)&unk_800000 & *(_DWORD *)(*((_DWORD *)v1 + 51) + 12)) != 0 )
  {
    v160 = sub_433150(a1, 128, v395);
    *((_DWORD *)v1 + 45) = v160;
    if ( v160 != 0 )
    {
      v405 = 1;
      if ( *(_WORD *)(v160 + 44) == 14 )
      {
        v161 = *(_DWORD *)(v160 + 388);
        if ( v161 == 0 || (*(_DWORD *)(v161 + 12) & 0x4000) == 0 )
          v405 = 0;
      }
      if ( v405 != 0 )
      {
        *(_DWORD *)(v160 + 20) |= 0x4000000u;
        *(_WORD *)(*((_DWORD *)v1 + 45) + 56) = 1;
        *(_DWORD *)(*((_DWORD *)v1 + 45) + 52) = 1;
        *(_DWORD *)(a1 + 52) = *(unsigned __int16 *)(*((_DWORD *)v1 + 45) + 28);
      }
    }
  }
  if ( (*(_DWORD *)(*((_DWORD *)v1 + 51) + 12) & 0x10000) != 0 && *(_DWORD *)(a1 + 104) != 0 )
  {
    v162 = sub_4334F0(a1, (_WORD *)(a1 + 88), 128, 0, (int)v395);
    *((_DWORD *)v1 + 45) = v162;
    if ( v162 != 0 )
    {
      v406 = 1;
      if ( *(_WORD *)(v162 + 44) == 14 )
      {
        v163 = *(_DWORD *)(v162 + 388);
        if ( v163 == 0 || (*(_DWORD *)(v163 + 12) & 0x4000) == 0 )
          v406 = 0;
      }
      if ( v406 != 0 )
      {
        if ( *(_DWORD *)(a1 + 108) != 0 )
        {
          *(_DWORD *)(v162 + 20) |= 0x6000000u;
          v164 = *(_DWORD *)(*(_DWORD *)(a1 + 108) + 388);
          if ( v164 != 0 )
            *(_WORD *)(*((_DWORD *)v1 + 45) + 56) = *(_WORD *)(v164 + 22);
          else
            *(_WORD *)(*((_DWORD *)v1 + 45) + 56) = 1;
          *(_DWORD *)(*((_DWORD *)v1 + 45) + 52) = *(unsigned __int16 *)(*(_DWORD *)(a1 + 108) + 28);
        }
        else
        {
          *(_DWORD *)(v162 + 20) |= 0x4000000u;
          *(_WORD *)(*((_DWORD *)v1 + 45) + 56) = 1;
          *(_DWORD *)(*((_DWORD *)v1 + 45) + 52) = 1;
        }
        *(_DWORD *)(a1 + 52) = *(unsigned __int16 *)(*((_DWORD *)v1 + 45) + 28);
      }
    }
  }
  v165 = *((_DWORD *)v1 + 51);
  if ( ((*(_BYTE *)(v165 + 12) & 0x40) != 0 || (*(_DWORD *)(v165 + 16) & 0x40000) != 0) && *(_DWORD *)(a1 + 104) != 0 )
  {
    v166 = *(_DWORD *)(a1 + 108);
    if ( v166 != 0 )
    {
      v167 = *(_DWORD *)(v166 + 20) & 0xFFFFF7F9;
      *(_DWORD *)(v166 + 20) = v167;
      if ( (*(_DWORD *)(*((_DWORD *)v1 + 51) + 16) & 0x40000) != 0 )
        v167 |= 0x80000u;
      else
        BYTE1(v167) |= 0x10u;
      *(_DWORD *)(v166 + 20) = v167;
      *((_DWORD *)v1 + 14) = *(_DWORD *)(a1 + 228);
      *((_DWORD *)v1 + 15) = *(_DWORD *)(a1 + 232);
      *((_DWORD *)v1 + 16) = *(_DWORD *)(a1 + 236);
      v168 = *(_WORD *)(a1 + 88) - *(_WORD *)(a1 + 228);
      v1[116] = v168;
      *((_DWORD *)v1 + 46) = v168;
      v169 = *(_WORD *)(a1 + 96) - *(_WORD *)(a1 + 236);
      v1[118] = v169;
      *((_DWORD *)v1 + 47) = v169;
      v170 = *(_WORD *)(a1 + 92) - *(_WORD *)(a1 + 232);
      v1[117] = v170;
      *((_DWORD *)v1 + 48) = v170;
      sub_433670((_DWORD *)a1, v1 + 116, (int)v395, 131328);
      *((_DWORD *)v1 + 60) = v1[116];
      *((_DWORD *)v1 + 61) = 0;
      *((_DWORD *)v1 + 62) = v1[118];
      v1[57] = *(_WORD *)(a1 + 38);
      sub_434E40((_DWORD *)v1 + 14, (_DWORD *)v1 + 60, (int)(v1 + 52), (int)v395);
      *(_DWORD *)(v166 + 228) = *((_DWORD *)v1 + 60) + *(_DWORD *)(a1 + 228);
      *(_DWORD *)(v166 + 232) = *(_DWORD *)(a1 + 92);
      v171 = *(_DWORD *)(a1 + 236);
      v172 = *((_DWORD *)v1 + 62);
      *(_DWORD *)(v166 + 196) = 0;
      *(_DWORD *)(v166 + 236) = v172 + v171;
      *(_DWORD *)(v166 + 192) = v166 + 204;
      *(_WORD *)(v166 + 38) = *(_WORD *)(a1 + 38);
      *(_WORD *)(v166 + 222) = *(_WORD *)(a1 + 222);
      *(_DWORD *)(v166 + 112) = 0;
      *(_DWORD *)(a1 + 108) = 0;
      v173 = *(_DWORD *)(v166 + 192);
      *(_DWORD *)(v166 + 124) = 0;
      RotMatrix((__int16 *)(v173 + 16), (_WORD *)(v166 + 128));
      ScaleMatrix((__int16 *)(v166 + 128), *(_DWORD **)(v166 + 192));
      TransMatrix((_DWORD *)(v166 + 128), (_DWORD *)(*(_DWORD *)(v166 + 192) + 24));
      *(_WORD *)(a1 + 72) = -70;
      *(_WORD *)(a1 + 76) = -40;
      *(_WORD *)(a1 + 80) = 70;
      *(_WORD *)(a1 + 84) = 40;
      *(_WORD *)(a1 + 46) = 80;
      *(_DWORD *)(a1 + 48) = 6400;
    }
  }
  if ( (*(_DWORD *)(*((_DWORD *)v1 + 51) + 12) & 0x200) != 0 && (*((_BYTE *)dword_52FD00 + 65546) & 8) != 0 )
  {
    v174 = *(_DWORD *)(a1 + 112);
    if ( v174 != 0 && (*(_DWORD *)(v174 + 8) & 0x400000) == 0 )
      *(_DWORD *)(v174 + 324) += 4;
  }
  if ( (*(_DWORD *)(*((_DWORD *)v1 + 51) + 12) & 0x100) != 0
    && (*(_DWORD *)(a1 + 20) & 0x10208) != 0
    && *(_DWORD *)(a1 + 112) == 0 )
  {
    *((_DWORD *)v1 + 14) = *(_DWORD *)(a1 + 228);
    *((_DWORD *)v1 + 15) = *(_DWORD *)(a1 + 232);
    *((_DWORD *)v1 + 16) = *(_DWORD *)(a1 + 236);
    v175 = (_DWORD *)sub_43A480((_WORD *)a1, v1 + 28, (int)v395, 4194308);
    *((_DWORD *)v1 + 42) = v175;
    if ( v175 != NULL )
    {
      *(_DWORD *)(a1 + 112) = *v175;
      *(_DWORD *)(a1 + 192) = a1 + 396;
      *(_DWORD *)(a1 + 420) = 0;
      v176 = *(__int16 *)(*((_DWORD *)v1 + 42) + 10);
      *(_DWORD *)(a1 + 428) = 0;
      v177 = *(_DWORD *)(a1 + 112);
      v178 = *(__int16 *)(a1 + 222);
      *(_DWORD *)(a1 + 424) = v176;
      v179 = v178 - *(__int16 *)(v177 + 222);
      *((_DWORD *)v1 + 44) = v179;
      if ( v179 < 0 )
        *((_DWORD *)v1 + 44) = v179 - 4096;
      *(_WORD *)(a1 + 416) = 0;
      *(_WORD *)(a1 + 414) = 0;
      *(_WORD *)(a1 + 412) = 0;
      *(_DWORD *)(a1 + 196) = **((_DWORD **)v1 + 42) + 124;
      *(_DWORD *)(a1 + 124) = 0;
      RotMatrix((__int16 *)(*(_DWORD *)(a1 + 192) + 16), (_WORD *)(a1 + 128));
      ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
      TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
      *((_DWORD *)v1 + 75) = a1 + 124;
      v180 = *((_DWORD *)v1 + 75);
      v181 = 0;
      v1[152] = 0;
      v1[153] = 0;
      v1[154] = 0;
      if ( v180 != 0 )
      {
        v182 = v1 + 156;
        do
        {
          gte_ApplyMatrix((__int16 *)(*((_DWORD *)v1 + 75) + 4), v1 + 152, (int *)v1 + 78);
          v183 = *((_DWORD **)v1 + 75);
          *v182 += v183[6];
          v184 = *(_WORD *)v182;
          *((_DWORD *)v1 + 79) += v183[7];
          v185 = v183[8];
          v186 = *((_DWORD *)v1 + 80);
          v1[152] = v184;
          v187 = *((_DWORD *)v1 + 75);
          *((_DWORD *)v1 + 80) = v185 + v186;
          LOWORD(v185) = v1[160];
          v1[153] = v1[158];
          v1[154] = v185;
          v181 = *(_DWORD *)(v187 + 72);
          *((_DWORD *)v1 + 75) = v181;
        }
        while ( v181 != 0 );
      }
      *(_DWORD *)(a1 + 228) = *((_DWORD *)v1 + 78);
      *(_DWORD *)(a1 + 232) = *((_DWORD *)v1 + 79);
      *(_DWORD *)(a1 + 236) = *((_DWORD *)v1 + 80);
      *((_DWORD *)v1 + 8) = v181;
      *((_DWORD *)v1 + 7) = v181;
      *((_DWORD *)v1 + 6) = v181;
      v188 = *(_DWORD *)(a1 + 20) & 0xFFFFFDF6;
      LOBYTE(v188) = *(_BYTE *)(a1 + 20) & 0xF2 | 4;
      *(_DWORD *)(a1 + 20) = v188;
    }
  }
  *((_DWORD *)v1 + 10) = *((_DWORD *)v1 + 6);
  *((_DWORD *)v1 + 11) = *((_DWORD *)v1 + 7);
  *((_DWORD *)v1 + 12) = *((_DWORD *)v1 + 8);
  v189 = *(_DWORD *)(a1 + 196);
  if ( v189 != 0 )
  {
    if ( (*(_BYTE *)(a1 + 20) & 0x10) != 0 )
    {
      v190 = *(_DWORD *)(a1 + 112);
      if ( *(int *)(v190 + 8) < 0 || (*(_DWORD *)(v190 + 12) & 0x400000) != 0 )
        *(_DWORD *)(a1 + 424) = *(__int16 *)(v190 + 82) - *(_DWORD *)(*(_DWORD *)(v189 + 68) + 28) + 4;
      else
        *(_DWORD *)(a1 + 424) = *(__int16 *)(v190 + 82) + 4;
    }
    *v1 = 0;
    v1[116] = 0;
    v1[117] = 0;
    v1[118] = 0;
    v1[1] = 0;
    v1[2] = 4096;
    v191 = *(_DWORD *)(a1 + 192);
    *(_DWORD *)(a1 + 124) = 0;
    RotMatrix((__int16 *)(v191 + 16), (_WORD *)(a1 + 128));
    ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
    TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
    *((_DWORD *)v1 + 57) = a1 + 124;
    if ( a1 != -124 )
    {
      v192 = v1 + 120;
      do
      {
        gte_ApplyMatrix((__int16 *)(*((_DWORD *)v1 + 57) + 4), v1 + 116, (int *)v1 + 60);
        ApplyMatrixSV((__int16 *)(*((_DWORD *)v1 + 57) + 4), v1, v1);
        *v192 += *(_DWORD *)(*((_DWORD *)v1 + 57) + 24);
        *((_DWORD *)v1 + 61) += *(_DWORD *)(*((_DWORD *)v1 + 57) + 28);
        v193 = v1[122];
        *((_DWORD *)v1 + 62) += *(_DWORD *)(*((_DWORD *)v1 + 57) + 32);
        v194 = v1[124];
        v1[116] = *(_WORD *)v192;
        v1[117] = v193;
        v1[118] = v194;
        v195 = *(_DWORD *)(*((_DWORD *)v1 + 57) + 72);
        *((_DWORD *)v1 + 57) = v195;
      }
      while ( v195 != 0 );
    }
    *((_DWORD *)v1 + 46) = *((_DWORD *)v1 + 60) - *(_DWORD *)(a1 + 228);
    *((_DWORD *)v1 + 47) = *((_DWORD *)v1 + 61) - *(_DWORD *)(a1 + 232);
    *((_DWORD *)v1 + 48) = *((_DWORD *)v1 + 62) - *(_DWORD *)(a1 + 236);
    *((_DWORD *)v1 + 14) = *(_DWORD *)(a1 + 228);
    *((_DWORD *)v1 + 15) = *(_DWORD *)(a1 + 232);
    v196 = v1[92];
    *((_DWORD *)v1 + 16) = *(_DWORD *)(a1 + 236);
    v197 = v1[94];
    v1[116] = v196;
    v198 = v1[96];
    v1[117] = v197;
    v1[118] = v198;
    v1[57] = *(_WORD *)(a1 + 38);
    sub_434E40((_DWORD *)v1 + 14, (_DWORD *)v1 + 46, (int)(v1 + 52), (int)v395);
    v199 = v1[2];
    *((_DWORD *)v1 + 6) += *((_DWORD *)v1 + 46) - v1[116];
    v389 = *v1;
    *((_DWORD *)v1 + 8) += *((_DWORD *)v1 + 48) - v1[118];
    *(_WORD *)(a1 + 222) = ratan2(v389, v199);
  }
  v200 = *(_DWORD *)(a1 + 108);
  *((_DWORD *)v1 + 45) = v200;
  if ( v200 != 0 && ((*(_DWORD *)(v200 + 8) & 0x2000) != 0 || *(_WORD *)(v200 + 44) == 34) )
  {
    v201 = *((_DWORD *)v1 + 51);
    if ( (*(_BYTE *)(v201 + 12) & 0x40) == 0 && (*(_DWORD *)(v201 + 16) & 0x40000) == 0 )
    {
      word_4B3BF0 = *(_WORD *)(a1 + 72);
      word_4B3BE0 = word_4B3BF0;
      word_4B3BF8 = *(_WORD *)(a1 + 80);
      word_4B3BE8 = word_4B3BF8;
      word_4B3BEC = *(_WORD *)(a1 + 84);
      word_4B3BE4 = word_4B3BEC;
      v202 = *(_WORD *)(a1 + 76);
      word_4B3BFA = 0;
      word_4B3BFC = v202;
      word_4B3BF4 = v202;
      word_4B3BF2 = 0;
      word_4B3BEA = 0;
      word_4B3BE2 = 0;
      sub_408BF0(v1 + 36);
      dword_4B3BC4 = (int)&word_4B3BE0;
      for ( i = 4; i != 0; --i )
      {
        sub_408D10((__int16 *)dword_4B3BC4);
        sub_408D70();
        sub_408D40((_WORD *)dword_4B3BC4);
        dword_4B3BC4 += 8;
      }
      v204 = 0;
      v205 = &word_4B3BE0;
      v206 = 0;
      v207 = 0;
      v396 = 0;
      dword_4B3BC4 = (int)&word_4B3BE0;
      v407 = 4;
      do
      {
        v208 = *v205;
        if ( v204 <= v208 )
        {
          if ( v396 < v208 )
            v396 = *v205;
        }
        else
        {
          v204 = *v205;
        }
        v209 = v205[2];
        if ( v207 <= v209 )
        {
          if ( v206 < v209 )
            v206 = v205[2];
        }
        else
        {
          v207 = v205[2];
        }
        v205 += 4;
        v210 = v407 == 1;
        dword_4B3BC4 = (int)v205;
        --v407;
      }
      while ( !v210 );
      v211 = v1 + 120;
      v408 = 4;
      word_4B3BE0 = v1[12] + v204;
      word_4B3BE8 = v1[12] + v396;
      word_4B3BF4 = v1[16] + v207;
      v212 = v1[16] + v206;
      word_4B3BF8 = 0;
      word_4B3BF0 = 0;
      word_4B3BFC = v212;
      word_4B3BEC = 0;
      word_4B3BE4 = 0;
      word_4B3BFA = 0;
      word_4B3BF2 = 0;
      word_4B3BEA = 0;
      word_4B3BE2 = 0;
      *((_DWORD *)v1 + 14) = *(_DWORD *)(a1 + 228);
      *((_DWORD *)v1 + 15) = *(_DWORD *)(a1 + 232) - 100;
      *((_DWORD *)v1 + 16) = *(_DWORD *)(a1 + 236);
      dword_4B3BC4 = (int)&word_4B3BE0;
      do
      {
        *((_DWORD *)v1 + 15) = *(_DWORD *)(a1 + 232);
        *v211 = *(__int16 *)dword_4B3BC4;
        *((_DWORD *)v1 + 61) = *(__int16 *)(dword_4B3BC4 + 2);
        *((_DWORD *)v1 + 62) = *(__int16 *)(dword_4B3BC4 + 4);
        v1[57] = *(_WORD *)(a1 + 38);
        *((_DWORD *)v1 + 15) = *(_DWORD *)(a1 + 232) - 100;
        sub_434E40((_DWORD *)v1 + 14, (_DWORD *)v1 + 60, (int)(v1 + 52), (int)v395);
        *((_DWORD *)v1 + 6) += *v211 - *(__int16 *)dword_4B3BC4;
        *((_DWORD *)v1 + 8) += *((_DWORD *)v1 + 62) - *(__int16 *)(dword_4B3BC4 + 4);
        *((_DWORD *)v1 + 10) += *v211 - *(__int16 *)dword_4B3BC4;
        *((_DWORD *)v1 + 12) += *((_DWORD *)v1 + 62) - *(__int16 *)(dword_4B3BC4 + 4);
        dword_4B3BC4 += 8;
        --v408;
      }
      while ( v408 != 0 );
    }
  }
  v213 = v1 + 28;
  *((_DWORD *)v1 + 44) = *((_DWORD *)v1 + 6) + *((_DWORD *)v1 + 8);
  *((_DWORD *)v1 + 14) = *(_DWORD *)(a1 + 228);
  *((_DWORD *)v1 + 15) = *(_DWORD *)(a1 + 232);
  *((_DWORD *)v1 + 16) = *(_DWORD *)(a1 + 236);
  v214 = v1 + 120;
  *((_DWORD *)v1 + 60) = *((_DWORD *)v1 + 6);
  *((_DWORD *)v1 + 62) = 0;
  *((_DWORD *)v1 + 61) = 0;
  v1[57] = *(_WORD *)(a1 + 38);
  sub_434E40((_DWORD *)v1 + 14, (_DWORD *)v1 + 60, (int)(v1 + 52), (int)v395);
  *((_DWORD *)v1 + 14) = *(_DWORD *)(a1 + 228);
  v215 = v1[120];
  *((_DWORD *)v1 + 15) = *(_DWORD *)(a1 + 232);
  v409 = v215;
  *((_DWORD *)v1 + 16) = *(_DWORD *)(a1 + 236);
  *((_DWORD *)v1 + 61) = 0;
  *((_DWORD *)v1 + 60) = 0;
  *((_DWORD *)v1 + 62) = *((_DWORD *)v1 + 8);
  v1[57] = *(_WORD *)(a1 + 38);
  sub_434E40((_DWORD *)v1 + 14, (_DWORD *)v1 + 60, (int)(v1 + 52), (int)v395);
  *((_DWORD *)v1 + 6) = v409;
  *((_DWORD *)v1 + 8) = *((_DWORD *)v1 + 62);
  if ( (*(_DWORD *)(a1 + 20) & 0x81000000) == 0 || *((_BYTE *)dword_52FD00 + 65615) != 0 || (dword_4B3748 & 2) != 0 )
    sub_437500(a1, (_DWORD *)v1 + 6, (int)(v1 + 52), (int)v395);
  if ( *((_DWORD *)v1 + 44) != *((_DWORD *)v1 + 6) + *((_DWORD *)v1 + 8) )
    *(_DWORD *)(a1 + 20) |= 0x100000u;
  if ( (*(_DWORD *)(*((_DWORD *)v1 + 51) + 12) & 0x200) != 0 )
  {
    if ( (*((_DWORD *)v1 + 6) = *((_DWORD *)v1 + 10),
          *((_DWORD *)v1 + 7) = *((_DWORD *)v1 + 11),
          *((_DWORD *)v1 + 8) = *((_DWORD *)v1 + 12),
          (v216 = *(_DWORD *)(a1 + 112)) != 0)
      && (*(_BYTE *)(v216 + 8) & 4) != 0
      || *(_DWORD *)(a1 + 108) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 20) & 0x100000) != 0 || v1[57] == -1 )
      {
        *(_DWORD *)(a1 + 196) = 0;
        *(_DWORD *)(a1 + 192) = a1 + 204;
        *(_DWORD *)(*(_DWORD *)(a1 + 112) + 108) = 0;
        *(_DWORD *)(a1 + 112) = 0;
        v217 = *(_DWORD *)(a1 + 20);
        LOBYTE(v217) = v217 & 0xE9;
        BYTE1(v217) |= 2u;
        *(_DWORD *)(a1 + 20) = v217;
      }
    }
  }
  *((_DWORD *)v1 + 10) = *((_DWORD *)v1 + 6);
  v218 = v1[12];
  *((_DWORD *)v1 + 11) = *((_DWORD *)v1 + 7);
  v219 = *((_DWORD *)v1 + 8);
  v220 = v1[14];
  *v1 = v218;
  *((_DWORD *)v1 + 12) = v219;
  LOWORD(v219) = v1[16];
  v1[1] = v220;
  v1[2] = v219;
  v221 = sub_433670((_DWORD *)a1, v1, (int)v395, (int)&unk_9A690A);
  *((_DWORD *)v1 + 45) = v221;
  if ( v221 == 0 )
  {
    *((_DWORD *)v1 + 6) = *((_DWORD *)v1 + 10);
    *((_DWORD *)v1 + 7) = *((_DWORD *)v1 + 11);
    *((_DWORD *)v1 + 8) = *((_DWORD *)v1 + 12);
    goto LABEL_448;
  }
  if ( (*(_BYTE *)(*((_DWORD *)v1 + 51) + 12) & 0x20) == 0 )
    dword_4B3C00 = v221;
  *v213 = *(_DWORD *)(a1 + 228);
  v222 = *v1;
  *((_DWORD *)v1 + 15) = *(_DWORD *)(a1 + 232);
  *((_DWORD *)v1 + 16) = *(_DWORD *)(a1 + 236);
  *v214 = v222;
  *((_DWORD *)v1 + 62) = 0;
  *((_DWORD *)v1 + 61) = 0;
  v1[57] = *(_WORD *)(a1 + 38);
  sub_434E40((_DWORD *)v1 + 14, (_DWORD *)v1 + 60, (int)(v1 + 52), (int)v395);
  *v213 = *(_DWORD *)(a1 + 228);
  v223 = *(_WORD *)v214;
  *((_DWORD *)v1 + 15) = *(_DWORD *)(a1 + 232);
  v409 = v223;
  *((_DWORD *)v1 + 16) = *(_DWORD *)(a1 + 236);
  v224 = v1[2];
  *((_DWORD *)v1 + 61) = 0;
  *v214 = 0;
  *((_DWORD *)v1 + 62) = v224;
  v1[57] = *(_WORD *)(a1 + 38);
  sub_434E40((_DWORD *)v1 + 14, (_DWORD *)v1 + 60, (int)(v1 + 52), (int)v395);
  v225 = v1[124];
  v226 = *((_DWORD *)v1 + 45);
  *v1 = v409;
  v1[2] = v225;
  if ( (*(_BYTE *)(v226 + 8) & 8) != 0 )
  {
    v227 = *(_DWORD *)(a1 + 20);
    if ( (v227 & 0x1000010) == 0 )
    {
      v228 = (v227 & 1) != 0 ? *(_DWORD *)(a1 + 20) & 8 : 1;
      if ( v228 != 0 && v1[1] > -100 )
      {
        *(_DWORD *)(a1 + 112) = v226;
        *v1 = v1[12] + *(_WORD *)(a1 + 228) - *(_WORD *)(v226 + 228);
        v1[1] = *(_WORD *)(a1 + 232) - *(_WORD *)(*(_DWORD *)(a1 + 112) + 232);
        v1[2] = v1[16] + *(_WORD *)(a1 + 236) - *(_WORD *)(*(_DWORD *)(a1 + 112) + 236);
        v1[8] = 4096 - *(_WORD *)(*(_DWORD *)(a1 + 112) + 220);
        v1[9] = 4096 - *(_WORD *)(*(_DWORD *)(a1 + 112) + 222);
        v229 = 4096 - *(_WORD *)(*(_DWORD *)(a1 + 112) + 224);
        v1[37] = 0;
        v1[38] = 0;
        v1[39] = 0;
        v1[41] = 0;
        v1[42] = 0;
        v1[43] = 0;
        *((_DWORD *)v1 + 23) = 0;
        *((_DWORD *)v1 + 24) = 0;
        *((_DWORD *)v1 + 25) = 0;
        v1[10] = v229;
        v390 = v1[8];
        v1[36] = 4096;
        v1[40] = 4096;
        v1[44] = 4096;
        RotMatrixX(v390, v1 + 36);
        RotMatrixY(v1[9], v1 + 36);
        RotMatrixZ(v1[10], v1 + 36);
        gte_ApplyMatrix(v1 + 36, v1, (int *)(a1 + 420));
        *(_DWORD *)(a1 + 424) = *(__int16 *)(*(_DWORD *)(a1 + 112) + 82) + 4;
        *((_DWORD *)v1 + 7) = 0;
        *(_DWORD *)(a1 + 232) = *(_DWORD *)(*(_DWORD *)(a1 + 112) + 232) + *(__int16 *)(*(_DWORD *)(a1 + 112) + 82) + 4;
        *(_WORD *)(a1 + 414) = *(_WORD *)(a1 + 222) - *(_WORD *)(*(_DWORD *)(a1 + 112) + 222);
        *(_DWORD *)(a1 + 396) = 4096;
        *(_DWORD *)(a1 + 400) = 4096;
        *(_DWORD *)(a1 + 404) = 4096;
        *(_DWORD *)(a1 + 192) = a1 + 396;
        v230 = *(int **)(a1 + 112);
        v231 = v230[3];
        if ( v230[2] < 0 )
        {
          if ( (v231 & 0x400000) == 0 )
          {
            *(_DWORD *)(a1 + 196) = *(_DWORD *)(v230[30] + 16);
            goto LABEL_371;
          }
        }
        else if ( (v231 & 0x400000) == 0 )
        {
          *(_DWORD *)(a1 + 196) = v230 + 31;
          goto LABEL_372;
        }
        *(_DWORD *)(a1 + 196) = *(_DWORD *)(*((_DWORD *)v1 + 45) + 104);
LABEL_371:
        v232 = *(_DWORD *)(a1 + 196);
        *(_DWORD *)(a1 + 420) -= *(_DWORD *)(*(_DWORD *)(v232 + 68) + 24);
        v233 = *(_DWORD *)(a1 + 428);
        *(_DWORD *)(a1 + 424) -= *(_DWORD *)(*(_DWORD *)(v232 + 68) + 28);
        *(_DWORD *)(a1 + 428) = v233 - *(_DWORD *)(*(_DWORD *)(v232 + 68) + 32);
LABEL_372:
        *(_DWORD *)(*((_DWORD *)v1 + 45) + 108) = a1;
        v234 = (__int16 *)(*(_DWORD *)(a1 + 192) + 16);
        *(_DWORD *)(a1 + 124) = 0;
        RotMatrix(v234, (_WORD *)(a1 + 128));
        ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
        TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
        v235 = *(_DWORD *)(a1 + 20);
        *(_WORD *)(a1 + 266) = 0;
        if ( (v235 & 0x10000) == 0 && (v235 & 0x208) != 0 && (dword_4B3C24 & 0x208) != 0 )
        {
          v236 = *((_DWORD *)v1 + 45);
          v237 = *(_DWORD *)(v236 + 20);
          LOBYTE(v237) = v237 | 0x80;
          *(_DWORD *)(v236 + 20) = v237;
        }
        if ( (*(_DWORD *)(a1 + 20) & 0x3000000) == 0 )
        {
          v238 = *((_DWORD *)v1 + 45);
          v239 = *(_DWORD *)(v238 + 20);
          if ( (v239 & 0x80u) != 0 && *(_WORD *)(v238 + 44) == 14 )
          {
            v240 = *(_DWORD *)(v238 + 388);
            if ( v240 != 0 )
            {
              if ( (*(_DWORD *)(v240 + 16) & 0x8000) != 0 )
              {
                *(_DWORD *)(v238 + 20) = v239 | 0x4000000;
                *(_WORD *)(*((_DWORD *)v1 + 45) + 56) = 1;
                *(_DWORD *)(*((_DWORD *)v1 + 45) + 52) = 1;
                *(_DWORD *)(a1 + 52) = *(unsigned __int16 *)(*((_DWORD *)v1 + 45) + 28);
              }
              if ( (*(_DWORD *)(*(_DWORD *)(*((_DWORD *)v1 + 45) + 388) + 16) & 0x10000000) != 0 )
              {
                v241 = *(_DWORD *)(a1 + 24);
                LOBYTE(v241) = v241 | 0x40;
                *(_DWORD *)(a1 + 24) = v241;
              }
            }
          }
        }
        v242 = *(_DWORD *)(a1 + 20) | 0x14;
        *(_DWORD *)(a1 + 20) = v242;
        if ( (*(_BYTE *)(a1 + 24) & 0x40) == 0 )
          *(_DWORD *)(a1 + 20) = v242 & 0xFFFFFDF6;
        *(_DWORD *)(a1 + 20) &= ~2u;
        v243 = *((_DWORD *)v1 + 45);
        v244 = *(_DWORD *)(v243 + 20);
        if ( (v244 & 0x80u) != 0 && *(_WORD *)(v243 + 44) == 14 )
        {
          v245 = *(_DWORD *)(v243 + 388);
          if ( v245 != 0 && (*(_DWORD *)(v245 + 16) & 0x8000) != 0 )
          {
            *(_DWORD *)(v243 + 20) = v244 | 0x4000000;
            *(_WORD *)(*((_DWORD *)v1 + 45) + 56) = 1;
            *(_DWORD *)(*((_DWORD *)v1 + 45) + 52) = 1;
            *(_DWORD *)(a1 + 52) = *(unsigned __int16 *)(*((_DWORD *)v1 + 45) + 28);
          }
        }
        if ( ((unsigned int)&unk_800000 & *(_DWORD *)(*((_DWORD *)v1 + 45) + 12)) != 0
          && (*(_DWORD *)(a1 + 20) & 0x10000000) == 0 )
        {
          if ( (dword_4B3C18 | dword_4B3C10) == 0 )
          {
            dword_4B3C10 = *((_DWORD *)v1 + 6);
            dword_4B3C18 = *((_DWORD *)v1 + 8);
          }
          *(_DWORD *)(a1 + 20) |= 0x10000000u;
        }
      }
    }
  }
  v246 = *((_DWORD *)v1 + 45);
  v247 = *(_DWORD *)(v246 + 8);
  if ( (v247 & 0x4000) == 0 || (*(_BYTE *)(a1 + 20) & 0x11) != 0 )
  {
    v253 = *(_DWORD *)(a1 + 108);
    if ( v253 != 0 || (v247 & 0x2802) == 0 || *(_DWORD *)(a1 + 112) == v246 )
    {
      if ( (v247 & 0x20100) != 0 && v253 != v246 && *(_DWORD *)(a1 + 112) != v246 )
      {
        *(_DWORD *)(v246 + 20) |= 0x8000u;
        v262 = *(_DWORD *)(a1 + 20);
        if ( (v262 & 0x10000) == 0 && (v262 & 0x208) != 0 && v1[1] > -100 )
        {
          v263 = *((_DWORD *)v1 + 45);
          v264 = *(_DWORD *)(v263 + 20);
          LOBYTE(v264) = v264 | 0x80;
          *(_DWORD *)(v263 + 20) = v264;
        }
        v265 = *(_DWORD *)(a1 + 20);
        if ( (v265 & 0x3000000) == 0
          && (v266 = *((_DWORD *)v1 + 45), ((v267 = *(_DWORD *)(v266 + 20)) & 0x80u) != 0)
          && *(_WORD *)(v266 + 44) == 14
          && (v268 = *(_DWORD *)(v266 + 388)) != 0 )
        {
          if ( (*(_DWORD *)(v268 + 16) & 0x8000) != 0 )
          {
            *(_DWORD *)(v266 + 20) = v267 | 0x4000000;
            *(_WORD *)(*((_DWORD *)v1 + 45) + 56) = 1;
            *(_DWORD *)(*((_DWORD *)v1 + 45) + 52) = 1;
            *(_DWORD *)(a1 + 52) = *(unsigned __int16 *)(*((_DWORD *)v1 + 45) + 28);
          }
          if ( (*(_DWORD *)(*(_DWORD *)(*((_DWORD *)v1 + 45) + 388) + 16) & 0x10000000) != 0 )
          {
            v269 = *(_DWORD *)(a1 + 24);
            LOBYTE(v269) = v269 | 0x40;
            *(_DWORD *)(a1 + 24) = v269;
          }
        }
        else if ( (v265 & 0x10) != 0 || (*(_BYTE *)(*((_DWORD *)v1 + 45) + 8) & 8) == 0 || (v270 = v1[1]) <= -100 )
        {
          if ( (*(_DWORD *)(*((_DWORD *)v1 + 45) + 8) & 0x2000000) == 0 && v1[1] < -30 )
          {
            v271 = v1[2];
            *((_DWORD *)v1 + 6) = *v1;
            *((_DWORD *)v1 + 8) = v271;
          }
        }
        else
        {
          *((_DWORD *)v1 + 7) += v270;
        }
      }
    }
    else
    {
      *(_DWORD *)(a1 + 20) |= 0x40000u;
      *(_DWORD *)(*((_DWORD *)v1 + 45) + 20) |= 0x8000u;
      v254 = *(_DWORD *)(a1 + 20);
      if ( (v254 & 0x10000) == 0 && (v254 & 0x208) != 0 && v1[1] > -100 )
      {
        v255 = *((_DWORD *)v1 + 45);
        v256 = *(_DWORD *)(v255 + 20);
        LOBYTE(v256) = v256 | 0x80;
        *(_DWORD *)(v255 + 20) = v256;
      }
      if ( (*(_DWORD *)(a1 + 20) & 0x3000000) == 0
        && (v257 = *((_DWORD *)v1 + 45), ((v258 = *(_DWORD *)(v257 + 20)) & 0x80u) != 0)
        && *(_WORD *)(v257 + 44) == 14
        && (v259 = *(_DWORD *)(v257 + 388)) != 0 )
      {
        if ( (*(_DWORD *)(v259 + 16) & 0x8000) != 0 )
        {
          *(_DWORD *)(v257 + 20) = v258 | 0x4000000;
          *(_WORD *)(*((_DWORD *)v1 + 45) + 56) = 1;
          *(_DWORD *)(*((_DWORD *)v1 + 45) + 52) = 1;
          *(_DWORD *)(a1 + 52) = *(unsigned __int16 *)(*((_DWORD *)v1 + 45) + 28);
        }
        if ( (*(_DWORD *)(*(_DWORD *)(*((_DWORD *)v1 + 45) + 388) + 16) & 0x10000000) != 0 )
        {
          v260 = *(_DWORD *)(a1 + 24);
          LOBYTE(v260) = v260 | 0x40;
          *(_DWORD *)(a1 + 24) = v260;
        }
      }
      else if ( (*(_DWORD *)(*((_DWORD *)v1 + 45) + 8) & 0x2000000) == 0
             && (*(_BYTE *)(*((_DWORD *)v1 + 51) + 12) & 0x40) == 0
             && v1[1] < -30 )
      {
        v261 = v1[2];
        *((_DWORD *)v1 + 6) = *v1;
        *((_DWORD *)v1 + 8) = v261;
      }
    }
  }
  else
  {
    v1[116] = 0;
    v1[117] = -50;
    v1[118] = 150;
    RotMatrix((__int16 *)(a1 + 220), v1 + 36);
    ApplyMatrix(v1 + 36, v1 + 116, (int *)v1 + 60);
    *v214 += *(_DWORD *)(a1 + 228);
    *((_DWORD *)v1 + 61) += *(_DWORD *)(a1 + 232);
    *((_DWORD *)v1 + 62) += *(_DWORD *)(a1 + 236);
    v248 = sub_4334F0(a1, v1 + 120, 0x4000, 0x2000000, (int)v395);
    v249 = *((_DWORD *)v1 + 45);
    *((_DWORD *)v1 + 50) = v248;
    if ( v249 == v248 && v1[6] != 0 )
      *(_DWORD *)(a1 + 20) |= 0x20000u;
    if ( (*(_DWORD *)(*((_DWORD *)v1 + 51) + 12) & 0x4000000) != 0
      && (v250 = *((_DWORD *)v1 + 45)) == *((_DWORD *)v1 + 50)
      && v1[6] != 0 )
    {
      *(_WORD *)(v250 + 64) = v1[12];
      *(_WORD *)(*((_DWORD *)v1 + 45) + 68) = v1[16];
      v251 = *(_DWORD *)(a1 + 20);
      BYTE1(v251) |= 0x40u;
      *(_DWORD *)(a1 + 20) = v251;
      *(_DWORD *)(*((_DWORD *)v1 + 45) + 20) |= 0x8000u;
      *(_DWORD *)(*((_DWORD *)v1 + 45) + 112) = a1;
    }
    else
    {
      *(_DWORD *)(*((_DWORD *)v1 + 45) + 20) |= 0x8000u;
      v252 = v1[2];
      *((_DWORD *)v1 + 6) = *v1;
      *((_DWORD *)v1 + 8) = v252;
    }
  }
LABEL_448:
  v272 = *((_DWORD *)v1 + 45);
  if ( v272 == 0
    || ((unsigned int)&unk_900000 & *(_DWORD *)(v272 + 8)) == 0
    || ((*(_DWORD *)(a1 + 20) & 1) == 0 ? (v273 = 1) : (v273 = *(_DWORD *)(a1 + 20) & 8), v273 == 0) )
  {
    v285 = *(_DWORD *)(a1 + 20);
    if ( (v285 & 0x400) == 0 )
      goto LABEL_486;
    goto LABEL_485;
  }
  *(_DWORD *)(v272 + 20) |= 0x8000u;
  byte_4B3242 = 5;
  byte_4B3243 = 80;
  byte_4B3246 = 0;
  if ( (*(_BYTE *)(a1 + 20) & 0x10) != 0 )
  {
    *(_WORD *)(a1 + 224) = 0;
    *(_DWORD *)(a1 + 196) = 0;
    *(_DWORD *)(a1 + 192) = a1 + 204;
    *(_DWORD *)(*(_DWORD *)(a1 + 112) + 108) = 0;
    *(_DWORD *)(a1 + 112) = 0;
    *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFDE9 | 2;
    *(_DWORD *)(a1 + 124) = 0;
    RotMatrix((__int16 *)(*(_DWORD *)(a1 + 192) + 16), (_WORD *)(a1 + 128));
    ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
    TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
  }
  v1[116] = *(_WORD *)(a1 + 228) - *(_WORD *)(*((_DWORD *)v1 + 45) + 228);
  v1[117] = *(_WORD *)(a1 + 232) - *(_WORD *)(*((_DWORD *)v1 + 45) + 232);
  v274 = *(_WORD *)(a1 + 236) - *(_WORD *)(*((_DWORD *)v1 + 45) + 236);
  v1[118] = v274;
  v275 = *(_DWORD *)(*((_DWORD *)v1 + 45) + 8);
  if ( (v275 & 0x100000) != 0 )
  {
    v409 = SquareRoot0(v274 * v274 + v1[116] * v1[116]);
    v396 = v409;
  }
  else if ( ((unsigned int)&unk_800000 & v275) != 0 )
  {
    v409 = 0;
    v396 = 0;
  }
  if ( v409 <= (int)*(unsigned __int16 *)(*((_DWORD *)v1 + 45) + 46) )
  {
    if ( (*(_DWORD *)(a1 + 20) & 0x400) == 0 )
    {
      v276 = BugsRand();
      dword_4B3BC8 = 0;
      dword_4B3B88 = (v276 & 7) + 7;
      dword_4B3C40 = -v1[117] >> 4;
      if ( dword_4B3C40 < 5 || ((unsigned int)&unk_800000 & *(_DWORD *)(*((_DWORD *)v1 + 45) + 8)) != 0 )
        dword_4B3C40 = 0;
      dword_4B3BC8 = 1024;
      dword_4B3C04 = 1024;
      v277 = *(_DWORD *)(a1 + 108);
      *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFF9F2 | 0x404;
      if ( v277 != 0 )
      {
        *(_DWORD *)(v277 + 20) &= ~0x800u;
        v278 = *(_DWORD *)(a1 + 108);
        v279 = *(_DWORD *)(v278 + 20);
        BYTE1(v279) |= 0x10u;
        *(_DWORD *)(v278 + 20) = v279;
        *(_DWORD *)(*(_DWORD *)(a1 + 108) + 196) = 0;
        *(_DWORD *)(*(_DWORD *)(a1 + 108) + 192) = *(_DWORD *)(a1 + 108) + 204;
        v280 = *(_DWORD *)(a1 + 108) + 124;
        v281 = (__int16 *)(*(_DWORD *)(a1 + 108) + 128);
        v391 = (__int16 *)(*(_DWORD *)(*(_DWORD *)(a1 + 108) + 192) + 16);
        *(_DWORD *)v280 = 0;
        RotMatrix(v391, v281);
        ScaleMatrix(v281, *(_DWORD **)(v280 + 68));
        TransMatrix(v281, (_DWORD *)(*(_DWORD *)(v280 + 68) + 24));
        *(_DWORD *)(*(_DWORD *)(a1 + 108) + 112) = 0;
        *(_DWORD *)(a1 + 108) = 0;
      }
    }
    if ( dword_4B3C40 != 0 )
    {
      if ( dword_4B3C04 >= 2048 )
      {
        dword_4B3C40 = 0;
        dword_4B3C04 = 0;
      }
      else
      {
        *((_DWORD *)v1 + 7) += (dword_4B3C40 * rsin(dword_4B3C04)) >> 12;
        dword_4B3C04 += 64;
      }
    }
    else
    {
      v282 = *(_DWORD *)(*((_DWORD *)v1 + 45) + 8);
      if ( (v282 & 0x100000) != 0 )
      {
        *((_DWORD *)v1 + 44) = 80;
      }
      else if ( ((unsigned int)&unk_800000 & v282) != 0 )
      {
        *((_DWORD *)v1 + 44) = 120;
      }
      v410 = *((_DWORD *)v1 + 44);
      v283 = (v396 << 12) / *(unsigned __int16 *)(*((_DWORD *)v1 + 45) + 46)
           + (v1[117] << 12) / *(__int16 *)(*((_DWORD *)v1 + 45) + 82);
      v284 = -((v410 - ((v410 * v283) >> 12)) * rsin(dword_4B3C04)) >> 12;
      LOWORD(v410) = v284;
      if ( dword_4B3C04 >= 1024 )
        v410 = ((dword_4B3B88 * rsin(dword_4B3BC8)) >> 12) + v284;
      else
        dword_4B3C04 += 64;
      if ( (__int16)v410 + v1[117] > *(__int16 *)(*((_DWORD *)v1 + 45) + 82) + 10 )
        *((_DWORD *)v1 + 7) += (__int16)v410;
      dword_4B3BC8 += 100;
      if ( dword_4B3BC8 > 4096 )
      {
        dword_4B3B88 = (BugsRand() & 7) + 9;
        dword_4B3BC8 -= 4096;
      }
    }
    goto LABEL_486;
  }
  v285 = *(_DWORD *)(a1 + 20);
  if ( (v285 & 0x400) != 0 )
  {
LABEL_485:
    v286 = v285 & 0xFFFFFBFB;
    BYTE1(v286) |= 2u;
    *(_DWORD *)(a1 + 20) = v286;
  }
LABEL_486:
  v287 = *((_DWORD *)v1 + 45);
  if ( v287 != 0 && (*(_DWORD *)(v287 + 8) & 0x80000) != 0 )
  {
    v1[116] = *(_WORD *)(a1 + 228) - *(_WORD *)(v287 + 228);
    v288 = *(_WORD *)(a1 + 236) - *(_WORD *)(*((_DWORD *)v1 + 45) + 236);
    v1[118] = v288;
    v1[118] = ((__int16)(4096
                       - (SquareRoot0(v288 * v288 + v1[116] * v1[116]) << 12)
                       / *(__int16 *)(*((_DWORD *)v1 + 45) + 84))
             * *(__int16 *)(*((_DWORD *)v1 + 45) + 406)) >> 12;
    v1[117] = 0;
    v1[116] = 0;
    ApplyMatrix((__int16 *)(*((_DWORD *)v1 + 45) + 128), v1 + 116, (int *)v1 + 60);
    *((_DWORD *)v1 + 6) += *((_DWORD *)v1 + 60);
    *((_DWORD *)v1 + 8) += *((_DWORD *)v1 + 62);
  }
  v289 = *(_DWORD *)(*((_DWORD *)v1 + 51) + 12);
  if ( (v289 & 0x200) != 0 )
  {
    *(_DWORD *)(a1 + 424) += *((_DWORD *)v1 + 7);
    v392 = (__int16 *)(*(_DWORD *)(a1 + 192) + 16);
    *(_DWORD *)(a1 + 124) = 0;
    RotMatrix(v392, (_WORD *)(a1 + 128));
    ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
    TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
    *((_DWORD *)v1 + 75) = a1 + 124;
    v290 = *((_DWORD *)v1 + 75);
    v1[152] = 0;
    v1[153] = 0;
    v1[154] = 0;
    if ( v290 != 0 )
    {
      v291 = v1 + 156;
      do
      {
        gte_ApplyMatrix((__int16 *)(*((_DWORD *)v1 + 75) + 4), v1 + 152, (int *)v1 + 78);
        v292 = *((_DWORD *)v1 + 75);
        v293 = *((_DWORD *)v1 + 79);
        *v291 += *(_DWORD *)(v292 + 24);
        v294 = v292;
        v295 = *(_DWORD *)(v292 + 28) + v293;
        v296 = *((_DWORD *)v1 + 80);
        *((_DWORD *)v1 + 79) = v295;
        v297 = *(_DWORD *)(v294 + 32);
        v1[153] = v1[158];
        *((_DWORD *)v1 + 80) = v297 + v296;
        LOWORD(v297) = v1[160];
        v1[152] = *(_WORD *)v291;
        v298 = *((_DWORD *)v1 + 75);
        v1[154] = v297;
        v299 = *(_DWORD *)(v298 + 72);
        *((_DWORD *)v1 + 75) = v299;
      }
      while ( v299 != 0 );
    }
    *(_DWORD *)(a1 + 228) = *((_DWORD *)v1 + 78);
    *(_DWORD *)(a1 + 232) = *((_DWORD *)v1 + 79);
    *(_DWORD *)(a1 + 236) = *((_DWORD *)v1 + 80);
  }
  else if ( *(_DWORD *)(a1 + 196) != 0 )
  {
    v1[118] = 0;
    v1[116] = 0;
    v1[117] = -*(_WORD *)(*(_DWORD *)(a1 + 112) + 222);
    RotMatrix(v1 + 116, v1 + 36);
    ApplyMatrixLV(v1 + 36, (_DWORD *)v1 + 6, (int *)v1 + 6);
    v300 = *(_DWORD *)(a1 + 424);
    v301 = *(_DWORD *)(a1 + 428);
    *(_DWORD *)(a1 + 420) += *((_DWORD *)v1 + 6);
    *(_DWORD *)(a1 + 424) = *((_DWORD *)v1 + 7) + v300;
    *(_DWORD *)(a1 + 428) = *((_DWORD *)v1 + 8) + v301;
    v393 = (__int16 *)(*(_DWORD *)(a1 + 192) + 16);
    *(_DWORD *)(a1 + 124) = 0;
    RotMatrix(v393, (_WORD *)(a1 + 128));
    ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
    TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
    *((_DWORD *)v1 + 75) = a1 + 124;
    v302 = *((_DWORD *)v1 + 75);
    v1[152] = 0;
    v1[153] = 0;
    v1[154] = 0;
    if ( v302 != 0 )
    {
      v303 = v1 + 156;
      do
      {
        gte_ApplyMatrix((__int16 *)(*((_DWORD *)v1 + 75) + 4), v1 + 152, (int *)v1 + 78);
        v304 = *((_DWORD **)v1 + 75);
        *v303 += v304[6];
        v305 = *(_WORD *)v303;
        *((_DWORD *)v1 + 79) += v304[7];
        v306 = v304[8];
        v307 = *((_DWORD *)v1 + 80);
        v1[152] = v305;
        v308 = *((_DWORD *)v1 + 75);
        *((_DWORD *)v1 + 80) = v306 + v307;
        LOWORD(v306) = v1[160];
        v1[153] = v1[158];
        v1[154] = v306;
        v309 = *(_DWORD *)(v308 + 72);
        *((_DWORD *)v1 + 75) = v309;
      }
      while ( v309 != 0 );
    }
    *(_DWORD *)(a1 + 228) = *((_DWORD *)v1 + 78);
    *(_DWORD *)(a1 + 232) = *((_DWORD *)v1 + 79);
    *(_DWORD *)(a1 + 236) = *((_DWORD *)v1 + 80);
    v394 = (__int16 *)(*(_DWORD *)(a1 + 192) + 16);
    *(_DWORD *)(a1 + 124) = 0;
    RotMatrix(v394, (_WORD *)(a1 + 128));
    ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
    TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
  }
  else if ( (v289 & 0x8000) == 0 )
  {
    *(_DWORD *)(a1 + 228) += *((_DWORD *)v1 + 6);
    *(_DWORD *)(a1 + 232) += *((_DWORD *)v1 + 7);
    *(_DWORD *)(a1 + 236) += *((_DWORD *)v1 + 8);
    if ( *(_DWORD *)(a1 + 120) != 0 && (*(_DWORD *)(a1 + 8) & 0x200000) == 0 )
    {
      v310 = (_DWORD *)(*(_DWORD *)(a1 + 192) + 24);
      *(_DWORD *)(a1 + 124) = 0;
      TransMatrix((_DWORD *)(a1 + 128), v310);
      RotMatrix((__int16 *)(*(_DWORD *)(a1 + 192) + 16), (_WORD *)(a1 + 128));
      ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
    }
  }
  else
  {
    *(_DWORD *)(a1 + 228) += *((_DWORD *)v1 + 6);
    *(_DWORD *)(a1 + 232) += *((_DWORD *)v1 + 7);
    *(_DWORD *)(a1 + 236) += *((_DWORD *)v1 + 8);
    TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
  }
  v311 = *(_DWORD *)(a1 + 20);
  if ( (v311 & 0x10) != 0 )
  {
    v312 = *(_DWORD *)(a1 + 112);
    if ( v312 == 0 || (*(_BYTE *)(v312 + 8) & 8) == 0 )
    {
      v313 = v311 & 0xFFFFFDEB;
      LOBYTE(v313) = v313 | 2;
      *(_DWORD *)(a1 + 20) = v313;
    }
  }
  if ( (*(_BYTE *)(a1 + 20) & 0x10) != 0 )
  {
    if ( sub_4343A0((_WORD *)a1, *(_DWORD *)(a1 + 112), (int)v395) == 0 || (*(_BYTE *)(a1 + 20) & 2) != 0 )
    {
      *((_DWORD *)v1 + 46) = *(_DWORD *)(a1 + 228) - *(_DWORD *)(*(_DWORD *)(a1 + 112) + 228);
      *((_DWORD *)v1 + 47) = 0;
      *((_DWORD *)v1 + 48) = *(_DWORD *)(a1 + 236) - *(_DWORD *)(*(_DWORD *)(a1 + 112) + 236);
      *((_DWORD *)v1 + 14) = *(_DWORD *)(*(_DWORD *)(a1 + 112) + 228);
      *((_DWORD *)v1 + 15) = *(_DWORD *)(*(_DWORD *)(a1 + 112) + 232);
      *((_DWORD *)v1 + 16) = *(_DWORD *)(*(_DWORD *)(a1 + 112) + 236);
      *((_DWORD *)v1 + 15) = *(_DWORD *)(a1 + 232);
      v1[57] = *(_WORD *)(a1 + 38);
      sub_434E40((_DWORD *)v1 + 14, (_DWORD *)v1 + 46, (int)(v1 + 52), (int)v395);
      *(_DWORD *)(a1 + 228) = *((_DWORD *)v1 + 46) + *(_DWORD *)(*(_DWORD *)(a1 + 112) + 228);
      *(_DWORD *)(a1 + 236) = *((_DWORD *)v1 + 48) + *(_DWORD *)(*(_DWORD *)(a1 + 112) + 236);
      *(_WORD *)(a1 + 224) = 0;
      *(_DWORD *)(a1 + 196) = 0;
      *(_DWORD *)(a1 + 192) = a1 + 204;
      *(_DWORD *)(*(_DWORD *)(a1 + 112) + 108) = 0;
      *(_DWORD *)(a1 + 112) = 0;
      *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFDE9 | 2;
      v316 = (__int16 *)(*(_DWORD *)(a1 + 192) + 16);
      *(_DWORD *)(a1 + 124) = 0;
      RotMatrix(v316, (_WORD *)(a1 + 128));
      ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
      TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
    }
    else
    {
      v314 = *(_DWORD *)(a1 + 112);
      v315 = *(_DWORD *)(v314 + 20);
      BYTE1(v315) |= 0x80u;
      *(_DWORD *)(v314 + 20) = v315;
    }
  }
  if ( *((_DWORD *)v1 + 45) == 0 && (*((_DWORD *)v1 + 6) | *((_DWORD *)v1 + 7) | *((_DWORD *)v1 + 8)) == 0 )
  {
    v1[116] = 0;
    v1[117] = -50;
    v1[118] = 100;
    RotMatrix((__int16 *)(a1 + 220), v1 + 36);
    ApplyMatrix(v1 + 36, v1 + 116, (int *)v1 + 60);
    *((_DWORD *)v1 + 60) += *(_DWORD *)(a1 + 228);
    *((_DWORD *)v1 + 61) += *(_DWORD *)(a1 + 232);
    *((_DWORD *)v1 + 62) += *(_DWORD *)(a1 + 236);
    v317 = sub_4334F0(a1, v1 + 120, 10242, 0x2000000, (int)v395);
    *((_DWORD *)v1 + 45) = v317;
    if ( v317 != 0 )
    {
      dword_4B3C00 = v317;
      *(_DWORD *)(a1 + 20) |= 0x40000u;
      v318 = *((_DWORD *)v1 + 45);
      v319 = *(_DWORD *)(v318 + 20);
      BYTE1(v319) |= 0x80u;
      *(_DWORD *)(v318 + 20) = v319;
    }
  }
  if ( (dword_4B3C24 & 0x200) == 0 && (dword_4B3C24 & 0x12) != 0 && (*(_DWORD *)(a1 + 20) & 0x200) != 0 )
    *(_DWORD *)(a1 + 24) |= 0x200u;
  if ( *((_DWORD *)v1 + 52) != 0 && *(_WORD *)(*((_DWORD *)v1 + 51) + 10) != 0 )
  {
    v320 = *(_DWORD *)(a1 + 252);
    *((_DWORD *)v1 + 52) = v320;
    if ( v320 != 0 )
    {
      do
      {
        v321 = *((int **)v1 + 52);
        if ( *((_WORD *)v321 + 2) == *(_WORD *)(*((_DWORD *)v1 + 51) + 10) )
          break;
        v322 = *v321;
        *((_DWORD *)v1 + 52) = v322;
      }
      while ( v322 != 0 );
    }
    v323 = *((_DWORD *)v1 + 52);
    v1[113] = -13;
    *((_DWORD *)v1 + 53) = v323;
    if ( v323 != 0 )
    {
      do
      {
        v324 = *((_DWORD *)v1 + 53);
        if ( *(_WORD *)(v324 + 4) != *(_WORD *)(*((_DWORD *)v1 + 51) + 10) )
          break;
        v325 = *(_DWORD *)(v324 + 28);
        if ( v325 == 0 || (v326 = *(_DWORD *)(a1 + 108)) != 0 && (v325 & *(_DWORD *)(v326 + 8)) != 0 )
        {
          v327 = *(_DWORD *)(v324 + 32);
          if ( v327 != 0 )
          {
            v328 = *(_DWORD *)(a1 + 112);
            if ( v328 == 0 || (v327 & *(_DWORD *)(v328 + 8)) == 0 )
            {
              if ( (v327 & 0x8000) == 0 )
                goto LABEL_558;
              if ( v328 != 0 && *(_WORD *)(v328 + 44) == 14 && (v329 = *(_DWORD *)(v328 + 388)) != 0 )
              {
                if ( (*(_DWORD *)(v329 + 16) & 0x10000000) == 0 )
                  goto LABEL_558;
              }
              else if ( (*(_BYTE *)(a1 + 24) & 0x40) == 0 )
              {
                goto LABEL_558;
              }
            }
          }
          v330 = *(_DWORD *)(v324 + 36);
          if ( v330 != 0 )
          {
            v331 = *(_DWORD *)(a1 + 20);
            if ( (*(_BYTE *)(v324 + 24) & 2) != 0 )
            {
              if ( (v330 & v331) != 0 )
                goto LABEL_558;
            }
            else if ( (v330 & v331) == 0 )
            {
              goto LABEL_558;
            }
          }
          v332 = *(_DWORD *)(v324 + 40);
          if ( v332 != 0 )
          {
            v333 = *(_DWORD *)(a1 + 24);
            if ( (*(_BYTE *)(v324 + 24) & 1) != 0 )
            {
              if ( (v332 & v333) != 0 )
                goto LABEL_558;
            }
            else if ( (v332 & v333) == 0 )
            {
              goto LABEL_558;
            }
          }
          v334 = *(_WORD *)(v324 + 8);
          if ( v334 == 0 || (v334 & *((_WORD *)dword_52FD00 + 32773)) != 0 )
          {
            v335 = *(_WORD *)(v324 + 6);
            if ( v335 == (v335 & *((_WORD *)dword_52FD00 + 32773)) )
            {
              if ( TestLogicCond(a1, (_BYTE *)(v324 + 14)) != 0 )
              {
                RunLogicAction(a1, *((_DWORD *)v1 + 53) + 14);
                v337 = *(_WORD *)(*((_DWORD *)v1 + 53) + 10);
                if ( v337 == -13 )
                  break;
LABEL_563:
                v1[113] = v337;
                break;
              }
            }
            else if ( v335 == 0xFFF1 && TestLogicCond(a1, (_BYTE *)(v324 + 14)) != 0 )
            {
              RunLogicAction(a1, *((_DWORD *)v1 + 53) + 14);
              v337 = *(_WORD *)(*((_DWORD *)v1 + 53) + 10);
              if ( v337 == -13 )
                break;
              goto LABEL_563;
            }
          }
        }
LABEL_558:
        v336 = **((_DWORD **)v1 + 53);
        *((_DWORD *)v1 + 53) = v336;
      }
      while ( v336 != 0 );
    }
    v338 = *((_DWORD *)v1 + 53);
    if ( v338 != 0 )
    {
      v339 = *(_WORD *)(v338 + 12);
      if ( v339 != 0 )
      {
        v340 = *(_DWORD *)(a1 + 108);
        if ( v340 != 0 )
        {
          if ( v339 == 211 )
          {
            v341 = *(_DWORD *)(v340 + 20);
            BYTE1(v341) |= 1u;
            *(_DWORD *)(v340 + 20) = v341;
            *(_DWORD *)(*(_DWORD *)(a1 + 108) + 112) = 0;
            *(_DWORD *)(a1 + 108) = 0;
          }
          else
          {
            *(_WORD *)(v340 + 382) = v339;
            *(_DWORD *)(*(_DWORD *)(a1 + 108) + 344) = 0;
            *(_WORD *)(*(_DWORD *)(a1 + 108) + 380) = 0;
          }
        }
      }
    }
    if ( v1[113] != -13 )
    {
      *(_WORD *)(a1 + 382) = 0;
      v342 = *(_WORD *)(*((_DWORD *)v1 + 54) + 4);
      if ( v342 == 5 || v342 == 18 )
      {
        v343 = *(_DWORD *)(a1 + 20);
        if ( (v343 & 0x200) != 0 )
        {
          BYTE1(v343) &= ~2u;
          *(_DWORD *)(a1 + 20) = v343;
          v1[113] = 7;
        }
      }
      v344 = *(_DWORD *)(a1 + 244);
      *((_DWORD *)v1 + 54) = v344;
      if ( v344 != 0 )
      {
        v345 = v1[113];
        do
        {
          v346 = *((int **)v1 + 54);
          if ( *((_WORD *)v346 + 2) == v345 )
            break;
          v347 = *v346;
          *((_DWORD *)v1 + 54) = v347;
        }
        while ( v347 != 0 );
      }
      v1[112] = *(_WORD *)(*((_DWORD *)v1 + 54) + 6);
      v348 = *(_DWORD *)(a1 + 248);
      *((_DWORD *)v1 + 51) = v348;
      if ( v348 != 0 )
      {
        do
        {
          v349 = *((int **)v1 + 51);
          if ( *((_WORD *)v349 + 2) == v1[112] )
            break;
          v350 = *v349;
          *((_DWORD *)v1 + 51) = v350;
        }
        while ( v350 != 0 );
      }
      v351 = *(_DWORD *)(a1 + 252);
      *((_DWORD *)v1 + 52) = v351;
      if ( v351 != 0 )
      {
        do
        {
          v352 = *((int **)v1 + 52);
          if ( *((_WORD *)v352 + 2) == *(_WORD *)(*((_DWORD *)v1 + 51) + 10) )
            break;
          v353 = *v352;
          *((_DWORD *)v1 + 52) = v353;
        }
        while ( v353 != 0 );
      }
      word_4B3444 = *(_WORD *)(a1 + 344);
      *(_WORD *)(a1 + 380) = v1[113];
      *(_DWORD *)(a1 + 384) = *((_DWORD *)v1 + 54);
      *(_DWORD *)(a1 + 388) = *((_DWORD *)v1 + 51);
      *(_DWORD *)(a1 + 392) = *((_DWORD *)v1 + 52);
      *(_DWORD *)(a1 + 344) = 0;
      *(_DWORD *)(a1 + 104) = 0;
      if ( (*(_DWORD *)(*((_DWORD *)v1 + 51) + 16) & 0x800) != 0 )
        *(_DWORD *)(a1 + 20) &= 0xFFFFFDF6;
    }
  }
  v354 = v1 + 116;
  v1[116] = 0;
  v1[117] = 0;
  v1[118] = 0;
  if ( *(_DWORD *)(a1 + 108) == 0 && (*(_BYTE *)(*((_DWORD *)v1 + 51) + 12) & 0x20) != 0 && *(_DWORD *)(a1 + 104) != 0 )
  {
    v355 = dword_4B3C00;
    *((_DWORD *)v1 + 45) = dword_4B3C00;
    if ( dword_4B3C00 != 0 )
    {
      v356 = *(_DWORD *)(v355 + 8);
      if ( (v356 & 0x2802) != 0 && v355 != *(_DWORD *)(a1 + 112) )
      {
        if ( (v356 & 0x2000) != 0 )
        {
          *v354 = 0;
          v1[117] = -50;
          v1[118] = 100;
          RotMatrix((__int16 *)(a1 + 220), v1 + 36);
          v357 = v1 + 120;
          ApplyMatrix(v1 + 36, v1 + 116, (int *)v1 + 60);
          *((_DWORD *)v1 + 60) += *(_DWORD *)(a1 + 228);
          *((_DWORD *)v1 + 61) += *(_DWORD *)(a1 + 232);
          *((_DWORD *)v1 + 62) += *(_DWORD *)(a1 + 236);
          v358 = sub_4334F0(a1, v1 + 120, 10242, 0x2000000, (int)v395);
          *((_DWORD *)v1 + 45) = v358;
          if ( v358 == 0 )
          {
            *v354 = -100;
            v1[117] = -50;
            v1[118] = 100;
            ApplyMatrix(v1 + 36, v1 + 116, (int *)v1 + 60);
            *v357 += *(_DWORD *)(a1 + 228);
            *((_DWORD *)v1 + 61) += *(_DWORD *)(a1 + 232);
            *((_DWORD *)v1 + 62) += *(_DWORD *)(a1 + 236);
            v359 = sub_4334F0(a1, v1 + 120, 10242, 0x2000000, (int)v395);
            *((_DWORD *)v1 + 45) = v359;
            if ( v359 == 0 )
            {
              *v354 = 100;
              v1[117] = -50;
              v1[118] = 100;
              ApplyMatrix(v1 + 36, v1 + 116, (int *)v1 + 60);
              *v357 += *(_DWORD *)(a1 + 228);
              *((_DWORD *)v1 + 61) += *(_DWORD *)(a1 + 232);
              *((_DWORD *)v1 + 62) += *(_DWORD *)(a1 + 236);
              *((_DWORD *)v1 + 45) = sub_4334F0(a1, v1 + 120, 10242, 0x2000000, (int)v395);
            }
          }
        }
        v360 = *((_DWORD *)v1 + 45);
        if ( v360 != 0 )
        {
          v361 = *(_DWORD *)(v360 + 112);
          if ( v361 != 0 && *(_DWORD *)(v361 + 108) == v360 )
          {
            *(_DWORD *)(v361 + 108) = 0;
            *(_DWORD *)(*((_DWORD *)v1 + 45) + 112) = 0;
          }
          dword_4B3C00 = 0;
          *(_DWORD *)(a1 + 108) = *((_DWORD *)v1 + 45);
          *(_DWORD *)(*((_DWORD *)v1 + 45) + 20) &= 0xFFF7EFED;
          v362 = *((_DWORD *)v1 + 45);
          v363 = *(_DWORD *)(v362 + 20);
          BYTE1(v363) |= 8u;
          *(_DWORD *)(v362 + 20) = v363;
          *(_DWORD *)(*((_DWORD *)v1 + 45) + 196) = *(_DWORD *)(a1 + 104);
          *(_DWORD *)(*((_DWORD *)v1 + 45) + 192) = *((_DWORD *)v1 + 45) + 284;
          *(_DWORD *)(*((_DWORD *)v1 + 45) + 308) = 0;
          *(_DWORD *)(*((_DWORD *)v1 + 45) + 312) = 0;
          *(_DWORD *)(*((_DWORD *)v1 + 45) + 316) = 0;
          *(_WORD *)(*((_DWORD *)v1 + 45) + 300) = 0;
          *(_WORD *)(*((_DWORD *)v1 + 45) + 302) = 0;
          *(_WORD *)(*((_DWORD *)v1 + 45) + 304) = 0;
          *(_DWORD *)(*((_DWORD *)v1 + 45) + 292) = 4096;
          *(_DWORD *)(*((_DWORD *)v1 + 45) + 288) = 4096;
          *(_DWORD *)(*((_DWORD *)v1 + 45) + 284) = 4096;
          *(_DWORD *)(*((_DWORD *)v1 + 45) + 112) = a1;
          v364 = *((_DWORD *)v1 + 45) + 124;
          *(_DWORD *)v364 = 0;
          RotMatrix((__int16 *)(*(_DWORD *)(v364 + 68) + 16), (_WORD *)(v364 + 4));
          ScaleMatrix((__int16 *)(v364 + 4), *(_DWORD **)(v364 + 68));
          TransMatrix((_DWORD *)(v364 + 4), (_DWORD *)(*(_DWORD *)(v364 + 68) + 24));
        }
      }
    }
  }
  if ( (*(_DWORD *)(*((_DWORD *)v1 + 51) + 12) & 0x2000) != 0 )
    *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFEFDF6 | 0x10000;
  else
    *(_DWORD *)(a1 + 20) &= ~0x10000u;
LABEL_609:
  v375 = *((_DWORD *)v1 + 51);
  v376 = *(__int16 *)(v375 + 6);
  if ( *(_DWORD *)(a1 + 344) == v376 )
  {
    if ( *(char *)(v375 + 9) >= 0 || v1[6] != 0 )
    {
      v377 = (int **)v395;
      if ( sub_439550(a1, a1 + 324, 0, 0, (int)v395) == 256 )
      {
        v378 = *((_DWORD *)v1 + 54);
        if ( v378 != 0 && *(_WORD *)(v378 + 4) == 1 )
          *(_WORD *)(a1 + 382) = BugsRand() & 3;
        if ( *((_DWORD *)dword_52FD00 + 0x4000) == 3 )
          sub_41DF30(a1, 74, 2, dword_4B2368);
        ++*(_WORD *)(a1 + 382);
        *(_DWORD *)(a1 + 344) = 0;
        if ( (*(_DWORD *)(a1 + 20) & 0x1000000) != 0 )
        {
          *(_DWORD *)(a1 + 20) = 0;
          *(_DWORD *)(a1 + 228) = dword_4B2460;
          *(_DWORD *)(a1 + 232) = dword_4B2464;
          *(_DWORD *)(a1 + 236) = dword_4B2468;
          word_4B3E1A = dword_4B246C;
          *(_WORD *)(a1 + 222) = dword_4B246C;
          sub_437560(&dword_4B2460);
          dword_4B3160 = 30;
          *((_BYTE *)dword_52FD00 + 65601) = 6;
          sub_44C000(1, 512);
        }
      }
      else if ( *(char *)(*((_DWORD *)v1 + 51) + 12) < 0 && (*(_BYTE *)(a1 + 20) & 0x12) != 0 )
      {
        if ( *((_DWORD *)dword_52FD00 + 0x4000) == 3 )
          sub_41DF30(a1, 74, 2, dword_4B2368);
        ++*(_WORD *)(a1 + 382);
        *(_DWORD *)(a1 + 344) = 0;
      }
    }
    else
    {
      v377 = (int **)v395;
    }
  }
  else
  {
    v377 = (int **)v395;
    sub_439550(a1, a1 + 324, v376, *(_WORD *)(v375 + 8), (int)v395);
  }
  sub_437C20(*(_WORD *)(*((_DWORD *)v1 + 51) + 4));
  v210 = (*(_DWORD *)(*((_DWORD *)v1 + 51) + 16) & 0x2000) == 0;
  v379 = *(_DWORD *)(a1 + 108);
  *((_DWORD *)v1 + 45) = v379;
  if ( v210 )
  {
    if ( v379 != 0 && (*(_DWORD *)(v379 + 8) & 0x2000) != 0 && (*(_BYTE *)(*((_DWORD *)v1 + 51) + 12) & 0x40) == 0 )
    {
      *(_WORD *)(a1 + 72) = -70;
      *(_WORD *)(a1 + 76) = -40;
      *(_WORD *)(a1 + 80) = 70;
      v381 = *(_WORD *)(*((_DWORD *)v1 + 45) + 84) + *(_WORD *)(*((_DWORD *)v1 + 45) + 32);
      *(_WORD *)(a1 + 84) = v381 + 90;
      v411 = (v381 + 90) * (v381 + 90) + 4900;
      if ( v411 < 6500 )
        v411 = 6500;
      *(_WORD *)(a1 + 46) = SquareRoot0(v411);
      *(_DWORD *)(a1 + 48) = v411;
    }
    else
    {
      *(_WORD *)(a1 + 72) = -70;
      *(_WORD *)(a1 + 76) = -40;
      *(_WORD *)(a1 + 80) = 70;
      *(_WORD *)(a1 + 84) = 40;
      *(_WORD *)(a1 + 46) = 80;
      *(_DWORD *)(a1 + 48) = 6400;
    }
  }
  else if ( v379 != 0 )
  {
    *(_WORD *)(a1 + 72) = *(_WORD *)(v379 + 72);
    *(_WORD *)(a1 + 74) = *(_WORD *)(*((_DWORD *)v1 + 45) + 74);
    *(_WORD *)(a1 + 76) = *(_WORD *)(*((_DWORD *)v1 + 45) + 76);
    *(_WORD *)(a1 + 80) = *(_WORD *)(*((_DWORD *)v1 + 45) + 80);
    *(_WORD *)(a1 + 82) = *(_WORD *)(*((_DWORD *)v1 + 45) + 82);
    v380 = *(_DWORD *)(a1 + 108);
    *(_WORD *)(a1 + 84) = *(_WORD *)(*((_DWORD *)v1 + 45) + 84);
    *(_WORD *)(a1 + 46) = *(_WORD *)(v380 + 46);
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(v380 + 48);
  }
  if ( (*(_DWORD *)(a1 + 20) & 0x1000000) != 0
    && (byte_4B3232 & 2) == 0
    && (__int16)(*(unsigned __int8 *)(a1 + 329) * (*(_WORD *)(a1 + 324) - *(_WORD *)(a1 + 326))) <= 8 )
  {
    HIWORD(dword_4B2368) = 0;
    byte_4B2190 = 0;
    sub_44C030(2, 512);
  }
  *((_DWORD *)v1 + 14) = *(_DWORD *)(a1 + 228);
  *((_DWORD *)v1 + 15) = *(_DWORD *)(a1 + 232);
  *((_DWORD *)v1 + 16) = *(_DWORD *)(a1 + 236);
  v1[57] = *(_WORD *)(a1 + 38);
  sub_436D90((_DWORD *)v1 + 14, (int)(v1 + 52), (int)v377);
  if ( (v1[53] & 4) != 0 )
  {
    *((_DWORD *)v1 + 6) = 0;
    *((_DWORD *)v1 + 7) = 0;
    *((_DWORD *)v1 + 8) = 0;
    *(_DWORD *)(a1 + 228) = dword_4B3780;
    *(_DWORD *)(a1 + 232) = dword_4B3784;
    *(_DWORD *)(a1 + 236) = dword_4B3788;
    sub_437500(a1, (_DWORD *)v1 + 6, (int)(v1 + 52), (int)v377);
    v382 = *((_DWORD *)v1 + 7) + *(_DWORD *)(a1 + 232);
    *(_DWORD *)(a1 + 232) = v382;
    dword_4B3784 = v382;
  }
  else
  {
    dword_4B3780 = *(_DWORD *)(a1 + 228);
    dword_4B3784 = *(_DWORD *)(a1 + 232);
    dword_4B3788 = *(_DWORD *)(a1 + 236);
  }
  v383 = *(_DWORD *)(a1 + 108);
  if ( v383 != 0 )
    *(_WORD *)(v383 + 38) = *(_WORD *)(a1 + 38);
  *(_DWORD *)(a1 + 20) &= 0x7FEDEFFFu;
  *(_DWORD *)(a1 + 24) &= 0xFFFFFDBE;
  v384 = *(_DWORD *)(a1 + 20);
  if ( (v384 & 0x16) != 0 || *(_DWORD *)(a1 + 112) != 0 )
  {
    BYTE1(v384) &= ~2u;
    *(_DWORD *)(a1 + 20) = v384;
  }
  if ( dword_4B3160 != 0 )
  {
    if ( dword_4B3160 < 30 )
      *(_DWORD *)(a1 + 20) &= 0xFDFFFFDF;
    --dword_4B3160;
  }
  if ( (*(_DWORD *)(a1 + 20) & 0x1000000) == 0 )
    sub_438610(a1, v377);
  v385 = *(_DWORD *)(a1 + 112);
  v386 = *((_DWORD *)v1 + 8) | *((_DWORD *)v1 + 7) | *((_DWORD *)v1 + 6);
  *(_DWORD *)(a1 + 436) = v386;
  if ( v385 != 0 && (*(_BYTE *)(v385 + 8) & 8) == 0 )
    *(_DWORD *)(a1 + 436) = v386 + 1;
  v387 = *(_DWORD *)(a1 + 108);
  if ( v387 != 0 && dword_4B3248 != 0 )
    *(_WORD *)(v387 + 38) = *(_WORD *)dword_4B3248;
  dword_4B3AC0 = dword_4B3180;
  dword_4B3AC8 = dword_4B3188;
  word_4B3ACC = word_4B318C;
  word_4B3ACE = word_4B318E;
  word_4B3AD0 = word_4B3190;
  dword_4B3AD4 = dword_4B3194;
  dword_4B3AD8 = dword_4B3198;
  dword_4B3ADC = dword_4B319C;
  dword_4B3180 = 0;
  dword_4B3188 = 5000;
  result = *(_DWORD *)(a1 + 20);
  if ( (result & 2) != 0 && (result & 0x100021D) == 0 )
  {
    dword_4B3890 = *(_DWORD *)(a1 + 228);
    result = *(_DWORD *)(a1 + 232);
    dword_4B3894 = result;
    dword_4B3898 = *(_DWORD *)(a1 + 236);
  }
  return result;
}

// 0x43f050  sub_43F050
__int16 __cdecl sub_43F050(_DWORD *a1)
{
  int v1; // eax
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // ecx

  v1 = a1[30];
  if ( v1 != 0 )
    goto LABEL_9;
  v2 = a1[6];
  v3 = a1[29];
  LOBYTE(v2) = v2 | 0x80;
  a1[6] = v2;
  if ( v3 == 0 )
  {
    v1 = a1[5];
    BYTE1(v1) |= 1u;
    a1[5] = v1;
    return v1;
  }
  v4 = sub_448AF0();
  a1[30] = v4;
  if ( v4 == 0 )
  {
    while ( 1 )
      ;
  }
  if ( (*(_BYTE *)(*(_DWORD *)(a1[29] + 8) + 10) & 2) != 0 )
  {
    *(_WORD *)(v4 + 8) |= 2u;
    GsInitCoordinate2(0, *(_DWORD *)(a1[30] + 16));
    *(_DWORD *)(*(_DWORD *)(a1[30] + 16) + 72) = a1 + 31;
    v5 = a1[29];
    a1[48] = a1 + 51;
    *(_DWORD *)(a1[30] + 20) = *(_DWORD *)(*(_DWORD *)(v5 + 8) + 84);
  }
  v1 = a1[30];
  if ( v1 != 0 )
  {
LABEL_9:
    if ( (a1[2] & 0x200000) == 0 )
    {
      v6 = (_DWORD *)(a1[48] + 24);
      a1[31] = 0;
      TransMatrix(a1 + 32, v6);
      RotMatrix((__int16 *)(a1[48] + 16), (_WORD *)a1 + 64);
      LOWORD(v1) = (unsigned __int16)ScaleMatrix((__int16 *)a1 + 64, (_DWORD *)a1[48]);
    }
  }
  return v1;
}

// 0x43f130  sub_43F130
int __cdecl sub_43F130(int a1)
{
  int **v2; // esi
  _DWORD *v3; // ecx
  int *v4; // eax
  int v5; // eax
  int *v6; // edx
  int *i; // eax
  bool v8; // zf
  int v9; // eax
  __int16 v10; // ax
  int result; // eax
  int v12; // eax
  _WORD *v13; // ebp
  int v14; // ebx
  int v15; // eax
  int v16; // eax
  __int16 v17; // ax
  __int16 v18; // ax
  int v19; // edx
  int v20; // ecx
  int v21; // ebx
  int j; // ebx
  int *v23; // ecx
  __int16 v24; // dx
  char *v25; // [esp-4h] [ebp-14h]
  int v26; // [esp-4h] [ebp-14h]
  int v27; // [esp+14h] [ebp+4h]

  v2 = (int **)dword_4EFAC0;
  if ( *(_DWORD *)(a1 + 120) == 0 )
  {
    v25 = (char *)dword_4EFAC0 + 48;
    *(_DWORD *)(a1 + 24) |= 0x80u;
    sub_439550(a1, a1 + 256, 5, 2u, (int)v25);
    if ( *(_DWORD *)(a1 + 120) != 0 && (*(_DWORD *)(a1 + 8) & 0x200000) == 0 )
    {
      v3 = (_DWORD *)(*(_DWORD *)(a1 + 192) + 24);
      *(_DWORD *)(a1 + 124) = 0;
      TransMatrix((_DWORD *)(a1 + 128), v3);
      RotMatrix((__int16 *)(*(_DWORD *)(a1 + 192) + 16), (_WORD *)(a1 + 128));
      ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
    }
    v4 = *(int **)(a1 + 120);
    *v2 = v4;
    v5 = *v4;
    *(_DWORD *)(a1 + 120) = v5;
    *(_DWORD *)(*(_DWORD *)(v5 + 16) + 72) = a1 + 124;
    RemoveListNode(dword_4B2240, *v2);
    v6 = *(int **)(a1 + 120);
    *((_WORD *)v2 + 22) = 1;
    *v2 = v6;
    for ( i = (int *)*v6; i != NULL; i = (int *)*i )
    {
      ++*((_WORD *)v2 + 22);
      *v2 = i;
    }
    v8 = *(_WORD *)(a1 + 30) == 0;
    *(_WORD *)(a1 + 334) = *(__int16 *)(a1 + 74) / *((__int16 *)v2 + 22);
    v9 = (*v2)[4];
    *(_DWORD *)(a1 + 324) = 100;
    *(_DWORD *)(a1 + 312) = v9;
    *(_DWORD *)(a1 + 320) = 280;
    *(_DWORD *)(a1 + 328) = 0;
    if ( v8 )
      *(_WORD *)(a1 + 30) = 128;
    v10 = *(_WORD *)(a1 + 32);
    *(_WORD *)(a1 + 82) = 0;
    *(_WORD *)(a1 + 80) = v10;
    *(_WORD *)(a1 + 72) = -v10;
    if ( (*(_DWORD *)(a1 + 8) & 0x400000) != 0 )
    {
      *(_WORD *)(a1 + 46) = v10;
      *(_DWORD *)(a1 + 48) = v10 * v10;
    }
  }
  *(__int16 *)(a1 + 222) %= 4096;
  result = *(_DWORD *)(a1 + 8);
  if ( (result & 0x400000) == 0 && *(_DWORD *)(a1 + 312) != 0 )
  {
    v12 = *(_DWORD *)(a1 + 320);
    v13 = v2 + 3;
    v27 = v12;
    v2[1] = (int *)((*(_DWORD *)(a1 + 324) * word_4ADDC8[v12]) >> 10);
    *((_WORD *)v2 + 6) = 0;
    *((_WORD *)v2 + 7) = 0;
    *((_WORD *)v2 + 8) = 0;
    v2[2] = (int *)280;
    v14 = *(_DWORD *)(a1 + 312);
    if ( *(_DWORD *)(v14 + 72) != 0 )
    {
      do
      {
        if ( *(_DWORD *)(a1 + 316) == v14 )
          v2[2] = (int *)180;
        v15 = (int)v2[2];
        if ( v15 <= 180 )
        {
          *v13 = 0;
          *(_DWORD *)v14 = 0;
          RotMatrix((__int16 *)v2 + 6, (_WORD *)(v14 + 4));
        }
        else
        {
          *v13 = (((int)v2[1] >> 3) * word_4ADDC8[v15]) >> 10;
          *(_DWORD *)v14 = 0;
          RotMatrix((__int16 *)v2 + 6, (_WORD *)(v14 + 4));
          v2[2] = (int *)((char *)v2[2] - 9);
        }
        v14 = *(_DWORD *)(v14 + 72);
      }
      while ( *(_DWORD *)(v14 + 72) != 0 );
      v12 = v27;
    }
    v16 = v12 + 90;
    *(_DWORD *)(a1 + 316) = 0;
    if ( v16 >= 360 )
      v16 -= 360;
    *v13 = (*(_DWORD *)(a1 + 324) * word_4ADDC8[v16]) >> 10;
    *(_DWORD *)v14 = 0;
    if ( *(_WORD *)(a1 + 220) <= *v13 )
    {
      if ( *(_WORD *)(a1 + 332) == 1 )
      {
        v18 = *(_WORD *)(a1 + 352);
        if ( v18 != 0 )
          sub_41DF30(a1, v18, 1, dword_4B2368);
      }
      *(_WORD *)(a1 + 332) = 0;
    }
    else
    {
      if ( *(_WORD *)(a1 + 332) == 0 )
      {
        v17 = *(_WORD *)(a1 + 352);
        if ( v17 != 0 )
          sub_41DF30(a1, v17, 1, dword_4B2368);
      }
      *(_WORD *)(a1 + 332) = 1;
    }
    *(_WORD *)(a1 + 220) = *v13;
    *v13 = 0;
    *((_WORD *)v2 + 7) = 0;
    *((_WORD *)v2 + 8) = 0;
    *(_DWORD *)(a1 + 124) = 0;
    RotMatrixYXZ((__int16 *)(a1 + 220), (_WORD *)(a1 + 128));
    TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(a1 + 228));
    v19 = *(_DWORD *)(a1 + 320) + 4;
    *(_DWORD *)(a1 + 320) = v19;
    if ( v19 >= 360 )
      *(_DWORD *)(a1 + 320) = v19 - 360;
    if ( (*(_BYTE *)(a1 + 320) & 2) != 0 )
      --*(_DWORD *)(a1 + 324);
    v20 = *(__int16 *)(a1 + 30);
    v21 = *(_DWORD *)(a1 + 324) - 1;
    *(_DWORD *)(a1 + 324) = v21;
    if ( v21 >= v20 )
    {
      if ( v21 > 300 )
        *(_DWORD *)(a1 + 324) = 300;
    }
    else
    {
      *(_DWORD *)(a1 + 324) = v20;
    }
    *((_WORD *)v2 + 10) = 0;
    *((_WORD *)v2 + 11) = *(_WORD *)(a1 + 334);
    *((_WORD *)v2 + 12) = 0;
    for ( j = *(_DWORD *)(a1 + 312); *(_DWORD *)(j + 72) != 0; j = *(_DWORD *)(j + 72) )
    {
      gte_ApplyMatrix((__int16 *)(j + 4), (__int16 *)v2 + 10, (int *)v2 + 7);
      v23 = v2[9];
      v2[8] = (int *)((char *)v2[8] + *(_DWORD *)(j + 28));
      v2[9] = (int *)((char *)v23 + *(_DWORD *)(j + 32));
      v24 = *((_WORD *)v2 + 18);
      *((_WORD *)v2 + 11) = *((_WORD *)v2 + 16);
      *((_WORD *)v2 + 12) = v24;
    }
    gte_ApplyMatrix((__int16 *)(j + 4), (__int16 *)v2 + 10, (int *)v2 + 7);
    v26 = (_DWORD)v2[9] * (_DWORD)v2[9] + (_DWORD)v2[7] * (_DWORD)v2[7] + *(__int16 *)(a1 + 32) * *(__int16 *)(a1 + 32);
    *(_DWORD *)(a1 + 48) = v26;
    result = SquareRoot0(v26);
    *(_WORD *)(a1 + 46) = result;
    if ( (int)v2[9] >= 0 )
    {
      *(_WORD *)(a1 + 84) = result;
      *(_WORD *)(a1 + 76) = 0;
    }
    else
    {
      *(_WORD *)(a1 + 76) = result;
      *(_WORD *)(a1 + 84) = 0;
    }
    *(_WORD *)(a1 + 74) = *((_WORD *)v2 + 16);
  }
  return result;
}

// 0x43f5a0  sub_43F5A0
int __cdecl sub_43F5A0(int a1)
{
  return sub_43F690(a1, 1);
}

// 0x43f610  sub_43F610
int __cdecl sub_43F610(int a1)
{
  return sub_43F690(a1, 34);
}

// 0x43f620  sub_43F620
int __cdecl sub_43F620(int a1)
{
  return sub_43F690(a1, 64);
}

// 0x43f630  sub_43F630
int __cdecl sub_43F630(int a1)
{
  return sub_43F690(a1, 256);
}

// 0x43f650  sub_43F650
int __cdecl sub_43F650(int a1)
{
  return sub_43F690(a1, 512);
}

// 0x43f670  sub_43F670
int __cdecl sub_43F670(int a1)
{
  return sub_43F690(a1, 1024);
}

// 0x43f690  sub_43F690
__int16 __cdecl sub_43F690(int a1, __int16 a2)
{
  _WORD *v3; // edi
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  bool v8; // zf
  _DWORD *v9; // edx
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // edx
  _DWORD *v14; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // eax
  __int16 v18; // ax
  int v19; // ecx
  int v20; // eax
  __int16 v21; // ax
  int v22; // ecx
  int v23; // eax
  int v24; // edx
  char v25; // bl
  __int16 v26; // di
  __int16 v27; // di
  int v28; // edx
  unsigned int v29; // edi
  unsigned int v30; // eax
  int v31; // ecx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  unsigned int v35; // edi
  int v36; // ecx
  int v37; // edx
  int v38; // edx
  int v39; // ecx
  int v40; // edx
  int v41; // edx
  int v42; // eax
  int v43; // ecx
  int v44; // edx
  int v45; // eax
  int v46; // ecx
  int v47; // edx
  int v48; // edx
  unsigned int v49; // eax
  __int16 v50; // ax
  int v51; // ecx
  int v52; // ebp
  int v53; // eax
  int v54; // ebp
  int v55; // ecx
  int v56; // edx
  int v57; // ecx
  int v58; // ebp
  int v59; // eax
  int v60; // eax
  int v61; // eax
  __int16 v62; // cx
  __int16 v63; // ax
  int v64; // eax
  int v65; // ecx
  int v66; // edx
  int v67; // edx
  int v68; // eax
  __int16 v69; // cx
  __int16 v70; // cx
  __int16 v71; // cx
  __int16 v72; // dx
  unsigned int v73; // eax
  int v74; // ecx
  int v75; // edx
  int v76; // edi
  int v77; // ecx
  int v78; // ecx
  int v79; // eax
  __int16 v80; // cx
  __int16 v81; // ax
  int v82; // ecx
  int v83; // edx
  int v84; // edi
  int v85; // ecx
  int v86; // ecx
  int *i; // edi
  int v88; // eax
  int v89; // eax
  int v90; // eax
  int v91; // edx
  int v92; // ebx
  int v93; // eax
  int v94; // eax
  _DWORD *v95; // edx
  __int16 *v97; // [esp-8h] [ebp-2Ch]
  __int16 v98; // [esp-4h] [ebp-28h]
  __int16 v99; // [esp-4h] [ebp-28h]
  __int16 v100; // [esp-4h] [ebp-28h]
  char *v101; // [esp+10h] [ebp-14h]
  int v102; // [esp+14h] [ebp-10h] BYREF
  int v103; // [esp+18h] [ebp-Ch]
  int v104; // [esp+1Ch] [ebp-8h]
  __int16 *v105; // [esp+28h] [ebp+4h]

  v3 = dword_4EFAC0;
  v101 = (char *)dword_4EFAC0 + 28;
  if ( *(_DWORD *)(a1 + 120) != 0 )
    goto LABEL_33;
  sub_439550(a1, a1 + 324, 5, 2u, (int)dword_4EFAC0 + 28);
  v4 = *(_DWORD *)(a1 + 24);
  LOBYTE(v4) = v4 | 0x80;
  *(_DWORD *)(a1 + 24) = v4;
  if ( (a2 & 0x20) != 0 )
  {
    *(__int16 *)(a1 + 380) >>= 1;
    v5 = *(__int16 *)(a1 + 380);
    v6 = *(_DWORD *)(a1 + 232);
    *(_DWORD *)(a1 + 400) = *(_DWORD *)(a1 + 228);
    v7 = *(_DWORD *)(a1 + 236);
    v8 = *(_WORD *)(a1 + 30) == 0;
    *(_DWORD *)(a1 + 404) = v5 + v6;
    *(_DWORD *)(a1 + 408) = v7;
    *(_WORD *)(a1 + 382) = 0;
    if ( v8 )
      *(_WORD *)(a1 + 30) = 16;
    goto LABEL_33;
  }
  if ( (a2 & 0x10) != 0 )
  {
    if ( *(_DWORD *)(a1 + 120) != 0 && (*(_DWORD *)(a1 + 8) & 0x200000) == 0 )
    {
      v9 = (_DWORD *)(*(_DWORD *)(a1 + 192) + 24);
      *(_DWORD *)(a1 + 124) = 0;
      TransMatrix((_DWORD *)(a1 + 128), v9);
      RotMatrix((__int16 *)(*(_DWORD *)(a1 + 192) + 16), (_WORD *)(a1 + 128));
      ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
    }
    *(__int16 *)(a1 + 380) >>= 1;
    v10 = *(__int16 *)(a1 + 380);
    v102 = 0;
    v103 = 0;
    v104 = v10;
    ApplyMatrixLV((__int16 *)(a1 + 128), &v102, &v102);
    v11 = v102 + *(_DWORD *)(a1 + 228);
    v12 = *(_DWORD *)(a1 + 236);
    *(_DWORD *)(a1 + 404) = v103 + *(_DWORD *)(a1 + 232);
    v13 = v104 + v12;
    v8 = *(_WORD *)(a1 + 30) == 0;
    *(_DWORD *)(a1 + 400) = v11;
    *(_DWORD *)(a1 + 408) = v13;
    *(_WORD *)(a1 + 382) = 0;
    if ( v8 )
      *(_WORD *)(a1 + 30) = 16;
    goto LABEL_33;
  }
  if ( (a2 & 0x400) != 0 )
  {
    if ( *(_DWORD *)(a1 + 120) != 0 && (*(_DWORD *)(a1 + 8) & 0x200000) == 0 )
    {
      v14 = (_DWORD *)(*(_DWORD *)(a1 + 192) + 24);
      *(_DWORD *)(a1 + 124) = 0;
      TransMatrix((_DWORD *)(a1 + 128), v14);
      RotMatrix((__int16 *)(*(_DWORD *)(a1 + 192) + 16), (_WORD *)(a1 + 128));
      ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
    }
    v15 = *(_DWORD *)(a1 + 232);
    v16 = *(_DWORD *)(a1 + 236);
    v8 = *(_WORD *)(a1 + 30) == 0;
    *(_DWORD *)(a1 + 400) = *(_DWORD *)(a1 + 228);
    *(_DWORD *)(a1 + 404) = v15;
    *(_DWORD *)(a1 + 408) = v16;
    *(_WORD *)(a1 + 382) = 0;
    if ( v8 )
    {
      v17 = *(_DWORD *)(a1 + 20);
      *(_WORD *)(a1 + 30) = 16;
      BYTE1(v17) |= 0x20u;
      *(_DWORD *)(a1 + 20) = v17;
      goto LABEL_33;
    }
    goto LABEL_24;
  }
  if ( (a2 & 0xC4) != 0 )
  {
    if ( *(_WORD *)(a1 + 30) == 0 )
      *(_WORD *)(a1 + 30) = 5;
    v18 = *(_WORD *)(a1 + 380);
    v19 = *(_DWORD *)(a1 + 232);
    if ( v18 < 0 )
    {
      *(_DWORD *)(a1 + 404) = v19;
      *(_DWORD *)(a1 + 388) = v19 + v18;
    }
    else
    {
      *(_DWORD *)(a1 + 388) = v19;
      *(_DWORD *)(a1 + 404) = v19 + v18;
    }
    if ( (a2 & 0x40) != 0 )
    {
LABEL_24:
      v20 = *(_DWORD *)(a1 + 20);
      BYTE1(v20) |= 0x20u;
      *(_DWORD *)(a1 + 20) = v20;
    }
  }
  else if ( (a2 & 8) != 0 )
  {
    v21 = *(_WORD *)(a1 + 380);
    if ( v21 >= 0 )
    {
      *(_WORD *)(a1 + 382) = 3072;
    }
    else
    {
      *(_WORD *)(a1 + 382) = 1024;
      *(_WORD *)(a1 + 380) = -v21;
    }
    if ( *(_WORD *)(a1 + 30) == 0 )
      *(_WORD *)(a1 + 30) = 34;
  }
  else if ( (a2 & 1) != 0 )
  {
    *(_WORD *)(a1 + 224) = 0;
  }
LABEL_33:
  if ( (a2 & 2) != 0 )
  {
    if ( (a2 & 0x20) != 0 )
      *(_WORD *)(a1 + 222) += 68;
    else
      *(_WORD *)(a1 + 222) += *(_WORD *)(a1 + 380);
    goto LABEL_115;
  }
  if ( (a2 & 1) == 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      v28 = *(_DWORD *)(a1 + 108);
      v29 = *(_DWORD *)(a1 + 20) & 0xFF9FFFFF;
      *(_DWORD *)(a1 + 20) = v29;
      v30 = v29;
      if ( v28 == dword_4B324C && *(_DWORD *)(dword_4B324C + 112) == a1 )
      {
        v31 = *(_DWORD *)(a1 + 404);
        v32 = *(_DWORD *)(a1 + 232);
        if ( v32 < v31 )
        {
          v33 = v32 + 5;
          *(_DWORD *)(a1 + 232) = v33;
          if ( v33 >= v31 )
          {
            *(_DWORD *)(a1 + 232) = v31;
            *(_DWORD *)(a1 + 20) = v29 | 0x400000;
          }
        }
        goto LABEL_115;
      }
      goto LABEL_62;
    }
    if ( (a2 & 0x80u) != 0 )
    {
      v34 = *(_DWORD *)(a1 + 108);
      v35 = *(_DWORD *)(a1 + 20) & 0xFF9FFFFF;
      *(_DWORD *)(a1 + 20) = v35;
      v30 = v35;
      if ( v34 != dword_4B324C || *(_DWORD *)(dword_4B324C + 112) != a1 )
      {
        v39 = *(_DWORD *)(a1 + 404);
        v40 = *(_DWORD *)(a1 + 232);
        if ( v40 < v39 )
        {
          v41 = v40 + 5;
          *(_DWORD *)(a1 + 232) = v41;
          if ( v41 >= v39 )
          {
            *(_DWORD *)(a1 + 232) = v39;
            *(_DWORD *)(a1 + 20) = v35 | 0x400000;
          }
        }
        goto LABEL_115;
      }
LABEL_62:
      v36 = *(_DWORD *)(a1 + 388);
      v37 = *(_DWORD *)(a1 + 232);
      if ( v37 > v36 )
      {
        v38 = v37 - 5;
        *(_DWORD *)(a1 + 232) = v38;
        if ( v38 <= v36 )
        {
          *(_DWORD *)(a1 + 232) = v36;
          *(_DWORD *)(a1 + 20) = v30 | 0x200000;
        }
      }
      goto LABEL_115;
    }
    if ( (a2 & 0x40) != 0 )
    {
      v42 = *(_DWORD *)(a1 + 20);
      if ( (v42 & 0x400000) != 0 )
      {
        v43 = *(_DWORD *)(a1 + 404);
        v44 = *(_DWORD *)(a1 + 232);
        BYTE1(v42) &= ~0x20u;
        *(_DWORD *)(a1 + 20) = v42;
        if ( v44 < v43 )
        {
          v45 = v44 + *(__int16 *)(a1 + 30);
          *(_DWORD *)(a1 + 232) = v45;
          if ( v45 >= v43 )
            *(_DWORD *)(a1 + 232) = v43;
          goto LABEL_115;
        }
      }
      else
      {
        if ( (v42 & 0x200000) == 0 )
          goto LABEL_115;
        v46 = *(_DWORD *)(a1 + 388);
        v47 = *(_DWORD *)(a1 + 232);
        BYTE1(v42) &= ~0x20u;
        *(_DWORD *)(a1 + 20) = v42;
        if ( v47 > v46 )
        {
          v48 = v47 - *(__int16 *)(a1 + 30);
          *(_DWORD *)(a1 + 232) = v48;
          if ( v48 <= v46 )
          {
            BYTE1(v42) |= 0x20u;
            *(_DWORD *)(a1 + 232) = v46;
            *(_DWORD *)(a1 + 20) = v42;
          }
          goto LABEL_115;
        }
      }
      v49 = v42 & 0xFF9FFFFF;
      BYTE1(v49) |= 0x20u;
      *(_DWORD *)(a1 + 20) = v49;
      goto LABEL_115;
    }
    if ( (a2 & 8) != 0 )
    {
      v98 = *(_WORD *)(a1 + 382);
      *(_DWORD *)(a1 + 20) &= 0xFF9FFFFF;
      *(_WORD *)(a1 + 224) = (*(__int16 *)(a1 + 380) * rsin(v98)) >> 12;
      *(_WORD *)(a1 + 382) += *(_WORD *)(a1 + 30);
      v50 = *(_WORD *)(a1 + 382);
      if ( v50 >= 4096 )
      {
        *(_DWORD *)(a1 + 20) |= 0x200000u;
        *(_WORD *)(a1 + 382) = v50 - 4096;
      }
      if ( *(_DWORD *)(a1 + 108) == dword_4B324C && *(_DWORD *)(dword_4B324C + 112) == a1 )
      {
        v3[9] = 0;
        v3[10] = 0;
        v3[8] = 0;
        v97 = (__int16 *)(*(_DWORD *)(a1 + 192) + 16);
        *(_DWORD *)(a1 + 124) = 0;
        RotMatrix(v97, (_WORD *)(a1 + 128));
        ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
        TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
        v51 = dword_4B324C;
        *(_DWORD *)(dword_4B324C + 124) = 0;
        v52 = v51 + 124;
        v105 = (__int16 *)(v51 + 128);
        RotMatrix((__int16 *)(*(_DWORD *)(v51 + 192) + 16), (_WORD *)(v51 + 128));
        ScaleMatrix(v105, *(_DWORD **)(v52 + 68));
        TransMatrix(v105, (_DWORD *)(*(_DWORD *)(v52 + 68) + 24));
        v8 = dword_4B324C == -124;
        *((_DWORD *)v3 + 6) = dword_4B324C + 124;
        if ( !v8 )
        {
          do
          {
            gte_ApplyMatrix((__int16 *)(*((_DWORD *)v3 + 6) + 4), v3 + 8, (int *)v3);
            v53 = *((_DWORD *)v3 + 6);
            v54 = *((_DWORD *)v3 + 2);
            v55 = *((_DWORD *)v3 + 1);
            *(_DWORD *)v3 += *(_DWORD *)(v53 + 24);
            v56 = v53;
            v57 = *(_DWORD *)(v53 + 28) + v55;
            LOWORD(v53) = *v3;
            *((_DWORD *)v3 + 1) = v57;
            LOWORD(v57) = v3[2];
            v58 = *(_DWORD *)(v56 + 32) + v54;
            v3[8] = v53;
            v59 = *((_DWORD *)v3 + 6);
            *((_DWORD *)v3 + 2) = v58;
            LOWORD(v56) = v3[4];
            v3[9] = v57;
            v3[10] = v56;
            v60 = *(_DWORD *)(v59 + 72);
            *((_DWORD *)v3 + 6) = v60;
          }
          while ( v60 != 0 );
        }
        *(_DWORD *)(dword_4B324C + 228) = *(_DWORD *)v3;
        *(_DWORD *)(dword_4B324C + 232) = *((_DWORD *)v3 + 1);
        *(_DWORD *)(dword_4B324C + 236) = *((_DWORD *)v3 + 2);
      }
      goto LABEL_115;
    }
    if ( (a2 & 0x10) != 0 )
    {
      v99 = *(_WORD *)(a1 + 382);
      v102 = 0;
      v61 = rsin(v99);
      v62 = *(_WORD *)(a1 + 382);
      v104 = (*(__int16 *)(a1 + 380) * v61) >> 12;
      LOWORD(v61) = v62 + *(_WORD *)(a1 + 30);
      v103 = 0;
      v63 = v61 & 0xFFF;
      *(_WORD *)(a1 + 382) = v63;
      if ( v62 >= 1024 || v63 < 1024 )
      {
        if ( v62 >= 3072 || v63 < 3072 )
        {
          v64 = *(_DWORD *)(a1 + 20);
          BYTE1(v64) &= ~0x20u;
        }
        else
        {
          v64 = *(_DWORD *)(a1 + 20);
          BYTE1(v64) |= 0x20u;
        }
      }
      else
      {
        v64 = *(_DWORD *)(a1 + 20);
        BYTE1(v64) |= 0x20u;
      }
      *(_DWORD *)(a1 + 20) = v64;
      ApplyMatrixLV((__int16 *)(a1 + 128), &v102, &v102);
      v65 = v103 + *(_DWORD *)(a1 + 404);
      v66 = *(_DWORD *)(a1 + 408);
      *(_DWORD *)(a1 + 228) = v102 + *(_DWORD *)(a1 + 400);
      v67 = v104 + v66;
      *(_DWORD *)(a1 + 232) = v65;
      *(_DWORD *)(a1 + 236) = v67;
      goto LABEL_115;
    }
    if ( (a2 & 0x400) == 0 )
    {
      if ( (a2 & 0x100) != 0 )
      {
        if ( *(_DWORD *)(a1 + 108) == dword_4B324C && *(_DWORD *)(dword_4B324C + 112) == a1 )
          *(_DWORD *)(*(_DWORD *)(dword_4B324C + 192) + 32) += *(__int16 *)(a1 + 380);
      }
      else if ( (a2 & 0x200) != 0
             && *(_DWORD *)(a1 + 108) == dword_4B324C
             && *(_DWORD *)(dword_4B324C + 112) == a1
             && (*(_DWORD *)(a1 + 20) & 0x200000) != 0 )
      {
        *(_DWORD *)(*(_DWORD *)(dword_4B324C + 192) + 32) += *(__int16 *)(a1 + 380);
      }
      goto LABEL_115;
    }
    v68 = *(_DWORD *)(a1 + 20);
    if ( (v68 & 0x400000) != 0 )
    {
      v69 = *(_WORD *)(a1 + 382);
      if ( v69 > 0 )
      {
        BYTE1(v68) &= ~0x20u;
        v70 = v69 - *(_WORD *)(a1 + 30);
        *(_DWORD *)(a1 + 20) = v68;
        *(_WORD *)(a1 + 382) = v70;
LABEL_105:
        v74 = *(__int16 *)(a1 + 382);
        v102 = 0;
        v103 = 0;
        v104 = v74;
        ApplyMatrixLV((__int16 *)(a1 + 128), &v102, &v102);
        v75 = *(_DWORD *)(a1 + 400);
        v76 = v102;
        v77 = *(_DWORD *)(a1 + 408);
        *(_DWORD *)(a1 + 232) = v103 + *(_DWORD *)(a1 + 404);
        v78 = v104 + v77;
        *(_DWORD *)(a1 + 228) = v76 + v75;
        *(_DWORD *)(a1 + 236) = v78;
        goto LABEL_115;
      }
      *(_WORD *)(a1 + 382) = 0;
    }
    else
    {
      if ( (v68 & 0x200000) == 0 )
        goto LABEL_105;
      v71 = *(_WORD *)(a1 + 382);
      v72 = *(_WORD *)(a1 + 380);
      if ( v71 < v72 )
      {
        BYTE1(v68) &= ~0x20u;
        *(_DWORD *)(a1 + 20) = v68;
        *(_WORD *)(a1 + 382) = v71 + *(_WORD *)(a1 + 30);
        goto LABEL_105;
      }
      *(_WORD *)(a1 + 382) = v72;
    }
    v73 = v68 & 0xFF9FFFFF;
    BYTE1(v73) |= 0x20u;
    *(_DWORD *)(a1 + 20) = v73;
    goto LABEL_105;
  }
  v22 = *(__int16 *)(a1 + 30);
  if ( *(_WORD *)(a1 + 30) == 0 )
    v22 = 32;
  v23 = dword_4B324C;
  if ( *(_DWORD *)(a1 + 108) != dword_4B324C || *(_DWORD *)(dword_4B324C + 112) != a1 )
  {
    *(_WORD *)(a1 + 224) -= *(__int16 *)(a1 + 224) >> 4;
    goto LABEL_115;
  }
  v24 = *(_DWORD *)(dword_4B324C + 420);
  v25 = *(_BYTE *)(a1 + 380);
  if ( v24 < 0 )
  {
    if ( (v25 & 1) == 0 )
    {
      v26 = *(_WORD *)(a1 + 224);
      if ( v26 > -356 )
      {
        *(_WORD *)(a1 + 224) = v26 - v24 * v22 / (*(__int16 *)(a1 + 72) - *(__int16 *)(a1 + 32));
        v23 = dword_4B324C;
      }
      *(_DWORD *)(*(_DWORD *)(v23 + 192) + 24) -= *(__int16 *)(a1 + 224)
                                                * v22
                                                / (*(__int16 *)(a1 + 72) - *(__int16 *)(a1 + 32));
      goto LABEL_115;
    }
LABEL_51:
    *(_WORD *)(a1 + 224) -= *(__int16 *)(a1 + 224) >> 4;
    goto LABEL_115;
  }
  if ( (v25 & 2) != 0 )
    goto LABEL_51;
  v27 = *(_WORD *)(a1 + 224);
  if ( v27 < 356 )
  {
    *(_WORD *)(a1 + 224) = v27 + v24 * v22 / (*(__int16 *)(a1 + 80) + *(__int16 *)(a1 + 32));
    v23 = dword_4B324C;
  }
  *(_DWORD *)(*(_DWORD *)(v23 + 192) + 24) += *(__int16 *)(a1 + 224)
                                            * v22
                                            / (*(__int16 *)(a1 + 80) + *(__int16 *)(a1 + 32));
LABEL_115:
  if ( (a2 & 0x20) != 0 )
  {
    v100 = *(_WORD *)(a1 + 382);
    v102 = 0;
    v104 = 0;
    v79 = rsin(v100);
    v80 = *(_WORD *)(a1 + 382);
    v103 = (*(__int16 *)(a1 + 380) * v79) >> 12;
    v81 = v80 + *(_WORD *)(a1 + 30);
    *(_WORD *)(a1 + 382) = v81;
    if ( v80 >= 1024 || v81 < 1024 )
    {
      if ( v80 >= 3072 || v81 < 3072 )
      {
        v82 = *(_DWORD *)(a1 + 20);
        BYTE1(v82) &= ~0x20u;
      }
      else
      {
        v82 = *(_DWORD *)(a1 + 20);
        BYTE1(v82) |= 0x20u;
      }
    }
    else
    {
      v82 = *(_DWORD *)(a1 + 20);
      BYTE1(v82) |= 0x20u;
    }
    *(_WORD *)(a1 + 382) = v81 & 0xFFF;
    *(_DWORD *)(a1 + 20) = v82;
    ApplyMatrixLV((__int16 *)(a1 + 128), &v102, &v102);
    v83 = *(_DWORD *)(a1 + 400);
    v84 = v102;
    v85 = *(_DWORD *)(a1 + 408);
    *(_DWORD *)(a1 + 232) = v103 + *(_DWORD *)(a1 + 404);
    v86 = v104 + v85;
    *(_DWORD *)(a1 + 228) = v84 + v83;
    *(_DWORD *)(a1 + 236) = v86;
  }
  for ( i = *(int **)(a1 + 252); i != NULL; i = (int *)*i )
  {
    v88 = i[2];
    if ( v88 == 0 || (v88 & *(_DWORD *)(a1 + 20)) != 0 )
    {
      v89 = i[3];
      if ( (v89 == 0 || (v89 & *(_DWORD *)(a1 + 24)) != 0) && TestLogicCond(a1, (_BYTE *)i + 16) != 0 )
      {
        RunLogicAction(a1, (int)(i + 4));
        if ( (i[6] & 0x200) != 0 )
          sub_41DF30(a1, i[7], 1, dword_4B2368);
        if ( (i[6] & 0x400) != 0 )
          sub_41DF30(a1, i[7], 2, dword_4B2368);
        v90 = i[6];
        if ( (v90 & 0x10000) != 0 )
        {
          v94 = *(_DWORD *)(a1 + 20);
          BYTE1(v94) |= 1u;
          *(_DWORD *)(a1 + 20) = v94;
          return v94;
        }
        if ( (v90 & 0x8000) == 0 )
          break;
      }
    }
  }
  v91 = *(_DWORD *)(a1 + 8);
  if ( (v91 & 0x20000000) == 0 || (*(_BYTE *)(dword_4B324C + 20) & 0x10) != 0 )
  {
    v93 = *(_DWORD *)(a1 + 20);
    LOBYTE(v93) = v93 & 0xBF;
    *(_DWORD *)(a1 + 20) = v93;
  }
  else
  {
    v92 = *(_DWORD *)(a1 + 20) | 0x40;
    *(_DWORD *)(a1 + 20) = v92;
    if ( ((*(_DWORD *)(dword_4B324C + 20) & 0x3000020) == 0 || (v91 & 0x40000000) != 0)
      && ((v92 & 0x8000) != 0
       || sub_434B00(dword_4B324C, (__int16 *)a1, (int)v101)
       || sub_434B00(a1, (__int16 *)dword_4B324C, (int)v101)) )
    {
      sub_437F00(a1, 0);
    }
  }
  v94 = *(_DWORD *)(a1 + 120);
  if ( v94 != 0 && (*(_DWORD *)(a1 + 8) & 0x200000) == 0 )
  {
    v95 = (_DWORD *)(*(_DWORD *)(a1 + 192) + 24);
    *(_DWORD *)(a1 + 124) = 0;
    TransMatrix((_DWORD *)(a1 + 128), v95);
    RotMatrix((__int16 *)(*(_DWORD *)(a1 + 192) + 16), (_WORD *)(a1 + 128));
    LOWORD(v94) = (unsigned __int16)ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
  }
  *(_DWORD *)(a1 + 20) &= 0xF1676F7F;
  return v94;
}

// 0x440290  sub_440290
__int16 __cdecl sub_440290(int a1)
{
  unsigned __int16 *v2; // esi
  int *v3; // eax
  int v4; // eax
  int *v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  int v10; // eax
  int *v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  unsigned __int16 v18; // ax
  int v19; // eax
  int *v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // edx
  int v26; // eax
  int v27; // edx
  int v28; // ecx
  int v29; // eax
  unsigned int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  unsigned __int8 v35; // al
  int v36; // eax
  int v37; // edx
  __int16 v38; // dx
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // ebp
  int v43; // eax
  int v44; // eax
  int v45; // ebx
  int v46; // ebp
  int v47; // eax
  int v48; // ebx
  __int16 v49; // ax
  unsigned __int16 *v50; // eax
  int v51; // eax
  int v52; // ecx
  int v53; // eax
  int v54; // ecx
  __int16 v55; // ax
  int v56; // ecx
  _DWORD *v57; // ebx
  _DWORD *v58; // ebp
  int v59; // ecx
  int v60; // edx
  int v61; // eax
  int v62; // ecx
  __int16 v63; // ax
  int v64; // eax
  int v65; // ebx
  int v66; // eax
  int v67; // ecx
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // edx
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // ecx
  int v76; // ebx
  int v77; // eax
  __int64 v78; // rax
  int v79; // eax
  int v80; // eax
  __int16 v81; // ax
  __int16 v82; // ax
  int v83; // edx
  int v84; // eax
  int v85; // ecx
  int v86; // eax
  int v87; // eax
  int v88; // ecx
  int v89; // ebx
  __int16 v90; // ax
  bool v91; // zf
  int v92; // ecx
  int v93; // eax
  int v94; // eax
  int v95; // eax
  int v96; // eax
  int *v97; // eax
  int v98; // eax
  int v99; // eax
  int *v100; // ebx
  int v101; // eax
  int v102; // ecx
  int v103; // eax
  int v104; // ebp
  int v105; // eax
  int v106; // eax
  __int16 v107; // ax
  int v108; // eax
  int v109; // eax
  int v110; // eax
  int v111; // eax
  int v112; // eax
  int v113; // eax
  __int16 v114; // cx
  int v115; // ecx
  int v116; // eax
  int v117; // eax
  int **v118; // ebx
  int v119; // edx
  int v120; // eax
  int v121; // eax
  int v122; // ecx
  _DWORD *v123; // eax
  int v124; // ecx
  int v125; // edx
  int v126; // ecx
  __int16 *v127; // eax
  __int16 *v128; // eax
  int v129; // ebx
  int v130; // eax
  int v131; // edx
  int v132; // eax
  int v133; // ecx
  int v134; // ecx
  int v135; // ecx
  int v136; // eax
  int v137; // eax
  unsigned __int16 v138; // ax
  int v139; // eax
  __int16 v140; // cx
  int *v141; // eax
  int v142; // eax
  int v143; // ecx
  int v144; // ebx
  int v145; // eax
  signed __int16 v146; // cx
  signed __int16 v147; // ax
  int v148; // eax
  int v149; // ecx
  int v150; // eax
  int v151; // ecx
  int v152; // eax
  int v153; // eax
  int v154; // eax
  int v155; // eax
  int v156; // eax
  unsigned int v157; // ecx
  int v158; // ecx
  __int16 v159; // ax
  int v160; // eax
  unsigned int v161; // eax
  BOOL v162; // eax
  int v163; // eax
  __int16 *v164; // edx
  int v165; // eax
  __int16 v166; // cx
  int v167; // edx
  int v168; // eax
  int v169; // eax
  int v170; // eax
  int v171; // eax
  int v172; // ecx
  signed __int16 v173; // ax
  int v174; // ecx
  int v175; // ebx
  int v176; // eax
  int v177; // eax
  unsigned int v178; // edx
  int v179; // eax
  int v180; // eax
  int v181; // edx
  __int16 v182; // cx
  _DWORD *v183; // ebx
  int v184; // eax
  int v185; // ecx
  int v186; // eax
  int v187; // eax
  int v188; // eax
  int v189; // eax
  int v190; // ecx
  int v191; // eax
  int v192; // ecx
  int v193; // eax
  _DWORD *v194; // ebp
  unsigned __int16 v195; // cx
  unsigned __int16 v196; // dx
  unsigned __int16 v197; // ax
  int v198; // eax
  int v199; // eax
  int v200; // ecx
  int v201; // edx
  unsigned int v202; // eax
  int v203; // eax
  int v204; // edx
  int v205; // ecx
  __int16 *v206; // eax
  int v207; // eax
  int v208; // eax
  int v209; // ecx
  unsigned int v210; // edx
  int v211; // eax
  unsigned int v212; // ecx
  int v213; // eax
  int v214; // eax
  int v215; // ebp
  int v216; // ebx
  __int16 *v217; // eax
  int v218; // edx
  int v219; // eax
  int v220; // ecx
  int v221; // ebx
  int v222; // edx
  int v223; // eax
  _DWORD *v224; // edx
  int v225; // eax
  int v226; // eax
  int v227; // eax
  int v228; // ecx
  int v229; // ebp
  int v230; // eax
  int v231; // ecx
  int v232; // ecx
  char v233; // al
  _BYTE *v234; // ebp
  int v235; // eax
  int v236; // eax
  int *v237; // eax
  int v238; // eax
  int v239; // ecx
  int v240; // edx
  int v241; // eax
  int v242; // ecx
  unsigned int v243; // eax
  int v244; // ecx
  int v245; // eax
  int v246; // eax
  int v247; // eax
  __int16 *v248; // eax
  int v249; // ecx
  int v250; // edx
  int v251; // ecx
  int v252; // eax
  int v253; // eax
  int v254; // eax
  int v255; // eax
  int v256; // eax
  int v257; // eax
  int v258; // ebp
  __int16 *v259; // ebx
  int v260; // eax
  _DWORD *v261; // eax
  int v262; // eax
  int *v263; // eax
  int v264; // eax
  int v265; // eax
  int v266; // ecx
  int v267; // eax
  int v268; // eax
  int v269; // eax
  int v270; // eax
  int v271; // ebp
  __int16 *v272; // ebx
  int v273; // eax
  _DWORD *v274; // eax
  __int16 *v275; // ebp
  int v276; // eax
  int v277; // ecx
  int v278; // eax
  int v279; // eax
  int *v280; // eax
  int v281; // eax
  int v282; // eax
  int v283; // eax
  int v284; // eax
  int v285; // eax
  int v286; // edx
  int v287; // eax
  _DWORD *v288; // eax
  int v289; // ebp
  __int16 *v290; // ebx
  int v291; // eax
  int v292; // eax
  int v293; // eax
  int v294; // eax
  int v295; // eax
  int v296; // ecx
  int v297; // eax
  unsigned __int16 v298; // ax
  int v299; // eax
  unsigned int v300; // eax
  int v301; // eax
  int v302; // eax
  int v303; // eax
  int v304; // ecx
  __int16 *v305; // eax
  int v306; // ecx
  int v307; // eax
  int v308; // edx
  int v309; // ecx
  signed __int16 v310; // cx
  int v311; // ecx
  __int16 *v313; // [esp-8h] [ebp-38h]
  __int16 *v314; // [esp-8h] [ebp-38h]
  __int16 *v315; // [esp-8h] [ebp-38h]
  int v316; // [esp-8h] [ebp-38h]
  __int16 *v317; // [esp-8h] [ebp-38h]
  __int16 *v318; // [esp-8h] [ebp-38h]
  __int16 *v319; // [esp-8h] [ebp-38h]
  __int16 *v320; // [esp-8h] [ebp-38h]
  __int16 *v321; // [esp-8h] [ebp-38h]
  __int16 *v322; // [esp-8h] [ebp-38h]
  __int16 *v323; // [esp-8h] [ebp-38h]
  __int16 *v324; // [esp-8h] [ebp-38h]
  __int16 *v325; // [esp-8h] [ebp-38h]
  __int16 *v326; // [esp-8h] [ebp-38h]
  __int16 *v327; // [esp-8h] [ebp-38h]
  int **v328; // [esp+10h] [ebp-20h]
  __int16 *v329; // [esp+14h] [ebp-1Ch]
  __int16 *v330; // [esp+14h] [ebp-1Ch]
  __int16 *v331; // [esp+14h] [ebp-1Ch]
  _DWORD *v332; // [esp+14h] [ebp-1Ch]
  _DWORD *v333; // [esp+14h] [ebp-1Ch]
  __int16 *v334; // [esp+14h] [ebp-1Ch]
  _DWORD *v335; // [esp+14h] [ebp-1Ch]
  __int16 v336; // [esp+18h] [ebp-18h] BYREF
  __int16 v337; // [esp+1Ah] [ebp-16h]
  __int16 v338; // [esp+1Ch] [ebp-14h]
  int v339; // [esp+20h] [ebp-10h] BYREF
  int v340; // [esp+24h] [ebp-Ch]
  int v341; // [esp+28h] [ebp-8h]
  int v342; // [esp+34h] [ebp+4h]

  v2 = (unsigned __int16 *)dword_4EFAC0;
  v328 = (int **)((char *)dword_4EFAC0 + 296);
  if ( *(_DWORD *)(a1 + 120) == 0 && (*(_DWORD *)(a1 + 348) & 0x4000) == 0 )
  {
    *(_DWORD *)(a1 + 24) |= 0x80u;
    *((_DWORD *)v2 + 46) = *(_DWORD *)(a1 + 244);
    *((_DWORD *)v2 + 69) = 2;
    if ( *((_DWORD *)v2 + 46) == 0 )
      goto LABEL_663;
    do
    {
      v3 = *((int **)v2 + 46);
      if ( *((unsigned __int16 *)v3 + 2) == *((_DWORD *)v2 + 69) )
        break;
      v4 = *v3;
      *((_DWORD *)v2 + 46) = v4;
    }
    while ( v4 != 0 );
    if ( *((_DWORD *)v2 + 46) == 0 )
    {
LABEL_663:
      *((_DWORD *)v2 + 46) = *(_DWORD *)(a1 + 244);
      *((_DWORD *)v2 + 69) = 1;
      if ( *((_DWORD *)v2 + 46) != 0 )
      {
        do
        {
          v5 = *((int **)v2 + 46);
          if ( *((unsigned __int16 *)v5 + 2) == *((_DWORD *)v2 + 69) )
            break;
          v6 = *v5;
          *((_DWORD *)v2 + 46) = v6;
        }
        while ( v6 != 0 );
      }
    }
    *((_DWORD *)v2 + 43) = *(unsigned __int16 *)(*((_DWORD *)v2 + 46) + 6) + *(_DWORD *)(a1 + 248);
    *(_DWORD *)(a1 + 384) = *((_DWORD *)v2 + 46);
    *(_DWORD *)(a1 + 388) = *((_DWORD *)v2 + 43);
    *(_WORD *)(a1 + 380) = 0;
    *(_WORD *)(a1 + 404) = 0;
    *(_WORD *)(a1 + 402) = 0;
    *(_WORD *)(a1 + 264) = 2048;
    *(_WORD *)(a1 + 260) = 128;
    if ( (*(_DWORD *)(a1 + 12) & 0x200) != 0 )
    {
      byte_4B2261 = 0x80;
      word_4B3BA0 = *(_WORD *)(a1 + 30);
    }
  }
  v7 = *(_DWORD *)(a1 + 20);
  if ( (v7 & 0x6000000) != 0
    && ((*(_BYTE *)((v8 = *(_DWORD *)(a1 + 388)) + 13) & 0x40) != 0 && (v7 & 0x4000000) != 0
     || ((v9 = *(_DWORD *)(v8 + 16)) & 0x8000) != 0 && (v7 & 0x80u) != 0 && (v7 & 0x4000000) != 0
     || (v9 & 8) != 0 && (v7 & 0x2000000) != 0) )
  {
    v2[94] = 3;
    *(_WORD *)(a1 + 30) -= *(_WORD *)(a1 + 56);
    *(_WORD *)(a1 + 56) = 0;
    if ( (*(_DWORD *)(a1 + 8) & 0x200) == 0 && *(__int16 *)(a1 + 30) <= 0 )
      v2[94] = 4;
    v10 = *(_DWORD *)(a1 + 388);
    if ( v10 != 0 )
      *((_DWORD *)v2 + 72) = *(unsigned __int16 *)(v10 + 6);
    else
      *((_DWORD *)v2 + 72) = 0;
    *((_DWORD *)v2 + 46) = *(_DWORD *)(a1 + 244);
    *((_DWORD *)v2 + 69) = v2[94];
    if ( *((_DWORD *)v2 + 46) != 0 )
    {
      do
      {
        v11 = *((int **)v2 + 46);
        if ( *((unsigned __int16 *)v11 + 2) == *((_DWORD *)v2 + 69) )
          break;
        v12 = *v11;
        *((_DWORD *)v2 + 46) = v12;
      }
      while ( v12 != 0 );
    }
    v13 = *((_DWORD *)v2 + 46);
    if ( v13 != 0 )
    {
      *((_DWORD *)v2 + 43) = *(unsigned __int16 *)(v13 + 6) + *(_DWORD *)(a1 + 248);
      *(_WORD *)(a1 + 380) = 0;
      *(_DWORD *)(a1 + 388) = *((_DWORD *)v2 + 43);
      *(_DWORD *)(a1 + 384) = *((_DWORD *)v2 + 46);
      v15 = *((_DWORD *)v2 + 43);
      if ( (*(_BYTE *)(v15 + 8) & 0x40) == 0 || *(unsigned __int16 *)(v15 + 6) != *((_DWORD *)v2 + 72) )
      {
        *(_DWORD *)(a1 + 344) = 0;
        *(_BYTE *)(a1 + 332) = -1;
        *(_WORD *)(a1 + 326) = -1;
      }
      *(_DWORD *)(a1 + 20) &= 0xFFFFFFF6;
      if ( (*(_DWORD *)(*((_DWORD *)v2 + 43) + 16) & 0x4000) != 0 )
        *(_WORD *)(a1 + 222) = *(_WORD *)(dword_4B324C + 222) + 2048;
      v16 = *(_DWORD *)(a1 + 108);
      *((_DWORD *)v2 + 42) = v16;
      if ( v16 != 0 )
      {
        v17 = *(_DWORD *)(v16 + 20);
        BYTE1(v17) |= 0x10u;
        *(_DWORD *)(v16 + 20) = v17;
      }
    }
    else if ( (*(_DWORD *)(a1 + 8) & 0x200) == 0 && v2[94] == 4 )
    {
      v14 = *(_DWORD *)(a1 + 20);
      BYTE1(v14) |= 1u;
      *(_DWORD *)(a1 + 20) = v14;
      return v14;
    }
  }
  else
  {
    v18 = *(_WORD *)(*(_DWORD *)(a1 + 384) + 2 * *(unsigned __int16 *)(a1 + 380) + 6);
    v2[94] = v18;
    if ( v18 == 0xFFF0 || *(_WORD *)(a1 + 380) >= 5u )
    {
      v19 = *(_DWORD *)(a1 + 388);
      if ( v19 != 0 )
        *((_DWORD *)v2 + 72) = *(unsigned __int16 *)(v19 + 6);
      else
        *((_DWORD *)v2 + 72) = 0;
      *((_DWORD *)v2 + 46) = *(_DWORD *)(a1 + 244);
      *((_DWORD *)v2 + 69) = 1;
      if ( *((_DWORD *)v2 + 46) != 0 )
      {
        do
        {
          v20 = *((int **)v2 + 46);
          if ( *((unsigned __int16 *)v20 + 2) == *((_DWORD *)v2 + 69) )
            break;
          v21 = *v20;
          *((_DWORD *)v2 + 46) = v21;
        }
        while ( v21 != 0 );
      }
      *((_DWORD *)v2 + 43) = *(unsigned __int16 *)(*((_DWORD *)v2 + 46) + 6) + *(_DWORD *)(a1 + 248);
      *(_DWORD *)(a1 + 384) = *((_DWORD *)v2 + 46);
      *(_DWORD *)(a1 + 388) = *((_DWORD *)v2 + 43);
      v22 = *((_DWORD *)v2 + 43);
      if ( (*(_BYTE *)(v22 + 8) & 0x40) == 0 || *(unsigned __int16 *)(v22 + 6) != *((_DWORD *)v2 + 72) )
        *(_DWORD *)(a1 + 344) = 0;
      *(_WORD *)(a1 + 380) = 0;
      *(_DWORD *)(a1 + 20) &= 0xF9FFFFFF;
    }
    else
    {
      *((_DWORD *)v2 + 43) = *(_DWORD *)(a1 + 388);
      *((_DWORD *)v2 + 46) = *(_DWORD *)(a1 + 384);
    }
  }
  v23 = *(_DWORD *)(*((_DWORD *)v2 + 43) + 12);
  *((_DWORD *)v2 + 71) = v23;
  if ( ((unsigned int)&unk_830000 & v23) == 0 || ((v24 = *(_DWORD *)(a1 + 20)) & 0x81000) != 0 )
  {
    v30 = *(_DWORD *)(a1 + 20) & 0xDFFFFFBF;
    goto LABEL_86;
  }
  LOBYTE(v24) = v24 | 0x40;
  *(_DWORD *)(a1 + 20) = v24;
  if ( (*((_DWORD *)v2 + 71) & 0x10000) != 0
    && *(_DWORD *)(a1 + 104) != 0
    && (*(_DWORD *)(dword_4B324C + 20) & 0x3000000) == 0
    && sub_4349B0(dword_4B324C, (_WORD *)(a1 + 88), (int)v328)
    && sub_437F00(a1, *((_DWORD *)v2 + 43)) != 0 )
  {
    v25 = *((_DWORD *)v2 + 43);
    if ( *(_WORD *)(v25 + 28) != 0 )
      sub_437910(a1, *(unsigned __int16 *)(v25 + 28), v328);
  }
  v26 = *((_DWORD *)v2 + 71);
  if ( ((unsigned int)&unk_800000 & v26) != 0 )
  {
    v27 = *(_DWORD *)(a1 + 20) | 0x20000000;
    *(_DWORD *)(a1 + 20) = v27;
    if ( ((*(_DWORD *)(dword_4B324C + 20) & 0x3000000) == 0 || (*(_DWORD *)(a1 + 8) & 0x40000000) != 0)
      && (v27 & 0x8000) != 0
      && sub_437F00(a1, *((_DWORD *)v2 + 43)) != 0 )
    {
      v28 = *((_DWORD *)v2 + 43);
      if ( *(_WORD *)(v28 + 28) != 0 )
        sub_437910(a1, *(unsigned __int16 *)(v28 + 28), v328);
    }
    if ( (*((_DWORD *)v2 + 71) & 0x20000) != 0 )
    {
      v29 = sub_433300(a1, 128, (int *)v328);
      *((_DWORD *)v2 + 42) = v29;
      if ( v29 != 0 )
      {
        if ( *(_DWORD *)(a1 + 112) == dword_4B324C )
        {
          if ( (*(_BYTE *)(dword_4B324C + 20) & 0x40) != 0 && *(_DWORD *)(dword_4B324C + 104) != 0 )
          {
            *(_DWORD *)(v29 + 52) = *(unsigned __int16 *)(a1 + 28);
            *(_DWORD *)(a1 + 52) = *(unsigned __int16 *)(*((_DWORD *)v2 + 42) + 28);
            *(_WORD *)(*((_DWORD *)v2 + 42) + 56) = *(_WORD *)(*((_DWORD *)v2 + 43) + 22);
          }
          goto LABEL_87;
        }
        if ( v29 == dword_4B324C )
          goto LABEL_87;
        *(_DWORD *)(v29 + 20) |= 0x2000000u;
        *(_DWORD *)(*((_DWORD *)v2 + 42) + 52) = *(unsigned __int16 *)(a1 + 28);
        *(_DWORD *)(a1 + 52) = *(unsigned __int16 *)(*((_DWORD *)v2 + 42) + 28);
        *(_WORD *)(*((_DWORD *)v2 + 42) + 56) = *(_WORD *)(*((_DWORD *)v2 + 43) + 22);
        v30 = *(_DWORD *)(a1 + 20) | 0x40000000;
LABEL_86:
        *(_DWORD *)(a1 + 20) = v30;
      }
    }
  }
  else
  {
    if ( (v26 & 0x20000) == 0 )
      goto LABEL_87;
    if ( *(_DWORD *)(a1 + 104) == 0 )
      goto LABEL_87;
    v31 = sub_4334F0(a1, (_WORD *)(a1 + 88), 128, 0, (int)v328);
    *((_DWORD *)v2 + 42) = v31;
    if ( v31 == 0 )
      goto LABEL_87;
    if ( *(_DWORD *)(a1 + 112) != dword_4B324C )
    {
      *(_DWORD *)(v31 + 20) |= 0x2000000u;
      *(_DWORD *)(*((_DWORD *)v2 + 42) + 52) = *(unsigned __int16 *)(a1 + 28);
      *(_DWORD *)(a1 + 52) = *(unsigned __int16 *)(*((_DWORD *)v2 + 42) + 28);
      *(_WORD *)(*((_DWORD *)v2 + 42) + 56) = *(_WORD *)(*((_DWORD *)v2 + 43) + 22);
      v30 = *(_DWORD *)(a1 + 20) | 0x40000000;
      goto LABEL_86;
    }
    if ( (*(_BYTE *)(dword_4B324C + 20) & 0x40) != 0 && *(_DWORD *)(dword_4B324C + 104) != 0 )
    {
      *(_DWORD *)(v31 + 20) |= 0x6000000u;
      *(_DWORD *)(*((_DWORD *)v2 + 42) + 52) = *(unsigned __int16 *)(a1 + 28);
      *(_DWORD *)(a1 + 52) = *(unsigned __int16 *)(*((_DWORD *)v2 + 42) + 28);
      *(_WORD *)(*((_DWORD *)v2 + 42) + 56) = *(_WORD *)(*((_DWORD *)v2 + 43) + 22);
    }
  }
LABEL_87:
  if ( (*(_DWORD *)(*((_DWORD *)v2 + 43) + 16) & 0x1000000) != 0 && *(_DWORD *)(a1 + 104) != 0 )
  {
    v32 = sub_4334F0(a1, (_WORD *)(a1 + 88), 128, 0, (int)v328);
    *((_DWORD *)v2 + 42) = v32;
    if ( v32 != 0 )
    {
      *(_DWORD *)(v32 + 52) = *(unsigned __int16 *)(a1 + 28);
      *(_DWORD *)(a1 + 52) = *(unsigned __int16 *)(*((_DWORD *)v2 + 42) + 28);
      *(_DWORD *)(*((_DWORD *)v2 + 42) + 20) |= 0x40000000u;
      v33 = *(_DWORD *)(a1 + 20);
      if ( *((_DWORD *)v2 + 42) == dword_4B324C )
        BYTE1(v33) |= 0x80u;
      else
        v33 |= 0x40000000u;
      *(_DWORD *)(a1 + 20) = v33;
    }
  }
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  *((_DWORD *)v2 + 8) = 0;
  *((_DWORD *)v2 + 9) = 0;
  *((_DWORD *)v2 + 10) = 0;
  if ( (*(_DWORD *)(*((_DWORD *)v2 + 43) + 16) & 0x2000000) != 0 )
  {
    v34 = dword_4B3B8C;
    if ( dword_4B3B8C < 0 )
    {
      v34 = 0;
      dword_4B3B8C = 0;
    }
    if ( v34 > 2457 )
    {
      v34 = 2457;
      dword_4B3B8C = 2457;
    }
    v35 = ((3 * v34) >> 11) + 2;
    *(_BYTE *)(a1 + 328) = v35;
    if ( v35 > 5u )
      *(_BYTE *)(a1 + 328) = 5;
    dword_4B3B8C -= 8;
  }
  v36 = *((_DWORD *)v2 + 71);
  if ( (v36 & 1) == 0 )
  {
    v37 = *(_DWORD *)(a1 + 20);
    if ( (v37 & 0x800) == 0 )
    {
      if ( (*(_DWORD *)(*((_DWORD *)v2 + 43) + 16) & 1) != 0 || (v36 & 0x20040060) != 0 )
      {
        if ( (*(_DWORD *)(*((_DWORD *)v2 + 43) + 16) & 1) != 0 )
        {
          if ( (v37 & 1) == 0 )
          {
            v38 = *(_WORD *)(a1 + 232);
            *(_WORD *)(a1 + 264) = 0;
            *(_WORD *)(a1 + 266) = 0;
            *(_WORD *)(a1 + 262) = v38;
            *(_WORD *)(a1 + 260) = *(_WORD *)(*((_DWORD *)v2 + 43) + 26);
            v39 = *(_DWORD *)(a1 + 20);
            LOBYTE(v39) = v39 | 1;
            *(_DWORD *)(a1 + 20) = v39;
          }
          *(_DWORD *)(a1 + 232) = *(__int16 *)(a1 + 262)
                                + ((*(__int16 *)(a1 + 260) * rsin(*(_WORD *)(a1 + 264))) >> 12);
          *(_WORD *)(a1 + 264) = (*(_WORD *)(a1 + 264) + *(_WORD *)(*((_DWORD *)v2 + 43) + 24)) & 0xFFF;
        }
        v40 = *((_DWORD *)v2 + 71);
        if ( (v40 & 0x20) != 0 )
        {
          if ( *(_DWORD *)(a1 + 104) != 0 && *(_DWORD *)(a1 + 108) == 0 && *(_DWORD *)(*((_DWORD *)v2 + 42) + 112) == 0 )
          {
            v2[116] = 0;
            v2[117] = -50;
            v2[118] = 200;
            RotMatrix((__int16 *)(a1 + 220), v2 + 52);
            ApplyMatrix((__int16 *)v2 + 52, (__int16 *)v2 + 116, (int *)v2 + 60);
            *((_DWORD *)v2 + 60) += *(_DWORD *)(a1 + 228);
            *((_DWORD *)v2 + 61) += *(_DWORD *)(a1 + 232);
            *((_DWORD *)v2 + 62) += *(_DWORD *)(a1 + 236);
            v41 = sub_4334F0(a1, v2 + 120, 2048, 0x2000000, (int)v328);
            *((_DWORD *)v2 + 42) = v41;
            if ( v41 != 0 )
            {
              *(_DWORD *)(a1 + 24) |= 0x800u;
              *(_DWORD *)(a1 + 108) = *((_DWORD *)v2 + 42);
              *(_DWORD *)(*((_DWORD *)v2 + 42) + 20) &= 0xFFF7EFFD;
              *(_DWORD *)(*((_DWORD *)v2 + 42) + 20) |= 0x800u;
              *(_DWORD *)(*((_DWORD *)v2 + 42) + 196) = *(_DWORD *)(a1 + 104);
              *(_DWORD *)(*((_DWORD *)v2 + 42) + 192) = *((_DWORD *)v2 + 42) + 284;
              *(_DWORD *)(*((_DWORD *)v2 + 42) + 112) = a1;
              *(_DWORD *)(*((_DWORD *)v2 + 42) + 308) = 0;
              *(_DWORD *)(*((_DWORD *)v2 + 42) + 312) = 0;
              *(_DWORD *)(*((_DWORD *)v2 + 42) + 316) = 0;
              *(_WORD *)(*((_DWORD *)v2 + 42) + 300) = 0;
              *(_WORD *)(*((_DWORD *)v2 + 42) + 302) = 0;
              *(_WORD *)(*((_DWORD *)v2 + 42) + 304) = 0;
              *(_DWORD *)(*((_DWORD *)v2 + 42) + 284) = *(_DWORD *)(*((_DWORD *)v2 + 42) + 204);
              *(_DWORD *)(*((_DWORD *)v2 + 42) + 288) = *(_DWORD *)(*((_DWORD *)v2 + 42) + 208);
              *(_DWORD *)(*((_DWORD *)v2 + 42) + 292) = *(_DWORD *)(*((_DWORD *)v2 + 42) + 212);
              v42 = *((_DWORD *)v2 + 42) + 124;
              *(_DWORD *)v42 = 0;
              RotMatrix((__int16 *)(*(_DWORD *)(v42 + 68) + 16), (_WORD *)(v42 + 4));
              ScaleMatrix((__int16 *)(v42 + 4), *(_DWORD **)(v42 + 68));
              TransMatrix((_DWORD *)(v42 + 4), (_DWORD *)(*(_DWORD *)(v42 + 68) + 24));
            }
          }
        }
        else if ( (v40 & 0x40) != 0 && *(_DWORD *)(a1 + 104) != 0 )
        {
          v43 = *(_DWORD *)(a1 + 108);
          *((_DWORD *)v2 + 52) = v43;
          if ( v43 != 0 )
          {
            *(_DWORD *)(v43 + 20) &= 0xFFFFF7FD;
            v44 = *((_DWORD *)v2 + 52);
            v45 = *(_DWORD *)(v44 + 20);
            BYTE1(v45) |= 0x10u;
            *(_DWORD *)(v44 + 20) = v45;
            *(_DWORD *)(*((_DWORD *)v2 + 52) + 196) = 0;
            *(_DWORD *)(*((_DWORD *)v2 + 52) + 192) = *((_DWORD *)v2 + 52) + 204;
            *(_WORD *)(*((_DWORD *)v2 + 52) + 38) = *(_WORD *)(a1 + 38);
            *(_DWORD *)(a1 + 108) = 0;
            *(_DWORD *)(*((_DWORD *)v2 + 52) + 112) = 0;
            *(_DWORD *)(*((_DWORD *)v2 + 52) + 228) = *(_DWORD *)(a1 + 88);
            *(_DWORD *)(*((_DWORD *)v2 + 52) + 232) = *(_DWORD *)(a1 + 92);
            *(_DWORD *)(*((_DWORD *)v2 + 52) + 236) = *(_DWORD *)(a1 + 96);
            *(_WORD *)(*((_DWORD *)v2 + 52) + 220) = *(_WORD *)(a1 + 220);
            *(_WORD *)(*((_DWORD *)v2 + 52) + 222) = *(_WORD *)(a1 + 222);
            *(_WORD *)(*((_DWORD *)v2 + 52) + 224) = *(_WORD *)(a1 + 224);
            v46 = *((_DWORD *)v2 + 52) + 124;
            *(_DWORD *)v46 = 0;
            RotMatrix((__int16 *)(*(_DWORD *)(v46 + 68) + 16), (_WORD *)(v46 + 4));
            ScaleMatrix((__int16 *)(v46 + 4), *(_DWORD **)(v46 + 68));
            TransMatrix((_DWORD *)(v46 + 4), (_DWORD *)(*(_DWORD *)(v46 + 68) + 24));
            sub_437860(a1, *((_DWORD **)v2 + 52), (int)v328);
          }
        }
        if ( (*((_DWORD *)v2 + 71) & 0x20000000) != 0 )
        {
          *(_DWORD *)(a1 + 20) |= 4u;
          if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
          {
            *(_WORD *)(a1 + 266) = 0;
            *(_WORD *)(a1 + 264) = 3072;
            *(_WORD *)(a1 + 262) = *(_WORD *)(*((_DWORD *)v2 + 43) + 24);
            *(_WORD *)(a1 + 260) = *(_WORD *)(*((_DWORD *)v2 + 43) + 26);
            v47 = *(_DWORD *)(a1 + 20);
            LOBYTE(v47) = v47 | 1;
            *(_DWORD *)(a1 + 20) = v47;
          }
          v48 = ((*(__int16 *)(a1 + 260) * rsin(*(_WORD *)(a1 + 264))) >> 12) + *(_DWORD *)(a1 + 232);
          *(_WORD *)(a1 + 264) += *(_WORD *)(a1 + 262);
          v49 = *(_WORD *)(a1 + 264);
          *(_DWORD *)(a1 + 232) = v48;
          if ( v49 >= 4096 )
            *(_WORD *)(a1 + 264) = v49 - 4096;
          v50 = sub_436CD0((int *)(a1 + 228), *(_WORD *)(a1 + 38));
          *((_DWORD *)v2 + 64) = v50;
          if ( v50 != NULL )
          {
            *((_DWORD *)v2 + 12) = *(_DWORD *)(a1 + 228);
            *((_DWORD *)v2 + 13) = *(_DWORD *)(a1 + 232);
            *((_DWORD *)v2 + 14) = *(_DWORD *)(a1 + 236);
            v2[73] = *(_WORD *)(a1 + 38);
            sub_436D90((_DWORD *)v2 + 12, (int)(v2 + 68), (int)v328);
            if ( (v2[69] & 8) != 0 )
            {
              v51 = *(_DWORD *)(dword_4B324C + 232) - 200;
            }
            else if ( ((unsigned int)&unk_810000 & *((_DWORD *)v2 + 71)) != 0
                   && *(_WORD *)(a1 + 38) == *(_WORD *)(dword_4B324C + 38) )
            {
              v52 = *(_DWORD *)(dword_4B324C + 232);
              v53 = (__int16)v2[70] + *((_DWORD *)v2 + 13);
              if ( v52 <= v53 )
                v51 = v52 - 100;
              else
                v51 = v53 - 200;
            }
            else
            {
              v51 = (__int16)v2[70] + *((_DWORD *)v2 + 13) - 400;
            }
            *((_DWORD *)v2 + 69) = v51;
            *((_DWORD *)v2 + 70) = v51 - 200;
            v54 = *(_DWORD *)(a1 + 232);
            if ( v54 <= *((_DWORD *)v2 + 69) )
            {
              if ( v54 < *((_DWORD *)v2 + 70) )
                *(_WORD *)(a1 + 404) = 1;
            }
            else
            {
              *(_WORD *)(a1 + 404) = 0;
            }
            v55 = *(_WORD *)(a1 + 402);
            if ( v55 <= 0 )
            {
              *(_WORD *)(a1 + 402) = (unsigned __int8)BugsRand();
              *(_WORD *)(a1 + 404) = BugsRand() & 1;
            }
            else
            {
              *(_WORD *)(a1 + 402) = v55 - 1;
              if ( *(_WORD *)(a1 + 404) != 0 )
                v56 = v54 + 4;
              else
                v56 = v54 - 4;
              *(_DWORD *)(a1 + 232) = v56;
            }
          }
        }
        if ( (*((_DWORD *)v2 + 71) & 0x40000) != 0 )
        {
          v2[41] = 0;
          v2[40] = 0;
          v2[42] = 100;
          v2[14] = 0;
          v2[12] = 0;
          v2[13] = *(_WORD *)(*(_DWORD *)(a1 + 192) + 18);
          RotMatrix((__int16 *)v2 + 12, v2 + 52);
          v57 = v2 + 32;
          gte_ApplyMatrix((__int16 *)v2 + 52, (__int16 *)v2 + 40, (int *)v2 + 16);
          v58 = v2 + 44;
          v2[73] = *(_WORD *)(a1 + 38);
          *((_DWORD *)v2 + 22) = *((_DWORD *)v2 + 16);
          *((_DWORD *)v2 + 23) = *((_DWORD *)v2 + 17);
          *((_DWORD *)v2 + 24) = *((_DWORD *)v2 + 18);
          *((_DWORD *)v2 + 22) += *(_DWORD *)(a1 + 228);
          *((_DWORD *)v2 + 23) += *(_DWORD *)(a1 + 232);
          *((_DWORD *)v2 + 24) += *(_DWORD *)(a1 + 236);
          sub_436D90((_DWORD *)v2 + 22, (int)(v2 + 68), (int)v328);
          if ( (v2[69] & 0xC) == 0 )
          {
            *((_DWORD *)v2 + 40) = (__int16)v2[71];
            *v57 = *(_DWORD *)(a1 + 228);
            *((_DWORD *)v2 + 17) = *(_DWORD *)(a1 + 232);
            *((_DWORD *)v2 + 18) = *(_DWORD *)(a1 + 236);
            v2[73] = *(_WORD *)(a1 + 38);
            sub_436D90((_DWORD *)v2 + 16, (int)(v2 + 68), (int)v328);
            if ( (v2[69] & 0xC) == 0 )
            {
              *(_WORD *)(a1 + 402) += ratan2(*((_DWORD *)v2 + 40) - (__int16)v2[71], 100);
              if ( *(__int16 *)(a1 + 402) < -4096 )
                *(_WORD *)(a1 + 402) = -4096;
              if ( *(__int16 *)(a1 + 402) > 4096 )
                *(_WORD *)(a1 + 402) = 4096;
            }
          }
          v2[2] += (*(__int16 *)(*((_DWORD *)v2 + 43) + 20) * *(__int16 *)(a1 + 402)) >> 12;
          v2[41] = 0;
          v2[40] = 0;
          v2[42] = 100;
          v2[14] = 0;
          v2[12] = 0;
          if ( (v2[2] & 0x8000u) == 0 )
            v2[13] = *(_WORD *)(*(_DWORD *)(a1 + 192) + 18) + 1024;
          else
            v2[13] = *(_WORD *)(*(_DWORD *)(a1 + 192) + 18) - 1024;
          RotMatrix((__int16 *)v2 + 12, v2 + 52);
          gte_ApplyMatrix((__int16 *)v2 + 52, (__int16 *)v2 + 40, (int *)v2 + 16);
          v2[73] = *(_WORD *)(a1 + 38);
          *v58 = *v57;
          *((_DWORD *)v2 + 23) = *((_DWORD *)v2 + 17);
          *((_DWORD *)v2 + 24) = *((_DWORD *)v2 + 18);
          *v58 += *(_DWORD *)(a1 + 228);
          *((_DWORD *)v2 + 23) += *(_DWORD *)(a1 + 232);
          *((_DWORD *)v2 + 24) += *(_DWORD *)(a1 + 236);
          sub_434E40((_DWORD *)v2 + 22, NULL, (int)(v2 + 68), (int)v328);
          if ( (v2[69] & 0xC) == 0 )
          {
            *((_DWORD *)v2 + 40) = (__int16)v2[71];
            *v57 = -*v57;
            *((_DWORD *)v2 + 18) = -*((_DWORD *)v2 + 18);
            v2[73] = *(_WORD *)(a1 + 38);
            *v58 = *v57;
            *((_DWORD *)v2 + 23) = *((_DWORD *)v2 + 17);
            *((_DWORD *)v2 + 24) = *((_DWORD *)v2 + 18);
            *v58 += *(_DWORD *)(a1 + 228);
            *((_DWORD *)v2 + 23) += *(_DWORD *)(a1 + 232);
            *((_DWORD *)v2 + 24) += *(_DWORD *)(a1 + 236);
            sub_434E40((_DWORD *)v2 + 22, NULL, (int)(v2 + 68), (int)v328);
            if ( (v2[69] & 0xC) == 0 )
            {
              v59 = *((_DWORD *)v2 + 40) - (__int16)v2[71];
              *((_DWORD *)v2 + 40) = v59;
              if ( v59 != 0 )
                *(_WORD *)(a1 + 222) += ratan2(v59 >> 1, 200);
            }
          }
        }
      }
      v60 = *((_DWORD *)v2 + 71);
      if ( (v60 & 0x2000C02) != 0 || *(int *)(*((_DWORD *)v2 + 43) + 16) < 0 )
      {
        v61 = *((_DWORD *)v2 + 43);
        v62 = *(_DWORD *)(v61 + 16);
        if ( v62 >= 0 )
        {
          if ( (v60 & 2) != 0 )
          {
            if ( (v62 & 0x400000) != 0 )
              v2[2] += 2 * byte_4B2260[*(__int16 *)(v61 + 20)];
            else
              v2[2] += *(_WORD *)(v61 + 20);
          }
        }
        else
        {
          if ( (v60 & 0x100000) != 0 )
          {
            if ( (v62 & 0x400000) != 0 )
              v2[2] += dword_4B2384 * 2 * byte_4B2260[*(__int16 *)(v61 + 20)];
            else
              v2[2] += dword_4B2384 * *(_WORD *)(v61 + 20);
          }
          *((_DWORD *)v2 + 70) = ratan2(dword_4B38CC - dword_4B38C0, dword_4B38D4 - dword_4B38C8);
          v63 = *((_WORD *)dword_52FD00 + 32777);
          if ( v63 != 0 || *((_WORD *)dword_52FD00 + 32778) != 0 )
          {
            v66 = SquareRoot0(*((__int16 *)dword_52FD00 + 32778) * *((__int16 *)dword_52FD00 + 32778) + v63 * v63);
            *((_DWORD *)v2 + 69) = v66;
            v67 = 128 / word_4B3234 * (v66 - word_4B3234);
            *((_DWORD *)v2 + 69) = v67;
            if ( v67 > 128 )
              *((_DWORD *)v2 + 69) = 128;
            v68 = *((_DWORD *)v2 + 43);
            if ( (*(_DWORD *)(v68 + 16) & 0x400000) != 0 )
              *((_DWORD *)v2 + 40) = dword_4B2384 * 2 * byte_4B2260[*(__int16 *)(v68 + 20)];
            else
              *((_DWORD *)v2 + 40) = dword_4B2384 * *(__int16 *)(v68 + 20);
            v69 = (*((_DWORD *)v2 + 69) * *((_DWORD *)v2 + 40)) >> 7;
            *((_DWORD *)v2 + 69) = v69;
            if ( v69 == 0 )
              *((_DWORD *)v2 + 69) = 1;
            if ( *(_DWORD *)(a1 + 196) != 0 )
            {
              v2[116] = 0;
              v2[117] = 0;
              v2[118] = 1000;
              *((_DWORD *)v2 + 57) = a1 + 124;
              if ( a1 != -124 )
              {
                do
                {
                  ApplyMatrixSV((__int16 *)(*((_DWORD *)v2 + 57) + 4), (__int16 *)v2 + 116, (_DWORD *)v2 + 58);
                  v70 = *(_DWORD *)(*((_DWORD *)v2 + 57) + 72);
                  *((_DWORD *)v2 + 57) = v70;
                }
                while ( v70 != 0 );
              }
              *((_DWORD *)v2 + 40) = ratan2((__int16)v2[116], (__int16)v2[118]);
              *(_WORD *)(a1 + 222) = v2[80];
              v71 = *((_DWORD *)v2 + 40)
                  - (*((_DWORD *)v2 + 70)
                   + ratan2(*((__int16 *)dword_52FD00 + 32777), *((__int16 *)dword_52FD00 + 32778)))
                  % 4096;
              *((_DWORD *)v2 + 40) = v71;
              if ( v71 > 2048 )
                *((_DWORD *)v2 + 40) = v71 - 4096;
              v72 = *((_DWORD *)v2 + 40);
              if ( v72 < -2048 )
                *((_DWORD *)v2 + 40) = v72 + 4096;
              if ( (*((_DWORD *)v2 + 71) & 0x100000) != 0 )
              {
                v73 = *((_DWORD *)v2 + 40);
                if ( v73 <= 30 )
                {
                  if ( v73 < -30 )
                    *((_DWORD *)v2 + 40) = -30;
                }
                else
                {
                  *((_DWORD *)v2 + 40) = 30;
                }
                v74 = *((_DWORD *)v2 + 69);
                if ( v74 <= 512 )
                {
                  if ( v74 < -512 )
                    *((_DWORD *)v2 + 69) = -512;
                }
                else
                {
                  *((_DWORD *)v2 + 69) = 512;
                }
                *(_BYTE *)(*(_DWORD *)(a1 + 120) + 9) |= 4u;
                v75 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 120) + 16) + 68);
                *(_WORD *)(v75 + 18) -= (*(__int16 *)(v75 + 18) - *((_DWORD *)v2 + 69)) >> 5;
                v76 = *(_DWORD *)(*(_DWORD *)(a1 + 120) + 16);
                v314 = (__int16 *)(*(_DWORD *)(v76 + 68) + 16);
                *(_DWORD *)v76 = 0;
                RotMatrix(v314, (_WORD *)(v76 + 4));
                ScaleMatrix((__int16 *)(v76 + 4), *(_DWORD **)(v76 + 68));
                TransMatrix((_DWORD *)(v76 + 4), (_DWORD *)(*(_DWORD *)(v76 + 68) + 24));
              }
              else
              {
                v2[2] += v2[138];
                *((int *)v2 + 40) >>= 2;
              }
              *(_WORD *)(*(_DWORD *)(a1 + 192) + 18) -= v2[80];
            }
            else
            {
              v77 = ratan2(*((__int16 *)dword_52FD00 + 32777), *((__int16 *)dword_52FD00 + 32778));
              *((_DWORD *)v2 + 40) = v77;
              v78 = v77 + *((_DWORD *)v2 + 70);
              v79 = (HIDWORD(v78) ^ ((WORD2(v78) ^ (unsigned __int16)v78) - WORD2(v78)) & 0xFFF) - HIDWORD(v78);
              *((_DWORD *)v2 + 40) = v79;
              if ( v79 > 2048 )
                *((_DWORD *)v2 + 40) = v79 - 4096;
              v80 = *((_DWORD *)v2 + 40);
              if ( v80 < -2048 )
                *((_DWORD *)v2 + 40) = v80 + 4096;
              v81 = *(_WORD *)(a1 + 222);
              if ( v81 > 2048 )
                *(_WORD *)(a1 + 222) = v81 - 4096;
              v82 = *(_WORD *)(a1 + 222);
              if ( v82 < -2048 )
                *(_WORD *)(a1 + 222) = v82 + 4096;
              v83 = *((_DWORD *)v2 + 40) - *(__int16 *)(a1 + 222);
              *((_DWORD *)v2 + 40) = v83;
              if ( v83 > 2048 )
                *((_DWORD *)v2 + 40) = v83 - 4096;
              v84 = *((_DWORD *)v2 + 40);
              if ( v84 < -2048 )
                *((_DWORD *)v2 + 40) = v84 + 4096;
              v85 = *((_DWORD *)v2 + 40);
              if ( (*((_DWORD *)v2 + 71) & 0x100000) != 0 )
              {
                *((_DWORD *)v2 + 69) = v85;
                v86 = *((_DWORD *)v2 + 40);
                if ( v86 <= 30 )
                {
                  if ( v86 < -30 )
                    *((_DWORD *)v2 + 40) = -30;
                }
                else
                {
                  *((_DWORD *)v2 + 40) = 30;
                }
                v87 = *((_DWORD *)v2 + 69);
                if ( v87 <= 512 )
                {
                  if ( v87 < -512 )
                    *((_DWORD *)v2 + 69) = -512;
                }
                else
                {
                  *((_DWORD *)v2 + 69) = 512;
                }
                *(_BYTE *)(*(_DWORD *)(a1 + 120) + 9) |= 4u;
                v88 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 120) + 16) + 68);
                *(_WORD *)(v88 + 18) -= (*(__int16 *)(v88 + 18) - *((_DWORD *)v2 + 69)) >> 5;
                v89 = *(_DWORD *)(*(_DWORD *)(a1 + 120) + 16);
                v315 = (__int16 *)(*(_DWORD *)(v89 + 68) + 16);
                *(_DWORD *)v89 = 0;
                RotMatrix(v315, (_WORD *)(v89 + 4));
                ScaleMatrix((__int16 *)(v89 + 4), *(_DWORD **)(v89 + 68));
                TransMatrix((_DWORD *)(v89 + 4), (_DWORD *)(*(_DWORD *)(v89 + 68) + 24));
                *(_WORD *)(a1 + 222) += v2[80];
              }
              else
              {
                *((_DWORD *)v2 + 40) = v85 >> 2;
                v2[2] += v2[138];
                *(_WORD *)(a1 + 222) += v2[80];
              }
            }
          }
          else if ( (*((_DWORD *)v2 + 71) & 0x100000) != 0 )
          {
            v64 = *(__int16 *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 120) + 16) + 68) + 18);
            *((_DWORD *)v2 + 69) = v64;
            if ( (v64 & 0xFFFFFFF8) != 0 )
              *((_DWORD *)v2 + 69) = v64 >> 3;
            *(_WORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 120) + 16) + 68) + 18) -= v2[138];
            v65 = *(_DWORD *)(*(_DWORD *)(a1 + 120) + 16);
            v313 = (__int16 *)(*(_DWORD *)(v65 + 68) + 16);
            *(_DWORD *)v65 = 0;
            RotMatrix(v313, (_WORD *)(v65 + 4));
            ScaleMatrix((__int16 *)(v65 + 4), *(_DWORD **)(v65 + 68));
            TransMatrix((_DWORD *)(v65 + 4), (_DWORD *)(*(_DWORD *)(v65 + 68) + 24));
          }
        }
        if ( (*((_DWORD *)v2 + 71) & 0x400) != 0 )
          v2[1] -= *(_WORD *)(*((_DWORD *)v2 + 43) + 26);
        if ( (*((_DWORD *)v2 + 71) & 0x800) != 0 )
          v2[1] += *(_WORD *)(*((_DWORD *)v2 + 43) + 26);
        if ( (*((_DWORD *)v2 + 71) & 0x2000000) != 0 )
        {
          v90 = *(_WORD *)(a1 + 398);
          if ( v90 != 0 )
          {
            v91 = *(_WORD *)(a1 + 400) == 0;
            *(_WORD *)(a1 + 398) = v90 - 1;
            if ( v91 )
              *(_WORD *)(a1 + 222) -= 10;
            else
              *(_WORD *)(a1 + 222) += 10;
          }
          else
          {
            *(_WORD *)(a1 + 398) = BugsRand() & 0x1FF;
            *(_WORD *)(a1 + 400) = BugsRand() & 1;
          }
        }
      }
      v92 = *((_DWORD *)v2 + 43);
      v93 = *(_DWORD *)(v92 + 16);
      if ( (v93 & 0x10010) != 0 )
      {
        if ( (v93 & 0x10000) != 0 )
        {
          if ( (v93 & 0x400000) != 0 )
            *v2 += byte_4B2260[*(__int16 *)(v92 + 20)];
          else
            *v2 += *(_WORD *)(v92 + 20);
        }
        if ( (*(_BYTE *)(*((_DWORD *)v2 + 43) + 16) & 0x10) != 0 )
        {
          *((_DWORD *)v2 + 12) = dword_4B38C0 - *(_DWORD *)(a1 + 228);
          v94 = dword_4B38C8 - *(_DWORD *)(a1 + 236);
          *((_DWORD *)v2 + 14) = v94;
          *(_WORD *)(a1 + 222) = ratan2(*((_DWORD *)v2 + 12), v94);
        }
      }
      v95 = *((_DWORD *)v2 + 71);
      if ( (v95 & 0x10209000) != 0 )
      {
        if ( (v95 & 0x200000) != 0 )
        {
          v96 = dword_4B3740;
          *((_DWORD *)v2 + 42) = dword_4B3740;
          if ( v96 != 0 )
          {
            do
            {
              v97 = *((int **)v2 + 42);
              if ( *((unsigned __int16 *)v97 + 14) == *(__int16 *)(*((_DWORD *)v2 + 43) + 22) && (v97[5] & 0x100) == 0 )
                break;
              v98 = *v97;
              *((_DWORD *)v2 + 42) = v98;
            }
            while ( v98 != 0 );
          }
        }
        else
        {
          *((_DWORD *)v2 + 42) = dword_4B324C;
        }
        v99 = *((_DWORD *)v2 + 42);
        if ( v99 != 0 )
        {
          v100 = (int *)(v2 + 24);
          if ( (*((_DWORD *)v2 + 71) & 0x10000000) != 0 )
          {
            *v100 = *(_DWORD *)(a1 + 228) - *(_DWORD *)(v99 + 228);
            v101 = *(_DWORD *)(a1 + 236);
            v102 = *(_DWORD *)(*((_DWORD *)v2 + 42) + 236);
          }
          else
          {
            *v100 = *(_DWORD *)(v99 + 228) - *(_DWORD *)(a1 + 228);
            *((_DWORD *)v2 + 13) = *(_DWORD *)(*((_DWORD *)v2 + 42) + 232)
                                 - *(_DWORD *)(a1 + 232)
                                 + *(__int16 *)(*((_DWORD *)v2 + 42) + 82)
                                 + 50;
            v102 = *(_DWORD *)(a1 + 236);
            v101 = *(_DWORD *)(*((_DWORD *)v2 + 42) + 236);
          }
          *((_DWORD *)v2 + 14) = v101 - v102;
          v103 = *((_DWORD *)v2 + 71);
          if ( (v103 & 0x20000000) != 0 && (v103 & 0x10000000) == 0 )
          {
            sub_4078F0((int *)v2 + 12, (int *)v2 + 69);
            v104 = *((_DWORD *)v2 + 69);
            if ( v104 < 4096 )
              v2[1] += (unsigned int)((4096 - v104) * *((_DWORD *)v2 + 13)) >> 16;
          }
          v105 = ratan2(*v100, *((_DWORD *)v2 + 14));
          *((_DWORD *)v2 + 69) = v105;
          if ( (*((_DWORD *)v2 + 71) & 0x1000) == 0 )
          {
            if ( v105 < 0 )
              *((_DWORD *)v2 + 69) = v105 + 4096;
            v108 = *(_DWORD *)(a1 + 196);
            if ( v108 != 0 )
              v109 = *(__int16 *)(*(_DWORD *)(a1 + 192) + 18) + *(__int16 *)(*(_DWORD *)(v108 + 68) + 18);
            else
              v109 = *(__int16 *)(*(_DWORD *)(a1 + 192) + 18);
            v110 = v109 % 4096;
            *((_DWORD *)v2 + 70) = v110;
            if ( v110 < 0 )
              *((_DWORD *)v2 + 70) = v110 + 4096;
            v111 = *((_DWORD *)v2 + 69) - *((_DWORD *)v2 + 70);
            *((_DWORD *)v2 + 69) = v111;
            if ( v111 < 0 )
              *((_DWORD *)v2 + 69) = v111 + 4096;
            v112 = *((_DWORD *)v2 + 69);
            if ( v112 > 2048 )
              *((_DWORD *)v2 + 69) = v112 - 4096;
            if ( (*(_DWORD *)(*((_DWORD *)v2 + 43) + 16) & 0x400) != 0 )
            {
              v113 = *((_DWORD *)v2 + 69);
              if ( v113 < 0 )
              {
                v114 = *(_WORD *)(a1 + 406);
                if ( v113 < -v114 )
                {
                  *(_WORD *)(*(_DWORD *)(a1 + 192) + 18) -= v114;
                  goto LABEL_287;
                }
              }
              LOWORD(v115) = *(_WORD *)(a1 + 406);
              if ( v113 <= (__int16)v115 )
                goto LABEL_287;
              v116 = *(_DWORD *)(a1 + 192);
            }
            else
            {
              v117 = *(__int16 *)(a1 + 406);
              *((_DWORD *)v2 + 40) = v117;
              if ( v117 == 0 )
                *((_DWORD *)v2 + 40) = 4;
              if ( (*(_BYTE *)(*((_DWORD *)v2 + 43) + 16) & 0x20) != 0 )
              {
                v116 = *(_DWORD *)(a1 + 192);
                v115 = *((int *)v2 + 69) >> 1;
              }
              else
              {
                v91 = *((int *)v2 + 69) >> *((_DWORD *)v2 + 40) == 0;
                *((_DWORD *)v2 + 40) = *((int *)v2 + 69) >> *((_DWORD *)v2 + 40);
                v116 = *(_DWORD *)(a1 + 192);
                if ( !v91 )
                {
                  *(_WORD *)(v116 + 18) += v2[80];
                  goto LABEL_287;
                }
                LOWORD(v115) = v2[138];
              }
            }
            *(_WORD *)(v116 + 18) += v115;
            goto LABEL_287;
          }
          v106 = *(_DWORD *)(a1 + 196);
          if ( v106 != 0 )
            v107 = *(_WORD *)(*(_DWORD *)(v106 + 68) + 18);
          else
            v107 = 0;
          *(_WORD *)(*(_DWORD *)(a1 + 192) + 18) = v2[138] - v107;
        }
      }
LABEL_287:
      RotMatrix((__int16 *)(a1 + 220), v2 + 52);
      gte_ApplyMatrix((__int16 *)v2 + 52, (__int16 *)v2, (int *)v2 + 8);
      v2[5] = 0;
      v342 = 0;
      v2[4] = 0;
      if ( (*((_DWORD *)v2 + 71) & 0x400000) == 0 )
      {
        v118 = v328;
        *((_DWORD *)v2 + 2) = *((_DWORD *)v2 + 8);
        v119 = *((_DWORD *)v2 + 10);
        *((_DWORD *)v2 + 3) = *((_DWORD *)v2 + 9);
        *((_DWORD *)v2 + 4) = v119;
        v120 = sub_433670((_DWORD *)a1, (__int16 *)v2 + 4, (int)v328, 131336);
        *((_DWORD *)v2 + 42) = v120;
        if ( v120 != 0 )
        {
          *(_DWORD *)(v120 + 52) = *(unsigned __int16 *)(a1 + 28);
          *(_DWORD *)(a1 + 52) = *(unsigned __int16 *)(*((_DWORD *)v2 + 42) + 28);
          v121 = *((_DWORD *)v2 + 43);
          if ( (*(_DWORD *)(v121 + 16) & 0x200000) != 0 )
          {
            v122 = *((_DWORD *)v2 + 42);
            if ( *(__int16 *)(v121 + 22) == *(unsigned __int16 *)(v122 + 28) && (*(_BYTE *)(v122 + 8) & 8) == 0 )
            {
              v123 = (_DWORD *)(a1 + 284);
              *(_DWORD *)(a1 + 292) = 4096;
              *(_DWORD *)(a1 + 288) = 4096;
              *(_DWORD *)(a1 + 284) = 4096;
              v124 = *(_DWORD *)(a1 + 112);
              *(_DWORD *)(a1 + 316) = 0;
              *(_DWORD *)(a1 + 312) = 0;
              *(_DWORD *)(a1 + 308) = 0;
              if ( v124 != 0 && *(_DWORD *)(v124 + 108) == a1 )
              {
                *(_DWORD *)(v124 + 108) = 0;
              }
              else
              {
                v125 = *((_DWORD *)v2 + 42);
                v126 = *(_DWORD *)(v125 + 104);
                if ( v126 != 0 )
                {
                  *v123 = **(_DWORD **)(v126 + 68);
                  *(_DWORD *)(a1 + 288) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)v2 + 42) + 104) + 68) + 4);
                  *(_DWORD *)(a1 + 292) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)v2 + 42) + 104) + 68) + 8);
                  *(_DWORD *)(a1 + 196) = *(_DWORD *)(*((_DWORD *)v2 + 42) + 104);
                }
                else
                {
                  *(_DWORD *)(a1 + 196) = v125 + 124;
                }
                *(_WORD *)(a1 + 38) = *(_WORD *)(*((_DWORD *)v2 + 42) + 38);
                *(_DWORD *)(a1 + 112) = *((_DWORD *)v2 + 42);
              }
              *(_DWORD *)(a1 + 192) = v123;
              *(_DWORD *)(*((_DWORD *)v2 + 42) + 108) = a1;
              *(_WORD *)(a1 + 38) = *(_WORD *)(*((_DWORD *)v2 + 42) + 38);
              v127 = (__int16 *)(*(_DWORD *)(a1 + 192) + 16);
              *(_DWORD *)(a1 + 124) = 0;
              RotMatrix(v127, (_WORD *)(a1 + 128));
              ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
              TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
              v128 = (__int16 *)(a1 + 124);
              *(_DWORD *)(a1 + 20) &= 0xFFF7E5E4;
              v329 = (__int16 *)(a1 + 124);
              v336 = 0;
              v337 = 0;
              v338 = 0;
              if ( a1 != -124 )
              {
                do
                {
                  gte_ApplyMatrix(v128 + 2, &v336, &v339);
                  v339 += *((_DWORD *)v329 + 6);
                  v340 += *((_DWORD *)v329 + 7);
                  v341 += *((_DWORD *)v329 + 8);
                  v336 = v339;
                  v337 = v340;
                  v338 = v341;
                  v329 = *((__int16 **)v329 + 18);
                  v128 = v329;
                }
                while ( v329 != NULL );
              }
              v129 = *(_DWORD *)(a1 + 20);
              v130 = v339;
              v131 = v341;
              *(_DWORD *)(a1 + 232) = v340;
              *(_DWORD *)(a1 + 228) = v130;
              *(_DWORD *)(a1 + 236) = v131;
              *(_DWORD *)(a1 + 20) = v129 | 0x40000000;
              v118 = v328;
              v342 = 1;
              *(_DWORD *)(*((_DWORD *)v2 + 42) + 20) |= 0x40000000u;
            }
          }
          if ( (*((_DWORD *)v2 + 71) & 0x20000) != 0 )
          {
            v132 = *((_DWORD *)v2 + 42);
            if ( (*(_DWORD *)(v132 + 20) & 0x2000000) == 0 && dword_4B324C != v132 )
            {
              v133 = *(_DWORD *)(v132 + 388);
              if ( v133 == 0 || (*(_BYTE *)(v133 + 12) & 0x40) == 0 )
              {
                if ( (*(_DWORD *)(a1 + 8) & 0x10000000) != 0 && (*(_DWORD *)(a1 + 20) & 0x201) != 0
                  || (*(_DWORD *)((v134 = *((_DWORD *)v2 + 43)) + 12) & 0x200000) != 0 )
                {
                  *(_WORD *)(v132 + 56) = 1;
                }
                else
                {
                  *(_WORD *)(v132 + 56) = *(_WORD *)(v134 + 22);
                }
                *(_DWORD *)(*((_DWORD *)v2 + 42) + 20) |= 0x2000000u;
                *(_DWORD *)(a1 + 20) |= 0x8000000u;
              }
            }
          }
          if ( ((unsigned int)&unk_800000 & *((_DWORD *)v2 + 71)) != 0
            && *((_DWORD *)v2 + 42) == dword_4B324C
            && (*(_DWORD *)(dword_4B324C + 20) & 0x2000000) == 0
            && sub_437F00(a1, *((_DWORD *)v2 + 43)) != 0
            && *(_WORD *)(*((_DWORD *)v2 + 43) + 28) != 0 )
          {
            sub_437910(a1, *(unsigned __int16 *)(*((_DWORD *)v2 + 43) + 28), v118);
          }
          v135 = *((_DWORD *)v2 + 42);
          if ( (*(_BYTE *)(v135 + 8) & 8) != 0
            && ((*(_DWORD *)(a1 + 8) & 0x40000) != 0 || (*(_DWORD *)(*((_DWORD *)v2 + 43) + 16) & 0x20000000) != 0)
            && *(_DWORD *)(a1 + 112) == 0 )
          {
            v136 = *(_DWORD *)(a1 + 20);
            if ( (v136 & 0x10) == 0 )
            {
              v137 = (v136 & 1) != 0 ? *(_DWORD *)(a1 + 20) & 8 : 1;
              if ( v137 != 0 && (__int16)v2[5] > -100 && *(_DWORD *)(v135 + 120) != 0 && *(_DWORD *)(a1 + 120) != 0 )
              {
                *(_DWORD *)(a1 + 112) = v135;
                if ( (*(_DWORD *)(*((_DWORD *)v2 + 42) + 12) & 0x1000000) != 0 )
                {
                  v2[6] = 0;
                  v2[4] = 0;
                }
                else
                {
                  v2[4] = *(_WORD *)(a1 + 228) - *(_WORD *)(*(_DWORD *)(a1 + 112) + 228);
                  v2[6] = *(_WORD *)(a1 + 236) - *(_WORD *)(*(_DWORD *)(a1 + 112) + 236);
                }
                v2[5] = *(_WORD *)(*(_DWORD *)(a1 + 112) + 82) + 4;
                v2[12] = 4096 - *(_WORD *)(*(_DWORD *)(a1 + 112) + 220);
                v2[13] = 4096 - *(_WORD *)(*(_DWORD *)(a1 + 112) + 222);
                v138 = 4096 - *(_WORD *)(*(_DWORD *)(a1 + 112) + 224);
                v2[52] = 4096;
                v2[56] = 4096;
                v2[60] = 4096;
                v2[14] = v138;
                v316 = (__int16)v2[12];
                v2[53] = 0;
                v2[54] = 0;
                v2[55] = 0;
                v2[57] = 0;
                v2[58] = 0;
                v2[59] = 0;
                *((_DWORD *)v2 + 31) = 0;
                *((_DWORD *)v2 + 32) = 0;
                *((_DWORD *)v2 + 33) = 0;
                RotMatrixX(v316, (__int16 *)v2 + 52);
                RotMatrixY((__int16)v2[13], (__int16 *)v2 + 52);
                RotMatrixZ((__int16)v2[14], (__int16 *)v2 + 52);
                gte_ApplyMatrix((__int16 *)v2 + 52, (__int16 *)v2 + 4, (int *)(a1 + 308));
                *(_DWORD *)(a1 + 232) = *(__int16 *)(*((_DWORD *)v2 + 42) + 82)
                                      + *(_DWORD *)(*((_DWORD *)v2 + 42) + 232);
                *((_DWORD *)v2 + 9) = 0;
                v139 = *(_DWORD *)(a1 + 112);
                v140 = *(_WORD *)(a1 + 222) - *(_WORD *)(v139 + 222);
                *(_DWORD *)(a1 + 292) = 4096;
                *(_DWORD *)(a1 + 288) = 4096;
                *(_WORD *)(a1 + 302) = v140;
                *(_DWORD *)(a1 + 192) = a1 + 284;
                *(_DWORD *)(a1 + 196) = v139 + 124;
                *(_DWORD *)(a1 + 284) = 4096;
                v141 = *((int **)v2 + 42);
                if ( v141[2] < 0 || (v141[3] & 0x400000) != 0 )
                {
                  if ( (v141[3] & 0x400000) != 0 )
                    *(_DWORD *)(a1 + 196) = v141[26];
                  else
                    *(_DWORD *)(a1 + 196) = *(_DWORD *)(v141[30] + 16);
                  v142 = *(_DWORD *)(a1 + 196);
                  *(_DWORD *)(a1 + 308) -= *(_DWORD *)(*(_DWORD *)(v142 + 68) + 24);
                  v143 = *(_DWORD *)(a1 + 316);
                  *(_DWORD *)(a1 + 312) -= *(_DWORD *)(*(_DWORD *)(v142 + 68) + 28);
                  *(_DWORD *)(a1 + 316) = v143 - *(_DWORD *)(*(_DWORD *)(v142 + 68) + 32);
                }
                v317 = (__int16 *)(*(_DWORD *)(a1 + 192) + 16);
                *(_DWORD *)(a1 + 124) = 0;
                RotMatrix(v317, (_WORD *)(a1 + 128));
                ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
                TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
                v144 = *(_DWORD *)(a1 + 20) | 0x40000000;
                *(_WORD *)(a1 + 266) = 0;
                *(_DWORD *)(a1 + 20) = v144;
                v342 = 1;
                *(_DWORD *)(*((_DWORD *)v2 + 42) + 20) |= 0x40000000u;
                *(_DWORD *)(*((_DWORD *)v2 + 42) + 52) = *(unsigned __int16 *)(a1 + 28);
                *(_DWORD *)(a1 + 52) = *(unsigned __int16 *)(*((_DWORD *)v2 + 42) + 28);
                *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFDE2 | 0x14;
              }
            }
          }
          v145 = *((_DWORD *)v2 + 42);
          if ( (*(_DWORD *)(v145 + 8) & 0x2000000) != 0 || *(_DWORD *)(a1 + 112) == v145 )
            goto LABEL_352;
          if ( (*((_DWORD *)v2 + 71) & 0x40000) != 0 )
          {
            v146 = *(_WORD *)(a1 + 228) - *(_WORD *)(v145 + 228);
            v2[4] = v146;
            v147 = *(_WORD *)(a1 + 236) - *(_WORD *)(*((_DWORD *)v2 + 42) + 236);
            v2[6] = v147;
            *((_DWORD *)v2 + 69) = ratan2(v146, v147);
            v148 = *((_DWORD *)v2 + 42);
            v149 = *(_DWORD *)(v148 + 112);
            if ( v149 != 0 )
              *(_WORD *)(v148 + 302) = v2[138] - *(_WORD *)(v149 + 222) + 2048;
            *(_WORD *)(*((_DWORD *)v2 + 42) + 222) = v2[138] + 2048;
            *(_WORD *)(*((_DWORD *)v2 + 42) + 402) = 4096;
            v150 = BugsRand();
            *((_DWORD *)v2 + 70) = v150;
            if ( v150 >= 0 )
              v151 = (v150 & 0x1FF) + *((_DWORD *)v2 + 69);
            else
              v151 = *((_DWORD *)v2 + 69) - (v150 & 0x1FF);
            *((_DWORD *)v2 + 69) = v151;
            v152 = *(_DWORD *)(a1 + 112);
            if ( v152 != 0 )
              *(_WORD *)(a1 + 302) = v2[138] - *(_WORD *)(v152 + 222);
            *(_WORD *)(a1 + 222) = v2[138];
            *(_WORD *)(a1 + 402) = 4096;
            v2[2] = *(_WORD *)(*((_DWORD *)v2 + 43) + 20);
            RotMatrix((__int16 *)(a1 + 220), v2 + 52);
            gte_ApplyMatrix((__int16 *)v2 + 52, (__int16 *)v2, (int *)v2 + 8);
LABEL_352:
            *(_DWORD *)(a1 + 20) |= 0x40000000u;
            *(_DWORD *)(*((_DWORD *)v2 + 42) + 20) |= 0x40000000u;
            goto LABEL_353;
          }
          if ( v145 != dword_4B324C )
          {
            *((_DWORD *)v2 + 48) = (__int16)v2[4] + *(_DWORD *)(a1 + 228);
            v306 = (__int16)v2[6];
            *((_DWORD *)v2 + 49) = *(_DWORD *)(a1 + 232);
            *((_DWORD *)v2 + 50) = v306 + *(_DWORD *)(a1 + 236);
            v2[73] = *(_WORD *)(a1 + 38);
            sub_436D90((_DWORD *)v2 + 48, (int)(v2 + 68), (int)v328);
            *(_DWORD *)(a1 + 20) |= 0x40000000u;
            *(_DWORD *)(*((_DWORD *)v2 + 42) + 20) |= 0x40000000u;
            v307 = *((_DWORD *)v2 + 43);
            if ( ((_BYTE)v2[69] & ((~*(_DWORD *)(v307 + 12) & 0x80000 | 0x40000u) >> 16)) == 0 )
            {
              v308 = *(_DWORD *)(a1 + 8);
              if ( (v308 & 0x2000000) == 0 )
              {
                v309 = *(_DWORD *)(*((_DWORD *)v2 + 42) + 8);
                if ( (v309 & 0x20100) != 0 )
                {
                  if ( *(_DWORD *)(a1 + 112) == 0
                    && (v309 & 8) != 0
                    && (v310 = v2[5]) > -100
                    && ((v308 & 0x40000) != 0 || (*(_DWORD *)(v307 + 16) & 0x20000000) != 0) )
                  {
                    *((_DWORD *)v2 + 9) += v310;
                  }
                  else
                  {
                    v311 = (__int16)v2[6];
                    *((_DWORD *)v2 + 8) = (__int16)v2[4];
                    *((_DWORD *)v2 + 10) = v311;
                  }
                }
              }
            }
          }
        }
      }
LABEL_353:
      if ( (v2[142] & 0x10) == 0 || v342 != 0 )
      {
LABEL_395:
        v183 = v2 + 16;
        if ( (*((_DWORD *)v2 + 8) | *((_DWORD *)v2 + 9) | (*((_DWORD *)v2 + 10) != 0)) != 0 )
        {
          v184 = *((_DWORD *)v2 + 71);
          if ( v184 < 0
            || ((v185 = *(_DWORD *)(*((_DWORD *)v2 + 43) + 16)) & 0x20002) != 0
            || *(_DWORD *)(a1 + 112) != 0 )
          {
            if ( (v184 & 0x40000000) != 0 )
            {
              *((_DWORD *)v2 + 12) = *(_DWORD *)(a1 + 228);
              *((_DWORD *)v2 + 13) = *(_DWORD *)(a1 + 232);
              *((_DWORD *)v2 + 14) = *(_DWORD *)(a1 + 236);
              *((_DWORD *)v2 + 12) += *v183;
              *((_DWORD *)v2 + 13) += *((_DWORD *)v2 + 9);
              *((_DWORD *)v2 + 14) += *((_DWORD *)v2 + 10);
              v2[73] = *(_WORD *)(a1 + 38);
              sub_436D90((_DWORD *)v2 + 12, (int)(v2 + 68), (int)v328);
              *(_WORD *)(a1 + 38) = v2[73];
            }
          }
          else
          {
            sub_4380B0(a1, v2 + 16, v184, v185, (int)v328);
          }
        }
        if ( *((int *)v2 + 71) >= 0 || (*(_BYTE *)(*((_DWORD *)v2 + 43) + 16) & 4) != 0 || *(_DWORD *)(a1 + 196) != 0 )
        {
          *((_DWORD *)v2 + 69) = *v183 + *((_DWORD *)v2 + 10);
          *((_DWORD *)v2 + 70) = *((_DWORD *)v2 + 9);
          sub_437500(a1, (_DWORD *)v2 + 8, (int)(v2 + 68), (int)v328);
          if ( (*(_BYTE *)(*((_DWORD *)v2 + 43) + 16) & 4) != 0 || *((int *)v2 + 71) < 0 )
            *((_DWORD *)v2 + 9) = 0;
          *((_DWORD *)v2 + 9) += *((_DWORD *)v2 + 70);
          if ( (v2[69] & 8) != 0 )
          {
            v186 = *(_DWORD *)(a1 + 24);
            LOBYTE(v186) = v186 | 0x20;
            *(_DWORD *)(a1 + 24) = v186;
          }
          if ( *((_DWORD *)v2 + 69) != *v183 + *((_DWORD *)v2 + 10) )
            *(_DWORD *)(a1 + 20) |= 0x100000u;
        }
        goto LABEL_412;
      }
      v153 = *(_DWORD *)(a1 + 20);
      if ( (((~(unsigned __int16)*(_DWORD *)(*((_DWORD *)v2 + 43) + 16) & 0x800 | 0x24u) >> 2) & v153) == 0 )
      {
        if ( (v153 & 0x10) != 0 )
        {
          *((_DWORD *)v2 + 12) = *(_DWORD *)(a1 + 228) - *(_DWORD *)(*(_DWORD *)(a1 + 112) + 228);
          *((_DWORD *)v2 + 13) = 0;
          *((_DWORD *)v2 + 14) = *(_DWORD *)(a1 + 236) - *(_DWORD *)(*(_DWORD *)(a1 + 112) + 236);
          *((_DWORD *)v2 + 60) = *(_DWORD *)(*(_DWORD *)(a1 + 112) + 228);
          *((_DWORD *)v2 + 62) = *(_DWORD *)(*(_DWORD *)(a1 + 112) + 236);
          *((_DWORD *)v2 + 61) = *(_DWORD *)(a1 + 232);
          v2[73] = *(_WORD *)(a1 + 38);
          sub_434E40((_DWORD *)v2 + 60, (_DWORD *)v2 + 12, (int)(v2 + 68), (int)v328);
          v154 = *(_DWORD *)(a1 + 112);
          *(_DWORD *)(a1 + 228) = *((_DWORD *)v2 + 12) + *(_DWORD *)(v154 + 228);
          *(_DWORD *)(a1 + 236) = *((_DWORD *)v2 + 14) + *(_DWORD *)(v154 + 236);
        }
        if ( (*((_DWORD *)v2 + 71) & 0x8000000) != 0 && (*(_BYTE *)(a1 + 20) & 0x12) != 0 )
        {
          v155 = (__int16)++*(_WORD *)(a1 + 404) * *(__int16 *)(*((_DWORD *)v2 + 43) + 24);
          *((_DWORD *)v2 + 70) = v155;
          if ( v155 >= 1024 )
          {
            *(_DWORD *)(a1 + 20) = (unsigned int)&unk_800000 | *(_DWORD *)(a1 + 20) & 0xFFF7EFFF;
            goto LABEL_392;
          }
          v156 = *(_DWORD *)(a1 + 112);
          if ( v156 != 0 && *(_DWORD *)(v156 + 108) == a1 )
            *(_DWORD *)(v156 + 108) = 0;
          *(_DWORD *)(a1 + 112) = 0;
          v157 = *(_DWORD *)(a1 + 20) & 0xFFFFFFE9 | 2;
          *(_DWORD *)(a1 + 196) = 0;
          *(_DWORD *)(a1 + 192) = a1 + 204;
          *(_DWORD *)(a1 + 20) = v157;
          v318 = (__int16 *)(*(_DWORD *)(a1 + 192) + 16);
          *(_DWORD *)(a1 + 124) = 0;
          RotMatrix(v318, (_WORD *)(a1 + 128));
          ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
          TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
          v158 = *((_DWORD *)v2 + 70);
          v159 = *(_WORD *)(*((_DWORD *)v2 + 43) + 26);
          *(_WORD *)(a1 + 264) = 1024;
          *(_WORD *)(a1 + 260) = v159;
          v160 = *(_DWORD *)(a1 + 20);
          *(_WORD *)(a1 + 266) = 0;
          v161 = v160 & 0xEFFFF9F1;
          *(_WORD *)(a1 + 262) = v158;
          LOBYTE(v161) = v161 | 1;
LABEL_391:
          *(_DWORD *)(a1 + 20) = v161;
          goto LABEL_392;
        }
        v162 = (*(_DWORD *)(a1 + 8) & 0x8000000) != 0 || (*(_DWORD *)(*((_DWORD *)v2 + 43) + 16) & 0x100) != 0;
        *((_DWORD *)v2 + 69) = v162;
        if ( v162 )
        {
          *((_DWORD *)v2 + 42) = dword_4B324C;
        }
        else
        {
          if ( (*(_DWORD *)(a1 + 8) & 0x10000000) == 0 && (*(_DWORD *)(*((_DWORD *)v2 + 43) + 16) & 0x100000) == 0 )
          {
            *(_DWORD *)(a1 + 196) = 0;
            *(_DWORD *)(a1 + 192) = a1 + 204;
            v163 = *(_DWORD *)(a1 + 112);
            if ( v163 != 0 && *(_DWORD *)(v163 + 108) == a1 )
              *(_DWORD *)(v163 + 108) = 0;
            *(_DWORD *)(a1 + 112) = 0;
            *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFE9 | 2;
            v164 = (__int16 *)(*(_DWORD *)(a1 + 192) + 16);
            *(_DWORD *)(a1 + 124) = 0;
            RotMatrix(v164, (_WORD *)(a1 + 128));
            ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
            TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
            v165 = *((_DWORD *)v2 + 43);
            v166 = *(_WORD *)(v165 + 26);
            LOWORD(v165) = *(_WORD *)(v165 + 24);
            *(_WORD *)(a1 + 264) = 1024;
            *(_WORD *)(a1 + 260) = v166;
            v167 = *(_DWORD *)(a1 + 20);
            *(_WORD *)(a1 + 266) = 0;
            *(_WORD *)(a1 + 262) = v165;
            *(_DWORD *)(a1 + 20) = v167 & 0xEFFFF9F0 | 1;
            goto LABEL_392;
          }
          v168 = dword_4B39AC;
          *((_DWORD *)v2 + 42) = dword_4B39AC;
          if ( v168 != 0 )
          {
            do
            {
              v169 = *((_DWORD *)v2 + 42);
              if ( *(unsigned __int16 *)(v169 + 28) == *(__int16 *)(*((_DWORD *)v2 + 43) + 22)
                && (*(_DWORD *)(v169 + 20) & 0x100) == 0 )
              {
                break;
              }
              v170 = *(_DWORD *)(v169 + 16);
              *((_DWORD *)v2 + 42) = v170;
            }
            while ( v170 != 0 );
          }
        }
        v171 = *((_DWORD *)v2 + 42);
        if ( v171 != 0 )
        {
          v172 = *((_DWORD *)v2 + 42);
          v2[8] = *(_WORD *)(v171 + 228) - *(_WORD *)(a1 + 228);
          v173 = *(_WORD *)(v172 + 236) - *(_WORD *)(a1 + 236);
          v174 = (__int16)v2[8];
          v2[10] = v173;
          v175 = SquareRoot0(v173 * v173 + v174 * v174);
          v176 = *((_DWORD *)v2 + 42);
          *((_DWORD *)v2 + 41) = v175;
          *((_DWORD *)v2 + 41) = v175
                               - *(__int16 *)(*((_DWORD *)v2 + 43) + 20)
                               * ((*(_DWORD *)(v176 + 232) + (*(__int16 *)(v176 + 82) >> 1) - *(_DWORD *)(a1 + 232))
                                / 70);
          v177 = *(_DWORD *)(a1 + 112);
          if ( v177 != 0 && *(_DWORD *)(v177 + 108) == a1 )
            *(_DWORD *)(v177 + 108) = 0;
          *(_DWORD *)(a1 + 112) = 0;
          v178 = *(_DWORD *)(a1 + 20) & 0xFFFFFFE9 | 2;
          *(_DWORD *)(a1 + 196) = 0;
          *(_DWORD *)(a1 + 192) = a1 + 204;
          *(_DWORD *)(a1 + 20) = v178;
          v319 = (__int16 *)(*(_DWORD *)(a1 + 192) + 16);
          *(_DWORD *)(a1 + 124) = 0;
          RotMatrix(v319, (_WORD *)(a1 + 128));
          ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
          TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
          v179 = *((_DWORD *)v2 + 41);
          if ( v179 > 0
            && (v180 = v179 / *(__int16 *)(*((_DWORD *)v2 + 43) + 20), *((_DWORD *)v2 + 41) = v180, v180 != 0) )
          {
            v181 = *((_DWORD *)v2 + 43);
            *((_DWORD *)v2 + 41) = 2048 / v180;
            v182 = *(_WORD *)(v181 + 26);
            *(_WORD *)(a1 + 264) = 1024;
            *(_WORD *)(a1 + 262) = 2048 / v180;
            *(_WORD *)(a1 + 260) = v182;
            v161 = *(_DWORD *)(a1 + 20) & 0xEFFFF9F1;
            *(_WORD *)(a1 + 266) = 0;
            LOBYTE(v161) = v161 | 1;
          }
          else
          {
            v161 = *(_DWORD *)(a1 + 20);
            BYTE1(v161) |= 2u;
          }
          goto LABEL_391;
        }
      }
LABEL_392:
      if ( (v2[142] & 0x10) != 0 && (*(_BYTE *)(a1 + 20) & 1) != 0 )
        sub_43A3C0(a1);
      goto LABEL_395;
    }
  }
LABEL_412:
  if ( *(_DWORD *)(a1 + 196) != 0 )
  {
    v187 = *(_DWORD *)(a1 + 112);
    if ( v187 != 0 && (*(_DWORD *)(v187 + 20) & 0x100) != 0 )
    {
      v14 = *(_DWORD *)(a1 + 24);
      if ( (v14 & 0x400) != 0 )
      {
        *(_DWORD *)(a1 + 20) |= 0x100u;
        return v14;
      }
      *(_DWORD *)(a1 + 112) = 0;
      v188 = *(_DWORD *)(a1 + 20);
      LOBYTE(v188) = v188 & 0xEB;
      *(_DWORD *)(a1 + 196) = 0;
      *(_DWORD *)(a1 + 192) = a1 + 204;
      *(_DWORD *)(a1 + 20) = v188 | 0x202;
      v320 = (__int16 *)(*(_DWORD *)(a1 + 192) + 16);
      *(_DWORD *)(a1 + 124) = 0;
      RotMatrix(v320, (_WORD *)(a1 + 128));
      ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
      TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
    }
    v189 = *(_DWORD *)(a1 + 112);
    if ( v189 != 0 )
    {
      *(_WORD *)(a1 + 38) = *(_WORD *)(v189 + 38);
      v190 = *(_DWORD *)(v189 + 24);
      BYTE1(v190) |= 8u;
      *(_DWORD *)(v189 + 24) = v190;
    }
    v191 = *(_DWORD *)(a1 + 20);
    if ( (v191 & 0x10) != 0 )
    {
      v192 = *(_DWORD *)(a1 + 112);
      if ( *(int *)(v192 + 8) < 0 || (*(_DWORD *)(v192 + 12) & 0x400000) != 0 )
        *(_DWORD *)(a1 + 312) = *(__int16 *)(v192 + 82) - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 196) + 68) + 28) + 4;
      else
        *(_DWORD *)(a1 + 312) = *(__int16 *)(v192 + 82) + 4;
      *(_DWORD *)(a1 + 20) = v191 | 0x40000000;
      *(_DWORD *)(*(_DWORD *)(a1 + 112) + 20) |= 0x40000000u;
      v193 = *(_DWORD *)(a1 + 112);
      if ( *(_DWORD *)(v193 + 52) == 0 )
        *(_DWORD *)(v193 + 52) = *(unsigned __int16 *)(a1 + 28);
      if ( *(_DWORD *)(a1 + 52) == 0 )
        *(_DWORD *)(a1 + 52) = *(unsigned __int16 *)(*(_DWORD *)(a1 + 112) + 28);
    }
    v2[41] = 0;
    v2[40] = 0;
    v2[42] = 4096;
    v2[116] = 0;
    v2[117] = 0;
    v2[118] = 0;
    *((_DWORD *)v2 + 57) = a1 + 124;
    if ( a1 != -124 )
    {
      v194 = v2 + 120;
      do
      {
        gte_ApplyMatrix((__int16 *)(*((_DWORD *)v2 + 57) + 4), (__int16 *)v2 + 116, (int *)v2 + 60);
        gte_ApplyMatrixSV((__int16 *)(*((_DWORD *)v2 + 57) + 4), (__int16 *)v2 + 40, (_DWORD *)v2 + 20);
        *v194 += *(_DWORD *)(*((_DWORD *)v2 + 57) + 24);
        v195 = *(_WORD *)v194;
        *((_DWORD *)v2 + 61) += *(_DWORD *)(*((_DWORD *)v2 + 57) + 28);
        *((_DWORD *)v2 + 62) += *(_DWORD *)(*((_DWORD *)v2 + 57) + 32);
        v196 = v2[122];
        v197 = v2[124];
        v2[116] = v195;
        v2[117] = v196;
        v2[118] = v197;
        v198 = *(_DWORD *)(*((_DWORD *)v2 + 57) + 72);
        *((_DWORD *)v2 + 57) = v198;
      }
      while ( v198 != 0 );
    }
    *(_WORD *)(a1 + 222) = ratan2((__int16)v2[40], (__int16)v2[42]);
    *(_WORD *)(a1 + 224) = 0;
    *(_WORD *)(a1 + 220) = 0;
    *(_DWORD *)(a1 + 228) = (__int16)v2[116];
    *(_DWORD *)(a1 + 232) = (__int16)v2[117];
    *(_DWORD *)(a1 + 236) = (__int16)v2[118];
  }
  v199 = *(_DWORD *)(a1 + 20);
  if ( (v199 & 0x10) != 0 )
  {
    v200 = *(_DWORD *)(a1 + 112);
    v201 = *(_DWORD *)(v200 + 20);
    if ( (v201 & 0x100) != 0 || (*(_BYTE *)(v200 + 8) & 8) == 0 )
    {
      *(_DWORD *)(a1 + 112) = 0;
      v212 = *(_DWORD *)(a1 + 20) & 0xFFFFFFE9 | 2;
      *(_DWORD *)(a1 + 196) = 0;
      *(_DWORD *)(a1 + 192) = a1 + 204;
      *(_DWORD *)(a1 + 20) = v212;
      v321 = (__int16 *)(*(_DWORD *)(a1 + 192) + 16);
      *(_DWORD *)(a1 + 124) = 0;
      RotMatrix(v321, (_WORD *)(a1 + 128));
      ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
      TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
      v213 = *(_DWORD *)(a1 + 20);
      BYTE1(v213) |= 2u;
      *(_DWORD *)(a1 + 20) = v213;
    }
    else if ( (v201 & 0x1000) != 0 )
    {
      v202 = v199 & 0xFFFFF7E9;
      BYTE1(v202) |= 0x10u;
      *(_DWORD *)(a1 + 20) = v202;
      *((_DWORD *)v2 + 48) = *(_DWORD *)(*(_DWORD *)(a1 + 112) + 228);
      *((_DWORD *)v2 + 49) = *(_DWORD *)(a1 + 232);
      *((_DWORD *)v2 + 50) = *(_DWORD *)(*(_DWORD *)(a1 + 112) + 236);
      *((_DWORD *)v2 + 60) = *(_DWORD *)(a1 + 228) - *(_DWORD *)(*(_DWORD *)(a1 + 112) + 228);
      *((_DWORD *)v2 + 62) = *(_DWORD *)(a1 + 236) - *(_DWORD *)(*(_DWORD *)(a1 + 112) + 236);
      *((_DWORD *)v2 + 61) = 0;
      v2[73] = *(_WORD *)(a1 + 38);
      sub_434E40((_DWORD *)v2 + 48, (_DWORD *)v2 + 60, (int)(v2 + 68), (int)v328);
      v203 = *(_DWORD *)(a1 + 112);
      *(_DWORD *)(a1 + 228) = *((_DWORD *)v2 + 60) + *(_DWORD *)(v203 + 228);
      v204 = *(_DWORD *)(v203 + 236);
      v205 = *((_DWORD *)v2 + 62);
      *(_DWORD *)(a1 + 196) = 0;
      *(_DWORD *)(a1 + 236) = v205 + v204;
      *(_DWORD *)(a1 + 192) = a1 + 204;
      *(_WORD *)(a1 + 220) = *(_WORD *)(v203 + 220);
      *(_WORD *)(a1 + 222) = *(_WORD *)(v203 + 222);
      LOWORD(v204) = *(_WORD *)(*(_DWORD *)(a1 + 112) + 224);
      *(_DWORD *)(a1 + 112) = 0;
      *(_WORD *)(a1 + 224) = v204;
      v206 = (__int16 *)(*(_DWORD *)(a1 + 192) + 16);
      *(_DWORD *)(a1 + 124) = 0;
      RotMatrix(v206, (_WORD *)(a1 + 128));
      ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
      TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
    }
    else if ( sub_4343A0((_WORD *)a1, v200, (int)v328) == 0 )
    {
      *((_DWORD *)v2 + 12) = *(_DWORD *)(a1 + 228) - *(_DWORD *)(*(_DWORD *)(a1 + 112) + 228);
      *((_DWORD *)v2 + 13) = 0;
      *((_DWORD *)v2 + 14) = *(_DWORD *)(a1 + 236) - *(_DWORD *)(*(_DWORD *)(a1 + 112) + 236);
      *((_DWORD *)v2 + 60) = *(_DWORD *)(*(_DWORD *)(a1 + 112) + 228);
      *((_DWORD *)v2 + 61) = *(_DWORD *)(*(_DWORD *)(a1 + 112) + 232);
      *((_DWORD *)v2 + 62) = *(_DWORD *)(*(_DWORD *)(a1 + 112) + 236);
      *((_DWORD *)v2 + 61) = *(_DWORD *)(a1 + 232);
      v2[73] = *(_WORD *)(a1 + 38);
      sub_434E40((_DWORD *)v2 + 60, (_DWORD *)v2 + 12, (int)(v2 + 68), (int)v328);
      v207 = *(_DWORD *)(a1 + 112);
      *(_DWORD *)(a1 + 228) = *((_DWORD *)v2 + 12) + *(_DWORD *)(v207 + 228);
      v208 = *(_DWORD *)(v207 + 236);
      v209 = *((_DWORD *)v2 + 14);
      *(_DWORD *)(a1 + 112) = 0;
      v210 = *(_DWORD *)(a1 + 20) & 0xFFFFFFEB;
      BYTE1(v210) |= 2u;
      *(_DWORD *)(a1 + 236) = v209 + v208;
      *(_WORD *)(a1 + 224) = 0;
      *(_DWORD *)(a1 + 196) = 0;
      *(_DWORD *)(a1 + 192) = a1 + 204;
      *(_DWORD *)(a1 + 20) = v210;
      v211 = *(_DWORD *)(a1 + 192);
      *(_DWORD *)(a1 + 124) = 0;
      RotMatrix((__int16 *)(v211 + 16), (_WORD *)(a1 + 128));
      ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
      TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
    }
  }
  v214 = *((_DWORD *)v2 + 43);
  if ( (*(_BYTE *)(v214 + 12) & 1) == 0 || (*(_BYTE *)(v214 + 16) & 4) != 0 || *(_DWORD *)(a1 + 196) != 0 )
  {
    if ( *(_DWORD *)(a1 + 196) != 0 )
    {
      v2[118] = 0;
      v2[116] = 0;
      v2[117] = -*(_WORD *)(*(_DWORD *)(a1 + 112) + 222);
      RotMatrix((__int16 *)v2 + 116, v2 + 52);
      ApplyMatrixLV((__int16 *)v2 + 52, (_DWORD *)v2 + 8, (int *)v2 + 8);
      v215 = *(_DWORD *)(a1 + 312);
      v216 = *(_DWORD *)(a1 + 316);
      *(_DWORD *)(a1 + 308) += *((_DWORD *)v2 + 8);
      *(_DWORD *)(a1 + 312) = *((_DWORD *)v2 + 9) + v215;
      *(_DWORD *)(a1 + 316) = *((_DWORD *)v2 + 10) + v216;
      v322 = (__int16 *)(*(_DWORD *)(a1 + 192) + 16);
      *(_DWORD *)(a1 + 124) = 0;
      RotMatrix(v322, (_WORD *)(a1 + 128));
      ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
      TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
      v217 = (__int16 *)(a1 + 124);
      v330 = (__int16 *)(a1 + 124);
      v336 = 0;
      v337 = 0;
      v338 = 0;
      if ( a1 != -124 )
      {
        do
        {
          gte_ApplyMatrix(v217 + 2, &v336, &v339);
          v339 += *((_DWORD *)v330 + 6);
          v340 += *((_DWORD *)v330 + 7);
          v218 = *((_DWORD *)v330 + 8);
          v336 = v339;
          v341 += v218;
          v337 = v340;
          v338 = v341;
          v330 = *((__int16 **)v330 + 18);
          v217 = v330;
        }
        while ( v330 != NULL );
      }
      v219 = v340;
      v220 = v341;
      *(_DWORD *)(a1 + 228) = v339;
      *(_DWORD *)(a1 + 232) = v219;
      *(_DWORD *)(a1 + 236) = v220;
      v323 = (__int16 *)(*(_DWORD *)(a1 + 192) + 16);
      *(_DWORD *)(a1 + 124) = 0;
      RotMatrix(v323, (_WORD *)(a1 + 128));
      ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
      TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
    }
    else
    {
      v221 = *(_DWORD *)(a1 + 232);
      v222 = *(_DWORD *)(a1 + 236);
      *(_DWORD *)(a1 + 228) += *((_DWORD *)v2 + 8);
      v223 = *(_DWORD *)(a1 + 120);
      *(_DWORD *)(a1 + 232) = *((_DWORD *)v2 + 9) + v221;
      *(_DWORD *)(a1 + 236) = *((_DWORD *)v2 + 10) + v222;
      if ( v223 != 0 && (*(_DWORD *)(a1 + 8) & 0x200000) == 0 )
      {
        v224 = (_DWORD *)(*(_DWORD *)(a1 + 192) + 24);
        *(_DWORD *)(a1 + 124) = 0;
        TransMatrix((_DWORD *)(a1 + 128), v224);
        RotMatrix((__int16 *)(*(_DWORD *)(a1 + 192) + 16), (_WORD *)(a1 + 128));
        ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 12) & 0x200) != 0 )
    byte_4B2261 = (*(__int16 *)(a1 + 30) << 7) / word_4B3BA0;
  v225 = *((_DWORD *)v2 + 43);
  if ( *(_WORD *)(v225 + 10) != 0 )
  {
    v226 = *(unsigned __int16 *)(v225 + 30) + *(_DWORD *)(a1 + 252);
    *((_DWORD *)v2 + 53) = 0;
    *((_DWORD *)v2 + 44) = v226;
    *((_DWORD *)v2 + 54) = 0;
    *((_DWORD *)v2 + 55) = -1;
    *((_DWORD *)v2 + 45) = v226;
    if ( v226 != 0 )
    {
      do
      {
        v227 = *((_DWORD *)v2 + 45);
        if ( *(_WORD *)(v227 + 4) != *(_WORD *)(*((_DWORD *)v2 + 43) + 10) )
          break;
        v228 = *((_DWORD *)v2 + 45);
        v2[112] = *(_WORD *)(v227 + 6);
        v229 = v228;
        v230 = *(_DWORD *)(v228 + 24);
        *((_DWORD *)v2 + 71) = v230;
        v231 = *(_DWORD *)(v228 + 8);
        if ( v231 == 0 || (v231 & *(_DWORD *)(a1 + 20)) != 0 )
        {
          v232 = *(_DWORD *)(v229 + 12);
          if ( v232 == 0 || (v232 & *(_DWORD *)(a1 + 24)) != 0 )
          {
            if ( v230 != 0 )
            {
              if ( (v230 & 0x40) != 0 )
              {
                if ( *(_DWORD *)(v229 + 28) != *(unsigned __int16 *)(a1 + 326) || *(_BYTE *)(a1 + 332) != 0 )
                  goto LABEL_603;
              }
              else if ( (v230 & 4) != 0 && ((*(_DWORD *)(a1 + 348) & 0x2000) == 0 || *(_BYTE *)(a1 + 332) != 0) )
              {
                goto LABEL_603;
              }
              if ( (v230 & 2) != 0 )
              {
                v229 = *((_DWORD *)v2 + 45);
                if ( *(_DWORD *)(v229 + 28) >= (unsigned int)(unsigned __int16)BugsRand() )
                  goto LABEL_603;
              }
              else if ( (v230 & 0x20000) != 0 )
              {
                v229 = *((_DWORD *)v2 + 45);
                if ( *(_DWORD *)(v229 + 32) >= (unsigned int)(unsigned __int16)BugsRand() )
                  goto LABEL_603;
              }
            }
            v233 = *(_BYTE *)(v229 + 16);
            v234 = (_BYTE *)(v229 + 16);
            if ( v233 != 0 && TestLogicCond(a1, v234) == 0 )
              goto LABEL_603;
            v235 = *((_DWORD *)v2 + 71);
            if ( (v235 & 0x2000) != 0 && *(_DWORD *)(a1 + 52) != *(_DWORD *)(*((_DWORD *)v2 + 45) + 32) )
              goto LABEL_603;
            if ( (v235 & 0x58400000) != 0 )
            {
              if ( (v235 & 0x8000000) != 0 )
              {
                v236 = *((_DWORD *)v2 + 53);
                *((_DWORD *)v2 + 42) = v236;
                if ( v236 != dword_4B324C )
                {
                  *((_DWORD *)v2 + 53) = dword_4B324C;
                  *((_DWORD *)v2 + 42) = dword_4B324C;
                  *((_DWORD *)v2 + 55) = -1;
                }
              }
              else if ( *((_DWORD *)v2 + 54) == *(_DWORD *)(*((_DWORD *)v2 + 45) + 32) )
              {
                *((_DWORD *)v2 + 42) = *((_DWORD *)v2 + 53);
              }
              else
              {
                v91 = dword_4B3740 == 0;
                *((_DWORD *)v2 + 42) = dword_4B3740;
                if ( !v91 )
                {
                  do
                  {
                    v237 = *((int **)v2 + 42);
                    if ( *((unsigned __int16 *)v237 + 14) == *(_DWORD *)(*((_DWORD *)v2 + 45) + 32)
                      && (v237[5] & 0x100) == 0 )
                    {
                      break;
                    }
                    v238 = *v237;
                    *((_DWORD *)v2 + 42) = v238;
                  }
                  while ( v238 != 0 );
                }
                v239 = *((_DWORD *)v2 + 45);
                *((_DWORD *)v2 + 53) = *((_DWORD *)v2 + 42);
                v240 = *(_DWORD *)(v239 + 32);
                *((_DWORD *)v2 + 55) = -1;
                *((_DWORD *)v2 + 54) = v240;
              }
              v241 = *((_DWORD *)v2 + 42);
              if ( v241 == 0 )
                goto LABEL_603;
              v242 = *((_DWORD *)v2 + 71);
              if ( (v242 & 0x400000) != 0 )
              {
                sub_437680(v241, *(_DWORD *)(*((_DWORD *)v2 + 45) + 28), v328);
              }
              else if ( (v242 & 0x18000000) != 0 )
              {
                *((_DWORD *)v2 + 12) = *(_DWORD *)(v241 + 228) - *(_DWORD *)(a1 + 228);
                *((_DWORD *)v2 + 14) = *(_DWORD *)(*((_DWORD *)v2 + 42) + 236) - *(_DWORD *)(a1 + 236);
                if ( (v2[142] & 1) != 0 )
                  *((_DWORD *)v2 + 13) = *(_DWORD *)(*((_DWORD *)v2 + 42) + 232) - *(_DWORD *)(a1 + 232);
                else
                  *((_DWORD *)v2 + 13) = 0;
                Square0((_DWORD *)v2 + 12, (_DWORD *)v2 + 12);
                v243 = SquareRoot0(*((_DWORD *)v2 + 12) + *((_DWORD *)v2 + 14) + *((_DWORD *)v2 + 13));
                v244 = *((_DWORD *)v2 + 71);
                *((_DWORD *)v2 + 55) = v243;
                *((_DWORD *)v2 + 41) = v243;
                if ( (v244 & 0x200000) != 0 )
                {
                  if ( v243 < *(_DWORD *)(*((_DWORD *)v2 + 45) + 28) )
                    goto LABEL_603;
                }
                else if ( v243 > *(_DWORD *)(*((_DWORD *)v2 + 45) + 28) )
                {
                  goto LABEL_603;
                }
              }
              else if ( (v242 & 0x40000000) != 0
                     && *(unsigned __int16 *)(v241 + 326) != *(_DWORD *)(*((_DWORD *)v2 + 45) + 28) )
              {
                goto LABEL_603;
              }
            }
            v245 = *((_DWORD *)v2 + 45);
            if ( *(_BYTE *)(v245 + 19) != 0 )
              RunLogicAction(a1, v245 + 16);
            v246 = *((_DWORD *)v2 + 71);
            if ( v246 == 0 )
              goto LABEL_607;
            if ( (v246 & 8) != 0 )
            {
              v247 = *(_DWORD *)(a1 + 112);
              if ( v247 != 0 )
              {
                if ( *(_DWORD *)(v247 + 108) == a1 )
                  *(_DWORD *)(v247 + 108) = 0;
                v336 = 0;
                v248 = (__int16 *)(a1 + 124);
                v337 = 0;
                v331 = (__int16 *)(a1 + 124);
                v338 = 0;
                if ( a1 != -124 )
                {
                  do
                  {
                    gte_ApplyMatrix(v248 + 2, &v336, &v339);
                    v339 += *((_DWORD *)v331 + 6);
                    v340 += *((_DWORD *)v331 + 7);
                    v341 += *((_DWORD *)v331 + 8);
                    v336 = v339;
                    v337 = v340;
                    v338 = v341;
                    v331 = *((__int16 **)v331 + 18);
                    v248 = v331;
                  }
                  while ( v331 != NULL );
                }
                v249 = v339;
                *(_DWORD *)(a1 + 192) = a1 + 204;
                v250 = v340;
                *(_DWORD *)(a1 + 228) = v249;
                v251 = v341;
                *(_DWORD *)(a1 + 232) = v250;
                *(_DWORD *)(a1 + 196) = 0;
                *(_DWORD *)(a1 + 236) = v251;
                *(_DWORD *)(a1 + 112) = 0;
                v324 = (__int16 *)(*(_DWORD *)(a1 + 192) + 16);
                *(_DWORD *)(a1 + 124) = 0;
                RotMatrix(v324, (_WORD *)(a1 + 128));
                ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
                TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
              }
            }
            v252 = *((_DWORD *)v2 + 71);
            if ( (v252 & 0x600) != 0 )
            {
              if ( (v252 & 0x200) != 0 )
              {
                sub_41DF30(a1, *(_DWORD *)(*((_DWORD *)v2 + 45) + 28), 1, dword_4B2368);
              }
              else if ( (v252 & 0x400) != 0 )
              {
                sub_41DF30(a1, *(_DWORD *)(*((_DWORD *)v2 + 45) + 28), 2, dword_4B2368);
              }
            }
            v253 = *((_DWORD *)v2 + 71);
            if ( (v253 & 0x24041120) != 0 )
            {
              if ( (v253 & 0x40100) != 0 )
              {
                v254 = a1 + 88;
                if ( *(_DWORD *)(a1 + 104) == 0 )
                  v254 = a1 + 228;
                v255 = sub_448EB0(*(_WORD *)(*((_DWORD *)v2 + 45) + 32), v254, a1 + 220);
                *((_DWORD *)v2 + 52) = v255;
                if ( v255 != 0 )
                {
                  if ( (*((_DWORD *)v2 + 71) & 0x1000000) != 0 )
                    *(_WORD *)(v255 + 30) = *(_WORD *)(a1 + 30);
                  if ( *((char *)v2 + 284) >= 0 )
                  {
                    v262 = *(_DWORD *)(a1 + 104);
                    if ( v262 != 0 )
                    {
                      *(_DWORD *)(*((_DWORD *)v2 + 52) + 204) = **(_DWORD **)(v262 + 68);
                      *(_DWORD *)(*((_DWORD *)v2 + 52) + 208) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 104) + 68) + 4);
                      *(_DWORD *)(*((_DWORD *)v2 + 52) + 212) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 104) + 68) + 8);
                    }
                    *(_WORD *)(*((_DWORD *)v2 + 52) + 38) = *(_WORD *)(a1 + 38);
                    if ( (*(_DWORD *)(*((_DWORD *)v2 + 45) + 24) & 0x40000) != 0 )
                      *(_WORD *)(*((_DWORD *)v2 + 52) + 222) = BugsRand() & 0xFFF;
                  }
                  else
                  {
                    *(_DWORD *)(*((_DWORD *)v2 + 52) + 308) = 0;
                    *(_DWORD *)(*((_DWORD *)v2 + 52) + 312) = 0;
                    *(_DWORD *)(*((_DWORD *)v2 + 52) + 316) = 0;
                    *(_WORD *)(*((_DWORD *)v2 + 52) + 300) = 0;
                    *(_WORD *)(*((_DWORD *)v2 + 52) + 302) = 0;
                    *(_WORD *)(*((_DWORD *)v2 + 52) + 304) = 0;
                    *(_DWORD *)(*((_DWORD *)v2 + 52) + 284) = 4096;
                    *(_DWORD *)(*((_DWORD *)v2 + 52) + 288) = 4096;
                    *(_DWORD *)(*((_DWORD *)v2 + 52) + 292) = 4096;
                    if ( *(_WORD *)(*((_DWORD *)v2 + 52) + 28) == 1 )
                    {
                      word_4B3C20 = -1;
                      dword_4B3748 |= 1u;
                    }
                    if ( (*((_DWORD *)v2 + 71) & 0x1000) != 0 )
                    {
                      *(_DWORD *)(*((_DWORD *)v2 + 52) + 196) = dword_4B324C + 124;
                      *(_WORD *)(*((_DWORD *)v2 + 52) + 38) = *(_WORD *)(dword_4B324C + 38);
                      *(_DWORD *)(*((_DWORD *)v2 + 52) + 112) = dword_4B324C;
                    }
                    else
                    {
                      v256 = *(_DWORD *)(a1 + 104);
                      if ( v256 != 0 )
                        *(_DWORD *)(*((_DWORD *)v2 + 52) + 196) = v256;
                      else
                        *(_DWORD *)(*((_DWORD *)v2 + 52) + 196) = a1 + 124;
                      *(_WORD *)(*((_DWORD *)v2 + 52) + 38) = *(_WORD *)(a1 + 38);
                      *(_DWORD *)(*((_DWORD *)v2 + 52) + 112) = a1;
                      v257 = *(_DWORD *)(a1 + 24);
                      BYTE1(v257) |= 8u;
                      *(_DWORD *)(a1 + 24) = v257;
                    }
                    *(_DWORD *)(*((_DWORD *)v2 + 52) + 192) = *((_DWORD *)v2 + 52) + 284;
                    *(_WORD *)(*((_DWORD *)v2 + 52) + 38) = *(_WORD *)(a1 + 38);
                    v258 = *((_DWORD *)v2 + 52) + 124;
                    v259 = (__int16 *)(*((_DWORD *)v2 + 52) + 128);
                    v325 = (__int16 *)(*(_DWORD *)(*((_DWORD *)v2 + 52) + 192) + 16);
                    *(_DWORD *)v258 = 0;
                    RotMatrix(v325, v259);
                    ScaleMatrix(v259, *(_DWORD **)(v258 + 68));
                    TransMatrix(v259, (_DWORD *)(*(_DWORD *)(v258 + 68) + 24));
                    v260 = *((_DWORD *)v2 + 52);
                    v91 = v260 == -124;
                    v261 = (_DWORD *)(v260 + 124);
                    v332 = v261;
                    v336 = 0;
                    v337 = 0;
                    v338 = 0;
                    if ( !v91 )
                    {
                      do
                      {
                        gte_ApplyMatrix((__int16 *)v261 + 2, &v336, &v339);
                        v339 += v332[6];
                        v340 += v332[7];
                        v341 += v332[8];
                        v336 = v339;
                        v337 = v340;
                        v338 = v341;
                        v332 = (_DWORD *)v332[18];
                        v261 = v332;
                      }
                      while ( v332 != NULL );
                    }
                    *(_DWORD *)(*((_DWORD *)v2 + 52) + 228) = v339;
                    *(_DWORD *)(*((_DWORD *)v2 + 52) + 232) = v340;
                    *(_DWORD *)(*((_DWORD *)v2 + 52) + 236) = v341;
                  }
                }
              }
              else if ( (v253 & 0x20000000) != 0 )
              {
                v91 = dword_4B3740 == 0;
                *((_DWORD *)v2 + 52) = dword_4B3740;
                if ( !v91 )
                {
                  do
                  {
                    v263 = *((int **)v2 + 52);
                    if ( *((unsigned __int16 *)v263 + 14) == *(_DWORD *)(*((_DWORD *)v2 + 45) + 32)
                      && (v263[5] & 0x100) == 0 )
                    {
                      break;
                    }
                    v264 = *v263;
                    *((_DWORD *)v2 + 52) = v264;
                  }
                  while ( v264 != 0 );
                }
                v265 = *((_DWORD *)v2 + 52);
                if ( v265 != 0 )
                {
                  if ( (*((_DWORD *)v2 + 71) & 0x1000000) != 0 )
                    *(_WORD *)(v265 + 30) = *(_WORD *)(a1 + 30);
                  *(_DWORD *)(*((_DWORD *)v2 + 52) + 308) = 0;
                  *(_DWORD *)(*((_DWORD *)v2 + 52) + 312) = 0;
                  *(_DWORD *)(*((_DWORD *)v2 + 52) + 316) = 0;
                  *(_WORD *)(*((_DWORD *)v2 + 52) + 300) = 0;
                  *(_WORD *)(*((_DWORD *)v2 + 52) + 302) = 0;
                  *(_WORD *)(*((_DWORD *)v2 + 52) + 304) = 0;
                  *(_DWORD *)(*((_DWORD *)v2 + 52) + 284) = 4096;
                  *(_DWORD *)(*((_DWORD *)v2 + 52) + 288) = 4096;
                  *(_DWORD *)(*((_DWORD *)v2 + 52) + 292) = 4096;
                  if ( *(_WORD *)(*((_DWORD *)v2 + 52) + 28) == 1 )
                  {
                    word_4B3C20 = -1;
                    dword_4B3748 |= 1u;
                  }
                  v266 = *((_DWORD *)v2 + 52);
                  v267 = *(_DWORD *)(v266 + 112);
                  if ( v267 != 0 )
                  {
                    if ( *(_DWORD *)(v267 + 108) == v266 )
                      *(_DWORD *)(v267 + 108) = 0;
                    v268 = *(_DWORD *)(a1 + 20);
                    LOBYTE(v268) = v268 & 0xEB;
                    *(_DWORD *)(a1 + 20) = v268;
                  }
                  if ( (*((_DWORD *)v2 + 71) & 0x1000) != 0 )
                  {
                    *(_DWORD *)(*((_DWORD *)v2 + 52) + 196) = dword_4B324C + 124;
                    *(_WORD *)(*((_DWORD *)v2 + 52) + 38) = *(_WORD *)(dword_4B324C + 38);
                    *(_DWORD *)(*((_DWORD *)v2 + 52) + 112) = dword_4B324C;
                  }
                  else
                  {
                    v269 = *(_DWORD *)(a1 + 104);
                    if ( v269 != 0 )
                      *(_DWORD *)(*((_DWORD *)v2 + 52) + 196) = v269;
                    else
                      *(_DWORD *)(*((_DWORD *)v2 + 52) + 196) = a1 + 124;
                    *(_WORD *)(*((_DWORD *)v2 + 52) + 38) = *(_WORD *)(a1 + 38);
                    *(_DWORD *)(*((_DWORD *)v2 + 52) + 112) = a1;
                    v270 = *(_DWORD *)(a1 + 24);
                    BYTE1(v270) |= 8u;
                    *(_DWORD *)(a1 + 24) = v270;
                  }
                  *(_DWORD *)(*((_DWORD *)v2 + 52) + 192) = *((_DWORD *)v2 + 52) + 284;
                  if ( *((char *)v2 + 284) >= 0 )
                    *(_DWORD *)(a1 + 108) = *((_DWORD *)v2 + 52);
                  *(_WORD *)(*((_DWORD *)v2 + 52) + 38) = *(_WORD *)(a1 + 38);
                  v271 = *((_DWORD *)v2 + 52) + 124;
                  v272 = (__int16 *)(*((_DWORD *)v2 + 52) + 128);
                  v326 = (__int16 *)(*(_DWORD *)(*((_DWORD *)v2 + 52) + 192) + 16);
                  *(_DWORD *)v271 = 0;
                  RotMatrix(v326, v272);
                  ScaleMatrix(v272, *(_DWORD **)(v271 + 68));
                  TransMatrix(v272, (_DWORD *)(*(_DWORD *)(v271 + 68) + 24));
                  v273 = *((_DWORD *)v2 + 52);
                  v91 = v273 == -124;
                  v274 = (_DWORD *)(v273 + 124);
                  v333 = v274;
                  v336 = 0;
                  v337 = 0;
                  v338 = 0;
                  if ( !v91 )
                  {
                    do
                    {
                      gte_ApplyMatrix((__int16 *)v274 + 2, &v336, &v339);
                      v339 += v333[6];
                      v340 += v333[7];
                      v341 += v333[8];
                      v336 = v339;
                      v337 = v340;
                      v338 = v341;
                      v333 = (_DWORD *)v333[18];
                      v274 = v333;
                    }
                    while ( v333 != NULL );
                  }
                  *(_DWORD *)(*((_DWORD *)v2 + 52) + 228) = v339;
                  *(_DWORD *)(*((_DWORD *)v2 + 52) + 232) = v340;
                  *(_DWORD *)(*((_DWORD *)v2 + 52) + 236) = v341;
                }
              }
              else if ( (v253 & 0x1000) != 0 )
              {
                *(_DWORD *)(a1 + 308) = 0;
                *(_DWORD *)(a1 + 312) = 0;
                *(_DWORD *)(a1 + 316) = 0;
                *(_WORD *)(a1 + 300) = 0;
                *(_WORD *)(a1 + 302) = 0;
                *(_WORD *)(a1 + 304) = 0;
                *(_DWORD *)(a1 + 284) = 4096;
                *(_DWORD *)(a1 + 288) = 4096;
                *(_DWORD *)(a1 + 292) = 4096;
                *(_DWORD *)(a1 + 236) = 0;
                *(_DWORD *)(a1 + 232) = 0;
                *(_DWORD *)(a1 + 228) = 0;
                *(_DWORD *)(a1 + 212) = 4096;
                *(_DWORD *)(a1 + 208) = 4096;
                *(_DWORD *)(a1 + 204) = 4096;
                v275 = (__int16 *)(a1 + 124);
                *(_DWORD *)(a1 + 196) = dword_4B324C + 124;
                *(_WORD *)(a1 + 38) = *(_WORD *)(dword_4B324C + 38);
                *(_DWORD *)(a1 + 112) = dword_4B324C;
                *(_DWORD *)(a1 + 192) = a1 + 284;
                *(_DWORD *)(a1 + 124) = 0;
                RotMatrix((__int16 *)(*(_DWORD *)(a1 + 192) + 16), (_WORD *)(a1 + 128));
                ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
                TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
                v334 = (__int16 *)(a1 + 124);
                v336 = 0;
                v337 = 0;
                v338 = 0;
                if ( a1 != -124 )
                {
                  do
                  {
                    gte_ApplyMatrix(v275 + 2, &v336, &v339);
                    v339 += *((_DWORD *)v334 + 6);
                    v340 += *((_DWORD *)v334 + 7);
                    v341 += *((_DWORD *)v334 + 8);
                    v336 = v339;
                    v337 = v340;
                    v338 = v341;
                    v334 = *((__int16 **)v334 + 18);
                    v275 = v334;
                  }
                  while ( v334 != NULL );
                }
                v276 = v340;
                v277 = v341;
                *(_DWORD *)(a1 + 228) = v339;
                *(_DWORD *)(a1 + 232) = v276;
                *(_DWORD *)(a1 + 236) = v277;
              }
              else if ( (v253 & 0x20) != 0 )
              {
                v278 = sub_4348B0((_WORD *)a1, (int)v328);
                *((_DWORD *)v2 + 69) = v278;
                if ( v278 == 1 )
                {
                  v2[112] = *(_WORD *)(*((_DWORD *)v2 + 45) + 28);
                }
                else
                {
                  if ( v278 != 2 )
                    goto LABEL_603;
                  v2[112] = *(_WORD *)(*((_DWORD *)v2 + 45) + 32);
                }
              }
              else if ( (v253 & 0x4000000) != 0 )
              {
                v279 = dword_4B3740;
                *((_DWORD *)v2 + 42) = dword_4B3740;
                if ( v279 != 0 )
                {
                  do
                  {
                    v280 = *((int **)v2 + 42);
                    if ( *((unsigned __int16 *)v280 + 14) == *(_DWORD *)(*((_DWORD *)v2 + 45) + 32)
                      && (v280[5] & 0x100) == 0 )
                    {
                      break;
                    }
                    v281 = *v280;
                    *((_DWORD *)v2 + 42) = v281;
                  }
                  while ( v281 != 0 );
                }
                v282 = *((_DWORD *)v2 + 42);
                if ( v282 != 0 )
                  *(_DWORD *)(v282 + 20) |= 0x100u;
              }
            }
            v283 = *((_DWORD *)v2 + 71);
            if ( (v283 & 0x82194800) != 0 )
            {
              if ( (v283 & 0x80000) != 0 )
              {
                *((_DWORD *)dword_52FD00 + 0x4000) = *(_DWORD *)(*((_DWORD *)v2 + 45) + 28);
                word_4B39BC = 1;
              }
              if ( *((int *)v2 + 71) < 0 )
                sub_437910(a1, *(_DWORD *)(*((_DWORD *)v2 + 45) + 32), v328);
              if ( (*((_DWORD *)v2 + 71) & 0x100000) != 0 )
              {
                dword_4B2460 = *(_DWORD *)(a1 + 228);
                dword_4B2464 = *(_DWORD *)(a1 + 232);
                dword_4B2468 = *(_DWORD *)(a1 + 236);
                dword_4B246C = *(__int16 *)(a1 + 222);
              }
              if ( (*((_DWORD *)v2 + 71) & 0x800) != 0 )
              {
                if ( *(_DWORD *)(a1 + 104) != 0 )
                  sub_437B20(*(_DWORD *)(a1 + 88), *(_DWORD *)(a1 + 92), *(_DWORD *)(a1 + 96));
                else
                  sub_437B20(*(_DWORD *)(a1 + 228), *(_DWORD *)(a1 + 232), *(_DWORD *)(a1 + 236));
                *(_WORD *)(dword_4B324C + 222) = *(_WORD *)(a1 + 222);
              }
              if ( (*((_DWORD *)v2 + 71) & 0x4000) != 0 )
              {
                v284 = *(_DWORD *)(a1 + 108);
                if ( v284 != 0 )
                {
                  *(_DWORD *)(v284 + 20) &= 0xFFFFF5F6;
                  v285 = *(_DWORD *)(a1 + 108);
                  v286 = *(_DWORD *)(v285 + 20);
                  BYTE1(v286) |= 0x10u;
                  *(_DWORD *)(v285 + 20) = v286;
                  v287 = *(_DWORD *)(a1 + 108);
                  v91 = v287 == -124;
                  v288 = (_DWORD *)(v287 + 124);
                  v336 = 0;
                  v335 = v288;
                  v337 = 0;
                  v338 = 0;
                  if ( !v91 )
                  {
                    do
                    {
                      gte_ApplyMatrix((__int16 *)v288 + 2, &v336, &v339);
                      v339 += v335[6];
                      v340 += v335[7];
                      v341 += v335[8];
                      v336 = v339;
                      v337 = v340;
                      v338 = v341;
                      v335 = (_DWORD *)v335[18];
                      v288 = v335;
                    }
                    while ( v335 != NULL );
                  }
                  *(_DWORD *)(*(_DWORD *)(a1 + 108) + 228) = v339;
                  *(_DWORD *)(*(_DWORD *)(a1 + 108) + 232) = v340;
                  *(_DWORD *)(*(_DWORD *)(a1 + 108) + 236) = v341;
                  *(_DWORD *)(*(_DWORD *)(a1 + 108) + 196) = 0;
                  *(_DWORD *)(*(_DWORD *)(a1 + 108) + 192) = *(_DWORD *)(a1 + 108) + 204;
                  *(_WORD *)(*(_DWORD *)(a1 + 108) + 38) = *(_WORD *)(a1 + 38);
                  *(_WORD *)(*(_DWORD *)(a1 + 108) + 224) = 0;
                  *(_WORD *)(*(_DWORD *)(a1 + 108) + 220) = 0;
                  *(_DWORD *)(*(_DWORD *)(a1 + 108) + 112) = 0;
                  v289 = *(_DWORD *)(a1 + 108) + 124;
                  v290 = (__int16 *)(*(_DWORD *)(a1 + 108) + 128);
                  v327 = (__int16 *)(*(_DWORD *)(*(_DWORD *)(a1 + 108) + 192) + 16);
                  *(_DWORD *)v289 = 0;
                  RotMatrix(v327, v290);
                  ScaleMatrix(v290, *(_DWORD **)(v289 + 68));
                  TransMatrix(v290, (_DWORD *)(*(_DWORD *)(v289 + 68) + 24));
                  *(_DWORD *)(a1 + 108) = 0;
                }
              }
              if ( (*((_DWORD *)v2 + 71) & 0x10000) != 0 )
              {
                v291 = *((_DWORD *)v2 + 45);
                if ( *(_DWORD *)(v291 + 32) != 1 )
                  goto LABEL_605;
                sub_437D00(*(_DWORD *)(v291 + 28), NULL);
              }
              v283 = *((_DWORD *)v2 + 71);
              if ( (v283 & 0x2000000) != 0 )
              {
LABEL_605:
                v14 = *(_DWORD *)(a1 + 20);
                BYTE1(v14) |= 1u;
                *(_DWORD *)(a1 + 20) = v14;
                return v14;
              }
            }
            if ( (v283 & 0x8000) == 0 )
            {
              if ( (v2[142] & 0x10) != 0 )
                break;
LABEL_607:
              v293 = *((_DWORD *)v2 + 43);
              if ( v293 != 0 )
                *((_DWORD *)v2 + 72) = *(unsigned __int16 *)(v293 + 6);
              else
                *((_DWORD *)v2 + 72) = 0;
              v294 = v2[112] + *(_DWORD *)(a1 + 244);
              *((_DWORD *)v2 + 46) = v294;
              *((_DWORD *)v2 + 43) = *(unsigned __int16 *)(v294 + 6) + *(_DWORD *)(a1 + 248);
              *(_DWORD *)(a1 + 384) = *((_DWORD *)v2 + 46);
              *(_DWORD *)(a1 + 388) = *((_DWORD *)v2 + 43);
              v295 = *((_DWORD *)v2 + 43);
              if ( (*(_BYTE *)(v295 + 8) & 0x40) == 0 || *(unsigned __int16 *)(v295 + 6) != *((_DWORD *)v2 + 72) )
                *(_DWORD *)(a1 + 344) = 0;
              *(_WORD *)(a1 + 380) = 0;
              *(_DWORD *)(a1 + 20) &= 0xF9FFFDF6;
              *(_WORD *)(a1 + 404) = 0;
              break;
            }
          }
        }
LABEL_603:
        v292 = **((_DWORD **)v2 + 45);
        *((_DWORD *)v2 + 45) = v292;
      }
      while ( v292 != 0 );
    }
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x1000000) != 0
    || ((unsigned int)&unk_800000 & *(_DWORD *)(*((_DWORD *)v2 + 43) + 16)) != 0 )
  {
    sub_438610(a1, v328);
  }
  v296 = *((_DWORD *)v2 + 43);
  v297 = *(unsigned __int16 *)(v296 + 6);
  if ( *(_DWORD *)(a1 + 344) == (unsigned __int16)v297 )
  {
    *((_DWORD *)v2 + 69) = sub_439550(a1, a1 + 324, 0, 0, (int)v328);
    *((_DWORD *)v2 + 70) = 1;
  }
  else
  {
    *((_DWORD *)v2 + 69) = sub_439550(a1, a1 + 324, v297, *(_WORD *)(v296 + 8), (int)v328);
    *((_DWORD *)v2 + 70) = 0;
  }
  if ( (*(_DWORD *)(a1 + 348) & 0x100) != 0 )
    *(_DWORD *)(a1 + 20) &= 0xF9F7EFFF;
  if ( *((_DWORD *)v2 + 69) == 256 )
  {
    *(_DWORD *)(a1 + 20) &= 0xF9F7EFFF;
    *(_DWORD *)(a1 + 344) = 0;
    v14 = *((_DWORD *)v2 + 43);
    if ( (*(_BYTE *)(v14 + 12) & 4) != 0 )
    {
      *(_DWORD *)(a1 + 20) |= 0x100u;
      return v14;
    }
    v298 = *(_WORD *)(*((_DWORD *)v2 + 46) + 2 * (unsigned __int16)++*(_WORD *)(a1 + 380) + 6);
    v2[94] = v298;
    if ( v298 == 0xFFF0 || *(_WORD *)(a1 + 380) >= 5u )
      goto LABEL_636;
  }
  else
  {
    if ( *((_DWORD *)v2 + 70) == 0 )
      goto LABEL_636;
    if ( *(char *)(*((_DWORD *)v2 + 43) + 12) >= 0 )
      goto LABEL_636;
    v299 = *(_DWORD *)(a1 + 20);
    if ( (v299 & 0x12) == 0 )
      goto LABEL_636;
    v300 = v299 & 0xF9FFFFFF;
    *(_DWORD *)(a1 + 20) = v300;
    if ( (*(_BYTE *)(*((_DWORD *)v2 + 43) + 12) & 4) != 0 )
    {
      v14 = v300 | 0x100;
      *(_DWORD *)(a1 + 20) = v14;
      return v14;
    }
    BYTE1(v300) &= ~0x10u;
    *(_DWORD *)(a1 + 20) = v300;
    v298 = *(_WORD *)(*((_DWORD *)v2 + 46) + 2 * (unsigned __int16)++*(_WORD *)(a1 + 380) + 6);
    v2[94] = v298;
    if ( v298 == 0xFFF0 || *(_WORD *)(a1 + 380) >= 5u )
      goto LABEL_636;
  }
  v301 = *(_DWORD *)(a1 + 248) + v298;
  *((_DWORD *)v2 + 43) = v301;
  *(_DWORD *)(a1 + 388) = v301;
  *(_DWORD *)(a1 + 344) = 0;
  *(_WORD *)(a1 + 326) = 0;
  *(_BYTE *)(a1 + 332) = 0;
LABEL_636:
  if ( (*(_DWORD *)(*((_DWORD *)v2 + 43) + 16) & 0x2000000) != 0 )
  {
    v302 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(**(_DWORD **)(a1 + 120) + 16) + 68) + 28);
    *((_DWORD *)v2 + 69) = v302;
    if ( *(_WORD *)(a1 + 326) == 1 )
    {
      dword_4B3C44 = v302;
    }
    else
    {
      dword_4B3B8C += v302 - dword_4B3C44;
      dword_4B3C44 = *((_DWORD *)v2 + 69);
    }
  }
  v303 = *(_DWORD *)(a1 + 12);
  if ( (v303 & 0x14) != 0 || (*(_BYTE *)(*((_DWORD *)v2 + 43) + 16) & 0x40) != 0 )
  {
    if ( (v303 & 0x10) != 0
      || (*(_BYTE *)(*((_DWORD *)v2 + 43) + 16) & 0x40) != 0
      || (*((_DWORD *)v2 + 12) = *(_DWORD *)(dword_4B324C + 228) - *(_DWORD *)(a1 + 228),
          *((_DWORD *)v2 + 13) = 0,
          *((_DWORD *)v2 + 14) = *(_DWORD *)(dword_4B324C + 236) - *(_DWORD *)(a1 + 236),
          sub_407990((int *)v2 + 12) < 2000) )
    {
      dword_4B3950 = a1;
    }
  }
  if ( (*(_DWORD *)(a1 + 12) & 0x20000000) != 0 )
  {
    v304 = *(__int16 *)(a1 + 30);
    *(_DWORD *)(a1 + 228) = dword_4B38C0;
    *(_DWORD *)(a1 + 232) = dword_4B38C4 + v304;
    *(_DWORD *)(a1 + 236) = dword_4B38C8;
    v305 = (__int16 *)(*(_DWORD *)(a1 + 192) + 16);
    *(_DWORD *)(a1 + 124) = 0;
    RotMatrix(v305, (_WORD *)(a1 + 128));
    ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
    TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
  }
  *(_DWORD *)(a1 + 20) &= 0xB76F777F;
  v14 = *(_DWORD *)(a1 + 24) & 0xFFFF9FDF;
  *(_DWORD *)(a1 + 24) = v14;
  *(_DWORD *)(a1 + 52) = 0;
  return v14;
}

// 0x444750  sub_444750
__int16 __cdecl sub_444750(int a1)
{
  int v1; // eax
  unsigned int **v2; // esi
  int **v3; // edi
  unsigned int v4; // eax
  unsigned int v5; // eax
  __int16 v6; // ax
  unsigned int *v7; // ecx
  unsigned int *v8; // edx
  unsigned int v9; // eax
  int v10; // edx
  unsigned int v11; // eax
  int v12; // eax
  unsigned int **v13; // eax
  unsigned int *v14; // eax
  int v15; // eax
  int v16; // eax
  unsigned int **v17; // eax
  unsigned int *v18; // eax
  unsigned int *v19; // eax
  unsigned int *v20; // ecx
  _DWORD *v21; // edi
  char v22; // al
  char v23; // al
  unsigned int v24; // eax
  unsigned int v25; // ecx
  unsigned int *v26; // eax
  int v27; // eax
  int v28; // edi
  unsigned int v29; // ecx
  int v30; // eax
  unsigned int **v31; // eax
  unsigned int *v32; // eax
  unsigned int *v33; // eax
  unsigned int v34; // ecx
  int *v36; // [esp-4h] [ebp-18h]
  int **v37; // [esp+10h] [ebp-4h]

  v1 = *(_DWORD *)(a1 + 12);
  v2 = (unsigned int **)dword_4EFAC0;
  v3 = (int **)((char *)dword_4EFAC0 + 56);
  v37 = (int **)((char *)dword_4EFAC0 + 56);
  if ( (v1 & 0x14) != 0 )
  {
    if ( (v1 & 0x10) != 0 )
    {
      dword_4B3950 = a1;
    }
    else
    {
      v36 = (int *)((char *)dword_4EFAC0 + 36);
      *((_DWORD *)dword_4EFAC0 + 9) = *(_DWORD *)(dword_4B324C + 228) - *(_DWORD *)(a1 + 228);
      v2[10] = NULL;
      v2[11] = (unsigned int *)(*(_DWORD *)(dword_4B324C + 236) - *(_DWORD *)(a1 + 236));
      if ( sub_407990(v36) < 2000 )
        dword_4B3950 = a1;
    }
  }
  v4 = *(_DWORD *)(a1 + 252);
  *v2 = (unsigned int *)v4;
  if ( v4 != 0 )
  {
    while ( 1 )
    {
      v5 = (*v2)[6];
      v2[8] = (unsigned int *)v5;
      if ( (v5 & 2) != 0 )
      {
        if ( *((_WORD *)*v2 + 14) >= (unsigned __int16)BugsRand() )
          goto LABEL_72;
      }
      else if ( (v5 & 0x20000) != 0 && *((_WORD *)*v2 + 16) >= (unsigned __int16)BugsRand() )
      {
        goto LABEL_72;
      }
      if ( *((_BYTE *)*v2 + 16) != 0 && TestLogicCond(a1, (_BYTE *)*v2 + 16) == 0 )
      {
        v6 = *((_WORD *)*v2 + 3);
        if ( v6 != 0 )
        {
          v7 = *v2;
          *((_WORD *)v2 + 26) = v6;
          if ( v6 != *((unsigned __int16 *)v7 + 2) )
          {
            do
            {
              v8 = *v2;
              v2[1] = *v2;
              v9 = *v8;
              v10 = *((__int16 *)v2 + 26);
              *v2 = (unsigned int *)v9;
            }
            while ( v10 != *(unsigned __int16 *)(v9 + 4) );
          }
          *v2 = v2[1];
        }
        goto LABEL_72;
      }
      v11 = (unsigned int)v2[8];
      if ( (v11 & 0x18400000) == 0 )
        goto LABEL_41;
      if ( (v11 & 0x400000) != 0 )
      {
        v12 = dword_4B3740;
        v2[2] = (unsigned int *)dword_4B3740;
        if ( v12 != 0 )
        {
          do
          {
            v13 = (unsigned int **)v2[2];
            if ( *((unsigned __int16 *)v13 + 14) == (*v2)[8] && (((unsigned __int16)v13[5] >> 8) & 1) == 0 )
              break;
            v14 = *v13;
            v2[2] = v14;
          }
          while ( v14 != NULL );
        }
        v15 = (int)v2[2];
        if ( v15 == 0 )
          goto LABEL_72;
        sub_437680(v15, (*v2)[7], v3);
        goto LABEL_41;
      }
      if ( (v11 & 0x10000000) != 0 )
      {
        v16 = dword_4B3740;
        v2[2] = (unsigned int *)dword_4B3740;
        if ( v16 != 0 )
        {
          do
          {
            v17 = (unsigned int **)v2[2];
            if ( *((unsigned __int16 *)v17 + 14) == (*v2)[8] && (((unsigned __int16)v17[5] >> 8) & 1) == 0 )
              break;
            v18 = *v17;
            v2[2] = v18;
          }
          while ( v18 != NULL );
        }
        v19 = v2[2];
        if ( v19 == NULL )
          goto LABEL_72;
        v20 = v2[2];
        v21 = v2 + 3;
        v2[3] = (unsigned int *)(v19[57] - *(_DWORD *)(a1 + 228));
        v22 = *((_BYTE *)v2 + 32);
        v2[5] = (unsigned int *)(v20[59] - *(_DWORD *)(a1 + 236));
        if ( (v22 & 1) != 0 )
        {
          v2[4] = (unsigned int *)(v2[2][58] - *(_DWORD *)(a1 + 232));
          goto LABEL_37;
        }
      }
      else
      {
        v21 = v2 + 3;
        v2[3] = (unsigned int *)(*(_DWORD *)dword_4B3724 - *(_DWORD *)(a1 + 228));
        v23 = *((_BYTE *)v2 + 32);
        v2[5] = (unsigned int *)(*(_DWORD *)(dword_4B3724 + 8) - *(_DWORD *)(a1 + 236));
        if ( (v23 & 1) != 0 )
        {
          v2[4] = (unsigned int *)(*(_DWORD *)(dword_4B3724 + 4) - *(_DWORD *)(a1 + 232));
          goto LABEL_37;
        }
      }
      v2[4] = NULL;
LABEL_37:
      Square0(v21, v21);
      v24 = SquareRoot0((int)v2[4] + (_DWORD)v2[5] + *v21);
      v25 = (unsigned int)v2[8];
      v2[7] = (unsigned int *)v24;
      if ( (v25 & 0x200000) != 0 )
      {
        if ( v24 < (*v2)[7] )
          goto LABEL_72;
      }
      else if ( v24 > (*v2)[7] )
      {
        goto LABEL_72;
      }
LABEL_41:
      if ( *((_BYTE *)*v2 + 19) != 0 )
        RunLogicAction(a1, (int)(*v2 + 4));
      v26 = v2[8];
      if ( (BYTE1(v26) & 6) != 0 )
      {
        if ( (BYTE1(v26) & 2) != 0 )
          sub_41DF30(a1, (*v2)[7], 1, dword_4B2368);
        if ( (((unsigned __int16)v2[8] >> 8) & 4) != 0 )
          sub_41DF30(a1, (*v2)[7], 2, dword_4B2368);
      }
      if ( ((unsigned int)v2[8] & 0x40100) != 0 )
      {
        v27 = sub_448EB0(*((_WORD *)*v2 + 16), a1 + 228, a1 + 220);
        v2[2] = (unsigned int *)v27;
        if ( v27 == 0 )
          goto LABEL_72;
        *(_WORD *)(v27 + 38) = *(_WORD *)(a1 + 38);
        if ( ((unsigned int)v2[8] & 0x1000) != 0 )
        {
          v2[2][77] = 0;
          v2[2][78] = 0;
          v2[2][79] = 0;
          *((_WORD *)v2[2] + 150) = 0;
          *((_WORD *)v2[2] + 151) = 0;
          *((_WORD *)v2[2] + 152) = 0;
          v2[2][71] = 4096;
          v2[2][72] = 4096;
          v2[2][73] = 4096;
          v2[2][49] = dword_4B324C + 124;
          *((_WORD *)v2[2] + 19) = *(_WORD *)(dword_4B324C + 38);
          v2[2][28] = dword_4B324C;
          v2[2][48] = (unsigned int)(v2[2] + 71);
          *((_WORD *)v2[2] + 19) = *(_WORD *)(a1 + 38);
          v28 = (int)(v2[2] + 31);
          v29 = v2[2][48];
          *(_DWORD *)v28 = 0;
          RotMatrix((__int16 *)(v29 + 16), (_WORD *)(v28 + 4));
          ScaleMatrix((__int16 *)(v28 + 4), *(_DWORD **)(v28 + 68));
          TransMatrix((_DWORD *)(v28 + 4), (_DWORD *)(*(_DWORD *)(v28 + 68) + 24));
        }
        if ( ((unsigned int)v2[8] & 0x40000) != 0 )
          *((_WORD *)v2[2] + 111) = BugsRand() & 0xFFF;
        if ( ((unsigned int)v2[8] & 0x1000000) != 0 )
          *((_WORD *)v2[2] + 15) = *(_WORD *)(a1 + 30);
      }
      v4 = (unsigned int)v2[8];
      if ( (v4 & 0x84890800) != 0 )
      {
        if ( (v4 & 0x4000000) != 0 )
        {
          v30 = dword_4B3740;
          v2[2] = (unsigned int *)dword_4B3740;
          if ( v30 != 0 )
          {
            do
            {
              v31 = (unsigned int **)v2[2];
              if ( *((unsigned __int16 *)v31 + 14) == (*v2)[8] && (((unsigned __int16)v31[5] >> 8) & 1) == 0 )
                break;
              v32 = *v31;
              v2[2] = v32;
            }
            while ( v32 != NULL );
          }
          v33 = v2[2];
          if ( v33 == NULL )
            goto LABEL_72;
          v34 = v33[5];
          BYTE1(v34) |= 1u;
          v33[5] = v34;
        }
        if ( (((unsigned __int16)v2[8] >> 8) & 8) != 0 )
        {
          *(_WORD *)(dword_4B324C + 222) = *(_WORD *)(a1 + 222);
          sub_437B20(*(_DWORD *)(a1 + 228), *(_DWORD *)(a1 + 232), *(_DWORD *)(a1 + 236));
          *(_DWORD *)(dword_4B324C + 20) |= 0x80000000;
        }
        if ( (int)v2[8] < 0 )
          sub_437910(a1, (*v2)[8], v37);
        if ( ((unsigned int)v2[8] & 0x80000) != 0 )
        {
          *((_DWORD *)dword_52FD00 + 0x4000) = (*v2)[7];
          word_4B39BC = 1;
        }
        v4 = (unsigned int)v2[8];
        if ( (v4 & 0x10000) != 0 )
        {
          v4 = *(_DWORD *)(a1 + 20);
          BYTE1(v4) |= 1u;
          *(_DWORD *)(a1 + 20) = v4;
          return v4;
        }
      }
      if ( (v4 & 0x8000) == 0 )
        return v4;
LABEL_72:
      v4 = **v2;
      *v2 = (unsigned int *)v4;
      if ( v4 == 0 )
        return v4;
      v3 = v37;
    }
  }
  return v4;
}

// 0x444cc0  sub_444CC0
__int16 __cdecl sub_444CC0(unsigned int *a1)
{
  unsigned int *v1; // ebp
  unsigned int **v2; // esi
  unsigned int v3; // eax
  unsigned int *v4; // eax
  bool v5; // zf
  unsigned int **v6; // eax
  unsigned int *v7; // eax
  unsigned int *v8; // eax
  unsigned int *v9; // ecx
  unsigned int v10; // eax
  char v11; // cl
  unsigned int *v12; // eax
  unsigned int *v13; // eax
  int v14; // eax
  unsigned int **v15; // eax
  unsigned int *v16; // eax
  unsigned int *v17; // eax
  __int16 v18; // dx
  __int16 v19; // dx
  int v20; // ecx
  unsigned int v21; // eax
  unsigned int *v22; // eax
  unsigned int *v23; // eax
  int v24; // edx
  int v25; // ecx
  unsigned int *v26; // edx
  unsigned int *v27; // ecx
  int v28; // ecx
  int v29; // eax
  int v30; // ebp
  int v31; // eax
  int v32; // eax
  unsigned int v33; // eax
  unsigned int **v34; // eax
  unsigned int *v35; // eax
  unsigned int *v36; // eax
  int v37; // ecx
  int v38; // ecx
  unsigned int *v39; // eax
  int v40; // eax

  v1 = a1;
  v2 = (unsigned int **)dword_4EFAC0;
  v3 = a1[63];
  for ( *(_DWORD *)dword_4EFAC0 = v3; v3 != 0; *v2 = (unsigned int *)v3 )
  {
    v2[7] = (unsigned int *)(*v2)[6];
    if ( *((_BYTE *)*v2 + 16) != 0 && TestLogicCond((int)v1, (_BYTE *)*v2 + 16) == 0 )
      goto LABEL_76;
    if ( (((unsigned __int16)v2[7] >> 8) & 0x40) != 0 )
      LOBYTE(dword_4B3940) = dword_4B3940 | 8;
    v4 = v2[7];
    if ( ((unsigned __int16)v4 & 0x8010) != 0 )
    {
      if ( ((unsigned __int8)v4 & 0x20) != 0 )
      {
        v2[1] = (unsigned int *)dword_4B324C;
      }
      else if ( ((unsigned __int8)v4 & 0x40) != 0 )
      {
        v5 = dword_4B3740 == 0;
        v2[1] = (unsigned int *)dword_4B3740;
        if ( !v5 )
        {
          do
          {
            v6 = (unsigned int **)v2[1];
            if ( *((unsigned __int16 *)v6 + 14) == (*v2)[8] && (((unsigned __int16)v6[5] >> 8) & 1) == 0 )
              break;
            v7 = *v6;
            v2[1] = v7;
          }
          while ( v7 != NULL );
        }
      }
      v8 = v2[1];
      if ( v8 == NULL )
        goto LABEL_76;
      v2[2] = (unsigned int *)(v8[57] - v1[57]);
      v9 = v2[7];
      v2[4] = (unsigned int *)(v8[59] - v1[59]);
      if ( (BYTE1(v9) & 1) != 0 )
        v2[3] = (unsigned int *)(v8[58] - v1[58]);
      else
        v2[3] = NULL;
      Square0(v2 + 2, v2 + 2);
      v10 = SquareRoot0((int)v2[3] + (unsigned int)v2[4] + (_DWORD)v2[2]);
      v11 = *((_BYTE *)v2 + 28);
      v2[6] = (unsigned int *)v10;
      if ( (v11 & 0x10) != 0 )
      {
        if ( v10 < (*v2)[7] )
          goto LABEL_76;
      }
      else if ( v10 > (*v2)[7] )
      {
        goto LABEL_76;
      }
    }
    if ( *((_BYTE *)*v2 + 19) != 0 )
      RunLogicAction((int)v1, (int)(*v2 + 4));
    v12 = v2[7];
    if ( ((unsigned __int8)v12 & 1) != 0 )
    {
      v2[1] = NULL;
      v13 = v2[7];
      if ( ((unsigned __int8)v13 & 0x40) == 0 || ((unsigned __int8)v13 & 2) != 0 )
      {
        if ( (char)v13 < 0 )
          v2[1] = v1;
      }
      else
      {
        v14 = dword_4B3740;
        v2[1] = (unsigned int *)dword_4B3740;
        if ( v14 != 0 )
        {
          do
          {
            v15 = (unsigned int **)v2[1];
            if ( *((unsigned __int16 *)v15 + 14) == (*v2)[8] && (((unsigned __int16)v15[5] >> 8) & 1) == 0 )
              break;
            v16 = *v15;
            v2[1] = v16;
          }
          while ( v16 != NULL );
        }
      }
      v17 = v2[1];
      if ( v17 != NULL )
      {
        if ( ((unsigned int)v2[7] & 0x20000) != 0 )
        {
          *((_WORD *)v2 + 24) = *(_WORD *)(dword_4B324C + 228) - *((_WORD *)v17 + 114);
          v18 = *(_WORD *)(dword_4B324C + 236) - *((_WORD *)v17 + 118);
          *((_WORD *)v2 + 25) = 0;
          *((_WORD *)v2 + 30) = 0;
          *((_WORD *)v2 + 28) = 0;
          *((_WORD *)v2 + 26) = v18;
          v19 = 4096 - *((_WORD *)v17 + 111);
          v2[17] = (unsigned int *)4096;
          *((_WORD *)v2 + 29) = v19;
          v2[16] = (unsigned int *)4096;
          v2[18] = NULL;
          RotMatrix((__int16 *)v2 + 28, (_WORD *)v2 + 40);
          ApplyMatrixSV((__int16 *)v2 + 40, (__int16 *)v2 + 24, v2 + 12);
          RotMatrix((__int16 *)v2[1] + 110, (_WORD *)v2 + 40);
          ScaleMatrix((__int16 *)v2 + 40, v2 + 16);
          ApplyMatrixSV((__int16 *)v2 + 40, (__int16 *)v2 + 24, v2 + 12);
          v1 = a1;
          v20 = *((__int16 *)v2 + 24) + v2[1][57];
          dword_4B3984 = v20;
          dword_4B3988 = *((__int16 *)v2 + 25) + v2[1][58];
          dword_4B398C = *((__int16 *)v2 + 26) + v2[1][59];
        }
        else
        {
          v20 = v17[57];
          dword_4B3984 = v20;
          dword_4B3988 = v2[1][58];
          dword_4B398C = v2[1][59];
        }
      }
      else
      {
        v21 = (unsigned int)v2[7];
        if ( (v21 & 0x80000) != 0 )
        {
          v22 = *v2;
          *((_WORD *)v2 + 24) = 0;
          *((_WORD *)v2 + 25) = -*((_WORD *)v22 + 16);
          *((_WORD *)v2 + 26) = *((_WORD *)v22 + 14);
          *((_WORD *)v2 + 40) = 4096;
          *((_WORD *)v2 + 41) = 0;
          *((_WORD *)v2 + 42) = 0;
          *((_WORD *)v2 + 43) = 0;
          *((_WORD *)v2 + 44) = 4096;
          *((_WORD *)v2 + 45) = 0;
          *((_WORD *)v2 + 46) = 0;
          *((_WORD *)v2 + 47) = 0;
          *((_WORD *)v2 + 48) = 4096;
          v2[25] = NULL;
          v2[26] = NULL;
          v2[27] = NULL;
          RotMatrixY(*(__int16 *)(dword_4B324C + 222) + 2048, (__int16 *)v2 + 40);
          ApplyMatrix((__int16 *)v2 + 40, (__int16 *)v2 + 24, (int *)v2 + 28);
          v1 = a1;
          v20 = (((int)v2[28] + *(_DWORD *)(dword_4B324C + 228) - dword_4B3984) >> 2) + dword_4B3984;
          dword_4B3984 = v20;
          dword_4B3988 += ((int)v2[29] + *(_DWORD *)(dword_4B324C + 232) - dword_4B3988) >> 2;
          dword_4B398C += ((int)v2[30] + *(_DWORD *)(dword_4B324C + 236) - dword_4B398C) >> 2;
          dword_4B3994 += (*(_DWORD *)(dword_4B324C + 228) - dword_4B3994) >> 2;
          dword_4B3998 += (*(_DWORD *)(dword_4B324C + 232) - dword_4B3998) >> 2;
          dword_4B399C += (*(_DWORD *)(dword_4B324C + 236) - dword_4B399C) >> 2;
        }
        else if ( (v21 & 0x100000) != 0 )
        {
          v20 = dword_4B38C0;
          dword_4B3984 = dword_4B38C0;
          dword_4B3988 = dword_4B38C4;
          dword_4B398C = dword_4B38C8;
        }
        else
        {
          v20 = (*v2)[7];
          dword_4B3984 = v20;
          dword_4B3988 = (*v2)[8];
          dword_4B398C = *((unsigned __int16 *)*v2 + 3);
        }
      }
      if ( ((unsigned int)v2[7] & 0x40000) != 0 )
      {
        v23 = (unsigned int *)(dword_4B38C0 - v20);
        v2[8] = (unsigned int *)(dword_4B38C0 - v20);
        v2[9] = (unsigned int *)(dword_4B38C4 - dword_4B3988);
        v24 = dword_4B38C8;
        v25 = dword_4B398C;
        v2[28] = v23;
        v26 = (unsigned int *)(v24 - v25);
        v27 = v2[9];
        v2[10] = v26;
        v2[29] = v27;
        v2[30] = v26;
        Square0(v2 + 28, v2 + 28);
        v28 = SquareRoot0((int)v2[28] + (unsigned int)v2[30] + (_DWORD)v2[29]) | 1;
        v29 = ((_DWORD)v2[8] << 12) / v28;
        v2[6] = (unsigned int *)v28;
        v30 = v29;
        v31 = ((_DWORD)v2[9] << 12) / v28;
        v2[28] = (unsigned int *)v30;
        v2[29] = (unsigned int *)v31;
        v2[30] = (unsigned int *)(((_DWORD)v2[10] << 12) / v28);
        if ( v28 - 500 >= 500 )
          v2[6] = (unsigned int *)(v28 - 500);
        else
          v2[6] = (unsigned int *)(v28 >> 3);
        v32 = (int)v2[6];
        if ( v32 > 0 )
        {
          dword_4B3984 += (v30 * v32) >> 12;
          dword_4B3988 += ((int)v2[29] * (int)v2[6]) >> 12;
          dword_4B398C += ((int)v2[30] * (int)v2[6]) >> 12;
        }
        v1 = a1;
      }
      BYTE1(dword_4B3940) |= 4u;
    }
    else if ( ((unsigned __int8)v12 & 4) != 0 )
    {
      BYTE1(dword_4B3940) &= 0xBBu;
    }
    v33 = (unsigned int)v2[7];
    if ( (v33 & 2) == 0 )
    {
      if ( (v33 & 8) != 0 )
        BYTE1(dword_4B3940) &= 0xB7u;
      goto LABEL_69;
    }
    if ( (v33 & 0x40) != 0 )
    {
      v5 = dword_4B3740 == 0;
      v2[1] = (unsigned int *)dword_4B3740;
      if ( !v5 )
      {
        do
        {
          v34 = (unsigned int **)v2[1];
          if ( *((unsigned __int16 *)v34 + 14) == (*v2)[8] && (((unsigned __int16)v34[5] >> 8) & 1) == 0 )
            break;
          v35 = *v34;
          v2[1] = v35;
        }
        while ( v35 != NULL );
      }
      v36 = v2[1];
      if ( v36 == NULL )
        goto LABEL_66;
      dword_4B3994 = v36[57];
      dword_4B3998 = v2[1][58];
      v37 = v2[1][59];
      BYTE1(dword_4B3940) |= 8u;
      dword_4B399C = v37;
    }
    else if ( (v33 & 0x80u) == 0 )
    {
      if ( (v33 & 0x100000) == 0 )
      {
        dword_4B3994 = (*v2)[7];
        dword_4B3998 = (*v2)[8];
        dword_4B399C = *((unsigned __int16 *)*v2 + 3);
LABEL_66:
        BYTE1(dword_4B3940) |= 8u;
        goto LABEL_69;
      }
      BYTE1(dword_4B3940) |= 8u;
      dword_4B3994 = dword_4B38CC;
      dword_4B3998 = dword_4B38D0;
      dword_4B399C = dword_4B38D4;
    }
    else
    {
      dword_4B3994 = v1[57];
      dword_4B3998 = v1[58];
      v38 = v1[59];
      BYTE1(dword_4B3940) |= 8u;
      dword_4B399C = v38;
    }
LABEL_69:
    v39 = v2[7];
    if ( (BYTE1(v39) & 4) != 0 )
    {
      v40 = (*v2)[7];
      BYTE1(dword_4B3940) |= 0x10u;
      dword_4B39A4 = v40;
    }
    else if ( (BYTE1(v39) & 8) != 0 )
    {
      BYTE1(dword_4B3940) &= ~0x10u;
    }
    v3 = (unsigned int)v2[7];
    if ( (v3 & 0x10000) != 0 )
    {
      dword_4B3928 = dword_4B38C0;
      dword_4B3954 = dword_4B38C0;
      dword_4B3974 = dword_4B38C0;
      BYTE1(dword_4B3940) |= 0x40u;
      dword_4B392C = dword_4B38C4;
      dword_4B3958 = dword_4B38C4;
      dword_4B3978 = dword_4B38C4;
      dword_4B3930 = dword_4B38C8;
      dword_4B395C = dword_4B38C8;
      dword_4B397C = dword_4B38C8;
      dword_4B3964 = dword_4B38CC;
      dword_4B3968 = dword_4B38D0;
      dword_4B396C = dword_4B38D4;
      LOWORD(v3) = dword_4B38D0;
      return v3;
    }
    if ( (v3 & 0x200) != 0 )
    {
      v3 = v1[5];
      BYTE1(v3) |= 1u;
      v1[5] = v3;
      return v3;
    }
    if ( (v3 & 0x1000) == 0 )
      return v3;
LABEL_76:
    v3 = **v2;
  }
  return v3;
}

// 0x445410  sub_445410
void __cdecl sub_445410(int a1)
{
  _WORD *v1; // edi
  int v2; // edx
  int v3; // eax
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // eax
  unsigned __int16 v7; // dx
  int v8; // ecx
  int v9; // ecx
  unsigned __int16 v10; // ax
  __int16 *v11; // ecx
  bool v12; // cc
  int v13; // eax
  int *v14; // ebp
  int v15; // eax

  v1 = (_WORD *)(a1 + 324);
  if ( *(_DWORD *)(a1 + 120) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 24);
    LOBYTE(v2) = v2 | 0x80;
    *(_DWORD *)(a1 + 24) = v2;
    v3 = sub_448AF0();
    *(_DWORD *)(a1 + 120) = v3;
    if ( v3 == 0 )
    {
      while ( 1 )
        ;
    }
    *(_WORD *)(v3 + 8) = 1;
    v4 = *(_DWORD **)(a1 + 116);
    *(_DWORD *)(a1 + 192) = a1 + 204;
    *(_DWORD *)(a1 + 200) = 0;
    *(_DWORD *)(a1 + 196) = 0;
    for ( *(_DWORD *)(a1 + 124) = 0; v4 != NULL; v4 = (_DWORD *)*v4 )
    {
      if ( *(_WORD *)(v4[2] + 78) == 8 )
        break;
    }
    v5 = *(_DWORD *)(v4[2] + 84);
    *(_DWORD *)(a1 + 364) = v5;
    v6 = *(_DWORD *)(v5 + 16);
    *(_DWORD *)(a1 + 356) = v6;
    *(_DWORD *)(a1 + 360) = v6;
    LOWORD(v5) = *(_WORD *)(v5 + 20);
    *(_WORD *)(a1 + 326) = 0;
    *(_BYTE *)(a1 + 329) = 2;
    *v1 = v5 - 1;
    *(_BYTE *)(a1 + 332) = 2;
    v7 = *(_WORD *)(v6 + 12);
    *(_WORD *)(a1 + 74) = 0;
    *(_WORD *)(a1 + 72) = -(v7 >> 1);
    *(_WORD *)(a1 + 76) = -(*(_WORD *)(v6 + 12) >> 1);
    *(_WORD *)(a1 + 80) = *(_WORD *)(v6 + 12) >> 1;
    *(_WORD *)(a1 + 82) = -*(_WORD *)(v6 + 14);
    v8 = *(_DWORD *)(a1 + 12);
    *(_WORD *)(a1 + 84) = *(_WORD *)(v6 + 12) >> 1;
    if ( (v8 & 0x4000000) != 0 )
      *(_DWORD *)(a1 + 232) += *(unsigned __int16 *)(v6 + 14) >> 1;
    v9 = *(__int16 *)(a1 + 32);
    v10 = *(_WORD *)(v6 + 12) >> 1;
    *(_WORD *)(a1 + 46) = v10;
    *(_DWORD *)(a1 + 48) = v9 * v9 + v10 * v10;
    v11 = (__int16 *)(*(_DWORD *)(a1 + 192) + 16);
    *(_DWORD *)(a1 + 124) = 0;
    RotMatrix(v11, (_WORD *)(a1 + 128));
    ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
    TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
    sub_4388E0(a1, (int)v1, 1);
  }
  if ( *(_BYTE *)(a1 + 332) == 0 )
  {
    v12 = ++*(_WORD *)(a1 + 326) <= *(_WORD *)(a1 + 324);
    *(_BYTE *)(a1 + 332) = *(_BYTE *)(a1 + 329);
    if ( !v12 )
    {
      v13 = *(_DWORD *)(a1 + 356);
      *(_WORD *)(a1 + 326) = 0;
      *(_DWORD *)(a1 + 360) = v13;
    }
    sub_4388E0(a1, (int)v1, 1);
  }
  --*(_BYTE *)(a1 + 332);
  v14 = *(int **)(a1 + 252);
  if ( v14 != NULL )
  {
    while ( TestLogicCond(a1, (_BYTE *)v14 + 16) == 0 )
    {
      v14 = (int *)*v14;
      if ( v14 == NULL )
        return;
    }
    RunLogicAction(a1, (int)(v14 + 4));
    if ( (v14[6] & 0x200) != 0 && *(_BYTE *)(a1 + 332) == 0 && *(_WORD *)(a1 + 326) == 0 )
      sub_41DF30(a1, v14[7], 1, dword_4B2368);
    if ( (v14[6] & 0x400) != 0 )
      sub_41DF30(a1, v14[7], 2, dword_4B2368);
    if ( (v14[6] & 0x10000) != 0 && *(_BYTE *)(a1 + 332) == 0 && *(_WORD *)(a1 + 326) >= *(_WORD *)(a1 + 324) )
    {
      v15 = *(_DWORD *)(a1 + 20);
      BYTE1(v15) |= 1u;
      *(_DWORD *)(a1 + 20) = v15;
    }
  }
}

// 0x445670  sub_445670
int __cdecl sub_445670(int a1)
{
  _WORD *v1; // esi
  int v2; // edx
  int v3; // eax
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // ecx
  bool v7; // cc
  int result; // eax

  v1 = (_WORD *)(a1 + 324);
  if ( *(_DWORD *)(a1 + 120) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 24);
    LOBYTE(v2) = v2 | 0x80;
    *(_DWORD *)(a1 + 24) = v2;
    v3 = sub_448AF0();
    *(_DWORD *)(a1 + 120) = v3;
    if ( v3 == 0 )
    {
      while ( 1 )
        ;
    }
    *(_WORD *)(v3 + 8) = 32;
    v4 = *(_DWORD **)(a1 + 116);
    for ( *(_DWORD *)(a1 + 8) = 1; v4 != NULL; v4 = (_DWORD *)*v4 )
    {
      if ( *(_WORD *)(v4[2] + 78) == 8 )
        break;
    }
    v5 = *(_DWORD *)(v4[2] + 84);
    *(_DWORD *)(a1 + 364) = v5;
    v6 = *(_DWORD *)(v5 + 16);
    *(_DWORD *)(a1 + 356) = v6;
    *(_DWORD *)(a1 + 360) = v6;
    *v1 = *(_WORD *)(v5 + 20) - 1;
    *(_WORD *)(a1 + 326) = *(_WORD *)(a1 + 80);
    *(_BYTE *)(a1 + 329) = *(_BYTE *)(a1 + 84);
    *(_BYTE *)(a1 + 332) = *(_BYTE *)(a1 + 84);
    sub_4389A0(a1, (int)v1, 1);
  }
  if ( *(_BYTE *)(a1 + 332) == 0 )
  {
    v7 = ++*(_WORD *)(a1 + 326) <= *v1;
    *(_BYTE *)(a1 + 332) = *(_BYTE *)(a1 + 329);
    if ( !v7 )
      *(_WORD *)(a1 + 326) = 0;
    sub_4389A0(a1, (int)v1, 1);
  }
  --*(_BYTE *)(a1 + 332);
  result = *(_DWORD *)(a1 + 4);
  LOBYTE(result) = result | 2;
  *(_DWORD *)(a1 + 4) = result;
  return result;
}

// 0x445750  sub_445750
__int16 __cdecl sub_445750(int a1)
{
  _DWORD *v1; // esi
  int **v2; // edx
  int v3; // ecx
  unsigned int v4; // eax
  int v5; // ecx
  int v6; // eax
  int *v7; // eax
  int v8; // eax
  int v9; // eax
  int *v10; // eax
  int v11; // eax
  __int16 v12; // ax
  int v13; // eax
  int v14; // eax
  int *v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int *v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // ecx
  int v37; // ecx
  int v38; // eax
  int **v40; // [esp+10h] [ebp-4h]

  v1 = dword_4EFAC0;
  v2 = (int **)((char *)dword_4EFAC0 + 44);
  v40 = (int **)((char *)dword_4EFAC0 + 44);
  if ( *(_DWORD *)(a1 + 120) == 0 )
  {
    v3 = *(_DWORD *)(a1 + 24);
    v4 = *(_DWORD *)(a1 + 8) & 0xFFDFFFFF;
    LOBYTE(v3) = v3 | 0x80;
    LOBYTE(v4) = *(_BYTE *)(a1 + 8) | 0x20;
    *(_DWORD *)(a1 + 24) = v3;
    v5 = *(_DWORD *)(a1 + 244);
    *(_DWORD *)(a1 + 8) = v4;
    v1[5] = v5;
    v6 = v1[5];
    v1[9] = 2;
    if ( v6 == 0 )
      goto LABEL_80;
    do
    {
      v7 = (int *)v1[5];
      if ( *((_WORD *)v7 + 2) == 2 )
        break;
      v8 = *v7;
      v1[5] = v8;
    }
    while ( v8 != 0 );
    if ( v1[5] == 0 )
    {
LABEL_80:
      v9 = *(_DWORD *)(a1 + 244);
      v1[5] = v9;
      v1[9] = 1;
      if ( v9 != 0 )
      {
        do
        {
          v10 = (int *)v1[5];
          if ( *((_WORD *)v10 + 2) == 1 )
            break;
          v11 = *v10;
          v1[5] = v11;
        }
        while ( v11 != 0 );
      }
    }
    v1[2] = *(unsigned __int16 *)(v1[5] + 6) + *(_DWORD *)(a1 + 248);
    *(_DWORD *)(a1 + 384) = v1[5];
    *(_DWORD *)(a1 + 388) = v1[2];
    *(_WORD *)(a1 + 380) = 0;
  }
  v12 = *(_WORD *)(*(_DWORD *)(a1 + 384) + 2 * *(unsigned __int16 *)(a1 + 380) + 6);
  *((_WORD *)v1 + 14) = v12;
  if ( v12 == -16 || *(_WORD *)(a1 + 380) >= 5u )
  {
    v13 = *(_DWORD *)(a1 + 388);
    if ( v13 != 0 )
      v1[10] = *(unsigned __int16 *)(v13 + 6);
    else
      v1[10] = 0;
    v14 = *(_DWORD *)(a1 + 244);
    v1[9] = 1;
    v1[5] = v14;
    if ( v14 != 0 )
    {
      do
      {
        v15 = (int *)v1[5];
        if ( *((_WORD *)v15 + 2) == 1 )
          break;
        v16 = *v15;
        v1[5] = v16;
      }
      while ( v16 != 0 );
    }
    v17 = v1[5];
    v1[2] = *(unsigned __int16 *)(v17 + 6) + *(_DWORD *)(a1 + 248);
    *(_DWORD *)(a1 + 384) = v17;
    v18 = v1[2];
    *(_WORD *)(a1 + 380) = 0;
    *(_DWORD *)(a1 + 388) = v18;
  }
  else
  {
    v1[2] = *(_DWORD *)(a1 + 388);
    v1[5] = *(_DWORD *)(a1 + 384);
  }
  v19 = v1[2];
  if ( *(_WORD *)(v19 + 10) == 0 )
    goto LABEL_68;
  v20 = *(unsigned __int16 *)(v19 + 30) + *(_DWORD *)(a1 + 252);
  v1[3] = v20;
  v1[4] = v20;
  if ( v20 == 0 )
    goto LABEL_68;
  do
  {
    v21 = v1[4];
    if ( *(_WORD *)(v21 + 4) != *(_WORD *)(v1[2] + 10) )
      break;
    v22 = v1[4];
    *((_WORD *)v1 + 15) = *(_WORD *)(v21 + 6);
    v23 = *(_DWORD *)(v22 + 24);
    v1[8] = v23;
    if ( v23 != 0 )
    {
      if ( (v23 & 0x40) != 0 )
      {
        if ( *(_DWORD *)(v22 + 28) != *(unsigned __int16 *)(a1 + 326) || *(_BYTE *)(a1 + 332) != 0 )
          goto LABEL_59;
      }
      else if ( (v23 & 4) != 0 && ((*(_DWORD *)(a1 + 348) & 0x2000) == 0 || *(_BYTE *)(a1 + 332) != 0) )
      {
        goto LABEL_59;
      }
      if ( (v23 & 2) != 0 )
      {
        if ( *(_DWORD *)(v1[4] + 28) >= (unsigned int)(unsigned __int16)BugsRand() )
          goto LABEL_59;
      }
      else if ( (v23 & 0x20000) != 0 && *(_DWORD *)(v1[4] + 32) >= (unsigned int)(unsigned __int16)BugsRand() )
      {
        goto LABEL_59;
      }
    }
    if ( *(_BYTE *)(v1[4] + 16) == 0 || TestLogicCond(a1, (_BYTE *)(v1[4] + 16)) != 0 )
    {
      v24 = v1[4];
      if ( *(_BYTE *)(v24 + 19) != 0 )
        RunLogicAction(a1, v24 + 16);
      v25 = v1[8];
      if ( v25 == 0 )
        goto LABEL_63;
      if ( (v25 & 0x600) != 0 )
      {
        if ( (v25 & 0x200) != 0 )
        {
          sub_41DF30(a1, *(_DWORD *)(v1[4] + 28), 1, dword_4B2368);
        }
        else if ( (v25 & 0x400) != 0 )
        {
          sub_41DF30(a1, *(_DWORD *)(v1[4] + 28), 2, dword_4B2368);
        }
      }
      if ( (v1[8] & 0x4000000) != 0 )
      {
        v26 = dword_4B3740;
        *v1 = dword_4B3740;
        if ( v26 != 0 )
        {
          do
          {
            v27 = (int *)*v1;
            if ( *(unsigned __int16 *)(*v1 + 28) == *(_DWORD *)(v1[4] + 32) && (v27[5] & 0x100) == 0 )
              break;
            v28 = *v27;
            *v1 = v28;
          }
          while ( v28 != 0 );
        }
        v29 = *v1;
        if ( *v1 != 0 )
        {
          v30 = *(_DWORD *)(v29 + 20);
          BYTE1(v30) |= 1u;
          *(_DWORD *)(v29 + 20) = v30;
        }
      }
      if ( (v1[8] & 0x80000) != 0 )
      {
        *((_DWORD *)dword_52FD00 + 0x4000) = *(_DWORD *)(v1[4] + 28);
        word_4B39BC = 1;
      }
      if ( (v1[8] & 0x80000000) != 0 )
        sub_437910(a1, *(_DWORD *)(v1[4] + 32), v40);
      v31 = v1[8];
      if ( (v31 & 0x10000) != 0 )
      {
        v33 = *(_DWORD *)(a1 + 20);
        BYTE1(v33) |= 1u;
        *(_DWORD *)(a1 + 20) = v33;
        return v33;
      }
      if ( (v31 & 0x8000) == 0 )
      {
        if ( (v1[8] & 0x10) != 0 )
          break;
LABEL_63:
        v34 = v1[2];
        if ( v34 != 0 )
          v1[10] = *(unsigned __int16 *)(v34 + 6);
        else
          v1[10] = 0;
        v35 = *((unsigned __int16 *)v1 + 15) + *(_DWORD *)(a1 + 244);
        v1[5] = v35;
        v1[2] = *(unsigned __int16 *)(v35 + 6) + *(_DWORD *)(a1 + 248);
        *(_DWORD *)(a1 + 384) = v35;
        v36 = v1[2];
        *(_DWORD *)(a1 + 344) = 0;
        *(_DWORD *)(a1 + 388) = v36;
        *(_WORD *)(a1 + 380) = 0;
        break;
      }
    }
LABEL_59:
    v32 = *(_DWORD *)v1[4];
    v1[4] = v32;
  }
  while ( v32 != 0 );
  v2 = v40;
LABEL_68:
  v37 = v1[2];
  v38 = *(unsigned __int16 *)(v37 + 6);
  if ( *(_DWORD *)(a1 + 344) == (unsigned __int16)v38 )
    v33 = sub_438AE0(a1, a1 + 324, 0, NULL, (int)v2);
  else
    v33 = sub_438AE0(a1, a1 + 324, v38, (_DWORD *)*(unsigned __int16 *)(v37 + 8), (int)v2);
  v1[9] = v33;
  LOWORD(v33) = 256;
  if ( v1[9] == 256 )
  {
    *(_DWORD *)(a1 + 344) = 0;
    if ( (*(_BYTE *)(v1[2] + 12) & 4) != 0 )
    {
      *(_DWORD *)(a1 + 20) |= 0x100u;
    }
    else
    {
      LOWORD(v33) = *(_WORD *)(v1[5] + 2 * (unsigned __int16)++*(_WORD *)(a1 + 380) + 6);
      *((_WORD *)v1 + 14) = v33;
      if ( (_WORD)v33 != 0xFFF0 && *(_WORD *)(a1 + 380) < 5u )
      {
        v33 = *(_DWORD *)(a1 + 248) + (unsigned __int16)v33;
        v1[2] = v33;
        *(_DWORD *)(a1 + 388) = v33;
        *(_DWORD *)(a1 + 344) = 0;
        *(_WORD *)(a1 + 326) = 0;
        *(_BYTE *)(a1 + 332) = 0;
      }
    }
  }
  return v33;
}

// 0x445bd0  sub_445BD0
void __cdecl sub_445BD0(int a1)
{
  char *v2; // esi
  int v3; // edx
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // edx
  int v7; // eax
  __int16 v8; // cx
  int v9; // edx
  int *v10; // ebp
  __int16 v11; // ax
  __int16 v12; // dx
  __int16 v13; // cx
  int v14; // eax
  _DWORD *v15; // ebx
  int v16; // ecx
  __int16 v17; // ax
  int v18; // ecx
  int v19; // eax
  int v20; // edx
  __int16 v21; // ax
  __int16 v22; // ax
  __int16 v23; // dx
  int v24; // eax
  int v25; // edx
  _DWORD *v26; // ebx
  _DWORD *v27; // ebp
  int v28; // edx
  int v29; // eax
  int v30; // edx
  __int16 v31; // ax
  int v32; // edx
  int v33; // ecx
  __int16 v34; // ax
  int v35; // edx
  int v36; // ecx
  __int16 v37; // ax
  int v38; // edx
  int v39; // ecx
  __int16 v40; // ax
  int v41; // edx
  int v42; // ecx
  __int16 v43; // ax
  int v44; // edx
  int v45; // ecx
  __int16 v46; // ax
  int v47; // edx
  int v48; // ecx
  __int16 v49; // ax
  int v50; // edx
  int v51; // ecx
  __int16 v52; // ax
  int v53; // eax
  int v54; // eax
  int v55; // ecx
  __int16 v56; // ax
  __int16 v57; // cx
  int v58; // edx
  int v59; // ecx
  int v60; // eax
  int v61; // ecx
  int v62; // ecx
  int v63; // eax
  int *v64; // ebx
  int v65; // eax
  int v66; // eax
  int v67; // eax
  _DWORD *v68; // ecx
  int v69; // ecx
  int v70; // eax
  int *v71; // [esp+10h] [ebp-4h]
  int v72; // [esp+18h] [ebp+4h]

  v2 = (char *)dword_4EFAC0;
  v71 = (int *)((char *)dword_4EFAC0 + 168);
  if ( *(_DWORD *)(a1 + 120) == 0 )
  {
    v3 = *(_DWORD *)(a1 + 24);
    LOBYTE(v3) = v3 | 0x80;
    *(_DWORD *)(a1 + 24) = v3;
    v4 = sub_448AF0();
    *(_DWORD *)(a1 + 120) = v4;
    if ( v4 == 0 )
    {
      while ( 1 )
        ;
    }
    if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 116) + 8) + 10) & 2) != 0 )
    {
      *(_BYTE *)(v4 + 8) |= 2u;
      GsInitCoordinate2(0, *(_DWORD *)(*(_DWORD *)(a1 + 120) + 16));
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 120) + 16) + 72) = a1 + 124;
      v5 = *(_DWORD *)(a1 + 116);
      *(_DWORD *)(a1 + 192) = a1 + 204;
      *(_DWORD *)(*(_DWORD *)(a1 + 120) + 20) = *(_DWORD *)(*(_DWORD *)(v5 + 8) + 84);
    }
    *((_WORD *)v2 + 70) = 0;
    *((_WORD *)v2 + 64) = 4096;
    *((_WORD *)v2 + 65) = 0;
    *((_WORD *)v2 + 66) = 0;
    *((_WORD *)v2 + 67) = 0;
    *((_WORD *)v2 + 68) = 4096;
    *((_WORD *)v2 + 69) = 0;
    *((_WORD *)v2 + 71) = 0;
    *((_WORD *)v2 + 72) = 4096;
    *((_DWORD *)v2 + 37) = 0;
    *((_DWORD *)v2 + 38) = 0;
    *((_DWORD *)v2 + 39) = 0;
    ScaleMatrix((__int16 *)v2 + 64, (_DWORD *)(a1 + 204));
    ApplyMatrixSV((__int16 *)v2 + 64, (__int16 *)(a1 + 72), (_DWORD *)(a1 + 72));
    ApplyMatrixSV((__int16 *)v2 + 64, (__int16 *)(a1 + 80), (_DWORD *)(a1 + 80));
    if ( *(_DWORD *)(a1 + 120) != 0 && (*(_DWORD *)(a1 + 8) & 0x200000) == 0 )
    {
      v6 = (_DWORD *)(*(_DWORD *)(a1 + 192) + 24);
      *(_DWORD *)(a1 + 124) = 0;
      TransMatrix((_DWORD *)(a1 + 128), v6);
      RotMatrix((__int16 *)(*(_DWORD *)(a1 + 192) + 16), (_WORD *)(a1 + 128));
      ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
    }
    if ( (*(_BYTE *)(a1 + 380) & 0x20) != 0 )
    {
      v7 = *(_DWORD *)(a1 + 20);
      LOBYTE(v7) = v7 | 4;
      *(_DWORD *)(a1 + 20) = v7;
    }
  }
  if ( (*(_BYTE *)(a1 + 380) & 0x40) != 0 )
  {
    *(_DWORD *)(dword_4B324C + 228) -= *(__int16 *)(a1 + 64);
    *(_DWORD *)(dword_4B324C + 236) -= *(__int16 *)(a1 + 68);
    *(_WORD *)(a1 + 64) = 0;
    *(_WORD *)(a1 + 68) = 0;
  }
  else if ( (BYTE1(*(_DWORD *)(a1 + 20)) & 0x80u) != 0 && (*(_DWORD *)(dword_4B324C + 20) & 0x4000) != 0
         || sub_433150(a1, 0x20000, v71) != 0 )
  {
    v72 = *(__int16 *)(a1 + 32) >> 1;
    RotMatrix((__int16 *)(a1 + 220), (_WORD *)v2 + 64);
    *((_WORD *)v2 + 52) = *(_WORD *)(a1 + 72);
    *((_WORD *)v2 + 53) = *(_WORD *)(a1 + 74);
    *((_WORD *)v2 + 54) = *(_WORD *)(a1 + 76);
    *((_WORD *)v2 + 56) = *(_WORD *)(a1 + 80);
    *((_WORD *)v2 + 57) = *(_WORD *)(a1 + 82);
    v8 = *(_WORD *)(a1 + 84);
    *((_WORD *)v2 + 52) -= v72 >> 1;
    *((_WORD *)v2 + 54) -= v72 >> 1;
    *((_WORD *)v2 + 56) += v72 >> 1;
    *((_WORD *)v2 + 58) = v8;
    *((_WORD *)v2 + 58) += v72 >> 1;
    ApplyMatrixSV((__int16 *)v2 + 64, (__int16 *)v2 + 52, (_DWORD *)v2 + 26);
    ApplyMatrixSV((__int16 *)v2 + 64, (__int16 *)v2 + 56, (_DWORD *)v2 + 28);
    v9 = *(__int16 *)(a1 + 64);
    v10 = (int *)(v2 + 24);
    *((_DWORD *)v2 + 7) = 0;
    *((_DWORD *)v2 + 6) = v9;
    *((_DWORD *)v2 + 8) = *(__int16 *)(a1 + 68);
    v11 = *(_WORD *)(a1 + 380);
    if ( (v11 & 4) != 0 )
    {
      *((_DWORD *)v2 + 10) = *(_DWORD *)(a1 + 228);
      *((_DWORD *)v2 + 11) = *(_DWORD *)(a1 + 232);
      *((_DWORD *)v2 + 12) = *(_DWORD *)(a1 + 236);
      if ( (*(_BYTE *)(a1 + 380) & 1) == 0
        || (*((_DWORD *)v2 + 10) += *((__int16 *)v2 + 52), (*(_WORD *)(a1 + 380) & 0x100) != 0) && *v10 < 0
        || (*(_WORD *)(a1 + 380) & 0x200) != 0 && *v10 > 0 )
      {
        *v10 = 0;
      }
      if ( (*(_BYTE *)(a1 + 380) & 2) == 0
        || (*((_DWORD *)v2 + 12) += *((__int16 *)v2 + 54), (*(_WORD *)(a1 + 380) & 0x100) != 0) && *((int *)v2 + 8) < 0
        || (*(_WORD *)(a1 + 380) & 0x200) != 0 && *((int *)v2 + 8) > 0 )
      {
        *((_DWORD *)v2 + 8) = 0;
      }
      v12 = *(_WORD *)v10;
      v13 = *((_WORD *)v2 + 16);
      *((_WORD *)v2 + 61) = *((_WORD *)v2 + 14);
      *((_WORD *)v2 + 60) = v12;
      *((_WORD *)v2 + 62) = v13;
      v14 = sub_433670((_DWORD *)a1, (__int16 *)v2 + 60, (int)v71, 157962);
      *((_DWORD *)v2 + 41) = v14;
      if ( v14 != 0 )
      {
        *(_DWORD *)(v14 + 20) |= 0x40000000u;
        *(_DWORD *)(*((_DWORD *)v2 + 41) + 52) = *(unsigned __int16 *)(a1 + 28);
        *(_DWORD *)(a1 + 52) = *(unsigned __int16 *)(*((_DWORD *)v2 + 41) + 28);
        if ( (*(_DWORD *)(*((_DWORD *)v2 + 41) + 8) & 0x2000000) == 0 )
        {
          if ( (*(_BYTE *)(a1 + 380) & 1) != 0 )
            *v10 = *((__int16 *)v2 + 60);
          if ( (*(_BYTE *)(a1 + 380) & 2) != 0 )
            *((_DWORD *)v2 + 8) = *((__int16 *)v2 + 62);
        }
      }
      v15 = v2 + 40;
      *v71 = 0;
      *((_WORD *)v2 + 5) = *(_WORD *)(a1 + 38);
      sub_434E40((_DWORD *)v2 + 10, (_DWORD *)v2 + 6, (int)v2, (int)v71);
      *((_DWORD *)v2 + 10) = *(_DWORD *)(a1 + 228);
      *((_DWORD *)v2 + 11) = *(_DWORD *)(a1 + 232);
      *((_DWORD *)v2 + 12) = *(_DWORD *)(a1 + 236);
      if ( (*(_BYTE *)(a1 + 380) & 1) != 0 )
        *v15 += *((__int16 *)v2 + 56);
      if ( (*(_BYTE *)(a1 + 380) & 2) != 0 )
        *((_DWORD *)v2 + 12) += *((__int16 *)v2 + 58);
      *v71 = 0;
      *((_WORD *)v2 + 5) = *(_WORD *)(a1 + 38);
      sub_434E40((_DWORD *)v2 + 10, (_DWORD *)v2 + 6, (int)v2, (int)v71);
      if ( *(char *)(a1 + 380) < 0 )
      {
        v16 = *((_DWORD *)v2 + 8);
        *v15 = *(_DWORD *)(a1 + 228) + *v10;
        *((_DWORD *)v2 + 11) = *(_DWORD *)(a1 + 232);
        *((_DWORD *)v2 + 12) = *(_DWORD *)(a1 + 236) + v16;
        *((_WORD *)v2 + 5) = *(_WORD *)(a1 + 38);
        sub_436D90((_DWORD *)v2 + 10, (int)v2, (int)v71);
        v17 = *((_WORD *)v2 + 1);
        if ( (v17 & 2) != 0 && *((_DWORD *)v2 + 11) + *((__int16 *)v2 + 3) - *(_DWORD *)(a1 + 232) > 200 )
        {
          LOBYTE(v17) = v17 | 8;
          *((_WORD *)v2 + 1) = v17;
        }
        if ( (v2[2] & 8) != 0 )
        {
          *((_DWORD *)v2 + 8) = 0;
          *v10 = 0;
        }
      }
      v18 = *(_DWORD *)(a1 + 236);
      *(_DWORD *)(a1 + 228) += *v10;
      *(_DWORD *)(a1 + 236) = *((_DWORD *)v2 + 8) + v18;
      *(_DWORD *)(dword_4B324C + 228) += *v10 - *(__int16 *)(a1 + 64);
      v19 = dword_4B324C;
      v20 = *((_DWORD *)v2 + 8) - *(__int16 *)(a1 + 68);
    }
    else
    {
      if ( (v11 & 1) == 0 || (v11 & 0x300) != 0 && ((v11 & 0x100) != 0 && *v10 < 0 || (v11 & 0x200) != 0 && *v10 > 0) )
        *v10 = 0;
      v21 = *(_WORD *)(a1 + 380);
      if ( (v21 & 2) == 0
        || (v21 & 0x300) != 0
        && ((v21 & 0x100) != 0 && *((int *)v2 + 8) < 0 || (v21 & 0x200) != 0 && *((int *)v2 + 8) > 0) )
      {
        *((_DWORD *)v2 + 8) = 0;
      }
      v22 = *(_WORD *)v10;
      v23 = *((_WORD *)v2 + 16);
      *((_WORD *)v2 + 61) = *((_WORD *)v2 + 14);
      *((_WORD *)v2 + 60) = v22;
      *((_WORD *)v2 + 62) = v23;
      *(_DWORD *)(a1 + 112) = dword_4B324C;
      v24 = sub_433670((_DWORD *)a1, (__int16 *)v2 + 60, (int)v71, 157962);
      *((_DWORD *)v2 + 41) = v24;
      if ( v24 != 0 )
      {
        *(_DWORD *)(v24 + 20) |= 0x40000000u;
        *(_DWORD *)(*((_DWORD *)v2 + 41) + 52) = *(unsigned __int16 *)(a1 + 28);
        *(_DWORD *)(a1 + 52) = *(unsigned __int16 *)(*((_DWORD *)v2 + 41) + 28);
        if ( (*(_DWORD *)(*((_DWORD *)v2 + 41) + 8) & 0x2000000) == 0 )
        {
          if ( (*(_BYTE *)(a1 + 380) & 1) != 0 )
            *v10 = *((__int16 *)v2 + 60);
          if ( (*(_BYTE *)(a1 + 380) & 2) != 0 )
            *((_DWORD *)v2 + 8) = *((__int16 *)v2 + 62);
        }
      }
      v25 = *(_DWORD *)(a1 + 228);
      *(_DWORD *)(a1 + 112) = 0;
      v26 = v2 + 40;
      v27 = v2 + 88;
      *((_DWORD *)v2 + 10) = *((__int16 *)v2 + 52) + v25;
      v28 = *((__int16 *)v2 + 54);
      *((_DWORD *)v2 + 11) = *(_DWORD *)(a1 + 232);
      v29 = v28 + *(_DWORD *)(a1 + 236);
      v30 = *((_DWORD *)v2 + 6);
      *((_DWORD *)v2 + 12) = v29;
      *((_DWORD *)v2 + 22) = v30;
      *((_DWORD *)v2 + 24) = 0;
      *((_DWORD *)v2 + 23) = 0;
      *v71 = 0;
      *((_WORD *)v2 + 5) = *(_WORD *)(a1 + 38);
      sub_434E40((_DWORD *)v2 + 10, (_DWORD *)v2 + 22, (int)v2, (int)v71);
      *((_DWORD *)v2 + 6) = *((_DWORD *)v2 + 22);
      if ( *(char *)(a1 + 380) < 0 )
      {
        v31 = *((_WORD *)v2 + 1);
        if ( (v31 & 2) != 0 && *((_DWORD *)v2 + 11) + *((__int16 *)v2 + 3) - *(_DWORD *)(a1 + 232) > 200 )
        {
          LOBYTE(v31) = v31 | 8;
          *((_WORD *)v2 + 1) = v31;
        }
        if ( (v2[2] & 8) != 0 )
        {
          *((_DWORD *)v2 + 8) = 0;
          *((_DWORD *)v2 + 6) = 0;
        }
      }
      v32 = *((__int16 *)v2 + 54);
      *v26 = *((__int16 *)v2 + 52) + *(_DWORD *)(a1 + 228);
      *((_DWORD *)v2 + 11) = *(_DWORD *)(a1 + 232);
      v33 = *((_DWORD *)v2 + 8);
      *((_DWORD *)v2 + 12) = v32 + *(_DWORD *)(a1 + 236);
      *((_DWORD *)v2 + 24) = v33;
      *v27 = 0;
      *((_DWORD *)v2 + 23) = 0;
      *v71 = 0;
      *((_WORD *)v2 + 5) = *(_WORD *)(a1 + 38);
      sub_434E40((_DWORD *)v2 + 10, (_DWORD *)v2 + 22, (int)v2, (int)v71);
      *((_DWORD *)v2 + 8) = *((_DWORD *)v2 + 24);
      if ( *(char *)(a1 + 380) < 0 )
      {
        v34 = *((_WORD *)v2 + 1);
        if ( (v34 & 2) != 0 && *((_DWORD *)v2 + 11) + *((__int16 *)v2 + 3) - *(_DWORD *)(a1 + 232) > 200 )
        {
          LOBYTE(v34) = v34 | 8;
          *((_WORD *)v2 + 1) = v34;
        }
        if ( (v2[2] & 8) != 0 )
        {
          *((_DWORD *)v2 + 8) = 0;
          *((_DWORD *)v2 + 6) = 0;
        }
      }
      v35 = *((__int16 *)v2 + 54);
      *v26 = *((__int16 *)v2 + 56) + *(_DWORD *)(a1 + 228);
      *((_DWORD *)v2 + 11) = *(_DWORD *)(a1 + 232);
      v36 = *((_DWORD *)v2 + 6);
      *((_DWORD *)v2 + 12) = v35 + *(_DWORD *)(a1 + 236);
      *v27 = v36;
      *((_DWORD *)v2 + 24) = 0;
      *((_DWORD *)v2 + 23) = 0;
      *v71 = 0;
      *((_WORD *)v2 + 5) = *(_WORD *)(a1 + 38);
      sub_434E40((_DWORD *)v2 + 10, (_DWORD *)v2 + 22, (int)v2, (int)v71);
      *((_DWORD *)v2 + 6) = *v27;
      if ( *(char *)(a1 + 380) < 0 )
      {
        v37 = *((_WORD *)v2 + 1);
        if ( (v37 & 2) != 0 && *((_DWORD *)v2 + 11) + *((__int16 *)v2 + 3) - *(_DWORD *)(a1 + 232) > 200 )
        {
          LOBYTE(v37) = v37 | 8;
          *((_WORD *)v2 + 1) = v37;
        }
        if ( (v2[2] & 8) != 0 )
        {
          *((_DWORD *)v2 + 8) = 0;
          *((_DWORD *)v2 + 6) = 0;
        }
      }
      v38 = *((__int16 *)v2 + 54);
      *v26 = *((__int16 *)v2 + 56) + *(_DWORD *)(a1 + 228);
      *((_DWORD *)v2 + 11) = *(_DWORD *)(a1 + 232);
      v39 = *((_DWORD *)v2 + 8);
      *((_DWORD *)v2 + 12) = v38 + *(_DWORD *)(a1 + 236);
      *((_DWORD *)v2 + 24) = v39;
      *v27 = 0;
      *((_DWORD *)v2 + 23) = 0;
      *v71 = 0;
      *((_WORD *)v2 + 5) = *(_WORD *)(a1 + 38);
      sub_434E40((_DWORD *)v2 + 10, (_DWORD *)v2 + 22, (int)v2, (int)v71);
      *((_DWORD *)v2 + 8) = *((_DWORD *)v2 + 24);
      if ( *(char *)(a1 + 380) < 0 )
      {
        v40 = *((_WORD *)v2 + 1);
        if ( (v40 & 2) != 0 && *((_DWORD *)v2 + 11) + *((__int16 *)v2 + 3) - *(_DWORD *)(a1 + 232) > 200 )
        {
          LOBYTE(v40) = v40 | 8;
          *((_WORD *)v2 + 1) = v40;
        }
        if ( (v2[2] & 8) != 0 )
        {
          *((_DWORD *)v2 + 8) = 0;
          *((_DWORD *)v2 + 6) = 0;
        }
      }
      v41 = *((__int16 *)v2 + 58);
      *v26 = *((__int16 *)v2 + 52) + *(_DWORD *)(a1 + 228);
      *((_DWORD *)v2 + 11) = *(_DWORD *)(a1 + 232);
      v42 = *((_DWORD *)v2 + 6);
      *((_DWORD *)v2 + 12) = v41 + *(_DWORD *)(a1 + 236);
      *v27 = v42;
      *((_DWORD *)v2 + 24) = 0;
      *((_DWORD *)v2 + 23) = 0;
      *v71 = 0;
      *((_WORD *)v2 + 5) = *(_WORD *)(a1 + 38);
      sub_434E40((_DWORD *)v2 + 10, (_DWORD *)v2 + 22, (int)v2, (int)v71);
      *((_DWORD *)v2 + 6) = *v27;
      if ( *(char *)(a1 + 380) < 0 )
      {
        v43 = *((_WORD *)v2 + 1);
        if ( (v43 & 2) != 0 && *((_DWORD *)v2 + 11) + *((__int16 *)v2 + 3) - *(_DWORD *)(a1 + 232) > 200 )
        {
          LOBYTE(v43) = v43 | 8;
          *((_WORD *)v2 + 1) = v43;
        }
        if ( (v2[2] & 8) != 0 )
        {
          *((_DWORD *)v2 + 8) = 0;
          *((_DWORD *)v2 + 6) = 0;
        }
      }
      v44 = *((__int16 *)v2 + 58);
      *v26 = *((__int16 *)v2 + 56) + *(_DWORD *)(a1 + 228);
      *((_DWORD *)v2 + 11) = *(_DWORD *)(a1 + 232);
      v45 = *((_DWORD *)v2 + 8);
      *((_DWORD *)v2 + 12) = v44 + *(_DWORD *)(a1 + 236);
      *((_DWORD *)v2 + 24) = v45;
      *v27 = 0;
      *((_DWORD *)v2 + 23) = 0;
      *v71 = 0;
      *((_WORD *)v2 + 5) = *(_WORD *)(a1 + 38);
      sub_434E40((_DWORD *)v2 + 10, (_DWORD *)v2 + 22, (int)v2, (int)v71);
      *((_DWORD *)v2 + 8) = *((_DWORD *)v2 + 24);
      if ( *(char *)(a1 + 380) < 0 )
      {
        v46 = *((_WORD *)v2 + 1);
        if ( (v46 & 2) != 0 && *((_DWORD *)v2 + 11) + *((__int16 *)v2 + 3) - *(_DWORD *)(a1 + 232) > 200 )
        {
          LOBYTE(v46) = v46 | 8;
          *((_WORD *)v2 + 1) = v46;
        }
        if ( (v2[2] & 8) != 0 )
        {
          *((_DWORD *)v2 + 8) = 0;
          *((_DWORD *)v2 + 6) = 0;
        }
      }
      v47 = *((__int16 *)v2 + 58);
      *v26 = *((__int16 *)v2 + 56) + *(_DWORD *)(a1 + 228);
      *((_DWORD *)v2 + 11) = *(_DWORD *)(a1 + 232);
      v48 = *((_DWORD *)v2 + 6);
      *((_DWORD *)v2 + 12) = v47 + *(_DWORD *)(a1 + 236);
      *v27 = v48;
      *((_DWORD *)v2 + 24) = 0;
      *((_DWORD *)v2 + 23) = 0;
      *v71 = 0;
      *((_WORD *)v2 + 5) = *(_WORD *)(a1 + 38);
      sub_434E40((_DWORD *)v2 + 10, (_DWORD *)v2 + 22, (int)v2, (int)v71);
      *((_DWORD *)v2 + 6) = *v27;
      if ( *(char *)(a1 + 380) < 0 )
      {
        v49 = *((_WORD *)v2 + 1);
        if ( (v49 & 2) != 0 && *((_DWORD *)v2 + 11) + *((__int16 *)v2 + 3) - *(_DWORD *)(a1 + 232) > 200 )
        {
          LOBYTE(v49) = v49 | 8;
          *((_WORD *)v2 + 1) = v49;
        }
        if ( (v2[2] & 8) != 0 )
        {
          *((_DWORD *)v2 + 8) = 0;
          *((_DWORD *)v2 + 6) = 0;
        }
      }
      v50 = *((__int16 *)v2 + 58);
      *v26 = *((__int16 *)v2 + 56) + *(_DWORD *)(a1 + 228);
      *((_DWORD *)v2 + 11) = *(_DWORD *)(a1 + 232);
      v51 = *((_DWORD *)v2 + 8);
      *((_DWORD *)v2 + 12) = v50 + *(_DWORD *)(a1 + 236);
      *((_DWORD *)v2 + 24) = v51;
      *v27 = 0;
      *((_DWORD *)v2 + 23) = 0;
      *v71 = 0;
      *((_WORD *)v2 + 5) = *(_WORD *)(a1 + 38);
      sub_434E40((_DWORD *)v2 + 10, (_DWORD *)v2 + 22, (int)v2, (int)v71);
      *((_DWORD *)v2 + 8) = *((_DWORD *)v2 + 24);
      if ( *(char *)(a1 + 380) < 0 )
      {
        v52 = *((_WORD *)v2 + 1);
        if ( (v52 & 2) != 0 && *((_DWORD *)v2 + 11) + *((__int16 *)v2 + 3) - *(_DWORD *)(a1 + 232) > 200 )
        {
          LOBYTE(v52) = v52 | 8;
          *((_WORD *)v2 + 1) = v52;
        }
        if ( (v2[2] & 8) != 0 )
        {
          *((_DWORD *)v2 + 8) = 0;
          *((_DWORD *)v2 + 6) = 0;
        }
      }
      if ( *(char *)(a1 + 12) >= 0 )
      {
        v53 = *((_DWORD *)v2 + 6);
        if ( v53 != 0 )
        {
          *((_DWORD *)v2 + 11) = *(_DWORD *)(a1 + 232);
          *((_DWORD *)v2 + 12) = *(__int16 *)(a1 + 76) + *(_DWORD *)(a1 + 236) - v72;
          *v26 = v53 >= 0
               ? *(__int16 *)(a1 + 80) + *(_DWORD *)(a1 + 228) + v72
               : *(__int16 *)(a1 + 72) + *(_DWORD *)(a1 + 228) - v72;
          *v27 = 0;
          *((_DWORD *)v2 + 23) = 0;
          *((_DWORD *)v2 + 24) = *(__int16 *)(a1 + 84) + v72 - *(__int16 *)(a1 + 76);
          *v71 = 0;
          *((_WORD *)v2 + 5) = *(_WORD *)(a1 + 38);
          sub_434E40((_DWORD *)v2 + 10, (_DWORD *)v2 + 22, (int)v2, (int)v71);
          if ( (v2[2] & 4) != 0 )
            *((_DWORD *)v2 + 6) = 0;
        }
        v54 = *((_DWORD *)v2 + 8);
        if ( v54 != 0 )
        {
          *v26 = *(__int16 *)(a1 + 72) + *(_DWORD *)(a1 + 228) - v72;
          *((_DWORD *)v2 + 11) = *(_DWORD *)(a1 + 232);
          *((_DWORD *)v2 + 12) = v54 >= 0
                               ? *(__int16 *)(a1 + 84) + *(_DWORD *)(a1 + 236) + v72
                               : *(__int16 *)(a1 + 76) + *(_DWORD *)(a1 + 236) - v72;
          *((_DWORD *)v2 + 24) = 0;
          *((_DWORD *)v2 + 23) = 0;
          *v27 = *(__int16 *)(a1 + 80) + v72 - *(__int16 *)(a1 + 72);
          *v71 = 0;
          *((_WORD *)v2 + 5) = *(_WORD *)(a1 + 38);
          sub_434E40((_DWORD *)v2 + 10, (_DWORD *)v2 + 22, (int)v2, (int)v71);
          if ( (v2[2] & 4) != 0 )
            *((_DWORD *)v2 + 8) = 0;
        }
      }
      if ( *(char *)(a1 + 380) < 0 )
      {
        v55 = *((_DWORD *)v2 + 8);
        *v26 = *(_DWORD *)(a1 + 228) + *((_DWORD *)v2 + 6);
        *((_DWORD *)v2 + 11) = *(_DWORD *)(a1 + 232);
        *((_DWORD *)v2 + 12) = *(_DWORD *)(a1 + 236) + v55;
        *((_WORD *)v2 + 5) = *(_WORD *)(a1 + 38);
        sub_436D90((_DWORD *)v2 + 10, (int)v2, (int)v71);
        v56 = *((_WORD *)v2 + 1);
        if ( (v56 & 2) != 0 && *((_DWORD *)v2 + 11) + *((__int16 *)v2 + 3) - *(_DWORD *)(a1 + 232) > 200 )
        {
          LOBYTE(v56) = v56 | 8;
          *((_WORD *)v2 + 1) = v56;
        }
        if ( (v2[2] & 8) != 0 )
        {
          *((_DWORD *)v2 + 8) = 0;
          *((_DWORD *)v2 + 6) = 0;
        }
      }
      v57 = *(_WORD *)(a1 + 30);
      v58 = *(_DWORD *)(a1 + 228);
      *(_DWORD *)(a1 + 236) += *((_DWORD *)v2 + 8);
      *(_DWORD *)(a1 + 228) = *((_DWORD *)v2 + 6) + v58;
      word_4B2160 = v57;
      v59 = *(_DWORD *)(a1 + 24);
      BYTE1(v59) |= 0x80u;
      *(_DWORD *)(a1 + 24) = v59;
      if ( *((_DWORD *)v2 + 6) != 0 || *((_DWORD *)v2 + 8) != 0 )
      {
        if ( (byte_4B39D0 & 1) == 0 )
        {
          byte_4B39D0 |= 1u;
          sub_41DF30(a1, word_4B2160, 1, dword_4B2368);
        }
      }
      else if ( (byte_4B39D0 & 1) != 0 )
      {
        byte_4B39D0 &= ~1u;
        sub_41DF30(a1, word_4B2160, 2, dword_4B2368);
      }
      v60 = *(__int16 *)(a1 + 64);
      v61 = *((_DWORD *)v2 + 6);
      *((_DWORD *)v2 + 23) = 0;
      v62 = v61 - v60;
      v63 = *((_DWORD *)v2 + 8);
      *v27 = v62;
      *((_DWORD *)v2 + 24) = v63 - *(__int16 *)(a1 + 68);
      *v26 = *(_DWORD *)(dword_4B324C + 228);
      *((_DWORD *)v2 + 11) = *(_DWORD *)(dword_4B324C + 232);
      *((_DWORD *)v2 + 12) = *(_DWORD *)(dword_4B324C + 236);
      *((_WORD *)v2 + 5) = *(_WORD *)(a1 + 38);
      sub_434E40((_DWORD *)v2 + 10, (_DWORD *)v2 + 22, (int)v2, (int)v71);
      *(_DWORD *)(dword_4B324C + 228) += *v27;
      v19 = dword_4B324C;
      v20 = *((_DWORD *)v2 + 24);
    }
    *(_DWORD *)(v19 + 236) += v20;
    v64 = *(int **)(a1 + 252);
    if ( v64 != NULL )
    {
      while ( 1 )
      {
        v65 = v64[2];
        if ( (v65 == 0 || (v65 & *(_DWORD *)(a1 + 20)) != 0) && TestLogicCond(a1, (_BYTE *)v64 + 16) != 0 )
          break;
        v64 = (int *)*v64;
        if ( v64 == NULL )
        {
          *(_DWORD *)(a1 + 112) = 0;
          goto LABEL_151;
        }
      }
      RunLogicAction(a1, (int)(v64 + 4));
    }
    *(_DWORD *)(a1 + 112) = 0;
  }
  else
  {
    v66 = *(_DWORD *)(a1 + 24);
    if ( (v66 & 0x8000) != 0 )
    {
      BYTE1(v66) &= ~0x80u;
      *(_DWORD *)(a1 + 24) = v66;
      if ( (byte_4B39D0 & 1) != 0 )
      {
        byte_4B39D0 &= ~1u;
        sub_41DF30(a1, word_4B2160, 2, dword_4B2368);
      }
    }
  }
LABEL_151:
  *((_DWORD *)v2 + 6) = 0;
  *((_DWORD *)v2 + 7) = 0;
  *((_DWORD *)v2 + 8) = 0;
  sub_437500(a1, (_DWORD *)v2 + 6, (int)v2, (int)v71);
  v67 = *(_DWORD *)(a1 + 120);
  *(_DWORD *)(a1 + 232) += *((_DWORD *)v2 + 7);
  if ( v67 != 0 && (*(_DWORD *)(a1 + 8) & 0x200000) == 0 )
  {
    v68 = (_DWORD *)(*(_DWORD *)(a1 + 192) + 24);
    *(_DWORD *)(a1 + 124) = 0;
    TransMatrix((_DWORD *)(a1 + 128), v68);
    RotMatrix((__int16 *)(*(_DWORD *)(a1 + 192) + 16), (_WORD *)(a1 + 128));
    ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
  }
  v69 = *(_DWORD *)(a1 + 20);
  v70 = *(_DWORD *)(a1 + 8);
  BYTE1(v69) &= 0x5Fu;
  *(_WORD *)(a1 + 68) = 0;
  *(_WORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 20) = v69;
  if ( (v70 & 0x1000000) != 0 )
    sub_438610(a1, (int **)v71);
}

// 0x446b00  sub_446B00
__int16 __cdecl sub_446B00(int a1)
{
  char *v1; // esi
  int *v2; // ebp
  int v3; // eax
  int *v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int *v13; // eax
  int v14; // eax
  int v15; // ecx
  __int16 v16; // ax
  int v17; // eax
  int *v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  _DWORD *v27; // ebx
  int v28; // edx
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // edx
  int v33; // ecx
  int v34; // edx
  int v35; // eax

  v1 = (char *)dword_4EFAC0;
  v2 = (int *)((char *)dword_4EFAC0 + 68);
  if ( *(_DWORD *)(a1 + 120) == 0 && (*(_DWORD *)(a1 + 348) & 0x4000) == 0 )
  {
    v3 = *(_DWORD *)(a1 + 244);
    *((_DWORD *)dword_4EFAC0 + 3) = v3;
    *((_DWORD *)v1 + 6) = 2;
    if ( v3 != 0 )
    {
      do
      {
        v4 = *((int **)v1 + 3);
        if ( *((_WORD *)v4 + 2) == 2 )
          break;
        v5 = *v4;
        *((_DWORD *)v1 + 3) = v5;
      }
      while ( v5 != 0 );
    }
    v6 = *(_DWORD *)(a1 + 24);
    LOBYTE(v6) = v6 | 0x80;
    *(_DWORD *)(a1 + 24) = v6;
    if ( *((_DWORD *)v1 + 3) == 0 )
    {
      v7 = *(_DWORD *)(a1 + 244);
      *((_DWORD *)v1 + 6) = 1;
      *((_DWORD *)v1 + 3) = v7;
      if ( v7 != 0 )
      {
        do
        {
          v8 = *((int **)v1 + 3);
          if ( *((_WORD *)v8 + 2) == 1 )
            break;
          v9 = *v8;
          *((_DWORD *)v1 + 3) = v9;
        }
        while ( v9 != 0 );
      }
    }
    *(_WORD *)(a1 + 382) = *((_WORD *)v1 + 12);
    *(_DWORD *)(a1 + 384) = *((_DWORD *)v1 + 3);
    *(_WORD *)(a1 + 380) = 0;
    v10 = *(unsigned __int16 *)(*((_DWORD *)v1 + 3) + 6) + *(_DWORD *)(a1 + 248);
    *(_DWORD *)v1 = v10;
    *(_DWORD *)(a1 + 388) = v10;
  }
  *((_DWORD *)v1 + 3) = *(_DWORD *)(a1 + 244);
  v11 = *((_DWORD *)v1 + 3);
  v12 = *(unsigned __int16 *)(a1 + 382);
  *((_DWORD *)v1 + 6) = (unsigned __int16)v12;
  if ( v11 != 0 )
  {
    do
    {
      v13 = *((int **)v1 + 3);
      if ( *((unsigned __int16 *)v13 + 2) == v12 )
        break;
      v14 = *v13;
      *((_DWORD *)v1 + 3) = v14;
    }
    while ( v14 != 0 );
  }
  v15 = *((_DWORD *)v1 + 3);
  v16 = *(_WORD *)(v15 + 2 * *(unsigned __int16 *)(a1 + 380) + 6);
  *((_WORD *)v1 + 10) = v16;
  if ( v16 == -16 || *(_WORD *)(a1 + 380) >= 5u )
  {
    v17 = *(_DWORD *)(a1 + 244);
    *((_DWORD *)v1 + 3) = v17;
    if ( v17 != 0 )
    {
      do
      {
        v18 = *((int **)v1 + 3);
        if ( *((_WORD *)v18 + 2) == 1 )
          break;
        v19 = *v18;
        *((_DWORD *)v1 + 3) = v19;
      }
      while ( v19 != 0 );
    }
    v20 = *(_DWORD *)(a1 + 20);
    *(_WORD *)(a1 + 382) = 1;
    *(_DWORD *)(a1 + 384) = *((_DWORD *)v1 + 3);
    v21 = *(_DWORD *)(a1 + 248);
    *(_WORD *)(a1 + 380) = 0;
    *(_DWORD *)(a1 + 20) = v20 & 0xF9FFFFDF;
    v22 = *(unsigned __int16 *)(*((_DWORD *)v1 + 3) + 6);
    *(_DWORD *)v1 = v21 + v22;
    *(_DWORD *)(a1 + 388) = v21 + v22;
    v23 = *((_DWORD *)v1 + 3);
    *(_DWORD *)(a1 + 344) = 0;
    *(_DWORD *)(a1 + 384) = v23;
  }
  else
  {
    *(_DWORD *)v1 = *(_DWORD *)(a1 + 248) + *(unsigned __int16 *)(v15 + 2 * *(unsigned __int16 *)(a1 + 380) + 6);
  }
  *(_DWORD *)(a1 + 388) = *(_DWORD *)v1;
  *(_DWORD *)(a1 + 384) = *((_DWORD *)v1 + 3);
  if ( (*(_DWORD *)(*(_DWORD *)v1 + 12) & 0x20000) != 0 )
  {
    v24 = sub_433300(a1, 128, v2);
    *((_DWORD *)v1 + 7) = v24;
    if ( v24 != 0 )
    {
      *(_DWORD *)(v24 + 20) |= 0x2000000u;
      *(_DWORD *)(*((_DWORD *)v1 + 7) + 52) = *(unsigned __int16 *)(a1 + 28);
      *(_DWORD *)(a1 + 52) = *(unsigned __int16 *)(*((_DWORD *)v1 + 7) + 28);
      *(_WORD *)(*((_DWORD *)v1 + 7) + 56) = *(_WORD *)(*(_DWORD *)v1 + 22);
    }
  }
  v25 = *(unsigned __int16 *)(*(_DWORD *)v1 + 6);
  if ( *(_DWORD *)(a1 + 344) == (unsigned __int16)v25 )
  {
    v26 = sub_439550(a1, a1 + 324, 0, 0, (int)v2);
    if ( v26 == 256 )
    {
      *(_DWORD *)(a1 + 344) = 0;
      if ( (*(_BYTE *)(*(_DWORD *)v1 + 12) & 4) != 0 )
      {
LABEL_35:
        v26 = *(_DWORD *)(a1 + 20);
        BYTE1(v26) |= 1u;
        *(_DWORD *)(a1 + 20) = v26;
        return v26;
      }
      ++*(_WORD *)(a1 + 380);
    }
  }
  else
  {
    LOWORD(v26) = sub_439550(a1, a1 + 324, v25, *(_WORD *)(*(_DWORD *)v1 + 8), (int)v2);
  }
  if ( *(_DWORD *)(a1 + 196) != 0 )
  {
    *((_WORD *)v1 + 17) = 0;
    *((_WORD *)v1 + 16) = 0;
    *((_WORD *)v1 + 18) = 4096;
    *((_WORD *)v1 + 28) = 0;
    *((_WORD *)v1 + 29) = 0;
    *((_WORD *)v1 + 30) = 0;
    *((_DWORD *)v1 + 16) = a1 + 124;
    if ( a1 != -124 )
    {
      v27 = v1 + 40;
      do
      {
        gte_ApplyMatrix((__int16 *)(*((_DWORD *)v1 + 16) + 4), (__int16 *)v1 + 28, (int *)v1 + 10);
        gte_ApplyMatrixSV((__int16 *)(*((_DWORD *)v1 + 16) + 4), (__int16 *)v1 + 16, (_DWORD *)v1 + 8);
        v28 = *((_DWORD *)v1 + 16);
        v29 = *((_DWORD *)v1 + 11);
        *v27 += *(_DWORD *)(v28 + 24);
        v30 = v28;
        v31 = *(_DWORD *)(v28 + 28) + v29;
        v32 = *((_DWORD *)v1 + 12);
        *((_DWORD *)v1 + 11) = v31;
        v33 = *(_DWORD *)(v30 + 32);
        *((_WORD *)v1 + 29) = *((_WORD *)v1 + 22);
        *((_DWORD *)v1 + 12) = v33 + v32;
        LOWORD(v33) = *((_WORD *)v1 + 24);
        *((_WORD *)v1 + 28) = *(_WORD *)v27;
        v34 = *((_DWORD *)v1 + 16);
        *((_WORD *)v1 + 30) = v33;
        v35 = *(_DWORD *)(v34 + 72);
        *((_DWORD *)v1 + 16) = v35;
      }
      while ( v35 != 0 );
    }
    *(_WORD *)(a1 + 222) = ratan2(*((__int16 *)v1 + 16), *((__int16 *)v1 + 18));
    *(_WORD *)(a1 + 224) = 0;
    *(_WORD *)(a1 + 220) = 0;
    *(_DWORD *)(a1 + 228) = *((__int16 *)v1 + 28);
    v26 = *((__int16 *)v1 + 29);
    *(_DWORD *)(a1 + 232) = v26;
    *(_DWORD *)(a1 + 236) = *((__int16 *)v1 + 30);
  }
  if ( *(_DWORD *)(a1 + 112) == 0 )
    goto LABEL_35;
  return v26;
}

// 0x446e80  sub_446E80
__int16 __cdecl sub_446E80(int a1)
{
  void *v1; // edi
  __int16 *v2; // ebp
  int v3; // edx
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  __int16 v11; // ax
  int v12; // eax
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  __int16 v19; // ax
  int v20; // eax
  int v21; // ecx
  int v22; // ebx
  int v23; // edx
  int **v25; // [esp+10h] [ebp-4h]

  v1 = dword_4EFAC0;
  v25 = (int **)((char *)dword_4EFAC0 + 152);
  v2 = (__int16 *)((char *)dword_4EFAC0 + 88);
  *((_WORD *)dword_4EFAC0 + 46) = 0;
  *((_WORD *)v1 + 45) = 0;
  *v2 = 0;
  if ( *(_DWORD *)(a1 + 120) != 0 )
  {
    *((_WORD *)v1 + 46) = *(_WORD *)(a1 + 32);
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 24);
    LOBYTE(v3) = v3 | 0x80;
    *(_DWORD *)(a1 + 24) = v3;
    v4 = sub_448AF0();
    *(_DWORD *)(a1 + 120) = v4;
    if ( v4 == 0 )
    {
      while ( 1 )
        ;
    }
    if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 116) + 8) + 10) & 2) != 0 )
    {
      *(_WORD *)(v4 + 8) |= 2u;
      GsInitCoordinate2(0, *(_DWORD *)(*(_DWORD *)(a1 + 120) + 16));
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 120) + 16) + 72) = a1 + 124;
      v5 = *(_DWORD *)(a1 + 116);
      *(_DWORD *)(a1 + 192) = a1 + 204;
      *(_DWORD *)(*(_DWORD *)(a1 + 120) + 20) = *(_DWORD *)(*(_DWORD *)(v5 + 8) + 84);
    }
    v6 = *(_DWORD *)(a1 + 120);
    *(_BYTE *)(a1 + 60) |= 0x40u;
    *(_WORD *)(v6 + 124) = 0;
    *(_WORD *)(*(_DWORD *)(a1 + 120) + 126) = 0;
    *(_WORD *)(*(_DWORD *)(a1 + 120) + 128) = 0;
    *(_DWORD *)(*(_DWORD *)(a1 + 120) + 108) = 0;
    *(_DWORD *)(*(_DWORD *)(a1 + 120) + 112) = 0;
    *(_DWORD *)(*(_DWORD *)(a1 + 120) + 116) = 0;
    *(_DWORD *)(*(_DWORD *)(a1 + 120) + 132) = 0;
    *(_DWORD *)(*(_DWORD *)(a1 + 120) + 136) = 0;
    *(_DWORD *)(*(_DWORD *)(a1 + 120) + 140) = 0;
    v7 = *(_DWORD *)(a1 + 12);
    *(_WORD *)(a1 + 34) = 0;
    if ( (v7 & 0x20020) == 0 )
    {
      *((_DWORD *)v1 + 6) = *(_DWORD *)(dword_4B324C + 228) - *(_DWORD *)(a1 + 228);
      *((_DWORD *)v1 + 7) = (*(__int16 *)(dword_4B324C + 82) >> 1)
                          + *(_DWORD *)(dword_4B324C + 232)
                          - *(_DWORD *)(a1 + 232);
      v8 = *(_DWORD *)(dword_4B324C + 236) - *(_DWORD *)(a1 + 236);
      v9 = *((_DWORD *)v1 + 6);
      *((_DWORD *)v1 + 8) = v8;
      v10 = SquareRoot0(v8 * v8 + v9 * v9);
      v11 = ratan2(*((_DWORD *)v1 + 7), v10);
      *(_WORD *)(a1 + 224) = 0;
      *(_WORD *)(a1 + 220) = -v11;
      *(_DWORD *)(a1 + 108) = 0;
    }
    TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
    if ( (*(_BYTE *)(a1 + 12) & 0x20) == 0 )
    {
      RotMatrixZYX((__int16 *)(*(_DWORD *)(a1 + 192) + 16), (_WORD *)(a1 + 128));
      ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
    }
    sub_448EB0(20, a1 + 228, a1 + 220);
  }
  if ( *(_WORD *)(a1 + 34) <= 0x3Cu )
  {
    gte_ApplyMatrix((__int16 *)(a1 + 128), v2, (int *)v1 + 6);
    v13 = *((_DWORD *)v1 + 6);
    v14 = *((_DWORD *)v1 + 8);
    *((_DWORD *)v1 + 15) = *((_DWORD *)v1 + 7);
    *((_DWORD *)v1 + 16) = v14;
    *((_DWORD *)v1 + 14) = v13;
    *((_DWORD *)v1 + 10) = *(_DWORD *)(a1 + 228);
    *((_DWORD *)v1 + 11) = *(_DWORD *)(a1 + 232);
    *((_DWORD *)v1 + 12) = *(_DWORD *)(a1 + 236);
    *((_WORD *)v1 + 5) = *(_WORD *)(a1 + 38);
    sub_434E40((_DWORD *)v1 + 10, (_DWORD *)v1 + 14, (int)v1, (int)v25);
    v15 = *((_DWORD *)v1 + 16);
    *((_DWORD *)v1 + 10) = *(_DWORD *)(a1 + 228) + *((_DWORD *)v1 + 14);
    v16 = *((_DWORD *)v1 + 7);
    *((_DWORD *)v1 + 12) = *(_DWORD *)(a1 + 236) + v15;
    *((_DWORD *)v1 + 11) = *(_DWORD *)(a1 + 232) + v16;
    v17 = sub_4334F0(a1, (_WORD *)v1 + 20, 384, 0, (int)v25);
    *((_DWORD *)v1 + 36) = v17;
    if ( v17 != 0 )
    {
      *(_WORD *)(a1 + 30) = 1;
      v18 = *((_DWORD *)v1 + 36);
      if ( dword_4B324C != v18 || (*(_DWORD *)(dword_4B324C + 20) & 0x3000000) != 0 )
      {
        *(_DWORD *)(v18 + 52) = *(unsigned __int16 *)(a1 + 28);
        v20 = *((_DWORD *)v1 + 36);
        v21 = *(_DWORD *)(v20 + 388);
        if ( v21 != 0 && (*(_BYTE *)(v21 + 16) & 8) != 0 )
        {
          *(_WORD *)(v20 + 56) = *(_WORD *)(a1 + 30);
          *(_DWORD *)(*((_DWORD *)v1 + 36) + 20) |= 0x2000000u;
        }
        else
        {
          *(_DWORD *)(v20 + 20) |= 0x40000000u;
        }
      }
      else if ( sub_437F00(a1, 0) != 0 )
      {
        v19 = *(_WORD *)(a1 + 406);
        if ( v19 != 0 )
          sub_437910(a1, v19, v25);
      }
    }
    else
    {
      v22 = *(_DWORD *)(a1 + 236);
      *(_DWORD *)(a1 + 228) += *((_DWORD *)v1 + 14);
      v23 = *(_DWORD *)(a1 + 232);
      *(_DWORD *)(a1 + 236) = *((_DWORD *)v1 + 16) + v22;
      *(_DWORD *)(a1 + 232) = *((_DWORD *)v1 + 7) + v23;
      if ( (*((_BYTE *)v1 + 2) & 4) == 0 )
      {
        LOWORD(v12) = (unsigned __int16)TransMatrix((_DWORD *)(a1 + 128), (_DWORD *)(*(_DWORD *)(a1 + 192) + 24));
        return v12;
      }
    }
    sub_448EB0(19, a1 + 228, a1 + 220);
    v12 = *(_DWORD *)(a1 + 20);
    BYTE1(v12) |= 1u;
    *(_DWORD *)(a1 + 20) = v12;
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 20);
    BYTE1(v12) |= 1u;
    *(_DWORD *)(a1 + 20) = v12;
  }
  return v12;
}

// 0x447250  sub_447250
__int16 __cdecl sub_447250(int a1)
{
  __int16 v1; // ax
  unsigned __int16 v2; // di
  int v3; // eax
  __int16 v4; // ax
  __int16 v5; // ax
  __int16 v6; // di

  v1 = *(_WORD *)(a1 + 380);
  if ( v1 <= 0 )
  {
    v5 = *(_WORD *)(a1 + 382);
    if ( v5 >= 0 )
    {
      v6 = *(_WORD *)(a1 + 34);
      LOWORD(v3) = sub_44D270(a1, dword_4B3A04 + *(unsigned __int16 *)(dword_4B3A04 + 2 * v5), a1 + 324);
      *(_WORD *)(a1 + 34) = v6;
    }
    else
    {
      LOWORD(v3) = v5 & 0x7FFF;
      *(_WORD *)(a1 + 382) = v3;
    }
  }
  else
  {
    v2 = *(_WORD *)(a1 + 34);
    if ( v2 == v1 )
    {
      if ( *(_DWORD *)(a1 + 384) != 0 )
      {
        LOWORD(v3) = sub_44E4B0(0, 0, a1);
      }
      else
      {
        v3 = *(_DWORD *)(a1 + 20);
        BYTE1(v3) |= 1u;
        *(_DWORD *)(a1 + 20) = v3;
      }
    }
    else
    {
      v4 = *(_WORD *)(a1 + 382);
      if ( v4 >= 0 )
      {
        LOWORD(v3) = sub_44D270(a1, dword_4B3A04 + *(unsigned __int16 *)(dword_4B3A04 + 2 * v4), a1 + 324);
        *(_WORD *)(a1 + 34) = v2;
      }
      else
      {
        LOWORD(v3) = v4 & 0x7FFF;
        *(_WORD *)(a1 + 382) = v3;
      }
    }
  }
  return v3;
}

// 0x447330  sub_447330
__int16 __cdecl sub_447330(int a1)
{
  int v1; // eax
  int v2; // edx
  _DWORD *v3; // ecx

  if ( *(_DWORD *)(a1 + 120) == 0 )
  {
    if ( *(_DWORD *)(a1 + 116) == 0 )
    {
      v1 = *(_DWORD *)(a1 + 20);
      BYTE1(v1) |= 1u;
      *(_DWORD *)(a1 + 20) = v1;
      return v1;
    }
    sub_439550(a1, a1 + 324, 5, 2u, (int)dword_4EFAC0);
  }
  v2 = *(__int16 *)(a1 + 30);
  *(_DWORD *)(a1 + 228) = dword_4B38C0;
  *(_DWORD *)(a1 + 232) = dword_4B38C4 + v2;
  *(_DWORD *)(a1 + 236) = dword_4B38C8;
  v1 = *(_DWORD *)(a1 + 120);
  if ( v1 != 0 && (*(_DWORD *)(a1 + 8) & 0x200000) == 0 )
  {
    v3 = (_DWORD *)(*(_DWORD *)(a1 + 192) + 24);
    *(_DWORD *)(a1 + 124) = 0;
    TransMatrix((_DWORD *)(a1 + 128), v3);
    RotMatrix((__int16 *)(*(_DWORD *)(a1 + 192) + 16), (_WORD *)(a1 + 128));
    LOWORD(v1) = (unsigned __int16)ScaleMatrix((__int16 *)(a1 + 128), *(_DWORD **)(a1 + 192));
  }
  return v1;
}

// 0x4473f0  sub_4473F0
int __cdecl sub_4473F0(int a1)
{
  __int16 *v1; // esi
  __int16 v2; // ax
  __int16 v3; // dx
  __int16 v4; // cx
  __int16 v5; // ax
  __int16 v6; // dx
  __int16 v7; // ax
  int result; // eax
  bool v9; // zf
  _WORD *v10; // ebx
  _WORD *v11; // ecx
  __int16 v12; // ax
  __int16 v13; // ax

  v1 = (__int16 *)dword_4EFAC0;
  if ( *(_DWORD *)(a1 + 120) == 0 )
    sub_439550(a1, a1 + 324, 5, 2u, (int)dword_4EFAC0 + 68);
  dword_4B2478 = a1;
  v1[4] = dword_4B38CC - dword_4B38C0;
  v1[5] = dword_4B38D0 - dword_4B38C4;
  v1[6] = dword_4B38D4 - dword_4B38C8;
  v2 = *(_WORD *)(a1 + 406);
  if ( (v2 & 1) != 0 )
  {
    v3 = -v1[6];
    v1[5] = -v1[5];
    v1[6] = v3;
  }
  else if ( (v2 & 2) != 0 )
  {
    v4 = -v1[6];
    v1[4] = -v1[4];
    v1[6] = v4;
  }
  else
  {
    v5 = -v1[5];
    v1[4] = -v1[4];
    v1[5] = v5;
  }
  *v1 = 4096 - *(_WORD *)(a1 + 220);
  v1[1] = 4096 - *(_WORD *)(a1 + 222);
  v6 = 4096 - *(_WORD *)(a1 + 224);
  *v1 += v1[4];
  v7 = *v1;
  v1[16] = 4096;
  v1[2] = v6;
  v1[1] += v1[5];
  v1[2] += v1[6];
  v1[17] = 0;
  v1[18] = 0;
  v1[19] = 0;
  v1[20] = 4096;
  v1[21] = 0;
  v1[22] = 0;
  v1[23] = 0;
  v1[24] = 4096;
  *((_DWORD *)v1 + 13) = 0;
  *((_DWORD *)v1 + 14) = 0;
  *((_DWORD *)v1 + 15) = 0;
  RotMatrixX(v7, v1 + 16);
  RotMatrixY(v1[1], v1 + 16);
  RotMatrixZ(v1[2], v1 + 16);
  result = dword_4B39AC;
  v9 = dword_4B39AC == 0;
  *((_DWORD *)v1 + 16) = dword_4B39AC;
  if ( !v9 )
  {
    v10 = v1 + 8;
    do
    {
      v11 = *((_WORD **)v1 + 16);
      *v10 = v11[114];
      v1[9] = v11[116];
      v1[10] = v11[118];
      *v10 -= *(_WORD *)(a1 + 228);
      v1[9] -= *(_WORD *)(a1 + 232);
      v1[10] -= *(_WORD *)(a1 + 236);
      ApplyMatrixSV(v1 + 16, v1 + 8, (_DWORD *)v1 + 6);
      v12 = v1[12];
      if ( v12 > *(__int16 *)(a1 + 72) && v12 < *(__int16 *)(a1 + 80) )
      {
        v13 = v1[14];
        if ( v13 > *(__int16 *)(a1 + 76) && v13 < *(__int16 *)(a1 + 84) )
          *(_DWORD *)(*((_DWORD *)v1 + 16) + 24) |= 8u;
      }
      result = *(_DWORD *)(*((_DWORD *)v1 + 16) + 16);
      *((_DWORD *)v1 + 16) = result;
    }
    while ( result != 0 );
  }
  return result;
}

// 0x447600  sub_447600
int __cdecl sub_447600(int a1)
{
  return sub_44AE30(a1);
}

// 0x447610  sub_447610
int sub_447610()
{
  PadSetAct();
  sub_41E130();
  return -1;
}

// 0x447620  sub_447620
void *sub_447620()
{
  __int16 *v0; // eax
  int *v1; // eax
  void *result; // eax

  if ( dword_4B1C8C > 0 )
    sub_423BB0();
  dword_4B1C8C = 0;
  dword_4B1CBC = (int)DstBuf;
  v0 = word_52FD72;
  do
  {
    *(_DWORD *)(v0 + 9) = 0;
    *v0 = 0;
    v0 += 24;
  }
  while ( (int)v0 < (int)word_547472 );
  dword_52FD8C[0] = (int)dword_4B1CA4;
  dword_623654 = 0;
  memset(dword_4E5E80, 0, sizeof(dword_4E5E80));
  memset(&unk_7BD980, 0, 0x88B8u);
  memset(word_622600, 0, 0xFA0u);
  memset(word_621620, 0, sizeof(word_621620));
  dword_623650 = 0;
  v1 = dword_4E7DC4;
  do
  {
    *(v1 - 1) = 0;
    *v1 = 0;
    v1[1] = 0;
    v1[2] = 0;
    v1 += 4;
  }
  while ( (int)v1 < (int)&dword_4EFAC4 );
  word_4B24A8 = 0;
  word_4B39B0 = 0;
  byte_4B28CD = 0;
  memset(&unk_4B31C0, 0, 0x20u);
  *(_WORD *)&algn_4B31C8[24] = 0;
  dword_4B3FC0 = 0;
  memset(&unk_4B3200, 0, 0x20u);
  word_4B2168 = 0;
  word_4B3250 = 0;
  byte_4B3232 = 0;
  byte_4B322A = 0;
  LOWORD(dword_4B2368) = 0;
  word_4B39C0 = 0;
  word_4B39CE = 0;
  dword_4B39B8 = 0;
  dword_4B2164 = 0;
  dword_4B324C = 0;
  word_4B3444 = 0;
  word_4B39E0 = 0;
  word_4B3642 = 0;
  word_4B3738 = 0;
  word_4B39D2 = 0;
  word_4B3234 = 50;
  word_4B3720 = 128;
  unk_4B3220 = 0;
  sub_449110();
  word_4B39BC = 0;
  word_4B3B76 = -1;
  word_4B39DC = 0;
  word_4B2498 = 0;
  dword_4B344C = 0;
  byte_4B39D5 = 0;
  byte_4B39D0 = 0;
  dword_4B216C = 30;
  byte_4B28CE = -1;
  byte_4B2360 = -1;
  byte_4B3A08 = -1;
  byte_4B39FC = -1;
  byte_4B39C2 = -1;
  byte_4B214C = -1;
  byte_4B316C = -1;
  byte_4B3A9F = -1;
  byte_4B3730 = -1;
  byte_4B39CC = -1;
  byte_4B3646 = -1;
  word_4B3654 = 0;
  word_4B3168 = 0;
  word_4B3648 = 0;
  word_4B39BE = 0;
  *((_BYTE *)dword_52FD00 + 65609) = 0;
  *((_BYTE *)dword_52FD00 + 65610) = 0;
  *((_BYTE *)dword_52FD00 + 65611) = 0;
  *((_BYTE *)dword_52FD00 + 65612) = 0;
  *((_BYTE *)dword_52FD00 + 65648) = 0;
  result = dword_52FD00;
  *((_BYTE *)dword_52FD00 + 65649) = 0;
  *((_BYTE *)dword_52FD00 + 65650) = 0;
  *((_BYTE *)dword_52FD00 + 65651) = 0;
  dword_4B38D4 = 0;
  dword_4B38D0 = 0;
  dword_4B38CC = 0;
  dword_4B38C8 = 0;
  dword_4B38C4 = 0;
  dword_4B38C0 = 0;
  dword_4B3248 = 0;
  return result;
}

// 0x4478a0  sub_4478A0
void sub_4478A0()
{
  if ( dword_52FD00 != NULL )
  {
    free(/*Block*/ dword_52FD00);
    dword_52FD00 = NULL;
  }
  if ( dword_4EFAC0 != NULL )
  {
    free(/*Block*/ dword_4EFAC0);
    dword_4EFAC0 = NULL;
  }
  if ( DstBuf != NULL )
  {
    free(/*Block*/ DstBuf);
    DstBuf = NULL;
  }
  if ( dword_4E5E44 != NULL )
  {
    free(/*Block*/ dword_4E5E44);
    dword_4E5E44 = NULL;
  }
}

// 0x447910  sub_447910
int sub_447910()
{
  __int16 *v0; // eax
  int result; // eax

  dword_52FD00 = malloc(/*Size*/ 0x400000u);
  dword_4EFAC0 = malloc(/*Size*/ 0x1000u);
  DstBuf = malloc(/*Size*/ 0x100000u);
  dword_4B1CBC = (int)DstBuf;
  memset(dword_52FD60, 0, 0x17700u);
  v0 = word_52FD72;
  do
  {
    *(_DWORD *)(v0 + 9) = 0;
    *v0 = 0;
    v0 += 24;
  }
  while ( (int)v0 < (int)word_547472 );
  sub_423AE0();
  sub_423AB0();
  PadSetAct();
  sub_41D6A0();
  if ( sub_4025B0(1) != 1 )
    sub_4025B0(0);
  dword_4E5E44 = malloc(/*Size*/ 0xF4240u);
  memset(&unk_7BD980, 0, 0x88B8u);
  memset(word_622600, 0, 0xFA0u);
  memset(word_621620, 0, sizeof(word_621620));
  dword_4E5E40 = 0;
  memset(dword_4E5E80, 0, sizeof(dword_4E5E80));
  dword_623654 = 0;
  dword_623650 = 0;
  sub_41DA80();
  sub_449020();
  result = PadInfoMode();
  if ( result != 0 )
  {
    while ( 1 )
      ;
  }
  return result;
}

// 0x447a20  sub_447A20
char sub_447A20()
{
  memset(&dword_4B38C0, 0, 0xE8u);
  dword_4B38DC = 0;
  GsSetRefView2L(&dword_4B38C0);
  return GsSetProjection(400);
}

// 0x447a50  sub_447A50
_DWORD *__cdecl sub_447A50(int a1)
{
  int v1; // ebx
  _DWORD *result; // eax
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  _DWORD *v11; // ecx
  _DWORD *v12; // eax
  _DWORD **i; // edx
  _DWORD *v14; // eax
  unsigned int v15; // ecx

  v1 = a1;
  result = *(_DWORD **)(a1 + 24);
  if ( (BYTE1(result) & 8) != 0 )
  {
    v3 = dword_4B3740;
    if ( dword_4B3740 != 0 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(v3 + 112) != v1 )
          goto LABEL_22;
        if ( (*(_DWORD *)(v3 + 24) & 0x400) == 0 )
          break;
        v4 = *(_DWORD *)(v3 + 108);
        if ( v4 != 0 && (*(_DWORD *)(v4 + 24) & 0x400) == 0 )
        {
          *(_DWORD *)(v4 + 20) &= 0xFFFFF7EB;
          v5 = *(_DWORD *)(v3 + 108);
          v6 = *(_DWORD *)(v5 + 20);
          BYTE1(v6) |= 0x10u;
          *(_DWORD *)(v5 + 20) = v6;
          *(_DWORD *)(*(_DWORD *)(v3 + 108) + 196) = 0;
          *(_DWORD *)(*(_DWORD *)(v3 + 108) + 192) = *(_DWORD *)(v3 + 108) + 204;
          *(_WORD *)(*(_DWORD *)(v3 + 108) + 38) = *(_WORD *)(v3 + 38);
          *(_DWORD *)(*(_DWORD *)(v3 + 108) + 112) = 0;
          sub_4377C0(*(_DWORD **)(v3 + 108));
          v7 = *(_DWORD *)(v3 + 108);
          if ( *(_WORD *)(v7 + 44) == 14 )
            *(_DWORD *)(v7 + 344) = 0;
        }
        v8 = *(_DWORD *)v3;
        v9 = (_DWORD *)(v3 + 120);
        if ( v3 != -120 )
        {
          do
          {
            v10 = v9;
            v9 = (_DWORD *)*v9;
            v10[1] = 1;
            *v10 = 0;
          }
          while ( v9 != NULL );
        }
        v11 = (_DWORD *)dword_4B3740;
        if ( dword_4B3740 != 0 )
        {
          if ( dword_4B3740 == v3 )
          {
            *(_DWORD *)(dword_4B3740 + 4) = 1;
            v11 = (_DWORD *)*v11;
          }
          else
          {
            v12 = *(_DWORD **)dword_4B3740;
            for ( i = (_DWORD **)dword_4B3740; v12 != NULL; v12 = (_DWORD *)*v12 )
            {
              if ( v12 == (_DWORD *)v3 )
                break;
              i = (_DWORD **)v12;
            }
            v14 = *i;
            if ( *i != NULL )
            {
              v14[1] = 1;
              *i = (_DWORD *)*v14;
              *v14 = 0;
            }
          }
        }
        else
        {
          v11 = NULL;
        }
        dword_4B3740 = (int)v11;
        sub_41F650(v3);
        result = (_DWORD *)sub_447A50(v3);
        v3 = v8;
        v1 = a1;
LABEL_25:
        if ( v3 == 0 )
          return result;
      }
      v15 = *(_DWORD *)(v3 + 20) & 0xFFFFEDE9 | 0x1202;
      *(_DWORD *)(v3 + 196) = 0;
      *(_DWORD *)(v3 + 192) = v3 + 204;
      *(_DWORD *)(v3 + 112) = 0;
      *(_DWORD *)(v3 + 20) = v15;
      result = sub_437820(v3 + 124);
LABEL_22:
      if ( *(_DWORD *)(v3 + 108) == v1 )
        *(_DWORD *)(v3 + 108) = 0;
      v3 = *(_DWORD *)v3;
      goto LABEL_25;
    }
  }
  return result;
}

// 0x447bc0  sub_447BC0
_DWORD *__cdecl sub_447BC0(int a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // ecx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx
  _DWORD *v7; // edx
  _DWORD *v8; // eax
  _DWORD **i; // ecx
  _DWORD *v10; // eax

  if ( a1 == dword_4B39B8 )
    dword_4B39B8 = dword_4B324C;
  if ( *(_DWORD *)(dword_4B324C + 108) == a1 )
    *(_DWORD *)(dword_4B324C + 108) = 0;
  v1 = *(_DWORD *)(a1 + 112);
  if ( v1 != 0 )
  {
    if ( *(_DWORD *)(v1 + 108) == a1 )
      *(_DWORD *)(v1 + 108) = 0;
    *(_DWORD *)(a1 + 112) = 0;
  }
  v2 = *(_DWORD *)(a1 + 108);
  if ( v2 != 0 )
  {
    *(_DWORD *)(v2 + 20) &= 0xFFFFF7EB;
    *(_DWORD *)(*(_DWORD *)(a1 + 108) + 196) = 0;
    *(_DWORD *)(*(_DWORD *)(a1 + 108) + 192) = *(_DWORD *)(a1 + 108) + 204;
    *(_WORD *)(*(_DWORD *)(a1 + 108) + 38) = *(_WORD *)(a1 + 38);
    *(_DWORD *)(*(_DWORD *)(a1 + 108) + 112) = 0;
    sub_4377C0(*(_DWORD **)(a1 + 108));
    *(_DWORD *)(*(_DWORD *)(a1 + 108) + 344) = 0;
    *(_DWORD *)(a1 + 108) = 0;
  }
  v3 = dword_4B39AC;
  if ( a1 == dword_4B39AC )
  {
    dword_4B39AC = *(_DWORD *)(a1 + 16);
  }
  else if ( dword_4B39AC != 0 )
  {
    do
    {
      v4 = *(_DWORD *)(v3 + 16);
      if ( v4 == a1 )
        break;
      v3 = *(_DWORD *)(v3 + 16);
    }
    while ( v4 != 0 );
    if ( v3 != 0 )
      *(_DWORD *)(v3 + 16) = *(_DWORD *)(a1 + 16);
  }
  v5 = (_DWORD *)(a1 + 120);
  if ( a1 != -120 )
  {
    do
    {
      v6 = v5;
      v5 = (_DWORD *)*v5;
      v6[1] = 1;
      *v6 = 0;
    }
    while ( v5 != NULL );
  }
  v7 = (_DWORD *)dword_4B3740;
  if ( dword_4B3740 != 0 )
  {
    if ( dword_4B3740 == a1 )
    {
      *(_DWORD *)(dword_4B3740 + 4) = 1;
      v7 = (_DWORD *)*v7;
    }
    else
    {
      v8 = *(_DWORD **)dword_4B3740;
      for ( i = (_DWORD **)dword_4B3740; v8 != NULL; v8 = (_DWORD *)*v8 )
      {
        if ( v8 == (_DWORD *)a1 )
          break;
        i = (_DWORD **)v8;
      }
      v10 = *i;
      if ( *i != NULL )
      {
        v10[1] = 1;
        *i = (_DWORD *)*v10;
        *v10 = 0;
      }
    }
  }
  else
  {
    v7 = NULL;
  }
  dword_4B3740 = (int)v7;
  sub_41F650(a1);
  return sub_447A50(a1);
}

// 0x447cf0  sub_447CF0
_BYTE *sub_447CF0()
{
  _BYTE *result; // eax
  int v1; // ecx
  unsigned int v2; // ecx
  __int16 *v3; // edx
  int i; // edi
  __int16 v5; // cx
  unsigned int v6; // [esp+0h] [ebp-4h]

  result = dword_52FD00;
  HIWORD(v1) = 0;
  if ( (*((_WORD *)dword_52FD00 + 32776) & 0x30) == 0x30 )
  {
    LOWORD(v1) = *((_WORD *)dword_52FD00 + 32776);
    v2 = v1 & 0xFFFFFFCF;
    v6 = v2;
    if ( word_4B3B84 != v2 )
    {
      word_4B3B84 = v2;
      if ( v2 != 0 )
      {
        v3 = (__int16 *)&off_4AE132;
        for ( i = 7; i != 0; --i )
        {
          if ( v6 != v3[*v3 + 1] )
          {
            *v3 = 0;
          }
          else
          {
            v5 = *v3 + 1;
            *v3 = v5;
            if ( v3[v5 + 1] == 0 )
            {
              switch ( *(v3 - 1) )
              {
                case 0:
                  result[65636] |= 1u;
                  result = dword_52FD00;
                  break;
                case 1:
                  result[65603] = 99;
                  *((_BYTE *)dword_52FD00 + 65636) |= 2u;
                  result = dword_52FD00;
                  break;
                case 2:
                  result[65608] |= 0x1Fu;
                  *((_BYTE *)dword_52FD00 + 65636) |= 4u;
                  result = dword_52FD00;
                  break;
                case 3:
                  result[65601] = 6;
                  *((_BYTE *)dword_52FD00 + 65636) |= 8u;
                  result = dword_52FD00;
                  break;
                case 4:
                  result[65608] |= 0x80u;
                  *((_BYTE *)dword_52FD00 + 65636) |= 0x10u;
                  result = dword_52FD00;
                  break;
                case 5:
                  result[65607] = 77;
                  *((_BYTE *)dword_52FD00 + 65852) = 1;
                  *((_BYTE *)dword_52FD00 + 65605) = 124;
                  result = dword_52FD00;
                  goto LABEL_14;
                case 6:
LABEL_14:
                  *((_DWORD *)result + 0x4000) = 71;
                  result = dword_52FD00;
                  word_4B39BC = 1;
                  break;
                default:
                  break;
              }
            }
          }
          v3 += 12;
        }
      }
    }
  }
  return result;
}

// 0x447eb0  sub_447EB0
_DWORD *__cdecl sub_447EB0(int a1)
{
  char *v1; // esi
  int v2; // eax
  int v3; // ecx
  int *v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // eax
  __int16 v11; // cx
  int v12; // edx
  _DWORD *v13; // eax
  int v14; // edx
  _DWORD *v15; // edx
  _DWORD *v16; // eax
  int v17; // eax
  __int16 v18; // cx
  int i; // eax
  int v20; // eax
  bool v21; // zf
  int v22; // eax
  int v23; // ebp
  int v24; // edi
  _DWORD *v25; // eax
  int v26; // edx
  int v27; // eax
  __int16 v28; // ax
  int v29; // eax
  int v30; // eax
  _DWORD *v31; // eax
  int v32; // edx
  _DWORD *v33; // eax
  __int16 v34; // cx
  char *v35; // edi
  __int16 v36; // cx
  int v37; // eax
  __int16 v38; // cx
  __int16 v39; // cx
  __int16 v40; // cx
  __int16 v41; // cx
  _DWORD *v42; // eax
  int v43; // ecx
  int v44; // edx
  int v45; // eax
  int v46; // edx
  int v47; // eax
  __int16 *v48; // edi
  __int16 v49; // ax
  int v50; // eax
  int v51; // edx
  bool v52; // sf
  int v53; // eax
  _DWORD *v54; // eax
  int v55; // edx
  _DWORD *v56; // eax
  __int16 v57; // cx
  int v58; // eax
  int v59; // eax
  int v60; // eax
  _DWORD *result; // eax
  int v62; // ecx
  int v63; // eax
  int v64; // ecx
  int v65; // eax
  int v66; // ecx
  _DWORD *v67; // esi
  int v68; // eax
  int v69; // edi
  _DWORD *v70; // eax

  dword_4B2170 = dword_4B373C;
  word_4B39A8 = 0;
  if ( (_BYTE)dword_4B226C == 0 && dword_4B39B8 != 0 )
    sub_431A60(dword_4B39B8, *(_DWORD *)(dword_4B324C + 436));
  v1 = (char *)dword_4EFAC0;
  sub_447CF0();
  *((_DWORD *)v1 + 6) = dword_4B38CC - dword_4B38C0;
  v2 = dword_4B38D4 - dword_4B38C8;
  *((_DWORD *)v1 + 8) = dword_4B38D4 - dword_4B38C8;
  *((_DWORD *)v1 + 29) = ratan2(*((_DWORD *)v1 + 6), v2);
  sub_408BF0(word_52FCE0);
  sub_408E10(&dword_52FCF4);
  HIWORD(v3) = HIWORD(dword_4B38C0);
  if ( dword_4B324C == 0 || dword_4B38C8 + dword_4B38C0 + dword_4B38C4 != 0 )
  {
    *((_DWORD *)v1 + 6) = dword_4B38C0;
    *((_DWORD *)v1 + 7) = dword_4B38C4;
    *((_DWORD *)v1 + 8) = dword_4B38C8;
  }
  else
  {
    *((_DWORD *)v1 + 6) = *(_DWORD *)(dword_4B324C + 228);
    *((_DWORD *)v1 + 7) = *(_DWORD *)(dword_4B324C + 232);
    v3 = *(_DWORD *)(dword_4B324C + 236);
    *((_DWORD *)v1 + 8) = v3;
  }
  *((_DWORD *)v1 + 12) = 0;
  *((_DWORD *)v1 + 13) = 0;
  *((_DWORD *)v1 + 14) = 0;
  *((_DWORD *)v1 + 28) = 0;
  dword_4B39AC = 0;
  *((_DWORD *)v1 + 11) = a1;
  if ( a1 != 0 )
  {
    do
    {
      v4 = *((int **)v1 + 11);
      if ( (v4[5] & 0x100) != 0 )
      {
        v5 = *v4;
        sub_447BC0(*((_DWORD *)v1 + 11));
        if ( v5 == 0 )
          break;
        *((_DWORD *)v1 + 11) = v5;
      }
      v6 = *((_DWORD *)v1 + 11);
      LOWORD(v3) = *(_WORD *)(v6 + 36);
      if ( (_WORD)v3 != 0 )
        *(_WORD *)(v6 + 36) = --v3;
      v7 = *((_DWORD *)v1 + 11);
      if ( (*(_BYTE *)(v7 + 12) & 0x40) != 0 )
        goto LABEL_111;
      *(_DWORD *)(v7 + 4) |= 2u;
      v8 = *((_DWORD *)v1 + 11);
      v9 = *(_DWORD *)(v8 + 24);
      BYTE1(v9) &= ~1u;
      *(_DWORD *)(v8 + 24) = v9;
      v10 = *((_DWORD *)v1 + 11);
      if ( (*(_BYTE *)(v10 + 4) & 0x20) != 0
        || *(_WORD *)(v10 + 28) == 5
        || *(_WORD *)(v10 + 44) == 20
        || (HIWORD(v3) = HIWORD(dword_4B324C), *(_DWORD *)(v10 + 112) == dword_4B324C)
        || *(_DWORD *)(v10 + 108) == dword_4B324C
        || (v11 = *(_WORD *)(v10 + 60)) == 0 )
      {
LABEL_99:
        v57 = *(_WORD *)(v10 + 44);
        if ( v57 == 16 || v57 == 36 )
        {
          *(_DWORD *)(v10 + 4) &= ~2u;
          v58 = *((_DWORD *)v1 + 11);
          v3 = *(_DWORD *)(v58 + 24);
          BYTE1(v3) |= 1u;
          *(_DWORD *)(v58 + 24) = v3;
        }
        v59 = *((_DWORD *)v1 + 11);
        if ( *(_WORD *)(v59 + 44) == 21 )
        {
          *(_DWORD *)(v59 + 16) = *((_DWORD *)v1 + 13);
          *((_DWORD *)v1 + 13) = *((_DWORD *)v1 + 11);
        }
        else
        {
          v3 = *(_DWORD *)(v59 + 8);
          if ( (v3 & 0x20000) != 0 )
          {
            v3 = *((_DWORD *)v1 + 12);
            *(_DWORD *)(v59 + 16) = v3;
            *((_DWORD *)v1 + 12) = *((_DWORD *)v1 + 11);
          }
          else if ( (v3 & 8) != 0 )
          {
            v3 = *((_DWORD *)v1 + 14);
            *(_DWORD *)(v59 + 16) = v3;
            *((_DWORD *)v1 + 14) = *((_DWORD *)v1 + 11);
          }
          else if ( *(_WORD *)(v59 + 28) == 1 )
          {
            dword_4B324C = *((_DWORD *)v1 + 11);
          }
          else
          {
            HIWORD(v3) = HIWORD(dword_4B39AC);
            *(_DWORD *)(v59 + 16) = dword_4B39AC;
            dword_4B39AC = *((_DWORD *)v1 + 11);
          }
        }
        goto LABEL_111;
      }
      if ( (v11 & 2) != 0 )
      {
        *(_DWORD *)v1 = *((_DWORD *)v1 + 6) - *(_DWORD *)(v10 + 228);
        *((_DWORD *)v1 + 1) = *((_DWORD *)v1 + 7) - *(_DWORD *)(*((_DWORD *)v1 + 11) + 232);
        *((_DWORD *)v1 + 2) = *((_DWORD *)v1 + 8) - *(_DWORD *)(*((_DWORD *)v1 + 11) + 236);
        sub_4078F0((int *)v1, (int *)v1 + 17);
        v3 = *((_DWORD *)v1 + 11);
        v12 = (unsigned __int16)((_WORD)v1 + 130);
        if ( *((_DWORD *)v1 + 17) > v12 )
        {
          if ( (*(_BYTE *)(v3 + 60) & 0x40) == 0 )
          {
            *(_WORD *)(v3 + 36) = (*((_DWORD *)v1 + 17) - v12) >> 7;
            v13 = *((_DWORD **)v1 + 11);
            v14 = v13[6];
            v3 = v13[2];
            BYTE1(v14) |= 1u;
            v13[1] &= ~2u;
            v13[6] = v14;
            if ( (v3 & 0x1000) == 0 )
              goto LABEL_111;
            v3 = v13[87];
            if ( (v3 & 0x4000) != 0 )
              goto LABEL_111;
            v15 = v13 + 30;
            if ( v13[30] == 0 || v13[28] != 0 )
              goto LABEL_111;
            BYTE1(v3) |= 0x40u;
            v13[87] = v3;
            v13[86] = 0;
            if ( v13 != (_DWORD *)-120 )
            {
              v16 = v13 + 30;
              do
              {
                v3 = (int)v16;
                v16 = (_DWORD *)*v16;
                *(_DWORD *)(v3 + 4) = 1;
                *(_DWORD *)v3 = 0;
              }
              while ( v16 != NULL );
              *v15 = 0;
              goto LABEL_111;
            }
            goto LABEL_98;
          }
          *(_DWORD *)(v3 + 4) &= ~2u;
          *(_DWORD *)(*((_DWORD *)v1 + 11) + 24) |= 0x100u;
        }
      }
      v17 = *((_DWORD *)v1 + 11);
      if ( (*(_BYTE *)(v17 + 60) & 1) == 0 || (*(_BYTE *)(v17 + 4) & 2) == 0 )
        goto LABEL_54;
      *((_DWORD *)v1 + 16) = 0;
      *((_DWORD *)v1 + 15) = &word_4B3460;
      v18 = word_4B39DC;
      for ( i = *((_DWORD *)v1 + 16); i < word_4B39DC; i = *((_DWORD *)v1 + 16) )
      {
        if ( *(_WORD *)(*((_DWORD *)v1 + 11) + 38) == **((_WORD **)v1 + 15) )
          break;
        *((_DWORD *)v1 + 16) = i + 1;
        *((_DWORD *)v1 + 15) += 20;
        v18 = word_4B39DC;
      }
      v20 = v18;
      v3 = *((_DWORD *)v1 + 16);
      v21 = v20 == v3;
      if ( v20 > v3 )
      {
        if ( (*(_BYTE *)(*((_DWORD *)v1 + 15) + 2) & 1) != 0 )
        {
          v22 = *((_DWORD *)v1 + 11);
          if ( (*(_DWORD *)(v22 + 8) & 0x10000) == 0 )
          {
            v23 = *(_DWORD *)(v22 + 4);
            if ( (*(_BYTE *)(v22 + 60) & 0x40) == 0 )
            {
              v3 = *(_DWORD *)(v22 + 8);
              v24 = *(_DWORD *)(v22 + 24);
              *(_DWORD *)(v22 + 4) = v23 & 0xFFFFFFFD;
              *(_DWORD *)(v22 + 24) = v24 | 0x100;
              if ( (v3 & 0x1000) == 0 )
                goto LABEL_111;
              v3 = *(_DWORD *)(v22 + 348);
              if ( (v3 & 0x4000) != 0 )
                goto LABEL_111;
              v15 = (_DWORD *)(v22 + 120);
              if ( *(_DWORD *)(v22 + 120) == 0 || *(_DWORD *)(v22 + 112) != 0 )
                goto LABEL_111;
              BYTE1(v3) |= 0x40u;
              *(_DWORD *)(v22 + 348) = v3;
              *(_DWORD *)(v22 + 344) = 0;
              if ( v22 != -120 )
              {
                v25 = (_DWORD *)(v22 + 120);
                do
                {
                  v3 = (int)v25;
                  v25 = (_DWORD *)*v25;
                  *(_DWORD *)(v3 + 4) = 1;
                  *(_DWORD *)v3 = 0;
                }
                while ( v25 != NULL );
                *v15 = 0;
                goto LABEL_111;
              }
              goto LABEL_98;
            }
LABEL_53:
            *(_DWORD *)(v22 + 4) = v23 & 0xFFFFFFFD;
            *(_DWORD *)(*((_DWORD *)v1 + 11) + 24) |= 0x100u;
            goto LABEL_54;
          }
          goto LABEL_54;
        }
        v21 = v20 == v3;
      }
      if ( v21 )
      {
        v22 = *((_DWORD *)v1 + 11);
        v23 = *(_DWORD *)(v22 + 4);
        if ( (*(_BYTE *)(v22 + 60) & 0x40) == 0 )
        {
          v3 = *(_DWORD *)(v22 + 8);
          v69 = *(_DWORD *)(v22 + 24);
          *(_DWORD *)(v22 + 4) = v23 & 0xFFFFFFFD;
          *(_DWORD *)(v22 + 24) = v69 | 0x100;
          if ( (v3 & 0x1000) == 0 )
            goto LABEL_111;
          v3 = *(_DWORD *)(v22 + 348);
          if ( (v3 & 0x4000) != 0 )
            goto LABEL_111;
          v15 = (_DWORD *)(v22 + 120);
          if ( *(_DWORD *)(v22 + 120) == 0 || *(_DWORD *)(v22 + 112) != 0 )
            goto LABEL_111;
          BYTE1(v3) |= 0x40u;
          *(_DWORD *)(v22 + 348) = v3;
          *(_DWORD *)(v22 + 344) = 0;
          if ( v22 != -120 )
          {
            v70 = (_DWORD *)(v22 + 120);
            do
            {
              v3 = (int)v70;
              v70 = (_DWORD *)*v70;
              *(_DWORD *)(v3 + 4) = 1;
              *(_DWORD *)v3 = 0;
            }
            while ( v70 != NULL );
            *v15 = 0;
            goto LABEL_111;
          }
          goto LABEL_98;
        }
        goto LABEL_53;
      }
LABEL_54:
      v10 = *((_DWORD *)v1 + 11);
      if ( (*(_BYTE *)(v10 + 60) & 0x20) == 0 || (*(_BYTE *)(v10 + 4) & 2) == 0 )
        goto LABEL_99;
      if ( *(_DWORD *)(v10 + 120) != 0 || *(char *)(v10 + 24) < 0 )
      {
        v34 = *(_WORD *)(v10 + 72);
        v35 = v1 + 260;
        *((_WORD *)v1 + 154) = v34;
        *((_WORD *)v1 + 146) = v34;
        *((_WORD *)v1 + 138) = v34;
        *((_WORD *)v1 + 130) = v34;
        v36 = *(_WORD *)(v10 + 80);
        v37 = v10 + 124;
        *((_WORD *)v1 + 158) = v36;
        *((_WORD *)v1 + 150) = v36;
        *((_WORD *)v1 + 142) = v36;
        *((_WORD *)v1 + 134) = v36;
        v38 = *(_WORD *)(v37 - 42);
        *((_WORD *)v1 + 143) = v38;
        *((_WORD *)v1 + 139) = v38;
        *((_WORD *)v1 + 135) = v38;
        *((_WORD *)v1 + 131) = v38;
        v39 = *(_WORD *)(v37 - 50);
        *((_WORD *)v1 + 159) = v39;
        *((_WORD *)v1 + 155) = v39;
        *((_WORD *)v1 + 151) = v39;
        *((_WORD *)v1 + 147) = v39;
        v40 = *(_WORD *)(v37 - 40);
        *((_WORD *)v1 + 152) = v40;
        *((_WORD *)v1 + 148) = v40;
        *((_WORD *)v1 + 136) = v40;
        *((_WORD *)v1 + 132) = v40;
        v41 = *(_WORD *)(v37 - 48);
        *((_DWORD *)v1 + 30) = v37;
        *((_WORD *)v1 + 160) = v41;
        *((_WORD *)v1 + 156) = v41;
        *((_WORD *)v1 + 144) = v41;
        *((_WORD *)v1 + 140) = v41;
        if ( v37 != 0 )
        {
          do
          {
            sub_408BF0((__int16 *)(*((_DWORD *)v1 + 30) + 4));
            v42 = *((_DWORD **)v1 + 30);
            *(_DWORD *)v1 = v42[6];
            *((_DWORD *)v1 + 1) = v42[7];
            *((_DWORD *)v1 + 2) = v42[8];
            *((_DWORD *)v1 + 16) = 0;
            *((_DWORD *)v1 + 64) = v1 + 128;
            *((_DWORD *)v1 + 81) = v35;
            do
            {
              sub_408C60(*((__int16 **)v1 + 81), *((int **)v1 + 64));
              **((_DWORD **)v1 + 64) += *(_DWORD *)v1;
              *(_DWORD *)(*((_DWORD *)v1 + 64) + 4) += *((_DWORD *)v1 + 1);
              *(_DWORD *)(*((_DWORD *)v1 + 64) + 8) += *((_DWORD *)v1 + 2);
              **((_WORD **)v1 + 81) = **((_WORD **)v1 + 64);
              *(_WORD *)(*((_DWORD *)v1 + 81) + 2) = *(_WORD *)(*((_DWORD *)v1 + 64) + 4);
              *(_WORD *)(*((_DWORD *)v1 + 81) + 4) = *(_WORD *)(*((_DWORD *)v1 + 64) + 8);
              v43 = *((_DWORD *)v1 + 64);
              v44 = *((_DWORD *)v1 + 16) + 1;
              *((_DWORD *)v1 + 16) = v44;
              v45 = v44;
              v46 = *((_DWORD *)v1 + 81) + 8;
              *((_DWORD *)v1 + 64) = v43 + 16;
              *((_DWORD *)v1 + 81) = v46;
            }
            while ( v45 < 8 );
            v47 = *(_DWORD *)(*((_DWORD *)v1 + 30) + 72);
            *((_DWORD *)v1 + 30) = v47;
          }
          while ( v47 != 0 );
        }
        sub_408BF0(word_52FCE0);
        *((_DWORD *)v1 + 81) = v35;
        *((_DWORD *)v1 + 16) = 0;
        v48 = (__int16 *)(v1 + 104);
        do
        {
          sub_408D10(*((__int16 **)v1 + 81));
          sub_408E30();
          sub_408F70((_WORD *)v1 + 52);
          sub_408F60((_DWORD *)v1 + 27);
          if ( *((int *)v1 + 27) >= 0 && *v48 >= -256 && *v48 <= 256 )
          {
            v49 = *((_WORD *)v1 + 53);
            if ( v49 >= -120 && v49 <= 120 )
              break;
          }
          v50 = *((_DWORD *)v1 + 16) + 1;
          v51 = *((_DWORD *)v1 + 81) + 8;
          v52 = *((_DWORD *)v1 + 16) - 7 < 0;
          *((_DWORD *)v1 + 16) = v50;
          *((_DWORD *)v1 + 81) = v51;
        }
        while ( v52 != __OFSUB__(v50, 8) );
        if ( *((_DWORD *)v1 + 16) == 8 )
        {
          *(_DWORD *)(*((_DWORD *)v1 + 11) + 4) &= ~2u;
          v53 = *((_DWORD *)v1 + 11);
          v3 = *(_DWORD *)(v53 + 24);
          BYTE1(v3) |= 1u;
          *(_DWORD *)(v53 + 24) = v3;
        }
        goto LABEL_89;
      }
      *((_WORD *)v1 + 8) = *(_WORD *)(v10 + 228);
      *((_WORD *)v1 + 9) = *(_WORD *)(*((_DWORD *)v1 + 11) + 232);
      *((_WORD *)v1 + 10) = *(_WORD *)(*((_DWORD *)v1 + 11) + 236);
      sub_408D10((__int16 *)v1 + 8);
      sub_408E30();
      sub_408F70((_WORD *)v1 + 52);
      sub_408F60((_DWORD *)v1 + 27);
      if ( *((int *)v1 + 27) < 0 )
      {
        *(_DWORD *)(*((_DWORD *)v1 + 11) + 4) &= ~2u;
LABEL_65:
        v29 = *((_DWORD *)v1 + 11);
        v3 = *(_DWORD *)(v29 + 24);
        BYTE1(v3) |= 1u;
        *(_DWORD *)(v29 + 24) = v3;
        goto LABEL_66;
      }
      v3 = *((_DWORD *)v1 + 11);
      v26 = *((__int16 *)v1 + 52);
      v27 = *(unsigned __int16 *)(v3 + 46);
      if ( v26 + (unsigned __int16)v27 < -256
        || v26 - v27 > 256
        || (v28 = *((_WORD *)v1 + 53)) < -120
        || v28 + *(__int16 *)(v3 + 82) > 120 )
      {
        *(_DWORD *)(v3 + 4) &= ~2u;
        goto LABEL_65;
      }
LABEL_66:
      v30 = *((_DWORD *)v1 + 11);
      if ( (*(_BYTE *)(v30 + 4) & 2) == 0 && (*(_BYTE *)(v30 + 60) & 0xC0) == 0 )
      {
        *(_WORD *)(v30 + 36) = (1024 - *((_DWORD *)v1 + 16)) >> 7;
        v31 = *((_DWORD **)v1 + 11);
        v32 = v31[6];
        v3 = v31[2];
        BYTE1(v32) |= 1u;
        v31[1] &= ~2u;
        v31[6] = v32;
        if ( (v3 & 0x1000) == 0 )
          goto LABEL_111;
        v3 = v31[87];
        if ( (v3 & 0x4000) != 0 )
          goto LABEL_111;
        v15 = v31 + 30;
        if ( v31[30] == 0 || v31[28] != 0 )
          goto LABEL_111;
        BYTE1(v3) |= 0x40u;
        v31[87] = v3;
        v31[86] = 0;
        if ( v31 != (_DWORD *)-120 )
        {
          v33 = v31 + 30;
          do
          {
            v3 = (int)v33;
            v33 = (_DWORD *)*v33;
            *(_DWORD *)(v3 + 4) = 1;
            *(_DWORD *)v3 = 0;
          }
          while ( v33 != NULL );
          *v15 = 0;
          goto LABEL_111;
        }
        goto LABEL_98;
      }
LABEL_89:
      v10 = *((_DWORD *)v1 + 11);
      if ( (*(_BYTE *)(v10 + 4) & 2) != 0 || (*(_BYTE *)(v10 + 60) & 0xC0) != 0 )
        goto LABEL_99;
      *(_WORD *)(v10 + 36) = (1024 - *((_DWORD *)v1 + 16)) >> 7;
      v54 = *((_DWORD **)v1 + 11);
      v55 = v54[6];
      v3 = v54[2];
      BYTE1(v55) |= 1u;
      v54[1] &= ~2u;
      v54[6] = v55;
      if ( (v3 & 0x1000) != 0 )
      {
        v3 = v54[87];
        if ( (v3 & 0x4000) == 0 )
        {
          v15 = v54 + 30;
          if ( v54[30] != 0 && v54[28] == 0 )
          {
            BYTE1(v3) |= 0x40u;
            v54[87] = v3;
            v54[86] = 0;
            if ( v54 != (_DWORD *)-120 )
            {
              v56 = v54 + 30;
              do
              {
                v3 = (int)v56;
                v56 = (_DWORD *)*v56;
                *(_DWORD *)(v3 + 4) = 1;
                *(_DWORD *)v3 = 0;
              }
              while ( v56 != NULL );
            }
LABEL_98:
            *v15 = 0;
          }
        }
      }
LABEL_111:
      v60 = **((_DWORD **)v1 + 11);
      *((_DWORD *)v1 + 11) = v60;
    }
    while ( v60 != 0 );
  }
  if ( dword_4B324C != 0 )
  {
    *(_DWORD *)(dword_4B324C + 16) = dword_4B39AC;
    result = (_DWORD *)dword_4B324C;
    dword_4B39AC = dword_4B324C;
  }
  else
  {
    result = (_DWORD *)dword_4B39AC;
  }
  v62 = *((_DWORD *)v1 + 14);
  if ( v62 != 0 )
  {
    *((_DWORD *)v1 + 11) = v62;
    if ( *(_DWORD *)(v62 + 16) != 0 )
    {
      do
      {
        v63 = *(_DWORD *)(*((_DWORD *)v1 + 11) + 16);
        *((_DWORD *)v1 + 11) = v63;
      }
      while ( *(_DWORD *)(v63 + 16) != 0 );
    }
    *(_DWORD *)(*((_DWORD *)v1 + 11) + 16) = dword_4B39AC;
    result = *((_DWORD **)v1 + 14);
    dword_4B39AC = (int)result;
  }
  v64 = *((_DWORD *)v1 + 12);
  if ( v64 != 0 )
  {
    *((_DWORD *)v1 + 11) = v64;
    if ( *(_DWORD *)(v64 + 16) != 0 )
    {
      do
      {
        v65 = *(_DWORD *)(*((_DWORD *)v1 + 11) + 16);
        *((_DWORD *)v1 + 11) = v65;
      }
      while ( *(_DWORD *)(v65 + 16) != 0 );
    }
    *(_DWORD *)(*((_DWORD *)v1 + 11) + 16) = dword_4B39AC;
    result = *((_DWORD **)v1 + 12);
    dword_4B39AC = (int)result;
  }
  v66 = *((_DWORD *)v1 + 13);
  if ( v66 != 0 )
  {
    *(_DWORD *)(v66 + 16) = result;
    result = *((_DWORD **)v1 + 13);
    dword_4B39AC = (int)result;
  }
  v67 = result;
  dword_4B39B8 = dword_4B324C;
  word_4B39DE = 0;
  dword_4B2478 = 0;
  if ( result != NULL )
  {
    while ( 1 )
    {
      v68 = v67[5];
      if ( (_BYTE)dword_4B226C == 0 )
        break;
      if ( (v68 & 0x100) == 0 && (v67[3] & 0x40000000) != 0 )
      {
        ((void (__stdcall *)())funcs_448891[*((unsigned __int16 *)v67 + 22)])();
LABEL_137:
        ++*((_WORD *)v67 + 17);
      }
LABEL_138:
      result = v67;
      v67 = (_DWORD *)v67[4];
      if ( (result[5] & 0x100) != 0 )
        result = sub_447BC0((int)result);
      if ( v67 == NULL )
        return result;
    }
    if ( (v68 & 0x100) == 0 )
      ((void (__stdcall *)())funcs_448891[*((unsigned __int16 *)v67 + 22)])();
    if ( (dword_4B3940 & 0x100) != 0
      && (dword_4B3940 & 0x200) == 0
      && *((_WORD *)v67 + 22) != 32
      && (v67[6] & 0x1000) == 0 )
    {
      goto LABEL_138;
    }
    goto LABEL_137;
  }
  return result;
}

// 0x448970  sub_448970
int __cdecl sub_448970(int a1)
{
  int v1; // ecx
  int i; // eax

  v1 = 0;
  if ( word_4B3644 <= 0 )
    return 0;
  for ( i = dword_4B3B70 + 4; *(_DWORD *)(i + 8) != a1 || (*(_BYTE *)i & 1) != 0; i += 88 )
  {
    if ( ++v1 >= word_4B3644 )
      return 0;
  }
  return dword_4B3B70 + 88 * v1;
}
