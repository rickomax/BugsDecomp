// Module `list`.
//
// Reconstructed from Bugs.exe (PC v1.0) by tools/recon.py.
// Generated file -- do not edit by hand; see recon/README.md.
//
// Address range: 0x4489c0 - 0x448ac0 (5 functions).

#include "bugs.h"


// 0x4489c0  AllocListNode
// IDA symbol: sub_4489C0
// Documented as game/list in doc/functions.md.
unsigned int __cdecl AllocListNode(unsigned int a1, int a2, int a3)
{
  unsigned int result; // eax

  result = a1;
  if ( a1 >= a1 + a3 )
    return 0;
  while ( (*(_BYTE *)(result + 4) & 1) == 0 )
  {
    result += a2;
    if ( result >= a1 + a3 )
      return 0;
  }
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)result = 0;
  return result;
}

// 0x448a00  InitListPool
// IDA symbol: sub_448A00
// Documented as game/list in doc/functions.md.
int __cdecl InitListPool(_DWORD *a1, unsigned int a2, int a3)
{
  _DWORD *v3; // edx
  int result; // eax

  v3 = a1;
  for ( result = a3; v3 < (_DWORD *)((char *)a1 + a3); v3 = (_DWORD *)((char *)v3 + a2) )
  {
    result = 0;
    memset(v3, 0, a2);
    v3[1] = 1;
  }
  return result;
}

// 0x448a40  RemoveListNode
// IDA symbol: sub_448A40
// Documented as game/list in doc/functions.md.
_DWORD *__cdecl RemoveListNode(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // ecx
  _DWORD **i; // edx
  _DWORD *v5; // ecx
  _DWORD *v6; // esi

  result = a1;
  if ( a1 != NULL )
  {
    if ( a1 == a2 )
    {
      a1[1] = 1;
      return (_DWORD *)*a1;
    }
    else
    {
      v3 = (_DWORD *)*a1;
      for ( i = (_DWORD **)a1; v3 != NULL; v3 = (_DWORD *)*v3 )
      {
        if ( v3 == a2 )
          break;
        i = (_DWORD **)v3;
      }
      v5 = *i;
      if ( *i != NULL )
      {
        v6 = (_DWORD *)*v5;
        v5[1] = 1;
        *i = v6;
        *v5 = 0;
      }
    }
  }
  return result;
}

// 0x448a90  ClearList
// IDA symbol: sub_448A90
// Documented as game/list in doc/functions.md.
int __cdecl ClearList(_DWORD *a1)
{
  _DWORD *i; // eax
  _DWORD *v2; // ecx

  for ( i = a1; i != NULL; *v2 = 0 )
  {
    v2 = i;
    i = (_DWORD *)*i;
    v2[1] = 1;
  }
  return 0;
}

// 0x448ac0  AppendListNode
// IDA symbol: sub_448AC0
// Documented as game/list in doc/functions.md.
_DWORD *__cdecl AppendListNode(_DWORD **a1, _DWORD *a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // ecx
  _DWORD *i; // edx

  result = a1;
  if ( a1 == NULL )
    return a2;
  v3 = *a1;
  for ( i = a1; v3 != NULL; v3 = (_DWORD *)*v3 )
    i = v3;
  *i = a2;
  *a2 = 0;
  return result;
}
