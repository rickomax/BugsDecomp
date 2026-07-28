// Module `fs`.
//
// Reconstructed from Bugs.exe (PC v1.0) by tools/recon.py.
// Generated file -- do not edit by hand; see recon/README.md.
//
// Address range: 0x4056c0 - 0x405850 (6 functions).

#include "bugs.h"


// 0x4056c0  FsOpen
// IDA symbol: sub_4056C0
// Documented as port/fs in doc/functions.md.
int __cdecl FsOpen(char *FileName, int a2)
{
  int v2; // ebx
  int result; // eax
  char v4[260]; // [esp+8h] [ebp-104h] BYREF

  v2 = a2;
  BYTE1(v2) = BYTE1(a2) | 0x80;
  result = _open(FileName, /*OpenFlag*/ v2);
  if ( result == -1 && byte_4B1928 != 0 )
  {
    strcpy(v4, &byte_4B1928);
    strcat(v4, FileName + 3);
    return _open(/*FileName*/ v4, /*OpenFlag*/ v2);
  }
  return result;
}

// 0x405760  FsFOpen
// IDA symbol: sub_405760
// Documented as port/fs in doc/functions.md.
FILE *__cdecl FsFOpen(char *FileName, char *Mode)
{
  FILE *result; // eax
  char v3[260]; // [esp+8h] [ebp-104h] BYREF

  result = fopen(FileName, Mode);
  if ( result == NULL && byte_4B1928 != 0 )
  {
    strcpy(v3, &byte_4B1928);
    strcat(v3, FileName + 3);
    return fopen(/*FileName*/ v3, Mode);
  }
  return result;
}

// 0x405800  FsSeek
// IDA symbol: sub_405800
// Documented as port/fs in doc/functions.md.
int __cdecl FsSeek(int FileHandle, int Offset, int Origin)
{
  return _lseek(FileHandle, Offset, Origin);
}

// 0x405820  FsRead
// IDA symbol: sub_405820
// Documented as port/fs in doc/functions.md.
int __cdecl FsRead(int FileHandle, void *DstBuf, unsigned int MaxCharCount)
{
  return _read(FileHandle, DstBuf, MaxCharCount);
}

// 0x405840  FsClose
// IDA symbol: sub_405840
// Documented as port/fs in doc/functions.md.
int __cdecl FsClose(int FileHandle)
{
  return _close(FileHandle);
}

// 0x405850  FsFindRoot
// IDA symbol: sub_405850
// Documented as port/fs in doc/functions.md.
int FsFindRoot()
{
  int v0; // ebx
  UINT uMode; // [esp+10h] [ebp-218h]
  DWORD MaximumComponentLength; // [esp+14h] [ebp-214h] BYREF
  DWORD VolumeSerialNumber; // [esp+18h] [ebp-210h] BYREF
  DWORD FileSystemFlags; // [esp+1Ch] [ebp-20Ch] BYREF
  CHAR RootPathName[260]; // [esp+20h] [ebp-208h] BYREF
  CHAR VolumeNameBuffer[260]; // [esp+124h] [ebp-104h] BYREF

  v0 = 0;
  uMode = SetErrorMode(/*uMode*/ 1u);
  strcpy(RootPathName, "a:\\");
  if ( (char)off_45F368 <= 122 )
  {
    while ( GetDriveTypeA(/*lpRootPathName*/ RootPathName) != 5
         || !GetVolumeInformationA(
               /*lpRootPathName*/ RootPathName,
               /*lpVolumeNameBuffer*/ VolumeNameBuffer,
               /*nVolumeNameSize*/ 0x104u,
               /*lpVolumeSerialNumber*/ &VolumeSerialNumber,
               /*lpMaximumComponentLength*/ &MaximumComponentLength,
               /*lpFileSystemFlags*/ &FileSystemFlags,
               /*lpFileSystemNameBuffer*/ NULL,
               /*nFileSystemNameSize*/ 0)
         || _strcmpi(/*String1*/ VolumeNameBuffer, /*String2*/ String2) != 0 )
    {
      if ( ++RootPathName[0] > 122 )
      {
        SetErrorMode(uMode);
        return 0;
      }
    }
    byte_4B1928 = RootPathName[0];
    strcpy((char *)&dword_4B1929, ":\\Datas\\");
    v0 = 1;
  }
  SetErrorMode(uMode);
  return v0;
}
