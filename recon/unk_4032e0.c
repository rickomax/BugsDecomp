// Module `unk_4032e0`.
//
// Reconstructed from Bugs.exe (PC v1.0) by tools/recon.py.
// Generated file -- do not edit by hand; see recon/README.md.
//
// Address range: 0x4032e0 - 0x405390 (18 functions).

#include "bugs.h"


// 0x4032e0  sub_4032E0
int sub_4032E0()
{
  memset(&unk_7C9620, 0, 0x1000u);
  dword_9CA720 = 0;
  return 0;
}

// 0x403300  sub_403300
int __cdecl sub_403300(__int16 a1)
{
  int v1; // ebx
  int *v2; // edi
  int *v3; // esi
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // eax
  _DWORD *v10; // ecx
  int v11; // ecx
  int v13; // [esp+Ch] [ebp-4h]

  v1 = 0;
  dword_553434 = 0;
  v13 = dword_5546A0;
  if ( dword_5546A0 <= dword_555FCC )
  {
    v2 = (int *)((char *)&unk_7C9620 + 4 * dword_5546A0);
    v3 = &dword_555FF0[16 * dword_5546A0];
    do
    {
      v4 = *v2;
      *((_WORD *)v3 - 6) = a1;
      *(v3 - 4) = 0;
      if ( v4 != 0 )
      {
        v1 += sub_4034F0(v3 - 4, v4, 0);
      }
      else
      {
        v5 = *(v3 - 2);
        v6 = *(v3 - 1);
        if ( v5 > v6 )
        {
          *(v3 - 2) = v6;
          *(v3 - 1) = v5;
          v7 = *v3;
          *v3 = v3[1];
          v3[1] = v7;
        }
        v8 = *(v3 - 2);
        v9 = 8 * dword_9CA720;
        v10 = (_DWORD *)((char *)&unk_7CA720 + 32 * dword_9CA720);
        dword_7CA734[v9] = 0;
        dword_7CA738[v9] = (int)v10;
        dword_7CA73C[v9] = (int)v10;
        *v10 = v8;
        dword_7CA724[v9] = *(v3 - 1);
        LOWORD(v8) = *((_WORD *)v3 - 6);
        *v2 = (int)v10;
        v11 = dword_9CA720;
        dword_7CA728[v9] = (unsigned __int16)v8;
        dword_7CA72C[v9] = 0;
        dword_7CA730[v9] = 0;
        dword_9CA720 = v11 + 1;
        ++v1;
      }
      v3 += 16;
      ++v2;
      ++v13;
    }
    while ( v13 <= dword_555FCC );
  }
  return v1;
}

// 0x4033f0  sub_4033F0
_DWORD *__cdecl sub_4033F0(_DWORD *a1, int a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // ecx
  int v4; // edx
  int v5; // edx
  int v6; // eax
  int v7; // edx
  int v8; // edx

  result = a1;
  v3 = (_DWORD *)a1[5];
  if ( v3 != NULL && *(_DWORD *)v3[6] == a2 + 1 )
  {
    v4 = a1[6];
    v3[6] = v4;
    v5 = *(_DWORD *)(v4 + 12);
    if ( v5 != 0 )
      *(_DWORD *)(v5 + 20) = v3;
    a1[6] = 0;
    v6 = v3[5];
    if ( v6 != 0 && *(_DWORD *)(*(_DWORD *)(v6 + 28) + 4) == *(_DWORD *)v3[6] - 1 )
    {
      v7 = v3[7];
      *(_DWORD *)(v6 + 28) = v7;
      v8 = *(_DWORD *)(v7 + 16);
      if ( v8 != 0 )
        *(_DWORD *)(v8 + 20) = v6;
      v3[6] = 0;
      return (_DWORD *)sub_4033F0(v6, *(_DWORD *)(*(_DWORD *)(v6 + 28) + 4));
    }
    else
    {
      return v3;
    }
  }
  return result;
}

// 0x403470  sub_403470
_DWORD *__cdecl sub_403470(_DWORD *a1, int a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // ecx
  int v4; // edx
  int v5; // edx
  int v6; // eax
  int v7; // edx
  int v8; // edx

  result = a1;
  v3 = (_DWORD *)a1[5];
  if ( v3 != NULL && *(_DWORD *)(v3[7] + 4) == a2 - 1 )
  {
    v4 = a1[7];
    v3[7] = v4;
    v5 = *(_DWORD *)(v4 + 16);
    if ( v5 != 0 )
      *(_DWORD *)(v5 + 20) = v3;
    a1[6] = 0;
    v6 = v3[5];
    if ( v6 != 0 && **(_DWORD **)(v6 + 24) == *(_DWORD *)(v3[7] + 4) + 1 )
    {
      v7 = v3[6];
      *(_DWORD *)(v6 + 24) = v7;
      v8 = *(_DWORD *)(v7 + 12);
      if ( v8 != 0 )
        *(_DWORD *)(v8 + 20) = v6;
      v3[6] = 0;
      return (_DWORD *)sub_403470(v6, **(_DWORD **)(v6 + 24));
    }
    else
    {
      return v3;
    }
  }
  return result;
}

// 0x4034f0  sub_4034F0
int __cdecl sub_4034F0(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v8; // ecx
  int v9; // eax
  _DWORD *v10; // esi
  int v11; // ecx
  _DWORD *v12; // eax
  int v13; // ecx
  _DWORD *v14; // eax
  unsigned __int16 v15; // cx
  _DWORD *v17; // eax
  unsigned __int16 v18; // cx
  int v19; // ecx
  _DWORD *v20; // ecx
  unsigned __int16 v21; // di
  _DWORD *v22; // ecx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  _DWORD *v26; // eax
  int v27; // edx
  int v28; // edx
  _DWORD *v29; // eax
  _DWORD *v30; // eax
  unsigned __int16 v31; // cx
  _DWORD *v32; // eax
  int v33; // edx
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  int v37; // edx
  int v38; // edx
  _DWORD *v39; // eax
  unsigned __int16 v40; // cx
  _DWORD *v41; // eax
  int v42; // edx
  int v43; // ecx
  int v44; // ecx
  int v45; // edx
  int v46; // edx
  _DWORD *v47; // eax
  unsigned __int16 v48; // cx
  _DWORD *v49; // eax
  int v50; // edx
  int v51; // ecx
  int v52; // ecx
  _DWORD *v53; // ecx
  int v54; // edx
  int v55; // edx
  _DWORD *v56; // ecx
  unsigned __int16 v57; // di
  _DWORD *v58; // ecx
  int v59; // eax
  int v60; // eax
  int v61; // eax
  _DWORD *v62; // eax
  int v63; // edx
  int v64; // edx
  _DWORD *v65; // eax
  int v66; // [esp+10h] [ebp-Ch]
  int v67; // [esp+18h] [ebp-4h]
  int v68; // [esp+28h] [ebp+Ch]

  v3 = a1;
  v4 = a1[3];
  v5 = a1[2];
  v67 = 1;
  if ( v4 < v5 )
  {
    a1[2] = v4;
    v6 = a1[4];
    a1[3] = v5;
    a1[4] = a1[5];
    a1[5] = v6;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v8 = a2[7];
          v68 = v8;
          v9 = *(_DWORD *)(v8 + 4) + 1;
          v66 = v9;
          if ( v3[2] <= v9 )
            break;
          if ( *(_DWORD *)(v8 + 16) == 0 )
          {
            v14 = (_DWORD *)((char *)&unk_7CA720 + 32 * dword_9CA720);
            *(_DWORD *)(v8 + 16) = v14;
            v14[5] = a2;
            v14[7] = v14;
            v14[6] = v14;
            *v14 = v3[2];
            v14[1] = v3[3];
            v15 = *((_WORD *)v3 + 2);
            v14[3] = 0;
            v14[2] = v15;
            v14[4] = 0;
            ++dword_9CA720;
            return v67;
          }
          a2 = *(_DWORD **)(v8 + 16);
        }
        v10 = (_DWORD *)a2[6];
        v11 = *v10 - 1;
        if ( v3[3] >= v11 )
          break;
        if ( v10[3] == 0 )
        {
          v17 = (_DWORD *)((char *)&unk_7CA720 + 32 * dword_9CA720);
          v10[3] = v17;
          v17[5] = a2;
          v17[7] = v17;
          v17[6] = v17;
          *v17 = v3[2];
          v17[1] = v3[3];
          v18 = *((_WORD *)v3 + 2);
          v17[3] = 0;
          v17[2] = v18;
          v17[4] = 0;
          ++dword_9CA720;
          return v67;
        }
        a2 = (_DWORD *)v10[3];
      }
      if ( v3[2] > v11 )
        break;
      if ( v3[3] < v9 )
      {
        v3[3] = v11;
        if ( v10[3] == 0 )
        {
          v39 = (_DWORD *)((char *)&unk_7CA720 + 32 * dword_9CA720);
          v10[3] = v39;
          a2[6] = v39;
          *v39 = v3[2];
          v39[1] = v3[3];
          v40 = *((_WORD *)v3 + 2);
          v39[3] = 0;
          v39[2] = v40;
          v39[4] = 0;
          ++dword_9CA720;
          if ( a3 == 0 )
            return v67;
          v41 = (_DWORD *)a2[5];
          v42 = v3[2];
          if ( v41 == NULL || *(_DWORD *)(v41[7] + 4) != v42 - 1 )
            return v67;
          v43 = a2[7];
          v41[7] = v43;
          v44 = *(_DWORD *)(v43 + 16);
          if ( v44 != 0 )
            *(_DWORD *)(v44 + 20) = v41;
          a2[6] = 0;
          v36 = v41[5];
          if ( v36 == 0 || **(_DWORD **)(v36 + 24) != *(_DWORD *)(v41[7] + 4) + 1 )
            return v67;
          v45 = v41[6];
          *(_DWORD *)(v36 + 24) = v45;
          v46 = *(_DWORD *)(v45 + 12);
          if ( v46 != 0 )
            *(_DWORD *)(v46 + 20) = v36;
          v41[6] = 0;
LABEL_60:
          sub_403470((_DWORD *)v36, **(_DWORD **)(v36 + 24));
          return v67;
        }
        a3 = 1;
        a2 = (_DWORD *)v10[3];
      }
      else
      {
        v12 = (_DWORD *)((char *)&unk_567900 + 64 * dword_553434++);
        *v12 = *a1;
        v12[1] = a1[1];
        v12[2] = a1[2];
        v12[3] = a1[3];
        v12[4] = a1[4];
        v12[5] = a1[5];
        *v3 = v12;
        v12[2] = v66;
        v3[3] = v11;
        if ( v10[3] == 0 )
        {
          v19 = *(_DWORD *)(v68 + 16);
          if ( v19 != 0 )
          {
            for ( v67 += sub_4034F0(v12, v19, 1); a2[6] == 0; a2 = (_DWORD *)a2[5] )
              ;
            v3 = a1;
          }
          else
          {
            v20 = (_DWORD *)((char *)&unk_7CA720 + 32 * dword_9CA720);
            *(_DWORD *)(v68 + 16) = v20;
            a2[7] = v20;
            *v20 = v12[2];
            v20[1] = v12[3];
            v21 = *((_WORD *)v12 + 2);
            v20[3] = 0;
            v20[2] = v21;
            v20[4] = 0;
            ++dword_9CA720;
            if ( a3 != 0 )
            {
              v22 = (_DWORD *)a2[5];
              v23 = v12[3];
              if ( v22 != NULL && *(_DWORD *)v22[6] == v23 + 1 )
              {
                v24 = a2[6];
                v22[6] = v24;
                v25 = *(_DWORD *)(v24 + 12);
                if ( v25 != 0 )
                  *(_DWORD *)(v25 + 20) = v22;
                a2[6] = 0;
                v26 = (_DWORD *)v22[5];
                if ( v26 != NULL && *(_DWORD *)(v26[7] + 4) == *(_DWORD *)v22[6] - 1 )
                {
                  v27 = v22[7];
                  v26[7] = v27;
                  v28 = *(_DWORD *)(v27 + 16);
                  if ( v28 != 0 )
                    *(_DWORD *)(v28 + 20) = v26;
                  v22[6] = 0;
                  v29 = sub_4033F0(v26, *(_DWORD *)(v26[7] + 4));
                  v3 = a1;
                  a2 = v29;
                  ++v67;
                  goto LABEL_40;
                }
                a2 = v22;
              }
            }
            ++v67;
          }
LABEL_40:
          *(_DWORD *)(a2[6] + 12) = (char *)&unk_7CA720 + 32 * dword_9CA720;
          v30 = *(_DWORD **)(a2[6] + 12);
          a2[6] = v30;
          *v30 = v3[2];
          v30[1] = v3[3];
          v31 = *((_WORD *)v3 + 2);
          v30[3] = 0;
          v30[2] = v31;
          v30[4] = 0;
          ++dword_9CA720;
          if ( a3 == 0 )
            return v67;
          v32 = (_DWORD *)a2[5];
          v33 = v3[2];
          if ( v32 == NULL || *(_DWORD *)(v32[7] + 4) != v33 - 1 )
            return v67;
          v34 = a2[7];
          v32[7] = v34;
          v35 = *(_DWORD *)(v34 + 16);
          if ( v35 != 0 )
            *(_DWORD *)(v35 + 20) = v32;
          a2[6] = 0;
          v36 = v32[5];
          if ( v36 == 0 || **(_DWORD **)(v36 + 24) != *(_DWORD *)(v32[7] + 4) + 1 )
            return v67;
          v37 = v32[6];
          *(_DWORD *)(v36 + 24) = v37;
          v38 = *(_DWORD *)(v37 + 12);
          if ( v38 != 0 )
            *(_DWORD *)(v38 + 20) = v36;
          v32[6] = 0;
          goto LABEL_60;
        }
        v13 = *(_DWORD *)(v68 + 16);
        if ( v13 != 0 )
        {
          for ( v67 += sub_4034F0(v12, v13, 1); a2[6] == 0; a2 = (_DWORD *)a2[5] )
            ;
          v3 = a1;
          a3 = 1;
          a2 = *(_DWORD **)(a2[6] + 12);
        }
        else
        {
          v56 = (_DWORD *)((char *)&unk_7CA720 + 32 * dword_9CA720);
          *(_DWORD *)(v68 + 16) = v56;
          a2[7] = v56;
          *v56 = v12[2];
          v56[1] = v12[3];
          v57 = *((_WORD *)v12 + 2);
          v56[3] = 0;
          v56[2] = v57;
          v56[4] = 0;
          ++dword_9CA720;
          if ( a3 != 0 && (v58 = (_DWORD *)a2[5], v59 = v12[3], v58 != NULL) && *(_DWORD *)v58[6] == v59 + 1 )
          {
            v60 = a2[6];
            v58[6] = v60;
            v61 = *(_DWORD *)(v60 + 12);
            if ( v61 != 0 )
              *(_DWORD *)(v61 + 20) = v58;
            a2[6] = 0;
            v62 = (_DWORD *)v58[5];
            if ( v62 == NULL || *(_DWORD *)(v62[7] + 4) != *(_DWORD *)v58[6] - 1 )
            {
              a2 = v58;
              goto LABEL_84;
            }
            v63 = v58[7];
            v62[7] = v63;
            v64 = *(_DWORD *)(v63 + 16);
            if ( v64 != 0 )
              *(_DWORD *)(v64 + 20) = v62;
            v58[6] = 0;
            v65 = sub_4033F0(v62, *(_DWORD *)(v62[7] + 4));
            v3 = a1;
            a3 = 1;
            ++v67;
            a2 = *(_DWORD **)(v65[6] + 12);
          }
          else
          {
LABEL_84:
            a3 = 1;
            ++v67;
            a2 = *(_DWORD **)(a2[6] + 12);
          }
        }
      }
    }
    if ( v3[3] < v9 )
    {
      v3[2] = 2;
      v3[3] = 1;
      return v67 - 1;
    }
    v3[2] = v9;
    if ( *(_DWORD *)(v68 + 16) == 0 )
      break;
    a3 = 1;
    a2 = *(_DWORD **)(v68 + 16);
  }
  v47 = (_DWORD *)((char *)&unk_7CA720 + 32 * dword_9CA720);
  *(_DWORD *)(v68 + 16) = v47;
  a2[7] = v47;
  *v47 = v3[2];
  v47[1] = v3[3];
  v48 = *((_WORD *)v3 + 2);
  v47[3] = 0;
  v47[2] = v48;
  v47[4] = 0;
  ++dword_9CA720;
  if ( a3 != 0 )
  {
    v49 = (_DWORD *)a2[5];
    v50 = v3[3];
    if ( v49 != NULL && *(_DWORD *)v49[6] == v50 + 1 )
    {
      v51 = a2[6];
      v49[6] = v51;
      v52 = *(_DWORD *)(v51 + 12);
      if ( v52 != 0 )
        *(_DWORD *)(v52 + 20) = v49;
      a2[6] = 0;
      v53 = (_DWORD *)v49[5];
      if ( v53 != NULL && *(_DWORD *)(v53[7] + 4) == *(_DWORD *)v49[6] - 1 )
      {
        v54 = v49[7];
        v53[7] = v54;
        v55 = *(_DWORD *)(v54 + 16);
        if ( v55 != 0 )
          *(_DWORD *)(v55 + 20) = v53;
        v49[6] = 0;
        sub_4033F0(v53, *(_DWORD *)(v53[7] + 4));
      }
    }
  }
  return v67;
}

// 0x403b00  sub_403B00
int __cdecl sub_403B00(__int16 a1)
{
  int v1; // edi
  int v2; // ebp
  char *v3; // esi
  int *v4; // ebx
  int v5; // eax
  bool v6; // zf

  v1 = dword_5546A0;
  v2 = 0;
  dword_553434 = 0;
  if ( dword_5546A0 <= dword_555FCC )
  {
    v3 = (char *)&unk_555FE0 + 64 * dword_5546A0;
    v4 = (int *)((char *)&unk_7C9620 + 4 * dword_5546A0);
    do
    {
      *((_WORD *)v3 + 2) = a1;
      v5 = *v4;
      v6 = *v4 == 0;
      *(_DWORD *)v3 = 0;
      if ( v6 )
        ++v2;
      else
        v2 += sub_403B70(v3, v5);
      ++v1;
      ++v4;
      v3 += 64;
    }
    while ( v1 <= dword_555FCC );
  }
  return v2;
}

// 0x403b70  sub_403B70
int __cdecl sub_403B70(int a1, int *a2)
{
  int v3; // eax
  int v4; // esi
  int v5; // edi
  int v6; // ecx
  _DWORD *v7; // ecx
  int v8; // eax
  int v9; // ebx
  int v11; // [esp+Ch] [ebp-4h]

  v11 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( *(unsigned __int16 *)(a1 + 4) <= a2[2] )
              return v11;
            v3 = *(_DWORD *)(a1 + 8);
            v4 = a2[1];
            if ( v3 <= v4 )
              break;
            a2 = (int *)a2[4];
            if ( a2 == NULL )
              return v11;
          }
          v5 = *(_DWORD *)(a1 + 12);
          v6 = *a2;
          if ( v5 >= *a2 )
            break;
          a2 = (int *)a2[3];
          if ( a2 == NULL )
            return v11;
        }
        if ( v3 < v6 )
          break;
        if ( v5 <= v4 )
        {
          *(_DWORD *)(a1 + 8) = 2;
          *(_DWORD *)(a1 + 12) = 1;
          return v11 - 1;
        }
        *(_DWORD *)(a1 + 8) = v4 + 1;
        a2 = (int *)a2[4];
        if ( a2 == NULL )
          return v11;
      }
      if ( v5 > v4 )
        break;
      *(_DWORD *)(a1 + 12) = v6 - 1;
      a2 = (int *)a2[3];
      if ( a2 == NULL )
        return v11;
    }
    v7 = (_DWORD *)((char *)&unk_567900 + 64 * dword_553434++);
    *v7 = *(_DWORD *)a1;
    v7[1] = *(_DWORD *)(a1 + 4);
    v7[2] = *(_DWORD *)(a1 + 8);
    v7[3] = *(_DWORD *)(a1 + 12);
    v7[4] = *(_DWORD *)(a1 + 16);
    v7[5] = *(_DWORD *)(a1 + 20);
    *(_DWORD *)a1 = v7;
    v7[2] = a2[1] + 1;
    *(_DWORD *)(a1 + 12) = *a2 - 1;
    if ( a2[3] == 0 )
      break;
    if ( a2[4] != 0 )
    {
      v8 = sub_403B70(v7, a2[4]);
      a2 = (int *)a2[3];
      v11 += v8;
    }
    else
    {
      a2 = (int *)a2[3];
      ++v11;
    }
  }
  v9 = a2[4];
  if ( v9 != 0 )
    return sub_403B70(v7, v9) + v11;
  else
    return v11 + 1;
}

// 0x403cc0  sub_403CC0
int __cdecl sub_403CC0(__int16 a1)
{
  int v1; // edi
  int v2; // ebp
  char *v3; // esi
  int *v4; // ebx
  int v5; // eax
  bool v6; // zf

  v1 = dword_5546A0;
  v2 = 0;
  dword_553434 = 0;
  if ( dword_5546A0 <= dword_555FCC )
  {
    v3 = (char *)&unk_555FE0 + 64 * dword_5546A0;
    v4 = (int *)((char *)&unk_7C9620 + 4 * dword_5546A0);
    do
    {
      *((_WORD *)v3 + 2) = a1;
      v5 = *v4;
      v6 = *v4 == 0;
      *(_DWORD *)v3 = 0;
      if ( v6 )
        ++v2;
      else
        v2 += sub_403D30(v3, v5);
      ++v1;
      ++v4;
      v3 += 64;
    }
    while ( v1 <= dword_555FCC );
  }
  return v2;
}

// 0x403d30  sub_403D30
int __cdecl sub_403D30(_DWORD *a1, int *a2)
{
  int v3; // edx
  int v4; // edi
  int v5; // ecx
  int v6; // esi
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // ebx
  int v12; // [esp+10h] [ebp-4h]

  v3 = 1;
  v12 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( *((unsigned __int16 *)a1 + 2) <= a2[2] )
              return v3;
            v4 = a1[2];
            v5 = a2[1];
            if ( v4 <= v5 )
              break;
            a2 = (int *)a2[4];
            if ( a2 == NULL )
              return v3;
          }
          v6 = a1[3];
          v7 = *a2;
          if ( v6 >= *a2 )
            break;
          a2 = (int *)a2[3];
          if ( a2 == NULL )
            return v3;
        }
        if ( v4 < v7 )
          break;
        if ( v6 <= v5 )
        {
          a1[2] = 2;
          a1[3] = 1;
          return v3 - 1;
        }
        a1[2] = v5 + 1;
        a2 = (int *)a2[4];
        if ( a2 == NULL )
          return v3;
      }
      if ( v6 > v5 )
        break;
      a1[3] = v7 - 1;
      a2 = (int *)a2[3];
      if ( a2 == NULL )
        return v3;
    }
    v8 = (_DWORD *)((char *)&unk_567900 + 64 * dword_553434++);
    qmemcpy(v8, a1, 0x40u);
    *a1 = v8;
    v8[2] = a2[1] + 1;
    a1[3] = *a2 - 1;
    if ( a2[3] == 0 )
      break;
    if ( a2[4] != 0 )
    {
      v9 = sub_403D30(v8, a2[4]);
      a2 = (int *)a2[3];
      v12 += v9;
      v3 = v12;
    }
    else
    {
      a2 = (int *)a2[3];
      v12 = ++v3;
    }
  }
  v10 = a2[4];
  if ( v10 != 0 )
    return sub_403D30(v8, v10) + v12;
  else
    return v3 + 1;
}

// 0x403e70  sub_403E70
void sub_403E70()
{
  if ( dword_46AF60 == 8 )
  {
    dword_7C960C = (int)sub_404D20;
    dword_7C9614 = (int)sub_404F20;
    dword_7C9608 = (int)sub_405180;
    dword_7C9610 = (int)sub_405390;
  }
  else
  {
    dword_7C960C = (int)sub_403ED0;
    dword_7C9614 = (int)sub_404220;
    dword_7C9608 = (int)sub_4045F0;
    dword_7C9610 = (int)sub_404970;
  }
}

// 0x403ed0  sub_403ED0
int __cdecl sub_403ED0(int a1, int a2, int a3)
{
  int v3; // esi
  int v5; // edx
  int v6; // eax
  int v7; // edi
  int v8; // eax
  double v9; // st7
  _DWORD *v10; // edi
  double v11; // st7
  double v12; // st7
  int v14; // [esp+68h] [ebp-28h]
  int v15; // [esp+8Ch] [ebp-4h]
  int *v16; // [esp+98h] [ebp+8h]
  int v17; // [esp+98h] [ebp+8h]
  float v18; // [esp+98h] [ebp+8h]
  float v19; // [esp+98h] [ebp+8h]
  float v20; // [esp+98h] [ebp+8h]
  float v21; // [esp+98h] [ebp+8h]
  float v22; // [esp+98h] [ebp+8h]
  int v23; // [esp+9Ch] [ebp+Ch]
  float v24; // [esp+9Ch] [ebp+Ch]
  float v25; // [esp+9Ch] [ebp+Ch]
  int v26; // [esp+9Ch] [ebp+Ch]
  float v27; // [esp+9Ch] [ebp+Ch]
  float v28; // [esp+9Ch] [ebp+Ch]
  float v29; // [esp+A0h] [ebp+10h]
  float v30; // [esp+A0h] [ebp+10h]
  float v31; // [esp+A0h] [ebp+10h]
  float v32; // [esp+A0h] [ebp+10h]

  v15 = 0;
  v3 = a1 + 24 * a3 - 24;
  if ( a3 > 0 )
  {
    v5 = a1 + 8;
    v14 = a3;
    while ( 1 )
    {
      v16 = *(int **)(v5 - 8);
      v6 = *v16;
      v7 = **(_DWORD **)v3;
      if ( *v16 >= 0 )
        break;
      if ( v7 >= 0 )
      {
        v11 = (double)(v6 - v7);
        v26 = *(_DWORD *)(*(_DWORD *)v3 + 4);
        v20 = (float)(v16[1] - v26);
        if ( v11 == 0.0 )
          v12 = 100000.0;
        else
          v12 = 1.0 / v11;
        if ( v20 == 0.0 )
          v20 = 0.0000099999997;
        **(_DWORD **)a2 = 0;
        v21 = (double)v26 - (double)v7 * (v20 * v12);
        v31 = (double)-v7 * v12;
        *(_DWORD *)(*(_DWORD *)a2 + 4) = (int)v21;
        v22 = 1.0 - v31;
        *(float *)(a2 + 4) = *(float *)(v5 - 4) * v31 + *(float *)(v3 + 4) * v22;
        *(float *)(a2 + 8) = v31 * *(float *)v5 + *(float *)(v3 + 8) * v22;
        v27 = (double)*(unsigned int *)(v5 + 4) * v31 + (double)*(unsigned int *)(v3 + 12) * v22;
        *(_DWORD *)(a2 + 12) = (int)v27;
        v28 = (double)*(unsigned int *)(v5 + 8) * v31 + (double)*(unsigned int *)(v3 + 16) * v22;
        *(_DWORD *)(a2 + 16) = (int)v28;
        v32 = (double)*(unsigned int *)(v5 + 12) * v31 + (double)*(unsigned int *)(v3 + 20) * v22;
        v8 = (int)v32;
LABEL_14:
        *(_DWORD *)(a2 + 20) = v8;
        ++v15;
        goto LABEL_15;
      }
LABEL_16:
      v3 = v5 - 8;
      v5 += 24;
      if ( --v14 == 0 )
        return v15;
    }
    if ( v7 >= 0 )
    {
      **(_DWORD **)a2 = v6;
      *(_DWORD *)(*(_DWORD *)a2 + 4) = *(_DWORD *)(*(_DWORD *)(v5 - 8) + 4);
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(v5 - 4);
      *(_DWORD *)(a2 + 8) = *(_DWORD *)v5;
      *(_DWORD *)(a2 + 12) = *(_DWORD *)(v5 + 4);
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(v5 + 8);
      v8 = *(_DWORD *)(v5 + 12);
      goto LABEL_14;
    }
    v23 = *(_DWORD *)(*(_DWORD *)v3 + 4);
    v9 = 1.0 / (double)(v6 - v7);
    v17 = v16[1] - v23;
    **(_DWORD **)a2 = 0;
    v18 = (double)v23 - (double)v7 * ((double)v17 * v9);
    v29 = (double)-v7 * v9;
    *(_DWORD *)(*(_DWORD *)a2 + 4) = (int)v18;
    v19 = 1.0 - v29;
    *(float *)(a2 + 4) = v29 * *(float *)(v5 - 4) + *(float *)(v3 + 4) * v19;
    *(float *)(a2 + 8) = v29 * *(float *)v5 + *(float *)(v3 + 8) * v19;
    v24 = (double)*(unsigned int *)(v5 + 4) * v29 + (double)*(unsigned int *)(v3 + 12) * v19;
    *(_DWORD *)(a2 + 12) = (int)v24;
    v25 = (double)*(unsigned int *)(v5 + 8) * v29 + (double)*(unsigned int *)(v3 + 16) * v19;
    *(_DWORD *)(a2 + 16) = (int)v25;
    v30 = (double)*(unsigned int *)(v5 + 12) * v29 + (double)*(unsigned int *)(v3 + 20) * v19;
    *(_DWORD *)(a2 + 20) = (int)v30;
    v10 = *(_DWORD **)(a2 + 24);
    a2 += 24;
    *v10 = **(_DWORD **)(v5 - 8);
    *(_DWORD *)(*(_DWORD *)a2 + 4) = *(_DWORD *)(*(_DWORD *)(v5 - 8) + 4);
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(v5 - 4);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)v5;
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(v5 + 4);
    *(_DWORD *)(a2 + 16) = *(_DWORD *)(v5 + 8);
    *(_DWORD *)(a2 + 20) = *(_DWORD *)(v5 + 12);
    v15 += 2;
LABEL_15:
    a2 += 24;
    goto LABEL_16;
  }
  return v15;
}

// 0x404220  sub_404220
int __cdecl sub_404220(int a1, int a2, int a3)
{
  int v3; // esi
  int v5; // edi
  int v6; // edx
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  double v10; // st7
  double v11; // st7
  _DWORD *v12; // edi
  double v13; // st7
  double v14; // st7
  int v16; // [esp+84h] [ebp-Ch]
  int v17; // [esp+88h] [ebp-8h]
  int v18; // [esp+8Ch] [ebp-4h]
  float v19; // [esp+8Ch] [ebp-4h]
  int v20; // [esp+8Ch] [ebp-4h]
  float v21; // [esp+8Ch] [ebp-4h]
  float v22; // [esp+98h] [ebp+8h]
  float v23; // [esp+98h] [ebp+8h]
  float v24; // [esp+98h] [ebp+8h]
  float v25; // [esp+98h] [ebp+8h]
  float v26; // [esp+9Ch] [ebp+Ch]
  float v27; // [esp+9Ch] [ebp+Ch]
  float v28; // [esp+9Ch] [ebp+Ch]
  float v29; // [esp+9Ch] [ebp+Ch]
  float v30; // [esp+9Ch] [ebp+Ch]
  float v31; // [esp+9Ch] [ebp+Ch]
  int *v32; // [esp+A0h] [ebp+10h]
  float v33; // [esp+A0h] [ebp+10h]
  float v34; // [esp+A0h] [ebp+10h]
  float v35; // [esp+A0h] [ebp+10h]
  float v36; // [esp+A0h] [ebp+10h]
  float v37; // [esp+A0h] [ebp+10h]
  float v38; // [esp+A0h] [ebp+10h]

  v17 = 0;
  v3 = a1 + 24 * a3 - 24;
  if ( a3 > 0 )
  {
    v5 = dword_46AF58;
    v6 = a1 + 8;
    v16 = a3;
    while ( 1 )
    {
      v32 = *(int **)(v6 - 8);
      v7 = *v32;
      v8 = **(_DWORD **)v3;
      if ( *v32 < v5 )
        break;
      if ( v8 < v5 )
      {
        v13 = (double)(v7 - v8);
        v20 = *(_DWORD *)(*(_DWORD *)v3 + 4);
        v36 = (float)(v32[1] - v20);
        if ( v13 == 0.0 )
          v14 = 100000.0;
        else
          v14 = 1.0 / v13;
        if ( v36 == 0.0 )
          v36 = 0.0000099999997;
        v29 = v36 * v14;
        **(_DWORD **)a2 = v5 - 1;
        v21 = (double)v20 - (double)v8 * v29;
        v37 = (double)(v5 - v8) * v14;
        v24 = (double)dword_46AF58 * v29 + v21;
        *(_DWORD *)(*(_DWORD *)a2 + 4) = (int)v24;
        v25 = 1.0 - v37;
        *(float *)(a2 + 4) = *(float *)(v6 - 4) * v37 + *(float *)(v3 + 4) * v25;
        *(float *)(a2 + 8) = v37 * *(float *)v6 + *(float *)(v3 + 8) * v25;
        v30 = (double)*(unsigned int *)(v6 + 4) * v37 + (double)*(unsigned int *)(v3 + 12) * v25;
        *(_DWORD *)(a2 + 12) = (int)v30;
        v31 = (double)*(unsigned int *)(v6 + 8) * v37 + (double)*(unsigned int *)(v3 + 16) * v25;
        *(_DWORD *)(a2 + 16) = (int)v31;
        v38 = (double)*(unsigned int *)(v6 + 12) * v37 + (double)*(unsigned int *)(v3 + 20) * v25;
        v9 = (int)v38;
LABEL_19:
        *(_DWORD *)(a2 + 20) = v9;
        ++v17;
        goto LABEL_20;
      }
LABEL_21:
      v3 = v6 - 8;
      v6 += 24;
      if ( --v16 == 0 )
        return v17;
    }
    if ( v8 < v5 )
    {
      **(_DWORD **)a2 = v7;
      *(_DWORD *)(*(_DWORD *)a2 + 4) = *(_DWORD *)(*(_DWORD *)(v6 - 8) + 4);
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(v6 - 4);
      *(_DWORD *)(a2 + 8) = *(_DWORD *)v6;
      *(_DWORD *)(a2 + 12) = *(_DWORD *)(v6 + 4);
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(v6 + 8);
      v9 = *(_DWORD *)(v6 + 12);
      goto LABEL_19;
    }
    v10 = (double)(v7 - v8);
    v18 = *(_DWORD *)(*(_DWORD *)v3 + 4);
    v33 = (float)(v32[1] - v18);
    if ( v10 == 0.0 )
      v11 = 100000.0;
    else
      v11 = 1.0 / v10;
    if ( v33 == 0.0 )
      v33 = 0.0000099999997;
    v26 = v33 * v11;
    **(_DWORD **)a2 = v5 - 1;
    v19 = (double)v18 - (double)v8 * v26;
    v34 = (double)(v5 - v8) * v11;
    v22 = (double)dword_46AF58 * v26 + v19;
    *(_DWORD *)(*(_DWORD *)a2 + 4) = (int)v22;
    v23 = 1.0 - v34;
    *(float *)(a2 + 4) = v34 * *(float *)(v6 - 4) + *(float *)(v3 + 4) * v23;
    *(float *)(a2 + 8) = v34 * *(float *)v6 + *(float *)(v3 + 8) * v23;
    v27 = (double)*(unsigned int *)(v6 + 4) * v34 + (double)*(unsigned int *)(v3 + 12) * v23;
    *(_DWORD *)(a2 + 12) = (int)v27;
    v28 = (double)*(unsigned int *)(v6 + 8) * v34 + (double)*(unsigned int *)(v3 + 16) * v23;
    *(_DWORD *)(a2 + 16) = (int)v28;
    v35 = (double)*(unsigned int *)(v6 + 12) * v34 + (double)*(unsigned int *)(v3 + 20) * v23;
    *(_DWORD *)(a2 + 20) = (int)v35;
    v12 = *(_DWORD **)(a2 + 24);
    a2 += 24;
    *v12 = **(_DWORD **)(v6 - 8);
    *(_DWORD *)(*(_DWORD *)a2 + 4) = *(_DWORD *)(*(_DWORD *)(v6 - 8) + 4);
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(v6 - 4);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)v6;
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(v6 + 4);
    *(_DWORD *)(a2 + 16) = *(_DWORD *)(v6 + 8);
    *(_DWORD *)(a2 + 20) = *(_DWORD *)(v6 + 12);
    v17 += 2;
LABEL_20:
    v5 = dword_46AF58;
    a2 += 24;
    goto LABEL_21;
  }
  return v17;
}

// 0x4045f0  sub_4045F0
int __cdecl sub_4045F0(int a1, int a2, int a3)
{
  float *v3; // esi
  int v5; // edx
  int v6; // edi
  int v7; // ebx
  int v8; // esi
  int v9; // eax
  int v10; // ebx
  double v11; // st7
  _DWORD *v12; // ebx
  int v13; // eax
  int v14; // ebx
  double v15; // st7
  int v17; // [esp+70h] [ebp-24h]
  int v18; // [esp+90h] [ebp-4h]
  int v19; // [esp+9Ch] [ebp+8h]
  float v20; // [esp+9Ch] [ebp+8h]
  float v21; // [esp+9Ch] [ebp+8h]
  float v22; // [esp+9Ch] [ebp+8h]
  float v23; // [esp+9Ch] [ebp+8h]
  float v24; // [esp+A0h] [ebp+Ch]
  float v25; // [esp+A0h] [ebp+Ch]
  float v26; // [esp+A0h] [ebp+Ch]
  float v27; // [esp+A0h] [ebp+Ch]
  float v28; // [esp+A4h] [ebp+10h]
  float v29; // [esp+A4h] [ebp+10h]
  float v30; // [esp+A4h] [ebp+10h]
  float v31; // [esp+A4h] [ebp+10h]

  v18 = 0;
  v3 = (float *)(a1 + 24 * a3 - 24);
  if ( a3 > 0 )
  {
    v5 = a1 + 8;
    v17 = a3;
    while ( 1 )
    {
      v6 = *(_DWORD *)(*(_DWORD *)(v5 - 8) + 4);
      v7 = *(_DWORD *)(*(_DWORD *)v3 + 4);
      v19 = v7;
      if ( v6 >= 0 )
        break;
      if ( v7 >= 0 )
      {
        v13 = **(_DWORD **)(v5 - 8);
        v14 = **(_DWORD **)v3;
        if ( v13 == v14 )
        {
          **(_DWORD **)a2 = v14;
          v30 = (double)-v19 / (double)(v6 - v19);
        }
        else
        {
          v15 = 1.0 / (double)(v6 - v19);
          v30 = (double)-v19 * v15;
          v22 = -((double)v19 - (double)**(int **)v3 / (v15 * (double)(v13 - **(_DWORD **)v3)))
              * (v15
               * (double)(v13 - **(_DWORD **)v3));
          **(_DWORD **)a2 = (int)v22;
        }
        *(_DWORD *)(*(_DWORD *)a2 + 4) = 0;
        v23 = 1.0 - v30;
        *(float *)(a2 + 4) = *(float *)(v5 - 4) * v30 + v3[1] * v23;
        *(float *)(a2 + 8) = v30 * *(float *)v5 + v3[2] * v23;
        v26 = (double)*(unsigned int *)(v5 + 4) * v30 + (double)*((unsigned int *)v3 + 3) * v23;
        *(_DWORD *)(a2 + 12) = (int)v26;
        v27 = (double)*(unsigned int *)(v5 + 8) * v30 + (double)*((unsigned int *)v3 + 4) * v23;
        *(_DWORD *)(a2 + 16) = (int)v27;
        v31 = (double)*(unsigned int *)(v5 + 12) * v30 + (double)*((unsigned int *)v3 + 5) * v23;
        v8 = (int)v31;
LABEL_15:
        *(_DWORD *)(a2 + 20) = v8;
        ++v18;
        goto LABEL_16;
      }
LABEL_17:
      v3 = (float *)(v5 - 8);
      v5 += 24;
      if ( --v17 == 0 )
        return v18;
    }
    if ( v7 >= 0 )
    {
      **(_DWORD **)a2 = **(_DWORD **)(v5 - 8);
      *(_DWORD *)(*(_DWORD *)a2 + 4) = *(_DWORD *)(*(_DWORD *)(v5 - 8) + 4);
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(v5 - 4);
      *(_DWORD *)(a2 + 8) = *(_DWORD *)v5;
      *(_DWORD *)(a2 + 12) = *(_DWORD *)(v5 + 4);
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(v5 + 8);
      v8 = *(_DWORD *)(v5 + 12);
      goto LABEL_15;
    }
    v9 = **(_DWORD **)(v5 - 8);
    v10 = **(_DWORD **)v3;
    if ( v9 == v10 )
    {
      **(_DWORD **)a2 = v10;
      v28 = (double)-v19 / (double)(v6 - v19);
    }
    else
    {
      v11 = 1.0 / (double)(v6 - v19);
      v28 = (double)-v19 * v11;
      v20 = -((double)v19 - (double)**(int **)v3 / (v11 * (double)(v9 - **(_DWORD **)v3)))
          * (v11
           * (double)(v9 - **(_DWORD **)v3));
      **(_DWORD **)a2 = (int)v20;
    }
    *(_DWORD *)(*(_DWORD *)a2 + 4) = 0;
    v21 = 1.0 - v28;
    *(float *)(a2 + 4) = v28 * *(float *)(v5 - 4) + v3[1] * v21;
    *(float *)(a2 + 8) = v28 * *(float *)v5 + v3[2] * v21;
    v24 = (double)*(unsigned int *)(v5 + 4) * v28 + (double)*((unsigned int *)v3 + 3) * v21;
    *(_DWORD *)(a2 + 12) = (int)v24;
    v25 = (double)*(unsigned int *)(v5 + 8) * v28 + (double)*((unsigned int *)v3 + 4) * v21;
    *(_DWORD *)(a2 + 16) = (int)v25;
    v29 = (double)*(unsigned int *)(v5 + 12) * v28 + (double)*((unsigned int *)v3 + 5) * v21;
    *(_DWORD *)(a2 + 20) = (int)v29;
    v12 = *(_DWORD **)(a2 + 24);
    a2 += 24;
    *v12 = **(_DWORD **)(v5 - 8);
    *(_DWORD *)(*(_DWORD *)a2 + 4) = *(_DWORD *)(*(_DWORD *)(v5 - 8) + 4);
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(v5 - 4);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)v5;
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(v5 + 4);
    *(_DWORD *)(a2 + 16) = *(_DWORD *)(v5 + 8);
    *(_DWORD *)(a2 + 20) = *(_DWORD *)(v5 + 12);
    v18 += 2;
LABEL_16:
    a2 += 24;
    goto LABEL_17;
  }
  return v18;
}

// 0x404970  sub_404970
int __cdecl sub_404970(int a1, int a2, int a3)
{
  float *v3; // esi
  int v5; // edi
  int v6; // edx
  _DWORD *v7; // eax
  int v8; // ebx
  int v9; // eax
  int v10; // ebx
  double v11; // st7
  _DWORD *v12; // edi
  int v13; // ebx
  double v14; // st7
  int v16; // [esp+84h] [ebp-Ch]
  int v17; // [esp+88h] [ebp-8h]
  int v18; // [esp+98h] [ebp+8h]
  float v19; // [esp+98h] [ebp+8h]
  float v20; // [esp+98h] [ebp+8h]
  float v21; // [esp+98h] [ebp+8h]
  float v22; // [esp+98h] [ebp+8h]
  float v23; // [esp+9Ch] [ebp+Ch]
  float v24; // [esp+9Ch] [ebp+Ch]
  float v25; // [esp+9Ch] [ebp+Ch]
  float v26; // [esp+9Ch] [ebp+Ch]
  int v27; // [esp+A0h] [ebp+10h]
  float v28; // [esp+A0h] [ebp+10h]
  float v29; // [esp+A0h] [ebp+10h]
  float v30; // [esp+A0h] [ebp+10h]
  float v31; // [esp+A0h] [ebp+10h]

  v17 = 0;
  v3 = (float *)(a1 + 24 * a3 - 24);
  if ( a3 > 0 )
  {
    v5 = dword_46AF5C;
    v6 = a1 + 8;
    v16 = a3;
    while ( 1 )
    {
      v7 = *(_DWORD **)(v6 - 8);
      v27 = v7[1];
      v8 = *(_DWORD *)(*(_DWORD *)v3 + 4);
      v18 = v8;
      if ( v27 < v5 )
        break;
      if ( v8 < v5 )
      {
        v13 = **(_DWORD **)v3;
        if ( *v7 == v13 )
        {
          **(_DWORD **)a2 = v13;
          v30 = (double)(v5 - v18) / (double)(v27 - v18);
        }
        else
        {
          v14 = 1.0 / (double)(v27 - v18);
          v30 = (double)(v5 - v18) * v14;
          v21 = ((double)dword_46AF5C - ((double)v18 - (double)**(int **)v3 / (v14 * (double)(*v7 - **(_DWORD **)v3))))
              * (v14
               * (double)(*v7 - **(_DWORD **)v3));
          **(_DWORD **)a2 = (int)v21;
        }
        *(_DWORD *)(*(_DWORD *)a2 + 4) = dword_46AF5C - 1;
        v22 = 1.0 - v30;
        *(float *)(a2 + 4) = *(float *)(v6 - 4) * v30 + v3[1] * v22;
        *(float *)(a2 + 8) = v30 * *(float *)v6 + v3[2] * v22;
        v25 = (double)*(unsigned int *)(v6 + 4) * v30 + (double)*((unsigned int *)v3 + 3) * v22;
        *(_DWORD *)(a2 + 12) = (int)v25;
        v26 = (double)*(unsigned int *)(v6 + 8) * v30 + (double)*((unsigned int *)v3 + 4) * v22;
        *(_DWORD *)(a2 + 16) = (int)v26;
        v31 = (double)*(unsigned int *)(v6 + 12) * v30 + (double)*((unsigned int *)v3 + 5) * v22;
        v9 = (int)v31;
LABEL_15:
        *(_DWORD *)(a2 + 20) = v9;
        ++v17;
        goto LABEL_16;
      }
LABEL_17:
      v3 = (float *)(v6 - 8);
      v6 += 24;
      if ( --v16 == 0 )
        return v17;
    }
    if ( v8 < v5 )
    {
      **(_DWORD **)a2 = *v7;
      *(_DWORD *)(*(_DWORD *)a2 + 4) = *(_DWORD *)(*(_DWORD *)(v6 - 8) + 4);
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(v6 - 4);
      *(_DWORD *)(a2 + 8) = *(_DWORD *)v6;
      *(_DWORD *)(a2 + 12) = *(_DWORD *)(v6 + 4);
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(v6 + 8);
      v9 = *(_DWORD *)(v6 + 12);
      goto LABEL_15;
    }
    v10 = **(_DWORD **)v3;
    if ( *v7 == v10 )
    {
      **(_DWORD **)a2 = v10;
      v28 = (double)(v5 - v18) / (double)(v27 - v18);
    }
    else
    {
      v11 = 1.0 / (double)(v27 - v18);
      v28 = (double)(v5 - v18) * v11;
      v19 = ((double)dword_46AF5C - ((double)v18 - (double)**(int **)v3 / (v11 * (double)(*v7 - **(_DWORD **)v3))))
          * (v11
           * (double)(*v7 - **(_DWORD **)v3));
      **(_DWORD **)a2 = (int)v19;
    }
    *(_DWORD *)(*(_DWORD *)a2 + 4) = dword_46AF5C - 1;
    v20 = 1.0 - v28;
    *(float *)(a2 + 4) = v28 * *(float *)(v6 - 4) + v3[1] * v20;
    *(float *)(a2 + 8) = v28 * *(float *)v6 + v3[2] * v20;
    v23 = (double)*(unsigned int *)(v6 + 4) * v28 + (double)*((unsigned int *)v3 + 3) * v20;
    *(_DWORD *)(a2 + 12) = (int)v23;
    v24 = (double)*(unsigned int *)(v6 + 8) * v28 + (double)*((unsigned int *)v3 + 4) * v20;
    *(_DWORD *)(a2 + 16) = (int)v24;
    v29 = (double)*(unsigned int *)(v6 + 12) * v28 + (double)*((unsigned int *)v3 + 5) * v20;
    *(_DWORD *)(a2 + 20) = (int)v29;
    v12 = *(_DWORD **)(a2 + 24);
    a2 += 24;
    *v12 = **(_DWORD **)(v6 - 8);
    v17 += 2;
    *(_DWORD *)(*(_DWORD *)a2 + 4) = *(_DWORD *)(*(_DWORD *)(v6 - 8) + 4);
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(v6 - 4);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)v6;
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(v6 + 4);
    *(_DWORD *)(a2 + 16) = *(_DWORD *)(v6 + 8);
    *(_DWORD *)(a2 + 20) = *(_DWORD *)(v6 + 12);
LABEL_16:
    v5 = dword_46AF5C;
    a2 += 24;
    goto LABEL_17;
  }
  return v17;
}

// 0x404d20  sub_404D20
int __cdecl sub_404D20(int **a1, float *a2, int a3)
{
  int **v3; // edx
  int v4; // edi
  int *v6; // ebx
  int v7; // eax
  int v8; // esi
  double v9; // st7
  _DWORD *v10; // eax
  double v11; // st7
  double v12; // st7
  double v13; // st7
  double v14; // st7
  int v16; // [esp+4h] [ebp-10h]
  int v17; // [esp+10h] [ebp-4h]
  int v18; // [esp+1Ch] [ebp+8h]
  float v19; // [esp+1Ch] [ebp+8h]
  int v20; // [esp+1Ch] [ebp+8h]
  float v21; // [esp+1Ch] [ebp+8h]
  int v22; // [esp+24h] [ebp+10h]
  float v23; // [esp+24h] [ebp+10h]
  float v24; // [esp+24h] [ebp+10h]
  float v25; // [esp+24h] [ebp+10h]

  v3 = a1;
  v17 = 0;
  v4 = (int)&a1[6 * a3 - 6];
  if ( a3 > 0 )
  {
    v16 = a3;
    while ( 1 )
    {
      v6 = *v3;
      v7 = **v3;
      v8 = **(_DWORD **)v4;
      if ( v7 >= 0 )
        break;
      if ( v8 >= 0 )
      {
        v12 = (double)(v7 - v8);
        v20 = *(_DWORD *)(*(_DWORD *)v4 + 4);
        v24 = (float)(v6[1] - v20);
        if ( v12 == 0.0 )
          v13 = 100000.0;
        else
          v13 = 1.0 / v12;
        if ( v24 == 0.0 )
          v24 = 0.0000099999997;
        **(_DWORD **)a2 = 0;
        v21 = (double)v20 - (double)v8 * (v24 * v13);
        v25 = (double)-v8 * v13;
        v14 = 1.0 - v25;
        *(_DWORD *)(*(_DWORD *)a2 + 4) = (int)v21;
        a2[1] = *((float *)v3 + 1) * v25 + *(float *)(v4 + 4) * v14;
        a2[2] = v25 * *((float *)v3 + 2) + *(float *)(v4 + 8) * v14;
LABEL_14:
        ++v17;
        goto LABEL_15;
      }
LABEL_16:
      v4 = (int)v3;
      v3 += 6;
      if ( --v16 == 0 )
        return v17;
    }
    if ( v8 >= 0 )
    {
      **(_DWORD **)a2 = v7;
      *(_DWORD *)(*(_DWORD *)a2 + 4) = (*v3)[1];
      *((_DWORD *)a2 + 1) = v3[1];
      *((_DWORD *)a2 + 2) = v3[2];
      goto LABEL_14;
    }
    v18 = *(_DWORD *)(*(_DWORD *)v4 + 4);
    v9 = 1.0 / (double)(v7 - v8);
    v22 = v6[1] - v18;
    **(_DWORD **)a2 = 0;
    v10 = (_DWORD *)(*(_DWORD *)a2 + 4);
    v19 = (double)v18 - (double)v8 * ((double)v22 * v9);
    v23 = (double)-v8 * v9;
    v11 = 1.0 - v23;
    a2 += 6;
    *v10 = (int)v19;
    v17 += 2;
    *(a2 - 5) = v23 * *((float *)v3 + 1) + *(float *)(v4 + 4) * v11;
    *(a2 - 4) = v23 * *((float *)v3 + 2) + *(float *)(v4 + 8) * v11;
    **(_DWORD **)a2 = **v3;
    *(_DWORD *)(*(_DWORD *)a2 + 4) = (*v3)[1];
    *((_DWORD *)a2 + 1) = v3[1];
    *((_DWORD *)a2 + 2) = v3[2];
LABEL_15:
    a2 += 6;
    goto LABEL_16;
  }
  return v17;
}

// 0x404f20  sub_404F20
int __cdecl sub_404F20(int a1, float *a2, int a3)
{
  int v3; // edx
  int v4; // esi
  int v6; // edi
  int v7; // eax
  int v8; // ebx
  double v9; // st7
  double v10; // st7
  _DWORD *v11; // eax
  double v12; // st7
  double v13; // st7
  double v14; // st7
  double v15; // st7
  int v17; // [esp+Ch] [ebp-Ch]
  int v18; // [esp+10h] [ebp-8h]
  float v19; // [esp+10h] [ebp-8h]
  int v20; // [esp+10h] [ebp-8h]
  float v21; // [esp+10h] [ebp-8h]
  int v22; // [esp+14h] [ebp-4h]
  float v23; // [esp+20h] [ebp+8h]
  float v24; // [esp+20h] [ebp+8h]
  float v25; // [esp+24h] [ebp+Ch]
  float v26; // [esp+24h] [ebp+Ch]
  float v27; // [esp+28h] [ebp+10h]
  float v28; // [esp+28h] [ebp+10h]
  float v29; // [esp+28h] [ebp+10h]
  float v30; // [esp+28h] [ebp+10h]

  v3 = a1;
  v22 = 0;
  v4 = a1 + 24 * a3 - 24;
  if ( a3 > 0 )
  {
    v6 = dword_46AF58;
    v17 = a3;
    while ( 1 )
    {
      v7 = **(_DWORD **)v3;
      v8 = **(_DWORD **)v4;
      if ( v7 < v6 )
        break;
      if ( v8 < v6 )
      {
        v13 = (double)(v7 - v8);
        v20 = *(_DWORD *)(*(_DWORD *)v4 + 4);
        v29 = (float)(*(_DWORD *)(*(_DWORD *)v3 + 4) - v20);
        if ( v13 == 0.0 )
          v14 = 100000.0;
        else
          v14 = 1.0 / v13;
        if ( v29 == 0.0 )
          v29 = 0.0000099999997;
        v26 = v29 * v14;
        **(_DWORD **)a2 = v6 - 1;
        v21 = (double)v20 - (double)v8 * v26;
        v30 = (double)(v6 - v8) * v14;
        v24 = (double)dword_46AF58 * v26 + v21;
        v15 = 1.0 - v30;
        *(_DWORD *)(*(_DWORD *)a2 + 4) = (int)v24;
        a2[1] = *(float *)(v3 + 4) * v30 + *(float *)(v4 + 4) * v15;
        a2[2] = v30 * *(float *)(v3 + 8) + *(float *)(v4 + 8) * v15;
LABEL_19:
        ++v22;
        goto LABEL_20;
      }
LABEL_21:
      v4 = v3;
      v3 += 24;
      if ( --v17 == 0 )
        return v22;
    }
    if ( v8 < v6 )
    {
      **(_DWORD **)a2 = v7;
      *(_DWORD *)(*(_DWORD *)a2 + 4) = *(_DWORD *)(*(_DWORD *)v3 + 4);
      a2[1] = *(float *)(v3 + 4);
      a2[2] = *(float *)(v3 + 8);
      goto LABEL_19;
    }
    v9 = (double)(v7 - v8);
    v18 = *(_DWORD *)(*(_DWORD *)v4 + 4);
    v27 = (float)(*(_DWORD *)(*(_DWORD *)v3 + 4) - v18);
    if ( v9 == 0.0 )
      v10 = 100000.0;
    else
      v10 = 1.0 / v9;
    if ( v27 == 0.0 )
      v27 = 0.0000099999997;
    v25 = v27 * v10;
    **(_DWORD **)a2 = v6 - 1;
    v11 = (_DWORD *)(*(_DWORD *)a2 + 4);
    v19 = (double)v18 - (double)v8 * v25;
    v28 = (double)(v6 - v8) * v10;
    v23 = (double)dword_46AF58 * v25 + v19;
    v12 = 1.0 - v28;
    a2 += 6;
    *v11 = (int)v23;
    v22 += 2;
    *(a2 - 5) = v28 * *(float *)(v3 + 4) + *(float *)(v4 + 4) * v12;
    *(a2 - 4) = v28 * *(float *)(v3 + 8) + *(float *)(v4 + 8) * v12;
    **(_DWORD **)a2 = **(_DWORD **)v3;
    *(_DWORD *)(*(_DWORD *)a2 + 4) = *(_DWORD *)(*(_DWORD *)v3 + 4);
    a2[1] = *(float *)(v3 + 4);
    a2[2] = *(float *)(v3 + 8);
LABEL_20:
    v6 = dword_46AF58;
    a2 += 6;
    goto LABEL_21;
  }
  return v22;
}

// 0x405180  sub_405180
int __cdecl sub_405180(float *a1, float *a2, int a3)
{
  float *v3; // esi
  int v4; // edi
  int *v6; // eax
  int *v7; // ebx
  int v8; // edx
  int v9; // edi
  int v10; // eax
  int v11; // ebx
  double v12; // st7
  double v13; // st7
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  double v17; // st7
  double v18; // st7
  bool v19; // zf
  int i; // [esp+Ch] [ebp-14h]
  int v22; // [esp+18h] [ebp-8h]
  int v23; // [esp+1Ch] [ebp-4h]
  float v24; // [esp+2Ch] [ebp+Ch]
  float v25; // [esp+2Ch] [ebp+Ch]
  float v26; // [esp+30h] [ebp+10h]
  float v27; // [esp+30h] [ebp+10h]

  v3 = a1;
  v23 = 0;
  v4 = (int)&a1[6 * a3 - 6];
  v22 = v4;
  if ( a3 > 0 )
  {
    for ( i = a3; ; --i )
    {
      v6 = *(int **)v3;
      v7 = *(int **)v4;
      v8 = *(_DWORD *)(*(_DWORD *)v3 + 4);
      v9 = *(_DWORD *)(*(_DWORD *)v4 + 4);
      if ( v8 >= 0 )
        break;
      if ( v9 >= 0 )
      {
        v15 = *v6;
        v16 = *v7;
        if ( v15 == v16 )
        {
          **(_DWORD **)a2 = v16;
          v17 = (double)-v9 / (double)(v8 - v9);
        }
        else
        {
          v18 = 1.0 / (double)(v8 - v9);
          v25 = (double)-v9 * v18;
          v27 = -((double)v9 - (double)v16 / (v18 * (double)(v15 - v16))) * (v18 * (double)(v15 - v16));
          v17 = v25;
          **(_DWORD **)a2 = (int)v27;
        }
        *(_DWORD *)(*(_DWORD *)a2 + 4) = 0;
        a2[1] = v3[1] * v17 + *(float *)(v22 + 4) * (1.0 - v17);
        a2[2] = v17 * v3[2] + *(float *)(v22 + 8) * (1.0 - v17);
LABEL_15:
        ++v23;
        goto LABEL_16;
      }
LABEL_17:
      v4 = (int)v3;
      v3 += 6;
      v19 = i == 1;
      v22 = v4;
      if ( v19 )
        return v23;
    }
    if ( v9 >= 0 )
    {
      **(_DWORD **)a2 = *v6;
      *(_DWORD *)(*(_DWORD *)a2 + 4) = *(_DWORD *)(*(_DWORD *)v3 + 4);
      a2[1] = v3[1];
      a2[2] = v3[2];
      goto LABEL_15;
    }
    v10 = *v6;
    v11 = *v7;
    if ( v10 == v11 )
    {
      **(_DWORD **)a2 = v11;
      v12 = (double)-v9 / (double)(v8 - v9);
    }
    else
    {
      v13 = 1.0 / (double)(v8 - v9);
      v24 = (double)-v9 * v13;
      v26 = -((double)v9 - (double)v11 / (v13 * (double)(v10 - v11))) * (v13 * (double)(v10 - v11));
      v12 = v24;
      **(_DWORD **)a2 = (int)v26;
    }
    v14 = *(_DWORD *)a2;
    a2 += 6;
    *(_DWORD *)(v14 + 4) = 0;
    *(a2 - 5) = v12 * v3[1] + *(float *)(v22 + 4) * (1.0 - v12);
    *(a2 - 4) = v12 * v3[2] + *(float *)(v22 + 8) * (1.0 - v12);
    v23 += 2;
    **(_DWORD **)a2 = **(_DWORD **)v3;
    *(_DWORD *)(*(_DWORD *)a2 + 4) = *(_DWORD *)(*(_DWORD *)v3 + 4);
    a2[1] = v3[1];
    a2[2] = v3[2];
LABEL_16:
    a2 += 6;
    goto LABEL_17;
  }
  return v23;
}

// 0x405390  sub_405390
int __cdecl sub_405390(float *a1, float *a2, int a3)
{
  float *v3; // edi
  int v4; // ebx
  int v6; // edx
  int *v7; // eax
  int v8; // esi
  int v9; // ebx
  int v10; // eax
  int v11; // ebx
  bool v12; // zf
  double v13; // st7
  double v14; // st7
  int v15; // edx
  int v16; // eax
  int v17; // ebx
  double v18; // st7
  double v19; // st7
  int i; // [esp+14h] [ebp-Ch]
  int v22; // [esp+18h] [ebp-8h]
  int v23; // [esp+1Ch] [ebp-4h]
  int *v24; // [esp+28h] [ebp+8h]
  int v25; // [esp+28h] [ebp+8h]
  int v26; // [esp+28h] [ebp+8h]
  float v27; // [esp+2Ch] [ebp+Ch]
  float v28; // [esp+2Ch] [ebp+Ch]
  int v29; // [esp+30h] [ebp+10h]
  float v30; // [esp+30h] [ebp+10h]
  float v31; // [esp+30h] [ebp+10h]

  v3 = a1;
  v23 = 0;
  v4 = (int)&a1[6 * a3 - 6];
  v22 = v4;
  if ( a3 > 0 )
  {
    v6 = dword_46AF5C;
    for ( i = a3; ; --i )
    {
      v7 = *(int **)v3;
      v24 = *(int **)v4;
      v8 = *(_DWORD *)(*(_DWORD *)v3 + 4);
      v9 = *(_DWORD *)(*(_DWORD *)v4 + 4);
      v29 = v9;
      if ( v8 < v6 )
        break;
      if ( v9 < v6 )
      {
        v16 = *v7;
        v17 = *v24;
        v12 = v16 == *v24;
        v26 = *v24;
        if ( v12 )
        {
          **(_DWORD **)a2 = v17;
          v18 = (double)(v6 - v29) / (double)(v8 - v29);
        }
        else
        {
          v19 = 1.0 / (double)(v8 - v29);
          v28 = (double)(v6 - v29) * v19;
          v31 = ((double)dword_46AF5C - ((double)v29 - (double)v26 / (v19 * (double)(v16 - v26))))
              * (v19
               * (double)(v16 - v26));
          v18 = v28;
          **(_DWORD **)a2 = (int)v31;
        }
        *(_DWORD *)(*(_DWORD *)a2 + 4) = dword_46AF5C - 1;
        a2[1] = v3[1] * v18 + *(float *)(v22 + 4) * (1.0 - v18);
        a2[2] = v18 * v3[2] + *(float *)(v22 + 8) * (1.0 - v18);
LABEL_15:
        ++v23;
        goto LABEL_16;
      }
LABEL_17:
      v4 = (int)v3;
      v3 += 6;
      v12 = i == 1;
      v22 = v4;
      if ( v12 )
        return v23;
    }
    if ( v9 < v6 )
    {
      **(_DWORD **)a2 = *v7;
      *(_DWORD *)(*(_DWORD *)a2 + 4) = *(_DWORD *)(*(_DWORD *)v3 + 4);
      a2[1] = v3[1];
      a2[2] = v3[2];
      goto LABEL_15;
    }
    v10 = *v7;
    v11 = *v24;
    v12 = v10 == *v24;
    v25 = *v24;
    if ( v12 )
    {
      **(_DWORD **)a2 = v11;
      v13 = (double)(v6 - v29) / (double)(v8 - v29);
    }
    else
    {
      v14 = 1.0 / (double)(v8 - v29);
      v27 = (double)(v6 - v29) * v14;
      v30 = ((double)dword_46AF5C - ((double)v29 - (double)v25 / (v14 * (double)(v10 - v25))))
          * (v14
           * (double)(v10 - v25));
      v13 = v27;
      **(_DWORD **)a2 = (int)v30;
    }
    v15 = *(_DWORD *)a2;
    a2 += 6;
    *(_DWORD *)(v15 + 4) = dword_46AF5C - 1;
    *(a2 - 5) = v13 * v3[1] + *(float *)(v22 + 4) * (1.0 - v13);
    *(a2 - 4) = v13 * v3[2] + *(float *)(v22 + 8) * (1.0 - v13);
    v23 += 2;
    **(_DWORD **)a2 = **(_DWORD **)v3;
    *(_DWORD *)(*(_DWORD *)a2 + 4) = *(_DWORD *)(*(_DWORD *)v3 + 4);
    a2[1] = v3[1];
    a2[2] = v3[2];
LABEL_16:
    v6 = dword_46AF5C;
    a2 += 6;
    goto LABEL_17;
  }
  return v23;
}
