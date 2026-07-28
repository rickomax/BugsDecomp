// Module `unk_448af0`.
//
// Reconstructed from Bugs.exe (PC v1.0) by tools/recon.py.
// Generated file -- do not edit by hand; see recon/README.md.
//
// Address range: 0x448af0 - 0x45b1b0 (56 functions).

#include "bugs.h"


// 0x448af0  sub_448AF0
int sub_448AF0()
{
  int result; // eax
  int v1; // ecx
  int i; // ecx

  result = dword_4B2240;
  v1 = 0;
  if ( word_4B2244 <= 0 )
    return 0;
  while ( (*(_BYTE *)(result + 4) & 1) == 0 )
  {
    ++v1;
    result += 184;
    if ( v1 >= word_4B2244 )
      return 0;
  }
  *(_DWORD *)(result + 4) = 0;
  *(_WORD *)(result + 8) = 0;
  *(_DWORD *)result = 0;
  for ( i = 46; i != 0; --i )
    ;
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 12) = 0x80000000;
  *(_DWORD *)(result + 24) = -1;
  *(_DWORD *)(result + 16) = result + 28;
  *(_DWORD *)(result + 96) = result + 108;
  *(_DWORD *)(*(_DWORD *)(result + 16) + 72) = 0;
  *(_DWORD *)(result + 20) = 0;
  return result;
}

// 0x448b60  sub_448B60
int __cdecl sub_448B60(int a1, int a2)
{
  int result; // eax
  int v3; // ecx
  int **v4; // esi
  int *v5; // ecx
  int *j; // edx
  int i; // ecx

  result = dword_4B2240;
  v3 = 0;
  if ( word_4B2244 <= 0 )
  {
LABEL_4:
    result = 0;
  }
  else
  {
    while ( (*(_BYTE *)(result + 4) & 1) == 0 )
    {
      ++v3;
      result += 184;
      if ( v3 >= word_4B2244 )
        goto LABEL_4;
    }
    *(_DWORD *)(result + 4) = 0;
    *(_WORD *)(result + 8) = 0;
    *(_DWORD *)result = 0;
    for ( i = 46; i != 0; --i )
      ;
    *(_DWORD *)result = 0;
    *(_DWORD *)(result + 12) = 0x80000000;
    *(_DWORD *)(result + 24) = -1;
    *(_DWORD *)(result + 16) = result + 28;
    *(_DWORD *)(result + 96) = result + 108;
    *(_DWORD *)(*(_DWORD *)(result + 16) + 72) = 0;
    *(_DWORD *)(result + 20) = 0;
  }
  if ( result == 0 )
  {
    while ( 1 )
      ;
  }
  v4 = *(int ***)(a1 + 120);
  if ( v4 != NULL )
  {
    v5 = *v4;
    for ( j = *(int **)(a1 + 120); v5 != NULL; v5 = (int *)*v5 )
      j = v5;
    *j = result;
    *(_DWORD *)result = 0;
  }
  else
  {
    v4 = (int **)result;
  }
  *(_DWORD *)(a1 + 120) = v4;
  *(_WORD *)(result + 8) = -32760;
  *(_DWORD *)(result + 24) = a2;
  return result;
}

// 0x448c10  sub_448C10
_DWORD *__cdecl sub_448C10(int a1, int a2)
{
  _DWORD *v2; // edx
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  _DWORD *result; // eax
  _DWORD *v6; // eax
  _DWORD **i; // ecx
  _DWORD *v8; // eax
  _DWORD *v9; // esi

  v2 = *(_DWORD **)(a1 + 120);
  v3 = v2;
  if ( v2 != NULL )
  {
    while ( v3[6] != a2 )
    {
      v3 = (_DWORD *)*v3;
      if ( v3 == NULL )
        goto LABEL_4;
    }
    v4 = v3;
  }
  else
  {
LABEL_4:
    v4 = NULL;
  }
  if ( v4 == NULL )
  {
    while ( 1 )
      ;
  }
  if ( v2 != NULL )
  {
    if ( v2 == v4 )
    {
      result = (_DWORD *)*v2;
      v2[1] = 1;
      *(_DWORD *)(a1 + 120) = result;
    }
    else
    {
      v6 = (_DWORD *)*v2;
      for ( i = *(_DWORD ***)(a1 + 120); v6 != NULL; v6 = (_DWORD *)*v6 )
      {
        if ( v6 == v4 )
          break;
        i = (_DWORD **)v6;
      }
      v8 = *i;
      if ( *i != NULL )
      {
        v9 = (_DWORD *)*v8;
        v8[1] = 1;
        *i = v9;
        *v8 = 0;
      }
      *(_DWORD *)(a1 + 120) = v2;
      return v2;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 120) = 0;
    return NULL;
  }
  return result;
}

// 0x448c90  sub_448C90
int sub_448C90()
{
  unsigned int v0; // eax
  unsigned int v1; // ecx
  _DWORD *v2; // edx
  int v3; // esi
  _DWORD *v4; // eax
  _DWORD *i; // ecx
  int result; // eax

  v0 = dword_4B24A0;
  v1 = dword_4B24A0 + 500 * word_4B28C0;
  if ( dword_4B24A0 >= v1 )
  {
LABEL_4:
    v2 = NULL;
  }
  else
  {
    while ( (*(_BYTE *)(v0 + 4) & 1) == 0 )
    {
      v0 += 500;
      if ( v0 >= v1 )
        goto LABEL_4;
    }
    *(_DWORD *)(v0 + 4) = 0;
    *(_DWORD *)v0 = 0;
    v2 = (_DWORD *)v0;
  }
  dword_4B39B4 = (int)v2;
  if ( v2 == NULL )
  {
    while ( 1 )
      ;
  }
  v3 = dword_4B3740;
  if ( dword_4B3740 != 0 )
  {
    v4 = *(_DWORD **)dword_4B3740;
    for ( i = (_DWORD *)dword_4B3740; v4 != NULL; v4 = (_DWORD *)*v4 )
      i = v4;
    *i = v2;
    *v2 = 0;
    v2 = (_DWORD *)v3;
  }
  dword_4B3740 = (int)v2;
  *(_WORD *)(dword_4B39B4 + 28) = 5;
  *(_WORD *)(dword_4B39B4 + 42) = 0;
  *(_WORD *)(dword_4B39B4 + 44) = 7;
  result = dword_4B39B4;
  *(_DWORD *)(dword_4B39B4 + 4) |= 2u;
  return result;
}

// 0x448d40  sub_448D40
int sub_448D40()
{
  unsigned int v0; // eax
  unsigned int v1; // ecx
  _DWORD *v2; // edx
  int v3; // esi
  _DWORD *v4; // eax
  _DWORD *i; // ecx
  int *v6; // esi
  unsigned int v7; // eax
  unsigned int v8; // ecx
  int v9; // edi
  unsigned int *v10; // edx
  unsigned int *j; // ecx
  int v12; // ecx
  int result; // eax

  v0 = dword_4B24A0;
  v1 = dword_4B24A0 + 500 * word_4B28C0;
  if ( dword_4B24A0 >= v1 )
  {
LABEL_4:
    v2 = NULL;
  }
  else
  {
    while ( (*(_BYTE *)(v0 + 4) & 1) == 0 )
    {
      v0 += 500;
      if ( v0 >= v1 )
        goto LABEL_4;
    }
    v2 = (_DWORD *)v0;
    *(_DWORD *)(v0 + 4) = 0;
    *(_DWORD *)v0 = 0;
  }
  dword_4B39C4 = (int)v2;
  if ( v2 == NULL )
  {
    while ( 1 )
      ;
  }
  v3 = dword_4B3740;
  if ( dword_4B3740 != 0 )
  {
    v4 = *(_DWORD **)dword_4B3740;
    for ( i = (_DWORD *)dword_4B3740; v4 != NULL; v4 = (_DWORD *)*v4 )
      i = v4;
    *i = v2;
    *v2 = 0;
    v2 = (_DWORD *)v3;
  }
  dword_4B3740 = (int)v2;
  v6 = &dword_4B23A0;
  *(_WORD *)(dword_4B39C4 + 28) = 0;
  *(_WORD *)(dword_4B39C4 + 42) = 5;
  *(_WORD *)(dword_4B39C4 + 44) = 6;
  *(_DWORD *)(dword_4B39C4 + 4) |= 2u;
  *(_DWORD *)(dword_4B39C4 + 8) = 0;
  *(_DWORD *)(dword_4B39C4 + 12) = 0;
  *(_WORD *)(dword_4B39C4 + 60) = 64;
  *(_DWORD *)(dword_4B39C4 + 120) = 0;
  dword_4B2164 = 0;
  do
  {
    v7 = dword_4B24A0;
    v8 = dword_4B24A0 + 500 * word_4B28C0;
    if ( dword_4B24A0 >= v8 )
    {
LABEL_17:
      v7 = 0;
    }
    else
    {
      while ( (*(_BYTE *)(v7 + 4) & 1) == 0 )
      {
        v7 += 500;
        if ( v7 >= v8 )
          goto LABEL_17;
      }
      *(_DWORD *)(v7 + 4) = 0;
      *(_DWORD *)v7 = 0;
    }
    *v6 = v7;
    if ( v7 == 0 )
    {
      while ( 1 )
        ;
    }
    v9 = dword_4B2164;
    if ( dword_4B2164 != 0 )
    {
      v10 = *(unsigned int **)dword_4B2164;
      for ( j = (unsigned int *)dword_4B2164; v10 != NULL; v10 = (unsigned int *)*v10 )
        j = v10;
      *j = v7;
      *(_DWORD *)v7 = 0;
      v7 = v9;
    }
    v12 = *v6;
    dword_4B2164 = v7;
    ++v6;
    *(_WORD *)(v12 + 60) = 1;
    *(_WORD *)(*(v6 - 1) + 38) = -1;
    result = *(v6 - 1);
    *(_DWORD *)(result + 120) = 0;
  }
  while ( (int)v6 < (int)&dword_4B245C );
  return result;
}

// 0x448eb0  sub_448EB0
unsigned int __cdecl sub_448EB0(__int16 a1, _DWORD *a2, _WORD *a3)
{
  int v3; // edx
  unsigned int result; // eax
  unsigned int v5; // ecx
  _DWORD *v6; // ecx
  unsigned int v7; // edx
  int i; // esi
  int v9; // esi
  unsigned int *v10; // ecx
  unsigned int *j; // edx
  int v12; // esi
  int v13; // edx
  int k; // ecx

  if ( a1 <= 0 )
    return 0;
  v3 = dword_4B2390;
  if ( dword_4B2390 == 0 )
    return 0;
  while ( *(unsigned __int16 *)(v3 + 28) != a1 )
  {
    v3 = *(_DWORD *)v3;
    if ( v3 == 0 )
      return 0;
  }
  result = dword_4B24A0;
  v5 = dword_4B24A0 + 500 * word_4B28C0;
  if ( dword_4B24A0 >= v5 )
  {
LABEL_9:
    result = 0;
  }
  else
  {
    while ( (*(_BYTE *)(result + 4) & 1) == 0 )
    {
      result += 500;
      if ( result >= v5 )
        goto LABEL_9;
    }
    *(_DWORD *)(result + 4) = 0;
    *(_DWORD *)result = 0;
  }
  if ( result == 0 )
    return 0;
  v6 = (_DWORD *)result;
  v7 = v3 - result;
  for ( i = 125; i != 0; --i )
  {
    *v6 = *(_DWORD *)((char *)v6 + v7);
    ++v6;
  }
  *(_DWORD *)result = 0;
  v9 = dword_4B3740;
  if ( dword_4B3740 != 0 )
  {
    v10 = *(unsigned int **)dword_4B3740;
    for ( j = (unsigned int *)dword_4B3740; v10 != NULL; v10 = (unsigned int *)*v10 )
      j = v10;
    *j = result;
    *(_DWORD *)result = 0;
  }
  else
  {
    v9 = result;
  }
  dword_4B3740 = v9;
  v12 = *(_DWORD *)(result + 4) | 2;
  *(_DWORD *)(result + 192) = result + 204;
  *(_DWORD *)(result + 4) = v12;
  if ( a2 != NULL )
  {
    *(_DWORD *)(result + 228) = *a2;
    *(_DWORD *)(result + 232) = a2[1];
    *(_DWORD *)(result + 236) = a2[2];
  }
  if ( a3 != NULL )
  {
    *(_WORD *)(result + 220) = *a3;
    *(_WORD *)(result + 222) = a3[1];
    *(_WORD *)(result + 224) = a3[2];
  }
  v13 = dword_4B39AC;
  if ( dword_4B39AC != 0 )
  {
    for ( k = *(_DWORD *)(dword_4B39AC + 16); k != 0; k = *(_DWORD *)(k + 16) )
      v13 = k;
    *(_DWORD *)(v13 + 16) = result;
    *(_DWORD *)(result + 16) = 0;
  }
  return result;
}

// 0x449010  sub_449010
void sub_449010()
{
  byte_4B2260[0] = 0;
}

// 0x449020  sub_449020
int sub_449020()
{
  int i; // esi
  int result; // eax
  int j; // esi

  byte_4B3252 = 0;
  byte_4B36DC = 0;
  byte_4B3240 = 0;
  byte_4B3241 = 0;
  byte_4B3242 = 0;
  byte_4B3243 = 0;
  byte_4B3244 = 0;
  byte_4B3245 = 0;
  byte_4B3246 = 0;
  *((_WORD *)dword_52FD00 + 32773) = 0;
  *((_WORD *)dword_52FD00 + 32775) = 0;
  *((_WORD *)dword_52FD00 + 32774) = 0;
  *((_WORD *)dword_52FD00 + 32776) = 0;
  PadInitDirect((int)&unk_4B31C0, (int)&unk_4B3200);
  PadStartCom();
  for ( i = 0; i < 30; ++i )
  {
    if ( PadGetState() == 6 )
      break;
  }
  result = PadInfoMode();
  if ( result != 0 )
  {
    for ( j = 0; j < 5; ++j )
    {
      while ( PadGetState() != 6 )
        ;
      result = PadInfoMode();
      if ( result != 0 )
        break;
    }
  }
  return result;
}

// 0x449110  sub_449110
void *sub_449110()
{
  int v0; // eax
  _WORD *v1; // eax
  __int16 v2; // dx
  void *result; // eax

  v0 = *((unsigned __int8 *)dword_52FD00 + 65617);
  *((_WORD *)dword_52FD00 + 32787) = 0x8000;
  *((_WORD *)dword_52FD00 + 32788) = 0x2000;
  v1 = (_WORD *)((char *)&unk_4AE1F0 + 16 * v0);
  *((_WORD *)dword_52FD00 + 32789) = 4096;
  *((_WORD *)dword_52FD00 + 32790) = 0x4000;
  *((_WORD *)dword_52FD00 + 32791) = *v1;
  *((_WORD *)dword_52FD00 + 32792) = v1[1];
  *((_WORD *)dword_52FD00 + 32793) = v1[2];
  *((_WORD *)dword_52FD00 + 32794) = v1[3];
  *((_WORD *)dword_52FD00 + 32795) = v1[4];
  *((_WORD *)dword_52FD00 + 32796) = v1[5];
  *((_WORD *)dword_52FD00 + 32797) = v1[6];
  v2 = v1[7];
  result = dword_52FD00;
  *((_WORD *)dword_52FD00 + 32798) = v2;
  return result;
}

// 0x4491f0  sub_4491F0
char sub_4491F0()
{
  int v0; // eax
  int v1; // esi
  char v2; // al

  v0 = PadGetState();
  v1 = v0;
  if ( v0 == 0 )
  {
    LOBYTE(dword_4B31C1) = 0;
    return v0;
  }
  v0 = PadInfoMode();
  if ( v0 != 7 )
  {
LABEL_18:
    byte_4B3241 = 0;
    byte_4B3242 = 0;
    byte_4B3244 = 0;
    byte_4B3245 = 0;
    byte_4B3246 = 0;
    goto LABEL_19;
  }
  v0 = PadInfoMode();
  if ( v0 != 0 )
  {
    if ( byte_4B3240 != 0 )
    {
      if ( byte_4B3241 != 0 )
      {
        --byte_4B3241;
        v2 = *((_BYTE *)dword_52FD00 + 65767);
        if ( v2 < 0 && (v2 & 1) != 0 )
          byte_4B3244 = 1;
      }
      else
      {
        byte_4B3244 = 0;
      }
      LOBYTE(v0) = byte_4B3242;
      if ( byte_4B3242 != 0
        && (--byte_4B3242, LOBYTE(v0) = *((_BYTE *)dword_52FD00 + 65767), (v0 & 0x80u) != 0)
        && (v0 & 1) != 0 )
      {
        LOBYTE(v0) = byte_4B3246;
        if ( byte_4B3246 != 0 )
        {
          byte_4B3245 = byte_4B2260[(unsigned __int8)byte_4B3246];
        }
        else
        {
          LOBYTE(v0) = byte_4B3243;
          byte_4B3245 = byte_4B3243;
        }
      }
      else
      {
        byte_4B3245 = 0;
      }
      goto LABEL_19;
    }
    goto LABEL_18;
  }
LABEL_19:
  if ( v1 == 1 )
    byte_4B3240 = 0;
  if ( byte_4B3240 == 0 )
  {
    PadSetAct();
    v0 = PadInfoMode();
    if ( v0 != 0 )
      byte_4B3240 = 1;
  }
  return v0;
}

// 0x449330  sub_449330
char sub_449330()
{
  void *v0; // ecx
  _WORD *v1; // eax
  _WORD *v2; // eax
  __int16 v3; // cx
  int v4; // eax
  bool v5; // cc
  char v6; // cl
  char v7; // cl
  __int16 v8; // ax
  __int16 v9; // cx
  __int16 v10; // si
  _WORD *v11; // eax
  __int16 v12; // dx
  __int16 v13; // cx
  unsigned __int8 v14; // bl
  int v15; // ecx
  unsigned __int8 v16; // bl
  __int16 v17; // dx
  __int16 v18; // cx
  struct tagMSG Msg; // [esp+14h] [ebp-1Ch] BYREF

  while ( PeekMessageA(/*lpMsg*/ &Msg, /*hWnd*/ NULL, /*wMsgFilterMin*/ 0, /*wMsgFilterMax*/ 0, /*wRemoveMsg*/ 1u) )
  {
    if ( Msg.message == 18 )
      dword_45F2B0 = 0;
    TranslateMessage(/*lpMsg*/ &Msg);
    DispatchMessageA(/*lpMsg*/ &Msg);
  }
  MapJoystickInput();
  if ( dword_45F2B0 == 1 )
    MapKeyboardInput(/*this*/ v0);
  else
    MapAltKeyboardInput();
  if ( dword_4B1D04 != 0 )
  {
    if ( dword_4B1D04 == 1 )
    {
      *(_WORD *)((char *)dword_4B1CA4 + dword_4B1D08 + 0x100000) = *(_WORD *)((char *)&dword_4B31C1 + 1);
      ElementCount += 2;
      if ( ElementCount > 0xFFFFA )
        goto LABEL_13;
    }
    else
    {
      dword_4B1D04 = 2;
      *(_WORD *)((char *)&dword_4B31C1 + 1) = *(_WORD *)((char *)dword_4B1CA4 + dword_4B1D08 + 0x100000);
      if ( dword_4B1D08 > ElementCount )
LABEL_13:
        dword_4B1D04 = 0;
    }
    dword_4B1D08 += 2;
  }
  LOBYTE(v1) = byte_4B3E48;
  if ( byte_4B3E48 == 0 && dword_4B324C != 0 )
  {
    if ( (word_4B39BC != 0 || (*(_DWORD *)(dword_4B324C + 20) & 0x1000000) != 0) && (_BYTE)dword_4B226C == 0 )
    {
      *((_WORD *)dword_52FD00 + 32799) = 0;
      *((_WORD *)dword_52FD00 + 32776) = 0;
      *((_WORD *)dword_52FD00 + 32774) = 0;
      *((_WORD *)dword_52FD00 + 32775) = 0;
      *((_WORD *)dword_52FD00 + 32773) = 0;
      *((_WORD *)dword_52FD00 + 32778) = 0;
      *((_WORD *)dword_52FD00 + 32777) = 0;
      if ( *((_BYTE *)dword_52FD00 + 65615) == 0 )
      {
LABEL_57:
        LOBYTE(v1) = sub_4491F0();
        return (char)v1;
      }
LABEL_56:
      byte_4B3242 = 0;
      byte_4B3241 = 0;
      goto LABEL_57;
    }
    word_4B3228 = 0;
    if ( (_BYTE)dword_4B226C == 0 )
    {
      if ( (*((_BYTE *)dword_52FD00 + 65548) & 0x40) != 0 )
      {
        if ( byte_4B39B2 != 0 )
          --byte_4B39B2;
        else
          word_4B3228 = 64;
      }
      else
      {
        byte_4B39B2 = 2;
      }
      if ( (*((_BYTE *)dword_52FD00 + 65548) & 0x80) != 0 )
      {
        if ( byte_4B238A != 0 )
          --byte_4B238A;
        else
          word_4B3228 |= 0x80u;
      }
      else
      {
        byte_4B238A = 2;
      }
      if ( (*((_BYTE *)dword_52FD00 + 65548) & 4) != 0 )
      {
        if ( byte_4B28CC != 0 )
          --byte_4B28CC;
        else
          LOBYTE(word_4B3228) = word_4B3228 | 4;
      }
      else
      {
        byte_4B28CC = 2;
      }
    }
    *((_WORD *)dword_52FD00 + 32775) = *((_WORD *)dword_52FD00 + 32774);
    *((_WORD *)dword_52FD00 + 32775) &= word_4B3228;
    *((_WORD *)dword_52FD00 + 32774) = 0;
    if ( *((_BYTE *)dword_52FD00 + 65615) != 0 )
    {
      if ( byte_4B2277 != 0 && byte_4B2277 != 4 )
      {
        *((_WORD *)dword_52FD00 + 32776) = 0;
        *((_WORD *)dword_52FD00 + 32774) = 0;
        *((_WORD *)dword_52FD00 + 32775) = 0;
        LOBYTE(v1) = (_BYTE)dword_52FD00;
        *((_WORD *)dword_52FD00 + 32773) = 0;
        return (char)v1;
      }
      *((_WORD *)dword_52FD00 + 32799) = *(_WORD *)dword_4B249C;
      *((_WORD *)dword_52FD00 + 32773) = *((_WORD *)dword_52FD00 + 32799);
      *((_WORD *)dword_52FD00 + 32775) = *(_WORD *)(dword_4B249C + 2);
      *((_WORD *)dword_52FD00 + 32774) = *(_WORD *)(dword_4B249C + 4);
      *((_WORD *)dword_52FD00 + 32776) = *(_WORD *)(dword_4B249C + 6);
      dword_4B249C += 8;
      if ( ((dword_4B31C1 & 0x7F) == 0x41 || (dword_4B31C1 & 0x7F) == 0x73) && (~BYTE1(dword_4B31C1) & 8) != 0 )
      {
        v2 = dword_52FD00;
        if ( *((_BYTE *)dword_52FD00 + 65615) == 0 )
        {
LABEL_48:
          v3 = v2[32773];
          v2[32777] = 0;
          *((_WORD *)dword_52FD00 + 32778) = 0;
          if ( v3 >= 0 )
          {
            if ( (v3 & 0x2000) != 0 )
              *((_WORD *)dword_52FD00 + 32777) = 127;
          }
          else
          {
            *((_WORD *)dword_52FD00 + 32777) = -128;
          }
          if ( (v3 & 0x1000) != 0 )
          {
            *((_WORD *)dword_52FD00 + 32778) = 127;
          }
          else if ( (v3 & 0x4000) != 0 )
          {
            *((_WORD *)dword_52FD00 + 32778) = -128;
          }
          goto LABEL_56;
        }
        *((_WORD *)dword_52FD00 + 32773) |= 0x100u;
        *((_WORD *)dword_52FD00 + 32774) |= 0x100u;
        *((_WORD *)dword_52FD00 + 32776) |= 0x100u;
      }
      v2 = dword_52FD00;
      goto LABEL_48;
    }
    sub_4491F0();
    v4 = dword_4B31C1 & 0x7F;
    if ( v4 == 65 || v4 == 115 )
    {
      v6 = *((_BYTE *)dword_52FD00 + 65767);
      if ( (dword_4B31C1 & 0x7F) == 0x41 )
        v7 = v6 & 0x7F;
      else
        v7 = v6 | 0x80;
      *((_BYTE *)dword_52FD00 + 65767) = v7;
      word_4B316E = 0;
      v8 = (unsigned __int8)~BYTE2(dword_4B31C1);
      *((_WORD *)dword_52FD00 + 32774) = v8;
      LOBYTE(v9) = 0;
      *((_WORD *)dword_52FD00 + 32776) = v8;
      HIBYTE(v9) = ~BYTE1(dword_4B31C1);
      v10 = v9;
      *((_WORD *)dword_52FD00 + 32776) |= v9;
      if ( (v9 & 0xF000) != 0 || (dword_4B31C1 & 0x7F) == 0x41 )
      {
        *((_WORD *)dword_52FD00 + 32774) |= v9;
        v1 = dword_52FD00;
        if ( (_BYTE)dword_4B226C == 0 )
        {
          v17 = 0;
          v18 = *((_WORD *)dword_52FD00 + 32774);
          if ( (v18 & 0x10) != 0 )
            v17 = *((_WORD *)dword_52FD00 + 32793);
          if ( (v18 & 0x40) != 0 )
            v17 |= *((_WORD *)dword_52FD00 + 32794);
          if ( (v18 & 0x80) != 0 )
            v17 |= *((_WORD *)dword_52FD00 + 32791);
          if ( (v18 & 0x20) != 0 )
            v17 |= *((_WORD *)dword_52FD00 + 32792);
          if ( (v18 & 4) != 0 )
            v17 |= *((_WORD *)dword_52FD00 + 32795);
          if ( (v18 & 8) != 0 )
            v17 |= *((_WORD *)dword_52FD00 + 32797);
          if ( (v18 & 1) != 0 )
            v17 |= *((_WORD *)dword_52FD00 + 32796);
          if ( (v18 & 2) != 0 )
            v17 |= *((_WORD *)dword_52FD00 + 32798);
          *((_WORD *)dword_52FD00 + 32774) = v17 | *((_WORD *)dword_52FD00 + 32774) & 0xFF00;
          v1 = dword_52FD00;
        }
        v1[32799] = ~v1[32775] & v1[32774];
        *((_WORD *)dword_52FD00 + 32773) = *((_WORD *)dword_52FD00 + 32799);
        *((_WORD *)dword_52FD00 + 32777) = 0;
        *((_WORD *)dword_52FD00 + 32778) = 0;
        *((_WORD *)dword_52FD00 + 32785) = 0;
        LOBYTE(v1) = (_BYTE)dword_52FD00;
        *((_WORD *)dword_52FD00 + 32786) = 0;
        if ( v10 < 0 )
        {
          *((_WORD *)dword_52FD00 + 32777) = -128;
        }
        else if ( (v10 & 0x2000) != 0 )
        {
          *((_WORD *)dword_52FD00 + 32777) = 127;
        }
        if ( (v10 & 0x1000) != 0 )
        {
          LOBYTE(v1) = (_BYTE)dword_52FD00;
          *((_WORD *)dword_52FD00 + 32778) = 127;
        }
        else if ( (v10 & 0x4000) != 0 )
        {
          *((_WORD *)dword_52FD00 + 32778) = -128;
        }
      }
      else
      {
        *((_WORD *)dword_52FD00 + 32774) |= v9 & 0xFFF;
        v11 = dword_52FD00;
        if ( (_BYTE)dword_4B226C == 0 )
        {
          v12 = 0;
          v13 = *((_WORD *)dword_52FD00 + 32774);
          if ( (v13 & 0x10) != 0 )
            v12 = *((_WORD *)dword_52FD00 + 32793);
          if ( (v13 & 0x40) != 0 )
            v12 |= *((_WORD *)dword_52FD00 + 32794);
          if ( (v13 & 0x80u) != 0 )
            v12 |= *((_WORD *)dword_52FD00 + 32791);
          if ( (v13 & 0x20) != 0 )
            v12 |= *((_WORD *)dword_52FD00 + 32792);
          if ( (v13 & 4) != 0 )
            v12 |= *((_WORD *)dword_52FD00 + 32795);
          if ( (v13 & 8) != 0 )
            v12 |= *((_WORD *)dword_52FD00 + 32797);
          if ( (v13 & 1) != 0 )
            v12 |= *((_WORD *)dword_52FD00 + 32796);
          if ( (v13 & 2) != 0 )
            v12 |= *((_WORD *)dword_52FD00 + 32798);
          *((_WORD *)dword_52FD00 + 32774) = v12 | *((_WORD *)dword_52FD00 + 32774) & 0xFF00;
          v11 = dword_52FD00;
        }
        v11[32799] = ~v11[32775] & v11[32774];
        *((_WORD *)dword_52FD00 + 32773) = *((_WORD *)dword_52FD00 + 32799);
        v14 = byte_4B31C6;
        v15 = *((__int16 *)dword_52FD00 + 32781);
        if ( (unsigned __int8)byte_4B31C6 >= v15 - word_4B3234 )
        {
          if ( (unsigned __int8)byte_4B31C6 <= v15 + word_4B3234 )
          {
            *((_WORD *)dword_52FD00 + 32777) = 0;
          }
          else
          {
            *((_WORD *)dword_52FD00 + 32773) |= 0x2000u;
            *((_WORD *)dword_52FD00 + 32799) |= 0x2000u;
            *((_WORD *)dword_52FD00 + 32774) |= 0x2000u;
            *((_WORD *)dword_52FD00 + 32776) |= 0x2000u;
            *((_WORD *)dword_52FD00 + 32777) = v14 - (_WORD)v15;
          }
        }
        else
        {
          *((_WORD *)dword_52FD00 + 32773) |= 0x8000u;
          *((_WORD *)dword_52FD00 + 32799) |= 0x8000u;
          *((_WORD *)dword_52FD00 + 32774) |= 0x8000u;
          *((_WORD *)dword_52FD00 + 32776) |= 0x8000u;
          *((_WORD *)dword_52FD00 + 32777) = v14 - (_WORD)v15;
        }
        v16 = byte_4B31C7;
        v1 = (_WORD *)*((__int16 *)dword_52FD00 + 32784);
        if ( (unsigned __int8)byte_4B31C7 >= (int)v1 - word_4B3234 )
        {
          if ( (unsigned __int8)byte_4B31C7 <= (int)v1 + word_4B3234 )
          {
            *((_WORD *)dword_52FD00 + 32778) = 0;
          }
          else
          {
            *((_WORD *)dword_52FD00 + 32773) |= 0x4000u;
            *((_WORD *)dword_52FD00 + 32799) |= 0x4000u;
            *((_WORD *)dword_52FD00 + 32774) |= 0x4000u;
            *((_WORD *)dword_52FD00 + 32776) |= 0x4000u;
            LOWORD(v1) = (_WORD)v1 - v16 - 1;
            *((_WORD *)dword_52FD00 + 32778) = (_WORD)v1;
          }
        }
        else
        {
          *((_WORD *)dword_52FD00 + 32773) |= 0x1000u;
          *((_WORD *)dword_52FD00 + 32799) |= 0x1000u;
          *((_WORD *)dword_52FD00 + 32774) |= 0x1000u;
          *((_WORD *)dword_52FD00 + 32776) |= 0x1000u;
          LOWORD(v1) = (_WORD)v1 - v16 - 1;
          *((_WORD *)dword_52FD00 + 32778) = (_WORD)v1;
        }
      }
    }
    else
    {
      LOBYTE(v1) = word_4B316E + 1;
      v5 = ++word_4B316E <= 4;
      if ( word_4B316E == 4 )
      {
        LOBYTE(v1) = dword_4B226C;
        if ( (_BYTE)dword_4B226C == 0 )
        {
          LOBYTE(v1) = (_BYTE)dword_52FD00;
          *((_WORD *)dword_52FD00 + 32773) = 2048;
        }
      }
      else if ( !v5 )
      {
        if ( byte_4B2260[0] != 0
          || byte_4B3232 != 0
          || (dword_4B3940 & 0x300) != 0
          || (dword_4B3940 & 1) == 0
          || (LOBYTE(v1) = (_BYTE)dword_52FD00, *((_BYTE *)dword_52FD00 + 65654) != 0) )
        {
          LOBYTE(v1) = dword_4B226C;
          if ( (_BYTE)dword_4B226C == 0 )
            word_4B316E = 3;
        }
        else
        {
          word_4B316E = 5;
          *((_WORD *)dword_52FD00 + 32773) &= ~0x800u;
        }
      }
    }
  }
  return (char)v1;
}

// 0x449d00  sub_449D00
unsigned int __cdecl sub_449D00(unsigned __int16 a1)
{
  return ((a1 / 0x64u) << 8) | (16 * ((unsigned __int16)(a1 % 0x64u) / 10)) | ((unsigned __int16)(a1 % 0x64u) % 10);
}

// 0x449d70  sub_449D70
__int16 __cdecl sub_449D70(int *a1, __int16 a2, __int16 *a3, __int16 a4)
{
  int v4; // eax
  int *v5; // edi
  int v6; // ecx
  int v7; // ebx
  _DWORD *v8; // eax
  int v9; // ecx
  int i; // edx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  int v17; // edx
  int v19; // [esp+18h] [ebp+8h]

  v4 = a1[30];
  v5 = a1 + 30;
  if ( v4 != 0 )
    LOWORD(v4) = ClearList(a1 + 30);
  v6 = dword_4B2390;
  if ( dword_4B2390 != 0 )
  {
    LOWORD(v4) = a2;
    do
    {
      if ( *(unsigned __int16 *)(v6 + 28) == a2 )
        break;
      v6 = *(_DWORD *)v6;
    }
    while ( v6 != 0 );
    if ( v6 != 0 )
    {
      v7 = *a1;
      v19 = a1[4];
      v8 = a1;
      v9 = v6 - (_DWORD)a1;
      for ( i = 125; i != 0; --i )
      {
        *v8 = *(_DWORD *)((char *)v8 + v9);
        ++v8;
      }
      v11 = a1[29];
      *a1 = v7;
      a1[4] = v19;
      v12 = a1[1] | 2;
      a1[48] = (int)(a1 + 51);
      a1[1] = v12;
      if ( v11 != 0 )
      {
        v13 = sub_448AF0();
        *v5 = v13;
        if ( v13 == 0 )
        {
          while ( 1 )
            ;
        }
        if ( (*(_BYTE *)(*(_DWORD *)(a1[29] + 8) + 10) & 2) != 0 )
        {
          *(_WORD *)(v13 + 8) |= 2u;
          GsInitCoordinate2(0, *(_DWORD *)(*v5 + 16));
          *(_DWORD *)(*(_DWORD *)(*v5 + 16) + 72) = a1 + 31;
          v14 = a1[29];
          v15 = *v5;
          a1[48] = (int)(a1 + 51);
          *(_DWORD *)(v15 + 20) = *(_DWORD *)(*(_DWORD *)(v14 + 8) + 84);
        }
        v16 = *v5;
        a1[31] = 0;
        *(_DWORD *)(v16 + 12) = 0;
        IdentMatrix((_WORD *)(*v5 + 148));
        *(_DWORD *)(*v5 + 168) = *a3;
        *(_DWORD *)(*v5 + 172) = a3[1];
        LOWORD(v4) = 0;
        if ( a4 != 0 )
        {
          v17 = *v5;
          *((_WORD *)a1 + 15) = 0;
          *((_WORD *)a1 + 17) = 60;
          *(_DWORD *)(v17 + 176) = 1200;
        }
        else
        {
          *((_WORD *)a1 + 17) = 0;
          v4 = *v5;
          *((_WORD *)a1 + 15) = 1;
          *(_DWORD *)(v4 + 176) = 8000;
        }
      }
      else
      {
        v4 = a1[5];
        BYTE1(v4) |= 1u;
        a1[5] = v4;
      }
    }
  }
  return v4;
}

// 0x449ed0  sub_449ED0
_DWORD *__cdecl sub_449ED0(_DWORD *a1)
{
  _DWORD *result; // eax

  for ( result = a1; result != NULL; result = (_DWORD *)*result )
    result[1] &= ~2u;
  return result;
}

// 0x449ef0  sub_449EF0
__int16 sub_449EF0()
{
  unsigned int v0; // eax
  int v1; // edx
  int v2; // eax
  int v3; // esi
  int v4; // edx
  int v5; // eax
  unsigned int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // esi
  int v10; // edx
  int v11; // eax
  unsigned __int8 *v12; // ecx
  signed int v13; // esi
  int v14; // edi
  int v15; // ebx
  int v16; // edx
  int v17; // eax
  int i; // esi
  unsigned __int16 v19; // bx
  unsigned int v20; // eax
  int v21; // eax
  int v22; // edx
  int v23; // esi
  int v24; // eax
  int *v25; // edi
  unsigned __int16 v26; // bx
  unsigned int v27; // eax
  int v28; // eax
  int v29; // edx
  __int16 *v30; // edi
  int v31; // eax
  unsigned int v32; // esi
  int *v33; // ebx
  unsigned __int16 v34; // bx
  unsigned int v35; // eax
  int v36; // eax
  int v37; // edx
  int v38; // esi
  int v39; // eax
  int *v40; // edi
  unsigned __int16 v42; // [esp+10h] [ebp-1Ch]
  unsigned __int16 v43; // [esp+10h] [ebp-1Ch]
  unsigned __int16 v44; // [esp+10h] [ebp-1Ch]
  unsigned __int16 v45; // [esp+10h] [ebp-1Ch]
  unsigned __int16 v46; // [esp+10h] [ebp-1Ch]
  unsigned __int16 v47; // [esp+10h] [ebp-1Ch]
  int v48; // [esp+14h] [ebp-18h]
  int v49; // [esp+18h] [ebp-14h]
  int v50; // [esp+1Ch] [ebp-10h]
  int v51; // [esp+20h] [ebp-Ch]
  int v52; // [esp+24h] [ebp-8h]
  int v53; // [esp+28h] [ebp-4h]

  sub_44AB10(0, *((unsigned __int8 *)dword_52FD00 + 65603), 1);
  sub_44A880(14, 1);
  v42 = *((unsigned __int8 *)dword_52FD00 + 65607) + (*((unsigned __int8 *)dword_52FD00 + 65852) << 8);
  v0 = v42 / 0x64u;
  v42 %= 0x64u;
  v48 = word_4AE24E;
  v1 = word_4AE230[((int)((v0 << 8) | (16 * (v42 / 10)) | (v42 % 10)) >> 8) & 0xF];
  v2 = (v0 << 8) | (16 * (v42 / 10)) | (v42 % 10);
  v49 = v1;
  v3 = 0;
  v4 = word_4AE230[(v2 >> 4) & 0xF];
  v5 = word_4AE230[v2 & 0xF];
  v50 = v4;
  v51 = v5;
  do
  {
    sub_449D70(
      (int *)dword_4B23AC[v3],
      *(int *)((char *)&v48 + v3 * 4),
      (__int16 *)((char *)&unk_4AE348 + v3 * 4),
      1);
    ++v3;
  }
  while ( v3 < 4 );
  v6 = *((unsigned __int8 *)dword_52FD00 + 65605) / 0x64u;
  v43 = *((unsigned __int8 *)dword_52FD00 + 65605) % 0x64u;
  v48 = word_4AE256;
  v7 = word_4AE230[((int)((v6 << 8) | (16 * (v43 / 10)) | (v43 % 10)) >> 8) & 0xF];
  v8 = (v6 << 8) | (16 * (v43 / 10)) | (v43 % 10);
  v49 = v7;
  v9 = 0;
  v10 = word_4AE230[(v8 >> 4) & 0xF];
  v11 = word_4AE230[v8 & 0xF];
  v50 = v10;
  v51 = v11;
  do
  {
    sub_449D70(
      (int *)dword_4B23BC[v9],
      *(int *)((char *)&v48 + v9 * 4),
      (__int16 *)((char *)&off_4AE358 + v9 * 4),
      1);
    ++v9;
  }
  while ( v9 < 4 );
  v12 = (unsigned __int8 *)dword_52FD00;
  v44 = (unsigned __int16)(100
                         * (*((unsigned __int8 *)dword_52FD00 + 65605)
                          + *((unsigned __int8 *)dword_52FD00 + 65607)
                          + (*((unsigned __int8 *)dword_52FD00 + 65852) << 8))
                         / 0x1C9u)
      % 0x64u;
  v13 = (((unsigned __int16)(100
                           * (*((unsigned __int8 *)dword_52FD00 + 65605)
                            + *((unsigned __int8 *)dword_52FD00 + 65607)
                            + (*((unsigned __int8 *)dword_52FD00 + 65852) << 8))
                           / 0x1C9u)
        / 0x64u) << 8)
      | (16 * (v44 / 10))
      | (v44 % 10);
  v14 = word_4AE230[(v13 >> 8) & 0xF];
  v15 = word_4AE230[(v13 >> 4) & 0xF];
  v16 = word_4AE230[(v44 % 10) & 0xF];
  LOWORD(v17) = word_4AE270;
  v48 = v14;
  v49 = v15;
  v50 = v16;
  v51 = word_4AE270;
  for ( i = 0; i < 4; ++i )
  {
    if ( (i != 0 || v14 != 472) && (i != 1 || v14 != 472 || v15 != 472) )
    {
      LOWORD(v17) = sub_449D70((int *)dword_4B23F0[i], *(&v48 + i), (__int16 *)&off_4AE2D8 + 2 * i, 1);
      v12 = (unsigned __int8 *)dword_52FD00;
    }
  }
  if ( v12[65783] != 0 )
  {
    v19 = v12[65783];
    v20 = v12[v12[65782] + 65600] / 0x64u;
    v45 = v12[v12[65782] + 65600] % 0x64u;
    v48 = word_4AE24E;
    v21 = (v20 << 8) | (16 * (v45 / 10)) | (v45 % 10);
    v22 = word_4AE230[(v21 >> 4) & 0xF];
    v50 = word_4AE230[v21 & 0xF];
    v49 = v22;
    v51 = word_4AE27A;
    v23 = 0;
    v24 = word_4AE230[((unsigned __int16)(v19 % 0x64u) % 10) & 0xF];
    v52 = word_4AE230[((int)(((v19 / 0x64u) << 8)
                           | (16 * ((unsigned __int16)(v19 % 0x64u) / 10))
                           | ((unsigned __int16)(v19 % 0x64u) % 10)) >> 4)
                    & 0xF];
    v53 = v24;
    do
    {
      v25 = (int *)dword_4B2414[v23];
      sub_449D70(v25, *(int *)((char *)&v48 + v23 * 4), (__int16 *)((char *)&unk_4AE2FC + v23 * 4), 1);
      v17 = v25[30];
      ++v23;
      *(_DWORD *)(v17 + 176) = 1500;
    }
    while ( v23 < 6 );
    v12 = (unsigned __int8 *)dword_52FD00;
  }
  if ( v12[65785] != 0 )
  {
    v26 = v12[65785];
    v27 = v12[v12[65784] + 65600] / 0x64u;
    v46 = v12[v12[65784] + 65600] % 0x64u;
    v48 = word_4AE256;
    v28 = (v27 << 8) | (16 * (v46 / 10)) | (v46 % 10);
    v29 = word_4AE230[(v28 >> 4) & 0xF];
    v50 = word_4AE230[v28 & 0xF];
    v49 = v29;
    v51 = word_4AE27A;
    v30 = (__int16 *)&unk_4AE2FC;
    v31 = word_4AE230[((unsigned __int16)(v26 % 0x64u) % 10) & 0xF];
    v52 = word_4AE230[((int)(((v26 / 0x64u) << 8)
                           | (16 * ((unsigned __int16)(v26 % 0x64u) / 10))
                           | ((unsigned __int16)(v26 % 0x64u) % 10)) >> 4)
                    & 0xF];
    v53 = v31;
    v32 = 0;
    do
    {
      v33 = (int *)dword_4B242C[v32 / 2];
      if ( v12[65783] != 0 )
        LOWORD(v17) = sub_449D70(v33, *(int *)((char *)&v48 + v32 * 2), &word_4AE314[v32], 1);
      else
        LOWORD(v17) = sub_449D70(v33, *(int *)((char *)&v48 + v32 * 2), v30, 1);
      v30 += 2;
      v32 += 2;
      *(_DWORD *)(v33[30] + 176) = 1500;
      v12 = (unsigned __int8 *)dword_52FD00;
    }
    while ( (int)v30 < (int)word_4AE314 );
  }
  if ( v12[65786] != 0 )
  {
    v34 = v12[65786];
    v35 = v12[65604] / 0x64u;
    v47 = v12[65604] % 0x64u;
    v48 = word_4AE278;
    v36 = (v35 << 8) | (16 * (v47 / 10)) | (v47 % 10);
    v37 = word_4AE230[(v36 >> 4) & 0xF];
    v50 = word_4AE230[v36 & 0xF];
    v49 = v37;
    v51 = word_4AE27A;
    v38 = 0;
    v39 = word_4AE230[((unsigned __int16)(v34 % 0x64u) % 10) & 0xF];
    v52 = word_4AE230[((int)(((v34 / 0x64u) << 8)
                           | (16 * ((unsigned __int16)(v34 % 0x64u) / 10))
                           | ((unsigned __int16)(v34 % 0x64u) % 10)) >> 4)
                    & 0xF];
    v53 = v39;
    do
    {
      v40 = (int *)dword_4B2444[v38];
      sub_449D70(v40, *(int *)((char *)&v48 + v38 * 4), (__int16 *)((char *)&off_4AE32C + v38 * 4), 1);
      v17 = v40[30];
      ++v38;
      *(_DWORD *)(v17 + 176) = 1500;
    }
    while ( v38 < 6 );
  }
  return v17;
}

// 0x44a6f0  sub_44A6F0
unsigned int __cdecl sub_44A6F0(int a1)
{
  unsigned __int8 v1; // al
  int *v3; // ebx
  int *v4; // edi
  int *v5; // ebp
  unsigned int result; // eax
  __int16 v7; // cx
  __int16 v8; // [esp+10h] [ebp-14h]
  _DWORD v9[4]; // [esp+14h] [ebp-10h] BYREF
  __int16 v10; // [esp+28h] [ebp+4h]

  v1 = byte_4B322A;
  v3 = (int *)dword_4B23A0[a1];
  v4 = (int *)dword_4B23A4[a1];
  v5 = (int *)dword_4B23A8[a1];
  if ( byte_4B2261 != 0 )
  {
    if ( byte_4B322A == 0 )
    {
      v1 = byte_4B2261;
      byte_4B322A = byte_4B2261;
    }
  }
  else if ( byte_4B322A == 0 )
  {
    result = v3[1];
    if ( (result & 2) != 0 )
    {
      v3[1] = result & 0xFFFFFFFD;
      v4[1] &= ~2u;
      result = v5[1] & 0xFFFFFFFD;
      v5[1] = result;
    }
    return result;
  }
  if ( v1 < (unsigned __int8)byte_4B2261 )
  {
    ++v1;
LABEL_11:
    byte_4B322A = v1;
    goto LABEL_12;
  }
  if ( v1 > (unsigned __int8)byte_4B2261 )
  {
    --v1;
    goto LABEL_11;
  }
LABEL_12:
  v9[2] = 4096;
  v9[1] = 4096;
  v9[0] = 4096 - 32 * v1;
  if ( (v3[1] & 2) != 0 )
  {
    word_4B3B78 += 80;
    if ( word_4B3B78 >= 4096 )
      word_4B3B78 -= 4096;
    IdentMatrix((_WORD *)(v3[30] + 148));
    RotMatrixY(word_4B3B78, (__int16 *)(v3[30] + 148));
    IdentMatrix((_WORD *)(v4[30] + 148));
  }
  else
  {
    v7 = word_4AE24C[a1];
    v10 = word_4AE24A[a1];
    v8 = v7;
    sub_449D70(v3, word_4AE248[a1], &word_4AE288[2 * a1], 1);
    sub_449D70(v4, v10, &word_4AE28C[2 * a1], 1);
    sub_449D70(v5, v8, &word_4AE290[2 * a1], 1);
    word_4B3B78 = 0;
  }
  return (unsigned int)ScaleMatrix((__int16 *)(v4[30] + 148), v9);
}

// 0x44a880  sub_44A880
char __cdecl sub_44A880(int a1, __int16 a2)
{
  int v3; // esi
  int v4; // edx
  __int16 v5; // cx
  __int16 v6; // bp
  int v7; // eax
  __int16 v8; // cx
  __int16 v10; // [esp+Ch] [ebp-1Ch]
  _DWORD v11[6]; // [esp+10h] [ebp-18h]
  __int16 v12; // [esp+2Ch] [ebp+4h]

  v3 = 0;
  v4 = dword_4B23A0[a1];
  v12 = word_4AE24A[a1];
  v5 = word_4AE24C[a1];
  v7 = dword_4B23A4[a1];
  v11[0] = v4;
  v11[1] = v7;
  v6 = word_4AE248[a1];
  LOBYTE(v7) = *((_BYTE *)dword_52FD00 + 65602);
  v10 = v5;
  v11[2] = dword_4B23A8[a1];
  if ( (_BYTE)v7 != 0 )
  {
    do
    {
      if ( (unsigned __int8)byte_4B3730 < v3 + 2 )
      {
        if ( (unsigned __int8)byte_4B3730 < v3 + 1 )
          v8 = v10;
        else
          v8 = v12;
        sub_449D70((int *)v11[v3 / 2], v8, &word_4AE288[2 * a1 + 2 * (v3 / 2)], a2);
      }
      else
      {
        sub_449D70((int *)v11[v3 / 2], v6, &word_4AE288[2 * a1 + 2 * (v3 / 2)], a2);
      }
      v3 += 2;
      v7 = *((unsigned __int8 *)dword_52FD00 + 65602);
    }
    while ( v3 < v7 );
  }
  return v7;
}

// 0x44a970  sub_44A970
__int16 *__cdecl sub_44A970(int a1, int a2, int a3)
{
  int *v3; // eax
  int v4; // ebx
  int *v5; // edi
  __int16 v6; // bx
  __int16 v7; // bp
  int v8; // esi
  int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // eax
  __int16 *result; // eax
  int *v13; // [esp+Ch] [ebp-Ch]
  int *v14; // [esp+10h] [ebp-8h]

  v3 = (int *)dword_4B23A0[a1];
  v4 = dword_4B23A4[a1];
  v5 = (int *)dword_4B23A8[a1];
  v13 = v3;
  v14 = (int *)v4;
  if ( a3 != 0 )
  {
    v3[1] &= ~2u;
    *(_DWORD *)(v4 + 4) &= ~2u;
    result = (__int16 *)(v5[1] & 0xFFFFFFFD);
    v5[1] = (int)result;
  }
  else
  {
    if ( (v3[1] & 2) == 0 )
    {
      v6 = word_4AE24A[a1];
      v7 = word_4AE24C[a1];
      sub_449D70(v3, word_4AE248[a1], &word_4AE288[2 * a1], 1);
      sub_449D70(v14, v6, &word_4AE28C[2 * a1], 1);
      sub_449D70(v5, v7, &word_4AE290[2 * a1], 1);
      v4 = (int)v14;
    }
    v8 = (a2 << 12) / 960 + 2048;
    dword_4B3B7C = v8;
    v9 = (a2 << 12) / 7680 + 2048;
    dword_4B3B80 = v9;
    if ( v8 >= 4096 )
    {
      v10 = (unsigned int)v8 >> 12;
      do
      {
        v8 -= 4096;
        --v10;
      }
      while ( v10 != 0 );
      dword_4B3B7C = v8;
    }
    if ( v9 >= 4096 )
    {
      v11 = (unsigned int)v9 >> 12;
      do
      {
        v9 -= 4096;
        --v11;
      }
      while ( v11 != 0 );
      dword_4B3B80 = v9;
    }
    IdentMatrix((_WORD *)(v13[30] + 148));
    RotMatrixZ(dword_4B3B7C, (__int16 *)(v13[30] + 148));
    IdentMatrix((_WORD *)(*(_DWORD *)(v4 + 120) + 148));
    return RotMatrixZ(dword_4B3B80, (__int16 *)(*(_DWORD *)(v4 + 120) + 148));
  }
  return result;
}

// 0x44ab10  sub_44AB10
int __cdecl sub_44AB10(int a1, unsigned __int16 a2, __int16 a3)
{
  unsigned int v3; // edx
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // ebp
  __int16 v8; // ax
  int v9; // eax
  int v11; // [esp+10h] [ebp-4h]
  unsigned __int16 v12; // [esp+1Ch] [ebp+8h]
  int v13; // [esp+1Ch] [ebp+8h]

  v3 = a2 / 0x64u;
  v11 = 0;
  v12 = a2 % 0x64u;
  v4 = dword_4B23A4[a1];
  v5 = word_4AE230[((int)((v3 << 8) | (16 * (v12 / 10)) | (v12 % 10)) >> 4) & 0xF];
  v6 = dword_4B23A0[a1];
  v7 = dword_4B23A8[a1];
  v13 = word_4AE230[(v12 % 10) & 0xF];
  if ( (*(_BYTE *)(v6 + 4) & 2) != 0 )
  {
    if ( *(_WORD *)(v6 + 30) == 0 && *(_WORD *)(v6 + 34) == 0 )
      *(_WORD *)(v6 + 30) = 1;
  }
  else
  {
    sub_449D70((int *)v6, word_4AE248[a1], &word_4AE288[2 * a1], a3);
  }
  if ( (*(_BYTE *)(v4 + 4) & 2) != 0 )
  {
    v8 = *(_WORD *)(v4 + 30);
    if ( v8 == 2 || *(unsigned __int16 *)(v4 + 28) == v5 || *(int *)(*(_DWORD *)(v7 + 120) + 176) > 1200 )
    {
      if ( v8 == 0 && *(_WORD *)(v4 + 34) == 0 )
        *(_WORD *)(v4 + 30) = 1;
    }
    else
    {
      v9 = *(_DWORD *)(v4 + 120);
      *(_WORD *)(v4 + 34) = 0;
      *(_WORD *)(v4 + 30) = 2;
      *(_DWORD *)(v9 + 176) = *(_DWORD *)(*(_DWORD *)(v7 + 120) + 176);
    }
  }
  else
  {
    sub_449D70((int *)v4, v5, &word_4AE28C[2 * a1], a3);
  }
  if ( (*(_BYTE *)(v7 + 4) & 2) != 0 )
  {
    if ( *(unsigned __int16 *)(v7 + 28) != v13 )
    {
      *(_WORD *)(v7 + 30) = 2;
      *(_WORD *)(v7 + 34) = 0;
      return 0;
    }
    if ( *(_WORD *)(v7 + 30) == 0 && *(_WORD *)(v7 + 34) == 0 )
    {
      *(_WORD *)(v7 + 30) = 1;
      return 0;
    }
  }
  else
  {
    v11 = 1;
    sub_449D70((int *)v7, v13, &word_4AE290[2 * a1], a3);
  }
  return v11;
}

// 0x44ace0  sub_44ACE0
int __cdecl sub_44ACE0(int a1, int a2)
{
  int v2; // ecx
  int v3; // edx
  int result; // eax
  char v5; // bl
  __int16 v6; // si
  _DWORD *v7; // edi
  int v8; // eax
  __int16 v9; // cx
  __int16 v10; // cx
  int v11; // ecx
  int v12; // edx
  _DWORD v13[3]; // [esp+4h] [ebp-Ch] BYREF
  int i; // [esp+14h] [ebp+4h]

  v2 = dword_4B23A0[a1];
  v3 = dword_4B23A4[a1];
  result = dword_4B23A8[a1];
  v13[0] = v2;
  v5 = *(_BYTE *)(v2 + 4);
  v13[1] = v3;
  v13[2] = result;
  if ( (v5 & 2) != 0 )
  {
    v6 = *(_WORD *)(v3 + 30);
    if ( v6 != 0 )
    {
      if ( *(_WORD *)(v2 + 30) == 0 && v6 == 1 )
        *(_WORD *)(v2 + 34) = 41;
    }
    else if ( *(_WORD *)(result + 30) != 0 )
    {
      *(_WORD *)(v2 + 34) = 41;
      *(_WORD *)(v3 + 34) = 41;
    }
    else
    {
      *(_WORD *)(v2 + 34) = *(_WORD *)(v3 + 34);
    }
    v7 = v13;
    for ( i = 3; i != 0; --i )
    {
      v8 = *v7;
      v9 = *(_WORD *)(*v7 + 34);
      if ( v9 != 0 )
      {
        *(_WORD *)(v8 + 34) = v9 - 1;
      }
      else
      {
        v10 = *(_WORD *)(v8 + 30);
        if ( v10 != 0 )
        {
          if ( v10 == 1 )
          {
            *(_DWORD *)(*(_DWORD *)(v8 + 120) + 176) = *(_DWORD *)(*(_DWORD *)(v8 + 120) + 176)
                                                     - (*(int *)(*(_DWORD *)(v8 + 120) + 176) >> 2)
                                                     - a2;
            v11 = *(_DWORD *)(v8 + 120);
            if ( *(int *)(v11 + 176) < 1200 )
            {
              *(_WORD *)(v8 + 30) = 0;
              *(_WORD *)(v8 + 34) = 40;
              *(_DWORD *)(v11 + 176) = 1200;
            }
          }
          else if ( v10 == 2 )
          {
            v12 = *(_DWORD *)(v8 + 120);
            *(_DWORD *)(v8 + 4) &= ~2u;
            *(_DWORD *)(v12 + 176) = 0;
          }
        }
        else
        {
          *(_DWORD *)(*(_DWORD *)(v8 + 120) + 176) += (*(int *)(*(_DWORD *)(v8 + 120) + 176) >> 2) + 200;
          if ( *(int *)(*(_DWORD *)(v8 + 120) + 176) > 8000 )
            *(_DWORD *)(v8 + 4) &= ~2u;
        }
      }
      ++v7;
      result = i - 1;
    }
  }
  return result;
}

// 0x44ae30  sub_44AE30
char sub_44AE30()
{
  _BYTE *v0; // ecx
  unsigned __int8 v1; // dl
  unsigned __int16 v2; // ax
  __int16 v3; // dx
  unsigned __int8 v4; // cl
  int v5; // eax
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // cl
  int v8; // eax
  int v9; // esi
  unsigned __int16 v10; // ax
  __int16 v11; // dx
  unsigned __int8 v12; // al
  char v13; // cl
  int v14; // esi
  unsigned __int16 v15; // ax
  __int16 v16; // dx
  _BYTE *v17; // ecx
  char v18; // al
  __int16 v19; // ax
  unsigned __int8 v20; // al
  __int16 v21; // ax
  unsigned __int8 v22; // al
  __int16 v23; // ax
  unsigned __int8 v24; // al
  __int16 v25; // ax
  unsigned __int8 v26; // al
  __int16 v27; // ax
  char result; // al
  _BOOL2 v29; // [esp-4h] [ebp-10h]

  v0 = dword_52FD00;
  if ( *((_DWORD *)dword_52FD00 + 0x4000) == 3 || word_4B39BC != 0 || (_BYTE)dword_4B226C != 0 )
  {
    result = *((_BYTE *)dword_52FD00 + 65601);
    byte_4B3730 = result;
    goto LABEL_114;
  }
  v1 = *((_BYTE *)dword_52FD00 + 65603);
  LOBYTE(v2) = byte_4B3A9F;
  if ( v1 != byte_4B3A9F )
  {
    if ( v1 > 0x63u )
    {
      *((_BYTE *)dword_52FD00 + 65603) = 99;
      v0 = dword_52FD00;
      LOBYTE(v2) = byte_4B3A9F;
    }
    if ( (_BYTE)v2 == 0xFF )
    {
      v3 = 1;
      byte_4B3A9F = v0[65603];
      v2 = (unsigned __int8)byte_4B3A9F;
    }
    else
    {
      v4 = v0[65603];
      v3 = 0;
      if ( (_BYTE)v2 == v4 )
      {
        v2 = (unsigned __int8)v2;
      }
      else if ( (unsigned __int8)v2 >= v4 )
      {
        v2 = (unsigned __int8)v2 - 1;
      }
      else
      {
        v2 = (unsigned __int8)v2 + 1;
      }
    }
    v5 = sub_44AB10(0, v2, v3);
    v0 = dword_52FD00;
    if ( v5 != 0 )
    {
      v6 = *((_BYTE *)dword_52FD00 + 65603);
      LOBYTE(v2) = byte_4B3A9F;
      if ( (unsigned __int8)byte_4B3A9F >= v6 )
      {
        if ( (unsigned __int8)byte_4B3A9F > v6 )
          LOBYTE(v2) = --byte_4B3A9F;
      }
      else
      {
        LOBYTE(v2) = byte_4B3A9F + 1;
        byte_4B3A9F = v2;
        if ( (unsigned __int8)v2 > 0x63u )
        {
          LOBYTE(v2) = 99;
          byte_4B3A9F = 99;
        }
      }
    }
    else
    {
      LOBYTE(v2) = byte_4B3A9F;
    }
  }
  v7 = v0[65603];
  if ( (unsigned __int8)v2 >= v7 )
    v8 = 200;
  else
    v8 = 200 * (v7 - (unsigned __int8)v2);
  sub_44ACE0(0, v8);
  v9 = *((unsigned __int8 *)dword_52FD00 + 65782);
  LOBYTE(v10) = *((_BYTE *)dword_52FD00 + v9 + 65600);
  if ( (_BYTE)v10 != byte_4B39FC )
  {
    if ( byte_4B39FC == -1 )
    {
      byte_4B39FC = *((_BYTE *)dword_52FD00 + v9 + 65600);
      v11 = 1;
      v10 = (unsigned __int8)v10;
    }
    else
    {
      v11 = 0;
      v10 = (unsigned __int8)byte_4B39FC >= (unsigned __int8)v10
          ? (unsigned __int8)byte_4B39FC - 1
          : (unsigned __int8)byte_4B39FC + 1;
    }
    if ( sub_44AB10(3, v10, v11) != 0 )
    {
      v12 = *((_BYTE *)dword_52FD00 + v9 + 65600);
      if ( (unsigned __int8)byte_4B39FC >= v12 )
      {
        if ( (unsigned __int8)byte_4B39FC <= v12 )
          goto LABEL_36;
        v13 = byte_4B39FC - 1;
      }
      else
      {
        v13 = byte_4B39FC + 1;
      }
      byte_4B39FC = v13;
    }
  }
LABEL_36:
  sub_44ACE0(3, 200);
  v14 = *((unsigned __int8 *)dword_52FD00 + 65784);
  LOBYTE(v15) = *((_BYTE *)dword_52FD00 + v14 + 65600);
  if ( (_BYTE)v15 != byte_4B316C )
  {
    if ( byte_4B316C == -1 )
    {
      byte_4B316C = *((_BYTE *)dword_52FD00 + v14 + 65600);
      v16 = 1;
      v15 = (unsigned __int8)v15;
    }
    else
    {
      v16 = 0;
      v15 = (unsigned __int8)byte_4B316C + 1;
    }
    if ( sub_44AB10(7, v15, v16) != 0 && byte_4B316C != *((_BYTE *)dword_52FD00 + v14 + 65600) )
      ++byte_4B316C;
  }
  sub_44ACE0(7, 200);
  v17 = dword_52FD00;
  v18 = *((_BYTE *)dword_52FD00 + 65601);
  if ( v18 != byte_4B3730 )
  {
    if ( v18 <= 0 && (*(_DWORD *)(dword_4B324C + 20) & 0x1000000) == 0 )
    {
      *((_BYTE *)dword_52FD00 + 65601) = 0;
      v19 = dword_4B39D8;
      if ( dword_4B39D8 == 0 )
        v19 = dword_4B2370;
      sub_437D00(v19, NULL);
      v17 = dword_52FD00;
    }
    v29 = byte_4B3730 == -1;
    byte_4B3730 = v17[65601];
    sub_44A880(14, v29);
  }
  sub_44ACE0(14, 200);
  if ( *((_BYTE *)dword_52FD00 + 65744) != 0 )
  {
    sub_44A6F0(11);
  }
  else
  {
    byte_4B322A = 0;
    *(_DWORD *)(dword_4B23CC + 4) &= ~2u;
    *(_DWORD *)(dword_4B23D0 + 4) &= ~2u;
    *(_DWORD *)(dword_4B23D4 + 4) &= ~2u;
  }
  v20 = *((_BYTE *)dword_52FD00 + 65609);
  if ( v20 != 0 )
  {
    if ( v20 == 0xFF )
      word_4B39BE = 1;
    else
      word_4B39BE = 30 * v20;
    *((_BYTE *)dword_52FD00 + 65609) = 0;
  }
  v21 = word_4B39BE;
  if ( word_4B39BE != 0 )
  {
    if ( (_BYTE)dword_4B226C == 0 && (dword_4B3940 & 0x100) == 0 )
      v21 = --word_4B39BE;
    if ( v21 != 0 )
    {
      sub_44A970(17, v21, 0);
      *((_BYTE *)dword_52FD00 + 65610) = word_4B39BE / 30;
    }
    else
    {
      sub_44A970(17, 0, 1);
      *((_BYTE *)dword_52FD00 + 65610) = 0;
    }
  }
  v22 = *((_BYTE *)dword_52FD00 + 65611);
  if ( v22 != 0 )
  {
    if ( v22 == 0xFF )
      word_4B3648 = 1;
    else
      word_4B3648 = 30 * v22;
    *((_BYTE *)dword_52FD00 + 65611) = 0;
  }
  v23 = word_4B3648;
  if ( word_4B3648 != 0 )
  {
    if ( (_BYTE)dword_4B226C == 0 && (dword_4B3940 & 0x100) == 0 )
      v23 = --word_4B3648;
    if ( v23 != 0 )
    {
      sub_44A970(17, v23, 0);
      *((_BYTE *)dword_52FD00 + 65612) = word_4B3648 / 30 + 1;
    }
    else
    {
      sub_44A970(17, 0, 1);
      *((_BYTE *)dword_52FD00 + 65612) = 0;
    }
  }
  v24 = *((_BYTE *)dword_52FD00 + 65648);
  if ( v24 != 0 )
  {
    if ( v24 == 0xFF )
      word_4B3168 = 1;
    else
      word_4B3168 = 30 * v24;
    *((_BYTE *)dword_52FD00 + 65648) = 0;
  }
  v25 = word_4B3168;
  if ( word_4B3168 != 0 )
  {
    if ( (_BYTE)dword_4B226C == 0 && (dword_4B3940 & 0x100) == 0 )
      v25 = --word_4B3168;
    if ( v25 != 0 )
    {
      sub_44A970(17, v25, 0);
      *((_BYTE *)dword_52FD00 + 65649) = word_4B3168 / 30 + 1;
    }
    else
    {
      sub_44A970(17, 0, 1);
      *((_BYTE *)dword_52FD00 + 65649) = 0;
    }
  }
  v26 = *((_BYTE *)dword_52FD00 + 65650);
  if ( v26 != 0 )
  {
    if ( v26 == 0xFF )
      word_4B3654 = 1;
    else
      word_4B3654 = 30 * v26;
    *((_BYTE *)dword_52FD00 + 65650) = 0;
  }
  v27 = word_4B3654;
  if ( word_4B3654 != 0 )
  {
    if ( (_BYTE)dword_4B226C == 0 && (dword_4B3940 & 0x100) == 0 )
      v27 = --word_4B3654;
    if ( v27 != 0 )
    {
      sub_44A970(17, v27, 0);
      *((_BYTE *)dword_52FD00 + 65651) = word_4B3654 / 30 + 1;
    }
    else
    {
      sub_44A970(17, 0, 1);
      *((_BYTE *)dword_52FD00 + 65651) = 0;
    }
  }
  if ( *((char *)dword_52FD00 + 65608) >= 0 )
  {
    *(_DWORD *)(dword_4B2408 + 4) &= ~2u;
  }
  else if ( (*(_BYTE *)(dword_4B2408 + 4) & 2) == 0 )
  {
    sub_449D70((int *)dword_4B2408, word_4AE27C, (__int16 *)&off_4AE2F0, 1);
  }
  if ( (*((_BYTE *)dword_52FD00 + 65645) & 2) != 0 )
  {
    if ( (*(_BYTE *)(dword_4B2410 + 4) & 2) == 0 )
      sub_449D70((int *)dword_4B2410, word_4AE280, (__int16 *)&off_4AE2F8, 1);
  }
  else
  {
    *(_DWORD *)(dword_4B2410 + 4) &= ~2u;
  }
  result = dword_4B240C;
  if ( (*((_BYTE *)dword_52FD00 + 65645) & 4) == 0 )
  {
    *(_DWORD *)(dword_4B240C + 4) &= ~2u;
    dword_4B39D8 = 0;
    return result;
  }
  if ( (*(_BYTE *)(dword_4B240C + 4) & 2) == 0 )
  {
    result = sub_449D70((int *)dword_4B240C, word_4AE27E, (__int16 *)&off_4AE2F4, 1);
    dword_4B39D8 = 0;
    return result;
  }
LABEL_114:
  dword_4B39D8 = 0;
  return result;
}

// 0x44b4e0  sub_44B4E0
int __usercall sub_44B4E0/*@<eax>*/(int a1/*@<ebx>*/, int a2)
{
  void *v2; // esi
  int result; // eax
  int v4; // edx
  int v5; // eax
  char v6; // bl
  int v7; // eax
  int *i; // edi
  __int16 v9; // ax
  int v10; // edi
  int v11; // eax
  int v12; // [esp-8h] [ebp-14h]

  v2 = dword_4EFAC0;
  *((_DWORD *)dword_4EFAC0 + 13) = a2;
  *((_DWORD *)v2 + 6) = dword_4B3664[5 * (__int16)dword_4B2368];
  *((_DWORD *)v2 + 7) = dword_4B36A4[5 * (__int16)dword_4B2368];
  result = 5 * (__int16)dword_4B2368;
  v4 = dword_4B36E4[5 * (__int16)dword_4B2368];
  *((_WORD *)v2 + 6) = 0;
  *((_DWORD *)v2 + 8) = v4;
  *((_WORD *)v2 + 9) = 0x3FFF;
  if ( a2 != 0 )
  {
    v12 = a1;
    do
    {
      v5 = *((_DWORD *)v2 + 13);
      if ( (*(_BYTE *)(v5 + 4) & 2) != 0 )
      {
        v6 = 0;
        dword_7C961C(v12);
        dword_4EFB74 = 0;
        byte_4EFB78 = 1;
        v7 = *((_DWORD *)v2 + 13);
        *((_WORD *)v2 + 5) = 0;
        for ( i = *(int **)(v7 + 120); i != NULL; i = (int *)*i )
        {
          if ( (i[2] & 6) != 0 )
          {
            v6 = 1;
            v9 = *(_WORD *)(*((_DWORD *)v2 + 13) + 28);
            if ( v9 == 492 )
            {
              dword_4B1A68(&off_4AE368);
              break;
            }
            if ( v9 == 494 )
            {
              dword_4EFB74 = -1069547520;
              byte_4EFB78 = 1;
              sub_408930((int)(i + 37));
              dword_7C9618(i);
              dword_4EFB74 = 0;
              byte_4EFB78 = 0;
            }
            else
            {
              sub_408930((int)(i + 37));
              dword_7C9618(i);
            }
          }
        }
        if ( v6 != 0 )
        {
          v10 = *(_DWORD *)(*((_DWORD *)v2 + 13) + 120);
          if ( v10 != 0 )
          {
            v11 = dword_4EFB8C;
            do
            {
              if ( (*(_BYTE *)(v10 + 8) & 6) != 0 )
              {
                v11 = sub_411BA0(v10, v11, (int)v2 + 4);
                dword_4EFB8C = v11;
              }
              v10 = *(_DWORD *)v10;
            }
            while ( v10 != 0 );
          }
        }
        result = **((_DWORD **)v2 + 13);
      }
      else
      {
        result = *(_DWORD *)v5;
      }
      *((_DWORD *)v2 + 13) = result;
    }
    while ( result != 0 );
  }
  byte_4EFB78 = 0;
  return result;
}

// 0x44b660  sub_44B660
int __cdecl sub_44B660(int a1, int a2, int a3, int a4)
{
  int v4; // edi
  __int16 v6; // ax
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int16 v10; // ax
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int *v14; // ebp
  int v15; // edi
  int v16; // eax
  int v17; // edx
  int v18; // edi
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // edx
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  int v26; // ecx
  int v27; // ecx
  int v28; // edx
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v38; // ecx
  int v39; // edx
  int v40; // eax
  int v41; // edx
  int v42; // edx
  int v43; // ebx
  int v44; // ecx
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // [esp-8h] [ebp-18h]
  int v50; // [esp+20h] [ebp+10h]

  v4 = dword_4B39AC;
  v50 = a4 + 144;
  if ( dword_4B39AC == 0 )
  {
LABEL_17:
    v14 = (int *)(a4 + 24);
    *(_DWORD *)(a4 + 8) = *(_DWORD *)(a1 + 228);
    *(_DWORD *)(a4 + 12) = *(_DWORD *)(a1 + 232);
    v15 = *(_DWORD *)(a4 + 8);
    *(_DWORD *)(a4 + 16) = *(_DWORD *)(a1 + 236);
    v16 = *(_DWORD *)(a4 + 12);
    *(_WORD *)(a4 + 130) = *(_WORD *)(a1 + 38);
    v17 = v15 + *(__int16 *)(a1 + 72);
    *(_DWORD *)(a4 + 28) = v16;
    *(_DWORD *)(a4 + 24) = v17;
    *(_DWORD *)(a4 + 32) = *(_DWORD *)(a4 + 16) + *(__int16 *)(a1 + 76);
    sub_436D90((_DWORD *)(a4 + 24), a4 + 120, v50);
    if ( (*(_BYTE *)(a4 + 122) & 4) != 0 )
    {
      v18 = a2;
      *(_DWORD *)(a4 + 28) = *(_DWORD *)(a2 + 28);
    }
    else
    {
      v19 = *(__int16 *)(a4 + 126) + *(_DWORD *)(a4 + 28);
      *(_DWORD *)(a4 + 28) = v19;
      v20 = v19;
      v21 = *(_DWORD *)(a2 + 28);
      if ( v20 >= v21 + 35 || v20 <= v21 - 35 )
        *(_DWORD *)(a4 + 28) = v21;
      v18 = a2;
    }
    v22 = *(_DWORD *)(a4 + 12);
    *(_DWORD *)(a4 + 40) = *(_DWORD *)(a4 + 8) + *(__int16 *)(a1 + 80);
    v23 = *(_DWORD *)(a4 + 32);
    *(_DWORD *)(a4 + 44) = v22;
    *(_DWORD *)(a4 + 48) = v23;
    sub_436D90((_DWORD *)(a4 + 40), a4 + 120, v50);
    if ( (*(_BYTE *)(a4 + 122) & 4) != 0 )
    {
      v24 = *(_DWORD *)(v18 + 28);
    }
    else
    {
      v25 = *(__int16 *)(a4 + 126) + *(_DWORD *)(a4 + 44);
      *(_DWORD *)(a4 + 44) = v25;
      v26 = v25;
      v24 = *(_DWORD *)(v18 + 28);
      if ( v26 < v24 + 35 && v26 > v24 - 35 )
      {
LABEL_28:
        v27 = *v14;
        *(_DWORD *)(a4 + 60) = *(_DWORD *)(a4 + 12);
        v28 = *(_DWORD *)(a4 + 16);
        *(_DWORD *)(a4 + 56) = v27;
        *(_DWORD *)(a4 + 64) = v28 + *(__int16 *)(a1 + 84);
        sub_436D90((_DWORD *)(a4 + 56), a4 + 120, v50);
        if ( (*(_BYTE *)(a4 + 122) & 4) != 0 )
        {
          v29 = *(_DWORD *)(v18 + 28);
        }
        else
        {
          v30 = *(__int16 *)(a4 + 126) + *(_DWORD *)(a4 + 60);
          *(_DWORD *)(a4 + 60) = v30;
          v31 = v30;
          v29 = *(_DWORD *)(v18 + 28);
          if ( v31 < v29 + 35 && v31 > v29 - 35 )
            goto LABEL_33;
        }
        *(_DWORD *)(a4 + 60) = v29;
LABEL_33:
        v32 = *(_DWORD *)(v18 + 28);
        v33 = *(_DWORD *)(a1 + 232);
        if ( v32 >= v33 )
        {
          v34 = 4 * (v33 - v32) + 4096;
          *(_DWORD *)(a4 + 4) = v34;
          if ( v34 < 2048 )
            *(_DWORD *)(a4 + 4) = 2048;
        }
        else
        {
          *(_DWORD *)(a4 + 4) = 4096;
        }
        v35 = *(_DWORD *)(a4 + 4);
        *(_DWORD *)(v18 + 4) = 4096;
        *(_DWORD *)v18 = v35;
        *(_DWORD *)(v18 + 8) = *(_DWORD *)(a4 + 4);
        v36 = *(_DWORD *)(a4 + 28);
        if ( v36 == *(_DWORD *)(a4 + 44) && v36 == *(_DWORD *)(a4 + 60) )
        {
          *(_WORD *)(v18 + 20) = 0;
          *(_WORD *)(v18 + 16) = 0;
          *(_WORD *)(v18 + 18) = *(_WORD *)(a1 + 222);
          return 0;
        }
        else
        {
          *(_DWORD *)(a4 + 72) = *(_DWORD *)(a4 + 40) - *v14;
          *(_DWORD *)(a4 + 76) = *(_DWORD *)(a4 + 44) - *(_DWORD *)(a4 + 28);
          *(_DWORD *)(a4 + 80) = *(_DWORD *)(a4 + 48) - *(_DWORD *)(a4 + 32);
          *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 56) - *v14;
          v38 = *(_DWORD *)(a4 + 60) - *(_DWORD *)(a4 + 28);
          *(_DWORD *)(a4 + 92) = v38;
          v39 = *(_DWORD *)(a4 + 64) - *(_DWORD *)(a4 + 32);
          *(_DWORD *)(a4 + 96) = v39;
          *(_DWORD *)(a4 + 104) = v39 * *(_DWORD *)(a4 + 76) - v38 * *(_DWORD *)(a4 + 80);
          v40 = *(_DWORD *)(a4 + 80) * *(_DWORD *)(a4 + 88) - *(_DWORD *)(a4 + 96) * *(_DWORD *)(a4 + 72);
          *(_DWORD *)(a4 + 108) = v40;
          v41 = *(_DWORD *)(a4 + 92) * *(_DWORD *)(a4 + 72) - *(_DWORD *)(a4 + 76) * *(_DWORD *)(a4 + 88);
          *(_DWORD *)(a4 + 112) = v41;
          *(_WORD *)(v18 + 16) = ratan2(v41, v40);
          *(_WORD *)(v18 + 18) = 0;
          *(_WORD *)(v18 + 20) = ratan2(*(_DWORD *)(a4 + 104), *(_DWORD *)(a4 + 108));
          return 0;
        }
      }
    }
    *(_DWORD *)(a4 + 44) = v24;
    goto LABEL_28;
  }
  while ( 1 )
  {
    v6 = *(_WORD *)(v4 + 82);
    v7 = *(_DWORD *)(v4 + 232) + v6;
    v8 = v6 > 70 ? v7 + 80 : v7 + 40;
    if ( *(_DWORD *)(a1 + 232) <= v8 && *(_DWORD *)(a2 + 28) >= v8 )
    {
      v9 = *(_DWORD *)(v4 + 8);
      if ( ((a3 & v9) != 0 || (*(_DWORD *)(v4 + 12) & 0x2000) != 0)
        && (v9 & 1) == 0
        && *(_WORD *)(v4 + 42) == 2
        && a1 != v4 )
      {
        *(_WORD *)(a4 + 40) = 4096 - *(_WORD *)(v4 + 220);
        *(_WORD *)(a4 + 42) = 4096 - *(_WORD *)(v4 + 222);
        *(_WORD *)(a4 + 44) = 4096 - *(_WORD *)(v4 + 224);
        *(_WORD *)(a4 + 56) = *(_WORD *)(a1 + 228) - *(_WORD *)(v4 + 228);
        *(_WORD *)(a4 + 58) = *(_WORD *)(a1 + 232) - *(_WORD *)(v4 + 232);
        v10 = *(_WORD *)(a1 + 236) - *(_WORD *)(v4 + 236);
        *(_WORD *)(a4 + 24) = 4096;
        *(_WORD *)(a4 + 60) = v10;
        *(_WORD *)(a4 + 8) = 4096;
        *(_WORD *)(a4 + 10) = 0;
        *(_WORD *)(a4 + 12) = 0;
        *(_WORD *)(a4 + 14) = 0;
        *(_WORD *)(a4 + 16) = 4096;
        *(_WORD *)(a4 + 18) = 0;
        v49 = *(__int16 *)(a4 + 40);
        *(_WORD *)(a4 + 20) = 0;
        *(_WORD *)(a4 + 22) = 0;
        *(_DWORD *)(a4 + 28) = 0;
        *(_DWORD *)(a4 + 32) = 0;
        *(_DWORD *)(a4 + 36) = 0;
        RotMatrixX(v49, (__int16 *)(a4 + 8));
        RotMatrixY(*(__int16 *)(a4 + 42), (__int16 *)(a4 + 8));
        RotMatrixZ(*(__int16 *)(a4 + 44), (__int16 *)(a4 + 8));
        ApplyMatrixSV((__int16 *)(a4 + 8), (__int16 *)(a4 + 56), (_DWORD *)(a4 + 48));
        v11 = *(__int16 *)(v4 + 32);
        v12 = *(__int16 *)(a4 + 48);
        if ( v12 >= *(__int16 *)(v4 + 72) - v11 && v12 <= v11 + *(__int16 *)(v4 + 80) )
        {
          v13 = *(__int16 *)(a4 + 52);
          if ( v13 >= *(__int16 *)(v4 + 76) - v11 && v13 <= v11 + *(__int16 *)(v4 + 84) )
            break;
        }
      }
    }
    v4 = *(_DWORD *)(v4 + 16);
    if ( v4 == 0 )
      goto LABEL_17;
  }
  *(_WORD *)(a4 + 40) = 0;
  *(_WORD *)(a4 + 42) = *(_WORD *)(v4 + 82);
  *(_WORD *)(a4 + 44) = 0;
  ApplyMatrixSV((__int16 *)(v4 + 128), (__int16 *)(a4 + 40), (_DWORD *)(a4 + 48));
  *(_WORD *)(a4 + 42) = 4096;
  ApplyMatrixSV((__int16 *)(v4 + 128), (__int16 *)(a4 + 40), (_DWORD *)(a4 + 64));
  *(_WORD *)(a4 + 42) = *(_WORD *)(v4 + 208);
  ApplyMatrixSV((__int16 *)(v4 + 128), (__int16 *)(a4 + 40), (_DWORD *)(a4 + 72));
  v42 = *(__int16 *)(a4 + 68);
  v43 = *(__int16 *)(a4 + 64) * *(__int16 *)(a4 + 56);
  v44 = v42 * *(__int16 *)(a4 + 60);
  v45 = *(__int16 *)(a4 + 48) * *(__int16 *)(a4 + 64)
      + v42 * *(__int16 *)(a4 + 52)
      + *(__int16 *)(a4 + 66) * *(__int16 *)(a4 + 50);
  *(_DWORD *)(a4 + 80) = v45;
  v46 = *(_DWORD *)(v4 + 232) + (v45 - v43 - v44) / (*(__int16 *)(a4 + 74) | 1);
  *(_DWORD *)(a2 + 28) = v46;
  v47 = 4 * (*(_DWORD *)(a1 + 232) - v46) + 4096;
  *(_DWORD *)(a4 + 4) = v47;
  if ( v47 < 2048 )
    *(_DWORD *)(a4 + 4) = 2048;
  v48 = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(a2 + 4) = 4096;
  *(_DWORD *)a2 = v48;
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a4 + 4);
  *(_WORD *)(a2 + 16) = *(_WORD *)(v4 + 220);
  *(_WORD *)(a2 + 18) = *(_WORD *)(v4 + 222);
  *(_WORD *)(a2 + 20) = *(_WORD *)(v4 + 224);
  return v4;
}

// 0x44bb70  sub_44BB70
int __cdecl sub_44BB70(int a1, _DWORD *a2, int a3)
{
  int *v4; // eax
  int v5; // ecx
  _DWORD *v6; // ebp
  int *v7; // esi
  int v8; // eax
  int v10; // edi
  int v11; // eax
  int v12; // [esp+1Ch] [ebp+Ch]

  v12 = a3 + 52;
  v4 = *(int **)(a1 + 120);
  if ( v4 == NULL )
    return 0;
  v5 = *v4;
  if ( *v4 == 0 )
  {
    if ( *((_BYTE *)v4 + 180) != 0 )
    {
      v6 = a2 + 6;
      v7 = a2 + 7;
      a2[6] = *(_DWORD *)(a1 + 228);
      a2[7] = *(_DWORD *)(a1 + 232);
      a2[8] = *(_DWORD *)(a1 + 236);
      goto LABEL_7;
    }
    return 0;
  }
  if ( *(_BYTE *)(v5 + 180) == 0 )
    return 0;
  *(_DWORD *)a3 = v5 + 28;
  sub_437740((int *)a3);
  v6 = a2 + 6;
  v7 = a2 + 7;
  a2[6] = *(_DWORD *)(a3 + 12);
  a2[7] = *(_DWORD *)(a3 + 16);
  a2[8] = *(_DWORD *)(a3 + 20);
LABEL_7:
  v8 = *(_DWORD *)(a1 + 112);
  if ( v8 != 0 && ((*(_BYTE *)(v8 + 8) & 8) != 0 || (*(_DWORD *)(v8 + 12) & 0x2000) != 0) )
  {
    *v7 = *(_DWORD *)(a1 + 232);
    return 1;
  }
  else
  {
    *(_WORD *)(a3 + 38) = *(_WORD *)(a1 + 38);
    sub_436D90(v6, a3 + 28, v12);
    while ( (*(_BYTE *)(a3 + 30) & 8) != 0 )
    {
      if ( *(_WORD *)(a3 + 38) == 0xFFFF )
        break;
      ++*v7;
      sub_436D90(v6, a3 + 28, v12);
    }
    v10 = *(__int16 *)(a3 + 34) + *v7;
    *v7 = v10;
    if ( v10 > dword_4B2378 )
      *v7 = dword_4B2378;
    if ( (dword_4B3940 & 0x100) == 0 )
    {
      v11 = *(_DWORD *)(a1 + 232);
      if ( *v7 < v11 )
        *v7 = v11;
    }
    return 1;
  }
}

// 0x44bcc0  sub_44BCC0
int __cdecl sub_44BCC0(int a1)
{
  char *v1; // esi
  bool v2; // cc
  __int16 v3; // ax
  int v4; // edx
  int v5; // eax
  __int16 v6; // cx
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // ecx
  __int16 v11; // cx
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  int v15; // ecx
  int result; // eax
  int v17; // [esp+0h] [ebp-10h]

  v1 = (char *)dword_4EFAC0;
  *((_WORD *)dword_4EFAC0 + 10) = word_4B3728;
  *((_WORD *)v1 + 11) = word_4B38A0;
  *((_DWORD *)v1 + 7) = dword_4B3664[5 * (__int16)dword_4B2368];
  *((_DWORD *)v1 + 8) = dword_4B36A4[5 * (__int16)dword_4B2368];
  *((_DWORD *)v1 + 9) = dword_4B36E4[5 * (__int16)dword_4B2368];
  *((_WORD *)v1 + 8) = word_4B3738;
  v1[9] = 1;
  v1[10] = 1;
  if ( word_4B316A != 0 )
  {
    *((_DWORD *)v1 + 36) = 0;
    *((_WORD *)v1 + 76) = 2;
    v1[324] = 1;
    *((_DWORD *)v1 + 40) = v1 + 172;
    *((_DWORD *)v1 + 39) = 0x40000000;
    *((_DWORD *)v1 + 61) = 0;
    *((_DWORD *)v1 + 62) = 0;
    *((_WORD *)v1 + 2) = 0;
    v2 = word_4B316A <= 0;
    *((_WORD *)v1 + 1) = word_4B316A;
    if ( !v2 )
    {
      do
      {
        v3 = *((_WORD *)v1 + 2);
        v4 = *(_DWORD *)(a1 + 4 * v3);
        *((_WORD *)v1 + 2) = v3 + 1;
        *((_DWORD *)v1 + 12) = v4;
        if ( sub_44BB70(v4, (_DWORD *)v1 + 26, (int)(v1 + 328)) != 0 )
        {
          v5 = *((_DWORD *)v1 + 12);
          if ( *(_WORD *)(v5 + 38) == *(_WORD *)(dword_4B324C + 38) )
            *((_WORD *)v1 + 7) = (*(_BYTE *)(v5 + 20) & 0x10) != 0 ? *(__int16 *)(v5 + 40) >> 1 : *(_WORD *)(v5 + 40);
          else
            *((_WORD *)v1 + 7) = 0;
          v6 = *(_WORD *)(v5 + 58);
          *(_WORD *)v1 = v6;
          v7 = dword_4B2390;
          if ( dword_4B2390 != 0 )
          {
            while ( *(unsigned __int16 *)(v7 + 28) != v6 )
            {
              v7 = *(_DWORD *)v7;
              if ( v7 == 0 )
                goto LABEL_26;
            }
            v8 = *(_DWORD **)(v7 + 116);
            if ( v8 != NULL )
            {
              while ( *(_WORD *)(v8[2] + 78) != 6 )
              {
                v8 = (_DWORD *)*v8;
                if ( v8 == NULL )
                  goto LABEL_26;
              }
              *((_DWORD *)v1 + 60) = v1 + 104;
              *((_DWORD *)v1 + 41) = *(_DWORD *)(v8[2] + 84);
              v9 = *((_DWORD *)v1 + 12);
              v10 = *(_DWORD *)(v9 + 112);
              if ( v10 != 0 && ((*(_BYTE *)(v10 + 8) & 8) != 0 || (*(_DWORD *)(v10 + 12) & 0x2000) != 0) )
              {
                v11 = 4 * (*(_WORD *)(v9 + 232) - *((_WORD *)v1 + 66)) + 4096;
                *((_WORD *)v1 + 3) = v11;
                if ( v11 < 2048 )
                  *((_WORD *)v1 + 3) = 2048;
                *((_DWORD *)v1 + 26) = *((__int16 *)v1 + 3);
                *((_DWORD *)v1 + 27) = 4096;
                *((_DWORD *)v1 + 28) = *((__int16 *)v1 + 3);
                *((_WORD *)v1 + 60) = *(_WORD *)(*(_DWORD *)(v9 + 112) + 220);
                *((_WORD *)v1 + 61) = *(_WORD *)(*(_DWORD *)(v9 + 112) + 222);
                *((_WORD *)v1 + 62) = *(_WORD *)(*(_DWORD *)(v9 + 112) + 224);
                *((_WORD *)v1 + 7) += *(_WORD *)(*(_DWORD *)(v9 + 112) + 40);
              }
              else
              {
                v12 = sub_44B660(v9, (int)(v1 + 104), 8, (int)(v1 + 328));
                *((_DWORD *)v1 + 13) = v12;
                if ( v12 != 0 )
                  *((_WORD *)v1 + 7) += *(_WORD *)(v12 + 40);
              }
              sub_437820((int)(v1 + 172));
              sub_40A0B0(*((_DWORD **)v1 + 40), (_DWORD *)v1 + 18, (_DWORD *)v1 + 82);
              v13 = *((_DWORD *)v1 + 25) + 9;
              v14 = *((_DWORD *)v1 + 24) + 5;
              v1[8] = 0;
              *((_DWORD *)v1 + 25) = v13;
              *((_DWORD *)v1 + 24) = v14;
              sub_408910(v1 + 72);
              v15 = *((_DWORD *)v1 + 24) - 5;
              *((_DWORD *)v1 + 25) -= 9;
              *((_DWORD *)v1 + 24) = v15;
              dword_7BD970 = 2;
              dword_7C961C(v17);
              dword_7C9618(v1 + 144);
              sub_44CD00(*((_DWORD *)v1 + 12), v1 + 144, v1 + 8, v1 + 328);
              dword_7BD970 = 1;
            }
          }
        }
LABEL_26:
        ;
      }
      while ( *((_WORD *)v1 + 2) < *((_WORD *)v1 + 1) );
    }
  }
  if ( byte_4B3448 == 0 )
  {
    if ( (unsigned int)dword_4AC094 <= 1 )
      dword_62364C = 0;
    sub_40CC70(0, 0, 0);
  }
  result = dword_4B372C;
  if ( dword_4EFB8C > dword_4B372C )
  {
    dword_4EFB8C = dword_4B3450;
    return dword_4B3450;
  }
  return result;
}

// 0x44c000  sub_44C000
char __cdecl sub_44C000(char a1, __int16 a2)
{
  byte_4B3232 = a1;
  word_4B3236 = a2;
  word_4B2388 = 0;
  word_4B3738 = 4096;
  return a1;
}

// 0x44c030  sub_44C030
char __cdecl sub_44C030(char a1, __int16 a2)
{
  byte_4B3232 = a1;
  word_4B3236 = a2;
  word_4B2388 = 4096;
  word_4B3738 = 0;
  return a1;
}

// 0x44c060  sub_44C060
__int16 sub_44C060()
{
  char v0; // cl
  int v1; // eax
  int v2; // edi
  __int16 v3; // dx
  int v4; // ecx

  v0 = byte_4B3232;
  LOWORD(v1) = word_4B3738;
  v2 = word_4B3738;
  if ( byte_4B3232 == 0 )
    goto LABEL_20;
  if ( (byte_4B3232 & 4) != 0 )
  {
    v0 = 1;
    LOWORD(v1) = 4096;
    byte_4B3232 = 1;
    word_4B3236 = 256;
    word_4B2388 = 0;
    word_4B3738 = 4096;
    goto LABEL_18;
  }
  if ( (byte_4B3232 & 8) != 0 )
  {
    v0 = 2;
    LOWORD(v1) = 0;
    byte_4B3232 = 2;
    word_4B3236 = 256;
    word_4B2388 = 4096;
    word_4B3738 = 0;
    goto LABEL_18;
  }
  if ( byte_4B2279 == 0 )
  {
    if ( (byte_4B3232 & 2) != 0 )
    {
      if ( word_4B2388 <= 0 )
      {
        LOWORD(v1) = 4096;
        v0 = 32;
        word_4B2388 = 0;
        word_4B3738 = 4096;
        byte_4B3232 = 32;
        goto LABEL_18;
      }
      LOWORD(v1) = 4096 - word_4B2388;
      v3 = word_4B2388 - word_4B3236;
      word_4B3738 = 4096 - word_4B2388;
      goto LABEL_17;
    }
    if ( (byte_4B3232 & 1) == 0 )
      goto LABEL_18;
    if ( word_4B2388 < 4096 )
    {
      LOWORD(v1) = 4096 - word_4B2388;
      v3 = word_4B3236 + word_4B2388;
      word_4B3738 = 4096 - word_4B2388;
LABEL_17:
      word_4B2388 = v3;
      goto LABEL_18;
    }
    LOWORD(v1) = 0;
    word_4B2388 = 4096;
    word_4B3738 = 0;
    if ( (byte_4B3232 & 0x40) != 0 )
    {
      v0 = byte_4B3232 & 0xFC | 2;
      byte_4B3232 = v0;
    }
    else
    {
      v0 = 16;
      byte_4B3232 = 16;
    }
  }
LABEL_18:
  if ( (v0 & 0x30) != 0 )
  {
    LOWORD(v1) = 0;
    byte_4B3232 = 0;
    word_4B3738 = 0;
  }
LABEL_20:
  v4 = (__int16)v1;
  if ( (__int16)v1 != v2 )
  {
    dword_4B1C48 = 1;
    v1 = (4096 - (__int16)v1) / 16;
    flt_467740 = (double)(4096 - v4) * 0.00024414062;
    word_467744 = (4096 - v4) / 16;
  }
  return v1;
}

// 0x44c1e0  sub_44C1E0
int __cdecl sub_44C1E0(int a1, int a2, _DWORD *a3)
{
  int result; // eax
  _DWORD *v4; // [esp-8h] [ebp-24h]
  int v5; // [esp+Ch] [ebp-10h] BYREF
  int v6; // [esp+10h] [ebp-Ch]
  int v7; // [esp+14h] [ebp-8h]

  BYTE1(dword_4B3940) |= 1u;
  v5 = 0;
  v6 = 0;
  v4 = *(_DWORD **)(a1 + 16);
  v7 = 1000;
  sub_40A1B0(v4, a3);
  dword_4B38C0 = a3[5];
  dword_4B38C4 = a3[6];
  dword_4B38C8 = a3[7];
  ApplyMatrixLV((__int16 *)a3, &v5, &v5);
  dword_4B38CC = v5 + dword_4B38C0;
  dword_4B38D0 = v6 + dword_4B38C4;
  dword_4B38D4 = dword_4B38C8 + v7;
  v5 = -v5;
  v6 = -v6;
  v7 = -v7;
  word_4B3E1A = ratan2(v5, v7);
  result = SquareRoot0(v7 * v7 + v5 * v5) + 1;
  word_4B3E2C = word_4B3E1A;
  dword_4B3DA8 = result;
  return result;
}

// 0x44c2e0  sub_44C2E0
int __usercall sub_44C2E0/*@<eax>*/(int a1/*@<edx>*/, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // ecx
  int result; // eax
  int v7; // eax
  _BYTE v8[36]; // [esp-2Ch] [ebp-50h] BYREF
  int v9; // [esp-8h] [ebp-2Ch]
  int v10; // [esp-4h] [ebp-28h]
  int v11[7]; // [esp+8h] [ebp-1Ch] BYREF

  if ( (*(_BYTE *)(a2 + 8) & 0x10) != 0 )
  {
    v4 = a3;
    if ( byte_4B3232 != 0 )
    {
      v5 = 128 - (word_4B3446 >> 5);
      *(_WORD *)(a3 + 8) = 0;
      result = 65793 * v5;
    }
    else
    {
      result = (int)&unk_808080;
      *(_WORD *)(a3 + 8) = 0;
    }
  }
  else
  {
    v4 = a3;
    v7 = *(_DWORD *)(a3 + 52);
    if ( *(_DWORD *)(v7 + 196) != 0 )
    {
      v11[0] = v7 + 124;
      sub_437740(v11);
      *(_DWORD *)(*(_DWORD *)(a3 + 52) + 228) = v11[3];
      *(_DWORD *)(*(_DWORD *)(a3 + 52) + 232) = v11[4];
      *(_DWORD *)(*(_DWORD *)(a3 + 52) + 236) = v11[5];
    }
    result = *(_DWORD *)sub_4383F0(*(_DWORD *)(a3 + 52), a4);
    a1 = *(int *)(*(_DWORD *)(a3 + 52) + 212) >> 2;
    *(_WORD *)(a3 + 8) = a1 - *(_WORD *)(a3 + 10);
  }
  if ( (*(_BYTE *)(*(_DWORD *)(v4 + 52) + 4) & 2) != 0 && result != 0 )
  {
    LOWORD(a1) = *(_WORD *)(a2 + 8);
    v10 = a1;
    v9 = v4;
    qmemcpy(v8, (const void *)(a2 + 12), sizeof(v8));
    return dword_7C624C();
  }
  return result;
}

// 0x44c3e0  sub_44C3E0
__int16 __cdecl sub_44C3E0(int a1, int a2, _DWORD *a3)
{
  char *v4; // ebx
  int v5; // eax
  int v6; // esi
  __int16 v7; // dx
  __int16 v8; // dx
  __int16 v9; // cx
  int v10; // esi
  __int16 v11; // cx
  __int16 v13; // [esp+12h] [ebp-6h]
  char v14; // [esp+14h] [ebp-4h]
  __int16 v15; // [esp+1Ch] [ebp+4h]
  __int16 v16; // [esp+20h] [ebp+8h]

  word_4B3B74 = 0;
  dword_4B3224 = (int)&unk_4B2A60;
  v4 = (char *)(a2 + 4);
  *(_BYTE *)(a2 + 6) = 1;
  *(_BYTE *)(a2 + 5) = 1;
  *(_BYTE *)(a2 + 4) = 0;
  sub_408910((const void *)(a1 + 148));
  dword_4EFB8C = sub_40FF20(a1, dword_4EFB8C, a2 + 4);
  LOWORD(v5) = *(_WORD *)(*(_DWORD *)(a2 + 52) + 38);
  word_4B3AA0 = v5;
  if ( (dword_4B3940 & 0x300) != 0 )
  {
    v15 = -1;
  }
  else
  {
    LOWORD(v5) = *(_WORD *)(dword_4B324C + 38);
    v15 = v5;
    if ( (_WORD)v5 != *(_WORD *)(*(_DWORD *)(a2 + 52) + 38) && (_WORD)v5 != 0xFFFF )
    {
      v6 = dword_4B37A0[(__int16)v5];
      v5 = sub_40A0B0(*(_DWORD **)(v6 + 16), a3, a3 + 8);
      if ( v5 != 0 )
      {
        sub_408910(a3);
        *v4 = 0;
        *(_BYTE *)(a2 + 5) = *(_BYTE *)(v6 + 181);
        *(_BYTE *)(a2 + 6) = 1;
        word_4B3B74 = 0;
        dword_4B3224 = (int)&unk_4B2A60;
        v5 = sub_40FF20(v6, dword_4EFB8C, (int)v4);
        dword_4EFB8C = v5;
      }
      word_4B3460[0] = v15;
    }
  }
  v7 = word_4B39DC;
  *(_WORD *)(a2 + 10) = 0;
  v16 = v7;
  v8 = word_4B39DC;
  v9 = 1;
  v14 = 1;
  v13 = 1;
  if ( word_4B39DC > 1 )
  {
    do
    {
      if ( v9 == v16 )
      {
        ++v14;
        v16 = v8;
      }
      v5 = 20 * v9;
      if ( (*((_BYTE *)word_4B3462 + v5) & 1) == 0 )
      {
        LOWORD(v5) = word_4B3460[10 * v9];
        if ( (_WORD)v5 != v15 )
        {
          v10 = dword_4B37A0[(__int16)v5];
          v5 = sub_40A0B0(*(_DWORD **)(v10 + 16), a3, a3 + 8);
          if ( v5 != 0 )
          {
            sub_408910(a3);
            *v4 = v14;
            *(_BYTE *)(a2 + 5) = *(_BYTE *)(v10 + 181);
            *(_BYTE *)(a2 + 6) = v13 + 1;
            word_4B3B74 = 0;
            dword_4B3224 = (int)&unk_4B2A60;
            v5 = sub_40FF20(v10, dword_4EFB8C, (int)v4);
            dword_4EFB8C = v5;
          }
          v8 = word_4B39DC;
          v9 = v13;
        }
      }
      v13 = ++v9;
    }
    while ( v9 < v8 );
  }
  v11 = word_4B3AA0;
  if ( v15 != word_4B3AA0 )
  {
    v5 = 20 * v8;
    *(__int16 *)((char *)word_4B3462 + v5) = 0;
    *(__int16 *)((char *)word_4B3460 + v5) = v11;
    word_4B39DC = v8 + 1;
  }
  *v4 = 0;
  return v5;
}

// 0x44c620  sub_44C620
int __usercall sub_44C620/*@<eax>*/(int a1/*@<edi>*/, int a2)
{
  char v2; // cl
  __int16 v3; // ax
  _DWORD *v4; // esi
  char *v5; // ebp
  int v6; // edi
  __int16 v7; // dx
  int v8; // ecx
  __int16 v9; // dx
  char v10; // cl
  unsigned __int8 v11; // al
  int result; // eax
  int v13; // eax
  int v14; // ecx
  __int16 v15; // ax
  int v16; // eax
  int v17; // ecx
  __int16 v18; // ax
  int v19; // edx
  int v20; // eax
  __int16 v21; // cx
  char v22; // bl
  int v23; // edx
  int i; // edi
  __int16 v25; // ax
  int v26; // eax
  int v27; // edx
  int v28; // ecx
  int v29; // [esp-4h] [ebp-14h]

  v2 = byte_4B3232;
  v3 = word_4B3738;
  v4 = dword_4EFAC0;
  v5 = (char *)dword_4EFAC0 + 56;
  v29 = a1;
  dword_7BD96C = 0;
  dword_7BD970 = 1;
  v6 = word_4B3738;
  if ( byte_4B3232 == 0 )
    goto LABEL_20;
  if ( (byte_4B3232 & 4) != 0 )
  {
    v2 = 1;
    v3 = 4096;
    byte_4B3232 = 1;
    word_4B3236 = 256;
    word_4B2388 = 0;
    word_4B3738 = 4096;
    goto LABEL_18;
  }
  if ( (byte_4B3232 & 8) != 0 )
  {
    v2 = 2;
    v3 = 0;
    byte_4B3232 = 2;
    word_4B3236 = 256;
    word_4B2388 = 4096;
    word_4B3738 = 0;
    goto LABEL_18;
  }
  if ( byte_4B2279 == 0 )
  {
    if ( (byte_4B3232 & 2) != 0 )
    {
      if ( word_4B2388 <= 0 )
      {
        v3 = 4096;
        v2 = 32;
        word_4B2388 = 0;
        word_4B3738 = 4096;
        byte_4B3232 = 32;
        goto LABEL_18;
      }
      v3 = 4096 - word_4B2388;
      v7 = word_4B2388 - word_4B3236;
      word_4B3738 = 4096 - word_4B2388;
      goto LABEL_17;
    }
    if ( (byte_4B3232 & 1) == 0 )
      goto LABEL_18;
    if ( word_4B2388 < 4096 )
    {
      v3 = 4096 - word_4B2388;
      v7 = word_4B3236 + word_4B2388;
      word_4B3738 = 4096 - word_4B2388;
LABEL_17:
      word_4B2388 = v7;
      goto LABEL_18;
    }
    word_4B2388 = 4096;
    v3 = 0;
    word_4B3738 = 0;
    if ( (byte_4B3232 & 0x40) != 0 )
    {
      v2 = byte_4B3232 & 0xFC | 2;
      byte_4B3232 = v2;
    }
    else
    {
      v2 = 16;
      byte_4B3232 = 16;
    }
  }
LABEL_18:
  if ( (v2 & 0x30) != 0 )
  {
    v3 = 0;
    byte_4B3232 = 0;
    word_4B3738 = 0;
  }
LABEL_20:
  if ( v3 != v6 )
  {
    dword_4B1C48 = 1;
    flt_467740 = (double)(4096 - v3) * 0.00024414062;
    word_467744 = (4096 - v3) / 16;
  }
  word_4B2158 = 0;
  word_4B3230 = 0;
  byte_4B3448 = 0;
  word_4B316A = 0;
  sub_40D440(0, 0, 0);
  v4[11] = dword_4B3450;
  v4[12] = dword_4B372C;
  v4[9] = &word_4B2158;
  v4[10] = &word_4B3230;
  v4[6] = dword_4B3664[5 * (__int16)dword_4B2368];
  v4[7] = dword_4B36A4[5 * (__int16)dword_4B2368];
  v8 = dword_4B36E4[5 * (__int16)dword_4B2368];
  v4[13] = a2;
  v4[8] = v8;
  BYTE1(dword_4B3940) &= 0xFCu;
  if ( *((_BYTE *)dword_52FD00 + 65654) != 0 )
  {
    *((_WORD *)v5 + 2) = -5 - ((unsigned __int16)dword_4EFB4C >> 1);
    *((_WORD *)v5 + 3) = -5 - (HIWORD(dword_4EFB4C) >> 1);
    v9 = dword_4EFB4C + 10;
    v5[14] = 0;
    *((_WORD *)v5 + 4) = v9;
    v5[13] = 0;
    v5[12] = 0;
    *(_DWORD *)v5 = 0;
    v10 = *((_BYTE *)dword_52FD00 + 65654);
    if ( v10 <= 0 )
    {
      *((_WORD *)v5 + 5) = -(__int16)(v10 * HIWORD(dword_4EFB4C) / HIWORD(dword_4EFB58));
      dword_4EFB8C = dword_4B1A64(v5, dword_4EFB8C);
      *((_WORD *)v5 + 3) = (HIWORD(dword_4EFB4C) >> 1) - *((_WORD *)v5 + 5) + 5;
      dword_4EFB8C = dword_4B1A64(v5, dword_4EFB8C);
      *((_BYTE *)dword_52FD00 + 65654) += 2;
    }
    else
    {
      *((_WORD *)v5 + 5) = *((unsigned __int8 *)dword_52FD00 + 65654) * HIWORD(dword_4EFB4C) / HIWORD(dword_4EFB58);
      dword_4EFB8C = dword_4B1A64(v5, dword_4EFB8C);
      *((_WORD *)v5 + 3) = (HIWORD(dword_4EFB4C) >> 1) - *((_WORD *)v5 + 5) + 5;
      dword_4EFB8C = dword_4B1A64(v5, dword_4EFB8C);
      v11 = *((_BYTE *)dword_52FD00 + 65654);
      if ( v11 < 0x1Eu )
        *((_BYTE *)dword_52FD00 + 65654) = v11 + 2;
    }
  }
  if ( byte_4B3232 != 0 && (byte_4B3232 & 0x40) != 0 )
  {
    if ( word_4B3738 != 4096 )
      dword_4EFB8C = dword_4B1A5C(dword_4EFB8C, 4096 - word_4B3738);
    dword_4B1C48 = 0;
    word_467744 = 255;
    flt_467740 = 1.0;
  }
  if ( (_BYTE)dword_4B226C != 0 )
    dword_4EFB8C = dword_4B1A60(dword_4EFB8C);
  else
    *((_WORD *)v4 + 6) = word_4B3738;
  result = v4[13];
  if ( result != 0 )
  {
    while ( 1 )
    {
      v13 = v4[13];
      if ( (*(_BYTE *)(v13 + 4) & 2) == 0 )
        goto LABEL_76;
      if ( *(_WORD *)(v13 + 44) != 7 )
        break;
      *((_WORD *)v4 + 8) = word_4B3728;
      *((_WORD *)v4 + 9) = word_4B38A0;
      v14 = v4[13];
      *((_WORD *)v4 + 10) = word_4B237C;
      v15 = word_4B3A9C;
      *((_WORD *)v4 + 4) = 0;
      *((_WORD *)v4 + 11) = v15;
      *((_WORD *)v4 + 5) = *(_WORD *)(v14 + 40);
      sub_44C3E0(*(_DWORD *)(v14 + 120), (int)v4, v5);
      result = *(_DWORD *)(v4[13] + 16);
LABEL_77:
      v4[13] = result;
      if ( result == 0 )
        goto LABEL_80;
    }
    *((_WORD *)v4 + 5) = *(_WORD *)(v13 + 40);
    v16 = v4[13];
    if ( (*(_BYTE *)(v16 + 20) & 0x10) != 0 )
    {
      v17 = v4[13];
      v18 = *(__int16 *)(v16 + 40) >> 1;
      *((_WORD *)v4 + 5) = v18;
      *((_WORD *)v4 + 5) = v18 + *(_WORD *)(*(_DWORD *)(v17 + 112) + 40);
    }
    v19 = dword_4B324C;
    if ( dword_4B324C != 0 && *(_WORD *)(v4[13] + 38) != *(_WORD *)(dword_4B324C + 38) || dword_4B2474 != 0 )
    {
      *((_WORD *)v4 + 5) = *(__int16 *)(v4[13] + 40) >> 1;
      v19 = dword_4B324C;
    }
    v20 = v4[13];
    if ( *(_WORD *)(v20 + 58) != 0 )
    {
      if ( word_4B316A >= 40 )
      {
        while ( 1 )
          ;
      }
      if ( (v20 != v19 || (dword_4B3940 & 0x20) == 0) && *(_DWORD *)(v20 + 120) != 0 )
      {
        v21 = word_4B316A + 1;
        dword_4B21A0[word_4B316A] = v20;
        word_4B316A = v21;
      }
    }
    v22 = 0;
    dword_7C961C(v29);
    for ( i = *(_DWORD *)(v4[13] + 120); i != 0; i = *(_DWORD *)i )
    {
      v25 = *(_WORD *)(i + 8);
      if ( (v25 & 6) != 0 )
      {
        if ( *(_BYTE *)(i + 180) != 0 )
        {
          if ( (*(_BYTE *)(v4[13] + 8) & 0x40) != 0 )
            *(_DWORD *)(i + 12) = 0x40000000;
          else
            *(_DWORD *)(i + 12) = 0;
          word_4B3B74 = 0;
          dword_4B3224 = (int)&unk_4B2A60;
          dword_7BD970 = 1;
          if ( *(_WORD *)(v4[13] + 44) == 1 )
            dword_7BD970 = 2;
          sub_408910((const void *)(i + 148));
          v22 = dword_7C9618(i);
        }
        else
        {
          sub_411B60(i);
        }
      }
      else if ( (v25 & 0x11) != 0 && v25 >= 0 )
      {
        sub_44C2E0(v23, i, (int)v4, (int)v5);
      }
      else if ( (v25 & 0x20) != 0 )
      {
        dword_4E5E80[*(__int16 *)(i + 20)] = *(unsigned __int16 *)(i + 18);
      }
      else if ( (v25 & 0x40) != 0 )
      {
        v26 = v4[13];
        LOWORD(v23) = *(_WORD *)(v26 + 76)
                    | *(_WORD *)(v26 + 72)
                    | *(_WORD *)(v26 + 74)
                    | *(_WORD *)(v26 + 84)
                    | *(_WORD *)(v26 + 80)
                    | *(_WORD *)(v26 + 82);
        if ( (_WORD)v23 != 0 )
        {
          v27 = *(_DWORD *)(v26 + 24);
          BYTE1(v27) |= 0x10u;
          *(_DWORD *)(v26 + 24) = v27;
          if ( (*(_DWORD *)(v4[13] + 12) & 0x100) != 0 )
            BYTE1(dword_4B3940) |= 2u;
          sub_44C1E0(i, (int)v4, v5);
          if ( (*(_DWORD *)(v4[13] + 12) & 0x10000000) != 0 )
          {
            v23 = dword_4B38CC;
            dword_4B3928 = dword_4B38C0;
            dword_4B3954 = dword_4B38C0;
            dword_4B3974 = dword_4B38C0;
            dword_4B3964 = dword_4B38CC;
            dword_4B392C = dword_4B38C4;
            dword_4B3958 = dword_4B38C4;
            dword_4B3978 = dword_4B38C4;
            dword_4B3930 = dword_4B38C8;
            dword_4B395C = dword_4B38C8;
            dword_4B397C = dword_4B38C8;
            dword_4B3968 = dword_4B38D0;
            dword_4B396C = dword_4B38D4;
          }
        }
      }
    }
    if ( v22 != 0 )
    {
      v28 = v4[13];
      *((_BYTE *)v4 + 6) = 1;
      *((_BYTE *)v4 + 5) = 1;
      *((_BYTE *)v4 + 4) = 0;
      sub_44CD00(v28, *(_DWORD *)(v28 + 120), v4 + 1, v5);
    }
    v13 = v4[13];
LABEL_76:
    result = *(_DWORD *)(v13 + 16);
    goto LABEL_77;
  }
LABEL_80:
  dword_7BD96C = 0;
  return result;
}

// 0x44cd00  sub_44CD00
char __cdecl sub_44CD00(int a1, int a2, _WORD *a3)
{
  int v3; // ecx
  int v4; // eax
  int i; // esi

  v3 = a1;
  a3[6] = word_4B3728;
  LOBYTE(v4) = *(_BYTE *)(a1 + 60);
  if ( (v4 & 2) != 0 )
  {
    a3[7] = *(_WORD *)(a1 + 62);
  }
  else
  {
    LOBYTE(v4) = word_4B38A0;
    a3[7] = word_4B38A0;
  }
  if ( (*(_DWORD *)(a1 + 12) & 0x2000000) != 0 )
  {
    a3[2] = *(_WORD *)(a1 + 40);
    LOBYTE(v4) = word_4B38A0;
    if ( a3[7] > (unsigned __int16)word_4B38A0 )
      a3[7] = word_4B38A0;
    if ( *(_WORD *)(a1 + 44) == 9 || (*(_DWORD *)(a1 + 12) & 0x20000000) != 0 )
    {
      LOBYTE(v4) = -1;
      byte_4B3448 = 1;
      a3[6] = 0x3FFF;
      a3[7] = 0x3FFF;
    }
  }
  for ( i = a2; i != 0; i = *(_DWORD *)i )
  {
    if ( (*(_BYTE *)(i + 8) & 6) != 0 && *(_BYTE *)(i + 180) != 0 )
    {
      if ( (*(_BYTE *)(v3 + 8) & 0x40) != 0 )
        *(_DWORD *)(i + 12) = 0x40000000;
      else
        *(_DWORD *)(i + 12) = 0;
      if ( (*(_DWORD *)(v3 + 12) & 0x2000000) != 0 )
      {
        word_4B3B74 = 0;
        dword_4B3224 = (int)&unk_4B2A60;
      }
      v4 = sub_411BA0(i, dword_4EFB8C, (int)a3);
      v3 = a1;
      dword_4EFB8C = v4;
    }
  }
  return v4;
}

// 0x44cdf0  sub_44CDF0
int __cdecl sub_44CDF0(__int16 a1, unsigned __int16 a2, int a3)
{
  _DWORD *i; // eax
  int v4; // eax
  int v5; // edx

  for ( i = *(_DWORD **)(a3 + 116); i != NULL; i = (_DWORD *)*i )
  {
    if ( *(_WORD *)(i[2] + 78) == 8 )
      break;
  }
  v4 = *(_DWORD *)(i[2] + 84);
  *(_DWORD *)(a3 + 364) = v4;
  v5 = *(_DWORD *)(v4 + 16);
  word_4B39E0[a1] = *(_WORD *)(16 * a2 + v5 + 10);
  return a1;
}

// 0x44ce40  sub_44CE40
_DWORD *sub_44CE40()
{
  unsigned int v0; // eax
  _DWORD *i; // ecx
  int v2; // ecx
  _DWORD *j; // ecx
  int v4; // ecx
  _DWORD *k; // ecx
  int v6; // ecx
  _DWORD *m; // ecx
  int v8; // ecx
  _DWORD *n; // ecx
  int v10; // ecx
  _DWORD *ii; // ecx
  int v12; // ecx
  _DWORD *jj; // ecx
  int v14; // ecx
  _DWORD *kk; // ecx
  int v16; // ecx
  _DWORD *mm; // ecx
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // esi
  unsigned int v21; // eax
  int v22; // esi
  unsigned int v23; // eax
  int v24; // esi
  _DWORD *result; // eax
  int v26; // esi

  v0 = sub_448EB0(68, NULL, NULL);
  if ( v0 != 0 )
  {
    for ( i = *(_DWORD **)(v0 + 116); i != NULL; i = (_DWORD *)*i )
    {
      if ( *(_WORD *)(i[2] + 78) == 8 )
        break;
    }
    v2 = *(_DWORD *)(i[2] + 84);
    *(_DWORD *)(v0 + 364) = v2;
    word_4B39E0[0] = *(_WORD *)(*(_DWORD *)(v2 + 16) + 10);
    for ( j = *(_DWORD **)(v0 + 116); j != NULL; j = (_DWORD *)*j )
    {
      if ( *(_WORD *)(j[2] + 78) == 8 )
        break;
    }
    v4 = *(_DWORD *)(j[2] + 84);
    *(_DWORD *)(v0 + 364) = v4;
    word_4B39EA = *(_WORD *)(*(_DWORD *)(v4 + 16) + 1642);
    for ( k = *(_DWORD **)(v0 + 116); k != NULL; k = (_DWORD *)*k )
    {
      if ( *(_WORD *)(k[2] + 78) == 8 )
        break;
    }
    v6 = *(_DWORD *)(k[2] + 84);
    *(_DWORD *)(v0 + 364) = v6;
    word_4B39EC = *(_WORD *)(*(_DWORD *)(v6 + 16) + 1658);
    for ( m = *(_DWORD **)(v0 + 116); m != NULL; m = (_DWORD *)*m )
    {
      if ( *(_WORD *)(m[2] + 78) == 8 )
        break;
    }
    v8 = *(_DWORD *)(m[2] + 84);
    *(_DWORD *)(v0 + 364) = v8;
    word_4B39EE = *(_WORD *)(*(_DWORD *)(v8 + 16) + 1674);
    for ( n = *(_DWORD **)(v0 + 116); n != NULL; n = (_DWORD *)*n )
    {
      if ( *(_WORD *)(n[2] + 78) == 8 )
        break;
    }
    v10 = *(_DWORD *)(n[2] + 84);
    *(_DWORD *)(v0 + 364) = v10;
    word_4B39F0 = *(_WORD *)(*(_DWORD *)(v10 + 16) + 1690);
    for ( ii = *(_DWORD **)(v0 + 116); ii != NULL; ii = (_DWORD *)*ii )
    {
      if ( *(_WORD *)(ii[2] + 78) == 8 )
        break;
    }
    v12 = *(_DWORD *)(ii[2] + 84);
    *(_DWORD *)(v0 + 364) = v12;
    word_4B39F2 = *(_WORD *)(*(_DWORD *)(v12 + 16) + 1722);
    for ( jj = *(_DWORD **)(v0 + 116); jj != NULL; jj = (_DWORD *)*jj )
    {
      if ( *(_WORD *)(jj[2] + 78) == 8 )
        break;
    }
    v14 = *(_DWORD *)(jj[2] + 84);
    *(_DWORD *)(v0 + 364) = v14;
    word_4B39F4 = *(_WORD *)(*(_DWORD *)(v14 + 16) + 1706);
    for ( kk = *(_DWORD **)(v0 + 116); kk != NULL; kk = (_DWORD *)*kk )
    {
      if ( *(_WORD *)(kk[2] + 78) == 8 )
        break;
    }
    v16 = *(_DWORD *)(kk[2] + 84);
    *(_DWORD *)(v0 + 364) = v16;
    word_4B39F6 = *(_WORD *)(*(_DWORD *)(v16 + 16) + 1738);
    for ( mm = *(_DWORD **)(v0 + 116); mm != NULL; mm = (_DWORD *)*mm )
    {
      if ( *(_WORD *)(mm[2] + 78) == 8 )
        break;
    }
    v18 = *(_DWORD *)(mm[2] + 84);
    *(_DWORD *)(v0 + 364) = v18;
    word_4B39F8 = *(_WORD *)(*(_DWORD *)(v18 + 16) + 1754);
    sub_447BC0(v0);
  }
  else
  {
    word_4B39E0[0] = 0;
  }
  v19 = sub_448EB0(771, NULL, NULL);
  v20 = v19;
  if ( v19 != 0 )
  {
    sub_44CDF0(1, 0, v19);
    sub_447BC0(v20);
  }
  else
  {
    word_4B39E2 = 0;
  }
  v21 = sub_448EB0(770, NULL, NULL);
  v22 = v21;
  if ( v21 != 0 )
  {
    sub_44CDF0(2, 0, v21);
    sub_447BC0(v22);
  }
  else
  {
    word_4B39E4 = 0;
  }
  v23 = sub_448EB0(786, NULL, NULL);
  v24 = v23;
  if ( v23 != 0 )
  {
    sub_44CDF0(3, 0, v23);
    sub_447BC0(v24);
  }
  else
  {
    word_4B39E6 = 0;
  }
  result = (_DWORD *)sub_448EB0(769, NULL, NULL);
  v26 = (int)result;
  if ( result != NULL )
  {
    sub_44CDF0(4, 0, (int)result);
    return sub_447BC0(v26);
  }
  else
  {
    word_4B39E8 = 0;
  }
  return result;
}

// 0x44d110  sub_44D110
void __cdecl sub_44D110(_BYTE *a1)
{
  int v1; // eax
  __int16 v3; // di
  __int16 v4; // bx
  __int16 v5; // cx
  __int16 v6; // dx
  __int16 v7; // bx
  __int16 v8; // bp
  char v9; // [esp+0h] [ebp-8h]
  int v10; // [esp+4h] [ebp-4h]
  char v11; // [esp+Ch] [ebp+4h]

  v10 = 0;
  if ( word_4B39A8 > 0 )
  {
    v1 = dword_4EFB8C;
    do
    {
      v3 = *((_WORD *)a1 + 2);
      v4 = (char)a1[6];
      v11 = *(_BYTE *)(*(_DWORD *)a1 + 8);
      v9 = *(_BYTE *)(*(_DWORD *)a1 + 9);
      v5 = *(_WORD *)(*(_DWORD *)a1 + 12) - 1;
      v6 = *(_WORD *)(*(_DWORD *)a1 + 14) - 1;
      *(_WORD *)(v1 + 2) = v4;
      *(_WORD *)(v1 + 10) = v4;
      v7 = v6 + v4;
      *(_WORD *)(v1 + 18) = v7;
      *(_WORD *)(v1 + 26) = v7;
      v8 = v5 + v3;
      *(_BYTE *)(v1 + 4) = v5;
      LOBYTE(v5) = v11 + v5;
      *(_BYTE *)(v1 + 5) = v6;
      *(_BYTE *)(v1 + 13) = v9;
      *(_BYTE *)(v1 + 20) = v11;
      LOBYTE(v6) = v9 + v6;
      *(_WORD *)v1 = v3;
      *(_WORD *)(v1 + 8) = v8;
      *(_WORD *)(v1 + 16) = v3;
      *(_WORD *)(v1 + 24) = v8;
      *(_BYTE *)(v1 + 12) = v5;
      *(_BYTE *)(v1 + 21) = v6;
      *(_BYTE *)(v1 + 28) = v5;
      *(_BYTE *)(v1 + 29) = v6;
      *(_WORD *)(v1 + 14) = *(_WORD *)(*(_DWORD *)a1 + 6);
      *(_WORD *)(v1 + 6) = *(_WORD *)(*(_DWORD *)a1 + 10);
      switch ( a1[7] )
      {
        case 0:
          *(_DWORD *)(v1 + 32) = -1;
          break;
        case 1:
          *(_DWORD *)(v1 + 32) = -256;
          break;
        case 2:
          *(_DWORD *)(v1 + 32) = -16711936;
          break;
        case 3:
          *(_DWORD *)(v1 + 32) = -16776961;
          break;
        case 4:
          *(_DWORD *)(v1 + 32) = -65536;
          break;
        default:
          *(_DWORD *)(v1 + 32) = 0;
          break;
      }
      dword_7C6250(v1);
      v1 = dword_4EFB8C;
      if ( dword_4EFB8C > dword_4B372C )
      {
        v1 = dword_4B3450;
        dword_4EFB8C = dword_4B3450;
      }
      a1 += 8;
      ++v10;
    }
    while ( v10 < word_4B39A8 );
  }
}

// 0x44d270  sub_44D270
int __cdecl sub_44D270(int a1, unsigned __int8 *a2, int a3)
{
  int v3; // ebx
  unsigned __int8 v4; // cl
  int v5; // ebp
  char v6; // al
  double v7; // st7
  __int16 j; // ax
  unsigned __int8 *v9; // esi
  unsigned __int8 v10; // al
  unsigned __int8 v11; // al
  unsigned __int8 *v12; // esi
  int v13; // eax
  unsigned __int8 *v14; // ebp
  __int16 v15; // di
  int v16; // esi
  unsigned __int8 v17; // dl
  int v18; // ecx
  int v19; // eax
  unsigned __int8 *v20; // edx
  char v21; // di
  int v22; // esi
  unsigned __int8 v23; // cl
  int v24; // ecx
  int v25; // eax
  unsigned __int8 *v26; // ebp
  unsigned __int8 v27; // dl
  int v28; // ecx
  int v29; // eax
  unsigned __int8 *v30; // edx
  char v31; // di
  int v32; // esi
  unsigned __int8 v33; // cl
  int v34; // ecx
  unsigned __int8 v35; // al
  int v36; // ecx
  int v37; // eax
  unsigned __int8 v38; // al
  _BYTE *v39; // esi
  int v40; // eax
  _BYTE *v41; // edx
  int v42; // edi
  int v43; // esi
  char v44; // cl
  int v45; // ecx
  unsigned __int8 *v46; // edx
  int v47; // eax
  unsigned __int8 v48; // al
  unsigned __int8 *v49; // esi
  unsigned __int8 v50; // al
  unsigned __int8 *v51; // esi
  unsigned int v52; // ecx
  unsigned __int16 v53; // ax
  unsigned int v54; // esi
  int k; // edi
  double v56; // st7
  unsigned __int8 v57; // al
  unsigned __int8 *v58; // esi
  unsigned __int8 v59; // al
  int v60; // eax
  int v61; // esi
  double v62; // st7
  char v63; // al
  int v64; // ecx
  int v65; // esi
  double v66; // st7
  char v67; // al
  unsigned __int8 v68; // al
  unsigned int v69; // ecx
  int v70; // esi
  double v71; // st7
  char v72; // al
  __int16 i; // ax
  __int16 m; // ax
  char v76; // [esp+13h] [ebp-49h]
  __int16 v77; // [esp+14h] [ebp-48h]
  int v78; // [esp+18h] [ebp-44h]
  char v79; // [esp+1Ch] [ebp-40h]
  unsigned __int8 v80; // [esp+20h] [ebp-3Ch]
  unsigned __int8 v81; // [esp+20h] [ebp-3Ch]
  unsigned __int8 v82; // [esp+20h] [ebp-3Ch]
  unsigned __int8 v83; // [esp+20h] [ebp-3Ch]
  char v84; // [esp+28h] [ebp-34h]
  __int16 v85; // [esp+2Ch] [ebp-30h]
  char v86; // [esp+30h] [ebp-2Ch]
  int v87; // [esp+38h] [ebp-24h]
  char v88; // [esp+3Ch] [ebp-20h]
  char v89[20]; // [esp+48h] [ebp-14h] BYREF
  _BYTE *v90; // [esp+64h] [ebp+8h]

  v3 = 0;
  if ( a1 != 0 && (*(_WORD *)(a1 + 382) & 0x7FFF) == 0x75 && dword_9CA828 == 1 && a2[23] == 101 )
    a2[23] = 1;
  if ( word_4B39E0[0] == 0 )
    sub_44CE40();
  v4 = *a2;
  v5 = -200;
  v84 = 0;
  v79 = 0;
  v77 = -1;
  v76 = 0;
  v78 = 0;
  v85 = -200;
  v87 = -200;
  v86 = -60;
  v88 = -60;
  v80 = *a2;
  if ( *a2 == 0 )
  {
LABEL_220:
    if ( v76 != 0 )
    {
      for ( i = v77; i < word_4B39A8; ++i )
        *(_WORD *)(dword_4B373C + 8 * i + 4) -= (__int16)v3 >> 1;
    }
    return v78;
  }
  while ( 1 )
  {
    v6 = byte_4AE3A8[v80];
    if ( v6 != 0 )
    {
      if ( v77 < 0 )
        v77 = word_4B39A8;
      v79 = v84;
      switch ( v6 )
      {
        case 'l':
          v79 = 9;
          break;
        case 'k':
          v79 = 10;
          break;
        case 'h':
          v79 = 6;
          break;
        case 'j':
          v79 = 8;
          break;
        case 'i':
          v79 = 7;
          break;
        case 'g':
          v79 = 5;
          break;
        case 'm':
          v79 = 11;
          break;
        case 'n':
          v79 = 12;
          break;
        default:
          break;
      }
      *(_DWORD *)dword_4B2170 = 16 * (unsigned __int8)byte_4AE3A8[v80] + *(_DWORD *)(a3 + 32) - 16;
      *(_WORD *)(dword_4B2170 + 4) = v5;
      *(_BYTE *)(dword_4B2170 + 6) = v88;
      *(_BYTE *)(dword_4B2170 + 7) = v79;
      ++word_4B39A8;
      dword_4B2170 += 8;
      v7 = (double)(unsigned __int8)byte_4AE4A8[v80] * *(float *)&dword_4EFB88;
      v3 = (__int64)((double)(__int16)v3 + v7);
      v5 = (__int64)((double)v87 + v7);
      goto LABEL_218;
    }
    switch ( v4 )
    {
      case 0xAu:
        if ( v76 != 0 )
        {
          for ( j = v77; j < word_4B39A8; ++j )
            *(_WORD *)(dword_4B373C + 8 * j + 4) -= (__int16)v3 >> 1;
        }
        v5 = v85;
        v3 = 0;
        v76 = 0;
        v77 = -1;
        v87 = v85;
        v88 += 13;
        goto LABEL_219;
      case 0x20u:
        goto LABEL_217;
      case 9u:
        v3 += 24;
        v5 += 24;
        goto LABEL_218;
      default:
        break;
    }
    if ( v4 != 62 )
      goto LABEL_219;
    v9 = a2 + 1;
    a2 = v9;
    v10 = *v9;
    if ( *v9 == 67 )
    {
      v11 = v9[1];
      v12 = v9 + 2;
      a2 = v12;
      if ( v11 != 76 )
      {
        if ( v11 == 88 )
        {
          if ( *v12 == 45 )
          {
            v13 = -1;
            a2 = v12 + 1;
          }
          else
          {
            v13 = 1;
          }
          v14 = a2;
          v15 = 0;
          v16 = 0;
          if ( (*a2 & 0xF0) == 0x30 )
          {
            do
              v17 = a2[++v16];
            while ( (v17 & 0xF0) == 0x30 );
          }
          v18 = v16 - 1;
          if ( v16 - 1 >= 0 )
          {
            while ( 1 )
            {
              v15 += v13 * (v14[v18] & 0xF);
              v13 *= 10;
              if ( --v18 < 0 )
                break;
              v14 = a2;
            }
          }
        }
        else
        {
          if ( v11 == 89 )
          {
            if ( *v12 == 45 )
            {
              v19 = -1;
              a2 = v12 + 1;
            }
            else
            {
              v19 = 1;
            }
            v20 = a2;
            v21 = 0;
            v22 = 0;
            if ( (*a2 & 0xF0) == 0x30 )
            {
              do
                v23 = a2[++v22];
              while ( (v23 & 0xF0) == 0x30 );
            }
            v24 = v22 - 1;
            if ( v22 - 1 >= 0 )
            {
              do
              {
                v21 += v19 * (a2[v24] & 0xF);
                v19 *= 10;
                --v24;
              }
              while ( v24 >= 0 );
              v20 = a2;
            }
            v86 = v21;
            a2 = &v20[v22];
            v88 = v21;
            goto LABEL_219;
          }
          if ( v11 != 67 )
          {
            if ( v11 == 80 )
            {
              if ( *v12 == 45 )
              {
                v29 = -1;
                a2 = v12 + 1;
              }
              else
              {
                v29 = 1;
              }
              v30 = a2;
              v31 = 0;
              v32 = 0;
              if ( (*a2 & 0xF0) == 0x30 )
              {
                do
                  v33 = a2[++v32];
                while ( (v33 & 0xF0) == 0x30 );
              }
              v34 = v32 - 1;
              if ( v32 - 1 >= 0 )
              {
                do
                {
                  v31 += v29 * (a2[v34] & 0xF);
                  v29 *= 10;
                  --v34;
                }
                while ( v34 >= 0 );
                v30 = a2;
              }
              v84 = v31;
              a2 = &v30[v32];
            }
            goto LABEL_219;
          }
          v76 = 1;
          if ( *v12 == 45 )
          {
            v25 = -1;
            a2 = v12 + 1;
          }
          else
          {
            v25 = 1;
          }
          v26 = a2;
          v15 = 0;
          v16 = 0;
          if ( (*a2 & 0xF0) == 0x30 )
          {
            do
              v27 = a2[++v16];
            while ( (v27 & 0xF0) == 0x30 );
          }
          v28 = v16 - 1;
          if ( v16 - 1 >= 0 )
          {
            while ( 1 )
            {
              v15 += v25 * (v26[v28] & 0xF);
              v25 *= 10;
              if ( --v28 < 0 )
                break;
              v26 = a2;
            }
          }
        }
        v85 = v15;
        a2 += v16;
        v5 = v15;
        goto LABEL_218;
      }
      v78 = 0;
      v5 = v85;
      v87 = v85;
      v88 = v86;
      *(_DWORD *)(a1 + 120) = ClearList((_DWORD *)(a1 + 120));
      goto LABEL_219;
    }
    if ( v10 == 80 )
    {
      v35 = v9[1];
      a2 = v9 + 2;
      if ( (v35 & 8) != 0 )
      {
        v36 = v78;
        LOBYTE(v36) = v78 | 0x80;
        v78 = v36;
      }
      if ( (v35 & 2) != 0 )
        v78 |= 0x20u;
      if ( (v35 & 1) != 0 )
        v78 |= 0x10u;
      if ( (v35 & 4) != 0 )
      {
        v37 = v78;
        LOBYTE(v37) = v78 | 0x40;
        v78 = v37;
      }
      goto LABEL_219;
    }
    if ( v10 == 87 )
      break;
    switch ( v10 )
    {
      case 'I':
        v48 = v9[1];
        v49 = v9 + 2;
        a2 = v49;
        if ( v48 == 68 )
        {
          *(_WORD *)(a1 + 28) = *v49;
          a2 = v49 + 1;
        }
        break;
      case 'B':
        v50 = v9[1];
        v51 = v9 + 2;
        v52 = *v51;
        a2 = v51 + 1;
        if ( v50 == 71 )
        {
          if ( v52 == 7 )
            v53 = *((unsigned __int8 *)dword_52FD00 + 65607) + (*((unsigned __int8 *)dword_52FD00 + 65852) << 8);
          else
            v53 = *((unsigned __int8 *)dword_52FD00 + v52 + 65600);
        }
        else if ( *((_DWORD *)dword_52FD00 + 0x4000) != 0 || v52 < 0x2B || v52 > 0x35 )
        {
          v53 = (unsigned __int8)byte_4B2260[v52];
        }
        else
        {
          v53 = (unsigned __int8)byte_4B2260[v52] + ((unsigned __int8)byte_4B2261[v52] << 8);
        }
        v54 = sub_449D00(v53);
        for ( k = 8; k > 1; --k )
        {
          if ( (v54 & 0xF0000000) != 0 )
            break;
          v54 *= 16;
        }
        if ( k > 0 )
        {
          do
          {
            if ( v77 < 0 )
              v77 = word_4B39A8;
            *(_DWORD *)dword_4B2170 = 16 * (unsigned __int8)byte_4AE3D8[v54 >> 28] + *(_DWORD *)(a3 + 32) - 16;
            *(_WORD *)(dword_4B2170 + 4) = v5;
            *(_BYTE *)(dword_4B2170 + 6) = v88;
            *(_BYTE *)(dword_4B2170 + 7) = v84;
            v56 = (double)(unsigned __int8)byte_4AE4D8[v54 >> 28] * *(float *)&dword_4EFB88;
            ++word_4B39A8;
            dword_4B2170 += 8;
            v3 = (__int64)((double)(__int16)v3 + v56);
            v5 = (__int64)((double)v87 + v56);
            v54 *= 16;
            --k;
            v87 = v5;
          }
          while ( k != 0 );
        }
        break;
      case 'D':
        v57 = v9[1];
        v79 = v84;
        v58 = v9 + 2;
        a2 = v58;
        switch ( v57 )
        {
          case 0x4Au:
            v59 = *v58;
            a2 = v58 + 1;
            if ( *v58 != 0 )
            {
              switch ( v59 )
              {
                case 1u:
                  strcpy(v89, (const char *)GetKeyName(HIBYTE(dword_9CA86C)));
                  if ( BYTE1(dword_9CA85C) == 0 || dword_9CA858 == 0 )
                    goto LABEL_159;
                  strcat(v89, asc_4AE5B4);
                  strcat(v89, aButton);
                  v60 = BYTE1(dword_9CA85C);
                  break;
                case 2u:
                  strcpy(v89, (const char *)GetKeyName(BYTE2(dword_9CA86C)));
                  if ( (_BYTE)dword_9CA85C == 0 || dword_9CA858 == 0 )
                    goto LABEL_159;
                  strcat(v89, asc_4AE5B4);
                  strcat(v89, aButton);
                  v60 = (unsigned __int8)dword_9CA85C;
                  break;
                case 3u:
                  strcpy(v89, (const char *)GetKeyName((unsigned __int8)dword_9CA870));
                  if ( BYTE2(dword_9CA85C) == 0 || dword_9CA858 == 0 )
                    goto LABEL_159;
                  strcat(v89, asc_4AE5B4);
                  strcat(v89, aButton);
                  v60 = BYTE2(dword_9CA85C);
                  break;
                case 4u:
                  strcpy(v89, (const char *)GetKeyName((unsigned __int8)dword_9CA86C));
                  if ( (_BYTE)dword_9CA860 == 0 || dword_9CA858 == 0 )
                    goto LABEL_159;
                  strcat(v89, asc_4AE5B4);
                  strcat(v89, aButton);
                  v60 = (unsigned __int8)dword_9CA860;
                  break;
                case 5u:
                  strcpy(v89, (const char *)GetKeyName((unsigned __int8)byte_9CA86B));
                  if ( BYTE2(dword_9CA860) == 0 || dword_9CA858 == 0 )
                    goto LABEL_159;
                  strcat(v89, asc_4AE5B4);
                  strcat(v89, aButton);
                  v60 = BYTE2(dword_9CA860);
                  break;
                case 6u:
                  strcpy(v89, (const char *)GetKeyName(BYTE1(dword_9CA86C)));
                  if ( BYTE1(dword_9CA860) == 0 || dword_9CA858 == 0 )
                    goto LABEL_159;
                  strcat(v89, asc_4AE5B4);
                  strcat(v89, aButton);
                  v60 = BYTE1(dword_9CA860);
                  break;
                case 7u:
                  strcpy(v89, (const char *)GetKeyName((unsigned __int8)byte_9CA86A));
                  if ( HIBYTE(dword_9CA860) == 0 || dword_9CA858 == 0 )
                    goto LABEL_159;
                  strcat(v89, asc_4AE5B4);
                  strcat(v89, aButton);
                  v60 = HIBYTE(dword_9CA860);
                  break;
                default:
                  goto LABEL_159;
              }
LABEL_158:
              strcat(v89, (const char *)GetKeyName(v60 + 1));
            }
            else
            {
              strcpy(v89, (const char *)GetKeyName(BYTE1(dword_9CA870)));
              if ( HIBYTE(dword_9CA85C) != 0 && dword_9CA858 != 0 )
              {
                strcat(v89, asc_4AE5B4);
                strcat(v89, aButton);
                v60 = HIBYTE(dword_9CA85C);
                goto LABEL_158;
              }
            }
LABEL_159:
            v61 = 0;
            v81 = v89[0];
            if ( v89[0] != 0 )
            {
              do
              {
                if ( v61 >= 20 )
                  break;
                if ( byte_4AE3A8[v81] != 0 )
                {
                  if ( v77 < 0 )
                    v77 = word_4B39A8;
                  *(_DWORD *)dword_4B2170 = 16 * (unsigned __int8)byte_4AE3A8[v81] + *(_DWORD *)(a3 + 32) - 16;
                  *(_WORD *)(dword_4B2170 + 4) = v5;
                  *(_BYTE *)(dword_4B2170 + 6) = v88;
                  *(_BYTE *)(dword_4B2170 + 7) = v84;
                  ++word_4B39A8;
                  dword_4B2170 += 8;
                  v62 = (double)(unsigned __int8)byte_4AE4A8[v81] * *(float *)&dword_4EFB88;
                  v3 = (__int64)((double)(__int16)v3 + v62);
                  v5 = (__int64)((double)v87 + v62);
                  v87 = v5;
                }
                v63 = v89[++v61];
                v81 = v63;
              }
              while ( v63 != 0 );
            }
LABEL_217:
            v3 += 6;
            v5 += 6;
LABEL_218:
            v87 = v5;
            goto LABEL_219;
          case 0u:
            v64 = BYTE1(dword_9CA870);
            goto LABEL_183;
          case 1u:
            v64 = HIBYTE(dword_9CA86C);
            goto LABEL_183;
          case 2u:
            v64 = BYTE2(dword_9CA86C);
            goto LABEL_183;
          case 3u:
            v64 = (unsigned __int8)dword_9CA870;
            goto LABEL_183;
          case 4u:
            v64 = (unsigned __int8)dword_9CA86C;
            goto LABEL_183;
          case 5u:
            v64 = (unsigned __int8)byte_9CA86B;
            goto LABEL_183;
          case 6u:
            v64 = BYTE1(dword_9CA86C);
            goto LABEL_183;
          case 7u:
            v64 = (unsigned __int8)byte_9CA86A;
LABEL_183:
            strcpy(v89, (const char *)GetKeyName(v64));
            break;
          default:
            break;
        }
        v65 = 0;
        v82 = v89[0];
        if ( v89[0] != 0 )
        {
          do
          {
            if ( v65 >= 20 )
              break;
            if ( byte_4AE3A8[v82] != 0 )
            {
              if ( v77 < 0 )
                v77 = word_4B39A8;
              *(_DWORD *)dword_4B2170 = 16 * (unsigned __int8)byte_4AE3A8[v82] + *(_DWORD *)(a3 + 32) - 16;
              *(_WORD *)(dword_4B2170 + 4) = v5;
              *(_BYTE *)(dword_4B2170 + 6) = v88;
              *(_BYTE *)(dword_4B2170 + 7) = v84;
              ++word_4B39A8;
              dword_4B2170 += 8;
              v66 = (double)(unsigned __int8)byte_4AE4A8[v82] * *(float *)&dword_4EFB88;
              v3 = (__int64)((double)(__int16)v3 + v66);
              v5 = (__int64)((double)v87 + v66);
              v87 = v5;
            }
            v67 = v89[++v65];
            v82 = v67;
          }
          while ( v67 != 0 );
        }
        goto LABEL_217;
      case 'J':
        a2 = v9 + 1;
        v68 = v9[1];
        switch ( v68 )
        {
          case 0u:
            v69 = HIBYTE(dword_9CA85C);
            goto LABEL_209;
          case 1u:
            v69 = BYTE1(dword_9CA85C);
            goto LABEL_209;
          case 2u:
            v69 = (unsigned __int8)dword_9CA85C;
            goto LABEL_209;
          case 3u:
            v69 = BYTE2(dword_9CA85C);
            goto LABEL_209;
          case 4u:
            v69 = (unsigned __int8)dword_9CA860;
            goto LABEL_209;
          case 5u:
            v69 = BYTE2(dword_9CA860);
            goto LABEL_209;
          case 6u:
            v69 = BYTE1(dword_9CA860);
            goto LABEL_209;
          case 7u:
            v69 = HIBYTE(dword_9CA860);
LABEL_209:
            strcpy(v89, GetButtonName(v69));
            break;
          default:
            break;
        }
        v70 = 0;
        v83 = v89[0];
        if ( v89[0] != 0 )
        {
          do
          {
            if ( v70 >= 20 )
              break;
            if ( byte_4AE3A8[v83] != 0 )
            {
              if ( v77 < 0 )
                v77 = word_4B39A8;
              *(_DWORD *)dword_4B2170 = 16 * (unsigned __int8)byte_4AE3A8[v83] + *(_DWORD *)(a3 + 32) - 16;
              *(_WORD *)(dword_4B2170 + 4) = v5;
              *(_BYTE *)(dword_4B2170 + 6) = v88;
              *(_BYTE *)(dword_4B2170 + 7) = v79;
              ++word_4B39A8;
              dword_4B2170 += 8;
              v71 = (double)(unsigned __int8)byte_4AE4A8[v83] * *(float *)&dword_4EFB88;
              v3 = (__int64)((double)(__int16)v3 + v71);
              v5 = (__int64)((double)v87 + v71);
              v87 = v5;
            }
            v72 = v89[++v70];
            v83 = v72;
          }
          while ( v72 != 0 );
        }
        goto LABEL_217;
      default:
        break;
    }
LABEL_219:
    v4 = *++a2;
    v80 = *a2;
    if ( *a2 == 0 )
      goto LABEL_220;
  }
  v38 = v9[1];
  v39 = v9 + 1;
  v90 = v39;
  if ( v38 == 45 )
  {
    v40 = -1;
    v90 = v39 + 1;
  }
  else
  {
    v40 = 1;
  }
  v41 = v90;
  v42 = 0;
  v43 = 0;
  if ( (*v90 & 0xF0) == 0x30 )
  {
    do
      v44 = v90[++v43];
    while ( (v44 & 0xF0) == 0x30 );
  }
  v45 = v43 - 1;
  if ( v43 - 1 >= 0 )
  {
    do
    {
      v42 += v40 * (v90[v45] & 0xF);
      v40 *= 10;
      --v45;
    }
    while ( v45 >= 0 );
    v41 = v90;
  }
  v46 = &v41[v43];
  a2 = v46;
  if ( v42 == 0 )
  {
    PadSetAct();
    v78 = v47;
    *(_WORD *)(a1 + 380) = 2;
    goto LABEL_219;
  }
  *(_WORD *)(a1 + 34) = 0;
  *(_WORD *)(a1 + 380) = v42;
  if ( v46[1] != 0 )
    *(_DWORD *)(a1 + 384) = v46;
  if ( v76 != 0 )
  {
    for ( m = v77; m < word_4B39A8; ++m )
      *(_WORD *)(dword_4B373C + 8 * m + 4) -= (__int16)v3 >> 1;
  }
  return 0;
}

// 0x44e4b0  sub_44E4B0
unsigned int __cdecl sub_44E4B0(int a1, int a2, unsigned int a3)
{
  unsigned int result; // eax
  unsigned __int8 *v4; // ecx
  int i; // esi
  _DWORD *v6; // ecx
  int v7; // ecx
  char v8; // al
  int v9; // ecx

  result = a3;
  if ( a3 != 0 )
  {
    v4 = *(unsigned __int8 **)(a3 + 384);
    *(_DWORD *)(a3 + 384) = 0;
    i = a3 + 324;
  }
  else
  {
    result = sub_448EB0(68, NULL, NULL);
    if ( result == 0 )
      return result;
    v6 = *(_DWORD **)(result + 116);
    for ( i = result + 324; v6 != NULL; v6 = (_DWORD *)*v6 )
    {
      if ( *(_WORD *)(v6[2] + 78) == 8 )
        break;
    }
    v7 = *(_DWORD *)(v6[2] + 84);
    *(_DWORD *)(result + 364) = v7;
    *(_DWORD *)(result + 356) = *(_DWORD *)(v7 + 16);
    *(_DWORD *)(result + 384) = 0;
    *(_WORD *)(result + 382) = a1 + 0x8000;
    v4 = (unsigned __int8 *)(dword_4B3A04 + *(unsigned __int16 *)(dword_4B3A04 + 2 * a1));
    *(_WORD *)(result + 38) = *(_WORD *)(dword_4B324C + 38);
    if ( (_BYTE)dword_4B226C == 1 || (_BYTE)dword_4B226C == 3 )
      *(_DWORD *)(result + 12) |= 0x40000000u;
  }
  v8 = sub_44D270(result, v4, i);
  v9 = 0;
  if ( v8 < 0 )
    v9 = 8;
  if ( (v8 & 0x20) != 0 )
    v9 |= 2u;
  if ( (v8 & 0x10) != 0 )
    v9 |= 1u;
  if ( (v8 & 0x40) != 0 )
    return v9 | 4;
  return v9;
}

// 0x44e5a0  sub_44E5A0
unsigned int __cdecl sub_44E5A0(_DWORD *a1, int a2, int *a3)
{
  int v3; // edx
  int *v4; // esi
  int v5; // ebp
  _DWORD *v6; // eax
  _DWORD *i; // ecx
  unsigned int result; // eax
  _DWORD *v9; // edi
  unsigned int v10; // eax
  __int16 *v11; // edi
  bool v12; // zf
  int *v13; // ebx
  _DWORD *v14; // ecx
  _DWORD *v15; // edx
  unsigned int v16; // ecx
  int v17; // eax
  int v18; // edi
  int v19; // edi
  int v20; // eax
  int *v21; // eax
  int v22; // eax
  int v23; // eax
  unsigned int v24; // ecx
  int v25; // eax
  int v26; // eax
  _DWORD *v27; // edi
  int v28; // edx
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // edx
  int v33; // ecx
  int v34; // edx
  int v35; // eax
  int v36; // eax
  unsigned __int16 v37; // di
  unsigned int v38; // ecx

  v3 = a2;
  v4 = a3;
  v5 = (int)a1;
  *a3 = **(_DWORD **)(a2 + 36);
  *(_DWORD *)(a2 + 36) += 4;
  a3[15] = HIWORD(*a3);
  a3[16] = **(_DWORD **)(a2 + 36);
  *(_DWORD *)(a2 + 36) += 4;
  a1[26] = 0;
  *((_WORD *)a3 + 54) = 1;
  if ( a1[30] != 0 )
  {
    a3[26] = (int)(a3 + 30);
    v6 = (_DWORD *)a1[30];
    for ( i = a3 + 31; v6 != NULL; ++i )
    {
      *i = v6;
      v6 = (_DWORD *)*v6;
    }
    *((_WORD *)a3 + 54) = 0;
  }
  result = a3[15];
  a3[14] = 0;
  if ( result != 0 )
  {
    while ( 1 )
    {
      v9 = *(_DWORD **)(v3 + 36);
      v10 = *v9;
      v11 = (__int16 *)(v9 + 1);
      v4[12] = v10 & 0xF0000;
      v12 = *((_WORD *)v4 + 54) == 0;
      v4[1] = v10 & 0xF00000;
      v4[2] = HIBYTE(v10);
      if ( v12 )
      {
        v13 = NULL;
        if ( (_WORD)v10 != 0 )
          v13 = *(int **)(v4[26] + 4 * (unsigned __int16)v10);
      }
      else
      {
        v13 = *(int **)(v5 + 120);
        if ( v13 == NULL )
          goto LABEL_17;
        do
        {
          if ( v13[6] == (unsigned __int16)v10 )
            break;
          v13 = (int *)*v13;
        }
        while ( v13 != NULL );
      }
      if ( v13 != NULL )
      {
        a3 = v13 + 3;
        v4[3] = v13[4] + 4;
        v14 = (_DWORD *)v13[4];
        v15 = (_DWORD *)v14[17];
        *v14 = 0;
        a1 = v15;
        goto LABEL_18;
      }
LABEL_17:
      v15 = a1;
LABEL_18:
      v16 = v4[12];
      if ( v16 > 0x10000 )
      {
        if ( v16 > 0x30000 )
        {
          if ( v16 > 0x80000 )
          {
            if ( v16 == 589824 )
            {
              *(_WORD *)(v5 + 72) = *v11;
              *(_WORD *)(v5 + 74) = v11[1];
              *(_WORD *)(v5 + 76) = v11[2];
              *(_WORD *)(v5 + 80) = v11[3];
              *(_WORD *)(v5 + 82) = v11[4];
              v36 = *(__int16 *)(v5 + 32);
              *(_WORD *)(v5 + 84) = v11[5];
              v37 = v11[6];
              *(_WORD *)(v5 + 46) = v37;
              *(_DWORD *)(v5 + 48) = (v37 + v36) * (v37 + v36);
            }
            else if ( v16 == 655360 )
            {
              *((_WORD *)v4 + 18) = 0;
              *((_WORD *)v4 + 19) = 0;
              *((_WORD *)v4 + 20) = 0;
              v26 = a3[1];
              v4[17] = v26;
              if ( v26 != 0 )
              {
                v27 = v4 + 5;
                do
                {
                  gte_ApplyMatrix((__int16 *)(v4[17] + 4), (__int16 *)v4 + 18, v4 + 5);
                  v28 = v4[17];
                  v29 = v4[6];
                  *v27 += *(_DWORD *)(v28 + 24);
                  v30 = v28;
                  v31 = *(_DWORD *)(v28 + 28) + v29;
                  v32 = v4[7];
                  v4[6] = v31;
                  v33 = *(_DWORD *)(v30 + 32);
                  *((_WORD *)v4 + 19) = *((_WORD *)v4 + 12);
                  v4[7] = v33 + v32;
                  LOWORD(v33) = *((_WORD *)v4 + 14);
                  *((_WORD *)v4 + 18) = *(_WORD *)v27;
                  v34 = v4[17];
                  *((_WORD *)v4 + 20) = v33;
                  v35 = *(_DWORD *)(v34 + 72);
                  v4[17] = v35;
                }
                while ( v35 != 0 );
              }
              *(_DWORD *)(v5 + 88) = v4[5];
              *(_DWORD *)(v5 + 92) = v4[6];
              *(_DWORD *)(v5 + 96) = v4[7];
              *(_DWORD *)(v5 + 104) = a3[1];
            }
          }
          else if ( v16 == 0x80000 )
          {
            v24 = v4[1];
            if ( (v24 & 0x100000) != 0 )
            {
              if ( (v4[1] & 0x100000) != 0 )
              {
                if ( (v24 & 0xE00000) == 0xA00000 )
                {
                  a1[2] = 0;
                  a1[1] = 0;
                  *a1 = 0;
                  *(_WORD *)v4[3] = 0;
                  *(_WORD *)(v4[3] + 2) = 0;
                  *(_WORD *)(v4[3] + 8) = 0;
                  *(_WORD *)(v4[3] + 10) = 0;
                  *(_WORD *)(v4[3] + 16) = 0;
                  *((_BYTE *)v13 + 9) |= 0x80u;
                }
                else
                {
                  sub_448C10(v5, (unsigned __int16)v10);
                }
              }
            }
            else
            {
              switch ( (v24 >> 21) & 7 )
              {
                case 0u:
                  sub_448B60(v5, (unsigned __int16)v10);
                  break;
                case 1u:
                  *(_WORD *)(sub_448B60(v5, (unsigned __int16)v10) + 8) = 64;
                  v25 = *(_DWORD *)(v5 + 4);
                  LOBYTE(v25) = v25 | 0x20;
                  *(_DWORD *)(v5 + 4) = v25;
                  break;
                case 2u:
                  *(_WORD *)(sub_448B60(v5, (unsigned __int16)v10) + 8) = 128;
                  break;
                case 3u:
                  *(_WORD *)(sub_448B60(v5, (unsigned __int16)v10) + 8) = 256;
                  break;
                case 4u:
                  *(_WORD *)(sub_448B60(v5, (unsigned __int16)v10) + 8) = 512;
                  break;
                case 5u:
                  *((_WORD *)v13 + 4) &= ~0x8000u;
                  break;
                default:
                  break;
              }
            }
          }
          else if ( v16 == 393216 )
          {
            v15[9] = *(_DWORD *)v11;
          }
        }
        else if ( v16 == 196608 )
        {
          v19 = *(_DWORD *)v11;
          if ( v19 == 0 || v19 == 0xFFFF )
          {
            *(_DWORD *)(a3[1] + 72) = v5 + 124;
          }
          else
          {
            v20 = *(_DWORD *)(v5 + 120);
            v4[28] = v20;
            if ( v20 != 0 )
            {
              do
              {
                v21 = (int *)v4[28];
                if ( v21[6] == v19 )
                  break;
                v22 = *v21;
                v4[28] = v22;
              }
              while ( v22 != 0 );
            }
            v23 = v4[28] + 12;
            v4[4] = v23;
            *(_DWORD *)(a3[1] + 72) = *(_DWORD *)(v23 + 4);
          }
        }
        else if ( v16 == 0x20000 )
        {
          v18 = (unsigned __int16)*(_DWORD *)v11;
          v4[11] = v18;
          if ( v18 != 0 )
          {
            *((_WORD *)v13 + 4) = 4;
            a3[2] = *(_DWORD *)(a2 + 32) + 28 * v4[11] - 28;
          }
          else
          {
            *((_WORD *)v13 + 4) = 8;
            a3[2] = 0;
          }
        }
      }
      else if ( v16 == 0x10000 )
      {
        *((_WORD *)v13 + 4) &= ~0x8000u;
        v17 = v4[1];
        if ( ((unsigned int)&unk_600000 & v17) != 0 )
        {
          if ( (v17 & 0x200000) != 0 )
          {
            if ( (v13[2] & 0x400) == 0 )
            {
              *((_WORD *)v15 + 8) = *v11;
              *((_WORD *)v15 + 9) = v11[1];
              *((_WORD *)v15 + 10) = v11[2];
            }
            v11 += 4;
          }
          if ( (v4[1] & 0x400000) != 0 )
          {
            if ( (*((_BYTE *)v13 + 9) & 4) == 0 )
            {
              *v15 = *v11;
              v15[1] = v11[1];
              v15[2] = v11[2];
            }
            v11 += 4;
          }
          if ( (*((_BYTE *)v13 + 9) & 4) == 0 )
          {
            RotMatrix((__int16 *)v15 + 8, (_WORD *)v4[3]);
            ScaleMatrix((__int16 *)v4[3], a1);
            v15 = a1;
          }
        }
        if ( ((unsigned int)&unk_800000 & v4[1]) != 0 && (*((_BYTE *)v13 + 9) & 4) == 0 )
        {
          v15[6] = *(_DWORD *)v11;
          v15[7] = *((_DWORD *)v11 + 1);
          v15[8] = *((_DWORD *)v11 + 2);
          TransMatrix((_DWORD *)v4[3], v15 + 6);
        }
      }
      else if ( v16 == 0 )
      {
        *a3 = *((_DWORD *)v11 + 1) | *(_DWORD *)v11 & *a3;
      }
      *(_DWORD *)(a2 + 36) += 4 * v4[2];
      v38 = v4[15];
      result = v4[14] + 1;
      v4[14] = result;
      if ( result >= v38 )
        return result;
      v3 = a2;
    }
  }
  return result;
}

// 0x44f9c4  nullsub_2
void nullsub_2()
{
  ;
}

// 0x44f9d4  nullsub_3
void nullsub_3()
{
  ;
}

// 0x44fa44  nullsub_4
int nullsub_4()
{
  _BYTE retaddr[8]; // [esp+0h] [ebp+0h]

  return MK_FP(*(_WORD *)retaddr, *(_DWORD *)retaddr)();
}

// 0x44fa54  nullsub_5
int nullsub_5()
{
  _BYTE retaddr[8]; // [esp+0h] [ebp+0h]

  return MK_FP(*(_WORD *)retaddr, *(_DWORD *)retaddr)();
}

// 0x4509a0  sub_4509A0
int __cdecl sub_4509A0(int a1)
{
  dword_4AE610 = a1;
  return a1;
}

// 0x4514d2  sub_4514D2
// local variable allocation has failed, the output may be wrong!
long double __usercall sub_4514D2/*@<st0>*/(int a1/*@<eax>*/, double a2/*@<st1>*/, int a3, int a4, int a5, int a6)
{
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  double X; // st7
  char v10; // zf
  long double result; // st7
  char v12; // cl
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  unsigned __int8 v17; // cl
  unsigned __int8 v18; // ch
  char v19; // cl
  _DWORD *v20; // [esp+10h] [ebp-7Ch]
  double *v21; // [esp+10h] [ebp-7Ch]
  _DWORD v22[30]; // [esp+14h] [ebp-78h] BYREF

  v6 = a1;
  v22[29] = a1;
  if ( (_WORD)a1 != 639 )
    _load_CW();
  v7 = v6 & 0x7FF00000;
  if ( v7 == 2146435072 )
  {
    if ( (a5 | a1 & 0xFFFFF) != 0 )
    {
      X = _fload_withFB(0, &a3);
      if ( (a6 & 0x80000) != 0 )
        goto LABEL_15;
      v14 = v13 + 1;
    }
    else
    {
      X = _fload_withFB(0, &a3);
    }
LABEL_21:
    if ( (a4 & 0x7FF00000) != 0x7FF00000 || (a3 | a4 & 0xFFFFF) == 0 )
    {
      if ( v14 == 0 )
      {
        v20 = v22;
        __asm { fsave   byte ptr [ecx+8] }
        v15 = _powhlp(a2, X, (int)v22);
        _ECX = v21;
        __asm { frstor  byte ptr [ecx+8] }
        result = *v21;
        if ( v15 == 0 )
          return result;
        goto LABEL_11;
      }
    }
    else if ( (a4 & 0x80000) != 0 )
    {
LABEL_15:
      result = X + a2;
      goto LABEL_11;
    }
    result = X + a2;
    goto LABEL_11;
  }
  X = _fload_withFB(v7, &a3);
  if ( v10 )
  {
    v14 = 0;
    goto LABEL_21;
  }
  if ( (v8 & 0x7FF00000) != 0 || (a3 | a4 & 0xFFFFF) != 0 )
  {
    if ( a4 >= 0 || (sub_4516A5(), a2 = -a2, v19 != 0) )
    {
      result = _twoToTOS(__FYL2X__(a2, X));
      if ( v12 == 1 )
        result = -result;
      if ( dword_4B1E0C == 0 )
        _check_range_exit(&off_4AE638, 29);
      return result;
    }
    result = *(double *)&tbyte_4B0E50;
LABEL_11:
    if ( dword_4B1E0C == 0 )
      _startTwoArgErrorHandling();
    return result;
  }
  if ( (a6 & 0x7FF00000) == 0 )
  {
    if ( (a5 | a6 & 0xFFFFF) != 0 )
      return 0.0;
    else
      return 1.0;
  }
  sub_4516A5();
  v18 = HIBYTE(a4) >> 7;
  if ( a6 < 0 )
  {
    result = *(double *)&tbyte_4B0DE0;
    if ( (v17 & v18) != 0 )
      result = -*(double *)&tbyte_4B0DE0;
    goto LABEL_11;
  }
  result = 0.0;
  if ( (v17 & v18) != 0 )
    return -0.0;
  return result;
}

// 0x4516a5  sub_4516A5
void sub_4516A5()
{
  ;
}

// 0x452050  start
void __noreturn start()
{
  DWORD Version; // eax
  CHAR *v1; // esi
  int wShowWindow; // eax
  HMODULE ModuleHandleA; // eax
  int v4; // [esp-4h] [ebp-78h]
  int v5; // [esp+14h] [ebp-60h]
  struct _STARTUPINFOA StartupInfo; // [esp+18h] [ebp-5Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+5Ch] [ebp-18h]

  Version = GetVersion();
  dword_4B1E2C = BYTE1(Version);
  dword_4B1E28 = (unsigned __int8)Version;
  dword_4B1E24 = BYTE1(Version) + ((unsigned __int8)Version << 8);
  dword_4B1E20 = HIWORD(Version);
  if ( _heap_init() == 0 )
    _amsg_exit(28);
  ms_exc.registration.TryLevel = 0;
  _ioinit();
  __initmbctable();
  dword_9CAAE8 = (int)GetCommandLineA();
  dword_4B1E64 = (void *)__crtGetEnvironmentStringsA();
  if ( dword_4B1E64 == NULL || dword_9CAAE8 == 0 )
    exit(/*Code*/ -1);
  _setargv();
  _setenvp();
  _cinit();
  v1 = (CHAR *)dword_9CAAE8;
  if ( *(_BYTE *)dword_9CAAE8 == 34 )
  {
    while ( *++v1 != 34 && *v1 != 0 )
    {
      if ( _ismbblead(/*Ch*/ (unsigned __int8)*v1) != 0 )
        ++v1;
    }
    if ( *v1 == 34 )
      ++v1;
  }
  else
  {
    while ( (unsigned __int8)*v1 > 0x20u )
      ++v1;
  }
  while ( *v1 != 0 && (unsigned __int8)*v1 <= 0x20u )
    ++v1;
  StartupInfo.dwFlags = 0;
  GetStartupInfoA(/*lpStartupInfo*/ &StartupInfo);
  if ( (StartupInfo.dwFlags & 1) != 0 )
    wShowWindow = StartupInfo.wShowWindow;
  else
    wShowWindow = 10;
  v4 = wShowWindow;
  ModuleHandleA = GetModuleHandleA(/*lpModuleName*/ NULL);
  v5 = WinMain(/*hInstance*/ ModuleHandleA, /*hPrevInstance*/ NULL, /*lpCmdLine*/ v1, /*nShowCmd*/ v4);
  exit(/*Code*/ v5);
}

// 0x4563e7  zerotoxdone
void zerotoxdone()
{
  ;
}

// 0x4564c7  notanint
void notanint()
{
  isintTOSret();
}

// 0x4564ce  evenint
void evenint()
{
  isintTOSret();
}

// 0x458290  sub_458290
int __cdecl sub_458290(unsigned __int16 *a1, unsigned int *a2)
{
  return _ld12cvt(a1, a2, dword_4B10A0);
}

// 0x4582b0  sub_4582B0
int __cdecl sub_4582B0(unsigned __int16 *a1, unsigned int *a2)
{
  return _ld12cvt(a1, a2, dword_4B10B8);
}

// 0x4582d0  sub_4582D0
int __cdecl sub_4582D0(unsigned int *a1, int a2)
{
  unsigned __int16 v3[6]; // [esp+0h] [ebp-Ch] BYREF

  __strgtold12(v3, &a2, a2, 0, 0, 0, 0);
  return sub_458290(v3, a1);
}

// 0x458310  sub_458310
int __cdecl sub_458310(unsigned int *a1, int a2)
{
  unsigned __int16 v3[6]; // [esp+0h] [ebp-Ch] BYREF

  __strgtold12(v3, &a2, a2, 0, 0, 0, 0);
  return sub_4582B0(v3, a1);
}

// 0x45b110  RtlUnwind
// attributes: thunk
void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  __imp_RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
}

// 0x45b1b0  sub_45B1B0
int sub_45B1B0()
{
  int result; // eax
  int AsciiChar; // esi
  unsigned __int8 *v2; // eax
  DWORD NumberOfEventsRead; // [esp+10h] [ebp-1Ch] BYREF
  DWORD Mode; // [esp+14h] [ebp-18h] BYREF
  struct _INPUT_RECORD Buffer; // [esp+18h] [ebp-14h] BYREF

  if ( dword_4B1840 == -1 )
  {
    result = (int)hConsoleHandle;
    if ( hConsoleHandle != (HANDLE)-1 )
    {
      if ( hConsoleHandle == (HANDLE)-2 )
      {
        __initconin();
        result = (int)hConsoleHandle;
      }
      GetConsoleMode(/*hConsoleHandle*/ (HANDLE)result, /*lpMode*/ &Mode);
      SetConsoleMode(/*hConsoleHandle*/ hConsoleHandle, /*dwMode*/ 0);
      if ( ReadConsoleInputA(
             /*hConsoleInput*/ hConsoleHandle,
             /*lpBuffer*/ &Buffer,
             /*nLength*/ 1u,
             /*lpNumberOfEventsRead*/ &NumberOfEventsRead) )
      {
        while ( NumberOfEventsRead != 0 )
        {
          if ( Buffer.EventType == 1 && Buffer.Event.KeyEvent.bKeyDown )
          {
            AsciiChar = (unsigned __int8)Buffer.Event.KeyEvent.uChar.AsciiChar;
            if ( Buffer.Event.KeyEvent.uChar.AsciiChar != 0 )
              goto LABEL_14;
            v2 = (unsigned __int8 *)_getextendedkeycode(&Buffer.Event);
            if ( v2 != NULL )
            {
              AsciiChar = *v2;
              dword_4B1840 = v2[1];
              goto LABEL_14;
            }
          }
          if ( !ReadConsoleInputA(
                  /*hConsoleInput*/ hConsoleHandle,
                  /*lpBuffer*/ &Buffer,
                  /*nLength*/ 1u,
                  /*lpNumberOfEventsRead*/ &NumberOfEventsRead) )
            break;
        }
      }
      AsciiChar = -1;
LABEL_14:
      SetConsoleMode(/*hConsoleHandle*/ hConsoleHandle, /*dwMode*/ Mode);
      return AsciiChar;
    }
  }
  else
  {
    result = (unsigned __int8)dword_4B1840;
    dword_4B1840 = -1;
  }
  return result;
}
