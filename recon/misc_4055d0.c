// Module `misc_4055d0`.
//
// Reconstructed from Bugs.exe (PC v1.0) by tools/recon.py.
// Generated file -- do not edit by hand; see recon/README.md.
//
// Address range: 0x4055d0 - 0x405640 (2 functions).

#include "bugs.h"


// 0x4055d0  ConPrintf
// IDA symbol: sub_4055D0
// Documented as port/misc in doc/functions.md.
HANDLE ConPrintf(char *Format, ...)
{
  HANDLE result; // eax
  DWORD NumberOfCharsWritten; // [esp+0h] [ebp-404h] BYREF
  char Buffer[1024]; // [esp+4h] [ebp-400h] BYREF
  va_list va; // [esp+40Ch] [ebp+8h] BYREF

  va_start(va, Format);
  result = hConsoleOutput;
  if ( hConsoleOutput != NULL )
  {
    vsprintf(Buffer, Format, /*ArgList*/ va);
    Buffer[1023] = 0;
    return (HANDLE)WriteConsoleA(
                     /*hConsoleOutput*/ hConsoleOutput,
                     /*lpBuffer*/ Buffer,
                     /*nNumberOfCharsToWrite*/ strlen(Buffer),
                     /*lpNumberOfCharsWritten*/ &NumberOfCharsWritten,
                     /*lpReserved*/ NULL);
  }
  return result;
}

// 0x405640  ShowRetryDialog
// IDA symbol: sub_405640
// Documented as port/misc in doc/functions.md.
int ShowRetryDialog(char *Format, ...)
{
  CHAR Text[1024]; // [esp+Ch] [ebp-400h] BYREF
  va_list va; // [esp+414h] [ebp+8h] BYREF

  va_start(va, Format);
  vsprintf(/*Buffer*/ Text, Format, /*ArgList*/ va);
  strcat(Text, asc_45F284);
  return MessageBoxA(/*hWnd*/ hWnd, /*lpText*/ Text, /*lpCaption*/ Caption, /*uType*/ 5u);
}
