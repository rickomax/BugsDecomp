/* Hex-Rays pseudocode export */


/* ============================================
   Address: 0x401000
   Function: sub_401000
   ============================================ */

char *sub_401000()
{
  char *result; // eax
  char *v1; // esi
  char Buffer[80]; // [esp+8h] [ebp-50h] BYREF

  result = (char *)sub_405C00(FileName: FileName, a2: (int)aRt);
  v1 = result;
  while ( (v1[12] & 0x10) == 0 )
  {
    result = fgets(Buffer, MaxCount: 80, Stream: (FILE *)v1);
    if ( result != nullptr )
    {
      result = strstr(Str: Buffer, SubStr: SubStr);
      if ( result != nullptr )
        result = (char *)sscanf(Buffer, Format: "Language=%i", &dword_42B3E0);
    }
  }
  return result;
}


/* ============================================
   Address: 0x401070
   Function: sub_401070
   ============================================ */

int sub_401070()
{
  int v0; // eax
  int v1; // esi
  int v3; // [esp+8h] [ebp-54h] BYREF
  char Buffer[80]; // [esp+Ch] [ebp-50h] BYREF

  v3 = 0;
  v0 = sub_405C00(FileName: FileName, a2: (int)aRt);
  v1 = v0;
  if ( v0 == 0 || (*(_BYTE *)(v0 + 12) & 0x10) != 0 )
    return 0;
  while ( fgets(Buffer, MaxCount: 80, Stream: (FILE *)v1) == nullptr
       || strstr(Str: Buffer, SubStr: aFirsttime) == nullptr )
  {
    if ( (*(_BYTE *)(v1 + 12) & 0x10) != 0 )
      return 0;
  }
  sscanf(Buffer, Format: "FirstTime=%i", &v3);
  return v3;
}


/* ============================================
   Address: 0x401100
   Function: sub_401100
   ============================================ */

int sub_401100()
{
  DWORD v0; // edi

  if ( byte_42B464 != 0 )
  {
    dword_42B3E4 = 1;
    dword_42B3DC = 2;
  }
  else
  {
    dword_42B3DC = dword_42B458 >= 300;
    dword_42B3E4 = 0;
  }
  dword_42B3D8 = 16;
  switch ( GetSystemDefaultLangID() & 0x3FF )
  {
    case 7:
      dword_42B3E0 = 2;
      break;
    case 0xA:
      dword_42B3E0 = 3;
      break;
    case 0xC:
      dword_42B3E0 = 1;
      break;
    case 0x10:
      dword_42B3E0 = 4;
      break;
    case 0x13:
      dword_42B3E0 = 5;
      break;
    default:
      dword_42B3E0 = 0;
      break;
  }
  dword_42B3F4 = 2;
  Value = 512;
  dword_42B3EC = 384;
  dword_42B3F0 = 1;
  dword_42B3F8 = 0;
  dword_42B3FC = 1072693248;
  dword_42B410 = 0;
  byte_42B414 = 0;
  byte_42B415 = 1;
  byte_42B416 = 2;
  byte_42B417 = 3;
  byte_42B418 = 4;
  byte_42B419 = 5;
  byte_42B41A = 6;
  byte_42B41B = 7;
  byte_42B41C = 8;
  byte_42B41D = 9;
  byte_42B41E = -56;
  byte_42B41F = -48;
  byte_42B420 = -51;
  byte_42B421 = -53;
  v0 = OemKeyScan(wOemChar: 0x71u);
  if ( v0 >= OemKeyScan(wOemChar: 0x61u) )
  {
    byte_42B422 = 30;
    byte_42B423 = 44;
    byte_42B424 = 18;
    byte_42B425 = 19;
    byte_42B426 = 16;
  }
  else
  {
    byte_42B422 = 16;
    byte_42B423 = 17;
    byte_42B424 = 18;
    byte_42B425 = 19;
    byte_42B426 = 30;
  }
  byte_42B42B = 28;
  byte_42B42D = 28;
  byte_42B42F = 1;
  byte_42B427 = 31;
  byte_42B428 = 32;
  byte_42B429 = 33;
  byte_42B42A = 15;
  byte_42B42C = 15;
  dword_42B408 = 100;
  dword_42B40C = 100;
  dword_42B400 = 0;
  dword_42B404 = 1072693248;
  byte_42B42E = 16;
  dword_42B430 = 0;
  dword_42B434 = 0;
  dword_42B438 = 0;
  dword_42B43C = 1072693248;
  dword_42B440 = 0;
  dword_42B444 = 1072693248;
  dword_42B448 = 0;
  dword_42B44C = 1072693248;
  byte_42B450 = 0;
  return 100;
}


/* ============================================
   Address: 0x401390
   Function: sub_401390
   ============================================ */

FILE *sub_401390()
{
  FILE *v0; // eax
  FILE *v1; // esi
  FILE *result; // eax
  FILE *v3; // esi
  size_t v4; // edi
  char *v5; // eax
  _BYTE *v6; // eax
  char Str[4096]; // [esp+8h] [ebp-1000h] BYREF

  v0 = (FILE *)sub_405C00(FileName: aBinConfigPc, a2: (int)aWb);
  v1 = v0;
  if ( v0 != nullptr )
  {
    sub_405F40(Buffer: &dword_42B3D8, ElementSize: 0x80u, ElementCount: 1u, Stream: v0);
    fclose(Stream: v1);
  }
  result = (FILE *)sub_401070();
  if ( result != nullptr )
  {
    memset(Str, 0, sizeof(Str));
    result = (FILE *)sub_405C00(FileName: FileName, a2: (int)aRB);
    v3 = result;
    if ( result != nullptr )
    {
      rewind(Stream: result);
      v4 = sub_405C90(Buffer: Str, ElementSize: 1u, ElementCount: 0x1000u, Stream: v3);
      if ( v4 != 0 )
      {
        v5 = strstr(Str, SubStr: aLanguage);
        if ( v5 != nullptr )
        {
          v6 = v5 + 9;
          if ( (unsigned int)dword_42B3E0 > 5 )
            *v6 = 48;
          else
            *v6 = dword_42B3E0 + 48;
        }
        rewind(Stream: v3);
        sub_405F40(Buffer: Str, ElementSize: v4, ElementCount: 1u, Stream: v3);
      }
      return (FILE *)fclose(Stream: v3);
    }
  }
  return result;
}


/* ============================================
   Address: 0x401490
   Function: sub_401490
   ============================================ */

FILE *sub_401490()
{
  int v0; // ebp
  FILE *v1; // eax
  FILE *v2; // esi
  int v3; // edi
  FILE *result; // eax
  int v5; // eax
  int v6; // esi
  char Buffer[256]; // [esp+10h] [ebp-100h] BYREF

  v0 = dword_42B3DC;
  v1 = (FILE *)sub_405C00(FileName: aBinConfigPc, a2: (int)aRb);
  v2 = v1;
  if ( v1 == nullptr )
    goto LABEL_17;
  fseek(Stream: v1, Offset: 0, Origin: 2);
  v3 = ftell(Stream: v2);
  fseek(Stream: v2, Offset: 0, Origin: 0);
  if ( v3 != 128 )
  {
    fclose(Stream: v2);
LABEL_17:
    sub_401100();
    return sub_401390();
  }
  sub_405C90(Buffer: &dword_42B3D8, ElementSize: 0x80u, ElementCount: 1u, Stream: v2);
  fclose(Stream: v2);
  if ( dword_42B3D8 != 16 || v0 == 2 && byte_42B464 == 0 || (unsigned int)dword_42B3E0 > 5 )
    goto LABEL_17;
  result = (FILE *)sub_401070();
  if ( result == nullptr )
    return result;
  v5 = sub_405C00(FileName: FileName, a2: (int)aRt);
  v6 = v5;
  if ( v5 == 0 )
    return sub_401390();
  if ( (*(_BYTE *)(v5 + 12) & 0x10) == 0 )
  {
    while ( fgets(Buffer, MaxCount: 256, Stream: (FILE *)v6) == nullptr
         || strstr(Str: Buffer, SubStr: SubStr) == nullptr )
    {
      if ( (*(_BYTE *)(v6 + 12) & 0x10) != 0 )
        goto LABEL_13;
    }
    sscanf(Buffer, Format: "Language=%i", &dword_42B3E0);
  }
LABEL_13:
  fclose(Stream: (FILE *)v6);
  return sub_401390();
}


/* ============================================
   Address: 0x401610
   Function: sub_401610
   ============================================ */

CHAR sub_401610()
{
  UINT v0; // ebp
  DWORD VolumeSerialNumber; // [esp+10h] [ebp-214h] BYREF
  DWORD FileSystemFlags; // [esp+14h] [ebp-210h] BYREF
  DWORD MaximumComponentLength; // [esp+18h] [ebp-20Ch] BYREF
  CHAR RootPathName[260]; // [esp+1Ch] [ebp-208h] BYREF
  CHAR VolumeNameBuffer[260]; // [esp+120h] [ebp-104h] BYREF

  v0 = SetErrorMode(uMode: 1u);
  strcpy(RootPathName, aA);
  if ( RootPathName[0] > 122 )
  {
    SetErrorMode(uMode: v0);
    return 0;
  }
  else
  {
    while ( GetDriveTypeA(lpRootPathName: RootPathName) != 5
         || !GetVolumeInformationA(
               lpRootPathName: RootPathName,
               lpVolumeNameBuffer: VolumeNameBuffer,
               nVolumeNameSize: 0x104u,
               lpVolumeSerialNumber: &VolumeSerialNumber,
               lpMaximumComponentLength: &MaximumComponentLength,
               lpFileSystemFlags: &FileSystemFlags,
               lpFileSystemNameBuffer: nullptr,
               nFileSystemNameSize: 0)
         || _strcmpi(String1: VolumeNameBuffer, String2: aBblit) != 0 )
    {
      if ( ++RootPathName[0] > 122 )
      {
        SetErrorMode(uMode: v0);
        return 0;
      }
    }
    SetErrorMode(uMode: v0);
    return RootPathName[0];
  }
}


/* ============================================
   Address: 0x401700
   Function: sub_401700
   ============================================ */

int __cdecl sub_401700(int a1, int a2, int a3, int a4, _DWORD *a5, _DWORD *a6)
{
  *a5 = a3 - a1;
  *a6 = a4 - a2;
  return a4 - a2;
}


/* ============================================
   Address: 0x401720
   Function: sub_401720
   ============================================ */

char sub_401720()
{
  int v0; // eax

  if ( dword_427090 == 2 || dword_427090 == 1 )
  {
    return GetTickCount() / 0x3E8;
  }
  else
  {
    __outbyte(0x70u, 0);
    LOBYTE(v0) = __inbyte(0x71u);
  }
  return v0;
}


/* ============================================
   Address: 0x401760
   Function: sub_401760
   ============================================ */

unsigned __int64 sub_401760()
{
  unsigned __int64 result; // rax

  result = __rdtsc();
  dword_42B45C = HIDWORD(result);
  dword_42B460 = result;
  return result;
}


/* ============================================
   Address: 0x401770
   Function: sub_401770
   ============================================ */

__int16 sub_401770()
{
  unsigned __int8 v0; // al
  int i; // ecx
  unsigned __int8 v2; // al
  unsigned __int8 v3; // ah
  unsigned __int8 v4; // al
  __int16 v5; // ax
  unsigned __int8 v6; // t0

  __outbyte(0x43u, 0xB8u);
  v0 = __inbyte(0x61u);
  __outbyte(0x61u, v0 | 1);
  __outbyte(0x42u, 0);
  __outbyte(0x42u, 0);
  for ( i = 0xFFFF; i != 0; --i )
    ;
  v2 = __inbyte(0x42u);
  v3 = v2;
  v4 = __inbyte(0x42u);
  v6 = v4;
  LOBYTE(v5) = v3;
  HIBYTE(v5) = v6;
  return -v5;
}


/* ============================================
   Address: 0x4017C0
   Function: sub_4017C0
   ============================================ */

BOOL __usercall sub_4017C0@<eax>(char a1@<efl>)
{
  return a1 == 2;
}


/* ============================================
   Address: 0x4017F0
   Function: sub_4017F0
   ============================================ */

int sub_4017F0()
{
  LSTATUS v0; // esi
  HKEY phkResult; // [esp+8h] [ebp-Ch] BYREF
  BYTE Data[4]; // [esp+Ch] [ebp-8h] BYREF
  DWORD cbData; // [esp+10h] [ebp-4h] BYREF

  if ( RegOpenKeyExA(
         hKey: HKEY_LOCAL_MACHINE,
         lpSubKey: aHardwareDescri,
         ulOptions: 0,
         samDesired: 0x20019u,
         &phkResult) != 0 )
    return 0;
  *(_DWORD *)Data = 0;
  cbData = 4;
  v0 = RegQueryValueExA(
         hKey: phkResult,
         lpValueName: aMhz,
         lpReserved: nullptr,
         lpType: nullptr,
         lpData: Data,
         lpcbData: &cbData);
  if ( v0 != 0 )
  {
    v0 = RegQueryValueExA(
           hKey: phkResult,
           lpValueName: aMhz_0,
           lpReserved: nullptr,
           lpType: nullptr,
           lpData: Data,
           lpcbData: &cbData);
    if ( v0 != 0 )
      v0 = RegQueryValueExA(
             hKey: phkResult,
             lpValueName: aMhz_1,
             lpReserved: nullptr,
             lpType: nullptr,
             lpData: Data,
             lpcbData: &cbData);
  }
  RegCloseKey(hKey: phkResult);
  if ( v0 != 0 )
    return 0;
  else
    return *(_DWORD *)Data;
}


/* ============================================
   Address: 0x4018B0
   Function: sub_4018B0
   ============================================ */

unsigned int sub_4018B0()
{
  unsigned int v0; // esi
  HANDLE CurrentThread; // ebx
  int ThreadPriority; // edi
  int i; // ebp
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // esi

  v0 = -1;
  CurrentThread = GetCurrentThread();
  ThreadPriority = GetThreadPriority(hThread: CurrentThread);
  if ( ThreadPriority != 0x7FFFFFFF )
    SetThreadPriority(hThread: CurrentThread, nPriority: ThreadPriority + 1);
  for ( i = 10; i != 0; --i )
  {
    LOWORD(v4) = sub_401770();
    if ( v4 < v0 )
      v0 = v4;
  }
  if ( ThreadPriority != 0x7FFFFFFF )
    SetThreadPriority(hThread: CurrentThread, nPriority: ThreadPriority);
  v5 = 100000 * v0 / 0x1D216;
  if ( v5 % 0x1D216 >= 0xE90B )
    ++v5;
  v6 = 0x1FFFE / v5;
  if ( 0x1FFFE % v5 > v5 >> 1 )
    ++v6;
  return v6;
}


/* ============================================
   Address: 0x401960
   Function: sub_401960
   ============================================ */

unsigned int sub_401960()
{
  HANDLE CurrentThread; // esi
  int ThreadPriority; // eax
  int v2; // eax
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // ebx
  int v7; // ebp
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // eax
  int v12; // esi
  int v13; // edi
  unsigned int v14; // esi
  int nPriority; // [esp+10h] [ebp-10h]
  HANDLE hThread; // [esp+14h] [ebp-Ch]
  unsigned int v18; // [esp+18h] [ebp-8h] BYREF
  int v19; // [esp+1Ch] [ebp-4h] BYREF

  CurrentThread = GetCurrentThread();
  hThread = CurrentThread;
  ThreadPriority = GetThreadPriority(hThread: CurrentThread);
  nPriority = ThreadPriority;
  if ( ThreadPriority != 0x7FFFFFFF )
    SetThreadPriority(hThread: CurrentThread, nPriority: ThreadPriority + 1);
  LOBYTE(v2) = sub_401720();
  v3 = v2;
  do
  {
    LOBYTE(v4) = sub_401720();
    if ( v4 >= v3 )
      v5 = v4 - v3 > 0;
    else
      v5 = v4 - v3 + 10;
  }
  while ( v5 == 0 );
  sub_401760();
  v6 = dword_42B45C;
  v7 = dword_42B460;
  LOBYTE(v8) = sub_401720();
  v9 = v8;
  do
  {
    LOBYTE(v10) = sub_401720();
    if ( v10 >= v9 )
      v11 = v10 - v9 > 0;
    else
      v11 = v10 - v9 + 10;
  }
  while ( v11 == 0 );
  sub_401760();
  v12 = dword_42B45C;
  v13 = dword_42B460;
  if ( nPriority != 0x7FFFFFFF )
    SetThreadPriority(hThread, nPriority);
  sub_401700(a1: v6, a2: v7, a3: v12, a4: v13, a5: &v19, a6: &v18);
  v14 = v18 / 0xF4240;
  if ( v18 / 0x186A0 - 10 * (v18 / 0xF4240) >= 6 )
    ++v14;
  return v14;
}


/* ============================================
   Address: 0x401A60
   Function: sub_401A60
   ============================================ */

int __usercall sub_401A60@<eax>(char a1@<efl>)
{
  int result; // eax

  if ( sub_4017C0(a1) )
  {
    if ( dword_427090 == 2 )
      result = sub_4017F0();
    else
      result = sub_4018B0();
    dword_42B458 = result;
  }
  else
  {
    result = sub_401960();
    dword_42B458 = result;
  }
  return result;
}


/* ============================================
   Address: 0x401AA0
   Function: sub_401AA0
   ============================================ */

int __cdecl sub_401AA0(FILE *Stream, char *SubStr, char *Buffer, int MaxCount)
{
  rewind(Stream);
  if ( (Stream->_flag & 0x10) == 0 )
  {
    while ( fgets(Buffer, MaxCount, Stream) != nullptr )
    {
      if ( strstr(Str: Buffer, SubStr) != nullptr )
        return 1;
      if ( (Stream->_flag & 0x10) != 0 )
        return 0;
    }
  }
  return 0;
}


/* ============================================
   Address: 0x401B00
   Function: sub_401B00
   ============================================ */

int sub_401B00()
{
  FILE *v0; // eax
  FILE *v1; // esi
  char Buffer[80]; // [esp+8h] [ebp-150h] BYREF
  char FileName[256]; // [esp+58h] [ebp-100h] BYREF

  strcpy(FileName, ::FileName);
  v0 = (FILE *)sub_405C00(FileName, a2: (int)aRt);
  v1 = v0;
  if ( v0 == nullptr )
    return 0;
  sub_401AA0(Stream: v0, SubStr: aDll, Buffer, MaxCount: 80);
  sscanf(Buffer, Format: "DLL=%s", &byte_42B468);
  sub_401AA0(Stream: v1, SubStr: aCheckgdi, Buffer, MaxCount: 80);
  sscanf(Buffer, Format: "CheckGDI=%i", &dword_427094);
  fclose(Stream: v1);
  return 1;
}


/* ============================================
   Address: 0x401BC0
   Function: sub_401BC0
   ============================================ */

DWORD __cdecl sub_401BC0(LPCSTR lpLibFileName)
{
  HMODULE LibraryA; // eax
  int *v3; // esi
  FARPROC ProcAddress; // eax
  FARPROC *v5; // edx

  LibraryA = LoadLibraryA(lpLibFileName);
  hLibModule = LibraryA;
  if ( LibraryA == nullptr )
    return GetLastError();
  v3 = &off_4271A8;
  while ( 1 )
  {
    ProcAddress = GetProcAddress(hModule: LibraryA, lpProcName: (LPCSTR)v3[1]);
    v5 = (FARPROC *)*v3;
    v3 += 2;
    *v5 = ProcAddress;
    if ( v3 >= (int *)aWglcreateconte )
      break;
    LibraryA = hLibModule;
  }
  return 0;
}


/* ============================================
   Address: 0x401C10
   Function: sub_401C10
   ============================================ */

int __stdcall sub_401C10(_DWORD *a1, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int v6; // ecx

  if ( dword_42D5F8 > 127 )
    return 0;
  v3 = dword_42D5F0;
  v4 = dword_42D5F8 + 424 * dword_42D5F0;
  v5 = dword_42D5F8 + 1;
  dword_42B560[v4] = a1[3];
  dword_42B760[v4] = a1[2];
  dword_42B960[v4] = a1[21];
  dword_42D5F8 = v5;
  v6 = 53 * v3;
  dword_42B55C[8 * v6] = v5;
  return 1;
}


/* ============================================
   Address: 0x401C80
   Function: sub_401C80
   ============================================ */

int __cdecl sub_401C80(int *a1)
{
  int v1; // edi
  int v3[79]; // [esp+8h] [ebp-13Ch] BYREF

  v1 = *a1;
  v3[0] = 316;
  (*(void (__stdcall **)(int *, int *, _DWORD))(v1 + 44))(a1, a2: v3, a3: 0);
  (*(void (__stdcall **)(int *, _DWORD, _DWORD, _DWORD, int (__stdcall *)(_DWORD *, int)))(v1 + 32))(
    a1,
    a2: 0,
    a3: 0,
    a4: 0,
    a5: sub_401C10);
  return 1;
}


/* ============================================
   Address: 0x401CD0
   Function: Callback
   ============================================ */

BOOL __stdcall Callback(GUID *lpGUID, const char *a2, const char *a3, LPVOID a4)
{
  int v4; // ebp
  char v5; // al
  int v6; // eax
  HDC DC; // eax
  HDC v8; // ebx
  int v9; // ebp
  int v10; // ecx
  bool v11; // zf
  int *v12; // eax
  HGLRC v13; // esi
  const char *v14; // eax
  int v15; // eax
  int *v16; // ecx
  LPDIRECTDRAW lpDD; // [esp+20h] [ebp-12Ch] BYREF
  PIXELFORMATDESCRIPTOR ppfd; // [esp+24h] [ebp-128h] BYREF
  char Str[256]; // [esp+4Ch] [ebp-100h] BYREF

  sub_401BC0(lpLibFileName: aOpengl32Dll_0);
  memset(&ppfd, 0, sizeof(ppfd));
  v4 = 0;
  ++dword_42D5F0;
  strcpy(Str, a3);
  ppfd.nSize = 40;
  ppfd.nVersion = 1;
  ppfd.dwFlags = 37;
  ppfd.iPixelType = 0;
  ppfd.cColorBits = 16;
  ppfd.iLayerType = 0;
  if ( Str[0] != 0 )
  {
    do
    {
      if ( v4 >= 256 )
        break;
      Str[v4] = tolower(C: Str[v4]);
      v5 = Str[++v4];
    }
    while ( v5 != 0 );
  }
  dword_42BB64[424 * dword_42D5F0] = strstr(Str, SubStr: a3dfx) != nullptr || strstr(Str, SubStr: aMnstr) != nullptr;
  if ( DirectDrawCreate(lpGUID, lplpDD: &lpDD, pUnkOuter: nullptr) == 0 )
  {
    if ( lpDD->lpVtbl->SetCooperativeLevel(This: lpDD, a2: nullptr, a3: 8) < 0 )
    {
LABEL_35:
      lpDD->lpVtbl->Release(This: lpDD);
      goto LABEL_36;
    }
    v6 = dword_42DC94;
    dword_42BB60[424 * dword_42D5F0] = 0;
    DC = GetDC(hWnd: *(HWND *)(v6 + 28));
    v8 = DC;
    if ( lpGUID != nullptr )
    {
      v15 = 424 * dword_42D5F0;
      *(GUID *)&dword_42B548[v15] = *lpGUID;
      if ( dword_42BB64[v15] == 1 )
      {
        byte_42B464 = 1;
        dword_42BB60[v15] = 1;
      }
      else
      {
        byte_42B464 = 0;
        dword_42BB60[v15] = 0;
      }
    }
    else
    {
      v9 = dword_42B4C0(a1: DC, a2: &ppfd);
      if ( v9 == 0
        || (ppfd.dwFlags & 0x20) == 0
        || (ppfd.dwFlags & 0x40) != 0 && (ppfd.dwFlags & 0x1000) == 0
        || (ppfd.dwFlags & 1) == 0
        || ppfd.iPixelType != 0
        || ppfd.cColorBits != 16
        || ppfd.iLayerType != 0 )
      {
        goto LABEL_34;
      }
      v10 = dword_42D5F0;
      v11 = dword_427094 == 0;
      v12 = &dword_42BB60[424 * dword_42D5F0];
      *v12 = 0;
      if ( v11 )
      {
        dword_42B3E4 = 1;
        byte_42B464 = 1;
        *v12 = 1;
      }
      else
      {
        if ( dword_42B4BC(a1: v8, a2: v9, a3: &ppfd) != 0 )
        {
          v13 = (HGLRC)dword_42D5E8(a1: v8);
          GetLastError();
          if ( v13 != nullptr
            || SetPixelFormat(hdc: v8, format: v9, &ppfd)
            && (v13 = (HGLRC)dword_42D5E8(a1: v8), GetLastError(), v13 != nullptr) )
          {
            if ( wglMakeCurrent(a1: v8, a2: v13) )
            {
              dword_42B4B8(a1: 7936);
              v14 = (const char *)dword_42B4B8(a1: 7937);
              if ( strstr(Str: v14, SubStr: aGdiGeneric) == nullptr )
              {
                byte_42B464 = 1;
                dword_42B3E4 = 1;
                dword_42BB60[424 * dword_42D5F0] = 1;
              }
            }
            wglDeleteContext(a1: v13);
          }
        }
        v10 = dword_42D5F0;
      }
      v15 = 424 * v10;
      v16 = &dword_42B548[v15];
      dword_42B548[v15] = 0;
      v16[1] = 0;
      v16[2] = 0;
      v16[3] = 0;
    }
    strcpy(&byte_42B4C8[v15 * 4], a2);
    dword_42D5F8 = 0;
    sub_401C80(a1: (int *)lpDD);
LABEL_34:
    ReleaseDC(hWnd: *(HWND *)(dword_42DC94 + 28), hDC: v8);
    goto LABEL_35;
  }
LABEL_36:
  if ( hLibModule != nullptr )
    FreeLibrary(hLibModule: hLibModule);
  return true;
}


/* ============================================
   Address: 0x4020B0
   Function: sub_4020B0
   ============================================ */

int sub_4020B0()
{
  int *v0; // eax
  int result; // eax
  int *v2; // edi
  int v3; // eax
  int v4; // esi
  int *v5; // eax
  int *v6; // ecx
  int *v7; // edx
  int *v8; // esi
  int v9; // edi
  int v10; // ebx
  bool v11; // zf
  int v12; // [esp+10h] [ebp-18h]
  int v13; // [esp+14h] [ebp-14h]
  int i; // [esp+18h] [ebp-10h]
  int *v15; // [esp+1Ch] [ebp-Ch]
  int v16; // [esp+20h] [ebp-8h]
  int v17; // [esp+24h] [ebp-4h]

  v0 = dword_42BB60;
  dword_42D5F0 = 0;
  do
  {
    v0[1] = 0;
    *v0 = 0;
    v0 += 424;
  }
  while ( (int)v0 <= (int)&unk_42D5E0 );
  dword_42B3E4 = 0;
  DirectDrawEnumerateA(lpCallback: (LPDDENUMCALLBACKA)Callback, lpContext: nullptr);
  result = dword_42D5F0;
  if ( dword_42D5F0 >= 1 )
  {
    v2 = &dword_42BBFC;
    v12 = 424;
    v15 = &dword_42BBFC;
    v16 = dword_42D5F0;
    do
    {
      v3 = 0;
      for ( i = 0; v3 < *v2; i = v3 )
      {
        v13 = 0;
        if ( *v2 > 0 )
        {
          v4 = v3 + v12;
          v5 = v2 + 129;
          v4 *= 4;
          v6 = (int *)((char *)dword_42B560 + v4);
          v7 = (int *)((char *)dword_42B760 + v4);
          v8 = (int *)((char *)dword_42B960 + v4);
          do
          {
            if ( v5[128] + *v5 * *(v5 - 128) > *v8 + *v7 * *v6 )
            {
              v9 = *v6;
              v10 = *v7;
              v17 = *v8;
              *v6 = *(v5 - 128);
              *v7 = *v5;
              *v8 = v5[128];
              *(v5 - 128) = v9;
              *v5 = v10;
              v5[128] = v17;
            }
            v2 = v15;
            ++v5;
            ++v13;
          }
          while ( v13 < *v15 );
          v3 = i;
        }
        ++v3;
      }
      v2 += 424;
      result = v16 - 1;
      v11 = v16 == 1;
      v15 = v2;
      v12 += 424;
      --v16;
    }
    while ( !v11 );
  }
  return result;
}


/* ============================================
   Address: 0x402200
   Function: sub_402200
   ============================================ */

int __cdecl sub_402200(int a1, int a2)
{
  _DWORD *v2; // eax

  v2 = &unk_427184;
  while ( *(v2 - 1) != a1 || *v2 != a2 )
  {
    v2 += 2;
    if ( (int)v2 > (int)&dword_4271A4 )
      return 0;
  }
  return 1;
}


/* ============================================
   Address: 0x402230
   Function: sub_402230
   ============================================ */

int __thiscall sub_402230(int this, struct CWnd *a2)
{
  CDialog::CDialog((CDialog *)this, a2: 0x9Bu, a3: a2);
  CWnd::CWnd(this: (CWnd *)(this + 92));
  *(_DWORD *)(this + 92) = &CStatic::`vftable';
  CWnd::CWnd(this: (CWnd *)(this + 152));
  *(_DWORD *)(this + 152) = &CComboBox::`vftable';
  *(_DWORD *)this = &off_422030;
  return this;
}


/* ============================================
   Address: 0x4022B0
   Function: nullsub_1
   ============================================ */

void nullsub_1()
{
  ;
}


/* ============================================
   Address: 0x4022C0
   Function: nullsub_2
   ============================================ */

void __stdcall nullsub_2(int a1)
{
  ;
}


/* ============================================
   Address: 0x4022D0
   Function: sub_4022D0
   ============================================ */

BOOL __thiscall sub_4022D0(HWND *this)
{
  return EnableWindow(hWnd: *(this + 7), bEnable: false);
}


/* ============================================
   Address: 0x4022E0
   Function: sub_4022E0
   ============================================ */

BOOL __thiscall sub_4022E0(HWND *this)
{
  return EnableWindow(hWnd: *(this + 7), bEnable: true);
}


/* ============================================
   Address: 0x4022F0
   Function: sub_4022F0
   ============================================ */

void *__thiscall sub_4022F0(void *Block, char a2)
{
  sub_41D0C9();
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}


/* ============================================
   Address: 0x402310
   Function: sub_402310
   ============================================ */

void *__thiscall sub_402310(void *Block, char a2)
{
  sub_41D16A();
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}


/* ============================================
   Address: 0x402330
   Function: sub_402330
   ============================================ */

void *__thiscall sub_402330(void *Block, char a2)
{
  sub_402350();
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}


/* ============================================
   Address: 0x402350
   Function: sub_402350
   ============================================ */

int __thiscall sub_402350(char *this)
{
  sub_41D16A(a1: this + 152);
  sub_41D0C9(a1: this + 92);
  return sub_416558(a1: this);
}


/* ============================================
   Address: 0x4023B0
   Function: sub_4023B0
   ============================================ */

void __thiscall sub_4023B0(int this, struct CDataExchange *a2)
{
  DDX_Control(a1: a2, a2: 1013, a3: (struct CWnd *)(this + 92));
  DDX_Control(a1: a2, a2: 1002, a3: (struct CWnd *)(this + 152));
}


/* ============================================
   Address: 0x4023E0
   Function: sub_4023E0
   ============================================ */

_UNKNOWN ****sub_4023E0()
{
  return &off_422010;
}


/* ============================================
   Address: 0x4023F0
   Function: sub_4023F0
   ============================================ */

void __thiscall sub_4023F0(HWND *this)
{
  switch ( SendMessageA(hWnd: *(this + 45), Msg: 0x147u, wParam: 0, lParam: 0) )
  {
    case 0:
      dword_42B3E0 = 2;
      CDialog::OnOK((CDialog *)this);
      break;
    case 1:
      dword_42B3E0 = 0;
      CDialog::OnOK((CDialog *)this);
      break;
    case 2:
      dword_42B3E0 = 3;
      CDialog::OnOK((CDialog *)this);
      break;
    case 3:
      dword_42B3E0 = 1;
      CDialog::OnOK((CDialog *)this);
      break;
    case 4:
      dword_42B3E0 = 4;
      CDialog::OnOK((CDialog *)this);
      break;
    case 5:
      dword_42B3E0 = 5;
      goto LABEL_8;
    default:
LABEL_8:
      CDialog::OnOK((CDialog *)this);
      break;
  }
}


/* ============================================
   Address: 0x4024A0
   Function: sub_4024A0
   ============================================ */

// attributes: thunk
int sub_4024A0()
{
  return sub_416B7E();
}


/* ============================================
   Address: 0x4024B0
   Function: sub_4024B0
   ============================================ */

int __thiscall sub_4024B0(HWND *this)
{
  WPARAM v3; // [esp-8h] [ebp-20h]
  char *v4; // [esp+8h] [ebp-10h] BYREF
  int v5; // [esp+14h] [ebp-4h]

  CDialog::OnInitDialog((CDialog *)this);
  CString::CString(this: (CString *)&v4);
  v5 = 0;
  switch ( dword_42B3E0 )
  {
    case 0:
      CString::LoadStringA(this: (CString *)&v4, a2: 0xBBu);
      break;
    case 1:
      CString::LoadStringA(this: (CString *)&v4, a2: 0x7Fu);
      break;
    case 2:
      CString::LoadStringA(this: (CString *)&v4, a2: 0x133u);
      break;
    case 3:
      CString::LoadStringA(this: (CString *)&v4, a2: 0xD9u);
      break;
    case 4:
      CString::LoadStringA(this: (CString *)&v4, a2: 0xF7u);
      break;
    case 5:
      CString::LoadStringA(this: (CString *)&v4, a2: 0x115u);
      break;
    default:
      break;
  }
  CWnd::SetWindowTextA(this: (CWnd *)(this + 23), a2: v4);
  SendMessageA(hWnd: *(this + 45), Msg: 0x143u, wParam: 0, lParam: (LPARAM)aDeutsch);
  SendMessageA(hWnd: *(this + 45), Msg: 0x143u, wParam: 0, lParam: (LPARAM)aEnglish);
  SendMessageA(hWnd: *(this + 45), Msg: 0x143u, wParam: 0, lParam: (LPARAM)&unk_427264);
  SendMessageA(hWnd: *(this + 45), Msg: 0x143u, wParam: 0, lParam: (LPARAM)&unk_427258);
  SendMessageA(hWnd: *(this + 45), Msg: 0x143u, wParam: 0, lParam: (LPARAM)aItaliano);
  SendMessageA(hWnd: *(this + 45), Msg: 0x143u, wParam: 0, lParam: (LPARAM)aNederlands);
  switch ( dword_42B3E0 )
  {
    case 0:
      SendMessageA(hWnd: *(this + 45), Msg: 0x14Eu, wParam: 1u, lParam: 0);
      break;
    case 1:
      SendMessageA(hWnd: *(this + 45), Msg: 0x14Eu, wParam: 3u, lParam: 0);
      break;
    case 2:
      v3 = 0;
      goto LABEL_15;
    case 3:
      SendMessageA(hWnd: *(this + 45), Msg: 0x14Eu, wParam: 2u, lParam: 0);
      break;
    case 4:
      SendMessageA(hWnd: *(this + 45), Msg: 0x14Eu, wParam: 4u, lParam: 0);
      break;
    case 5:
      v3 = 5;
LABEL_15:
      SendMessageA(hWnd: *(this + 45), Msg: 0x14Eu, wParam: v3, lParam: 0);
      break;
    default:
      break;
  }
  v5 = -1;
  CString::~CString(this: (CString *)&v4);
  return 1;
}


/* ============================================
   Address: 0x402680
   Function: sub_402680
   ============================================ */

_UNKNOWN ***sub_402680()
{
  return &off_422108;
}


/* ============================================
   Address: 0x4026B0
   Function: sub_4026B0
   ============================================ */

CWinApp *__thiscall sub_4026B0(CWinApp *Block, char a2)
{
  CWinApp::~CWinApp(this: Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}


/* ============================================
   Address: 0x4026D0
   Function: j_??1CWinApp@@UAE@XZ
   ============================================ */

// attributes: thunk
void __thiscall CWinApp::~CWinApp(CWinApp *this)
{
  ??1CWinApp@@UAE@XZ(this);
}


/* ============================================
   Address: 0x4026E0
   Function: sub_4026E0
   ============================================ */

int sub_4026E0()
{
  unknown_libname_1();
  return atexit(a1: unknown_libname_2);
}


/* ============================================
   Address: 0x4026F0
   Function: unknown_libname_1
   ============================================ */

// Microsoft VisualC 2-14/net runtime
_DWORD *unknown_libname_1()
{
  CWinApp::CWinApp(this: (CWinApp *)dword_42D600, a2: nullptr);
  dword_42D600[0] = &off_422128;
  return dword_42D600;
}


/* ============================================
   Address: 0x402710
   Function: unknown_libname_2
   ============================================ */

// Microsoft VisualC 2-14/net runtime
void __cdecl unknown_libname_2()
{
  CWinApp::~CWinApp(this: (CWinApp *)dword_42D600);
}


/* ============================================
   Address: 0x402720
   Function: sub_402720
   ============================================ */

char sub_402720()
{
  FILE *v0; // eax
  FILE *v1; // eax
  HKEY v3; // [esp-4h] [ebp-328h]
  HKEY phkResult; // [esp+Ch] [ebp-318h] BYREF
  DWORD Type; // [esp+10h] [ebp-314h] BYREF
  DWORD cbData; // [esp+14h] [ebp-310h] BYREF
  BYTE Data[260]; // [esp+18h] [ebp-30Ch] BYREF
  _BYTE FileName[260]; // [esp+11Ch] [ebp-208h] BYREF
  _BYTE v9[260]; // [esp+220h] [ebp-104h] BYREF

  FileName[0] = CommandLine;
  memset(&FileName[1], 0, 259);
  v9[0] = CommandLine;
  memset(&v9[1], 0, 259);
  Type = 1;
  cbData = 260;
  if ( RegOpenKeyExA(hKey: HKEY_CURRENT_USER, lpSubKey: aSoftwareInfogr, ulOptions: 0, samDesired: 0x20019u, &phkResult) == 0 )
  {
    if ( RegQueryValueExA(
           hKey: phkResult,
           lpValueName: aInstallationPa,
           lpReserved: nullptr,
           lpType: &Type,
           lpData: Data,
           lpcbData: &cbData) == 0 )
    {
      if ( Data[strlen((const char *)Data) - 1] != 92 )
        strcat((char *)Data, asc_4272A0);
      strcpy(FileName, (const char *)Data);
      strcat(FileName, aBinBugsExe);
      v0 = (FILE *)sub_405C00(FileName, a2: (int)aR);
      if ( v0 != nullptr )
      {
        fclose(Stream: v0);
        strcpy(v9, (const char *)Data);
        strcat(v9, aBugsbunnyExe);
        v1 = (FILE *)sub_405C00(FileName: v9, a2: (int)aR);
        if ( v1 != nullptr )
        {
          fclose(Stream: v1);
          strcpy(byte_42D7D0, (const char *)Data);
          strcpy(&byte_42D6C8, FileName);
          v3 = phkResult;
          strcpy(ApplicationName, v9);
          RegCloseKey(hKey: v3);
          return 1;
        }
      }
    }
    RegCloseKey(hKey: phkResult);
  }
  return 0;
}


/* ============================================
   Address: 0x4029A0
   Function: sub_4029A0
   ============================================ */

char sub_4029A0()
{
  char result; // al
  CHAR CurrentDirectory[260]; // [esp+2h] [ebp-104h] BYREF

  result = sub_402720();
  if ( result != 0 )
  {
    strcpy(CurrentDirectory, byte_42D7D0);
    CurrentDirectory[strlen(byte_42D7D0) - 1] = 0;
    return sub_402A10(
             lpApplicationName: ApplicationName,
             lpCommandLine: &CommandLine,
             lpCurrentDirectory: CurrentDirectory);
  }
  return result;
}


/* ============================================
   Address: 0x402A10
   Function: sub_402A10
   ============================================ */

BOOL __cdecl sub_402A10(LPCSTR lpApplicationName, LPSTR lpCommandLine, LPCSTR lpCurrentDirectory)
{
  BOOL v3; // esi
  DWORD LastError; // eax
  struct _PROCESS_INFORMATION ProcessInformation; // [esp+8h] [ebp-60h] BYREF
  struct _STARTUPINFOA StartupInfo; // [esp+18h] [ebp-50h] BYREF
  int v8; // [esp+64h] [ebp-4h]

  memset(&StartupInfo, 0, sizeof(StartupInfo));
  StartupInfo.cb = 68;
  v3 = CreateProcessA(
         lpApplicationName,
         lpCommandLine,
         lpProcessAttributes: nullptr,
         lpThreadAttributes: nullptr,
         bInheritHandles: false,
         dwCreationFlags: 0x4000208u,
         lpEnvironment: nullptr,
         lpCurrentDirectory,
         lpStartupInfo: &StartupInfo,
         lpProcessInformation: &ProcessInformation);
  if ( !v3 )
  {
    CString::CString(this: (CString *)&lpCurrentDirectory);
    v8 = 0;
    switch ( dword_42B3E0 )
    {
      case 0:
        CString::LoadStringA(this: (CString *)&lpCurrentDirectory, a2: 0xA0u);
        break;
      case 1:
        CString::LoadStringA(this: (CString *)&lpCurrentDirectory, a2: 0x66u);
        break;
      case 2:
        CString::LoadStringA(this: (CString *)&lpCurrentDirectory, a2: 0x118u);
        break;
      case 3:
        CString::LoadStringA(this: (CString *)&lpCurrentDirectory, a2: 0xBEu);
        break;
      case 4:
        CString::LoadStringA(this: (CString *)&lpCurrentDirectory, a2: 0xDCu);
        break;
      case 5:
        CString::LoadStringA(this: (CString *)&lpCurrentDirectory, a2: 0xFAu);
        break;
      default:
        break;
    }
    LastError = GetLastError();
    FormatMessageA(
      dwFlags: 0x1300u,
      lpSource: nullptr,
      dwMessageId: LastError,
      dwLanguageId: 0,
      lpBuffer: (LPSTR)&lpCommandLine,
      nSize: 0,
      Arguments: nullptr);
    MessageBoxA(hWnd: nullptr, lpText: lpCommandLine, lpCaption: lpCurrentDirectory, uType: 0);
    LocalFree(hMem: lpCommandLine);
    v8 = -1;
    CString::~CString(this: (CString *)&lpCurrentDirectory);
  }
  return v3;
}


/* ============================================
   Address: 0x402B40
   Function: sub_402B40
   ============================================ */

char sub_402B40()
{
  HWND WindowA; // eax
  struct CWnd *v1; // eax

  WindowA = FindWindowA(lpClassName: aBblitGame, lpWindowName: nullptr);
  v1 = CWnd::FromHandle(a1: WindowA);
  if ( v1 == nullptr )
    return 0;
  SetForegroundWindow(hWnd: *((HWND *)v1 + 7));
  return 1;
}


/* ============================================
   Address: 0x402B70
   Function: sub_402B70
   ============================================ */

char sub_402B70()
{
  HWND WindowA; // eax
  HWND *v1; // esi

  WindowA = FindWindowA(lpClassName: aBblit, lpWindowName: nullptr);
  v1 = (HWND *)CWnd::FromHandle(a1: WindowA);
  if ( v1 == nullptr )
    return 1;
  if ( IsIconic(hWnd: v1[7]) )
    CWnd::ShowWindow(this: (CWnd *)v1, a2: 9);
  SetForegroundWindow(hWnd: v1[7]);
  return 0;
}


/* ============================================
   Address: 0x402BC0
   Function: sub_402BC0
   ============================================ */

bool sub_402BC0()
{
  CHAR RootPathName[260]; // [esp+0h] [ebp-104h] BYREF

  sub_406A90(a1: RootPathName, a2: 260);
  RootPathName[3] = 0;
  return GetDriveTypeA(lpRootPathName: RootPathName) == 5;
}


/* ============================================
   Address: 0x402C00
   Function: sub_402C00
   ============================================ */

int __usercall sub_402C00@<eax>(CWinApp *this@<ecx>, char a2@<efl>)
{
  _BYTE v4[92]; // [esp+4h] [ebp-218h] BYREF
  _BYTE v5[60]; // [esp+60h] [ebp-1BCh] BYREF
  _BYTE v6[60]; // [esp+9Ch] [ebp-180h] BYREF
  _BYTE v7[60]; // [esp+D8h] [ebp-144h] BYREF
  _BYTE v8[60]; // [esp+114h] [ebp-108h] BYREF
  _BYTE v9[60]; // [esp+150h] [ebp-CCh] BYREF
  _BYTE v10[60]; // [esp+18Ch] [ebp-90h] BYREF
  _BYTE v11[72]; // [esp+1C8h] [ebp-54h] BYREF
  int v12; // [esp+218h] [ebp-4h]

  sub_401A60(a1: a2);
  CWinApp::Enable3dControlsStatic(this);
  dword_42D6C0 = LoadLibraryA(lpLibFileName: aOpengl32Dll_0);
  if ( sub_402B40() == 0 && sub_402B70() != 0 )
  {
    sub_401B00();
    sub_402F20(a1: nullptr);
    v12 = 0;
    *((_DWORD *)this + 7) = v4;
    CDialog::DoModal(this: (CDialog *)v4);
    if ( dword_42D6C0 != nullptr )
      FreeLibrary(hLibModule: dword_42D6C0);
    v12 = 7;
    sub_41D0C9(a1: v11);
    LOBYTE(v12) = 6;
    sub_41D101(a1: v10);
    LOBYTE(v12) = 5;
    sub_41D101(a1: v9);
    LOBYTE(v12) = 4;
    sub_41D101(a1: v8);
    LOBYTE(v12) = 3;
    sub_41D101(a1: v7);
    LOBYTE(v12) = 2;
    sub_41D101(a1: v6);
    LOBYTE(v12) = 1;
    sub_41D101(a1: v5);
    v12 = -1;
    sub_416558(a1: v4);
  }
  return 0;
}


/* ============================================
   Address: 0x402D50
   Function: sub_402D50
   ============================================ */

int __thiscall sub_402D50(char *this)
{
  sub_41D0C9(a1: this + 452);
  sub_41D101(a1: this + 392);
  sub_41D101(a1: this + 332);
  sub_41D101(a1: this + 272);
  sub_41D101(a1: this + 212);
  sub_41D101(a1: this + 152);
  sub_41D101(a1: this + 92);
  return sub_416558(a1: this);
}


/* ============================================
   Address: 0x402E00
   Function: sub_402E00
   ============================================ */

int sub_402E00()
{
  unknown_libname_3();
  return atexit(a1: sub_402E30);
}


/* ============================================
   Address: 0x402E10
   Function: unknown_libname_3
   ============================================ */

// Microsoft VisualC 2-14/net runtime
int unknown_libname_3()
{
  return sub_404620(a1: nullptr);
}


/* ============================================
   Address: 0x402E30
   Function: sub_402E30
   ============================================ */

void __cdecl sub_402E30()
{
  sub_402E40(a1: &unk_42D9E0);
}


/* ============================================
   Address: 0x402E40
   Function: sub_402E40
   ============================================ */

int __thiscall sub_402E40(char *this)
{
  sub_41D16A(a1: this + 632);
  sub_41D16A(a1: this + 572);
  sub_41D101(a1: this + 512);
  sub_41D101(a1: this + 452);
  sub_41D0C9(a1: this + 392);
  sub_41D0C9(a1: this + 332);
  sub_41D0C9(a1: this + 272);
  sub_41D16A(a1: this + 212);
  sub_41D101(a1: this + 152);
  sub_41D101(a1: this + 92);
  return sub_416558(a1: this);
}


/* ============================================
   Address: 0x402F20
   Function: sub_402F20
   ============================================ */

_DWORD *__thiscall sub_402F20(_DWORD *this, struct CWnd *a2)
{
  struct AFX_MODULE_STATE *ModuleState; // eax

  CDialog::CDialog((CDialog *)this, a2: 0x66u, a3: a2);
  CWnd::CWnd(this: (CWnd *)(this + 23));
  *(this + 23) = &CButton::`vftable';
  CWnd::CWnd(this: (CWnd *)(this + 38));
  *(this + 38) = &CButton::`vftable';
  CWnd::CWnd(this: (CWnd *)(this + 53));
  *(this + 53) = &CButton::`vftable';
  CWnd::CWnd(this: (CWnd *)(this + 68));
  *(this + 68) = &CButton::`vftable';
  CWnd::CWnd(this: (CWnd *)(this + 83));
  *(this + 83) = &CButton::`vftable';
  CWnd::CWnd(this: (CWnd *)(this + 98));
  *(this + 98) = &CButton::`vftable';
  CWnd::CWnd(this: (CWnd *)(this + 113));
  *(this + 113) = &CStatic::`vftable';
  *this = &off_4222F8;
  AfxGetModuleState();
  ModuleState = AfxGetModuleState();
  *(this + 128) = LoadIconA(hInstance: *((HINSTANCE *)ModuleState + 3), lpIconName: (LPCSTR)0x80);
  *(this + 129) = 0;
  return this;
}


/* ============================================
   Address: 0x403040
   Function: sub_403040
   ============================================ */

void *__thiscall sub_403040(void *Block, char a2)
{
  sub_41D101(a1: Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}


/* ============================================
   Address: 0x403060
   Function: sub_403060
   ============================================ */

char *__thiscall sub_403060(char *Block, char a2)
{
  sub_402D50(this: Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}


/* ============================================
   Address: 0x403080
   Function: sub_403080
   ============================================ */

void __thiscall sub_403080(int this, struct CDataExchange *a2)
{
  DDX_Control(a1: a2, a2: 1008, a3: (struct CWnd *)(this + 92));
  DDX_Control(a1: a2, a2: 1006, a3: (struct CWnd *)(this + 152));
  DDX_Control(a1: a2, a2: 1004, a3: (struct CWnd *)(this + 212));
  DDX_Control(a1: a2, a2: 1007, a3: (struct CWnd *)(this + 272));
  DDX_Control(a1: a2, a2: 1003, a3: (struct CWnd *)(this + 332));
  DDX_Control(a1: a2, a2: 1005, a3: (struct CWnd *)(this + 392));
  DDX_Control(a1: a2, a2: 1016, a3: (struct CWnd *)(this + 452));
}


/* ============================================
   Address: 0x403110
   Function: sub_403110
   ============================================ */

_UNKNOWN ****sub_403110()
{
  return &off_4221D0;
}


/* ============================================
   Address: 0x403120
   Function: sub_403120
   ============================================ */

int __thiscall sub_403120(HWND *this)
{
  HINSTANCE v2; // edi
  CHAR v4; // al
  HICON IconA; // eax
  char Path[12]; // [esp+8h] [ebp-ECh] BYREF
  _BYTE v7[92]; // [esp+14h] [ebp-E0h] BYREF
  _BYTE v8[60]; // [esp+70h] [ebp-84h] BYREF
  _BYTE v9[60]; // [esp+ACh] [ebp-48h] BYREF
  int v10; // [esp+F0h] [ebp-4h]

  dword_42DC94 = (int)this;
  CDialog::OnInitDialog((CDialog *)this);
  v2 = *((HINSTANCE *)AfxGetModuleState() + 2);
  sub_4020B0();
  if ( sub_402720() == 1 )
  {
    if ( sub_402BC0() )
    {
      sub_4045E0(a1: this);
      sub_4029A0();
LABEL_4:
      PostQuitMessage(nExitCode: 0);
      return 0;
    }
    if ( sub_401070() != 0 )
    {
      sub_401100();
      sub_401000();
      sub_401390();
    }
    else
    {
      sub_401490();
      if ( dword_42B3E4 == 2 )
        dword_42B3E4 = 1;
    }
  }
  else
  {
    if ( !sub_402BC0() )
      goto LABEL_4;
    v4 = sub_401610();
    if ( v4 != 0 )
    {
      strcpy(Path, "d:\\Datas");
      Path[0] = tolower(C: v4);
      _chdrive(Drive: Path[0] - 96);
      _chdir(Path);
    }
    sub_401100();
    sub_402230(this: (int)v7, a2: nullptr);
    v10 = 0;
    if ( CDialog::DoModal(this: (CDialog *)v7) == 2 )
    {
      PostQuitMessage(nExitCode: 0);
      v10 = 2;
      sub_41D16A(a1: v9);
      LOBYTE(v10) = 1;
      sub_41D0C9(a1: v8);
      v10 = -1;
      sub_416558(a1: v7);
      return 0;
    }
    v10 = 4;
    sub_41D16A(a1: v9);
    LOBYTE(v10) = 3;
    sub_41D0C9(a1: v8);
    v10 = -1;
    sub_416558(a1: v7);
  }
  if ( (unsigned int)dword_42B3E0 >= 6 )
    dword_42B3E0 = 0;
  sub_4044D0(a1: this);
  IconA = LoadIconA(hInstance: v2, lpIconName: (LPCSTR)0x83);
  SendMessageA(hWnd: *(this + 7), Msg: 0x80u, wParam: 0, lParam: (LPARAM)IconA);
  sub_403340((CWnd *)this);
  return 1;
}


/* ============================================
   Address: 0x403340
   Function: sub_403340
   ============================================ */

void __thiscall sub_403340(CWnd *this)
{
  HINSTANCE v2; // eax
  char *v3; // [esp+8h] [ebp-10h] BYREF
  int v4; // [esp+14h] [ebp-4h]

  CString::CString(this: (CString *)&v3);
  v4 = 0;
  v2 = *((HINSTANCE *)AfxGetModuleState() + 2);
  switch ( dword_42B3E0 )
  {
    case 0:
      LoadBitmapA(hInstance: v2, lpBitmapName: (LPCSTR)0x9D);
      CString::LoadStringA(this: (CString *)&v3, a2: 0xA0u);
      break;
    case 1:
      LoadBitmapA(hInstance: v2, lpBitmapName: (LPCSTR)0x9F);
      CString::LoadStringA(this: (CString *)&v3, a2: 0x66u);
      break;
    case 2:
      LoadBitmapA(hInstance: v2, lpBitmapName: (LPCSTR)0xA0);
      CString::LoadStringA(this: (CString *)&v3, a2: 0x118u);
      break;
    case 3:
      LoadBitmapA(hInstance: v2, lpBitmapName: (LPCSTR)0x9E);
      CString::LoadStringA(this: (CString *)&v3, a2: 0xBEu);
      break;
    case 4:
      LoadBitmapA(hInstance: v2, lpBitmapName: (LPCSTR)0x9D);
      CString::LoadStringA(this: (CString *)&v3, a2: 0xDCu);
      break;
    case 5:
      LoadBitmapA(hInstance: v2, lpBitmapName: (LPCSTR)0xA2);
      CString::LoadStringA(this: (CString *)&v3, a2: 0xFAu);
      break;
    default:
      break;
  }
  CWnd::SetWindowTextA(this, a2: v3);
  if ( byte_42D6C8 != 0 )
  {
    switch ( dword_42B3E0 )
    {
      case 0:
        CString::LoadStringA(this: (CString *)&v3, a2: 0xA6u);
        break;
      case 1:
        CString::LoadStringA(this: (CString *)&v3, a2: 0x6Cu);
        break;
      case 2:
        CString::LoadStringA(this: (CString *)&v3, a2: 0x11Eu);
        break;
      case 3:
        CString::LoadStringA(this: (CString *)&v3, a2: 0xC4u);
        break;
      case 4:
        CString::LoadStringA(this: (CString *)&v3, a2: 0xE2u);
        break;
      case 5:
        CString::LoadStringA(this: (CString *)&v3, a2: 0x100u);
        break;
      default:
        break;
    }
  }
  else
  {
    switch ( dword_42B3E0 )
    {
      case 0:
        CString::LoadStringA(this: (CString *)&v3, a2: 0xA8u);
        break;
      case 1:
        CString::LoadStringA(this: (CString *)&v3, a2: 0x6Eu);
        break;
      case 2:
        CString::LoadStringA(this: (CString *)&v3, a2: 0x120u);
        break;
      case 3:
        CString::LoadStringA(this: (CString *)&v3, a2: 0xC6u);
        break;
      case 4:
        CString::LoadStringA(this: (CString *)&v3, a2: 0xE4u);
        break;
      case 5:
        CString::LoadStringA(this: (CString *)&v3, a2: 0x102u);
        break;
      default:
        break;
    }
  }
  CWnd::SetWindowTextA(this: (CWnd *)((char *)this + 332), a2: v3);
  switch ( dword_42B3E0 )
  {
    case 0:
      CString::LoadStringA(this: (CString *)&v3, a2: 0xABu);
      break;
    case 1:
      CString::LoadStringA(this: (CString *)&v3, a2: 0x71u);
      break;
    case 2:
      CString::LoadStringA(this: (CString *)&v3, a2: 0x123u);
      break;
    case 3:
      CString::LoadStringA(this: (CString *)&v3, a2: 0xC9u);
      break;
    case 4:
      CString::LoadStringA(this: (CString *)&v3, a2: 0xE7u);
      break;
    case 5:
      CString::LoadStringA(this: (CString *)&v3, a2: 0x105u);
      break;
    default:
      break;
  }
  CWnd::SetWindowTextA(this: (CWnd *)((char *)this + 212), a2: v3);
  if ( byte_42D6C8 == 0 )
    CWnd::EnableWindow(this: (CWnd *)((char *)this + 212), a2: 0);
  switch ( dword_42B3E0 )
  {
    case 0:
      CString::LoadStringA(this: (CString *)&v3, a2: 0xADu);
      break;
    case 1:
      CString::LoadStringA(this: (CString *)&v3, a2: 0x73u);
      break;
    case 2:
      CString::LoadStringA(this: (CString *)&v3, a2: 0x125u);
      break;
    case 3:
      CString::LoadStringA(this: (CString *)&v3, a2: 0xCBu);
      break;
    case 4:
      CString::LoadStringA(this: (CString *)&v3, a2: 0xE9u);
      break;
    case 5:
      CString::LoadStringA(this: (CString *)&v3, a2: 0x107u);
      break;
    default:
      break;
  }
  CWnd::SetWindowTextA(this: (CWnd *)((char *)this + 92), a2: v3);
  switch ( dword_42B3E0 )
  {
    case 0:
      CString::LoadStringA(this: (CString *)&v3, a2: 0xA9u);
      break;
    case 1:
      CString::LoadStringA(this: (CString *)&v3, a2: 0x6Fu);
      break;
    case 2:
      CString::LoadStringA(this: (CString *)&v3, a2: 0x121u);
      break;
    case 3:
      CString::LoadStringA(this: (CString *)&v3, a2: 0xC7u);
      break;
    case 4:
      CString::LoadStringA(this: (CString *)&v3, a2: 0xE5u);
      break;
    case 5:
      CString::LoadStringA(this: (CString *)&v3, a2: 0x103u);
      break;
    default:
      break;
  }
  CWnd::SetWindowTextA(this: (CWnd *)((char *)this + 392), a2: v3);
  CWnd::SetWindowTextA(this: (CWnd *)((char *)this + 152), a2: aWwwBugsbunnyGa);
  switch ( dword_42B3E0 )
  {
    case 0:
      CString::LoadStringA(this: (CString *)&v3, a2: 0xACu);
      break;
    case 1:
      CString::LoadStringA(this: (CString *)&v3, a2: 0x72u);
      break;
    case 2:
      CString::LoadStringA(this: (CString *)&v3, a2: 0x124u);
      break;
    case 3:
      CString::LoadStringA(this: (CString *)&v3, a2: 0xCAu);
      break;
    case 4:
      CString::LoadStringA(this: (CString *)&v3, a2: 0xE8u);
      break;
    case 5:
      CString::LoadStringA(this: (CString *)&v3, a2: 0x106u);
      break;
    default:
      break;
  }
  CWnd::SetWindowTextA(this: (CWnd *)((char *)this + 272), a2: v3);
  v4 = -1;
  CString::~CString(this: (CString *)&v3);
}


/* ============================================
   Address: 0x4036D0
   Function: sub_4036D0
   ============================================ */

void __thiscall sub_4036D0(struct CWnd *this)
{
  HWND v2; // ecx
  int SystemMetrics; // ebx
  int v4; // edi
  struct tagRECT Rect; // [esp+4h] [ebp-70h] BYREF
  _BYTE v6[4]; // [esp+14h] [ebp-60h] BYREF
  HDC hDC; // [esp+18h] [ebp-5Ch]
  int v8; // [esp+70h] [ebp-4h]

  if ( IsIconic(hWnd: *((HWND *)this + 7)) )
  {
    CPaintDC::CPaintDC(this: (CPaintDC *)v6, a2: this);
    v2 = *((HWND *)this + 7);
    v8 = 0;
    SendMessageA(hWnd: v2, Msg: 0x27u, wParam: v6 != nullptr ? (unsigned int)hDC : 0, lParam: 0);
    SystemMetrics = GetSystemMetrics(nIndex: 11);
    v4 = GetSystemMetrics(nIndex: 12);
    GetClientRect(hWnd: *((HWND *)this + 7), lpRect: &Rect);
    DrawIcon(
      hDC,
      X: (Rect.right - SystemMetrics - Rect.left + 1) / 2,
      Y: (Rect.bottom - v4 - Rect.top + 1) / 2,
      hIcon: *((HICON *)this + 128));
    v8 = -1;
    CPaintDC::~CPaintDC(this: (CPaintDC *)v6);
  }
  else
  {
    CWnd::Default(this);
  }
}


/* ============================================
   Address: 0x4037D0
   Function: ?IsLeftRightRounded@CMFCTabCtrl@@UBEHXZ
   ============================================ */

int __thiscall CMFCTabCtrl::IsLeftRightRounded(CMFCTabCtrl *this)
{
  return *((_DWORD *)this + 128);
}


/* ============================================
   Address: 0x4037E0
   Function: ?ResetCursor@CDaoRecordset@@QAEXXZ
   ============================================ */

void __thiscall CDaoRecordset::ResetCursor(CDaoRecordset *this)
{
  sub_4045E0(a1: this);
  CWnd::Default(this);
}


/* ============================================
   Address: 0x403800
   Function: sub_403800
   ============================================ */

void sub_403800()
{
  const char *v0; // edi
  const char *v1; // edi
  CHAR v2; // al
  LPCSTR lpText; // [esp+Ch] [ebp-32Ch] BYREF
  LPCSTR lpCaption; // [esp+10h] [ebp-328h] BYREF
  char Buffer[12]; // [esp+14h] [ebp-324h] BYREF
  _BYTE CommandLine[260]; // [esp+20h] [ebp-318h] BYREF
  _BYTE CurrentDirectory[260]; // [esp+124h] [ebp-214h] BYREF
  _BYTE ApplicationName[260]; // [esp+228h] [ebp-110h] BYREF
  int v9; // [esp+334h] [ebp-4h]

  ApplicationName[0] = ::CommandLine;
  CommandLine[0] = ::CommandLine;
  memset(&ApplicationName[1], 0, 259);
  CurrentDirectory[0] = ::CommandLine;
  memset(&CommandLine[1], 0, 259);
  memset(&CurrentDirectory[1], 0, 259);
  CString::CString(this: (CString *)&lpText);
  v9 = 0;
  if ( byte_42D6C8 != 0 )
  {
    strcat(CommandLine, aB00);
    v0 = aFull;
    if ( dword_42B3F0 == 0 )
      v0 = aWin;
    strcat(CommandLine, v0);
    strcat(CommandLine, asc_42736C);
    _itoa(Value: Value, Buffer, Radix: 10);
    strcat(CommandLine, Buffer);
    strcat(CommandLine, aY);
    _itoa(Value: dword_42B3EC, Buffer, Radix: 10);
    strcat(CommandLine, Buffer);
    if ( byte_42B468 == 0 || byte_42B468 == 48 )
    {
      if ( dword_42C204 != 0 || dword_42C8A4 != 0 )
      {
        dword_42B3E4 = 2;
        strcat(CommandLine, aDllHv3dfxDll);
      }
      sub_401390();
    }
    else
    {
      strcat(CommandLine, aDll_0);
      strcat(CommandLine, &byte_42B468);
    }
    if ( dword_42B3DC != 0 )
    {
      if ( dword_42B3DC == 1 )
      {
        v1 = aSoft24;
      }
      else
      {
        if ( dword_42B3DC != 2 )
        {
LABEL_18:
          strcpy(CurrentDirectory, byte_42D7D0);
          strcat(CurrentDirectory, aBin);
          strcpy(ApplicationName, &byte_42D6C8);
          goto LABEL_21;
        }
        v1 = aOpengl;
      }
    }
    else
    {
      v1 = aSoft8;
    }
    strcat(CommandLine, v1);
    goto LABEL_18;
  }
  strcpy(CurrentDirectory, (const char *)&dword_4272F0);
  strcpy(ApplicationName, aDDatasSetupExe);
  v2 = sub_401610();
  if ( v2 != 0 )
  {
    CurrentDirectory[0] = v2;
    ApplicationName[0] = v2;
LABEL_21:
    if ( sub_402A10(
           lpApplicationName: ApplicationName,
           lpCommandLine: CommandLine,
           lpCurrentDirectory: CurrentDirectory) )
    {
      PostQuitMessage(nExitCode: 0);
    }
    goto LABEL_31;
  }
  CString::CString(this: (CString *)&lpCaption);
  LOBYTE(v9) = 1;
  switch ( dword_42B3E0 )
  {
    case 0:
      CString::LoadStringA(this: (CString *)&lpCaption, a2: 0xA0u);
      CString::LoadStringA(this: (CString *)&lpText, a2: 0xB2u);
      break;
    case 1:
      CString::LoadStringA(this: (CString *)&lpCaption, a2: 0x66u);
      CString::LoadStringA(this: (CString *)&lpText, a2: 0x78u);
      break;
    case 2:
      CString::LoadStringA(this: (CString *)&lpCaption, a2: 0x118u);
      CString::LoadStringA(this: (CString *)&lpText, a2: 0x12Au);
      break;
    case 3:
      CString::LoadStringA(this: (CString *)&lpCaption, a2: 0xBEu);
      CString::LoadStringA(this: (CString *)&lpText, a2: 0xD0u);
      break;
    case 4:
      CString::LoadStringA(this: (CString *)&lpCaption, a2: 0xDCu);
      CString::LoadStringA(this: (CString *)&lpText, a2: 0xEEu);
      break;
    case 5:
      CString::LoadStringA(this: (CString *)&lpCaption, a2: 0xFAu);
      CString::LoadStringA(this: (CString *)&lpText, a2: 0x10Cu);
      break;
    default:
      break;
  }
  sub_41CF30(lpText, lpCaption, uType: 0);
  LOBYTE(v9) = 0;
  CString::~CString(this: (CString *)&lpCaption);
LABEL_31:
  v9 = -1;
  CString::~CString(this: (CString *)&lpText);
}


/* ============================================
   Address: 0x403D60
   Function: sub_403D60
   ============================================ */

void __thiscall sub_403D60(HWND *this)
{
  CHAR v2; // al
  CHAR v3; // al
  const char *v4; // edi
  LPCSTR lpText; // [esp+Ch] [ebp-324h] BYREF
  LPCSTR lpCaption; // [esp+10h] [ebp-320h] BYREF
  size_t cbData; // [esp+14h] [ebp-31Ch] BYREF
  CHAR Parameters[260]; // [esp+18h] [ebp-318h] BYREF
  CHAR Data[260]; // [esp+11Ch] [ebp-214h] BYREF
  char Destination[260]; // [esp+220h] [ebp-110h] BYREF
  int v11; // [esp+32Ch] [ebp-4h]

  Data[0] = CommandLine;
  cbData = 260;
  memset(&Data[1], 0, 259);
  CString::CString(this: (CString *)&lpText);
  v11 = 0;
  CString::CString(this: (CString *)&lpCaption);
  LOBYTE(v11) = 1;
  switch ( dword_42B3E0 )
  {
    case 0:
      CString::LoadStringA(this: (CString *)&lpCaption, a2: 0xA0u);
      break;
    case 1:
      CString::LoadStringA(this: (CString *)&lpCaption, a2: 0x66u);
      break;
    case 2:
      CString::LoadStringA(this: (CString *)&lpCaption, a2: 0x118u);
      break;
    case 3:
      CString::LoadStringA(this: (CString *)&lpCaption, a2: 0xBEu);
      break;
    case 4:
      CString::LoadStringA(this: (CString *)&lpCaption, a2: 0xDCu);
      break;
    case 5:
      CString::LoadStringA(this: (CString *)&lpCaption, a2: 0xFAu);
      break;
    default:
      break;
  }
  if ( RegQueryValueA(hKey: HKEY_CLASSES_ROOT, lpSubKey: aSoftwareAdobeA, lpData: Data, lpcbData: (PLONG)&cbData) == 0 )
  {
    strncpy(Destination, Source: Data, Count: cbData);
    strcpy(Parameters, asc_427414);
    if ( sub_402720() != 0 )
    {
      strcat(Parameters, byte_42D7D0);
    }
    else
    {
      strcat(Parameters, aDDatas);
      v3 = sub_401610();
      if ( v3 == 0 )
      {
        switch ( dword_42B3E0 )
        {
          case 0:
            CString::LoadStringA(this: (CString *)&lpText, a2: 0xB2u);
            break;
          case 1:
            CString::LoadStringA(this: (CString *)&lpText, a2: 0x78u);
            break;
          case 2:
            CString::LoadStringA(this: (CString *)&lpText, a2: 0x12Au);
            break;
          case 3:
            CString::LoadStringA(this: (CString *)&lpText, a2: 0xD0u);
            break;
          case 4:
            CString::LoadStringA(this: (CString *)&lpText, a2: 0xEEu);
            break;
          case 5:
            CString::LoadStringA(this: (CString *)&lpText, a2: 0x10Cu);
            break;
          default:
            goto LABEL_47;
        }
        goto LABEL_47;
      }
      Parameters[1] = v3;
    }
    switch ( dword_42B3E0 )
    {
      case 0:
        v4 = aHelpManual0Pdf;
        goto LABEL_38;
      case 1:
        v4 = aHelpManual1Pdf;
        goto LABEL_38;
      case 2:
        v4 = aHelpManual2Pdf;
        goto LABEL_38;
      case 3:
        v4 = aHelpManual3Pdf;
        goto LABEL_38;
      case 4:
        v4 = aHelpManual4Pdf;
        goto LABEL_38;
      case 5:
        v4 = aHelpManual5Pdf;
LABEL_38:
        strcat(Parameters, v4);
        break;
      default:
        goto LABEL_39;
    }
    goto LABEL_39;
  }
  switch ( dword_42B3E0 )
  {
    case 0:
      CString::LoadStringA(this: (CString *)&lpText, a2: 0xB6u);
      break;
    case 1:
      CString::LoadStringA(this: (CString *)&lpText, a2: 0x7Au);
      break;
    case 2:
      CString::LoadStringA(this: (CString *)&lpText, a2: 0x12Eu);
      break;
    case 3:
      CString::LoadStringA(this: (CString *)&lpText, a2: 0xD4u);
      break;
    case 4:
      CString::LoadStringA(this: (CString *)&lpText, a2: 0xF2u);
      break;
    case 5:
      CString::LoadStringA(this: (CString *)&lpText, a2: 0x110u);
      break;
    default:
      break;
  }
  if ( sub_41CF30(lpText, lpCaption, uType: 4u) == 6 )
  {
    strcpy(Destination, aDInstallAcroba);
    v2 = sub_401610();
    if ( v2 != 0 )
    {
      Destination[0] = v2;
LABEL_39:
      ShellExecuteA(
        hwnd: *(this + 7),
        lpOperation: Operation,
        lpFile: Destination,
        lpParameters: Parameters,
        lpDirectory: nullptr,
        nShowCmd: 5);
      goto LABEL_48;
    }
    switch ( dword_42B3E0 )
    {
      case 0:
        CString::LoadStringA(this: (CString *)&lpText, a2: 0xB2u);
        break;
      case 1:
        CString::LoadStringA(this: (CString *)&lpText, a2: 0x78u);
        break;
      case 2:
        CString::LoadStringA(this: (CString *)&lpText, a2: 0x12Au);
        break;
      case 3:
        CString::LoadStringA(this: (CString *)&lpText, a2: 0xD0u);
        break;
      case 4:
        CString::LoadStringA(this: (CString *)&lpText, a2: 0xEEu);
        break;
      case 5:
        CString::LoadStringA(this: (CString *)&lpText, a2: 0x10Cu);
        break;
      default:
        break;
    }
LABEL_47:
    sub_41CF30(lpText, lpCaption, uType: 0);
  }
LABEL_48:
  LOBYTE(v11) = 0;
  CString::~CString(this: (CString *)&lpCaption);
  v11 = -1;
  CString::~CString(this: (CString *)&lpText);
}


/* ============================================
   Address: 0x404170
   Function: sub_404170
   ============================================ */

void sub_404170()
{
  FILE *v0; // esi
  const char *v1; // edi
  const char *v2; // edi
  CHAR v3; // al
  LPCSTR lpText; // [esp+Ch] [ebp-21Ch] BYREF
  LPCSTR lpCaption; // [esp+10h] [ebp-218h] BYREF
  _BYTE FileName[260]; // [esp+14h] [ebp-214h] BYREF
  CHAR CmdLine[260]; // [esp+118h] [ebp-110h] BYREF
  int v8; // [esp+224h] [ebp-4h]

  strcpy(CmdLine, "notepad.exe \"");
  memset(&CmdLine[14], 0, 246);
  FileName[0] = CommandLine;
  memset(&FileName[1], 0, 259);
  CString::CString(this: (CString *)&lpText);
  v0 = nullptr;
  v8 = 0;
  CString::CString(this: (CString *)&lpCaption);
  LOBYTE(v8) = 1;
  if ( sub_402720() != 0 )
  {
    strcpy(FileName, byte_42D7D0);
    switch ( dword_42B3E0 )
    {
      case 0:
        v1 = aHelpReadmeTxt;
        goto LABEL_9;
      case 1:
        v1 = aHelpLisezmoiTx;
        goto LABEL_9;
      case 2:
        v1 = aHelpLiesmichTx;
        goto LABEL_9;
      case 3:
        v1 = aHelpLeemeTxt;
        goto LABEL_9;
      case 4:
        v1 = aHelpLeggimiTxt;
        goto LABEL_9;
      case 5:
        v1 = aHelpLeesmijTxt;
LABEL_9:
        strcat(FileName, v1);
        break;
      default:
        break;
    }
    v0 = (FILE *)sub_405C00(FileName, a2: (int)aR);
  }
  if ( v0 != nullptr )
  {
    fclose(Stream: v0);
    strcat(FileName, asc_427414);
LABEL_23:
    strcat(CmdLine, FileName);
    WinExec(lpCmdLine: CmdLine, uCmdShow: 0xAu);
    goto LABEL_32;
  }
  switch ( dword_42B3E0 )
  {
    case 0:
      v2 = aDHelpReadmeTxt;
      goto LABEL_20;
    case 1:
      v2 = aDHelpLisezmoiT;
      goto LABEL_20;
    case 2:
      v2 = aDHelpLiesmichT;
      goto LABEL_20;
    case 3:
      v2 = aDHelpLeemeTxt;
      goto LABEL_20;
    case 4:
      v2 = aDHelpLeggimiTx;
      goto LABEL_20;
    case 5:
      v2 = aDHelpLeesmijTx;
LABEL_20:
      strcpy(FileName, v2);
      break;
    default:
      break;
  }
  v3 = sub_401610();
  if ( v3 != 0 )
  {
    FileName[0] = v3;
    goto LABEL_23;
  }
  switch ( dword_42B3E0 )
  {
    case 0:
      CString::LoadStringA(this: (CString *)&lpText, a2: 0xB2u);
      break;
    case 1:
      CString::LoadStringA(this: (CString *)&lpText, a2: 0x78u);
      break;
    case 2:
      CString::LoadStringA(this: (CString *)&lpText, a2: 0x12Au);
      break;
    case 3:
      CString::LoadStringA(this: (CString *)&lpText, a2: 0xD0u);
      break;
    case 4:
      CString::LoadStringA(this: (CString *)&lpText, a2: 0xEEu);
      break;
    case 5:
      CString::LoadStringA(this: (CString *)&lpText, a2: 0x10Cu);
      break;
    default:
      break;
  }
  sub_41CF30(lpText, lpCaption, uType: 0);
LABEL_32:
  LOBYTE(v8) = 0;
  CString::~CString(this: (CString *)&lpCaption);
  v8 = -1;
  CString::~CString(this: (CString *)&lpText);
}


/* ============================================
   Address: 0x4044D0
   Function: sub_4044D0
   ============================================ */

char __thiscall sub_4044D0(int this)
{
  CFrameWnd *v2; // eax
  CFrameWnd *v3; // eax
  int v4; // eax
  WNDCLASSA WndClass; // [esp+Ch] [ebp-34h] BYREF
  int v7; // [esp+3Ch] [ebp-4h]

  sub_4045E0(a1: this);
  WndClass.style = 11;
  WndClass.lpfnWndProc = AfxGetAfxWndProc();
  WndClass.cbClsExtra = 0;
  WndClass.cbWndExtra = 0;
  WndClass.hInstance = *((HINSTANCE *)AfxGetModuleState() + 2);
  WndClass.hIcon = *(HICON *)(this + 512);
  memset(&WndClass.hCursor, 0, 12);
  WndClass.lpszClassName = aBblit;
  if ( RegisterClassA(lpWndClass: &WndClass) == 0 )
    goto LABEL_8;
  v2 = (CFrameWnd *)operator new(Size: 0xBCu);
  v7 = 0;
  v3 = v2 != nullptr ? CFrameWnd::CFrameWnd(this: v2) : nullptr;
  v7 = -1;
  *(_DWORD *)(this + 516) = v3;
  if ( v3 == nullptr )
    goto LABEL_8;
  v4 = CFrameWnd::Create(
         this: v3,
         a2: aBblit,
         lpString: &CommandLine,
         a4: 0xCF0000u,
         a5: &stru_42F6F0,
         a6: nullptr,
         lpMenuName: nullptr,
         a8: 0,
         a9: nullptr);
  if ( v4 != 1 )
  {
    sub_4045E0(a1: this);
LABEL_8:
    LOBYTE(v4) = 0;
  }
  return v4;
}


/* ============================================
   Address: 0x4045D0
   Function: sub_4045D0
   ============================================ */

void __stdcall sub_4045D0(void *Block)
{
  operator delete(Block);
}


/* ============================================
   Address: 0x4045E0
   Function: sub_4045E0
   ============================================ */

BOOL __thiscall sub_4045E0(_DWORD *this)
{
  int v2; // ecx
  struct AFX_MODULE_STATE *ModuleState; // eax

  v2 = *(this + 129);
  if ( v2 != 0 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 96))(a1: v2);
    *(this + 129) = 0;
  }
  ModuleState = AfxGetModuleState();
  return UnregisterClassA(lpClassName: aBblit, hInstance: *((HINSTANCE *)ModuleState + 2));
}


/* ============================================
   Address: 0x404620
   Function: sub_404620
   ============================================ */

int __thiscall sub_404620(int this, struct CWnd *a2)
{
  CDialog::CDialog((CDialog *)this, a2: 0x94u, a3: a2);
  CWnd::CWnd(this: (CWnd *)(this + 92));
  *(_DWORD *)(this + 92) = &CButton::`vftable';
  CWnd::CWnd(this: (CWnd *)(this + 152));
  *(_DWORD *)(this + 152) = &CButton::`vftable';
  CWnd::CWnd(this: (CWnd *)(this + 212));
  *(_DWORD *)(this + 212) = &CComboBox::`vftable';
  CWnd::CWnd(this: (CWnd *)(this + 272));
  *(_DWORD *)(this + 272) = &CStatic::`vftable';
  CWnd::CWnd(this: (CWnd *)(this + 332));
  *(_DWORD *)(this + 332) = &CStatic::`vftable';
  CWnd::CWnd(this: (CWnd *)(this + 392));
  *(_DWORD *)(this + 392) = &CStatic::`vftable';
  CWnd::CWnd(this: (CWnd *)(this + 452));
  *(_DWORD *)(this + 452) = &CButton::`vftable';
  CWnd::CWnd(this: (CWnd *)(this + 512));
  *(_DWORD *)(this + 512) = &CButton::`vftable';
  CWnd::CWnd(this: (CWnd *)(this + 572));
  *(_DWORD *)(this + 572) = &CComboBox::`vftable';
  CWnd::CWnd(this: (CWnd *)(this + 632));
  *(_DWORD *)(this + 632) = &CComboBox::`vftable';
  *(_DWORD *)this = &off_422480;
  return this;
}


/* ============================================
   Address: 0x404760
   Function: sub_404760
   ============================================ */

char *__thiscall sub_404760(char *Block, char a2)
{
  sub_402E40(this: Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}


/* ============================================
   Address: 0x404780
   Function: sub_404780
   ============================================ */

void __thiscall sub_404780(int this, struct CDataExchange *a2)
{
  DDX_Control(a1: a2, a2: 1007, a3: (struct CWnd *)(this + 92));
  DDX_Control(a1: a2, a2: 1008, a3: (struct CWnd *)(this + 152));
  DDX_Control(a1: a2, a2: 1001, a3: (struct CWnd *)(this + 212));
  DDX_Control(a1: a2, a2: 1010, a3: (struct CWnd *)(this + 272));
  DDX_Control(a1: a2, a2: 1011, a3: (struct CWnd *)(this + 332));
  DDX_Control(a1: a2, a2: 1012, a3: (struct CWnd *)(this + 452));
  DDX_Control(a1: a2, a2: 1000, a3: (struct CWnd *)(this + 572));
  DDX_Control(a1: a2, a2: 1013, a3: (struct CWnd *)(this + 392));
  DDX_Control(a1: a2, a2: 1002, a3: (struct CWnd *)(this + 632));
  DDX_Control(a1: a2, a2: 1021, a3: (struct CWnd *)(this + 512));
}


/* ============================================
   Address: 0x404840
   Function: sub_404840
   ============================================ */

_UNKNOWN ****sub_404840()
{
  return &off_4223D0;
}


/* ============================================
   Address: 0x404850
   Function: ?_Addfac@_Locimp@locale@std@@AAEXPAVfacet@23@I@Z
   ============================================ */

void __thiscall std::locale::_Locimp::_Addfac(HWND *this)
{
  char v2; // cl
  int *v3; // eax
  LRESULT v4; // ebp
  WPARAM v5; // ebx
  WPARAM v6; // [esp-8h] [ebp-28h]
  LPARAM lParam; // [esp+10h] [ebp-10h] BYREF
  int v8; // [esp+1Ch] [ebp-4h]

  CString::CString(this: (CString *)&lParam);
  v8 = 0;
  CDialog::OnInitDialog((CDialog *)this);
  SendMessageA(hWnd: *(this + 150), Msg: 0x14Bu, wParam: 0, lParam: 0);
  switch ( dword_42B3E0 )
  {
    case 0:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xA1u);
      break;
    case 1:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0x67u);
      break;
    case 2:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0x119u);
      break;
    case 3:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xBFu);
      break;
    case 4:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xDDu);
      break;
    case 5:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xFBu);
      break;
    default:
      break;
  }
  CWnd::SetWindowTextA(this: (CWnd *)(this + 113), a2: (const char *)lParam);
  switch ( dword_42B3E0 )
  {
    case 0:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xA2u);
      break;
    case 1:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0x68u);
      break;
    case 2:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0x11Au);
      break;
    case 3:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xC0u);
      break;
    case 4:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xDEu);
      break;
    case 5:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xFCu);
      break;
    default:
      break;
  }
  CWnd::SetWindowTextA(this: (CWnd *)(this + 83), a2: (const char *)lParam);
  switch ( dword_42B3E0 )
  {
    case 0:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xA3u);
      break;
    case 1:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0x69u);
      break;
    case 2:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0x11Bu);
      break;
    case 3:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xC1u);
      break;
    case 4:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xDFu);
      break;
    case 5:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xFDu);
      break;
    default:
      break;
  }
  CWnd::SetWindowTextA(this: (CWnd *)(this + 68), a2: (const char *)lParam);
  switch ( dword_42B3E0 )
  {
    case 0:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xA4u);
      break;
    case 1:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0x6Au);
      break;
    case 2:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0x11Cu);
      break;
    case 3:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xC2u);
      break;
    case 4:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xE0u);
      break;
    case 5:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xFEu);
      break;
    default:
      break;
  }
  CWnd::SetWindowTextA(this: (CWnd *)(this + 23), a2: (const char *)lParam);
  switch ( dword_42B3E0 )
  {
    case 0:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xA5u);
      break;
    case 1:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0x6Bu);
      break;
    case 2:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0x11Du);
      break;
    case 3:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xC3u);
      break;
    case 4:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xE1u);
      break;
    case 5:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xFFu);
      break;
    default:
      break;
  }
  CWnd::SetWindowTextA(this: (CWnd *)(this + 38), a2: (const char *)lParam);
  switch ( dword_42B3E0 )
  {
    case 0:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xB9u);
      break;
    case 1:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0x7Du);
      break;
    case 2:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0x131u);
      break;
    case 3:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xD7u);
      break;
    case 4:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xF5u);
      break;
    case 5:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0x113u);
      break;
    default:
      break;
  }
  SendMessageA(hWnd: *(this + 150), Msg: 0x143u, wParam: 0, lParam);
  switch ( dword_42B3E0 )
  {
    case 0:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xB7u);
      break;
    case 1:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0x7Bu);
      break;
    case 2:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0x12Fu);
      break;
    case 3:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xD5u);
      break;
    case 4:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xF3u);
      break;
    case 5:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0x111u);
      break;
    default:
      break;
  }
  SendMessageA(hWnd: *(this + 150), Msg: 0x143u, wParam: 0, lParam);
  v2 = 0;
  v3 = &dword_42C204;
  do
  {
    if ( *v3 != 0 )
      v2 = 1;
    v3 += 424;
  }
  while ( (int)v3 <= (int)&dword_42C8A4 );
  if ( dword_42C200 != 0 )
    v2 = 1;
  if ( v2 != 0 )
  {
    switch ( dword_42B3E0 )
    {
      case 0:
        CString::LoadStringA(this: (CString *)&lParam, a2: 0xB8u);
        break;
      case 1:
        CString::LoadStringA(this: (CString *)&lParam, a2: 0x7Cu);
        break;
      case 2:
        CString::LoadStringA(this: (CString *)&lParam, a2: 0x130u);
        break;
      case 3:
        CString::LoadStringA(this: (CString *)&lParam, a2: 0xD6u);
        break;
      case 4:
        CString::LoadStringA(this: (CString *)&lParam, a2: 0xF4u);
        break;
      case 5:
        CString::LoadStringA(this: (CString *)&lParam, a2: 0x112u);
        break;
      default:
        break;
    }
    SendMessageA(hWnd: *(this + 150), Msg: 0x143u, wParam: 0, lParam);
  }
  if ( dword_42B3DC + 1 > SendMessageA(hWnd: *(this + 150), Msg: 0x146u, wParam: 0, lParam: 0) )
    SendMessageA(hWnd: *(this + 150), Msg: 0x14Eu, wParam: 0, lParam: 0);
  else
    SendMessageA(hWnd: *(this + 150), Msg: 0x14Eu, wParam: dword_42B3DC, lParam: 0);
  if ( dword_42B3F0 != 0 )
    SendMessageA(hWnd: *(this + 45), Msg: 0xF1u, wParam: 1u, lParam: 0);
  else
    SendMessageA(hWnd: *(this + 30), Msg: 0xF1u, wParam: 1u, lParam: 0);
  sub_404EE0(a1: this);
  v4 = SendMessageA(hWnd: *(this + 60), Msg: 0x146u, wParam: 0, lParam: 0);
  v5 = 0;
  if ( v4 > 0 )
  {
    while ( (unsigned __int16)SendMessageA(hWnd: *(this + 60), Msg: 0x150u, wParam: v5, lParam: 0) != Value
         || (unsigned int)SendMessageA(hWnd: *(this + 60), Msg: 0x150u, wParam: v5, lParam: 0) >> 16 != dword_42B3EC )
    {
      if ( (int)++v5 >= v4 )
        goto LABEL_77;
    }
    SendMessageA(hWnd: *(this + 60), Msg: 0x14Eu, wParam: v5, lParam: 0);
  }
LABEL_77:
  switch ( dword_42B3E0 )
  {
    case 0:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xBAu);
      break;
    case 1:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0x7Eu);
      break;
    case 2:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0x132u);
      break;
    case 3:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xD8u);
      break;
    case 4:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xF6u);
      break;
    case 5:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0x114u);
      break;
    default:
      break;
  }
  CWnd::SetWindowTextA(this: (CWnd *)(this + 128), a2: (const char *)lParam);
  switch ( dword_42B3E0 )
  {
    case 0:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xBBu);
      break;
    case 1:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0x7Fu);
      break;
    case 2:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0x133u);
      break;
    case 3:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xD9u);
      break;
    case 4:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0xF7u);
      break;
    case 5:
      CString::LoadStringA(this: (CString *)&lParam, a2: 0x115u);
      break;
    default:
      break;
  }
  CWnd::SetWindowTextA(this: (CWnd *)(this + 98), a2: (const char *)lParam);
  SendMessageA(hWnd: *(this + 165), Msg: 0x143u, wParam: 0, lParam: (LPARAM)aDeutsch);
  SendMessageA(hWnd: *(this + 165), Msg: 0x143u, wParam: 0, lParam: (LPARAM)aEnglish);
  SendMessageA(hWnd: *(this + 165), Msg: 0x143u, wParam: 0, lParam: (LPARAM)&unk_427264);
  SendMessageA(hWnd: *(this + 165), Msg: 0x143u, wParam: 0, lParam: (LPARAM)&unk_427258);
  SendMessageA(hWnd: *(this + 165), Msg: 0x143u, wParam: 0, lParam: (LPARAM)aItaliano);
  SendMessageA(hWnd: *(this + 165), Msg: 0x143u, wParam: 0, lParam: (LPARAM)aNederlands);
  switch ( dword_42B3E0 )
  {
    case 0:
      SendMessageA(hWnd: *(this + 165), Msg: 0x14Eu, wParam: 1u, lParam: 0);
      break;
    case 1:
      SendMessageA(hWnd: *(this + 165), Msg: 0x14Eu, wParam: 3u, lParam: 0);
      break;
    case 2:
      v6 = 0;
      goto LABEL_98;
    case 3:
      SendMessageA(hWnd: *(this + 165), Msg: 0x14Eu, wParam: 2u, lParam: 0);
      break;
    case 4:
      SendMessageA(hWnd: *(this + 165), Msg: 0x14Eu, wParam: 4u, lParam: 0);
      break;
    case 5:
      v6 = 5;
LABEL_98:
      SendMessageA(hWnd: *(this + 165), Msg: 0x14Eu, wParam: v6, lParam: 0);
      break;
    default:
      break;
  }
  v8 = -1;
  CString::~CString(this: (CString *)&lParam);
}


/* ============================================
   Address: 0x404EE0
   Function: sub_404EE0
   ============================================ */

LRESULT __thiscall sub_404EE0(HWND *this)
{
  unsigned int v2; // ebp
  LRESULT v3; // eax
  LRESULT v4; // eax
  LRESULT v5; // eax
  LRESULT v6; // eax
  LRESULT v7; // eax
  int v8; // ebp
  int *v9; // esi
  LRESULT v10; // eax
  unsigned int v12; // [esp+10h] [ebp-38h]
  char lParam[52]; // [esp+14h] [ebp-34h] BYREF

  v2 = SendMessageA(hWnd: *(this + 150), Msg: 0x147u, wParam: 0, lParam: 0);
  dword_42B3DC = v2;
  v12 = v2;
  SendMessageA(hWnd: *(this + 60), Msg: 0x14Bu, wParam: 0, lParam: 0);
  CWnd::EnableWindow(this: (CWnd *)(this + 23), a2: 1);
  if ( v2 == 2 && (dword_42C204 != 0 || dword_42C8A4 != 0) )
  {
    CWnd::EnableWindow(this: (CWnd *)(this + 23), a2: 0);
    SendMessageA(hWnd: *(this + 30), Msg: 0xF1u, wParam: 0, lParam: 0);
    SendMessageA(hWnd: *(this + 45), Msg: 0xF1u, wParam: 1u, lParam: 0);
  }
  if ( SendMessageA(hWnd: *(this + 30), Msg: 0xF0u, wParam: 0, lParam: 0) != 0 )
  {
    if ( GetSystemMetrics(nIndex: 0) > 320 && GetSystemMetrics(nIndex: 1) > 240 && sub_402200(a1: 320, a2: 240) != 0 )
    {
      v3 = SendMessageA(hWnd: *(this + 60), Msg: 0x143u, wParam: 0, lParam: (LPARAM)a320X240);
      SendMessageA(hWnd: *(this + 60), Msg: 0x151u, wParam: v3, lParam: 15728960);
    }
    if ( GetSystemMetrics(nIndex: 0) > 512 && GetSystemMetrics(nIndex: 1) > 384 && sub_402200(a1: 512, a2: 384) != 0 )
    {
      v4 = SendMessageA(hWnd: *(this + 60), Msg: 0x143u, wParam: 0, lParam: (LPARAM)a512X384);
      SendMessageA(hWnd: *(this + 60), Msg: 0x151u, wParam: v4, lParam: 25166336);
    }
    if ( GetSystemMetrics(nIndex: 0) > 640 && GetSystemMetrics(nIndex: 1) > 480 && sub_402200(a1: 640, a2: 480) != 0 )
    {
      v5 = SendMessageA(hWnd: *(this + 60), Msg: 0x143u, wParam: 0, lParam: (LPARAM)a640X480);
      SendMessageA(hWnd: *(this + 60), Msg: 0x151u, wParam: v5, lParam: 31457920);
    }
    if ( GetSystemMetrics(nIndex: 0) > 800 && GetSystemMetrics(nIndex: 1) > 600 && sub_402200(a1: 800, a2: 600) != 0 )
    {
      v6 = SendMessageA(hWnd: *(this + 60), Msg: 0x143u, wParam: 0, lParam: (LPARAM)a800X600);
      SendMessageA(hWnd: *(this + 60), Msg: 0x151u, wParam: v6, lParam: 39322400);
    }
    if ( GetSystemMetrics(nIndex: 0) > 1024 && GetSystemMetrics(nIndex: 1) > 768 && sub_402200(a1: 1024, a2: 768) != 0 )
    {
      v7 = SendMessageA(hWnd: *(this + 60), Msg: 0x143u, wParam: 0, lParam: (LPARAM)a1024X768);
      SendMessageA(hWnd: *(this + 60), Msg: 0x151u, wParam: v7, lParam: 50332672);
    }
  }
  else if ( v2 <= 2 )
  {
    v8 = 0;
    if ( dword_42BBFC > 0 )
    {
      v9 = (int *)&unk_42BC00;
      do
      {
        if ( (v12 != 2 || (dword_42C204 == 0 || *v9 < 1024) && (dword_42C8A4 == 0 || *v9 < 1024))
          && v9[256] == 16
          && *v9 <= 1024
          && sub_402200(a1: *v9, a2: v9[128]) != 0 )
        {
          sprintf(Buffer: lParam, Format: "%d X %d", *v9, v9[128]);
          v10 = SendMessageA(hWnd: *(this + 60), Msg: 0x143u, wParam: 0, (LPARAM)lParam);
          SendMessageA(
            hWnd: *(this + 60),
            Msg: 0x151u,
            wParam: v10,
            lParam: (unsigned __int16)*v9 | ((unsigned __int16)v9[128] << 16));
        }
        ++v8;
        ++v9;
      }
      while ( v8 < dword_42BBFC );
    }
  }
  return SendMessageA(hWnd: *(this + 60), Msg: 0x14Eu, wParam: 0, lParam: 0);
}


/* ============================================
   Address: 0x405270
   Function: j_?Default@CWnd@@IAEJXZ
   ============================================ */

// attributes: thunk
int __thiscall CWnd::Default(CWnd *this)
{
  return ?Default@CWnd@@IAEJXZ(this);
}


/* ============================================
   Address: 0x405280
   Function: sub_405280
   ============================================ */

void __thiscall sub_405280(HWND *this)
{
  LRESULT v2; // eax
  LRESULT v3; // eax

  dword_42B3DC = SendMessageA(hWnd: *(this + 150), Msg: 0x147u, wParam: 0, lParam: 0);
  v2 = SendMessageA(hWnd: *(this + 60), Msg: 0x147u, wParam: 0, lParam: 0);
  Value = (unsigned __int16)SendMessageA(hWnd: *(this + 60), Msg: 0x150u, wParam: v2, lParam: 0);
  v3 = SendMessageA(hWnd: *(this + 60), Msg: 0x147u, wParam: 0, lParam: 0);
  dword_42B3EC = (unsigned int)SendMessageA(hWnd: *(this + 60), Msg: 0x150u, wParam: v3, lParam: 0) >> 16;
  dword_42B3F0 = SendMessageA(hWnd: *(this + 45), Msg: 0xF0u, wParam: 0, lParam: 0);
  switch ( SendMessageA(hWnd: *(this + 165), Msg: 0x147u, wParam: 0, lParam: 0) )
  {
    case 0:
      dword_42B3E0 = 2;
      CDialog::OnOK((CDialog *)this);
      break;
    case 1:
      dword_42B3E0 = 0;
      CDialog::OnOK((CDialog *)this);
      break;
    case 2:
      dword_42B3E0 = 3;
      CDialog::OnOK((CDialog *)this);
      break;
    case 3:
      dword_42B3E0 = 1;
      CDialog::OnOK((CDialog *)this);
      break;
    case 4:
      dword_42B3E0 = 4;
      CDialog::OnOK((CDialog *)this);
      break;
    case 5:
      dword_42B3E0 = 5;
      goto LABEL_8;
    default:
LABEL_8:
      CDialog::OnOK((CDialog *)this);
      break;
  }
}


/* ============================================
   Address: 0x4053C0
   Function: DirectDrawCreate
   ============================================ */

// attributes: thunk
HRESULT __stdcall DirectDrawCreate(GUID *lpGUID, LPDIRECTDRAW *lplpDD, IUnknown *pUnkOuter)
{
  return __imp_DirectDrawCreate(lpGUID, lplpDD, pUnkOuter);
}


/* ============================================
   Address: 0x4053C6
   Function: DirectDrawEnumerateA
   ============================================ */

// attributes: thunk
HRESULT __stdcall DirectDrawEnumerateA(LPDDENUMCALLBACKA lpCallback, LPVOID lpContext)
{
  return __imp_DirectDrawEnumerateA(lpCallback, lpContext);
}


/* ============================================
   Address: 0x4053DC
   Function: ?AfxGetMainWnd@@YGPAVCWnd@@XZ
   ============================================ */

struct CWnd *__stdcall AfxGetMainWnd()
{
  struct CWinThread *Thread; // eax

  if ( AfxGetThread() == nullptr )
    return nullptr;
  Thread = AfxGetThread();
  return (*(struct CWnd *(__thiscall **)(struct CWinThread *))(*(_DWORD *)Thread + 124))(a1: Thread);
}


/* ============================================
   Address: 0x4053F5
   Function: sub_4053F5
   ============================================ */

struct CNoTrackObject *__stdcall sub_4053F5()
{
  struct CNoTrackObject *result; // eax
  HLOCAL hMem; // [esp+0h] [ebp-10h]

  hMem = CNoTrackObject::operator new(uBytes: 0x10u);
  result = nullptr;
  if ( hMem != nullptr )
    return sub_41F4E1();
  return result;
}


/* ============================================
   Address: 0x405426
   Function: ?CreateObject@?$CThreadLocal@V_AFX_THREAD_STATE@@@@SGPAVCNoTrackObject@@XZ
   ============================================ */

struct CNoTrackObject *__stdcall CThreadLocal<_AFX_THREAD_STATE>::CreateObject()
{
  _AFX_THREAD_STATE *v0; // ecx
  struct CNoTrackObject *result; // eax

  v0 = (_AFX_THREAD_STATE *)CNoTrackObject::operator new(uBytes: 0x118u);
  result = nullptr;
  if ( v0 != nullptr )
    return _AFX_THREAD_STATE::_AFX_THREAD_STATE(this: v0);
  return result;
}


/* ============================================
   Address: 0x40545A
   Function: ?GetOwner@CWnd@@QBEPAV1@XZ
   ============================================ */

struct CWnd *__thiscall CWnd::GetOwner(CWnd *this)
{
  HWND Parent; // eax

  Parent = *((HWND *)this + 8);
  if ( Parent == nullptr )
    Parent = GetParent(hWnd: *((HWND *)this + 7));
  return CWnd::FromHandle(a1: Parent);
}


/* ============================================
   Address: 0x40547E
   Function: ?CreateObject@?$CProcessLocal@V_AFX_CTL3D_STATE@@@@SGPAVCNoTrackObject@@XZ
   ============================================ */

struct CNoTrackObject *__stdcall CProcessLocal<_AFX_CTL3D_STATE>::CreateObject()
{
  struct CNoTrackObject *result; // eax

  result = (struct CNoTrackObject *)CNoTrackObject::operator new(uBytes: 0x30u);
  if ( result == nullptr )
    return nullptr;
  *(_DWORD *)result = &_AFX_CTL3D_STATE::`vftable';
  return result;
}


/* ============================================
   Address: 0x405493
   Function: ??_G_AFX_CTL3D_STATE@@UAEPAXI@Z
   ============================================ */

_AFX_CTL3D_STATE *__thiscall _AFX_CTL3D_STATE::`scalar deleting destructor'(_AFX_CTL3D_STATE *hMem, char a2)
{
  _AFX_CTL3D_STATE::~_AFX_CTL3D_STATE(this: hMem);
  if ( (a2 & 1) != 0 )
    CNoTrackObject::operator delete(hMem);
  return hMem;
}


/* ============================================
   Address: 0x4054AE
   Function: unknown_libname_4
   ============================================ */

// Microsoft VisualC 2-14/net runtime
_DWORD *__thiscall unknown_libname_4(_DWORD *Block, char a2)
{
  *Block = &CObject::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}


/* ============================================
   Address: 0x4054D2
   Function: sub_4054D2
   ============================================ */

_DWORD *__thiscall sub_4054D2(_DWORD *hMem, char a2)
{
  *hMem = &CNoTrackObject::`vftable';
  if ( (a2 & 1) != 0 )
    CNoTrackObject::operator delete(hMem);
  return hMem;
}


/* ============================================
   Address: 0x4054EE
   Function: ?CreateObject@?$CThreadLocal@VAFX_MODULE_THREAD_STATE@@@@SGPAVCNoTrackObject@@XZ
   ============================================ */

struct CNoTrackObject *__stdcall CThreadLocal<AFX_MODULE_THREAD_STATE>::CreateObject()
{
  AFX_MODULE_THREAD_STATE *v0; // ecx
  struct CNoTrackObject *result; // eax

  v0 = (AFX_MODULE_THREAD_STATE *)CNoTrackObject::operator new(uBytes: 0x84u);
  result = nullptr;
  if ( v0 != nullptr )
    return AFX_MODULE_THREAD_STATE::AFX_MODULE_THREAD_STATE(this: v0);
  return result;
}


/* ============================================
   Address: 0x405522
   Function: sub_405522
   ============================================ */

struct CNoTrackObject *__stdcall sub_405522()
{
  struct CNoTrackObject *result; // eax

  result = (struct CNoTrackObject *)CNoTrackObject::operator new(uBytes: 4u);
  if ( result == nullptr )
    return nullptr;
  *(_DWORD *)result = &_AFX_CTL3D_THREAD::`vftable';
  return result;
}


/* ============================================
   Address: 0x405537
   Function: ??_G_AFX_CTL3D_THREAD@@UAEPAXI@Z
   ============================================ */

_AFX_CTL3D_THREAD *__thiscall _AFX_CTL3D_THREAD::`scalar deleting destructor'(_AFX_CTL3D_THREAD *hMem, char a2)
{
  _AFX_CTL3D_THREAD::~_AFX_CTL3D_THREAD(this: hMem);
  if ( (a2 & 1) != 0 )
    CNoTrackObject::operator delete(hMem);
  return hMem;
}


/* ============================================
   Address: 0x405552
   Function: ??1CHandleMap@@QAE@XZ
   ============================================ */

void __thiscall CHandleMap::~CHandleMap(CHandleMap *this)
{
  CHandleMap::DeleteTemp(this);
  sub_416039(a1: (char *)this + 28);
  sub_416039(a1: this);
}


/* ============================================
   Address: 0x405593
   Function: sub_405593
   ============================================ */

std::locale::facet *__thiscall sub_405593(std::locale::facet *this, unsigned int a2, int a3)
{
  std::locale::facet::facet(this, a2);
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 37) = a3;
  *(_DWORD *)this = &CResourceException::`vftable';
  return this;
}


/* ============================================
   Address: 0x4055BD
   Function: sub_4055BD
   ============================================ */

std::locale::facet *__thiscall sub_4055BD(std::locale::facet *this, unsigned int a2, int a3)
{
  std::locale::facet::facet(this, a2);
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 37) = a3;
  *(_DWORD *)this = &CUserException::`vftable';
  return this;
}


/* ============================================
   Address: 0x4055E7
   Function: sub_4055E7
   ============================================ */

void *__thiscall sub_4055E7(void *Block, char a2)
{
  sub_4057AB();
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}


/* ============================================
   Address: 0x405603
   Function: sub_405603
   ============================================ */

void *__thiscall sub_405603(void *Block, char a2)
{
  sub_40561F();
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}


/* ============================================
   Address: 0x40561F
   Function: sub_40561F
   ============================================ */

int __thiscall sub_40561F(_DWORD *this)
{
  int result; // eax

  *this = &CGdiObject::`vftable';
  result = sub_41BFD2();
  *this = &CObject::`vftable';
  return result;
}


/* ============================================
   Address: 0x405652
   Function: sub_405652
   ============================================ */

BOOL __thiscall sub_405652(HDC *this, int x, int y)
{
  return PtVisible(hdc: *(this + 1), x, y);
}


/* ============================================
   Address: 0x405666
   Function: sub_405666
   ============================================ */

BOOL __thiscall sub_405666(HDC *this, RECT *lprect)
{
  return RectVisible(hdc: *(this + 1), lprect);
}


/* ============================================
   Address: 0x405676
   Function: sub_405676
   ============================================ */

BOOL __thiscall sub_405676(HDC *this, int x, int y, LPCSTR lpString, int c)
{
  return TextOutA(hdc: *(this + 1), x, y, lpString, c);
}


/* ============================================
   Address: 0x405692
   Function: ?ExtTextOutA@CDC@@UAEHHHIPBUtagRECT@@PBDIPAH@Z
   ============================================ */

BOOL __thiscall CDC::ExtTextOutA(
        HDC *this,
        int x,
        int y,
        UINT options,
        RECT *lprect,
        LPCSTR lpString,
        UINT c,
        int *lpDx)
{
  return ExtTextOutA(hdc: *(this + 1), x, y, options, lprect, lpString, c, lpDx);
}


/* ============================================
   Address: 0x4056B7
   Function: ?TabbedTextOutA@CDC@@UAE?AVCSize@@HHPBDHHPAHH@Z
   ============================================ */

_DWORD *__thiscall CDC::TabbedTextOutA(
        HDC *this,
        _DWORD *a2,
        int x,
        int y,
        const CHAR *lpString,
        int chCount,
        int nTabPositions,
        INT *lpnTabStopPositions,
        int nTabOrigin)
{
  LONG v9; // eax

  v9 = TabbedTextOutA(hdc: *(this + 1), x, y, lpString, chCount, nTabPositions, lpnTabStopPositions, nTabOrigin);
  a2[1] = SHIWORD(v9);
  *a2 = (__int16)v9;
  return a2;
}


/* ============================================
   Address: 0x4056EF
   Function: sub_4056EF
   ============================================ */

int __thiscall sub_4056EF(HDC *this, LPCSTR lpchText, int cchText, LPRECT lprc, UINT format)
{
  return DrawTextA(hdc: *(this + 1), lpchText, cchText, lprc, format);
}


/* ============================================
   Address: 0x40570B
   Function: ?GrayStringA@CDC@@UAEHPAVCBrush@@P6GHPAUHDC__@@JH@ZJHHHHH@Z
   ============================================ */

BOOL __thiscall CDC::GrayStringA(
        HDC *this,
        HBRUSH hBrush,
        GRAYSTRINGPROC lpOutputFunc,
        LPARAM lpData,
        int nCount,
        int X,
        int Y,
        int nWidth,
        int nHeight)
{
  HBRUSH v9; // eax

  v9 = hBrush;
  if ( hBrush != nullptr )
    v9 = *((HBRUSH *)hBrush + 1);
  return GrayStringA(hDC: *(this + 1), hBrush: v9, lpOutputFunc, lpData, nCount, X, Y, nWidth, nHeight);
}


/* ============================================
   Address: 0x40573B
   Function: sub_40573B
   ============================================ */

int __thiscall sub_40573B(HDC *this, int iEscape, int cjIn, LPCSTR pvIn, LPVOID pvOut)
{
  return Escape(hdc: *(this + 1), iEscape, cjIn, pvIn, pvOut);
}


/* ============================================
   Address: 0x405757
   Function: sub_405757
   ============================================ */

std::locale::facet *__thiscall sub_405757(std::locale::facet *this, unsigned int a2, int a3)
{
  std::locale::facet::facet(this, a2);
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 37) = a3;
  *(_DWORD *)this = &CMemoryException::`vftable';
  return this;
}


/* ============================================
   Address: 0x405781
   Function: sub_405781
   ============================================ */

std::locale::facet *__thiscall sub_405781(std::locale::facet *this, unsigned int a2, int a3)
{
  std::locale::facet::facet(this, a2);
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 37) = a3;
  *(_DWORD *)this = &CNotSupportedException::`vftable';
  return this;
}


/* ============================================
   Address: 0x4057AB
   Function: sub_4057AB
   ============================================ */

void __thiscall sub_4057AB(_DWORD *this)
{
  *this = &CObject::`vftable';
}


/* ============================================
   Address: 0x4057B2
   Function: sub_4057B2
   ============================================ */

void *__thiscall sub_4057B2(void *Block, char a2)
{
  sub_4057CE();
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}


/* ============================================
   Address: 0x4057CE
   Function: sub_4057CE
   ============================================ */

int __thiscall sub_4057CE(_DWORD *this)
{
  int result; // eax

  *this = &CMenu::`vftable';
  result = sub_41B6ED();
  *this = &CObject::`vftable';
  return result;
}


/* ============================================
   Address: 0x40582A
   Function: sub_40582A
   ============================================ */

// ?RemoveImageList@CListView@@IAEXH@Z
// doubtful name
struct CImageList *__thiscall sub_40582A(HWND *this, WPARAM wParam)
{
  struct _IMAGELIST *v3; // eax
  struct CImageList *result; // eax

  v3 = (struct _IMAGELIST *)SendMessageA(hWnd: *(this + 7), Msg: 0x1002u, wParam, lParam: 0);
  result = CImageList::FromHandlePermanent(a1: v3);
  if ( result != nullptr )
    return (struct CImageList *)SendMessageA(hWnd: *(this + 7), Msg: 0x1003u, wParam, lParam: 0);
  return result;
}


/* ============================================
   Address: 0x405888
   Function: sub_405888
   ============================================ */

// ?RemoveImageList@CTreeView@@IAEXH@Z
// doubtful name
struct CImageList *__thiscall sub_405888(HWND *this, WPARAM wParam)
{
  struct _IMAGELIST *v3; // eax
  struct CImageList *result; // eax

  v3 = (struct _IMAGELIST *)SendMessageA(hWnd: *(this + 7), Msg: 0x1108u, wParam, lParam: 0);
  result = CImageList::FromHandlePermanent(a1: v3);
  if ( result != nullptr )
    return (struct CImageList *)SendMessageA(hWnd: *(this + 7), Msg: 0x1109u, wParam, lParam: 0);
  return result;
}


/* ============================================
   Address: 0x4058DD
   Function: ?OnDestroy@CTabCtrl@@IAEXXZ
   ============================================ */

void __thiscall CTabCtrl::OnDestroy(HWND *this)
{
  struct _IMAGELIST *v2; // eax

  v2 = (struct _IMAGELIST *)SendMessageA(hWnd: *(this + 7), Msg: 0x1302u, wParam: 0, lParam: 0);
  if ( CImageList::FromHandlePermanent(a1: v2) != nullptr )
    SendMessageA(hWnd: *(this + 7), Msg: 0x1303u, wParam: 0, lParam: 0);
  CWnd::OnDestroy((CWnd *)this);
}


/* ============================================
   Address: 0x405917
   Function: sub_405917
   ============================================ */

_DWORD *__thiscall sub_405917(_DWORD *this)
{
  *(this + 1) = 0;
  *this = &CImageList::`vftable';
  return this;
}


/* ============================================
   Address: 0x405924
   Function: sub_405924
   ============================================ */

void *__thiscall sub_405924(void *Block, char a2)
{
  sub_405940();
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}


/* ============================================
   Address: 0x405940
   Function: sub_405940
   ============================================ */

int __thiscall sub_405940(_DWORD *this)
{
  int result; // eax

  *this = &CImageList::`vftable';
  result = sub_405A0D();
  *this = &CObject::`vftable';
  return result;
}


/* ============================================
   Address: 0x405973
   Function: sub_405973
   ============================================ */

int __thiscall sub_405973(_DWORD *this)
{
  int v2; // edi

  v2 = *(this + 1);
  if ( v2 != 0 && afxMapHIMAGELIST(Block: nullptr) != nullptr )
    sub_416184(a1: *(this + 1));
  *(this + 1) = 0;
  return v2;
}


/* ============================================
   Address: 0x40599D
   Function: ?afxMapHIMAGELIST@@YAPAVCHandleMap@@H@Z
   ============================================ */

struct CHandleMap *__cdecl afxMapHIMAGELIST(void *Block)
{
  struct AFX_MODULE_THREAD_STATE *ModuleThreadState; // esi
  int (__cdecl *v2)(unsigned int); // ebx
  CHandleMap *v3; // ecx
  CHandleMap *v4; // eax

  ModuleThreadState = AfxGetModuleThreadState();
  if ( *((_DWORD *)ModuleThreadState + 9) == 0 && Block != nullptr )
  {
    v2 = AfxSetNewHandler(a1: AfxCriticalNewHandler);
    v3 = (CHandleMap *)operator new(Size: 0x44u);
    if ( v3 != nullptr )
      v4 = CHandleMap::CHandleMap(this: v3, a2: (struct CRuntimeClass *)&off_4240F8, a3: 4u, a4: 1);
    else
      v4 = nullptr;
    *((_DWORD *)ModuleThreadState + 9) = v4;
    AfxSetNewHandler(a1: v2);
  }
  return *((struct CHandleMap **)ModuleThreadState + 9);
}


/* ============================================
   Address: 0x405A0D
   Function: sub_405A0D
   ============================================ */

BOOL __thiscall sub_405A0D(_DWORD *this)
{
  struct _IMAGELIST *v2; // eax

  if ( *(this + 1) == 0 )
    return false;
  v2 = (struct _IMAGELIST *)sub_405973(this);
  return ImageList_Destroy(himl: v2);
}


/* ============================================
   Address: 0x405A23
   Function: ?DeleteTempMap@CImageList@@SGXXZ
   ============================================ */

static void __stdcall CImageList::DeleteTempMap()
{
  CHandleMap *v0; // eax

  v0 = afxMapHIMAGELIST(Block: nullptr);
  if ( v0 != nullptr )
    CHandleMap::DeleteTemp(this: v0);
}


/* ============================================
   Address: 0x405A37
   Function: ?FromHandlePermanent@CImageList@@SGPAV1@PAU_IMAGELIST@@@Z
   ============================================ */

static struct CImageList *__stdcall CImageList::FromHandlePermanent(struct _IMAGELIST *a1)
{
  CMapPtrToPtr *v1; // ecx
  struct CImageList *result; // eax

  v1 = afxMapHIMAGELIST(Block: nullptr);
  result = nullptr;
  if ( v1 != nullptr )
    return (struct CImageList *)CMapPtrToPtr::GetValueAt(this: v1, a2: a1);
  return result;
}


/* ============================================
   Address: 0x405A53
   Function: ??_9@$BOI@AE
   ============================================ */

int __thiscall  __thiscall `vcall'{232,{flat}}(void *this)
{
  return (*(int (__thiscall **)(void *))(*(_DWORD *)this + 232))(a1: this);
}


/* ============================================
   Address: 0x405A60
   Function: _sscanf
   ============================================ */

int sscanf(const char *const Buffer, const char *const Format, ...)
{
  FILE Stream; // [esp+4h] [ebp-20h] BYREF
  va_list va; // [esp+30h] [ebp+Ch] BYREF

  va_start(va, Format);
  Stream._base = (char *)Buffer;
  Stream._ptr = (char *)Buffer;
  Stream._cnt = strlen(Buffer);
  Stream._flag = 73;
  return _input(&Stream, a2: (int)Format, a3: (int)va);
}


/* ============================================
   Address: 0x405AB0
   Function: _strstr
   ============================================ */

char *__cdecl strstr(const char *Str, const char *SubStr)
{
  char v2; // dl
  const char *v3; // edi
  char v4; // dh
  const char *v5; // ecx
  char *v6; // esi
  char v7; // al
  char v9; // ah
  char v10; // al
  char v11; // al

  v2 = *SubStr;
  v3 = Str;
  if ( *SubStr == 0 )
    return (char *)Str;
  v4 = SubStr[1];
  if ( v4 == 0 )
    JUMPOUT(0x4093A6);
findnext:
  v5 = SubStr;
  v6 = (char *)(v3 + 1);
  if ( *v3 == v2 )
    goto first_char_found;
  if ( *v3 != 0 )
  {
    while ( 2 )
    {
      v7 = *v6++;
      while ( v7 == v2 )
      {
first_char_found:
        v7 = *v6++;
        if ( v7 == v4 )
        {
          v3 = v6 - 1;
          while ( 1 )
          {
            v9 = v5[2];
            if ( v9 == 0 )
              break;
            v10 = *v6;
            v6 += 2;
            if ( v10 != v9 )
              goto findnext;
            v11 = v5[3];
            if ( v11 == 0 )
              break;
            v5 += 2;
            if ( v11 != *(v6 - 1) )
              goto findnext;
          }
          return (char *)(v3 - 1);
        }
      }
      if ( v7 != 0 )
        continue;
      break;
    }
  }
  return nullptr;
}


/* ============================================
   Address: 0x405B30
   Function: _fgets
   ============================================ */

char *__cdecl fgets(char *Buffer, int MaxCount, FILE *Stream)
{
  char *v3; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // eax

  v3 = Buffer;
  if ( MaxCount <= 0 )
    return nullptr;
  _lock_file(Stream);
  v5 = MaxCount - 1;
  if ( MaxCount == 1 )
    goto LABEL_10;
  while ( 1 )
  {
    v6 = Stream->_cnt - 1;
    Stream->_cnt = v6;
    if ( v6 < 0 )
      v7 = _filbuf(File: Stream);
    else
      v7 = *(unsigned __int8 *)Stream->_ptr++;
    if ( v7 == -1 )
      break;
    *v3++ = v7;
    if ( (_BYTE)v7 != 10 && --v5 != 0 )
      continue;
    goto LABEL_10;
  }
  if ( v3 != Buffer )
  {
LABEL_10:
    *v3 = 0;
    _unlock_file(Stream);
    return Buffer;
  }
  else
  {
    _unlock_file(Stream);
    return nullptr;
  }
}


/* ============================================
   Address: 0x405BC0
   Function: sub_405BC0
   ============================================ */

FILE *__cdecl sub_405BC0(char *FileName, int a2, int ShareFlag)
{
  FILE *result; // eax
  FILE *v4; // esi
  int v5; // edi

  result = (FILE *)_getstream();
  v4 = result;
  if ( result != nullptr )
  {
    v5 = _openfile(FileName, a2, ShareFlag, a4: (int)result);
    _unlock_file(Stream: v4);
    return (FILE *)v5;
  }
  return result;
}


/* ============================================
   Address: 0x405C00
   Function: sub_405C00
   ============================================ */

FILE *__cdecl sub_405C00(char *FileName, int a2)
{
  return sub_405BC0(FileName, a2, ShareFlag: 64);
}


/* ============================================
   Address: 0x405C20
   Function: __fpmath
   ============================================ */

int _fpmath()
{
  int result; // eax

  _cfltcvt_init_0();
  dword_42FB10 = _ms_p5_mp_test_fdiv();
  result = _setdefaultprecision();
  __asm { fnclex }
  return result;
}


/* ============================================
   Address: 0x405C40
   Function: nullsub_3
   ============================================ */

void nullsub_3()
{
  ;
}


/* ============================================
   Address: 0x405C50
   Function: __cfltcvt_init_0
   ============================================ */

int (__cdecl *_cfltcvt_init_0())(int, void *Src, int, int, int)
{
  off_427F34[0] = (void (__noreturn *)())_cropzeros;
  off_427F30[0] = (void (__noreturn *)())_cfltcvt;
  off_427F38[0] = (void (__noreturn *)())_fassign;
  off_427F3C[0] = (void (__noreturn *)())_forcdecpt;
  off_427F40[0] = (void (__noreturn *)())_positive;
  off_427F44 = (void (__noreturn *)())_cfltcvt;
  return _cfltcvt;
}


/* ============================================
   Address: 0x405C90
   Function: sub_405C90
   ============================================ */

size_t __cdecl sub_405C90(void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  size_t v4; // edi

  _lock_file(Stream);
  v4 = fread(Buffer, ElementSize, ElementCount, Stream);
  _unlock_file(Stream);
  return v4;
}


/* ============================================
   Address: 0x405CD0
   Function: _fread
   ============================================ */

size_t __cdecl fread(void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  size_t v4; // ebp
  _BYTE *v5; // edi
  unsigned int bufsiz; // esi
  unsigned int cnt; // eax
  char *v10; // edx
  unsigned int v11; // eax
  int v12; // eax
  int v13; // eax
  size_t v14; // [esp+10h] [ebp-4h]
  int Streama; // [esp+24h] [ebp+10h]

  v4 = ElementSize * ElementCount;
  v5 = Buffer;
  v14 = ElementSize * ElementCount;
  if ( ElementSize * ElementCount == 0 )
    return 0;
  if ( (Stream->_flag & 0x10C) != 0 )
  {
    bufsiz = Stream->_bufsiz;
    Streama = bufsiz;
  }
  else
  {
    Streama = 4096;
    bufsiz = 4096;
  }
  while ( 1 )
  {
    if ( (Stream->_flag & 0x10C) != 0 )
    {
      cnt = Stream->_cnt;
      if ( cnt != 0 )
      {
        if ( v4 < cnt )
          cnt = v4;
        v4 -= cnt;
        qmemcpy(v5, Stream->_ptr, cnt);
        v10 = &Stream->_ptr[cnt];
        Stream->_cnt -= cnt;
        Stream->_ptr = v10;
        Buffer = (char *)Buffer + cnt;
        v5 = Buffer;
        goto LABEL_19;
      }
    }
    if ( v4 < bufsiz )
      break;
    v11 = v4;
    if ( bufsiz != 0 )
      v11 = v4 - v4 % bufsiz;
    v12 = _read(FileHandle: Stream->_file, DstBuf: v5, MaxCharCount: v11);
    if ( v12 == 0 )
    {
      Stream->_flag |= 0x10u;
      return (v14 - v4) / ElementSize;
    }
    if ( v12 == -1 )
    {
      Stream->_flag |= 0x20u;
      return (v14 - v4) / ElementSize;
    }
    v4 -= v12;
    v5 += v12;
    Buffer = v5;
LABEL_20:
    if ( v4 == 0 )
      return ElementCount;
  }
  v13 = _filbuf(File: Stream);
  if ( v13 != -1 )
  {
    *v5++ = v13;
    --v4;
    Buffer = v5;
    Streama = Stream->_bufsiz;
LABEL_19:
    bufsiz = Streama;
    goto LABEL_20;
  }
  return (v14 - v4) / ElementSize;
}


/* ============================================
   Address: 0x405E10
   Function: _rewind
   ============================================ */

void __cdecl rewind(FILE *Stream)
{
  int file; // edi
  _BYTE *v2; // eax
  int flag; // eax

  file = Stream->_file;
  _lock_file(Stream);
  _flush(a1: Stream);
  Stream->_flag &= 0xFFFFFFCF;
  if ( file == -1 )
    v2 = &unk_427F48;
  else
    v2 = (_BYTE *)(dword_431020[file >> 5] + 36 * (file & 0x1F));
  v2[4] &= ~2u;
  flag = Stream->_flag;
  if ( (flag & 0x80u) != 0 )
  {
    LOBYTE(flag) = flag & 0xFC;
    Stream->_flag = flag;
  }
  _lseek(FileHandle: file, Offset: 0, Origin: 0);
  _unlock_file(Stream);
}


/* ============================================
   Address: 0x405E90
   Function: _fclose
   ============================================ */

int __cdecl fclose(FILE *Stream)
{
  int v2; // edi

  if ( (Stream->_flag & 0x40) != 0 )
  {
    Stream->_flag = 0;
    return -1;
  }
  else
  {
    _lock_file(Stream);
    v2 = _fclose_lk(a1: Stream);
    _unlock_file(Stream);
    return v2;
  }
}


/* ============================================
   Address: 0x405ED0
   Function: __fclose_lk
   ============================================ */

int __cdecl _fclose_lk(int a1)
{
  int v1; // edi

  v1 = -1;
  if ( (*(_BYTE *)(a1 + 12) & 0x83) != 0 )
  {
    v1 = _flush(a1);
    _freebuf(a1);
    if ( _close(FileHandle: *(_DWORD *)(a1 + 16)) < 0 )
    {
      *(_DWORD *)(a1 + 12) = 0;
      return -1;
    }
    if ( *(_DWORD *)(a1 + 28) != 0 )
    {
      free(Block: *(void **)(a1 + 28));
      *(_DWORD *)(a1 + 28) = 0;
    }
  }
  *(_DWORD *)(a1 + 12) = 0;
  return v1;
}


/* ============================================
   Address: 0x405F40
   Function: sub_405F40
   ============================================ */

size_t __cdecl sub_405F40(void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  size_t v4; // edi

  _lock_file(Stream);
  v4 = fwrite(Buffer, ElementSize, ElementCount, Stream);
  _unlock_file(Stream);
  return v4;
}


/* ============================================
   Address: 0x405F80
   Function: _fwrite
   ============================================ */

size_t __cdecl fwrite(const void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream)
{
  size_t v4; // ebp
  char *v5; // esi
  unsigned int bufsiz; // edi
  unsigned int cnt; // eax
  char *v10; // edx
  unsigned int v11; // edi
  unsigned int v12; // eax
  size_t v13; // [esp+10h] [ebp-4h]
  int Streama; // [esp+24h] [ebp+10h]

  v4 = ElementSize * ElementCount;
  v5 = (char *)Buffer;
  v13 = ElementSize * ElementCount;
  if ( ElementSize * ElementCount == 0 )
    return 0;
  if ( (Stream->_flag & 0x10C) == 0 )
  {
    Streama = 4096;
    goto LABEL_6;
  }
  bufsiz = Stream->_bufsiz;
  for ( Streama = bufsiz; ; bufsiz = Streama )
  {
    if ( (Stream->_flag & 0x108) != 0 )
    {
      cnt = Stream->_cnt;
      if ( cnt != 0 )
      {
        if ( v4 < cnt )
          cnt = v4;
        v4 -= cnt;
        qmemcpy(Stream->_ptr, v5, cnt);
        v10 = &Stream->_ptr[cnt];
        Stream->_cnt -= cnt;
        Stream->_ptr = v10;
        Buffer = (char *)Buffer + cnt;
        v5 = (char *)Buffer;
        goto LABEL_24;
      }
    }
    if ( v4 >= bufsiz )
      break;
    if ( _flsbuf(Ch: *v5, File: Stream) == -1 )
      return (v13 - v4) / ElementSize;
    ++v5;
    --v4;
    Buffer = v5;
    Streama = Stream->_bufsiz;
    if ( Streama <= 0 )
      Streama = 1;
LABEL_24:
    if ( v4 == 0 )
      return ElementCount;
LABEL_6:
    ;
  }
  if ( (Stream->_flag & 0x108) == 0 || _flush(a1: Stream) == 0 )
  {
    if ( bufsiz != 0 )
      v11 = v4 - v4 % bufsiz;
    else
      v11 = v4;
    v12 = _write(FileHandle: Stream->_file, Buf: v5, MaxCharCount: v11);
    if ( v12 == -1 || (v4 -= v12, v5 += v12, Buffer = v5, v12 < v11) )
    {
      Stream->_flag |= 0x20u;
      return (v13 - v4) / ElementSize;
    }
    goto LABEL_24;
  }
  return (v13 - v4) / ElementSize;
}


/* ============================================
   Address: 0x4060D0
   Function: __alloca_probe
   ============================================ */

void __usercall _alloca_probe(unsigned int a1@<eax>, char a2)
{
  char *i; // ecx

  for ( i = &a2; a1 >= 0x1000; a1 -= 4096 )
    i -= 4096;
  __asm { retn }
}


/* ============================================
   Address: 0x406100
   Function: _ftell
   ============================================ */

int __cdecl ftell(FILE *Stream)
{
  int v1; // edi

  _lock_file(Stream);
  v1 = _ftell_lk(a1: Stream);
  _unlock_file(Stream);
  return v1;
}


/* ============================================
   Address: 0x406130
   Function: __ftell_lk
   ============================================ */

int __cdecl _ftell_lk(unsigned int *a1)
{
  int v1; // ebx
  int v2; // ecx
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // edi
  unsigned int v7; // edx
  _BYTE *v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // esi
  int v11; // edi
  _BYTE *v12; // eax
  _BYTE *i; // ecx
  unsigned int v14; // eax
  unsigned int v15; // [esp+10h] [ebp-8h]
  int Offset; // [esp+14h] [ebp-4h]

  v1 = a1[4];
  if ( (a1[1] & 0x80000000) != 0 )
    a1[1] = 0;
  v2 = _lseek(FileHandle: v1, Offset: 0, Origin: 1);
  Offset = v2;
  if ( v2 < 0 )
    return -1;
  v4 = a1[3];
  if ( (v4 & 0x108) == 0 )
    return v2 - a1[1];
  v5 = *a1;
  v6 = a1[2];
  v7 = *a1 - v6;
  v15 = v7;
  if ( (v4 & 3) != 0 )
  {
    if ( *(char *)(dword_431020[v1 >> 5] + 36 * (v1 & 0x1F) + 4) < 0 )
    {
      v8 = (_BYTE *)a1[2];
      if ( v6 < v5 )
      {
        do
        {
          if ( *v8 == 10 )
            ++v7;
          ++v8;
        }
        while ( (unsigned int)v8 < v5 );
        v15 = v7;
      }
    }
LABEL_14:
    if ( Offset == 0 )
      return v7;
    if ( (a1[3] & 1) == 0 )
      return Offset + v7;
    v9 = a1[1];
    if ( v9 == 0 )
      return Offset;
    v10 = v5 + v9 - v6;
    v11 = 36 * (v1 & 0x1F);
    if ( *(char *)(v11 + dword_431020[v1 >> 5] + 4) >= 0 )
    {
LABEL_35:
      Offset -= v10;
      return Offset + v7;
    }
    if ( _lseek(FileHandle: v1, Offset: 0, Origin: 2) == Offset )
    {
      v12 = (_BYTE *)a1[2];
      for ( i = &v12[v10]; v12 < i; ++v12 )
      {
        if ( *v12 == 10 )
          ++v10;
      }
      if ( (a1[3] & 0x2000) == 0 )
        goto LABEL_34;
    }
    else
    {
      _lseek(FileHandle: v1, Offset, Origin: 0);
      if ( v10 > 0x200 || ((v14 = a1[3]) & 8) == 0 || (v14 & 0x400) != 0 )
        v10 = a1[6];
      else
        v10 = 512;
      if ( (*(_BYTE *)(v11 + dword_431020[v1 >> 5] + 4) & 4) == 0 )
        goto LABEL_34;
    }
    ++v10;
LABEL_34:
    v7 = v15;
    goto LABEL_35;
  }
  if ( (v4 & 0x80u) != 0 )
    goto LABEL_14;
  *_errno() = 22;
  return -1;
}


/* ============================================
   Address: 0x4062E0
   Function: _fseek
   ============================================ */

int __cdecl fseek(FILE *Stream, int Offset, int Origin)
{
  int v3; // edi

  _lock_file(Stream);
  v3 = _fseek_lk(a1: (int)Stream, Offset, Origin);
  _unlock_file(Stream);
  return v3;
}


/* ============================================
   Address: 0x406320
   Function: __fseek_lk
   ============================================ */

int __cdecl _fseek_lk(unsigned int *a1, int Offset, unsigned int Origin)
{
  unsigned int v3; // eax
  int v4; // edi
  unsigned int v5; // eax

  v3 = a1[3];
  if ( (v3 & 0x83) != 0 && (v4 = Origin, Origin <= 2) )
  {
    LOBYTE(v3) = v3 & 0xEF;
    a1[3] = v3;
    if ( Origin == 1 )
    {
      v4 = 0;
      Offset += _ftell_lk(a1);
    }
    _flush(a1);
    v5 = a1[3];
    if ( (v5 & 0x80u) == 0 )
    {
      if ( (v5 & 1) != 0 && (v5 & 8) != 0 && (v5 & 0x400) == 0 )
        a1[6] = 512;
    }
    else
    {
      LOBYTE(v5) = v5 & 0xFC;
      a1[3] = v5;
    }
    return (_lseek(FileHandle: a1[4], Offset, Origin: v4) != -1) - 1;
  }
  else
  {
    *_errno() = 22;
    return -1;
  }
}


/* ============================================
   Address: 0x4063C0
   Function: _tolower
   ============================================ */

int __cdecl tolower(int C)
{
  int result; // eax
  int v2; // esi
  int v3; // ebx

  if ( Locale != 0 )
  {
    InterlockedIncrement(lpAddend: &Addend);
    if ( dword_431008 != 0 )
    {
      InterlockedDecrement(lpAddend: &Addend);
      _lock(a1: 19);
      v2 = 1;
    }
    else
    {
      v2 = 0;
    }
    v3 = tolower_0(C);
    if ( v2 != 0 )
      _unlock(a1: 19);
    else
      InterlockedDecrement(lpAddend: &Addend);
    return v3;
  }
  else
  {
    result = C;
    if ( C >= 65 && C <= 90 )
      return C + 32;
  }
  return result;
}


/* ============================================
   Address: 0x406450
   Function: _tolower_0
   ============================================ */

int __cdecl tolower_0(int C)
{
  int result; // eax
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  unsigned __int16 DestStr[4]; // [esp+4h] [ebp-8h] BYREF

  if ( Locale != 0 )
  {
    v2 = C;
    if ( C >= 256
      || ((int)SrcSizeInBytes <= 1 ? (v3 = *((_BYTE *)off_4280D0 + 2 * C) & 1) : (v3 = _isctype(C, Type: 1)), v3 != 0) )
    {
      if ( *((char *)off_4280D0 + 2 * BYTE1(v2) + 1) >= 0 )
      {
        LOWORD(C) = (unsigned __int8)v2;
        v4 = 1;
      }
      else
      {
        LOBYTE(C) = BYTE1(v2);
        *(_WORD *)((char *)&C + 1) = (unsigned __int8)v2;
        v4 = 2;
      }
      v5 = __crtLCMapStringA(
             Locale: Locale,
             dwMapFlags: 0x100u,
             lpSrcStr: (LPCSTR)&C,
             lpWideCharStr: (LPCWCH)v4,
             lpDestStr: (LPSTR)DestStr,
             cchDest: 3,
             CodePage: 0);
      if ( v5 != 0 )
      {
        if ( v5 == 1 )
          return LOBYTE(DestStr[0]);
        else
          return DestStr[0];
      }
      else
      {
        return v2;
      }
    }
    else
    {
      return v2;
    }
  }
  else
  {
    result = C;
    if ( C >= 65 && C <= 90 )
      return C + 32;
  }
  return result;
}


/* ============================================
   Address: 0x406550
   Function: ?_JumpToContinuation@@YGXPAXPAUEHRegistrationNode@@@Z
   ============================================ */

void __stdcall _JumpToContinuation(
        void (__stdcall *a1)(void *, struct EHRegistrationNode *),
        struct EHRegistrationNode *a2)
{
  a1(a1, a2);
}


/* ============================================
   Address: 0x406590
   Function: sub_406590
   ============================================ */

// ?_CallMemberFunction0@@YGXPAX0@Z
// doubtful name
// positive sp value has been detected, the output may be wrong!
int __cdecl sub_406590(int a1, int a2)
{
  __int32 v3; // [esp-8h] [ebp-8h]
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  return ((int (*)(void))_InterlockedExchange((volatile __int32 *)&retaddr, v3))();
}


/* ============================================
   Address: 0x4065A0
   Function: ?_UnwindNestedFrames@@YGXPAUEHRegistrationNode@@PAUEHExceptionRecord@@@Z
   ============================================ */

void __userpurge _UnwindNestedFrames(
        struct _EXCEPTION_REGISTRATION_RECORD **a1@<ebx>,
        PVOID TargetFrame,
        PEXCEPTION_RECORD ExceptionRecord)
{
  RtlUnwind(TargetFrame, TargetIp: &_ReturnPoint_12098, ExceptionRecord, ReturnValue: nullptr);
  ExceptionRecord->ExceptionFlags &= ~2u;
  *a1 = NtCurrentTeb()->NtTib.ExceptionList;
}


/* ============================================
   Address: 0x406600
   Function: ___CxxFrameHandler
   ============================================ */

int __usercall __CxxFrameHandler@<eax>(
        struct _s_FuncInfo *a1@<eax>,
        PEXCEPTION_RECORD ExceptionRecord,
        struct EHRegistrationNode *a3,
        struct _CONTEXT *a4,
        void *a5)
{
  return __InternalCxxFrameHandler(ExceptionRecord, a2: a3, a3: a4, a4: a5, a5: a1, a6: 0, TargetFrame: nullptr, a8: 0);
}


/* ============================================
   Address: 0x406640
   Function: ?_CallCatchBlock2@@YAPAXPAUEHRegistrationNode@@PBU_s_FuncInfo@@PAXHK@Z
   ============================================ */

void *__cdecl _CallCatchBlock2(
        struct EHRegistrationNode *a1,
        const struct _s_FuncInfo *a2,
        void *a3,
        int a4,
        unsigned int a5)
{
  return (void *)_CallSettingFrame(a1: a3, a2: a1, a3: a5);
}


/* ============================================
   Address: 0x4066A0
   Function: ?CatchGuardHandler@@YA?AW4_EXCEPTION_DISPOSITION@@PAUEHExceptionRecord@@PAUCatchGuardRN@@PAX2@Z
   ============================================ */

int __cdecl CatchGuardHandler(PEXCEPTION_RECORD ExceptionRecord, PVOID TargetFrame, struct _CONTEXT *a3)
{
  return __InternalCxxFrameHandler(
           ExceptionRecord,
           a2: *((struct EHRegistrationNode **)TargetFrame + 3),
           a3,
           a4: nullptr,
           a5: *((struct _s_FuncInfo **)TargetFrame + 2),
           a6: *((_DWORD *)TargetFrame + 4),
           TargetFrame,
           a8: 0);
}


/* ============================================
   Address: 0x4066D0
   Function: ?_CallSETranslator@@YAHPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAX2PBU_s_FuncInfo@@H1@Z
   ============================================ */

int __cdecl _CallSETranslator(
        struct EHExceptionRecord *a1,
        struct EHRegistrationNode *a2,
        void *a3,
        void *a4,
        const struct _s_FuncInfo *a5,
        int a6,
        struct EHRegistrationNode *a7)
{
  int v7; // eax
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // ebx
  int v10; // [esp+0h] [ebp-40h] BYREF
  int v11; // [esp+Ch] [ebp-34h]
  _DWORD v12[11]; // [esp+10h] [ebp-30h] BYREF
  int v13; // [esp+3Ch] [ebp-4h]
  int savedregs; // [esp+40h] [ebp+0h] BYREF

  v12[3] = TranslatorGuardHandler;
  v12[4] = a5;
  v12[5] = a2;
  v12[6] = a6;
  v12[7] = a7;
  v13 = 0;
  v12[8] = &_ExceptionContinuation_12229;
  v12[9] = &v10;
  v12[10] = &savedregs;
  v12[2] = NtCurrentTeb()->NtTib.ExceptionList;
  v11 = 1;
  v12[0] = a1;
  v12[1] = a3;
  v7 = _getptd(a1: a1->ExceptionCode, a2: v12);
  (*(void (**)(void))(v7 + 104))();
  v11 = 0;
  if ( v13 != 0 )
  {
    ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
    ExceptionList->Next = ExceptionList->Next;
  }
  return v11;
}


/* ============================================
   Address: 0x4067A0
   Function: ?TranslatorGuardHandler@@YA?AW4_EXCEPTION_DISPOSITION@@PAUEHExceptionRecord@@PAUTranslatorGuardRN@@PAX2@Z
   ============================================ */

enum _EXCEPTION_DISPOSITION __usercall TranslatorGuardHandler@<eax>(
        struct _EXCEPTION_REGISTRATION_RECORD **a1@<ebx>,
        PEXCEPTION_RECORD ExceptionRecord,
        PVOID TargetFrame,
        struct _CONTEXT *a4)
{
  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
  {
    *((_DWORD *)TargetFrame + 9) = 1;
    return ExceptionContinueSearch;
  }
  else
  {
    __InternalCxxFrameHandler(
      ExceptionRecord,
      a2: *((struct EHRegistrationNode **)TargetFrame + 3),
      a3: a4,
      a4: nullptr,
      a5: *((struct _s_FuncInfo **)TargetFrame + 2),
      a6: *((_DWORD *)TargetFrame + 4),
      TargetFrame: *((PVOID *)TargetFrame + 5),
      a8: 1);
    if ( *((_DWORD *)TargetFrame + 9) == 0 )
      _UnwindNestedFrames(a1, TargetFrame, ExceptionRecord);
    return (*((enum _EXCEPTION_DISPOSITION (**)(void))TargetFrame + 6))();
  }
}


/* ============================================
   Address: 0x406830
   Function: ?_GetRangeOfTrysToCheck@@YAPBU_s_TryBlockMapEntry@@PBU_s_FuncInfo@@HHPAI1@Z
   ============================================ */

TryBlockMapEntry *__cdecl _GetRangeOfTrysToCheck(
        const struct _s_FuncInfo *a1,
        int a2,
        int a3,
        unsigned int *a4,
        unsigned int *a5)
{
  const struct _s_FuncInfo *v5; // eax
  int v6; // ebx
  unsigned int nTryBlocks; // esi
  unsigned int v8; // ebp
  unsigned int v9; // edi
  TryBlockMapEntry *v10; // eax
  unsigned int v11; // esi
  TryBlockMapEntry *pTryBlockMap; // [esp+10h] [ebp-4h]

  v5 = a1;
  v6 = a2;
  nTryBlocks = a1->nTryBlocks;
  pTryBlockMap = a1->pTryBlockMap;
  v8 = nTryBlocks;
  v9 = nTryBlocks;
  if ( a2 >= 0 )
  {
    do
    {
      if ( nTryBlocks == -1 )
        sub_40BB00();
      v10 = &pTryBlockMap[--nTryBlocks];
      if ( v10->tryHigh < a3 && a3 <= v10->catchHigh || nTryBlocks == -1 )
      {
        v8 = v9;
        --v6;
        v9 = nTryBlocks;
      }
    }
    while ( v6 >= 0 );
    v5 = a1;
  }
  v11 = nTryBlocks + 1;
  *a4 = v11;
  *a5 = v8;
  if ( v8 > v5->nTryBlocks || v11 > v8 )
    sub_40BB00();
  return &pTryBlockMap[v11];
}


/* ============================================
   Address: 0x4068B0
   Function: __global_unwind2
   ============================================ */

void __cdecl _global_unwind2(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, TargetIp: &gu_return, ExceptionRecord: nullptr, ReturnValue: nullptr);
}


/* ============================================
   Address: 0x4068D0
   Function: __unwind_handler
   ============================================ */

int __cdecl _unwind_handler(int a1, int a2, int a3, _DWORD *a4)
{
  int result; // eax

  result = 1;
  if ( (*(_DWORD *)(a1 + 4) & 6) != 0 )
  {
    *a4 = a2;
    return 3;
  }
  return result;
}


/* ============================================
   Address: 0x4068F2
   Function: __local_unwind2
   ============================================ */

int __cdecl _local_unwind2(int a1, int a2)
{
  int result; // eax
  int v3; // ebx
  int v4; // esi
  int v5; // esi
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp-8h] [ebp-1Ch]
  int (__cdecl *v7)(int, int, int, _DWORD *); // [esp-4h] [ebp-18h]

  v7 = _unwind_handler;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  while ( 1 )
  {
    result = a1;
    v3 = *(_DWORD *)(a1 + 8);
    v4 = *(_DWORD *)(a1 + 12);
    if ( v4 == -1 || v4 == a2 )
      break;
    v5 = 3 * v4;
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(v3 + 4 * v5);
    if ( *(_DWORD *)(v3 + 4 * v5 + 4) == 0 )
    {
      _NLG_Notify(a1: 257);
      (*(void (__cdecl **)(struct _EXCEPTION_REGISTRATION_RECORD *, int (__cdecl *)(int, int, int, _DWORD *)))(v3 + 4 * v5 + 8))(
        a1: ExceptionList,
        a2: v7);
    }
  }
  return result;
}


/* ============================================
   Address: 0x40695A
   Function: __abnormal_termination
   ============================================ */

int __cdecl _abnormal_termination()
{
  int result; // eax
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // ecx

  result = 0;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  if ( (int (__cdecl *)(int, int, int, _DWORD *))ExceptionList->Handler == _unwind_handler )
    return ExceptionList[1].Next == *((struct _EXCEPTION_REGISTRATION_RECORD **)ExceptionList[1].Handler + 3);
  return result;
}


/* ============================================
   Address: 0x40697D
   Function: __NLG_Notify1
   ============================================ */

void __stdcall _NLG_Notify1(int a1)
{
  JUMPOUT(0x406990);
}


/* ============================================
   Address: 0x406986
   Function: __NLG_Notify
   ============================================ */

int __userpurge _NLG_Notify@<eax>(int result@<eax>, int a2@<ebp>, int a3)
{
  unk_427B18 = *(_DWORD *)(a2 + 8);
  unk_427B14 = result;
  unk_427B1C = a2;
  return result;
}


/* ============================================
   Address: 0x4069A0
   Function: __onexit
   ============================================ */

_onexit_t __cdecl _onexit(_onexit_t Func)
{
  size_t v1; // eax
  _onexit_t *v2; // ecx
  size_t v3; // eax
  char *v4; // eax
  int v6; // edx

  _lockexit();
  v1 = _msize(Block: dword_431128);
  v2 = (_onexit_t *)dword_431124;
  if ( v1 < dword_431124 - (int)dword_431128 + 4 )
  {
    v3 = _msize(Block: dword_431128);
    v4 = (char *)realloc(Block: dword_431128, Size: v3 + 16);
    if ( v4 == nullptr )
    {
      _unlockexit();
      return nullptr;
    }
    v6 = dword_431124 - (_DWORD)dword_431128;
    dword_431128 = v4;
    v2 = (_onexit_t *)&v4[4 * (v6 >> 2)];
    dword_431124 = (int)v2;
  }
  *v2 = Func;
  dword_431124 += 4;
  _unlockexit();
  return Func;
}


/* ============================================
   Address: 0x406A30
   Function: _atexit
   ============================================ */

int __cdecl atexit(void (__cdecl *Func)())
{
  return (_onexit((_onexit_t)Func) != nullptr) - 1;
}


/* ============================================
   Address: 0x406A50
   Function: ___onexitinit
   ============================================ */

void *__onexitinit()
{
  _DWORD *v0; // eax

  v0 = malloc(Size: 0x80u);
  dword_431128 = v0;
  if ( v0 == nullptr )
    _amsg_exit(a1: 24);
  *v0 = 0;
  dword_431124 = (int)dword_431128;
  return dword_431128;
}


/* ============================================
   Address: 0x406A90
   Function: sub_406A90
   ============================================ */

int __cdecl sub_406A90(int a1, int a2)
{
  int v2; // esi

  _lock(a1: 12);
  v2 = _getdcwd_lk(RootPathName: 0, a2: a1, a3: a2);
  _unlock(a1: 12);
  return v2;
}


/* ============================================
   Address: 0x406AC0
   Function: __getdcwd_lk
   ============================================ */

char *__cdecl _getdcwd_lk(int RootPathName, char *a2, int a3)
{
  DWORD FullPathNameA; // eax
  signed int v5; // eax
  char *v6; // edx
  char FileName[4]; // [esp+Ch] [ebp-10Ch] BYREF
  LPSTR FilePart; // [esp+10h] [ebp-108h] BYREF
  CHAR Buffer[260]; // [esp+14h] [ebp-104h] BYREF

  if ( RootPathName != 0 )
  {
    if ( _validdrive(RootPathName) == 0 )
    {
      *__doserrno() = 15;
      *_errno() = 13;
      return nullptr;
    }
    FileName[0] = RootPathName + 64;
    strcpy(&FileName[1], ":.");
    FullPathNameA = GetFullPathNameA(
                      lpFileName: FileName,
                      nBufferLength: 0x104u,
                      lpBuffer: Buffer,
                      lpFilePart: &FilePart);
  }
  else
  {
    FullPathNameA = GetCurrentDirectoryA(nBufferLength: 0x104u, lpBuffer: Buffer);
  }
  if ( FullPathNameA == 0 )
    return nullptr;
  v5 = FullPathNameA + 1;
  if ( (unsigned int)v5 > 0x104 )
    return nullptr;
  v6 = a2;
  if ( a2 != nullptr )
  {
    if ( v5 > a3 )
    {
      *_errno() = 34;
      return nullptr;
    }
  }
  else
  {
    if ( v5 <= a3 )
      v5 = a3;
    v6 = (char *)malloc(Size: v5);
    if ( v6 == nullptr )
    {
      *_errno() = 12;
      return nullptr;
    }
  }
  return strcpy(v6, Buffer);
}


/* ============================================
   Address: 0x406BF0
   Function: __validdrive
   ============================================ */

BOOL __cdecl _validdrive(int RootPathName)
{
  if ( RootPathName == 0 )
    return true;
  strcpy((char *)&RootPathName + 1, ":\\");
  LOBYTE(RootPathName) = RootPathName + 64;
  return GetDriveTypeA(lpRootPathName: (LPCSTR)&RootPathName) >= 2;
}


/* ============================================
   Address: 0x406C30
   Function: __chdrive
   ============================================ */

int __cdecl _chdrive(int Drive)
{
  char v1; // bl
  DWORD LastError; // eax

  v1 = Drive;
  if ( Drive < 1 || Drive > 31 )
  {
    *_errno() = 13;
    *__doserrno() = 15;
    return -1;
  }
  else
  {
    _lock(a1: 12);
    *(_WORD *)((char *)&Drive + 1) = 58;
    LOBYTE(Drive) = v1 + 64;
    if ( SetCurrentDirectoryA(lpPathName: (LPCSTR)&Drive) )
    {
      _unlock(a1: 12);
      return 0;
    }
    else
    {
      LastError = GetLastError();
      _dosmaperr(a1: LastError);
      _unlock(a1: 12);
      return -1;
    }
  }
}


/* ============================================
   Address: 0x406CB0
   Function: _strncpy
   ============================================ */

char *__cdecl strncpy(char *Destination, const char *Source, size_t Count)
{
  size_t v3; // ecx
  size_t v4; // ebx
  const char *v5; // esi
  char *v6; // edi
  size_t v7; // ecx
  char v8; // al
  size_t v10; // ecx
  int v11; // eax
  int v12; // edx

  v3 = Count;
  if ( Count == 0 )
    return Destination;
  v4 = Count;
  v5 = Source;
  v6 = Destination;
  if ( ((unsigned __int8)Source & 3) == 0 )
  {
    v7 = Count >> 2;
    if ( Count >> 2 != 0 )
      goto main_loop_entrance;
copy_tail_loop:
    while ( 1 )
    {
      v8 = *v5++;
      *v6++ = v8;
      if ( v8 == 0 )
        break;
      if ( --v4 == 0 )
        return Destination;
    }
    while ( --v4 != 0 )
finish_loop:
      *v6++ = v8;
    return Destination;
  }
  do
  {
    v8 = *v5++;
    *v6++ = v8;
    if ( --v3 == 0 )
      return Destination;
    if ( v8 == 0 )
    {
      while ( ((unsigned __int8)v6 & 3) != 0 )
      {
        *v6++ = 0;
        if ( --v3 == 0 )
          return Destination;
      }
      v4 = v3;
      v10 = v3 >> 2;
      if ( v10 == 0 )
        goto finish_loop;
      goto fill_dwords_with_EOS;
    }
  }
  while ( ((unsigned __int8)v5 & 3) != 0 );
  LOBYTE(v4) = v3;
  v7 = v3 >> 2;
  if ( v7 == 0 )
  {
tail_loop_start:
    v4 &= 3u;
    if ( v4 != 0 )
      goto copy_tail_loop;
    return Destination;
  }
  while ( 1 )
  {
main_loop_entrance:
    v11 = (*(_DWORD *)v5 + 2130640639) ^ ~*(_DWORD *)v5;
    v12 = *(_DWORD *)v5;
    v5 += 4;
    if ( (v11 & 0x81010100) != 0 )
    {
      if ( (_BYTE)v12 == 0 )
        break;
      if ( BYTE1(v12) == 0 )
      {
        *(_DWORD *)v6 = (unsigned __int8)v12;
        goto fill_with_EOS_dwords;
      }
      if ( (v12 & 0xFF0000) == 0 )
      {
        *(_DWORD *)v6 = (unsigned __int16)v12;
        goto fill_with_EOS_dwords;
      }
      if ( (v12 & 0xFF000000) == 0 )
      {
        *(_DWORD *)v6 = v12;
        goto fill_with_EOS_dwords;
      }
    }
    *(_DWORD *)v6 = v12;
    v6 += 4;
    if ( --v7 == 0 )
      goto tail_loop_start;
  }
  *(_DWORD *)v6 = 0;
fill_with_EOS_dwords:
  v6 += 4;
  v8 = 0;
  v10 = v7 - 1;
  if ( v10 != 0 )
  {
fill_dwords_with_EOS:
    v8 = 0;
    do
    {
      *(_DWORD *)v6 = 0;
      v6 += 4;
      --v10;
    }
    while ( v10 != 0 );
  }
  v4 &= 3u;
  if ( v4 != 0 )
    goto finish_loop;
  return Destination;
}


/* ============================================
   Address: 0x406DB0
   Function: _sprintf
   ============================================ */

int sprintf(char *const Buffer, const char *const Format, ...)
{
  int v2; // esi
  FILE File; // [esp+4h] [ebp-20h] BYREF
  va_list va; // [esp+30h] [ebp+Ch] BYREF

  va_start(va, Format);
  File._base = Buffer;
  File._ptr = Buffer;
  File._flag = 66;
  File._cnt = 0x7FFFFFFF;
  v2 = _output(&File, a2: (int)Format, a3: (int)va);
  if ( --File._cnt < 0 )
    _flsbuf(Ch: 0, &File);
  else
    *File._ptr = 0;
  return v2;
}


/* ============================================
   Address: 0x406E20
   Function: start
   ============================================ */

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
  dword_42FB30 = BYTE1(Version);
  dword_42FB2C = (unsigned __int8)Version;
  dword_42FB28 = BYTE1(Version) + ((unsigned __int8)Version << 8);
  dword_42FB24 = HIWORD(Version);
  if ( _heap_init() == 0 )
    _amsg_exit(a1: 28);
  if ( _mtinit() == 0 )
    _amsg_exit(a1: 16);
  ms_exc.registration.TryLevel = 0;
  _ioinit();
  __initmbctable();
  dword_43112C = (int)GetCommandLineA();
  Block = (void *)__crtGetEnvironmentStringsA();
  if ( Block == nullptr || dword_43112C == 0 )
    exit(Code: -1);
  _setargv();
  _setenvp();
  _cinit();
  v1 = (CHAR *)dword_43112C;
  if ( *(_BYTE *)dword_43112C == 34 )
  {
    while ( *++v1 != 34 && *v1 != 0 )
    {
      if ( _ismbblead(Ch: (unsigned __int8)*v1) != 0 )
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
  GetStartupInfoA(lpStartupInfo: &StartupInfo);
  if ( (StartupInfo.dwFlags & 1) != 0 )
    wShowWindow = StartupInfo.wShowWindow;
  else
    wShowWindow = 10;
  v4 = wShowWindow;
  ModuleHandleA = GetModuleHandleA(lpModuleName: nullptr);
  v5 = WinMain(hInstance: ModuleHandleA, hPrevInstance: nullptr, lpCmdLine: v1, nShowCmd: v4);
  exit(Code: v5);
}


/* ============================================
   Address: 0x406FD0
   Function: __amsg_exit
   ============================================ */

void __cdecl __noreturn _amsg_exit(int a1)
{
  if ( dword_42FB1C == 1 )
    _FF_MSGBANNER();
  _NMSG_WRITE(a1);
  off_427B20(Code: 255);
}


/* ============================================
   Address: 0x407000
   Function: ??1type_info@@UAE@XZ
   ============================================ */

void __thiscall type_info::~type_info(type_info *this)
{
  void *v2; // esi

  *(_DWORD *)this = &type_info::`vftable';
  _lock(a1: 27);
  v2 = *((void **)this + 1);
  if ( v2 != nullptr )
    free(Block: v2);
  _unlock(a1: 27);
}


/* ============================================
   Address: 0x407030
   Function: ??_Gtype_info@@UAEPAXI@Z
   ============================================ */

type_info *__thiscall type_info::`scalar deleting destructor'(type_info *this, char a2)
{
  type_info::~type_info(this);
  if ( (a2 & 1) != 0 )
    operator delete(Block: this);
  return this;
}


/* ============================================
   Address: 0x407050
   Function: _memset
   ============================================ */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  size_t v3; // edx
  int v4; // eax
  _BYTE *v5; // edi
  int v6; // ecx
  size_t v7; // ecx
  unsigned int v8; // ecx

  v3 = Size;
  if ( Size == 0 )
    return a1;
  LOBYTE(v4) = Val;
  v5 = a1;
  if ( Size < 4 )
    goto LABEL_13;
  v6 = -(int)a1 & 3;
  if ( v6 != 0 )
  {
    v3 = Size - v6;
    do
    {
      *v5++ = Val;
      --v6;
    }
    while ( v6 != 0 );
  }
  v4 = 16843009 * (unsigned __int8)Val;
  v7 = v3;
  v3 &= 3u;
  v8 = v7 >> 2;
  if ( v8 == 0 || (memset32(v5, v4, v8), v5 += 4 * v8, v3 != 0) )
  {
LABEL_13:
    do
    {
      *v5++ = v4;
      --v3;
    }
    while ( v3 != 0 );
  }
  return a1;
}


/* ============================================
   Address: 0x4070A8
   Function: __EH_prolog
   ============================================ */

void _EH_prolog()
{
  __asm { retn }
}


/* ============================================
   Address: 0x4070D0
   Function: __mbscmp
   ============================================ */

int __cdecl _mbscmp(const unsigned __int8 *Str1, const unsigned __int8 *Str2)
{
  const unsigned __int8 *v2; // esi
  const unsigned __int8 *i; // eax
  bool v4; // cf
  unsigned __int8 v5; // dl
  unsigned __int8 v6; // bl
  const unsigned __int8 *v8; // esi
  const unsigned __int8 *v9; // edi
  unsigned __int16 v10; // cx
  unsigned __int8 v11; // al
  unsigned __int8 v12; // al
  unsigned __int16 v13; // bx
  unsigned __int16 v14; // bx
  unsigned __int8 v15; // al
  unsigned __int8 v16; // al
  unsigned __int16 v17; // dx
  unsigned __int16 Str2a; // [esp+18h] [ebp+8h]

  if ( dword_42FC6C != 0 )
  {
    _lock(a1: 25);
    v8 = Str2;
    v9 = Str1;
    do
    {
      v10 = *v9;
      v11 = *v9++;
      Str2a = v10;
      if ( (byte_42FB69[v11] & 4) != 0 )
      {
        v12 = *v9;
        if ( *v9 != 0 )
        {
          ++v9;
          HIBYTE(v13) = v10;
          LOBYTE(v13) = v12;
          Str2a = v13;
        }
        else
        {
          Str2a = 0;
        }
        v10 = Str2a;
      }
      v14 = *v8;
      v15 = *v8++;
      if ( (byte_42FB69[v15] & 4) != 0 )
      {
        v16 = *v8;
        if ( *v8 != 0 )
        {
          ++v8;
          HIBYTE(v17) = v14;
          LOBYTE(v17) = v16;
          v14 = v17;
        }
        else
        {
          v14 = 0;
        }
      }
      if ( v10 != v14 )
      {
        _unlock(a1: 25);
        return v14 < Str2a ? 1 : -1;
      }
    }
    while ( v10 != 0 );
    _unlock(a1: 25);
    return 0;
  }
  else
  {
    v2 = Str2;
    for ( i = Str1; ; i += 2 )
    {
      v4 = *i < *v2;
      if ( *i != *v2 )
        break;
      if ( *i == 0 )
        return 0;
      v5 = i[1];
      v6 = v2[1];
      v4 = v5 < v6;
      if ( v5 != v6 )
        break;
      v2 += 2;
      if ( v5 == 0 )
        return 0;
    }
    return -v4 - (v4 - 1);
  }
}


/* ============================================
   Address: 0x4071D0
   Function: __CxxThrowException@8
   ============================================ */

void __stdcall __noreturn _CxxThrowException(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  ULONG_PTR Arguments[3]; // [esp+1Ch] [ebp-Ch] BYREF

  Arguments[0] = unk_4244FC;
  Arguments[1] = (ULONG_PTR)pExceptionObject;
  Arguments[2] = (ULONG_PTR)pThrowInfo;
  RaiseException(dwExceptionCode: 0xE06D7363, dwExceptionFlags: 1u, nNumberOfArguments: 3u, lpArguments: Arguments);
}


/* ============================================
   Address: 0x407220
   Function: _memcmp
   ============================================ */

int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  int result; // eax
  char *v4; // esi
  char *v5; // edi
  bool v6; // cf
  unsigned __int8 v7; // cl
  unsigned __int8 v8; // dl
  bool v9; // zf
  size_t v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // edx
  int v15; // edx
  int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // edx

  result = Size;
  if ( Size == 0 )
    return result;
  v4 = (char *)Buf1;
  v5 = (char *)Buf2;
  if ( (((unsigned __int8)Buf2 | (unsigned __int8)Buf1) & 3) == 0 )
  {
    result = Size & 3;
    v10 = Size >> 2;
    v9 = Size >> 2 == 0;
    if ( Size >> 2 == 0 )
      goto tail_loop_start_0;
    do
    {
      if ( v10 == 0 )
        break;
      v9 = *(_DWORD *)v4 == *(_DWORD *)v5;
      v4 += 4;
      v5 += 4;
      --v10;
    }
    while ( v9 );
    if ( v9 )
    {
tail_loop_start_0:
      if ( (Size & 3) == 0 )
        return result;
      v15 = *(_DWORD *)v4;
      v16 = *(_DWORD *)v5;
      v6 = (unsigned __int8)*(_DWORD *)v4 < (unsigned __int8)*(_DWORD *)v5;
      if ( (unsigned __int8)*(_DWORD *)v4 == (unsigned __int8)*(_DWORD *)v5 )
      {
        if ( --result == 0 )
          return result;
        v6 = BYTE1(v15) < BYTE1(v16);
        if ( BYTE1(v15) == BYTE1(v16) )
        {
          if ( --result == 0 )
            return result;
          v17 = v16 & 0xFF0000;
          v18 = v15 & 0xFF0000;
          v6 = v18 < v17;
          if ( v18 == v17 )
            return --result;
        }
      }
    }
    else
    {
      v11 = *((_DWORD *)v4 - 1);
      v12 = *((_DWORD *)v5 - 1);
      v6 = (unsigned __int8)v11 < (unsigned __int8)v12;
      if ( (_BYTE)v11 == (_BYTE)v12 )
      {
        v6 = BYTE1(v11) < BYTE1(v12);
        if ( BYTE1(v11) == BYTE1(v12) )
        {
          v13 = HIWORD(v11);
          v14 = HIWORD(v12);
          v6 = (unsigned __int8)v13 < (unsigned __int8)v14;
          if ( (_BYTE)v13 == (_BYTE)v14 )
            v6 = BYTE1(v13) < BYTE1(v14);
        }
      }
    }
    return -v6 - (v6 - 1);
  }
  if ( (Size & 1) == 0 )
  {
main_loop_0:
    while ( 1 )
    {
      v6 = (unsigned __int8)*v4 < (unsigned __int8)*v5;
      if ( *v4 != *v5 )
        break;
      v7 = v4[1];
      v8 = v5[1];
      v6 = v7 < v8;
      if ( v7 != v8 )
        break;
      v5 += 2;
      v4 += 2;
      result -= 2;
      if ( result == 0 )
        return result;
    }
    return -v6 - (v6 - 1);
  }
  v6 = *(_BYTE *)Buf1 < *(_BYTE *)Buf2;
  if ( *(_BYTE *)Buf1 != *(_BYTE *)Buf2 )
    return -v6 - (v6 - 1);
  v4 = (char *)Buf1 + 1;
  v5 = (char *)Buf2 + 1;
  result = Size - 1;
  if ( Size != 1 )
    goto main_loop_0;
  return result;
}


/* ============================================
   Address: 0x4072D0
   Function: _malloc
   ============================================ */

void *__cdecl malloc(size_t Size)
{
  return (void *)_nh_malloc(Size, a2: dword_42FE7C);
}


/* ============================================
   Address: 0x4072F0
   Function: __nh_malloc
   ============================================ */

int __cdecl _nh_malloc(size_t Size, int a2)
{
  size_t v2; // esi
  int result; // eax

  v2 = Size;
  if ( Size > 0xFFFFFFE0 )
    return 0;
  if ( Size == 0 )
    v2 = 1;
  while ( 1 )
  {
    result = v2 > 0xFFFFFFE0 ? 0 : _heap_alloc(a1: v2);
    if ( result != 0 || a2 == 0 )
      break;
    if ( _callnewh(Size: v2) == 0 )
      return 0;
  }
  return result;
}


/* ============================================
   Address: 0x407340
   Function: __heap_alloc
   ============================================ */

LPVOID __cdecl _heap_alloc(int a1)
{
  SIZE_T v1; // esi
  int v2; // edi

  v1 = (a1 + 15) & 0xFFFFFFF0;
  if ( v1 <= dword_42A444 && (_lock(a1: 9), v2 = __sbh_alloc_block(a1: v1 >> 4), _unlock(a1: 9), v2 != 0) )
    return (LPVOID)v2;
  else
    return HeapAlloc(hHeap: hHeap, dwFlags: 0, dwBytes: v1);
}


/* ============================================
   Address: 0x4073A0
   Function: _free
   ============================================ */

void __cdecl free(void *Block)
{
  void *v1; // esi
  int v2; // eax
  int v3; // [esp+4h] [ebp-4h] BYREF

  v1 = Block;
  if ( Block != nullptr )
  {
    _lock(a1: 9);
    v2 = __sbh_find_block(a1: v1, a2: &v3, a3: &Block);
    if ( v2 != 0 )
    {
      __sbh_free_block(a1: v3, a2: Block, a3: v2);
      _unlock(a1: 9);
    }
    else
    {
      _unlock(a1: 9);
      HeapFree(hHeap: hHeap, dwFlags: 0, lpMem: v1);
    }
  }
}


/* ============================================
   Address: 0x407410
   Function: _strtoxl
   ============================================ */

int __cdecl strtoxl(unsigned __int8 *a1, unsigned __int8 **a2, int a3, int a4)
{
  unsigned __int8 v4; // bl
  char *v5; // ebp
  unsigned __int8 v6; // si
  int v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ebp
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // eax
  unsigned __int8 i; // [esp+10h] [ebp-Ch]
  unsigned __int8 v16; // [esp+10h] [ebp-Ch]
  unsigned __int8 *v17; // [esp+14h] [ebp-8h]
  unsigned __int8 *v18; // [esp+14h] [ebp-8h]
  unsigned int v19; // [esp+18h] [ebp-4h]

  v19 = 0;
  v4 = *a1;
  v5 = (char *)(a1 + 1);
  for ( i = *a1; ; i = v4 )
  {
    v6 = i;
    v7 = (int)SrcSizeInBytes <= 1 ? *((_BYTE *)off_4280D0 + 2 * i) & 8 : _isctype(C: i, Type: 8);
    if ( v7 == 0 )
      break;
    v4 = *v5++;
  }
  v17 = (unsigned __int8 *)v5;
  if ( v4 == 45 )
  {
    a4 |= 2u;
LABEL_10:
    v4 = *v5++;
    v17 = (unsigned __int8 *)v5;
    v6 = v4;
    goto LABEL_11;
  }
  if ( v4 == 43 )
    goto LABEL_10;
LABEL_11:
  v8 = a3;
  if ( a3 >= 0 && a3 != 1 && a3 <= 36 )
  {
    if ( a3 == 0 )
    {
      if ( v4 == 48 )
      {
        if ( *v5 == 120 || (v8 = 8, *v5 == 88) )
          v8 = 16;
      }
      else
      {
        v8 = 10;
      }
    }
    if ( v8 == 16 && v4 == 48 && (*v5 == 120 || *v5 == 88) )
    {
      v4 = v5[1];
      v6 = v4;
      v17 = (unsigned __int8 *)(v5 + 2);
    }
    v9 = 0xFFFFFFFF / v8;
    while ( 1 )
    {
      if ( (int)SrcSizeInBytes <= 1 )
        v10 = *((_BYTE *)off_4280D0 + 2 * v6) & 4;
      else
        v10 = _isctype(C: v6, Type: 4);
      if ( v10 != 0 )
      {
        v11 = (char)v4 - 48;
      }
      else
      {
        if ( (int)SrcSizeInBytes <= 1 )
          v12 = *((_WORD *)off_4280D0 + v6) & 0x103;
        else
          v12 = _isctype(C: v6, Type: 259);
        if ( v12 == 0 )
        {
LABEL_43:
          v18 = v17 - 1;
          if ( (a4 & 8) != 0 )
          {
            if ( (a4 & 4) != 0
              || (a4 & 1) == 0 && ((a4 & 2) != 0 && v19 > 0x80000000 || (a4 & 2) == 0 && v19 > 0x7FFFFFFF) )
            {
              *_errno() = 34;
              if ( (a4 & 1) != 0 )
                v19 = -1;
              else
                v19 = ((a4 & 2) != 0) + 0x7FFFFFFF;
            }
          }
          else
          {
            if ( a2 != nullptr )
              v18 = a1;
            v19 = 0;
          }
          if ( a2 != nullptr )
            *a2 = v18;
          if ( (a4 & 2) != 0 )
            return -v19;
          return v19;
        }
        v11 = toupper(C: (char)v4) - 55;
      }
      if ( v11 >= v8 )
        goto LABEL_43;
      a4 |= 8u;
      if ( v19 < v9 || v19 == v9 && v11 <= 0xFFFFFFFF % v8 )
      {
        v19 = v11 + v8 * v19;
      }
      else
      {
        v13 = a4;
        LOBYTE(v13) = a4 | 4;
        a4 = v13;
      }
      v4 = *v17;
      v16 = *v17++;
      v6 = v16;
    }
  }
  if ( a2 != nullptr )
    *a2 = a1;
  return 0;
}


/* ============================================
   Address: 0x4076A0
   Function: _strtoul
   ============================================ */

unsigned int __cdecl strtoul(const char *String, char **EndPtr, int Radix)
{
  return strtoxl(a1: (unsigned __int8 *)String, a2: (unsigned __int8 **)EndPtr, a3: Radix, a4: 1);
}


/* ============================================
   Address: 0x4076C0
   Function: _memcpy
   ============================================ */

void *__cdecl memcpy(void *a1, const void *Src, size_t Size)
{
  char *v3; // esi
  char *v4; // edi
  size_t v5; // ecx
  void *result; // eax
  char *v7; // esi
  char *v8; // edi
  size_t v9; // ecx

  v3 = (char *)Src;
  v4 = (char *)a1;
  if ( a1 > Src && a1 < (char *)Src + Size )
  {
    v7 = (char *)Src + Size - 4;
    v8 = (char *)a1 + Size - 4;
    if ( ((unsigned __int8)v8 & 3) == 0 )
    {
      v9 = Size >> 2;
      if ( Size >> 2 >= 8 )
      {
        while ( v9 != 0 )
        {
          *(_DWORD *)v8 = *(_DWORD *)v7;
          v7 -= 4;
          v8 -= 4;
          --v9;
        }
        switch ( Size & 3 )
        {
          case 0u:
            goto LABEL_32;
          case 1u:
            goto LABEL_33;
          case 2u:
            goto LABEL_34;
          case 3u:
            goto LABEL_35;
        }
      }
      switch ( Size & 3 )
      {
        case 0u:
          goto LABEL_32;
        case 1u:
          goto LABEL_33;
        case 2u:
          goto LABEL_34;
        case 3u:
          goto LABEL_35;
      }
    }
    switch ( Size )
    {
      case 0u:
LABEL_32:
        result = a1;
        break;
      case 1u:
LABEL_33:
        v8[3] = v7[3];
        result = a1;
        break;
      case 2u:
LABEL_34:
        v8[3] = v7[3];
        v8[2] = v7[2];
        result = a1;
        break;
      case 3u:
LABEL_35:
        v8[3] = v7[3];
        v8[2] = v7[2];
        v8[1] = v7[1];
        result = a1;
        break;
      default:
        __asm { jmp     dword ptr ds:loc_4078A4+4[eax*4] }
        return result;
    }
  }
  else
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
    {
      if ( Size >= 4 )
        __asm { jmp     dword ptr ds:loc_40771C+4[eax*4] }
      __asm { jmp     dword ptr ds:loc_407818[ecx*4]; jumptable 004076F5 case 0 }
    }
    v5 = Size >> 2;
    switch ( v5 )
    {
      case 0u:
        goto LABEL_17;
      case 1u:
        goto LABEL_16;
      case 2u:
        goto LABEL_15;
      case 3u:
        goto LABEL_14;
      case 4u:
        goto LABEL_13;
      case 5u:
        goto LABEL_12;
      case 6u:
        goto LABEL_11;
      case 7u:
        *((_DWORD *)a1 + v5 - 7) = *((_DWORD *)Src + v5 - 7);
LABEL_11:
        *((_DWORD *)a1 + v5 - 6) = *((_DWORD *)Src + v5 - 6);
LABEL_12:
        *((_DWORD *)a1 + v5 - 5) = *((_DWORD *)Src + v5 - 5);
LABEL_13:
        *((_DWORD *)a1 + v5 - 4) = *((_DWORD *)Src + v5 - 4);
LABEL_14:
        *((_DWORD *)a1 + v5 - 3) = *((_DWORD *)Src + v5 - 3);
LABEL_15:
        *((_DWORD *)a1 + v5 - 2) = *((_DWORD *)Src + v5 - 2);
LABEL_16:
        *((_DWORD *)a1 + v5 - 1) = *((_DWORD *)Src + v5 - 1);
        v3 = (char *)Src + 4 * v5;
        v4 = (char *)a1 + 4 * v5;
LABEL_17:
        switch ( Size & 3 )
        {
          case 0u:
            goto LABEL_18;
          case 1u:
            goto LABEL_19;
          case 2u:
            goto LABEL_20;
          case 3u:
            goto LABEL_21;
        }
      default:
        qmemcpy(a1, Src, 4 * v5);
        v3 = (char *)Src + 4 * v5;
        v4 = (char *)a1 + 4 * v5;
        switch ( Size & 3 )
        {
          case 0u:
LABEL_18:
            result = a1;
            break;
          case 1u:
LABEL_19:
            *v4 = *v3;
            result = a1;
            break;
          case 2u:
LABEL_20:
            *v4 = *v3;
            v4[1] = v3[1];
            result = a1;
            break;
          case 3u:
LABEL_21:
            *v4 = *v3;
            v4[1] = v3[1];
            v4[2] = v3[2];
            result = a1;
            break;
        }
        break;
    }
  }
  return result;
}


/* ============================================
   Address: 0x407A00
   Function: _wcslen
   ============================================ */

size_t __cdecl wcslen(const wchar_t *String)
{
  const wchar_t *v1; // eax
  __int16 v2; // dx

  v1 = String + 1;
  if ( *String != 0 )
  {
    do
      v2 = *v1++;
    while ( v2 != 0 );
  }
  return v1 - String - 1;
}


/* ============================================
   Address: 0x407A20
   Function: __mbschr
   ============================================ */

unsigned __int8 *__cdecl _mbschr(const unsigned __int8 *Str, unsigned int C)
{
  const unsigned __int8 *v3; // edi
  unsigned __int16 v4; // si
  unsigned __int8 v5; // al

  if ( dword_42FC6C == 0 )
    return (unsigned __int8 *)strchr((const char *)Str, Val: C);
  _lock(a1: 25);
  v3 = Str;
  v4 = *Str;
  if ( *Str == 0 )
  {
LABEL_10:
    _unlock(a1: 25);
    return C != v4 ? nullptr : (unsigned __int8 *)v3;
  }
  while ( 1 )
  {
    if ( (byte_42FB69[(unsigned __int8)v4] & 4) == 0 )
    {
      if ( C == v4 )
        goto LABEL_10;
      goto LABEL_9;
    }
    v5 = *++v3;
    if ( v5 == 0 )
    {
      _unlock(a1: 25);
      return nullptr;
    }
    if ( C == (v5 | (v4 << 8)) )
      break;
LABEL_9:
    v4 = *++v3;
    if ( v4 == 0 )
      goto LABEL_10;
  }
  _unlock(a1: 25);
  return (unsigned __int8 *)(v3 - 1);
}


/* ============================================
   Address: 0x407AF0
   Function: __strdup
   ============================================ */

char *__cdecl _strdup(const char *Source)
{
  char *v1; // edx

  if ( Source != nullptr && (v1 = (char *)malloc(Size: strlen(Source) + 1)) != nullptr )
    return strcpy(v1, Source);
  else
    return nullptr;
}


/* ============================================
   Address: 0x407B40
   Function: __cinit
   ============================================ */

void _cinit()
{
  if ( off_427AF8 != nullptr )
    off_427AF8();
  _initterm(First: &First, Last: &Last);
  _initterm(First: &dword_427000, Last: &dword_427058);
}


/* ============================================
   Address: 0x407B70
   Function: _exit
   ============================================ */

void __cdecl __noreturn exit(int Code)
{
  doexit(uExitCode: Code, a2: 0, a3: 0);
}


/* ============================================
   Address: 0x407B90
   Function: __exit
   ============================================ */

void __cdecl __noreturn _exit(int Code)
{
  doexit(uExitCode: Code, a2: 1, a3: 0);
}


/* ============================================
   Address: 0x407BB0
   Function: _doexit
   ============================================ */

int __cdecl doexit(UINT uExitCode, int a2, int a3)
{
  HANDLE CurrentProcess; // eax
  void (**v4)(void); // ecx
  void (**v5)(void); // esi

  _lockexit();
  if ( dword_42FB60 == 1 )
  {
    CurrentProcess = GetCurrentProcess();
    TerminateProcess(hProcess: CurrentProcess, uExitCode);
  }
  dword_42FB5C = 1;
  byte_42FB58 = a3;
  if ( a2 == 0 )
  {
    v4 = (void (**)(void))dword_431128;
    if ( dword_431128 != nullptr )
    {
      v5 = (void (**)(void))(dword_431124 - 4);
      if ( dword_431124 - 4 >= (unsigned int)dword_431128 )
      {
        do
        {
          if ( *v5 != nullptr )
          {
            (*v5)();
            v4 = (void (**)(void))dword_431128;
          }
          --v5;
        }
        while ( v5 >= v4 );
      }
    }
    _initterm(First: &dword_427070, Last: &dword_427078);
  }
  _initterm(First: &dword_42707C, Last: &dword_427084);
  if ( a3 == 0 )
  {
    dword_42FB60 = 1;
    ExitProcess(uExitCode);
  }
  return _unlockexit();
}


/* ============================================
   Address: 0x407C70
   Function: __lockexit
   ============================================ */

int _lockexit()
{
  return _lock(a1: 13);
}


/* ============================================
   Address: 0x407C80
   Function: __unlockexit
   ============================================ */

int _unlockexit()
{
  return _unlock(a1: 13);
}


/* ============================================
   Address: 0x407C90
   Function: __initterm
   ============================================ */

void __cdecl _initterm(_PVFV *First, _PVFV *Last)
{
  _PVFV *i; // esi

  for ( i = First; i < Last; ++i )
  {
    if ( *i != nullptr )
      (*i)();
  }
}


/* ============================================
   Address: 0x407CB0
   Function: __expand
   ============================================ */

void *__cdecl _expand(void *Block, size_t Size)
{
  size_t v3; // esi
  int v4; // eax
  void *v5; // ebx
  int v6; // [esp+Ch] [ebp-4h] BYREF

  if ( Size > 0xFFFFFFE0 )
    return nullptr;
  if ( Size != 0 )
    v3 = (Size + 15) & 0xFFFFFFF0;
  else
    v3 = 16;
  _lock(a1: 9);
  v4 = __sbh_find_block(a1: Block, a2: &v6, a3: &Size);
  if ( v4 != 0 )
  {
    v5 = nullptr;
    if ( v3 <= dword_42A444 && __sbh_resize_block(a1: v6, a2: Size, a3: v4, a4: v3 >> 4) != 0 )
      v5 = Block;
    _unlock(a1: 9);
    return v5;
  }
  else
  {
    _unlock(a1: 9);
    return HeapReAlloc(hHeap: hHeap, dwFlags: 0x10u, lpMem: Block, dwBytes: v3);
  }
}


/* ============================================
   Address: 0x407D60
   Function: __msize
   ============================================ */

size_t __cdecl _msize(void *Block)
{
  unsigned __int8 *v1; // eax
  size_t v2; // esi
  _BYTE v4[4]; // [esp+4h] [ebp-8h] BYREF
  _BYTE v5[4]; // [esp+8h] [ebp-4h] BYREF

  _lock(a1: 9);
  v1 = (unsigned __int8 *)__sbh_find_block(a1: Block, a2: v5, a3: v4);
  if ( v1 != nullptr )
  {
    v2 = 16 * *v1;
    _unlock(a1: 9);
    return v2;
  }
  else
  {
    _unlock(a1: 9);
    return HeapSize(hHeap: hHeap, dwFlags: 0, lpMem: Block);
  }
}


/* ============================================
   Address: 0x407DD0
   Function: _memcpy_0
   ============================================ */

void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  char *v3; // esi
  char *v4; // edi
  size_t v5; // ecx
  void *result; // eax
  char *v7; // esi
  char *v8; // edi
  size_t v9; // ecx

  v3 = (char *)Src;
  v4 = (char *)a1;
  if ( a1 > Src && a1 < (char *)Src + Size )
  {
    v7 = (char *)Src + Size - 4;
    v8 = (char *)a1 + Size - 4;
    if ( ((unsigned __int8)v8 & 3) == 0 )
    {
      v9 = Size >> 2;
      if ( Size >> 2 >= 8 )
      {
        while ( v9 != 0 )
        {
          *(_DWORD *)v8 = *(_DWORD *)v7;
          v7 -= 4;
          v8 -= 4;
          --v9;
        }
        switch ( Size & 3 )
        {
          case 0u:
            goto LABEL_32;
          case 1u:
            goto LABEL_33;
          case 2u:
            goto LABEL_34;
          case 3u:
            goto LABEL_35;
        }
      }
      switch ( Size & 3 )
      {
        case 0u:
          goto LABEL_32;
        case 1u:
          goto LABEL_33;
        case 2u:
          goto LABEL_34;
        case 3u:
          goto LABEL_35;
      }
    }
    switch ( Size )
    {
      case 0u:
LABEL_32:
        result = a1;
        break;
      case 1u:
LABEL_33:
        v8[3] = v7[3];
        result = a1;
        break;
      case 2u:
LABEL_34:
        v8[3] = v7[3];
        v8[2] = v7[2];
        result = a1;
        break;
      case 3u:
LABEL_35:
        v8[3] = v7[3];
        v8[2] = v7[2];
        v8[1] = v7[1];
        result = a1;
        break;
      default:
        __asm { jmp     dword ptr ds:loc_407FB4+4[eax*4] }
        return result;
    }
  }
  else
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
    {
      if ( Size >= 4 )
        __asm { jmp     dword ptr ds:loc_407E2C+4[eax*4] }
      __asm { jmp     dword ptr ds:loc_407F28[ecx*4]; jumptable 00407E05 case 0 }
    }
    v5 = Size >> 2;
    switch ( v5 )
    {
      case 0u:
        goto LABEL_17;
      case 1u:
        goto LABEL_16;
      case 2u:
        goto LABEL_15;
      case 3u:
        goto LABEL_14;
      case 4u:
        goto LABEL_13;
      case 5u:
        goto LABEL_12;
      case 6u:
        goto LABEL_11;
      case 7u:
        *((_DWORD *)a1 + v5 - 7) = *((_DWORD *)Src + v5 - 7);
LABEL_11:
        *((_DWORD *)a1 + v5 - 6) = *((_DWORD *)Src + v5 - 6);
LABEL_12:
        *((_DWORD *)a1 + v5 - 5) = *((_DWORD *)Src + v5 - 5);
LABEL_13:
        *((_DWORD *)a1 + v5 - 4) = *((_DWORD *)Src + v5 - 4);
LABEL_14:
        *((_DWORD *)a1 + v5 - 3) = *((_DWORD *)Src + v5 - 3);
LABEL_15:
        *((_DWORD *)a1 + v5 - 2) = *((_DWORD *)Src + v5 - 2);
LABEL_16:
        *((_DWORD *)a1 + v5 - 1) = *((_DWORD *)Src + v5 - 1);
        v3 = (char *)Src + 4 * v5;
        v4 = (char *)a1 + 4 * v5;
LABEL_17:
        switch ( Size & 3 )
        {
          case 0u:
            goto LABEL_18;
          case 1u:
            goto LABEL_19;
          case 2u:
            goto LABEL_20;
          case 3u:
            goto LABEL_21;
        }
      default:
        qmemcpy(a1, Src, 4 * v5);
        v3 = (char *)Src + 4 * v5;
        v4 = (char *)a1 + 4 * v5;
        switch ( Size & 3 )
        {
          case 0u:
LABEL_18:
            result = a1;
            break;
          case 1u:
LABEL_19:
            *v4 = *v3;
            result = a1;
            break;
          case 2u:
LABEL_20:
            *v4 = *v3;
            v4[1] = v3[1];
            result = a1;
            break;
          case 3u:
LABEL_21:
            *v4 = *v3;
            v4[1] = v3[1];
            v4[2] = v3[2];
            result = a1;
            break;
        }
        break;
    }
  }
  return result;
}


/* ============================================
   Address: 0x408110
   Function: __setmbcp
   ============================================ */

int __cdecl _setmbcp(int CodePage)
{
  UINT SystemCP; // ebp
  int v3; // edx
  _DWORD *v4; // eax
  BYTE *v5; // edx
  unsigned int v6; // ecx
  unsigned int i; // eax
  BYTE v8; // al
  unsigned int j; // eax
  unsigned int v10; // edi
  int v11; // ebx
  unsigned __int8 *v12; // ebp
  unsigned __int8 *v13; // esi
  unsigned int v14; // ecx
  unsigned int v15; // eax
  char v16; // dl
  unsigned __int8 v17; // al
  LCID v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  struct _cpinfo CPInfo; // [esp+10h] [ebp-14h] BYREF
  int CodePagea; // [esp+28h] [ebp+4h]

  _lock(a1: 25);
  SystemCP = getSystemCP(a1: CodePage);
  CodePagea = SystemCP;
  if ( SystemCP == dword_42FC6C )
  {
    _unlock(a1: 25);
    return 0;
  }
  else if ( SystemCP != 0 )
  {
    v3 = 0;
    v4 = &unk_427B58;
    do
    {
      if ( *v4 == SystemCP )
      {
        memset(&unk_42FB68, 0, 0x100u);
        unk_42FC68 = 0;
        v10 = 0;
        v11 = 12 * v3;
        v12 = (unsigned __int8 *)&unk_427B68 + 48 * v3;
        do
        {
          v13 = v12;
          if ( *v12 != 0 )
          {
            do
            {
              if ( v13[1] == 0 )
                break;
              v14 = v13[1];
              v15 = *v13;
              if ( v15 <= v14 )
              {
                v16 = byte_427B50[v10];
                do
                  byte_42FB69[v15++] |= v16;
                while ( v15 <= v14 );
              }
              v17 = v13[2];
              v13 += 2;
            }
            while ( v17 != 0 );
          }
          ++v10;
          v12 += 8;
        }
        while ( v10 < 4 );
        dword_42FC6C = CodePagea;
        v18 = CPtoLCID(a1: CodePagea);
        v19 = dword_427B5C[v11];
        v20 = dword_427B60[v11];
        dword_42FC70 = v18;
        dword_42FC78 = v19;
        v21 = dword_427B5C[v11 + 2];
        dword_42FC7C = v20;
        dword_42FC80 = v21;
        _unlock(a1: 25);
        return 0;
      }
      v4 += 12;
      ++v3;
    }
    while ( v4 < &dword_427C48 );
    if ( GetCPInfo(CodePage: SystemCP, lpCPInfo: &CPInfo) )
    {
      memset(&unk_42FB68, 0, 0x100u);
      unk_42FC68 = 0;
      if ( CPInfo.MaxCharSize <= 1 )
      {
        dword_42FC6C = 0;
        dword_42FC70 = 0;
      }
      else
      {
        if ( CPInfo.LeadByte[0] != 0 )
        {
          v5 = &CPInfo.LeadByte[1];
          do
          {
            if ( *v5 == 0 )
              break;
            v6 = *v5;
            for ( i = *(v5 - 1); i <= v6; ++i )
              byte_42FB69[i] |= 4u;
            v8 = v5[1];
            v5 += 2;
          }
          while ( v8 != 0 );
        }
        for ( j = 1; j < 0xFF; ++j )
          byte_42FB69[j] |= 8u;
        dword_42FC6C = SystemCP;
        dword_42FC70 = CPtoLCID(a1: SystemCP);
      }
      dword_42FC78 = 0;
      dword_42FC7C = 0;
      dword_42FC80 = 0;
      _unlock(a1: 25);
      return 0;
    }
    else
    {
      if ( dword_42FC84 != 0 )
        goto LABEL_21;
      _unlock(a1: 25);
      return -1;
    }
  }
  else
  {
LABEL_21:
    setSBCS();
    _unlock(a1: 25);
    return 0;
  }
}


/* ============================================
   Address: 0x408330
   Function: _getSystemCP
   ============================================ */

UINT __cdecl getSystemCP(UINT a1)
{
  UINT result; // eax

  result = a1;
  dword_42FC84 = 0;
  switch ( a1 )
  {
    case 0xFFFFFFFE:
      dword_42FC84 = 1;
      return GetOEMCP();
    case 0xFFFFFFFD:
      dword_42FC84 = 1;
      return GetACP();
    case 0xFFFFFFFC:
      dword_42FC84 = 1;
      return CodePage;
    default:
      break;
  }
  return result;
}


/* ============================================
   Address: 0x408380
   Function: _CPtoLCID
   ============================================ */

int __cdecl CPtoLCID(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 932:
      result = 1041;
      break;
    case 936:
      result = 2052;
      break;
    case 949:
      result = 1042;
      break;
    case 950:
      result = 1028;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


/* ============================================
   Address: 0x4083E0
   Function: _setSBCS
   ============================================ */

int setSBCS()
{
  memset(&unk_42FB68, 0, 0x100u);
  unk_42FC68 = 0;
  dword_42FC6C = 0;
  dword_42FC70 = 0;
  dword_42FC78 = 0;
  dword_42FC7C = 0;
  dword_42FC80 = 0;
  return 0;
}


/* ============================================
   Address: 0x408410
   Function: ___initmbctable
   ============================================ */

int __initmbctable()
{
  return _setmbcp(CodePage: -3);
}


/* ============================================
   Address: 0x408420
   Function: __mbsinc
   ============================================ */

unsigned __int8 *__cdecl _mbsinc(const unsigned __int8 *Ptr)
{
  unsigned __int8 *result; // eax

  result = (unsigned __int8 *)(Ptr + 1);
  if ( (byte_42FB69[*Ptr] & 4) != 0 )
    return (unsigned __int8 *)(Ptr + 2);
  return result;
}


/* ============================================
   Address: 0x408440
   Function: __mbsrchr
   ============================================ */

unsigned __int8 *__cdecl _mbsrchr(const unsigned __int8 *String, unsigned int C)
{
  unsigned __int8 *v2; // esi
  const unsigned __int8 *v4; // edx
  unsigned __int8 v5; // cl
  int v6; // eax

  v2 = nullptr;
  if ( dword_42FC6C == 0 )
    return (unsigned __int8 *)strrchr(Str: (const char *)String, Ch: C);
  _lock(a1: 25);
  v4 = String;
  do
  {
    v5 = *v4;
    v6 = *v4;
    if ( (byte_42FB69[v6] & 4) == 0 )
    {
      if ( C != v6 )
        goto LABEL_12;
      goto LABEL_11;
    }
    v5 = *++v4;
    if ( v5 == 0 )
    {
      if ( v2 != nullptr )
        goto LABEL_12;
LABEL_11:
      v2 = (unsigned __int8 *)v4;
      goto LABEL_12;
    }
    if ( C == (v5 | (v6 << 8)) )
      v2 = (unsigned __int8 *)(v4 - 1);
LABEL_12:
    ++v4;
  }
  while ( v5 != 0 );
  _unlock(a1: 25);
  return v2;
}


/* ============================================
   Address: 0x4084D0
   Function: __dosmaperr
   ============================================ */

int *__cdecl _dosmaperr(unsigned int a1)
{
  int v1; // esi
  _DWORD *v2; // eax
  int *result; // eax

  v1 = 0;
  *__doserrno() = a1;
  v2 = &dword_427C48;
  do
  {
    if ( a1 == *v2 )
    {
      result = _errno();
      *result = dword_427C4C[2 * v1];
      return result;
    }
    v2 += 2;
    ++v1;
  }
  while ( v2 < &off_427DB0 );
  if ( a1 < 0x13 || a1 > 0x24 )
  {
    if ( a1 < 0xBC || a1 > 0xCA )
    {
      result = _errno();
      *result = 22;
    }
    else
    {
      result = _errno();
      *result = 8;
    }
  }
  else
  {
    result = _errno();
    *result = 13;
  }
  return result;
}


/* ============================================
   Address: 0x408550
   Function: __errno
   ============================================ */

int *__cdecl _errno()
{
  return (int *)(_getptd() + 2);
}


/* ============================================
   Address: 0x408560
   Function: ___doserrno
   ============================================ */

unsigned int *__cdecl __doserrno()
{
  return _getptd() + 3;
}


/* ============================================
   Address: 0x408570
   Function: __input
   ============================================ */

int __cdecl _input(FILE *Stream, unsigned __int8 *i, int a3)
{
  unsigned __int8 v3; // al
  FILE *v4; // ebp
  int v5; // ebx
  unsigned __int8 *v6; // esi
  int v7; // edi
  int v8; // eax
  int v9; // eax
  char *v10; // ecx
  int v11; // esi
  int v12; // eax
  char v13; // al
  int v14; // eax
  int v15; // eax
  int v16; // esi
  char *v17; // edx
  char j; // al
  char v19; // cl
  unsigned __int8 v20; // al
  unsigned __int8 v21; // cl
  unsigned int v22; // esi
  int v23; // ebp
  _BYTE *v24; // edi
  char v25; // cl
  wchar_t *v26; // edi
  wchar_t *v27; // esi
  bool v28; // zf
  int v29; // eax
  int v30; // eax
  __int64 v31; // kr18_8
  int v32; // eax
  int v33; // eax
  int v34; // edi
  int v35; // eax
  int v36; // eax
  int v37; // eax
  wchar_t *v38; // ecx
  int v39; // eax
  char *v40; // esi
  int v41; // edi
  int v42; // eax
  int v43; // eax
  int v44; // ebx
  int v45; // eax
  int v46; // edx
  int v47; // eax
  int v48; // eax
  int v49; // edx
  int v50; // eax
  int v51; // edx
  int result; // eax
  char v53; // [esp+13h] [ebp-1CDh]
  char v54; // [esp+13h] [ebp-1CDh]
  int v55; // [esp+14h] [ebp-1CCh] BYREF
  char v56; // [esp+19h] [ebp-1C7h]
  char v57; // [esp+1Ah] [ebp-1C6h]
  char v58; // [esp+1Bh] [ebp-1C5h]
  int v59; // [esp+1Ch] [ebp-1C4h]
  char v60; // [esp+20h] [ebp-1C0h]
  char v61; // [esp+21h] [ebp-1BFh]
  char v62; // [esp+22h] [ebp-1BEh]
  char v63; // [esp+23h] [ebp-1BDh]
  int v64; // [esp+24h] [ebp-1BCh]
  wchar_t *v65; // [esp+28h] [ebp-1B8h]
  int v66; // [esp+2Ch] [ebp-1B4h]
  int v67; // [esp+30h] [ebp-1B0h]
  int v68; // [esp+34h] [ebp-1ACh]
  int v69; // [esp+38h] [ebp-1A8h]
  int v70; // [esp+3Ch] [ebp-1A4h]
  char SrcCh[2]; // [esp+42h] [ebp-19Eh] BYREF
  __int64 v72; // [esp+44h] [ebp-19Ch]
  int v73; // [esp+4Ch] [ebp-194h]
  wchar_t DstCh; // [esp+52h] [ebp-18Eh] BYREF
  int C; // [esp+54h] [ebp-18Ch]
  int v76; // [esp+58h] [ebp-188h]
  int v77; // [esp+5Ch] [ebp-184h]
  _BYTE v78[32]; // [esp+60h] [ebp-180h] BYREF
  char v79; // [esp+80h] [ebp-160h] BYREF
  char v80; // [esp+81h] [ebp-15Fh] BYREF
  char *v81; // [esp+1E8h] [ebp+8h]

  v61 = 0;
  v55 = 0;
  v68 = 0;
  v3 = *i;
  if ( *i == 0 )
  {
    v5 = C;
    goto LABEL_245;
  }
  v4 = Stream;
  v5 = C;
  v6 = i;
  v7 = 0;
  while ( 2 )
  {
    if ( (int)SrcSizeInBytes <= 1 )
      v8 = *((_BYTE *)off_4280D0 + 2 * v3) & 8;
    else
      v8 = _isctype(C: v3, Type: 8);
    if ( v8 != 0 )
    {
      --v55;
      v9 = _whiteout(a1: (int)&v55, Stream: v4);
      _un_inc(Character: v9, Stream: v4);
      for ( i = ++v6; isspace(C: *v6) != 0; i = v6 )
        ++v6;
    }
    if ( *v6 != 37 )
    {
      ++v55;
      v48 = fgetc(Stream: v4);
      v49 = *v6;
      v5 = v48;
      i = ++v6;
      if ( v49 == v48 )
      {
        if ( *((char *)off_4280D0 + 2 * (unsigned __int8)v48 + 1) >= 0 )
          goto LABEL_236;
        ++v55;
        v50 = fgetc(Stream: v4);
        v51 = *v6++;
        i = v6;
        if ( v51 == v50 )
        {
          --v55;
          goto LABEL_236;
        }
        --v55;
        _un_inc(Character: v50, Stream: v4);
      }
LABEL_243:
      --v55;
      _un_inc(Character: v5, Stream: v4);
      goto LABEL_245;
    }
    v10 = (char *)i;
    v70 = 0;
    LOBYTE(v66) = 0;
    v69 = 0;
    v67 = 0;
    v59 = 0;
    v63 = 0;
    v62 = 0;
    v58 = 0;
    v53 = 0;
    v60 = 0;
    v56 = 0;
    v57 = 1;
    v76 = 0;
    do
    {
      v81 = ++v10;
      v11 = (unsigned __int8)*v10;
      if ( (int)SrcSizeInBytes <= 1 )
      {
        v12 = *((_BYTE *)off_4280D0 + 2 * (unsigned __int8)v11) & 4;
      }
      else
      {
        v12 = _isctype(C: (unsigned __int8)*v10, Type: 4);
        v10 = v81;
      }
      if ( v12 != 0 )
      {
        ++v67;
        v59 = v11 + 10 * v59 - 48;
      }
      else
      {
        switch ( v11 )
        {
          case '*':
            ++v58;
            break;
          case 'F':
          case 'N':
            break;
          case 'I':
            if ( v10[1] != 54 || v10[2] != 52 )
              goto LABEL_25;
            v10 += 2;
            ++v7;
            v81 = v10;
            v72 = 0;
            break;
          case 'L':
            ++v57;
            break;
          case 'h':
            --v57;
            --v56;
            break;
          case 'l':
            ++v57;
            goto LABEL_23;
          case 'w':
LABEL_23:
            ++v56;
            break;
          default:
LABEL_25:
            ++v53;
            break;
        }
      }
    }
    while ( v53 == 0 );
    v76 = v7;
    if ( v58 == 0 )
    {
      C = a3;
      a3 += 4;
      v65 = *(wchar_t **)(a3 - 4);
    }
    v54 = 0;
    if ( v56 == 0 )
    {
      v13 = *v10;
      if ( *v10 == 83 || (v56 = -1, v13 == 67) )
        v56 = 1;
    }
    v14 = (unsigned __int8)*v10 | 0x20;
    v64 = v14;
    if ( v14 != 110 )
    {
      if ( v14 == 99 || v14 == 123 )
      {
        ++v55;
        v15 = fgetc(Stream: v4);
      }
      else
      {
        v15 = _whiteout(a1: (int)&v55, Stream: v4);
      }
      v5 = v15;
    }
    if ( v67 != 0 && v59 == 0 )
      goto LABEL_243;
    v16 = v64;
    switch ( v64 )
    {
      case 'c':
        if ( v67 == 0 )
        {
          v67 = 1;
          ++v59;
        }
        if ( v56 > 0 )
          v60 = 1;
        v17 = asc_427E68;
        goto LABEL_54;
      case 'd':
      case 'o':
      case 'u':
        goto LABEL_110;
      case 'e':
      case 'f':
      case 'g':
        v40 = &v79;
        if ( v5 == 45 )
        {
          v79 = 45;
          v40 = &v80;
        }
        else if ( v5 != 43 )
        {
          goto LABEL_189;
        }
        --v59;
        ++v55;
        v5 = fgetc(Stream: v4);
LABEL_189:
        if ( v67 == 0 || v59 > 349 )
          v59 = 349;
        v41 = v69;
        while ( 1 )
        {
          v42 = (int)SrcSizeInBytes <= 1 ? *((_BYTE *)off_4280D0 + 2 * v5) & 4 : _isctype(C: v5, Type: 4);
          if ( v42 == 0 )
            break;
          v28 = v59-- == 0;
          if ( v28 )
            break;
          *v40 = v5;
          ++v41;
          ++v40;
          ++v55;
          v5 = fgetc(Stream: v4);
        }
        if ( byte_4282E0 == (_BYTE)v5 )
        {
          v28 = v59-- == 0;
          if ( !v28 )
          {
            ++v55;
            v5 = fgetc(Stream: v4);
            *v40++ = byte_4282E0;
            while ( 1 )
            {
              v43 = (int)SrcSizeInBytes <= 1 ? *((_BYTE *)off_4280D0 + 2 * v5) & 4 : _isctype(C: v5, Type: 4);
              if ( v43 == 0 )
                break;
              v28 = v59-- == 0;
              if ( v28 )
                break;
              *v40 = v5;
              ++v41;
              ++v40;
              ++v55;
              v5 = fgetc(Stream: v4);
            }
          }
        }
        if ( v41 == 0 || v5 != 101 && v5 != 69 )
          goto LABEL_224;
        v28 = v59-- == 0;
        if ( v28 )
          goto LABEL_224;
        v44 = v55;
        *v40++ = 101;
        v55 = v44 + 1;
        v45 = fgetc(Stream: v4);
        v5 = v45;
        if ( v45 == 45 )
        {
          *v40++ = 45;
        }
        else if ( v45 != 43 )
        {
          goto LABEL_218;
        }
        v46 = v59;
        v28 = v59-- == 0;
        if ( !v28 )
          goto LABEL_217;
        v59 = v46;
LABEL_218:
        while ( 1 )
        {
          v47 = (int)SrcSizeInBytes <= 1 ? *((_BYTE *)off_4280D0 + 2 * v5) & 4 : _isctype(C: v5, Type: 4);
          if ( v47 == 0 )
            break;
          v28 = v59-- == 0;
          if ( v28 )
            break;
          ++v41;
          *v40++ = v5;
LABEL_217:
          ++v55;
          v5 = fgetc(Stream: v4);
        }
LABEL_224:
        --v55;
        _un_inc(Character: v5, Stream: v4);
        if ( v41 == 0 )
          goto LABEL_245;
        if ( v58 == 0 )
        {
          ++v68;
          *v40 = 0;
          off_427F38[0]();
        }
        goto LABEL_231;
      case 'i':
        v16 = 100;
        v64 = 100;
        goto LABEL_95;
      case 'n':
        v39 = v55;
        if ( v58 != 0 )
          goto LABEL_231;
        v38 = v65;
        goto LABEL_180;
      case 'p':
        v57 = 1;
LABEL_110:
        if ( v5 == 45 )
        {
          v62 = 1;
        }
        else if ( v5 != 43 )
        {
          goto LABEL_117;
        }
        if ( --v59 != 0 || v67 == 0 )
        {
          ++v55;
          v5 = fgetc(Stream: v4);
        }
        else
        {
          v54 = 1;
        }
        goto LABEL_117;
      case 's':
        if ( v56 > 0 )
          v60 = 1;
        v17 = asc_427E60;
        goto LABEL_54;
      case 'x':
LABEL_95:
        if ( v5 == 45 )
        {
          v62 = 1;
        }
        else if ( v5 != 43 )
        {
          goto LABEL_102;
        }
        if ( --v59 != 0 || v67 == 0 )
        {
          ++v55;
          v5 = fgetc(Stream: v4);
        }
        else
        {
          v54 = 1;
        }
LABEL_102:
        if ( v5 == 48 )
        {
          ++v55;
          v30 = fgetc(Stream: v4);
          v5 = v30;
          if ( (_BYTE)v30 == 120 || (_BYTE)v30 == 88 )
          {
            ++v55;
            v16 = 120;
            v5 = fgetc(Stream: v4);
            v64 = 120;
          }
          else
          {
            v69 = 1;
            if ( v16 == 120 )
            {
              --v55;
              _un_inc(Character: v30, Stream: v4);
              v5 = 48;
            }
            else
            {
              v16 = 111;
              v64 = 111;
            }
          }
        }
LABEL_117:
        if ( v7 != 0 )
        {
          if ( v54 != 0 )
            goto LABEL_143;
          v31 = v72;
          while ( 1 )
          {
            if ( v64 == 120 )
            {
              if ( (int)SrcSizeInBytes <= 1 )
                v32 = *((_BYTE *)off_4280D0 + 2 * v5) & 0x80;
              else
                v32 = _isctype(C: v5, Type: 128);
              if ( v32 == 0 )
                goto LABEL_134;
              v5 = _hextodec(C: v5);
              v31 *= 16;
            }
            else
            {
              if ( (int)SrcSizeInBytes <= 1 )
                v33 = *((_BYTE *)off_4280D0 + 2 * v5) & 4;
              else
                v33 = _isctype(C: v5, Type: 4);
              if ( v33 == 0 )
              {
LABEL_134:
                ++v54;
                goto LABEL_135;
              }
              if ( v64 == 111 )
              {
                if ( v5 >= 56 )
                  goto LABEL_134;
                v31 *= 8;
              }
              else
              {
                v31 *= 10;
              }
            }
LABEL_135:
            if ( v54 != 0 )
            {
              --v55;
              _un_inc(Character: v5, Stream);
            }
            else
            {
              ++v69;
              v31 += v5 - 48;
              if ( v67 == 0 || (--v59, v59 != 0) )
              {
                ++v55;
                v5 = fgetc(Stream);
              }
              else
              {
                v54 = 1;
              }
            }
            if ( v54 != 0 )
            {
              v72 = v31;
LABEL_143:
              if ( v62 != 0 )
                v72 = -v72;
              goto LABEL_172;
            }
          }
        }
        v34 = v70;
        if ( v54 != 0 )
          goto LABEL_170;
        break;
      case '{':
        if ( v56 > 0 )
          v60 = 1;
        v17 = v81 + 1;
        v81 = v17;
        if ( *v17 == 94 )
        {
          ++v17;
LABEL_54:
          v63 = -1;
        }
        memset(v78, 0, sizeof(v78));
        if ( v64 == 123 && *v17 == 93 )
        {
          LOBYTE(v66) = 93;
          ++v17;
          v78[11] = 32;
        }
        for ( j = *v17; *v17 != 93; j = *v17 )
        {
          v19 = j;
          ++v17;
          LOBYTE(v77) = j;
          if ( j == 45 && (_BYTE)v66 != 0 && (v20 = *v17, *v17 != 93) )
          {
            v21 = v66;
            ++v17;
            if ( (unsigned __int8)v66 >= v20 )
            {
              LOBYTE(v73) = v66;
              LOBYTE(v66) = v20;
              v21 = v20;
            }
            else
            {
              LOBYTE(v73) = v20;
            }
            if ( v21 <= (unsigned __int8)v73 )
            {
              v22 = (unsigned __int8)v66;
              v23 = (unsigned __int8)v73 - (unsigned __int8)v66 + 1;
              do
              {
                v24 = &v78[v22 >> 3];
                v25 = (1 << (v22++ & 7)) | *v24;
                --v23;
                *v24 = v25;
              }
              while ( v23 != 0 );
            }
            v4 = Stream;
            LOBYTE(v66) = 0;
          }
          else
          {
            LOBYTE(v66) = v19;
            v78[(unsigned __int8)v77 >> 3] |= 1 << (v77 & 7);
          }
        }
        if ( *v17 == 0 )
          goto LABEL_245;
        if ( v64 == 123 )
          v81 = v17;
        v26 = v65;
        v27 = v65;
        --v55;
        _un_inc(Character: v5, Stream: v4);
        while ( 2 )
        {
          if ( v67 != 0 && (v28 = v59 == 0, --v59, v28) )
          {
            v65 = v26;
          }
          else
          {
            ++v55;
            v29 = fgetc(Stream: v4);
            v5 = v29;
            if ( v29 != -1 && ((1 << (v29 & 7)) & (v63 ^ (char)v78[v29 >> 3])) != 0 )
            {
              if ( v58 != 0 )
              {
                v27 = (wchar_t *)((char *)v27 + 1);
              }
              else if ( v60 != 0 )
              {
                SrcCh[0] = v29;
                if ( *((char *)off_4280D0 + 2 * (unsigned __int8)v29 + 1) < 0 )
                {
                  ++v55;
                  SrcCh[1] = fgetc(Stream: v4);
                }
                mbtowc(&DstCh, SrcCh, SrcSizeInBytes: SrcSizeInBytes);
                *v26++ = DstCh;
              }
              else
              {
                *(_BYTE *)v26 = v29;
                v26 = (wchar_t *)((char *)v26 + 1);
              }
              continue;
            }
            v65 = v26;
            --v55;
            _un_inc(Character: v29, Stream: v4);
          }
          break;
        }
        if ( v27 == v26 )
          goto LABEL_245;
        if ( v58 == 0 )
        {
          ++v68;
          if ( v64 != 99 )
          {
            if ( v60 != 0 )
              *v65 = 0;
            else
              *(_BYTE *)v65 = 0;
          }
        }
        goto LABEL_231;
      default:
        if ( (unsigned __int8)*v81 != v5 )
          goto LABEL_243;
        --v61;
        if ( v58 == 0 )
          a3 = C;
        goto LABEL_231;
    }
    do
    {
      if ( v16 == 120 || v16 == 112 )
      {
        if ( (int)SrcSizeInBytes <= 1 )
          v36 = *((_BYTE *)off_4280D0 + 2 * v5) & 0x80;
        else
          v36 = _isctype(C: v5, Type: 128);
        if ( v36 != 0 )
        {
          v34 *= 16;
          v5 = _hextodec(C: v5);
          goto LABEL_162;
        }
      }
      else
      {
        if ( (int)SrcSizeInBytes <= 1 )
          v35 = *((_BYTE *)off_4280D0 + 2 * v5) & 4;
        else
          v35 = _isctype(C: v5, Type: 4);
        if ( v35 != 0 )
        {
          if ( v16 != 111 )
          {
            v34 *= 10;
            goto LABEL_162;
          }
          if ( v5 < 56 )
          {
            v34 *= 8;
            goto LABEL_162;
          }
        }
      }
      ++v54;
LABEL_162:
      if ( v54 != 0 )
      {
        --v55;
        _un_inc(Character: v5, Stream: v4);
      }
      else
      {
        v34 = v34 + v5 - 48;
        ++v69;
        if ( v67 == 0 || (--v59, v59 != 0) )
        {
          ++v55;
          v5 = fgetc(Stream: v4);
        }
        else
        {
          v54 = 1;
        }
      }
    }
    while ( v54 == 0 );
    v70 = v34;
LABEL_170:
    if ( v62 != 0 )
      v70 = -v34;
LABEL_172:
    if ( v64 == 70 )
      v37 = 0;
    else
      v37 = v69;
    if ( v37 == 0 )
      goto LABEL_245;
    if ( v58 != 0 )
    {
      v4 = Stream;
    }
    else
    {
      v4 = Stream;
      v38 = v65;
      v7 = v76;
      ++v68;
      v39 = v70;
LABEL_180:
      if ( v7 != 0 )
      {
        *(_QWORD *)v38 = v72;
      }
      else if ( v57 != 0 )
      {
        *(_DWORD *)v38 = v39;
      }
      else
      {
        *v38 = v39;
      }
    }
LABEL_231:
    ++v61;
    i = (unsigned __int8 *)(v81 + 1);
    v7 = 0;
    v6 = i;
LABEL_236:
    if ( v5 != -1 )
    {
LABEL_240:
      v3 = *v6;
      if ( *v6 == 0 )
        goto LABEL_245;
      continue;
    }
    break;
  }
  if ( *v6 == 37 && i[1] == 110 )
  {
    v7 = 0;
    v6 = i;
    goto LABEL_240;
  }
LABEL_245:
  result = v68;
  if ( v5 == -1 && v68 == 0 && v61 == 0 )
    return -1;
  return result;
}


/* ============================================
   Address: 0x4092B0
   Function: __hextodec
   ============================================ */

unsigned int __cdecl _hextodec(int C)
{
  int v1; // esi
  int v2; // eax

  v1 = C;
  if ( (int)SrcSizeInBytes <= 1 )
    v2 = *((_BYTE *)off_4280D0 + 2 * C) & 4;
  else
    v2 = _isctype(C, Type: 4);
  if ( v2 == 0 )
    return (C & 0xFFFFFFDF) - 7;
  return v1;
}


/* ============================================
   Address: 0x4092F0
   Function: _fgetc
   ============================================ */

int __cdecl fgetc(FILE *Stream)
{
  int v1; // eax

  v1 = Stream->_cnt - 1;
  Stream->_cnt = v1;
  if ( v1 < 0 )
    return _filbuf(File: Stream);
  return *(unsigned __int8 *)Stream->_ptr++;
}


/* ============================================
   Address: 0x409320
   Function: __un_inc
   ============================================ */

int __cdecl _un_inc(int Character, FILE *Stream)
{
  int result; // eax

  result = Character;
  if ( Character != -1 )
    return ungetc(Character, Stream);
  return result;
}


/* ============================================
   Address: 0x409340
   Function: __whiteout
   ============================================ */

int __cdecl _whiteout(_DWORD *a1, FILE *Stream)
{
  int i; // esi

  ++*a1;
  for ( i = fgetc(Stream); isspace(C: i) != 0; i = fgetc(Stream) )
    ++*a1;
  return i;
}


/* ============================================
   Address: 0x4093A0
   Function: _strchr
   ============================================ */

char *__cdecl strchr(const char *Str, int Val)
{
  const char *v2; // edx
  char v3; // cl
  int v4; // ecx
  int v5; // esi
  int v6; // eax
  unsigned int v7; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax

  v2 = Str;
  if ( ((unsigned __int8)Str & 3) != 0 )
  {
    while ( 1 )
    {
      v3 = *v2++;
      if ( v3 == (_BYTE)Val )
        return (char *)(v2 - 1);
      if ( v3 == 0 )
        return nullptr;
      if ( ((unsigned __int8)v2 & 3) == 0 )
        goto LABEL_5;
    }
  }
  else
  {
    while ( 1 )
    {
LABEL_5:
      while ( 1 )
      {
        v4 = (((unsigned __int8)Val << 8)
            | (unsigned __int8)Val
            | ((((unsigned __int8)Val << 8) | (unsigned __int8)Val) << 16))
           ^ *(_DWORD *)v2;
        v5 = *(_DWORD *)v2 + 2130640639;
        v6 = v5 ^ ~*(_DWORD *)v2;
        v2 += 4;
        if ( (((v4 + 2130640639) ^ ~v4) & 0x81010100) != 0 )
          break;
        v7 = v6 & 0x81010100;
        if ( v7 != 0 && ((v7 & 0x1010100) != 0 || (v5 & 0x80000000) == 0) )
          return nullptr;
      }
      v9 = *((_DWORD *)v2 - 1);
      if ( (_BYTE)v9 == (_BYTE)Val )
        break;
      if ( (_BYTE)v9 == 0 )
        return nullptr;
      if ( BYTE1(v9) == (_BYTE)Val )
        return (char *)(v2 - 3);
      if ( BYTE1(v9) == 0 )
        return nullptr;
      v10 = HIWORD(v9);
      if ( (_BYTE)v10 == (_BYTE)Val )
        return (char *)(v2 - 2);
      if ( (_BYTE)v10 == 0 )
        return nullptr;
      if ( BYTE1(v10) == (_BYTE)Val )
        return (char *)(v2 - 1);
      if ( BYTE1(v10) == 0 )
        return nullptr;
    }
    return (char *)(v2 - 4);
  }
}


/* ============================================
   Address: 0x409460
   Function: __mtinitlocks
   ============================================ */

void _mtinitlocks()
{
  InitializeCriticalSection(lpCriticalSection: lpCriticalSection);
  InitializeCriticalSection(lpCriticalSection: off_427EA4);
  InitializeCriticalSection(lpCriticalSection: off_427E94);
  InitializeCriticalSection(lpCriticalSection: off_427E74);
}


/* ============================================
   Address: 0x409490
   Function: __lock
   ============================================ */

void __cdecl _lock(int a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // esi

  if ( *(&dword_427E70 + a1) == nullptr )
  {
    v1 = (struct _RTL_CRITICAL_SECTION *)malloc(Size: 0x18u);
    if ( v1 == nullptr )
      _amsg_exit(a1: 17);
    _lock(a1: 17);
    if ( *(&dword_427E70 + a1) != nullptr )
    {
      free(Block: v1);
    }
    else
    {
      InitializeCriticalSection(lpCriticalSection: v1);
      *(&dword_427E70 + a1) = v1;
    }
    _unlock(a1: 17);
  }
  EnterCriticalSection(lpCriticalSection: *(&dword_427E70 + a1));
}


/* ============================================
   Address: 0x409510
   Function: __unlock
   ============================================ */

void __cdecl _unlock(int a1)
{
  LeaveCriticalSection(lpCriticalSection: *(&dword_427E70 + a1));
}


/* ============================================
   Address: 0x409530
   Function: __lock_file
   ============================================ */

void __cdecl _lock_file(FILE *Stream)
{
  if ( Stream < (FILE *)&off_42A580 || Stream > &stru_42A7E0 )
    EnterCriticalSection(lpCriticalSection: (LPCRITICAL_SECTION)&Stream[1]);
  else
    _lock(a1: (((char *)Stream - (char *)&off_42A580) >> 5) + 28);
}


/* ============================================
   Address: 0x409570
   Function: __lock_file2
   ============================================ */

void __cdecl _lock_file2(int a1, int a2)
{
  if ( a1 >= 20 )
    EnterCriticalSection(lpCriticalSection: (LPCRITICAL_SECTION)(a2 + 32));
  else
    _lock(a1: a1 + 28);
}


/* ============================================
   Address: 0x4095A0
   Function: __unlock_file
   ============================================ */

void __cdecl _unlock_file(FILE *Stream)
{
  if ( Stream < (FILE *)&off_42A580 || Stream > &stru_42A7E0 )
    LeaveCriticalSection(lpCriticalSection: (LPCRITICAL_SECTION)&Stream[1]);
  else
    _unlock(a1: (((char *)Stream - (char *)&off_42A580) >> 5) + 28);
}


/* ============================================
   Address: 0x4095E0
   Function: __unlock_file2
   ============================================ */

void __cdecl _unlock_file2(int a1, int a2)
{
  if ( a1 >= 20 )
    LeaveCriticalSection(lpCriticalSection: (LPCRITICAL_SECTION)(a2 + 32));
  else
    _unlock(a1: a1 + 28);
}


/* ============================================
   Address: 0x409610
   Function: __filbuf
   ============================================ */

int __cdecl _filbuf(FILE *File)
{
  int flag; // eax
  int v3; // eax
  int v4; // edx
  _BYTE *v5; // ecx
  int v6; // ecx
  int v8; // ecx

  flag = File->_flag;
  if ( (flag & 0x83) == 0 || (flag & 0x40) != 0 )
    return -1;
  if ( (flag & 2) != 0 )
  {
    LOBYTE(flag) = flag | 0x20;
    File->_flag = flag;
    return -1;
  }
  LOBYTE(flag) = flag | 1;
  File->_flag = flag;
  if ( (flag & 0x10C) != 0 )
    File->_ptr = File->_base;
  else
    _getbuf(a1: File);
  v3 = _read(FileHandle: File->_file, DstBuf: File->_base, MaxCharCount: File->_bufsiz);
  File->_cnt = v3;
  if ( v3 == 0 || v3 == -1 )
  {
    v8 = File->_flag;
    File->_cnt = 0;
    File->_flag = (v3 != 0 ? 32 : 16) | v8;
    return -1;
  }
  v4 = File->_flag;
  if ( (v4 & 0x82) == 0 )
  {
    v5 = File->_file == -1 ? &unk_427F48 : (_BYTE *)(dword_431020[File->_file >> 5] + 36 * (File->_file & 0x1F));
    if ( (v5[4] & 0x82) == 0x82 )
    {
      BYTE1(v4) |= 0x20u;
      File->_flag = v4;
    }
  }
  if ( File->_bufsiz == 512 )
  {
    v6 = File->_flag;
    if ( (v6 & 8) != 0 && (v6 & 0x400) == 0 )
      File->_bufsiz = 4096;
  }
  File->_cnt = v3 - 1;
  return *(unsigned __int8 *)File->_ptr++;
}


/* ============================================
   Address: 0x409700
   Function: __openfile
   ============================================ */

_DWORD *__usercall _openfile@<eax>(int a1@<ebx>, char *FileName, char *a3, int ShareFlag, _DWORD *a5)
{
  char v5; // al
  int v6; // edx
  int v7; // ebp
  int v9; // eax
  unsigned int v10; // edi
  int v11; // esi
  char i; // cl
  int v13; // kr08_4
  int v14; // ecx
  char *v15; // [esp+18h] [ebp+8h]

  v5 = *a3;
  v6 = 0;
  v7 = 0;
  if ( *a3 == 97 )
  {
    v9 = 265;
LABEL_8:
    v10 = dword_42FF48 | 2;
    goto LABEL_9;
  }
  if ( v5 != 114 )
  {
    if ( v5 != 119 )
      return nullptr;
    v9 = 769;
    goto LABEL_8;
  }
  v9 = 0;
  v10 = dword_42FF48 | 1;
LABEL_9:
  v11 = 1;
  v15 = a3 + 1;
  for ( i = *v15; *v15 != 0; i = *++v15 )
  {
    if ( v11 == 0 )
      break;
    v13 = a1;
    a1 = 0;
    switch ( i )
    {
      case '+':
        if ( (v9 & 2) != 0 )
          goto LABEL_30;
        LOBYTE(v9) = v9 & 0xFC | 2;
        v10 = v10 & 0xFFFFFF7C | 0x80;
        break;
      case 'D':
        if ( (v9 & 0x40) != 0 )
          goto LABEL_30;
        LOBYTE(v9) = v9 | 0x40;
        break;
      case 'R':
        if ( v7 != 0 )
          goto LABEL_30;
        v7 = 1;
        LOBYTE(v9) = v9 | 0x10;
        break;
      case 'S':
        if ( v7 != 0 )
          goto LABEL_30;
        v7 = 1;
        LOBYTE(v9) = v9 | 0x20;
        break;
      case 'T':
        if ( (v9 & 0x1000) != 0 )
          goto LABEL_30;
        BYTE1(v9) |= 0x10u;
        break;
      case 'b':
        if ( (v9 & 0xC000) != 0 )
          goto LABEL_30;
        BYTE1(v9) |= 0x80u;
        break;
      case 'c':
        if ( v6 != 0 )
          goto LABEL_30;
        v6 = 1;
        v10 |= 0x4000u;
        break;
      case 'n':
        if ( v6 != 0 )
          goto LABEL_30;
        v6 = 1;
        v10 &= ~0x4000u;
        break;
      case 't':
        if ( (v9 & 0xC000) != 0 )
          goto LABEL_30;
        BYTE1(v9) |= 0x40u;
        break;
      default:
        a1 = v13;
LABEL_30:
        v11 = 0;
        break;
    }
  }
  v14 = _sopen(FileName, OpenFlag: v9, ShareFlag, 420);
  if ( v14 < 0 )
    return nullptr;
  ++dword_42FF44;
  a5[3] = v10;
  a5[1] = 0;
  *a5 = 0;
  a5[2] = 0;
  a5[7] = 0;
  a5[4] = v14;
  return a5;
}


/* ============================================
   Address: 0x4098D0
   Function: __getstream
   ============================================ */

_DWORD *_getstream()
{
  _DWORD *v0; // edi
  int v1; // esi
  int v2; // eax
  int v3; // esi
  int v4; // eax

  v0 = nullptr;
  _lock(a1: 2);
  v1 = 0;
  if ( (int)Count > 0 )
  {
    while ( 1 )
    {
      v2 = *(_DWORD *)(dword_42FFE4 + 4 * v1);
      if ( v2 == 0 )
        break;
      if ( (*(_BYTE *)(v2 + 12) & 0x83) == 0 )
      {
        _lock_file2(a1: v1, a2: *(_DWORD *)(dword_42FFE4 + 4 * v1));
        if ( (*(_BYTE *)(*(_DWORD *)(dword_42FFE4 + 4 * v1) + 12) & 0x83) == 0 )
        {
          v0 = *(_DWORD **)(dword_42FFE4 + 4 * v1);
          goto LABEL_11;
        }
        _unlock_file2(a1: v1, a2: *(_DWORD *)(dword_42FFE4 + 4 * v1));
      }
      if ( ++v1 >= (int)Count )
        goto LABEL_11;
    }
    v3 = 4 * v1;
    *(_DWORD *)(dword_42FFE4 + v3) = malloc(Size: 0x38u);
    v4 = *(_DWORD *)(dword_42FFE4 + v3);
    if ( v4 != 0 )
    {
      InitializeCriticalSection(lpCriticalSection: (LPCRITICAL_SECTION)(v4 + 32));
      EnterCriticalSection(lpCriticalSection: (LPCRITICAL_SECTION)(*(_DWORD *)(dword_42FFE4 + v3) + 32));
      v0 = *(_DWORD **)(dword_42FFE4 + v3);
    }
  }
LABEL_11:
  if ( v0 != nullptr )
  {
    v0[1] = 0;
    v0[3] = 0;
    v0[2] = 0;
    *v0 = 0;
    v0[7] = 0;
    v0[4] = -1;
  }
  _unlock(a1: 2);
  return v0;
}


/* ============================================
   Address: 0x4099B0
   Function: __setdefaultprecision
   ============================================ */

unsigned int _setdefaultprecision()
{
  return _controlfp(NewValue: 0x10000u, Mask: 0x30000u);
}


/* ============================================
   Address: 0x4099D0
   Function: __ms_p5_test_fdiv
   ============================================ */

BOOL _ms_p5_test_fdiv()
{
  return 4195835.0 - 4195835.0 / 3145727.0 * 3145727.0 > 1.0;
}


/* ============================================
   Address: 0x409A20
   Function: __ms_p5_mp_test_fdiv
   ============================================ */

int _ms_p5_mp_test_fdiv()
{
  HMODULE ModuleHandleA; // eax
  BOOL (__stdcall *IsProcessorFeaturePresent)(DWORD); // eax

  ModuleHandleA = GetModuleHandleA(lpModuleName: "KERNEL32");
  if ( ModuleHandleA != nullptr
    && (IsProcessorFeaturePresent = (BOOL (__stdcall *)(DWORD))GetProcAddress(
                                                                 hModule: ModuleHandleA,
                                                                 lpProcName: "IsProcessorFeaturePresent")) != nullptr )
  {
    return IsProcessorFeaturePresent(ProcessorFeature: 0);
  }
  else
  {
    return _ms_p5_test_fdiv();
  }
}


/* ============================================
   Address: 0x409A50
   Function: __forcdecpt
   ============================================ */

char __cdecl _forcdecpt(char *a1)
{
  char *v1; // esi
  int v2; // eax
  char result; // al
  char *v4; // esi
  char v5; // cl
  char v6; // dl

  v1 = a1;
  if ( tolower(C: *a1) != 101 )
  {
    do
    {
      ++v1;
      if ( (int)SrcSizeInBytes <= 1 )
        v2 = *((_BYTE *)off_4280D0 + 2 * *v1) & 4;
      else
        v2 = _isctype(C: *v1, Type: 4);
    }
    while ( v2 != 0 );
  }
  result = *v1;
  *v1 = byte_4282E0;
  v4 = v1 + 1;
  do
  {
    v5 = *v4;
    *v4 = result;
    v6 = *v4++;
    result = v5;
  }
  while ( v6 != 0 );
  return result;
}


/* ============================================
   Address: 0x409AB0
   Function: __cropzeros
   ============================================ */

char *__cdecl _cropzeros(char *a1)
{
  char *v1; // eax
  char i; // cl
  char v3; // cl
  char *result; // eax
  char j; // cl
  char v6; // cl
  char *v7; // edx
  char *v8; // eax
  char v9; // cl
  char v10; // cl
  char *v11; // edx
  char v12; // cl

  v1 = a1;
  for ( i = *a1; i != 0; i = *++v1 )
  {
    if ( i == byte_4282E0 )
      break;
  }
  v3 = *v1;
  result = v1 + 1;
  if ( v3 != 0 )
  {
    for ( j = *result; j != 0; j = *++result )
    {
      if ( j == 101 )
        break;
      if ( j == 69 )
        break;
    }
    v6 = *(result - 1);
    v7 = result;
    v8 = result - 1;
    if ( v6 == 48 )
    {
      do
        v9 = *--v8;
      while ( v9 == 48 );
    }
    if ( *v8 == byte_4282E0 )
      --v8;
    v10 = *v7;
    result = v8 + 1;
    v11 = v7 + 1;
    *result = v10;
    if ( v10 != 0 )
    {
      do
      {
        v12 = *v11;
        ++result;
        ++v11;
        *result = v12;
      }
      while ( v12 != 0 );
    }
  }
  return result;
}


/* ============================================
   Address: 0x409B20
   Function: __positive
   ============================================ */

BOOL __cdecl _positive(double *a1)
{
  return *a1 >= 0.0;
}


/* ============================================
   Address: 0x409B40
   Function: __fassign
   ============================================ */

_QWORD *__cdecl _fassign(int a1, _QWORD *a2, int a3)
{
  _QWORD *result; // eax
  __int64 v4; // [esp+0h] [ebp-8h] BYREF

  if ( a1 != 0 )
  {
    sub_40ECF0(a1: &v4, a2: a3);
    *a2 = v4;
    return a2;
  }
  else
  {
    result = (_QWORD *)sub_40ED30(a1: &a3, a2: a3);
    *(_DWORD *)a2 = a3;
  }
  return result;
}


/* ============================================
   Address: 0x409BA0
   Function: __cftoe
   ============================================ */

int __cdecl _cftoe(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD v5[4]; // [esp+8h] [ebp-28h] BYREF
  _BYTE v6[24]; // [esp+18h] [ebp-18h] BYREF

  _fltout2(a1: *a1, a2: a1[1], a3: v5, a4: v6);
  _fptostr(a1: (a3 > 0) + a2 + (v5[0] == 45), a2: a3 + 1, a3: v5);
  _cftoe2(a1: a2, a2: a3, a3: a4, a4: v5, a5: 0);
  return a2;
}


/* ============================================
   Address: 0x409C20
   Function: __cftoe2
   ============================================ */

_BYTE *__cdecl _cftoe2(_BYTE *a1, int a2, int a3, int a4, char a5)
{
  _BYTE *v5; // eax
  char *v6; // esi
  _BYTE *v7; // esi
  int v8; // ecx
  _BYTE *v9; // esi
  _BYTE *v10; // esi

  if ( a5 != 0 )
    _shift(Src: &a1[*(_DWORD *)a4 == 45], a2: a2 > 0);
  v5 = a1;
  if ( *(_DWORD *)a4 == 45 )
  {
    *a1 = 45;
    v5 = a1 + 1;
  }
  if ( a2 > 0 )
  {
    *v5 = v5[1];
    *++v5 = byte_4282E0;
  }
  v6 = &v5[(a5 == 0) + a2];
  strcpy(v6, "e+000");
  if ( a3 != 0 )
    *v6 = 69;
  v7 = v6 + 1;
  if ( **(_BYTE **)(a4 + 12) != 48 )
  {
    v8 = *(_DWORD *)(a4 + 4) - 1;
    if ( v8 < 0 )
    {
      v8 = 1 - *(_DWORD *)(a4 + 4);
      *v7 = 45;
    }
    v9 = v7 + 1;
    if ( v8 >= 100 )
    {
      *v9 += v8 / 100;
      v8 %= 100;
    }
    v10 = v9 + 1;
    if ( v8 >= 10 )
    {
      *v10 += v8 / 10;
      v8 %= 10;
    }
    v10[1] += v8;
  }
  return a1;
}


/* ============================================
   Address: 0x409D20
   Function: __cftof
   ============================================ */

char *__cdecl _cftof(_DWORD *a1, char *Src, int a3)
{
  int v4[4]; // [esp+8h] [ebp-28h] BYREF
  _BYTE v5[24]; // [esp+18h] [ebp-18h] BYREF

  _fltout2(a1: *a1, a2: a1[1], a3: v4, a4: v5);
  _fptostr(a1: &Src[v4[0] == 45], a2: a3 + v4[1], a3: v4);
  _cftof2(Src, a2: a3, a3: (int)v4, a4: 0);
  return Src;
}


/* ============================================
   Address: 0x409D90
   Function: __cftof2
   ============================================ */

char *__cdecl _cftof2(char *Src, int a2, _DWORD *a3, char a4)
{
  int v4; // ebp
  int v5; // eax
  char *v6; // ecx
  _BYTE *v7; // edi
  int v8; // eax
  _BYTE *v9; // edi
  int v10; // esi
  void *v11; // edi
  int v12; // esi

  v4 = a2;
  v5 = a3[1] - 1;
  if ( a4 != 0 )
  {
    v6 = &Src[*a3 == 45];
    if ( v5 == a2 )
    {
      v6[v5] = 48;
      v6[v5 + 1] = 0;
    }
  }
  v7 = Src;
  if ( *a3 == 45 )
  {
    *Src = 45;
    v7 = Src + 1;
  }
  v8 = a3[1];
  if ( v8 > 0 )
  {
    v9 = &v7[v8];
  }
  else
  {
    _shift(Src: v7, a2: 1);
    *v7 = 48;
    v9 = v7 + 1;
  }
  if ( a2 > 0 )
  {
    _shift(Src: v9, a2: 1);
    *v9 = byte_4282E0;
    v10 = a3[1];
    v11 = v9 + 1;
    if ( v10 < 0 )
    {
      if ( a4 != 0 )
      {
        v12 = -v10;
      }
      else
      {
        v12 = -v10;
        if ( a2 < v12 )
        {
LABEL_15:
          _shift(Src: v11, a2: v4);
          memset(v11, 0x30u, v4);
          return Src;
        }
      }
      v4 = v12;
      goto LABEL_15;
    }
  }
  return Src;
}


/* ============================================
   Address: 0x409E50
   Function: __cftog
   ============================================ */

char *__cdecl _cftog(_DWORD *a1, char *Src, int a3, int a4)
{
  int v4; // edi
  char *v5; // esi
  char v6; // dl
  const char *v7; // esi
  int v9; // [esp+10h] [ebp-28h] BYREF
  int v10; // [esp+14h] [ebp-24h]
  char v11[24]; // [esp+20h] [ebp-18h] BYREF

  _fltout2(a1: *a1, a2: a1[1], a3: &v9, a4: v11);
  v4 = v10 - 1;
  v5 = &Src[v9 == 45];
  _fptostr(a1: v5, a2: a3, a3: &v9);
  if ( v10 - 1 < -4 || v10 - 1 >= a3 )
    return _cftoe2(a1: Src, a2: a3, a3: a4, a4: (int)&v9, a5: 1);
  if ( v4 < v10 - 1 )
  {
    v6 = *v5;
    v7 = v5 + 1;
    if ( v6 != 0 )
      v7 += strlen(v7) + 1;
    *((_BYTE *)v7 - 2) = 0;
  }
  return _cftof2(Src, a2: a3, a3: &v9, a4: 1);
}


/* ============================================
   Address: 0x409F10
   Function: __cfltcvt
   ============================================ */

char *__cdecl _cfltcvt(_DWORD *a1, char *Src, int a3, int a4, int a5)
{
  if ( a3 == 101 || a3 == 69 )
    return (char *)_cftoe(a1, a2: (int)Src, a3: a4, a4: a5);
  if ( a3 == 102 )
    return _cftof(a1, Src, a3: a4);
  return _cftog(a1, Src, a3: a4, a4: a5);
}


/* ============================================
   Address: 0x409F80
   Function: __shift
   ============================================ */

void *__cdecl _shift(char *Src, int a2)
{
  void *result; // eax

  if ( a2 != 0 )
    return memcpy_0(a1: &Src[a2], Src, Size: strlen(Src) + 1);
  return result;
}


/* ============================================
   Address: 0x409FB0
   Function: __read
   ============================================ */

int __cdecl _read(int FileHandle, void *DstBuf, unsigned int MaxCharCount)
{
  int lk; // edi

  if ( FileHandle < uNumber && (*(_BYTE *)(dword_431020[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) & 1) != 0 )
  {
    _lock_fhandle(a1: FileHandle);
    lk = _read_lk(FileHandle, lpBuffer: DstBuf, nNumberOfBytesToRead: MaxCharCount);
    _unlock_fhandle(a1: FileHandle);
    return lk;
  }
  else
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
}


/* ============================================
   Address: 0x40A030
   Function: __read_lk
   ============================================ */

DWORD __cdecl _read_lk(int FileHandle, char *lpBuffer, DWORD nNumberOfBytesToRead)
{
  char *v3; // edi
  int v4; // ebp
  char *v5; // edx
  int v6; // eax
  int v7; // ebx
  int v8; // ecx
  char v9; // al
  char v10; // al
  DWORD LastError; // eax
  DWORD v13; // ebp
  char v14; // al
  char v15; // al
  char *v16; // ebp
  char *v17; // esi
  char v18; // al
  DWORD v19; // ebp
  _DWORD *v20; // ecx
  char v21; // al
  char v22; // al
  _BYTE *v23; // ebx
  char Buffer; // [esp+13h] [ebp-9h] BYREF
  DWORD NumberOfBytesRead; // [esp+14h] [ebp-8h] BYREF
  _DWORD *v26; // [esp+18h] [ebp-4h]
  DWORD nNumberOfBytesToReada; // [esp+28h] [ebp+Ch]

  v3 = lpBuffer;
  v4 = 0;
  v5 = lpBuffer;
  if ( nNumberOfBytesToRead == 0 )
    return 0;
  v6 = dword_431020[FileHandle >> 5];
  v7 = 36 * (FileHandle & 0x1F);
  v26 = (_DWORD *)(4 * (FileHandle >> 5) + 4395040);
  v8 = v7 + v6;
  v9 = *(_BYTE *)(v7 + v6 + 4);
  if ( (v9 & 2) != 0 )
    return 0;
  if ( (v9 & 0x48) != 0 )
  {
    v10 = *(_BYTE *)(v8 + 5);
    if ( v10 != 10 )
    {
      *lpBuffer = v10;
      v5 = lpBuffer + 1;
      v4 = 1;
      --nNumberOfBytesToRead;
      *(_BYTE *)(v7 + dword_431020[FileHandle >> 5] + 5) = 10;
    }
  }
  if ( !ReadFile(
          hFile: *(HANDLE *)(v7 + dword_431020[FileHandle >> 5]),
          lpBuffer: v5,
          nNumberOfBytesToRead,
          lpNumberOfBytesRead: &NumberOfBytesRead,
          lpOverlapped: nullptr) )
  {
    LastError = GetLastError();
    if ( LastError == 5 )
    {
      *_errno() = 9;
      *__doserrno() = 5;
      return -1;
    }
    if ( LastError != 109 )
    {
      _dosmaperr(a1: LastError);
      return -1;
    }
    return 0;
  }
  v13 = NumberOfBytesRead + v4;
  v14 = *(_BYTE *)(v7 + dword_431020[FileHandle >> 5] + 4);
  if ( v14 >= 0 )
    return v13;
  if ( NumberOfBytesRead != 0 && *lpBuffer == 10 )
    v15 = v14 | 4;
  else
    v15 = v14 & 0xFB;
  *(_BYTE *)(v7 + dword_431020[FileHandle >> 5] + 4) = v15;
  v16 = &lpBuffer[v13];
  v17 = lpBuffer;
  nNumberOfBytesToReada = (DWORD)v16;
  if ( lpBuffer >= v16 )
    return v17 - lpBuffer;
  while ( 1 )
  {
    v18 = *v3;
    if ( *v3 == 26 )
      break;
    if ( v18 == 13 )
    {
      if ( v3 >= v16 - 1 )
      {
        v19 = 0;
        ++v3;
        if ( !ReadFile(
                hFile: *(HANDLE *)(v7 + *v26),
                lpBuffer: &Buffer,
                nNumberOfBytesToRead: 1u,
                lpNumberOfBytesRead: &NumberOfBytesRead,
                lpOverlapped: nullptr) )
          v19 = GetLastError();
        if ( v19 != 0 || NumberOfBytesRead == 0 )
        {
LABEL_36:
          *v17 = 13;
          goto LABEL_37;
        }
        v20 = v26;
        if ( (*(_BYTE *)(v7 + *v26 + 4) & 0x48) != 0 )
        {
          v21 = Buffer;
          if ( Buffer == 10 )
          {
            *v17 = 10;
            goto LABEL_37;
          }
          *v17++ = 13;
          *(_BYTE *)(v7 + *v20 + 5) = v21;
        }
        else
        {
          if ( v17 == lpBuffer && Buffer == 10 )
          {
            *v17 = 10;
            goto LABEL_37;
          }
          _lseek_lk(FileHandle, lDistanceToMove: -1, dwMoveMethod: 1u);
          if ( Buffer != 10 )
            goto LABEL_36;
        }
      }
      else
      {
        if ( v3[1] == 10 )
        {
          v3 += 2;
          *v17 = 10;
LABEL_37:
          ++v17;
          goto LABEL_38;
        }
        *v17++ = 13;
        ++v3;
      }
    }
    else
    {
      *v17++ = v18;
      ++v3;
    }
LABEL_38:
    v16 = (char *)nNumberOfBytesToReada;
    if ( (unsigned int)v3 >= nNumberOfBytesToReada )
      return v17 - lpBuffer;
  }
  v22 = *(_BYTE *)(v7 + *v26 + 4);
  v23 = (_BYTE *)(v7 + *v26 + 4);
  if ( (v22 & 0x40) == 0 )
    *v23 = v22 | 2;
  return v17 - lpBuffer;
}


/* ============================================
   Address: 0x40A260
   Function: __lseek
   ============================================ */

int __cdecl _lseek(int FileHandle, int Offset, int Origin)
{
  int v3; // edi

  if ( FileHandle < uNumber && (*(_BYTE *)(dword_431020[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) & 1) != 0 )
  {
    _lock_fhandle(a1: FileHandle);
    v3 = _lseek_lk(FileHandle, lDistanceToMove: Offset, dwMoveMethod: Origin);
    _unlock_fhandle(a1: FileHandle);
    return v3;
  }
  else
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
}


/* ============================================
   Address: 0x40A2E0
   Function: __lseek_lk
   ============================================ */

DWORD __cdecl _lseek_lk(int FileHandle, LONG lDistanceToMove, DWORD dwMoveMethod)
{
  void *osfhandle; // eax
  DWORD v5; // edi
  DWORD LastError; // eax

  osfhandle = (void *)_get_osfhandle(FileHandle);
  if ( osfhandle == (void *)-1 )
  {
    *_errno() = 9;
    return -1;
  }
  else
  {
    v5 = SetFilePointer(hFile: osfhandle, lDistanceToMove, lpDistanceToMoveHigh: nullptr, dwMoveMethod);
    if ( v5 == -1 )
      LastError = GetLastError();
    else
      LastError = 0;
    if ( LastError != 0 )
    {
      _dosmaperr(a1: LastError);
      return -1;
    }
    else
    {
      *(_BYTE *)(dword_431020[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) &= ~2u;
      return v5;
    }
  }
}


/* ============================================
   Address: 0x40A360
   Function: __ioinit
   ============================================ */

UINT _ioinit()
{
  char *v0; // esi
  LPBYTE v1; // edi
  HANDLE *v2; // ebp
  char **v3; // esi
  char *v4; // eax
  UINT v5; // edx
  int i; // esi
  int v7; // eax
  int j; // ebp
  int v9; // esi
  DWORD v10; // eax
  HANDLE StdHandle; // eax
  HANDLE v12; // edi
  DWORD FileType; // eax
  char v14; // al
  signed int v16; // [esp+10h] [ebp-48h]
  struct _STARTUPINFOA StartupInfo; // [esp+14h] [ebp-44h] BYREF

  v0 = (char *)malloc(Size: 0x480u);
  if ( v0 == nullptr )
    _amsg_exit(a1: 27);
  dword_431020[0] = (int)v0;
  uNumber = 32;
  if ( v0 < v0 + 1152 )
  {
    do
    {
      v0[4] = 0;
      *(_DWORD *)v0 = -1;
      v0[5] = 10;
      *((_DWORD *)v0 + 2) = 0;
      v0 += 36;
    }
    while ( (unsigned int)v0 < dword_431020[0] + 1152 );
  }
  GetStartupInfoA(lpStartupInfo: &StartupInfo);
  if ( StartupInfo.cbReserved2 != 0 && StartupInfo.lpReserved2 != nullptr )
  {
    v1 = StartupInfo.lpReserved2 + 4;
    v16 = *(_DWORD *)StartupInfo.lpReserved2;
    v2 = (HANDLE *)&StartupInfo.lpReserved2[*(_DWORD *)StartupInfo.lpReserved2 + 4];
    if ( *(int *)StartupInfo.lpReserved2 >= 2048 )
      v16 = 2048;
    if ( (int)uNumber < v16 )
    {
      v3 = (char **)&unk_431024;
      while ( 1 )
      {
        v4 = (char *)malloc(Size: 0x480u);
        if ( v4 == nullptr )
          break;
        v5 = uNumber;
        *v3 = v4;
        for ( uNumber = v5 + 32; v4 < *v3 + 1152; v4 += 36 )
        {
          v4[4] = 0;
          *(_DWORD *)v4 = -1;
          v4[5] = 10;
          *((_DWORD *)v4 + 2) = 0;
        }
        ++v3;
        if ( (int)uNumber >= v16 )
          goto LABEL_17;
      }
      v16 = uNumber;
    }
LABEL_17:
    for ( i = 0; i < v16; ++v2 )
    {
      if ( *v2 != (HANDLE)-1 && (*v1 & 1) != 0 && ((*v1 & 8) != 0 || GetFileType(hFile: *v2) != 0) )
      {
        v7 = dword_431020[i >> 5] + 36 * (i & 0x1F);
        *(_DWORD *)v7 = *v2;
        *(_BYTE *)(v7 + 4) = *v1;
      }
      ++i;
      ++v1;
    }
  }
  for ( j = 0; j < 3; ++j )
  {
    v9 = dword_431020[0] + 36 * j;
    if ( *(_DWORD *)v9 == -1 )
    {
      *(_BYTE *)(v9 + 4) = -127;
      if ( j != 0 )
        v10 = -(j != 1) - 11;
      else
        v10 = -10;
      StdHandle = GetStdHandle(nStdHandle: v10);
      v12 = StdHandle;
      if ( StdHandle == (HANDLE)-1 || (FileType = GetFileType(hFile: StdHandle)) == 0 )
      {
        v14 = *(_BYTE *)(v9 + 4) | 0x40;
      }
      else
      {
        *(_DWORD *)v9 = v12;
        if ( (unsigned __int8)FileType == 2 )
        {
          v14 = *(_BYTE *)(v9 + 4) | 0x40;
        }
        else
        {
          if ( (unsigned __int8)FileType != 3 )
            continue;
          v14 = *(_BYTE *)(v9 + 4) | 8;
        }
      }
    }
    else
    {
      v14 = *(_BYTE *)(v9 + 4) | 0x80;
    }
    *(_BYTE *)(v9 + 4) = v14;
  }
  return SetHandleCount(uNumber: uNumber);
}


/* ============================================
   Address: 0x40A570
   Function: __fflush_lk
   ============================================ */

int __cdecl _fflush_lk(int a1)
{
  if ( _flush(a1) != 0 )
    return -1;
  if ( (*(_DWORD *)(a1 + 12) & 0x4000) != 0 )
    return -(_commit(FileHandle: *(_DWORD *)(a1 + 16)) != 0);
  return 0;
}


/* ============================================
   Address: 0x40A5B0
   Function: __flush
   ============================================ */

int __cdecl _flush(_DWORD *a1)
{
  int v1; // ebx
  const void *v2; // eax
  unsigned int v3; // edi
  bool v4; // zf
  int v5; // eax
  int v7; // eax

  v1 = 0;
  if ( (a1[3] & 3) == 2 && (a1[3] & 0x108) != 0 )
  {
    v2 = (const void *)a1[2];
    if ( *a1 - (int)v2 > 0 )
    {
      v3 = *a1 - (_DWORD)v2;
      v4 = _write(FileHandle: a1[4], Buf: v2, MaxCharCount: v3) == v3;
      v5 = a1[3];
      if ( v4 )
      {
        if ( (v5 & 0x80u) != 0 )
        {
          LOBYTE(v5) = v5 & 0xFD;
          a1[1] = 0;
          a1[3] = v5;
          *a1 = a1[2];
          return 0;
        }
      }
      else
      {
        LOBYTE(v5) = v5 | 0x20;
        v1 = -1;
        a1[3] = v5;
      }
    }
  }
  v7 = a1[2];
  a1[1] = 0;
  *a1 = v7;
  return v1;
}


/* ============================================
   Address: 0x40A620
   Function: __flushall
   ============================================ */

int __cdecl _flushall()
{
  return flsall(a1: 1);
}


/* ============================================
   Address: 0x40A630
   Function: _flsall
   ============================================ */

int __cdecl flsall(int a1)
{
  int v1; // esi
  int v2; // ebp
  int v3; // eax
  int v4; // ecx
  int result; // eax
  int v6; // [esp+10h] [ebp-4h]

  v1 = 0;
  v6 = 0;
  v2 = 0;
  _lock(a1: 2);
  if ( (int)Count > 0 )
  {
    do
    {
      v3 = *(_DWORD *)(dword_42FFE4 + 4 * v1);
      if ( v3 != 0 && (*(_BYTE *)(v3 + 12) & 0x83) != 0 )
      {
        _lock_file2(a1: v1, a2: *(_DWORD *)(dword_42FFE4 + 4 * v1));
        v4 = *(_DWORD *)(*(_DWORD *)(dword_42FFE4 + 4 * v1) + 12);
        if ( (v4 & 0x83) != 0 )
        {
          if ( a1 == 1 )
          {
            if ( _fflush_lk(a1: *(_DWORD *)(dword_42FFE4 + 4 * v1)) != -1 )
              ++v6;
          }
          else if ( a1 == 0 && (v4 & 2) != 0 && _fflush_lk(a1: *(_DWORD *)(dword_42FFE4 + 4 * v1)) == -1 )
          {
            v2 = -1;
          }
        }
        _unlock_file2(a1: v1, a2: *(_DWORD *)(dword_42FFE4 + 4 * v1));
      }
      ++v1;
    }
    while ( v1 < (int)Count );
  }
  _unlock(a1: 2);
  result = v6;
  if ( a1 != 1 )
    return v2;
  return result;
}


/* ============================================
   Address: 0x40A6F0
   Function: __close
   ============================================ */

int __cdecl _close(int FileHandle)
{
  int v1; // edi

  if ( FileHandle < uNumber && (*(_BYTE *)(dword_431020[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) & 1) != 0 )
  {
    _lock_fhandle(a1: FileHandle);
    v1 = _close_lk(FileHandle);
    _unlock_fhandle(a1: FileHandle);
    return v1;
  }
  else
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
}


/* ============================================
   Address: 0x40A760
   Function: __close_lk
   ============================================ */

int __cdecl _close_lk(int FileHandle)
{
  intptr_t osfhandle; // edi
  void *v2; // eax
  DWORD LastError; // edi

  if ( _get_osfhandle(FileHandle) == -1
    || (FileHandle == 1 || FileHandle == 2)
    && (osfhandle = _get_osfhandle(FileHandle: 1)) == _get_osfhandle(FileHandle: 2)
    || (v2 = (void *)_get_osfhandle(FileHandle), CloseHandle(hObject: v2)) )
  {
    LastError = 0;
  }
  else
  {
    LastError = GetLastError();
  }
  _free_osfhnd(a1: FileHandle);
  *(_BYTE *)(dword_431020[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) = 0;
  if ( LastError == 0 )
    return 0;
  _dosmaperr(a1: LastError);
  return -1;
}


/* ============================================
   Address: 0x40A7F0
   Function: __freebuf
   ============================================ */

int __cdecl _freebuf(int a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 12);
  if ( (result & 0x83) != 0 && (result & 8) != 0 )
  {
    free(Block: *(void **)(a1 + 8));
    *(_DWORD *)(a1 + 12) &= 0xFFFFFBF7;
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 4) = 0;
    return 0;
  }
  return result;
}


/* ============================================
   Address: 0x40A830
   Function: __flsbuf
   ============================================ */

int __cdecl _flsbuf(int Ch, FILE *File)
{
  FILE *v2; // esi
  int flag; // eax
  int v4; // ebp
  int v5; // ebx
  int v6; // eax
  char *base; // eax
  signed int v8; // edi
  int v9; // ecx
  _BYTE *v10; // eax
  int v11; // eax

  v2 = File;
  flag = File->_flag;
  v4 = File->_file;
  if ( (flag & 0x82) != 0 && (flag & 0x40) == 0 )
  {
    v5 = 0;
    if ( (flag & 1) == 0 )
      goto LABEL_6;
    File->_cnt = 0;
    if ( (flag & 0x10) != 0 )
    {
      LOBYTE(flag) = flag & 0xFE;
      v2->_ptr = v2->_base;
      v2->_flag = flag;
LABEL_6:
      v6 = v2->_flag;
      v2->_cnt = 0;
      LOBYTE(v6) = v6 & 0xED | 2;
      v2->_flag = v6;
      if ( (v6 & 0x10C) == 0 && (v2 != (FILE *)&unk_42A5A0 && v2 != (FILE *)&unk_42A5C0 || _isatty(FileHandle: v4) == 0) )
        _getbuf(a1: v2);
      if ( (v2->_flag & 0x108) != 0 )
      {
        base = v2->_base;
        v8 = v2->_ptr - base;
        v9 = v2->_bufsiz - 1;
        v2->_ptr = base + 1;
        v2->_cnt = v9;
        if ( v8 <= 0 )
        {
          if ( v4 == -1 )
            v10 = &unk_427F48;
          else
            v10 = (_BYTE *)(dword_431020[v4 >> 5] + 36 * (v4 & 0x1F));
          if ( (v10[4] & 0x20) != 0 )
            _lseek(FileHandle: v4, Offset: 0, Origin: 2);
          *v2->_base = Ch;
        }
        else
        {
          v5 = _write(FileHandle: v4, Buf: base, MaxCharCount: v8);
          *v2->_base = Ch;
        }
      }
      else
      {
        v8 = 1;
        v5 = _write(FileHandle: v4, Buf: &Ch, MaxCharCount: 1u);
      }
      if ( v5 == v8 )
        return (unsigned __int8)Ch;
      v11 = v2->_flag;
      LOBYTE(v11) = v11 | 0x20;
      v2->_flag = v11;
      return -1;
    }
  }
  LOBYTE(flag) = flag | 0x20;
  v2->_flag = flag;
  return -1;
}


/* ============================================
   Address: 0x40A960
   Function: __write
   ============================================ */

int __cdecl _write(int FileHandle, const void *Buf, unsigned int MaxCharCount)
{
  int v3; // edi

  if ( FileHandle < uNumber && (*(_BYTE *)(dword_431020[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) & 1) != 0 )
  {
    _lock_fhandle(a1: FileHandle);
    v3 = _write_lk(FileHandle, lpBuffer: Buf, nNumberOfBytesToWrite: MaxCharCount);
    _unlock_fhandle(a1: FileHandle);
    return v3;
  }
  else
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
}


/* ============================================
   Address: 0x40A9E0
   Function: __write_lk
   ============================================ */

int __cdecl _write_lk(int FileHandle, _BYTE *lpBuffer, DWORD nNumberOfBytesToWrite)
{
  int v4; // esi
  int v5; // eax
  _BYTE *v6; // ebp
  char *v7; // edi
  _BYTE *v8; // eax
  char v9; // cl
  int v10; // esi
  signed int v11; // esi
  DWORD v12; // [esp+10h] [ebp-41Ch]
  int v13; // [esp+14h] [ebp-418h]
  DWORD LastError; // [esp+18h] [ebp-414h]
  DWORD NumberOfBytesWritten; // [esp+1Ch] [ebp-410h] BYREF
  int v16; // [esp+20h] [ebp-40Ch]
  _DWORD *v17; // [esp+24h] [ebp-408h]
  _BYTE Buffer[1028]; // [esp+28h] [ebp-404h] BYREF

  v12 = 0;
  v16 = 0;
  if ( nNumberOfBytesToWrite == 0 )
    return 0;
  v17 = (_DWORD *)(4 * (FileHandle >> 5) + 4395040);
  v4 = 36 * (FileHandle & 0x1F);
  v13 = v4;
  if ( (*(_BYTE *)(v4 + dword_431020[FileHandle >> 5] + 4) & 0x20) != 0 )
    _lseek_lk(FileHandle, lDistanceToMove: 0, dwMoveMethod: 2u);
  v5 = v4 + dword_431020[FileHandle >> 5];
  if ( *(char *)(v5 + 4) >= 0 )
  {
    v6 = lpBuffer;
    if ( WriteFile(
           hFile: *(HANDLE *)v5,
           lpBuffer,
           nNumberOfBytesToWrite,
           lpNumberOfBytesWritten: &NumberOfBytesWritten,
           lpOverlapped: nullptr) )
    {
      LastError = 0;
      v12 = NumberOfBytesWritten;
    }
    else
    {
      LastError = GetLastError();
    }
  }
  else
  {
    v6 = lpBuffer;
    LastError = 0;
    v7 = lpBuffer;
    while ( 1 )
    {
      v8 = Buffer;
      do
      {
        if ( v7 - lpBuffer >= nNumberOfBytesToWrite )
          break;
        v9 = *v7++;
        if ( v9 == 10 )
        {
          v10 = v16;
          *v8++ = 13;
          v16 = v10 + 1;
        }
        *v8++ = v9;
      }
      while ( v8 - Buffer < 1024 );
      v11 = v8 - Buffer;
      if ( !WriteFile(
              hFile: *(HANDLE *)(v13 + *v17),
              lpBuffer: Buffer,
              nNumberOfBytesToWrite: v8 - Buffer,
              lpNumberOfBytesWritten: &NumberOfBytesWritten,
              lpOverlapped: nullptr) )
        break;
      v12 += NumberOfBytesWritten;
      if ( (int)NumberOfBytesWritten < v11 || v7 - lpBuffer >= nNumberOfBytesToWrite )
        goto LABEL_15;
    }
    LastError = GetLastError();
LABEL_15:
    v4 = v13;
  }
  if ( v12 != 0 )
    return v12 - v16;
  if ( LastError != 0 )
  {
    if ( LastError == 5 )
    {
      *_errno() = 9;
      *__doserrno() = 5;
    }
    else
    {
      _dosmaperr(a1: LastError);
    }
    return -1;
  }
  else if ( (*(_BYTE *)(v4 + *v17 + 4) & 0x40) != 0 && *v6 == 26 )
  {
    return 0;
  }
  else
  {
    *_errno() = 28;
    *__doserrno() = 0;
    return -1;
  }
}


/* ============================================
   Address: 0x40ABF0
   Function: sub_40ABF0
   ============================================ */

int sub_40ABF0()
{
  return 0;
}


/* ============================================
   Address: 0x40AC00
   Function: ___crtLCMapStringA
   ============================================ */

int __cdecl __crtLCMapStringA(
        LCID Locale,
        DWORD dwMapFlags,
        LPCSTR lpSrcStr,
        LPCWCH lpWideCharStr,
        LPSTR lpDestStr,
        int cchDest,
        UINT CodePage)
{
  int result; // eax
  LPCWCH v8; // esi
  UINT v9; // ebp
  int v10; // edi
  WCHAR *v11; // ebx
  int v12; // eax
  int v13; // esi
  WCHAR *v14; // eax
  WCHAR *lpWideCharStra; // [esp+20h] [ebp+10h]

  result = dword_42FD60;
  if ( dword_42FD60 == 0 )
  {
    if ( LCMapStringA(Locale: 0, dwMapFlags: 0x100u, lpSrcStr: SrcStr, cchSrc: 1, lpDestStr: nullptr, cchDest: 0) != 0 )
    {
      result = 2;
    }
    else
    {
      if ( LCMapStringW(
             Locale: 0,
             dwMapFlags: 0x100u,
             lpSrcStr: &word_4246B8,
             cchSrc: 1,
             lpDestStr: nullptr,
             cchDest: 0) == 0 )
        return 0;
      result = 1;
    }
    dword_42FD60 = result;
  }
  v8 = lpWideCharStr;
  if ( (int)lpWideCharStr > 0 )
  {
    v8 = (LPCWCH)strncnt(a1: lpSrcStr, a2: lpWideCharStr);
    result = dword_42FD60;
  }
  if ( result == 2 )
    return LCMapStringA(Locale, dwMapFlags, lpSrcStr, cchSrc: (int)v8, lpDestStr, cchDest);
  if ( result == 1 )
  {
    v9 = CodePage;
    lpWideCharStra = nullptr;
    if ( CodePage == 0 )
    {
      CodePage = ::CodePage;
      v9 = ::CodePage;
    }
    result = MultiByteToWideChar(
               CodePage: v9,
               dwFlags: 9u,
               lpMultiByteStr: lpSrcStr,
               cbMultiByte: (int)v8,
               lpWideCharStr: nullptr,
               cchWideChar: 0);
    v10 = result;
    if ( result != 0 )
    {
      result = (int)malloc(Size: 2 * result);
      v11 = (WCHAR *)result;
      if ( result != 0 )
      {
        if ( MultiByteToWideChar(
               CodePage: v9,
               dwFlags: 1u,
               lpMultiByteStr: lpSrcStr,
               cbMultiByte: (int)v8,
               lpWideCharStr: (LPWSTR)result,
               cchWideChar: v10) != 0 )
        {
          v12 = LCMapStringW(Locale, dwMapFlags, lpSrcStr: v11, cchSrc: v10, lpDestStr: nullptr, cchDest: 0);
          v13 = v12;
          if ( v12 != 0 )
          {
            if ( (dwMapFlags & 0x400) != 0 )
            {
              if ( cchDest == 0
                || v12 <= cchDest
                && LCMapStringW(Locale, dwMapFlags, lpSrcStr: v11, cchSrc: v10, (LPWSTR)lpDestStr, cchDest) != 0 )
              {
                goto LABEL_22;
              }
              goto LABEL_30;
            }
            v14 = (WCHAR *)malloc(Size: 2 * v12);
            lpWideCharStra = v14;
            if ( v14 != nullptr
              && LCMapStringW(Locale, dwMapFlags, lpSrcStr: v11, cchSrc: v10, lpDestStr: v14, cchDest: v13) != 0 )
            {
              if ( cchDest != 0 )
              {
                v13 = WideCharToMultiByte(
                        CodePage,
                        dwFlags: 0x220u,
                        lpWideCharStr: lpWideCharStra,
                        cchWideChar: v13,
                        lpMultiByteStr: lpDestStr,
                        cbMultiByte: cchDest,
                        lpDefaultChar: nullptr,
                        lpUsedDefaultChar: nullptr);
                if ( v13 != 0 )
                {
LABEL_22:
                  free(Block: v11);
                  free(Block: lpWideCharStra);
                  return v13;
                }
              }
              else
              {
                v13 = WideCharToMultiByte(
                        CodePage,
                        dwFlags: 0x220u,
                        lpWideCharStr: lpWideCharStra,
                        cchWideChar: v13,
                        lpMultiByteStr: nullptr,
                        cbMultiByte: 0,
                        lpDefaultChar: nullptr,
                        lpUsedDefaultChar: nullptr);
                if ( v13 != 0 )
                  goto LABEL_22;
              }
            }
          }
        }
LABEL_30:
        free(Block: v11);
        free(Block: lpWideCharStra);
        return 0;
      }
    }
  }
  return result;
}


/* ============================================
   Address: 0x40AE20
   Function: _strncnt
   ============================================ */

_BYTE *__cdecl strncnt(_BYTE *a1, int a2)
{
  _BYTE *v2; // eax
  int v3; // ecx
  int v4; // edi

  v2 = a1;
  v3 = a2 - 1;
  if ( a2 != 0 )
  {
    do
    {
      if ( *v2 == 0 )
        break;
      ++v2;
      v4 = v3--;
    }
    while ( v4 != 0 );
  }
  if ( *v2 != 0 )
    return (_BYTE *)a2;
  else
    return (_BYTE *)(v2 - a1);
}


/* ============================================
   Address: 0x40AE50
   Function: __isctype
   ============================================ */

int __cdecl _isctype(int C, int Type)
{
  int v2; // ecx
  unsigned __int8 v3; // cl
  int result; // eax
  int v5; // eax
  WORD CharType[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)CharType = v2;
  v3 = C;
  if ( (unsigned int)(C + 1) <= 0x100 )
    return (unsigned __int16)Type & *((_WORD *)off_4280D0 + C);
  if ( *((char *)off_4280D0 + 2 * BYTE1(C) + 1) >= 0 )
  {
    LOWORD(C) = (unsigned __int8)C;
    v5 = 1;
  }
  else
  {
    LOBYTE(C) = BYTE1(C);
    *(_WORD *)((char *)&C + 1) = v3;
    v5 = 2;
  }
  result = __crtGetStringTypeA(
             dwInfoType: 1u,
             lpSrcStr: (LPCSTR)&C,
             cchSrc: v5,
             lpCharType: CharType,
             CodePage: 0,
             Locale: 0);
  if ( result != 0 )
    return (unsigned __int16)Type & CharType[0];
  return result;
}


/* ============================================
   Address: 0x40AEF0
   Function: ___InternalCxxFrameHandler
   ============================================ */

int __cdecl __InternalCxxFrameHandler(
        PEXCEPTION_RECORD ExceptionRecord,
        struct EHRegistrationNode *a2,
        struct _CONTEXT *a3,
        void *a4,
        struct _s_FuncInfo *a5,
        int a6,
        PVOID TargetFrame,
        int a8)
{
  int (__cdecl *v9)(PEXCEPTION_RECORD, struct EHRegistrationNode *, struct _CONTEXT *, void *, struct _s_FuncInfo *, int, PVOID, int); // ecx

  if ( *(_DWORD *)a5 != 429065504 )
    sub_40BB00();
  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
  {
    if ( a5->maxState != 0 && a6 == 0 )
    {
      __FrameUnwindToState(a1: a2, a2: a4, a3: a5, a4: -1);
      return 1;
    }
  }
  else if ( a5->nTryBlocks != 0 )
  {
    if ( ExceptionRecord->ExceptionCode == -529697949 && ExceptionRecord->ExceptionInformation[0] > 0x19930520 )
    {
      v9 = *(int (__cdecl **)(PEXCEPTION_RECORD, struct EHRegistrationNode *, struct _CONTEXT *, void *, struct _s_FuncInfo *, int, PVOID, int))(ExceptionRecord->ExceptionInformation[2] + 8);
      if ( v9 != nullptr )
        return v9(a1: ExceptionRecord, a2, a3, a4, a5, a6, a7: TargetFrame, a8);
    }
    FindHandler(ExceptionRecord, a2, a3, a4, a5, a6: a8, a7: a6, TargetFrame);
  }
  return 1;
}


/* ============================================
   Address: 0x40AFC0
   Function: ?FindHandler@@YAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PAXPBU_s_FuncInfo@@EH1@Z
   ============================================ */

void __cdecl FindHandler(
        PEXCEPTION_RECORD ExceptionRecord,
        struct EHRegistrationNode *a2,
        struct _CONTEXT *a3,
        void *a4,
        const struct _s_FuncInfo *a5,
        char a6,
        int a7,
        PVOID TargetFrame)
{
  __ehstate_t v8; // ebp
  PEXCEPTION_RECORD v9; // ebx
  struct _s_TryBlockMapEntry *v10; // eax
  int nCatches; // ecx
  const struct _s_HandlerType *pHandlerArray; // esi
  int *v13; // eax
  const struct _s_CatchableType **v14; // edx
  int v15; // eax
  const struct _s_CatchableType **v16; // ebp
  TypeDescriptor *pType; // edx
  const struct _s_CatchableType *v18; // edi
  TypeDescriptor *v19; // ecx
  int v20; // eax
  int v21; // eax
  bool v22; // cf
  struct _s_HandlerType *v23; // [esp+10h] [ebp-24h]
  unsigned int v24; // [esp+14h] [ebp-20h] BYREF
  struct _s_TryBlockMapEntry *v25; // [esp+18h] [ebp-1Ch]
  int v26; // [esp+1Ch] [ebp-18h]
  int v27; // [esp+20h] [ebp-14h]
  __ehstate_t state; // [esp+24h] [ebp-10h]
  unsigned int v29; // [esp+28h] [ebp-Ch] BYREF
  const struct _s_CatchableType **v30; // [esp+2Ch] [ebp-8h]
  int v31; // [esp+30h] [ebp-4h]

  state = a2->state;
  v8 = state;
  if ( state < -1 || state >= a5->maxState )
    sub_40BB00();
  v9 = ExceptionRecord;
  if ( ExceptionRecord->ExceptionCode == -529697949 )
  {
    if ( ExceptionRecord->NumberParameters == 3
      && ExceptionRecord->ExceptionInformation[0] == 429065504
      && ExceptionRecord->ExceptionInformation[2] == 0 )
    {
      if ( *(_DWORD *)(_getptd() + 108) == 0 )
        return;
      v9 = *(PEXCEPTION_RECORD *)(_getptd() + 108);
      ExceptionRecord = v9;
      a3 = *(struct _CONTEXT **)(_getptd() + 112);
      if ( _ValidateRead(lp: v9, ucb: 1u) == 0 )
        sub_40BB00();
      if ( v9->ExceptionCode != -529697949 )
        goto LABEL_51;
      if ( v9->NumberParameters == 3 && v9->ExceptionInformation[0] == 429065504 && v9->ExceptionInformation[2] == 0 )
        sub_40BB00();
    }
    if ( v9->ExceptionCode == -529697949 && v9->NumberParameters == 3 && v9->ExceptionInformation[0] == 429065504 )
    {
      v10 = (struct _s_TryBlockMapEntry *)_GetRangeOfTrysToCheck(a1: a5, a2: a7, a3: state, a4: &v24, a5: &v29);
      v25 = v10;
      if ( v24 >= v29 )
        goto LABEL_49;
      while ( 1 )
      {
        if ( v10->tryLow > v8 || v8 > v10->tryHigh )
          goto LABEL_48;
        nCatches = v10->nCatches;
        pHandlerArray = (const struct _s_HandlerType *)v10->pHandlerArray;
        v23 = (struct _s_HandlerType *)pHandlerArray;
        v27 = nCatches;
        if ( nCatches <= 0 )
          goto LABEL_47;
        v13 = *(int **)(v9->ExceptionInformation[2] + 12);
        v14 = (const struct _s_CatchableType **)(v13 + 1);
        v15 = *v13;
        v30 = v14;
        v31 = v15;
        do
        {
          v16 = v30;
          v26 = v31;
          if ( v31 > 0 )
          {
            pType = pHandlerArray->pType;
            while ( 1 )
            {
              v18 = *v16;
              if ( pType == nullptr || pType->name[0] == 0 )
                goto LABEL_39;
              v19 = v18->pType;
              if ( pType != v19 )
              {
                if ( strcmp(pType->name, v19->name) != 0 )
                {
                  v9 = ExceptionRecord;
                  pHandlerArray = v23;
                  v20 = 0;
                  goto LABEL_40;
                }
                v9 = ExceptionRecord;
                pHandlerArray = v23;
              }
              if ( (v18->properties & 2) != 0 && (pHandlerArray->adjectives & 8) == 0
                || ((v21 = *(_DWORD *)v9->ExceptionInformation[2]) & 1) != 0 && (pHandlerArray->adjectives & 1) == 0
                || (v21 & 2) != 0 && (pHandlerArray->adjectives & 2) == 0 )
              {
                v20 = 0;
              }
              else
              {
LABEL_39:
                v20 = 1;
              }
LABEL_40:
              if ( v20 != 0 )
              {
                CatchIt(ExceptionRecord: v9, a2, a3, a4, a5, a6: pHandlerArray, a7: *v16, a8: v25, a9: a7, TargetFrame);
                goto LABEL_46;
              }
              ++v16;
              if ( --v26 <= 0 )
              {
                nCatches = v27;
                break;
              }
            }
          }
          --nCatches;
          ++pHandlerArray;
          v27 = nCatches;
          v23 = (struct _s_HandlerType *)pHandlerArray;
        }
        while ( nCatches > 0 );
LABEL_46:
        v8 = state;
LABEL_47:
        v10 = v25;
LABEL_48:
        ++v10;
        v22 = ++v24 < v29;
        v25 = v10;
        if ( !v22 )
        {
LABEL_49:
          if ( a6 != 0 )
            _DestructExceptionObject(a1: (struct EHExceptionRecord *)v9, a2: 1);
          return;
        }
      }
    }
  }
LABEL_51:
  if ( a6 != 0 )
    terminate();
  FindHandlerForForeignException(ExceptionRecord: v9, a2, a3, a4, a5, a6: state, a7, TargetFrame);
}


/* ============================================
   Address: 0x40B280
   Function: ?FindHandlerForForeignException@@YAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PAXPBU_s_FuncInfo@@HH1@Z
   ============================================ */

void __cdecl FindHandlerForForeignException(
        PEXCEPTION_RECORD ExceptionRecord,
        struct EHRegistrationNode *a2,
        struct _CONTEXT *a3,
        void *a4,
        const struct _s_FuncInfo *a5,
        __ehstate_t a6,
        int a7,
        struct EHRegistrationNode *TargetFrame)
{
  const struct _s_TryBlockMapEntry *i; // esi
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // [esp+10h] [ebp-8h] BYREF
  unsigned int v12; // [esp+14h] [ebp-4h] BYREF

  if ( *(_DWORD *)(_getptd() + 104) == 0
    || _CallSETranslator(a1: (struct EHExceptionRecord *)ExceptionRecord, a2, a3, a4, a5, a6: a7, a7: TargetFrame) == 0 )
  {
    for ( i = (const struct _s_TryBlockMapEntry *)_GetRangeOfTrysToCheck(a1: a5, a2: a7, a3: a6, a4: &v11, a5: &v12);
          v11 < v12;
          ++v11 )
    {
      if ( a6 >= i->tryLow && a6 <= i->tryHigh )
      {
        v9 = (int)&i->pHandlerArray[i->nCatches];
        v10 = *(_DWORD *)(v9 - 12);
        if ( v10 == 0 || *(_BYTE *)(v10 + 8) == 0 )
          CatchIt(
            ExceptionRecord,
            a2,
            a3,
            a4,
            a5,
            a6: (const struct _s_HandlerType *)(v9 - 16),
            a7: nullptr,
            a8: i,
            a9: a7,
            TargetFrame);
      }
      ++i;
    }
  }
}


/* ============================================
   Address: 0x40B360
   Function: ___FrameUnwindToState
   ============================================ */

void __cdecl __FrameUnwindToState(int a1, int a2, int a3, int a4)
{
  int i; // esi
  int v5; // eax

  for ( i = *(_DWORD *)(a1 + 8); i != a4; i = *(_DWORD *)(*(_DWORD *)(a3 + 8) + 8 * i) )
  {
    if ( i <= -1 || i >= *(_DWORD *)(a3 + 4) )
      sub_40BB00();
    v5 = *(_DWORD *)(*(_DWORD *)(a3 + 8) + 8 * i + 4);
    if ( v5 != 0 )
      _CallSettingFrame(a1: v5, a2: a1, a3: 259);
  }
  *(_DWORD *)(a1 + 8) = i;
}


/* ============================================
   Address: 0x40B420
   Function: sub_40B420
   ============================================ */

// ?FrameUnwindFilter@@YAHPAU_EXCEPTION_POINTERS@@@Z
// doubtful name
int __cdecl sub_40B420(_DWORD **a1)
{
  if ( **a1 == -529697949 )
    terminate();
  return 0;
}


/* ============================================
   Address: 0x40B440
   Function: ?CatchIt@@YAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PAXPBU_s_FuncInfo@@PBU_s_HandlerType@@PBU_s_CatchableType@@PBU_s_TryBlockMapEntry@@H1@Z
   ============================================ */

void __usercall CatchIt(
        struct _EXCEPTION_REGISTRATION_RECORD **a1@<ebx>,
        struct EHExceptionRecord *ExceptionRecord,
        struct EHRegistrationNode *a3,
        struct _CONTEXT *a4,
        void *a5,
        const struct _s_FuncInfo *a6,
        const struct _s_HandlerType *a7,
        const struct _s_CatchableType *a8,
        const struct _s_TryBlockMapEntry *a9,
        int a10,
        PVOID TargetFrame)
{
  void (__stdcall *v11)(void *, struct EHRegistrationNode *); // eax

  if ( a8 != nullptr )
    BuildCatchObject(a1: ExceptionRecord, a2: a3, a3: a7, a4: a8);
  if ( TargetFrame != nullptr )
    _UnwindNestedFrames(a1, TargetFrame, (PEXCEPTION_RECORD)ExceptionRecord);
  else
    _UnwindNestedFrames(a1, TargetFrame: a3, (PEXCEPTION_RECORD)ExceptionRecord);
  __FrameUnwindToState(a1: (int)a3, a2: (int)a5, a3: (int)a6, a4: a9->tryLow);
  a3->state = a9->tryHigh + 1;
  v11 = (void (__stdcall *)(void *, struct EHRegistrationNode *))CallCatchBlock(
                                                                   a1: ExceptionRecord,
                                                                   a2: a3,
                                                                   a3: a4,
                                                                   a4: a6,
                                                                   a5: a7->addressOfHandler,
                                                                   a6: a10,
                                                                   a7: 0x100u);
  if ( v11 != nullptr )
    _JumpToContinuation(a1: v11, a2: a3);
}


/* ============================================
   Address: 0x40B4D0
   Function: ?CallCatchBlock@@YAPAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PBU_s_FuncInfo@@PAXHK@Z
   ============================================ */

// positive sp value has been detected, the output may be wrong!
void *__cdecl CallCatchBlock(
        struct EHExceptionRecord *a1,
        struct EHRegistrationNode *a2,
        struct _CONTEXT *a3,
        const struct _s_FuncInfo *a4,
        void *a5,
        int a6,
        unsigned int a7)
{
  void *v7; // ebx
  char v9; // al
  __ehstate_t state; // [esp+10h] [ebp-28h]
  int v11; // [esp+18h] [ebp-20h]
  int v12; // [esp+1Ch] [ebp-1Ch]

  state = a2[-1].state;
  v12 = *(_DWORD *)(_getptd() + 108);
  v11 = *(_DWORD *)(_getptd() + 112);
  *(_DWORD *)(_getptd() + 108) = a1;
  *(_DWORD *)(_getptd() + 112) = a3;
  v7 = _CallCatchBlock2(a1: a2, a2: a4, a3: a5, a4: a6, a5: a7);
  a2[-1].state = state;
  *(_DWORD *)(_getptd() + 108) = v12;
  *(_DWORD *)(_getptd() + 112) = v11;
  if ( a1->ExceptionCode == -529697949
    && a1->NumberParameters == 3
    && a1->params.magicNumber == 429065504
    && v7 != nullptr )
  {
    v9 = _abnormal_termination();
    _DestructExceptionObject(a1, a2: v9);
  }
  return v7;
}


/* ============================================
   Address: 0x40B630
   Function: ?ExFilterRethrow@@YAHPAU_EXCEPTION_POINTERS@@@Z
   ============================================ */

BOOL __cdecl ExFilterRethrow(struct _EXCEPTION_POINTERS *a1)
{
  PEXCEPTION_RECORD ExceptionRecord; // eax

  ExceptionRecord = a1->ExceptionRecord;
  return a1->ExceptionRecord->ExceptionCode == -529697949
      && ExceptionRecord->NumberParameters == 3
      && ExceptionRecord->ExceptionInformation[0] == 429065504
      && ExceptionRecord->ExceptionInformation[2] == 0;
}


/* ============================================
   Address: 0x40B660
   Function: ?BuildCatchObject@@YAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PBU_s_HandlerType@@PBU_s_CatchableType@@@Z
   ============================================ */

void __cdecl BuildCatchObject(
        struct EHExceptionRecord *a1,
        struct EHRegistrationNode *a2,
        const struct _s_HandlerType *a3,
        const struct _s_CatchableType *a4)
{
  TypeDescriptor *pType; // eax
  ptrdiff_t dispCatchObj; // eax
  void **v6; // esi
  void *pExceptionObject; // eax
  const void *v8; // eax
  void *v9; // [esp-8h] [ebp-30h]
  size_t sizeOrOffset; // [esp-4h] [ebp-2Ch]

  pType = a3->pType;
  if ( pType != nullptr && pType->name[0] != 0 )
  {
    dispCatchObj = a3->dispCatchObj;
    if ( dispCatchObj != 0 )
    {
      v6 = (void **)((char *)&a2[1].pNext + dispCatchObj);
      if ( (a3->adjectives & 8) != 0 )
      {
        if ( _ValidateRead(lp: a1->params.pExceptionObject, ucb: 1u) != 0 && _ValidateWrite(lp: v6, ucb: 1u) != 0 )
        {
          pExceptionObject = a1->params.pExceptionObject;
          *v6 = pExceptionObject;
          *v6 = AdjustPointer(a1: pExceptionObject, a2: &a4->thisDisplacement);
          return;
        }
LABEL_24:
        sub_40BB00();
      }
      if ( (a4->properties & 1) != 0 )
      {
        if ( _ValidateRead(lp: a1->params.pExceptionObject, ucb: 1u) == 0 || _ValidateWrite(lp: v6, ucb: 1u) == 0 )
          goto LABEL_24;
        memcpy_0(a1: v6, Src: a1->params.pExceptionObject, Size: a4->sizeOrOffset);
        if ( a4->sizeOrOffset == 4 && *v6 != nullptr )
          *v6 = AdjustPointer(a1: *v6, a2: &a4->thisDisplacement);
      }
      else
      {
        v9 = a1->params.pExceptionObject;
        if ( a4->copyFunction != nullptr )
        {
          if ( _ValidateRead(lp: v9, ucb: 1u) == 0
            || _ValidateWrite(lp: v6, ucb: 1u) == 0
            || _ValidateExecute(lpfn: (FARPROC)a4->copyFunction) == 0 )
          {
            goto LABEL_24;
          }
          if ( (a4->properties & 4) != 0 )
          {
            AdjustPointer(a1: a1->params.pExceptionObject, a2: &a4->thisDisplacement);
            sub_406590(a1: (int)v6, a2: (int)a4->copyFunction);
          }
          else
          {
            AdjustPointer(a1: a1->params.pExceptionObject, a2: &a4->thisDisplacement);
            sub_406590(a1: (int)v6, a2: (int)a4->copyFunction);
          }
        }
        else
        {
          if ( _ValidateRead(lp: v9, ucb: 1u) == 0 || _ValidateWrite(lp: v6, ucb: 1u) == 0 )
            goto LABEL_24;
          sizeOrOffset = a4->sizeOrOffset;
          v8 = AdjustPointer(a1: a1->params.pExceptionObject, a2: &a4->thisDisplacement);
          memcpy_0(a1: v6, Src: v8, Size: sizeOrOffset);
        }
      }
    }
  }
}


/* ============================================
   Address: 0x40B870
   Function: ?_DestructExceptionObject@@YAXPAUEHExceptionRecord@@E@Z
   ============================================ */

void __cdecl _DestructExceptionObject(struct EHExceptionRecord *a1)
{
  PMFN pmfnUnwind; // eax

  if ( a1 != nullptr )
  {
    pmfnUnwind = a1->params.pThrowInfo->pmfnUnwind;
    if ( pmfnUnwind != nullptr )
      sub_406590(a1: (int)a1->params.pExceptionObject, a2: (int)pmfnUnwind);
  }
}


/* ============================================
   Address: 0x40B8F0
   Function: ?AdjustPointer@@YAPAXPAXABUPMD@@@Z
   ============================================ */

char *__cdecl AdjustPointer(char *a1, const struct PMD *a2)
{
  char *result; // eax
  int pdisp; // ecx

  result = &a1[a2->mdisp];
  pdisp = a2->pdisp;
  if ( pdisp >= 0 )
    result += pdisp + *(_DWORD *)(*(_DWORD *)&a1[pdisp] + a2->vdisp);
  return result;
}


/* ============================================
   Address: 0x40B920
   Function: __CallSettingFrame@12
   ============================================ */

void __stdcall _CallSettingFrame(int a1, int a2, int a3)
{
  void (*v3)(void); // eax
  int v4; // ecx

  _NLG_Notify1(a1: a3);
  v3();
  v4 = a3;
  if ( a3 == 256 )
    v4 = 2;
  _NLG_Notify1(a1: v4);
}


/* ============================================
   Address: 0x40B970
   Function: __mtinit
   ============================================ */

int _mtinit()
{
  _DWORD *v0; // esi

  _mtinitlocks();
  dwTlsIndex = TlsAlloc();
  if ( dwTlsIndex == -1 )
    return 0;
  v0 = calloc(Count: 1u, Size: 0x74u);
  if ( v0 == nullptr || !TlsSetValue(dwTlsIndex: dwTlsIndex, lpTlsValue: v0) )
    return 0;
  _initptd(a1: v0);
  *v0 = GetCurrentThreadId();
  v0[1] = -1;
  return 1;
}


/* ============================================
   Address: 0x40B9D0
   Function: __initptd
   ============================================ */

int __cdecl _initptd(int a1)
{
  *(_DWORD *)(a1 + 80) = &unk_428300;
  *(_DWORD *)(a1 + 20) = 1;
  return a1;
}


/* ============================================
   Address: 0x40B9F0
   Function: __getptd
   ============================================ */

DWORD *__cdecl _getptd()
{
  DWORD LastError; // edi
  LPVOID Value; // esi
  DWORD *v2; // eax
  DWORD *v3; // esi

  LastError = GetLastError();
  Value = TlsGetValue(dwTlsIndex: dwTlsIndex);
  if ( Value != nullptr )
  {
    SetLastError(dwErrCode: LastError);
    return (DWORD *)Value;
  }
  else
  {
    v2 = (DWORD *)calloc(Count: 1u, Size: 0x74u);
    v3 = v2;
    if ( v2 == nullptr || !TlsSetValue(dwTlsIndex: dwTlsIndex, lpTlsValue: v2) )
      _amsg_exit(a1: 16);
    _initptd(a1: (int)v3);
    *v3 = GetCurrentThreadId();
    v3[1] = -1;
    SetLastError(dwErrCode: LastError);
    return v3;
  }
}


/* ============================================
   Address: 0x40BA70
   Function: ?terminate@@YAXXZ
   ============================================ */

void __cdecl __noreturn terminate()
{
  DWORD *v0; // eax

  if ( _getptd()[24] != 0 )
  {
    v0 = _getptd();
    ((void (*)(void))v0[24])();
  }
  abort();
}


/* ============================================
   Address: 0x40BB00
   Function: sub_40BB00
   ============================================ */

void __noreturn sub_40BB00()
{
  if ( off_4282F4 != nullptr )
    off_4282F4();
  terminate();
}


/* ============================================
   Address: 0x40BB90
   Function: _realloc
   ============================================ */

void *__cdecl realloc(void *Block, size_t Size)
{
  void *v2; // esi
  void *result; // eax
  size_t v4; // edi
  LPVOID v5; // ebx
  unsigned __int8 *v6; // ebp
  unsigned int v7; // eax
  unsigned int v8; // eax
  int v9; // [esp+10h] [ebp-8h] BYREF
  int v10; // [esp+14h] [ebp-4h] BYREF

  v2 = Block;
  if ( Block == nullptr )
    return malloc(Size);
  v4 = Size;
  if ( Size == 0 )
  {
    free(Block);
    return nullptr;
  }
  if ( Size <= 0xFFFFFFE0 )
  {
    Size = (Size + 15) & 0xFFFFFFF0;
    v4 = Size;
  }
  while ( 1 )
  {
    v5 = nullptr;
    if ( v4 <= 0xFFFFFFE0 )
    {
      _lock(a1: 9);
      v6 = (unsigned __int8 *)__sbh_find_block(a1: v2, a2: &v10, a3: &v9);
      if ( v6 == nullptr )
      {
        _unlock(a1: 9);
        v5 = HeapReAlloc(hHeap: hHeap, dwFlags: 0, lpMem: v2, dwBytes: v4);
        goto LABEL_23;
      }
      if ( v4 < dword_42A444 )
      {
        if ( __sbh_resize_block(a1: v10, a2: v9, a3: v6, a4: v4 >> 4) != 0 )
        {
          v5 = v2;
        }
        else
        {
          v5 = (LPVOID)__sbh_alloc_block(a1: v4 >> 4);
          if ( v5 == nullptr )
            goto LABEL_17;
          v7 = 16 * *v6;
          if ( v7 >= v4 )
            v7 = v4;
          qmemcpy(v5, v2, v7);
          __sbh_free_block(a1: v10, a2: v9, a3: v6);
          v4 = Size;
          v2 = Block;
        }
      }
      if ( v5 != nullptr )
      {
LABEL_21:
        _unlock(a1: 9);
        goto LABEL_23;
      }
LABEL_17:
      v5 = HeapAlloc(hHeap: hHeap, dwFlags: 0, dwBytes: v4);
      if ( v5 != nullptr )
      {
        v8 = 16 * *v6;
        if ( v8 >= v4 )
          v8 = v4;
        qmemcpy(v5, v2, v8);
        __sbh_free_block(a1: v10, a2: v9, a3: v6);
        v4 = Size;
        v2 = Block;
      }
      goto LABEL_21;
    }
LABEL_23:
    if ( v5 != nullptr || dword_42FE7C == 0 )
      return v5;
    result = (void *)_callnewh(Size: v4);
    if ( result == nullptr )
      return result;
  }
}


/* ============================================
   Address: 0x40BD40
   Function: _toupper
   ============================================ */

int __cdecl toupper(int C)
{
  int result; // eax
  int v2; // esi
  int v3; // ebx

  if ( Locale != 0 )
  {
    InterlockedIncrement(lpAddend: &Addend);
    if ( dword_431008 != 0 )
    {
      InterlockedDecrement(lpAddend: &Addend);
      _lock(a1: 19);
      v2 = 1;
    }
    else
    {
      v2 = 0;
    }
    v3 = toupper_0(C);
    if ( v2 != 0 )
      _unlock(a1: 19);
    else
      InterlockedDecrement(lpAddend: &Addend);
    return v3;
  }
  else
  {
    result = C;
    if ( C >= 97 && C <= 122 )
      return C - 32;
  }
  return result;
}


/* ============================================
   Address: 0x40BDD0
   Function: _toupper_0
   ============================================ */

int __cdecl toupper_0(int C)
{
  int result; // eax
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  unsigned __int16 DestStr[4]; // [esp+4h] [ebp-8h] BYREF

  if ( Locale != 0 )
  {
    v2 = C;
    if ( C >= 256
      || ((int)SrcSizeInBytes <= 1 ? (v3 = *((_BYTE *)off_4280D0 + 2 * C) & 2) : (v3 = _isctype(C, Type: 2)), v3 != 0) )
    {
      if ( *((char *)off_4280D0 + 2 * BYTE1(v2) + 1) >= 0 )
      {
        LOWORD(C) = (unsigned __int8)v2;
        v4 = 1;
      }
      else
      {
        LOBYTE(C) = BYTE1(v2);
        *(_WORD *)((char *)&C + 1) = (unsigned __int8)v2;
        v4 = 2;
      }
      v5 = __crtLCMapStringA(
             Locale: Locale,
             dwMapFlags: 0x200u,
             lpSrcStr: (LPCSTR)&C,
             lpWideCharStr: (LPCWCH)v4,
             lpDestStr: (LPSTR)DestStr,
             cchDest: 3,
             CodePage: 0);
      if ( v5 != 0 )
      {
        if ( v5 == 1 )
          return LOBYTE(DestStr[0]);
        else
          return DestStr[0];
      }
      else
      {
        return v2;
      }
    }
    else
    {
      return v2;
    }
  }
  else
  {
    result = C;
    if ( C >= 97 && C <= 122 )
      return C - 32;
  }
  return result;
}


/* ============================================
   Address: 0x40BED0
   Function: __output
   ============================================ */

int __cdecl _output(FILE *File, char *a2, int a3)
{
  int v3; // ecx
  int v4; // ebp
  char v5; // bl
  char *v6; // edi
  bool v7; // zf
  int v8; // esi
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  int int_arg; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  wchar_t short_arg; // ax
  __int16 *v22; // eax
  char *v23; // ecx
  unsigned int v24; // eax
  int v25; // esi
  char *v26; // ecx
  int v27; // edx
  int v28; // esi
  char *v29; // eax
  int v30; // edx
  int v31; // edx
  int v32; // esi
  char *v33; // eax
  int v34; // edx
  _WORD *v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  unsigned int v38; // ebx
  __int64 v39; // rax
  unsigned __int64 v40; // rdi
  int v41; // ecx
  char *v42; // eax
  int v43; // ebx
  unsigned __int64 v44; // kr30_8
  char *v45; // eax
  char v46; // bl
  int v47; // edi
  wchar_t *v48; // esi
  int v49; // ebx
  int v50; // eax
  int v51; // ecx
  wchar_t v53; // [esp-4h] [ebp-260h]
  unsigned int v54; // [esp+10h] [ebp-24Ch]
  char *p_MbCh; // [esp+14h] [ebp-248h]
  char *i; // [esp+14h] [ebp-248h]
  int v57; // [esp+18h] [ebp-244h]
  int v58; // [esp+1Ch] [ebp-240h] BYREF
  _WORD v59[3]; // [esp+22h] [ebp-23Ah] BYREF
  int v60; // [esp+28h] [ebp-234h]
  int v61; // [esp+2Ch] [ebp-230h]
  int v62; // [esp+30h] [ebp-22Ch]
  int v63; // [esp+34h] [ebp-228h]
  int v64; // [esp+38h] [ebp-224h]
  int v65; // [esp+3Ch] [ebp-220h]
  int v66; // [esp+40h] [ebp-21Ch]
  int v67; // [esp+44h] [ebp-218h]
  char v68[4]; // [esp+48h] [ebp-214h] BYREF
  int v69; // [esp+4Ch] [ebp-210h]
  int v70; // [esp+50h] [ebp-20Ch]
  int v71; // [esp+58h] [ebp-204h]
  char MbCh; // [esp+5Ch] [ebp-200h] BYREF
  char v73; // [esp+25Bh] [ebp-1h] BYREF
  char *v74; // [esp+264h] [ebp+8h]

  v3 = 0;
  v4 = 0;
  v58 = 0;
  v5 = *a2;
  v6 = a2 + 1;
  v7 = *a2 == 0;
  LOBYTE(v66) = *a2;
  v74 = a2 + 1;
  if ( !v7 )
  {
    v8 = v60;
    while ( v58 >= 0 )
    {
      v9 = v5 < 32 || v5 > 120 ? 0 : *((_BYTE *)&stru_424708[1].FilterFunc + v5) & 0xF;
      v65 = byte_424738[8 * v9 + v3] >> 4;
      switch ( v65 )
      {
        case 0:
$NORMAL_STATE$8072:
          v61 = 0;
          if ( *((char *)off_4280D0 + 2 * (unsigned __int8)v66 + 1) < 0 )
          {
            write_char(a1: v5, File, a3: (int)&v58);
            v5 = *v6;
            v74 = v6 + 1;
          }
          write_char(a1: v5, File, a3: (int)&v58);
          break;
        case 1:
          v67 = 0;
          v63 = 0;
          v60 = 0;
          *(_DWORD *)&v59[1] = 0;
          v54 = 0;
          v57 = -1;
          v61 = 0;
          break;
        case 2:
          switch ( v5 )
          {
            case ' ':
              v12 = v54;
              LOBYTE(v12) = v54 | 2;
              v54 = v12;
              break;
            case '#':
              v13 = v54;
              LOBYTE(v13) = v54 | 0x80;
              v54 = v13;
              break;
            case '+':
              v11 = v54;
              LOBYTE(v11) = v54 | 1;
              v54 = v11;
              break;
            case '-':
              v10 = v54;
              LOBYTE(v10) = v54 | 4;
              v54 = v10;
              break;
            case '0':
              v14 = v54;
              LOBYTE(v14) = v54 | 8;
              v54 = v14;
              break;
            default:
              goto LABEL_134;
          }
          break;
        case 3:
          if ( v5 == 42 )
          {
            int_arg = get_int_arg(a1: &a3);
            v60 = int_arg;
            if ( int_arg < 0 )
            {
              v54 |= 4u;
              v60 = -int_arg;
            }
          }
          else
          {
            v60 = v5 + 10 * v8 - 48;
          }
          break;
        case 4:
          v57 = 0;
          break;
        case 5:
          if ( v5 == 42 )
          {
            v57 = get_int_arg(a1: &a3);
            if ( v57 < 0 )
              v57 = -1;
          }
          else
          {
            v57 = v5 + 10 * v57 - 48;
          }
          break;
        case 6:
          switch ( v5 )
          {
            case 'I':
              if ( *v6 != 54 || v6[1] != 52 )
              {
                v65 = 0;
                goto $NORMAL_STATE$8072;
              }
              v17 = v54;
              BYTE1(v17) = BYTE1(v54) | 0x80;
              v74 = v6 + 2;
              v54 = v17;
              break;
            case 'h':
              v18 = v54;
              LOBYTE(v18) = v54 | 0x20;
              v54 = v18;
              break;
            case 'l':
              v16 = v54;
              LOBYTE(v16) = v54 | 0x10;
              v54 = v16;
              break;
            case 'w':
              v19 = v54;
              BYTE1(v19) = BYTE1(v54) | 8;
              v54 = v19;
              break;
            default:
              goto LABEL_134;
          }
          break;
        case 7:
          switch ( v5 )
          {
            case 'C':
              v20 = v54;
              if ( (v54 & 0x830) == 0 )
              {
                BYTE1(v20) = BYTE1(v54) | 8;
                v54 = v20;
              }
              goto LABEL_40;
            case 'E':
            case 'G':
              v67 = 1;
              goto LABEL_72;
            case 'S':
              v24 = v54;
              if ( (v54 & 0x830) == 0 )
              {
                BYTE1(v24) = BYTE1(v54) | 8;
                v54 = v24;
              }
              goto LABEL_53;
            case 'X':
              goto LABEL_76;
            case 'Z':
              v22 = (__int16 *)get_int_arg(a1: &a3);
              if ( v22 != nullptr && (v23 = *((char **)v22 + 1)) != nullptr )
              {
                v4 = *v22;
                if ( (v54 & 0x800) != 0 )
                {
                  p_MbCh = *((char **)v22 + 1);
                  v61 = 1;
                  v4 = (unsigned int)v4 >> 1;
                }
                else
                {
                  v61 = 0;
                  p_MbCh = v23;
                }
              }
              else
              {
                p_MbCh = off_4282F8;
                v4 = strlen(off_4282F8);
              }
              goto LABEL_112;
            case 'c':
LABEL_40:
              if ( (v54 & 0x810) != 0 )
              {
                short_arg = get_short_arg(a1: &a3);
                v4 = wctomb(&MbCh, WCh: short_arg);
                if ( v4 < 0 )
                {
                  v63 = 1;
                  p_MbCh = &MbCh;
                  goto LABEL_112;
                }
              }
              else
              {
                MbCh = get_int_arg(a1: &a3);
                v4 = 1;
              }
              p_MbCh = &MbCh;
LABEL_112:
              if ( v63 != 0 )
                goto LABEL_134;
              v46 = v54;
              if ( (v54 & 0x40) != 0 )
              {
                if ( (v54 & 0x100) != 0 )
                {
                  LOBYTE(v59[0]) = 45;
                }
                else if ( (v54 & 1) != 0 )
                {
                  LOBYTE(v59[0]) = 43;
                }
                else
                {
                  if ( (v54 & 2) == 0 )
                    goto LABEL_121;
                  LOBYTE(v59[0]) = 32;
                }
                *(_DWORD *)&v59[1] = 1;
              }
LABEL_121:
              v47 = v60 - v4 - *(_DWORD *)&v59[1];
              if ( (v54 & 0xC) == 0 )
                write_multi_char(a1: 32, a2: v60 - v4 - *(_DWORD *)&v59[1], File, a4: (int)&v58);
              write_string(a1: (int)v59, a2: *(int *)&v59[1], File, a4: (int)&v58);
              if ( (v54 & 8) != 0 && (v54 & 4) == 0 )
                write_multi_char(a1: 48, a2: v47, File, a4: (int)&v58);
              if ( v61 != 0 && v4 > 0 )
              {
                v48 = (wchar_t *)p_MbCh;
                v49 = v4 - 1;
                do
                {
                  v53 = *v48++;
                  v50 = wctomb(MbCh: v68, WCh: v53);
                  if ( v50 <= 0 )
                    break;
                  write_string(a1: (int)v68, a2: v50, File, a4: (int)&v58);
                  v51 = v49--;
                }
                while ( v51 != 0 );
                v46 = v54;
              }
              else
              {
                write_string(a1: (int)p_MbCh, a2: v4, File, a4: (int)&v58);
              }
              if ( (v46 & 4) != 0 )
                write_multi_char(a1: 32, a2: v47, File, a4: (int)&v58);
              break;
            case 'd':
            case 'i':
              v36 = v54;
              v62 = 10;
              LOBYTE(v36) = v54 | 0x40;
              v54 = v36;
              goto LABEL_82;
            case 'e':
            case 'f':
            case 'g':
LABEL_72:
              a3 += 8;
              v69 = *(_DWORD *)(a3 - 8);
              v70 = *(_DWORD *)(a3 - 4);
              off_427F30[0]();
            case 'n':
              v35 = (_WORD *)get_int_arg(a1: &a3);
              v63 = 1;
              if ( (v54 & 0x20) != 0 )
                *v35 = v58;
              else
                *(_DWORD *)v35 = v58;
              goto LABEL_112;
            case 'o':
              v62 = 8;
              if ( (v54 & 0x80u) != 0 )
              {
                v37 = v54;
                BYTE1(v37) = BYTE1(v54) | 2;
                v54 = v37;
              }
              goto LABEL_82;
            case 'p':
              v57 = 8;
LABEL_76:
              v64 = 7;
              goto LABEL_78;
            case 's':
LABEL_53:
              v25 = 0x7FFFFFFF;
              if ( v57 != -1 )
                v25 = v57;
              v26 = (char *)get_int_arg(a1: &a3);
              p_MbCh = v26;
              if ( (v54 & 0x810) != 0 )
              {
                if ( v26 == nullptr )
                {
                  v26 = (char *)off_4282FC;
                  p_MbCh = (char *)off_4282FC;
                }
                v27 = v25;
                v28 = v25 - 1;
                v61 = 1;
                v29 = v26;
                if ( v27 != 0 )
                {
                  do
                  {
                    if ( *(_WORD *)v29 == 0 )
                      break;
                    v29 += 2;
                    v30 = v28--;
                  }
                  while ( v30 != 0 );
                }
                v4 = (v29 - v26) >> 1;
              }
              else
              {
                if ( v26 == nullptr )
                {
                  v26 = off_4282F8;
                  p_MbCh = off_4282F8;
                }
                v31 = v25;
                v32 = v25 - 1;
                v33 = v26;
                if ( v31 != 0 )
                {
                  do
                  {
                    if ( *v33 == 0 )
                      break;
                    ++v33;
                    v34 = v32--;
                  }
                  while ( v34 != 0 );
                }
                v4 = v33 - v26;
              }
              goto LABEL_112;
            case 'u':
              v62 = 10;
              goto LABEL_82;
            case 'x':
              v64 = 39;
LABEL_78:
              v62 = 16;
              if ( (v54 & 0x80u) != 0 )
              {
                LOBYTE(v59[0]) = 48;
                *(_DWORD *)&v59[1] = 2;
                HIBYTE(v59[0]) = v64 + 81;
              }
LABEL_82:
              v38 = v54;
              if ( (v54 & 0x8000) == 0 )
              {
                if ( (v54 & 0x20) != 0 )
                {
                  if ( (v54 & 0x40) != 0 )
                    v39 = (__int16)get_int_arg(a1: &a3);
                  else
                    v39 = (unsigned __int16)get_int_arg(a1: &a3);
                }
                else if ( (v54 & 0x40) != 0 )
                {
                  v39 = (int)get_int_arg(a1: &a3);
                }
                else
                {
                  v39 = (unsigned int)get_int_arg(a1: &a3);
                }
              }
              else
              {
                LODWORD(v39) = get_int64_arg(a1: &a3);
              }
              if ( (v54 & 0x40) != 0 && v39 < 0 )
              {
                HIDWORD(v40) = -(int)v39;
                BYTE1(v38) = BYTE1(v54) | 1;
                LODWORD(v40) = (unsigned __int64)-v39 >> 32;
                v54 = v38;
              }
              else
              {
                v40 = __PAIR64__(v39, HIDWORD(v39));
              }
              if ( (v38 & 0x8000) == 0 )
                LODWORD(v40) = 0;
              v41 = v57;
              if ( v57 >= 0 )
                v54 = v38 & 0xFFFFFFF7;
              else
                v41 = 1;
              if ( v40 == 0 )
                *(_DWORD *)&v59[1] = 0;
              v42 = &v73;
              for ( i = &v73; ; --i )
              {
                v57 = v41 - 1;
                if ( v41 <= 0 && v40 == 0 )
                  break;
                v71 = v62 >> 31;
                v43 = __PAIR64__(v40, HIDWORD(v40)) % v62 + 48;
                v44 = __PAIR64__(v40, HIDWORD(v40)) / v62;
                v40 = __PAIR64__(v44, HIDWORD(v44));
                if ( v43 > 57 )
                  LOBYTE(v43) = v64 + v43;
                --v41;
                *i = v43;
                v42 = i - 1;
              }
              v4 = &v73 - v42;
              v45 = v42 + 1;
              p_MbCh = v45;
              if ( (v54 & 0x200) != 0 && (*v45 != 48 || v4 == 0) )
              {
                ++v4;
                p_MbCh = v45 - 1;
                *(v45 - 1) = 48;
              }
              goto LABEL_112;
            default:
              goto LABEL_112;
          }
          break;
        default:
          break;
      }
LABEL_134:
      v5 = *v74;
      v6 = v74 + 1;
      v7 = *v74 == 0;
      LOBYTE(v66) = *v74++;
      if ( v7 )
        break;
      v8 = v60;
      v3 = v65;
    }
  }
  return v58;
}


/* ============================================
   Address: 0x40C860
   Function: _write_char
   ============================================ */

int __cdecl write_char(int a1, FILE *File, _DWORD *a3)
{
  int v3; // eax
  int result; // eax

  v3 = File->_cnt - 1;
  File->_cnt = v3;
  if ( v3 < 0 )
  {
    result = _flsbuf(Ch: a1, File);
  }
  else
  {
    *File->_ptr = a1;
    result = (unsigned __int8)a1;
    ++File->_ptr;
  }
  if ( result == -1 )
  {
    *a3 = -1;
  }
  else
  {
    ++*a3;
    return (int)a3;
  }
  return result;
}


/* ============================================
   Address: 0x40C8B0
   Function: _write_multi_char
   ============================================ */

int __cdecl write_multi_char(int a1, int a2, FILE *File, int *a4)
{
  int result; // eax
  int v5; // ebp
  int v6; // ecx

  result = a2;
  v5 = a2 - 1;
  if ( a2 > 0 )
  {
    do
    {
      write_char(a1, File, a3: a4);
      result = *a4;
      if ( *a4 == -1 )
        break;
      v6 = v5--;
    }
    while ( v6 > 0 );
  }
  return result;
}


/* ============================================
   Address: 0x40C8F0
   Function: _write_string
   ============================================ */

int __cdecl write_string(char *a1, int a2, FILE *File, int *a4)
{
  int result; // eax
  int v5; // ebp
  int v7; // ecx
  int v8; // [esp-Ch] [ebp-1Ch]

  result = a2;
  v5 = a2 - 1;
  if ( a2 > 0 )
  {
    do
    {
      v8 = *a1++;
      write_char(a1: v8, File, a3: a4);
      result = *a4;
      if ( *a4 == -1 )
        break;
      v7 = v5--;
    }
    while ( v7 > 0 );
  }
  return result;
}


/* ============================================
   Address: 0x40C930
   Function: _get_int_arg
   ============================================ */

int __cdecl get_int_arg(int *a1)
{
  int v1; // ecx

  v1 = *a1 + 4;
  *a1 = v1;
  return *(_DWORD *)(v1 - 4);
}


/* ============================================
   Address: 0x40C950
   Function: _get_int64_arg
   ============================================ */

__int64 __cdecl get_int64_arg(int *a1)
{
  int v1; // ecx

  v1 = *a1 + 8;
  *a1 = v1;
  return *(_QWORD *)(v1 - 8);
}


/* ============================================
   Address: 0x40C970
   Function: _get_short_arg
   ============================================ */

__int16 __cdecl get_short_arg(int *a1)
{
  int v1; // ecx

  v1 = *a1 + 4;
  *a1 = v1;
  return *(_WORD *)(v1 - 4);
}


/* ============================================
   Address: 0x40C990
   Function: __XcptFilter
   ============================================ */

LONG __cdecl _XcptFilter(int a1, struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  DWORD *v2; // esi
  int *v3; // eax
  void (__cdecl *v4)(int, DWORD); // edx
  int v6; // ecx
  int v7; // edx
  int v8; // eax
  DWORD v9; // edi
  int v10; // [esp-4h] [ebp-18h]
  DWORD v11; // [esp+10h] [ebp-4h]
  int v12; // [esp+18h] [ebp+4h]

  v2 = _getptd();
  v3 = (int *)xcptlookup(a1, a2: v2[20]);
  if ( v3 == nullptr )
    return UnhandledExceptionFilter(ExceptionInfo);
  v4 = (void (__cdecl *)(int, DWORD))v3[2];
  v12 = (int)v4;
  if ( v4 == nullptr )
    return UnhandledExceptionFilter(ExceptionInfo);
  if ( v4 == (void (__cdecl *)(int, DWORD))5 )
  {
    v3[2] = 0;
    return 1;
  }
  else if ( v4 == (void (__cdecl *)(int, DWORD))1 )
  {
    return -1;
  }
  else
  {
    v11 = v2[21];
    v2[21] = (DWORD)ExceptionInfo;
    if ( v3[1] == 8 )
    {
      v6 = dword_428378;
      if ( dword_428378 < dword_428378 + dword_42837C )
      {
        v7 = 12 * dword_428378;
        do
        {
          ++v6;
          *(_DWORD *)(v2[20] + v7 + 8) = 0;
          v7 += 12;
        }
        while ( v6 < dword_428378 + dword_42837C );
        v4 = (void (__cdecl *)(int, DWORD))v12;
      }
      v8 = *v3;
      v9 = v2[22];
      if ( v8 == -1073741682 )
      {
        v2[22] = 131;
        v4(a1: 8, a2: v2[22]);
        v2[22] = v9;
        v2[21] = v11;
        return -1;
      }
      else if ( v8 == -1073741680 )
      {
        v2[22] = 129;
        v4(a1: 8, a2: v2[22]);
        v2[22] = v9;
        v2[21] = v11;
        return -1;
      }
      else if ( v8 == -1073741679 )
      {
        v2[22] = 132;
        v4(a1: 8, a2: v2[22]);
        v2[22] = v9;
        v2[21] = v11;
        return -1;
      }
      else if ( v8 == -1073741677 )
      {
        v2[22] = 133;
        v4(a1: 8, a2: v2[22]);
        v2[22] = v9;
        v2[21] = v11;
        return -1;
      }
      else if ( v8 == -1073741683 )
      {
        v2[22] = 130;
        v4(a1: 8, a2: v2[22]);
        v2[22] = v9;
        v2[21] = v11;
        return -1;
      }
      else if ( v8 == -1073741681 )
      {
        v2[22] = 134;
        v4(a1: 8, a2: v2[22]);
        v2[22] = v9;
        v2[21] = v11;
        return -1;
      }
      else
      {
        if ( v8 == -1073741678 )
          v2[22] = 138;
        v4(a1: 8, a2: v2[22]);
        v2[22] = v9;
        v2[21] = v11;
        return -1;
      }
    }
    else
    {
      v10 = v3[1];
      v3[2] = 0;
      ((void (__cdecl *)(int))v4)(a1: v10);
      v2[21] = v11;
      return -1;
    }
  }
}


/* ============================================
   Address: 0x40CBA0
   Function: _xcptlookup
   ============================================ */

_DWORD *__cdecl xcptlookup(int a1, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a2;
  if ( *a2 != a1 )
  {
    do
      result += 3;
    while ( result < &a2[3 * dword_428384] && *result != a1 );
  }
  if ( result >= &a2[3 * dword_428384] || *result != a1 )
    return nullptr;
  return result;
}


/* ============================================
   Address: 0x40CBE0
   Function: __ismbblead
   ============================================ */

int __cdecl _ismbblead(unsigned int Ch)
{
  return x_ismbbtype(a1: Ch, a2: 0, a3: 4);
}


/* ============================================
   Address: 0x40CC00
   Function: _x_ismbbtype
   ============================================ */

int __cdecl x_ismbbtype(unsigned __int8 a1, int a2, unsigned __int8 a3)
{
  int result; // eax

  if ( (a3 & (unsigned __int8)byte_42FB69[a1]) != 0 )
    return 1;
  result = a2 != 0 ? (unsigned __int16)(a2 & _ctype[a1 + 1]) : 0;
  if ( result != 0 )
    return 1;
  return result;
}


/* ============================================
   Address: 0x40CC40
   Function: __setenvp
   ============================================ */

void _setenvp()
{
  const char *v0; // edx
  char v1; // al
  int i; // esi
  unsigned int v3; // kr08_4
  char **v4; // esi
  const char *v5; // ebp
  char j; // dl
  size_t v7; // kr0C_4
  char *v8; // eax
  char **v9; // [esp+10h] [ebp-4h]

  v0 = (const char *)Block;
  v1 = *(_BYTE *)Block;
  for ( i = 0; v1 != 0; v0 += v3 )
  {
    if ( v1 != 61 )
      ++i;
    v3 = strlen(v0) + 1;
    v1 = v0[v3];
  }
  v4 = (char **)malloc(Size: 4 * i + 4);
  v9 = v4;
  dword_42FB40 = (int)v4;
  if ( v4 == nullptr )
    _amsg_exit(a1: 9);
  v5 = (const char *)Block;
  for ( j = *(_BYTE *)Block; j != 0; v5 += v7 )
  {
    v7 = strlen(v5) + 1;
    if ( j != 61 )
    {
      v8 = (char *)malloc(Size: v7);
      *v4 = v8;
      if ( v8 == nullptr )
        _amsg_exit(a1: 9);
      strcpy(*v9++, v5);
      v4 = v9;
    }
    j = v5[v7];
  }
  free(Block: Block);
  Block = nullptr;
  *v4 = nullptr;
}


/* ============================================
   Address: 0x40CD30
   Function: __setargv
   ============================================ */

int _setargv()
{
  CHAR *v0; // edi
  char *v1; // esi
  int v3; // [esp+8h] [ebp-8h] BYREF
  int v4; // [esp+Ch] [ebp-4h] BYREF

  GetModuleFileNameA(hModule: nullptr, lpFilename: Filename, nSize: 0x104u);
  v0 = (CHAR *)dword_43112C;
  dword_42FB50 = (int)Filename;
  if ( *(_BYTE *)dword_43112C == 0 )
    v0 = Filename;
  parse_cmdline(a1: v0, a2: 0, a3: 0, a4: &v3, a5: &v4);
  v1 = (char *)malloc(Size: v4 + 4 * v3);
  if ( v1 == nullptr )
    _amsg_exit(a1: 8);
  parse_cmdline(a1: v0, a2: v1, a3: &v1[4 * v3], a4: &v3, a5: &v4);
  dword_42FB38 = (int)v1;
  dword_42FB34 = v3 - 1;
  return v3 - 1;
}


/* ============================================
   Address: 0x40CDD0
   Function: _parse_cmdline
   ============================================ */

_DWORD *__cdecl parse_cmdline(unsigned __int8 *a1, unsigned __int8 **a2, unsigned __int8 *a3, _DWORD *a4, _DWORD *a5)
{
  unsigned __int8 **v5; // ebp
  unsigned __int8 *v6; // esi
  unsigned __int8 *i; // eax
  unsigned __int8 v9; // cl
  unsigned __int8 v10; // cl
  BOOL v11; // edx
  unsigned int v12; // ecx
  int v13; // ebp
  char v14; // bl
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned __int8 v18; // cl
  BOOL v20; // [esp+24h] [ebp+14h]

  v5 = a2;
  v6 = a3;
  *a5 = 0;
  *a4 = 1;
  i = a1;
  if ( a2 != nullptr )
  {
    *a2 = a3;
    v5 = ++a2;
  }
  if ( *a1 == 34 )
  {
    v9 = a1[1];
    for ( i = a1 + 1; v9 != 34; v9 = *++i )
    {
      if ( v9 == 0 )
        break;
      if ( (byte_42FB69[v9] & 4) != 0 )
      {
        ++*a5;
        if ( v6 != nullptr )
          *v6++ = *i++;
      }
      ++*a5;
      if ( v6 != nullptr )
        *v6++ = *i;
    }
    ++*a5;
    if ( v6 != nullptr )
      *v6++ = 0;
    if ( *i == 34 )
      ++i;
  }
  else
  {
    do
    {
      ++*a5;
      if ( v6 != nullptr )
        *v6++ = *i;
      v10 = *i++;
      if ( (byte_42FB69[v10] & 4) != 0 )
      {
        ++*a5;
        if ( v6 != nullptr )
          *v6++ = *i;
        ++i;
      }
      if ( v10 == 32 )
        break;
      if ( v10 == 0 )
      {
        --i;
        goto LABEL_29;
      }
    }
    while ( v10 != 9 );
    if ( v6 != nullptr )
      *(v6 - 1) = 0;
  }
LABEL_29:
  v11 = false;
  v20 = false;
LABEL_30:
  if ( *i != 0 )
  {
    while ( *i == 32 || *i == 9 )
      ++i;
    if ( *i != 0 )
    {
      if ( v5 != nullptr )
      {
        *v5 = v6;
        a2 = v5 + 1;
      }
      ++*a4;
      while ( 1 )
      {
        while ( 1 )
        {
          v12 = 0;
          v13 = 1;
          if ( *i == 92 )
          {
            do
            {
              v14 = *++i;
              ++v12;
            }
            while ( v14 == 92 );
          }
          if ( *i == 34 )
          {
            if ( (v12 & 1) == 0 )
            {
              if ( v11 && i[1] == 34 )
                ++i;
              else
                v13 = 0;
              v11 = !v20;
              v20 = v11;
            }
            v12 >>= 1;
          }
          v15 = v12;
          v16 = v12 - 1;
          if ( v15 != 0 )
          {
            v17 = v16 + 1;
            do
            {
              if ( v6 != nullptr )
                *v6++ = 92;
              --v17;
              ++*a5;
            }
            while ( v17 != 0 );
          }
          v18 = *i;
          if ( *i == 0 || !v11 && (v18 == 32 || v18 == 9) )
          {
            if ( v6 != nullptr )
              *v6++ = 0;
            v5 = a2;
            ++*a5;
            goto LABEL_30;
          }
          if ( v13 != 0 )
            break;
LABEL_65:
          ++i;
        }
        if ( v6 == nullptr )
        {
          if ( (byte_42FB69[*i] & 4) != 0 )
          {
            ++i;
            ++*a5;
          }
          ++*a5;
          goto LABEL_65;
        }
        if ( (byte_42FB69[v18] & 4) != 0 )
        {
          *v6++ = v18;
          ++i;
          ++*a5;
        }
        *v6++ = *i;
        ++*a5;
        ++i;
      }
    }
  }
  if ( v5 != nullptr )
    *v5 = nullptr;
  ++*a4;
  return a4;
}


/* ============================================
   Address: 0x40CFE0
   Function: ___crtGetEnvironmentStringsA
   ============================================ */

CHAR *__crtGetEnvironmentStringsA()
{
  int v0; // eax
  WCHAR *EnvironmentStringsW; // esi
  LPCH EnvironmentStrings; // ebx
  WCHAR *i; // eax
  int v4; // ebp
  size_t v5; // eax
  int v6; // edi
  CHAR *v7; // eax
  CHAR *v8; // ebx
  LPCH v10; // eax
  char v11; // cl
  char v12; // cl
  size_t v13; // esi
  void *v14; // ebp

  v0 = dword_42FE70;
  EnvironmentStringsW = nullptr;
  EnvironmentStrings = nullptr;
  if ( dword_42FE70 == 0 )
  {
    EnvironmentStringsW = GetEnvironmentStringsW();
    if ( EnvironmentStringsW != nullptr )
    {
      v0 = 1;
    }
    else
    {
      EnvironmentStrings = GetEnvironmentStrings();
      if ( EnvironmentStrings == nullptr )
        return nullptr;
      v0 = 2;
    }
    dword_42FE70 = v0;
  }
  if ( v0 == 1 )
  {
    if ( EnvironmentStringsW != nullptr || (EnvironmentStringsW = GetEnvironmentStringsW()) != nullptr )
    {
      for ( i = EnvironmentStringsW; *i != 0; ++i )
      {
        do
          ++i;
        while ( *i != 0 );
      }
      v4 = i - EnvironmentStringsW + 1;
      v5 = WideCharToMultiByte(
             CodePage: 0,
             dwFlags: 0,
             lpWideCharStr: EnvironmentStringsW,
             cchWideChar: v4,
             lpMultiByteStr: nullptr,
             cbMultiByte: 0,
             lpDefaultChar: nullptr,
             lpUsedDefaultChar: nullptr);
      v6 = v5;
      if ( v5 != 0 && (v7 = (CHAR *)malloc(Size: v5), v8 = v7, v7 != nullptr) )
      {
        if ( WideCharToMultiByte(
               CodePage: 0,
               dwFlags: 0,
               lpWideCharStr: EnvironmentStringsW,
               cchWideChar: v4,
               lpMultiByteStr: v7,
               cbMultiByte: v6,
               lpDefaultChar: nullptr,
               lpUsedDefaultChar: nullptr) == 0 )
        {
          free(Block: v8);
          v8 = nullptr;
        }
        FreeEnvironmentStringsW(penv: EnvironmentStringsW);
        return v8;
      }
      else
      {
        FreeEnvironmentStringsW(penv: EnvironmentStringsW);
        return nullptr;
      }
    }
    return nullptr;
  }
  if ( v0 != 2 )
    return nullptr;
  if ( EnvironmentStrings == nullptr )
  {
    EnvironmentStrings = GetEnvironmentStrings();
    if ( EnvironmentStrings == nullptr )
      return nullptr;
  }
  v10 = EnvironmentStrings;
  if ( *EnvironmentStrings != 0 )
  {
    do
    {
      do
        v11 = *++v10;
      while ( v11 != 0 );
      v12 = *++v10;
    }
    while ( v12 != 0 );
  }
  v13 = v10 - EnvironmentStrings + 1;
  v14 = malloc(Size: v13);
  if ( v14 != nullptr )
  {
    qmemcpy(v14, EnvironmentStrings, v13);
    FreeEnvironmentStringsA(penv: EnvironmentStrings);
    return (CHAR *)v14;
  }
  else
  {
    FreeEnvironmentStringsA(penv: EnvironmentStrings);
    return nullptr;
  }
}


/* ============================================
   Address: 0x40D140
   Function: __heap_init
   ============================================ */

int _heap_init()
{
  int result; // eax

  result = (int)HeapCreate(flOptions: 0, dwInitialSize: 0x1000u, dwMaximumSize: 0);
  hHeap = (HANDLE)result;
  if ( result != 0 )
  {
    if ( __sbh_new_region() != 0 )
    {
      return 1;
    }
    else
    {
      HeapDestroy(hHeap: hHeap);
      return 0;
    }
  }
  return result;
}


/* ============================================
   Address: 0x40D188
   Function: __except_handler3
   ============================================ */

int __cdecl _except_handler3(int a1, _DWORD *TargetFrame, int a3)
{
  int *v3; // ebp
  _DWORD *v4; // ebx
  int v5; // esi
  int v6; // edi
  int v7; // eax
  int v8; // edi
  int v9; // ecx
  _DWORD v11[2]; // [esp+10h] [ebp-8h] BYREF
  int savedregs; // [esp+18h] [ebp+0h] BYREF

  v3 = &savedregs;
  v4 = TargetFrame;
  if ( (*(_DWORD *)(a1 + 4) & 6) != 0 )
  {
    _local_unwind2(a1: (int)TargetFrame, a2: -1);
    return 1;
  }
  else
  {
    v11[0] = a1;
    v11[1] = a3;
    *(TargetFrame - 1) = v11;
    v5 = TargetFrame[3];
    v6 = TargetFrame[2];
    while ( v5 != -1 )
    {
      if ( *(_DWORD *)(v6 + 12 * v5 + 4) != 0 )
      {
        v7 = (*(int (**)(void))(v6 + 12 * v5 + 4))();
        v4 = (_DWORD *)v3[3];
        if ( v7 != 0 )
        {
          if ( v7 < 0 )
            return 0;
          v8 = v4[2];
          _global_unwind2(TargetFrame: (PVOID)v3[3]);
          v3 = v4 + 4;
          _local_unwind2(a1: (int)v4, a2: v5);
          _NLG_Notify(result: *(_DWORD *)(v8 + 12 * v5 + 8), a2: (int)(v4 + 4), a3: 1);
          v4[3] = *(_DWORD *)(v8 + 4 * v9);
          (*(void (**)(void))(v8 + 4 * v9 + 8))();
        }
      }
      v6 = v4[2];
      v5 = *(_DWORD *)(v6 + 12 * v5);
    }
    return 1;
  }
}


/* ============================================
   Address: 0x40D245
   Function: __seh_longjmp_unwind@4
   ============================================ */

int __stdcall _seh_longjmp_unwind(int a1)
{
  return _local_unwind2(a1: *(_DWORD *)(a1 + 24), a2: *(_DWORD *)(a1 + 28));
}


/* ============================================
   Address: 0x40D260
   Function: __FF_MSGBANNER
   ============================================ */

int _FF_MSGBANNER()
{
  int result; // eax

  result = dword_42FB1C;
  if ( dword_42FB1C == 1 || dword_42FB1C == 0 && dword_427B24 == 1 )
  {
    _NMSG_WRITE(a1: 252);
    if ( dword_42FE74 != nullptr )
      dword_42FE74();
    return _NMSG_WRITE(a1: 255);
  }
  return result;
}


/* ============================================
   Address: 0x40D2A0
   Function: __NMSG_WRITE
   ============================================ */

int *__cdecl _NMSG_WRITE(int a1)
{
  int *result; // eax
  int v2; // ebp
  char *v3; // ebx
  HANDLE StdHandle; // esi
  const char *v5; // [esp-8h] [ebp-1C0h]
  DWORD v6[6]; // [esp-4h] [ebp-1BCh] BYREF
  char v7[160]; // [esp+14h] [ebp-1A4h] BYREF
  CHAR Filename[260]; // [esp+B4h] [ebp-104h] BYREF

  result = dword_428390;
  v2 = 0;
  do
  {
    if ( a1 == *result )
      break;
    result += 2;
    ++v2;
  }
  while ( result < (int *)&off_428420 );
  if ( a1 == dword_428390[2 * v2] )
  {
    result = (int *)dword_42FB1C;
    if ( dword_42FB1C == 1 || dword_42FB1C == 0 && dword_427B24 == 1 )
    {
      if ( dword_431020[0] == 0 || (StdHandle = *(HANDLE *)(dword_431020[0] + 72)) == (HANDLE)-1 )
        StdHandle = GetStdHandle(nStdHandle: 0xFFFFFFF4);
      return (int *)WriteFile(
                      hFile: StdHandle,
                      lpBuffer: lpBuffer[2 * v2],
                      nNumberOfBytesToWrite: strlen((const char *)lpBuffer[2 * v2]),
                      lpNumberOfBytesWritten: &v6[5],
                      lpOverlapped: nullptr);
    }
    else if ( a1 != 252 )
    {
      if ( GetModuleFileNameA(hModule: nullptr, lpFilename: Filename, nSize: 0x104u) == 0 )
        strcpy(Filename, "<program name unknown>");
      v3 = Filename;
      if ( strlen(Filename) + 1 > 0x3C )
      {
        v3 = (char *)&v6[31] + strlen(Filename) + 1;
        strncpy(Destination: v3, Source: "...", Count: 3u);
      }
      strcpy(v7, "Runtime Error!\n\nProgram: ");
      strcat(v7, v3);
      v6[0] = 73744;
      v5 = "Microsoft Visual C++ Runtime Library";
      strcat(v7, "\n\n");
      strcat(v7, (const char *)lpBuffer[2 * v2]);
      return (int *)__crtMessageBoxA(a1: v7, a2: v5, a3: v6[0]);
    }
  }
  return result;
}


/* ============================================
   Address: 0x40D480
   Function: ?__CxxUnhandledExceptionFilter@@YGJPAU_EXCEPTION_POINTERS@@@Z
   ============================================ */

LONG __stdcall __CxxUnhandledExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  PEXCEPTION_RECORD ExceptionRecord; // eax

  ExceptionRecord = ExceptionInfo->ExceptionRecord;
  if ( ExceptionInfo->ExceptionRecord->ExceptionCode == -529697949
    && ExceptionRecord->NumberParameters == 3
    && ExceptionRecord->ExceptionInformation[0] == 429065504 )
  {
    terminate();
  }
  if ( lpfn != nullptr && _ValidateExecute(lpfn: (FARPROC)lpfn) != 0 )
    return lpfn(ExceptionInfo);
  else
    return 0;
}


/* ============================================
   Address: 0x40D4E0
   Function: ?__CxxSetUnhandledExceptionFilter@@YAXXZ
   ============================================ */

void __cdecl __CxxSetUnhandledExceptionFilter()
{
  lpfn = SetUnhandledExceptionFilter(lpTopLevelExceptionFilter: __CxxUnhandledExceptionFilter);
}


/* ============================================
   Address: 0x40D500
   Function: ?__CxxRestoreUnhandledExceptionFilter@@YAXXZ
   ============================================ */

void __cdecl __CxxRestoreUnhandledExceptionFilter()
{
  SetUnhandledExceptionFilter(lpTopLevelExceptionFilter: lpfn);
}


/* ============================================
   Address: 0x40D510
   Function: __callnewh
   ============================================ */

int __cdecl _callnewh(size_t Size)
{
  return dword_42FE80 != nullptr && dword_42FE80(a1: Size) != 0;
}


/* ============================================
   Address: 0x40D530
   Function: ___sbh_new_region
   ============================================ */

_DWORD *__sbh_new_region()
{
  _DWORD *v0; // ebp
  _DWORD *v1; // eax
  _DWORD *v2; // esi
  _DWORD *v3; // ecx
  int i; // eax
  int v5; // edx

  if ( dword_428430 == -1 )
  {
    v0 = &off_428420;
  }
  else
  {
    v0 = HeapAlloc(hHeap: hHeap, dwFlags: 0, dwBytes: 0x2020u);
    if ( v0 == nullptr )
      return nullptr;
  }
  v1 = VirtualAlloc(lpAddress: nullptr, dwSize: 0x400000u, flAllocationType: 0x2000u, flProtect: 4u);
  v2 = v1;
  if ( v1 == nullptr )
  {
LABEL_18:
    if ( v0 != &off_428420 )
      HeapFree(hHeap: hHeap, dwFlags: 0, lpMem: v0);
    return nullptr;
  }
  if ( VirtualAlloc(lpAddress: v1, dwSize: 0x10000u, flAllocationType: 0x1000u, flProtect: 4u) == nullptr )
  {
    VirtualFree(lpAddress: v2, dwSize: 0, dwFreeType: 0x8000u);
    goto LABEL_18;
  }
  if ( v0 == &off_428420 )
  {
    if ( off_428420 == nullptr )
      off_428420 = &off_428420;
    if ( lpMem == nullptr )
      lpMem = &off_428420;
  }
  else
  {
    *v0 = &off_428420;
    v0[1] = lpMem;
    lpMem = v0;
    *(_DWORD *)v0[1] = v0;
  }
  v3 = v0 + 6;
  v0[5] = v2 + 0x100000;
  v0[4] = v2;
  v0[2] = v0 + 6;
  v0[3] = v0 + 38;
  for ( i = 0; i < 1024; ++i )
  {
    v3 += 2;
    v5 = i >= 16 ? -1 : 240;
    *(v3 - 2) = v5;
    *(v3 - 1) = 241;
  }
  memset(v2, 0, 0x10000u);
  for ( ; (unsigned int)v2 < v0[4] + 0x10000; v2 += 1024 )
  {
    v2[1] = 240;
    *v2 = v2 + 2;
    *((_BYTE *)v2 + 248) = -1;
  }
  return v0;
}


/* ============================================
   Address: 0x40D6A0
   Function: ___sbh_release_region
   ============================================ */

BOOL __cdecl __sbh_release_region(LPVOID *lpMem)
{
  BOOL result; // eax

  result = VirtualFree(lpAddress: lpMem[4], dwSize: 0, dwFreeType: 0x8000u);
  if ( off_42A440 == (_UNKNOWN **)lpMem )
    off_42A440 = (_UNKNOWN **)lpMem[1];
  if ( lpMem == (LPVOID *)&off_428420 )
  {
    dword_428430 = -1;
  }
  else
  {
    *(_DWORD *)lpMem[1] = *lpMem;
    *((_DWORD *)*lpMem + 1) = lpMem[1];
    return HeapFree(hHeap: hHeap, dwFlags: 0, lpMem);
  }
  return result;
}


/* ============================================
   Address: 0x40D700
   Function: ___sbh_decommit_pages
   ============================================ */

void __cdecl __sbh_decommit_pages(int a1)
{
  _DWORD *v1; // edi
  int v2; // ebp
  _DWORD *v3; // esi
  int i; // ebx
  unsigned int v5; // eax
  _DWORD *v6; // edx
  int v7; // eax
  _DWORD *v8; // ecx

  v1 = lpMem;
  do
  {
    if ( v1[4] != -1 )
    {
      v2 = 0;
      v3 = v1 + 2052;
      for ( i = 4190208; i >= 0; i -= 4096 )
      {
        if ( *v3 == 240 && VirtualFree(lpAddress: (LPVOID)(i + v1[4]), dwSize: 0x1000u, dwFreeType: 0x4000u) )
        {
          *v3 = -1;
          --dword_42FE84;
          v5 = v1[3];
          if ( v5 == 0 || v5 > (unsigned int)v3 )
            v1[3] = v3;
          ++v2;
          if ( --a1 == 0 )
            break;
        }
        v3 -= 2;
      }
      v6 = v1;
      v1 = (_DWORD *)v1[1];
      if ( v2 != 0 && v6[6] == -1 )
      {
        v7 = 1;
        v8 = v6 + 8;
        do
        {
          if ( *v8 != -1 )
            break;
          ++v7;
          v8 += 2;
        }
        while ( v7 < 1024 );
        if ( v7 == 1024 )
          __sbh_release_region(lpMem: (LPVOID *)v6);
      }
    }
  }
  while ( v1 != lpMem && a1 > 0 );
}


/* ============================================
   Address: 0x40D7D0
   Function: ___sbh_find_block
   ============================================ */

unsigned int __cdecl __sbh_find_block(unsigned int a1, _DWORD *a2, unsigned int *a3)
{
  _UNKNOWN **v3; // eax

  v3 = &off_428420;
  while ( a1 <= (unsigned int)v3[4] || a1 >= (unsigned int)v3[5] )
  {
    v3 = (_UNKNOWN **)*v3;
    if ( v3 == &off_428420 )
      return 0;
  }
  if ( (a1 & 0xF) == 0 && (a1 & 0xFFF) >= 0x100 )
  {
    *a2 = v3;
    *a3 = a1 & 0xFFFFF000;
    return ((int)(a1 - (a1 & 0xFFFFF000) - 256) >> 4) + (a1 & 0xFFFFF000) + 8;
  }
  return 0;
}


/* ============================================
   Address: 0x40D830
   Function: ___sbh_free_block
   ============================================ */

void __cdecl __sbh_free_block(int a1, int a2, _BYTE *a3)
{
  int *v3; // eax
  int v4; // ecx

  v3 = (int *)(a1 + 8 * ((a2 - *(_DWORD *)(a1 + 16)) >> 12) + 24);
  *v3 += (unsigned __int8)*a3;
  *a3 = 0;
  v4 = *v3;
  v3[1] = 241;
  if ( v4 == 240 && ++dword_42FE84 == 32 )
    __sbh_decommit_pages(a1: 16);
}


/* ============================================
   Address: 0x40D890
   Function: ___sbh_alloc_block
   ============================================ */

_DWORD *__cdecl __sbh_alloc_block(unsigned int a1)
{
  _UNKNOWN **v1; // ecx
  char *v3; // eax
  char *v4; // edi
  char *v5; // ebp
  char *i; // esi
  _DWORD *result; // eax
  _DWORD *v8; // ebp
  char *v9; // edi
  _DWORD *j; // esi
  char *v11; // ebp
  char *v12; // eax
  _DWORD *v13; // edi
  int v14; // esi
  int v15; // edx
  char *v16; // edx
  unsigned int v17; // ecx
  _DWORD *v18; // eax
  _UNKNOWN **v19; // eax
  bool v20; // cf
  _DWORD *v21; // eax
  int v22; // ecx
  _UNKNOWN **v23; // [esp+10h] [ebp-4h]
  char *v24; // [esp+18h] [ebp+4h]

  v1 = off_42A440;
  v23 = off_42A440;
  do
  {
    v3 = (char *)v1[4];
    if ( v3 != (char *)-1 )
    {
      v4 = (char *)v1[2];
      v5 = (char *)(v1 + 2054);
      for ( i = &v3[4096 * ((v4 - (char *)v1 - 24) >> 3)]; v4 < v5; i += 4096 )
      {
        if ( *(_DWORD *)v4 >= (signed int)a1 && *((_DWORD *)v4 + 1) > a1 )
        {
          result = (_DWORD *)__sbh_alloc_block_from_page(a1: i, a2: *(_DWORD *)v4, a3: a1);
          if ( result != nullptr )
          {
            off_42A440 = v23;
            *(_DWORD *)v4 -= a1;
            v23[2] = v4;
            return result;
          }
          v1 = v23;
          *((_DWORD *)v4 + 1) = a1;
        }
        v4 += 8;
      }
      v8 = v1[2];
      v9 = (char *)v1[4];
      for ( j = v1 + 6; j < v8; v9 += 4096 )
      {
        if ( *j >= (signed int)a1 && j[1] > a1 )
        {
          result = (_DWORD *)__sbh_alloc_block_from_page(a1: v9, a2: *j, a3: a1);
          if ( result != nullptr )
          {
            off_42A440 = v23;
            *j -= a1;
            v23[2] = j;
            return result;
          }
          v1 = v23;
          j[1] = a1;
        }
        j += 2;
      }
    }
    v1 = (_UNKNOWN **)*v1;
    v23 = v1;
  }
  while ( v1 != off_42A440 );
  v11 = (char *)&off_428420;
  while ( *((_DWORD *)v11 + 4) == -1 || *((_DWORD *)v11 + 3) == 0 )
  {
    v11 = *(char **)v11;
    if ( v11 == (char *)&off_428420 )
    {
      v21 = __sbh_new_region();
      if ( v21 != nullptr )
      {
        v22 = v21[4];
        *(_BYTE *)(v22 + 8) = a1;
        off_42A440 = (_UNKNOWN **)v21;
        *(_DWORD *)v22 = v22 + a1 + 8;
        *(_DWORD *)(v22 + 4) = 240 - a1;
        v21[6] -= (unsigned __int8)a1;
        return (_DWORD *)(v22 + 256);
      }
      return nullptr;
    }
  }
  v24 = *((char **)v11 + 3);
  v12 = v24;
  v13 = (_DWORD *)(*((_DWORD *)v11 + 4) + ((v24 - v11 - 24) >> 3 << 12));
  v14 = 0;
  if ( *(_DWORD *)v24 == -1 )
  {
    do
    {
      if ( v14 >= 16 )
        break;
      v15 = *((_DWORD *)v12 + 2);
      v12 += 8;
      ++v14;
    }
    while ( v15 == -1 );
  }
  if ( VirtualAlloc(lpAddress: v13, dwSize: v14 << 12, flAllocationType: 0x1000u, flProtect: 4u) != v13 )
    return nullptr;
  v16 = v24;
  v17 = (unsigned int)v24;
  if ( v14 > 0 )
  {
    v18 = v13 + 1;
    do
    {
      *v18 = 240;
      *(v18 - 1) = v18 + 1;
      *((_BYTE *)v18 + 244) = -1;
      *(_DWORD *)v17 = 240;
      *(_DWORD *)(v17 + 4) = 241;
      v18 += 1024;
      v17 += 8;
      --v14;
    }
    while ( v14 != 0 );
    v16 = v24;
  }
  v19 = (_UNKNOWN **)(v11 + 8216);
  off_42A440 = (_UNKNOWN **)v11;
  v20 = v17 < (unsigned int)(v11 + 8216);
  if ( v17 < (unsigned int)(v11 + 8216) )
  {
    do
    {
      if ( *(_DWORD *)v17 == -1 )
        break;
      v17 += 8;
    }
    while ( v17 < (unsigned int)v19 );
    v20 = v17 < (unsigned int)v19;
  }
  *((_DWORD *)v11 + 3) = v20 ? v17 : 0;
  *((_BYTE *)v13 + 8) = a1;
  *((_DWORD *)v11 + 2) = v16;
  *(_DWORD *)v16 -= a1;
  v13[1] -= a1;
  *v13 = (char *)v13 + a1 + 8;
  return v13 + 64;
}


/* ============================================
   Address: 0x40DAD0
   Function: ___sbh_alloc_block_from_page
   ============================================ */

int __cdecl __sbh_alloc_block_from_page(int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // eax
  _BYTE *v5; // ecx
  _BYTE *v6; // esi
  unsigned int v7; // ebx
  unsigned int v8; // eax
  _BYTE *v10; // eax
  _BYTE *v13; // eax
  unsigned int i; // ecx
  _BYTE *v15; // eax
  unsigned int j; // ecx
  _BYTE *v17; // [esp+14h] [ebp+4h]

  v4 = *(_DWORD *)(a1 + 4);
  v5 = *(_BYTE **)a1;
  v17 = v5;
  v6 = v5;
  v7 = a1 + 248;
  if ( v4 >= a3 )
  {
    *v5 = a3;
    if ( (unsigned int)&v5[a3] >= v7 )
    {
      *(_DWORD *)(a1 + 4) = 0;
      *(_DWORD *)a1 = a1 + 8;
    }
    else
    {
      v8 = *(_DWORD *)(a1 + 4) - a3;
      *(_DWORD *)a1 += a3;
      *(_DWORD *)(a1 + 4) = v8;
    }
    return 16 * (_DWORD)(v5 + 8) - 15 * a1;
  }
  v10 = &v5[v4];
  if ( *v10 != 0 )
    v6 = v10;
  if ( (unsigned int)&v6[a3] < v7 )
  {
    do
    {
      if ( *v6 != 0 )
      {
        v6 += (unsigned __int8)*v6;
      }
      else
      {
        v13 = v6 + 1;
        for ( i = 1; *v13 == 0; ++i )
          ++v13;
        if ( i >= a3 )
        {
          if ( (unsigned int)&v6[a3] >= a1 + 248 )
          {
            *(_DWORD *)a1 = a1 + 8;
LABEL_37:
            *(_DWORD *)(a1 + 4) = 0;
          }
          else
          {
            *(_DWORD *)a1 = &v6[a3];
            *(_DWORD *)(a1 + 4) = i - a3;
          }
LABEL_38:
          *v6 = a3;
          return 16 * (_DWORD)(v6 + 8) - 15 * a1;
        }
        if ( v6 == v17 )
        {
          *(_DWORD *)(a1 + 4) = i;
          v6 = v13;
          v5 = v17;
        }
        else
        {
          a2 -= i;
          if ( a2 < a3 )
            return 0;
          v5 = v17;
          v6 = v13;
        }
      }
    }
    while ( (unsigned int)&v6[a3] < a1 + 248 );
  }
  v6 = (_BYTE *)(a1 + 8);
  if ( a1 + 8 < (unsigned int)v5 )
  {
    while ( (unsigned int)&v6[a3] < a1 + 248 )
    {
      if ( *v6 != 0 )
      {
        v6 += (unsigned __int8)*v6;
      }
      else
      {
        v15 = v6 + 1;
        for ( j = 1; *v15 == 0; ++j )
          ++v15;
        if ( j >= a3 )
        {
          if ( (unsigned int)&v6[a3] < a1 + 248 )
          {
            *(_DWORD *)a1 = &v6[a3];
            *(_DWORD *)(a1 + 4) = j - a3;
            goto LABEL_38;
          }
          *(_DWORD *)a1 = a1 + 8;
          goto LABEL_37;
        }
        a2 -= j;
        if ( a2 < a3 )
          return 0;
        v6 = v15;
      }
      if ( v6 >= v17 )
        return 0;
    }
  }
  return 0;
}


/* ============================================
   Address: 0x40DC50
   Function: ___sbh_resize_block
   ============================================ */

int __cdecl __sbh_resize_block(int a1, _DWORD *a2, _BYTE *a3, unsigned int a4)
{
  int result; // eax
  _DWORD *v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // esi
  int v9; // eax
  _BYTE *v10; // ecx
  _BYTE *v11; // edx
  bool v12; // zf
  int v13; // eax
  char v14; // dl
  _DWORD *v15; // [esp+18h] [ebp+8h]

  result = 0;
  v6 = (_DWORD *)(a1 + 8 * (((int)a2 - *(_DWORD *)(a1 + 16)) >> 12) + 24);
  v7 = (unsigned __int8)*a3;
  v15 = v6;
  v8 = v7;
  if ( v7 <= a4 )
  {
    if ( v7 < a4 )
    {
      v10 = &a3[a4];
      if ( &a3[a4] <= (_BYTE *)a2 + 248 )
      {
        v11 = &a3[v7];
        v12 = &a3[v8] == v10;
        if ( &a3[v8] < v10 )
        {
          do
          {
            if ( *v11 != 0 )
              break;
            ++v11;
          }
          while ( v11 < v10 );
          v12 = v11 == v10;
        }
        if ( v12 )
        {
          *a3 = a4;
          if ( (unsigned int)a3 <= *a2 && (unsigned int)v10 > *a2 )
          {
            if ( v10 >= (_BYTE *)a2 + 248 )
            {
              a2[1] = 0;
              *a2 = a2 + 2;
            }
            else
            {
              *a2 = v10;
              v13 = 0;
              if ( *v10 == 0 )
              {
                do
                  v14 = v10[++v13];
                while ( v14 == 0 );
              }
              a2[1] = v13;
            }
          }
          *v15 += v8 - a4;
          return 1;
        }
      }
    }
  }
  else
  {
    *a3 = a4;
    v9 = *v6;
    v6[1] = 241;
    *v6 = v7 - a4 + v9;
    return 1;
  }
  return result;
}


/* ============================================
   Address: 0x40DD20
   Function: _strpbrk
   ============================================ */

char *__cdecl strpbrk(const char *Str, const char *Control)
{
  char *result; // eax
  signed __int32 v5[9]; // [esp+0h] [ebp-24h] BYREF

  result = nullptr;
  memset(v5, 0, 32);
  while ( 1 )
  {
    LOBYTE(result) = *Control;
    if ( *Control == 0 )
      break;
    ++Control;
    _bittestandset(v5, (unsigned int)result);
  }
  while ( 1 )
  {
    LOBYTE(result) = *Str;
    if ( *Str == 0 )
      break;
    ++Str;
    if ( _bittest(v5, (unsigned int)result) )
      return (char *)(Str - 1);
  }
  return result;
}


/* ============================================
   Address: 0x40DD60
   Function: __strrev
   ============================================ */

char *__cdecl _strrev(char *Str)
{
  char *v1; // esi
  unsigned int v2; // kr04_4
  char *i; // edi
  char v4; // ah

  v1 = Str;
  v2 = strlen(Str) + 1;
  if ( ~v2 != -2 )
  {
    for ( i = &Str[v2 - 2]; v1 < i; --i )
    {
      v4 = *v1;
      *v1 = *i;
      *i = v4;
      ++v1;
    }
  }
  return Str;
}


/* ============================================
   Address: 0x40DD90
   Function: _calloc
   ============================================ */

void *__cdecl calloc(size_t Count, size_t Size)
{
  SIZE_T v2; // ebx
  void *v3; // esi
  void *result; // eax

  v2 = Count * Size;
  if ( Count * Size <= 0xFFFFFFE0 )
  {
    if ( v2 != 0 )
      v2 = (v2 + 15) & 0xFFFFFFF0;
    else
      v2 = 16;
  }
  while ( 1 )
  {
    v3 = nullptr;
    if ( v2 <= 0xFFFFFFE0 )
    {
      if ( v2 <= dword_42A444 )
      {
        _lock(a1: 9);
        v3 = __sbh_alloc_block(a1: v2 >> 4);
        _unlock(a1: 9);
        if ( v3 == nullptr )
        {
LABEL_10:
          v3 = HeapAlloc(hHeap: hHeap, dwFlags: 8u, dwBytes: v2);
          goto LABEL_11;
        }
        memset(v3, 0, v2);
      }
      if ( v3 != nullptr )
        return v3;
      goto LABEL_10;
    }
LABEL_11:
    if ( v3 != nullptr || dword_42FE7C == 0 )
      return v3;
    result = (void *)_callnewh(Size: v2);
    if ( result == nullptr )
      return result;
  }
}


/* ============================================
   Address: 0x40DE40
   Function: __allmul
   ============================================ */

unsigned __int64 __stdcall _allmul(__int64 a1, __int64 a2)
{
  if ( (HIDWORD(a1) | HIDWORD(a2)) != 0 )
    return a1 * a2;
  else
    return (unsigned int)a2 * (unsigned __int64)(unsigned int)a1;
}


/* ============================================
   Address: 0x40DE80
   Function: _strrchr
   ============================================ */

char *__cdecl strrchr(const char *Str, int Ch)
{
  unsigned int v2; // ecx
  const char *v3; // edi
  bool v4; // zf
  char *v5; // edi

  v2 = strlen(Str) + 1;
  v3 = &Str[v2 - 1];
  do
  {
    if ( v2 == 0 )
      break;
    v4 = *v3-- == (unsigned __int8)Ch;
    --v2;
  }
  while ( !v4 );
  v5 = (char *)(v3 + 1);
  if ( *v5 == (_BYTE)Ch )
    return v5;
  else
    return nullptr;
}


/* ============================================
   Address: 0x40DEB0
   Function: __strcmpi
   ============================================ */

int __cdecl _strcmpi(const char *String1, const char *String2)
{
  int result; // eax
  char v5; // t0
  int v6; // eax
  int v7; // ebx
  int v8; // ebx
  int v9; // [esp-4h] [ebp-14h]
  int v10; // [esp+0h] [ebp-10h]

  if ( Locale != 0 )
  {
    _InterlockedIncrement(&Addend);
    if ( dword_431008 > 0 )
    {
      _InterlockedDecrement(&Addend);
      _lock(a1: 19);
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
    v6 = 255;
    v7 = 0;
    while ( (_BYTE)v6 != 0 )
    {
      LOBYTE(v6) = *String2++;
      LOBYTE(v7) = *String1++;
      if ( (_BYTE)v6 != (_BYTE)v7 )
      {
        v9 = v6;
        v7 = tolower_0(C: v7);
        v6 = tolower_0(C: v9);
        if ( (_BYTE)v7 != (_BYTE)v6 )
        {
          v6 = -((unsigned __int8)v7 < (unsigned __int8)v6) - (((unsigned __int8)v7 < (unsigned __int8)v6) - 1);
          break;
        }
      }
    }
    v8 = v6;
    if ( v10 != 0 )
      _unlock(a1: 19);
    else
      _InterlockedDecrement(&Addend);
    return v8;
  }
  else
  {
    LOBYTE(result) = -1;
    while ( (_BYTE)result != 0 )
    {
      LOBYTE(result) = *String2++;
      BYTE1(result) = *String1++;
      if ( BYTE1(result) != (_BYTE)result )
      {
        v5 = BYTE1(result);
        BYTE1(result) = ((unsigned __int8)(result - 65) < 0x1Au ? 0x20 : 0) + result;
        LOBYTE(result) = ((unsigned __int8)(v5 - 65) < 0x1Au ? 0x20 : 0) + v5;
        if ( (_BYTE)result != BYTE1(result) )
        {
          LOBYTE(result) = -((unsigned __int8)result < BYTE1(result)) - (((unsigned __int8)result < BYTE1(result)) - 1);
          return (char)result;
        }
      }
    }
    return (char)result;
  }
}


/* ============================================
   Address: 0x40DF80
   Function: _mbtowc
   ============================================ */

int __cdecl mbtowc(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes)
{
  int v3; // esi
  int v4; // ebx

  InterlockedIncrement(lpAddend: &Addend);
  if ( dword_431008 != 0 )
  {
    InterlockedDecrement(lpAddend: &Addend);
    _lock(a1: 19);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  v4 = _mbtowc_lk(lpWideCharStr: DstCh, lpMultiByteStr: SrcCh, a3: SrcSizeInBytes);
  if ( v3 != 0 )
    _unlock(a1: 19);
  else
    InterlockedDecrement(lpAddend: &Addend);
  return v4;
}


/* ============================================
   Address: 0x40E000
   Function: __mbtowc_lk
   ============================================ */

unsigned int __cdecl _mbtowc_lk(LPWSTR lpWideCharStr, LPCCH lpMultiByteStr, unsigned int a3)
{
  unsigned int result; // eax
  bool v4; // cf
  bool v5; // zf

  if ( lpMultiByteStr == nullptr || a3 == 0 )
    return 0;
  if ( *lpMultiByteStr == 0 )
  {
    if ( lpWideCharStr != nullptr )
    {
      *lpWideCharStr = 0;
      return 0;
    }
    return 0;
  }
  if ( Locale == 0 )
  {
    if ( lpWideCharStr != nullptr )
    {
      *lpWideCharStr = *(unsigned __int8 *)lpMultiByteStr;
      return 1;
    }
    return 1;
  }
  if ( *((char *)off_4280D0 + 2 * *(unsigned __int8 *)lpMultiByteStr + 1) >= 0 )
  {
    if ( MultiByteToWideChar(
           CodePage: CodePage,
           dwFlags: 9u,
           lpMultiByteStr,
           cbMultiByte: 1,
           lpWideCharStr,
           cchWideChar: lpWideCharStr != nullptr) != 0 )
      return 1;
LABEL_16:
    *_errno() = 42;
    return -1;
  }
  result = SrcSizeInBytes;
  if ( (int)SrcSizeInBytes <= 1 )
    goto LABEL_13;
  v4 = a3 < SrcSizeInBytes;
  if ( (int)a3 >= (int)SrcSizeInBytes )
  {
    v5 = MultiByteToWideChar(
           CodePage: CodePage,
           dwFlags: 9u,
           lpMultiByteStr,
           cbMultiByte: SrcSizeInBytes,
           lpWideCharStr,
           cchWideChar: lpWideCharStr != nullptr) == 0;
    result = SrcSizeInBytes;
    if ( !v5 )
      return result;
LABEL_13:
    v4 = a3 < result;
  }
  if ( v4 || lpMultiByteStr[1] == 0 )
    goto LABEL_16;
  return result;
}


/* ============================================
   Address: 0x40E100
   Function: _isspace
   ============================================ */

int __cdecl isspace(int C)
{
  if ( (int)SrcSizeInBytes <= 1 )
    return *((_BYTE *)off_4280D0 + 2 * C) & 8;
  else
    return _isctype(C, Type: 8);
}


/* ============================================
   Address: 0x40E130
   Function: __allshl
   ============================================ */

int __usercall _allshl@<eax>(__int64 a1@<edx:eax>, unsigned __int8 a2@<cl>)
{
  __int64 v2; // rax

  if ( a2 >= 0x40u )
  {
    LODWORD(v2) = 0;
  }
  else if ( a2 >= 0x20u )
  {
    LODWORD(v2) = 0;
  }
  else
  {
    return a1 << (a2 & 0x1F);
  }
  return v2;
}


/* ============================================
   Address: 0x40E150
   Function: _ungetc
   ============================================ */

int __cdecl ungetc(int Character, FILE *Stream)
{
  int flag; // eax
  char *v3; // edx
  char *v5; // eax
  int v6; // eax

  if ( Character != -1 )
  {
    flag = Stream->_flag;
    if ( (flag & 1) != 0 || (flag & 0x80u) != 0 && (flag & 2) == 0 )
    {
      if ( Stream->_base == nullptr )
        _getbuf(a1: Stream);
      if ( Stream->_ptr != Stream->_base )
        goto LABEL_10;
      if ( Stream->_cnt == 0 )
      {
        ++Stream->_ptr;
LABEL_10:
        if ( (Stream->_flag & 0x40) != 0 )
        {
          v3 = Stream->_ptr - 1;
          Stream->_ptr = v3;
          if ( *v3 != (_BYTE)Character )
          {
            Stream->_ptr = v3 + 1;
            return -1;
          }
        }
        else
        {
          v5 = Stream->_ptr - 1;
          Stream->_ptr = v5;
          *v5 = Character;
        }
        v6 = Stream->_flag;
        LOBYTE(v6) = v6 & 0xEE | 1;
        ++Stream->_cnt;
        Stream->_flag = v6;
        return (unsigned __int8)Character;
      }
    }
  }
  return -1;
}


/* ============================================
   Address: 0x40E1E0
   Function: ___initstdio
   ============================================ */

int __initstdio()
{
  size_t v0; // eax
  char *v1; // eax
  int v2; // edx
  _UNKNOWN **v3; // ecx
  int v4; // ecx
  _DWORD *v5; // edx
  int result; // eax

  v0 = Count;
  if ( Count == 0 )
  {
    v0 = 512;
LABEL_5:
    Count = v0;
    goto LABEL_6;
  }
  if ( (int)Count < 20 )
  {
    v0 = 20;
    goto LABEL_5;
  }
LABEL_6:
  v1 = (char *)calloc(Count: v0, Size: 4u);
  dword_42FFE4 = (int)v1;
  if ( v1 == nullptr )
  {
    Count = 20;
    v1 = (char *)calloc(Count: 0x14u, Size: 4u);
    dword_42FFE4 = (int)v1;
    if ( v1 == nullptr )
      _amsg_exit(a1: 26);
  }
  v2 = 0;
  v3 = &off_42A580;
  while ( 1 )
  {
    *(_DWORD *)&v1[v2] = v3;
    v3 += 8;
    v2 += 4;
    if ( (int)v3 >= (int)&dword_42A800 )
      break;
    v1 = (char *)dword_42FFE4;
  }
  v4 = 0;
  v5 = &unk_42A590;
  do
  {
    result = *(_DWORD *)(dword_431020[v4 >> 5] + 36 * (v4 & 0x1F));
    if ( result == -1 || result == 0 )
      *v5 = -1;
    v5 += 8;
    ++v4;
  }
  while ( (int)v5 < (int)dword_42A5F0 );
  return result;
}


/* ============================================
   Address: 0x40E2A0
   Function: ___endstdio
   ============================================ */

char __endstdio()
{
  char result; // al

  _flushall();
  result = byte_42FB58;
  if ( byte_42FB58 != 0 )
    return _fcloseall();
  return result;
}


/* ============================================
   Address: 0x40E2C0
   Function: __getbuf
   ============================================ */

char __cdecl _getbuf(_DWORD *a1)
{
  void *v1; // eax
  bool v2; // zf
  int v3; // eax
  int v4; // edx

  ++dword_42FF44;
  v1 = malloc(Size: 0x1000u);
  v2 = v1 == nullptr;
  a1[2] = v1;
  v3 = a1[3];
  if ( v2 )
  {
    LOBYTE(v3) = v3 | 4;
    a1[6] = 2;
    a1[3] = v3;
    LOBYTE(v3) = (_BYTE)a1 + 20;
    a1[2] = a1 + 5;
    *a1 = a1 + 5;
  }
  else
  {
    v4 = a1[2];
    LOBYTE(v3) = v3 | 8;
    a1[3] = v3;
    a1[6] = 4096;
    *a1 = v4;
  }
  a1[1] = 0;
  return v3;
}


/* ============================================
   Address: 0x40E320
   Function: __sopen
   ============================================ */

int _sopen(const char *FileName, int OpenFlag, int ShareFlag, ...)
{
  DWORD v3; // ebx
  unsigned int v4; // eax
  DWORD v5; // ebp
  DWORD v6; // edi
  int v7; // esi
  HANDLE v9; // eax
  void *v10; // edi
  DWORD FileType; // eax
  DWORD LastError; // eax
  char v13; // al
  int v14; // edi
  LONG v15; // ebp
  char v16; // [esp+13h] [ebp-11h]
  DWORD dwDesiredAccess; // [esp+14h] [ebp-10h]
  struct _SECURITY_ATTRIBUTES SecurityAttributes; // [esp+18h] [ebp-Ch] BYREF
  int v19; // [esp+34h] [ebp+10h]
  va_list va; // [esp+38h] [ebp+14h] BYREF

  va_start(va, ShareFlag);
  v19 = va_arg(va, _DWORD);
  SecurityAttributes.nLength = 12;
  SecurityAttributes.lpSecurityDescriptor = nullptr;
  if ( (OpenFlag & 0x80u) == 0 )
  {
    SecurityAttributes.bInheritHandle = true;
    v16 = 0;
  }
  else
  {
    SecurityAttributes.bInheritHandle = false;
    v16 = 16;
  }
  if ( (OpenFlag & 0x8000) == 0 && ((OpenFlag & 0x4000) != 0 || dword_42FFA0 != 0x8000) )
    v16 |= 0x80u;
  if ( (OpenFlag & 3) != 0 )
  {
    if ( (OpenFlag & 3) == 1 )
    {
      dwDesiredAccess = 0x40000000;
    }
    else
    {
      if ( (OpenFlag & 3) != 2 )
        goto LABEL_74;
      dwDesiredAccess = -1073741824;
    }
  }
  else
  {
    dwDesiredAccess = 0x80000000;
  }
  switch ( ShareFlag )
  {
    case 16:
      v3 = 0;
      break;
    case 32:
      v3 = 1;
      break;
    case 48:
      v3 = 2;
      break;
    case 64:
      v3 = 3;
      break;
    default:
      goto LABEL_74;
  }
  v4 = OpenFlag & 0x700;
  if ( v4 > 0x100 )
  {
    if ( (OpenFlag & 0x700u) <= 0x300 )
    {
      if ( v4 == 768 )
      {
        v5 = 2;
        goto LABEL_37;
      }
      if ( v4 != 512 )
        goto LABEL_74;
LABEL_36:
      v5 = 5;
      goto LABEL_37;
    }
    if ( (OpenFlag & 0x700u) > 0x500 )
    {
      if ( v4 == 1536 )
        goto LABEL_36;
      if ( v4 != 1792 )
      {
LABEL_74:
        *_errno() = 22;
        *__doserrno() = 0;
        return -1;
      }
    }
    else if ( v4 != 1280 )
    {
      if ( v4 == 1024 )
      {
LABEL_32:
        v5 = 3;
        goto LABEL_37;
      }
      goto LABEL_74;
    }
    v5 = 1;
    goto LABEL_37;
  }
  if ( v4 != 256 )
  {
    if ( (OpenFlag & 0x700) != 0 )
      goto LABEL_74;
    goto LABEL_32;
  }
  v5 = 4;
LABEL_37:
  v6 = 128;
  if ( (OpenFlag & 0x100) != 0 && ((unsigned __int8)~(_BYTE)dword_42FB20 & (unsigned __int8)v19 & 0x80) == 0 )
    v6 = 1;
  if ( (OpenFlag & 0x40) != 0 )
  {
    v6 |= 0x4000000u;
    dwDesiredAccess |= 0x10000u;
  }
  if ( (OpenFlag & 0x1000) != 0 )
    v6 |= 0x100u;
  if ( (OpenFlag & 0x20) != 0 )
  {
    v6 |= 0x8000000u;
  }
  else if ( (OpenFlag & 0x10) != 0 )
  {
    v6 |= 0x10000000u;
  }
  v7 = _alloc_osfhnd();
  if ( v7 == -1 )
  {
    *_errno() = 24;
    *__doserrno() = 0;
    return -1;
  }
  v9 = CreateFileA(
         lpFileName: FileName,
         dwDesiredAccess,
         dwShareMode: v3,
         lpSecurityAttributes: &SecurityAttributes,
         dwCreationDisposition: v5,
         dwFlagsAndAttributes: v6,
         hTemplateFile: nullptr);
  v10 = v9;
  if ( v9 == (HANDLE)-1 )
    goto LABEL_53;
  FileType = GetFileType(hFile: v9);
  switch ( FileType )
  {
    case 0u:
      CloseHandle(hObject: v10);
LABEL_53:
      LastError = GetLastError();
      _dosmaperr(a1: LastError);
      _unlock_fhandle(a1: v7);
      return -1;
    case 2u:
      v13 = v16 | 0x40;
LABEL_58:
      v16 = v13;
      break;
    case 3u:
      v13 = v16 | 8;
      goto LABEL_58;
    default:
      break;
  }
  _set_osfhnd(a1: v7, hHandle: v10);
  v14 = 36 * (v7 & 0x1F);
  *(_BYTE *)(v14 + dword_431020[v7 >> 5] + 4) = v16 | 1;
  if ( (v16 & 0x48) == 0 && v16 < 0 && (OpenFlag & 2) != 0 )
  {
    v15 = _lseek_lk(FileHandle: v7, lDistanceToMove: -1, dwMoveMethod: 2u);
    if ( v15 == -1 )
    {
      if ( *__doserrno() != 131 )
      {
LABEL_69:
        _close(FileHandle: v7);
        _unlock_fhandle(a1: v7);
        return -1;
      }
    }
    else
    {
      LOBYTE(ShareFlag) = 0;
      if ( _read_lk(FileHandle: v7, lpBuffer: (char *)&ShareFlag, nNumberOfBytesToRead: 1u) == 0
        && (_BYTE)ShareFlag == 26
        && _chsize_lk(FileHandle: v7, a2: v15) == -1
        || _lseek_lk(FileHandle: v7, lDistanceToMove: 0, dwMoveMethod: 0) == -1 )
      {
        goto LABEL_69;
      }
    }
  }
  if ( (v16 & 0x48) == 0 && (OpenFlag & 8) != 0 )
    *(_BYTE *)(v14 + dword_431020[v7 >> 5] + 4) |= 0x20u;
  _unlock_fhandle(a1: v7);
  return v7;
}


/* ============================================
   Address: 0x40E6C0
   Function: __control87
   ============================================ */

unsigned int __cdecl _control87(unsigned int NewValue, unsigned int Mask)
{
  unsigned int v2; // esi

  v2 = _abstract_cw() & ~Mask | NewValue & Mask;
  _hw_cw(a1: v2);
  return v2;
}


/* ============================================
   Address: 0x40E700
   Function: __controlfp
   ============================================ */

unsigned int __cdecl _controlfp(unsigned int NewValue, unsigned int Mask)
{
  return _control87(NewValue, Mask: Mask & 0xFFF7FFFF);
}


/* ============================================
   Address: 0x40E720
   Function: __abstract_cw
   ============================================ */

char __cdecl _abstract_cw(char a1)
{
  char result; // al

  result = 0;
  if ( (a1 & 1) != 0 )
    result = 16;
  if ( (a1 & 4) != 0 )
    result |= 8u;
  if ( (a1 & 8) != 0 )
    result |= 4u;
  if ( (a1 & 0x10) != 0 )
    result |= 2u;
  if ( (a1 & 0x20) != 0 )
    return result | 1;
  return result;
}


/* ============================================
   Address: 0x40E7C0
   Function: __hw_cw
   ============================================ */

char __cdecl _hw_cw(int a1)
{
  char result; // al

  result = (a1 & 0x10) != 0;
  if ( (a1 & 8) != 0 )
    result |= 4u;
  if ( (a1 & 4) != 0 )
    result |= 8u;
  if ( (a1 & 2) != 0 )
    result |= 0x10u;
  if ( (a1 & 1) != 0 )
    result |= 0x20u;
  if ( (a1 & 0x80000) != 0 )
    return result | 2;
  return result;
}


/* ============================================
   Address: 0x40E850
   Function: __ZeroTail
   ============================================ */

int __cdecl _ZeroTail(int a1, int a2)
{
  int v3; // esi
  _DWORD *i; // eax

  if ( (~(-1 << (31 - a2 % 32)) & *(_DWORD *)(a1 + 4 * (a2 / 32))) != 0 )
    return 0;
  v3 = a2 / 32 + 1;
  if ( v3 >= 3 )
    return 1;
  for ( i = (_DWORD *)(a1 + 4 * v3); *i == 0; ++i )
  {
    if ( ++v3 >= 3 )
      return 1;
  }
  return 0;
}


/* ============================================
   Address: 0x40E8C0
   Function: __IncMan
   ============================================ */

int __cdecl _IncMan(int a1, int a2)
{
  int result; // eax
  int v3; // esi
  _DWORD *v4; // edi

  result = __addl(a1: *(_DWORD *)(a1 + 4 * (a2 / 32)), a2: 1 << (31 - a2 % 32), a3: a1 + 4 * (a2 / 32));
  v3 = a2 / 32 - 1;
  if ( v3 >= 0 )
  {
    v4 = (_DWORD *)(a1 + 4 * v3);
    do
    {
      if ( result == 0 )
        break;
      result = __addl(a1: *v4, a2: 1, a3: v4);
      --v3;
      --v4;
    }
    while ( v3 >= 0 );
  }
  return result;
}


/* ============================================
   Address: 0x40E930
   Function: __RoundMan
   ============================================ */

int __cdecl _RoundMan(int a1, int a2)
{
  char v2; // di
  int v3; // esi
  int v4; // edx
  int v5; // esi
  int v7; // [esp+1Ch] [ebp+8h]

  v7 = a2 - 1;
  v2 = 31 - (v7 + 1) % 32;
  v3 = (v7 + 1) / 32;
  if ( ((1 << v2) & *(_DWORD *)(a1 + 4 * v3)) == 0 || _ZeroTail(a1, a2: v7 + 2) != 0 )
    v4 = 0;
  else
    v4 = _IncMan(a1, a2: v7);
  *(_DWORD *)(a1 + 4 * v3) &= -1 << v2;
  v5 = v3 + 1;
  if ( v5 < 3 )
    memset((void *)(a1 + 4 * v5), 0, 4 * (3 - v5));
  return v4;
}


/* ============================================
   Address: 0x40E9D0
   Function: __CopyMan
   ============================================ */

_DWORD *__cdecl _CopyMan(int a1, _DWORD *a2)
{
  _DWORD *result; // eax
  int i; // edx

  result = a2;
  for ( i = 3; i != 0; --i )
  {
    *(_DWORD *)((char *)result + a1 - (_DWORD)a2) = *result;
    ++result;
  }
  return result;
}


/* ============================================
   Address: 0x40E9F0
   Function: __FillZeroMan
   ============================================ */

int __cdecl _FillZeroMan(_DWORD *a1)
{
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  return 0;
}


/* ============================================
   Address: 0x40EA00
   Function: __IsZeroMan
   ============================================ */

int __cdecl _IsZeroMan(_DWORD *a1)
{
  int v2; // eax

  v2 = 0;
  while ( *a1 == 0 )
  {
    ++v2;
    ++a1;
    if ( v2 >= 3 )
      return 1;
  }
  return 0;
}


/* ============================================
   Address: 0x40EA20
   Function: __ShrMan
   ============================================ */

int __cdecl _ShrMan(unsigned int *a1, int a2)
{
  unsigned int *v2; // esi
  int v3; // ebx
  int result; // eax
  unsigned int v5; // edx
  int v6; // ecx
  int v7; // edx
  int v8; // esi
  int j; // ecx
  int v10; // [esp+14h] [ebp-4h]
  int i; // [esp+20h] [ebp+8h]

  v10 = a2 / 32;
  v2 = a1;
  v3 = 0;
  result = a2 % 32;
  for ( i = 3; i != 0; --i )
  {
    v5 = *v2;
    v6 = *v2++ & ~(-1 << result);
    v7 = v3 | (v5 >> result);
    v3 = v6 << (32 - result);
    *(v2 - 1) = v7;
  }
  v8 = 2;
  for ( j = 2; j >= 0; --j )
  {
    if ( v8 < v10 )
    {
      a1[j] = 0;
    }
    else
    {
      result = *(unsigned int *)((char *)a1 + j * 4 - 4 * v10);
      a1[j] = result;
    }
    --v8;
  }
  return result;
}


/* ============================================
   Address: 0x40EAE0
   Function: __ld12cvt
   ============================================ */

int __cdecl _ld12cvt(unsigned __int16 *a1, unsigned int *a2, int *a3)
{
  unsigned int v3; // edx
  unsigned __int16 v4; // bx
  int v5; // ebp
  int v6; // ebx
  int v7; // eax
  int v8; // esi
  int result; // eax
  int v10; // eax
  int v11; // esi
  int v12; // edi
  unsigned int v13; // esi
  unsigned int v14; // edx
  int v15; // [esp-4h] [ebp-2Ch]
  int v16; // [esp-4h] [ebp-2Ch]
  unsigned int v17; // [esp+10h] [ebp-18h] BYREF
  unsigned int v18; // [esp+14h] [ebp-14h]
  int v19; // [esp+18h] [ebp-10h]
  _DWORD v20[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v3 = *(_DWORD *)(a1 + 1);
  v4 = a1[5];
  v5 = v4 & 0x8000;
  v17 = *(_DWORD *)(a1 + 3);
  v6 = (v4 & 0x7FFF) - 0x3FFF;
  v7 = *a1 << 16;
  v18 = v3;
  v19 = v7;
  if ( v6 == -16383 )
  {
    v8 = 0;
    if ( _IsZeroMan(a1: &v17) == 0 )
    {
      _FillZeroMan(a1: &v17);
      result = 2;
      goto LABEL_14;
    }
  }
  else
  {
    _CopyMan(a1: (int)v20, a2: &v17);
    if ( _RoundMan(a1: (int)&v17, a2: a3[2]) != 0 )
      ++v6;
    v10 = a3[1];
    if ( v6 < v10 - a3[2] )
    {
      _FillZeroMan(a1: &v17);
      v8 = 0;
      result = 2;
      goto LABEL_14;
    }
    if ( v6 <= v10 )
    {
      v11 = v10 - v6;
      _CopyMan(a1: (int)&v17, a2: v20);
      _ShrMan(a1: &v17, a2: v11);
      _RoundMan(a1: (int)&v17, a2: a3[2]);
      _ShrMan(a1: &v17, a2: a3[3] + 1);
      v8 = 0;
      result = 2;
      goto LABEL_14;
    }
    if ( v6 >= *a3 )
    {
      _FillZeroMan(a1: &v17);
      v15 = a3[3];
      v17 |= 0x80000000;
      _ShrMan(a1: &v17, a2: v15);
      v8 = *a3 + a3[5];
      result = 1;
      goto LABEL_14;
    }
    v8 = v6 + a3[5];
    v16 = a3[3];
    v17 &= ~0x80000000;
    _ShrMan(a1: &v17, a2: v16);
  }
  result = 0;
LABEL_14:
  v12 = a3[4];
  v13 = v17 | (v5 != 0 ? 0x80000000 : 0) | (v8 << (31 - *((_BYTE *)a3 + 12)));
  if ( v12 == 64 )
  {
    v14 = v18;
    a2[1] = v13;
    *a2 = v14;
  }
  else if ( v12 == 32 )
  {
    *a2 = v13;
  }
  return result;
}


/* ============================================
   Address: 0x40ECB0
   Function: sub_40ECB0
   ============================================ */

int __cdecl sub_40ECB0(unsigned __int16 *a1, unsigned int *a2)
{
  return _ld12cvt(a1, a2, a3: dword_42A800);
}


/* ============================================
   Address: 0x40ECD0
   Function: sub_40ECD0
   ============================================ */

int __cdecl sub_40ECD0(unsigned __int16 *a1, unsigned int *a2)
{
  return _ld12cvt(a1, a2, a3: dword_42A818);
}


/* ============================================
   Address: 0x40ECF0
   Function: sub_40ECF0
   ============================================ */

int __cdecl sub_40ECF0(unsigned int *a1, int a2)
{
  unsigned __int16 v3[6]; // [esp+0h] [ebp-Ch] BYREF

  __strgtold12(a1: v3, &a2, a3: a2, a4: 0, a5: 0, a6: 0, a7: 0);
  return sub_40ECB0(a1: v3, a2: a1);
}


/* ============================================
   Address: 0x40ED30
   Function: sub_40ED30
   ============================================ */

int __cdecl sub_40ED30(unsigned int *a1, int a2)
{
  unsigned __int16 v3[6]; // [esp+0h] [ebp-Ch] BYREF

  __strgtold12(a1: v3, &a2, a3: a2, a4: 0, a5: 0, a6: 0, a7: 0);
  return sub_40ECD0(a1: v3, a2: a1);
}


/* ============================================
   Address: 0x40ED70
   Function: __fptostr
   ============================================ */

char *__cdecl _fptostr(char *a1, int a2, int a3)
{
  int v3; // ecx
  char *v4; // edx
  int v5; // esi
  const char *v6; // edi
  char *result; // eax
  int i; // ebx
  char v9; // cl
  char v10; // dl
  char v11; // dl

  v3 = a3;
  v4 = *(char **)(a3 + 12);
  v5 = a2;
  v6 = a1 + 1;
  *a1 = 48;
  result = a1 + 1;
  if ( a2 > 0 )
  {
    for ( i = a2; i != 0; --i )
    {
      v9 = *v4;
      if ( *v4 != 0 )
        ++v4;
      else
        v9 = 48;
      *result++ = v9;
      --v5;
    }
    v3 = a3;
  }
  *result = 0;
  if ( v5 >= 0 && *v4 >= 53 )
  {
    v10 = *--result;
    if ( v10 == 57 )
    {
      do
      {
        *result = 48;
        v11 = *--result;
      }
      while ( v11 == 57 );
    }
    ++*result;
  }
  if ( *a1 == 49 )
  {
    ++*(_DWORD *)(v3 + 4);
  }
  else
  {
    result = (char *)(strlen(v6) + 1);
    qmemcpy(a1, v6, (unsigned int)result);
  }
  return result;
}


/* ============================================
   Address: 0x40EE10
   Function: __fltout2
   ============================================ */

_DWORD *__cdecl _fltout2(char a1, int a2, _DWORD *a3, char *a4)
{
  int v4; // eax
  _DWORD *v5; // edx
  int v6; // ecx
  _DWORD v8[2]; // [esp+Ch] [ebp-28h] BYREF
  __int16 v9; // [esp+14h] [ebp-20h]
  __int16 v10; // [esp+18h] [ebp-1Ch] BYREF
  char v11; // [esp+1Ah] [ebp-1Ah]
  char v12[24]; // [esp+1Ch] [ebp-18h] BYREF

  __dtold(a1: v8, a2: &a1);
  v4 = _I10_OUTPUT(a1: v8[0], a2: v8[1], a3: v9, a4: 17, a5: 0, a6: &v10);
  v5 = a3;
  v6 = v10;
  a3[2] = v4;
  v5[1] = v6;
  *v5 = v11;
  v5[3] = strcpy(a4, v12);
  return v5;
}


/* ============================================
   Address: 0x40EEA0
   Function: ___dtold
   ============================================ */

int __cdecl __dtold(int a1, int *a2)
{
  unsigned int v2; // ecx
  unsigned int v3; // ebx
  unsigned int v4; // edi
  int v5; // eax
  __int16 v6; // bp
  int v7; // edx
  __int16 v8; // si
  int result; // eax
  int v10; // ecx
  int v11; // edx

  v3 = 0x80000000;
  LOWORD(v2) = *((_WORD *)a2 + 3);
  v4 = *a2;
  v5 = (v2 >> 4) & 0x7FF;
  v6 = v2 & 0x8000;
  v7 = a2[1] & 0xFFFFF;
  if ( (_WORD)v5 != 0 )
  {
    if ( ((v2 >> 4) & 0x7FF) == 0x7FF )
      v8 = 0x7FFF;
    else
      v8 = v5 + 15360;
  }
  else
  {
    v3 = 0;
    if ( v7 == 0 && v4 == 0 )
    {
      *(_DWORD *)(a1 + 4) = 0;
      *(_DWORD *)a1 = 0;
      *(_WORD *)(a1 + 8) = 0;
      return a1;
    }
    v8 = v5 + 15361;
  }
  result = a1;
  v10 = v3 | (v7 << 11) | (v4 >> 21);
  *(_DWORD *)(a1 + 4) = v10;
  for ( *(_DWORD *)a1 = v4 << 11; v10 >= 0; *(_DWORD *)a1 = v11 )
  {
    v11 = 2 * *(_DWORD *)a1;
    --v8;
    v10 = (2 * v10) | (*(_DWORD *)a1 >> 31);
    *(_DWORD *)(a1 + 4) = v10;
  }
  *(_WORD *)(a1 + 8) = v6 | v8;
  return result;
}


/* ============================================
   Address: 0x40EF60
   Function: __fptrap
   ============================================ */

void __noreturn _fptrap()
{
  _amsg_exit(a1: 2);
}


/* ============================================
   Address: 0x40EF70
   Function: __alloc_osfhnd
   ============================================ */

int _alloc_osfhnd()
{
  int v0; // edi
  int v1; // ebx
  unsigned int *v2; // ebp
  unsigned int v3; // esi
  char *v4; // eax
  UINT v5; // ebx
  int v7; // [esp+10h] [ebp-8h]
  int v8; // [esp+14h] [ebp-4h]

  v7 = -1;
  _lock(a1: 18);
  v0 = 0;
  v8 = 0;
  v1 = 0;
  v2 = (unsigned int *)dword_431020;
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == 0 )
      break;
    if ( v3 < v3 + 1152 )
    {
      do
      {
        if ( (*(_BYTE *)(v3 + 4) & 1) == 0 )
        {
          if ( *(_DWORD *)(v3 + 8) == 0 )
          {
            _lock(a1: 17);
            if ( *(_DWORD *)(v3 + 8) == 0 )
            {
              InitializeCriticalSection(lpCriticalSection: (LPCRITICAL_SECTION)(v3 + 12));
              ++*(_DWORD *)(v3 + 8);
            }
            _unlock(a1: 17);
          }
          EnterCriticalSection(lpCriticalSection: (LPCRITICAL_SECTION)(v3 + 12));
          if ( (*(_BYTE *)(v3 + 4) & 1) == 0 )
          {
            *(_DWORD *)v3 = -1;
            v7 = v1 + (int)(v3 - *v2) / 36;
            break;
          }
          LeaveCriticalSection(lpCriticalSection: (LPCRITICAL_SECTION)(v3 + 12));
        }
        v3 += 36;
      }
      while ( v3 < *v2 + 1152 );
    }
    if ( v7 == -1 )
    {
      ++v2;
      v0 = v8 + 1;
      v1 += 32;
      ++v8;
      if ( (int)v2 < (int)&uNumber )
        continue;
    }
    goto LABEL_21;
  }
  v4 = (char *)malloc(Size: 0x480u);
  if ( v4 != nullptr )
  {
    v5 = uNumber + 32;
    dword_431020[v0] = (int)v4;
    uNumber = v5;
    if ( v4 < v4 + 1152 )
    {
      do
      {
        v4[4] = 0;
        *(_DWORD *)v4 = -1;
        v4[5] = 10;
        *((_DWORD *)v4 + 2) = 0;
        v4 += 36;
      }
      while ( (unsigned int)v4 < dword_431020[v0] + 1152 );
    }
    v7 = 32 * v0;
    _lock_fhandle(a1: 32 * v0);
  }
LABEL_21:
  _unlock(a1: 18);
  return v7;
}


/* ============================================
   Address: 0x40F0E0
   Function: __set_osfhnd
   ============================================ */

int __cdecl _set_osfhnd(int a1, HANDLE hHandle)
{
  if ( a1 < uNumber && *(_DWORD *)(dword_431020[a1 >> 5] + 36 * (a1 & 0x1F)) == -1 )
  {
    if ( dword_427B24 == 1 )
    {
      if ( a1 != 0 )
      {
        if ( a1 == 1 )
        {
          SetStdHandle(nStdHandle: 0xFFFFFFF5, hHandle);
          *(_DWORD *)(dword_431020[0] + 36) = hHandle;
          return 0;
        }
        if ( a1 == 2 )
        {
          SetStdHandle(nStdHandle: 0xFFFFFFF4, hHandle);
          *(_DWORD *)(dword_431020[0] + 72) = hHandle;
          return 0;
        }
      }
      else
      {
        SetStdHandle(nStdHandle: 0xFFFFFFF6, hHandle);
      }
    }
    *(_DWORD *)(dword_431020[a1 >> 5] + 36 * (a1 & 0x1F)) = hHandle;
    return 0;
  }
  else
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
}


/* ============================================
   Address: 0x40F190
   Function: __free_osfhnd
   ============================================ */

int __cdecl _free_osfhnd(int a1)
{
  _DWORD *v1; // eax

  if ( a1 >= uNumber || ((v1 = (_DWORD *)(dword_431020[a1 >> 5] + 36 * (a1 & 0x1F)))[1] & 1) == 0 || *v1 == -1 )
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
  else
  {
    if ( dword_427B24 == 1 )
    {
      if ( a1 != 0 )
      {
        if ( a1 == 1 )
        {
          SetStdHandle(nStdHandle: 0xFFFFFFF5, hHandle: nullptr);
        }
        else if ( a1 == 2 )
        {
          SetStdHandle(nStdHandle: 0xFFFFFFF4, hHandle: nullptr);
        }
      }
      else
      {
        SetStdHandle(nStdHandle: 0xFFFFFFF6, hHandle: nullptr);
      }
    }
    *(_DWORD *)(dword_431020[a1 >> 5] + 36 * (a1 & 0x1F)) = -1;
    return 0;
  }
}


/* ============================================
   Address: 0x40F230
   Function: __get_osfhandle
   ============================================ */

intptr_t __cdecl _get_osfhandle(int FileHandle)
{
  int v1; // eax
  char v2; // cl
  intptr_t *v3; // eax

  if ( FileHandle < uNumber )
  {
    v1 = dword_431020[FileHandle >> 5];
    v2 = *(_BYTE *)(v1 + 36 * (FileHandle & 0x1F) + 4);
    v3 = (intptr_t *)(v1 + 36 * (FileHandle & 0x1F));
    if ( (v2 & 1) != 0 )
      return *v3;
  }
  *_errno() = 9;
  *__doserrno() = 0;
  return -1;
}


/* ============================================
   Address: 0x40F280
   Function: __lock_fhandle
   ============================================ */

void __cdecl _lock_fhandle(int a1)
{
  int v1; // edi
  int v2; // esi

  v1 = 36 * (a1 & 0x1F);
  v2 = v1 + dword_431020[a1 >> 5];
  if ( *(_DWORD *)(v2 + 8) == 0 )
  {
    _lock(a1: 17);
    if ( *(_DWORD *)(v2 + 8) == 0 )
    {
      InitializeCriticalSection(lpCriticalSection: (LPCRITICAL_SECTION)(v2 + 12));
      ++*(_DWORD *)(v2 + 8);
    }
    _unlock(a1: 17);
  }
  EnterCriticalSection(lpCriticalSection: (LPCRITICAL_SECTION)(dword_431020[a1 >> 5] + v1 + 12));
}


/* ============================================
   Address: 0x40F2F0
   Function: __unlock_fhandle
   ============================================ */

void __cdecl _unlock_fhandle(int a1)
{
  LeaveCriticalSection(lpCriticalSection: (LPCRITICAL_SECTION)(dword_431020[a1 >> 5] + 36 * (a1 & 0x1F) + 12));
}


/* ============================================
   Address: 0x40F320
   Function: __commit
   ============================================ */

int __cdecl _commit(int FileHandle)
{
  int v1; // esi
  void *osfhandle; // eax
  DWORD LastError; // esi

  if ( FileHandle < uNumber )
  {
    v1 = 36 * (FileHandle & 0x1F);
    if ( (*(_BYTE *)(dword_431020[FileHandle >> 5] + v1 + 4) & 1) != 0 )
    {
      _lock_fhandle(a1: FileHandle);
      if ( (*(_BYTE *)(dword_431020[FileHandle >> 5] + v1 + 4) & 1) != 0 )
      {
        osfhandle = (void *)_get_osfhandle(FileHandle);
        if ( FlushFileBuffers(hFile: osfhandle) )
          LastError = 0;
        else
          LastError = GetLastError();
        if ( LastError == 0 )
          goto LABEL_10;
        *__doserrno() = LastError;
      }
      *_errno() = 9;
      LastError = -1;
LABEL_10:
      _unlock_fhandle(a1: FileHandle);
      return LastError;
    }
  }
  *_errno() = 9;
  return -1;
}


/* ============================================
   Address: 0x40F3C0
   Function: __isatty
   ============================================ */

int __cdecl _isatty(int FileHandle)
{
  if ( FileHandle < uNumber )
    return *(_BYTE *)(dword_431020[FileHandle >> 5] + 36 * (FileHandle & 0x1F) + 4) & 0x40;
  else
    return 0;
}


/* ============================================
   Address: 0x40F3F0
   Function: ___init_time
   ============================================ */

int __init_time()
{
  void *v0; // eax
  void *v1; // esi

  if ( dword_42FD54 != 0 )
  {
    v0 = calloc(Count: 1u, Size: 0xACu);
    v1 = v0;
    if ( v0 != nullptr )
    {
      if ( _get_lc_time(a1: v0) != 0 )
      {
        _free_lc_time(a1: v1);
        free(Block: v1);
        return 1;
      }
      else
      {
        off_427E5C = (_UNKNOWN **)v1;
        _free_lc_time(a1: dword_42FF4C);
        free(Block: dword_42FF4C);
        dword_42FF4C = v1;
        return 0;
      }
    }
    else
    {
      return 1;
    }
  }
  else
  {
    off_427E5C = &off_427DB0;
    _free_lc_time(a1: dword_42FF4C);
    free(Block: dword_42FF4C);
    dword_42FF4C = nullptr;
    return 0;
  }
}


/* ============================================
   Address: 0x40F4A0
   Function: __get_lc_time
   ============================================ */

int __cdecl _get_lc_time(int a1)
{
  LCID v1; // ebx
  LCID v2; // ebp
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // esi
  int v22; // esi
  int v23; // esi
  int v24; // esi
  int v25; // esi
  int v26; // esi
  int v27; // esi
  int v28; // esi
  int v29; // esi
  int v30; // esi
  int v31; // esi
  int v32; // esi
  int v33; // esi
  int v34; // esi
  int v35; // esi
  int v36; // esi
  int v37; // esi
  int v38; // esi
  int v39; // esi
  int v40; // esi
  int v41; // esi
  int v42; // esi
  int v43; // esi
  int v44; // esi
  int v45; // esi

  v1 = (unsigned __int16)word_42FF86;
  v2 = (unsigned __int16)word_42FF88;
  if ( a1 == 0 )
    return -1;
  v4 = __getlocaleinfo(CodePage: 1u, Locale: (unsigned __int16)word_42FF86, LCType: 0x31u, a4: a1 + 4);
  v5 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x32u, a4: a1 + 8) | v4;
  v6 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x33u, a4: a1 + 12) | v5;
  v7 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x34u, a4: a1 + 16) | v6;
  v8 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x35u, a4: a1 + 20) | v7;
  v9 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x36u, a4: a1 + 24) | v8;
  v10 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x37u, a4: a1) | v9;
  v11 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x2Au, a4: a1 + 32) | v10;
  v12 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x2Bu, a4: a1 + 36) | v11;
  v13 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x2Cu, a4: a1 + 40) | v12;
  v14 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x2Du, a4: a1 + 44) | v13;
  v15 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x2Eu, a4: a1 + 48) | v14;
  v16 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x2Fu, a4: a1 + 52) | v15;
  v17 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x30u, a4: a1 + 28) | v16;
  v18 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x44u, a4: a1 + 56) | v17;
  v19 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x45u, a4: a1 + 60) | v18;
  v20 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x46u, a4: a1 + 64) | v19;
  v21 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x47u, a4: a1 + 68) | v20;
  v22 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x48u, a4: a1 + 72) | v21;
  v23 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x49u, a4: a1 + 76) | v22;
  v24 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x4Au, a4: a1 + 80) | v23;
  v25 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x4Bu, a4: a1 + 84) | v24;
  v26 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x4Cu, a4: a1 + 88) | v25;
  v27 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x4Du, a4: a1 + 92) | v26;
  v28 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x4Eu, a4: a1 + 96) | v27;
  v29 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x4Fu, a4: a1 + 100) | v28;
  v30 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x38u, a4: a1 + 104) | v29;
  v31 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x39u, a4: a1 + 108) | v30;
  v32 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x3Au, a4: a1 + 112) | v31;
  v33 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x3Bu, a4: a1 + 116) | v32;
  v34 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x3Cu, a4: a1 + 120) | v33;
  v35 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x3Du, a4: a1 + 124) | v34;
  v36 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x3Eu, a4: a1 + 128) | v35;
  v37 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x3Fu, a4: a1 + 132) | v36;
  v38 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x40u, a4: a1 + 136) | v37;
  v39 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x41u, a4: a1 + 140) | v38;
  v40 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x42u, a4: a1 + 144) | v39;
  v41 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x43u, a4: a1 + 148) | v40;
  v42 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x28u, a4: a1 + 152) | v41;
  v43 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x29u, a4: a1 + 156) | v42;
  v44 = __getlocaleinfo(CodePage: 1u, Locale: v2, LCType: 0x1Fu, a4: a1 + 160) | v43;
  v45 = __getlocaleinfo(CodePage: 1u, Locale: v2, LCType: 0x20u, a4: a1 + 164) | v44;
  return storeTimeFmt(Block: (void *)v2, a2: a1) | v45;
}


/* ============================================
   Address: 0x40F820
   Function: __free_lc_time
   ============================================ */

void __cdecl _free_lc_time(void **a1)
{
  if ( a1 != nullptr )
  {
    free(Block: a1[1]);
    free(Block: a1[2]);
    free(Block: a1[3]);
    free(Block: a1[4]);
    free(Block: a1[5]);
    free(Block: a1[6]);
    free(Block: *a1);
    free(Block: a1[8]);
    free(Block: a1[9]);
    free(Block: a1[10]);
    free(Block: a1[11]);
    free(Block: a1[12]);
    free(Block: a1[13]);
    free(Block: a1[7]);
    free(Block: a1[14]);
    free(Block: a1[15]);
    free(Block: a1[16]);
    free(Block: a1[17]);
    free(Block: a1[18]);
    free(Block: a1[19]);
    free(Block: a1[20]);
    free(Block: a1[21]);
    free(Block: a1[22]);
    free(Block: a1[23]);
    free(Block: a1[24]);
    free(Block: a1[25]);
    free(Block: a1[26]);
    free(Block: a1[27]);
    free(Block: a1[28]);
    free(Block: a1[29]);
    free(Block: a1[30]);
    free(Block: a1[31]);
    free(Block: a1[32]);
    free(Block: a1[33]);
    free(Block: a1[34]);
    free(Block: a1[35]);
    free(Block: a1[36]);
    free(Block: a1[37]);
    free(Block: a1[38]);
    free(Block: a1[39]);
    free(Block: a1[40]);
    free(Block: a1[41]);
    free(Block: a1[42]);
  }
}


/* ============================================
   Address: 0x40FA60
   Function: _storeTimeFmt
   ============================================ */

int __cdecl storeTimeFmt(_BYTE *Block, int a2)
{
  LCID v2; // edi
  int v3; // esi
  int v4; // esi
  int v5; // esi
  _BYTE *v7; // eax
  _BYTE *v8; // eax
  _BYTE *v9; // edx
  char i; // cl
  _BYTE *v11; // eax
  _BYTE *v12; // edx
  char j; // cl
  _BYTE *v14; // eax
  int v15; // [esp+8h] [ebp-8h] BYREF
  int v16; // [esp+Ch] [ebp-4h] BYREF

  v2 = (LCID)Block;
  v16 = 0;
  v15 = 0;
  v3 = __getlocaleinfo(CodePage: 0, Locale: (LCID)Block, LCType: 0x23u, a4: (int)&v16);
  v4 = __getlocaleinfo(CodePage: 0, Locale: v2, LCType: 0x25u, a4: (int)&v15) | v3;
  v5 = __getlocaleinfo(CodePage: 1u, Locale: v2, LCType: 0x1Eu, a4: (int)&Block) | v4;
  if ( v5 != 0 )
    return v5;
  v7 = malloc(Size: 0xDu);
  *(_DWORD *)(a2 + 168) = v7;
  if ( v16 != 0 )
  {
    *v7 = 72;
    v8 = v7 + 1;
    if ( v15 != 0 )
    {
      *v8 = 72;
LABEL_8:
      ++v8;
    }
  }
  else
  {
    *v7 = 104;
    v8 = v7 + 1;
    if ( v15 != 0 )
    {
      *v8 = 104;
      goto LABEL_8;
    }
  }
  v9 = Block;
  for ( i = *Block; i != 0; ++v9 )
  {
    *v8 = i;
    i = v9[1];
    ++v8;
  }
  *v8 = 109;
  v11 = v8 + 1;
  if ( v15 != 0 )
    *v11++ = 109;
  v12 = Block;
  for ( j = *Block; j != 0; ++v12 )
  {
    *v11 = j;
    j = v12[1];
    ++v11;
  }
  *v11 = 115;
  v14 = v11 + 1;
  *v14 = 115;
  v14[1] = 0;
  free(Block);
  return 0;
}


/* ============================================
   Address: 0x40FB60
   Function: ___init_numeric
   ============================================ */

int __init_numeric()
{
  LCID v0; // esi
  int v1; // edi
  int v2; // edi
  int v3; // edi
  _BYTE *v5; // eax
  _BYTE *v6; // eax
  char v7; // dl

  v0 = (unsigned __int16)word_42FF82;
  if ( dword_42FD50 != 0 )
  {
    v1 = __getlocaleinfo(CodePage: 1u, Locale: (unsigned __int16)word_42FF82, LCType: 0xEu, a4: (int)&dword_42FF50);
    v2 = __getlocaleinfo(CodePage: 1u, Locale: v0, LCType: 0xFu, a4: (int)&dword_42FF54) | v1;
    v3 = __getlocaleinfo(CodePage: 1u, Locale: v0, LCType: 0x10u, a4: (int)&dword_42FF58) | v2;
    fix_grouping(a1: dword_42FF58);
    if ( v3 != 0 )
    {
      free(Block: dword_42FF50);
      free(Block: dword_42FF54);
      free(Block: dword_42FF58);
      dword_42FF50 = nullptr;
      dword_42FF54 = nullptr;
      dword_42FF58 = nullptr;
      return -1;
    }
    if ( *off_42B068 != &unk_42B030 )
    {
      free(Block: *off_42B068);
      free(Block: off_42B068[1]);
      free(Block: off_42B068[2]);
    }
    *off_42B068 = dword_42FF50;
    off_42B068[1] = dword_42FF54;
    off_42B068[2] = dword_42FF58;
  }
  else
  {
    free(Block: dword_42FF50);
    free(Block: dword_42FF54);
    free(Block: dword_42FF58);
    dword_42FF50 = nullptr;
    dword_42FF54 = nullptr;
    dword_42FF58 = nullptr;
    *off_42B068 = malloc(Size: 2u);
    if ( *off_42B068 == nullptr )
      return -1;
    *(_WORD *)*off_42B068 = 46;
    off_42B068[1] = malloc(Size: 2u);
    v5 = off_42B068[1];
    if ( v5 == nullptr )
      return -1;
    *v5 = 0;
    off_42B068[2] = malloc(Size: 2u);
    v6 = off_42B068[2];
    if ( v6 == nullptr )
      return -1;
    *v6 = 0;
  }
  v7 = *(_BYTE *)*off_42B068;
  dword_4282E4 = 1;
  byte_4282E0 = v7;
  return 0;
}


/* ============================================
   Address: 0x40FD60
   Function: ___init_monetary
   ============================================ */

int __init_monetary()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi

  if ( dword_42FD4C != 0 )
  {
    v0 = calloc(Count: 1u, Size: 0x30u);
    v1 = v0;
    if ( v0 != nullptr )
    {
      if ( _get_lc_lconv(a1: v0) != 0 )
      {
        _free_lc_lconv(a1: v1);
        free(Block: v1);
        return 1;
      }
      else
      {
        *v1 = *off_42B068;
        v1[1] = off_42B068[1];
        v1[2] = off_42B068[2];
        off_42B068 = (_UNKNOWN **)v1;
        _free_lc_lconv(a1: dword_42FF5C);
        free(Block: dword_42FF5C);
        dword_42FF5C = v1;
        return 0;
      }
    }
    else
    {
      return 1;
    }
  }
  else
  {
    off_42B038 = *off_42B068;
    off_42B03C = off_42B068[1];
    off_42B040 = off_42B068[2];
    off_42B068 = &off_42B038;
    _free_lc_lconv(a1: dword_42FF5C);
    free(Block: dword_42FF5C);
    dword_42FF5C = nullptr;
    return 0;
  }
}


/* ============================================
   Address: 0x40FE50
   Function: __get_lc_lconv
   ============================================ */

int __cdecl _get_lc_lconv(int a1)
{
  LCID v1; // esi
  int v3; // edi
  int v4; // edi
  int v5; // edi
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi

  v1 = (unsigned __int16)word_42FF7C;
  if ( a1 == 0 )
    return -1;
  v3 = __getlocaleinfo(CodePage: 1u, Locale: (unsigned __int16)word_42FF7C, LCType: 0x15u, a4: a1 + 12);
  v4 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x14u, a4: a1 + 16) | v3;
  v5 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x16u, a4: a1 + 20) | v4;
  v6 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x17u, a4: a1 + 24) | v5;
  v7 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x18u, a4: a1 + 28) | v6;
  fix_grouping(a1: *(_DWORD *)(a1 + 28));
  v8 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x50u, a4: a1 + 32) | v7;
  v9 = __getlocaleinfo(CodePage: 1u, Locale: v1, LCType: 0x51u, a4: a1 + 36) | v8;
  v10 = __getlocaleinfo(CodePage: 0, Locale: v1, LCType: 0x1Au, a4: a1 + 40) | v9;
  v11 = __getlocaleinfo(CodePage: 0, Locale: v1, LCType: 0x19u, a4: a1 + 41) | v10;
  v12 = __getlocaleinfo(CodePage: 0, Locale: v1, LCType: 0x54u, a4: a1 + 42) | v11;
  v13 = __getlocaleinfo(CodePage: 0, Locale: v1, LCType: 0x55u, a4: a1 + 43) | v12;
  v14 = __getlocaleinfo(CodePage: 0, Locale: v1, LCType: 0x56u, a4: a1 + 44) | v13;
  v15 = __getlocaleinfo(CodePage: 0, Locale: v1, LCType: 0x57u, a4: a1 + 45) | v14;
  v16 = __getlocaleinfo(CodePage: 0, Locale: v1, LCType: 0x52u, a4: a1 + 46) | v15;
  return __getlocaleinfo(CodePage: 0, Locale: v1, LCType: 0x53u, a4: a1 + 47) | v16;
}


/* ============================================
   Address: 0x40FFA0
   Function: _fix_grouping
   ============================================ */

char __cdecl fix_grouping(char *a1)
{
  char *v1; // ecx
  char result; // al
  char *v3; // eax
  char v4; // dl

  v1 = a1;
  for ( result = *a1; *v1 != 0; result = *v1 )
  {
    if ( result < 48 || result > 57 )
    {
      if ( result == 59 )
      {
        v3 = v1;
        do
        {
          *v3 = v3[1];
          v4 = *++v3;
        }
        while ( v4 != 0 );
        continue;
      }
    }
    else
    {
      *v1 = result - 48;
    }
    ++v1;
  }
  return result;
}


/* ============================================
   Address: 0x40FFE0
   Function: __free_lc_lconv
   ============================================ */

void __cdecl _free_lc_lconv(void **a1)
{
  if ( a1 != nullptr && a1[3] != &word_42FFC0 )
  {
    free(Block: a1[3]);
    free(Block: a1[4]);
    free(Block: a1[5]);
    free(Block: a1[6]);
    free(Block: a1[7]);
    free(Block: a1[8]);
    free(Block: a1[9]);
  }
}


/* ============================================
   Address: 0x410050
   Function: sub_410050
   ============================================ */

int sub_410050()
{
  void *v0; // edi
  void *v1; // ebx
  WORD *v2; // esi
  WORD *v3; // ebx
  _WORD *v4; // eax
  int i; // eax
  BYTE *v6; // ecx
  int v7; // eax
  BYTE v8; // al
  void *v9; // ebx
  _WORD *v10; // ecx
  int j; // eax
  BYTE *v12; // esi
  int v13; // eax
  WORD *v14; // ecx
  BYTE v15; // al
  _WORD *Block; // [esp+10h] [ebp-20h]
  WORD *v18; // [esp+14h] [ebp-1Ch]
  WORD *v19; // [esp+18h] [ebp-18h]
  WORD *v20; // [esp+18h] [ebp-18h]
  struct _cpinfo CPInfo; // [esp+1Ch] [ebp-14h] BYREF

  v0 = nullptr;
  v1 = nullptr;
  if ( Locale == 0 )
  {
    off_4280D0 = (_UNKNOWN *)(_ctype + 2);
    dword_4280D4 = 4358362;
    free(Block: dword_42FF60);
    free(Block: dword_42FF64);
    dword_42FF60 = nullptr;
    dword_42FF64 = nullptr;
    return 0;
  }
  if ( CodePage == 0
    && __getlocaleinfo(CodePage: 0, Locale: (unsigned __int16)word_42FF74, LCType: 0xBu, a4: (int)&CodePage) != 0 )
  {
    v2 = v19;
LABEL_39:
    free(Block: v2);
    free(Block: v18);
    free(Block: v0);
    free(Block: v1);
    return 1;
  }
  v2 = (WORD *)malloc(Size: 0x202u);
  v20 = v2;
  v3 = (WORD *)malloc(Size: 0x202u);
  v18 = v3;
  v0 = malloc(Size: 0x101u);
  v4 = malloc(Size: 0x202u);
  Block = v4;
  if ( v2 != nullptr && v3 != nullptr && v0 != nullptr && v4 != nullptr )
  {
    for ( i = 0; i < 256; ++i )
      *((_BYTE *)v0 + i) = i;
    if ( GetCPInfo(CodePage: CodePage, lpCPInfo: &CPInfo) && CPInfo.MaxCharSize <= 2 )
    {
      SrcSizeInBytes = LOWORD(CPInfo.MaxCharSize);
      if ( LOWORD(CPInfo.MaxCharSize) > 1u && CPInfo.LeadByte[0] != 0 )
      {
        v6 = &CPInfo.LeadByte[1];
        do
        {
          if ( *v6 == 0 )
            break;
          v7 = *(v6 - 1);
          if ( v7 <= (unsigned int)*v6 )
          {
            do
              *((_BYTE *)v0 + v7++) = 0;
            while ( v7 <= *v6 );
          }
          v8 = v6[1];
          v6 += 2;
        }
        while ( v8 != 0 );
      }
      v9 = v2 + 1;
      if ( __crtGetStringTypeA(
             dwInfoType: 1u,
             lpSrcStr: (LPCSTR)v0,
             cchSrc: 256,
             lpCharType: v2 + 1,
             CodePage: 0,
             Locale: 0) != 0 )
      {
        *v2 = 0;
        v10 = Block;
        for ( j = 0; j < 256; ++j )
          *v10++ = j;
        if ( __crtGetStringTypeW(
               dwInfoType: 1u,
               lpSrcStr: Block,
               cchSrc: 256,
               lpCharType: v18 + 1,
               CodePage: 0,
               Locale: 0) != 0 )
        {
          *v18 = 0;
          if ( (int)SrcSizeInBytes > 1 && CPInfo.LeadByte[0] != 0 )
          {
            v12 = &CPInfo.LeadByte[1];
            do
            {
              if ( *v12 == 0 )
                break;
              v13 = *(v12 - 1);
              if ( v13 <= (unsigned int)*v12 )
              {
                v14 = &v20[v13 + 1];
                do
                {
                  *v14 = 0x8000;
                  ++v13;
                  ++v14;
                }
                while ( v13 <= *v12 );
              }
              v15 = v12[1];
              v12 += 2;
            }
            while ( v15 != 0 );
            v2 = v20;
          }
          off_4280D0 = v9;
          dword_4280D4 = (int)(v18 + 1);
          if ( dword_42FF60 != nullptr )
            free(Block: dword_42FF60);
          dword_42FF60 = v2;
          if ( dword_42FF64 != nullptr )
            free(Block: dword_42FF64);
          dword_42FF64 = v18;
          free(Block: v0);
          free(Block);
          return 0;
        }
      }
    }
  }
  v1 = Block;
  goto LABEL_39;
}


/* ============================================
   Address: 0x410310
   Function: _strcspn
   ============================================ */

size_t __cdecl strcspn(const char *Str, const char *Control)
{
  unsigned int v2; // eax
  size_t v5; // ecx
  signed __int32 v7[9]; // [esp+0h] [ebp-24h] BYREF

  v2 = 0;
  memset(v7, 0, 32);
  while ( 1 )
  {
    LOBYTE(v2) = *Control;
    if ( *Control == 0 )
      break;
    ++Control;
    _bittestandset(v7, v2);
  }
  v5 = -1;
  do
  {
    ++v5;
    LOBYTE(v2) = *Str;
    if ( *Str == 0 )
      break;
    ++Str;
  }
  while ( !_bittest(v7, v2) );
  return v5;
}


/* ============================================
   Address: 0x410350
   Function: _strncmp
   ============================================ */

int __cdecl strncmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  size_t v3; // ecx
  const char *v4; // edi
  bool v5; // zf
  size_t v6; // ecx
  const char *v7; // edi
  unsigned __int8 v9; // al

  v3 = MaxCount;
  if ( MaxCount != 0 )
  {
    v4 = Str1;
    do
    {
      if ( v3 == 0 )
        break;
      v5 = *v4++ == 0;
      --v3;
    }
    while ( !v5 );
    v6 = MaxCount - v3;
    v7 = Str1;
    do
    {
      if ( v6 == 0 )
        break;
      v5 = *Str2++ == *v7++;
      --v6;
    }
    while ( v5 );
    v9 = *(Str2 - 1);
    v3 = 0;
    if ( v9 > (unsigned int)*(v7 - 1) )
      return ~v3;
    if ( v9 != *(v7 - 1) )
    {
      v3 = -2;
      return ~v3;
    }
  }
  return v3;
}


/* ============================================
   Address: 0x410390
   Function: ___crtGetStringTypeW
   ============================================ */

int __cdecl __crtGetStringTypeW(
        DWORD dwInfoType,
        LPCWCH lpSrcStr,
        int cchSrc,
        LPWORD lpCharType,
        UINT CodePage,
        LCID Locale)
{
  int result; // eax
  WORD *v7; // ebx
  size_t v8; // eax
  int v9; // esi
  CHAR *v10; // ebp
  LCID v11; // eax
  size_t v12; // edi
  BOOL StringTypeA; // eax
  bool v14; // zf
  WORD CharType[2]; // [esp+10h] [ebp-4h] BYREF

  result = dword_42FF8C;
  v7 = nullptr;
  if ( dword_42FF8C == 0 )
  {
    if ( GetStringTypeW(dwInfoType: 1u, lpSrcStr: &word_4246B8, cchSrc: 1, lpCharType: CharType) )
    {
      result = 1;
    }
    else
    {
      if ( !GetStringTypeA(Locale: 0, dwInfoType: 1u, lpSrcStr: SrcStr, cchSrc: 1, lpCharType: CharType) )
        return 0;
      result = 2;
    }
    dword_42FF8C = result;
  }
  if ( result == 1 )
    return GetStringTypeW(dwInfoType, lpSrcStr, cchSrc, lpCharType);
  if ( result == 2 )
  {
    *(_DWORD *)CharType = 0;
    if ( CodePage == 0 )
      CodePage = ::CodePage;
    v8 = WideCharToMultiByte(
           CodePage,
           dwFlags: 0x220u,
           lpWideCharStr: lpSrcStr,
           cchWideChar: cchSrc,
           lpMultiByteStr: nullptr,
           cbMultiByte: 0,
           lpDefaultChar: nullptr,
           lpUsedDefaultChar: nullptr);
    v9 = v8;
    if ( v8 == 0 )
      return 0;
    v10 = (CHAR *)calloc(Count: 1u, Size: v8);
    if ( v10 == nullptr )
      return 0;
    if ( WideCharToMultiByte(
           CodePage,
           dwFlags: 0x220u,
           lpWideCharStr: lpSrcStr,
           cchWideChar: cchSrc,
           lpMultiByteStr: v10,
           cbMultiByte: v9,
           lpDefaultChar: nullptr,
           lpUsedDefaultChar: nullptr) != 0 )
    {
      v7 = (WORD *)malloc(Size: 2 * v9 + 2);
      if ( v7 != nullptr )
      {
        v11 = Locale;
        if ( Locale == 0 )
          v11 = ::Locale;
        v12 = cchSrc;
        v7[v12] = -1;
        v7[v12 - 1] = -1;
        StringTypeA = GetStringTypeA(Locale: v11, dwInfoType, lpSrcStr: v10, cchSrc: v9, lpCharType: v7);
        v14 = v7[cchSrc - 1] == 0xFFFF;
        *(_DWORD *)CharType = StringTypeA;
        if ( v14 || v7[cchSrc] != 0xFFFF )
          *(_DWORD *)CharType = 0;
        else
          memcpy_0(a1: lpCharType, Src: v7, Size: v12 * 2);
      }
    }
    free(Block: v10);
    free(Block: v7);
    return *(_DWORD *)CharType;
  }
  return result;
}


/* ============================================
   Address: 0x410520
   Function: ___crtGetStringTypeA
   ============================================ */

int __cdecl __crtGetStringTypeA(
        DWORD dwInfoType,
        LPCSTR lpSrcStr,
        int cchSrc,
        LPWORD lpCharType,
        UINT CodePage,
        LCID Locale)
{
  int result; // eax
  WCHAR *v7; // edi
  LCID v8; // eax
  UINT v9; // ebx
  size_t v10; // eax
  int v11; // esi
  int v12; // eax
  BOOL StringTypeW; // esi
  WORD CharType; // [esp+12h] [ebp-2h] BYREF

  result = dword_42FF90;
  v7 = nullptr;
  if ( dword_42FF90 == 0 )
  {
    if ( GetStringTypeA(Locale: 0, dwInfoType: 1u, lpSrcStr: SrcStr, cchSrc: 1, lpCharType: &CharType) )
    {
      result = 2;
      dword_42FF90 = 2;
    }
    else
    {
      if ( !GetStringTypeW(dwInfoType: 1u, lpSrcStr: &word_4246B8, cchSrc: 1, lpCharType: &CharType) )
        return 0;
      result = 1;
      dword_42FF90 = 1;
    }
  }
  if ( result == 2 )
  {
    v8 = Locale;
    if ( Locale == 0 )
      v8 = ::Locale;
    return GetStringTypeA(Locale: v8, dwInfoType, lpSrcStr, cchSrc, lpCharType);
  }
  else if ( result == 1 )
  {
    v9 = CodePage;
    if ( CodePage == 0 )
      v9 = ::CodePage;
    v10 = MultiByteToWideChar(
            CodePage: v9,
            dwFlags: 9u,
            lpMultiByteStr: lpSrcStr,
            cbMultiByte: cchSrc,
            lpWideCharStr: nullptr,
            cchWideChar: 0);
    v11 = v10;
    if ( v10 != 0
      && (v7 = (WCHAR *)calloc(Count: 2u, Size: v10)) != nullptr
      && (v12 = MultiByteToWideChar(
                  CodePage: v9,
                  dwFlags: 1u,
                  lpMultiByteStr: lpSrcStr,
                  cbMultiByte: cchSrc,
                  lpWideCharStr: v7,
                  cchWideChar: v11)) != 0 )
    {
      StringTypeW = GetStringTypeW(dwInfoType, lpSrcStr: v7, cchSrc: v12, lpCharType);
      free(Block: v7);
      return StringTypeW;
    }
    else
    {
      free(Block: v7);
      return 0;
    }
  }
  return result;
}


/* ============================================
   Address: 0x410650
   Function: ?_ValidateRead@@YAHPBXI@Z
   ============================================ */

BOOL __cdecl _ValidateRead(void *lp, UINT_PTR ucb)
{
  return !IsBadReadPtr(lp, ucb);
}


/* ============================================
   Address: 0x410670
   Function: ?_ValidateWrite@@YAHPAXI@Z
   ============================================ */

BOOL __cdecl _ValidateWrite(void *lp, UINT_PTR ucb)
{
  return !IsBadWritePtr(lp, ucb);
}


/* ============================================
   Address: 0x410690
   Function: ?_ValidateExecute@@YAHP6GHXZ@Z
   ============================================ */

BOOL __cdecl _ValidateExecute(FARPROC lpfn)
{
  return !IsBadCodePtr(lpfn);
}


/* ============================================
   Address: 0x4106B0
   Function: _abort
   ============================================ */

void __cdecl __noreturn abort()
{
  _NMSG_WRITE(a1: 10);
  raise(Signal: 22);
  _exit(Code: 3);
}


/* ============================================
   Address: 0x4106D0
   Function: _wctomb
   ============================================ */

int __cdecl wctomb(char *MbCh, wchar_t WCh)
{
  int v2; // esi
  int v3; // ebx

  InterlockedIncrement(lpAddend: &Addend);
  if ( dword_431008 != 0 )
  {
    InterlockedDecrement(lpAddend: &Addend);
    _lock(a1: 19);
    v2 = 1;
  }
  else
  {
    v2 = 0;
  }
  v3 = _wctomb_lk(lpMultiByteStr: MbCh, WideCharStr: WCh);
  if ( v2 != 0 )
    _unlock(a1: 19);
  else
    InterlockedDecrement(lpAddend: &Addend);
  return v3;
}


/* ============================================
   Address: 0x410740
   Function: __wctomb_lk
   ============================================ */

int __cdecl _wctomb_lk(LPSTR lpMultiByteStr, WCHAR WideCharStr)
{
  int result; // eax
  CHAR *v3; // [esp-10h] [ebp-10h]

  result = (int)lpMultiByteStr;
  if ( lpMultiByteStr != nullptr )
  {
    if ( Locale == 0 )
    {
      if ( WideCharStr <= 0xFFu )
      {
        *lpMultiByteStr = WideCharStr;
        return 1;
      }
      goto LABEL_7;
    }
    v3 = lpMultiByteStr;
    lpMultiByteStr = nullptr;
    result = WideCharToMultiByte(
               CodePage: CodePage,
               dwFlags: 0x220u,
               lpWideCharStr: &WideCharStr,
               cchWideChar: 1,
               lpMultiByteStr: v3,
               cbMultiByte: SrcSizeInBytes,
               lpDefaultChar: nullptr,
               lpUsedDefaultChar: (LPBOOL)&lpMultiByteStr);
    if ( result == 0 || lpMultiByteStr != nullptr )
    {
LABEL_7:
      *_errno() = 42;
      return -1;
    }
  }
  return result;
}


/* ============================================
   Address: 0x4107C0
   Function: __aulldiv
   ============================================ */

unsigned int __stdcall _aulldiv(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rtt
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  unsigned __int64 v6; // rax
  char v7; // cf
  unsigned int v8; // esi
  unsigned __int64 v9; // rax

  if ( HIDWORD(a2) != 0 )
  {
    v4 = HIDWORD(a2);
    v5 = a2;
    v6 = a1;
    do
    {
      v7 = v4 & 1;
      v4 >>= 1;
      v5 = (v5 >> 1) | (v7 << 31);
      v6 >>= 1;
    }
    while ( v4 != 0 );
    v8 = v6 / v5;
    v9 = v8 * (unsigned __int64)(unsigned int)a2;
    if ( __CFADD__(HIDWORD(a2) * v8, HIDWORD(v9)) || (HIDWORD(v9) = (a2 * (unsigned __int64)v8) >> 32, v9 > a1) )
      --v8;
    return v8;
  }
  else
  {
    LODWORD(v3) = a1;
    HIDWORD(v3) = HIDWORD(a1) % (unsigned int)a2;
    return v3 / (unsigned int)a2;
  }
}


/* ============================================
   Address: 0x410830
   Function: __aullrem
   ============================================ */

unsigned __int64 __stdcall _aullrem(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rtt
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  unsigned __int64 v6; // rax
  bool v7; // cf
  int v8; // ecx
  unsigned __int64 v9; // rax

  if ( HIDWORD(a2) != 0 )
  {
    v4 = HIDWORD(a2);
    v5 = a2;
    v6 = a1;
    do
    {
      v7 = v4 & 1;
      v4 >>= 1;
      v5 = (v5 >> 1) | (v7 << 31);
      v6 >>= 1;
    }
    while ( v4 != 0 );
    v8 = HIDWORD(a2) * (v6 / v5);
    v9 = (unsigned int)a2 * (unsigned __int64)(unsigned int)(v6 / v5);
    v7 = __CFADD__(v8, HIDWORD(v9));
    HIDWORD(v9) += v8;
    if ( v7 || v9 > a1 )
      v9 -= a2;
    return a1 - v9;
  }
  else
  {
    LODWORD(v2) = a1;
    HIDWORD(v2) = HIDWORD(a1) % (unsigned int)a2;
    return v2 % (unsigned int)a2;
  }
}


/* ============================================
   Address: 0x4108B0
   Function: ___crtMessageBoxA
   ============================================ */

int __cdecl __crtMessageBoxA(const CHAR *a1, const CHAR *a2, UINT a3)
{
  HWND ActiveWindow_0; // ebx
  HMODULE LibraryA; // eax
  HMODULE v5; // esi

  ActiveWindow_0 = nullptr;
  if ( MessageBoxA_0 == nullptr )
  {
    LibraryA = LoadLibraryA(lpLibFileName: "user32.dll");
    v5 = LibraryA;
    if ( LibraryA == nullptr )
      return 0;
    MessageBoxA_0 = (int (__stdcall *)(HWND, LPCSTR, LPCSTR, UINT))GetProcAddress(
                                                                     hModule: LibraryA,
                                                                     lpProcName: "MessageBoxA");
    if ( MessageBoxA_0 == nullptr )
      return 0;
    GetActiveWindow_0 = (HWND (__stdcall *)())GetProcAddress(hModule: v5, lpProcName: "GetActiveWindow");
    GetLastActivePopup_0 = (HWND (__stdcall *)(HWND))GetProcAddress(hModule: v5, lpProcName: "GetLastActivePopup");
  }
  if ( GetActiveWindow_0 != nullptr )
    ActiveWindow_0 = GetActiveWindow_0();
  if ( ActiveWindow_0 != nullptr && GetLastActivePopup_0 != nullptr )
    ActiveWindow_0 = GetLastActivePopup_0(hWnd: ActiveWindow_0);
  return MessageBoxA_0(hWnd: ActiveWindow_0, lpText: a1, lpCaption: a2, uType: a3);
}


/* ============================================
   Address: 0x410940
   Function: __fcloseall
   ============================================ */

int __cdecl _fcloseall()
{
  int v0; // ebp
  int i; // esi
  int v2; // eax

  v0 = 0;
  _lock(a1: 2);
  for ( i = 3; i < (int)Count; ++i )
  {
    v2 = *(_DWORD *)(dword_42FFE4 + 4 * i);
    if ( v2 != 0 )
    {
      if ( (*(_BYTE *)(v2 + 12) & 0x83) != 0 && fclose(Stream: *(FILE **)(dword_42FFE4 + 4 * i)) != -1 )
        ++v0;
      if ( i >= 20 )
      {
        DeleteCriticalSection(lpCriticalSection: (LPCRITICAL_SECTION)(*(_DWORD *)(dword_42FFE4 + 4 * i) + 32));
        free(Block: *(void **)(dword_42FFE4 + 4 * i));
        *(_DWORD *)(dword_42FFE4 + 4 * i) = 0;
      }
    }
  }
  _unlock(a1: 2);
  return v0;
}


/* ============================================
   Address: 0x4109E0
   Function: __chsize_lk
   ============================================ */

int __cdecl _chsize_lk(int FileHandle, LONG a2)
{
  int v2; // ebp
  LONG v3; // edi
  DWORD v4; // eax
  int v5; // esi
  int v6; // edi
  DWORD v7; // eax
  int v8; // eax
  void *osfhandle; // eax
  BOOL v11; // eax
  DWORD LastError; // esi
  LONG lDistanceToMove; // [esp+10h] [ebp-1004h]
  _BYTE Buffer[4096]; // [esp+14h] [ebp-1000h] BYREF

  v2 = 0;
  v3 = _lseek_lk(FileHandle, lDistanceToMove: 0, dwMoveMethod: 1u);
  lDistanceToMove = v3;
  if ( v3 == -1 )
    return -1;
  v4 = _lseek_lk(FileHandle, lDistanceToMove: 0, dwMoveMethod: 2u);
  if ( v4 == -1 )
    return -1;
  v5 = a2 - v4;
  if ( (int)(a2 - v4) <= 0 )
  {
    if ( (int)(a2 - v4) < 0 )
    {
      _lseek_lk(FileHandle, lDistanceToMove: a2, dwMoveMethod: 0);
      osfhandle = (void *)_get_osfhandle(FileHandle);
      v11 = SetEndOfFile(hFile: osfhandle);
      v2 = v11 - 1;
      if ( !v11 )
      {
        *_errno() = 13;
        LastError = GetLastError();
        *__doserrno() = LastError;
      }
    }
    _lseek_lk(FileHandle, lDistanceToMove: v3, dwMoveMethod: 0);
    return v2;
  }
  else
  {
    memset(Buffer, 0, sizeof(Buffer));
    v6 = _setmode_lk(a1: FileHandle, a2: 0x8000);
    while ( 1 )
    {
      v7 = 4096;
      if ( v5 < 4096 )
        v7 = v5;
      v8 = _write_lk(FileHandle, lpBuffer: Buffer, nNumberOfBytesToWrite: v7);
      if ( v8 == -1 )
        break;
      v5 -= v8;
      if ( v5 <= 0 )
        goto LABEL_13;
    }
    if ( *__doserrno() == 5 )
      *_errno() = 13;
    v2 = -1;
LABEL_13:
    _setmode_lk(a1: FileHandle, a2: v6);
    _lseek_lk(FileHandle, lDistanceToMove, dwMoveMethod: 0);
    return v2;
  }
}


/* ============================================
   Address: 0x410B30
   Function: _raise
   ============================================ */

int __cdecl raise(int Signal)
{
  int v1; // ebp
  void (__cdecl *v2)(int, DWORD); // ebx
  DWORD *v3; // esi
  int *v4; // edi
  DWORD v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // [esp+10h] [ebp-8h]
  DWORD v10; // [esp+14h] [ebp-4h]

  v1 = Signal;
  v9 = 0;
  switch ( Signal )
  {
    case 2:
      v2 = (void (__cdecl *)(int, DWORD))dword_42FFA4;
      v3 = (DWORD *)Signal;
      v4 = &dword_42FFA4;
      v9 = 1;
      goto LABEL_7;
    case 4:
    case 8:
    case 11:
      v3 = _getptd();
      v4 = (int *)(siglookup(a1: Signal, a2: v3[20]) + 8);
      v2 = (void (__cdecl *)(int, DWORD))*v4;
      goto LABEL_7;
    case 15:
      v2 = (void (__cdecl *)(int, DWORD))dword_42FFB0;
      v3 = (DWORD *)Signal;
      v4 = &dword_42FFB0;
      v9 = 1;
      goto LABEL_7;
    case 21:
      v2 = (void (__cdecl *)(int, DWORD))dword_42FFA8;
      v3 = (DWORD *)Signal;
      v4 = &dword_42FFA8;
      v9 = 1;
      goto LABEL_7;
    case 22:
      v2 = (void (__cdecl *)(int, DWORD))dword_42FFAC;
      v3 = (DWORD *)Signal;
      v4 = &dword_42FFAC;
      v9 = 1;
LABEL_7:
      if ( v9 != 0 )
        _lock(a1: 1);
      if ( v2 != (void (__cdecl *)(int, DWORD))1 )
      {
        if ( v2 == nullptr )
        {
          if ( v9 != 0 )
            _unlock(a1: 1);
          _exit(Code: 3);
        }
        if ( Signal == 8 || Signal == 11 || Signal == 4 )
        {
          Signal = v3[21];
          v3[21] = 0;
          if ( v1 != 8 )
            goto LABEL_26;
          v6 = v3[22];
          v3[22] = 140;
          v10 = v6;
        }
        if ( v1 == 8 )
        {
          v7 = dword_428378;
          if ( dword_428378 < dword_428378 + dword_42837C )
          {
            v8 = 12 * dword_428378;
            do
            {
              ++v7;
              *(_DWORD *)(v3[20] + v8 + 8) = 0;
              v8 += 12;
            }
            while ( v7 < dword_428378 + dword_42837C );
          }
          goto LABEL_27;
        }
LABEL_26:
        *v4 = 0;
LABEL_27:
        if ( v9 != 0 )
          _unlock(a1: 1);
        if ( v1 == 8 )
          v2(a1: 8, a2: v3[22]);
        else
          ((void (__cdecl *)(int))v2)(a1: v1);
        if ( v1 == 8 || v1 == 11 || v1 == 4 )
        {
          v3[21] = Signal;
          if ( v1 == 8 )
            v3[22] = v10;
        }
        return 0;
      }
      if ( v9 != 0 )
      {
        _unlock(a1: 1);
        return 0;
      }
      return 0;
    default:
      return -1;
  }
}


/* ============================================
   Address: 0x410D40
   Function: _siglookup
   ============================================ */

unsigned int __cdecl siglookup(int a1, unsigned int a2)
{
  unsigned int result; // eax

  result = a2;
  if ( *(_DWORD *)(a2 + 4) != a1 )
  {
    do
      result += 12;
    while ( result < a2 + 12 * dword_428384 && *(_DWORD *)(result + 4) != a1 );
  }
  if ( result >= a2 + 12 * dword_428384 || *(_DWORD *)(result + 4) != a1 )
    return 0;
  return result;
}


/* ============================================
   Address: 0x410D80
   Function: ___addl
   ============================================ */

int __cdecl __addl(unsigned int a1, unsigned int a2, unsigned int *a3)
{
  int result; // eax
  unsigned int v4; // ecx

  result = 0;
  v4 = a2 + a1;
  if ( a2 + a1 < a1 || v4 < a2 )
    result = 1;
  *a3 = v4;
  return result;
}


/* ============================================
   Address: 0x410DB0
   Function: ___add_12
   ============================================ */

int __cdecl __add_12(unsigned int *a1, unsigned int *a2)
{
  if ( __addl(a1: *a1, a2: *a2, a3: a1) != 0 && __addl(a1: a1[1], a2: 1u, a3: a1 + 1) != 0 )
    ++a1[2];
  if ( __addl(a1: a1[1], a2: a2[1], a3: a1 + 1) != 0 )
    ++a1[2];
  return __addl(a1: a1[2], a2: a2[2], a3: a1 + 2);
}


/* ============================================
   Address: 0x410E20
   Function: ___shl_12
   ============================================ */

unsigned int *__cdecl __shl_12(unsigned int *a1)
{
  unsigned int v2; // edi
  unsigned int v3; // ecx
  int v4; // esi
  unsigned int v5; // ecx

  v2 = a1[1];
  v3 = *a1;
  *a1 *= 2;
  v4 = (v3 >> 31) | (2 * v2);
  v5 = a1[2];
  a1[1] = v4;
  a1[2] = (v2 >> 31) | (2 * v5);
  return a1;
}


/* ============================================
   Address: 0x410E50
   Function: ___shr_12
   ============================================ */

int *__cdecl __shr_12(int *a1)
{
  unsigned int v2; // edx
  int v3; // edi
  int v4; // ecx

  v2 = a1[2];
  v3 = a1[1];
  a1[1] = *(__int64 *)(a1 + 1) >> 1;
  v4 = (v3 << 31) | ((unsigned int)*a1 >> 1);
  a1[2] = v2 >> 1;
  *a1 = v4;
  return a1;
}


/* ============================================
   Address: 0x410E80
   Function: ___mtold12
   ============================================ */

int __cdecl __mtold12(char *a1, int a2, int a3)
{
  __int16 v4; // di
  unsigned int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  int result; // eax
  unsigned int v11; // [esp+10h] [ebp-Ch] BYREF
  int v12; // [esp+14h] [ebp-8h]
  int v13; // [esp+18h] [ebp-4h]
  int i; // [esp+28h] [ebp+Ch]

  v4 = 16462;
  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 4) = 0;
  *(_DWORD *)(a3 + 8) = 0;
  if ( a2 != 0 )
  {
    for ( i = a2; i != 0; --i )
    {
      v11 = *(_DWORD *)a3;
      v12 = *(_DWORD *)(a3 + 4);
      v13 = *(_DWORD *)(a3 + 8);
      __shl_12(a1: (unsigned int *)a3);
      __shl_12(a1: (unsigned int *)a3);
      __add_12(a1: (unsigned int *)a3, a2: &v11);
      __shl_12(a1: (unsigned int *)a3);
      v11 = *a1;
      v12 = 0;
      v13 = 0;
      __add_12(a1: (unsigned int *)a3, a2: &v11);
      ++a1;
    }
  }
  if ( *(_DWORD *)(a3 + 8) == 0 )
  {
    do
    {
      v6 = *(_DWORD *)(a3 + 4);
      v4 -= 16;
      *(_DWORD *)(a3 + 8) = HIWORD(v6);
      v7 = (v6 << 16) | HIWORD(*(_DWORD *)a3);
      v8 = *(_DWORD *)(a3 + 8);
      v9 = *(_DWORD *)a3 << 16;
      *(_DWORD *)(a3 + 4) = v7;
      *(_DWORD *)a3 = v9;
    }
    while ( v8 == 0 );
  }
  for ( result = *(_DWORD *)(a3 + 8); (result & 0x8000) == 0; --v4 )
  {
    __shl_12(a1: (unsigned int *)a3);
    result = *(_DWORD *)(a3 + 8);
  }
  *(_WORD *)(a3 + 10) = v4;
  return result;
}


/* ============================================
   Address: 0x410F80
   Function: ___strgtold12
   ============================================ */

int __cdecl __strgtold12(int a1, char **a2, char *a3, int a4, int a5, int a6, int a7)
{
  int v7; // eax
  unsigned int v8; // esi
  int v9; // edx
  char *v10; // edi
  char *v11; // ebp
  char v12; // cl
  char v13; // bl
  int v14; // eax
  int v15; // eax
  int v16; // eax
  bool v17; // zf
  int v18; // edi
  unsigned __int8 v19; // si
  int v20; // eax
  int v21; // eax
  unsigned __int8 v22; // al
  char *v23; // eax
  int v24; // ecx
  char v25; // dl
  char *v26; // eax
  char v27; // dl
  int v28; // eax
  int v29; // eax
  char *v30; // esi
  unsigned int v31; // edx
  __int16 v32; // ax
  __int16 v33; // cx
  int v34; // ebx
  int v36; // [esp+10h] [ebp-60h]
  char *v37; // [esp+14h] [ebp-5Ch]
  int v38; // [esp+18h] [ebp-58h]
  unsigned int v39; // [esp+1Ch] [ebp-54h]
  char *v40; // [esp+20h] [ebp-50h]
  int v41; // [esp+24h] [ebp-4Ch]
  int v42; // [esp+28h] [ebp-48h]
  int i; // [esp+2Ch] [ebp-44h]
  int v44; // [esp+30h] [ebp-40h]
  __int16 v45; // [esp+34h] [ebp-3Ch]
  int v46; // [esp+38h] [ebp-38h]
  int v47; // [esp+3Ch] [ebp-34h]
  _WORD v48[3]; // [esp+44h] [ebp-2Ch] BYREF
  unsigned int v49; // [esp+4Ah] [ebp-26h]
  int v50; // [esp+4Eh] [ebp-22h]
  char v51[23]; // [esp+54h] [ebp-1Ch] BYREF
  char v52; // [esp+6Bh] [ebp-5h]

  v37 = v51;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = a3;
  v45 = 0;
  v41 = 1;
  v39 = 0;
  v38 = 0;
  v44 = 0;
  i = 0;
  v46 = 0;
  v47 = 0;
  v42 = 0;
  v36 = 0;
  v11 = a3;
  v40 = a3;
  while ( 1 )
  {
    v12 = *v11;
    if ( *v11 != 32 && v12 != 9 && v12 != 10 && v12 != 13 )
      break;
    ++v11;
  }
  while ( 2 )
  {
    v13 = *v11++;
    LOBYTE(a3) = v13;
    switch ( v7 )
    {
      case 0:
        if ( v13 >= 49 && v13 <= 57 )
        {
          v7 = 3;
          goto LABEL_107;
        }
        if ( v13 == byte_4282E0 )
        {
          v7 = 5;
        }
        else
        {
          switch ( v13 )
          {
            case '+':
              v7 = 2;
              v45 = 0;
              break;
            case '-':
              v7 = 2;
              v45 = 0x8000;
              break;
            case '0':
              v7 = 1;
              break;
            default:
              goto LABEL_106;
          }
        }
        goto LABEL_108;
      case 1:
        v38 = 1;
        if ( v13 >= 49 && v13 <= 57 )
        {
          v7 = 3;
          goto LABEL_107;
        }
        if ( v13 != byte_4282E0 )
        {
          switch ( v13 )
          {
            case '+':
            case '-':
              goto LABEL_60;
            case '0':
              goto LABEL_34;
            case 'D':
            case 'E':
            case 'd':
            case 'e':
              goto LABEL_59;
            default:
              goto LABEL_106;
          }
        }
        v7 = 4;
        goto LABEL_108;
      case 2:
        if ( v13 >= 49 && v13 <= 57 )
        {
          v7 = 3;
          goto LABEL_107;
        }
        if ( v13 == byte_4282E0 )
        {
          v7 = 5;
        }
        else if ( v13 == 48 )
        {
LABEL_34:
          v7 = 1;
        }
        else
        {
          v7 = 10;
          v11 = v10;
        }
        goto LABEL_108;
      case 3:
        v38 = 1;
        while ( 1 )
        {
          v14 = (int)SrcSizeInBytes <= 1
              ? *((_BYTE *)off_4280D0 + 2 * (unsigned __int8)a3) & 4
              : _isctype(C: (unsigned __int8)a3, Type: 4);
          if ( v14 == 0 )
            break;
          if ( v8 >= 0x19 )
          {
            v13 = *v11;
            LOBYTE(a3) = *v11;
            ++v36;
          }
          else
          {
            ++v8;
            *v37 = v13 - 48;
            v13 = *v11;
            LOBYTE(a3) = *v11;
            ++v37;
          }
          ++v11;
        }
        v39 = v8;
        if ( v13 != byte_4282E0 )
        {
          switch ( v13 )
          {
            case '+':
            case '-':
              goto LABEL_60;
            case 'D':
            case 'E':
            case 'd':
            case 'e':
              goto LABEL_59;
            default:
              goto LABEL_106;
          }
        }
        v7 = 4;
        goto LABEL_108;
      case 4:
        v38 = 1;
        v44 = 1;
        if ( v8 == 0 && v13 == 48 )
        {
          do
          {
            v13 = *v11;
            --v9;
            ++v11;
            LOBYTE(a3) = v13;
          }
          while ( v13 == 48 );
          v36 = v9;
        }
        while ( 1 )
        {
          v15 = (int)SrcSizeInBytes <= 1
              ? *((_BYTE *)off_4280D0 + 2 * (unsigned __int8)a3) & 4
              : _isctype(C: (unsigned __int8)a3, Type: 4);
          if ( v15 == 0 )
            break;
          if ( v8 < 0x19 )
          {
            ++v8;
            *v37++ = v13 - 48;
            --v36;
          }
          v13 = *v11++;
          LOBYTE(a3) = v13;
        }
        v39 = v8;
        switch ( v13 )
        {
          case '+':
          case '-':
LABEL_60:
            --v11;
            v7 = 11;
            break;
          case 'D':
          case 'E':
          case 'd':
          case 'e':
LABEL_59:
            v7 = 6;
            break;
          default:
            goto LABEL_106;
        }
        goto LABEL_108;
      case 5:
        v44 = 1;
        if ( (int)SrcSizeInBytes <= 1 )
          v16 = *((_BYTE *)off_4280D0 + 2 * (unsigned __int8)v13) & 4;
        else
          v16 = _isctype(C: (unsigned __int8)v13, Type: 4);
        if ( v16 != 0 )
        {
          v7 = 4;
          --v11;
        }
        else
        {
          v7 = 10;
          v11 = v10;
        }
        goto LABEL_108;
      case 6:
        v10 = v11 - 2;
        v40 = v11 - 2;
        if ( v13 >= 49 && v13 <= 57 )
        {
          v7 = 9;
          goto LABEL_107;
        }
        if ( v13 == 43 )
          goto LABEL_105;
        if ( v13 == 45 )
          goto LABEL_104;
        v17 = v13 == 48;
        goto LABEL_82;
      case 7:
        if ( v13 >= 49 && v13 <= 57 )
        {
          v7 = 9;
          goto LABEL_107;
        }
        v17 = v13 == 48;
LABEL_82:
        if ( v17 )
        {
          v7 = 8;
        }
        else
        {
          v7 = 10;
          v11 = v10;
        }
        goto LABEL_108;
      case 8:
        for ( i = 1; v13 == 48; ++v11 )
          v13 = *v11;
        if ( v13 < 49 || v13 > 57 )
          goto LABEL_106;
        v7 = 9;
        goto LABEL_107;
      case 9:
        i = 1;
        v18 = 0;
        break;
      case 11:
        if ( a7 != 0 )
        {
          v10 = v11 - 1;
          v40 = v11 - 1;
          if ( v13 == 43 )
          {
LABEL_105:
            v7 = 7;
          }
          else if ( v13 == 45 )
          {
LABEL_104:
            v7 = 7;
            v41 = -1;
          }
          else
          {
            v7 = 10;
            --v11;
          }
        }
        else
        {
LABEL_106:
          v7 = 10;
LABEL_107:
          --v11;
        }
        goto LABEL_108;
    }
    while ( 1 )
    {
      v19 = (unsigned __int8)a3;
      v20 = (int)SrcSizeInBytes <= 1
          ? *((_BYTE *)off_4280D0 + 2 * (unsigned __int8)a3) & 4
          : _isctype(C: (unsigned __int8)a3, Type: 4);
      if ( v20 == 0 )
        break;
      v18 = v13 + 10 * v18 - 48;
      if ( v18 > 5200 )
      {
        v18 = 5201;
        break;
      }
      v13 = *v11++;
      LOBYTE(a3) = v13;
    }
    v42 = v18;
    while ( 1 )
    {
      v21 = (int)SrcSizeInBytes <= 1 ? *((_BYTE *)off_4280D0 + 2 * v19) & 4 : _isctype(C: v19, Type: 4);
      if ( v21 == 0 )
        break;
      v22 = *v11++;
      LOBYTE(a3) = v22;
      v19 = v22;
    }
    v8 = v39;
    v10 = v40;
    v7 = 10;
    --v11;
LABEL_108:
    if ( v7 != 10 )
    {
      v9 = v36;
      continue;
    }
    break;
  }
  *a2 = v11;
  if ( v38 == 0 )
    goto LABEL_127;
  if ( v8 <= 0x18 )
  {
    v23 = v37;
    v24 = v36;
  }
  else
  {
    if ( v52 >= 5 )
      ++v52;
    v23 = v37 - 1;
    v24 = v36 + 1;
    v8 = 24;
    ++v36;
  }
  if ( v8 != 0 )
  {
    v25 = *(v23 - 1);
    v26 = v23 - 1;
    if ( v25 == 0 )
    {
      do
      {
        v27 = *(v26 - 1);
        --v8;
        ++v24;
        --v26;
      }
      while ( v27 == 0 );
      v36 = v24;
    }
    __mtold12(a1: v51, a2: v8, a3: (int)v48);
    v28 = v42;
    if ( v41 < 0 )
      v28 = -v42;
    v29 = v36 + v28;
    if ( i == 0 )
      v29 += a5;
    if ( v44 == 0 )
      v29 -= a6;
    if ( v29 > 5200 )
    {
      v46 = 1;
LABEL_127:
      v30 = a3;
      v31 = (unsigned int)a3;
      v32 = (__int16)a3;
      v33 = (__int16)a3;
      goto LABEL_128;
    }
    if ( v29 < -5200 )
    {
      v47 = 1;
      goto LABEL_127;
    }
    __multtenpow12(a1: v48, a2: v29, a3: a4);
    v33 = v48[0];
    v30 = *(char **)&v48[1];
    v31 = v49;
    v32 = v50;
  }
  else
  {
    v33 = 0;
    v32 = 0;
    v31 = 0;
    v30 = nullptr;
  }
LABEL_128:
  if ( v38 != 0 )
  {
    if ( v46 != 0 )
    {
      v30 = nullptr;
      v32 = 0x7FFF;
      v31 = 0x80000000;
      v33 = 0;
      v34 = 2;
    }
    else if ( v47 != 0 )
    {
      v33 = 0;
      v32 = 0;
      v31 = 0;
      v30 = nullptr;
      v34 = 1;
    }
    else
    {
      v34 = 0;
    }
  }
  else
  {
    v33 = 0;
    v32 = 0;
    v31 = 0;
    v30 = nullptr;
    v34 = 4;
  }
  *(_WORD *)a1 = v33;
  *(_DWORD *)(a1 + 2) = v30;
  *(_DWORD *)(a1 + 6) = v31;
  *(_WORD *)(a1 + 10) = v45 | v32;
  return v34;
}


/* ============================================
   Address: 0x411710
   Function: _$I10_OUTPUT
   ============================================ */

int __cdecl _I10_OUTPUT(int a1, unsigned int a2, int a3, int a4, char a5, int a6)
{
  __int16 v6; // ax
  unsigned __int16 v7; // cx
  int v8; // edi
  unsigned int v9; // edx
  int v10; // ebx
  int v12; // esi
  char v13; // al
  int v14; // ebp
  unsigned __int16 v15; // si
  int v16; // ebx
  int v17; // esi
  int i; // esi
  _BYTE *v19; // esi
  int v20; // edi
  _BYTE *v21; // ebx
  char v22; // cl
  char v23; // al
  _BYTE *v24; // ebx
  int v25; // eax
  int v26; // eax
  char v27; // bl
  _BYTE v28[12]; // [esp+14h] [ebp-1Ch] BYREF
  _BYTE v29[12]; // [esp+20h] [ebp-10h] BYREF

  memset(v28, 204, 10);
  v6 = a3 & 0x8000;
  v7 = a3 & 0x7FFF;
  v28[10] = -5;
  v28[11] = 63;
  v8 = a6;
  if ( (a3 & 0x8000u) == 0 )
    *(_BYTE *)(a6 + 2) = 32;
  else
    *(_BYTE *)(a6 + 2) = 45;
  v9 = a2;
  v10 = a1;
  if ( v7 == 0 && a2 == 0 && a1 == 0 )
  {
    *(_WORD *)v8 = 0;
LABEL_26:
    *(_BYTE *)(v8 + 2) = 32;
    *(_BYTE *)(v8 + 3) = 1;
    *(_BYTE *)(v8 + 4) = 48;
    *(_BYTE *)(v8 + 5) = 0;
    return 1;
  }
  if ( v7 == 0x7FFF )
  {
    *(_WORD *)v8 = 1;
    if ( v9 == 0x80000000 && v10 == 0 || (v9 & 0x40000000) != 0 )
    {
      if ( v6 != 0 && v9 == -1073741824 && v10 == 0 )
      {
        strcpy((char *)(v8 + 4), "1#IND");
        *(_BYTE *)(v8 + 3) = 5;
        return 0;
      }
      else if ( v9 != 0x80000000 || v10 != 0 )
      {
        strcpy((char *)(v8 + 4), "1#QNAN");
        *(_BYTE *)(v8 + 3) = 6;
        return 0;
      }
      else
      {
        strcpy((char *)(v8 + 4), "1#INF");
        *(_BYTE *)(v8 + 3) = 5;
        return 0;
      }
    }
    else
    {
      strcpy((char *)(v8 + 4), "1#SNAN");
      *(_BYTE *)(v8 + 3) = 6;
      return 0;
    }
  }
  else
  {
    *(_WORD *)&v29[10] = v7;
    *(_DWORD *)&v29[6] = a2;
    *(_DWORD *)&v29[2] = a1;
    *(_WORD *)v29 = 0;
    v12 = (int)(77 * (HIBYTE(v7) + 2 * HIBYTE(a2)) + 19728 * v7 - 323162868) >> 16;
    __multtenpow12(a1: v29, a2: -(__int16)v12, a3: 1);
    if ( *(_WORD *)&v29[10] >= 0x3FFFu )
    {
      LOWORD(v12) = v12 + 1;
      __ld12mul(a1: v29, a2: v28);
    }
    v13 = a5;
    *(_WORD *)v8 = v12;
    if ( (v13 & 1) != 0 )
    {
      v14 = (__int16)v12 + a4;
      if ( v14 <= 0 )
      {
        *(_WORD *)v8 = 0;
        goto LABEL_26;
      }
    }
    else
    {
      v14 = a4;
    }
    if ( v14 > 21 )
      v14 = 21;
    v15 = *(_WORD *)&v29[10];
    *(_WORD *)&v29[10] = 0;
    v16 = 8;
    v17 = v15 - 16382;
    do
    {
      __shl_12(a1: (unsigned int *)v29);
      --v16;
    }
    while ( v16 != 0 );
    if ( v17 < 0 )
    {
      for ( i = (unsigned __int8)-(char)v17; i != 0; --i )
        __shr_12(a1: (int *)v29);
    }
    v19 = (_BYTE *)(v8 + 4);
    v20 = v14 + 1;
    v21 = v19;
    if ( v14 + 1 > 0 )
    {
      do
      {
        a1 = *(_DWORD *)v29;
        a2 = *(_DWORD *)&v29[4];
        a3 = *(_DWORD *)&v29[8];
        __shl_12(a1: (unsigned int *)v29);
        __shl_12(a1: (unsigned int *)v29);
        __add_12(a1: (unsigned int *)v29, a2: (unsigned int *)&a1);
        __shl_12(a1: (unsigned int *)v29);
        v22 = v29[11] + 48;
        v29[11] = 0;
        *v21++ = v22;
        --v20;
      }
      while ( v20 != 0 );
    }
    v23 = *(v21 - 1);
    v24 = v21 - 2;
    if ( v23 < 53 )
    {
      if ( v24 < v19 )
        goto LABEL_48;
      do
      {
        if ( *v24 != 48 )
          break;
        --v24;
      }
      while ( v24 >= v19 );
      if ( v24 < v19 )
      {
LABEL_48:
        v26 = a6;
        *v19 = 48;
        *(_WORD *)v26 = 0;
        *(_BYTE *)(v26 + 2) = 32;
        *(_BYTE *)(v26 + 3) = 1;
        *(_BYTE *)(v26 + 5) = 0;
        return 1;
      }
      v25 = a6;
    }
    else
    {
      if ( v24 < v19 )
        goto LABEL_42;
      do
      {
        if ( *v24 != 57 )
          break;
        *v24-- = 48;
      }
      while ( v24 >= v19 );
      if ( v24 >= v19 )
      {
        v25 = a6;
        ++*v24;
      }
      else
      {
LABEL_42:
        v25 = a6;
        ++v24;
        ++*(_WORD *)a6;
        ++*v24;
      }
    }
    v27 = (_BYTE)v24 - v25 - 3;
    *(_BYTE *)(v25 + 3) = v27;
    *(_BYTE *)(v25 + v27 + 4) = 0;
    return 1;
  }
}


/* ============================================
   Address: 0x411AA0
   Function: ___getlocaleinfo
   ============================================ */

int __cdecl __getlocaleinfo(UINT CodePage, LCID Locale, LCTYPE LCType, char **a4)
{
  char *v4; // edi
  size_t LocaleInfoA; // esi
  size_t v6; // eax
  int v7; // esi
  CHAR *v8; // eax
  char *v9; // eax
  WCHAR *v11; // esi
  unsigned __int8 v12; // bl
  int v13; // eax
  int v14; // [esp+10h] [ebp-84h]
  unsigned __int8 v15; // [esp+10h] [ebp-84h]
  CHAR Block[128]; // [esp+14h] [ebp-80h] BYREF

  if ( CodePage == 1 )
  {
    v4 = Block;
    v14 = 0;
    LocaleInfoA = __crtGetLocaleInfoA(Locale, LCType, lpLCData: Block, cchData: 128, CodePage: 0);
    if ( LocaleInfoA != 0
      || GetLastError() == 122
      && (v6 = __crtGetLocaleInfoA(Locale, LCType, lpLCData: nullptr, cchData: 0, CodePage: 0), v7 = v6, v6 != 0)
      && (v8 = (CHAR *)malloc(Size: v6), v4 = v8, v8 != nullptr)
      && (v14 = 1, (LocaleInfoA = __crtGetLocaleInfoA(Locale, LCType, lpLCData: v8, cchData: v7, CodePage: 0)) != 0) )
    {
      v9 = (char *)malloc(Size: LocaleInfoA);
      *a4 = v9;
      if ( v9 != nullptr )
      {
        strncpy(Destination: v9, Source: v4, Count: LocaleInfoA);
        if ( v14 != 0 )
        {
          free(Block: v4);
          return 0;
        }
        return 0;
      }
    }
    if ( v14 != 0 )
    {
      free(Block: v4);
      return -1;
    }
    return -1;
  }
  if ( CodePage == 0 && __crtGetLocaleInfoW(Locale, LCType, lpLCData: &LCData, cchData: 4, CodePage: 0) != 0 )
  {
    v11 = &LCData;
    *(_BYTE *)a4 = 0;
    do
    {
      v12 = *(_BYTE *)v11;
      v15 = *(_BYTE *)v11;
      if ( (int)SrcSizeInBytes <= 1 )
        v13 = *((_BYTE *)off_4280D0 + 2 * v15) & 4;
      else
        v13 = _isctype(C: v15, Type: 4);
      if ( v13 == 0 )
        break;
      ++v11;
      *(_BYTE *)a4 = v12 + 10 * *(_BYTE *)a4 - 48;
    }
    while ( (int)v11 < (int)word_42FFC0 );
    return 0;
  }
  return -1;
}


/* ============================================
   Address: 0x411C50
   Function: __itoa
   ============================================ */

char *__cdecl _itoa(int Value, char *Buffer, int Radix)
{
  if ( Radix == 10 && Value < 0 )
  {
    xtoa(a1: Value, a2: Buffer, a3: 10, a4: 1);
    return Buffer;
  }
  else
  {
    xtoa(a1: Value, a2: Buffer, a3: Radix, a4: 0);
    return Buffer;
  }
}


/* ============================================
   Address: 0x411C90
   Function: _xtoa
   ============================================ */

char __cdecl xtoa(unsigned int a1, char *a2, unsigned int a3, int a4)
{
  char *v4; // esi
  unsigned int v5; // edi
  char *v6; // ebx
  int v7; // ecx
  bool v8; // cc
  char v9; // cl
  char *v10; // esi
  char result; // al

  v4 = a2;
  if ( a4 != 0 )
  {
    *a2 = 45;
    v4 = a2 + 1;
    v5 = -a1;
  }
  else
  {
    v5 = a1;
  }
  v6 = v4;
  do
  {
    v7 = v5 % a3;
    v8 = v5 % a3 <= 9;
    v5 /= a3;
    if ( v8 )
      v9 = v7 + 48;
    else
      v9 = v7 + 87;
    *v4++ = v9;
  }
  while ( v5 != 0 );
  *v4 = 0;
  v10 = v4 - 1;
  do
  {
    result = *v10;
    *v10 = *v6;
    *v6 = result;
    --v10;
    ++v6;
  }
  while ( v6 < v10 );
  return result;
}


/* ============================================
   Address: 0x411D00
   Function: ___crtGetLocaleInfoW
   ============================================ */

int __cdecl __crtGetLocaleInfoW(LCID Locale, LCTYPE LCType, LPWSTR lpLCData, int cchData, UINT CodePage)
{
  int result; // eax
  int v6; // esi
  CHAR *v7; // edi
  int v8; // esi

  result = dword_42FFC4;
  if ( dword_42FFC4 == 0 )
  {
    if ( GetLocaleInfoW(Locale: 0, LCType: 1u, lpLCData: nullptr, cchData: 0) != 0 )
    {
      result = 1;
    }
    else
    {
      if ( GetLocaleInfoA(Locale: 0, LCType: 1u, lpLCData: nullptr, cchData: 0) == 0 )
        return 0;
      result = 2;
    }
    dword_42FFC4 = result;
  }
  if ( result == 1 )
    return GetLocaleInfoW(Locale, LCType, lpLCData, cchData);
  if ( result == 2 )
  {
    if ( CodePage == 0 )
      CodePage = ::CodePage;
    result = GetLocaleInfoA(Locale, LCType, lpLCData: nullptr, cchData: 0);
    v6 = result;
    if ( result != 0 )
    {
      result = (int)malloc(Size: result);
      v7 = (CHAR *)result;
      if ( result != 0 )
      {
        if ( GetLocaleInfoA(Locale, LCType, lpLCData: (LPSTR)result, cchData: v6) != 0 )
        {
          if ( cchData != 0 )
          {
            v8 = MultiByteToWideChar(
                   CodePage,
                   dwFlags: 1u,
                   lpMultiByteStr: v7,
                   cbMultiByte: -1,
                   lpWideCharStr: lpLCData,
                   cchWideChar: cchData);
            if ( v8 != 0 )
            {
LABEL_21:
              free(Block: v7);
              return v8;
            }
          }
          else
          {
            v8 = MultiByteToWideChar(
                   CodePage,
                   dwFlags: 1u,
                   lpMultiByteStr: v7,
                   cbMultiByte: -1,
                   lpWideCharStr: nullptr,
                   cchWideChar: 0);
            if ( v8 != 0 )
              goto LABEL_21;
          }
        }
        free(Block: v7);
        return 0;
      }
    }
  }
  return result;
}


/* ============================================
   Address: 0x411E30
   Function: ___crtGetLocaleInfoA
   ============================================ */

int __cdecl __crtGetLocaleInfoA(LCID Locale, LCTYPE LCType, LPSTR lpLCData, int cchData, UINT CodePage)
{
  int result; // eax
  int v6; // edi
  WCHAR *v7; // esi
  int v8; // edi

  result = dword_42FFC8;
  if ( dword_42FFC8 == 0 )
  {
    if ( GetLocaleInfoA(Locale: 0, LCType: 1u, lpLCData: nullptr, cchData: 0) != 0 )
    {
      result = 2;
    }
    else
    {
      if ( GetLocaleInfoW(Locale: 0, LCType: 1u, lpLCData: nullptr, cchData: 0) == 0 )
        return 0;
      result = 1;
    }
    dword_42FFC8 = result;
  }
  if ( result == 2 )
    return GetLocaleInfoA(Locale, LCType, lpLCData, cchData);
  if ( result == 1 )
  {
    if ( CodePage == 0 )
      CodePage = ::CodePage;
    result = GetLocaleInfoW(Locale, LCType, lpLCData: nullptr, cchData: 0);
    v6 = result;
    if ( result != 0 )
    {
      result = (int)malloc(Size: 2 * result);
      v7 = (WCHAR *)result;
      if ( result != 0 )
      {
        if ( GetLocaleInfoW(Locale, LCType, lpLCData: (LPWSTR)result, cchData: v6) != 0 )
        {
          if ( cchData != 0 )
          {
            v8 = WideCharToMultiByte(
                   CodePage,
                   dwFlags: 0x220u,
                   lpWideCharStr: v7,
                   cchWideChar: -1,
                   lpMultiByteStr: lpLCData,
                   cbMultiByte: cchData,
                   lpDefaultChar: nullptr,
                   lpUsedDefaultChar: nullptr);
            if ( v8 != 0 )
            {
LABEL_21:
              free(Block: v7);
              return v8;
            }
          }
          else
          {
            v8 = WideCharToMultiByte(
                   CodePage,
                   dwFlags: 0x220u,
                   lpWideCharStr: v7,
                   cchWideChar: -1,
                   lpMultiByteStr: nullptr,
                   cbMultiByte: 0,
                   lpDefaultChar: nullptr,
                   lpUsedDefaultChar: nullptr);
            if ( v8 != 0 )
              goto LABEL_21;
          }
        }
        free(Block: v7);
        return 0;
      }
    }
  }
  return result;
}


/* ============================================
   Address: 0x411F70
   Function: __setmode_lk
   ============================================ */

int __cdecl _setmode_lk(int a1, int a2)
{
  int v2; // eax
  char v3; // cl
  _BYTE *v4; // edx
  int v5; // eax
  char v6; // cl

  v2 = dword_431020[a1 >> 5];
  v3 = *(_BYTE *)(v2 + 36 * (a1 & 0x1F) + 4);
  v4 = (_BYTE *)(v2 + 36 * (a1 & 0x1F) + 4);
  v5 = v3 & 0x80;
  if ( a2 == 0x8000 )
  {
    v6 = v3 & 0x7F;
LABEL_5:
    *v4 = v6;
    return v5 != 0 ? 0x4000 : 0x8000;
  }
  if ( a2 == 0x4000 )
  {
    v6 = v3 | 0x80;
    goto LABEL_5;
  }
  *_errno() = 22;
  return -1;
}


/* ============================================
   Address: 0x411FE0
   Function: ___ld12mul
   ============================================ */

unsigned int __cdecl __ld12mul(int a1, int a2)
{
  int v2; // edx
  __int16 v3; // ax
  int v4; // edi
  int v5; // ecx
  __int16 v6; // si
  unsigned int result; // eax
  __int16 v8; // si
  unsigned int v9; // ebx
  int i; // ebp
  unsigned __int16 *v11; // edi
  unsigned __int16 *v12; // esi
  __int16 v13; // si
  unsigned int v14; // ebx
  int v15; // esi
  unsigned int v16; // ecx
  unsigned int v17; // [esp+10h] [ebp-24h]
  unsigned int k; // [esp+10h] [ebp-24h]
  unsigned int *v19; // [esp+14h] [ebp-20h]
  __int16 v20; // [esp+18h] [ebp-1Ch]
  int v21; // [esp+1Ch] [ebp-18h]
  int v22; // [esp+20h] [ebp-14h]
  int j; // [esp+24h] [ebp-10h]
  unsigned int v24[3]; // [esp+28h] [ebp-Ch] BYREF

  v2 = a1;
  v3 = *(_WORD *)(a1 + 10);
  v4 = a2;
  v22 = 0;
  memset(v24, 0, sizeof(v24));
  v5 = *(_WORD *)(a2 + 10) & 0x7FFF;
  v6 = v3 ^ *(_WORD *)(a2 + 10);
  result = v3 & 0x7FFF;
  v8 = v6 & 0x8000;
  v9 = v5 + result;
  v20 = v8;
  v17 = v5 + result;
  if ( (unsigned __int16)result >= 0x7FFFu || (*(_WORD *)(a2 + 10) & 0x7FFF) == 0x7FFF || (unsigned __int16)v9 > 0xBFFDu )
  {
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = v8 != 0 ? -32768 : 2147450880;
  }
  else if ( (unsigned __int16)v9 > 0x3FBFu )
  {
    if ( (_WORD)result != 0
      || (result = *(_DWORD *)(a1 + 8), ++v9, v17 = v9, (result & 0x7FFFFFFF) != 0)
      || *(_DWORD *)(a1 + 4) != 0
      || *(_DWORD *)a1 != 0 )
    {
      if ( (_WORD)v5 != 0
        || (result = *(_DWORD *)(a2 + 8), v17 = v9 + 1, (result & 0x7FFFFFFF) != 0)
        || *(_DWORD *)(a2 + 4) != 0
        || *(_DWORD *)a2 != 0 )
      {
        v21 = 0;
        v19 = &v24[1];
        for ( i = 5; i > 0; --i )
        {
          v11 = (unsigned __int16 *)(v4 + 8);
          v12 = (unsigned __int16 *)(2 * v21 + v2);
          for ( j = i; j != 0; --j )
          {
            if ( __addl(a1: *(v19 - 1), a2: *v12 * *v11, a3: v19 - 1) != 0 )
              ++*(_WORD *)v19;
            ++v12;
            --v11;
          }
          v4 = a2;
          v2 = a1;
          v13 = v20;
          v19 = (unsigned int *)((char *)v19 + 2);
          ++v21;
        }
        v14 = v17 + 49154;
        for ( k = v14; (__int16)k > 0; LOWORD(v14) = k )
        {
          if ( (v24[2] & 0x80000000) != 0 )
            break;
          __shl_12(a1: v24);
          v2 = a1;
          v13 = v20;
          k += 0xFFFF;
        }
        if ( (__int16)v14 <= 0 )
        {
          LOWORD(v14) = v14 - 1;
          if ( (v14 & 0x8000u) != 0 )
          {
            v15 = -(__int16)v14;
            do
            {
              if ( (v24[0] & 1) != 0 )
                ++v22;
              __shr_12(a1: (int *)v24);
              --v15;
            }
            while ( v15 != 0 );
            v2 = a1;
            LOWORD(v14) = 0;
            v13 = v20;
          }
          if ( v22 != 0 )
            LOBYTE(v24[0]) |= 1u;
        }
        if ( LOWORD(v24[0]) > 0x8000u || (result = v24[0] & 0x1FFFF, (v24[0] & 0x1FFFF) == 0x18000) )
        {
          result = -1;
          if ( *(unsigned int *)((char *)v24 + 2) == -1 )
          {
            *(unsigned int *)((char *)v24 + 2) = 0;
            if ( *(unsigned int *)((char *)&v24[1] + 2) == -1 )
            {
              *(unsigned int *)((char *)&v24[1] + 2) = 0;
              if ( HIWORD(v24[2]) == 0xFFFF )
              {
                HIWORD(v24[2]) = 0x8000;
                LOWORD(v14) = v14 + 1;
              }
              else
              {
                ++HIWORD(v24[2]);
              }
            }
            else
            {
              ++*(unsigned int *)((char *)&v24[1] + 2);
            }
          }
          else
          {
            ++*(unsigned int *)((char *)v24 + 2);
          }
        }
        if ( (unsigned __int16)v14 < 0x7FFFu )
        {
          result = v24[1];
          *(_WORD *)v2 = HIWORD(v24[0]);
          v16 = v24[2];
          *(_DWORD *)(v2 + 2) = result;
          *(_DWORD *)(v2 + 6) = v16;
          *(_WORD *)(v2 + 10) = v13 | v14;
        }
        else
        {
          *(_DWORD *)(v2 + 4) = 0;
          *(_DWORD *)v2 = 0;
          *(_DWORD *)(v2 + 8) = v13 != 0 ? -32768 : 2147450880;
        }
      }
      else
      {
        *(_DWORD *)(a1 + 8) = 0;
        *(_DWORD *)(a1 + 4) = 0;
        *(_DWORD *)a1 = 0;
      }
    }
    else
    {
      *(_WORD *)(a1 + 10) = 0;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)a1 = 0;
  }
  return result;
}


/* ============================================
   Address: 0x4122A0
   Function: ___multtenpow12
   ============================================ */

void __cdecl __multtenpow12(_WORD *a1, int a2, int a3)
{
  int v3; // esi
  char *v4; // edi
  int v5; // eax
  int v6; // eax
  bool v7; // cf
  char *v8; // eax
  __int64 v9; // [esp+Ch] [ebp-Ch] BYREF
  int v10; // [esp+14h] [ebp-4h]

  v3 = a2;
  v4 = (char *)&unk_42B070 - 96;
  if ( a2 != 0 )
  {
    if ( a2 < 0 )
    {
      v3 = -a2;
      v4 = (char *)&unk_42B1D0 - 96;
    }
    if ( a3 == 0 )
      *a1 = 0;
    while ( v3 != 0 )
    {
      v4 += 84;
      v5 = v3 & 7;
      v3 >>= 3;
      if ( v5 != 0 )
      {
        v6 = 3 * v5;
        v7 = *(_WORD *)&v4[4 * v6] < 0x8000u;
        v8 = &v4[4 * v6];
        if ( !v7 )
        {
          v9 = *(_QWORD *)v8;
          v10 = *((_DWORD *)v8 + 2);
          --*(_DWORD *)((char *)&v9 + 2);
          v8 = (char *)&v9;
        }
        __ld12mul((int)a1, a2: (int)v8);
      }
    }
  }
}


/* ============================================
   Address: 0x412330
   Function: RtlUnwind
   ============================================ */

// attributes: thunk
void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  __imp_RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
}


/* ============================================
   Address: 0x412336
   Function: ReuseDDElParam
   ============================================ */

// attributes: thunk
LPARAM __stdcall ReuseDDElParam(LPARAM lParam, UINT msgIn, UINT msgOut, UINT_PTR uiLo, UINT_PTR uiHi)
{
  return __imp_ReuseDDElParam(lParam, msgIn, msgOut, uiLo, uiHi);
}


/* ============================================
   Address: 0x41233C
   Function: UnpackDDElParam
   ============================================ */

// attributes: thunk
BOOL __stdcall UnpackDDElParam(UINT msg, LPARAM lParam, PUINT_PTR puiLo, PUINT_PTR puiHi)
{
  return __imp_UnpackDDElParam(msg, lParam, puiLo, puiHi);
}


/* ============================================
   Address: 0x412342
   Function: ClosePrinter
   ============================================ */

// attributes: thunk
BOOL __stdcall ClosePrinter(HANDLE hPrinter)
{
  return __imp_ClosePrinter(hPrinter);
}


/* ============================================
   Address: 0x412348
   Function: DocumentPropertiesA
   ============================================ */

// attributes: thunk
LONG __stdcall DocumentPropertiesA(
        HWND hWnd,
        HANDLE hPrinter,
        LPSTR pDeviceName,
        PDEVMODEA pDevModeOutput,
        PDEVMODEA pDevModeInput,
        DWORD fMode)
{
  return __imp_DocumentPropertiesA(hWnd, hPrinter, pDeviceName, pDevModeOutput, pDevModeInput, fMode);
}


/* ============================================
   Address: 0x41234E
   Function: OpenPrinterA
   ============================================ */

// attributes: thunk
BOOL __stdcall OpenPrinterA(LPSTR pPrinterName, LPHANDLE phPrinter, LPPRINTER_DEFAULTSA pDefault)
{
  return __imp_OpenPrinterA(pPrinterName, phPrinter, pDefault);
}


/* ============================================
   Address: 0x412360
   Function: _LpfnGetDefWndProcNull
   ============================================ */

HANDLE __cdecl LpfnGetDefWndProcNull(HWND hWnd)
{
  if ( hWnd != nullptr )
    return GetPropA(hWnd, lpString: (LPCSTR)(unsigned __int16)lpString);
  else
    return nullptr;
}


/* ============================================
   Address: 0x412380
   Function: _LpfnGetDefWndProc
   ============================================ */

HANDLE __cdecl LpfnGetDefWndProc(HWND hWnd, int a2)
{
  HANDLE DefWndProcNull; // edi

  DefWndProcNull = LpfnGetDefWndProcNull(hWnd);
  if ( DefWndProcNull == nullptr )
  {
    if ( a2 == 6 )
      DefWndProcNull = hData;
    else
      DefWndProcNull = (HANDLE)dword_431BC4[6 * a2];
    SetPropA(hWnd, lpString: (LPCSTR)(unsigned __int16)lpString, hData: DefWndProcNull);
  }
  return DefWndProcNull;
}


/* ============================================
   Address: 0x4123D0
   Function: _SubclassWindow
   ============================================ */

HANDLE __cdecl SubclassWindow(HWND hWnd, LONG dwNewLong)
{
  HANDLE result; // eax
  void *v3; // eax
  CHAR ClassName[16]; // [esp+8h] [ebp-10h] BYREF

  result = GetPropA(hWnd, lpString: (LPCSTR)(unsigned __int16)nAtom);
  if ( result == nullptr )
  {
    result = GetPropA(hWnd, lpString: (LPCSTR)(unsigned __int16)lpString);
    if ( result == nullptr )
    {
      result = GetPropA(hWnd, lpString: (LPCSTR)(unsigned __int16)word_431172);
      if ( result == nullptr )
      {
        result = GetPropA(hWnd, lpString: (LPCSTR)(unsigned __int16)word_43116C);
        if ( result == nullptr )
        {
          result = GetPropA(hWnd, lpString: (LPCSTR)(unsigned __int16)word_431170);
          if ( result == nullptr )
          {
            result = GetPropA(hWnd, lpString: (LPCSTR)(unsigned __int16)word_43116A);
            if ( result == nullptr )
            {
              result = LpfnGetDefWndProcNull(hWnd);
              if ( result == nullptr )
              {
                if ( byte_431C65 != 0 && !IsWindowUnicode(hWnd) )
                {
                  GetClassNameA(hWnd, lpClassName: ClassName, nMaxCount: 16);
                  lstrcmpiA(lpString1: ClassName, lpString2: aEdit);
                }
                v3 = (void *)SetWindowLongA(hWnd, nIndex: -4, dwNewLong);
                return (HANDLE)SetPropA(hWnd, lpString: (LPCSTR)(unsigned __int16)lpString, hData: v3);
              }
            }
          }
        }
      }
    }
  }
  return result;
}


/* ============================================
   Address: 0x4124C0
   Function: _CallWndProcFilterProc@12
   ============================================ */

LRESULT __stdcall CallWndProcFilterProc(int code, WPARAM wParam, LPARAM lParam)
{
  LRESULT v3; // edi
  char WindowLongA; // al
  LPARAM v6; // [esp+8h] [ebp-4h] BYREF

  v3 = CallNextHookEx(hhk: hhk, nCode: code, wParam, lParam);
  if ( *(_DWORD *)(lParam + 12) == dword_42FFD4 )
  {
    UnhookWindowsHookEx(hhk: hhk);
    if ( (unsigned __int16)word_431180 < 0x35Fu
      || (WindowLongA = GetWindowLongA(hWnd: *(HWND *)(lParam + 12), nIndex: -16), v6 = 0, (WindowLongA & 4) == 0) )
    {
      v6 = 1;
    }
    SendMessageA(hWnd: *(HWND *)(lParam + 12), Msg: 0x11F0u, wParam: 0, lParam: (LPARAM)&v6);
    if ( v6 != 0 )
      SubclassWindow(hWnd: *(HWND *)(lParam + 12), dwNewLong: dwNewLong);
    hhk = nullptr;
    dwNewLong = 0;
    dword_42FFD4 = 0;
  }
  return v3;
}


/* ============================================
   Address: 0x412570
   Function: _HookSubclassWindow
   ============================================ */

HHOOK __cdecl HookSubclassWindow(int a1, LONG a2)
{
  DWORD CurrentThreadId; // eax
  HHOOK result; // eax

  dwNewLong = a2;
  dword_42FFD4 = a1;
  CurrentThreadId = GetCurrentThreadId();
  result = SetWindowsHookExA(idHook: 4, lpfn: CallWndProcFilterProc, hmod: hmod, dwThreadId: CurrentThreadId);
  hhk = result;
  return result;
}


/* ============================================
   Address: 0x4125B0
   Function: _CleanupSubclass
   ============================================ */

LRESULT __cdecl CleanupSubclass(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam, int a5)
{
  LRESULT (__stdcall *DefWndProc)(HWND, UINT, WPARAM, LPARAM); // eax
  LRESULT v6; // edi

  DefWndProc = (LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))LpfnGetDefWndProc(hWnd, a2: a5);
  v6 = CallWindowProcA(lpPrevWndFunc: DefWndProc, hWnd, Msg, wParam, lParam);
  RemovePropA(hWnd, lpString: (LPCSTR)(unsigned __int16)lpString);
  RemovePropA(hWnd, lpString: (LPCSTR)(unsigned __int16)word_431174);
  return v6;
}


/* ============================================
   Address: 0x412610
   Function: _DeleteObjectNull
   ============================================ */

HGDIOBJ __cdecl DeleteObjectNull(HGDIOBJ *a1)
{
  HGDIOBJ result; // eax

  result = *a1;
  if ( *a1 != nullptr )
  {
    result = (HGDIOBJ)DeleteObject(ho: *a1);
    *a1 = nullptr;
  }
  return result;
}


/* ============================================
   Address: 0x412630
   Function: _DeleteObjects
   ============================================ */

HGDIOBJ DeleteObjects()
{
  HGDIOBJ *v0; // esi

  v0 = (HGDIOBJ *)&dword_4311A4;
  do
    DeleteObjectNull(a1: v0++);
  while ( v0 < &dword_4311B0 );
  return DeleteObjectNull(a1: &dword_4311B0);
}


/* ============================================
   Address: 0x412660
   Function: _PatFill
   ============================================ */

BOOL __cdecl PatFill(HDC hdc, int *a2)
{
  return PatBlt(hdc, x: *a2, y: a2[1], w: a2[2] - *a2, h: a2[3] - a2[1], rop: 0xF00021u);
}


/* ============================================
   Address: 0x412690
   Function: _DrawRec3d
   ============================================ */

COLORREF __cdecl DrawRec3d(HDC hdc, LONG *a2, unsigned __int16 a3, unsigned __int16 a4, __int16 a5)
{
  COLORREF v5; // esi
  LONG v6; // edx
  LONG v7; // ebp
  RECT rect; // [esp+10h] [ebp-10h] BYREF

  v5 = SetBkColor(hdc, color: *(&color + a3));
  v6 = a2[1];
  v7 = a2[2];
  rect.left = *a2;
  rect.top = v6;
  rect.right = v7;
  rect.bottom = v6 + 1;
  if ( (a5 & 2) != 0 )
    ExtTextOutA(hdc, x: 0, y: 0, options: 2u, lprect: &rect, lpString: nullptr, c: 0, lpDx: nullptr);
  rect.bottom = a2[3];
  rect.right = rect.left + 1;
  if ( (a5 & 1) != 0 )
    ExtTextOutA(hdc, x: 0, y: 0, options: 2u, lprect: &rect, lpString: nullptr, c: 0, lpDx: nullptr);
  if ( a3 != a4 )
    SetBkColor(hdc, color: *(&color + a4));
  rect.right = a2[2];
  rect.left = rect.right - 1;
  if ( (a5 & 4) != 0 )
    ExtTextOutA(hdc, x: 0, y: 0, options: 2u, lprect: &rect, lpString: nullptr, c: 0, lpDx: nullptr);
  if ( (a5 & 8) != 0 )
  {
    rect.left = *a2;
    rect.top = rect.bottom - 1;
    if ( (a5 & 0x1000) != 0 )
      rect.right -= 2;
    ExtTextOutA(hdc, x: 0, y: 0, options: 2u, lprect: &rect, lpString: nullptr, c: 0, lpDx: nullptr);
  }
  return SetBkColor(hdc, color: v5);
}


/* ============================================
   Address: 0x4127D0
   Function: _DrawInsetRect3d
   ============================================ */

COLORREF __cdecl DrawInsetRect3d(HDC hdc, int *a2, __int16 a3)
{
  int v3; // esi
  int v4; // edi
  int v5; // eax
  int v7; // [esp+8h] [ebp-10h] BYREF
  int v8; // [esp+Ch] [ebp-Ch]
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h]

  v3 = a2[1];
  v4 = a2[2];
  v7 = *a2;
  v5 = a2[3];
  v8 = v3;
  v9 = v4;
  v10 = v5;
  DrawRec3d(hdc, a2: &v7, a3: 7u, a4: 1u, a5: a3 & 0xF);
  --v7;
  --v8;
  ++v9;
  ++v10;
  return DrawRec3d(hdc, a2: &v7, a3: 2u, a4: 0, a5: a3);
}


/* ============================================
   Address: 0x412840
   Function: _ClipCtlDc
   ============================================ */

int __cdecl ClipCtlDc(HWND hWnd, HDC hdc)
{
  struct tagRECT Rect; // [esp+0h] [ebp-10h] BYREF

  GetClientRect(hWnd, lpRect: &Rect);
  return IntersectClipRect(hdc, left: Rect.left, top: Rect.top, right: Rect.right, bottom: Rect.bottom);
}


/* ============================================
   Address: 0x412880
   Function: _MyGetTextExtent
   ============================================ */

struct tagSIZE *__cdecl MyGetTextExtent(HDC hdc, CHAR *a2, struct tagSIZE *a3)
{
  LPSTR v3; // eax
  CHAR *v4; // esi
  CHAR v5; // cl
  const CHAR *v6; // eax
  CHAR v7; // cl
  int v8; // eax
  struct tagSIZE sz; // [esp+Ch] [ebp-108h] BYREF
  CHAR String[256]; // [esp+14h] [ebp-100h] BYREF

  v3 = a2;
  v4 = String;
  while ( *v3 != 0 )
  {
    v5 = *v3;
    if ( *v3 == 38 )
    {
      if ( *++v3 == 0 )
        break;
    }
    else if ( byte_431C65 != 0 )
    {
      if ( v5 == byte_431C64 )
      {
        if ( *++v3 == 0 )
          break;
      }
      else if ( v5 == 30 || v5 == 31 )
      {
        v6 = v3 + 1;
        if ( *v6 == 0 )
          break;
        v3 = CharNextA(lpsz: v6);
        continue;
      }
    }
    v7 = *v3++;
    *v4++ = v7;
  }
  *v4 = 0;
  v8 = lstrlenA(lpString: String);
  GetTextExtentPointA(hdc, lpString: String, c: v8, lpsz: &sz);
  *a3 = sz;
  return a3;
}


/* ============================================
   Address: 0x412930
   Function: _Ctl3dRegister@4
   ============================================ */

BOOL __stdcall Ctl3dRegister(HINSTANCE a1)
{
  InitializeCriticalSection(lpCriticalSection: &stru_431140);
  EnterCriticalSection(lpCriticalSection: &stru_431140);
  ++dword_431164;
  LeaveCriticalSection(lpCriticalSection: &stru_431140);
  if ( dword_431164 == 1 )
  {
    LibMain(a1, a2: 1);
    FInit3dDialogs();
  }
  if ( Ctl3dIsAutoSubclass() )
    Ctl3dAutoSubclass(a1);
  return dword_431160;
}


/* ============================================
   Address: 0x4129A0
   Function: _Ctl3dUnregister@4
   ============================================ */

BOOL __stdcall Ctl3dUnregister(HINSTANCE a1)
{
  int v1; // ebp
  DWORD CurrentThreadId; // ebx
  int v3; // eax
  int *v4; // edi

  v1 = 0;
  CurrentThreadId = GetCurrentThreadId();
  EnterCriticalSection(lpCriticalSection: &stru_431140);
  if ( dword_4311BC > 0 )
  {
    do
    {
      if ( dword_4311C4[5 * v1] == CurrentThreadId )
      {
        v3 = dword_4311CC[5 * v1] - 1;
        dword_4311CC[5 * v1] = v3;
        if ( v3 == 0 || (HINSTANCE)dword_4311C0[5 * v1] == a1 )
        {
          UnhookWindowsHookEx(hhk: (HHOOK)dword_4311C8[5 * v1]);
          if ( v1 < --dword_4311BC )
          {
            v4 = &dword_4311C0[5 * v1];
            do
            {
              ++v1;
              qmemcpy(v4, v4 + 5, 0x14u);
              v4 += 5;
            }
            while ( v1 < dword_4311BC );
          }
        }
      }
      ++v1;
    }
    while ( v1 < dword_4311BC );
  }
  --dword_431164;
  LeaveCriticalSection(lpCriticalSection: &stru_431140);
  if ( dword_431164 == 0 )
    End3dDialogs();
  return true;
}


/* ============================================
   Address: 0x412A60
   Function: _Ctl3dAutoSubclass@4
   ============================================ */

BOOL __stdcall Ctl3dAutoSubclass(HINSTANCE a1)
{
  return Ctl3dAutoSubclassEx(a1, a2: 0);
}


/* ============================================
   Address: 0x412A70
   Function: _Ctl3dAutoSubclassEx@8
   ============================================ */

BOOL __stdcall Ctl3dAutoSubclassEx(HINSTANCE a1, DWORD a2)
{
  DWORD v3; // esi
  int CurrentThreadId; // edi
  int v5; // eax
  int *v6; // ecx
  HHOOK v7; // eax

  if ( (unsigned __int16)word_431180 < 0x30Au )
    return false;
  if ( dword_431160 == 0 )
    return false;
  v3 = a2 | 1;
  if ( (a2 & 2) != 0 )
    v3 = a2 & 0xFFFFFFFC;
  EnterCriticalSection(lpCriticalSection: &stru_431140);
  if ( dword_4311BC != 128 )
  {
    CurrentThreadId = GetCurrentThreadId();
    v5 = 0;
    if ( dword_4311BC > 0 )
    {
      v6 = dword_4311C4;
      while ( *v6 != CurrentThreadId )
      {
        v6 += 5;
        if ( ++v5 >= dword_4311BC )
          goto LABEL_12;
      }
      ++dword_4311CC[5 * v5];
      goto LABEL_14;
    }
LABEL_12:
    v7 = SetWindowsHookExA(idHook: 5, lpfn: Ctl3dHook, hmod: hmod, dwThreadId: CurrentThreadId);
    if ( v7 != nullptr )
    {
      dword_4311C0[5 * dword_4311BC] = (int)a1;
      dword_4311C4[5 * dword_4311BC] = CurrentThreadId;
      dword_4311C8[5 * dword_4311BC] = (int)v7;
      dword_4311CC[5 * dword_4311BC] = 1;
      dword_4311D0[5 * dword_4311BC] = v3;
      dword_4311B4 = CurrentThreadId;
      dword_4311B8 = dword_4311BC++;
LABEL_14:
      LeaveCriticalSection(lpCriticalSection: &stru_431140);
      return true;
    }
  }
  LeaveCriticalSection(lpCriticalSection: &stru_431140);
  return false;
}


/* ============================================
   Address: 0x412BB0
   Function: _Ctl3dIsAutoSubclass@0
   ============================================ */

BOOL __stdcall Ctl3dIsAutoSubclass()
{
  DWORD CurrentThreadId; // eax
  int v1; // edx
  int *i; // ecx

  CurrentThreadId = GetCurrentThreadId();
  v1 = 0;
  if ( dword_4311BC <= 0 )
    return false;
  for ( i = dword_4311C4; *i != CurrentThreadId; i += 5 )
  {
    if ( ++v1 >= dword_4311BC )
      return false;
  }
  return true;
}


/* ============================================
   Address: 0x412BE0
   Function: _Ctl3dUnAutoSubclass@0
   ============================================ */

BOOL __stdcall Ctl3dUnAutoSubclass()
{
  int v0; // ebp
  DWORD CurrentThreadId; // ebx
  int v2; // eax
  int *v3; // edi

  v0 = 0;
  CurrentThreadId = GetCurrentThreadId();
  EnterCriticalSection(lpCriticalSection: &stru_431140);
  if ( dword_4311BC > 0 )
  {
    do
    {
      if ( dword_4311C4[5 * v0] == CurrentThreadId )
      {
        v2 = dword_4311CC[5 * v0] - 1;
        dword_4311CC[5 * v0] = v2;
        if ( v2 == 0 )
        {
          UnhookWindowsHookEx(hhk: (HHOOK)dword_4311C8[5 * v0]);
          if ( v0 < --dword_4311BC )
          {
            v3 = &dword_4311C0[5 * v0];
            do
            {
              ++v0;
              qmemcpy(v3, v3 + 5, 0x14u);
              v3 += 5;
            }
            while ( v0 < dword_4311BC );
          }
        }
      }
      ++v0;
    }
    while ( v0 < dword_4311BC );
  }
  LeaveCriticalSection(lpCriticalSection: &stru_431140);
  return true;
}


/* ============================================
   Address: 0x412C80
   Function: _Ctl3dSubclassCtl@4
   ============================================ */

BOOL __stdcall Ctl3dSubclassCtl(HWND hWnd)
{
  if ( dword_431160 != 0 )
    return DoSubclassCtl(hWnd, a2: 0xFFFF, a3: 0, a4: 0);
  else
    return false;
}


/* ============================================
   Address: 0x412CB0
   Function: _Ctl3dUnsubclassCtl@4
   ============================================ */

BOOL __stdcall Ctl3dUnsubclassCtl(HWND hWnd)
{
  int (__stdcall *WindowLongA)(HWND, UINT, WPARAM, LPARAM); // eax
  int i; // ecx
  HANDLE DefWndProc; // ebp
  HANDLE v5; // ebp
  HWND j; // edi

  if ( dword_431160 == 0 )
    return false;
  WindowLongA = (int (__stdcall *)(HWND, UINT, WPARAM, LPARAM))GetWindowLongA(hWnd, nIndex: -4);
  for ( i = 0; i < 6; ++i )
  {
    if ( (int (__stdcall *)(HWND, UINT, WPARAM, LPARAM))*(&dword_431BC0 + 6 * i) == WindowLongA )
    {
      DefWndProc = LpfnGetDefWndProc(hWnd, a2: i);
      RemovePropA(hWnd, lpString: (LPCSTR)(unsigned __int16)lpString);
      SetWindowLongA(hWnd, nIndex: -4, dwNewLong: (LONG)DefWndProc);
      WindowLongA = nullptr;
      i = 16;
    }
  }
  if ( i == 6 )
  {
    if ( WindowLongA == Ctl3dDlgProc )
    {
      v5 = LpfnGetDefWndProc(hWnd, a2: 6);
      RemovePropA(hWnd, lpString: (LPCSTR)(unsigned __int16)lpString);
      SetWindowLongA(hWnd, nIndex: -4, dwNewLong: (LONG)v5);
    }
    else if ( GetPropA(hWnd, lpString: (LPCSTR)(unsigned __int16)lpString) != nullptr
           || GetPropA(hWnd, lpString: (LPCSTR)(unsigned __int16)word_431172) != nullptr
           || GetPropA(hWnd, lpString: (LPCSTR)(unsigned __int16)word_431170) != nullptr )
    {
      SetPropA(hWnd, lpString: (LPCSTR)(unsigned __int16)word_431174, hData: HANDLE_FLAG_INHERIT);
    }
  }
  for ( j = GetWindow(hWnd, uCmd: 5u); j != nullptr; j = GetWindow(hWnd: j, uCmd: 2u) )
    Ctl3dUnsubclassCtl(a1: j);
  return true;
}


/* ============================================
   Address: 0x412DC0
   Function: _Ctl3dSubclassCtlEx@8
   ============================================ */

BOOL __stdcall Ctl3dSubclassCtlEx(HWND hWnd, int a2)
{
  LONG WindowLongA; // ebx

  if ( dword_431160 == 0 )
    return false;
  if ( (unsigned int)a2 > 6 )
    return false;
  if ( LpfnGetDefWndProcNull(hWnd) != nullptr )
    return false;
  WindowLongA = GetWindowLongA(hWnd, nIndex: -16);
  GetParent(hWnd);
  if ( (*(&off_4250E8 + 8 * a2))(a1: (int)hWnd, a2: WindowLongA) == 1 )
    SubclassWindow(hWnd, dwNewLong: *(&dword_431BC0 + 6 * a2));
  return true;
}


/* ============================================
   Address: 0x412E50
   Function: _CheckChildSubclass
   ============================================ */

HANDLE __cdecl CheckChildSubclass(HWND hWnd, __int16 a2, int a3)
{
  HANDLE result; // eax
  LPARAM lParam; // [esp+Ch] [ebp-4h] BYREF

  if ( LpfnGetDefWndProcNull(hWnd) == nullptr )
    return (HANDLE)DoSubclassCtl(hWnd, a2, a3: 0, a4: a3);
  result = GetPropA(hWnd, lpString: (LPCSTR)(unsigned __int16)word_431174);
  if ( result == nullptr )
  {
    lParam = 666;
    result = (HANDLE)SendMessageA(hWnd, Msg: 0x1944u, wParam: 0, (LPARAM)&lParam);
    if ( lParam == 666 )
    {
      result = (HANDLE)SendMessageA(hWnd, Msg: 0x1943u, wParam: 0, (LPARAM)&lParam);
      if ( lParam == 666 )
      {
        RemovePropA(hWnd, lpString: (LPCSTR)(unsigned __int16)lpString);
        return (HANDLE)DoSubclassCtl(hWnd, a2, a3: 0, a4: a3);
      }
    }
  }
  return result;
}


/* ============================================
   Address: 0x412F00
   Function: _Ctl3dCheckSubclassDlg@8
   ============================================ */

int __stdcall Ctl3dCheckSubclassDlg(HWND hWnd, __int16 a2)
{
  HWND i; // edi
  HWND j; // ebx

  if ( dword_431160 == 0 )
    return 0;
  for ( i = GetWindow(hWnd, uCmd: 5u); i != nullptr; i = GetWindow(hWnd: i, uCmd: 2u) )
  {
    CheckChildSubclass(hWnd: i, a2, a3: 0);
    for ( j = GetWindow(hWnd: i, uCmd: 5u); j != nullptr; j = GetWindow(hWnd: j, uCmd: 2u) )
      CheckChildSubclass(hWnd: j, a2, a3: (int)i);
  }
  return 1;
}


/* ============================================
   Address: 0x412F80
   Function: _Ctl3dSubclassDlgEx@8
   ============================================ */

BOOL __stdcall Ctl3dSubclassDlgEx(HWND hWnd, DWORD a2)
{
  HWND i; // ebx

  if ( dword_431160 == 0 )
    return false;
  for ( i = GetWindow(hWnd, uCmd: 5u); i != nullptr; i = GetWindow(hWnd: i, uCmd: 2u) )
    DoSubclassCtl(hWnd: i, a2, a3: 0, a4: 0);
  SubclassWindow(hWnd, dwNewLong: (LONG)Ctl3dDlgProc);
  return true;
}


/* ============================================
   Address: 0x412FF0
   Function: _Ctl3dCtlColorEx@12
   ============================================ */

HBRUSH __stdcall Ctl3dCtlColorEx(UINT wm, WPARAM wParam, LPARAM lParam)
{
  if ( dword_431160 == 0 || wm < 0x134 || wm == 311 )
    return nullptr;
  if ( wm == 308
    && ((unsigned __int16)word_431180 >= 0x35Fu
     || GetWindow(hWnd: (HWND)lParam, uCmd: 5u) == nullptr
     || (GetWindowLongA(hWnd: (HWND)lParam, nIndex: -16) & 3) == 3) )
  {
    return nullptr;
  }
  SetTextColor(hdc: (HDC)wParam, color: dword_431190);
  SetBkColor(hdc: (HDC)wParam, color: dword_431188);
  return (HBRUSH)h;
}


/* ============================================
   Address: 0x413080
   Function: _Ctl3dColorChange@0
   ============================================ */

BOOL __stdcall Ctl3dColorChange()
{
  int v0; // esi

  EnterCriticalSection(lpCriticalSection: &stru_431140);
  v0 = InternalCtl3dColorChange(a1: 0);
  LeaveCriticalSection(lpCriticalSection: &stru_431140);
  return v0;
}


/* ============================================
   Address: 0x4130B0
   Function: _Ctl3dDlgFramePaintI@20
   ============================================ */

LRESULT __stdcall Ctl3dDlgFramePaintI(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam, int a5)
{
  LRESULT (__stdcall *DefWndProc)(HWND, UINT, WPARAM, LPARAM); // eax
  HWND v6; // esi
  LRESULT result; // eax
  LONG WindowLongA; // eax
  BOOL v9; // ebp
  int v10; // ebx
  HDC WindowDC; // edi
  LRESULT v12; // [esp+10h] [ebp-3Ch]
  LPARAM v13; // [esp+14h] [ebp-38h] BYREF
  HGDIOBJ h; // [esp+18h] [ebp-34h]
  struct tagRECT Rect; // [esp+1Ch] [ebp-30h] BYREF
  struct tagRECT rc; // [esp+2Ch] [ebp-20h] BYREF
  int v17[4]; // [esp+3Ch] [ebp-10h] BYREF

  if ( a5 != 0 )
  {
    DefWndProc = nullptr;
    v6 = hWnd;
  }
  else
  {
    v6 = hWnd;
    DefWndProc = (LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))LpfnGetDefWndProc(hWnd, a2: 6);
  }
  if ( DefWndProc != nullptr )
    result = CallWindowProcA(lpPrevWndFunc: DefWndProc, hWnd: v6, Msg, wParam, lParam);
  else
    result = DefWindowProcA(hWnd: v6, Msg, wParam, lParam);
  v12 = result;
  if ( dword_431160 != 0 )
  {
    if ( IsIconic(hWnd: v6) )
    {
      return v12;
    }
    else
    {
      v13 = 1;
      SendMessageA(hWnd: v6, Msg: 0x11EFu, wParam: 0, lParam: (LPARAM)&v13);
      WindowLongA = GetWindowLongA(hWnd: v6, nIndex: -16);
      if ( v13 != 0 && (WindowLongA & 0x10400080) == 0x10400080 )
      {
        v9 = (WindowLongA & 0xC00000) == 12582912;
        v10 = dword_431C58 - v9;
        WindowDC = GetWindowDC(hWnd: v6);
        GetWindowRect(hWnd: v6, lpRect: &Rect);
        Rect.right -= Rect.left;
        Rect.bottom -= Rect.top;
        Rect.top = 0;
        Rect.left = 0;
        DrawRec3d(hdc: WindowDC, a2: &Rect.left, a3: 2u, a4: 7u, a5: 15);
        InflateRect(lprc: &Rect, dx: -1, dy: -1);
        DrawRec3d(hdc: WindowDC, a2: &Rect.left, a3: 0, a4: 2u, a5: 15);
        InflateRect(lprc: &Rect, dx: -1, dy: -1);
        h = SelectObject(hdc: WindowDC, h: ::h);
        rc.left = Rect.left;
        rc.top = Rect.top;
        rc.bottom = Rect.bottom;
        rc.right = dword_431C54 + Rect.left;
        PatFill(hdc: WindowDC, a2: &rc.left);
        OffsetRect(lprc: &rc, dx: Rect.right - Rect.left - dword_431C54, dy: 0);
        PatFill(hdc: WindowDC, a2: &rc.left);
        rc.left = dword_431C54 + Rect.left;
        rc.right = Rect.right - dword_431C54;
        rc.bottom = v10 + rc.top;
        PatFill(hdc: WindowDC, a2: &rc.left);
        if ( v9 )
        {
          v17[0] = rc.left;
          v17[2] = rc.right;
          v17[1] = rc.top + v10;
          v17[3] = rc.top + v10 + dword_431C5C;
          DrawRec3d(hdc: WindowDC, a2: v17, a3: 2u, a4: 0, a5: 15);
        }
        rc.top += Rect.bottom - Rect.top - dword_431C54;
        rc.bottom = dword_431C58 + rc.top;
        PatFill(hdc: WindowDC, a2: &rc.left);
        SelectObject(hdc: WindowDC, h);
        ReleaseDC(hWnd: v6, hDC: WindowDC);
      }
      return v12;
    }
  }
  return result;
}


/* ============================================
   Address: 0x413360
   Function: _Ctl3dWinIniChange@0
   ============================================ */

void __stdcall Ctl3dWinIniChange()
{
  CHAR ReturnedString[12]; // [esp+8h] [ebp-Ch] BYREF

  if ( byte_431C65 != 0 )
  {
    EnterCriticalSection(lpCriticalSection: &stru_431140);
    byte_431C64 = 30;
    GetProfileStringA(
      lpAppName: AppName,
      lpKeyName: KeyName,
      lpDefault: Default,
      lpReturnedString: ReturnedString,
      nSize: 9u);
    if ( lstrcmpiA(lpString1: ReturnedString, lpString2: aKanji) == 0 )
      byte_431C64 = 31;
    GetProfileStringA(
      lpAppName: AppName,
      lpKeyName: aHangeulmenu,
      lpDefault: "english",
      lpReturnedString: ReturnedString,
      nSize: 9u);
    if ( lstrcmpiA(lpString1: ReturnedString, lpString2: aHangeul) == 0 )
      byte_431C64 = 31;
    LeaveCriticalSection(lpCriticalSection: &stru_431140);
  }
}


/* ============================================
   Address: 0x413400
   Function: _FInit3dDialogs
   ============================================ */

int FInit3dDialogs()
{
  HDC DC; // ebx
  int DeviceCaps; // edi
  ATOM v3; // ax
  ATOM v4; // ax
  LONG *v5; // ebx
  int (__stdcall **v6)(HWND, UINT, WPARAM, LPARAM); // esi
  const CHAR *v7; // [esp-8h] [ebp-3Ch]
  struct tagWNDCLASSA WndClass; // [esp+Ch] [ebp-28h] BYREF

  EnterCriticalSection(lpCriticalSection: &stru_431140);
  DC = GetDC(hWnd: nullptr);
  DeviceCaps = GetDeviceCaps(hdc: DC, index: 12);
  dword_431160 = GetDeviceCaps(hdc: DC, index: 14) * DeviceCaps >= 4;
  if ( GetSystemMetrics(nIndex: 1) == 350 && GetSystemMetrics(nIndex: 0) == 640 )
    dword_431160 = 0;
  ReleaseDC(hWnd: nullptr, hDC: DC);
  if ( dword_431160 == 0 )
    goto LABEL_7;
  LOWORD(nAtom) = GlobalAddAtomA(lpString: aC3d);
  if ( (_WORD)nAtom == 0 )
    goto LABEL_6;
  LOWORD(lpString) = GlobalAddAtomA(lpString: aC3dnew);
  if ( (_WORD)lpString == 0 )
    goto LABEL_6;
  LOWORD(word_43116C) = GlobalAddAtomA(lpString: aC3dl);
  v3 = GlobalAddAtomA(lpString: aC3dh);
  LOWORD(word_43116A) = v3;
  if ( (_WORD)word_43116C != 0 && v3 != 0 )
  {
    LOWORD(word_431172) = GlobalAddAtomA(lpString: aC3dlnew);
    v4 = GlobalAddAtomA(lpString: aC3dhnew);
    LOWORD(word_431170) = v4;
    if ( (_WORD)word_431172 != 0 && v4 != 0 )
    {
      LOWORD(word_431174) = GlobalAddAtomA(lpString: aC3dd);
      if ( (_WORD)word_431174 != 0 )
      {
        byte_431C65 = GetSystemMetrics(nIndex: 42);
        Ctl3dWinIniChange();
        if ( InternalCtl3dColorChange(a1: 1) != 0 )
        {
          v5 = &dword_431BC0;
          v6 = &off_4250E4;
          do
          {
            *v5 = (LONG)*v6;
            v5 += 6;
            v7 = (const CHAR *)(v6 - 5);
            v6 += 8;
            GetClassInfoA(hInstance: nullptr, lpClassName: v7, lpWndClass: &WndClass);
            *(v5 - 5) = (LONG)WndClass.lpfnWndProc;
          }
          while ( v6 < (int (__stdcall **)(HWND, UINT, WPARAM, LPARAM))&off_4251A4 );
          if ( GetClassInfoA(hInstance: nullptr, lpClassName: (LPCSTR)0x8002, lpWndClass: &WndClass) )
            hData = WndClass.lpfnWndProc;
          else
            hData = DefDlgProcA;
          goto LABEL_7;
        }
      }
LABEL_6:
      dword_431160 = 0;
LABEL_7:
      LeaveCriticalSection(lpCriticalSection: &stru_431140);
      return dword_431160;
    }
    dword_431160 = 0;
    return 0;
  }
  else
  {
    dword_431160 = 0;
    return 0;
  }
}


/* ============================================
   Address: 0x4135F0
   Function: _End3dDialogs
   ============================================ */

void End3dDialogs()
{
  LONG *v0; // eax

  EnterCriticalSection(lpCriticalSection: &stru_431140);
  v0 = &dword_431BC0;
  do
  {
    if ( *v0 != 0 )
      *v0 = 0;
    v0 += 6;
  }
  while ( v0 < (LONG *)&hData );
  DeleteObjects();
  if ( (_WORD)nAtom != 0 )
    GlobalDeleteAtom(nAtom: (ATOM)nAtom);
  if ( (_WORD)lpString != 0 )
    GlobalDeleteAtom(nAtom: (ATOM)lpString);
  if ( (_WORD)word_43116C != 0 )
    GlobalDeleteAtom(nAtom: (ATOM)word_43116C);
  if ( (_WORD)word_43116A != 0 )
    GlobalDeleteAtom(nAtom: (ATOM)word_43116A);
  if ( (_WORD)word_431172 != 0 )
    GlobalDeleteAtom(nAtom: (ATOM)word_431172);
  if ( (_WORD)word_431170 != 0 )
    GlobalDeleteAtom(nAtom: (ATOM)word_431170);
  if ( (_WORD)word_431174 != 0 )
    GlobalDeleteAtom(nAtom: (ATOM)word_431174);
  dword_431160 = 0;
  LeaveCriticalSection(lpCriticalSection: &stru_431140);
}


/* ============================================
   Address: 0x4136D0
   Function: _InternalCtl3dColorChange
   ============================================ */

int __cdecl InternalCtl3dColorChange(int a1)
{
  unsigned __int16 i; // si
  int v3; // edi
  unsigned __int16 v4; // si
  int v5; // eax
  unsigned __int16 v6; // ax
  unsigned __int16 j; // si
  int v8; // eax
  HGDIOBJ UIBitmap; // [esp+Ch] [ebp-30h] BYREF
  _DWORD v10[3]; // [esp+10h] [ebp-2Ch] BYREF
  COLORREF color[8]; // [esp+1Ch] [ebp-20h] BYREF

  if ( dword_431160 == 0 )
    return 0;
  for ( i = 0; i < 8u; ++i )
  {
    v3 = i;
    color[v3] = GetSysColor(nIndex: *((unsigned __int16 *)&nIndex + v3));
  }
  if ( word_431180 == 768 )
    color[0] = 0xFFFFFF;
  if ( color[6] == 0 || color[1] == color[6] )
  {
    color[6] = 12632256;
    if ( color[1] != 8421504 )
      color[6] = 8421504;
  }
  if ( a1 == 0 && memcmp(&::color, color, 0x20u) == 0 )
    return 1;
  v4 = 0;
  UIBitmap = (HGDIOBJ)LoadUIBitmap(
                        hModule: hModule,
                        lpName: (LPCSTR)0x67C7,
                        a3: color[5],
                        a4: color[1],
                        a5: color[2],
                        a6: color[0],
                        a7: color[4],
                        a8: color[7]);
  do
  {
    v5 = v4++;
    v10[v5] = CreateSolidBrush(color: color[v5]);
  }
  while ( v4 < 3u );
  v6 = 0;
  while ( v10[v6] != 0 )
  {
    if ( ++v6 >= 3u )
    {
      if ( UIBitmap != nullptr )
      {
        DeleteObjects();
        dword_4311A4 = v10[0];
        h = (HGDIOBJ)v10[1];
        dword_4311AC = (HGDIOBJ)v10[2];
        qmemcpy(&::color, color, 32);
        dword_4311B0 = UIBitmap;
        return 1;
      }
      break;
    }
  }
  for ( j = 0; j < 3u; ++j )
  {
    v8 = j;
    DeleteObjectNull(a1: (HGDIOBJ *)&v10[v8]);
  }
  DeleteObjectNull(a1: &UIBitmap);
  return 0;
}


/* ============================================
   Address: 0x413860
   Function: _Ctl3dDlgProc@16
   ============================================ */

unsigned int __stdcall Ctl3dDlgProc(HWND hWnd, UINT Msg, WPARAM wParam, _DWORD *lParam)
{
  unsigned int result; // eax
  LRESULT (__stdcall *DefWndProc)(HWND, UINT, WPARAM, LPARAM); // eax
  WPARAM v6; // ebx
  LPARAM v7; // ebp
  LRESULT (__stdcall *v8)(HWND, UINT, WPARAM, LPARAM); // eax
  LRESULT v9; // edi
  LRESULT (__stdcall *v10)(HWND, UINT, WPARAM, LPARAM); // eax
  LRESULT (__stdcall *WindowLongA)(HWND, UINT, WPARAM, LPARAM); // eax
  LRESULT (__stdcall *v12)(HWND, UINT, WPARAM, LPARAM); // eax
  LRESULT (__stdcall *v13)(HWND, UINT, WPARAM, LPARAM); // eax
  LPARAM v14; // [esp+10h] [ebp-18h] BYREF
  WNDPROC lpPrevWndFunc; // [esp+14h] [ebp-14h]
  CHAR ClassName[16]; // [esp+18h] [ebp-10h] BYREF

  if ( Msg == 130 )
    return CleanupSubclass(hWnd, Msg: 0x82u, wParam, (LPARAM)lParam, a5: 6);
  if ( GetPropA(hWnd, lpString: (LPCSTR)(unsigned __int16)word_431174) != nullptr )
    goto LABEL_4;
  if ( Msg <= 0x86 )
  {
    if ( Msg < 0x85 && Msg != 12 )
      goto LABEL_8;
    if ( (unsigned __int16)word_431180 >= 0x35Fu || IsIconic(hWnd) )
    {
LABEL_4:
      DefWndProc = (LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))LpfnGetDefWndProc(hWnd, a2: 6);
      return CallWindowProcA(lpPrevWndFunc: DefWndProc, hWnd, Msg, wParam, (LPARAM)lParam);
    }
    return Ctl3dDlgFramePaintI(hWnd, Msg, wParam, (LPARAM)lParam, a5: 0);
  }
  if ( Msg > 0x138 )
  {
    if ( Msg < 0x1943 || Msg > 0x1944 )
      goto LABEL_8;
    *lParam = 1;
    return 1006;
  }
  if ( Msg >= 0x132 )
  {
    GetClassNameA(hWnd, lpClassName: ClassName, nMaxCount: 16);
    if ( lstrcmpA(lpString1: String1, lpString2: ClassName) != 0 )
    {
      v7 = (LPARAM)lParam;
      v6 = wParam;
      v10 = (LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))LpfnGetDefWndProc(hWnd, a2: 6);
      result = CallWindowProcA(lpPrevWndFunc: v10, hWnd, Msg: Msg + 3263, wParam, (LPARAM)lParam);
      if ( result > 1 )
        goto LABEL_42;
    }
    else
    {
      WindowLongA = (LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))GetWindowLongA(hWnd, nIndex: 4);
      if ( WindowLongA == nullptr )
      {
        v7 = (LPARAM)lParam;
        v6 = wParam;
        result = (unsigned int)Ctl3dCtlColorEx(wm: Msg, wParam, (LPARAM)lParam);
        goto LABEL_42;
      }
      if ( (unsigned int)WindowLongA <= 0xFFFF0000 || (unsigned __int16)word_431180 > 0x30Au )
      {
        v7 = (LPARAM)lParam;
        v6 = wParam;
        result = CallWindowProcA(lpPrevWndFunc: WindowLongA, hWnd, Msg, wParam, (LPARAM)lParam);
        if ( result > 1
          || (v13 = (LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))LpfnGetDefWndProc(hWnd, a2: 6),
              (result = CallWindowProcA(lpPrevWndFunc: v13, hWnd, Msg: Msg + 3263, wParam, (LPARAM)lParam)) > 1) )
        {
LABEL_42:
          if ( result == 0 )
            goto LABEL_9;
          return result;
        }
      }
      else
      {
        v7 = (LPARAM)lParam;
        v6 = wParam;
        v12 = (LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))LpfnGetDefWndProc(hWnd, a2: 6);
        result = CallWindowProcA(lpPrevWndFunc: v12, hWnd, Msg: Msg + 3263, wParam, (LPARAM)lParam);
        if ( result > 1 )
          goto LABEL_42;
      }
    }
    result = (unsigned int)Ctl3dCtlColorEx(wm: Msg, wParam: v6, lParam: v7);
    goto LABEL_42;
  }
  if ( Msg != 272 )
  {
LABEL_8:
    v6 = wParam;
    v7 = (LPARAM)lParam;
LABEL_9:
    v8 = (LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))LpfnGetDefWndProc(hWnd, a2: 6);
    return CallWindowProcA(lpPrevWndFunc: v8, hWnd, Msg, wParam: v6, lParam: v7);
  }
  lpPrevWndFunc = (WNDPROC)LpfnGetDefWndProc(hWnd, a2: 6);
  if ( (unsigned __int16)word_431180 < 0x35Fu || (v14 = 0, (GetWindowLongA(hWnd, nIndex: -16) & 4) == 0) )
    v14 = 1;
  SendMessageA(hWnd, Msg: 0x11F0u, wParam: 0, lParam: (LPARAM)&v14);
  if ( v14 != 0 )
  {
    v9 = CallWindowProcA(lpPrevWndFunc, hWnd, Msg: 0x110u, wParam, (LPARAM)lParam);
    if ( (unsigned __int16)word_431180 < 0x35Fu || (GetWindowLongA(hWnd, nIndex: -16) & 4) == 0 )
      Ctl3dCheckSubclassDlg(hWnd, a2: 0xFFFF);
    return v9;
  }
  else
  {
    Ctl3dUnsubclassCtl(a1: hWnd);
    return CallWindowProcA(lpPrevWndFunc, hWnd, Msg: 0x110u, wParam, (LPARAM)lParam);
  }
}


/* ============================================
   Address: 0x413B90
   Function: _DoesChildNeedSubclass
   ============================================ */

BOOL __cdecl DoesChildNeedSubclass(HWND hWnd)
{
  if ( LpfnGetDefWndProcNull(hWnd) == nullptr )
    return false;
  return (unsigned __int16)word_431180 < 0x35Fu || (GetWindowLongA(hWnd, nIndex: -16) & 4) == 0;
}


/* ============================================
   Address: 0x413BD0
   Function: _Ctl3dHook@12
   ============================================ */

LRESULT __stdcall Ctl3dHook(int code, HWND wParam, int *lParam)
{
  DWORD CurrentThreadId; // esi
  int v4; // ecx
  bool v5; // zf
  int *v6; // eax
  int v8; // edi
  int v9; // ebp
  HWND Parent; // eax
  LPARAM v11; // [esp+10h] [ebp-4h] BYREF

  CurrentThreadId = GetCurrentThreadId();
  EnterCriticalSection(lpCriticalSection: &stru_431140);
  if ( dword_4311B4 == CurrentThreadId )
    goto LABEL_11;
  v4 = 0;
  v5 = dword_4311BC == 0;
  if ( dword_4311BC > 0 )
  {
    v6 = dword_4311C4;
    while ( *v6 != CurrentThreadId )
    {
      v6 += 5;
      if ( ++v4 >= dword_4311BC )
        goto LABEL_8;
    }
    dword_4311B8 = v4;
    dword_4311B4 = CurrentThreadId;
LABEL_8:
    v5 = v4 == dword_4311BC;
  }
  if ( !v5 )
  {
LABEL_11:
    v8 = dword_4311B8;
    LeaveCriticalSection(lpCriticalSection: &stru_431140);
    if ( code == 3 )
    {
      v9 = *lParam;
      if ( *(_DWORD *)(*lParam + 40) == 32770 )
      {
        if ( word_431182 == 32 )
        {
          if ( (unsigned __int16)word_431180 < 0x35Fu || (v11 = 0, (GetWindowLongA(hWnd: wParam, nIndex: -16) & 4) == 0) )
            v11 = 1;
          SendMessageA(hWnd: wParam, Msg: 0x11F0u, wParam: 0, lParam: (LPARAM)&v11);
          if ( v11 != 0 )
            SubclassWindow(hWnd: wParam, dwNewLong: (LONG)Ctl3dDlgProc);
        }
        else
        {
          HookSubclassWindow(a1: (int)wParam, a2: (LONG)Ctl3dDlgProc);
        }
      }
      else if ( (dword_4311D0[5 * v8] & 1) != 0 )
      {
        if ( DoesChildNeedSubclass(hWnd: *(HWND *)(v9 + 12))
          || *(_DWORD *)(v9 + 12) != 0
          && word_431182 != 24
          && (Parent = GetParent(hWnd: *(HWND *)(v9 + 12)), DoesChildNeedSubclass(hWnd: Parent)) )
        {
          DoSubclassCtl(hWnd: wParam, a2: 0xFFFF, a3: 1, a4: *(_DWORD *)(v9 + 12));
        }
      }
    }
    return CallNextHookEx(hhk: (HHOOK)dword_4311C8[5 * v8], nCode: code, (WPARAM)wParam, (LPARAM)lParam);
  }
  else
  {
    LeaveCriticalSection(lpCriticalSection: &stru_431140);
    return CallNextHookEx(hhk: nullptr, nCode: code, (WPARAM)wParam, (LPARAM)lParam);
  }
}


/* ============================================
   Address: 0x413D80
   Function: _FBtn
   ============================================ */

BOOL __cdecl FBtn(int a1, __int16 a2)
{
  return (unsigned __int16)word_431180 < 0x35Fu && (a2 & 0xFFDFu) <= 9;
}


/* ============================================
   Address: 0x413DB0
   Function: sub_413DB0
   ============================================ */

// _FList
// doubtful name
BOOL __cdecl sub_413DB0(int a1, int a2, int a3, int a4, HWND hWnd)
{
  CHAR ClassName[16]; // [esp+0h] [ebp-10h] BYREF

  if ( (unsigned __int16)word_431180 < 0x35Fu || hWnd == nullptr )
    return true;
  GetClassNameA(hWnd, lpClassName: ClassName, nMaxCount: 16);
  return lstrcmpA(lpString1: ClassName, lpString2: "ComboBox") != 0;
}


/* ============================================
   Address: 0x413E00
   Function: _FComboList
   ============================================ */

BOOL __cdecl FComboList(int a1, int a2, int a3, __int16 a4, HWND hWnd)
{
  int v6; // eax

  if ( (unsigned __int16)word_431180 >= 0x35Fu )
    return false;
  if ( a4 != 1 )
    return true;
  v6 = GetWindowLongA(hWnd, nIndex: -16) & 3;
  return v6 != 2 && v6 != 3;
}


/* ============================================
   Address: 0x413E40
   Function: _FCombo
   ============================================ */

int __cdecl FCombo(HWND hWnd, char a2, int a3, __int16 a4)
{
  int v5; // eax
  HWND Window; // eax
  HWND v7; // eax
  HWND v8; // ebp
  HWND v9; // eax

  if ( (unsigned __int16)word_431180 >= 0x35Fu )
    return 0;
  v5 = a2 & 3;
  if ( v5 == 2 )
  {
    if ( a4 == 1 )
    {
      return 0;
    }
    else
    {
      Window = GetWindow(hWnd, uCmd: 5u);
      if ( Window != nullptr )
        DoSubclassCtl(hWnd: Window, a2: 4, a3: a4, a4: (int)hWnd);
      return 1;
    }
  }
  else if ( v5 == 3 )
  {
    return 1;
  }
  else if ( a4 == 1 )
  {
    return 1;
  }
  else
  {
    v7 = GetWindow(hWnd, uCmd: 5u);
    v8 = v7;
    if ( v7 != nullptr )
    {
      DoSubclassCtl(hWnd: v7, a2: 2, a3: a4, a4: (int)hWnd);
      v9 = GetWindow(hWnd: v8, uCmd: 2u);
      if ( v9 != nullptr )
        DoSubclassCtl(hWnd: v9, a2: 4, a3: a4, a4: (int)hWnd);
      return 1;
    }
    else
    {
      return 0;
    }
  }
}


/* ============================================
   Address: 0x413F10
   Function: _FStatic
   ============================================ */

BOOL __cdecl FStatic(int a1, char a2, __int16 a3)
{
  int v3; // ecx

  v3 = a2 & 0x1F;
  return v3 != 3
      && ((a3 & 0x10) != 0 && ((a2 & 0x1Fu) <= 2 || v3 == 12)
       || (a3 & 0x20) != 0
       && ((a2 & 0x1Fu) >= 4 && (a2 & 0x1Fu) <= 9
        || (unsigned __int16)word_431180 < 0x35Fu && (a2 & 0x1Fu) >= 0x10 && (a2 & 0x1Fu) <= 0x12));
}


/* ============================================
   Address: 0x413F60
   Function: _DoSubclassCtl
   ============================================ */

int __cdecl DoSubclassCtl(HWND hWnd, unsigned __int16 a2, __int16 a3)
{
  int v4; // ebp
  const CHAR *v5; // ebx
  __int16 WindowLongA; // ax
  int v7; // edi
  bool v8; // cf
  CHAR ClassName[16]; // [esp+10h] [ebp-10h] BYREF

  if ( LpfnGetDefWndProcNull(hWnd) != nullptr )
    return 0;
  v4 = 0;
  v5 = (const CHAR *)&unk_4250EC;
  GetClassNameA(hWnd, lpClassName: ClassName, nMaxCount: 16);
  while ( (a2 & *(_WORD *)v5) == 0 || lstrcmpA(lpString1: v5 - 28, lpString2: ClassName) != 0 )
  {
    v5 += 32;
    ++v4;
    if ( v5 >= byte_4251AC )
      return 0;
  }
  WindowLongA = GetWindowLongA(hWnd, nIndex: -16);
  v7 = (*(&off_4250E8 + 8 * v4))(a1: (int)hWnd, a2: WindowLongA);
  v8 = v7 == 0;
  if ( v7 == 1 )
  {
    if ( a3 == 1 && word_431182 == 16 )
    {
      HookSubclassWindow(a1: (int)hWnd, a2: *(&dword_431BC0 + 6 * v4));
      return 1;
    }
    SubclassWindow(hWnd, dwNewLong: *(&dword_431BC0 + 6 * v4));
    v8 = false;
  }
  return 1 - v8;
}


/* ============================================
   Address: 0x414050
   Function: _Inval3dCtl
   ============================================ */

LONG __cdecl Inval3dCtl(HWND hWnd, _DWORD *a2)
{
  LONG result; // eax
  LONG v3; // esi
  int v4; // ecx
  int v5; // eax
  HWND Parent; // edi
  struct tagRECT Rect; // [esp+Ch] [ebp-10h] BYREF

  GetWindowRect(hWnd, lpRect: &Rect);
  result = GetWindowLongA(hWnd, nIndex: -16);
  v3 = result;
  if ( (result & 0x10000000) != 0 )
  {
    result = (LONG)a2;
    if ( a2 != nullptr )
    {
      v4 = a2[6];
      if ( (v4 & 0xC0) == 0 && (v4 & 2) != 0 && (v4 & 1) != 0 )
        return result;
      if ( (v4 & 3) == 2 && Rect.right - a2[4] == Rect.left )
      {
        v5 = a2[5];
        if ( Rect.bottom - Rect.top >= v5 )
          Rect.top += v5 + 1;
      }
    }
    InflateRect(lprc: &Rect, dx: 1, dy: 1);
    Parent = GetParent(hWnd);
    ScreenToClient(hWnd: Parent, lpPoint: (LPPOINT)&Rect);
    ScreenToClient(hWnd: Parent, lpPoint: (LPPOINT)&Rect.right);
    if ( (v3 & 0x200000) != 0 )
      ++Rect.right;
    return InvalidateRect(hWnd: Parent, lpRect: &Rect, bErase: false);
  }
  return result;
}


/* ============================================
   Address: 0x414110
   Function: _Val3dCtl
   ============================================ */

BOOL __cdecl Val3dCtl(HWND hWnd)
{
  LONG WindowLongA; // esi
  HWND Parent; // edi
  struct tagRECT Rect; // [esp+Ch] [ebp-10h] BYREF

  WindowLongA = GetWindowLongA(hWnd, nIndex: -16);
  GetWindowRect(hWnd, lpRect: &Rect);
  InflateRect(lprc: &Rect, dx: 1, dy: 1);
  Parent = GetParent(hWnd);
  ScreenToClient(hWnd: Parent, lpPoint: (LPPOINT)&Rect);
  ScreenToClient(hWnd: Parent, lpPoint: (LPPOINT)&Rect.right);
  if ( (WindowLongA & 0x200000) != 0 )
    ++Rect.right;
  return ValidateRect(hWnd: Parent, lpRect: &Rect);
}


/* ============================================
   Address: 0x414180
   Function: _DrawPushButton
   ============================================ */

HWND __cdecl DrawPushButton(HWND hWnd, HDC hdc, RECT *lprcSrc2, CHAR *lpchText, int cchText, __int16 a6, int a7)
{
  LONG top; // edx
  LONG right; // ebx
  LONG bottom; // eax
  int v10; // ebx
  HGDIOBJ v11; // eax
  int v12; // ebp
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  HWND result; // eax
  HGDIOBJ h; // [esp+10h] [ebp-1Ch]
  struct tagSIZE v19; // [esp+14h] [ebp-18h] BYREF
  struct tagRECT rc; // [esp+1Ch] [ebp-10h] BYREF

  top = lprcSrc2->top;
  right = lprcSrc2->right;
  rc.left = lprcSrc2->left;
  bottom = lprcSrc2->bottom;
  rc.top = top;
  rc.right = right;
  rc.bottom = bottom;
  DrawRec3d(hdc, a2: &lprcSrc2->left, a3: 7u, a4: 7u, a5: 15);
  InflateRect(lprc: &rc, dx: -1, dy: -1);
  if ( a6 == 1 && IsWindowEnabled(hWnd) )
  {
    DrawRec3d(hdc, a2: &rc.left, a3: 7u, a4: 7u, a5: 15);
    InflateRect(lprc: &rc, dx: -1, dy: -1);
  }
  PatBlt(hdc, x: lprcSrc2->left, y: lprcSrc2->top, w: 1, h: 1, rop: 0xF00021u);
  PatBlt(hdc, x: lprcSrc2->right - 1, y: lprcSrc2->top, w: 1, h: 1, rop: 0xF00021u);
  PatBlt(hdc, x: lprcSrc2->left, y: lprcSrc2->bottom - 1, w: 1, h: 1, rop: 0xF00021u);
  PatBlt(hdc, x: lprcSrc2->right - 1, y: lprcSrc2->bottom - 1, w: 1, h: 1, rop: 0xF00021u);
  v10 = (a7 == 0) + 1;
  if ( a7 != 0 )
    v11 = dword_4311AC;
  else
    v11 = (HGDIOBJ)dword_4311A4;
  h = SelectObject(hdc, h: v11);
  PatBlt(hdc, x: rc.left, y: rc.top, w: v10, h: rc.bottom - rc.top, rop: 0xF00021u);
  PatBlt(hdc, x: rc.left, y: rc.top, w: rc.right - rc.left, h: v10, rop: 0xF00021u);
  if ( a7 == 0 )
  {
    v12 = 0;
    SelectObject(hdc, h: dword_4311AC);
    --rc.bottom;
    --rc.right;
    do
    {
      PatBlt(hdc, x: rc.left, y: rc.bottom, w: rc.right - rc.left + 1, h: 1, rop: 0xF00021u);
      PatBlt(hdc, x: rc.right, y: rc.top, w: 1, h: rc.bottom - rc.top, rop: 0xF00021u);
      if ( (a7 == 0) > v12 )
        InflateRect(lprc: &rc, dx: -1, dy: -1);
      ++v12;
    }
    while ( v10 > v12 );
  }
  ++rc.left;
  ++rc.top;
  SelectObject(hdc, h: ::h);
  PatBlt(hdc, x: rc.left, y: rc.top, w: rc.right - rc.left, h: rc.bottom - rc.top, rop: 0xF00021u);
  if ( !IsWindowEnabled(hWnd) )
    SetTextColor(hdc, color: dword_43119C);
  MyGetTextExtent(hdc, a2: lpchText, a3: &v19);
  rc.top += (rc.bottom - rc.top - v19.cy) / 2;
  rc.left += (rc.right - rc.left - v19.cx) / 2;
  v13 = v19.cy + rc.top;
  if ( v19.cy + rc.top >= rc.bottom )
    v13 = rc.bottom;
  rc.bottom = v13;
  v14 = v19.cx + rc.left;
  if ( v19.cx + rc.left >= rc.right )
    v14 = rc.right;
  rc.right = v14;
  if ( a7 != 0 )
  {
    OffsetRect(lprc: &rc, dx: 1, dy: 1);
    v15 = lprcSrc2->right - 3;
    if ( v15 >= rc.right )
      v15 = rc.right;
    rc.right = v15;
    v16 = lprcSrc2->bottom - 3;
    if ( v16 >= rc.bottom )
      v16 = rc.bottom;
    rc.bottom = v16;
  }
  DrawTextA(hdc, lpchText, cchText, lprc: &rc, format: 0x20u);
  result = GetFocus();
  if ( result == hWnd )
  {
    InflateRect(lprc: &rc, dx: 1, dy: 1);
    IntersectRect(lprcDst: &rc, lprcSrc1: &rc, lprcSrc2);
    result = (HWND)DrawFocusRect(hDC: hdc, lprc: &rc);
  }
  if ( h != nullptr )
    return (HWND)SelectObject(hdc, h);
  return result;
}


/* ============================================
   Address: 0x4144C0
   Function: _BtnPaint
   ============================================ */

HGDIOBJ __cdecl BtnPaint(HWND hWnd, HDC hdc, char a3)
{
  char WindowLongA; // al
  unsigned int v4; // ebx
  void *v5; // eax
  COLORREF SysColor; // eax
  COLORREF v7; // eax
  void *v8; // eax
  char v9; // al
  BOOL v10; // ecx
  HDC CompatibleDC; // edi
  HGDIOBJ v12; // ebx
  HGDIOBJ result; // eax
  int left; // eax
  HGDIOBJ v15; // [esp+10h] [ebp-154h]
  int x1; // [esp+14h] [ebp-150h]
  int y1; // [esp+18h] [ebp-14Ch]
  HWND Parent; // [esp+1Ch] [ebp-148h]
  int v19; // [esp+20h] [ebp-144h]
  int cchText; // [esp+24h] [ebp-140h]
  BOOL v21; // [esp+28h] [ebp-13Ch]
  HGDIOBJ h; // [esp+2Ch] [ebp-138h]
  struct tagSIZE v23; // [esp+30h] [ebp-134h] BYREF
  int top; // [esp+38h] [ebp-12Ch]
  int right; // [esp+3Ch] [ebp-128h]
  int bottom; // [esp+40h] [ebp-124h]
  struct tagRECT Rect; // [esp+44h] [ebp-120h] BYREF
  RECT Point; // [esp+54h] [ebp-110h] BYREF
  CHAR String[256]; // [esp+64h] [ebp-100h] BYREF

  WindowLongA = GetWindowLongA(hWnd, nIndex: -16);
  v4 = WindowLongA & 0x1F;
  v19 = WindowLongA & 0x20;
  Parent = GetParent(hWnd);
  SetBkMode(hdc, mode: 2);
  GetClientRect(hWnd, lpRect: &Rect);
  v23.cy = Rect.left;
  top = Rect.top;
  right = Rect.right;
  bottom = Rect.bottom;
  v5 = (void *)SendMessageA(hWnd, Msg: 0x31u, wParam: 0, lParam: 0);
  v15 = v5;
  if ( v5 != nullptr )
    v15 = SelectObject(hdc, h: v5);
  SysColor = GetSysColor(nIndex: 15);
  SetBkColor(hdc, color: SysColor);
  v7 = GetSysColor(nIndex: 18);
  SetTextColor(hdc, color: v7);
  v8 = (void *)SendMessageA(hWnd: Parent, Msg: 0x135u, wParam: (WPARAM)hdc, lParam: (LPARAM)hWnd);
  h = SelectObject(hdc, h: v8);
  IntersectClipRect(hdc, left: v23.cy, top, right, bottom);
  if ( (a3 & 0x10) != 0 && v4 != 7 )
    PatBlt(hdc, x: v23.cy, y: top, w: right - v23.cy, h: bottom - top, rop: 0xF00021u);
  v21 = IsWindowEnabled(hWnd);
  v9 = SendMessageA(hWnd, Msg: 0xF2u, wParam: 0, lParam: 0);
  y1 = 0;
  v23.cx = v9 & 3;
  v10 = v23.cx != 0;
  Point.left = v9 & 4;
  x1 = 14 * (v10 | (Point.left >> 1));
  if ( !v21 )
    x1 += 14 * (v10 + 2);
  if ( (a3 & 0xA) != 0 || v4 <= 1 )
    cchText = GetWindowTextA(hWnd, lpString: String, nMaxCount: 256);
  switch ( v4 )
  {
    case 0u:
    case 1u:
      DrawPushButton(hWnd, hdc, lprcSrc2: &Rect, lpchText: String, cchText, a6: v4, a7: Point.left);
      goto LABEL_44;
    case 2u:
    case 3u:
      goto $DrawBtn$19917;
    case 4u:
    case 9u:
      y1 = 13;
      goto $DrawBtn$19917;
    case 5u:
    case 6u:
      if ( v23.cx == 2 )
        y1 = 26;
$DrawBtn$19917:
      if ( (a3 & 4) != 0 )
      {
        CompatibleDC = CreateCompatibleDC(hdc);
        if ( CompatibleDC != nullptr )
        {
          v12 = SelectObject(hdc: CompatibleDC, h: dword_4311B0);
          if ( v12 != nullptr )
          {
            if ( v19 != 0 )
              BitBlt(
                hdc,
                x: right - 14,
                y: (bottom - top - 13) / 2 + top,
                cx: 14,
                cy: 13,
                hdcSrc: CompatibleDC,
                x1,
                y1,
                rop: 0xCC0020u);
            else
              BitBlt(
                hdc,
                x: v23.cy,
                y: (bottom - top - 13) / 2 + top,
                cx: 14,
                cy: 13,
                hdcSrc: CompatibleDC,
                x1,
                y1,
                rop: 0xCC0020u);
            SelectObject(hdc: CompatibleDC, h: v12);
          }
          DeleteDC(hdc: CompatibleDC);
        }
      }
      if ( (a3 & 2) != 0 )
      {
        if ( v19 != 0 )
          right = Rect.right - 18;
        else
          v23.cy = Rect.left + 18;
        if ( !v21 )
          SetTextColor(hdc, color: dword_43119C);
        DrawTextA(hdc, lpchText: String, cchText, lprc: (LPRECT)&v23.cy, format: 0x24u);
      }
      if ( (a3 & 8) != 0 )
      {
        MyGetTextExtent(hdc, a2: String, a3: (struct tagSIZE *)&Point);
        top = (bottom - top - v23.cx) / 2;
        bottom = top + v23.cx;
        left = Rect.left;
        if ( v19 != 0 )
          Rect.right -= 18;
        else
          left = Rect.left + 18;
        v23.cy = left;
        right = left + Point.left;
        InflateRect(lprc: (LPRECT)&v23.cy, dx: 1, dy: 1);
        IntersectRect(lprcDst: (LPRECT)&v23.cy, lprcSrc1: (const RECT *)&v23.cy, lprcSrc2: &Rect);
        DrawFocusRect(hDC: hdc, lprc: (const RECT *)&v23.cy);
      }
      goto LABEL_44;
    case 7u:
      if ( (a3 & 6) == 0 )
        goto LABEL_44;
      MyGetTextExtent(hdc, a2: String, a3: &v23);
      if ( v19 == 0 )
        MyGetTextExtent(hdc, a2: asc_42B3A8, a3: (struct tagSIZE *)&Point);
      v23.cy += 4;
      right = v23.cy + v23.cx + 4;
      bottom = top + v19;
      if ( (a3 & 0x20) != 0 )
      {
        Point.left = v23.cy;
        Point.top = top;
        Point.bottom = bottom;
        Point.right = Rect.right;
        ClientToScreen(hWnd, lpPoint: (LPPOINT)&Point);
        ClientToScreen(hWnd, lpPoint: (LPPOINT)&Point.right);
        ScreenToClient(hWnd: Parent, lpPoint: (LPPOINT)&Point);
        ScreenToClient(hWnd: Parent, lpPoint: (LPPOINT)&Point.right);
        return (HGDIOBJ)InvalidateRect(hWnd: Parent, lpRect: &Point, bErase: true);
      }
      else
      {
        --Rect.right;
        --Rect.bottom;
        Rect.top += v19 / 2;
        DrawRec3d(hdc, a2: &Rect.left, a3: 2u, a4: 2u, a5: 15);
        OffsetRect(lprc: &Rect, dx: 1, dy: 1);
        DrawRec3d(hdc, a2: &Rect.left, a3: 0, a4: 0, a5: 15);
        if ( !v21 )
          SetTextColor(hdc, color: dword_43119C);
        DrawTextA(hdc, lpchText: String, cchText, lprc: (LPRECT)&v23.cy, format: 0x20u);
LABEL_44:
        result = SelectObject(hdc, h);
        if ( v15 != nullptr )
          return SelectObject(hdc, h: v15);
      }
      return result;
    default:
      goto LABEL_44;
  }
}


/* ============================================
   Address: 0x414A10
   Function: _BtnWndProc3d@16
   ============================================ */

int __stdcall BtnWndProc3d(HWND hWnd, UINT Msg, WPARAM wParam, _DWORD *lParam)
{
  int result; // eax
  LRESULT (__stdcall *v5)(HWND, UINT, WPARAM, LPARAM); // eax
  char v6; // bp
  LONG v7; // eax
  char v8; // di
  HDC v9; // ebp
  LONG WindowLongA; // eax
  LRESULT (__stdcall *DefWndProc)(HWND, UINT, WPARAM, LPARAM); // eax
  LONG v12; // eax
  LRESULT v13; // eax
  char v14; // bl
  HDC DC; // eax
  HDC v16; // edi
  char v17; // bl
  LRESULT v18; // [esp+10h] [ebp-48h]
  LRESULT v19; // [esp+14h] [ebp-44h]
  struct tagPAINTSTRUCT Paint; // [esp+18h] [ebp-40h] BYREF

  if ( Msg == 130 )
    return CleanupSubclass(hWnd, Msg: 0x82u, wParam, (LPARAM)lParam, a5: 0);
  if ( GetPropA(hWnd, lpString: (LPCSTR)(unsigned __int16)word_431174) != nullptr )
    goto LABEL_4;
  if ( Msg > 0xF1 )
  {
    if ( Msg != 243 )
    {
      if ( Msg >= 0x1943 && Msg <= 0x1944 )
      {
        *lParam = 1;
        return 1000;
      }
      goto LABEL_4;
    }
LABEL_28:
    v6 = 4;
LABEL_29:
    v18 = SendMessageA(hWnd, Msg: 0xF2u, wParam: 0, lParam: 0);
    WindowLongA = GetWindowLongA(hWnd, nIndex: -16);
    if ( (WindowLongA & 0x10000000) != 0 )
    {
      if ( Msg != 7 )
        SetWindowLongA(hWnd, nIndex: -16, dwNewLong: WindowLongA & 0xEFFFFFFF);
      DefWndProc = (LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))LpfnGetDefWndProc(hWnd, a2: 0);
      v19 = CallWindowProcA(lpPrevWndFunc: DefWndProc, hWnd, Msg, wParam, (LPARAM)lParam);
      if ( Msg != 7 )
      {
        v12 = GetWindowLongA(hWnd, nIndex: -16);
        SetWindowLongA(hWnd, nIndex: -16, dwNewLong: v12 | 0x10000000);
      }
      v13 = SendMessageA(hWnd, Msg: 0xF2u, wParam: 0, lParam: 0);
      v14 = v13;
      if ( Msg != 243 && Msg != 241 || v13 != v18 )
      {
        DC = GetDC(hWnd);
        v16 = DC;
        if ( DC != nullptr )
        {
          v17 = v18 ^ v14;
          if ( (v17 & 3) != 0 )
            v6 |= 4u;
          ExcludeUpdateRgn(hDC: DC, hWnd);
          BtnPaint(hWnd, hdc: v16, a3: v6 | v17 & 8);
          ReleaseDC(hWnd, hDC: v16);
        }
      }
      return v19;
    }
LABEL_4:
    v5 = (LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))LpfnGetDefWndProc(hWnd, a2: 0);
    return CallWindowProcA(lpPrevWndFunc: v5, hWnd, Msg, wParam, (LPARAM)lParam);
  }
  if ( Msg == 241 )
    goto LABEL_28;
  switch ( Msg )
  {
    case 7u:
      v6 = 22;
      goto LABEL_29;
    case 8u:
      if ( (GetWindowLongA(hWnd, nIndex: -16) & 0x1F) == 9 )
        SendMessageA(hWnd, Msg: 0xF3u, wParam: 0, lParam: 0);
      v6 = 0;
      goto LABEL_29;
    case 0xAu:
      v6 = 6;
      goto LABEL_29;
    case 0xCu:
      v7 = GetWindowLongA(hWnd, nIndex: -16);
      if ( (v7 & 0x10000000) != 0 && (v7 & 0x1F) == 7 )
        v6 = 34;
      else
        v6 = 22;
      goto LABEL_29;
    case 0xFu:
      v8 = SendMessageA(hWnd, Msg: 0xF2u, wParam: 0, lParam: 0);
      v9 = (HDC)wParam;
      if ( wParam == 0 )
        v9 = BeginPaint(hWnd, lpPaint: &Paint);
      if ( (GetWindowLongA(hWnd, nIndex: -16) & 0x10000000) != 0 )
        BtnPaint(hWnd, hdc: v9, a3: v8 & 8 | 6);
      if ( wParam == 0 )
        EndPaint(hWnd, lpPaint: &Paint);
      result = 0;
      break;
    default:
      goto LABEL_4;
  }
  return result;
}


/* ============================================
   Address: 0x414CF0
   Function: _ListEditPaint3d
   ============================================ */

LONG __cdecl ListEditPaint3d(HWND hWnd, int a2, int a3)
{
  LONG result; // eax
  HWND Parent; // edi
  __int16 v5; // bp
  HDC DC; // ebx
  int v7; // eax
  HWND Window; // eax
  LONG right; // ebp
  LONG v10; // ebp
  LONG v11; // ebp
  LONG v12; // [esp+10h] [ebp-44h]
  HWND hWndTo; // [esp+14h] [ebp-40h]
  LPARAM lParam; // [esp+18h] [ebp-3Ch] BYREF
  int v15; // [esp+1Ch] [ebp-38h]
  int v16; // [esp+20h] [ebp-34h]
  struct tagRECT Rect; // [esp+24h] [ebp-30h] BYREF
  struct tagRECT v18; // [esp+34h] [ebp-20h] BYREF
  CHAR ClassName[16]; // [esp+44h] [ebp-10h] BYREF

  result = GetWindowLongA(hWnd, nIndex: -16);
  v12 = result;
  if ( (result & 0x10000000) != 0
    && (a3 != 3 || (result & 3) != 3 || (result = SendMessageA(hWnd, Msg: 0x157u, wParam: 0, lParam: 0)) == 0) )
  {
    if ( a2 != 0 )
      HideCaret(hWnd);
    GetWindowRect(hWnd, lpRect: &Rect);
    Parent = GetParent(hWnd);
    ScreenToClient(hWnd: Parent, lpPoint: (LPPOINT)&Rect);
    v5 = 15;
    ScreenToClient(hWnd: Parent, lpPoint: (LPPOINT)&Rect.right);
    DC = GetDC(hWnd: Parent);
    v15 = v12 & 0x100000;
    if ( (v12 & 0x100000) != 0 )
      v5 = 7;
    v16 = v12 & 0x200000;
    if ( (v12 & 0x200000) != 0 )
      v5 &= ~4u;
    if ( a2 - GetWindowLongA(hWnd, nIndex: -12) == -1000 )
    {
      lParam = 666;
      v18.left = SendMessageA(hWnd: Parent, Msg: 0x1944u, wParam: 0, (LPARAM)&lParam);
      if ( lParam == 666 )
        v18.left = SendMessageA(hWnd: Parent, Msg: 0x1943u, wParam: 0, (LPARAM)&lParam);
      GetClassNameA(hWnd: Parent, lpClassName: ClassName, nMaxCount: 16);
      if ( lstrcmpA(lpString1: ClassName, lpString2: "ComboBox") == 0 || lParam == 1 && v18.left == 1003 )
      {
        hWndTo = GetParent(hWnd: Parent);
        MapWindowPoints(hWndFrom: Parent, hWndTo, lpPoints: (LPPOINT)&Rect, cPoints: 2u);
        ReleaseDC(hWnd: Parent, hDC: DC);
        DC = GetDC(hWnd: hWndTo);
        if ( a2 != 0 )
        {
          v7 = GetWindowLongA(hWnd: Parent, nIndex: -16) & 3;
          if ( v7 == 2 || v7 == 3 )
          {
            if ( SendMessageA(hWnd: Parent, Msg: 0x157u, wParam: 0, lParam: 0) != 0 )
            {
              ReleaseDC(hWnd: hWndTo, hDC: DC);
              return ShowCaret(hWnd);
            }
          }
          else
          {
            v5 &= ~8u;
            Window = GetWindow(hWnd: Parent, uCmd: 5u);
            GetWindowRect(hWnd: Window, lpRect: &v18);
            Rect.right += v18.left - v18.right;
            DrawInsetRect3d(hdc: DC, a2: &Rect.left, a3: 4104);
            Rect.right += v18.right - v18.left;
          }
        }
        else
        {
          v5 &= ~2u;
          ++Rect.top;
        }
        Parent = hWndTo;
      }
    }
    DrawInsetRect3d(hdc: DC, a2: &Rect.left, a3: v5);
    if ( a3 == 3 && (v12 & 3) == 3 )
    {
      right = Rect.right;
      Rect.left = right - GetSystemMetrics(nIndex: 2);
      DrawRec3d(hdc: DC, a2: &Rect.left, a3: 7u, a4: 7u, a5: 12);
      Val3dCtl(hWnd);
    }
    else
    {
      if ( v16 != 0 )
      {
        ++Rect.right;
        DrawRec3d(hdc: DC, a2: &Rect.left, a3: 0, a4: 0, a5: 4);
        v10 = --Rect.right;
        *(_DWORD *)ClassName = Rect.left;
        Rect.left = v10 - GetSystemMetrics(nIndex: 2);
        DrawRec3d(hdc: DC, a2: &Rect.left, a3: 7u, a4: 7u, a5: 8);
        Rect.left = *(_DWORD *)ClassName;
      }
      if ( v15 != 0 )
      {
        ++Rect.bottom;
        DrawRec3d(hdc: DC, a2: &Rect.left, a3: 0, a4: 0, a5: 8);
        v11 = --Rect.bottom;
        Rect.top = v11 - GetSystemMetrics(nIndex: 21);
        DrawRec3d(hdc: DC, a2: &Rect.left, a3: 7u, a4: 7u, a5: 4);
      }
    }
    result = ReleaseDC(hWnd: Parent, hDC: DC);
    if ( a2 != 0 )
      return ShowCaret(hWnd);
  }
  return result;
}


/* ============================================
   Address: 0x415030
   Function: _ShareEditComboWndProc3d
   ============================================ */

LRESULT __cdecl ShareEditComboWndProc3d(HWND hWnd, UINT Msg, WPARAM wParam, _DWORD *lParam, int a5)
{
  LRESULT (__stdcall *DefWndProc)(HWND, UINT, WPARAM, LPARAM); // eax
  LRESULT (__stdcall *v7)(HWND, UINT, WPARAM, LPARAM); // eax
  char WindowLongA; // al
  int v9; // eax
  LRESULT v10; // [esp+10h] [ebp-4h]

  if ( Msg == 130 )
    return CleanupSubclass(hWnd, Msg: 0x82u, wParam, (LPARAM)lParam, a5);
  if ( GetPropA(hWnd, lpString: (LPCSTR)(unsigned __int16)word_431174) != nullptr )
  {
    DefWndProc = (LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))LpfnGetDefWndProc(hWnd, a2: a5);
    return CallWindowProcA(lpPrevWndFunc: DefWndProc, hWnd, Msg, wParam, (LPARAM)lParam);
  }
  v7 = (LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))LpfnGetDefWndProc(hWnd, a2: a5);
  v10 = CallWindowProcA(lpPrevWndFunc: v7, hWnd, Msg, wParam, (LPARAM)lParam);
  if ( a5 == 3 )
  {
    WindowLongA = GetWindowLongA(hWnd, nIndex: -16);
    if ( (WindowLongA & 3) == 2 )
      return v10;
  }
  else
  {
    WindowLongA = v10;
  }
  if ( Msg <= 0x18 )
  {
    if ( Msg == 24 )
    {
      if ( (unsigned __int16)word_431180 < 0x30Au && wParam == 0 )
        Inval3dCtl(hWnd, a2: nullptr);
    }
    else if ( Msg == 15 && (a5 != 3 || (v9 = WindowLongA & 3) == 2 || v9 == 3) )
    {
      ListEditPaint3d(hWnd, a2: 1, a3: a5);
    }
    return v10;
  }
  if ( Msg == 70 )
  {
    if ( (unsigned __int16)word_431180 >= 0x30Au )
      Inval3dCtl(hWnd, a2: lParam);
    return v10;
  }
  if ( Msg < 0x1943 || Msg > 0x1944 )
    return v10;
  *lParam = 1;
  return 1002;
}


/* ============================================
   Address: 0x415180
   Function: _EditWndProc3d@16
   ============================================ */

LRESULT __stdcall EditWndProc3d(HWND hWnd, UINT Msg, WPARAM wParam, _DWORD *lParam)
{
  return ShareEditComboWndProc3d(hWnd, Msg, wParam, lParam, a5: 2);
}


/* ============================================
   Address: 0x4151B0
   Function: _SharedListWndProc
   ============================================ */

LRESULT __cdecl SharedListWndProc(HWND hWnd, UINT Msg, WPARAM wParam, LONG *lParam, int a5)
{
  LRESULT (__stdcall *v6)(HWND, UINT, WPARAM, LPARAM); // eax
  LRESULT (__stdcall *v7)(HWND, UINT, WPARAM, LPARAM); // eax
  LRESULT v8; // esi
  LRESULT (__stdcall *DefWndProc)(HWND, UINT, WPARAM, LPARAM); // eax
  LRESULT v10; // esi
  LONG v11; // ebx
  LONG v12; // eax
  LONG v13; // edx
  HWND Parent; // edi
  struct tagRECT rc; // [esp+Ch] [ebp-20h] BYREF
  struct tagRECT Rect; // [esp+1Ch] [ebp-10h] BYREF

  if ( Msg == 130 )
    return CleanupSubclass(hWnd, Msg: 0x82u, wParam, (LPARAM)lParam, a5);
  if ( GetPropA(hWnd, lpString: (LPCSTR)(unsigned __int16)word_431174) != nullptr )
    goto LABEL_4;
  if ( Msg > 0x18 )
  {
    if ( Msg > 0x83 )
    {
      if ( Msg < 0x1943 || Msg > 0x1944 )
        goto LABEL_4;
      *lParam = 1;
      return 1001;
    }
    else
    {
      if ( Msg != 131 )
      {
        if ( Msg == 70 && (unsigned __int16)word_431180 >= 0x30Au )
          Inval3dCtl(hWnd, a2: lParam);
        goto LABEL_4;
      }
      if ( (unsigned __int16)word_431180 >= 0x30Au )
        goto LABEL_4;
      GetWindowRect(hWnd, lpRect: &Rect);
      DefWndProc = (LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))LpfnGetDefWndProc(hWnd, a2: a5);
      v10 = CallWindowProcA(lpPrevWndFunc: DefWndProc, hWnd, Msg: 0x83u, wParam, (LPARAM)lParam);
      v11 = lParam[1];
      rc.left = *lParam;
      v12 = lParam[2];
      rc.top = v11;
      v13 = lParam[3];
      rc.right = v12;
      rc.bottom = v13;
      InflateRect(lprc: &rc, dx: 2, dy: 1);
      if ( rc.bottom < Rect.bottom )
      {
        rc.top = rc.bottom + 1;
        rc.bottom = Rect.bottom + 1;
        Parent = GetParent(hWnd);
        ScreenToClient(hWnd: Parent, lpPoint: (LPPOINT)&rc);
        ScreenToClient(hWnd: Parent, lpPoint: (LPPOINT)&rc.right);
        InvalidateRect(hWnd: Parent, lpRect: &rc, bErase: true);
      }
      return v10;
    }
  }
  else
  {
    if ( Msg == 24 )
    {
      if ( (unsigned __int16)word_431180 < 0x30Au && wParam == 0 )
        Inval3dCtl(hWnd, a2: nullptr);
      goto LABEL_4;
    }
    if ( Msg != 15 )
    {
LABEL_4:
      v6 = (LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))LpfnGetDefWndProc(hWnd, a2: a5);
      return CallWindowProcA(lpPrevWndFunc: v6, hWnd, Msg, wParam, (LPARAM)lParam);
    }
    v7 = (LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))LpfnGetDefWndProc(hWnd, a2: a5);
    v8 = CallWindowProcA(lpPrevWndFunc: v7, hWnd, Msg: 0xFu, wParam, (LPARAM)lParam);
    ListEditPaint3d(hWnd, a2: 0, a3: a5);
    return v8;
  }
}


/* ============================================
   Address: 0x4153E0
   Function: _ListWndProc3d@16
   ============================================ */

LRESULT __stdcall ListWndProc3d(HWND hWnd, UINT Msg, WPARAM wParam, LONG *lParam)
{
  return SharedListWndProc(hWnd, Msg, wParam, lParam, a5: 1);
}


/* ============================================
   Address: 0x415410
   Function: _ComboWndProc3d@16
   ============================================ */

LRESULT __stdcall ComboWndProc3d(HWND hWnd, UINT Msg, WPARAM wParam, _DWORD *lParam)
{
  if ( Msg < 0x1943 || Msg > 0x1944 )
    return ShareEditComboWndProc3d(hWnd, Msg, wParam, lParam, a5: 3);
  *lParam = 1;
  return 1003;
}


/* ============================================
   Address: 0x415460
   Function: _StaticPrint
   ============================================ */

COLORREF __cdecl StaticPrint(HWND hWnd, HDC hdc, LPRECT lprc, int a4)
{
  int WindowTextLengthA; // ebx
  COLORREF result; // eax
  void *v6; // esp
  unsigned __int16 v7; // bx
  _BYTE v8[12]; // [esp+0h] [ebp-14h] BYREF
  COLORREF color; // [esp+Ch] [ebp-8h]
  LPSTR lpString; // [esp+10h] [ebp-4h]

  PatBlt(hdc, x: lprc->left, y: lprc->top, w: lprc->right - lprc->left, h: lprc->bottom - lprc->top, rop: 0xF00021u);
  WindowTextLengthA = GetWindowTextLengthA(hWnd);
  result = (WindowTextLengthA + 8) & 0xFFFFFFFC;
  v6 = alloca(WindowTextLengthA + 5);
  lpString = v8;
  if ( v8 != nullptr )
  {
    result = GetWindowTextA(hWnd, lpString, nMaxCount: WindowTextLengthA + 2);
    if ( result != 0 )
    {
      v7 = 320;
      if ( (a4 & 0xF) != 0xC )
        v7 = a4 & 0xF | 0x150;
      if ( (a4 & 0x80) != 0 )
        HIBYTE(v7) |= 8u;
      if ( (a4 & 0x8000000) != 0 )
        color = SetTextColor(hdc, color: dword_43119C);
      result = DrawTextA(hdc, lpchText: lpString, cchText: -1, lprc, format: v7);
      if ( (a4 & 0x8000000) != 0 )
        return SetTextColor(hdc, color);
    }
  }
  return result;
}


/* ============================================
   Address: 0x415540
   Function: _StaticPaint
   ============================================ */

int __cdecl StaticPaint(HWND hWnd, HDC hdc)
{
  int result; // eax
  void *v3; // eax
  HGDIOBJ v4; // ebx
  HWND Parent; // eax
  void *v6; // eax
  HGDIOBJ v7; // ebp
  int v8; // [esp+10h] [ebp-14h]
  struct tagRECT Rect; // [esp+14h] [ebp-10h] BYREF

  result = GetWindowLongA(hWnd, nIndex: -16);
  v8 = result;
  if ( (result & 0x10000000) != 0 )
  {
    GetClientRect(hWnd, lpRect: &Rect);
    result = v8 & 0x1F;
    switch ( v8 & 0x1F )
    {
      case 0:
      case 1:
      case 2:
      case 0xC:
        v3 = (void *)SendMessageA(hWnd, Msg: 0x31u, wParam: 0, lParam: 0);
        v4 = v3;
        if ( v3 != nullptr )
          v4 = SelectObject(hdc, h: v3);
        SetBkMode(hdc, mode: 2);
        Parent = GetParent(hWnd);
        v6 = (void *)SendMessageA(hWnd: Parent, Msg: 0x138u, wParam: (WPARAM)hdc, lParam: (LPARAM)hWnd);
        v7 = v6;
        if ( v6 != nullptr )
          v7 = SelectObject(hdc, h: v6);
        result = StaticPrint(hWnd, hdc, lprc: &Rect, a4: v8);
        if ( v4 != nullptr )
          result = (int)SelectObject(hdc, h: v4);
        if ( v7 != nullptr )
          result = (int)SelectObject(hdc, h: v7);
        break;
      case 4:
      case 7:
        result = DrawRec3d(hdc, a2: &Rect.left, a3: 2u, a4: 0, a5: 15);
        break;
      case 5:
      case 8:
      case 0x10:
      case 0x11:
      case 0x12:
        ++Rect.left;
        ++Rect.top;
        DrawRec3d(hdc, a2: &Rect.left, a3: 0, a4: 0, a5: 15);
        OffsetRect(lprc: &Rect, dx: -1, dy: -1);
        result = DrawRec3d(hdc, a2: &Rect.left, a3: 2u, a4: 2u, a5: 15);
        break;
      case 6:
      case 9:
        result = DrawRec3d(hdc, a2: &Rect.left, a3: 0, a4: 2u, a5: 15);
        break;
      default:
        return result;
    }
  }
  return result;
}


/* ============================================
   Address: 0x4156E0
   Function: _StaticWndProc3d@16
   ============================================ */

LRESULT __stdcall StaticWndProc3d(HWND hWnd, UINT Msg, WPARAM wParam, _DWORD *lParam)
{
  LRESULT (__stdcall *DefWndProc)(HWND, UINT, WPARAM, LPARAM); // eax
  HDC DC; // edi
  HDC v7; // edi
  struct tagPAINTSTRUCT Paint; // [esp+Ch] [ebp-40h] BYREF

  if ( Msg == 130 )
    return CleanupSubclass(hWnd, Msg: 0x82u, wParam, (LPARAM)lParam, a5: 4);
  if ( GetPropA(hWnd, lpString: (LPCSTR)(unsigned __int16)word_431174) != nullptr )
    goto LABEL_4;
  if ( Msg > 0xF )
  {
    if ( Msg < 0x1943 || Msg > 0x1944 )
      goto LABEL_4;
    *lParam = 1;
    return 1004;
  }
  else if ( Msg == 15 )
  {
    v7 = (HDC)wParam;
    if ( wParam == 0 )
    {
      v7 = BeginPaint(hWnd, lpPaint: &Paint);
      ClipCtlDc(hWnd, hdc: v7);
    }
    StaticPaint(hWnd, hdc: v7);
    if ( wParam == 0 )
      EndPaint(hWnd, lpPaint: &Paint);
    return 0;
  }
  else
  {
    if ( Msg != 10 )
    {
LABEL_4:
      DefWndProc = (LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))LpfnGetDefWndProc(hWnd, a2: 4);
      return CallWindowProcA(lpPrevWndFunc: DefWndProc, hWnd, Msg, wParam, (LPARAM)lParam);
    }
    DC = GetDC(hWnd);
    ClipCtlDc(hWnd, hdc: DC);
    StaticPaint(hWnd, hdc: DC);
    ReleaseDC(hWnd, hDC: DC);
    return 0;
  }
}


/* ============================================
   Address: 0x415830
   Function: _LibMain
   ============================================ */

int __cdecl LibMain(HMODULE a1, int a2)
{
  HMODULE ModuleHandleA; // eax
  signed int Version; // eax
  unsigned __int16 v4; // cx
  BOOL (__stdcall *DisableThreadLibraryCalls)(HMODULE); // [esp+4h] [ebp-4h]

  if ( a2 == 1 )
  {
    ModuleHandleA = GetModuleHandleA(lpModuleName: aKernel32Dll_0);
    DisableThreadLibraryCalls = (BOOL (__stdcall *)(HMODULE))GetProcAddress(
                                                               hModule: ModuleHandleA,
                                                               lpProcName: aDisablethreadl);
    if ( DisableThreadLibraryCalls != nullptr )
      DisableThreadLibraryCalls(hLibModule: a1);
    EnterCriticalSection(lpCriticalSection: &stru_431140);
    hmod = a1;
    hModule = a1;
    Version = GetVersion();
    v4 = _byteswap_ushort(Version);
    word_431180 = v4;
    if ( Version >= 0 || (word_431182 = 16, v4 >= 0x35Fu) )
      word_431182 = 32;
    dword_431C54 = GetSystemMetrics(nIndex: 7) - 1;
    dword_431C58 = GetSystemMetrics(nIndex: 8) - 1;
    dword_431C5C = GetSystemMetrics(nIndex: 4);
    dword_431C60 = GetSystemMetrics(nIndex: 30);
    LeaveCriticalSection(lpCriticalSection: &stru_431140);
  }
  return 1;
}


/* ============================================
   Address: 0x415900
   Function: _LoadUIBitmap@32
   ============================================ */

HBITMAP __stdcall LoadUIBitmap(HMODULE hModule, LPCSTR lpName, int a3, int a4, int a5, int a6, int a7, int a8)
{
  HRSRC ResourceA; // eax
  HRSRC v9; // edi
  SIZE_T v11; // ebx
  HGLOBAL Resource; // esi
  BITMAPINFO *v13; // ebp
  HDC DC; // edi
  HBITMAP DIBitmap; // esi

  ResourceA = FindResourceA(hModule, lpName, lpType: (LPCSTR)2);
  v9 = ResourceA;
  if ( ResourceA == nullptr )
    return nullptr;
  v11 = SizeofResource(hModule, hResInfo: ResourceA);
  Resource = LoadResource(hModule, hResInfo: v9);
  if ( Resource == nullptr )
    return nullptr;
  v13 = (BITMAPINFO *)GlobalAlloc(uFlags: 0x40u, dwBytes: v11);
  if ( v13 == nullptr )
    return nullptr;
  qmemcpy(v13, Resource, v11);
  v13->bmiColors[0] = (RGBQUAD)(((unsigned __int8)a3 << 16) | BYTE2(a3) | (BYTE1(a3) << 8));
  v13[1].bmiHeader.biXPelsPerMeter = ((unsigned __int8)a5 << 16) | BYTE2(a5) | (BYTE1(a5) << 8);
  v13[1].bmiHeader.biYPelsPerMeter = ((unsigned __int8)a4 << 16) | BYTE2(a4) | (BYTE1(a4) << 8);
  *(_DWORD *)&v13[2].bmiHeader.biPlanes = BYTE2(a6) | ((unsigned __int8)a6 << 16) | (BYTE1(a6) << 8);
  v13[1].bmiColors[0] = (RGBQUAD)(BYTE2(a7) | ((unsigned __int8)a7 << 16) | (BYTE1(a7) << 8));
  v13[1].bmiHeader.biClrImportant = BYTE2(a8) | ((unsigned __int8)a8 << 16) | (BYTE1(a8) << 8);
  DC = GetDC(hWnd: nullptr);
  DIBitmap = CreateDIBitmap(
               hdc: DC,
               pbmih: &v13->bmiHeader,
               flInit: 4u,
               pjBits: &v13[2].bmiHeader.biCompression,
               pbmi: v13,
               iUsage: 0);
  ReleaseDC(hWnd: nullptr, hDC: DC);
  GlobalFree(hMem: v13);
  return DIBitmap;
}


/* ============================================
   Address: 0x415A97
   Function: _WinMain@16
   ============================================ */

int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
  return sub_41B8A8(a1: hInstance, a2: hPrevInstance, a3: lpCmdLine, a4: nShowCmd);
}


/* ============================================
   Address: 0x415AAF
   Function: ?AfxInitialize@@YGHHK@Z
   ============================================ */

int __stdcall AfxInitialize(int a1, unsigned int a2)
{
  *((_BYTE *)AfxGetModuleState() + 20) = a1;
  if ( a1 == 0 )
    _setmbcp(CodePage: -3);
  return 1;
}


/* ============================================
   Address: 0x415ACD
   Function: ??0_AFX_TERM_APP_STATE@@QAE@XZ
   ============================================ */

_AFX_TERM_APP_STATE *__thiscall _AFX_TERM_APP_STATE::_AFX_TERM_APP_STATE(_AFX_TERM_APP_STATE *this)
{
  AfxInitialize(a1: 0, a2: 0x421u);
  return this;
}


/* ============================================
   Address: 0x415AEA
   Function: sub_415AEA
   ============================================ */

int sub_415AEA()
{
  sub_415AF4();
  return atexit(a1: sub_415B0A);
}


/* ============================================
   Address: 0x415AF4
   Function: sub_415AF4
   ============================================ */

_AFX_TERM_APP_STATE *sub_415AF4()
{
  return _AFX_TERM_APP_STATE::_AFX_TERM_APP_STATE(this: (_AFX_TERM_APP_STATE *)&unk_42FFE0);
}


/* ============================================
   Address: 0x415B0A
   Function: sub_415B0A
   ============================================ */

void __cdecl sub_415B0A()
{
  AfxTermLocalData(a1: nullptr, a2: 1);
}


/* ============================================
   Address: 0x415B14
   Function: ?DestroyToolTipCtrl@CToolTipCtrl@@QAEHXZ
   ============================================ */

int __thiscall CToolTipCtrl::DestroyToolTipCtrl(CToolTipCtrl *this)
{
  int v2; // edi

  v2 = *(_DWORD *)this;
  (*(void (__thiscall **)(CToolTipCtrl *))(*(_DWORD *)this + 96))(a1: this);
  if ( this != nullptr )
    (*(void (__thiscall **)(CToolTipCtrl *, int))(v2 + 4))(a1: this, a2: 1);
  return 1;
}


/* ============================================
   Address: 0x415B2E
   Function: ?OnAddTool@CToolTipCtrl@@IAEJIJ@Z
   ============================================ */

int __thiscall CToolTipCtrl::OnAddTool(CToolTipCtrl *this, unsigned int a2, const void *a3)
{
  unsigned __int8 *v5[11]; // [esp+Ch] [ebp-2Ch] BYREF

  qmemcpy(v5, a3, sizeof(v5));
  if ( v5[8] == nullptr && v5[9] != (unsigned __int8 *)-1 && v5[9] != nullptr )
  {
    if ( sub_416338(Str2: v5[9], a2: (int)&a3) == 0 )
      *(_DWORD *)sub_41637C(Str2: v5[9]) = 0;
    sub_41635A(Str2: v5[9], a2: (int)&v5[9]);
  }
  return (*(int (__thiscall **)(CToolTipCtrl *, int, unsigned int, unsigned __int8 **))(*(_DWORD *)this + 168))(
           a1: this,
           a2: 1028,
           a3: a2,
           a4: v5);
}


/* ============================================
   Address: 0x415BA2
   Function: ?OnDisableModal@CToolTipCtrl@@IAEJIJ@Z
   ============================================ */

int __thiscall CToolTipCtrl::OnDisableModal(HWND *this, unsigned int a2, int a3)
{
  SendMessageA(hWnd: *(this + 7), Msg: 0x401u, wParam: 0, lParam: 0);
  return 0;
}


/* ============================================
   Address: 0x415BB9
   Function: ?OnWindowFromPoint@CToolTipCtrl@@IAEJIJ@Z
   ============================================ */

HWND __thiscall CToolTipCtrl::OnWindowFromPoint(CToolTipCtrl *this, unsigned int a2, LONG *a3)
{
  HWND result; // eax
  HWND v4; // esi
  HWND Parent; // eax
  HWND v6; // edi
  HWND v7; // eax
  HWND v8; // edi
  bool v9; // zf
  POINT v10; // [esp-8h] [ebp-18h]
  struct tagPOINT Point; // [esp+8h] [ebp-8h] BYREF

  Point.x = *a3;
  Point.y = a3[1];
  v10.y = Point.y;
  v10.x = *a3;
  result = WindowFromPoint(Point: v10);
  v4 = result;
  if ( result != nullptr )
  {
    Parent = GetParent(hWnd: result);
    v6 = Parent;
    if ( Parent != nullptr && _AfxIsComboBoxControl(hWnd: Parent, a2: 2u) != 0 )
    {
      return v6;
    }
    else
    {
      ScreenToClient(hWnd: v4, lpPoint: &Point);
      v7 = _AfxChildWindowFromPoint(hWnd: v4, Point);
      v8 = v7;
      if ( v7 == nullptr )
        return v4;
      v9 = !IsWindowEnabled(hWnd: v7);
      result = v8;
      if ( !v9 )
        return v4;
    }
  }
  return result;
}


/* ============================================
   Address: 0x415C30
   Function: __chdir
   ============================================ */

int __cdecl _chdir(const char *Path)
{
  DWORD LastError; // eax
  CHAR Name[2]; // [esp+0h] [ebp-10Ch] BYREF
  char v4[2]; // [esp+2h] [ebp-10Ah] BYREF
  CHAR Buffer[264]; // [esp+4h] [ebp-108h] BYREF

  if ( SetCurrentDirectoryA(lpPathName: Path) && GetCurrentDirectoryA(nBufferLength: 0x105u, lpBuffer: Buffer) != 0 )
  {
    if ( (Buffer[0] == 92 || Buffer[0] == 47) && Buffer[0] == Buffer[1] )
      return 0;
    Name[0] = 61;
    Name[1] = _mbctoupper(Ch: (unsigned __int8)Buffer[0]);
    strcpy(v4, ":");
    if ( SetEnvironmentVariableA(lpName: Name, lpValue: Buffer) )
      return 0;
  }
  LastError = GetLastError();
  _dosmaperr(a1: LastError);
  return -1;
}


/* ============================================
   Address: 0x415CD0
   Function: __mbctoupper
   ============================================ */

unsigned int __cdecl _mbctoupper(unsigned int Ch)
{
  unsigned int v1; // ebx
  unsigned int result; // eax
  CHAR DestStr[8]; // [esp+4h] [ebp-8h] BYREF

  v1 = Ch;
  if ( Ch > 0xFF )
  {
    BYTE1(Ch) = Ch;
    LOBYTE(Ch) = BYTE1(v1);
    if ( (byte_42FB69[BYTE1(v1)] & 4) != 0
      && __crtLCMapStringA(
           Locale: dword_42FC70,
           dwMapFlags: 0x200u,
           lpSrcStr: (LPCSTR)&Ch,
           lpWideCharStr: (LPCWCH)2,
           lpDestStr: DestStr,
           cchDest: 2,
           CodePage: dword_42FC6C) != 0 )
    {
      return (unsigned __int8)DestStr[1] + ((unsigned __int8)DestStr[0] << 8);
    }
  }
  else if ( (int)Ch >= 97 )
  {
    result = Ch - 32;
    if ( (int)Ch <= 122 )
      return result;
  }
  return v1;
}


/* ============================================
   Address: 0x415D60
   Function: ?InitString@CSimpleException@@QAEXXZ
   ============================================ */

void __thiscall CSimpleException::InitString(CSimpleException *this)
{
  *((_DWORD *)this + 3) = 1;
  *((_DWORD *)this + 4) = AfxLoadString(uID: *((_DWORD *)this + 37), lpBuffer: (LPSTR)this + 20, cchBufferMax: 0x80u) != 0;
}


/* ============================================
   Address: 0x415D89
   Function: ?GetErrorMessage@CSimpleException@@UAEHPADIPAI@Z
   ============================================ */

int __thiscall CSimpleException::GetErrorMessage(
        CHAR *this,
        LPSTR lpString1,
        unsigned int iMaxLength,
        unsigned int *a4)
{
  if ( a4 != nullptr )
    *a4 = 0;
  if ( *((_DWORD *)this + 3) == 0 )
    CSimpleException::InitString((CSimpleException *)this);
  if ( *((_DWORD *)this + 4) != 0 )
    lstrcpynA(lpString1, lpString2: this + 20, iMaxLength);
  else
    *lpString1 = 0;
  return *((_DWORD *)this + 4);
}


/* ============================================
   Address: 0x415DCC
   Function: ?AfxThrowMemoryException@@YGXXZ
   ============================================ */

void __stdcall __noreturn AfxThrowMemoryException()
{
  void *pExceptionObject; // [esp+0h] [ebp-4h] BYREF

  pExceptionObject = &dword_42F708;
  _CxxThrowException(&pExceptionObject, pThrowInfo: (_ThrowInfo *)&_TI5PAVCMemoryException__);
}


/* ============================================
   Address: 0x415DE7
   Function: ?AfxThrowNotSupportedException@@YGXXZ
   ============================================ */

void __stdcall __noreturn AfxThrowNotSupportedException()
{
  void *pExceptionObject; // [esp+0h] [ebp-4h] BYREF

  pExceptionObject = &dword_42F7A0;
  _CxxThrowException(&pExceptionObject, pThrowInfo: (_ThrowInfo *)&_TI5PAVCNotSupportedException__);
}


/* ============================================
   Address: 0x415E02
   Function: sub_415E02
   ============================================ */

_DWORD *__thiscall sub_415E02(_DWORD *this, int a2)
{
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 2) = 0;
  *(this + 1) = 0;
  *(this + 5) = 0;
  *this = &CPtrList::`vftable';
  *(this + 6) = a2;
  return this;
}


/* ============================================
   Address: 0x415E25
   Function: sub_415E25
   ============================================ */

void *__thiscall sub_415E25(void *Block, char a2)
{
  sub_415E61();
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}


/* ============================================
   Address: 0x415E41
   Function: sub_415E41
   ============================================ */

void __thiscall sub_415E41(CPlex **this)
{
  CPlex *v2; // ecx

  v2 = *(this + 5);
  *(this + 3) = nullptr;
  *(this + 4) = nullptr;
  *(this + 2) = nullptr;
  *(this + 1) = nullptr;
  CPlex::FreeDataChain(this: v2);
  *(this + 5) = nullptr;
}


/* ============================================
   Address: 0x415E61
   Function: sub_415E61
   ============================================ */

void __thiscall sub_415E61(CPlex **this)
{
  *this = (CPlex *)&CPtrList::`vftable';
  sub_415E41(this);
  *this = (CPlex *)&CObject::`vftable';
}


/* ============================================
   Address: 0x415E94
   Function: sub_415E94
   ============================================ */

// ?NewNode@CObList@@IAEPAUCNode@1@PAU21@0@Z
// doubtful name
_DWORD *__thiscall sub_415E94(int this, int a2, int a3)
{
  struct CPlex *v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  _DWORD *v8; // eax
  int v9; // ecx
  _DWORD *result; // eax

  if ( *(_DWORD *)(this + 16) == 0 )
  {
    v4 = CPlex::Create(a1: (struct CPlex **)(this + 20), a2: *(_DWORD *)(this + 24), a3: 0xCu);
    v5 = *(_DWORD *)(this + 24);
    v6 = 3 * v5;
    v7 = v5 - 1;
    v8 = (_DWORD *)((char *)v4 + 4 * v6 - 8);
    if ( v7 >= 0 )
    {
      v9 = v7 + 1;
      do
      {
        *v8 = *(_DWORD *)(this + 16);
        *(_DWORD *)(this + 16) = v8;
        v8 -= 3;
        --v9;
      }
      while ( v9 != 0 );
    }
  }
  result = *(_DWORD **)(this + 16);
  *(_DWORD *)(this + 16) = *result;
  result[1] = a2;
  *result = a3;
  ++*(_DWORD *)(this + 12);
  result[2] = 0;
  return result;
}


/* ============================================
   Address: 0x415EE9
   Function: sub_415EE9
   ============================================ */

void __thiscall sub_415EE9(int this, _DWORD *a2)
{
  bool v2; // zf

  *a2 = *(_DWORD *)(this + 16);
  v2 = (*(_DWORD *)(this + 12))-- == 1;
  *(_DWORD *)(this + 16) = a2;
  if ( v2 )
    sub_415E41((CPlex **)this);
}


/* ============================================
   Address: 0x415F02
   Function: sub_415F02
   ============================================ */

_DWORD *__thiscall sub_415F02(int *this, int a2)
{
  _DWORD *result; // eax
  _DWORD *v4; // ecx

  result = sub_415E94((int)this, a2: *(this + 2), a3: 0);
  result[2] = a2;
  v4 = (_DWORD *)*(this + 2);
  if ( v4 != nullptr )
    *v4 = result;
  else
    *(this + 1) = (int)result;
  *(this + 2) = (int)result;
  return result;
}


/* ============================================
   Address: 0x415F2B
   Function: sub_415F2B
   ============================================ */

int __thiscall sub_415F2B(int **this)
{
  int *v1; // eax
  int v2; // edx
  int v3; // esi
  bool v4; // zf

  v1 = *(this + 1);
  v2 = *v1;
  v3 = v1[2];
  v4 = *v1 == 0;
  *(this + 1) = (int *)*v1;
  if ( v4 )
    *(this + 2) = nullptr;
  else
    *(_DWORD *)(v2 + 4) = 0;
  sub_415EE9((int)this, a2: v1);
  return v3;
}


/* ============================================
   Address: 0x415F4F
   Function: ?Create@CPlex@@SGPAU1@AAPAU1@II@Z
   ============================================ */

static struct CPlex *__stdcall CPlex::Create(struct CPlex **a1, unsigned int a2, unsigned int a3)
{
  struct CPlex *result; // eax

  result = (struct CPlex *)operator new(Size: a3 * a2 + 4);
  *(_DWORD *)result = *a1;
  *a1 = result;
  return result;
}


/* ============================================
   Address: 0x415F6F
   Function: ?FreeDataChain@CPlex@@QAEXXZ
   ============================================ */

void __thiscall CPlex::FreeDataChain(CPlex **this)
{
  CPlex *v1; // esi

  if ( this != nullptr )
  {
    do
    {
      v1 = *this;
      operator delete(Block: this);
      this = (CPlex **)v1;
    }
    while ( v1 != nullptr );
  }
}


/* ============================================
   Address: 0x415F85
   Function: sub_415F85
   ============================================ */

_DWORD *__thiscall sub_415F85(_DWORD *this, int a2)
{
  *(this + 1) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *this = &CMapPtrToPtr::`vftable';
  *(this + 2) = 17;
  *(this + 6) = a2;
  return this;
}


/* ============================================
   Address: 0x415FAC
   Function: sub_415FAC
   ============================================ */

void *__thiscall sub_415FAC(void *Block, char a2)
{
  sub_416039(a1: Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}


/* ============================================
   Address: 0x415FC8
   Function: sub_415FC8
   ============================================ */

// ?InitHashTable@CMapWordToPtr@@QAEXIH@Z
// doubtful name
void __thiscall sub_415FC8(int this, int a2, int a3)
{
  void *v4; // eax

  if ( *(_DWORD *)(this + 4) != 0 )
  {
    operator delete(Block: *(void **)(this + 4));
    *(_DWORD *)(this + 4) = 0;
  }
  if ( a3 != 0 )
  {
    v4 = operator new(Size: 4 * a2);
    *(_DWORD *)(this + 4) = v4;
    memset(a1: v4, Val: 0, Size: 4 * a2);
  }
  *(_DWORD *)(this + 8) = a2;
}


/* ============================================
   Address: 0x41600E
   Function: sub_41600E
   ============================================ */

// ?RemoveAll@CMapPtrToPtr@@QAEXXZ
// doubtful name
void __thiscall sub_41600E(int this)
{
  CPlex **v2; // ecx

  if ( *(_DWORD *)(this + 4) != 0 )
  {
    operator delete(Block: *(void **)(this + 4));
    *(_DWORD *)(this + 4) = 0;
  }
  v2 = *(CPlex ***)(this + 20);
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 0;
  CPlex::FreeDataChain(this: v2);
  *(_DWORD *)(this + 20) = 0;
}


/* ============================================
   Address: 0x416039
   Function: sub_416039
   ============================================ */

void __thiscall sub_416039(_DWORD *this)
{
  *this = &CMapPtrToPtr::`vftable';
  sub_41600E((int)this);
  *this = &CObject::`vftable';
}


/* ============================================
   Address: 0x41606C
   Function: ?NewAssoc@CMapPtrToPtr@@IAEPAUCAssoc@1@XZ
   ============================================ */

struct CMapPtrToPtr::CAssoc *__thiscall CMapPtrToPtr::NewAssoc(CMapPtrToPtr *this)
{
  struct CPlex *v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // ecx
  _DWORD *v6; // eax
  int v7; // ecx
  struct CMapPtrToPtr::CAssoc *result; // eax
  int v9; // ecx

  if ( *((_DWORD *)this + 4) == 0 )
  {
    v2 = CPlex::Create(a1: (struct CPlex **)this + 5, a2: *((_DWORD *)this + 6), a3: 0xCu);
    v3 = *((_DWORD *)this + 6);
    v4 = 3 * v3;
    v5 = v3 - 1;
    v6 = (_DWORD *)((char *)v2 + 4 * v4 - 8);
    if ( v5 >= 0 )
    {
      v7 = v5 + 1;
      do
      {
        *v6 = *((_DWORD *)this + 4);
        *((_DWORD *)this + 4) = v6;
        v6 -= 3;
        --v7;
      }
      while ( v7 != 0 );
    }
  }
  result = *((struct CMapPtrToPtr::CAssoc **)this + 4);
  v9 = *(_DWORD *)result;
  ++*((_DWORD *)this + 3);
  *((_DWORD *)this + 4) = v9;
  *((_DWORD *)result + 1) = 0;
  *((_DWORD *)result + 2) = 0;
  return result;
}


/* ============================================
   Address: 0x4160B6
   Function: sub_4160B6
   ============================================ */

void __thiscall sub_4160B6(_DWORD *this, _DWORD *a2)
{
  bool v2; // zf

  *a2 = *(this + 4);
  v2 = (*(this + 3))-- == 1;
  *(this + 4) = a2;
  if ( v2 )
    sub_41600E((int)this);
}


/* ============================================
   Address: 0x4160CF
   Function: sub_4160CF
   ============================================ */

// ?GetAssocAt@CMapPtrToPtr@@IBEPAUCAssoc@1@PAXAAI@Z
// doubtful name
_DWORD *__thiscall sub_4160CF(_DWORD *this, unsigned int a2, int *a3)
{
  int v3; // edx
  int v4; // ecx
  _DWORD *result; // eax

  v3 = (a2 >> 4) % *(this + 2);
  *a3 = v3;
  v4 = *(this + 1);
  if ( v4 != 0 )
  {
    for ( result = *(_DWORD **)(v4 + 4 * v3); result != nullptr; result = (_DWORD *)*result )
    {
      if ( result[1] == a2 )
        return result;
    }
  }
  return nullptr;
}


/* ============================================
   Address: 0x416101
   Function: ?GetValueAt@CMapPtrToPtr@@QBEPAXPAX@Z
   ============================================ */

void *__thiscall CMapPtrToPtr::GetValueAt(CMapPtrToPtr *this, unsigned int a2)
{
  int v2; // esi
  _DWORD *i; // edx

  v2 = *((_DWORD *)this + 1);
  if ( v2 != 0 )
  {
    for ( i = *(_DWORD **)(v2 + 4 * ((a2 >> 4) % *((_DWORD *)this + 2))); i != nullptr; i = (_DWORD *)*i )
    {
      if ( i[1] == a2 )
        return (void *)i[2];
    }
  }
  return nullptr;
}


/* ============================================
   Address: 0x416134
   Function: sub_416134
   ============================================ */

int __thiscall sub_416134(CMapPtrToPtr *this, unsigned int a2)
{
  unsigned int v2; // edi
  struct CMapPtrToPtr::CAssoc *v4; // eax

  v2 = a2;
  v4 = (struct CMapPtrToPtr::CAssoc *)sub_4160CF(this, a2, a3: (int *)&a2);
  if ( v4 == nullptr )
  {
    if ( *((_DWORD *)this + 1) == 0 )
      sub_415FC8((int)this, a2: *((_DWORD *)this + 2), a3: 1);
    v4 = CMapPtrToPtr::NewAssoc(this);
    *((_DWORD *)v4 + 1) = v2;
    *(_DWORD *)v4 = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * a2);
    *(_DWORD *)(*((_DWORD *)this + 1) + 4 * a2) = v4;
  }
  return (int)v4 + 8;
}


/* ============================================
   Address: 0x416184
   Function: sub_416184
   ============================================ */

int __thiscall sub_416184(_DWORD *this, unsigned int a2)
{
  int v2; // esi
  int v3; // edx
  _DWORD *v4; // eax
  _DWORD *v5; // edx

  v2 = *(this + 1);
  if ( v2 != 0 )
  {
    v3 = (a2 >> 4) % *(this + 2);
    v4 = *(_DWORD **)(v2 + 4 * v3);
    v5 = (_DWORD *)(v2 + 4 * v3);
    while ( v4 != nullptr )
    {
      if ( v4[1] == a2 )
      {
        *v5 = *v4;
        sub_4160B6(this, a2: v4);
        return 1;
      }
      v5 = v4;
      v4 = (_DWORD *)*v4;
    }
  }
  return 0;
}


/* ============================================
   Address: 0x4161C6
   Function: ?GetNextAssoc@CMapPtrToPtr@@QBEXAAPAU__POSITION@@AAPAX1@Z
   ============================================ */

void __thiscall CMapPtrToPtr::GetNextAssoc(CMapPtrToPtr *this, struct __POSITION **a2, void **a3, void **a4)
{
  int v4; // esi
  unsigned int v5; // edx
  unsigned int v6; // edi
  int *v7; // eax
  struct __POSITION *v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // edx
  struct __POSITION **v11; // eax

  v4 = (int)*a2;
  if ( *a2 == (struct __POSITION *)-1 )
  {
    v5 = *((_DWORD *)this + 2);
    v6 = 0;
    if ( v5 != 0 )
    {
      v7 = *((int **)this + 1);
      do
      {
        v4 = *v7;
        if ( *v7 != 0 )
          break;
        ++v6;
        ++v7;
      }
      while ( v6 < v5 );
    }
  }
  v8 = *(struct __POSITION **)v4;
  if ( *(_DWORD *)v4 == 0 )
  {
    v9 = *((_DWORD *)this + 2);
    v10 = (*(_DWORD *)(v4 + 4) >> 4) % v9 + 1;
    if ( v10 < v9 )
    {
      v11 = (struct __POSITION **)(*((_DWORD *)this + 1) + 4 * v10);
      do
      {
        v8 = *v11;
        if ( *v11 != nullptr )
          break;
        ++v10;
        ++v11;
      }
      while ( v10 < v9 );
    }
  }
  *a2 = v8;
  *a3 = *(void **)(v4 + 4);
  *a4 = *(void **)(v4 + 8);
}


/* ============================================
   Address: 0x416238
   Function: sub_416238
   ============================================ */

// ?InitHashTable@CMapWordToPtr@@QAEXIH@Z
// doubtful name
void __thiscall sub_416238(int this, int a2, int a3)
{
  void *v4; // eax

  if ( *(_DWORD *)(this + 4) != 0 )
  {
    operator delete(Block: *(void **)(this + 4));
    *(_DWORD *)(this + 4) = 0;
  }
  if ( a3 != 0 )
  {
    v4 = operator new(Size: 4 * a2);
    *(_DWORD *)(this + 4) = v4;
    memset(a1: v4, Val: 0, Size: 4 * a2);
  }
  *(_DWORD *)(this + 8) = a2;
}


/* ============================================
   Address: 0x41627E
   Function: sub_41627E
   ============================================ */

// ?NewAssoc@CMapStringToPtr@@IAEPAUCAssoc@1@XZ
// doubtful name
int *__thiscall sub_41627E(int this)
{
  _DWORD *v2; // eax
  int v3; // ecx
  int *v4; // edi
  int v5; // eax

  if ( *(_DWORD *)(this + 16) == 0 )
  {
    v2 = (_DWORD *)((char *)CPlex::Create(a1: (struct CPlex **)(this + 20), a2: *(_DWORD *)(this + 24), a3: 0x10u)
                  + 16 * *(_DWORD *)(this + 24)
                  - 12);
    if ( *(_DWORD *)(this + 24) - 1 >= 0 )
    {
      v3 = *(_DWORD *)(this + 24);
      do
      {
        *v2 = *(_DWORD *)(this + 16);
        *(_DWORD *)(this + 16) = v2;
        v2 -= 4;
        --v3;
      }
      while ( v3 != 0 );
    }
  }
  v4 = *(int **)(this + 16);
  v5 = *v4;
  ++*(_DWORD *)(this + 12);
  *(_DWORD *)(this + 16) = v5;
  v4[2] = *(_DWORD *)sub_41A23C();
  v4[3] = 0;
  return v4;
}


/* ============================================
   Address: 0x4162DE
   Function: sub_4162DE
   ============================================ */

// ?GetAssocAt@CMapStringToPtr@@IBEPAUCAssoc@1@PBDAAI@Z
// doubtful name
int **__thiscall sub_4162DE(_DWORD *this, unsigned __int8 *Str2, int *a3)
{
  unsigned int v3; // eax
  unsigned __int8 *v4; // esi
  signed __int8 i; // dl
  int v6; // edx
  int v7; // eax
  int **j; // esi

  v3 = 0;
  v4 = Str2;
  for ( i = *Str2; i != 0; i = *++v4 )
    v3 = i + 33 * v3;
  v6 = v3 % *(this + 2);
  *a3 = v6;
  v7 = *(this + 1);
  if ( v7 != 0 )
  {
    for ( j = *(int ***)(v7 + 4 * v6); j != nullptr; j = (int **)*j )
    {
      if ( _mbscmp(Str1: (const unsigned __int8 *)j[2], Str2) == 0 )
        return j;
    }
  }
  return nullptr;
}


/* ============================================
   Address: 0x416338
   Function: sub_416338
   ============================================ */

int __thiscall sub_416338(_DWORD *this, unsigned __int8 *Str2, _DWORD *a3)
{
  int result; // eax

  result = (int)sub_4162DE(this, Str2, a3: (int *)&Str2);
  if ( result != 0 )
  {
    *a3 = *(_DWORD *)(result + 12);
    return 1;
  }
  return result;
}


/* ============================================
   Address: 0x41635A
   Function: sub_41635A
   ============================================ */

int __thiscall sub_41635A(_DWORD *this, unsigned __int8 *Str2, _DWORD *a3)
{
  int result; // eax

  result = (int)sub_4162DE(this, Str2, a3: (int *)&Str2);
  if ( result != 0 )
  {
    *a3 = *(_DWORD *)(result + 8);
    return 1;
  }
  return result;
}


/* ============================================
   Address: 0x41637C
   Function: sub_41637C
   ============================================ */

_DWORD *__thiscall sub_41637C(int *this, unsigned __int8 *Str2)
{
  _DWORD *v3; // esi
  int v5; // [esp+8h] [ebp-4h] BYREF

  v3 = sub_4162DE(this, Str2, a3: &v5);
  if ( v3 == nullptr )
  {
    if ( *(this + 1) == 0 )
      sub_416238((int)this, a2: *(this + 2), a3: 1);
    v3 = sub_41627E((int)this);
    v3[1] = v5;
    CString::operator=(this: (CString *)(v3 + 2), lpString: (LPCSTR)Str2);
    *v3 = *(_DWORD *)(*(this + 1) + 4 * v5);
    *(_DWORD *)(*(this + 1) + 4 * v5) = v3;
  }
  return v3 + 3;
}


/* ============================================
   Address: 0x4163DE
   Function: ?AfxDlgProc@@YGHPAUHWND__@@IIJ@Z
   ============================================ */

INT_PTR __stdcall AfxDlgProc(HWND a1, UINT a2, WPARAM a3, LPARAM a4)
{
  struct CObject *v4; // eax
  struct CObject *v5; // eax

  if ( a2 != 272 )
    return 0;
  v4 = CWnd::FromHandlePermanent(a1);
  v5 = AfxDynamicDownCast(a1: (struct CRuntimeClass *)&off_422638, a2: v4);
  if ( v5 != nullptr )
    return (*(INT_PTR (__thiscall **)(struct CObject *))(*(_DWORD *)v5 + 196))(a1: v5);
  else
    return 1;
}


/* ============================================
   Address: 0x416418
   Function: sub_416418
   ============================================ */

_UNKNOWN ***sub_416418()
{
  return &off_422558;
}


/* ============================================
   Address: 0x41641E
   Function: ?PreTranslateMessage@CDialog@@UAEHPAUtagMSG@@@Z
   ============================================ */

int __thiscall CDialog::PreTranslateMessage(HWND *this, struct tagMSG *a2)
{
  struct CFrameWnd *TopLevelFrame; // eax
  WPARAM wParam; // eax
  HWND DlgItem; // eax

  if ( CWnd::PreTranslateMessage((CWnd *)this, a2) != 0 )
    return 1;
  TopLevelFrame = CWnd::GetTopLevelFrame((CWnd *)this);
  if ( TopLevelFrame != nullptr && *((_DWORD *)TopLevelFrame + 20) != 0 )
    return 0;
  if ( a2->message == 256 )
  {
    wParam = a2->wParam;
    if ( (wParam == 27 || wParam == 3)
      && (GetWindowLongA(hWnd: a2->hwnd, nIndex: -16) & 4) != 0
      && _AfxCompareClassName(hWnd: a2->hwnd, lpString2: "Edit") != 0 )
    {
      DlgItem = GetDlgItem(hDlg: *(this + 7), nIDDlgItem: 2);
      if ( DlgItem == nullptr || IsWindowEnabled(hWnd: DlgItem) )
      {
        SendMessageA(hWnd: *(this + 7), Msg: 0x111u, wParam: 2u, lParam: 0);
        return 1;
      }
    }
  }
  return CWnd::PreTranslateInput((CWnd *)this, a2);
}


/* ============================================
   Address: 0x4164B7
   Function: sub_4164B7
   ============================================ */

// ?OnCmdMsg@CPropertySheet@@UAEHIHPAXPAUAFX_CMDHANDLERINFO@@@Z
// doubtful name
BOOL __thiscall sub_4164B7(HWND *this, unsigned int a2, int a3, void *Buf1, struct AFX_CMDHANDLERINFO *a5)
{
  HWND Parent; // eax
  struct CWnd *v7; // eax
  struct CWinThread *Thread; // eax
  BOOL result; // eax

  result = true;
  if ( CCmdTarget::OnCmdMsg((CCmdTarget *)this, a2, a3, Buf1, a5) == 0 )
  {
    if ( a3 != 0 && a3 != -1 )
      return false;
    if ( (a2 & 0x8000) == 0 || a2 >= 0xF000 )
      return false;
    Parent = GetParent(hWnd: *(this + 7));
    v7 = CWnd::FromHandle(a1: Parent);
    if ( v7 == nullptr
      || (*(int (__thiscall **)(struct CWnd *, unsigned int, int, void *, struct AFX_CMDHANDLERINFO *))(*(_DWORD *)v7 + 20))(
           a1: v7,
           a2,
           a3,
           a4: Buf1,
           a5) == 0 )
    {
      Thread = AfxGetThread();
      if ( Thread == nullptr
        || (*(int (__thiscall **)(struct CWinThread *, unsigned int, int, void *, struct AFX_CMDHANDLERINFO *))(*(_DWORD *)Thread + 20))(
             a1: Thread,
             a2,
             a3,
             a4: Buf1,
             a5) == 0 )
      {
        return false;
      }
    }
  }
  return result;
}


/* ============================================
   Address: 0x41653C
   Function: sub_41653C
   ============================================ */

void *__thiscall sub_41653C(void *Block, char a2)
{
  sub_416558(a1: Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}


/* ============================================
   Address: 0x416558
   Function: sub_416558
   ============================================ */

void __thiscall sub_416558(CWnd *this)
{
  *(_DWORD *)this = &CDialog::`vftable';
  if ( *((_DWORD *)this + 7) != 0 )
    CWnd::DestroyWindow(this);
  CWnd::~CWnd(this);
}


/* ============================================
   Address: 0x416596
   Function: ?CreateDlgIndirect@CWnd@@IAEHPBUDLGTEMPLATE@@PAV1@PAUHINSTANCE__@@@Z
   ============================================ */

BOOL __thiscall CWnd::CreateDlgIndirect(CWnd *this, LPCDLGTEMPLATEA lpTemplate, struct CWnd *a3, HINSTANCE hInstance)
{
  int v5; // esi
  int Font; // eax
  BOOL v8; // esi
  HWND v9; // eax
  HWND v10; // esi
  int v11; // [esp-Ch] [ebp-4Ch] BYREF
  _BYTE v12[12]; // [esp+0h] [ebp-40h] BYREF
  _BYTE v13[8]; // [esp+Ch] [ebp-34h] BYREF
  int v14; // [esp+18h] [ebp-28h]
  CWnd *v15; // [esp+1Ch] [ebp-24h]
  HWND hWnd; // [esp+20h] [ebp-20h]
  unsigned __int8 *Str1; // [esp+24h] [ebp-1Ch] BYREF
  unsigned __int16 v18[2]; // [esp+28h] [ebp-18h] BYREF
  HGLOBAL hMem; // [esp+2Ch] [ebp-14h]
  int *v20; // [esp+30h] [ebp-10h]
  int v21; // [esp+3Ch] [ebp-4h]

  v20 = &v11;
  v15 = this;
  if ( hInstance == nullptr )
    hInstance = *((HINSTANCE *)AfxGetModuleState() + 2);
  v5 = *((_DWORD *)AfxGetModuleState() + 1038);
  hMem = nullptr;
  v14 = v5;
  hWnd = nullptr;
  v21 = 0;
  if ( (*((_BYTE *)AfxGetModuleState() + 24) & 0x10) == 0 )
    AfxEndDeferRegisterClass(a1: 16);
  if ( v5 != 0 )
  {
    if ( (*(int (__thiscall **)(CWnd *, _BYTE *))(*(_DWORD *)this + 188))(a1: this, a2: v13) == 0 )
      return false;
    lpTemplate = (LPCDLGTEMPLATEA)(*(int (__thiscall **)(int, _BYTE *, LPCDLGTEMPLATEA))(*(_DWORD *)v5 + 16))(
                                    a1: v5,
                                    a2: v13,
                                    a3: lpTemplate);
  }
  if ( lpTemplate == nullptr )
    return false;
  CString::CString(this: (CString *)&Str1);
  LOBYTE(v21) = 1;
  *(_DWORD *)v18 = 0;
  Font = CDialogTemplate::GetFont(a1: lpTemplate, a2: (struct CString *)&Str1, a3: v18);
  v8 = Font == 0;
  if ( Font == 0 )
    goto LABEL_18;
  if ( GetSystemMetrics(nIndex: 42) != 0 )
  {
    if ( _mbscmp(Str1, Str2: "MS Sans Serif") != 0 && _mbscmp(Str1, Str2: "Helv") != 0 )
    {
      v8 = false;
    }
    else
    {
      v8 = true;
      if ( v18[0] == 8 )
        *(_DWORD *)v18 = 0;
    }
  }
  if ( v8 )
  {
LABEL_18:
    CDialogTemplate::CDialogTemplate(this: (CDialogTemplate *)v12, Src: lpTemplate);
    LOBYTE(v21) = 2;
    CDialogTemplate::SetSystemFont(this: (CDialogTemplate *)v12, a2: v18[0]);
    hMem = (HGLOBAL)ATL::CComPtrBase<ICustomDestinationList>::Detach(a1: v12);
    LOBYTE(v21) = 1;
    Concurrency::details::UMSFreeVirtualProcessorRoot::InitialThreadParam::~InitialThreadParam(this: (Concurrency::details::UMSFreeVirtualProcessorRoot::InitialThreadParam *)v12);
  }
  if ( hMem != nullptr )
    lpTemplate = (LPCDLGTEMPLATEA)GlobalLock(hMem);
  *((_DWORD *)this + 11) = -1;
  *((_DWORD *)this + 9) |= 0x10u;
  AfxHookWindowCreate(a1: this);
  if ( a3 != nullptr )
    v9 = *((HWND *)a3 + 7);
  else
    v9 = nullptr;
  hWnd = CreateDialogIndirectParamA(hInstance, lpTemplate, hWndParent: v9, lpDialogFunc: AfxDlgProc, dwInitParam: 0);
  LOBYTE(v21) = 0;
  CString::~CString(this: (CString *)&Str1);
  v21 = -1;
  if ( v14 != 0 )
  {
    (*(void (__thiscall **)(int, _BYTE *))(*(_DWORD *)v14 + 20))(a1: v14, a2: v13);
    if ( hWnd != nullptr )
      (*(void (__thiscall **)(CWnd *, _DWORD))(*(_DWORD *)this + 188))(a1: this, a2: 0);
  }
  if ( AfxUnhookWindowCreate() == 0 )
    (*(void (__thiscall **)(CWnd *))(*(_DWORD *)this + 172))(a1: this);
  v10 = hWnd;
  if ( hWnd != nullptr && (*((_BYTE *)this + 36) & 0x10) == 0 )
  {
    DestroyWindow(hWnd);
    v10 = nullptr;
  }
  if ( hMem != nullptr )
  {
    GlobalUnlock(hMem);
    GlobalFree(hMem);
  }
  return v10 != nullptr;
}


/* ============================================
   Address: 0x4167B4
   Function: sub_4167B4
   ============================================ */

int __stdcall sub_4167B4(int a1)
{
  return 0;
}


/* ============================================
   Address: 0x4167B9
   Function: ?SetOccDialogInfo@CDialog@@MAEHPAU_AFX_OCC_DIALOG_INFO@@@Z
   ============================================ */

int __thiscall CDialog::SetOccDialogInfo(CDialog *this, struct _AFX_OCC_DIALOG_INFO *a2)
{
  *((_DWORD *)this + 22) = a2;
  return 1;
}


/* ============================================
   Address: 0x4167C6
   Function: ??0CDialog@@QAE@IPAVCWnd@@@Z
   ============================================ */

CDialog *__thiscall CDialog::CDialog(CDialog *this, unsigned int a2, struct CWnd *a3)
{
  CWnd::CWnd(this);
  *(_DWORD *)this = &CDialog::`vftable';
  memset(a1: (char *)this + 60, Val: 0, Size: 0x20u);
  *((_DWORD *)this + 20) = a3;
  *((_DWORD *)this + 15) = a2;
  *((_DWORD *)this + 16) = (unsigned __int16)a2;
  return this;
}


/* ============================================
   Address: 0x4167FF
   Function: ?PreModal@CDialog@@IAEPAUHWND__@@XZ
   ============================================ */

HWND __thiscall CDialog::PreModal(CDialog *this)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  struct CWnd *SafeOwner; // edi

  ModuleState = AfxGetModuleState();
  CWinApp::EnableModeless(this: *((CWinApp **)ModuleState + 1), a2: 0);
  SafeOwner = CWnd::GetSafeOwner(a1: *((struct CWnd **)this + 20), a2: (HWND *)this + 21);
  AfxHookWindowCreate(a1: this);
  if ( SafeOwner != nullptr )
    return *((HWND *)SafeOwner + 7);
  else
    return nullptr;
}


/* ============================================
   Address: 0x416836
   Function: ?PostModal@CDialog@@IAEXXZ
   ============================================ */

void __thiscall CDialog::PostModal(HWND *this)
{
  struct AFX_MODULE_STATE *ModuleState; // eax

  AfxUnhookWindowCreate();
  CWnd::Detach((CWnd *)this);
  if ( IsWindow(hWnd: *(this + 21)) )
    EnableWindow(hWnd: *(this + 21), bEnable: true);
  *(this + 21) = nullptr;
  ModuleState = AfxGetModuleState();
  CWinApp::EnableModeless(this: *((CWinApp **)ModuleState + 1), a2: 1);
}


/* ============================================
   Address: 0x416874
   Function: ?DoModal@CDialog@@UAEHXZ
   ============================================ */

int __thiscall CDialog::DoModal(CDialog *this)
{
  HGLOBAL Resource; // edi
  HINSTANCE v3; // ebx
  HRSRC ResourceA; // eax
  HWND v6; // edi
  struct CWnd *v7; // eax
  char v8; // bl
  int v9; // [esp-Ch] [ebp-30h] BYREF
  HWND v10; // [esp+4h] [ebp-20h]
  int v11; // [esp+8h] [ebp-1Ch]
  CDialog *v12; // [esp+Ch] [ebp-18h]
  LPCDLGTEMPLATEA lpTemplate; // [esp+10h] [ebp-14h]
  int *v14; // [esp+14h] [ebp-10h]
  int v15; // [esp+20h] [ebp-4h]

  v14 = &v9;
  v12 = this;
  Resource = *((HGLOBAL *)this + 17);
  lpTemplate = *((LPCDLGTEMPLATEA *)this + 18);
  v3 = *((HINSTANCE *)AfxGetModuleState() + 3);
  if ( *((_DWORD *)this + 16) != 0 )
  {
    v3 = *((HINSTANCE *)AfxGetModuleState() + 3);
    ResourceA = FindResourceA(hModule: v3, lpName: *((LPCSTR *)this + 16), lpType: (LPCSTR)5);
    Resource = LoadResource(hModule: v3, hResInfo: ResourceA);
  }
  if ( Resource != nullptr )
    lpTemplate = (LPCDLGTEMPLATEA)LockResource(hResData: Resource);
  if ( lpTemplate == nullptr )
    return -1;
  v6 = CDialog::PreModal(this);
  v10 = v6;
  AfxUnhookWindowCreate();
  CWnd::FromHandle(a1: v6);
  v11 = 0;
  if ( v6 != nullptr && IsWindowEnabled(hWnd: v6) )
  {
    EnableWindow(hWnd: v6, bEnable: false);
    v11 = 1;
  }
  v15 = 0;
  AfxHookWindowCreate(a1: this);
  v7 = CWnd::FromHandle(a1: v6);
  if ( CWnd::CreateDlgIndirect(this, lpTemplate, a3: v7, hInstance: v3) )
  {
    if ( (*((_BYTE *)this + 36) & 0x10) != 0 )
    {
      v8 = 4;
      if ( (CWnd::GetStyle(this) & 0x100) != 0 )
        v8 = 5;
      CWnd::RunModalLoop(this, a2: v8);
    }
    if ( *((_DWORD *)this + 7) != 0 )
      CWnd::SetWindowPos(this, hWndInsertAfter: nullptr, X: 0, Y: 0, a5: 0, cy: 0, a7: 0x97u);
  }
  v15 = -1;
  if ( v11 != 0 )
    EnableWindow(hWnd: v6, bEnable: true);
  if ( v6 != nullptr && GetActiveWindow() == *((HWND *)this + 7) )
    SetActiveWindow(hWnd: v6);
  (*(void (__thiscall **)(CDialog *))(*(_DWORD *)this + 96))(a1: this);
  CDialog::PostModal((HWND *)this);
  return *((_DWORD *)this + 11);
}


/* ============================================
   Address: 0x4169D9
   Function: ?EndDialog@CDialog@@QAEXH@Z
   ============================================ */

void __thiscall CDialog::EndDialog(CDialog *this, INT_PTR nResult)
{
  if ( (*((_BYTE *)this + 36) & 0x18) != 0 )
    (*(void (__thiscall **)(CDialog *, INT_PTR))(*(_DWORD *)this + 124))(a1: this, a2: nResult);
  EndDialog(hDlg: *((HWND *)this + 7), nResult);
}


/* ============================================
   Address: 0x4169FC
   Function: ?HandleSetFont@CDialog@@IAEJIJ@Z
   ============================================ */

int __thiscall CDialog::HandleSetFont(CDialog *this, void *a2, int a3)
{
  int v4; // edi
  struct CGdiObject *v5; // eax

  v4 = *(_DWORD *)this;
  v5 = CGdiObject::FromHandle(a1: a2);
  (*(void (__thiscall **)(CDialog *, struct CGdiObject *))(v4 + 200))(a1: this, a2: v5);
  return CWnd::Default(this);
}


/* ============================================
   Address: 0x416A20
   Function: nullsub_4
   ============================================ */

void nullsub_4()
{
  ;
}


/* ============================================
   Address: 0x416A21
   Function: ?HandleInitDialog@CDialog@@IAEJIJ@Z
   ============================================ */

int __thiscall CDialog::HandleInitDialog(HWND *this, unsigned int a2, int a3)
{
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  int v8; // edi
  HWND NextDlgTabItem; // eax
  CWnd *v10; // eax

  (*((void (__thiscall **)(HWND *))*this + 53))(a1: this);
  v4 = *((_DWORD *)AfxGetModuleState() + 1038);
  if ( v4 != 0
    && *(this + 22) != nullptr
    && ((v5 = (int)*(this + 19)) == 0
      ? (v6 = (*(int (__thiscall **)(int, HWND *, _DWORD, _DWORD))(*(_DWORD *)v4 + 32))(
                a1: v4,
                a2: this,
                a3: *(this + 16),
                a4: *(this + 22)))
      : (v6 = (*(int (__thiscall **)(int, HWND *, int, _DWORD))(*(_DWORD *)v4 + 28))(
                a1: v4,
                a2: this,
                a3: v5,
                a4: *(this + 22))),
        v6 == 0) )
  {
    CDialog::EndDialog((CDialog *)this, nResult: -1);
    return 0;
  }
  else
  {
    v8 = CWnd::Default((CWnd *)this);
    if ( v8 != 0 && (*((_BYTE *)this + 37) & 1) != 0 )
    {
      NextDlgTabItem = GetNextDlgTabItem(hDlg: *(this + 7), hCtl: nullptr, bPrevious: false);
      v10 = CWnd::FromHandle(a1: NextDlgTabItem);
      if ( v10 != nullptr )
      {
        CWnd::SetFocus(this: v10);
        return 0;
      }
    }
    return v8;
  }
}


/* ============================================
   Address: 0x416AA9
   Function: ?AfxHelpEnabled@@YGHXZ
   ============================================ */

int __stdcall AfxHelpEnabled()
{
  int result; // eax
  struct CWnd *MainWnd; // eax
  struct AFX_MODULE_STATE *ModuleState; // eax
  _BYTE v3[8]; // [esp+4h] [ebp-8h] BYREF

  result = *((_DWORD *)AfxGetModuleState() + 1);
  if ( result != 0 )
  {
    MainWnd = AfxGetMainWnd();
    if ( MainWnd != nullptr
      && (*(int (__thiscall **)(struct CWnd *, int, _DWORD, _DWORD, _BYTE *))(*(_DWORD *)MainWnd + 20))(
           a1: MainWnd,
           a2: 57670,
           a3: 0,
           a4: 0,
           a5: v3) != 0 )
    {
      return 1;
    }
    else
    {
      ModuleState = AfxGetModuleState();
      return (*(int (__thiscall **)(_DWORD, int, _DWORD, _DWORD, _BYTE *))(**((_DWORD **)ModuleState + 1) + 20))(
               a1: *((_DWORD *)ModuleState + 1),
               a2: 57670,
               a3: 0,
               a4: 0,
               a5: v3);
    }
  }
  return result;
}


/* ============================================
   Address: 0x416AFD
   Function: nullsub_5
   ============================================ */

void __stdcall nullsub_5(int a1)
{
  ;
}


/* ============================================
   Address: 0x416B00
   Function: ?OnInitDialog@CDialog@@UAEHXZ
   ============================================ */

int __thiscall CDialog::OnInitDialog(CDialog *this)
{
  int v2; // eax
  CWnd *DlgItem; // esi
  int v5; // eax

  if ( *((_DWORD *)this + 19) != 0 )
    v2 = CWnd::ExecuteDlgInit(this, a2: *((void **)this + 19));
  else
    v2 = CWnd::ExecuteDlgInit(this, lpName: *((LPCSTR *)this + 16));
  if ( v2 != 0 && CWnd::UpdateData(this, a2: 0) != 0 )
  {
    DlgItem = CWnd::GetDlgItem(this, a2: 57670);
    if ( DlgItem != nullptr )
    {
      v5 = AfxHelpEnabled();
      CWnd::ShowWindow(this: DlgItem, a2: v5 != 0 ? 5 : 0);
    }
    return 1;
  }
  else
  {
    CDialog::EndDialog(this, nResult: -1);
    return 0;
  }
}


/* ============================================
   Address: 0x416B65
   Function: ?OnOK@CDialog@@MAEXXZ
   ============================================ */

void __thiscall CDialog::OnOK(CDialog *this)
{
  if ( CWnd::UpdateData(this, a2: 1) != 0 )
    CDialog::EndDialog(this, nResult: 1);
}


/* ============================================
   Address: 0x416B7E
   Function: sub_416B7E
   ============================================ */

void __thiscall sub_416B7E(CDialog *this)
{
  CDialog::EndDialog(this, nResult: 2);
}


/* ============================================
   Address: 0x416B86
   Function: ?CheckAutoCenter@CDialog@@UAEHXZ
   ============================================ */

BOOL __thiscall CDialog::CheckAutoCenter(CDialog *this)
{
  _DWORD *v2; // esi
  HGLOBAL Resource; // eax
  HMODULE v4; // ebx
  HRSRC ResourceA; // eax
  BOOL result; // eax
  int v7; // ecx
  __int16 v8; // ax
  __int16 v9; // si

  v2 = *((_DWORD **)this + 18);
  Resource = *((HGLOBAL *)this + 17);
  if ( *((_DWORD *)this + 16) != 0 )
  {
    v4 = *((HMODULE *)AfxGetModuleState() + 3);
    ResourceA = FindResourceA(hModule: v4, lpName: *((LPCSTR *)this + 16), lpType: (LPCSTR)5);
    Resource = LoadResource(hModule: v4, hResInfo: ResourceA);
  }
  if ( Resource != nullptr )
    v2 = LockResource(hResData: Resource);
  result = true;
  if ( v2 != nullptr )
  {
    v7 = *v2;
    if ( HIWORD(*v2) == 0xFFFF )
    {
      v7 = v2[3];
      v8 = *((_WORD *)v2 + 9);
      v9 = *((_WORD *)v2 + 10);
    }
    else
    {
      v8 = *((_WORD *)v2 + 5);
      v9 = *((_WORD *)v2 + 6);
    }
    return (v7 & 0x1801) == 0 && v8 == 0 && v9 == 0;
  }
  return result;
}


/* ============================================
   Address: 0x416C16
   Function: ?OnCommandHelp@CDialog@@IAEJIJ@Z
   ============================================ */

int __thiscall CDialog::OnCommandHelp(CDialog *this, unsigned int a2, int a3)
{
  int v3; // esi
  int v4; // eax
  struct AFX_MODULE_STATE *ModuleState; // eax

  v3 = a3;
  if ( a3 == 0 )
  {
    v4 = *((_DWORD *)this + 15);
    if ( v4 != 0 )
      v3 = v4 + 0x20000;
    if ( v3 == 0 )
      return 0;
  }
  ModuleState = AfxGetModuleState();
  (*(void (__thiscall **)(_DWORD, int, int))(**((_DWORD **)ModuleState + 1) + 160))(
    a1: *((_DWORD *)ModuleState + 1),
    a2: v3,
    a3: 1);
  return 1;
}


/* ============================================
   Address: 0x416C50
   Function: ?OnHelpHitTest@CDialog@@IAEJIJ@Z
   ============================================ */

int __thiscall CDialog::OnHelpHitTest(CDialog *this, unsigned int a2, int a3)
{
  int v3; // eax

  v3 = *((_DWORD *)this + 15);
  if ( v3 != 0 )
    return v3 + 0x20000;
  else
    return 0;
}


/* ============================================
   Address: 0x416C63
   Function: sub_416C63
   ============================================ */

// attributes: thunk
int sub_416C63()
{
  return sub_416C68();
}


/* ============================================
   Address: 0x416C68
   Function: sub_416C68
   ============================================ */

UINT sub_416C68()
{
  UINT result; // eax

  result = RegisterWindowMessageA(lpString: "commctrl_DragListMsg");
  dword_42F5A4 = result;
  return result;
}


/* ============================================
   Address: 0x416C79
   Function: sub_416C79
   ============================================ */

int sub_416C79()
{
  sub_416C83();
  return atexit(a1: unknown_libname_5);
}


/* ============================================
   Address: 0x416C83
   Function: sub_416C83
   ============================================ */

CWnd *sub_416C83()
{
  return CWnd::CWnd(this: (CWnd *)&unk_42F4A8, a2: nullptr);
}


/* ============================================
   Address: 0x416C9C
   Function: unknown_libname_5
   ============================================ */

// MFC 3.1-14.0 32bit
void __cdecl unknown_libname_5()
{
  if ( (byte_42DCA0 & 1) == 0 )
  {
    byte_42DCA0 |= 1u;
    CWnd::~CWnd(this: (CWnd *)&unk_42F4A8);
  }
}


/* ============================================
   Address: 0x416CB7
   Function: sub_416CB7
   ============================================ */

int sub_416CB7()
{
  sub_416CC1();
  return atexit(a1: unknown_libname_6);
}


/* ============================================
   Address: 0x416CC1
   Function: sub_416CC1
   ============================================ */

CWnd *sub_416CC1()
{
  return CWnd::CWnd(this: (CWnd *)&hWndInsertAfter, a2: (HWND)1);
}


/* ============================================
   Address: 0x416CDA
   Function: unknown_libname_6
   ============================================ */

// MFC 3.1-14.0 32bit
void __cdecl unknown_libname_6()
{
  if ( (byte_42DCA0 & 2) == 0 )
  {
    byte_42DCA0 |= 2u;
    CWnd::~CWnd(this: (CWnd *)&hWndInsertAfter);
  }
}


/* ============================================
   Address: 0x416CF5
   Function: sub_416CF5
   ============================================ */

int sub_416CF5()
{
  sub_416CFF();
  return atexit(a1: unknown_libname_7);
}


/* ============================================
   Address: 0x416CFF
   Function: sub_416CFF
   ============================================ */

CWnd *sub_416CFF()
{
  return CWnd::CWnd(this: (CWnd *)&unk_42F4E8, a2: HWND_MESSAGE|0x2);
}


/* ============================================
   Address: 0x416D18
   Function: unknown_libname_7
   ============================================ */

// MFC 3.1-14.0 32bit
void __cdecl unknown_libname_7()
{
  if ( (byte_42DCA0 & 4) == 0 )
  {
    byte_42DCA0 |= 4u;
    CWnd::~CWnd(this: (CWnd *)&unk_42F4E8);
  }
}


/* ============================================
   Address: 0x416D33
   Function: sub_416D33
   ============================================ */

int sub_416D33()
{
  sub_416D3D();
  return atexit(a1: unknown_libname_8);
}


/* ============================================
   Address: 0x416D3D
   Function: sub_416D3D
   ============================================ */

CWnd *sub_416D3D()
{
  return CWnd::CWnd(this: (CWnd *)&unk_42F528, a2: (HWND)0xFFFFFFFE);
}


/* ============================================
   Address: 0x416D56
   Function: unknown_libname_8
   ============================================ */

// MFC 3.1-14.0 32bit
void __cdecl unknown_libname_8()
{
  if ( (byte_42DCA0 & 8) == 0 )
  {
    byte_42DCA0 |= 8u;
    CWnd::~CWnd(this: (CWnd *)&unk_42F528);
  }
}


/* ============================================
   Address: 0x416D71
   Function: ??0CWnd@@QAE@XZ
   ============================================ */

CWnd *__thiscall CWnd::CWnd(CWnd *this)
{
  CCmdTarget::CCmdTarget(this);
  *(_DWORD *)this = &CWnd::`vftable';
  memset(a1: (char *)this + 28, Val: 0, Size: 0x20u);
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 13) = 0;
  return this;
}


/* ============================================
   Address: 0x416D9B
   Function: sub_416D9B
   ============================================ */

CWnd *__thiscall sub_416D9B(CWnd *Block, char a2)
{
  CWnd::~CWnd(this: Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}


/* ============================================
   Address: 0x416DB7
   Function: ??0CWnd@@AAE@PAUHWND__@@@Z
   ============================================ */

CWnd *__thiscall CWnd::CWnd(CWnd *this, HWND a2)
{
  CCmdTarget::CCmdTarget(this);
  *(_DWORD *)this = &CWnd::`vftable';
  memset(a1: (char *)this + 28, Val: 0, Size: 0x20u);
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 7) = a2;
  return this;
}


/* ============================================
   Address: 0x416DEB
   Function: ?_AfxModifyStyle@@YGHPAUHWND__@@HKKI@Z
   ============================================ */

int __stdcall _AfxModifyStyle(HWND hWnd, int nIndex, unsigned int a3, unsigned int a4, UINT a5)
{
  LONG WindowLongA; // eax
  UINT v7; // eax

  WindowLongA = GetWindowLongA(hWnd, nIndex);
  if ( WindowLongA == (a4 | WindowLongA & ~a3) )
    return 0;
  SetWindowLongA(hWnd, nIndex, dwNewLong: a4 | WindowLongA & ~a3);
  v7 = a5;
  if ( a5 != 0 )
  {
    LOBYTE(v7) = a5 | 0x17;
    SetWindowPos(hWnd, hWndInsertAfter: nullptr, X: 0, Y: 0, cx: 0, cy: 0, uFlags: v7);
  }
  return 1;
}


/* ============================================
   Address: 0x416E3A
   Function: ?ModifyStyleEx@CWnd@@SGHPAUHWND__@@KKI@Z
   ============================================ */

static int __stdcall CWnd::ModifyStyleEx(HWND hWnd, unsigned int a2, unsigned int a3, UINT a4)
{
  return _AfxModifyStyle(hWnd, nIndex: -20, a3: a2, a4: a3, a5: a4);
}


/* ============================================
   Address: 0x416E54
   Function: ?AfxCallWndProc@@YGJPAVCWnd@@PAUHWND__@@IIJ@Z
   ============================================ */

// bad sp value at call has been detected, the output may be wrong!
struct CWnd *__userpurge AfxCallWndProc@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        int a3@<esi>,
        struct CWnd *a4,
        HWND a5,
        CException *a6,
        unsigned int a7,
        int a8)
{
  struct CNoTrackObject *Data; // ebx
  CException *v9; // esi
  int v11; // eax
  int v12; // ecx
  int v14; // [esp-Ch] [ebp-4Ch] BYREF
  int v15; // [esp-8h] [ebp-48h]
  int v16; // [esp-4h] [ebp-44h]
  _DWORD v17[7]; // [esp+0h] [ebp-40h] BYREF
  struct tagRECT Rect; // [esp+1Ch] [ebp-24h] BYREF
  struct CNoTrackObject *v19; // [esp+2Ch] [ebp-14h]
  int *v20; // [esp+30h] [ebp-10h]
  int v21; // [esp+3Ch] [ebp-4h]
  struct CWnd *v22; // [esp+48h] [ebp+8h]

  v16 = a1;
  v15 = a3;
  v14 = a2;
  v20 = &v14;
  Data = CThreadLocalObject::GetData(
           this: (CThreadLocalObject *)&unk_42F5B8,
           a2: CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
  v21 = 0;
  v19 = Data;
  qmemcpy(v17, (char *)Data + 52, sizeof(v17));
  v9 = a6;
  *((_DWORD *)Data + 13) = a5;
  *((_DWORD *)Data + 15) = a7;
  v11 = a8;
  *((_DWORD *)Data + 14) = v9;
  *((_DWORD *)Data + 16) = v11;
  if ( v9 == (CException *)2 )
  {
    v12 = *((_DWORD *)a4 + 13);
    if ( v12 != 0 )
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 100))(a1: v12, a2: 0);
  }
  if ( v9 == (CException *)272 )
    _AfxPreInitDialog(a1: a4, lpRect: &Rect, a3: (unsigned int *)&a5);
  v22 = (struct CWnd *)(*(int (__thiscall **)(struct CWnd *, CException *, unsigned int, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, LONG, LONG, LONG, LONG, struct CNoTrackObject *, int *))(*(_DWORD *)a4 + 160))(
                         a1: a4,
                         a2: v9,
                         a3: a7,
                         a4: a8,
                         a5: v14,
                         a6: v15,
                         a7: v16,
                         a8: v17[0],
                         a9: v17[1],
                         a10: v17[2],
                         a11: v17[3],
                         a12: v17[4],
                         a13: v17[5],
                         a14: v17[6],
                         a15: Rect.left,
                         a16: Rect.top,
                         a17: Rect.right,
                         a18: Rect.bottom,
                         a19: v19,
                         a20: v20);
  if ( v9 == (CException *)272 )
    _AfxPostInitDialog(a1: a4, a2: &Rect, a3: (__int16)a5);
  qmemcpy((char *)Data + 52, v17, 28);
  return v22;
}


/* ============================================
   Address: 0x416F44
   Function: ?_AfxPreInitDialog@@YGXPAVCWnd@@PAUtagRECT@@PAK@Z
   ============================================ */

void __stdcall _AfxPreInitDialog(HWND *a1, LPRECT lpRect, unsigned int *a3)
{
  GetWindowRect(hWnd: a1[7], lpRect);
  *a3 = CWnd::GetStyle(this: (CWnd *)a1);
}


/* ============================================
   Address: 0x416F67
   Function: ?_AfxPostInitDialog@@YGXPAVCWnd@@ABUtagRECT@@K@Z
   ============================================ */

void __stdcall _AfxPostInitDialog(HWND *a1, const struct tagRECT *a2, int a3)
{
  HWND Window; // eax
  CWnd *v4; // eax
  struct tagRECT Rect; // [esp+4h] [ebp-10h] BYREF

  if ( (a3 & 0x10000000) == 0 && (CWnd::GetStyle(this: (CWnd *)a1) & 0x50000000) == 0 )
  {
    GetWindowRect(hWnd: a1[7], lpRect: &Rect);
    if ( a2->left == Rect.left && a2->top == Rect.top )
    {
      Window = GetWindow(hWnd: a1[7], uCmd: 4u);
      v4 = CWnd::FromHandle(a1: Window);
      if ( (v4 == nullptr || CWnd::IsWindowEnabled(this: v4) == 0)
        && (*((int (__thiscall **)(HWND *))*a1 + 45))(a1) != 0 )
      {
        CWnd::CenterWindow(this: (CWnd *)a1, a2: nullptr);
      }
    }
  }
}


/* ============================================
   Address: 0x416FE0
   Function: ?GetCurrentMessage@CWnd@@KGPBUtagMSG@@XZ
   ============================================ */

static const struct tagMSG *__stdcall CWnd::GetCurrentMessage()
{
  struct CNoTrackObject *Data; // esi
  DWORD MessagePos; // eax

  Data = CThreadLocalObject::GetData(
           this: (CThreadLocalObject *)&unk_42F5B8,
           a2: CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
  *((_DWORD *)Data + 17) = GetMessageTime();
  MessagePos = GetMessagePos();
  *((_DWORD *)Data + 18) = (__int16)MessagePos;
  *((_DWORD *)Data + 19) = SHIWORD(MessagePos);
  return (const struct tagMSG *)((char *)Data + 52);
}


/* ============================================
   Address: 0x417015
   Function: ?Default@CWnd@@IAEJXZ
   ============================================ */

int __thiscall CWnd::Default(CWnd *this)
{
  struct CNoTrackObject *Data; // eax

  Data = CThreadLocalObject::GetData(
           this: (CThreadLocalObject *)&unk_42F5B8,
           a2: CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
  return (*(int (__thiscall **)(CWnd *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 168))(
           a1: this,
           a2: *((_DWORD *)Data + 14),
           a3: *((_DWORD *)Data + 15),
           a4: *((_DWORD *)Data + 16));
}


/* ============================================
   Address: 0x41703C
   Function: ?DeleteTempMap@CWnd@@SGXXZ
   ============================================ */

static void __stdcall CWnd::DeleteTempMap()
{
  CHandleMap *v0; // eax

  v0 = afxMapHWND(Block: nullptr);
  if ( v0 != nullptr )
    CHandleMap::DeleteTemp(this: v0);
}


/* ============================================
   Address: 0x417050
   Function: ?afxMapHWND@@YAPAVCHandleMap@@H@Z
   ============================================ */

struct CHandleMap *__cdecl afxMapHWND(void *Block)
{
  struct AFX_MODULE_THREAD_STATE *ModuleThreadState; // esi
  int (__cdecl *v2)(unsigned int); // ebx
  CHandleMap *v3; // ecx
  CHandleMap *v4; // eax

  ModuleThreadState = AfxGetModuleThreadState();
  if ( *((_DWORD *)ModuleThreadState + 5) == 0 && Block != nullptr )
  {
    v2 = AfxSetNewHandler(a1: AfxCriticalNewHandler);
    v3 = (CHandleMap *)operator new(Size: 0x44u);
    if ( v3 != nullptr )
      v4 = CHandleMap::CHandleMap(this: v3, a2: (struct CRuntimeClass *)&off_422DB0, a3: 0x1Cu, a4: 1);
    else
      v4 = nullptr;
    *((_DWORD *)ModuleThreadState + 5) = v4;
    AfxSetNewHandler(a1: v2);
  }
  return *((struct CHandleMap **)ModuleThreadState + 5);
}


/* ============================================
   Address: 0x4170C0
   Function: ?FromHandle@CWnd@@SGPAV1@PAUHWND__@@@Z
   ============================================ */

static struct CWnd *__stdcall CWnd::FromHandle(HWND a1)
{
  CHandleMap *v1; // esi
  CWnd *v2; // edi

  v1 = afxMapHWND(Block: (void *)1);
  v2 = CHandleMap::FromHandle(this: v1, a2: a1);
  CWnd::AttachControlSite(this: v2, a2: v1);
  return v2;
}


/* ============================================
   Address: 0x4170E8
   Function: ?FromHandlePermanent@CWnd@@SGPAV1@PAUHWND__@@@Z
   ============================================ */

static struct CWnd *__stdcall CWnd::FromHandlePermanent(HWND a1)
{
  CMapPtrToPtr *v1; // ecx
  struct CWnd *result; // eax

  v1 = afxMapHWND(Block: nullptr);
  result = nullptr;
  if ( v1 != nullptr )
    return (struct CWnd *)CMapPtrToPtr::GetValueAt(this: v1, a2: (unsigned int)a1);
  return result;
}


/* ============================================
   Address: 0x417104
   Function: ?Attach@CWnd@@QAEHPAUHWND__@@@Z
   ============================================ */

int __thiscall CWnd::Attach(CWnd *this, HWND a2)
{
  CMapPtrToPtr *v4; // ebx

  if ( a2 == nullptr )
    return 0;
  v4 = afxMapHWND(Block: (void *)1);
  *((_DWORD *)this + 7) = a2;
  *(_DWORD *)sub_416134(this: v4, (unsigned int)a2) = this;
  CWnd::AttachControlSite(this, a2: v4);
  return 1;
}


/* ============================================
   Address: 0x41713D
   Function: ?Detach@CWnd@@QAEPAUHWND__@@XZ
   ============================================ */

int __thiscall CWnd::Detach(CWnd *this)
{
  int v2; // edi
  struct CHandleMap *v3; // eax

  v2 = *((_DWORD *)this + 7);
  if ( v2 != 0 )
  {
    v3 = afxMapHWND(Block: nullptr);
    if ( v3 != nullptr )
      sub_416184(this: v3, a2: *((_DWORD *)this + 7));
    *((_DWORD *)this + 7) = 0;
  }
  *((_DWORD *)this + 14) = 0;
  return v2;
}


/* ============================================
   Address: 0x41716B
   Function: nullsub_6
   ============================================ */

void nullsub_6()
{
  ;
}


/* ============================================
   Address: 0x41716C
   Function: ?AfxWndProc@@YGJPAUHWND__@@IIJ@Z
   ============================================ */

struct CWnd *__userpurge AfxWndProc@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        int a3@<esi>,
        HWND a4,
        CException *a5,
        unsigned int a6,
        int a7)
{
  struct CWnd *v8; // eax

  if ( a5 == (CException *)864 )
    return (struct CWnd *)1;
  v8 = CWnd::FromHandlePermanent(a1: a4);
  return AfxCallWndProc(a1, a2, a3, a4: v8, a5: a4, a6: a5, a7: a6, a8: a7);
}


/* ============================================
   Address: 0x41719B
   Function: ?AfxGetAfxWndProc@@YGP6GJPAUHWND__@@IIJ@ZXZ
   ============================================ */

struct CWnd *(__userpurge *__stdcall AfxGetAfxWndProc())@<eax>(int a1@<ebx>, int a2@<edi>, int a3@<esi>, HWND a4, CException *a5, unsigned int a6, int a7)
{
  return AfxWndProc;
}


/* ============================================
   Address: 0x4171A1
   Function: ?_AfxActivationWndProc@@YGJPAUHWND__@@IIJ@Z
   ============================================ */

LRESULT __stdcall _AfxActivationWndProc(HWND hWnd, UINT Msg, WPARAM wParam, unsigned int lParam)
{
  LRESULT (__stdcall *PropA)(HWND, UINT, WPARAM, LPARAM); // eax
  BOOL v5; // ebx
  HWND *v6; // esi
  struct CWnd *v7; // eax
  struct CWnd *v8; // esi
  struct CWnd *v9; // eax
  int v11; // [esp-Ch] [ebp-48h] BYREF
  struct tagRECT Rect; // [esp+Ch] [ebp-30h] BYREF
  __int16 v13[2]; // [esp+20h] [ebp-1Ch] BYREF
  WNDPROC lpPrevWndFunc; // [esp+24h] [ebp-18h]
  LRESULT v15; // [esp+28h] [ebp-14h]
  int *v16; // [esp+2Ch] [ebp-10h]
  int v17; // [esp+38h] [ebp-4h]

  v16 = &v11;
  PropA = (LRESULT (__stdcall *)(HWND, UINT, WPARAM, LPARAM))GetPropA(hWnd, lpString: "AfxOldWndProc");
  v15 = 0;
  v17 = 0;
  lpPrevWndFunc = PropA;
  v5 = true;
  switch ( Msg )
  {
    case 6u:
      v8 = CWnd::FromHandle(a1: (HWND)lParam);
      v9 = CWnd::FromHandle(a1: hWnd);
      _AfxHandleActivate(a1: v9, wParam, a3: v8);
      break;
    case 0x20u:
      v7 = CWnd::FromHandle(a1: hWnd);
      v5 = _AfxHandleSetCursor(a1: v7, a2: (__int16)lParam, a3: HIWORD(lParam)) == 0;
      break;
    case 0x82u:
      SetWindowLongA(hWnd, nIndex: -4, dwNewLong: (LONG)lpPrevWndFunc);
      RemovePropA(hWnd, lpString: "AfxOldWndProc");
      break;
    case 0x110u:
      v6 = (HWND *)CWnd::FromHandle(a1: hWnd);
      _AfxPreInitDialog(a1: v6, lpRect: &Rect, a3: (unsigned int *)v13);
      v5 = false;
      v15 = CallWindowProcA(lpPrevWndFunc, hWnd, Msg: 0x110u, wParam, lParam);
      _AfxPostInitDialog(a1: v6, a2: &Rect, a3: *(int *)v13);
      break;
    default:
      break;
  }
  if ( v5 )
    return CallWindowProcA(lpPrevWndFunc, hWnd, Msg, wParam, lParam);
  return v15;
}


/* ============================================
   Address: 0x4172EE
   Function: ?_AfxHandleActivate@@YGXPAVCWnd@@I0@Z
   ============================================ */

void __stdcall _AfxHandleActivate(LPARAM *a1, WPARAM wParam, struct CWnd *a3)
{
  HWND *TopLevelParent; // ebx
  LPARAM lParam; // [esp+Ch] [ebp-8h] BYREF
  int v5; // [esp+10h] [ebp-4h]

  if ( (CWnd::GetStyle(this: (CWnd *)a1) & 0x40000000) == 0 )
  {
    TopLevelParent = (HWND *)CWnd::GetTopLevelParent(this: (CWnd *)a1);
    if ( TopLevelParent != (HWND *)CWnd::GetTopLevelParent(this: a3) )
    {
      lParam = a1[7];
      if ( a3 != nullptr )
        v5 = *((_DWORD *)a3 + 7);
      else
        v5 = 0;
      SendMessageA(hWnd: TopLevelParent[7], Msg: 0x36Eu, wParam, (LPARAM)&lParam);
    }
  }
}


/* ============================================
   Address: 0x41734F
   Function: ?_AfxHandleSetCursor@@YGHPAVCWnd@@II@Z
   ============================================ */

int __stdcall _AfxHandleSetCursor(struct CWnd *a1, unsigned int a2, unsigned int a3)
{
  struct CWnd *TopLevelParent; // eax
  HWND LastActivePopup; // eax
  HWND *v5; // esi
  HWND ForegroundWindow; // eax

  if ( a2 != -2 || a3 != 513 && a3 != 519 && a3 != 516 )
    return 0;
  TopLevelParent = CWnd::GetTopLevelParent(this: a1);
  if ( TopLevelParent == nullptr )
    return 0;
  LastActivePopup = GetLastActivePopup(hWnd: *((HWND *)TopLevelParent + 7));
  v5 = (HWND *)CWnd::FromHandle(a1: LastActivePopup);
  if ( v5 == nullptr )
    return 0;
  ForegroundWindow = GetForegroundWindow();
  if ( v5 == (HWND *)CWnd::FromHandle(a1: ForegroundWindow) || CWnd::IsWindowEnabled(this: (CWnd *)v5) == 0 )
    return 0;
  SetForegroundWindow(hWnd: v5[7]);
  return 1;
}


/* ============================================
   Address: 0x4173C7
   Function: ?_AfxGrayBackgroundWndProc@@YGJPAUHWND__@@IIJ@Z
   ============================================ */

LRESULT __stdcall _AfxGrayBackgroundWndProc(HWND a1, UINT Msg, HDC hdc, HWND hWnd)
{
  struct CNoTrackObject *Data; // esi
  HBRUSH v5; // eax

  Data = CProcessLocalObject::GetData(this: (CProcessLocalObject *)&unk_42F5AC, a2: sub_4053F5);
  v5 = *((HBRUSH *)Data + 1);
  if ( v5 != nullptr
    && (Msg == 309 || Msg == 310 || Msg == 312 || Msg == 311 || Msg == 308)
    && CWnd::GrayCtlColor(hdc, hWnd, a3: Msg - 306, h: v5, a5: *((_DWORD *)Data + 2)) != 0 )
  {
    return *((_DWORD *)Data + 1);
  }
  else
  {
    return _AfxActivationWndProc(hWnd: a1, Msg, wParam: (WPARAM)hdc, lParam: (unsigned int)hWnd);
  }
}


/* ============================================
   Address: 0x417443
   Function: ?_AfxCbtFilterHook@@YGJHIJ@Z
   ============================================ */

LRESULT __stdcall _AfxCbtFilterHook(int code, HWND wParam, LPARAM lParam)
{
  struct CNoTrackObject *Data; // eax
  struct CNoTrackObject *v4; // edi
  CWnd *v6; // esi
  int v8; // edi
  int v9; // edi
  BOOL v10; // esi
  LONG v11; // eax
  struct CWnd *(__userpurge *AfxWndProc)@<eax>(int@<ebx>, int@<edi>, int@<esi>, HWND, CException *, unsigned int, int); // esi
  void *WindowLongA; // eax
  void *v14; // eax
  LRESULT v15; // esi
  struct CWnd *v16; // [esp+4h] [ebp-8h]
  struct CNoTrackObject *v17; // [esp+8h] [ebp-4h]
  struct CWnd *(__userpurge *nCode)@<eax>(int@<ebx>, int@<edi>, int@<esi>, HWND, CException *, unsigned int, int); // [esp+14h] [ebp+8h]
  HANDLE nCodea; // [esp+14h] [ebp+8h]
  LONG *wParama; // [esp+18h] [ebp+Ch]

  Data = CThreadLocalObject::GetData(
           this: (CThreadLocalObject *)&unk_42F5B8,
           a2: CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
  v4 = Data;
  v17 = Data;
  if ( code != 3 )
    return CallNextHookEx(hhk: *((HHOOK *)Data + 11), nCode: code, (WPARAM)wParam, lParam);
  v6 = *((CWnd **)Data + 5);
  if ( v6 != nullptr || (*(_BYTE *)(*(_DWORD *)lParam + 35) & 0x40) == 0 && *((_BYTE *)AfxGetModuleState() + 20) == 0 )
  {
    if ( v6 == nullptr )
    {
      WindowLongA = (void *)GetWindowLongA(hWnd: wParam, nIndex: -4);
      nCodea = WindowLongA;
      if ( WindowLongA != nullptr )
      {
        SetPropA(hWnd: wParam, lpString: "AfxOldWndProc", hData: WindowLongA);
        if ( GetPropA(hWnd: wParam, lpString: "AfxOldWndProc") == nCodea )
        {
          v14 = _AfxGrayBackgroundWndProc;
          if ( *((_DWORD *)v4 + 10) == 0 )
            v14 = _AfxActivationWndProc;
          SetWindowLongA(hWnd: wParam, nIndex: -4, dwNewLong: (LONG)v14);
        }
      }
      goto LABEL_22;
    }
    CWnd::Attach(this: v6, a2: wParam);
    v8 = *(_DWORD *)v6;
    (*(void (__thiscall **)(CWnd *))(*(_DWORD *)v6 + 88))(a1: v6);
    wParama = (LONG *)(*(int (__thiscall **)(CWnd *))(v8 + 136))(a1: v6);
    if ( dword_42F8DC == 0
      && *((_BYTE *)AfxGetModuleState() + 20) == 0
      && (v9 = dword_42F878, dword_42F878 != 0)
      && *(_DWORD *)(dword_42F878 + 32) != 0
      && (v16 = AfxCallWndProc(
                  a1: (int)wParam,
                  a2: dword_42F878,
                  a3: (int)v6,
                  a4: v6,
                  a5: wParam,
                  a6: (CException *)0x36F,
                  a7: 0,
                  a8: 0)) != nullptr )
    {
      nCode = AfxGetAfxWndProc();
      v10 = nCode == (struct CWnd *(__userpurge *)@<eax>(int@<ebx>, int@<edi>, int@<esi>, HWND, CException *, unsigned int, int))GetWindowLongA(hWnd: wParam, nIndex: -4);
      (*(void (__stdcall **)(HWND, struct CWnd *))(v9 + 32))(a1: wParam, a2: v16);
      if ( !v10 )
      {
        v11 = SetWindowLongA(hWnd: wParam, nIndex: -4, dwNewLong: (LONG)nCode);
LABEL_15:
        *wParama = v11;
      }
    }
    else
    {
      AfxWndProc = AfxGetAfxWndProc();
      v11 = SetWindowLongA(hWnd: wParam, nIndex: -4, dwNewLong: (LONG)AfxWndProc);
      if ( (struct CWnd *(__userpurge *)@<eax>(int@<ebx>, int@<edi>, int@<esi>, HWND, CException *, unsigned int, int))v11 != AfxWndProc )
        goto LABEL_15;
    }
    v4 = v17;
    *((_DWORD *)v17 + 5) = 0;
  }
LABEL_22:
  v15 = CallNextHookEx(hhk: *((HHOOK *)v4 + 11), nCode: 3, (WPARAM)wParam, lParam);
  if ( *((_BYTE *)AfxGetModuleState() + 20) != 0 )
  {
    UnhookWindowsHookEx(hhk: *((HHOOK *)v4 + 11));
    *((_DWORD *)v4 + 11) = 0;
  }
  return v15;
}


/* ============================================
   Address: 0x4175D1
   Function: ?AfxHookWindowCreate@@YGXPAVCWnd@@@Z
   ============================================ */

void __stdcall AfxHookWindowCreate(struct CWnd *a1)
{
  struct CNoTrackObject *Data; // eax
  struct CNoTrackObject *v2; // esi
  DWORD CurrentThreadId; // eax
  HHOOK v4; // eax

  Data = CThreadLocalObject::GetData(
           this: (CThreadLocalObject *)&unk_42F5B8,
           a2: CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
  v2 = Data;
  if ( *((struct CWnd **)Data + 5) != a1 )
  {
    if ( *((_DWORD *)Data + 11) == 0 )
    {
      CurrentThreadId = GetCurrentThreadId();
      v4 = SetWindowsHookExA(idHook: 5, lpfn: (HOOKPROC)_AfxCbtFilterHook, hmod: nullptr, dwThreadId: CurrentThreadId);
      *((_DWORD *)v2 + 11) = v4;
      if ( v4 == nullptr )
        AfxThrowMemoryException();
    }
    *((_DWORD *)v2 + 5) = a1;
  }
}


/* ============================================
   Address: 0x41761D
   Function: ?AfxUnhookWindowCreate@@YGHXZ
   ============================================ */

int __stdcall AfxUnhookWindowCreate()
{
  struct CNoTrackObject *Data; // esi

  Data = CThreadLocalObject::GetData(
           this: (CThreadLocalObject *)&unk_42F5B8,
           a2: CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
  if ( *((_BYTE *)AfxGetModuleState() + 20) != 0 && *((_DWORD *)Data + 11) != 0 )
  {
    UnhookWindowsHookEx(hhk: *((HHOOK *)Data + 11));
    *((_DWORD *)Data + 11) = 0;
  }
  if ( *((_DWORD *)Data + 5) == 0 )
    return 1;
  *((_DWORD *)Data + 5) = 0;
  return 0;
}


/* ============================================
   Address: 0x41765F
   Function: ?CreateEx@CWnd@@QAEHKPBD0KHHHHPAUHWND__@@PAUHMENU__@@PAX@Z
   ============================================ */

BOOL __thiscall CWnd::CreateEx(
        CWnd *this,
        DWORD a2,
        const char *a3,
        const char *a4,
        DWORD a5,
        int a6,
        int a7,
        int a8,
        int a9,
        HWND a10,
        HMENU a11,
        void *a12)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v14; // esi
  HWND Window; // ebx
  LPVOID lpParam; // [esp+8h] [ebp-30h] BYREF
  HINSTANCE hInstance; // [esp+Ch] [ebp-2Ch]
  HMENU hMenu; // [esp+10h] [ebp-28h]
  HWND hWndParent; // [esp+14h] [ebp-24h]
  int nHeight; // [esp+18h] [ebp-20h]
  int nWidth; // [esp+1Ch] [ebp-1Ch]
  int Y; // [esp+20h] [ebp-18h]
  int X; // [esp+24h] [ebp-14h]
  DWORD dwStyle; // [esp+28h] [ebp-10h]
  LPCSTR lpWindowName; // [esp+2Ch] [ebp-Ch]
  LPCSTR lpClassName; // [esp+30h] [ebp-8h]
  DWORD dwExStyle; // [esp+34h] [ebp-4h]

  dwExStyle = a2;
  lpClassName = a3;
  lpWindowName = a4;
  dwStyle = a5;
  X = a6;
  Y = a7;
  nWidth = a8;
  nHeight = a9;
  hWndParent = a10;
  hMenu = a11;
  ModuleState = AfxGetModuleState();
  v14 = *(_DWORD *)this;
  hInstance = *((HINSTANCE *)ModuleState + 2);
  lpParam = a12;
  if ( (*(int (__thiscall **)(CWnd *, LPVOID *))(v14 + 100))(a1: this, a2: &lpParam) != 0 )
  {
    AfxHookWindowCreate(a1: this);
    Window = CreateWindowExA(
               dwExStyle,
               lpClassName,
               lpWindowName,
               dwStyle,
               X,
               Y,
               nWidth,
               nHeight,
               hWndParent,
               hMenu,
               hInstance,
               lpParam);
    if ( AfxUnhookWindowCreate() == 0 )
      (*(void (__thiscall **)(CWnd *))(v14 + 172))(a1: this);
    return Window != nullptr;
  }
  else
  {
    (*(void (__thiscall **)(CWnd *))(v14 + 172))(a1: this);
    return false;
  }
}


/* ============================================
   Address: 0x417723
   Function: sub_417723
   ============================================ */

int __stdcall sub_417723(int a1)
{
  int result; // eax

  if ( *(_DWORD *)(a1 + 40) != 0 )
    return 1;
  if ( (*((_BYTE *)AfxGetModuleState() + 24) & 1) != 0 )
    result = 1;
  else
    result = AfxEndDeferRegisterClass(a1: 1);
  if ( result != 0 )
  {
    *(_DWORD *)(a1 + 40) = "AfxWnd42s";
    return 1;
  }
  return result;
}


/* ============================================
   Address: 0x417755
   Function: ?Create@CWnd@@UAEHPBD0KABUtagRECT@@PAV1@IPAUCCreateContext@@@Z
   ============================================ */

BOOL __thiscall CWnd::Create(
        CWnd *this,
        char *a2,
        char *a3,
        unsigned int a4,
        const struct tagRECT *a5,
        struct CWnd *a6,
        HMENU a7,
        struct CCreateContext *a8)
{
  HWND v8; // edi

  if ( a6 != nullptr )
    v8 = *((HWND *)a6 + 7);
  else
    v8 = nullptr;
  return CWnd::CreateEx(
           this,
           a2: 0,
           a3: a2,
           a4: a3,
           a5: a4 | 0x40000000,
           a6: a5->left,
           a7: a5->top,
           a8: a5->right - a5->left,
           a9: a5->bottom - a5->top,
           a10: v8,
           a11: a7,
           a12: a8);
}


/* ============================================
   Address: 0x4177A1
   Function: ??1CWnd@@UAE@XZ
   ============================================ */

void __thiscall CWnd::~CWnd(CWnd *this)
{
  int v2; // ecx
  int v3; // eax

  *(_DWORD *)this = &CWnd::`vftable';
  if ( *((_DWORD *)this + 7) != 0
    && this != (CWnd *)&unk_42F4A8
    && this != (CWnd *)&hWndInsertAfter
    && this != (CWnd *)&unk_42F4E8
    && this != (CWnd *)&unk_42F528 )
  {
    CWnd::DestroyWindow(this);
  }
  v2 = *((_DWORD *)this + 13);
  if ( v2 != 0 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 4))(a1: v2, a2: 1);
  v3 = *((_DWORD *)this + 14);
  if ( v3 != 0 && *(CWnd **)(v3 + 36) == this )
    *(_DWORD *)(v3 + 36) = 0;
  CCmdTarget::~CCmdTarget(this);
}


/* ============================================
   Address: 0x41781D
   Function: ?OnDestroy@CWnd@@IAEXXZ
   ============================================ */

void __thiscall CWnd::OnDestroy(CWnd *this)
{
  int v2; // ecx

  v2 = *((_DWORD *)this + 13);
  if ( v2 != 0 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 4))(a1: v2, a2: 1);
  *((_DWORD *)this + 13) = 0;
  CWnd::Default(this);
}


/* ============================================
   Address: 0x41783B
   Function: ?OnNcDestroy@CWnd@@IAEXXZ
   ============================================ */

void __thiscall CWnd::OnNcDestroy(CWnd *this)
{
  struct CWinThread *Thread; // eax
  struct CWinThread *v3; // edi
  int v4; // ecx
  int v5; // ecx
  bool v6; // zf
  int v7; // edi
  int v8; // eax
  LONG WindowLongA; // ebx
  LONG v10; // eax
  LPARAM lParam[11]; // [esp+Ch] [ebp-2Ch] BYREF

  Thread = AfxGetThread();
  v3 = Thread;
  if ( Thread != nullptr )
  {
    if ( *((CWnd **)Thread + 7) == this )
    {
      if ( *((_BYTE *)AfxGetModuleState() + 20) == 0
        && (v3 != *((struct CWinThread **)AfxGetModuleState() + 1) || AfxOleCanExitApp() != 0) )
      {
        AfxPostQuitMessage(nExitCode: 0);
      }
      *((_DWORD *)v3 + 7) = 0;
    }
    if ( *((CWnd **)v3 + 8) == this )
      *((_DWORD *)v3 + 8) = 0;
  }
  v4 = *((_DWORD *)this + 12);
  if ( v4 != 0 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 88))(a1: v4);
    *((_DWORD *)this + 12) = 0;
  }
  v5 = *((_DWORD *)this + 13);
  if ( v5 != 0 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v5 + 4))(a1: v5, a2: 1);
  v6 = (*((_BYTE *)this + 36) & 1) == 0;
  *((_DWORD *)this + 13) = 0;
  if ( !v6 )
  {
    v7 = *((_DWORD *)AfxGetThreadState() + 51);
    v8 = v7 != 0 ? *(_DWORD *)(v7 + 28) : 0;
    if ( v8 != 0 )
    {
      memset(a1: lParam, Val: 0, Size: sizeof(lParam));
      lParam[2] = *((_DWORD *)this + 7);
      lParam[3] = lParam[2];
      lParam[0] = 44;
      lParam[1] = 1;
      SendMessageA(hWnd: *(HWND *)(v7 + 28), Msg: 0x405u, wParam: 0, (LPARAM)lParam);
    }
  }
  WindowLongA = GetWindowLongA(hWnd: *((HWND *)this + 7), nIndex: -4);
  CWnd::Default(this);
  if ( GetWindowLongA(hWnd: *((HWND *)this + 7), nIndex: -4) == WindowLongA )
  {
    v10 = *(_DWORD *)(*(int (__thiscall **)(CWnd *))(*(_DWORD *)this + 136))(a1: this);
    if ( v10 != 0 )
      SetWindowLongA(hWnd: *((HWND *)this + 7), nIndex: -4, dwNewLong: v10);
  }
  CWnd::Detach(this);
  (*(void (__thiscall **)(CWnd *))(*(_DWORD *)this + 172))(a1: this);
}


/* ============================================
   Address: 0x417952
   Function: nullsub_7
   ============================================ */

void nullsub_7()
{
  ;
}


/* ============================================
   Address: 0x417953
   Function: ?OnFinalRelease@CWnd@@UAEXXZ
   ============================================ */

void __thiscall CWnd::OnFinalRelease(CWnd *this)
{
  int v1; // eax

  v1 = *(_DWORD *)this;
  if ( *((_DWORD *)this + 7) != 0 )
    (*(void (**)(void))(v1 + 96))();
  else
    (*(void (**)(void))(v1 + 172))();
}


/* ============================================
   Address: 0x417964
   Function: ?DestroyWindow@CWnd@@UAEHXZ
   ============================================ */

int __thiscall CWnd::DestroyWindow(CWnd *this)
{
  CMapPtrToPtr *v3; // eax
  void *ValueAt; // eax
  int v5; // ecx
  void *v6; // edi
  int v7; // eax
  int v8; // ebx

  if ( *((_DWORD *)this + 7) == 0 )
    return 0;
  v3 = afxMapHWND(Block: nullptr);
  ValueAt = CMapPtrToPtr::GetValueAt(this: v3, a2: *((_DWORD *)this + 7));
  v5 = *((_DWORD *)this + 14);
  v6 = ValueAt;
  if ( v5 != 0 )
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 88))(a1: v5);
  else
    v7 = DestroyWindow(hWnd: *((HWND *)this + 7));
  v8 = v7;
  if ( v6 == nullptr )
    CWnd::Detach(this);
  return v8;
}


/* ============================================
   Address: 0x4179B1
   Function: ?DefWindowProcA@CWnd@@MAEJIIJ@Z
   ============================================ */

LRESULT __thiscall CWnd::DefWindowProcA(CWnd *this, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  LRESULT (__stdcall *v5)(HWND, UINT, WPARAM, LPARAM); // eax

  v5 = *((LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))this + 10);
  if ( v5 != nullptr )
    return CallWindowProcA(lpPrevWndFunc: v5, hWnd: *((HWND *)this + 7), Msg, wParam, lParam);
  v5 = *(LRESULT (__stdcall **)(HWND, UINT, WPARAM, LPARAM))(*(int (__thiscall **)(CWnd *))(*(_DWORD *)this + 136))(a1: this);
  if ( v5 != nullptr )
    return CallWindowProcA(lpPrevWndFunc: v5, hWnd: *((HWND *)this + 7), Msg, wParam, lParam);
  else
    return DefWindowProcA(hWnd: *((HWND *)this + 7), Msg, wParam, lParam);
}


/* ============================================
   Address: 0x4179F8
   Function: sub_4179F8
   ============================================ */

char *__thiscall sub_4179F8(char *this)
{
  return this + 40;
}


/* ============================================
   Address: 0x4179FC
   Function: ?PreTranslateMessage@CWnd@@UAEHPAUtagMSG@@@Z
   ============================================ */

int __thiscall CWnd::PreTranslateMessage(CWnd *this, struct tagMSG *a2)
{
  void (__stdcall *v3)(struct tagMSG *, CWnd *); // eax

  v3 = *((void (__stdcall **)(struct tagMSG *, CWnd *))AfxGetModuleState() + 1037);
  if ( v3 != nullptr )
    v3(a1: a2, a2: this);
  return 0;
}


/* ============================================
   Address: 0x417A1B
   Function: ?CancelToolTips@CWnd@@SGXH@Z
   ============================================ */

static void __stdcall CWnd::CancelToolTips(int a1)
{
  struct _AFX_THREAD_STATE *ThreadState; // esi
  int v2; // eax
  int v3; // ecx
  int v4; // esi

  ThreadState = AfxGetThreadState();
  v2 = *((_DWORD *)ThreadState + 51);
  if ( v2 != 0 )
    v3 = *(_DWORD *)(v2 + 28);
  else
    v3 = 0;
  if ( v3 != 0 )
    SendMessageA(hWnd: *(HWND *)(v2 + 28), Msg: 0x401u, wParam: 0, lParam: 0);
  v4 = *((_DWORD *)ThreadState + 66);
  if ( a1 != 0 && v4 != 0 && GetKeyState(nVirtKey: 1) >= 0 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 228))(a1: v4, a2: -1);
}


/* ============================================
   Address: 0x417A78
   Function: ?OnToolHitTest@CWnd@@UBEHVCPoint@@PAUtagTOOLINFOA@@@Z
   ============================================ */

int __thiscall CWnd::OnToolHitTest(HWND *this, struct tagPOINT Point, _DWORD *a3)
{
  HWND v4; // eax
  HWND v5; // edi
  int v6; // eax
  int Point_4; // [esp+14h] [ebp+Ch]

  v4 = _AfxChildWindowFromPoint(hWnd: *(this + 7), Point);
  v5 = v4;
  if ( v4 == nullptr )
    return -1;
  Point_4 = (unsigned __int16)GetDlgCtrlID(hWnd: v4);
  if ( a3 != nullptr && *a3 >= 0x2Cu )
  {
    v6 = (int)*(this + 7);
    a3[1] |= 1u;
    a3[9] = -1;
    a3[2] = v6;
    a3[3] = v5;
    if ( (SendMessageA(hWnd: v5, Msg: 0x87u, wParam: 0, lParam: 0) & 0x2000) == 0 )
      a3[1] |= 0x80000002;
  }
  return Point_4;
}


/* ============================================
   Address: 0x417AE9
   Function: ?OnDrawItem@CWnd@@IAEXHPAUtagDRAWITEMSTRUCT@@@Z
   ============================================ */

void __thiscall CWnd::OnDrawItem(CWnd *this, int a2, struct tagDRAWITEMSTRUCT *a3)
{
  struct CMenu *v4; // eax

  if ( a3->CtlType == 1 )
  {
    v4 = CMenu::FromHandlePermanent(a1: (HMENU)a3->hwndItem);
    if ( v4 != nullptr )
    {
      (*(void (__thiscall **)(struct CMenu *, struct tagDRAWITEMSTRUCT *))(*(_DWORD *)v4 + 20))(a1: v4, a2: a3);
      return;
    }
  }
  else if ( CWnd::ReflectLastMsg(hWnd: a3->hwndItem, a2: nullptr) != 0 )
  {
    return;
  }
  CWnd::Default(this);
}


/* ============================================
   Address: 0x417B26
   Function: ?OnCompareItem@CWnd@@IAEHHPAUtagCOMPAREITEMSTRUCT@@@Z
   ============================================ */

struct tagCOMPAREITEMSTRUCT *__thiscall CWnd::OnCompareItem(CWnd *this, int a2, struct tagCOMPAREITEMSTRUCT *a3)
{
  if ( CWnd::ReflectLastMsg(hWnd: a3->hwndItem, a2: (int *)&a3) != 0 )
    return a3;
  else
    return (struct tagCOMPAREITEMSTRUCT *)CWnd::Default(this);
}


/* ============================================
   Address: 0x417B50
   Function: ?OnDeleteItem@CWnd@@IAEXHPAUtagDELETEITEMSTRUCT@@@Z
   ============================================ */

void __thiscall CWnd::OnDeleteItem(CWnd *this, int a2, struct tagDELETEITEMSTRUCT *a3)
{
  if ( CWnd::ReflectLastMsg(hWnd: a3->hwndItem, a2: nullptr) == 0 )
    CWnd::Default(this);
}


/* ============================================
   Address: 0x417B70
   Function: sub_417B70
   ============================================ */

// ?OnVKeyToItem@CWnd@@IAEHIPAVCListBox@@I@Z
// doubtful name
CWnd *__thiscall sub_417B70(CWnd *this, int a2, CWnd *a3, int a4)
{
  if ( a3 != nullptr && CWnd::SendChildNotifyLastMsg(this: a3, a2: (int *)&a3) != 0 )
    return a3;
  else
    return (CWnd *)CWnd::Default(this);
}


/* ============================================
   Address: 0x417B9B
   Function: sub_417B9B
   ============================================ */

// ?OnVKeyToItem@CWnd@@IAEHIPAVCListBox@@I@Z
// doubtful name
CWnd *__thiscall sub_417B9B(CWnd *this, int a2, CWnd *a3, int a4)
{
  if ( a3 != nullptr && CWnd::SendChildNotifyLastMsg(this: a3, a2: (int *)&a3) != 0 )
    return a3;
  else
    return (CWnd *)CWnd::Default(this);
}


/* ============================================
   Address: 0x417BC6
   Function: ?OnMeasureItem@CWnd@@IAEXHPAUtagMEASUREITEMSTRUCT@@@Z
   ============================================ */

void __thiscall CWnd::OnMeasureItem(HWND *this, int a2, struct tagMEASUREITEMSTRUCT *a3)
{
  struct CNoTrackObject *Data; // eax
  struct CMenu *v5; // eax
  struct CMenu *PopupMenuFromID; // eax
  CWnd *DescendantWindow; // eax
  HMENU Menu; // [esp-4h] [ebp-Ch]

  if ( a3->CtlType == 1 )
  {
    Data = CThreadLocalObject::GetData(
             this: (CThreadLocalObject *)&unk_42F5B8,
             a2: CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
    if ( *((HWND *)Data + 20) == *(this + 7) )
    {
      v5 = CMenu::FromHandle(a1: *((HMENU *)Data + 21));
    }
    else
    {
      Menu = GetMenu(hWnd: *(this + 7));
      v5 = CMenu::FromHandle(a1: Menu);
    }
    PopupMenuFromID = FindPopupMenuFromID(a1: v5, a2: a3->itemID);
    if ( PopupMenuFromID != nullptr )
      (*(void (__thiscall **)(struct CMenu *, struct tagMEASUREITEMSTRUCT *))(*(_DWORD *)PopupMenuFromID + 24))(
        a1: PopupMenuFromID,
        a2: a3);
    goto LABEL_9;
  }
  DescendantWindow = CWnd::GetDescendantWindow(hDlg: *(this + 7), nIDDlgItem: a3->CtlID, a3: 1);
  if ( DescendantWindow == nullptr || CWnd::SendChildNotifyLastMsg(this: DescendantWindow, a2: nullptr) == 0 )
LABEL_9:
    CWnd::Default((CWnd *)this);
}


/* ============================================
   Address: 0x417C3F
   Function: ?FindPopupMenuFromID@@YAPAVCMenu@@PAV1@I@Z
   ============================================ */

struct CMenu *__cdecl FindPopupMenuFromID(HMENU *a1, unsigned int a2)
{
  int MenuItemCount; // ebx
  int i; // edi
  HMENU SubMenu; // eax
  struct CMenu *v5; // eax
  struct CMenu *result; // eax

  MenuItemCount = GetMenuItemCount(hMenu: a1[1]);
  for ( i = 0; i < MenuItemCount; ++i )
  {
    SubMenu = GetSubMenu(hMenu: a1[1], nPos: i);
    v5 = CMenu::FromHandle(a1: SubMenu);
    if ( v5 != nullptr )
    {
      result = FindPopupMenuFromID(a1: v5, a2);
      if ( result != nullptr )
        return result;
    }
    else if ( GetMenuItemID(hMenu: a1[1], nPos: i) == a2 )
    {
      return CMenu::FromHandlePermanent(a1: a1[1]);
    }
  }
  return nullptr;
}


/* ============================================
   Address: 0x417CA2
   Function: ?AfxRegisterClass@@YGHPAUtagWNDCLASSA@@@Z
   ============================================ */

int __stdcall AfxRegisterClass(WNDCLASSA *lpWndClass)
{
  WNDCLASSA *v1; // esi
  CHAR *v3; // edi
  int v4; // [esp-10h] [ebp-48h] BYREF
  struct tagWNDCLASSA WndClass; // [esp+0h] [ebp-38h] BYREF
  int *v6; // [esp+28h] [ebp-10h]
  int v7; // [esp+34h] [ebp-4h]

  v1 = lpWndClass;
  v6 = &v4;
  if ( !GetClassInfoA(hInstance: lpWndClass->hInstance, lpClassName: lpWndClass->lpszClassName, lpWndClass: &WndClass) )
  {
    if ( RegisterClassA(lpWndClass: v1) == 0 )
      return 0;
    if ( *((_BYTE *)AfxGetModuleState() + 20) != 0 )
    {
      AfxLockGlobals(a1: 1);
      v7 = 0;
      v3 = (char *)AfxGetModuleState() + 52;
      lstrcatA(lpString1: v3, lpString2: v1->lpszClassName);
      LOWORD(lpWndClass) = 10;
      lstrcatA(lpString1: v3, lpString2: (LPCSTR)&lpWndClass);
      v7 = -1;
      AfxUnlockGlobals(a1: 1);
    }
  }
  return 1;
}


/* ============================================
   Address: 0x417D4B
   Function: ?AfxRegisterWndClass@@YGPBDIPAUHICON__@@PAUHBRUSH__@@0@Z
   ============================================ */

CHAR *__stdcall AfxRegisterWndClass(UINT a1, HICON a2, HBRUSH a3, HICON a4)
{
  CHAR *v4; // esi
  HINSTANCE v5; // edi
  struct tagWNDCLASSA WndClass; // [esp+Ch] [ebp-28h] BYREF

  v4 = (char *)AfxGetThreadState() + 88;
  v5 = *((HINSTANCE *)AfxGetModuleState() + 2);
  if ( a2 != nullptr || a3 != nullptr || a4 != nullptr )
    wsprintfA(a1: v4, a2: "Afx:%x:%x:%x:%x:%x", v5, a1, a2, a3, a4);
  else
    wsprintfA(a1: v4, a2: "Afx:%x:%x", v5, a1);
  if ( !GetClassInfoA(hInstance: v5, lpClassName: v4, lpWndClass: &WndClass) )
  {
    WndClass.style = a1;
    WndClass.lpfnWndProc = DefWindowProcA;
    WndClass.cbWndExtra = 0;
    WndClass.cbClsExtra = 0;
    WndClass.lpszMenuName = nullptr;
    WndClass.hIcon = a4;
    WndClass.hInstance = v5;
    WndClass.hCursor = a2;
    WndClass.hbrBackground = a3;
    WndClass.lpszClassName = v4;
    if ( AfxRegisterClass(lpWndClass: &WndClass) == 0 )
      AfxThrowResourceException();
  }
  return v4;
}


/* ============================================
   Address: 0x417DFF
   Function: ?OnNTCtlColor@CWnd@@IAEJIJ@Z
   ============================================ */

int __thiscall CWnd::OnNTCtlColor(CWnd *this, unsigned int a2, int a3)
{
  _DWORD v5[3]; // [esp+4h] [ebp-Ch] BYREF

  v5[1] = a2;
  v5[0] = a3;
  v5[2] = CWnd::GetCurrentMessage()->message - 306;
  return (*(int (__thiscall **)(CWnd *, int, _DWORD, _DWORD *))(*(_DWORD *)this + 160))(a1: this, a2: 25, a3: 0, a4: v5);
}


/* ============================================
   Address: 0x417E3B
   Function: sub_417E3B
   ============================================ */

void __thiscall sub_417E3B(HWND *this, ULONG_PTR dwData, UINT uCommand)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  HWND v5; // edi
  struct CWnd *TopLevelParent; // esi
  HWND Capture; // eax
  struct AFX_MODULE_STATE *v8; // eax
  int v9; // [esp+Ch] [ebp-10h]

  v9 = *((_DWORD *)AfxGetModuleState() + 1);
  ModuleState = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(this: *((CCmdTarget **)ModuleState + 1));
  v5 = *this;
  if ( (*((int (__thiscall **)(HWND *))*this + 46))(a1: this) != 0 )
    (*((void (__thiscall **)(HWND *))v5 + 62))(a1: this);
  SendMessageA(hWnd: *(this + 7), Msg: 0x1Fu, wParam: 0, lParam: 0);
  CWnd::SendMessageToDescendants(hWnd: *(this + 7), Msg: 0x1Fu, wParam: 0, lParam: 0, a5: 1, a6: 1);
  TopLevelParent = CWnd::GetTopLevelParent((CWnd *)this);
  SendMessageA(hWnd: *((HWND *)TopLevelParent + 7), Msg: 0x1Fu, wParam: 0, lParam: 0);
  CWnd::SendMessageToDescendants(hWnd: *((HWND *)TopLevelParent + 7), Msg: 0x1Fu, wParam: 0, lParam: 0, a5: 1, a6: 1);
  Capture = GetCapture();
  if ( Capture != nullptr )
    SendMessageA(hWnd: Capture, Msg: 0x1Fu, wParam: 0, lParam: 0);
  if ( !WinHelpA(hWndMain: *((HWND *)TopLevelParent + 7), lpszHelp: *(LPCSTR *)(v9 + 140), uCommand, dwData) )
    AfxMessageBox(a1: 0xF107u, a2: 0, a3: 0xFFFFFFFF);
  v8 = AfxGetModuleState();
  CCmdTarget::EndWaitCursor(this: *((CCmdTarget **)v8 + 1));
}


/* ============================================
   Address: 0x417F1B
   Function: sub_417F1B
   ============================================ */

_UNKNOWN **sub_417F1B()
{
  return &off_422B08;
}


/* ============================================
   Address: 0x417F21
   Function: unknown_libname_9
   ============================================ */

// MFC 3.1-14.0 32bit
_DWORD *__stdcall unknown_libname_9(_DWORD *a1, int a2, int a3, unsigned int a4)
{
  while ( a1[4] != 0 )
  {
    if ( a2 == *a1 && a3 == a1[1] && a4 >= a1[2] && a4 <= a1[3] )
      return a1;
    a1 += 6;
  }
  return nullptr;
}


/* ============================================
   Address: 0x417F61
   Function: ?WindowProc@CWnd@@MAEJIIJ@Z
   ============================================ */

int __thiscall CWnd::WindowProc(CWnd *this, unsigned int a2, unsigned int a3, int a4)
{
  int v5; // esi
  int v7; // [esp+8h] [ebp-4h] BYREF

  v7 = 0;
  v5 = *(_DWORD *)this;
  if ( (*(int (__thiscall **)(CWnd *, unsigned int, unsigned int, int, int *))(*(_DWORD *)this + 164))(
         a1: this,
         a2,
         a3,
         a4,
         a5: &v7) == 0 )
    return (*(int (__thiscall **)(CWnd *, unsigned int, unsigned int, int))(v5 + 168))(a1: this, a2, a3, a4);
  return v7;
}


/* ============================================
   Address: 0x417FA3
   Function: sub_417FA3
   ============================================ */

// ?OnWndMsg@CWnd@@MAEHIIJPAJ@Z
// doubtful name
int __thiscall sub_417FA3(LPARAM *this, unsigned int a2, unsigned int a3, HMENU a4, int *a5)
{
  int v6; // eax
  struct CWnd *v8; // eax
  unsigned int v9; // ecx
  int v10; // ebx
  int v11; // eax
  HMENU v12; // ebx
  _DWORD *v13; // eax
  _DWORD *v14; // eax
  HMENU v16; // ecx
  int (__thiscall *v17)(LPARAM *, struct CDC *); // ebx
  int v18; // eax
  unsigned __int8 Version; // al
  int v20; // eax
  int v21; // eax
  struct CWnd *v22; // eax
  int v23; // eax
  HWND v24; // eax
  int v25; // esi
  struct CWnd *v26; // eax
  int v27; // eax
  void *ValueAt; // eax
  int v29; // eax
  int v30; // eax
  struct CWnd *v31; // eax
  struct CWnd *v32; // eax
  struct CWnd *v33; // eax
  int v34; // eax
  struct CMenu *v35; // eax
  struct CDC *v36; // eax
  struct CWnd *v37; // eax
  struct CWnd *v38; // eax
  int v39; // edx
  int v40; // eax
  struct CWnd *v41; // [esp-8h] [ebp-74h]
  struct CWnd *v42; // [esp-8h] [ebp-74h]
  struct CDC *v43; // [esp-4h] [ebp-70h]
  int v44; // [esp-4h] [ebp-70h]
  struct CMenu *v45; // [esp-4h] [ebp-70h]
  HMENU v46; // [esp-4h] [ebp-70h]
  unsigned int v47; // [esp-4h] [ebp-70h]
  unsigned int v48; // [esp-4h] [ebp-70h]
  struct CWnd *v49; // [esp-4h] [ebp-70h]
  struct CWnd *v50; // [esp-4h] [ebp-70h]
  _BYTE v51[28]; // [esp+Ch] [ebp-60h] BYREF
  void *v52; // [esp+28h] [ebp-44h]
  void *v53; // [esp+44h] [ebp-28h]
  char v54[4]; // [esp+48h] [ebp-24h] BYREF
  int v55; // [esp+4Ch] [ebp-20h]
  int v56; // [esp+58h] [ebp-14h]
  int v57; // [esp+5Ch] [ebp-10h] BYREF
  int v58; // [esp+68h] [ebp-4h]
  int v59; // [esp+74h] [ebp+8h]
  HMENU v60; // [esp+78h] [ebp+Ch]
  HMENU v61; // [esp+7Ch] [ebp+10h]
  HMENU v62; // [esp+7Ch] [ebp+10h]

  v57 = 0;
  switch ( a2 )
  {
    case 0x111u:
      if ( (*(int (__thiscall **)(LPARAM *, unsigned int, HMENU))(*this + 128))(a1: this, a2: a3, a3: a4) != 0 )
      {
LABEL_88:
        v57 = 1;
        goto LABEL_95;
      }
      return 0;
    case 0x4Eu:
      if ( *(_DWORD *)a4 != 0 )
      {
        v6 = (*(int (__thiscall **)(LPARAM *, unsigned int, HMENU, int *))(*this + 132))(
               a1: this,
               a2: a3,
               a3: a4,
               a4: &v57);
LABEL_90:
        if ( v6 != 0 )
          goto LABEL_95;
      }
      return 0;
    case 6u:
      v8 = CWnd::FromHandle(a1: (HWND)a4);
      _AfxHandleActivate(a1: this, wParam: a3, a3: v8);
      break;
    default:
      break;
  }
  if ( a2 == 32 && _AfxHandleSetCursor(a1: (struct CWnd *)this, a2: (__int16)a4, a3: (unsigned int)a4 >> 16) != 0 )
    goto LABEL_88;
  v56 = (*(int (__thiscall **)(LPARAM *))(*this + 48))(a1: this);
  AfxLockGlobals(a1: 7);
  v9 = a2;
  v10 = 12 * (v56 & 0x1FF ^ a2 & 0x1FF) + 4381864;
  v11 = v56;
  if ( a2 == dword_42DCA8[3 * (v56 & 0x1FF ^ a2 & 0x1FF)] && v56 == dword_42DCAC[3 * (v56 & 0x1FF ^ a2 & 0x1FF) + 1] )
  {
    v12 = (HMENU)dword_42DCAC[3 * (v56 & 0x1FF ^ a2 & 0x1FF)];
    v61 = v12;
    AfxUnlockGlobals(a1: 7);
    if ( v12 != nullptr )
    {
      if ( a2 >= 0xC000 )
        goto LABEL_93;
LABEL_31:
      v16 = v61;
      v17 = *((int (__thiscall **)(LPARAM *, struct CDC *))v12 + 5);
      v18 = *((_DWORD *)v61 + 4);
      if ( *((_DWORD *)v61 + 2) == 26 )
      {
        Version = GetVersion();
        v16 = v61;
        v20 = -(Version < 4u);
        LOBYTE(v20) = v20 & 0xF0;
        v18 = v20 + 47;
      }
      switch ( v18 )
      {
        case 1:
          v43 = CDC::FromHandle(a1: (HDC)a3);
          v21 = v17(a1: this, a2: v43);
          goto LABEL_94;
        case 2:
          v21 = v17(a1: this, a2: (struct CDC *)a3);
          goto LABEL_94;
        case 3:
        case 8:
          v45 = (struct CMenu *)((unsigned int)a4 >> 16);
          v41 = (struct CWnd *)(__int16)a4;
          v32 = CWnd::FromHandle(a1: (HWND)a3);
          goto LABEL_52;
        case 4:
          CDC::CDC(this: (CDC *)v54);
          v23 = *((_DWORD *)a4 + 1);
          v58 = 0;
          v55 = v23;
          CWnd::CWnd(this: (CWnd *)v51);
          v24 = *(HWND *)a4;
          v25 = *((_DWORD *)a4 + 2);
          LOBYTE(v58) = 1;
          v52 = v24;
          v26 = CWnd::FromHandlePermanent(a1: v24);
          if ( v26 == nullptr )
          {
            v27 = *(this + 13);
            if ( v27 != 0 )
            {
              ValueAt = CMapPtrToPtr::GetValueAt(this: (CMapPtrToPtr *)(v27 + 32), a2: (unsigned int)v52);
              if ( ValueAt != nullptr )
                v53 = ValueAt;
            }
            v26 = (struct CWnd *)v51;
          }
          v29 = ((int (__thiscall *)(LPARAM *, char *, struct CWnd *, int))v17)(a1: this, a2: v54, a3: v26, a4: v25);
          v55 = 0;
          v52 = nullptr;
          LOBYTE(v58) = 0;
          v57 = v29;
          CWnd::~CWnd(this: (CWnd *)v51);
          v58 = -1;
          goto LABEL_44;
        case 5:
          CDC::CDC(this: (CDC *)v54);
          v44 = *((_DWORD *)a4 + 2);
          v55 = *((_DWORD *)a4 + 1);
          v58 = 2;
          v30 = ((int (__thiscall *)(LPARAM *, char *, int))v17)(a1: this, a2: v54, a3: v44);
          v55 = 0;
          v58 = -1;
          v57 = v30;
LABEL_44:
          CDC::~CDC(this: (CDC *)v54);
          goto LABEL_95;
        case 6:
          v45 = (struct CMenu *)HIWORD(a3);
          v31 = CWnd::FromHandle(a1: (HWND)a4);
          goto LABEL_51;
        case 7:
          v21 = ((int (__thiscall *)(LPARAM *, _DWORD, unsigned int))v17)(
                  a1: this,
                  a2: (unsigned __int16)a3,
                  a3: HIWORD(a3));
          goto LABEL_94;
        case 9:
        case 42:
          v21 = v17(a1: this, a2: (struct CDC *)a4);
          goto LABEL_94;
        case 10:
        case 33:
          v21 = ((int (__thiscall *)(LPARAM *, unsigned int, HMENU))v17)(a1: this, a2: a3, a3: a4);
          goto LABEL_94;
        case 11:
          v45 = CMenu::FromHandle(a1: a4);
          v31 = (struct CWnd *)HIWORD(a3);
LABEL_51:
          v41 = v31;
          v32 = (struct CWnd *)(unsigned __int16)a3;
LABEL_52:
          v21 = ((int (__thiscall *)(LPARAM *, struct CWnd *, struct CWnd *, struct CMenu *))v17)(
                  a1: this,
                  a2: v32,
                  a3: v41,
                  a4: v45);
          goto LABEL_94;
        case 12:
          ((void (__thiscall *)(LPARAM *))v17)(a1: this);
          goto LABEL_95;
        case 13:
          v17(a1: this, a2: (struct CDC *)a3);
          goto LABEL_95;
        case 14:
        case 18:
        case 37:
        case 47:
          v49 = (struct CWnd *)a4;
          goto LABEL_79;
        case 15:
          v46 = (HMENU)SHIWORD(a4);
          v33 = (struct CWnd *)(__int16)a4;
          goto LABEL_68;
        case 16:
        case 17:
          v47 = (unsigned int)a4 >> 16;
          v34 = (unsigned __int16)a4;
          goto LABEL_86;
        case 19:
          v48 = (unsigned int)CWnd::FromHandle(a1: (HWND)a3);
          v42 = CWnd::FromHandle(a1: (HWND)a4);
          v35 = (struct CMenu *)(*(this + 7) == (_DWORD)a4);
          goto LABEL_84;
        case 20:
          v36 = CDC::FromHandle(a1: (HDC)a3);
          goto LABEL_63;
        case 21:
          v36 = CMenu::FromHandle(a1: (HMENU)a3);
          goto LABEL_63;
        case 22:
          v48 = (unsigned int)a4 >> 16;
          v42 = (struct CWnd *)(unsigned __int16)a4;
          v35 = CMenu::FromHandle(a1: (HMENU)a3);
          goto LABEL_84;
        case 23:
          v36 = CWnd::FromHandle(a1: (HWND)a3);
          goto LABEL_63;
        case 24:
          v48 = (unsigned int)a4 >> 16;
          v37 = (struct CWnd *)(unsigned __int16)a4;
          goto LABEL_66;
        case 25:
          v37 = (struct CWnd *)(__int16)a4;
          v48 = SHIWORD(a4);
LABEL_66:
          v42 = v37;
          v35 = CWnd::FromHandle(a1: (HWND)a3);
          goto LABEL_84;
        case 26:
          v46 = a4;
          v33 = CWnd::FromHandle(a1: (HWND)a3);
LABEL_68:
          ((void (__thiscall *)(LPARAM *, struct CWnd *, HMENU))v17)(a1: this, a2: v33, a3: v46);
          goto LABEL_95;
        case 27:
          v49 = CWnd::FromHandle(a1: (HWND)a4);
LABEL_79:
          ((void (__thiscall *)(LPARAM *, unsigned int, struct CWnd *))v17)(a1: this, a2: a3, a3: v49);
          goto LABEL_95;
        case 28:
          v48 = HIWORD(a3);
          v38 = CWnd::FromHandle(a1: (HWND)a4);
          goto LABEL_83;
        case 29:
        case 30:
          v39 = (__int16)a3;
          v59 = (__int16)a3;
          v40 = SHIWORD(a3);
          v60 = (HMENU)SHIWORD(a3);
          if ( *((_DWORD *)v16 + 4) == 29 )
          {
            v50 = CWnd::FromHandle(a1: (HWND)a4);
            ((void (__thiscall *)(LPARAM *, int, HMENU, struct CWnd *))v17)(a1: this, a2: v59, a3: v60, a4: v50);
          }
          else
          {
            ((void (__thiscall *)(LPARAM *, int, int))v17)(a1: this, a2: v39, a3: v40);
          }
          goto LABEL_95;
        case 31:
        case 36:
          v17(a1: this, a2: (struct CDC *)a4);
          goto LABEL_95;
        case 32:
        case 43:
          ((void (__thiscall *)(LPARAM *, unsigned int, HMENU))v17)(a1: this, a2: a3, a3: a4);
          goto LABEL_88;
        case 34:
          v21 = ((int (__thiscall *)(LPARAM *, _DWORD, _DWORD))v17)(a1: this, a2: (__int16)a4, a3: SHIWORD(a4));
          goto LABEL_94;
        case 35:
          v21 = ((int (__thiscall *)(LPARAM *))v17)(a1: this);
          goto LABEL_94;
        case 44:
          v36 = CWnd::FromHandle(a1: (HWND)a4);
LABEL_63:
          v17(a1: this, a2: v36);
          goto LABEL_95;
        case 45:
          v22 = CWnd::FromHandle(a1: (HWND)a4);
          v21 = ((int (__thiscall *)(LPARAM *, struct CWnd *, HMENU))v17)(a1: this, a2: v22, a3: a4);
          goto LABEL_94;
        case 46:
          v6 = ((int (__thiscall *)(LPARAM *, _DWORD, unsigned int, _DWORD, unsigned int))v17)(
                 a1: this,
                 a2: (unsigned __int16)a3,
                 a3: HIWORD(a3),
                 (unsigned __int16)a4,
                 a5: (unsigned int)a4 >> 16);
          v57 = v6;
          goto LABEL_90;
        case 48:
          v48 = (unsigned int)a4;
          v38 = (struct CWnd *)HIWORD(a3);
LABEL_83:
          v42 = v38;
          v35 = (struct CMenu *)(unsigned __int16)a3;
LABEL_84:
          ((void (__thiscall *)(LPARAM *, struct CMenu *, struct CWnd *, unsigned int))v17)(
            a1: this,
            a2: v35,
            a3: v42,
            a4: v48);
          break;
        case 49:
          v34 = (__int16)a4;
          v47 = SHIWORD(a4);
LABEL_86:
          ((void (__thiscall *)(LPARAM *, unsigned int, int, unsigned int))v17)(a1: this, a2: a3, a3: v34, a4: v47);
          break;
        default:
          goto LABEL_95;
      }
      goto LABEL_95;
    }
    return 0;
  }
  dword_42DCA8[3 * (v56 & 0x1FF ^ a2 & 0x1FF)] = a2;
  *(_DWORD *)(v10 + 8) = v11;
  if ( v11 == 0 )
  {
LABEL_28:
    *(_DWORD *)(v10 + 4) = 0;
    AfxUnlockGlobals(a1: 7);
    return 0;
  }
  while ( v9 < 0xC000 )
  {
    v13 = unknown_libname_9(a1: *(_DWORD **)(v11 + 4), a2: v9, a3: 0, a4: 0);
    v61 = (HMENU)v13;
    if ( v13 != nullptr )
    {
      *(_DWORD *)(v10 + 4) = v13;
      AfxUnlockGlobals(a1: 7);
      v12 = v61;
      goto LABEL_31;
    }
LABEL_27:
    v56 = *(_DWORD *)v56;
    if ( v56 == 0 )
      goto LABEL_28;
    v9 = a2;
    v11 = v56;
  }
  v14 = unknown_libname_9(a1: *(_DWORD **)(v11 + 4), a2: 49152, a3: 0, a4: 0);
  v62 = (HMENU)v14;
  if ( v14 == nullptr )
    goto LABEL_27;
  while ( *(_DWORD *)v14[4] != a2 )
  {
    v62 = (HMENU)unknown_libname_9(a1: v14 + 6, a2: 49152, a3: 0, a4: 0);
    if ( v62 == nullptr )
      goto LABEL_27;
    v14 = v62;
  }
  *(_DWORD *)(v10 + 4) = v14;
  AfxUnlockGlobals(a1: 7);
  v12 = v62;
LABEL_93:
  v21 = (*((int (__thiscall **)(LPARAM *, unsigned int, HMENU))v12 + 5))(a1: this, a2: a3, a3: a4);
LABEL_94:
  v57 = v21;
LABEL_95:
  if ( a5 != nullptr )
    *a5 = v57;
  return 1;
}


/* ============================================
   Address: 0x418515
   Function: sub_418515
   ============================================ */

CCmdUI *__thiscall sub_418515(CCmdUI *this)
{
  CCmdUI::CCmdUI(this);
  *(_DWORD *)this = &CTestCmdUI::`vftable';
  *((_DWORD *)this + 10) = 1;
  return this;
}


/* ============================================
   Address: 0x41852E
   Function: ?Enable@CTestCmdUI@@UAEXH@Z
   ============================================ */

void __thiscall CTestCmdUI::Enable(CTestCmdUI *this, int a2)
{
  *((_DWORD *)this + 6) = 1;
  *((_DWORD *)this + 10) = a2;
}


/* ============================================
   Address: 0x41853F
   Function: nullsub_8
   ============================================ */

void __stdcall nullsub_8(int a1)
{
  ;
}


/* ============================================
   Address: 0x418542
   Function: nullsub_9
   ============================================ */

void __stdcall nullsub_9(int a1)
{
  ;
}


/* ============================================
   Address: 0x418545
   Function: nullsub_10
   ============================================ */

void __stdcall nullsub_10(int a1)
{
  ;
}


/* ============================================
   Address: 0x418548
   Function: ?OnCommand@CWnd@@MAEHIJ@Z
   ============================================ */

int __thiscall CWnd::OnCommand(CWnd *this, unsigned int a2, HWND hWnd)
{
  int v3; // edi
  int v5; // eax
  _BYTE v7[4]; // [esp+Ch] [ebp-2Ch] BYREF
  int v8; // [esp+10h] [ebp-28h]
  int v9; // [esp+34h] [ebp-4h]
  unsigned int v10; // [esp+40h] [ebp+8h]

  v3 = (unsigned __int16)a2;
  v10 = HIWORD(a2);
  if ( hWnd != nullptr )
  {
    if ( *((_DWORD *)CThreadLocalObject::GetData(
                       this: (CThreadLocalObject *)&unk_42F5B8,
                       a2: CThreadLocal<_AFX_THREAD_STATE>::CreateObject)
         + 46) == *((_DWORD *)this + 7)
      || CWnd::ReflectLastMsg(hWnd, a2: nullptr) != 0 )
    {
      return 1;
    }
    if ( v3 != 0 )
      return (*(int (__thiscall **)(CWnd *, int, unsigned int, _DWORD, _DWORD))(*(_DWORD *)this + 20))(
               a1: this,
               a2: v3,
               a3: v10,
               a4: 0,
               a5: 0);
  }
  else if ( v3 != 0 )
  {
    sub_418515(this: (CCmdUI *)v7);
    v5 = *(_DWORD *)this;
    v8 = v3;
    (*(void (__thiscall **)(CWnd *, int, int, _BYTE *, _DWORD))(v5 + 20))(a1: this, a2: v3, a3: -1, a4: v7, a5: 0);
    if ( v9 != 0 )
    {
      v10 = 0;
      return (*(int (__thiscall **)(CWnd *, int, unsigned int, _DWORD, _DWORD))(*(_DWORD *)this + 20))(
               a1: this,
               a2: v3,
               a3: v10,
               a4: 0,
               a5: 0);
    }
    return 1;
  }
  return 0;
}


/* ============================================
   Address: 0x4185D4
   Function: ?OnNotify@CWnd@@MAEHIJPAJ@Z
   ============================================ */

int __thiscall CWnd::OnNotify(CWnd *this, unsigned int a2, int a3, int *a4)
{
  HWND v6; // ebx
  int v8; // eax
  _DWORD v9[2]; // [esp+Ch] [ebp-Ch] BYREF
  int DlgCtrlID; // [esp+14h] [ebp-4h]
  int v11; // [esp+24h] [ebp+Ch]

  v6 = *(HWND *)a3;
  DlgCtrlID = (unsigned __int16)GetDlgCtrlID(hWnd: *(HWND *)a3);
  v11 = *(_DWORD *)(a3 + 8);
  if ( *((_DWORD *)CThreadLocalObject::GetData(
                     this: (CThreadLocalObject *)&unk_42F5B8,
                     a2: CThreadLocal<_AFX_THREAD_STATE>::CreateObject)
       + 46) == *((_DWORD *)this + 7)
    || CWnd::ReflectLastMsg(hWnd: v6, a2: a4) != 0 )
  {
    return 1;
  }
  v9[0] = a4;
  v8 = *(_DWORD *)this;
  v9[1] = a3;
  return (*(int (__thiscall **)(CWnd *, int, int, _DWORD *, _DWORD))(v8 + 20))(
           a1: this,
           a2: DlgCtrlID,
           a3: (unsigned __int16)v11 | 0x4E0000,
           a4: v9,
           a5: 0);
}


/* ============================================
   Address: 0x41864E
   Function: ?GetParentFrame@CWnd@@QBEPAVCFrameWnd@@XZ
   ============================================ */

HWND *__thiscall CWnd::GetParentFrame(CWnd *this)
{
  int v1; // eax
  HWND i; // eax
  HWND *v3; // esi

  if ( this != nullptr )
    v1 = *((_DWORD *)this + 7);
  else
    v1 = 0;
  if ( v1 != 0 )
  {
    for ( i = GetParent(hWnd: *((HWND *)this + 7)); ; i = GetParent(hWnd: v3[7]) )
    {
      v3 = (HWND *)CWnd::FromHandle(a1: i);
      if ( v3 == nullptr )
        break;
      if ( (*((int (__thiscall **)(HWND *))*v3 + 46))(a1: v3) != 0 )
        return v3;
    }
  }
  return nullptr;
}


/* ============================================
   Address: 0x418692
   Function: ?AfxGetParentOwner@@YGPAUHWND__@@PAU1@@Z
   ============================================ */

HWND __stdcall AfxGetParentOwner(HWND hWnd)
{
  CWnd *v1; // eax
  HWND result; // eax

  v1 = CWnd::FromHandlePermanent(a1: hWnd);
  if ( v1 != nullptr )
  {
    result = (HWND)CWnd::GetOwner(this: v1);
    if ( result != nullptr )
      return *((HWND *)result + 7);
  }
  else if ( (GetWindowLongA(hWnd, nIndex: -16) & 0x40000000) != 0 )
  {
    return GetParent(hWnd);
  }
  else
  {
    return GetWindow(hWnd, uCmd: 4u);
  }
  return result;
}


/* ============================================
   Address: 0x4186D7
   Function: ?GetTopLevelParent@CWnd@@QBEPAV1@XZ
   ============================================ */

struct CWnd *__thiscall CWnd::GetTopLevelParent(CWnd *this)
{
  struct CWnd *result; // eax
  HWND v2; // esi
  HWND i; // eax

  if ( this != nullptr )
    result = *((struct CWnd **)this + 7);
  else
    result = nullptr;
  if ( result != nullptr )
  {
    v2 = *((HWND *)this + 7);
    for ( i = AfxGetParentOwner(hWnd: v2); i != nullptr; i = AfxGetParentOwner(hWnd: i) )
      v2 = i;
    return CWnd::FromHandle(a1: v2);
  }
  return result;
}


/* ============================================
   Address: 0x418703
   Function: ?GetTopLevelFrame@CWnd@@QBEPAVCFrameWnd@@XZ
   ============================================ */

struct CFrameWnd *__thiscall CWnd::GetTopLevelFrame(CWnd *this)
{
  CWnd *ParentFrame; // esi
  struct CFrameWnd *result; // eax
  CWnd *i; // ecx
  HWND *v4; // eax

  ParentFrame = this;
  if ( this != nullptr )
    result = *((struct CFrameWnd **)this + 7);
  else
    result = nullptr;
  if ( result != nullptr )
  {
    if ( (*(int (__thiscall **)(CWnd *))(*(_DWORD *)this + 184))(a1: this) == 0 )
      ParentFrame = (CWnd *)CWnd::GetParentFrame(this: ParentFrame);
    if ( ParentFrame != nullptr )
    {
      for ( i = ParentFrame; ; i = (CWnd *)v4 )
      {
        v4 = CWnd::GetParentFrame(this: i);
        if ( v4 == nullptr )
          break;
        ParentFrame = (CWnd *)v4;
      }
    }
    return ParentFrame;
  }
  return result;
}


/* ============================================
   Address: 0x418747
   Function: ?GetSafeOwner@CWnd@@SGPAV1@PAV1@PAPAUHWND__@@@Z
   ============================================ */

static struct CWnd *__stdcall CWnd::GetSafeOwner(struct CWnd *a1, HWND *a2)
{
  HWND Parent; // esi
  bool v3; // zf
  struct CWnd *MainWnd; // eax
  HWND v5; // edi
  HWND i; // eax

  if ( a1 != nullptr )
    Parent = *((HWND *)a1 + 7);
  else
    Parent = nullptr;
  v3 = Parent == nullptr;
  if ( Parent == nullptr )
  {
    MainWnd = AfxGetMainWnd();
    if ( MainWnd != nullptr )
      Parent = *((HWND *)MainWnd + 7);
    v3 = Parent == nullptr;
  }
  if ( !v3 )
  {
    do
    {
      if ( (GetWindowLongA(hWnd: Parent, nIndex: -16) & 0x40000000) == 0 )
        break;
      Parent = GetParent(hWnd: Parent);
    }
    while ( Parent != nullptr );
  }
  v5 = Parent;
  for ( i = Parent; i != nullptr; i = GetParent(hWnd: i) )
    v5 = i;
  if ( a1 == nullptr && Parent != nullptr )
    Parent = GetLastActivePopup(hWnd: Parent);
  if ( a2 != nullptr )
  {
    if ( v5 != nullptr && IsWindowEnabled(hWnd: v5) && v5 != Parent )
    {
      *a2 = v5;
      EnableWindow(hWnd: v5, bEnable: false);
    }
    else
    {
      *a2 = nullptr;
    }
  }
  return CWnd::FromHandle(a1: Parent);
}


/* ============================================
   Address: 0x4187E7
   Function: ?GetDescendantWindow@CWnd@@SGPAV1@PAUHWND__@@HH@Z
   ============================================ */

static struct CWnd *__stdcall CWnd::GetDescendantWindow(HWND hDlg, int nIDDlgItem, int a3)
{
  HWND DlgItem; // eax
  HWND v4; // esi
  struct CWnd *result; // eax
  HWND i; // eax
  HWND v7; // esi

  DlgItem = GetDlgItem(hDlg, nIDDlgItem);
  v4 = DlgItem;
  if ( DlgItem == nullptr )
    goto LABEL_7;
  if ( GetTopWindow(hWnd: DlgItem) == nullptr
    || (result = CWnd::GetDescendantWindow(hDlg: v4, nIDDlgItem, a3)) == nullptr )
  {
    if ( a3 == 0 )
      return CWnd::FromHandle(a1: v4);
    result = CWnd::FromHandlePermanent(a1: v4);
    if ( result == nullptr )
    {
LABEL_7:
      for ( i = GetTopWindow(hWnd: hDlg); ; i = GetWindow(hWnd: v7, uCmd: 2u) )
      {
        v7 = i;
        if ( i == nullptr )
          break;
        result = CWnd::GetDescendantWindow(hDlg: i, nIDDlgItem, a3);
        if ( result != nullptr )
          return result;
      }
      return nullptr;
    }
  }
  return result;
}


/* ============================================
   Address: 0x418860
   Function: ?SendMessageToDescendants@CWnd@@SGXPAUHWND__@@IIJHH@Z
   ============================================ */

static void __userpurge CWnd::SendMessageToDescendants(
        int a1@<ebx>,
        HWND hWnd,
        CException *Msg,
        WPARAM wParam,
        LPARAM lParam,
        int a6,
        int a7)
{
  HWND i; // eax
  HWND v8; // esi
  HWND *v9; // eax

  for ( i = GetTopWindow(hWnd); ; i = GetWindow(hWnd: v8, uCmd: 2u) )
  {
    v8 = i;
    if ( i == nullptr )
      break;
    if ( a7 != 0 )
    {
      v9 = (HWND *)CWnd::FromHandlePermanent(a1: i);
      if ( v9 != nullptr )
        AfxCallWndProc(
          a1,
          a2: (int)GetTopWindow,
          a3: (int)v8,
          a4: (struct CWnd *)v9,
          a5: v9[7],
          a6: Msg,
          a7: wParam,
          a8: lParam);
    }
    else
    {
      SendMessageA(hWnd: i, (UINT)Msg, wParam, lParam);
    }
    if ( a6 != 0 && GetTopWindow(hWnd: v8) != nullptr )
      CWnd::SendMessageToDescendants(hWnd: v8, (UINT)Msg, wParam, lParam, a5: a6, a6: a7);
  }
}


/* ============================================
   Address: 0x4188DD
   Function: sub_4188DD
   ============================================ */

int __stdcall sub_4188DD(int a1)
{
  return 0;
}


/* ============================================
   Address: 0x4188E2
   Function: ?SetScrollPos@CWnd@@QAEHHHH@Z
   ============================================ */

int __thiscall CWnd::SetScrollPos(HWND *this, int nBar, int nPos, BOOL bRedraw)
{
  int v5; // eax

  v5 = (*((int (__thiscall **)(HWND *, int))*this + 28))(a1: this, a2: nBar);
  if ( v5 != 0 )
    return SetScrollPos(hWnd: *(HWND *)(v5 + 28), nBar: 2, nPos, bRedraw);
  else
    return SetScrollPos(hWnd: *(this + 7), nBar, nPos, bRedraw);
}


/* ============================================
   Address: 0x418912
   Function: ?GetScrollPos@CWnd@@QBEHH@Z
   ============================================ */

int __thiscall CWnd::GetScrollPos(HWND *this, int nBar)
{
  int v3; // eax

  v3 = (*((int (__thiscall **)(HWND *, int))*this + 28))(a1: this, a2: nBar);
  if ( v3 != 0 )
    return GetScrollPos(hWnd: *(HWND *)(v3 + 28), nBar: 2);
  else
    return GetScrollPos(hWnd: *(this + 7), nBar);
}


/* ============================================
   Address: 0x41893A
   Function: ?SetScrollRange@CWnd@@QAEXHHHH@Z
   ============================================ */

void __thiscall CWnd::SetScrollRange(HWND *this, int nBar, int nMinPos, int nMaxPos, BOOL bRedraw)
{
  int v6; // eax

  v6 = (*((int (__thiscall **)(HWND *, int))*this + 28))(a1: this, a2: nBar);
  if ( v6 != 0 )
    SetScrollRange(hWnd: *(HWND *)(v6 + 28), nBar: 2, nMinPos, nMaxPos, bRedraw);
  else
    SetScrollRange(hWnd: *(this + 7), nBar, nMinPos, nMaxPos, bRedraw);
}


/* ============================================
   Address: 0x41896D
   Function: ?EnableScrollBarCtrl@CWnd@@QAEXHH@Z
   ============================================ */

void __thiscall CWnd::EnableScrollBarCtrl(HWND *this, int wBar, BOOL bShow)
{
  int v3; // edi
  CWnd *v5; // eax

  v3 = wBar;
  if ( wBar == 3 )
  {
    CWnd::EnableScrollBarCtrl((CWnd *)this, wBar: 0, a3: bShow);
    v3 = 1;
  }
  v5 = (CWnd *)(*((int (__thiscall **)(HWND *, int))*this + 28))(a1: this, a2: v3);
  if ( v5 != nullptr )
    CWnd::EnableWindow(this: v5, a2: bShow);
  else
    ShowScrollBar(hWnd: *(this + 7), wBar: v3, bShow);
}


/* ============================================
   Address: 0x4189B0
   Function: ?SetScrollInfo@CWnd@@QAEHHPAUtagSCROLLINFO@@H@Z
   ============================================ */

int __thiscall CWnd::SetScrollInfo(CWnd *this, int nBar, LPCSCROLLINFO lpsi, BOOL redraw)
{
  int v5; // edi
  HWND v6; // esi
  int v7; // eax

  if ( (unsigned int)dword_42F8D4 < 0x333 )
    return 0;
  v5 = nBar;
  v6 = *((HWND *)this + 7);
  if ( nBar != 2 )
  {
    v7 = (*(int (__thiscall **)(CWnd *, int))(*(_DWORD *)this + 112))(a1: this, a2: nBar);
    if ( v7 != 0 )
    {
      v6 = *(HWND *)(v7 + 28);
      v5 = 2;
    }
  }
  lpsi->cbSize = 28;
  SetScrollInfo(hwnd: v6, nBar: v5, lpsi, redraw);
  return 1;
}


/* ============================================
   Address: 0x4189FD
   Function: ?ScrollWindow@CWnd@@QAEXHHPBUtagRECT@@0@Z
   ============================================ */

void __thiscall CWnd::ScrollWindow(
        HWND *this,
        int XAmount,
        int YAmount,
        RECT *lpRect,
        const struct tagRECT *lpClipRect)
{
  HWND i; // ebx
  int v7; // esi
  struct tagRECT Rect; // [esp+Ch] [ebp-10h] BYREF

  if ( IsWindowVisible(hWnd: *(this + 7)) || lpRect != nullptr || lpClipRect != nullptr )
  {
    ScrollWindow(hWnd: *(this + 7), XAmount, YAmount, lpRect, lpClipRect);
  }
  else
  {
    for ( i = GetWindow(hWnd: *(this + 7), uCmd: 5u); i != nullptr; i = GetWindow(hWnd: i, uCmd: 2u) )
    {
      GetWindowRect(hWnd: i, lpRect: &Rect);
      ScreenToClient(hWnd: *(this + 7), lpPoint: (LPPOINT)&Rect);
      ScreenToClient(hWnd: *(this + 7), lpPoint: (LPPOINT)&Rect.right);
      SetWindowPos(
        hWnd: i,
        hWndInsertAfter: nullptr,
        X: XAmount + Rect.left,
        Y: YAmount + Rect.top,
        cx: 0,
        cy: 0,
        uFlags: 0x15u);
    }
  }
  v7 = (int)*(this + 13);
  if ( v7 != 0 && lpRect == nullptr )
    (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v7 + 96))(a1: v7, a2: XAmount, a3: YAmount);
}


/* ============================================
   Address: 0x418ABA
   Function: ?RepositionBars@CWnd@@QAEXIIIIPAUtagRECT@@PBU2@H@Z
   ============================================ */

void __thiscall CWnd::RepositionBars(
        HWND *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        LPRECT lprcDst,
        const struct tagRECT *a7,
        int a8)
{
  HWND i; // esi
  unsigned int DlgCtrlID; // edi
  struct CWnd *v11; // eax
  LONG v12; // ecx
  struct CWnd *v13; // eax
  LPARAM lParam; // [esp+Ch] [ebp-24h] BYREF
  struct tagRECT Rect; // [esp+10h] [ebp-20h] BYREF
  LONG v16; // [esp+20h] [ebp-10h]
  LONG v17; // [esp+24h] [ebp-Ch]
  int v18; // [esp+28h] [ebp-8h]
  HWND hWnd; // [esp+2Ch] [ebp-4h]

  hWnd = nullptr;
  v18 = a8;
  v17 = 0;
  v16 = 0;
  if ( a7 != nullptr )
    Rect = *a7;
  else
    GetClientRect(hWnd: *(this + 7), lpRect: &Rect);
  if ( a5 == 1 )
    lParam = 0;
  else
    lParam = (LPARAM)BeginDeferWindowPos(nNumWindows: 8);
  for ( i = GetTopWindow(hWnd: *(this + 7)); i != nullptr; i = GetWindow(hWnd: i, uCmd: 2u) )
  {
    DlgCtrlID = (unsigned __int16)GetDlgCtrlID(hWnd: i);
    v11 = CWnd::FromHandlePermanent(a1: i);
    if ( DlgCtrlID == a4 )
    {
      hWnd = i;
    }
    else if ( DlgCtrlID >= a2 && DlgCtrlID <= a3 && v11 != nullptr )
    {
      SendMessageA(hWnd: i, Msg: 0x361u, wParam: 0, (LPARAM)&lParam);
    }
  }
  if ( a5 == 1 )
  {
    if ( a8 != 0 )
    {
      CopyRect(lprcDst, lprcSrc: &Rect);
    }
    else
    {
      lprcDst->right = v16;
      v12 = v17;
      lprcDst->top = 0;
      lprcDst->left = 0;
      lprcDst->bottom = v12;
    }
  }
  else
  {
    if ( a4 != 0 && hWnd != nullptr )
    {
      v13 = CWnd::FromHandle(a1: hWnd);
      if ( a5 == 2 )
      {
        Rect.left += lprcDst->left;
        Rect.top += lprcDst->top;
        Rect.right -= lprcDst->right;
        Rect.bottom -= lprcDst->bottom;
      }
      (*(void (__thiscall **)(struct CWnd *, struct tagRECT *, _DWORD))(*(_DWORD *)v13 + 104))(
        a1: v13,
        a2: &Rect,
        a3: 0);
      AfxRepositionWindow(a1: (struct AFX_SIZEPARENTPARAMS *)&lParam, hWnd, lprc2: &Rect);
    }
    if ( lParam != 0 )
      EndDeferWindowPos(hWinPosInfo: (HDWP)lParam);
  }
}


/* ============================================
   Address: 0x418BF4
   Function: ?AfxRepositionWindow@@YGXPAUAFX_SIZEPARENTPARAMS@@PAUHWND__@@PBUtagRECT@@@Z
   ============================================ */

void __stdcall AfxRepositionWindow(HDWP *a1, HWND hWnd, RECT *lprc2)
{
  LONG top; // eax
  LONG left; // ecx
  LONG bottom; // edx
  struct tagRECT Rect; // [esp+Ch] [ebp-10h] BYREF
  HWND hWnda; // [esp+28h] [ebp+Ch]

  hWnda = GetParent(hWnd);
  if ( a1 == nullptr || *a1 != nullptr )
  {
    GetWindowRect(hWnd, lpRect: &Rect);
    ScreenToClient(hWnd: hWnda, lpPoint: (LPPOINT)&Rect);
    ScreenToClient(hWnd: hWnda, lpPoint: (LPPOINT)&Rect.right);
    if ( !EqualRect(lprc1: &Rect, lprc2) )
    {
      top = lprc2->top;
      left = lprc2->left;
      bottom = lprc2->bottom;
      if ( a1 != nullptr )
        *a1 = DeferWindowPos(
                hWinPosInfo: *a1,
                hWnd,
                hWndInsertAfter: nullptr,
                x: left,
                y: top,
                cx: lprc2->right - left,
                cy: bottom - top,
                uFlags: 0x14u);
      else
        SetWindowPos(
          hWnd,
          hWndInsertAfter: nullptr,
          X: left,
          Y: top,
          cx: lprc2->right - left,
          cy: bottom - top,
          uFlags: 0x14u);
    }
  }
}


/* ============================================
   Address: 0x418C8E
   Function: ?CalcWindowRect@CWnd@@UAEXPAUtagRECT@@I@Z
   ============================================ */

void __thiscall CWnd::CalcWindowRect(CWnd *this, LPRECT lpRect, unsigned int a3)
{
  unsigned int v4; // eax
  DWORD Style; // eax
  DWORD v6; // [esp-4h] [ebp-8h]

  v4 = CWnd::GetExStyle(this);
  if ( a3 == 0 )
    BYTE1(v4) &= ~2u;
  v6 = v4;
  Style = CWnd::GetStyle(this);
  AdjustWindowRectEx(lpRect, dwStyle: Style, bMenu: false, dwExStyle: v6);
}


/* ============================================
   Address: 0x418CB9
   Function: ?WalkPreTranslateTree@CWnd@@SGHPAUHWND__@@PAUtagMSG@@@Z
   ============================================ */

static int __stdcall CWnd::WalkPreTranslateTree(HWND a1, struct tagMSG *a2)
{
  HWND i; // esi
  struct CWnd *v3; // eax

  for ( i = a2->hwnd; i != nullptr; i = GetParent(hWnd: i) )
  {
    v3 = CWnd::FromHandlePermanent(a1: i);
    if ( v3 != nullptr && (*(int (__thiscall **)(struct CWnd *, struct tagMSG *))(*(_DWORD *)v3 + 152))(a1: v3, a2) != 0 )
      return 1;
    if ( i == a1 )
      break;
  }
  return 0;
}


/* ============================================
   Address: 0x418CFB
   Function: ?SendChildNotifyLastMsg@CWnd@@QAEHPAJ@Z
   ============================================ */

int __thiscall CWnd::SendChildNotifyLastMsg(CWnd *this, int *a2)
{
  struct CNoTrackObject *Data; // eax

  Data = CThreadLocalObject::GetData(
           this: (CThreadLocalObject *)&unk_42F5B8,
           a2: CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
  return (*(int (__thiscall **)(CWnd *, _DWORD, _DWORD, _DWORD, int *))(*(_DWORD *)this + 176))(
           a1: this,
           a2: *((_DWORD *)Data + 14),
           a3: *((_DWORD *)Data + 15),
           a4: *((_DWORD *)Data + 16),
           a5: a2);
}


/* ============================================
   Address: 0x418D28
   Function: ?ReflectLastMsg@CWnd@@KGHPAUHWND__@@PAJ@Z
   ============================================ */

static int __stdcall CWnd::ReflectLastMsg(HWND hWnd, int *a2)
{
  CMapPtrToPtr *v2; // eax
  CMapPtrToPtr *v3; // esi
  CWnd *ValueAt; // eax
  HWND Parent; // eax
  _DWORD *v6; // eax
  int v7; // eax
  void *v8; // esi
  int Msg; // eax
  int v10; // esi
  _BYTE v12[28]; // [esp+8h] [ebp-48h] BYREF
  int v13; // [esp+24h] [ebp-2Ch]
  void *v14; // [esp+40h] [ebp-10h]
  int v15; // [esp+4Ch] [ebp-4h]

  v2 = afxMapHWND(Block: nullptr);
  v3 = v2;
  if ( v2 == nullptr )
    return 0;
  ValueAt = (CWnd *)CMapPtrToPtr::GetValueAt(this: v2, a2: (unsigned int)hWnd);
  if ( ValueAt == nullptr )
  {
    Parent = GetParent(hWnd);
    v6 = CMapPtrToPtr::GetValueAt(this: v3, a2: (unsigned int)Parent);
    if ( v6 != nullptr )
    {
      v7 = v6[13];
      if ( v7 != 0 )
      {
        v8 = CMapPtrToPtr::GetValueAt(this: (CMapPtrToPtr *)(v7 + 32), a2: (unsigned int)hWnd);
        if ( v8 != nullptr )
        {
          CWnd::CWnd(this: (CWnd *)v12, a2: hWnd);
          v15 = 0;
          v14 = v8;
          Msg = CWnd::SendChildNotifyLastMsg(this: (CWnd *)v12, a2);
          v13 = 0;
          v15 = -1;
          v10 = Msg;
          CWnd::~CWnd(this: (CWnd *)v12);
          return v10;
        }
      }
    }
    return 0;
  }
  return CWnd::SendChildNotifyLastMsg(this: ValueAt, a2);
}


/* ============================================
   Address: 0x418DCC
   Function: ?OnChildNotify@CWnd@@MAEHIIJPAJ@Z
   ============================================ */

LRESULT __thiscall CWnd::OnChildNotify(HWND *this, unsigned int a2, HMENU wParam, HMENU lParam, int *a5)
{
  LRESULT result; // eax

  if ( *(this + 14) == nullptr )
    return CWnd::ReflectChildNotify((CWnd *)this, a2, a3: wParam, a4: lParam, a5);
  result = SendMessageA(hWnd: *(this + 7), Msg: a2 + 0x2000, (WPARAM)wParam, (LPARAM)lParam);
  if ( a2 < 0x132 || a2 > 0x138 || result != 0 )
  {
    if ( a5 != nullptr )
      *a5 = result;
    return 1;
  }
  return result;
}


/* ============================================
   Address: 0x418E27
   Function: ?ReflectChildNotify@CWnd@@IAEHIIJPAJ@Z
   ============================================ */

int __thiscall CWnd::ReflectChildNotify(LPARAM *this, unsigned int a2, HMENU a3, HMENU a4, int *a5)
{
  int result; // eax
  struct HMENU__ v6; // [esp+8h] [ebp-Ch] BYREF
  HMENU Buf1; // [esp+Ch] [ebp-8h] BYREF
  HMENU v8; // [esp+10h] [ebp-4h]

  if ( a2 <= 0x39 )
  {
    if ( a2 != 57 && (a2 < 0x2B || a2 > 0x2F) )
      goto LABEL_5;
    return sub_417FA3(this, a2: a2 + 48128, (unsigned int)a3, a4, a5);
  }
  if ( a2 == 78 )
  {
    Buf1 = (HMENU)a5;
    v8 = a4;
    return CCmdTarget::OnCmdMsg(
             (CCmdTarget *)this,
             a2: 0,
             a3: (unsigned __int16)*((_DWORD *)a4 + 2) | 0xBC4E0000,
             &Buf1,
             a5: nullptr);
  }
  if ( a2 != 273 )
  {
    if ( a2 <= 0x113 || a2 > 0x115 && a2 != 528 )
    {
LABEL_5:
      if ( a2 < 0x132 )
        return 0;
      if ( a2 > 0x138 )
        return 0;
      v8 = (HMENU)(a2 - 306);
      Buf1 = a3;
      result = sub_417FA3(this, a2: 0xBC19u, a3: 0, a4: &v6, a5);
      if ( *a5 == 0 )
        return 0;
      return result;
    }
    return sub_417FA3(this, a2: a2 + 48128, (unsigned int)a3, a4, a5);
  }
  if ( CCmdTarget::OnCmdMsg((CCmdTarget *)this, a2: 0, a3: HIWORD(a3) | 0xBD110000, Buf1: nullptr, a5: nullptr) == 0 )
    return 0;
  result = 1;
  if ( a5 != nullptr )
    *a5 = 1;
  return result;
}


/* ============================================
   Address: 0x418F1D
   Function: ?OnParentNotify@CWnd@@IAEXIJ@Z
   ============================================ */

void __thiscall CWnd::OnParentNotify(CWnd *this, __int16 a2, HWND hWnd)
{
  if ( a2 != 1 && a2 != 2 || CWnd::ReflectLastMsg(hWnd, a2: nullptr) == 0 )
    CWnd::Default(this);
}


/* ============================================
   Address: 0x418F4A
   Function: ?OnActivateTopLevel@CWnd@@IAEJIJ@Z
   ============================================ */

int __thiscall CWnd::OnActivateTopLevel(CWnd *this, __int16 a2, int a3)
{
  if ( a2 == 0 && (*((_BYTE *)AfxGetThreadState() + 223) & 0x40) == 0 )
    CWnd::CancelToolTips(a1: 1);
  return 0;
}


/* ============================================
   Address: 0x418F6C
   Function: ?OnSysColorChange@CWnd@@IAEXXZ
   ============================================ */

void __usercall CWnd::OnSysColorChange(CWnd *this@<ecx>, int a2@<ebx>)
{
  int v3; // edi
  void (*v4)(void); // eax

  v3 = *((_DWORD *)AfxGetModuleState() + 1);
  CProcessLocalObject::GetData(this: (CProcessLocalObject *)&unk_42F5AC, a2: sub_4053F5);
  if ( *(CWnd **)(v3 + 28) == this )
    AUX_DATA::UpdateSysColors(this: (AUX_DATA *)&dword_42F880);
  if ( *((_BYTE *)AfxGetModuleState() + 20) == 0 && AfxGetThread() != nullptr && *((CWnd **)AfxGetThread() + 7) == this )
  {
    v4 = *((void (**)(void))CProcessLocalObject::GetData(
                              this: (CProcessLocalObject *)&dword_42F878,
                              a2: CProcessLocal<_AFX_CTL3D_STATE>::CreateObject)
         + 7);
    if ( v4 != nullptr )
      v4();
  }
  if ( (CWnd::GetStyle(this) & 0x40000000) == 0 )
    CWnd::SendMessageToDescendants(
      a1: a2,
      hWnd: *((HWND *)this + 7),
      Msg: (CException *)0x15,
      wParam: 0,
      lParam: 0,
      a6: 1,
      a7: 1);
  CWnd::Default(this);
}


/* ============================================
   Address: 0x418FF6
   Function: sub_418FF6
   ============================================ */

// ?OnSettingChange@CWnd@@IAEXIPBD@Z
// doubtful name
int __thiscall sub_418FF6(CWnd *this, int a2, int a3)
{
  struct CNoTrackObject *Data; // esi
  void (*v5)(void); // eax

  if ( *((_BYTE *)AfxGetModuleState() + 20) == 0 )
  {
    Data = CProcessLocalObject::GetData(
             this: (CProcessLocalObject *)&dword_42F878,
             a2: CProcessLocal<_AFX_CTL3D_STATE>::CreateObject);
    if ( AfxGetThread() != nullptr && *((CWnd **)AfxGetThread() + 7) == this )
    {
      v5 = *((void (**)(void))Data + 9);
      if ( v5 != nullptr )
        v5();
    }
  }
  _AfxGetMouseScrollLines(phkResult: (HKEY)1);
  return CWnd::OnDisplayChange(this, a2: 0, a3: 0);
}


/* ============================================
   Address: 0x41909F
   Function: ?OnHelpInfo@CWnd@@IAEHPAUtagHELPINFO@@@Z
   ============================================ */

int __thiscall CWnd::OnHelpInfo(CWnd *this, struct tagHELPINFO *a2)
{
  struct CWnd *MainWnd; // esi

  if ( (CWnd::GetStyle(this) & 0x40000000) != 0 )
    return CWnd::Default(this);
  MainWnd = AfxGetMainWnd();
  if ( MainWnd == nullptr
    || GetKeyState(nVirtKey: 16) < 0
    || GetKeyState(nVirtKey: 17) < 0
    || GetKeyState(nVirtKey: 18) < 0 )
  {
    return CWnd::Default(this);
  }
  SendMessageA(hWnd: *((HWND *)MainWnd + 7), Msg: 0x111u, wParam: 0xE146u, lParam: 0);
  return 1;
}


/* ============================================
   Address: 0x419103
   Function: ?OnDisplayChange@CWnd@@IAEJIJ@Z
   ============================================ */

int __userpurge CWnd::OnDisplayChange@<eax>(HWND *this@<ecx>, int a2@<ebx>, unsigned int a3, int a4)
{
  const struct tagMSG *CurrentMessage; // eax

  if ( *(HWND **)(*((_DWORD *)AfxGetModuleState() + 1) + 28) == this )
    AUX_DATA::UpdateSysMetrics(this: (AUX_DATA *)&dword_42F880);
  if ( (CWnd::GetStyle((CWnd *)this) & 0x40000000) == 0 )
  {
    CurrentMessage = CWnd::GetCurrentMessage();
    CWnd::SendMessageToDescendants(
      a1: a2,
      hWnd: *(this + 7),
      Msg: (CException *)CurrentMessage->message,
      wParam: CurrentMessage->wParam,
      lParam: CurrentMessage->lParam,
      a6: 1,
      a7: 1);
  }
  return CWnd::Default((CWnd *)this);
}


/* ============================================
   Address: 0x419150
   Function: ?OnDragList@CWnd@@IAEJIJ@Z
   ============================================ */

int __thiscall CWnd::OnDragList(CWnd *this, unsigned int a2, int a3)
{
  if ( CWnd::ReflectLastMsg(hWnd: *(HWND *)(a3 + 4), a2: &a3) != 0 )
    return a3;
  else
    return CWnd::Default(this);
}


/* ============================================
   Address: 0x41917A
   Function: sub_41917A
   ============================================ */

// ?OnVScroll@CWnd@@IAEXIIPAVCScrollBar@@@Z
// doubtful name
int __thiscall sub_41917A(CWnd *this, int a2, int a3, CWnd *a4)
{
  int result; // eax

  if ( a4 == nullptr )
    return CWnd::Default(this);
  result = CWnd::SendChildNotifyLastMsg(this: a4, a2: nullptr);
  if ( result == 0 )
    return CWnd::Default(this);
  return result;
}


/* ============================================
   Address: 0x41919B
   Function: sub_41919B
   ============================================ */

// ?OnVScroll@CWnd@@IAEXIIPAVCScrollBar@@@Z
// doubtful name
int __thiscall sub_41919B(CWnd *this, int a2, int a3, CWnd *a4)
{
  int result; // eax

  if ( a4 == nullptr )
    return CWnd::Default(this);
  result = CWnd::SendChildNotifyLastMsg(this: a4, a2: nullptr);
  if ( result == 0 )
    return CWnd::Default(this);
  return result;
}


/* ============================================
   Address: 0x4191BC
   Function: ?OnEnterIdle@CWnd@@IAEXIPAV1@@Z
   ============================================ */

void __thiscall CWnd::OnEnterIdle(CWnd *this, unsigned int a2, struct CWnd *a3)
{
  BOOL i; // eax
  struct tagMSG Msg; // [esp+Ch] [ebp-1Ch] BYREF

  for ( i = PeekMessageA(lpMsg: &Msg, hWnd: nullptr, wMsgFilterMin: 0x121u, wMsgFilterMax: 0x121u, wRemoveMsg: 1u);
        i;
        i = PeekMessageA(lpMsg: &Msg, hWnd: nullptr, wMsgFilterMin: 0x121u, wMsgFilterMax: 0x121u, wRemoveMsg: 1u) )
  {
    DispatchMessageA(lpMsg: &Msg);
  }
  CWnd::Default(this);
}


/* ============================================
   Address: 0x419206
   Function: ?OnCtlColor@CWnd@@IAEPAUHBRUSH__@@PAVCDC@@PAV1@I@Z
   ============================================ */

struct CWnd *__thiscall CWnd::OnCtlColor(CWnd *this, struct CDC *a2, struct CWnd *a3, unsigned int a4)
{
  if ( CWnd::SendChildNotifyLastMsg(this: a3, a2: (int *)&a3) != 0 )
    return a3;
  else
    return (struct CWnd *)CWnd::Default(this);
}


/* ============================================
   Address: 0x41922D
   Function: ?OnGrayCtlColor@CWnd@@QAEPAUHBRUSH__@@PAVCDC@@PAV1@I@Z
   ============================================ */

CWnd *__thiscall CWnd::OnGrayCtlColor(CWnd *this, HDC *a2, CWnd *hWnd, unsigned int a4)
{
  HWND v4; // edi
  struct CNoTrackObject *Data; // eax
  struct CNoTrackObject *v8; // esi

  v4 = (HWND)hWnd;
  if ( CWnd::SendChildNotifyLastMsg(this: hWnd, a2: (int *)&hWnd) != 0 )
    return hWnd;
  Data = CProcessLocalObject::GetData(this: (CProcessLocalObject *)&unk_42F5AC, a2: sub_4053F5);
  v8 = Data;
  if ( v4 != nullptr )
    v4 = *((HWND *)v4 + 7);
  if ( CWnd::GrayCtlColor(hdc: a2[1], hWnd: v4, a3: a4, h: *((HBRUSH *)Data + 1), a5: *((_DWORD *)Data + 2)) != 0 )
    return *((CWnd **)v8 + 1);
  else
    return (CWnd *)CWnd::Default(this);
}


/* ============================================
   Address: 0x419290
   Function: ?GrayCtlColor@CWnd@@SGHPAUHDC__@@PAUHWND__@@IPAUHBRUSH__@@K@Z
   ============================================ */

static int __stdcall CWnd::GrayCtlColor(HDC hdc, HWND hWnd, unsigned int a3, HANDLE h, COLORREF a5)
{
  COLORREF SysColor; // eax
  _BYTE pv[4]; // [esp+0h] [ebp-Ch] BYREF
  COLORREF color; // [esp+4h] [ebp-8h]

  if ( hdc == nullptr || h == nullptr || a3 < 2 || a3 == 5 || a3 == 2 && _AfxIsComboBoxControl(hWnd, a2: 2u) == 0 )
    return 0;
  GetObjectA(h, c: 12, pv);
  SetBkColor(hdc, color);
  SysColor = a5;
  if ( a5 == -1 )
    SysColor = GetSysColor(nIndex: 8);
  SetTextColor(hdc, color: SysColor);
  return 1;
}


/* ============================================
   Address: 0x419305
   Function: ?OnQuery3dControls@CWnd@@IAEJIJ@Z
   ============================================ */

int __thiscall CWnd::OnQuery3dControls(CWnd *this, unsigned int a2, int a3)
{
  return 0xFFFF;
}


/* ============================================
   Address: 0x41930D
   Function: ?UpdateData@CWnd@@QAEHH@Z
   ============================================ */

int __userpurge CWnd::UpdateData@<eax>(CWnd *this@<ecx>, int a2@<ebx>, int a3@<edi>, int a4@<esi>, int a5)
{
  struct _AFX_THREAD_STATE *ThreadState; // edi
  int v8; // [esp-10h] [ebp-3Ch] BYREF
  int v9; // [esp-Ch] [ebp-38h]
  int v10; // [esp-8h] [ebp-34h]
  int v11; // [esp-4h] [ebp-30h]
  _BYTE v12[16]; // [esp+0h] [ebp-2Ch] BYREF
  int v13; // [esp+14h] [ebp-18h]
  struct _AFX_THREAD_STATE *v14; // [esp+18h] [ebp-14h]
  int *v15; // [esp+1Ch] [ebp-10h]
  int v16; // [esp+28h] [ebp-4h]

  v10 = a2;
  v9 = a4;
  v8 = a3;
  v15 = &v8;
  CDataExchange::CDataExchange(this: (CDataExchange *)v12, a2: this, a3: a5);
  ThreadState = AfxGetThreadState();
  v16 = 0;
  v14 = ThreadState;
  v13 = *((_DWORD *)ThreadState + 46);
  *((_DWORD *)ThreadState + 46) = *((_DWORD *)this + 7);
  (*(void (__thiscall **)(CWnd *, _BYTE *, int, int, int, int))(*(_DWORD *)this + 140))(
    a1: this,
    a2: v12,
    a3: v8,
    a4: v9,
    a5: v10,
    a6: v11);
  *((_DWORD *)ThreadState + 46) = v13;
  return 1;
}


/* ============================================
   Address: 0x4193B0
   Function: ??0CDataExchange@@QAE@PAVCWnd@@H@Z
   ============================================ */

CDataExchange *__thiscall CDataExchange::CDataExchange(CDataExchange *this, struct CWnd *a2, int a3)
{
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = a3;
  *((_DWORD *)this + 1) = a2;
  return this;
}


/* ============================================
   Address: 0x4193C6
   Function: ?CenterWindow@CWnd@@QAEXPAV1@@Z
   ============================================ */

void __thiscall CWnd::CenterWindow(HWND *this, struct CWnd *a2)
{
  HWND v3; // edi
  HWND v4; // eax
  LRESULT v5; // eax
  LONG WindowLongA; // eax
  HWND Parent; // ebx
  LONG left; // ecx
  LONG top; // esi
  struct tagRECT Rect; // [esp+Ch] [ebp-38h] BYREF
  struct tagRECT v11; // [esp+1Ch] [ebp-28h] BYREF
  struct tagRECT pvParam; // [esp+2Ch] [ebp-18h] BYREF
  CWnd *v13; // [esp+3Ch] [ebp-8h]
  unsigned int Style; // [esp+40h] [ebp-4h]

  v13 = (CWnd *)this;
  Style = CWnd::GetStyle((CWnd *)this);
  if ( a2 != nullptr )
    v3 = *((HWND *)a2 + 7);
  else
    v3 = nullptr;
  if ( a2 == nullptr )
  {
    v4 = (Style & 0x40000000) != 0 ? GetParent(hWnd: *(this + 7)) : GetWindow(hWnd: *(this + 7), uCmd: 4u);
    v3 = v4;
    if ( v4 != nullptr )
    {
      v5 = SendMessageA(hWnd: v4, Msg: 0x36Bu, wParam: 0, lParam: 0);
      if ( v5 != 0 )
        v3 = (HWND)v5;
    }
  }
  GetWindowRect(hWnd: *(this + 7), lpRect: &Rect);
  if ( (Style & 0x40000000) != 0 )
  {
    Parent = GetParent(hWnd: *(this + 7));
    GetClientRect(hWnd: Parent, lpRect: &pvParam);
    GetClientRect(hWnd: v3, lpRect: &v11);
    MapWindowPoints(hWndFrom: v3, hWndTo: Parent, lpPoints: (LPPOINT)&v11, cPoints: 2u);
  }
  else
  {
    if ( v3 != nullptr )
    {
      WindowLongA = GetWindowLongA(hWnd: v3, nIndex: -16);
      if ( (WindowLongA & 0x10000000) == 0 || (WindowLongA & 0x20000000) != 0 )
        v3 = nullptr;
    }
    SystemParametersInfoA(uiAction: 0x30u, uiParam: 0, &pvParam, fWinIni: 0);
    if ( v3 != nullptr )
      GetWindowRect(hWnd: v3, lpRect: &v11);
    else
      v11 = pvParam;
  }
  left = (v11.right + v11.left) / 2 - (Rect.right - Rect.left) / 2;
  top = (v11.bottom + v11.top) / 2 - (Rect.bottom - Rect.top) / 2;
  if ( left >= pvParam.left )
  {
    if ( left + Rect.right - Rect.left > pvParam.right )
      left = pvParam.right + Rect.left - Rect.right;
  }
  else
  {
    left = pvParam.left;
  }
  if ( top >= pvParam.top )
  {
    if ( top + Rect.bottom - Rect.top > pvParam.bottom )
      top = pvParam.bottom + Rect.top - Rect.bottom;
  }
  else
  {
    top = pvParam.top;
  }
  CWnd::SetWindowPos(this: v13, hWndInsertAfter: nullptr, X: left, Y: top, a5: -1, cy: -1, a7: 0x15u);
}


/* ============================================
   Address: 0x419540
   Function: sub_419540
   ============================================ */

int sub_419540()
{
  return 1;
}


/* ============================================
   Address: 0x419544
   Function: ?ExecuteDlgInit@CWnd@@QAEHPBD@Z
   ============================================ */

int __thiscall CWnd::ExecuteDlgInit(CWnd *this, LPCSTR lpName)
{
  void *v2; // edi
  HMODULE v4; // esi
  HRSRC ResourceA; // eax
  HGLOBAL Resource; // eax

  v2 = nullptr;
  if ( lpName != nullptr )
  {
    v4 = *((HMODULE *)AfxGetModuleState() + 3);
    ResourceA = FindResourceA(hModule: v4, lpName, lpType: (LPCSTR)0xF0);
    if ( ResourceA != nullptr )
    {
      Resource = LoadResource(hModule: v4, hResInfo: ResourceA);
      if ( Resource == nullptr )
        return 0;
      v2 = LockResource(hResData: Resource);
    }
  }
  return CWnd::ExecuteDlgInit(this, a2: v2);
}


/* ============================================
   Address: 0x419594
   Function: ?ExecuteDlgInit@CWnd@@QAEHPAX@Z
   ============================================ */

int __userpurge CWnd::ExecuteDlgInit@<eax>(HWND *this@<ecx>, int a2@<ebx>, unsigned __int16 *a3)
{
  unsigned __int16 *v3; // esi
  int v5; // ebp
  unsigned __int16 v6; // cx
  unsigned __int16 *v7; // esi
  unsigned __int16 v8; // ax
  LPARAM v9; // esi

  v3 = a3;
  v5 = 1;
  if ( a3 != nullptr )
  {
    do
    {
      v6 = *v3;
      if ( *v3 == 0 )
        break;
      v7 = v3 + 1;
      v8 = *v7++;
      a2 = *(_DWORD *)v7;
      v9 = (LPARAM)(v7 + 2);
      if ( v8 == 1025 )
      {
        v8 = 384;
      }
      else if ( v8 == 1027 )
      {
        v8 = 323;
      }
      if ( (v8 == 384 || v8 == 323)
        && SendDlgItemMessageA(hDlg: *(this + 7), nIDDlgItem: v6, Msg: v8, wParam: 0, lParam: v9) == -1 )
      {
        v5 = 0;
      }
      v3 = (unsigned __int16 *)(a2 + v9);
    }
    while ( v5 != 0 );
  }
  if ( v5 != 0 )
    CWnd::SendMessageToDescendants(
      a1: a2,
      hWnd: *(this + 7),
      Msg: (CException *)0x364,
      wParam: 0,
      lParam: 0,
      a6: 0,
      a7: 0);
  return v5;
}


/* ============================================
   Address: 0x41961E
   Function: ?PreTranslateInput@CWnd@@QAEHPAUtagMSG@@@Z
   ============================================ */

int __thiscall CWnd::PreTranslateInput(CWnd *this, struct tagMSG *a2)
{
  UINT message; // eax

  message = a2->message;
  if ( (message < 0x100 || message > 0x108) && (message < 0x200 || message > 0x209) )
    return 0;
  else
    return CWnd::IsDialogMessageA(this, a2);
}


/* ============================================
   Address: 0x41964E
   Function: ?RunModalLoop@CWnd@@QAEHK@Z
   ============================================ */

int __thiscall CWnd::RunModalLoop(HWND *this, char a2)
{
  HWND Parent; // eax
  struct tagMSG *v4; // ebp
  LPARAM v5; // eax
  struct CWinThread *Thread; // eax
  UINT message; // eax
  struct CWinThread *v8; // eax
  int v10; // [esp+10h] [ebp-10h]
  LPARAM lParam; // [esp+14h] [ebp-Ch]
  int v12; // [esp+18h] [ebp-8h]
  HWND hWnd; // [esp+1Ch] [ebp-4h]

  v12 = 1;
  lParam = 0;
  if ( (a2 & 4) == 0 || (v10 = 1, (CWnd::GetStyle((CWnd *)this) & 0x10000000) != 0) )
    v10 = 0;
  Parent = GetParent(hWnd: *(this + 7));
  *(this + 9) = (HWND)((unsigned int)*(this + 9) | 0x18);
  hWnd = Parent;
  v4 = (struct tagMSG *)((char *)AfxGetThread() + 48);
LABEL_5:
  while ( v12 != 0 && !PeekMessageA(lpMsg: v4, hWnd: nullptr, wMsgFilterMin: 0, wMsgFilterMax: 0, wRemoveMsg: 0) )
  {
    if ( v10 != 0 )
    {
      CWnd::ShowWindow((CWnd *)this, a2: 1);
      UpdateWindow(hWnd: *(this + 7));
      v10 = 0;
    }
    if ( (a2 & 1) == 0 && hWnd != nullptr && lParam == 0 )
      SendMessageA(hWnd, Msg: 0x121u, wParam: 0, lParam: (LPARAM)*(this + 7));
    if ( (a2 & 2) == 0 )
    {
      v5 = lParam++;
      if ( SendMessageA(hWnd: *(this + 7), Msg: 0x36Au, wParam: 0, lParam: v5) != 0 )
        continue;
    }
    v12 = 0;
  }
  while ( 1 )
  {
    Thread = AfxGetThread();
    if ( (*(int (__thiscall **)(struct CWinThread *))(*(_DWORD *)Thread + 100))(a1: Thread) == 0 )
    {
      AfxPostQuitMessage(nExitCode: 0);
      return -1;
    }
    if ( v10 != 0 )
    {
      message = v4->message;
      if ( message == 280 || message == 260 )
      {
        CWnd::ShowWindow((CWnd *)this, a2: 1);
        UpdateWindow(hWnd: *(this + 7));
        v10 = 0;
      }
    }
    if ( (*((int (__thiscall **)(HWND *))*this + 30))(a1: this) == 0 )
      break;
    v8 = AfxGetThread();
    if ( (*(int (__thiscall **)(struct CWinThread *, struct tagMSG *))(*(_DWORD *)v8 + 108))(a1: v8, a2: v4) != 0 )
    {
      v12 = 1;
      lParam = 0;
    }
    if ( !PeekMessageA(lpMsg: v4, hWnd: nullptr, wMsgFilterMin: 0, wMsgFilterMax: 0, wRemoveMsg: 0) )
      goto LABEL_5;
  }
  *(this + 9) = (HWND)((unsigned int)*(this + 9) & 0xFFFFFFE7);
  return (int)*(this + 11);
}


/* ============================================
   Address: 0x4197AD
   Function: ?ContinueModal@CWnd@@UAEHXZ
   ============================================ */

int __thiscall CWnd::ContinueModal(CWnd *this)
{
  return *((_DWORD *)this + 9) & 0x10;
}


/* ============================================
   Address: 0x4197B4
   Function: ?EndModalLoop@CWnd@@UAEXH@Z
   ============================================ */

void __thiscall CWnd::EndModalLoop(CWnd *this, int a2)
{
  int v2; // eax

  *((_DWORD *)this + 11) = a2;
  v2 = *((_DWORD *)this + 9);
  if ( (v2 & 0x10) != 0 )
  {
    LOBYTE(v2) = v2 & 0xEF;
    *((_DWORD *)this + 9) = v2;
    PostMessageA(hWnd: *((HWND *)this + 7), Msg: 0, wParam: 0, lParam: 0);
  }
}


/* ============================================
   Address: 0x4197D8
   Function: ?AfxEndDeferRegisterClass@@YGHF@Z
   ============================================ */

int __stdcall AfxEndDeferRegisterClass(char a1)
{
  int v1; // edi
  struct AFX_MODULE_STATE *ModuleState; // esi
  WNDCLASSA WndClass; // [esp+8h] [ebp-28h] BYREF

  v1 = 0;
  memset(a1: &WndClass, Val: 0, Size: sizeof(WndClass));
  WndClass.lpfnWndProc = DefWindowProcA;
  WndClass.hInstance = *((HINSTANCE *)AfxGetModuleState() + 2);
  WndClass.hCursor = (HCURSOR)dword_42F8C0;
  ModuleState = AfxGetModuleState();
  if ( (a1 & 1) != 0 )
  {
    WndClass.style = 11;
    WndClass.lpszClassName = "AfxWnd42s";
    v1 = AfxRegisterClass(lpWndClass: &WndClass);
    if ( v1 != 0 )
      *((_BYTE *)ModuleState + 24) |= 1u;
  }
  else if ( (a1 & 0x20) != 0 )
  {
    LOBYTE(WndClass.style) |= 0x8Bu;
    WndClass.lpszClassName = "AfxOleControl42s";
    v1 = AfxRegisterClass(lpWndClass: &WndClass);
    if ( v1 != 0 )
      *((_BYTE *)ModuleState + 24) |= 0x20u;
  }
  else if ( (a1 & 2) != 0 )
  {
    WndClass.style = 0;
    WndClass.lpszClassName = "AfxControlBar42s";
    WndClass.hbrBackground = (HBRUSH)16;
    v1 = AfxRegisterClass(lpWndClass: &WndClass);
    if ( v1 != 0 )
      *((_BYTE *)ModuleState + 24) |= 2u;
  }
  else if ( (a1 & 4) != 0 )
  {
    WndClass.hbrBackground = nullptr;
    WndClass.style = 8;
    v1 = unknown_libname_15(lpWndClass: &WndClass, a2: (int)"AfxMDIFrame42s", a3: 31233);
    if ( v1 != 0 )
      *((_BYTE *)ModuleState + 24) |= 4u;
  }
  else if ( (a1 & 8) != 0 )
  {
    WndClass.style = 11;
    WndClass.hbrBackground = (HBRUSH)6;
    v1 = unknown_libname_15(lpWndClass: &WndClass, a2: (int)"AfxFrameOrView42s", a3: 31234);
    if ( v1 != 0 )
      *((_BYTE *)ModuleState + 24) |= 8u;
  }
  else if ( (a1 & 0x10) != 0 )
  {
    InitCommonControls();
    *((_BYTE *)ModuleState + 24) |= 0x10u;
    return 1;
  }
  return v1;
}


/* ============================================
   Address: 0x419912
   Function: unknown_libname_15
   ============================================ */

// MFC 3.1-14.0 32bit
int __stdcall unknown_libname_15(WNDCLASSA *lpWndClass, const CHAR *a2, unsigned __int16 a3)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  HICON IconA; // eax

  lpWndClass->lpszClassName = a2;
  ModuleState = AfxGetModuleState();
  IconA = LoadIconA(hInstance: *((HINSTANCE *)ModuleState + 3), lpIconName: (LPCSTR)a3);
  lpWndClass->hIcon = IconA;
  if ( IconA == nullptr )
    lpWndClass->hIcon = LoadIconA(hInstance: nullptr, lpIconName: (LPCSTR)0x7F00);
  return AfxRegisterClass(lpWndClass);
}


/* ============================================
   Address: 0x419953
   Function: sub_419953
   ============================================ */

int sub_419953()
{
  return 0;
}


/* ============================================
   Address: 0x419956
   Function: sub_419956
   ============================================ */

int sub_419956()
{
  return 1;
}


/* ============================================
   Address: 0x41995A
   Function: ?IsTracking@CFrameWnd@@QBEHXZ
   ============================================ */

BOOL __thiscall CFrameWnd::IsTracking(CFrameWnd *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 36);
  return v1 != 0 && v1 != 57346 && v1 != 57345;
}


/* ============================================
   Address: 0x419979
   Function: ?SubclassWindow@CWnd@@QAEHPAUHWND__@@@Z
   ============================================ */

int __thiscall CWnd::SubclassWindow(CWnd *this, HWND hWnd)
{
  int result; // eax
  int v4; // esi
  LONG *v5; // esi
  struct CWnd *(__userpurge *AfxWndProc)@<eax>(int@<ebx>, int@<edi>, int@<esi>, HWND, CException *, unsigned int, int); // eax
  LONG v7; // eax

  result = CWnd::Attach(this, a2: hWnd);
  if ( result != 0 )
  {
    v4 = *(_DWORD *)this;
    (*(void (__thiscall **)(CWnd *))(*(_DWORD *)this + 88))(a1: this);
    v5 = (LONG *)(*(int (__thiscall **)(CWnd *))(v4 + 136))(a1: this);
    AfxWndProc = AfxGetAfxWndProc();
    v7 = SetWindowLongA(hWnd, nIndex: -4, dwNewLong: (LONG)AfxWndProc);
    if ( *v5 == 0 )
      *v5 = v7;
    return 1;
  }
  return result;
}


/* ============================================
   Address: 0x4199BC
   Function: ?OnAmbientProperty@CWnd@@UAEHPAVCOleControlSite@@JPAUtagVARIANT@@@Z
   ============================================ */

int __thiscall CWnd::OnAmbientProperty(CWnd *this, struct COleControlSite *a2, int a3, struct tagVARIANT *a4)
{
  return (*(int (__thiscall **)(_DWORD, struct COleControlSite *, int, struct tagVARIANT *))(**((_DWORD **)this + 13)
                                                                                           + 92))(
           a1: *((_DWORD *)this + 13),
           a2,
           a3,
           a4);
}


/* ============================================
   Address: 0x4199D3
   Function: ?GetDlgItem@CWnd@@QBEPAV1@H@Z
   ============================================ */

struct CWnd *__thiscall CWnd::GetDlgItem(CWnd *this, int nIDDlgItem)
{
  int v2; // eax
  HWND DlgItem; // eax

  v2 = *((_DWORD *)this + 13);
  if ( v2 != 0 )
    return (*(struct CWnd *(__thiscall **)(int, int))(*(_DWORD *)v2 + 120))(a1: v2, a2: nIDDlgItem);
  DlgItem = GetDlgItem(hDlg: *((HWND *)this + 7), nIDDlgItem);
  return CWnd::FromHandle(a1: DlgItem);
}


/* ============================================
   Address: 0x4199FD
   Function: ?GetDlgItem@CWnd@@QBEXHPAPAUHWND__@@@Z
   ============================================ */

void __thiscall CWnd::GetDlgItem(CWnd *this, int nIDDlgItem, HWND *a3)
{
  int v3; // eax

  v3 = *((_DWORD *)this + 13);
  if ( v3 != 0 )
    (*(void (__thiscall **)(int, int, HWND *))(*(_DWORD *)v3 + 116))(a1: v3, a2: nIDDlgItem, a3);
  else
    *a3 = GetDlgItem(hDlg: *((HWND *)this + 7), nIDDlgItem);
}


/* ============================================
   Address: 0x419A2B
   Function: ?IsDialogMessageA@CWnd@@QAEHPAUtagMSG@@@Z
   ============================================ */

int __thiscall CWnd::IsDialogMessageA(HWND *this, struct tagMSG *lpMsg)
{
  struct AFX_MODULE_STATE *ModuleState; // eax

  if ( (*((_BYTE *)this + 37) & 1) == 0 )
    return IsDialogMessageA(hDlg: *(this + 7), lpMsg);
  ModuleState = AfxGetModuleState();
  return (*(int (__thiscall **)(_DWORD, HWND *, struct tagMSG *))(**((_DWORD **)ModuleState + 1038) + 36))(
           a1: *((_DWORD *)ModuleState + 1038),
           a2: this,
           a3: lpMsg);
}


/* ============================================
   Address: 0x419A5E
   Function: ?GetStyle@CWnd@@QBEKXZ
   ============================================ */

LONG __thiscall CWnd::GetStyle(CWnd *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 14);
  if ( v1 != 0 )
    return (*(unsigned int (__thiscall **)(_DWORD))(*(_DWORD *)v1 + 120))(a1: *((_DWORD *)this + 14));
  else
    return GetWindowLongA(hWnd: *((HWND *)this + 7), nIndex: -16);
}


/* ============================================
   Address: 0x419A78
   Function: ?GetExStyle@CWnd@@QBEKXZ
   ============================================ */

LONG __thiscall CWnd::GetExStyle(CWnd *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 14);
  if ( v1 != 0 )
    return (*(unsigned int (__thiscall **)(_DWORD))(*(_DWORD *)v1 + 124))(a1: *((_DWORD *)this + 14));
  else
    return GetWindowLongA(hWnd: *((HWND *)this + 7), nIndex: -20);
}


/* ============================================
   Address: 0x419A92
   Function: ?ModifyStyleEx@CWnd@@QAEHKKI@Z
   ============================================ */

int __thiscall CWnd::ModifyStyleEx(CWnd *this, unsigned int a2, unsigned int a3, UINT a4)
{
  int v4; // eax

  v4 = *((_DWORD *)this + 14);
  if ( v4 != 0 )
    return (*(int (__thiscall **)(int, unsigned int, unsigned int, UINT))(*(_DWORD *)v4 + 132))(a1: v4, a2, a3, a4);
  else
    return CWnd::ModifyStyleEx(hWnd: *((HWND *)this + 7), a2, a3, a4);
}


/* ============================================
   Address: 0x419AC6
   Function: ?SetWindowTextA@CWnd@@QAEXPBD@Z
   ============================================ */

void __thiscall CWnd::SetWindowTextA(CWnd *this, const char *lpString)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 14);
  if ( v2 != 0 )
    (*(void (__thiscall **)(int, const char *))(*(_DWORD *)v2 + 136))(a1: v2, a2: lpString);
  else
    SetWindowTextA(hWnd: *((HWND *)this + 7), lpString);
}


/* ============================================
   Address: 0x419AED
   Function: ?SetWindowPos@CWnd@@QAEHPBV1@HHHHI@Z
   ============================================ */

int __thiscall CWnd::SetWindowPos(CWnd *this, HWND hWndInsertAfter, int X, int Y, int a5, int cy, UINT uFlags)
{
  int v7; // eax
  HWND v8; // eax

  v7 = *((_DWORD *)this + 14);
  if ( v7 != 0 )
    return (*(int (__thiscall **)(int, HWND, int, int, int, int, UINT))(*(_DWORD *)v7 + 164))(
             a1: v7,
             a2: hWndInsertAfter,
             a3: X,
             a4: Y,
             a5,
             a6: cy,
             a7: uFlags);
  v8 = hWndInsertAfter;
  if ( hWndInsertAfter != nullptr )
    v8 = *((HWND *)hWndInsertAfter + 7);
  return SetWindowPos(hWnd: *((HWND *)this + 7), hWndInsertAfter: v8, X, Y, cx: a5, cy, uFlags);
}


/* ============================================
   Address: 0x419B3C
   Function: ?ShowWindow@CWnd@@QAEHH@Z
   ============================================ */

int __thiscall CWnd::ShowWindow(CWnd *this, int nCmdShow)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 14);
  if ( v2 != 0 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 168))(a1: v2, a2: nCmdShow);
  else
    return ShowWindow(hWnd: *((HWND *)this + 7), nCmdShow);
}


/* ============================================
   Address: 0x419B63
   Function: ?IsWindowEnabled@CWnd@@QBEHXZ
   ============================================ */

int __thiscall CWnd::IsWindowEnabled(CWnd *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 14);
  if ( v1 != 0 )
    return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v1 + 172))(a1: *((_DWORD *)this + 14));
  else
    return IsWindowEnabled(hWnd: *((HWND *)this + 7));
}


/* ============================================
   Address: 0x419B7E
   Function: ?EnableWindow@CWnd@@QAEHH@Z
   ============================================ */

int __thiscall CWnd::EnableWindow(CWnd *this, BOOL bEnable)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 14);
  if ( v2 != 0 )
    return (*(int (__thiscall **)(int, BOOL))(*(_DWORD *)v2 + 176))(a1: v2, a2: bEnable);
  else
    return EnableWindow(hWnd: *((HWND *)this + 7), bEnable);
}


/* ============================================
   Address: 0x419BA5
   Function: ?SetFocus@CWnd@@QAEPAV1@XZ
   ============================================ */

struct CWnd *__thiscall CWnd::SetFocus(CWnd *this)
{
  int v1; // eax
  HWND v2; // eax

  v1 = *((_DWORD *)this + 14);
  if ( v1 != 0 )
    return (*(struct CWnd *(__thiscall **)(_DWORD))(*(_DWORD *)v1 + 180))(a1: *((_DWORD *)this + 14));
  v2 = SetFocus(hWnd: *((HWND *)this + 7));
  return CWnd::FromHandle(a1: v2);
}


/* ============================================
   Address: 0x419BC6
   Function: ?AttachControlSite@CWnd@@IAEXPAVCHandleMap@@@Z
   ============================================ */

void __thiscall CWnd::AttachControlSite(HWND *this, struct CHandleMap *a2)
{
  HWND Parent; // eax
  struct CWnd *ValueAt; // eax

  if ( this != nullptr && *(this + 14) == nullptr )
  {
    Parent = GetParent(hWnd: *(this + 7));
    ValueAt = (struct CWnd *)CMapPtrToPtr::GetValueAt(this: a2, a2: (unsigned int)Parent);
    if ( ValueAt != nullptr )
      CWnd::AttachControlSite((CWnd *)this, a2: ValueAt);
  }
}


/* ============================================
   Address: 0x419BF6
   Function: ?AttachControlSite@CWnd@@QAEXPAV1@@Z
   ============================================ */

void __thiscall CWnd::AttachControlSite(CWnd *this, struct CWnd *a2)
{
  int v3; // eax
  _DWORD *ValueAt; // eax
  int v5; // ecx

  if ( this != nullptr && *((_DWORD *)this + 14) == 0 && a2 != nullptr )
  {
    v3 = *((_DWORD *)a2 + 13);
    if ( v3 != 0 )
    {
      ValueAt = CMapPtrToPtr::GetValueAt(this: (CMapPtrToPtr *)(v3 + 32), a2: *((_DWORD *)this + 7));
      if ( ValueAt != nullptr )
      {
        v5 = ValueAt[9];
        if ( v5 != 0 && *(_DWORD **)(v5 + 56) == ValueAt )
          *(_DWORD *)(v5 + 56) = 0;
        *((_DWORD *)this + 14) = ValueAt;
        ValueAt[9] = this;
      }
    }
  }
}


/* ============================================
   Address: 0x419C3B
   Function: ??0CCmdTarget@@QAE@XZ
   ============================================ */

CCmdTarget *__thiscall CCmdTarget::CCmdTarget(CCmdTarget *this)
{
  *(_DWORD *)this = &CCmdTarget::`vftable';
  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 1;
  *((_DWORD *)this + 6) = 0;
  return this;
}


/* ============================================
   Address: 0x419C5B
   Function: sub_419C5B
   ============================================ */

CCmdTarget *__thiscall sub_419C5B(CCmdTarget *Block, char a2)
{
  CCmdTarget::~CCmdTarget(this: Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}


/* ============================================
   Address: 0x419C77
   Function: ??1CCmdTarget@@UAE@XZ
   ============================================ */

void __thiscall CCmdTarget::~CCmdTarget(CCmdTarget *this)
{
  bool v2; // zf
  char *v3; // ecx

  *(_DWORD *)this = &CCmdTarget::`vftable';
  v2 = *((_DWORD *)this + 4) == 0;
  v3 = (char *)this + 16;
  if ( !v2 )
    (*(void (__thiscall **)(char *))(*(_DWORD *)v3 + 28))(a1: v3);
  *(_DWORD *)this = &CObject::`vftable';
}


/* ============================================
   Address: 0x419CB3
   Function: ?OnCmdMsg@CCmdTarget@@UAEHIHPAXPAUAFX_CMDHANDLERINFO@@@Z
   ============================================ */

int __thiscall CCmdTarget::OnCmdMsg(
        CCmdTarget *this,
        unsigned int a2,
        unsigned int a3,
        _DWORD *Buf1,
        struct AFX_CMDHANDLERINFO *a5)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  unsigned int v8; // ebx
  _DWORD *v10; // edi
  int i; // esi
  int v12; // eax
  int j; // esi
  _DWORD *v14; // eax
  int v15; // [esp+18h] [ebp+Ch]
  void *Buf1a; // [esp+1Ch] [ebp+10h]

  if ( a3 == -2 )
  {
    ModuleState = AfxGetModuleState();
    return (*(int (__thiscall **)(_DWORD, CCmdTarget *, unsigned int, _DWORD *, struct AFX_CMDHANDLERINFO *))(**((_DWORD **)ModuleState + 1038) + 4))(
             a1: *((_DWORD *)ModuleState + 1038),
             a2: this,
             a3: a2,
             a4: Buf1,
             a5);
  }
  v8 = 0;
  if ( a3 == -3 )
  {
    v15 = 0;
    Buf1a = (void *)Buf1[12];
    v10 = (_DWORD *)(*(int (__thiscall **)(CCmdTarget *))(*(_DWORD *)this + 52))(a1: this);
    if ( v10 == nullptr )
      return v15;
    while ( 1 )
    {
      if ( v15 != 0 )
        return v15;
      for ( i = v10[1]; ; i += 12 )
      {
        v12 = *(_DWORD *)(i + 4);
        if ( v12 == 0 || *(_DWORD *)(i + 8) == 0 || v15 != 0 )
          break;
        if ( a2 != v12 )
          continue;
        if ( Buf1a != nullptr )
        {
          if ( *(_DWORD *)i != 0 && memcmp(Buf1: Buf1a, Buf2: *(const void **)i, Size: 0x10u) == 0 )
          {
LABEL_16:
            v15 = 1;
            Buf1[1] = *(_DWORD *)(i + 8);
            continue;
          }
        }
        else if ( *(_DWORD *)i == 0 )
        {
          goto LABEL_16;
        }
      }
      v10 = (_DWORD *)*v10;
      if ( v10 == nullptr )
        return v15;
    }
  }
  if ( a3 != -1 )
  {
    v8 = HIWORD(a3);
    a3 = (unsigned __int16)a3;
  }
  if ( v8 == 0 )
    v8 = 273;
  for ( j = (*(int (__thiscall **)(CCmdTarget *))(*(_DWORD *)this + 48))(a1: this); j != 0; j = *(_DWORD *)j )
  {
    v14 = unknown_libname_9(a1: *(_DWORD **)(j + 4), a2: v8, a3, a4: a2);
    if ( v14 != nullptr )
      return DispatchCmdMsg(a1: this, a2, a3, a4: v14[5], a5: Buf1, a6: v14[4], a7: a5);
  }
  return 0;
}


/* ============================================
   Address: 0x419DCB
   Function: ?DispatchCmdMsg@@YAHPAVCCmdTarget@@IHP81@AEXXZPAXIPAUAFX_CMDHANDLERINFO@@@Z
   ============================================ */

int __cdecl DispatchCmdMsg(
        int a1,
        int a2,
        int a3,
        void (__thiscall *a4)(int, _DWORD, _DWORD),
        _DWORD *a5,
        unsigned int a6,
        _DWORD *a7)
{
  BOOL v7; // ebx
  _DWORD *v9; // esi

  v7 = true;
  if ( a7 != nullptr )
  {
    *a7 = a1;
    a7[1] = a4;
    return v7;
  }
  if ( a6 > 0xC )
  {
    if ( a6 > 0x23 )
    {
      switch ( a6 )
      {
        case '&':
          a4(a1, a2: a5[1], a3: *a5);
          return v7;
        case '\'':
          return ((int (__thiscall *)(int, _DWORD, _DWORD))a4)(a1, a2: a5[1], a3: *a5);
        case '(':
          ((void (__thiscall *)(int, int, _DWORD, _DWORD))a4)(a1, a2, a3: a5[1], a4: *a5);
          return v7;
        case ')':
          return ((int (__thiscall *)(int, int, _DWORD, _DWORD))a4)(a1, a2, a3: a5[1], a4: *a5);
        case ',':
          v9 = a5;
          ((void (__thiscall *)(int, _DWORD *))a4)(a1, a2: a5);
          break;
        case '-':
          v9 = a5;
          a4(a1, a2: a5, a3: a2);
          break;
        case '.':
          ((void (__thiscall *)(int, _DWORD *))a4)(a1, a2: a5);
          return v7;
        case '/':
          return ((int (__thiscall *)(int, _DWORD *))a4)(a1, a2: a5);
        default:
          return 0;
      }
      v7 = v9[7] == 0;
      v9[7] = 0;
      return v7;
    }
    if ( a6 == 35 )
      return ((int (__thiscall *)(int))a4)(a1);
    if ( a6 == 13 )
    {
      ((void (__thiscall *)(int, int))a4)(a1, a2);
      return v7;
    }
  }
  else
  {
    if ( a6 == 12 )
    {
      ((void (__thiscall *)(int))a4)(a1);
      return v7;
    }
    if ( a6 == 2 )
      return ((int (__thiscall *)(int, int))a4)(a1, a2);
  }
  return 0;
}


/* ============================================
   Address: 0x419EFA
   Function: sub_419EFA
   ============================================ */

int __stdcall sub_419EFA(int a1)
{
  return 1;
}


/* ============================================
   Address: 0x419F00
   Function: sub_419F00
   ============================================ */

int __stdcall sub_419F00(int a1)
{
  return 0;
}


/* ============================================
   Address: 0x419F05
   Function: sub_419F05
   ============================================ */

int sub_419F05()
{
  return 0;
}


/* ============================================
   Address: 0x419F08
   Function: sub_419F08
   ============================================ */

int sub_419F08()
{
  return 0;
}


/* ============================================
   Address: 0x419F0B
   Function: ?GetTypeLib@CCmdTarget@@UAEJKPAPAUITypeLib@@@Z
   ============================================ */

int __thiscall CCmdTarget::GetTypeLib(CCmdTarget *this, unsigned int a2, struct ITypeLib **a3)
{
  return -2147312566;
}


/* ============================================
   Address: 0x419F13
   Function: ?BeginWaitCursor@CCmdTarget@@QAEXXZ
   ============================================ */

void __thiscall CCmdTarget::BeginWaitCursor(CCmdTarget *this)
{
  struct AFX_MODULE_STATE *ModuleState; // eax

  ModuleState = AfxGetModuleState();
  (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)ModuleState + 1) + 152))(a1: *((_DWORD *)ModuleState + 1), a2: 1);
}


/* ============================================
   Address: 0x419F28
   Function: ?EndWaitCursor@CCmdTarget@@QAEXXZ
   ============================================ */

void __thiscall CCmdTarget::EndWaitCursor(CCmdTarget *this)
{
  struct AFX_MODULE_STATE *ModuleState; // eax

  ModuleState = AfxGetModuleState();
  (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)ModuleState + 1) + 152))(a1: *((_DWORD *)ModuleState + 1), a2: -1);
}


/* ============================================
   Address: 0x419F3D
   Function: sub_419F3D
   ============================================ */

void *sub_419F3D()
{
  return &unk_422EF0;
}


/* ============================================
   Address: 0x419F43
   Function: sub_419F43
   ============================================ */

void *sub_419F43()
{
  return &unk_422F10;
}


/* ============================================
   Address: 0x419F49
   Function: sub_419F49
   ============================================ */

void *sub_419F49()
{
  return &unk_422F40;
}


/* ============================================
   Address: 0x419F4F
   Function: sub_419F4F
   ============================================ */

void *sub_419F4F()
{
  return &unk_422F78;
}


/* ============================================
   Address: 0x419F55
   Function: ?OnFinalRelease@CCmdTarget@@UAEXXZ
   ============================================ */

void __thiscall CCmdTarget::OnFinalRelease(CCmdTarget *this)
{
  int v2; // edi
  CTypeLibCache *v3; // eax

  AfxLockGlobals(a1: 13);
  v2 = *(_DWORD *)this;
  v3 = (CTypeLibCache *)(*(int (__thiscall **)(CCmdTarget *))(*(_DWORD *)this + 40))(a1: this);
  if ( v3 != nullptr )
    CTypeLibCache::Unlock(this: v3);
  AfxUnlockGlobals(a1: 13);
  if ( this != nullptr )
    (*(void (__thiscall **)(CCmdTarget *, int))(v2 + 4))(a1: this, a2: 1);
}


/* ============================================
   Address: 0x419F87
   Function: sub_419F87
   ============================================ */

int sub_419F87()
{
  return 1;
}


/* ============================================
   Address: 0x419F8B
   Function: sub_419F8B
   ============================================ */

int __stdcall sub_419F8B(int a1)
{
  return 0;
}


/* ============================================
   Address: 0x419F90
   Function: sub_419F90
   ============================================ */

void *sub_419F90()
{
  return &unk_422FA0;
}


/* ============================================
   Address: 0x419F96
   Function: sub_419F96
   ============================================ */

int __stdcall sub_419F96(int a1)
{
  return 0;
}


/* ============================================
   Address: 0x419F9B
   Function: sub_419F9B
   ============================================ */

int __stdcall sub_419F9B(int a1)
{
  return 0;
}


/* ============================================
   Address: 0x419FA0
   Function: sub_419FA0
   ============================================ */

void *sub_419FA0()
{
  return &unk_422FB0;
}


/* ============================================
   Address: 0x419FA6
   Function: unknown_libname_16
   ============================================ */

// MFC 3.1-14.0 32bit
int unknown_libname_16()
{
  return *((_DWORD *)AfxGetThreadState() + 49);
}


/* ============================================
   Address: 0x419FB2
   Function: ??0CCmdUI@@QAE@XZ
   ============================================ */

CCmdUI *__thiscall CCmdUI::CCmdUI(CCmdUI *this)
{
  *(_DWORD *)this = &CCmdUI::`vftable';
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 6) = 0;
  return this;
}


/* ============================================
   Address: 0x419FD8
   Function: ?Enable@CCmdUI@@UAEXH@Z
   ============================================ */

void __thiscall CCmdUI::Enable(CCmdUI *this, BOOL a2)
{
  int v3; // eax
  UINT v4; // ecx
  HWND v5; // edi
  HWND Parent; // eax
  struct CWnd *v7; // eax
  HWND v8; // ecx
  HWND NextDlgTabItem; // eax
  CWnd *v10; // eax

  v3 = *((_DWORD *)this + 3);
  if ( v3 != 0 )
  {
    if ( *((_DWORD *)this + 4) != 0 )
      return;
    v4 = a2 ? 0 : 3;
    BYTE1(v4) |= 4u;
    EnableMenuItem(hMenu: *(HMENU *)(v3 + 4), uIDEnableItem: *((_DWORD *)this + 2), uEnable: v4);
  }
  else
  {
    if ( !a2 )
    {
      v5 = *(HWND *)(*((_DWORD *)this + 5) + 28);
      if ( GetFocus() == v5 )
      {
        Parent = GetParent(hWnd: v5);
        v7 = CWnd::FromHandle(a1: Parent);
        v8 = *((HWND *)this + 5);
        if ( v8 != nullptr )
          v8 = *((HWND *)v8 + 7);
        NextDlgTabItem = GetNextDlgTabItem(hDlg: *((HWND *)v7 + 7), hCtl: v8, bPrevious: false);
        v10 = CWnd::FromHandle(a1: NextDlgTabItem);
        CWnd::SetFocus(this: v10);
      }
    }
    CWnd::EnableWindow(this: *((CWnd **)this + 5), bEnable: a2);
  }
  *((_DWORD *)this + 6) = 1;
}


/* ============================================
   Address: 0x41A068
   Function: ?SetCheck@CCmdUI@@UAEXH@Z
   ============================================ */

void __thiscall CCmdUI::SetCheck(CCmdUI *this, WPARAM wParam)
{
  int v3; // eax
  UINT v4; // ecx

  v3 = *((_DWORD *)this + 3);
  if ( v3 != 0 )
  {
    if ( *((_DWORD *)this + 4) == 0 )
    {
      v4 = wParam != 0 ? 8 : 0;
      BYTE1(v4) = 4;
      CheckMenuItem(hMenu: *(HMENU *)(v3 + 4), uIDCheckItem: *((_DWORD *)this + 2), uCheck: v4);
    }
  }
  else if ( (SendMessageA(hWnd: *(HWND *)(*((_DWORD *)this + 5) + 28), Msg: 0x87u, wParam: 0, lParam: 0) & 0x2000) != 0 )
  {
    SendMessageA(hWnd: *(HWND *)(*((_DWORD *)this + 5) + 28), Msg: 0xF1u, wParam, lParam: 0);
  }
}


/* ============================================
   Address: 0x41A0CA
   Function: ?SetRadio@CCmdUI@@UAEXH@Z
   ============================================ */

void __thiscall CCmdUI::SetRadio(CCmdUI *this, int a2)
{
  (*(void (__thiscall **)(CCmdUI *, bool))(*(_DWORD *)this + 4))(a1: this, a2: a2 != 0);
  if ( *((_DWORD *)this + 3) != 0 && *((_DWORD *)this + 4) == 0 )
  {
    if ( hBitmapChecked == nullptr )
      _AfxLoadDotBitmap();
    if ( hBitmapChecked != nullptr )
      SetMenuItemBitmaps(
        hMenu: *(HMENU *)(*((_DWORD *)this + 3) + 4),
        uPosition: *((_DWORD *)this + 2),
        uFlags: 0x400u,
        hBitmapUnchecked: nullptr,
        hBitmapChecked: hBitmapChecked);
  }
}


/* ============================================
   Address: 0x41A11C
   Function: sub_41A11C
   ============================================ */

void __thiscall sub_41A11C(UINT_PTR *this, LPCSTR lpNewItem)
{
  int v3; // eax
  UINT MenuState; // eax

  v3 = *(this + 3);
  if ( v3 != 0 )
  {
    if ( *(this + 4) == 0 )
    {
      MenuState = GetMenuState(hMenu: *(HMENU *)(v3 + 4), uId: *(this + 2), uFlags: 0x400u);
      LOWORD(MenuState) = MenuState & 0xF6FB;
      ModifyMenuA(
        hMnu: *(HMENU *)(*(this + 3) + 4),
        uPosition: *(this + 2),
        uFlags: MenuState | 0x400,
        uIDNewItem: *(this + 1),
        lpNewItem);
    }
  }
  else
  {
    AfxSetWindowText(hWnd: *(HWND *)(*(this + 5) + 28), lpString: lpNewItem);
  }
}


/* ============================================
   Address: 0x41A172
   Function: ?DoUpdate@CCmdUI@@QAEHPAVCCmdTarget@@H@Z
   ============================================ */

int __thiscall CCmdUI::DoUpdate(CCmdUI *this, struct CCmdTarget *a2, int a3)
{
  int v4; // ecx
  int v6; // eax
  int v8; // eax
  int v10; // [esp-10h] [ebp-28h]
  int v11; // [esp+Ch] [ebp-Ch] BYREF
  int v12; // [esp+14h] [ebp-4h]
  struct CCmdTarget *v13; // [esp+20h] [ebp+8h]

  v4 = *((_DWORD *)this + 1);
  if ( v4 == 0 || *((_WORD *)this + 2) == 0xFFFF )
    return 1;
  v6 = *(_DWORD *)a2;
  v10 = v4;
  *((_DWORD *)this + 6) = 0;
  v13 = *(struct CCmdTarget **)(v6 + 20);
  v12 = ((int (__thiscall *)(struct CCmdTarget *, int, int, CCmdUI *, _DWORD))v13)(
          a1: a2,
          a2: v10,
          a3: -1,
          a4: this,
          a5: 0);
  if ( a3 != 0 && *((_DWORD *)this + 6) == 0 )
  {
    v11 = 0;
    v8 = ((int (__thiscall *)(struct CCmdTarget *, _DWORD, _DWORD, CCmdUI *, int *))v13)(
           a1: a2,
           a2: *((_DWORD *)this + 1),
           a3: 0,
           a4: this,
           a5: &v11);
    (**(void (__thiscall ***)(CCmdUI *, int))this)(a1: this, a2: v8);
  }
  return v12;
}


/* ============================================
   Address: 0x41A1D9
   Function: j_?AfxThrowMemoryException@@YGXXZ
   ============================================ */

// attributes: thunk
void __stdcall __noreturn AfxThrowMemoryException()
{
  ?AfxThrowMemoryException@@YGXXZ();
}


/* ============================================
   Address: 0x41A1DE
   Function: sub_41A1DE
   ============================================ */

int sub_41A1DE()
{
  return 0;
}


/* ============================================
   Address: 0x41A1E1
   Function: ?AfxSetNewHandler@@YGP6AHI@ZP6AHI@Z@Z
   ============================================ */

int (__cdecl *__stdcall AfxSetNewHandler(int (__cdecl *a1)(unsigned int)))(unsigned int)
{
  struct AFX_MODULE_THREAD_STATE *ModuleThreadState; // eax
  int v2; // ecx

  ModuleThreadState = AfxGetModuleThreadState();
  v2 = *((_DWORD *)ModuleThreadState + 10);
  *((_DWORD *)ModuleThreadState + 10) = a1;
  return (int (__cdecl *)(unsigned int))v2;
}


/* ============================================
   Address: 0x41A1F5
   Function: ??2@YAPAXI@Z
   ============================================ */

void *__cdecl operator new(size_t Size)
{
  int v1; // esi
  void *v2; // edi

  v1 = -1;
  do
  {
    v2 = malloc(Size);
    if ( v2 != nullptr )
      break;
    if ( v1 == -1 )
      v1 = *((_DWORD *)AfxGetModuleThreadState() + 10);
  }
  while ( v1 != 0 && ((int (__cdecl *)(size_t))v1)(a1: Size) != 0 );
  return v2;
}


/* ============================================
   Address: 0x41A231
   Function: ??3@YAXPAX@Z
   ============================================ */

void __cdecl operator delete(void *Block)
{
  free(Block);
}


/* ============================================
   Address: 0x41A23C
   Function: sub_41A23C
   ============================================ */

_UNKNOWN **sub_41A23C()
{
  return &off_427754;
}


/* ============================================
   Address: 0x41A242
   Function: ??0CString@@QAE@XZ
   ============================================ */

CString *__thiscall CString::CString(CString *this)
{
  *(_DWORD *)this = *sub_41A23C();
  return this;
}


/* ============================================
   Address: 0x41A252
   Function: ?AllocBuffer@CString@@IAEXH@Z
   ============================================ */

void __thiscall CString::AllocBuffer(CString *this, int a2)
{
  void *v3; // eax
  _DWORD *v4; // eax

  if ( a2 != 0 )
  {
    v4 = operator new(Size: a2 + 13);
    *v4 = 1;
    *((_BYTE *)v4 + a2 + 12) = 0;
    v4[1] = a2;
    v4[2] = a2;
    v3 = v4 + 3;
  }
  else
  {
    v3 = *sub_41A23C();
  }
  *(_DWORD *)this = v3;
}


/* ============================================
   Address: 0x41A28C
   Function: ?Release@CString@@IAEXXZ
   ============================================ */

void __thiscall CString::Release(CString *this)
{
  if ( (_UNKNOWN *)(*(_DWORD *)this - 12) != off_427750 )
  {
    if ( InterlockedDecrement(lpAddend: (volatile LONG *)(*(_DWORD *)this - 12)) <= 0 )
      operator delete(Block: (void *)(*(_DWORD *)this - 12));
    *(_DWORD *)this = *sub_41A23C();
  }
}


/* ============================================
   Address: 0x41A2BE
   Function: ?Release@CString@@KGXPAUCStringData@@@Z
   ============================================ */

static void __stdcall CString::Release(volatile LONG *lpAddend)
{
  if ( lpAddend != (volatile LONG *)off_427750 && InterlockedDecrement(lpAddend) <= 0 )
    operator delete(Block: (void *)lpAddend);
}


/* ============================================
   Address: 0x41A2E1
   Function: ?Empty@CString@@QAEXXZ
   ============================================ */

void __thiscall CString::Empty(CString *this)
{
  if ( *(_DWORD *)(*(_DWORD *)this - 8) != 0 )
  {
    if ( *(int *)(*(_DWORD *)this - 12) < 0 )
      CString::operator=(this, lpString: byte_42F5A8);
    else
      CString::Release(this);
  }
}


/* ============================================
   Address: 0x41A2FF
   Function: ?CopyBeforeWrite@CString@@IAEXXZ
   ============================================ */

void __thiscall CString::CopyBeforeWrite(CString *this)
{
  _DWORD *v2; // esi

  v2 = *(_DWORD **)this;
  if ( *(int *)(*(_DWORD *)this - 12) > 1 )
  {
    CString::Release(this);
    CString::AllocBuffer(this, a2: *(v2 - 2));
    memcpy(a1: *(void **)this, Src: v2, Size: *(v2 - 2) + 1);
  }
}


/* ============================================
   Address: 0x41A32D
   Function: ?AllocBeforeWrite@CString@@IAEXH@Z
   ============================================ */

void __thiscall CString::AllocBeforeWrite(CString *this, int a2)
{
  if ( *(int *)(*(_DWORD *)this - 12) > 1 || a2 > *(_DWORD *)(*(_DWORD *)this - 4) )
  {
    CString::Release(this);
    CString::AllocBuffer(this, a2);
  }
}


/* ============================================
   Address: 0x41A356
   Function: ??1CString@@QAE@XZ
   ============================================ */

void __thiscall CString::~CString(CString *this)
{
  if ( (_UNKNOWN *)(*(_DWORD *)this - 12) != off_427750
    && InterlockedDecrement(lpAddend: (volatile LONG *)(*(_DWORD *)this - 12)) <= 0 )
  {
    operator delete(Block: (void *)(*(_DWORD *)this - 12));
  }
}


/* ============================================
   Address: 0x41A37F
   Function: ?AssignCopy@CString@@IAEXHPBD@Z
   ============================================ */

void __thiscall CString::AssignCopy(CString *this, size_t Size, const char *Src)
{
  CString::AllocBeforeWrite(this, a2: Size);
  memcpy(a1: *(void **)this, Src, Size);
  *(_DWORD *)(*(_DWORD *)this - 8) = Size;
  *(_BYTE *)(*(_DWORD *)this + Size) = 0;
}


/* ============================================
   Address: 0x41A3AC
   Function: ??4CString@@QAEABV0@PBD@Z
   ============================================ */

CString *__thiscall CString::operator=(CString *this, LPCSTR lpString)
{
  size_t v3; // eax

  if ( lpString != nullptr )
    v3 = lstrlenA(lpString);
  else
    v3 = 0;
  CString::AssignCopy(this, Size: v3, Src: lpString);
  return this;
}


/* ============================================
   Address: 0x41A3D3
   Function: ?GetBuffer@CString@@QAEPADH@Z
   ============================================ */

char *__thiscall CString::GetBuffer(CString *this, int a2)
{
  int v3; // ecx
  int v4; // eax
  volatile LONG *v5; // ebx
  int v6; // edi

  v3 = a2;
  v4 = *(_DWORD *)this;
  v5 = (volatile LONG *)(*(_DWORD *)this - 12);
  if ( *(int *)v5 > 1 || a2 > *(_DWORD *)(v4 - 4) )
  {
    v6 = *(_DWORD *)(v4 - 8);
    if ( a2 < v6 )
      v3 = *(_DWORD *)(v4 - 8);
    CString::AllocBuffer(this, a2: v3);
    memcpy(a1: *(void **)this, Src: (const void *)(v5 + 3), Size: v6 + 1);
    *(_DWORD *)(*(_DWORD *)this - 8) = v6;
    CString::Release(lpAddend: v5);
  }
  return *(char **)this;
}


/* ============================================
   Address: 0x41A422
   Function: ?ReleaseBuffer@CString@@QAEXH@Z
   ============================================ */

void __thiscall CString::ReleaseBuffer(CString *this, int a2)
{
  int v3; // eax

  CString::CopyBeforeWrite(this);
  v3 = a2;
  if ( a2 == -1 )
    v3 = lstrlenA(lpString: *(LPCSTR *)this);
  *(_DWORD *)(*(_DWORD *)this - 8) = v3;
  *(_BYTE *)(*(_DWORD *)this + v3) = 0;
}


/* ============================================
   Address: 0x41A44A
   Function: ?GetBufferSetLength@CString@@QAEPADH@Z
   ============================================ */

char *__thiscall CString::GetBufferSetLength(CString *this, int a2)
{
  CString::GetBuffer(this, a2);
  *(_DWORD *)(*(_DWORD *)this - 8) = a2;
  *(_BYTE *)(*(_DWORD *)this + a2) = 0;
  return *(char **)this;
}


/* ============================================
   Address: 0x41A46A
   Function: ?_mbstowcsz@@YAHPAGPBDI@Z
   ============================================ */

int __cdecl _mbstowcsz(LPWSTR lpWideCharStr, LPCCH lpMultiByteStr, unsigned int cchWideChar)
{
  int result; // eax

  if ( cchWideChar == 0 && lpWideCharStr != nullptr )
    return 0;
  result = MultiByteToWideChar(CodePage: 0, dwFlags: 0, lpMultiByteStr, cbMultiByte: -1, lpWideCharStr, cchWideChar);
  if ( result > 0 )
    lpWideCharStr[result - 1] = 0;
  return result;
}


/* ============================================
   Address: 0x41A49F
   Function: ?LoadStringA@CString@@QAEHI@Z
   ============================================ */

BOOL __thiscall CString::LoadStringA(CString *this, UINT uID)
{
  int v2; // edi
  unsigned int v4; // edi
  CHAR *Buffer; // eax
  int v6; // ebx
  CHAR String[256]; // [esp+8h] [ebp-104h] BYREF
  CString *v8; // [esp+108h] [ebp-4h]

  v8 = this;
  v2 = AfxLoadString(uID, lpBuffer: String, cchBufferMax: 0x100u);
  if ( (unsigned int)(256 - v2) <= 2 )
  {
    v4 = 256;
    do
    {
      v4 += 256;
      Buffer = CString::GetBuffer(this: v8, a2: v4 - 1);
      v6 = AfxLoadString(uID, lpBuffer: Buffer, cchBufferMax: v4);
    }
    while ( (int)(v4 - v6) <= 2 );
    CString::ReleaseBuffer(this: v8, a2: -1);
    return v6 > 0;
  }
  else
  {
    CString::operator=(this: v8, lpString: String);
    return v2 > 0;
  }
}


/* ============================================
   Address: 0x41A523
   Function: ?AfxLoadString@@YGHIPADI@Z
   ============================================ */

int __stdcall AfxLoadString(UINT uID, LPSTR lpBuffer, unsigned int cchBufferMax)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  int result; // eax

  ModuleState = AfxGetModuleState();
  result = LoadStringA(hInstance: *((HINSTANCE *)ModuleState + 3), uID, lpBuffer, cchBufferMax);
  if ( result == 0 )
    *lpBuffer = 0;
  return result;
}


/* ============================================
   Address: 0x41A54A
   Function: ?AfxExtractSubString@@YGHAAVCString@@PBDHD@Z
   ============================================ */

int __stdcall AfxExtractSubString(struct CString *a1, const char *Str, int a3, char a4)
{
  const unsigned __int8 *v4; // esi
  int v5; // ebx
  unsigned __int8 *v6; // eax
  int v7; // eax
  unsigned __int8 *v8; // eax
  int v9; // eax
  char *BufferSetLength; // eax
  size_t v12; // [esp-4h] [ebp-10h]

  v4 = (const unsigned __int8 *)Str;
  if ( Str == nullptr )
    return 0;
  v5 = a3 - 1;
  if ( a3 != 0 )
  {
    while ( 1 )
    {
      v6 = _mbschr(Str: v4, C: a4);
      if ( v6 == nullptr )
        break;
      v4 = v6 + 1;
      v7 = v5--;
      if ( v7 == 0 )
        goto LABEL_5;
    }
    CString::Empty(this: a1);
    return 0;
  }
LABEL_5:
  v8 = _mbschr(Str: v4, C: a4);
  if ( v8 != nullptr )
    v9 = v8 - v4;
  else
    v9 = lstrlenA(lpString: (LPCSTR)v4);
  v12 = v9;
  BufferSetLength = CString::GetBufferSetLength(this: a1, a2: v9);
  memcpy(a1: BufferSetLength, Src: v4, Size: v12);
  return 1;
}


/* ============================================
   Address: 0x41A5C2
   Function: sub_41A5C2
   ============================================ */

_UNKNOWN **sub_41A5C2()
{
  return &off_4230D0;
}


/* ============================================
   Address: 0x41A5C8
   Function: ?Run@CWinApp@@UAEHXZ
   ============================================ */

int __thiscall CWinApp::Run(CWinApp *this)
{
  if ( *((_DWORD *)this + 7) == 0 && AfxOleGetUserCtrl() != 0 )
    AfxPostQuitMessage(nExitCode: 0);
  return CWinThread::Run(this);
}


/* ============================================
   Address: 0x41A5EA
   Function: sub_41A5EA
   ============================================ */

int __thiscall sub_41A5EA(_DWORD *this, int a2, int a3)
{
  HWND *MainWnd; // esi

  MainWnd = (HWND *)AfxGetMainWnd();
  *(this + 33) = 0;
  PostMessageA(hWnd: MainWnd[7], Msg: 0x36Au, wParam: 0, lParam: 0);
  return (*((int (__thiscall **)(HWND *, int, int))*MainWnd + 29))(a1: MainWnd, a2, a3);
}


/* ============================================
   Address: 0x41A621
   Function: ?ProcessWndProcException@CWinApp@@UAEJPAVCException@@PBUtagMSG@@@Z
   ============================================ */

int __thiscall CWinApp::ProcessWndProcException(CWinApp *this, struct CException *a2, const struct tagMSG *a3)
{
  int v3; // ebx
  int v4; // edi

  if ( a3->message == 1 || a3->message == 15 )
    return unknown_libname_17(a1: a2, a2: a3);
  v3 = 0;
  v4 = 61704;
  if ( a3->message == 273 )
  {
    if ( a3->lParam == 0 )
      v4 = 61705;
    v3 = 1;
  }
  if ( CObject::IsKindOf(this: a2, a2: (const struct CRuntimeClass *)&off_423BE0) != 0 )
  {
    (*(void (__thiscall **)(struct CException *, int, int))(*(_DWORD *)a2 + 24))(a1: a2, a2: 4144, a3: v4);
  }
  else if ( CObject::IsKindOf(this: a2, a2: (const struct CRuntimeClass *)&off_423300) == 0 )
  {
    (*(void (__thiscall **)(struct CException *, int, int))(*(_DWORD *)a2 + 24))(a1: a2, a2: 16, a3: v4);
  }
  return v3;
}


/* ============================================
   Address: 0x41A698
   Function: ?OnIdle@CWinApp@@UAEHJ@Z
   ============================================ */

BOOL __thiscall CWinApp::OnIdle(CWinApp *this, int a2)
{
  int v2; // edi
  int v4; // ecx
  int v5; // eax

  v2 = a2;
  if ( a2 > 0 )
  {
    if ( a2 == 1 )
      CWinThread::OnIdle(this, a2: 1);
  }
  else
  {
    CWinThread::OnIdle(this, a2);
    v4 = *((_DWORD *)this + 32);
    a2 = 0;
    if ( v4 != 0 )
      a2 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 24))(a1: v4);
    while ( a2 != 0 )
    {
      v5 = (*(int (__thiscall **)(_DWORD, int *))(**((_DWORD **)this + 32) + 28))(a1: *((_DWORD *)this + 32), &a2);
      (*(void (__thiscall **)(int))(*(_DWORD *)v5 + 144))(a1: v5);
    }
  }
  return v2 < 1;
}


/* ============================================
   Address: 0x41A6FE
   Function: ?DevModeChange@CWinApp@@QAEXPAD@Z
   ============================================ */

void __thiscall CWinApp::DevModeChange(HGLOBAL *this, char *lpString2)
{
  const CHAR *v3; // eax
  SIZE_T v4; // eax
  HGLOBAL v5; // eax
  struct _devicemodeA *v6; // eax
  HANDLE phPrinter; // [esp+Ch] [ebp-4h] BYREF

  if ( *(this + 38) != nullptr )
  {
    v3 = (const CHAR *)GlobalLock(hMem: *(this + 38));
    if ( lstrcmpA(lpString1: &v3[*((unsigned __int16 *)v3 + 1)], lpString2) == 0
      && OpenPrinterA(pPrinterName: lpString2, &phPrinter, pDefault: nullptr) )
    {
      if ( *(this + 37) != nullptr )
        AfxGlobalFree(hMem: *(this + 37));
      v4 = DocumentPropertiesA(
             hWnd: nullptr,
             hPrinter: phPrinter,
             pDeviceName: lpString2,
             pDevModeOutput: nullptr,
             pDevModeInput: nullptr,
             fMode: 0);
      v5 = GlobalAlloc(uFlags: 0x42u, dwBytes: v4);
      *(this + 37) = v5;
      v6 = (struct _devicemodeA *)GlobalLock(hMem: v5);
      if ( DocumentPropertiesA(
             hWnd: nullptr,
             hPrinter: phPrinter,
             pDeviceName: lpString2,
             pDevModeOutput: v6,
             pDevModeInput: nullptr,
             fMode: 2u) != 1 )
      {
        AfxGlobalFree(hMem: *(this + 37));
        *(this + 37) = nullptr;
      }
      ClosePrinter(hPrinter: phPrinter);
    }
  }
}


/* ============================================
   Address: 0x41A7AB
   Function: ?AfxGetThread@@YGPAVCWinThread@@XZ
   ============================================ */

struct CWinThread *__stdcall AfxGetThread()
{
  struct CWinThread *result; // eax

  result = *((struct CWinThread **)AfxGetModuleThreadState() + 1);
  if ( result == nullptr )
    return *((struct CWinThread **)AfxGetModuleState() + 1);
  return result;
}


/* ============================================
   Address: 0x41A7C0
   Function: ?AfxInitThread@@YGXXZ
   ============================================ */

void __stdcall AfxInitThread()
{
  struct _AFX_THREAD_STATE *ThreadState; // esi
  DWORD CurrentThreadId; // eax
  struct CNoTrackObject *Data; // esi
  struct AFX_MODULE_STATE *ModuleState; // eax

  if ( *((_BYTE *)AfxGetModuleState() + 20) == 0 )
  {
    ThreadState = AfxGetThreadState();
    CurrentThreadId = GetCurrentThreadId();
    *((_DWORD *)ThreadState + 12) = SetWindowsHookExA(
                                      idHook: -1,
                                      lpfn: _AfxMsgFilterHook,
                                      hmod: nullptr,
                                      dwThreadId: CurrentThreadId);
    Data = CProcessLocalObject::GetData(
             this: (CProcessLocalObject *)&dword_42F878,
             a2: CProcessLocal<_AFX_CTL3D_STATE>::CreateObject);
    if ( *((_DWORD *)Data + 5) != 0 )
    {
      ModuleState = AfxGetModuleState();
      (*((void (__stdcall **)(_DWORD))Data + 5))(a1: *((_DWORD *)ModuleState + 2));
    }
    CThreadLocalObject::GetData(this: (CThreadLocalObject *)&unk_42F87C, a2: sub_405522);
  }
}


/* ============================================
   Address: 0x41A81F
   Function: ?Delete@CWinThread@@UAEXXZ
   ============================================ */

void __thiscall CWinThread::Delete(CWinThread *this)
{
  if ( *((_DWORD *)this + 9) != 0 && this != nullptr )
    (*(void (__thiscall **)(CWinThread *, int))(*(_DWORD *)this + 4))(a1: this, a2: 1);
}


/* ============================================
   Address: 0x41A831
   Function: sub_41A831
   ============================================ */

int sub_41A831()
{
  return 0;
}


/* ============================================
   Address: 0x41A834
   Function: ?Run@CWinThread@@UAEHXZ
   ============================================ */

int __thiscall CWinThread::Run(CWinThread *this)
{
  int v2; // edi
  int v3; // ebp
  int v5; // [esp-4h] [ebp-18h]
  int v6; // [esp+10h] [ebp-4h]

  v6 = 1;
  v2 = *(_DWORD *)this;
  v3 = 0;
LABEL_2:
  while ( v6 != 0 )
  {
    if ( PeekMessageA(
           lpMsg: (LPMSG)((char *)this + 48),
           hWnd: nullptr,
           wMsgFilterMin: 0,
           wMsgFilterMax: 0,
           wRemoveMsg: 0) )
    {
      break;
    }
    v5 = v3++;
    if ( (*(int (__thiscall **)(CWinThread *, int))(v2 + 104))(a1: this, a2: v5) == 0 )
      v6 = 0;
  }
  while ( (*(int (__thiscall **)(CWinThread *))(v2 + 100))(a1: this) != 0 )
  {
    if ( (*(int (__thiscall **)(CWinThread *, char *))(v2 + 108))(a1: this, a2: (char *)this + 48) != 0 )
    {
      v6 = 1;
      v3 = 0;
    }
    if ( !PeekMessageA(
            lpMsg: (LPMSG)((char *)this + 48),
            hWnd: nullptr,
            wMsgFilterMin: 0,
            wMsgFilterMax: 0,
            wRemoveMsg: 0) )
      goto LABEL_2;
  }
  return (*(int (__thiscall **)(CWinThread *))(v2 + 112))(a1: this);
}


/* ============================================
   Address: 0x41A8B8
   Function: ?IsIdleMessage@CWinThread@@UAEHPAUtagMSG@@@Z
   ============================================ */

BOOL __thiscall CWinThread::IsIdleMessage(CWinThread *this, struct tagMSG *a2)
{
  UINT message; // esi

  message = a2->message;
  if ( message != 512 && message != 160 )
    return message != 15 && message != 280;
  if ( *((_DWORD *)this + 23) == a2->pt.x && *((_DWORD *)this + 24) == a2->pt.y && message == *((_DWORD *)this + 25) )
    return false;
  *(POINT *)((char *)this + 92) = a2->pt;
  *((_DWORD *)this + 25) = a2->message;
  return true;
}


/* ============================================
   Address: 0x41A913
   Function: sub_41A913
   ============================================ */

int __thiscall sub_41A913(_DWORD *this)
{
  return *(this + 14);
}


/* ============================================
   Address: 0x41A917
   Function: ?OnIdle@CWinThread@@UAEHJ@Z
   ============================================ */

BOOL __thiscall CWinThread::OnIdle(CWinThread *this, int a2)
{
  HWND *v2; // edi
  struct AFX_MODULE_STATE *v3; // eax
  int i; // esi
  struct AFX_MODULE_STATE *ModuleState; // eax

  if ( a2 > 0 )
  {
    ModuleState = AfxGetModuleState();
    if ( *((_DWORD *)CThreadLocalObject::GetData(
                       this: (struct AFX_MODULE_STATE *)((char *)ModuleState + 4208),
                       a2: CThreadLocal<AFX_MODULE_THREAD_STATE>::CreateObject)
         + 4) == 0 )
    {
      AfxLockTempMaps();
      AfxUnlockTempMaps(a1: 1);
    }
  }
  else
  {
    v2 = *((HWND **)this + 7);
    if ( v2 != nullptr && v2[7] != nullptr && IsWindowVisible(hWnd: v2[7]) )
    {
      AfxCallWndProc(
        a1: 867,
        a2: (int)v2,
        a3: 1,
        a4: (struct CWnd *)v2,
        a5: v2[7],
        a6: (CException *)0x363,
        a7: 1u,
        a8: 0);
      CWnd::SendMessageToDescendants(
        a1: 867,
        hWnd: v2[7],
        Msg: (CException *)0x363,
        wParam: 1u,
        lParam: 0,
        a6: 1,
        a7: 1);
    }
    v3 = AfxGetModuleState();
    for ( i = *((_DWORD *)CThreadLocalObject::GetData(
                            this: (struct AFX_MODULE_STATE *)((char *)v3 + 4208),
                            a2: CThreadLocal<AFX_MODULE_THREAD_STATE>::CreateObject)
              + 2); i != 0; i = *(_DWORD *)(i + 84) )
    {
      if ( *(_DWORD *)(i + 28) != 0 && (HWND *)i != v2 )
      {
        if ( *(_DWORD *)(i + 136) == 0 )
          CWnd::ShowWindow(this: (CWnd *)i, nCmdShow: 0);
        if ( IsWindowVisible(hWnd: *(HWND *)(i + 28)) || *(int *)(i + 136) >= 0 )
        {
          AfxCallWndProc(
            a1: 867,
            a2: (int)v2,
            a3: i,
            a4: (struct CWnd *)i,
            a5: *(HWND *)(i + 28),
            a6: (CException *)0x363,
            a7: 1u,
            a8: 0);
          CWnd::SendMessageToDescendants(
            a1: 867,
            hWnd: *(HWND *)(i + 28),
            Msg: (CException *)0x363,
            wParam: 1u,
            lParam: 0,
            a6: 1,
            a7: 1);
        }
        if ( *(int *)(i + 136) > 0 )
          CWnd::ShowWindow(this: (CWnd *)i, nCmdShow: *(_DWORD *)(i + 136));
        *(_DWORD *)(i + 136) = -1;
      }
    }
  }
  return a2 < 0;
}


/* ============================================
   Address: 0x41AA22
   Function: ?DispatchThreadMessageEx@CWinThread@@IAEHPAUtagMSG@@@Z
   ============================================ */

int __thiscall CWinThread::DispatchThreadMessageEx(CWinThread *this, struct tagMSG *a2)
{
  int i; // esi
  UINT message; // eax
  _DWORD *j; // eax

  for ( i = (*(int (__fastcall **)(CWinThread *))(*(_DWORD *)this + 48))(a1: this); i != 0; i = *(_DWORD *)i )
  {
    message = a2->message;
    if ( message >= 0xC000 )
    {
      for ( j = unknown_libname_9(a1: *(_DWORD **)(i + 4), a2: 49152, a3: 0, a4: 0);
            j != nullptr;
            j = unknown_libname_9(a1: j + 6, a2: 49152, a3: 0, a4: 0) )
      {
        if ( *(_DWORD *)j[4] == a2->message )
          goto $LDispatch$68191;
      }
    }
    else
    {
      j = unknown_libname_9(a1: *(_DWORD **)(i + 4), a2: message, a3: 0, a4: 0);
      if ( j != nullptr )
      {
$LDispatch$68191:
        ((void (__thiscall *)(CWinThread *, WPARAM, LPARAM))j[5])(a1: this, a2: a2->wParam, a3: a2->lParam);
        return 1;
      }
    }
  }
  return 0;
}


/* ============================================
   Address: 0x41AA9B
   Function: ?PreTranslateMessage@CWinThread@@UAEHPAUtagMSG@@@Z
   ============================================ */

int __thiscall CWinThread::PreTranslateMessage(CWinThread *this, struct tagMSG *a2)
{
  UINT message; // eax
  BOOL v3; // ecx
  HWND MainWnd; // eax
  struct CWnd *v5; // esi
  CWnd *v7; // eax

  if ( a2->hwnd == nullptr && CWinThread::DispatchThreadMessageEx(this, a2) != 0 )
    return 1;
  message = a2->message;
  v3 = message >= 0x100 && message <= 0x108;
  if ( v3
    || message == 513
    || message == 515
    || message == 516
    || message == 518
    || message == 519
    || message == 521
    || message == 161
    || message == 163
    || message == 164
    || message == 166
    || message == 167
    || message == 169 )
  {
    CWnd::CancelToolTips(a1: v3);
  }
  MainWnd = (HWND)AfxGetMainWnd();
  v5 = (struct CWnd *)MainWnd;
  if ( MainWnd != nullptr )
    MainWnd = *((HWND *)MainWnd + 7);
  if ( CWnd::WalkPreTranslateTree(a1: MainWnd, a2) != 0 )
    return 1;
  if ( v5 == nullptr )
    return 0;
  v7 = CWnd::FromHandle(a1: a2->hwnd);
  if ( CWnd::GetTopLevelParent(this: v7) == v5 )
    return 0;
  return (*(int (__thiscall **)(struct CWnd *, struct tagMSG *))(*(_DWORD *)v5 + 152))(a1: v5, a2);
}


/* ============================================
   Address: 0x41AB80
   Function: unknown_libname_17
   ============================================ */

// MFC 3.1-14.0 32bit
int __stdcall unknown_libname_17(int a1, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a2 + 4);
  if ( v2 == 1 )
    return -1;
  if ( v2 == 15 )
    ValidateRect(hWnd: *(HWND *)a2, lpRect: nullptr);
  return 0;
}


/* ============================================
   Address: 0x41ABA5
   Function: ?_AfxMsgFilterHook@@YGJHIJ@Z
   ============================================ */

LRESULT __stdcall _AfxMsgFilterHook(int code, WPARAM wParam, LPARAM lParam)
{
  struct CWinThread *Thread; // eax
  struct CNoTrackObject *Data; // eax

  if ( *((_BYTE *)AfxGetModuleState() + 20) == 0 && code >= 0 )
  {
    Thread = AfxGetThread();
    if ( Thread != nullptr )
      return (*(LRESULT (__thiscall **)(struct CWinThread *, int, LPARAM))(*(_DWORD *)Thread + 120))(
               a1: Thread,
               a2: code,
               a3: lParam);
  }
  Data = CThreadLocalObject::GetData(
           this: (CThreadLocalObject *)&unk_42F5B8,
           a2: CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
  return CallNextHookEx(hhk: *((HHOOK *)Data + 12), nCode: code, wParam, lParam);
}


/* ============================================
   Address: 0x41ABFD
   Function: ?ProcessMessageFilter@CWinThread@@UAEHHPAUtagMSG@@@Z
   ============================================ */

int __thiscall CWinThread::ProcessMessageFilter(CWinThread *this, int a2, struct tagMSG *a3)
{
  CWnd *v3; // eax
  CFrameWnd *TopLevelFrame; // eax
  CFrameWnd *v5; // edi
  struct CWnd *MainWnd; // eax
  UINT message; // ecx
  struct CWnd *v8; // eax
  struct CWnd *v9; // edi
  UINT v10; // eax
  struct CNoTrackObject *Data; // eax
  struct CNoTrackObject *v12; // ebx
  struct tagMSG v14; // [esp+Ch] [ebp-20h] BYREF
  CWinThread *v15; // [esp+28h] [ebp-4h]

  v15 = this;
  if ( a3 == nullptr )
    return 0;
  if ( a2 != 0 )
  {
    if ( a2 != 2 )
      return 0;
    v3 = CWnd::FromHandle(a1: a3->hwnd);
    if ( v3 != nullptr )
    {
      TopLevelFrame = CWnd::GetTopLevelFrame(this: v3);
      v5 = TopLevelFrame;
      if ( TopLevelFrame != nullptr && CFrameWnd::IsTracking(this: TopLevelFrame) && *((_DWORD *)v5 + 20) != 0 )
      {
        MainWnd = AfxGetMainWnd();
        if ( *((_DWORD *)v15 + 7) != 0 && ((message = a3->message) == 256 && a3->wParam == 13 || message == 514) )
        {
          SendMessageA(hWnd: *((HWND *)MainWnd + 7), Msg: 0x111u, wParam: 0xE146u, lParam: 0);
          return 1;
        }
      }
    }
  }
  v8 = AfxGetMainWnd();
  v9 = v8;
  if ( (unsigned int)dword_42F8D4 < 0x333 && v8 != nullptr && IsHelpKey(a1: a3) != 0 )
  {
    SendMessageA(hWnd: *((HWND *)v9 + 7), Msg: 0x111u, wParam: 0xE146u, lParam: 0);
    return 1;
  }
  if ( a2 == 0 && *((_DWORD *)v15 + 8) != 0 )
  {
    v10 = a3->message;
    if ( v10 >= 0x100 && v10 <= 0x108 )
    {
      Data = CThreadLocalObject::GetData(
               this: (CThreadLocalObject *)&unk_42F5B8,
               a2: CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
      v12 = Data;
      if ( *((_DWORD *)Data + 47) == 0 )
      {
        *((_DWORD *)Data + 47) = 1;
        v14 = *a3;
        if ( CWnd::IsWindowEnabled(this: *((CWnd **)v15 + 8)) != 0
          && (*(int (__thiscall **)(CWinThread *, struct tagMSG *))(*(_DWORD *)v15 + 96))(a1: v15, a2: &v14) != 0 )
        {
          *((_DWORD *)v12 + 47) = 0;
          return 1;
        }
        *((_DWORD *)v12 + 47) = 0;
      }
    }
  }
  return 0;
}


/* ============================================
   Address: 0x41AD44
   Function: ?IsHelpKey@@YGHPAUtagMSG@@@Z
   ============================================ */

BOOL __stdcall IsHelpKey(struct tagMSG *a1)
{
  return a1->message == 256
      && a1->wParam == 112
      && (a1->lParam & 0x40000000) == 0
      && GetKeyState(nVirtKey: 16) >= 0
      && GetKeyState(nVirtKey: 17) >= 0
      && GetKeyState(nVirtKey: 18) >= 0;
}


/* ============================================
   Address: 0x41AD8F
   Function: ?GetMainWnd@CWinThread@@UAEPAVCWnd@@XZ
   ============================================ */

struct CWnd *__thiscall CWinThread::GetMainWnd(CWinThread *this)
{
  struct CWnd *result; // eax
  HWND ActiveWindow; // eax

  result = *((struct CWnd **)this + 8);
  if ( result == nullptr )
  {
    result = *((struct CWnd **)this + 7);
    if ( result == nullptr )
    {
      ActiveWindow = GetActiveWindow();
      return CWnd::FromHandle(a1: ActiveWindow);
    }
  }
  return result;
}


/* ============================================
   Address: 0x41ADAA
   Function: ?PumpMessage@CWinThread@@UAEHXZ
   ============================================ */

BOOL __thiscall CWinThread::PumpMessage(CWinThread *this)
{
  const MSG *v2; // edi
  BOOL result; // eax

  v2 = (const MSG *)((char *)this + 48);
  result = GetMessageA(lpMsg: (LPMSG)((char *)this + 48), hWnd: nullptr, wMsgFilterMin: 0, wMsgFilterMax: 0);
  if ( result )
  {
    if ( *((_DWORD *)this + 13) != 874
      && (*(int (__thiscall **)(CWinThread *, const MSG *))(*(_DWORD *)this + 96))(a1: this, a2: v2) == 0 )
    {
      TranslateMessage(lpMsg: v2);
      DispatchMessageA(lpMsg: v2);
    }
    return true;
  }
  return result;
}


/* ============================================
   Address: 0x41ADEA
   Function: sub_41ADEA
   ============================================ */

char **sub_41ADEA()
{
  return &off_423B98;
}


/* ============================================
   Address: 0x41ADF0
   Function: ?IsKindOf@CObject@@QBEHPBUCRuntimeClass@@@Z
   ============================================ */

int __thiscall CObject::IsKindOf(CObject *this, const struct CRuntimeClass *a2)
{
  CRuntimeClass *v2; // eax

  v2 = (CRuntimeClass *)(**(int (__thiscall ***)(CObject *))this)(a1: this);
  return CRuntimeClass::IsDerivedFrom(this: v2, a2);
}


/* ============================================
   Address: 0x41AE02
   Function: ?AfxDynamicDownCast@@YAPAVCObject@@PAUCRuntimeClass@@PAV1@@Z
   ============================================ */

struct CObject *__cdecl AfxDynamicDownCast(struct CRuntimeClass *a1, struct CObject *a2)
{
  if ( a2 != nullptr && CObject::IsKindOf(this: a2, a2: a1) != 0 )
    return a2;
  else
    return nullptr;
}


/* ============================================
   Address: 0x41AE22
   Function: ?CreateObject@CRuntimeClass@@QAEPAVCObject@@XZ
   ============================================ */

struct CObject *__thiscall CRuntimeClass::CreateObject(CRuntimeClass *this)
{
  struct CObject *result; // eax
  bool v2; // zf
  int v3; // [esp-Ch] [ebp-24h] BYREF
  CException *v4; // [esp+0h] [ebp-18h]
  int v5; // [esp+4h] [ebp-14h]
  int *v6; // [esp+8h] [ebp-10h]
  int v7; // [esp+14h] [ebp-4h]

  v4 = this;
  result = nullptr;
  v2 = *((_DWORD *)this + 3) == 0;
  v6 = &v3;
  if ( !v2 )
  {
    v5 = 0;
    v7 = 0;
    return (struct CObject *)(*((int (**)(void))this + 3))();
  }
  return result;
}


/* ============================================
   Address: 0x41AE68
   Function: ?IsDerivedFrom@CRuntimeClass@@QBEHPBU1@@Z
   ============================================ */

int __thiscall CRuntimeClass::IsDerivedFrom(CRuntimeClass *this, const struct CRuntimeClass *a2)
{
  while ( this != nullptr )
  {
    if ( this == a2 )
      return 1;
    this = *((CRuntimeClass **)this + 4);
  }
  return 0;
}


/* ============================================
   Address: 0x41AE81
   Function: ??0facet@locale@std@@IAE@I@Z
   ============================================ */

std::locale::facet *__thiscall std::locale::facet::facet(std::locale::facet *this, unsigned int a2)
{
  *(_DWORD *)this = &CException::`vftable';
  *((_DWORD *)this + 1) = a2;
  return this;
}


/* ============================================
   Address: 0x41AE93
   Function: ?Delete@CException@@QAEXXZ
   ============================================ */

void __thiscall CException::Delete(CException *this)
{
  if ( *((int *)this + 1) > 0 && this != nullptr )
    (*(void (__thiscall **)(CException *, int))(*(_DWORD *)this + 4))(a1: this, a2: 1);
}


/* ============================================
   Address: 0x41AEA5
   Function: unknown_libname_18
   ============================================ */

// MFC 3.1-14.0 32bit
int __stdcall unknown_libname_18(_BYTE *a1, int a2, _DWORD *a3)
{
  if ( a3 != nullptr )
    *a3 = 0;
  if ( a2 != 0 && a1 != nullptr )
    *a1 = 0;
  return 0;
}


/* ============================================
   Address: 0x41AEC6
   Function: ?ReportError@CException@@UAEHII@Z
   ============================================ */

int __thiscall CException::ReportError(CException *this, unsigned int a2, unsigned int a3)
{
  _BYTE v4[512]; // [esp+0h] [ebp-204h] BYREF
  unsigned int v5; // [esp+200h] [ebp-4h] BYREF

  if ( (*(int (__thiscall **)(CException *, _BYTE *, int, unsigned int *))(*(_DWORD *)this + 20))(
         a1: this,
         a2: v4,
         a3: 512,
         a4: &v5) != 0 )
    return sub_41CEA9(a1: v4, a2, a3: v5);
  if ( a3 == 0 )
    a3 = 61472;
  return AfxMessageBox(a1: a3, a2, a3: v5);
}


/* ============================================
   Address: 0x41AF1B
   Function: ??0CDialogTemplate@@QAE@PBUDLGTEMPLATE@@@Z
   ============================================ */

CDialogTemplate *__thiscall CDialogTemplate::CDialogTemplate(CDialogTemplate *this, const struct DLGTEMPLATE *Src)
{
  unsigned int TemplateSize; // eax

  if ( Src != nullptr )
  {
    TemplateSize = CDialogTemplate::GetTemplateSize(a1: Src);
    CDialogTemplate::SetTemplate(this, Src, a3: TemplateSize);
  }
  else
  {
    *(_DWORD *)this = 0;
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 2) = 0;
  }
  return this;
}


/* ============================================
   Address: 0x41AF4A
   Function: ?SetTemplate@CDialogTemplate@@IAEHPBUDLGTEMPLATE@@I@Z
   ============================================ */

int __thiscall CDialogTemplate::SetTemplate(CDialogTemplate *this, const struct DLGTEMPLATE *Src, unsigned int a3)
{
  int result; // eax
  int *v5; // edi
  int v6; // eax
  void *v7; // [esp-8h] [ebp-Ch]

  *((_DWORD *)this + 1) = a3;
  result = (int)GlobalAlloc(uFlags: 0x40u, dwBytes: a3 + 64);
  *(_DWORD *)this = result;
  if ( result != 0 )
  {
    v5 = (int *)GlobalLock(hMem: (HGLOBAL)result);
    memcpy(a1: v5, Src, Size: *((_DWORD *)this + 1));
    if ( *((_WORD *)v5 + 1) == 0xFFFF )
      v6 = v5[3];
    else
      v6 = *v5;
    v7 = *(void **)this;
    *((_DWORD *)this + 2) = (~v6 & 0x40) != 0;
    GlobalUnlock(hMem: v7);
    return 1;
  }
  return result;
}


/* ============================================
   Address: 0x41AFAA
   Function: ??1InitialThreadParam@UMSFreeVirtualProcessorRoot@details@Concurrency@@QAE@XZ
   ============================================ */

void __thiscall Concurrency::details::UMSFreeVirtualProcessorRoot::InitialThreadParam::~InitialThreadParam(
        HGLOBAL *this)
{
  if ( *this != nullptr )
    GlobalFree(hMem: *this);
}


/* ============================================
   Address: 0x41AFB8
   Function: ?Detach@?$CComPtrBase@UICustomDestinationList@@@ATL@@QAEPAUICustomDestinationList@@XZ
   ============================================ */

int __thiscall ATL::CComPtrBase<ICustomDestinationList>::Detach(int *this)
{
  int result; // eax

  result = *this;
  *this = 0;
  return result;
}


/* ============================================
   Address: 0x41AFBE
   Function: ?GetFontSizeField@CDialogTemplate@@KAPAEPBUDLGTEMPLATE@@@Z
   ============================================ */

static WORD *__cdecl CDialogTemplate::GetFontSizeField(const struct DLGTEMPLATE *a1)
{
  WORD *result; // eax
  WORD v2; // cx
  WORD v3; // cx
  __int16 v4; // cx

  if ( HIWORD(a1->style) == 0xFFFF )
    result = &a1[1].cdit;
  else
    result = (WORD *)&a1[1];
  v2 = *result;
  if ( *result == 0xFFFF )
  {
    result += 2;
  }
  else
  {
    while ( 1 )
    {
      ++result;
      if ( v2 == 0 )
        break;
      v2 = *result;
    }
  }
  v3 = *result;
  if ( *result == 0xFFFF )
  {
    result += 2;
  }
  else
  {
    while ( 1 )
    {
      ++result;
      if ( v3 == 0 )
        break;
      v3 = *result;
    }
  }
  do
    v4 = *result++;
  while ( v4 != 0 );
  return result;
}


/* ============================================
   Address: 0x41B014
   Function: ?GetTemplateSize@CDialogTemplate@@KAIPBUDLGTEMPLATE@@@Z
   ============================================ */

static int __cdecl CDialogTemplate::GetTemplateSize(const struct DLGTEMPLATE *a1)
{
  BOOL v1; // esi
  WORD *FontSizeField; // eax
  DWORD style; // ecx
  unsigned __int8 cy; // cl
  int v5; // esi
  int i; // edx
  char *v7; // eax
  char *v8; // eax
  __int16 v9; // cx
  __int16 *v10; // eax
  __int16 v11; // cx
  unsigned __int16 *v12; // eax

  v1 = HIWORD(a1->style) == 0xFFFF;
  FontSizeField = CDialogTemplate::GetFontSizeField(a1);
  if ( HIWORD(a1->style) == 0xFFFF )
    style = *(_DWORD *)&a1->y;
  else
    style = a1->style;
  if ( (style & 0x40) != 0 )
    FontSizeField += (v1 ? 3 : 1) + wcslen(String: &FontSizeField[v1 ? 3 : 1]) + 1;
  if ( v1 )
    cy = a1->cy;
  else
    cy = a1->cdit;
  if ( cy != 0 )
  {
    v5 = v1 ? 24 : 18;
    for ( i = cy; i != 0; --i )
    {
      v7 = (char *)FontSizeField + 3;
      LOBYTE(v7) = (unsigned __int8)v7 & 0xFC;
      v8 = &v7[v5];
      v9 = *(_WORD *)v8;
      if ( *(_WORD *)v8 == 0xFFFF )
      {
        v10 = (__int16 *)(v8 + 4);
      }
      else
      {
        v10 = (__int16 *)(v8 + 2);
        while ( v9 != 0 )
          v9 = *v10++;
      }
      v11 = *v10;
      if ( *v10 == -1 )
      {
        v12 = (unsigned __int16 *)(v10 + 2);
      }
      else
      {
        v12 = (unsigned __int16 *)(v10 + 1);
        while ( v11 != 0 )
          v11 = *v12++;
      }
      FontSizeField = (unsigned __int16 *)((char *)v12 + *v12 + 2);
    }
  }
  return (char *)FontSizeField - (char *)a1;
}


/* ============================================
   Address: 0x41B0CB
   Function: ?GetFont@CDialogTemplate@@SAHPBUDLGTEMPLATE@@AAVCString@@AAG@Z
   ============================================ */

static int __cdecl CDialogTemplate::GetFont(const struct DLGTEMPLATE *a1, struct CString *a2, unsigned __int16 *a3)
{
  DWORD style; // eax
  WORD *FontSizeField; // eax
  const WCHAR *v6; // esi
  CHAR *BufferSetLength; // eax

  if ( HIWORD(a1->style) == 0xFFFF )
    style = *(_DWORD *)&a1->y;
  else
    style = a1->style;
  if ( (style & 0x40) == 0 )
    return 0;
  FontSizeField = CDialogTemplate::GetFontSizeField(a1);
  *a3 = *FontSizeField;
  v6 = &FontSizeField[HIWORD(a1->style) != 0xFFFF ? 1 : 3];
  BufferSetLength = CString::GetBufferSetLength(this: a2, a2: 32);
  WideCharToMultiByte(
    CodePage: 0,
    dwFlags: 0,
    lpWideCharStr: v6,
    cchWideChar: -1,
    lpMultiByteStr: BufferSetLength,
    cbMultiByte: 32,
    lpDefaultChar: nullptr,
    lpUsedDefaultChar: nullptr);
  CString::ReleaseBuffer(this: a2, a2: -1);
  return 1;
}


/* ============================================
   Address: 0x41B13A
   Function: ?SetFont@CDialogTemplate@@QAEHPBDG@Z
   ============================================ */

int __thiscall CDialogTemplate::SetFont(CDialogTemplate *this, LPCCH lpMultiByteStr, WORD a3)
{
  bool v3; // zf
  const struct DLGTEMPLATE *v5; // ebx
  __int16 style_high; // ax
  DWORD style; // eax
  int v8; // esi
  WORD *FontSizeField; // edi
  size_t v10; // ecx
  int v11; // eax
  char *v12; // edi
  char cy; // dl
  WORD *v14; // ecx
  CDialogTemplate *v15; // esi
  void *v16; // [esp-Ch] [ebp-60h]
  WCHAR WideCharStr[32]; // [esp+4h] [ebp-50h] BYREF
  WORD *v18; // [esp+44h] [ebp-10h]
  int v19; // [esp+48h] [ebp-Ch]
  CDialogTemplate *v20; // [esp+4Ch] [ebp-8h]
  BOOL v21; // [esp+50h] [ebp-4h]
  LPCCH lpMultiByteStra; // [esp+5Ch] [ebp+8h]

  v3 = *((_DWORD *)this + 1) == 0;
  v20 = this;
  if ( v3 )
    return 0;
  v5 = (const struct DLGTEMPLATE *)GlobalLock(hMem: *(HGLOBAL *)this);
  style_high = HIWORD(v5->style);
  v21 = style_high == -1;
  if ( style_high == -1 )
    style = *(_DWORD *)&v5->y;
  else
    style = v5->style;
  v19 = style & 0x40;
  v8 = 2 * (v21 ? 3 : 1);
  if ( v21 )
    *(_DWORD *)&v5->y |= 0x40u;
  else
    v5->style |= 0x40u;
  lpMultiByteStra = (LPCCH)(v8
                          + 2
                          * MultiByteToWideChar(
                              CodePage: 0,
                              dwFlags: 0,
                              lpMultiByteStr,
                              cbMultiByte: -1,
                              lpWideCharStr: WideCharStr,
                              cchWideChar: 32));
  FontSizeField = CDialogTemplate::GetFontSizeField(a1: v5);
  v10 = 0;
  v18 = FontSizeField;
  if ( v19 != 0 )
    v10 = v8 + 2 * wcslen(String: &FontSizeField[v8 / 2u]) + 2;
  v11 = (int)FontSizeField + v10 + 3;
  LOBYTE(v11) = v11 & 0xFC;
  v19 = v11;
  v12 = (char *)((int)&lpMultiByteStra[(_DWORD)FontSizeField + 3] & 0xFFFFFFFC);
  if ( v21 )
    cy = v5->cy;
  else
    cy = v5->cdit;
  if ( lpMultiByteStra != (LPCCH)v10 && cy != 0 )
    memcpy_0(a1: v12, Src: (const void *)v11, Size: (size_t)v5 + *((_DWORD *)v20 + 1) - v11);
  v14 = v18;
  *v18 = a3;
  memcpy_0(a1: &v14[v8 / 2u], Src: WideCharStr, Size: (size_t)&lpMultiByteStra[-v8]);
  v15 = v20;
  v16 = *(void **)v20;
  *((_DWORD *)v20 + 1) += &v12[-v19];
  GlobalUnlock(hMem: v16);
  *((_DWORD *)v15 + 2) = 0;
  return 1;
}


/* ============================================
   Address: 0x41B251
   Function: ?SetSystemFont@CDialogTemplate@@QAEHG@Z
   ============================================ */

int __thiscall CDialogTemplate::SetSystemFont(CDialogTemplate *this, WORD a2)
{
  WORD v2; // bx
  const CHAR *v3; // edi
  HGDIOBJ StockObject; // eax
  HDC DC; // esi
  int DeviceCaps; // eax
  int pv[7]; // [esp+Ch] [ebp-40h] BYREF
  char v9; // [esp+28h] [ebp-24h] BYREF
  CDialogTemplate *v10; // [esp+48h] [ebp-4h]

  v10 = this;
  v2 = 10;
  v3 = "System";
  StockObject = GetStockObject(i: 17);
  if ( (StockObject != nullptr || (StockObject = GetStockObject(i: 13)) != nullptr)
    && GetObjectA(h: StockObject, c: 60, pv) != 0 )
  {
    v3 = &v9;
    DC = GetDC(hWnd: nullptr);
    if ( pv[0] < 0 )
      pv[0] = -pv[0];
    DeviceCaps = GetDeviceCaps(hdc: DC, index: 90);
    v2 = MulDiv(nNumber: pv[0], nNumerator: 72, nDenominator: DeviceCaps);
    ReleaseDC(hWnd: nullptr, hDC: DC);
  }
  if ( a2 == 0 )
    a2 = v2;
  return CDialogTemplate::SetFont(this: v10, lpMultiByteStr: v3, a3: a2);
}


/* ============================================
   Address: 0x41B2E2
   Function: ?AfxLockTempMaps@@YGXXZ
   ============================================ */

void __stdcall AfxLockTempMaps()
{
  struct AFX_MODULE_THREAD_STATE *ModuleThreadState; // eax

  ModuleThreadState = AfxGetModuleThreadState();
  ++*((_DWORD *)ModuleThreadState + 4);
}


/* ============================================
   Address: 0x41B2EB
   Function: ?AfxUnlockTempMaps@@YGHH@Z
   ============================================ */

BOOL __stdcall AfxUnlockTempMaps(int a1)
{
  struct AFX_MODULE_THREAD_STATE *ModuleThreadState; // ebx
  int v2; // eax
  int v3; // eax
  struct CWinThread *Thread; // esi
  int v5; // edi
  void (__stdcall *v6)(_DWORD, _DWORD); // eax
  struct CNoTrackObject *Data; // eax
  struct CNoTrackObject *v8; // esi
  size_t v9; // ebx
  void *v10; // eax
  struct AFX_MODULE_THREAD_STATE *v12; // [esp+Ch] [ebp-4h]

  ModuleThreadState = AfxGetModuleThreadState();
  v12 = ModuleThreadState;
  v2 = *((_DWORD *)ModuleThreadState + 4);
  if ( v2 != 0 )
  {
    v3 = v2 - 1;
    *((_DWORD *)ModuleThreadState + 4) = v3;
    if ( v3 == 0 )
    {
      Thread = AfxGetThread();
      v5 = *((_DWORD *)AfxGetModuleState() + 1);
      if ( a1 != 0 )
      {
        if ( a1 != -1 && Thread != nullptr )
        {
          v6 = *((void (__stdcall **)(_DWORD, _DWORD))Thread + 21);
          if ( v6 != nullptr )
            v6(a1: 0, a2: 0);
        }
        CGdiObject::DeleteTempMap();
        CDC::DeleteTempMap();
        CMenu::DeleteTempMap();
        CWnd::DeleteTempMap();
        CImageList::DeleteTempMap();
      }
      Data = CThreadLocalObject::GetData(
               this: (CThreadLocalObject *)&unk_42F5B8,
               a2: CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
      v8 = Data;
      if ( v5 != 0
        && (*((_DWORD *)Data + 3) == 0 || _msize(Block: *((void **)Data + 3)) < *(_DWORD *)(v5 + 184))
        && *(_DWORD *)(v5 + 184) != 0 )
      {
        v9 = 0;
        if ( *((_DWORD *)v8 + 3) != 0 )
        {
          v9 = _msize(Block: *((void **)v8 + 3));
          free(Block: *((void **)v8 + 3));
        }
        v10 = malloc(Size: *(_DWORD *)(v5 + 184));
        *((_DWORD *)v8 + 3) = v10;
        if ( v10 == nullptr && v9 != 0 )
          *((_DWORD *)v8 + 3) = malloc(Size: v9);
        ModuleThreadState = v12;
      }
    }
  }
  return *((_DWORD *)ModuleThreadState + 4) != 0;
}


/* ============================================
   Address: 0x41B3D9
   Function: ??0CHandleMap@@QAE@PAUCRuntimeClass@@IH@Z
   ============================================ */

CHandleMap *__thiscall CHandleMap::CHandleMap(CHandleMap *this, struct CRuntimeClass *a2, unsigned int a3, int a4)
{
  sub_415F85(this, a2: 10);
  sub_415F85(this: (_DWORD *)this + 7, a2: 4);
  sub_415FC8(this: (int)this + 28, a2: 7, a3: 0);
  *((_DWORD *)this + 14) = a2;
  *((_DWORD *)this + 15) = a3;
  *((_DWORD *)this + 16) = a4;
  return this;
}


/* ============================================
   Address: 0x41B435
   Function: ?FromHandle@CHandleMap@@QAEPAVCObject@@PAX@Z
   ============================================ */

struct CObject *__thiscall CHandleMap::FromHandle(CRuntimeClass **this, void *a2)
{
  struct CObject *result; // eax
  int v4; // ecx
  char *v5; // ecx
  int (__cdecl *v6)(unsigned int); // eax
  CRuntimeClass *v7; // ecx
  struct CObject **v8; // eax
  _DWORD *v9; // eax
  _DWORD v10[5]; // [esp-10h] [ebp-2Ch] BYREF
  int (__cdecl *v11)(unsigned int); // [esp+4h] [ebp-18h]
  struct CObject *Object; // [esp+8h] [ebp-14h]
  _DWORD *v13; // [esp+Ch] [ebp-10h]
  int v14; // [esp+18h] [ebp-4h]

  v13 = v10;
  v10[4] = this;
  if ( a2 == nullptr )
    return nullptr;
  result = (struct CObject *)CMapPtrToPtr::GetValueAt((CMapPtrToPtr *)this, (unsigned int)a2);
  if ( result == nullptr )
  {
    result = (struct CObject *)CMapPtrToPtr::GetValueAt(this: (CMapPtrToPtr *)(this + 7), (unsigned int)a2);
    if ( result != nullptr )
    {
      v4 = (int)*(this + 15);
      *(_DWORD *)((char *)result + v4) = a2;
      v5 = (char *)result + v4;
      if ( *(this + 16) == (CRuntimeClass *)2 )
        *((_DWORD *)v5 + 1) = a2;
    }
    else
    {
      v6 = AfxSetNewHandler(a1: AfxCriticalNewHandler);
      v7 = *(this + 14);
      v14 = 0;
      v11 = v6;
      Object = CRuntimeClass::CreateObject(this: v7);
      if ( Object == nullptr )
        AfxThrowMemoryException();
      v8 = (struct CObject **)sub_416134(this: (CMapPtrToPtr *)(this + 7), (unsigned int)a2);
      *v8 = Object;
      v14 = -1;
      AfxSetNewHandler(a1: v11);
      v9 = (_DWORD *)((char *)*(this + 15) + (_DWORD)Object);
      *v9 = a2;
      if ( *(this + 16) == (CRuntimeClass *)2 )
        v9[1] = a2;
      return Object;
    }
  }
  return result;
}


/* ============================================
   Address: 0x41B510
   Function: ?DeleteTemp@CHandleMap@@QAEXXZ
   ============================================ */

void __thiscall CHandleMap::DeleteTemp(CHandleMap *this)
{
  bool v2; // zf
  _DWORD *v3; // eax
  void *v4; // [esp+4h] [ebp-Ch] BYREF
  struct __POSITION *v5; // [esp+8h] [ebp-8h] BYREF
  void *v6; // [esp+Ch] [ebp-4h] BYREF

  v2 = *((_DWORD *)this + 10) == 0;
  v5 = (struct __POSITION *)-(*((_DWORD *)this + 10) != 0);
  if ( !v2 )
  {
    do
    {
      CMapPtrToPtr::GetNextAssoc(this: (CHandleMap *)((char *)this + 28), a2: &v5, a3: &v4, a4: &v6);
      v3 = (char *)v6 + *((_DWORD *)this + 15);
      *v3 = 0;
      if ( *((_DWORD *)this + 16) == 2 )
        v3[1] = 0;
      if ( v6 != nullptr )
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)v6 + 4))(a1: v6, a2: 1);
    }
    while ( v5 != nullptr );
  }
  sub_41600E(this: (int)this + 28);
}


/* ============================================
   Address: 0x41B571
   Function: ?UpdateSysColors@AUX_DATA@@QAEXXZ
   ============================================ */

void __thiscall AUX_DATA::UpdateSysColors(AUX_DATA *this)
{
  *((_DWORD *)this + 10) = GetSysColor(nIndex: 15);
  *((_DWORD *)this + 11) = GetSysColor(nIndex: 16);
  *((_DWORD *)this + 12) = GetSysColor(nIndex: 20);
  *((_DWORD *)this + 13) = GetSysColor(nIndex: 18);
  *((_DWORD *)this + 14) = GetSysColor(nIndex: 6);
  *((_DWORD *)this + 9) = GetSysColorBrush(nIndex: 15);
  *((_DWORD *)this + 8) = GetSysColorBrush(nIndex: 6);
}


/* ============================================
   Address: 0x41B5B5
   Function: ?UpdateSysMetrics@AUX_DATA@@QAEXXZ
   ============================================ */

void __thiscall AUX_DATA::UpdateSysMetrics(AUX_DATA *this)
{
  int SystemMetrics; // eax
  bool v3; // zf
  HDC DC; // edi

  *((_DWORD *)this + 2) = GetSystemMetrics(nIndex: 11);
  SystemMetrics = GetSystemMetrics(nIndex: 12);
  v3 = *((_DWORD *)this + 26) == 0;
  *((_DWORD *)this + 3) = SystemMetrics;
  if ( v3 )
    AfxEnableWin31Compatibility();
  else
    AfxEnableWin40Compatibility();
  DC = GetDC(hWnd: nullptr);
  *((_DWORD *)this + 6) = GetDeviceCaps(hdc: DC, index: 88);
  *((_DWORD *)this + 7) = GetDeviceCaps(hdc: DC, index: 90);
  ReleaseDC(hWnd: nullptr, hDC: DC);
}


/* ============================================
   Address: 0x41B60D
   Function: ?DeleteTempMap@CMenu@@SGXXZ
   ============================================ */

static void __stdcall CMenu::DeleteTempMap()
{
  CHandleMap *v0; // eax

  v0 = afxMapHMENU(Block: nullptr);
  if ( v0 != nullptr )
    CHandleMap::DeleteTemp(this: v0);
}


/* ============================================
   Address: 0x41B621
   Function: ?afxMapHMENU@@YAPAVCHandleMap@@H@Z
   ============================================ */

struct CHandleMap *__cdecl afxMapHMENU(void *Block)
{
  struct AFX_MODULE_THREAD_STATE *ModuleThreadState; // esi
  int (__cdecl *v2)(unsigned int); // ebx
  CHandleMap *v3; // ecx
  CHandleMap *v4; // eax

  ModuleThreadState = AfxGetModuleThreadState();
  if ( *((_DWORD *)ModuleThreadState + 6) == 0 && Block != nullptr )
  {
    v2 = AfxSetNewHandler(a1: AfxCriticalNewHandler);
    v3 = (CHandleMap *)operator new(Size: 0x44u);
    if ( v3 != nullptr )
      v4 = CHandleMap::CHandleMap(this: v3, a2: (struct CRuntimeClass *)&off_423CF8, a3: 4u, a4: 1);
    else
      v4 = nullptr;
    *((_DWORD *)ModuleThreadState + 6) = v4;
    AfxSetNewHandler(a1: v2);
  }
  return *((struct CHandleMap **)ModuleThreadState + 6);
}


/* ============================================
   Address: 0x41B691
   Function: ?FromHandle@CMenu@@SGPAV1@PAUHMENU__@@@Z
   ============================================ */

static struct CMenu *__stdcall CMenu::FromHandle(HMENU a1)
{
  CRuntimeClass **v1; // eax

  v1 = (CRuntimeClass **)afxMapHMENU(Block: (void *)1);
  return CHandleMap::FromHandle(this: v1, a2: a1);
}


/* ============================================
   Address: 0x41B6A7
   Function: ?FromHandlePermanent@CMenu@@SGPAV1@PAUHMENU__@@@Z
   ============================================ */

static struct CMenu *__stdcall CMenu::FromHandlePermanent(HMENU a1)
{
  CMapPtrToPtr *v1; // ecx
  struct CMenu *result; // eax

  v1 = afxMapHMENU(Block: nullptr);
  result = nullptr;
  if ( v1 != nullptr )
    return (struct CMenu *)CMapPtrToPtr::GetValueAt(this: v1, a2: (unsigned int)a1);
  return result;
}


/* ============================================
   Address: 0x41B6C3
   Function: sub_41B6C3
   ============================================ */

int __thiscall sub_41B6C3(unsigned int *this)
{
  int v2; // edi
  struct CHandleMap *v3; // eax

  v2 = *(this + 1);
  if ( v2 != 0 )
  {
    v3 = afxMapHMENU(Block: nullptr);
    if ( v3 != nullptr )
      sub_416184(this: v3, a2: *(this + 1));
  }
  *(this + 1) = 0;
  return v2;
}


/* ============================================
   Address: 0x41B6ED
   Function: sub_41B6ED
   ============================================ */

BOOL __thiscall sub_41B6ED(unsigned int *this)
{
  HMENU v2; // eax

  if ( *(this + 1) == 0 )
    return false;
  v2 = (HMENU)sub_41B6C3(this);
  return DestroyMenu(hMenu: v2);
}


/* ============================================
   Address: 0x41B703
   Function: nullsub_11
   ============================================ */

void __stdcall nullsub_11(int a1)
{
  ;
}


/* ============================================
   Address: 0x41B706
   Function: nullsub_12
   ============================================ */

void __stdcall nullsub_12(int a1)
{
  ;
}


/* ============================================
   Address: 0x41B709
   Function: ?AfxFullPath@@YGHPADPBD@Z
   ============================================ */

int __stdcall AfxFullPath(LPSTR lpBuffer, LPCSTR lpFileName)
{
  CHAR *v2; // edi
  HANDLE FirstFileA; // eax
  struct _WIN32_FIND_DATAA FindFileData; // [esp+8h] [ebp-158h] BYREF
  DWORD MaximumComponentLength; // [esp+148h] [ebp-18h] BYREF
  LPSTR FilePart; // [esp+14Ch] [ebp-14h] BYREF
  DWORD FileSystemFlags; // [esp+150h] [ebp-10h] BYREF
  int v9; // [esp+15Ch] [ebp-4h]

  v2 = lpBuffer;
  if ( GetFullPathNameA(lpFileName, nBufferLength: 0x104u, lpBuffer, lpFilePart: &FilePart) == 0 )
  {
    lstrcpynA(lpString1: v2, lpString2: lpFileName, iMaxLength: 260);
    return 0;
  }
  CString::CString(this: (CString *)&lpBuffer);
  v9 = 0;
  AfxGetRoot(lpString2: v2, a2: (struct CString *)&lpBuffer);
  if ( !GetVolumeInformationA(
          lpRootPathName: lpBuffer,
          lpVolumeNameBuffer: nullptr,
          nVolumeNameSize: 0,
          lpVolumeSerialNumber: nullptr,
          lpMaximumComponentLength: &MaximumComponentLength,
          lpFileSystemFlags: &FileSystemFlags,
          lpFileSystemNameBuffer: nullptr,
          nFileSystemNameSize: 0) )
  {
    v9 = -1;
    CString::~CString(this: (CString *)&lpBuffer);
    return 0;
  }
  if ( (FileSystemFlags & 2) == 0 )
    CharUpperA(lpsz: v2);
  if ( (FileSystemFlags & 4) == 0 )
  {
    FirstFileA = FindFirstFileA(lpFileName, lpFindFileData: &FindFileData);
    if ( FirstFileA != (HANDLE)-1 )
    {
      FindClose(hFindFile: FirstFileA);
      lstrcpyA(lpString1: FilePart, lpString2: FindFileData.cFileName);
    }
  }
  v9 = -1;
  CString::~CString(this: (CString *)&lpBuffer);
  return 1;
}


/* ============================================
   Address: 0x41B7E2
   Function: ?AfxGetRoot@@YGXPBDAAVCString@@@Z
   ============================================ */

void __stdcall AfxGetRoot(LPCSTR lpString2, struct CString *a2)
{
  char *Buffer; // edi
  unsigned __int8 v3; // cl
  unsigned __int8 *i; // eax
  unsigned __int8 v5; // cl
  unsigned __int8 *j; // eax
  unsigned __int8 v7; // cl
  unsigned __int8 v8; // cl
  unsigned __int8 v9; // cl

  Buffer = CString::GetBuffer(this: a2, a2: 260);
  memset(a1: Buffer, Val: 0, Size: 0x104u);
  lstrcpynA(lpString1: Buffer, lpString2, iMaxLength: 260);
  v3 = *Buffer;
  for ( i = (unsigned __int8 *)Buffer; v3 != 0; v3 = *i )
  {
    if ( v3 == 92 || v3 == 47 )
    {
      v5 = i[1];
      if ( v5 == 92 || v5 == 47 )
        break;
    }
    i = _mbsinc(Ptr: i);
  }
  if ( *i != 0 )
  {
    for ( j = i + 2; ; j = _mbsinc(Ptr: j) )
    {
      v7 = *j;
      if ( *j == 0 || v7 == 92 || v7 == 47 )
        break;
    }
    if ( *j == 0 )
      goto LABEL_16;
    do
    {
      j = _mbsinc(Ptr: j);
LABEL_16:
      v8 = *j;
    }
    while ( *j != 0 && v8 != 92 && v8 != 47 );
  }
  else
  {
    v9 = *Buffer;
    j = (unsigned __int8 *)Buffer;
    while ( v9 != 0 && v9 != 92 && v9 != 47 )
    {
      j = _mbsinc(Ptr: j);
      v9 = *j;
    }
  }
  if ( *j != 0 )
    j[1] = 0;
  CString::ReleaseBuffer(this: a2, a2: -1);
}


/* ============================================
   Address: 0x41B8A8
   Function: sub_41B8A8
   ============================================ */

int __stdcall sub_41B8A8(int a1, int a2, int a3, int a4)
{
  int v4; // ebx
  _DWORD *v5; // edi
  int (__thiscall **v6)(_DWORD); // esi
  int v7; // ecx
  int v8; // eax

  v4 = -1;
  v5 = *((_DWORD **)AfxGetModuleState() + 1);
  if ( sub_4208AC(a1, a2, a3, a4) != 0 )
  {
    v6 = (int (__thiscall **)(_DWORD))*v5;
    if ( (*(int (__thiscall **)(_DWORD *))(*v5 + 140))(a1: v5) != 0 )
    {
      if ( ((int (__thiscall **)(_DWORD *))v6)[22](a1: v5) != 0 )
      {
        v8 = ((int (__thiscall **)(_DWORD *))v6)[23](a1: v5);
      }
      else
      {
        v7 = v5[7];
        if ( v7 != 0 )
          (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 96))(a1: v7);
        v8 = ((int (__thiscall **)(_DWORD *))v6)[28](a1: v5);
      }
      v4 = v8;
    }
  }
  AfxWinTerm();
  return v4;
}


/* ============================================
   Address: 0x41B90D
   Function: ?OnAppExit@CWinApp@@IAEXXZ
   ============================================ */

void __thiscall CWinApp::OnAppExit(CWinApp *this)
{
  SendMessageA(hWnd: *(HWND *)(*((_DWORD *)this + 7) + 28), Msg: 0x10u, wParam: 0, lParam: 0);
}


/* ============================================
   Address: 0x41B920
   Function: ??0CDC@@QAE@XZ
   ============================================ */

CDC *__thiscall CDC::CDC(CDC *this)
{
  *(_DWORD *)this = &CDC::`vftable';
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  return this;
}


/* ============================================
   Address: 0x41B934
   Function: sub_41B934
   ============================================ */

CDC *__thiscall sub_41B934(CDC *Block, char a2)
{
  CDC::~CDC(this: Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}


/* ============================================
   Address: 0x41B950
   Function: ?DeleteTempMap@CDC@@SGXXZ
   ============================================ */

static void __stdcall CDC::DeleteTempMap()
{
  CHandleMap *v0; // eax

  v0 = afxMapHDC(Block: nullptr);
  if ( v0 != nullptr )
    CHandleMap::DeleteTemp(this: v0);
}


/* ============================================
   Address: 0x41B964
   Function: ?afxMapHDC@@YAPAVCHandleMap@@H@Z
   ============================================ */

struct CHandleMap *__cdecl afxMapHDC(void *Block)
{
  struct AFX_MODULE_THREAD_STATE *ModuleThreadState; // esi
  int (__cdecl *v2)(unsigned int); // ebx
  CHandleMap *v3; // ecx
  CHandleMap *v4; // eax

  ModuleThreadState = AfxGetModuleThreadState();
  if ( *((_DWORD *)ModuleThreadState + 7) == 0 && Block != nullptr )
  {
    v2 = AfxSetNewHandler(a1: AfxCriticalNewHandler);
    v3 = (CHandleMap *)operator new(Size: 0x44u);
    if ( v3 != nullptr )
      v4 = CHandleMap::CHandleMap(this: v3, a2: (struct CRuntimeClass *)&off_423318, a3: 4u, a4: 2);
    else
      v4 = nullptr;
    *((_DWORD *)ModuleThreadState + 7) = v4;
    AfxSetNewHandler(a1: v2);
  }
  return *((struct CHandleMap **)ModuleThreadState + 7);
}


/* ============================================
   Address: 0x41B9D4
   Function: ?FromHandle@CDC@@SGPAV1@PAUHDC__@@@Z
   ============================================ */

static struct CDC *__stdcall CDC::FromHandle(HDC a1)
{
  CRuntimeClass **v1; // eax

  v1 = (CRuntimeClass **)afxMapHDC(Block: (void *)1);
  return CHandleMap::FromHandle(this: v1, a2: a1);
}


/* ============================================
   Address: 0x41B9EA
   Function: ?Attach@CDC@@QAEHPAUHDC__@@@Z
   ============================================ */

int __thiscall CDC::Attach(CDC *this, HDC a2)
{
  CMapPtrToPtr *v4; // eax

  if ( a2 == nullptr )
    return 0;
  v4 = afxMapHDC(Block: (void *)1);
  *((_DWORD *)this + 1) = a2;
  *(_DWORD *)sub_416134(this: v4, (unsigned int)a2) = this;
  (*(void (__thiscall **)(CDC *, _DWORD))(*(_DWORD *)this + 20))(a1: this, a2: *((_DWORD *)this + 1));
  return 1;
}


/* ============================================
   Address: 0x41BA21
   Function: ?Detach@CDC@@QAEPAUHDC__@@XZ
   ============================================ */

int __thiscall CDC::Detach(CDC *this)
{
  int v2; // edi
  struct CHandleMap *v3; // eax

  v2 = *((_DWORD *)this + 1);
  if ( v2 != 0 )
  {
    v3 = afxMapHDC(Block: nullptr);
    if ( v3 != nullptr )
      sub_416184(this: v3, a2: *((_DWORD *)this + 1));
  }
  (*(void (__thiscall **)(CDC *))(*(_DWORD *)this + 28))(a1: this);
  *((_DWORD *)this + 1) = 0;
  return v2;
}


/* ============================================
   Address: 0x41BA52
   Function: ??1CDC@@UAE@XZ
   ============================================ */

void __thiscall CDC::~CDC(CDC *this)
{
  HDC v2; // eax

  *(_DWORD *)this = &CDC::`vftable';
  if ( *((_DWORD *)this + 1) != 0 )
  {
    v2 = (HDC)CDC::Detach(this);
    DeleteDC(hdc: v2);
  }
  *(_DWORD *)this = &CObject::`vftable';
}


/* ============================================
   Address: 0x41BA92
   Function: unknown_libname_19
   ============================================ */

// MFC 3.1-14.0 32bit
int __thiscall unknown_libname_19(_DWORD *this, int a2)
{
  *(this + 2) = a2;
  return a2;
}


/* ============================================
   Address: 0x41BA9C
   Function: unknown_libname_20
   ============================================ */

// MFC 3.1-14.0 32bit
int __thiscall unknown_libname_20(_DWORD *this, int a2)
{
  *(this + 1) = a2;
  return a2;
}


/* ============================================
   Address: 0x41BAA6
   Function: ?ReleaseAttribDC@CDC@@UAEXXZ
   ============================================ */

void __thiscall CDC::ReleaseAttribDC(CDC *this)
{
  *((_DWORD *)this + 2) = 0;
}


/* ============================================
   Address: 0x41BAAB
   Function: ?Clear@TaskStack@details@Concurrency@@QAEXXZ
   ============================================ */

void __thiscall Concurrency::details::TaskStack::Clear(Concurrency::details::TaskStack *this)
{
  *((_DWORD *)this + 1) = 0;
}


/* ============================================
   Address: 0x41BAB0
   Function: ?SaveDC@CDC@@UAEHXZ
   ============================================ */

int __thiscall CDC::SaveDC(HDC *this)
{
  int v2; // ebx
  int v4; // [esp+Ch] [ebp-4h]

  if ( *(this + 2) != nullptr )
    v2 = SaveDC(hdc: *(this + 2));
  else
    v2 = v4;
  if ( *(this + 1) != *(this + 2) && SaveDC(hdc: *(this + 1)) != 0 )
    return -1;
  return v2;
}


/* ============================================
   Address: 0x41BAE7
   Function: ?RestoreDC@CDC@@UAEHH@Z
   ============================================ */

BOOL __thiscall CDC::RestoreDC(CDC *this, int nSavedDC)
{
  HDC v3; // ecx
  BOOL result; // eax
  HDC v5; // esi

  v3 = *((HDC *)this + 1);
  result = true;
  if ( v3 != *((HDC *)this + 2) )
    result = RestoreDC(hdc: v3, nSavedDC);
  v5 = *((HDC *)this + 2);
  if ( v5 != nullptr )
    return result && RestoreDC(hdc: v5, nSavedDC);
  return result;
}


/* ============================================
   Address: 0x41BB25
   Function: ?SelectStockObject@CDC@@UAEPAVCGdiObject@@H@Z
   ============================================ */

struct CGdiObject *__thiscall CDC::SelectStockObject(CDC *this, HGDIOBJ i)
{
  HGDIOBJ StockObject; // ebx
  HDC v4; // eax
  HDC v5; // esi

  StockObject = GetStockObject((int)i);
  v4 = *((HDC *)this + 1);
  if ( v4 != *((HDC *)this + 2) )
    i = SelectObject(hdc: v4, h: StockObject);
  v5 = *((HDC *)this + 2);
  if ( v5 != nullptr )
    i = SelectObject(hdc: v5, h: StockObject);
  return CGdiObject::FromHandle(a1: i);
}


/* ============================================
   Address: 0x41BB6A
   Function: sub_41BB6A
   ============================================ */

// ?SelectObject@CDC@@QAEPAVCBrush@@PAV2@@Z
// doubtful name
struct CGdiObject *__thiscall sub_41BB6A(HDC *this, _DWORD *a2)
{
  _DWORD *v2; // ebx
  HDC v4; // eax
  void *v5; // ecx
  HDC v6; // esi
  void *v7; // eax

  v2 = a2;
  v4 = *(this + 1);
  if ( v4 != *(this + 2) )
  {
    if ( a2 != nullptr )
      v5 = (void *)a2[1];
    else
      v5 = nullptr;
    a2 = SelectObject(hdc: v4, h: v5);
  }
  v6 = *(this + 2);
  if ( v6 != nullptr )
  {
    if ( v2 != nullptr )
      v7 = (void *)v2[1];
    else
      v7 = nullptr;
    a2 = SelectObject(hdc: v6, h: v7);
  }
  return CGdiObject::FromHandle(a1: a2);
}


/* ============================================
   Address: 0x41BBBD
   Function: ?SetBkColor@CDC@@UAEKK@Z
   ============================================ */

COLORREF __thiscall CDC::SetBkColor(CDC *this, COLORREF color)
{
  HDC v3; // eax
  HDC v4; // esi
  COLORREF v6; // [esp+8h] [ebp-4h]

  v3 = *((HDC *)this + 1);
  if ( v3 != *((HDC *)this + 2) )
    v6 = SetBkColor(hdc: v3, color);
  v4 = *((HDC *)this + 2);
  if ( v4 != nullptr )
    return SetBkColor(hdc: v4, color);
  return v6;
}


/* ============================================
   Address: 0x41BBF5
   Function: ?SetTextColor@CDC@@UAEKK@Z
   ============================================ */

COLORREF __thiscall CDC::SetTextColor(CDC *this, COLORREF color)
{
  HDC v3; // eax
  HDC v4; // esi
  COLORREF v6; // [esp+8h] [ebp-4h]

  v3 = *((HDC *)this + 1);
  if ( v3 != *((HDC *)this + 2) )
    v6 = SetTextColor(hdc: v3, color);
  v4 = *((HDC *)this + 2);
  if ( v4 != nullptr )
    return SetTextColor(hdc: v4, color);
  return v6;
}


/* ============================================
   Address: 0x41BC2D
   Function: ?SetMapMode@CDC@@UAEHH@Z
   ============================================ */

int __thiscall CDC::SetMapMode(CDC *this, int iMode)
{
  HDC v3; // eax
  HDC v4; // esi
  int v6; // [esp+8h] [ebp-4h]

  v3 = *((HDC *)this + 1);
  if ( v3 != *((HDC *)this + 2) )
    v6 = SetMapMode(hdc: v3, iMode);
  v4 = *((HDC *)this + 2);
  if ( v4 != nullptr )
    return SetMapMode(hdc: v4, iMode);
  return v6;
}


/* ============================================
   Address: 0x41BC65
   Function: ?SetViewportOrg@CDC@@UAE?AVCPoint@@HH@Z
   ============================================ */

struct tagPOINT *__thiscall CDC::SetViewportOrg(HDC *this, struct tagPOINT *a2, int x, int y)
{
  HDC v5; // eax
  HDC v6; // esi
  struct tagPOINT pt; // [esp+8h] [ebp-8h] BYREF

  v5 = *(this + 1);
  if ( v5 != *(this + 2) )
    SetViewportOrgEx(hdc: v5, x, y, lppt: &pt);
  v6 = *(this + 2);
  if ( v6 != nullptr )
    SetViewportOrgEx(hdc: v6, x, y, lppt: &pt);
  *a2 = pt;
  return a2;
}


/* ============================================
   Address: 0x41BCB1
   Function: ?OffsetViewportOrg@CDC@@UAE?AVCPoint@@HH@Z
   ============================================ */

struct tagPOINT *__thiscall CDC::OffsetViewportOrg(HDC *this, struct tagPOINT *a2, int x, int y)
{
  HDC v5; // eax
  HDC v6; // esi
  struct tagPOINT pt; // [esp+8h] [ebp-8h] BYREF

  v5 = *(this + 1);
  if ( v5 != *(this + 2) )
    OffsetViewportOrgEx(hdc: v5, x, y, lppt: &pt);
  v6 = *(this + 2);
  if ( v6 != nullptr )
    OffsetViewportOrgEx(hdc: v6, x, y, lppt: &pt);
  *a2 = pt;
  return a2;
}


/* ============================================
   Address: 0x41BCFD
   Function: ?SetViewportExt@CDC@@UAE?AVCSize@@HH@Z
   ============================================ */

struct tagSIZE *__thiscall CDC::SetViewportExt(HDC *this, struct tagSIZE *a2, int x, int y)
{
  HDC v5; // eax
  HDC v6; // esi
  struct tagSIZE sz; // [esp+8h] [ebp-8h] BYREF

  v5 = *(this + 1);
  if ( v5 != *(this + 2) )
    SetViewportExtEx(hdc: v5, x, y, lpsz: &sz);
  v6 = *(this + 2);
  if ( v6 != nullptr )
    SetViewportExtEx(hdc: v6, x, y, lpsz: &sz);
  *a2 = sz;
  return a2;
}


/* ============================================
   Address: 0x41BD49
   Function: ?ScaleViewportExt@CDC@@UAE?AVCSize@@HHHH@Z
   ============================================ */

struct tagSIZE *__thiscall CDC::ScaleViewportExt(HDC *this, struct tagSIZE *a2, int xn, int a4, int yn, int yd)
{
  HDC v7; // eax
  HDC v8; // esi
  struct tagSIZE sz; // [esp+8h] [ebp-8h] BYREF

  v7 = *(this + 1);
  if ( v7 != *(this + 2) )
    ScaleViewportExtEx(hdc: v7, xn, dx: a4, yn, yd, lpsz: &sz);
  v8 = *(this + 2);
  if ( v8 != nullptr )
    ScaleViewportExtEx(hdc: v8, xn, dx: a4, yn, yd, lpsz: &sz);
  *a2 = sz;
  return a2;
}


/* ============================================
   Address: 0x41BDA1
   Function: ?SetWindowExt@CDC@@UAE?AVCSize@@HH@Z
   ============================================ */

struct tagSIZE *__thiscall CDC::SetWindowExt(HDC *this, struct tagSIZE *a2, int x, int y)
{
  HDC v5; // eax
  HDC v6; // esi
  struct tagSIZE sz; // [esp+8h] [ebp-8h] BYREF

  v5 = *(this + 1);
  if ( v5 != *(this + 2) )
    SetWindowExtEx(hdc: v5, x, y, lpsz: &sz);
  v6 = *(this + 2);
  if ( v6 != nullptr )
    SetWindowExtEx(hdc: v6, x, y, lpsz: &sz);
  *a2 = sz;
  return a2;
}


/* ============================================
   Address: 0x41BDED
   Function: ?ScaleWindowExt@CDC@@UAE?AVCSize@@HHHH@Z
   ============================================ */

struct tagSIZE *__thiscall CDC::ScaleWindowExt(HDC *this, struct tagSIZE *a2, int xn, int xd, int yn, int yd)
{
  HDC v7; // eax
  HDC v8; // esi
  struct tagSIZE sz; // [esp+8h] [ebp-8h] BYREF

  v7 = *(this + 1);
  if ( v7 != *(this + 2) )
    ScaleWindowExtEx(hdc: v7, xn, xd, yn, yd, lpsz: &sz);
  v8 = *(this + 2);
  if ( v8 != nullptr )
    ScaleWindowExtEx(hdc: v8, xn, xd, yn, yd, lpsz: &sz);
  *a2 = sz;
  return a2;
}


/* ============================================
   Address: 0x41BE45
   Function: sub_41BE45
   ============================================ */

int __thiscall sub_41BE45(HDC *this, LPRECT lprect)
{
  return GetClipBox(hdc: *(this + 1), lprect);
}


/* ============================================
   Address: 0x41BE55
   Function: ??0CPaintDC@@QAE@PAVCWnd@@@Z
   ============================================ */

CPaintDC *__thiscall CPaintDC::CPaintDC(CPaintDC *this, struct CWnd *a2)
{
  HDC v3; // eax
  HWND v5; // [esp-8h] [ebp-1Ch]

  CDC::CDC(this);
  *(_DWORD *)this = &CPaintDC::`vftable';
  v5 = *((HWND *)a2 + 7);
  *((_DWORD *)this + 4) = v5;
  v3 = BeginPaint(hWnd: v5, lpPaint: (LPPAINTSTRUCT)((char *)this + 20));
  if ( CDC::Attach(this, a2: v3) == 0 )
    AfxThrowResourceException();
  return this;
}


/* ============================================
   Address: 0x41BEAB
   Function: sub_41BEAB
   ============================================ */

CPaintDC *__thiscall sub_41BEAB(CPaintDC *Block, char a2)
{
  CPaintDC::~CPaintDC(this: Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}


/* ============================================
   Address: 0x41BEC7
   Function: ??1CPaintDC@@UAE@XZ
   ============================================ */

void __thiscall CPaintDC::~CPaintDC(CPaintDC *this)
{
  *(_DWORD *)this = &CPaintDC::`vftable';
  EndPaint(hWnd: *((HWND *)this + 4), lpPaint: (const PAINTSTRUCT *)((char *)this + 20));
  CDC::Detach(this);
  CDC::~CDC(this);
}


/* ============================================
   Address: 0x41BF0E
   Function: ?DeleteTempMap@CGdiObject@@SGXXZ
   ============================================ */

static void __stdcall CGdiObject::DeleteTempMap()
{
  CHandleMap *v0; // eax

  v0 = afxMapHGDIOBJ(Block: nullptr);
  if ( v0 != nullptr )
    CHandleMap::DeleteTemp(this: v0);
}


/* ============================================
   Address: 0x41BF22
   Function: ?afxMapHGDIOBJ@@YAPAVCHandleMap@@H@Z
   ============================================ */

struct CHandleMap *__cdecl afxMapHGDIOBJ(void *Block)
{
  struct AFX_MODULE_THREAD_STATE *ModuleThreadState; // esi
  int (__cdecl *v2)(unsigned int); // ebx
  CHandleMap *v3; // ecx
  CHandleMap *v4; // eax

  ModuleThreadState = AfxGetModuleThreadState();
  if ( *((_DWORD *)ModuleThreadState + 8) == 0 && Block != nullptr )
  {
    v2 = AfxSetNewHandler(a1: AfxCriticalNewHandler);
    v3 = (CHandleMap *)operator new(Size: 0x44u);
    if ( v3 != nullptr )
      v4 = CHandleMap::CHandleMap(this: v3, a2: (struct CRuntimeClass *)&off_423378, a3: 4u, a4: 1);
    else
      v4 = nullptr;
    *((_DWORD *)ModuleThreadState + 8) = v4;
    AfxSetNewHandler(a1: v2);
  }
  return *((struct CHandleMap **)ModuleThreadState + 8);
}


/* ============================================
   Address: 0x41BF92
   Function: ?FromHandle@CGdiObject@@SGPAV1@PAX@Z
   ============================================ */

static struct CGdiObject *__stdcall CGdiObject::FromHandle(void *a1)
{
  CRuntimeClass **v1; // eax

  v1 = (CRuntimeClass **)afxMapHGDIOBJ(Block: (void *)1);
  return CHandleMap::FromHandle(this: v1, a2: a1);
}


/* ============================================
   Address: 0x41BFA8
   Function: sub_41BFA8
   ============================================ */

int __thiscall sub_41BFA8(unsigned int *this)
{
  int v2; // edi
  struct CHandleMap *v3; // eax

  v2 = *(this + 1);
  if ( v2 != 0 )
  {
    v3 = afxMapHGDIOBJ(Block: nullptr);
    if ( v3 != nullptr )
      sub_416184(this: v3, a2: *(this + 1));
  }
  *(this + 1) = 0;
  return v2;
}


/* ============================================
   Address: 0x41BFD2
   Function: sub_41BFD2
   ============================================ */

BOOL __thiscall sub_41BFD2(unsigned int *this)
{
  void *v2; // eax

  if ( *(this + 1) == 0 )
    return false;
  v2 = (void *)sub_41BFA8(this);
  return DeleteObject(ho: v2);
}


/* ============================================
   Address: 0x41BFE8
   Function: ?AfxThrowResourceException@@YGXXZ
   ============================================ */

void __stdcall __noreturn AfxThrowResourceException()
{
  void *pExceptionObject; // [esp+0h] [ebp-4h] BYREF

  pExceptionObject = &dword_42F658;
  _CxxThrowException(&pExceptionObject, pThrowInfo: (_ThrowInfo *)&_TI5PAVCResourceException__);
}


/* ============================================
   Address: 0x41C003
   Function: ?_AfxIsComboBoxControl@@YGHPAUHWND__@@I@Z
   ============================================ */

BOOL __stdcall _AfxIsComboBoxControl(HWND hWnd, unsigned int a2)
{
  CHAR ClassName[12]; // [esp+0h] [ebp-Ch] BYREF

  if ( hWnd == nullptr || (GetWindowLongA(hWnd, nIndex: -16) & 0xF) != a2 )
    return false;
  GetClassNameA(hWnd, lpClassName: ClassName, nMaxCount: 10);
  return lstrcmpiA(lpString1: ClassName, lpString2: "combobox") == 0;
}


/* ============================================
   Address: 0x41C04D
   Function: ?_AfxCompareClassName@@YGHPAUHWND__@@PBD@Z
   ============================================ */

BOOL __stdcall _AfxCompareClassName(HWND hWnd, LPCSTR lpString2)
{
  CHAR ClassName[32]; // [esp+0h] [ebp-20h] BYREF

  GetClassNameA(hWnd, lpClassName: ClassName, nMaxCount: 32);
  return lstrcmpiA(lpString1: ClassName, lpString2) == 0;
}


/* ============================================
   Address: 0x41C078
   Function: ?_AfxChildWindowFromPoint@@YGPAUHWND__@@PAU1@UtagPOINT@@@Z
   ============================================ */

HWND __stdcall _AfxChildWindowFromPoint(HWND hWnd, struct tagPOINT Point)
{
  HWND i; // eax
  HWND v3; // esi
  struct tagRECT Rect; // [esp+8h] [ebp-10h] BYREF

  ClientToScreen(hWnd, lpPoint: &Point);
  for ( i = GetWindow(hWnd, uCmd: 5u); ; i = GetWindow(hWnd: v3, uCmd: 2u) )
  {
    v3 = i;
    if ( i == nullptr )
      break;
    if ( (unsigned __int16)GetDlgCtrlID(hWnd: i) != 0xFFFF && (GetWindowLongA(hWnd: v3, nIndex: -16) & 0x10000000) != 0 )
    {
      GetWindowRect(hWnd: v3, lpRect: &Rect);
      if ( PtInRect(lprc: &Rect, pt: Point) )
        return v3;
    }
  }
  return nullptr;
}


/* ============================================
   Address: 0x41C0ED
   Function: ?AfxSetWindowText@@YGXPAUHWND__@@PBD@Z
   ============================================ */

void __stdcall AfxSetWindowText(HWND hWnd, LPCSTR lpString)
{
  unsigned int v2; // esi
  CHAR String[256]; // [esp+4h] [ebp-100h] BYREF

  v2 = lstrlenA(lpString);
  if ( v2 > 0x100
    || GetWindowTextA(hWnd, lpString: String, nMaxCount: 256) != v2
    || lstrcmpA(lpString1: String, lpString2: lpString) != 0 )
  {
    SetWindowTextA(hWnd, lpString);
  }
}


/* ============================================
   Address: 0x41C145
   Function: ?AfxDeleteObject@@YGXPAPAX@Z
   ============================================ */

void __stdcall AfxDeleteObject(void **a1)
{
  if ( *a1 != nullptr )
  {
    DeleteObject(ho: *a1);
    *a1 = nullptr;
  }
}


/* ============================================
   Address: 0x41C15E
   Function: ?AfxCancelModes@@YGXPAUHWND__@@@Z
   ============================================ */

void __stdcall AfxCancelModes(HWND hWnd)
{
  HWND Focus; // eax
  HWND v2; // esi
  HWND v3; // eax
  HWND Parent; // edi

  Focus = GetFocus();
  v2 = Focus;
  if ( Focus != nullptr && Focus != hWnd )
  {
    if ( _AfxIsComboBoxControl(hWnd: Focus, a2: 3u)
      || (v3 = GetParent(hWnd: v2), v2 = v3, v3 != hWnd) && _AfxIsComboBoxControl(hWnd: v3, a2: 2u) )
    {
      if ( hWnd == nullptr
        || (GetWindowLongA(hWnd, nIndex: -16) & 0x40000000) == 0
        || (Parent = GetParent(hWnd)) != GetDesktopWindow() )
      {
        SendMessageA(hWnd: v2, Msg: 0x14Fu, wParam: 0, lParam: 0);
      }
    }
  }
}


/* ============================================
   Address: 0x41C1D5
   Function: ?AfxGlobalFree@@YGXPAX@Z
   ============================================ */

void __stdcall AfxGlobalFree(HGLOBAL hMem)
{
  int v1; // ecx
  int i; // esi

  if ( hMem != nullptr )
  {
    v1 = (unsigned __int8)GlobalFlags(hMem);
    if ( v1 != 0 )
    {
      for ( i = v1; i != 0; --i )
        GlobalUnlock(hMem);
    }
    GlobalFree(hMem);
  }
}


/* ============================================
   Address: 0x41C20B
   Function: ?AfxCriticalNewHandler@@YAHI@Z
   ============================================ */

int __cdecl AfxCriticalNewHandler(unsigned int a1)
{
  struct _AFX_THREAD_STATE *ThreadState; // eax
  struct _AFX_THREAD_STATE *v2; // esi
  size_t v3; // eax

  ThreadState = AfxGetThreadState();
  v2 = ThreadState;
  if ( ThreadState == nullptr || *((_DWORD *)ThreadState + 3) == 0 )
    AfxThrowMemoryException();
  v3 = _msize(Block: *((void **)ThreadState + 3));
  if ( v3 > a1 + 4 )
  {
    _expand(Block: *((void **)v2 + 3), Size: v3 - a1 - 4);
  }
  else
  {
    free(Block: *((void **)v2 + 3));
    *((_DWORD *)v2 + 3) = 0;
  }
  return 1;
}


/* ============================================
   Address: 0x41C25D
   Function: ?_AfxGetMouseScrollLines@@YAIH@Z
   ============================================ */

LRESULT __cdecl _AfxGetMouseScrollLines(HKEY phkResult)
{
  HWND WindowA; // eax
  LRESULT result; // eax
  BYTE Data[128]; // [esp+4h] [ebp-11Ch] BYREF
  struct _OSVERSIONINFOA VersionInformation; // [esp+84h] [ebp-9Ch] BYREF
  DWORD Type; // [esp+118h] [ebp-8h] BYREF
  DWORD cbData; // [esp+11Ch] [ebp-4h] BYREF

  if ( phkResult != nullptr || dword_42FAF4 == 0 )
  {
    dword_42FAF4 = 1;
    if ( word_42FB00 == 0 )
    {
      Msg = RegisterWindowMessageA(lpString: "MSH_SCROLL_LINES_MSG");
      word_42FB00 = (Msg != 0) + 1;
    }
    if ( word_42FB00 == 2 )
    {
      WindowA = FindWindowA(lpClassName: "MouseZ", lpWindowName: "Magellan MSWHEEL");
      if ( WindowA != nullptr && Msg != 0 )
      {
        result = SendMessageA(hWnd: WindowA, Msg: Msg, wParam: 0, lParam: 0);
        dword_42FAF8 = result;
        return result;
      }
    }
    memset(a1: &VersionInformation, Val: 0, Size: sizeof(VersionInformation));
    VersionInformation.dwOSVersionInfoSize = 148;
    dword_42FAF8 = 3;
    if ( GetVersionExA(lpVersionInformation: &VersionInformation)
      && (VersionInformation.dwPlatformId == 1 || VersionInformation.dwPlatformId == 2) )
    {
      if ( VersionInformation.dwMajorVersion >= 4 )
      {
        if ( VersionInformation.dwPlatformId == 2 )
          SystemParametersInfoA(uiAction: 0x68u, uiParam: 0, pvParam: &dword_42FAF8, fWinIni: 0);
      }
      else if ( RegOpenKeyExA(
                  hKey: HKEY_CURRENT_USER,
                  lpSubKey: "Control Panel\\Desktop",
                  ulOptions: 0,
                  samDesired: 1u,
                  &phkResult) == 0 )
      {
        cbData = 128;
        if ( RegQueryValueExA(
               hKey: phkResult,
               lpValueName: "WheelScrollLines",
               lpReserved: nullptr,
               lpType: &Type,
               lpData: Data,
               lpcbData: &cbData) == 0 )
          dword_42FAF8 = strtoul(String: (const char *)Data, EndPtr: nullptr, Radix: 10);
        RegCloseKey(hKey: phkResult);
      }
    }
  }
  return dword_42FAF8;
}


/* ============================================
   Address: 0x41C3D4
   Function: ?SetScaleToFitSize@CScrollView@@QAEXUtagSIZE@@@Z
   ============================================ */

void __thiscall CScrollView::SetScaleToFitSize(CScrollView *this, struct tagSIZE a2)
{
  bool v3; // zf
  int v4; // ecx
  struct tagRECT Rect; // [esp+8h] [ebp-10h] BYREF

  *((_DWORD *)this + 16) = -1;
  v3 = *((_DWORD *)this + 7) == 0;
  *(struct tagSIZE *)((char *)this + 68) = a2;
  if ( !v3 && (CWnd::GetStyle(this) & 0x300000) != 0 )
  {
    CWnd::SetScrollPos((HWND *)this, nBar: 0, nPos: 0, bRedraw: true);
    CWnd::SetScrollPos((HWND *)this, nBar: 1, nPos: 0, bRedraw: true);
    CWnd::EnableScrollBarCtrl((HWND *)this, wBar: 3, bShow: false);
  }
  GetClientRect(hWnd: *((HWND *)this + 7), lpRect: &Rect);
  v4 = Rect.bottom - Rect.top;
  v3 = *((_DWORD *)this + 7) == 0;
  *((_DWORD *)this + 19) = Rect.right - Rect.left;
  *((_DWORD *)this + 20) = v4;
  if ( !v3 )
  {
    CScrollView::UpdateBars(this);
    InvalidateRect(hWnd: *((HWND *)this + 7), lpRect: nullptr, bErase: true);
  }
}


/* ============================================
   Address: 0x41C45F
   Function: ?GetDeviceScrollPosition@CScrollView@@QBE?AVCPoint@@XZ
   ============================================ */

int *__thiscall CScrollView::GetDeviceScrollPosition(int this, int *a2)
{
  int ScrollPos; // edi
  int v4; // ebx
  int v5; // ecx
  int v6; // esi
  struct tagRECT Rect; // [esp+Ch] [ebp-10h] BYREF

  ScrollPos = CWnd::GetScrollPos((HWND *)this, nBar: 1);
  v4 = CWnd::GetScrollPos((HWND *)this, nBar: 0);
  if ( *(_DWORD *)(this + 100) != 0 )
  {
    GetClientRect(hWnd: *(HWND *)(this + 28), lpRect: &Rect);
    v5 = *(_DWORD *)(this + 76);
    if ( v5 < Rect.right - Rect.left )
      v4 = (Rect.right - Rect.left - v5) / -2;
    v6 = *(_DWORD *)(this + 80);
    if ( v6 < Rect.bottom - Rect.top )
      ScrollPos = (Rect.bottom - Rect.top - v6) / -2;
  }
  *a2 = v4;
  a2[1] = ScrollPos;
  return a2;
}


/* ============================================
   Address: 0x41C4D8
   Function: ?ScrollToDevicePosition@CScrollView@@IAEXUtagPOINT@@@Z
   ============================================ */

void __thiscall CScrollView::ScrollToDevicePosition(HWND *this, struct tagPOINT nPos)
{
  int ScrollPos; // esi
  int v4; // edi

  ScrollPos = CWnd::GetScrollPos(this, nBar: 0);
  CWnd::SetScrollPos(this, nBar: 0, nPos: nPos.x, bRedraw: true);
  v4 = CWnd::GetScrollPos(this, nBar: 1);
  CWnd::SetScrollPos(this, nBar: 1, nPos: nPos.y, bRedraw: true);
  CWnd::ScrollWindow(this, XAmount: ScrollPos - nPos.x, YAmount: v4 - nPos.y, lpRect: nullptr, lpClipRect: nullptr);
}


/* ============================================
   Address: 0x41C52A
   Function: ?OnSize@CScrollView@@QAEXIHH@Z
   ============================================ */

void __thiscall CScrollView::OnSize(CScrollView *this, unsigned int a2, int a3, int a4)
{
  CWnd::Default(this);
  if ( *((_DWORD *)this + 16) == -1 )
    CScrollView::SetScaleToFitSize(this, a2: *(struct tagSIZE *)((char *)this + 68));
  else
    CScrollView::UpdateBars(this);
}


/* ============================================
   Address: 0x41C552
   Function: ?GetScrollBarSizes@CScrollView@@IAEXAAVCSize@@@Z
   ============================================ */

void __thiscall CScrollView::GetScrollBarSizes(CScrollView *this, struct CSize *a2)
{
  int (__thiscall *v4)(CScrollView *, int); // ebx
  LONG Style; // [esp+14h] [ebp+8h]

  *((_DWORD *)a2 + 1) = 0;
  *(_DWORD *)a2 = 0;
  Style = CWnd::GetStyle(this);
  v4 = *(int (__thiscall **)(CScrollView *, int))(*(_DWORD *)this + 112);
  if ( v4(a1: this, a2: 1) == 0 )
  {
    *(_DWORD *)a2 = dword_42F880;
    if ( (Style & 0x800000) != 0 )
      --*(_DWORD *)a2;
  }
  if ( v4(a1: this, a2: 0) == 0 )
  {
    *((_DWORD *)a2 + 1) = dword_42F884;
    if ( (Style & 0x800000) != 0 )
      --*((_DWORD *)a2 + 1);
  }
}


/* ============================================
   Address: 0x41C5AC
   Function: ?GetTrueClientSize@CScrollView@@IAEHAAVCSize@@0@Z
   ============================================ */

BOOL __thiscall CScrollView::GetTrueClientSize(HWND *this, struct CSize *a2, struct CSize *a3)
{
  int v5; // eax
  struct tagRECT Rect; // [esp+Ch] [ebp-10h] BYREF
  LONG Style; // [esp+24h] [ebp+8h]

  GetClientRect(hWnd: *(this + 7), lpRect: &Rect);
  *(_DWORD *)a2 = Rect.right;
  *((_DWORD *)a2 + 1) = Rect.bottom;
  Style = CWnd::GetStyle((CWnd *)this);
  CScrollView::GetScrollBarSizes((CScrollView *)this, a2: a3);
  if ( *(_DWORD *)a3 != 0 && (Style & 0x200000) != 0 )
    *(_DWORD *)a2 += *(_DWORD *)a3;
  v5 = *((_DWORD *)a3 + 1);
  if ( v5 != 0 && (Style & 0x100000) != 0 )
    *((_DWORD *)a2 + 1) += v5;
  return *(_DWORD *)a2 > *(_DWORD *)a3 && *((_DWORD *)a2 + 1) > *((_DWORD *)a3 + 1);
}


/* ============================================
   Address: 0x41C621
   Function: ?GetScrollBarState@CScrollView@@IAEXVCSize@@AAV2@1AAVCPoint@@H@Z
   ============================================ */

BOOL *__thiscall CScrollView::GetScrollBarState(CScrollView *this, int a2, int a3, BOOL *a4, int *a5, int *a6, int a7)
{
  int *v8; // esi
  int v9; // ecx
  int *DeviceScrollPosition; // ecx
  int *v11; // eax
  BOOL v12; // edi
  int v13; // ecx
  BOOL v14; // ebx
  int *v15; // ebx
  int v16; // ecx
  int v17; // esi
  BOOL *result; // eax
  int v19; // [esp+Ch] [ebp-8h] BYREF
  int v20; // [esp+10h] [ebp-4h]

  CScrollView::GetScrollBarSizes(this, a2: (struct CSize *)&v19);
  v8 = a5;
  v9 = *((_DWORD *)this + 20) - a3;
  *a5 = *((_DWORD *)this + 19) - a2;
  v8[1] = v9;
  DeviceScrollPosition = CScrollView::GetDeviceScrollPosition((int)this, &a2);
  v11 = a6;
  *a6 = *DeviceScrollPosition;
  v11[1] = DeviceScrollPosition[1];
  v12 = *v8 > 0;
  v13 = v20;
  if ( *v8 > 0 )
  {
    if ( a7 != 0 )
      v8[1] += v20;
  }
  else
  {
    *v11 = 0;
  }
  v14 = v8[1] > 0;
  a5 = (int *)v14;
  if ( v14 )
  {
    if ( a7 != 0 )
      *v8 += v19;
  }
  else
  {
    v11[1] = 0;
  }
  v15 = a5;
  if ( a5 != nullptr && !v12 && *v8 > 0 )
  {
    v8[1] += v13;
    v12 = true;
  }
  v16 = *v8;
  if ( *v8 > 0 && *v11 >= v16 )
    *v11 = v16;
  v17 = v8[1];
  if ( v17 > 0 && v11[1] >= v17 )
    v11[1] = v17;
  result = a4;
  *a4 = v12;
  result[1] = (BOOL)v15;
  return result;
}


/* ============================================
   Address: 0x41C6DD
   Function: ?UpdateBars@CScrollView@@IAEXXZ
   ============================================ */

void __thiscall CScrollView::UpdateBars(CScrollView *this)
{
  HWND Parent; // eax
  struct CWnd *v3; // eax
  int v4; // ecx
  int v5; // eax
  HWND v6; // [esp-4h] [ebp-78h]
  SCROLLINFO v7; // [esp+Ch] [ebp-68h] BYREF
  struct tagRECT Rect; // [esp+28h] [ebp-4Ch] BYREF
  LPARAM lParam; // [esp+38h] [ebp-3Ch] BYREF
  int v10; // [esp+3Ch] [ebp-38h]
  int v11; // [esp+40h] [ebp-34h]
  int v12; // [esp+44h] [ebp-30h]
  int nMaxPos[2]; // [esp+48h] [ebp-2Ch] BYREF
  struct tagPOINT v14; // [esp+50h] [ebp-24h] BYREF
  _DWORD v15[2]; // [esp+58h] [ebp-1Ch] BYREF
  int v16; // [esp+60h] [ebp-14h] BYREF
  int v17; // [esp+64h] [ebp-10h]
  UINT v18; // [esp+68h] [ebp-Ch] BYREF
  UINT v19; // [esp+6Ch] [ebp-8h]
  BOOL v20; // [esp+70h] [ebp-4h]

  if ( *((_DWORD *)this + 26) == 0 )
  {
    v6 = *((HWND *)this + 7);
    *((_DWORD *)this + 26) = 1;
    v20 = true;
    Parent = GetParent(hWnd: v6);
    v3 = CWnd::FromHandle(a1: Parent);
    if ( v3 != nullptr )
      v20 = SendMessageA(hWnd: *((HWND *)v3 + 7), Msg: 0x368u, wParam: 0, (LPARAM)&lParam) == 0;
    if ( v20 )
    {
      if ( !CScrollView::GetTrueClientSize((HWND *)this, a2: (struct CSize *)&v18, a3: (struct CSize *)v15) )
      {
        GetClientRect(hWnd: *((HWND *)this + 7), lpRect: &Rect);
        if ( Rect.right > 0 && Rect.bottom > 0 )
          CWnd::EnableScrollBarCtrl((HWND *)this, wBar: 3, bShow: false);
LABEL_21:
        *((_DWORD *)this + 26) = 0;
        return;
      }
      v5 = v19;
      v4 = v18;
    }
    else
    {
      CScrollView::GetScrollBarSizes(this, a2: (struct CSize *)v15);
      v4 = v11 - lParam;
      v5 = v12 - v10;
      v18 = v11 - lParam;
      v19 = v12 - v10;
    }
    CScrollView::GetScrollBarState(this, a2: v4, a3: v5, a4: &v16, a5: nMaxPos, a6: &v14.x, a7: v20);
    if ( v16 != 0 )
      v19 -= v15[1];
    if ( v17 != 0 )
      v18 -= v15[0];
    CScrollView::ScrollToDevicePosition((HWND *)this, nPos: v14);
    v7.fMask = 3;
    v7.nMin = 0;
    CWnd::EnableScrollBarCtrl((HWND *)this, wBar: 0, bShow: v16);
    if ( v16 != 0 )
    {
      v7.nPage = v18;
      v7.nMax = *((_DWORD *)this + 19) - 1;
      if ( CWnd::SetScrollInfo(this, nBar: 0, lpsi: &v7, redraw: true) == 0 )
        CWnd::SetScrollRange((HWND *)this, nBar: 0, nMinPos: 0, nMaxPos: nMaxPos[0], bRedraw: true);
    }
    CWnd::EnableScrollBarCtrl((HWND *)this, wBar: 1, bShow: v17);
    if ( v17 != 0 )
    {
      v7.nPage = v19;
      v7.nMax = *((_DWORD *)this + 20) - 1;
      if ( CWnd::SetScrollInfo(this, nBar: 1, lpsi: &v7, redraw: true) == 0 )
        CWnd::SetScrollRange((HWND *)this, nBar: 1, nMinPos: 0, nMaxPos: nMaxPos[1], bRedraw: true);
    }
    goto LABEL_21;
  }
}


/* ============================================
   Address: 0x41C853
   Function: ?OnHScroll@CScrollView@@QAEXIIPAVCScrollBar@@@Z
   ============================================ */

void __thiscall CScrollView::OnHScroll(CScrollView *this, unsigned __int8 a2, unsigned int a3, struct CScrollBar *a4)
{
  int v5; // esi
  int v6; // eax

  if ( a4 == nullptr || CWnd::SendChildNotifyLastMsg(this: a4, a2: nullptr) == 0 )
  {
    v5 = *(_DWORD *)this;
    if ( a4 == (struct CScrollBar *)(*(int (__thiscall **)(CScrollView *, _DWORD))(*(_DWORD *)this + 112))(
                                      a1: this,
                                      a2: 0) )
    {
      v6 = a2;
      BYTE1(v6) = -1;
      (*(void (__thiscall **)(CScrollView *, int, unsigned int, int))(v5 + 196))(a1: this, a2: v6, a3, a4: 1);
    }
  }
}


/* ============================================
   Address: 0x41C897
   Function: ?OnVScroll@CScrollView@@QAEXIIPAVCScrollBar@@@Z
   ============================================ */

void __thiscall CScrollView::OnVScroll(CScrollView *this, char a2, unsigned int a3, struct CScrollBar *a4)
{
  int v5; // esi
  int v6; // eax

  if ( a4 == nullptr || CWnd::SendChildNotifyLastMsg(this: a4, a2: nullptr) == 0 )
  {
    v5 = *(_DWORD *)this;
    if ( a4 == (struct CScrollBar *)(*(int (__thiscall **)(CScrollView *, int))(*(_DWORD *)this + 112))(a1: this, a2: 1) )
    {
      LOBYTE(v6) = 0;
      BYTE1(v6) = a2;
      v6 = (unsigned __int16)v6;
      LOBYTE(v6) = -1;
      (*(void (__thiscall **)(CScrollView *, int, unsigned int, int))(v5 + 196))(a1: this, a2: v6, a3, a4: 1);
    }
  }
}


/* ============================================
   Address: 0x41C8DE
   Function: ?OnMouseWheel@CScrollView@@QAEHIFVCPoint@@@Z
   ============================================ */

int __thiscall CScrollView::OnMouseWheel(const struct CWnd *this, int a2, int a3, int a4, int a5)
{
  if ( (a2 & 0xC) != 0 || CView::GetParentSplitter(a1: this, a2: 1) != nullptr )
    return 0;
  else
    return CScrollView::DoMouseWheel(a1: this, a2, a3, a4, a5);
}


/* ============================================
   Address: 0x41C912
   Function: ?DoMouseWheel@CScrollView@@QAEHIFVCPoint@@@Z
   ============================================ */

int __thiscall CScrollView::DoMouseWheel(int *this, int a2, __int16 a3, int a4, int a5)
{
  LONG Style; // eax
  int v7; // edi
  int (__thiscall *v8)(int *, int); // ebx
  CWnd *v9; // eax
  CWnd *v10; // eax
  int v11; // ebx
  bool v12; // zf
  LRESULT MouseScrollLines; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  LRESULT v20; // [esp+Ch] [ebp-Ch]
  int v21; // [esp+10h] [ebp-8h]
  char v22; // [esp+12h] [ebp-6h]
  BOOL v23; // [esp+14h] [ebp-4h]

  Style = CWnd::GetStyle((CWnd *)this);
  v7 = *this;
  v22 = BYTE2(Style);
  v8 = *(int (__thiscall **)(int *, int))(*this + 112);
  v9 = (CWnd *)v8(a1: this, a2: 1);
  v23 = v9 != nullptr && CWnd::IsWindowEnabled(this: v9) != 0 || (v22 & 0x20) != 0;
  v10 = (CWnd *)v8(a1: this, a2: 0);
  v11 = 0;
  if ( v10 != nullptr && CWnd::IsWindowEnabled(this: v10) != 0 || (v12 = (v22 & 0x10) == 0, v21 = 0, !v12) )
    v21 = 1;
  if ( !v23 && v21 == 0 )
    return 0;
  MouseScrollLines = _AfxGetMouseScrollLines(phkResult: nullptr);
  v20 = MouseScrollLines;
  if ( v23 )
  {
    v15 = MulDiv(nNumber: -a3, nNumerator: MouseScrollLines, nDenominator: 120);
    if ( v15 == -1 || v20 == -1 )
    {
      v16 = *(this + 22);
      if ( a3 > 0 )
        v16 = -v16;
    }
    else
    {
      v16 = v15 * *(this + 24);
      if ( v16 >= *(this + 22) )
        v16 = *(this + 22);
    }
    v17 = (*(int (__thiscall **)(int *, _DWORD, int, int))(v7 + 200))(a1: this, a2: 0, a3: v16, a4: 1);
LABEL_28:
    v11 = v17;
    goto LABEL_29;
  }
  if ( v21 != 0 )
  {
    v18 = MulDiv(nNumber: -a3, nNumerator: MouseScrollLines, nDenominator: 120);
    if ( v18 == -1 || v20 == -1 )
    {
      v19 = *(this + 21);
    }
    else
    {
      v19 = v18 * *(this + 23);
      if ( v19 >= *(this + 21) )
        v19 = *(this + 21);
    }
    v17 = (*(int (__thiscall **)(int *, int, _DWORD, int))(v7 + 200))(a1: this, a2: v19, a3: 0, a4: 1);
    goto LABEL_28;
  }
LABEL_29:
  if ( v11 != 0 )
    UpdateWindow(hWnd: (HWND)*(this + 7));
  return v11;
}


/* ============================================
   Address: 0x41CA36
   Function: sub_41CA36
   ============================================ */

// ?OnCreate@CView@@IAEHPAUtagCREATESTRUCTA@@@Z
// doubtful name
int __thiscall sub_41CA36(struct CView *this, int a2)
{
  int result; // eax
  CDocument *v4; // eax

  result = CWnd::Default(this);
  if ( result != -1 )
  {
    if ( *(_DWORD *)a2 != 0 )
    {
      v4 = *(CDocument **)(*(_DWORD *)a2 + 4);
      if ( v4 != nullptr )
        CDocument::AddView(this: v4, a2: this);
    }
    return 0;
  }
  return result;
}


/* ============================================
   Address: 0x41CA66
   Function: ?OnDestroy@CView@@IAEXXZ
   ============================================ */

void __thiscall CView::OnDestroy(CView *this)
{
  HWND *ParentFrame; // eax
  CFrameWnd *v3; // esi

  ParentFrame = CWnd::GetParentFrame(this);
  v3 = (CFrameWnd *)ParentFrame;
  if ( ParentFrame != nullptr && (CView *)sub_41E476(a1: ParentFrame) == this )
    CFrameWnd::SetActiveView(this: v3, a2: nullptr, a3: 1);
  CWnd::OnDestroy(this);
}


/* ============================================
   Address: 0x41CA95
   Function: ?OnPaint@CView@@IAEXXZ
   ============================================ */

void __thiscall CView::OnPaint(CView *this)
{
  int v2; // esi
  _BYTE v3[84]; // [esp+8h] [ebp-60h] BYREF
  int v4; // [esp+64h] [ebp-4h]

  CPaintDC::CPaintDC(this: (CPaintDC *)v3, a2: this);
  v2 = *(_DWORD *)this;
  v4 = 0;
  (*(void (__thiscall **)(CView *, _BYTE *, _DWORD))(v2 + 228))(a1: this, a2: v3, a3: 0);
  (*(void (__thiscall **)(CView *, _BYTE *))(v2 + 248))(a1: this, a2: v3);
  v4 = -1;
  CPaintDC::~CPaintDC(this: (CPaintDC *)v3);
}


/* ============================================
   Address: 0x41CAE9
   Function: ?OnMouseActivate@CView@@IAEHPAVCWnd@@II@Z
   ============================================ */

int __thiscall CView::OnMouseActivate(CView *this, struct CWnd *a2, unsigned int a3, unsigned int a4)
{
  int v5; // eax
  int v6; // ebp
  HWND *ParentFrame; // eax
  CFrameWnd *v8; // ebx
  CView *v9; // edi
  HWND Focus; // eax
  HWND v11; // ecx

  v5 = CWnd::Default(this);
  v6 = v5;
  if ( v5 != 3 && v5 != 4 )
  {
    ParentFrame = CWnd::GetParentFrame(this);
    v8 = (CFrameWnd *)ParentFrame;
    if ( ParentFrame != nullptr )
    {
      v9 = (CView *)sub_41E476(a1: ParentFrame);
      Focus = GetFocus();
      if ( v9 != this || (v11 = *((HWND *)this + 7)) == Focus || IsChild(hWndParent: v11, hWnd: Focus) )
        CFrameWnd::SetActiveView(this: v8, a2: this, a3: 1);
      else
        (*(void (__thiscall **)(CView *, int, CView *, CView *))(*(_DWORD *)this + 236))(
          a1: this,
          a2: 1,
          a3: this,
          a4: this);
    }
  }
  return v6;
}


/* ============================================
   Address: 0x41CB56
   Function: ?GetParentSplitter@CView@@SGPAVCSplitterWnd@@PBVCWnd@@H@Z
   ============================================ */

static struct CSplitterWnd *__stdcall CView::GetParentSplitter(HWND *a1, int a2)
{
  HWND *v2; // esi
  HWND Parent; // eax
  CObject *v4; // ebx
  HWND v5; // eax
  struct CWnd *v6; // eax

  v2 = a1 + 7;
  Parent = GetParent(hWnd: a1[7]);
  v4 = CWnd::FromHandle(a1: Parent);
  if ( CObject::IsKindOf(this: v4, a2: (const struct CRuntimeClass *)&off_424368) == 0 )
    return nullptr;
  if ( a2 == 0 )
  {
    while ( 1 )
    {
      v5 = GetParent(hWnd: *v2);
      v6 = CWnd::FromHandle(a1: v5);
      if ( v6 == nullptr )
        break;
      v2 = (HWND *)((char *)v6 + 28);
      if ( IsIconic(hWnd: *((HWND *)v6 + 7)) )
        return nullptr;
    }
  }
  return v4;
}


/* ============================================
   Address: 0x41CBB4
   Function: ?OnUpdateSplitCmd@CView@@IAEXPAVCCmdUI@@@Z
   ============================================ */

void __thiscall CView::OnUpdateSplitCmd(HWND *this, struct CCmdUI *a2)
{
  struct CSplitterWnd *ParentSplitter; // eax
  BOOL v3; // eax

  ParentSplitter = CView::GetParentSplitter(a1: this, a2: 0);
  v3 = ParentSplitter != nullptr && *((_DWORD *)ParentSplitter + 32) == 0;
  (**(void (__thiscall ***)(struct CCmdUI *, BOOL))a2)(a1: a2, a2: v3);
}


/* ============================================
   Address: 0x41CBDC
   Function: ?OnSplitCmd@CView@@IAEHI@Z
   ============================================ */

int __thiscall CView::OnSplitCmd(HWND *this, unsigned int a2)
{
  int result; // eax

  result = (int)CView::GetParentSplitter(a1: this, a2: 0);
  if ( result != 0 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)result + 248))(a1: result);
    return 1;
  }
  return result;
}


/* ============================================
   Address: 0x41CBF8
   Function: ?OnUpdateNextPaneMenu@CView@@IAEXPAVCCmdUI@@@Z
   ============================================ */

void __thiscall CView::OnUpdateNextPaneMenu(HWND *this, struct CCmdUI *a2)
{
  struct CSplitterWnd *ParentSplitter; // eax
  BOOL v3; // eax

  ParentSplitter = CView::GetParentSplitter(a1: this, a2: 0);
  v3 = ParentSplitter != nullptr
    && (*(int (__thiscall **)(struct CSplitterWnd *, bool))(*(_DWORD *)ParentSplitter + 240))(
         a1: ParentSplitter,
         a2: *((_DWORD *)a2 + 1) == 57681) != 0;
  (**(void (__thiscall ***)(struct CCmdUI *, BOOL))a2)(a1: a2, a2: v3);
}


/* ============================================
   Address: 0x41CC36
   Function: ?OnNextPaneCmd@CView@@IAEHI@Z
   ============================================ */

int __thiscall CView::OnNextPaneCmd(HWND *this, unsigned int a2)
{
  int result; // eax

  result = (int)CView::GetParentSplitter(a1: this, a2: 0);
  if ( result != 0 )
  {
    (*(void (__thiscall **)(int, bool))(*(_DWORD *)result + 244))(a1: result, a2: a2 == 57681);
    return 1;
  }
  return result;
}


/* ============================================
   Address: 0x41CC60
   Function: j_?Default@CWnd@@IAEJXZ_0
   ============================================ */

// attributes: thunk
int __thiscall CWnd::Default(CWnd *this)
{
  return ?Default@CWnd@@IAEJXZ(this);
}


/* ============================================
   Address: 0x41CC65
   Function: ?OnFileClose@CDocument@@IAEXXZ
   ============================================ */

void __thiscall CDocument::OnFileClose(CDocument *this)
{
  int v2; // esi

  v2 = *(_DWORD *)this;
  if ( (*(int (__thiscall **)(CDocument *))(*(_DWORD *)this + 152))(a1: this) != 0 )
    (*(void (__thiscall **)(CDocument *))(v2 + 132))(a1: this);
}


/* ============================================
   Address: 0x41CC80
   Function: ?OnFileSave@CDocument@@IAEXXZ
   ============================================ */

void __thiscall CDocument::OnFileSave(CDocument *this)
{
  (*(void (__thiscall **)(CDocument *))(*(_DWORD *)this + 164))(a1: this);
}


/* ============================================
   Address: 0x41CC88
   Function: ?OnFileSaveAs@CDocument@@IAEXXZ
   ============================================ */

void __thiscall CDocument::OnFileSaveAs(CDocument *this)
{
  (*(void (__thiscall **)(CDocument *, _DWORD, int))(*(_DWORD *)this + 160))(a1: this, a2: 0, a3: 1);
}


/* ============================================
   Address: 0x41CC95
   Function: ?AddView@CDocument@@QAEXPAVCView@@@Z
   ============================================ */

void __thiscall CDocument::AddView(CDocument *this, struct CView *a2)
{
  int v3; // eax

  sub_415F02(this: (int *)this + 10, (int)a2);
  v3 = *(_DWORD *)this;
  *((_DWORD *)a2 + 15) = this;
  (*(void (__thiscall **)(CDocument *))(v3 + 112))(a1: this);
}


/* ============================================
   Address: 0x41CCB5
   Function: ?PrepareCtrl@CDataExchange@@QAEPAUHWND__@@H@Z
   ============================================ */

HWND __thiscall CDataExchange::PrepareCtrl(CWnd **this, HWND nIDDlgItem)
{
  HWND result; // eax

  CWnd::GetDlgItem(this: *(this + 1), (int)nIDDlgItem, a3: &nIDDlgItem);
  if ( nIDDlgItem == nullptr )
    AfxThrowNotSupportedException();
  result = nIDDlgItem;
  *(this + 3) = nullptr;
  *(this + 2) = (CWnd *)result;
  return result;
}


/* ============================================
   Address: 0x41CCE4
   Function: ?DDX_Control@@YGXPAVCDataExchange@@HAAVCWnd@@@Z
   ============================================ */

void __stdcall DDX_Control(CWnd **a1, HWND a2, HWND *a3)
{
  HWND v3; // eax
  HWND *v4; // esi

  if ( a3[7] == nullptr )
  {
    v3 = CDataExchange::PrepareCtrl(this: a1, nIDDlgItem: a2);
    if ( CWnd::SubclassWindow(this: (CWnd *)a3, hWnd: v3) == 0 )
      AfxThrowNotSupportedException();
    v4 = (HWND *)a1[1];
    if ( v4[7] != GetParent(hWnd: a3[7]) )
      CWnd::AttachControlSite(this: (CWnd *)a3, a2: (struct CWnd *)v4);
  }
}


/* ============================================
   Address: 0x41CD30
   Function: ?HideApplication@CWinApp@@QAEXXZ
   ============================================ */

void __thiscall CWinApp::HideApplication(CWnd **this)
{
  CWnd::ShowWindow(this: *(this + 7), nCmdShow: 0);
  ShowOwnedPopups(hWnd: *((HWND *)*(this + 7) + 7), fShow: false);
  CWnd::SetWindowPos(this: *(this + 7), hWndInsertAfter: &hWndInsertAfter, X: 0, Y: 0, a5: 0, cy: 0, uFlags: 0x13u);
}


/* ============================================
   Address: 0x41CD62
   Function: ?DoWaitCursor@CWinApp@@UAEXH@Z
   ============================================ */

void __thiscall CWinApp::DoWaitCursor(CWinApp *this, int a2)
{
  HCURSOR v3; // eax
  HCURSOR v4; // [esp-4h] [ebp-Ch]

  AfxLockGlobals(a1: 2);
  *((_DWORD *)this + 40) += a2;
  if ( *((int *)this + 40) <= 0 )
  {
    v4 = *((HCURSOR *)this + 41);
    *((_DWORD *)this + 40) = 0;
    SetCursor(hCursor: v4);
  }
  else
  {
    v3 = SetCursor(hCursor: hCursor);
    if ( a2 > 0 && *((_DWORD *)this + 40) == 1 )
      *((_DWORD *)this + 41) = v3;
  }
  AfxUnlockGlobals(a1: 2);
}


/* ============================================
   Address: 0x41CDC1
   Function: ?EnableModeless@CWinApp@@QAEXH@Z
   ============================================ */

void __thiscall CWinApp::EnableModeless(CWinApp *this, int a2)
{
  struct CWnd *MainWnd; // esi
  int v3; // ecx

  MainWnd = AfxGetMainWnd();
  if ( MainWnd != nullptr && (*(int (__thiscall **)(struct CWnd *))(*(_DWORD *)MainWnd + 184))(a1: MainWnd) != 0 )
  {
    v3 = *((_DWORD *)MainWnd + 26);
    if ( v3 != 0 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 108))(a1: v3, a2);
  }
}


/* ============================================
   Address: 0x41CDEF
   Function: ?DoMessageBox@CWinApp@@UAEHPBDII@Z
   ============================================ */

UINT __thiscall CWinApp::DoMessageBox(LPCSTR *this, LPCSTR lpText, UINT uType, unsigned int a4)
{
  CWnd *SafeOwner; // ecx
  int *v6; // esi
  struct CWnd *TopLevelParent; // ebx
  int v8; // ebx
  UINT v9; // eax
  HWND v10; // eax
  int v11; // eax
  HWND hWnd; // [esp+Ch] [ebp-8h]
  HWND v14; // [esp+10h] [ebp-4h] BYREF
  UINT uTypea; // [esp+20h] [ebp+Ch]

  CWinApp::EnableModeless((CWinApp *)this, a2: 0);
  SafeOwner = CWnd::GetSafeOwner(a1: nullptr, a2: &v14);
  v6 = (int *)(this + 39);
  hWnd = (HWND)SafeOwner;
  if ( SafeOwner != nullptr )
  {
    TopLevelParent = CWnd::GetTopLevelParent(this: SafeOwner);
    if ( (*(int (__thiscall **)(struct CWnd *))(*(_DWORD *)TopLevelParent + 184))(a1: TopLevelParent) != 0 )
      v6 = (int *)((char *)TopLevelParent + 76);
  }
  v8 = *v6;
  if ( a4 != 0 )
    *v6 = a4 + 196608;
  if ( (uType & 0xF0) == 0 )
  {
    v9 = uType & 0xF;
    if ( v9 <= 1 || v9 > 2 && v9 <= 4 )
      uType |= 0x30u;
  }
  AfxGetThreadState();
  v10 = hWnd;
  if ( hWnd != nullptr )
    v10 = *((HWND *)hWnd + 7);
  v11 = MessageBoxA(hWnd: v10, lpText, lpCaption: *(this + 30), uType);
  *v6 = v8;
  uTypea = v11;
  if ( v14 != nullptr )
    EnableWindow(hWnd: v14, bEnable: true);
  CWinApp::EnableModeless((CWinApp *)this, a2: 1);
  return uTypea;
}


/* ============================================
   Address: 0x41CEA9
   Function: sub_41CEA9
   ============================================ */

// ?AfxMessageBox@@YGHPBDII@Z
// doubtful name
int __stdcall sub_41CEA9(int a1, int a2, int a3)
{
  struct AFX_MODULE_STATE *ModuleState; // eax

  ModuleState = AfxGetModuleState();
  return (*(int (__thiscall **)(_DWORD, int, int, int))(**((_DWORD **)ModuleState + 1) + 148))(
           a1: *((_DWORD *)ModuleState + 1),
           a2: a1,
           a3: a2,
           a4: a3);
}


/* ============================================
   Address: 0x41CECA
   Function: ?AfxMessageBox@@YGHIII@Z
   ============================================ */

int __stdcall AfxMessageBox(UINT a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // esi
  struct AFX_MODULE_STATE *ModuleState; // eax
  int v5; // eax
  int v6; // esi
  int v8; // [esp+4h] [ebp-10h] BYREF
  int v9; // [esp+10h] [ebp-4h]

  CString::CString(this: (CString *)&v8);
  v9 = 0;
  CString::LoadStringA(this: (CString *)&v8, uID: a1);
  v3 = a3;
  if ( a3 == -1 )
    v3 = a1;
  ModuleState = AfxGetModuleState();
  v5 = (*(int (__thiscall **)(_DWORD, int, unsigned int, unsigned int))(**((_DWORD **)ModuleState + 1) + 148))(
         a1: *((_DWORD *)ModuleState + 1),
         a2: v8,
         a3: a2,
         a4: v3);
  v9 = -1;
  v6 = v5;
  CString::~CString(this: (CString *)&v8);
  return v6;
}


/* ============================================
   Address: 0x41CF30
   Function: sub_41CF30
   ============================================ */

int __thiscall sub_41CF30(HWND *this, LPCSTR lpText, LPCSTR lpCaption, UINT uType)
{
  const CHAR *v4; // edi
  HWND v6; // eax

  v4 = lpCaption;
  if ( lpCaption == nullptr )
    v4 = *((const CHAR **)AfxGetModuleState() + 4);
  AfxGetThreadState();
  if ( this != nullptr )
    v6 = *(this + 7);
  else
    v6 = nullptr;
  return MessageBoxA(hWnd: v6, lpText, lpCaption: v4, uType);
}


/* ============================================
   Address: 0x41CF69
   Function: ?SaveAllModified@CWinApp@@UAEHXZ
   ============================================ */

int __thiscall CWinApp::SaveAllModified(CWinApp *this)
{
  int v1; // ecx

  v1 = *((_DWORD *)this + 32);
  if ( v1 != 0 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 40))(a1: v1);
  else
    return 1;
}


/* ============================================
   Address: 0x41CF7C
   Function: ?AddToRecentFileList@CWinApp@@UAEXPBD@Z
   ============================================ */

void __thiscall CWinApp::AddToRecentFileList(CWinApp *this, const char *lpFileName)
{
  _DWORD *v2; // esi
  CHAR Buffer[260]; // [esp+4h] [ebp-104h] BYREF

  v2 = (_DWORD *)((char *)this + 168);
  if ( *((_DWORD *)this + 42) != 0 )
  {
    AfxFullPath(lpBuffer: Buffer, lpFileName);
    (*(void (__thiscall **)(_DWORD, CHAR *))(*(_DWORD *)*v2 + 4))(a1: *v2, a2: Buffer);
  }
}


/* ============================================
   Address: 0x41CFB7
   Function: unknown_libname_21
   ============================================ */

// MFC 3.1-14.0 32bit
int __thiscall unknown_libname_21(_DWORD **this, int a2)
{
  return (*(int (__thiscall **)(_DWORD, int))(**(this + 32) + 36))(a1: *(this + 32), a2);
}


/* ============================================
   Address: 0x41CFC9
   Function: ?CloseAllDocuments@CWinApp@@QAEXH@Z
   ============================================ */

void __thiscall CWinApp::CloseAllDocuments(CWinApp *this, int a2)
{
  int v2; // ecx

  v2 = *((_DWORD *)this + 32);
  if ( v2 != 0 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 44))(a1: v2, a2);
}


/* ============================================
   Address: 0x41CFDF
   Function: ?OnUpdateRecentFileMenu@CWinApp@@IAEXPAVCCmdUI@@@Z
   ============================================ */

void __thiscall CWinApp::OnUpdateRecentFileMenu(CWinApp *this, struct CCmdUI *a2)
{
  int v2; // ecx

  v2 = *((_DWORD *)this + 42);
  if ( v2 != 0 )
    (*(void (__thiscall **)(int, struct CCmdUI *))(*(_DWORD *)v2 + 8))(a1: v2, a2);
  else
    (**(void (__thiscall ***)(struct CCmdUI *, _DWORD))a2)(a1: a2, a2: 0);
}


/* ============================================
   Address: 0x41D001
   Function: sub_41D001
   ============================================ */

// ?OnDDECommand@CWinApp@@UAEHPAG@Z
// doubtful name
int __thiscall sub_41D001(_DWORD *this, int a2)
{
  int v2; // ecx

  v2 = *(this + 32);
  if ( v2 != 0 )
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v2 + 56))(a1: v2, a2);
  else
    return 0;
}


/* ============================================
   Address: 0x41D01B
   Function: ?OnOpenRecentFile@CWinApp@@IAEHI@Z
   ============================================ */

int __thiscall CWinApp::OnOpenRecentFile(CWinApp *this, unsigned int a2)
{
  _DWORD *v2; // esi

  v2 = (_DWORD *)((char *)this + 168);
  if ( (*(int (__thiscall **)(CWinApp *, _DWORD))(*(_DWORD *)this + 132))(
         a1: this,
         a2: *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 42) + 8) + 4 * (a2 - 57616))) == 0 )
    (**(void (__thiscall ***)(_DWORD, unsigned int))*v2)(a1: *v2, a2: a2 - 57616);
  return 1;
}


/* ============================================
   Address: 0x41D054
   Function: ?WriteProfileInt@CWinApp@@QAEHPBD0H@Z
   ============================================ */

HKEY __thiscall CWinApp::WriteProfileInt(LPCSTR *this, LPCSTR lpAppName, LPCSTR lpValueName, int Data)
{
  HKEY result; // eax
  HKEY v6; // esi
  LSTATUS v7; // edi
  CHAR String[16]; // [esp+8h] [ebp-10h] BYREF

  if ( *(this + 31) != nullptr )
  {
    result = CWinApp::GetSectionKey((CWinApp *)this, a2: lpAppName);
    v6 = result;
    if ( result != nullptr )
    {
      v7 = RegSetValueExA(hKey: result, lpValueName, Reserved: 0, dwType: 4u, lpData: (const BYTE *)&Data, cbData: 4u);
      RegCloseKey(hKey: v6);
      return (HKEY)(v7 == 0);
    }
  }
  else
  {
    wsprintfA(a1: String, a2: "%d", Data);
    return (HKEY)WritePrivateProfileStringA(
                   lpAppName,
                   lpKeyName: lpValueName,
                   lpString: String,
                   lpFileName: *(this + 36));
  }
  return result;
}


/* ============================================
   Address: 0x41D0C9
   Function: sub_41D0C9
   ============================================ */

void __thiscall sub_41D0C9(CWnd *this)
{
  *(_DWORD *)this = &CStatic::`vftable';
  CWnd::DestroyWindow(this);
  CWnd::~CWnd(this);
}


/* ============================================
   Address: 0x41D101
   Function: sub_41D101
   ============================================ */

void __thiscall sub_41D101(CWnd *this)
{
  *(_DWORD *)this = &CButton::`vftable';
  CWnd::DestroyWindow(this);
  CWnd::~CWnd(this);
}


/* ============================================
   Address: 0x41D139
   Function: nullsub_13
   ============================================ */

void __stdcall nullsub_13(int a1)
{
  ;
}


/* ============================================
   Address: 0x41D13C
   Function: sub_41D13C
   ============================================ */

// ?OnChildNotify@CButton@@MAEHIIJPAJ@Z
// doubtful name
LRESULT __thiscall sub_41D13C(HWND *this, unsigned int a2, HMENU wParam, HMENU lParam, int *a5)
{
  if ( a2 != 43 )
    return CWnd::OnChildNotify(this, a2, wParam, lParam, a5);
  (*((void (__thiscall **)(HWND *, HMENU))*this + 48))(a1: this, a2: lParam);
  return 1;
}


/* ============================================
   Address: 0x41D16A
   Function: sub_41D16A
   ============================================ */

void __thiscall sub_41D16A(CWnd *this)
{
  *(_DWORD *)this = &CComboBox::`vftable';
  CWnd::DestroyWindow(this);
  CWnd::~CWnd(this);
}


/* ============================================
   Address: 0x41D1A2
   Function: nullsub_14
   ============================================ */

void __stdcall nullsub_14(int a1)
{
  ;
}


/* ============================================
   Address: 0x41D1A5
   Function: nullsub_15
   ============================================ */

void __stdcall nullsub_15(int a1)
{
  ;
}


/* ============================================
   Address: 0x41D1A8
   Function: sub_41D1A8
   ============================================ */

int __stdcall sub_41D1A8(int a1)
{
  return 0;
}


/* ============================================
   Address: 0x41D1AD
   Function: nullsub_16
   ============================================ */

void __stdcall nullsub_16(int a1)
{
  ;
}


/* ============================================
   Address: 0x41D1B0
   Function: ?OnChildNotify@CComboBox@@MAEHIIJPAJ@Z
   ============================================ */

LRESULT __thiscall CComboBox::OnChildNotify(HWND *this, unsigned int a2, HMENU wParam, HMENU lParam, int *a5)
{
  switch ( a2 )
  {
    case '+':
      (*((void (__thiscall **)(HWND *, HMENU))*this + 48))(a1: this, a2: lParam);
      break;
    case ',':
      (*((void (__thiscall **)(HWND *, HMENU))*this + 49))(a1: this, a2: lParam);
      break;
    case '-':
      (*((void (__thiscall **)(HWND *, HMENU))*this + 51))(a1: this, a2: lParam);
      break;
    case '9':
      *a5 = (*((int (__thiscall **)(HWND *, HMENU))*this + 50))(a1: this, a2: lParam);
      break;
    default:
      return CWnd::OnChildNotify(this, a2, wParam, lParam, a5);
  }
  return 1;
}


/* ============================================
   Address: 0x41D217
   Function: j_unknown_libname_22
   ============================================ */

// attributes: thunk
int j_unknown_libname_22()
{
  return unknown_libname_22();
}


/* ============================================
   Address: 0x41D21C
   Function: unknown_libname_22
   ============================================ */

// MFC 3.1-14.0 32bit
unsigned int unknown_libname_22()
{
  stru_42F6F0.right = 0;
  stru_42F6F0.bottom = 0;
  stru_42F6F0.left = 0x80000000;
  stru_42F6F0.top = 0x80000000;
  return 0x80000000;
}


/* ============================================
   Address: 0x41D23A
   Function: j_unknown_libname_23
   ============================================ */

// attributes: thunk
int j_unknown_libname_23()
{
  return unknown_libname_23();
}


/* ============================================
   Address: 0x41D23F
   Function: unknown_libname_23
   ============================================ */

// MFC 3.1-14.0 32bit
int unknown_libname_23()
{
  int result; // eax

  if ( (GetVersion() & 0x80000000) != 0 && (unsigned __int16)GetVersion() == 4
    || ((result = GetVersion()) & 0x80000000) == 0 && (_BYTE)(result = (unsigned __int16)GetVersion() == 3) != 0 )
  {
    result = RegisterWindowMessageA(lpString: "MSWHEEL_ROLLMSG");
    dword_42F700 = result;
  }
  else
  {
    dword_42F700 = 0;
  }
  return result;
}


/* ============================================
   Address: 0x41D294
   Function: sub_41D294
   ============================================ */

_UNKNOWN ***sub_41D294()
{
  return &off_423608;
}


/* ============================================
   Address: 0x41D29A
   Function: ??0CFrameWnd@@QAE@XZ
   ============================================ */

CFrameWnd *__thiscall CFrameWnd::CFrameWnd(CFrameWnd *this)
{
  CWnd::CWnd(this);
  sub_415E02(this: (_DWORD *)this + 27, a2: 10);
  CString::CString(this: (CFrameWnd *)((char *)this + 172));
  *((_DWORD *)this + 16) = -1;
  *(_DWORD *)this = &CFrameWnd::`vftable';
  *((_DWORD *)this + 15) = 1;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 46) = 0;
  SetRectEmpty(lprc: (LPRECT)((char *)this + 88));
  *((_DWORD *)this + 34) = -1;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 0;
  CFrameWnd::AddFrameWnd(this);
  return this;
}


/* ============================================
   Address: 0x41D360
   Function: sub_41D360
   ============================================ */

CFrameWnd *__thiscall sub_41D360(CFrameWnd *Block, char a2)
{
  CFrameWnd::~CFrameWnd(this: Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}


/* ============================================
   Address: 0x41D37C
   Function: ??1CFrameWnd@@UAE@XZ
   ============================================ */

void __thiscall CFrameWnd::~CFrameWnd(CFrameWnd *this)
{
  *(_DWORD *)this = &CFrameWnd::`vftable';
  CFrameWnd::RemoveFrameWnd(this);
  if ( *((_DWORD *)this + 41) != 0 )
    operator delete(Block: *((void **)this + 41));
  CString::~CString(this: (CFrameWnd *)((char *)this + 172));
  sub_415E61(this: (CPlex **)this + 27);
  CWnd::~CWnd(this);
}


/* ============================================
   Address: 0x41D3E3
   Function: ?AddFrameWnd@CFrameWnd@@IAEXXZ
   ============================================ */

void __thiscall CFrameWnd::AddFrameWnd(CFrameWnd *this)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  struct CNoTrackObject *Data; // eax

  ModuleState = AfxGetModuleState();
  Data = CThreadLocalObject::GetData(
           this: (struct AFX_MODULE_STATE *)((char *)ModuleState + 4208),
           a2: CThreadLocal<AFX_MODULE_THREAD_STATE>::CreateObject);
  CSimpleList::AddHead(this: (struct CNoTrackObject *)((char *)Data + 8), a2: this);
}


/* ============================================
   Address: 0x41D407
   Function: ?RemoveFrameWnd@CFrameWnd@@IAEXXZ
   ============================================ */

void __thiscall CFrameWnd::RemoveFrameWnd(CFrameWnd *this)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  struct CNoTrackObject *Data; // eax

  ModuleState = AfxGetModuleState();
  Data = CThreadLocalObject::GetData(
           this: (struct AFX_MODULE_STATE *)((char *)ModuleState + 4208),
           a2: CThreadLocal<AFX_MODULE_THREAD_STATE>::CreateObject);
  CSimpleList::Remove(this: (struct CNoTrackObject *)((char *)Data + 8), a2: this);
}


/* ============================================
   Address: 0x41D42B
   Function: ?LoadAccelTable@CFrameWnd@@QAEHPBD@Z
   ============================================ */

BOOL __thiscall CFrameWnd::LoadAccelTable(CFrameWnd *this, const char *lpTableName)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  HACCEL AcceleratorsA; // eax

  ModuleState = AfxGetModuleState();
  AcceleratorsA = LoadAcceleratorsA(hInstance: *((HINSTANCE *)ModuleState + 3), lpTableName);
  *((_DWORD *)this + 18) = AcceleratorsA;
  return AcceleratorsA != nullptr;
}


/* ============================================
   Address: 0x41D451
   Function: ?GetDefaultAccelerator@CFrameWnd@@UAEPAUHACCEL__@@XZ
   ============================================ */

int __thiscall CFrameWnd::GetDefaultAccelerator(CFrameWnd *this)
{
  int v1; // esi
  int v2; // eax
  int v3; // eax

  v1 = *((_DWORD *)this + 18);
  v2 = (*(int (__thiscall **)(CFrameWnd *))(*(_DWORD *)this + 196))(a1: this);
  if ( v2 != 0 )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 176))(a1: v2);
    if ( v3 != 0 )
      return v3;
  }
  return v1;
}


/* ============================================
   Address: 0x41D475
   Function: ?PreTranslateMessage@CFrameWnd@@UAEHPAUtagMSG@@@Z
   ============================================ */

BOOL __thiscall CFrameWnd::PreTranslateMessage(CFrameWnd *this, LPMSG lpMsg)
{
  UINT message; // eax
  int v4; // ecx
  UINT v5; // eax
  HACCEL v6; // eax
  BOOL result; // eax

  message = lpMsg->message;
  if ( message == 513 || message == 161 )
    AfxCancelModes(hWnd: lpMsg->hwnd);
  result = true;
  if ( CWnd::PreTranslateMessage(this, a2: lpMsg) == 0 )
  {
    v4 = *((_DWORD *)this + 26);
    if ( v4 == 0 || (*(int (__thiscall **)(int, LPMSG))(*(_DWORD *)v4 + 92))(a1: v4, a2: lpMsg) == 0 )
    {
      v5 = lpMsg->message;
      if ( v5 < 0x100 )
        return false;
      if ( v5 > 0x108 )
        return false;
      v6 = (HACCEL)(*(int (__thiscall **)(CFrameWnd *))(*(_DWORD *)this + 240))(a1: this);
      if ( v6 == nullptr || TranslateAcceleratorA(hWnd: *((HWND *)this + 7), hAccTable: v6, lpMsg) == 0 )
        return false;
    }
  }
  return result;
}


/* ============================================
   Address: 0x41D4EC
   Function: unknown_libname_24
   ============================================ */

// MFC 3.1-14.0 32bit
int __thiscall unknown_libname_24(void *this)
{
  int result; // eax

  if ( this != nullptr )
    return (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 4))(a1: this, a2: 1);
  return result;
}


/* ============================================
   Address: 0x41D4F8
   Function: ?OnPaletteChanged@CFrameWnd@@IAEXPAVCWnd@@@Z
   ============================================ */

void __thiscall CFrameWnd::OnPaletteChanged(CFrameWnd *this, struct CWnd *a2)
{
  int v3; // ecx

  CWnd::Default(this);
  v3 = *((_DWORD *)this + 26);
  if ( v3 != 0 )
    (*(void (__thiscall **)(int, struct CWnd *))(*(_DWORD *)v3 + 116))(a1: v3, a2);
}


/* ============================================
   Address: 0x41D514
   Function: ?OnQueryNewPalette@CFrameWnd@@IAEHXZ
   ============================================ */

int __thiscall CFrameWnd::OnQueryNewPalette(CFrameWnd *this)
{
  int v2; // ecx

  v2 = *((_DWORD *)this + 26);
  if ( v2 != 0 && (*(int (__thiscall **)(int))(*(_DWORD *)v2 + 120))(a1: v2) != 0 )
    return 1;
  else
    return CWnd::Default(this);
}


/* ============================================
   Address: 0x41D535
   Function: ?ExitHelpMode@CFrameWnd@@UAEXXZ
   ============================================ */

void __thiscall CFrameWnd::ExitHelpMode(HWND *this)
{
  struct CFrameWnd *TopLevelFrame; // eax
  struct tagMSG Msg; // [esp+8h] [ebp-1Ch] BYREF

  if ( *(this + 20) != nullptr )
  {
    if ( !PeekMessageA(lpMsg: &Msg, hWnd: *(this + 7), wMsgFilterMin: 0x367u, wMsgFilterMax: 0x367u, wRemoveMsg: 3u) )
      PostMessageA(hWnd: *(this + 7), Msg: 0x367u, wParam: 0, lParam: 0);
    if ( GetCapture() == *(this + 7) )
      ReleaseCapture();
    TopLevelFrame = CWnd::GetTopLevelFrame((CWnd *)this);
    *(this + 20) = nullptr;
    *((_DWORD *)TopLevelFrame + 20) = 0;
    PostMessageA(hWnd: *(this + 7), Msg: 0x36Au, wParam: 0, lParam: 0);
  }
}


/* ============================================
   Address: 0x41D5A0
   Function: ?OnSetCursor@CFrameWnd@@IAEHPAVCWnd@@II@Z
   ============================================ */

int __thiscall CFrameWnd::OnSetCursor(CFrameWnd *this, struct CWnd *a2, unsigned int a3, unsigned int a4)
{
  if ( *((_DWORD *)CWnd::GetTopLevelFrame(this) + 20) == 0 )
    return CWnd::Default(this);
  SetCursor(hCursor: dword_42F8C4);
  return 1;
}


/* ============================================
   Address: 0x41D5CA
   Function: ?OnCommandHelp@CFrameWnd@@IAEJIJ@Z
   ============================================ */

int __thiscall CFrameWnd::OnCommandHelp(CFrameWnd *this, unsigned int a2, int a3)
{
  int v3; // esi
  struct AFX_MODULE_STATE *ModuleState; // eax

  v3 = a3;
  if ( a3 == 0 )
  {
    v3 = CFrameWnd::IsTracking(this) ? *((_DWORD *)this + 36) + 0x10000 : *((_DWORD *)this + 35) + 0x20000;
    if ( v3 == 0 )
      return 0;
  }
  ModuleState = AfxGetModuleState();
  (*(void (__thiscall **)(_DWORD, int, int))(**((_DWORD **)ModuleState + 1) + 160))(
    a1: *((_DWORD *)ModuleState + 1),
    a2: v3,
    a3: 1);
  return 1;
}


/* ============================================
   Address: 0x41D61E
   Function: ?OnHelpHitTest@CFrameWnd@@IAEJIJ@Z
   ============================================ */

int __thiscall CFrameWnd::OnHelpHitTest(CFrameWnd *this, unsigned int a2, int a3)
{
  int v3; // eax

  v3 = *((_DWORD *)this + 35);
  if ( v3 != 0 )
    return v3 + 0x20000;
  else
    return 0;
}


/* ============================================
   Address: 0x41D634
   Function: ?OnCommand@CFrameWnd@@MAEHIJ@Z
   ============================================ */

int __thiscall CFrameWnd::OnCommand(HWND *this, unsigned int a2, HWND a3)
{
  if ( *((_DWORD *)CWnd::GetTopLevelFrame((CWnd *)this) + 20) == 0
    || a3 != nullptr
    || (unsigned __int16)a2 == 57670
    || (unsigned __int16)a2 == 57671
    || (unsigned __int16)a2 == 57669 )
  {
    return CWnd::OnCommand((CWnd *)this, a2, hWnd: a3);
  }
  if ( SendMessageA(hWnd: *(this + 7), Msg: 0x365u, wParam: 0, lParam: (unsigned __int16)a2 + 0x10000) == 0 )
    SendMessageA(hWnd: *(this + 7), Msg: 0x111u, wParam: 0xE147u, lParam: 0);
  return 1;
}


/* ============================================
   Address: 0x41D6AB
   Function: ?AfxIsDescendant@@YGHPAUHWND__@@0@Z
   ============================================ */

int __stdcall AfxIsDescendant(HWND a1, HWND hWnd)
{
  do
  {
    if ( a1 == hWnd )
      return 1;
    hWnd = AfxGetParentOwner(hWnd);
  }
  while ( hWnd != nullptr );
  return 0;
}


/* ============================================
   Address: 0x41D6CB
   Function: ?BeginModalState@CFrameWnd@@UAEXXZ
   ============================================ */

void __thiscall CFrameWnd::BeginModalState(CFrameWnd *this)
{
  HWND i; // eax
  HWND v3; // esi
  void *v4; // eax
  HWND v5; // eax
  HWND j; // esi
  int v7; // ecx
  HWND DesktopWindow; // [esp-8h] [ebp-20h]
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+10h] [ebp-8h]
  struct CWnd *TopLevelParent; // [esp+14h] [ebp-4h]

  if ( ++*((_DWORD *)this + 40) <= 1u )
  {
    v9 = 0;
    TopLevelParent = CWnd::GetTopLevelParent(this);
    DesktopWindow = GetDesktopWindow();
    for ( i = GetWindow(hWnd: DesktopWindow, uCmd: 5u); ; i = GetWindow(hWnd: v3, uCmd: 2u) )
    {
      v3 = i;
      if ( i == nullptr )
        break;
      if ( IsWindowEnabled(hWnd: i)
        && CWnd::FromHandlePermanent(a1: v3) != nullptr
        && AfxIsDescendant(a1: *((HWND *)TopLevelParent + 7), hWnd: v3) != 0
        && SendMessageA(hWnd: v3, Msg: 0x36Cu, wParam: 0, lParam: 0) == 0 )
      {
        ++v9;
      }
    }
    if ( v9 != 0 )
    {
      v4 = operator new(Size: 4 * v9 + 4);
      v10 = 0;
      *((_DWORD *)this + 41) = v4;
      v5 = GetDesktopWindow();
      for ( j = GetWindow(hWnd: v5, uCmd: 5u); j != nullptr; j = GetWindow(hWnd: j, uCmd: 2u) )
      {
        if ( IsWindowEnabled(hWnd: j)
          && CWnd::FromHandlePermanent(a1: j) != nullptr
          && AfxIsDescendant(a1: *((HWND *)TopLevelParent + 7), hWnd: j) != 0
          && SendMessageA(hWnd: j, Msg: 0x36Cu, wParam: 0, lParam: 0) == 0 )
        {
          EnableWindow(hWnd: j, bEnable: false);
          v7 = v10++;
          *(_DWORD *)(*((_DWORD *)this + 41) + 4 * v7) = j;
        }
      }
      *(_DWORD *)(*((_DWORD *)this + 41) + 4 * v10) = 0;
    }
  }
}


/* ============================================
   Address: 0x41D7F8
   Function: ?EndModalState@CFrameWnd@@UAEXXZ
   ============================================ */

void __thiscall CFrameWnd::EndModalState(CFrameWnd *this)
{
  int v2; // ecx
  int v3; // ecx
  _DWORD *v4; // eax
  int v5; // edi

  v2 = *((_DWORD *)this + 40);
  if ( v2 != 0 )
  {
    v3 = v2 - 1;
    *((_DWORD *)this + 40) = v3;
    if ( v3 == 0 )
    {
      v4 = *((_DWORD **)this + 41);
      if ( v4 != nullptr )
      {
        if ( *v4 != 0 )
        {
          v5 = 0;
          do
          {
            if ( IsWindow(hWnd: (HWND)v4[v5]) )
              EnableWindow(hWnd: *(HWND *)(*((_DWORD *)this + 41) + v5 * 4), bEnable: true);
            v4 = *((_DWORD **)this + 41);
            ++v5;
          }
          while ( v4[v5] != 0 );
        }
        operator delete(Block: *((void **)this + 41));
        *((_DWORD *)this + 41) = 0;
      }
    }
  }
}


/* ============================================
   Address: 0x41D867
   Function: ?ShowOwnedWindows@CFrameWnd@@QAEXH@Z
   ============================================ */

void __thiscall CFrameWnd::ShowOwnedWindows(CFrameWnd *this, int a2)
{
  HWND DesktopWindow; // eax
  HWND i; // esi
  struct CWnd *v4; // edi
  HWND v5; // eax
  LONG WindowLongA; // eax

  DesktopWindow = GetDesktopWindow();
  for ( i = GetWindow(hWnd: DesktopWindow, uCmd: 5u); i != nullptr; i = GetWindow(hWnd: i, uCmd: 2u) )
  {
    v4 = CWnd::FromHandlePermanent(a1: i);
    if ( v4 != nullptr )
    {
      v5 = *((HWND *)this + 7);
      if ( v5 != i && AfxIsDescendant(a1: v5, hWnd: i) != 0 )
      {
        WindowLongA = GetWindowLongA(hWnd: i, nIndex: -16);
        if ( a2 != 0 )
        {
          if ( (WindowLongA & 0x18000000) == 0 && (*((_BYTE *)v4 + 36) & 2) != 0 )
          {
            ShowWindow(hWnd: i, nCmdShow: 4);
            *((_DWORD *)v4 + 9) &= ~2u;
          }
        }
        else if ( (WindowLongA & 0x18000000) == 0x10000000 )
        {
          ShowWindow(hWnd: i, nCmdShow: 0);
          *((_DWORD *)v4 + 9) |= 2u;
        }
      }
    }
  }
}


/* ============================================
   Address: 0x41D909
   Function: ?OnEnable@CFrameWnd@@IAEXH@Z
   ============================================ */

void __thiscall CFrameWnd::OnEnable(HWND *this, int a2)
{
  HWND Parent; // eax
  HWND v4; // eax
  HWND v5; // eax
  HWND v6; // ebx

  if ( a2 != 0 && (*(_BYTE *)(this + 9) & 4) != 0 )
  {
    CWnd::EnableWindow((CWnd *)this, bEnable: false);
    SetFocus(hWnd: nullptr);
  }
  else
  {
    Parent = GetParent(hWnd: *(this + 7));
    if ( CWnd::FromHandle(a1: Parent) == nullptr )
    {
      if ( a2 != 0 || *(this + 40) != nullptr )
      {
        if ( a2 != 0 )
        {
          v5 = *(this + 9);
          if ( (char)v5 < 0 )
          {
            LOBYTE(v5) = (unsigned __int8)v5 & 0x7F;
            *(this + 9) = v5;
            (*((void (__thiscall **)(HWND *))*this + 37))(a1: this);
            v6 = *(this + 7);
            if ( GetActiveWindow() == v6 )
              SendMessageA(hWnd: v6, Msg: 6u, wParam: 1u, lParam: 0);
          }
        }
      }
      else
      {
        v4 = *this;
        *((_BYTE *)this + 36) |= 0x80u;
        (*((void (__thiscall **)(HWND *))v4 + 36))(a1: this);
      }
      if ( a2 != 0 && (*(_BYTE *)(this + 9) & 0x20) != 0 )
        SendMessageA(hWnd: *(this + 7), Msg: 0x86u, wParam: 1u, lParam: 0);
      CFrameWnd::NotifyFloatingWindows((CFrameWnd *)this, wParam: a2 != 0 ? 16 : 32);
    }
  }
}


/* ============================================
   Address: 0x41D9C7
   Function: ?NotifyFloatingWindows@CFrameWnd@@QAEXK@Z
   ============================================ */

void __thiscall CFrameWnd::NotifyFloatingWindows(CFrameWnd *this, WPARAM wParam)
{
  struct CFrameWnd *TopLevelFrame; // edi
  int IsWindowEnabled; // eax
  HWND i; // eax
  HWND v6; // esi
  HWND DesktopWindow; // [esp-8h] [ebp-18h]

  if ( (CWnd::GetStyle(this) & 0x40000000) != 0 )
    TopLevelFrame = this;
  else
    TopLevelFrame = CWnd::GetTopLevelFrame(this);
  if ( (wParam & 0xC) != 0 )
  {
    IsWindowEnabled = CWnd::IsWindowEnabled(this: TopLevelFrame);
    if ( (~(_BYTE)wParam & 8) != 0 && IsWindowEnabled != 0 && TopLevelFrame != this )
    {
      *((_BYTE *)this + 37) |= 2u;
      SendMessageA(hWnd: *((HWND *)TopLevelFrame + 7), Msg: 0x86u, wParam: 1u, lParam: 0);
      *((_BYTE *)this + 37) &= ~2u;
    }
    else
    {
      SendMessageA(hWnd: *((HWND *)TopLevelFrame + 7), Msg: 0x86u, wParam: 0, lParam: 0);
    }
  }
  DesktopWindow = GetDesktopWindow();
  for ( i = GetWindow(hWnd: DesktopWindow, uCmd: 5u); ; i = GetWindow(hWnd: v6, uCmd: 2u) )
  {
    v6 = i;
    if ( i == nullptr )
      break;
    if ( AfxIsDescendant(a1: *((HWND *)TopLevelFrame + 7), hWnd: i) != 0 )
      SendMessageA(hWnd: v6, Msg: 0x36Du, wParam, lParam: 0);
  }
}


/* ============================================
   Address: 0x41DA71
   Function: sub_41DA71
   ============================================ */

int __stdcall sub_41DA71(int a1)
{
  int result; // eax
  int v2; // eax

  if ( *(_DWORD *)(a1 + 40) != 0 )
  {
LABEL_7:
    v2 = *(_DWORD *)(a1 + 32);
    if ( (v2 & 0x8000) != 0 )
    {
      if ( dword_42F8DC == 0 )
        return 1;
      BYTE1(v2) |= 0x40u;
      *(_DWORD *)(a1 + 32) = v2;
    }
    if ( dword_42F8DC != 0 )
      *(_BYTE *)(a1 + 45) |= 2u;
    return 1;
  }
  if ( (*((_BYTE *)AfxGetModuleState() + 24) & 8) != 0 )
    result = 1;
  else
    result = AfxEndDeferRegisterClass(a1: 8);
  if ( result != 0 )
  {
    *(_DWORD *)(a1 + 40) = "AfxFrameOrView42s";
    goto LABEL_7;
  }
  return result;
}


/* ============================================
   Address: 0x41DAC9
   Function: ?Create@CFrameWnd@@QAEHPBD0KABUtagRECT@@PAVCWnd@@0KPAUCCreateContext@@@Z
   ============================================ */

int __thiscall CFrameWnd::Create(
        CFrameWnd *this,
        char *a2,
        LPCSTR lpString,
        DWORD a4,
        const struct tagRECT *a5,
        struct CWnd *a6,
        LPCSTR lpMenuName,
        DWORD a8,
        struct CCreateContext *a9)
{
  HWND v9; // edi
  HMENU MenuA; // ebx
  struct AFX_MODULE_STATE *ModuleState; // eax

  v9 = nullptr;
  MenuA = nullptr;
  if ( lpMenuName != nullptr )
  {
    ModuleState = AfxGetModuleState();
    MenuA = LoadMenuA(hInstance: *((HINSTANCE *)ModuleState + 3), lpMenuName);
    if ( MenuA == nullptr )
    {
      (*(void (__thiscall **)(CFrameWnd *))(*(_DWORD *)this + 172))(a1: this);
      return 0;
    }
  }
  CString::operator=(this: (CFrameWnd *)((char *)this + 172), lpString);
  if ( a6 != nullptr )
    v9 = *((HWND *)a6 + 7);
  if ( !CWnd::CreateEx(
          this,
          a2: a8,
          a3: a2,
          a4: lpString,
          a5: a4,
          a6: a5->left,
          a7: a5->top,
          a8: a5->right - a5->left,
          a9: a5->bottom - a5->top,
          a10: v9,
          a11: MenuA,
          a12: a9) )
  {
    if ( MenuA != nullptr )
      DestroyMenu(hMenu: MenuA);
    return 0;
  }
  return 1;
}


/* ============================================
   Address: 0x41DB61
   Function: ?CreateView@CFrameWnd@@QAEPAVCWnd@@PAUCCreateContext@@I@Z
   ============================================ */

struct CWnd *__thiscall CFrameWnd::CreateView(CFrameWnd *this, CRuntimeClass **a2, unsigned int a3)
{
  struct CObject *Object; // eax
  CWnd *v4; // edi
  int v5; // eax
  CWnd *v7[4]; // [esp+Ch] [ebp-14h] BYREF
  CWnd *v8; // [esp+1Ch] [ebp-4h]

  v8 = this;
  Object = CRuntimeClass::CreateObject(this: *a2);
  v4 = Object;
  if ( Object == nullptr )
    return nullptr;
  v5 = *(_DWORD *)Object;
  memset(v7, 0, sizeof(v7));
  if ( (*(int (__thiscall **)(CWnd *, _DWORD, _DWORD, int, CWnd **, CWnd *, unsigned int, CRuntimeClass **))(v5 + 92))(
         a1: v4,
         a2: 0,
         a3: 0,
         a4: 1350565888,
         a5: v7,
         a6: v8,
         a7: a3,
         a8: a2) == 0 )
    return nullptr;
  if ( dword_42F8DC != 0 && (CWnd::GetExStyle(this: v4) & 0x200) != 0 )
    CWnd::ModifyStyleEx(this: v8, a2: 0x200u, a3: 0, a4: 0x20u);
  return v4;
}


/* ============================================
   Address: 0x41DBD9
   Function: sub_41DBD9
   ============================================ */

// ?OnCreateClient@CFrameWnd@@MAEHPAUtagCREATESTRUCTW@@PAUCCreateContext@@@Z
// doubtful name
int __thiscall sub_41DBD9(CFrameWnd *this, int a2, CRuntimeClass **a3)
{
  int result; // eax

  if ( a3 == nullptr )
    return 1;
  if ( *a3 == nullptr )
    return 1;
  result = (int)CFrameWnd::CreateView(this, a2: a3, a3: 0xE900u);
  if ( result != 0 )
    return 1;
  return result;
}


/* ============================================
   Address: 0x41DC0A
   Function: sub_41DC0A
   ============================================ */

int __thiscall sub_41DC0A(HWND *this, int a2, int a3)
{
  HWND v4; // edi

  if ( CWnd::Default((CWnd *)this) == -1 )
    return -1;
  v4 = *this;
  if ( (*((int (__thiscall **)(HWND *, int, int))*this + 57))(a1: this, a2, a3) == 0 )
    return -1;
  PostMessageA(hWnd: *(this + 7), Msg: 0x362u, wParam: 0xE001u, lParam: 0);
  (*((void (__thiscall **)(HWND *, int))v4 + 52))(a1: this, a2: 1);
  return 0;
}


/* ============================================
   Address: 0x41DC59
   Function: ?GetIconWndClass@CFrameWnd@@IAEPBDKI@Z
   ============================================ */

CHAR *__thiscall CFrameWnd::GetIconWndClass(CFrameWnd *this, const CHAR *a2, unsigned __int16 a3)
{
  struct AFX_MODULE_STATE *ModuleState; // eax
  HICON IconA; // edi
  struct AFX_MODULE_STATE *v6; // eax
  LPCSTR v8[12]; // [esp+8h] [ebp-58h] BYREF
  struct tagWNDCLASSA WndClass; // [esp+38h] [ebp-28h] BYREF

  ModuleState = AfxGetModuleState();
  IconA = LoadIconA(hInstance: *((HINSTANCE *)ModuleState + 3), lpIconName: (LPCSTR)a3);
  if ( IconA != nullptr
    && (memset(a1: v8, Val: 0, Size: sizeof(v8)),
        v8[8] = a2,
        (*(void (__thiscall **)(CFrameWnd *, LPCSTR *))(*(_DWORD *)this + 100))(a1: this, a2: v8),
        v8[10] != nullptr)
    && (v6 = AfxGetModuleState(),
        GetClassInfoA(hInstance: *((HINSTANCE *)v6 + 2), lpClassName: v8[10], lpWndClass: &WndClass))
    && WndClass.hIcon != IconA )
  {
    return AfxRegisterWndClass(a1: WndClass.style, a2: WndClass.hCursor, a3: WndClass.hbrBackground, a4: IconA);
  }
  else
  {
    return nullptr;
  }
}


/* ============================================
   Address: 0x41DCDC
   Function: ?LoadFrame@CFrameWnd@@UAEHIKPAVCWnd@@PAUCCreateContext@@@Z
   ============================================ */

int __thiscall CFrameWnd::LoadFrame(
        CFrameWnd *this,
        char *Str,
        const CHAR *a3,
        struct CWnd *a4,
        struct CCreateContext *a5)
{
  char *v5; // edi
  int v7; // eax
  char *IconWndClass; // eax

  v5 = Str;
  *((_DWORD *)this + 35) = Str;
  CString::CString(this: (CString *)&Str);
  if ( CString::LoadStringA(this: (CString *)&Str, uID: (UINT)v5) )
    AfxExtractSubString(a1: (CFrameWnd *)((char *)this + 172), Str, a3: 0, a4: 10);
  if ( (*((_BYTE *)AfxGetModuleState() + 24) & 8) != 0 )
    v7 = 1;
  else
    v7 = AfxEndDeferRegisterClass(a1: 8);
  if ( v7 != 0
    && (IconWndClass = CFrameWnd::GetIconWndClass(this, a2: a3, a3: (unsigned __int16)v5),
        CFrameWnd::Create(
          this,
          a2: IconWndClass,
          lpString: *((LPCSTR *)this + 43),
          a4: (DWORD)a3,
          a5: &stru_42F6F0,
          a6: a4,
          lpMenuName: (LPCSTR)(unsigned __int16)v5,
          a8: 0,
          a9: a5) != 0) )
  {
    *((_DWORD *)this + 17) = GetMenu(hWnd: *((HWND *)this + 7));
    CFrameWnd::LoadAccelTable(this, lpTableName: (const char *)(unsigned __int16)v5);
    if ( a5 == nullptr )
      CWnd::SendMessageToDescendants(
        a1: 0,
        hWnd: *((HWND *)this + 7),
        Msg: (CException *)0x364,
        wParam: 0,
        lParam: 0,
        a6: 1,
        a7: 1);
    CString::~CString(this: (CString *)&Str);
    return 1;
  }
  else
  {
    CString::~CString(this: (CString *)&Str);
    return 0;
  }
}


/* ============================================
   Address: 0x41DDC7
   Function: ?OnUpdateFrameMenu@CFrameWnd@@UAEXPAUHMENU__@@@Z
   ============================================ */

void __thiscall CFrameWnd::OnUpdateFrameMenu(HMENU *this, HMENU hMenu)
{
  HMENU v2; // edi
  int v4; // eax

  v2 = hMenu;
  if ( hMenu == nullptr )
  {
    v4 = (*((int (__thiscall **)(HMENU *))*this + 49))(a1: this);
    if ( v4 != 0 )
      v2 = (HMENU)(*(int (__thiscall **)(int))(*(_DWORD *)v4 + 172))(a1: v4);
    if ( v2 == nullptr )
      v2 = *(this + 17);
  }
  SetMenu(hWnd: (HWND)*(this + 7), hMenu: v2);
}


/* ============================================
   Address: 0x41DE01
   Function: ?OnClose@CFrameWnd@@IAEXXZ
   ============================================ */

void __thiscall CFrameWnd::OnClose(HWND *this)
{
  int (__stdcall *v2)(HWND *); // eax
  int v3; // eax
  _DWORD *v4; // edi
  int v5; // esi
  int v6; // esi
  CWnd *v7; // eax
  HWND v8; // [esp+Ch] [ebp-Ch]
  int v9; // [esp+10h] [ebp-8h]
  int v10; // [esp+14h] [ebp-4h] BYREF

  v2 = (int (__stdcall *)(HWND *))*(this + 39);
  if ( v2 == nullptr || v2(a1: this) != 0 )
  {
    v8 = *this;
    v3 = (*((int (__thiscall **)(HWND *))*this + 49))(a1: this);
    v4 = (_DWORD *)v3;
    if ( v3 == 0 || (*(int (__thiscall **)(int, HWND *))(*(_DWORD *)v3 + 148))(a1: v3, a2: this) != 0 )
    {
      v5 = *((_DWORD *)AfxGetModuleState() + 1);
      if ( *(HWND **)(v5 + 28) == this )
      {
        if ( v4 == nullptr && (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 144))(a1: v5) == 0 )
          return;
        CWinApp::HideApplication(this: (CWnd **)v5);
        CWinApp::CloseAllDocuments(this: (CWinApp *)v5, a2: 0);
        if ( AfxOleCanExitApp() == 0 )
        {
          AfxOleSetUserCtrl(a1: 0);
          return;
        }
        if ( *((_BYTE *)AfxGetModuleState() + 20) == 0 && *(_DWORD *)(v5 + 28) == 0 )
        {
          AfxPostQuitMessage(nExitCode: 0);
          return;
        }
      }
      if ( v4 != nullptr && v4[18] != 0 )
      {
        v6 = *v4;
        v9 = 0;
        v10 = (*(int (__thiscall **)(_DWORD *))(*v4 + 104))(a1: v4);
        if ( v10 != 0 )
        {
          while ( 1 )
          {
            v7 = (CWnd *)(*(int (__thiscall **)(_DWORD *, int *))(v6 + 108))(a1: v4, a2: &v10);
            if ( CWnd::GetParentFrame(this: v7) != this )
              break;
            if ( v10 == 0 )
              goto LABEL_20;
          }
          v9 = 1;
        }
LABEL_20:
        if ( v9 == 0 )
        {
          (*(void (__thiscall **)(_DWORD *))(v6 + 132))(a1: v4);
          return;
        }
        (*(void (__thiscall **)(_DWORD *, HWND *))(v6 + 156))(a1: v4, a2: this);
      }
      (*((void (__thiscall **)(HWND *))v8 + 24))(a1: this);
    }
  }
}


/* ============================================
   Address: 0x41DF0A
   Function: ?OnDestroy@CFrameWnd@@IAEXXZ
   ============================================ */

void __thiscall CFrameWnd::OnDestroy(HWND *this)
{
  HMENU v2; // edi

  CFrameWnd::DestroyDockBars((CFrameWnd *)this);
  if ( *(this + 17) != nullptr )
  {
    v2 = (HMENU)*(this + 17);
    if ( GetMenu(hWnd: *(this + 7)) != v2 )
      SetMenu(hWnd: *(this + 7), hMenu: v2);
  }
  if ( *(HWND **)(*((_DWORD *)AfxGetModuleState() + 1) + 28) == this )
    WinHelpA(hWndMain: *(this + 7), lpszHelp: nullptr, uCommand: 2u, dwData: 0);
  CWnd::OnDestroy((CWnd *)this);
}


/* ============================================
   Address: 0x41DF59
   Function: ?OnCmdMsg@CFrameWnd@@UAEHIHPAXPAUAFX_CMDHANDLERINFO@@@Z
   ============================================ */

BOOL __thiscall CFrameWnd::OnCmdMsg(
        CFrameWnd *this,
        unsigned int a2,
        unsigned int a3,
        _DWORD *Buf1,
        struct AFX_CMDHANDLERINFO *a5)
{
  int v6; // eax
  int v7; // eax
  BOOL result; // eax

  v6 = sub_41E476(a1: this);
  result = true;
  if ( (v6 == 0
     || (*(int (__thiscall **)(int, unsigned int, unsigned int, _DWORD *, struct AFX_CMDHANDLERINFO *))(*(_DWORD *)v6 + 20))(
          a1: v6,
          a2,
          a3,
          a4: Buf1,
          a5) == 0)
    && CCmdTarget::OnCmdMsg(this, a2, a3, Buf1, a5) == 0 )
  {
    v7 = *((_DWORD *)AfxGetModuleState() + 1);
    if ( v7 == 0
      || (*(int (__thiscall **)(int, unsigned int, unsigned int, _DWORD *, struct AFX_CMDHANDLERINFO *))(*(_DWORD *)v7 + 20))(
           a1: v7,
           a2,
           a3,
           a4: Buf1,
           a5) == 0 )
    {
      return false;
    }
  }
  return result;
}


/* ============================================
   Address: 0x41DFC5
   Function: ?OnHScroll@CFrameWnd@@IAEXIIPAVCScrollBar@@@Z
   ============================================ */

void __thiscall CFrameWnd::OnHScroll(CFrameWnd *this, unsigned int a2, unsigned int a3, struct CScrollBar *a4)
{
  int v4; // esi
  const struct tagMSG *CurrentMessage; // eax

  v4 = sub_41E476(a1: this);
  if ( v4 != 0 )
  {
    CurrentMessage = CWnd::GetCurrentMessage();
    SendMessageA(hWnd: *(HWND *)(v4 + 28), Msg: 0x114u, wParam: CurrentMessage->wParam, lParam: CurrentMessage->lParam);
  }
}


/* ============================================
   Address: 0x41DFEE
   Function: ?OnVScroll@CFrameWnd@@IAEXIIPAVCScrollBar@@@Z
   ============================================ */

void __thiscall CFrameWnd::OnVScroll(CFrameWnd *this, unsigned int a2, unsigned int a3, struct CScrollBar *a4)
{
  int v4; // esi
  const struct tagMSG *CurrentMessage; // eax

  v4 = sub_41E476(a1: this);
  if ( v4 != 0 )
  {
    CurrentMessage = CWnd::GetCurrentMessage();
    SendMessageA(hWnd: *(HWND *)(v4 + 28), Msg: 0x115u, wParam: CurrentMessage->wParam, lParam: CurrentMessage->lParam);
  }
}


/* ============================================
   Address: 0x41E017
   Function: ?OnActivateTopLevel@CFrameWnd@@IAEJIJ@Z
   ============================================ */

int __thiscall CFrameWnd::OnActivateTopLevel(CFrameWnd *this, int a2, int a3)
{
  int v4; // edi
  int v5; // ecx
  BOOL v6; // eax
  int v7; // eax
  int v8; // eax

  CWnd::OnActivateTopLevel(this, a2, a3);
  v4 = *(_DWORD *)this;
  (*(void (__thiscall **)(CFrameWnd *))(*(_DWORD *)this + 248))(a1: this);
  v5 = *((_DWORD *)this + 26);
  if ( v5 != 0 )
  {
    v6 = (_WORD)a2 != 0 && HIWORD(a2) == 0;
    (*(void (__thiscall **)(int, BOOL))(*(_DWORD *)v5 + 96))(a1: v5, a2: v6);
  }
  if ( *((CFrameWnd **)AfxGetThread() + 7) == this )
  {
    v7 = sub_41E476(a1: this);
    if ( v7 != 0 || (v8 = (*(int (__thiscall **)(CFrameWnd *))(v4 + 200))(a1: this), (v7 = sub_41E476(a1: v8)) != 0) )
      (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v7 + 236))(a1: v7, a2: 0, a3: v7, a4: v7);
  }
  return 0;
}


/* ============================================
   Address: 0x41E093
   Function: ?OnActivate@CFrameWnd@@IAEXIPAVCWnd@@H@Z
   ============================================ */

void __thiscall CFrameWnd::OnActivate(CFrameWnd *this, unsigned int a2, struct CWnd *a3, int a4)
{
  struct CFrameWnd *TopLevelFrame; // esi
  BOOL v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // eax

  CWnd::Default(this);
  if ( (CWnd::GetStyle(this) & 0x40000000) != 0 )
    TopLevelFrame = this;
  else
    TopLevelFrame = CWnd::GetTopLevelFrame(this);
  if ( a2 != 0 )
    a3 = this;
  v7 = TopLevelFrame == a3
    || TopLevelFrame == CWnd::GetTopLevelFrame(this: a3)
    && SendMessageA(hWnd: *((HWND *)a3 + 7), Msg: 0x36Du, wParam: 0x40u, lParam: 0) != 0;
  *((_DWORD *)TopLevelFrame + 9) &= ~0x20u;
  if ( v7 )
    *((_DWORD *)TopLevelFrame + 9) |= 0x20u;
  v8 = -v7;
  LOBYTE(v8) = v8 & 0xFC;
  CFrameWnd::NotifyFloatingWindows(this, wParam: v8 + 8);
  v9 = sub_41E476(a1: this);
  if ( v9 != 0
    || (v10 = (*(int (__thiscall **)(CFrameWnd *))(*(_DWORD *)this + 200))(a1: this), (v9 = sub_41E476(a1: v10)) != 0) )
  {
    if ( a2 != 0 && a4 == 0 )
      (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)v9 + 236))(a1: v9, a2: 1, a3: v9, a4: v9);
    (*(void (__thiscall **)(int, unsigned int, CFrameWnd *))(*(_DWORD *)v9 + 240))(a1: v9, a2, a3: this);
  }
}


/* ============================================
   Address: 0x41E167
   Function: ?OnNcActivate@CFrameWnd@@IAEHH@Z
   ============================================ */

int __thiscall CFrameWnd::OnNcActivate(CFrameWnd *this, int a2)
{
  int v3; // edi

  if ( (*((_BYTE *)this + 36) & 0x20) != 0 )
    v3 = 1;
  else
    v3 = a2;
  if ( CWnd::IsWindowEnabled(this) == 0 )
    v3 = 0;
  return (*(int (__thiscall **)(CFrameWnd *, int, int, _DWORD))(*(_DWORD *)this + 168))(
           a1: this,
           a2: 134,
           a3: v3,
           a4: 0);
}


/* ============================================
   Address: 0x41E19E
   Function: ?OnSysCommand@CFrameWnd@@IAEXIJ@Z
   ============================================ */

void __thiscall CFrameWnd::OnSysCommand(HWND *this, __int16 a2, int a3)
{
  struct CFrameWnd *TopLevelFrame; // eax
  unsigned int v5; // ecx

  TopLevelFrame = CWnd::GetTopLevelFrame((CWnd *)this);
  v5 = a2 & 0xFFF0;
  if ( *((_DWORD *)TopLevelFrame + 20) == 0 )
    goto LABEL_5;
  if ( v5 > 0xF010 )
  {
    if ( v5 != 61472 && v5 != 61488 && v5 != 61504 && v5 != 61520 && v5 != 61536 && v5 != 61728 && v5 != 61744 )
      goto LABEL_5;
  }
  else if ( v5 != 61456 && v5 != 61440 )
  {
LABEL_5:
    CWnd::Default((CWnd *)this);
    return;
  }
  if ( SendMessageA(hWnd: *(this + 7), Msg: 0x365u, wParam: 0, lParam: ((v5 - 61440) >> 4) + 126720) == 0 )
    SendMessageA(hWnd: *(this + 7), Msg: 0x111u, wParam: 0xE147u, lParam: 0);
}


/* ============================================
   Address: 0x41E235
   Function: ?OnDropFiles@CFrameWnd@@IAEXPAUHDROP__@@@Z
   ============================================ */

void __thiscall CFrameWnd::OnDropFiles(HWND *this, HDROP hDrop)
{
  HWND v2; // eax
  UINT v3; // ebx
  int v4; // edi
  CHAR szFile[260]; // [esp+Ch] [ebp-10Ch] BYREF
  void (__thiscall *v6)(int, CHAR *); // [esp+110h] [ebp-8h]
  UINT FileA; // [esp+114h] [ebp-4h]

  v2 = SetActiveWindow(hWnd: *(this + 7));
  CWnd::FromHandle(a1: v2);
  v3 = 0;
  FileA = DragQueryFileA(hDrop, iFile: 0xFFFFFFFF, lpszFile: nullptr, cch: 0);
  v4 = *((_DWORD *)AfxGetModuleState() + 1);
  if ( FileA != 0 )
  {
    v6 = *(void (__thiscall **)(int, CHAR *))(*(_DWORD *)v4 + 132);
    do
    {
      DragQueryFileA(hDrop, iFile: v3, lpszFile: szFile, cch: 0x104u);
      v6(a1: v4, a2: szFile);
      ++v3;
    }
    while ( v3 < FileA );
  }
  DragFinish(hDrop);
}


/* ============================================
   Address: 0x41E2B0
   Function: ?OnQueryEndSession@CFrameWnd@@IAEHXZ
   ============================================ */

int __thiscall CFrameWnd::OnQueryEndSession(CFrameWnd *this)
{
  CFrameWnd **v2; // eax

  v2 = *((CFrameWnd ***)AfxGetModuleState() + 1);
  if ( v2[7] == this )
    return (*((int (__thiscall **)(CFrameWnd **))*v2 + 36))(a1: v2);
  else
    return 1;
}


/* ============================================
   Address: 0x41E2D1
   Function: ?OnEndSession@CFrameWnd@@IAEXH@Z
   ============================================ */

void __thiscall CFrameWnd::OnEndSession(CFrameWnd *this, int a2)
{
  CFrameWnd **v3; // esi

  v3 = *((CFrameWnd ***)AfxGetModuleState() + 1);
  if ( a2 != 0 && v3[7] == this )
  {
    AfxOleSetUserCtrl(a1: 1);
    CWinApp::CloseAllDocuments(this: (CWinApp *)v3, a2: 1);
    (*((void (__thiscall **)(CFrameWnd **))*v3 + 28))(a1: v3);
  }
}


/* ============================================
   Address: 0x41E305
   Function: ?OnDDEInitiate@CFrameWnd@@IAEJIJ@Z
   ============================================ */

int __thiscall CFrameWnd::OnDDEInitiate(CFrameWnd *this, HWND hWnd, int a3)
{
  int v3; // esi
  CHAR Buffer[260]; // [esp+4h] [ebp-108h] BYREF
  CFrameWnd *v6; // [esp+108h] [ebp-4h]

  v6 = this;
  v3 = *((_DWORD *)AfxGetModuleState() + 1);
  if ( (_WORD)a3 != 0 && HIWORD(a3) != 0 && a3 == *(_DWORD *)(v3 + 176) )
  {
    GlobalGetAtomNameA(nAtom: *(_WORD *)(v3 + 176), lpBuffer: Buffer, nSize: 259);
    GlobalAddAtomA(lpString: Buffer);
    GlobalGetAtomNameA(nAtom: *(_WORD *)(v3 + 178), lpBuffer: Buffer, nSize: 259);
    GlobalAddAtomA(lpString: Buffer);
    SendMessageA(hWnd, Msg: 0x3E4u, wParam: *((_DWORD *)v6 + 7), lParam: *(_DWORD *)(v3 + 176));
  }
  return 0;
}


/* ============================================
   Address: 0x41E3C0
   Function: ?OnDDEExecute@CFrameWnd@@IAEJIJ@Z
   ============================================ */

int __thiscall CFrameWnd::OnDDEExecute(CFrameWnd *this, HWND hWnd, LPARAM lParam)
{
  const CHAR *v4; // eax
  LPARAM v5; // eax
  struct AFX_MODULE_STATE *ModuleState; // eax
  CHAR String1[520]; // [esp+Ch] [ebp-210h] BYREF
  unsigned int puiLo; // [esp+214h] [ebp-8h] BYREF
  unsigned int puiHi; // [esp+218h] [ebp-4h] BYREF

  UnpackDDElParam(msg: 0x3E8u, lParam, &puiLo, &puiHi);
  v4 = (const CHAR *)GlobalLock(hMem: (HGLOBAL)puiHi);
  lstrcpynA(lpString1: String1, lpString2: v4, iMaxLength: 520);
  GlobalUnlock(hMem: (HGLOBAL)puiHi);
  v5 = ReuseDDElParam(lParam, msgIn: 0x3E8u, msgOut: 0x3E4u, uiLo: 0x8000u, uiHi: puiHi);
  PostMessageA(hWnd, Msg: 0x3E4u, wParam: *((_DWORD *)this + 7), lParam: v5);
  if ( CWnd::IsWindowEnabled(this) != 0 )
  {
    ModuleState = AfxGetModuleState();
    (*(void (__thiscall **)(_DWORD, CHAR *))(**((_DWORD **)ModuleState + 1) + 156))(
      a1: *((_DWORD *)ModuleState + 1),
      a2: String1);
  }
  return 0;
}


/* ============================================
   Address: 0x41E45B
   Function: ?OnDDETerminate@CFrameWnd@@IAEJIJ@Z
   ============================================ */

int __thiscall CFrameWnd::OnDDETerminate(CFrameWnd *this, HWND hWnd, LPARAM lParam)
{
  PostMessageA(hWnd, Msg: 0x3E1u, wParam: *((_DWORD *)this + 7), lParam);
  return 0;
}


/* ============================================
   Address: 0x41E476
   Function: sub_41E476
   ============================================ */

int __thiscall sub_41E476(_DWORD *this)
{
  return *(this + 38);
}


/* ============================================
   Address: 0x41E47D
   Function: ?SetActiveView@CFrameWnd@@QAEXPAVCView@@H@Z
   ============================================ */

void __thiscall CFrameWnd::SetActiveView(CFrameWnd *this, struct CView *a2, int a3)
{
  struct CView *v4; // edi

  v4 = *((struct CView **)this + 38);
  if ( a2 != v4 )
  {
    *((_DWORD *)this + 38) = 0;
    if ( v4 != nullptr )
      (*(void (__thiscall **)(struct CView *, _DWORD, struct CView *, struct CView *))(*(_DWORD *)v4 + 236))(
        a1: v4,
        a2: 0,
        a3: a2,
        a4: v4);
    if ( *((_DWORD *)this + 38) == 0 )
    {
      *((_DWORD *)this + 38) = a2;
      if ( a2 != nullptr && a3 != 0 )
        (*(void (__thiscall **)(struct CView *, int, struct CView *, struct CView *))(*(_DWORD *)a2 + 236))(
          a1: a2,
          a2: 1,
          a3: a2,
          a4: v4);
    }
  }
}


/* ============================================
   Address: 0x41E4D7
   Function: ?OnSetFocus@CFrameWnd@@IAEXPAVCWnd@@@Z
   ============================================ */

void __thiscall CFrameWnd::OnSetFocus(CWnd **this, struct CWnd *a2)
{
  if ( *(this + 38) != nullptr )
    CWnd::SetFocus(this: *(this + 38));
  else
    CWnd::Default((CWnd *)this);
}


/* ============================================
   Address: 0x41E4F2
   Function: ?GetActiveDocument@CFrameWnd@@UAEPAVCDocument@@XZ
   ============================================ */

struct CDocument *__thiscall CFrameWnd::GetActiveDocument(CFrameWnd *this)
{
  int v1; // eax

  v1 = sub_41E476(this);
  if ( v1 != 0 )
    return *(struct CDocument **)(v1 + 60);
  else
    return nullptr;
}


/* ============================================
   Address: 0x41E502
   Function: ?ShowControlBar@CFrameWnd@@QAEXPAVCControlBar@@HH@Z
   ============================================ */

void __thiscall CFrameWnd::ShowControlBar(CFrameWnd *this, struct CControlBar *a2, int a3, int a4)
{
  struct CFrameWnd *DockingFrame; // esi
  UINT v5; // eax
  int v6; // ecx
  int v7; // eax

  DockingFrame = CControlBar::GetDockingFrame(this: a2);
  if ( a4 != 0 )
  {
    (*(void (__thiscall **)(struct CControlBar *, int))(*(_DWORD *)a2 + 204))(a1: a2, a2: a3);
    *((_DWORD *)DockingFrame + 46) |= 0xCu;
  }
  else
  {
    v5 = -(a3 != 0);
    LOBYTE(v5) = v5 & 0xC0;
    v5 += 128;
    LOBYTE(v5) = v5 | 0x17;
    CWnd::SetWindowPos(this: a2, hWndInsertAfter: nullptr, X: 0, Y: 0, a5: 0, cy: 0, uFlags: v5);
    (*(void (__thiscall **)(struct CControlBar *, int))(*(_DWORD *)a2 + 204))(a1: a2, a2: a3);
    if ( a3 != 0 || CControlBar::IsFloating(this: a2) == 0 )
      (*(void (__thiscall **)(struct CFrameWnd *, _DWORD))(*(_DWORD *)DockingFrame + 208))(a1: DockingFrame, a2: 0);
  }
  if ( CControlBar::IsFloating(this: a2) != 0 )
  {
    v6 = *((_DWORD *)a2 + 28);
    if ( v6 != 0 )
      v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 232))(a1: v6);
    else
      v7 = a3 != 0;
    if ( v7 == 1 && a3 != 0 )
    {
      *((_DWORD *)DockingFrame + 34) = -1;
      if ( a4 == 0 )
      {
        CWnd::ShowWindow(this: DockingFrame, nCmdShow: 8);
        return;
      }
      *((_DWORD *)DockingFrame + 34) = 8;
LABEL_21:
      (*(void (__thiscall **)(struct CFrameWnd *, _DWORD))(*(_DWORD *)DockingFrame + 208))(a1: DockingFrame, a2: 0);
      return;
    }
    if ( v7 != 0 )
    {
      if ( a4 != 0 )
        return;
      goto LABEL_21;
    }
    *((_DWORD *)DockingFrame + 34) = -1;
    if ( a4 != 0 )
      *((_DWORD *)DockingFrame + 34) = 0;
    else
      CWnd::ShowWindow(this: DockingFrame, nCmdShow: 0);
  }
}


/* ============================================
   Address: 0x41E5FD
   Function: ?OnInitMenuPopup@CFrameWnd@@IAEXPAVCMenu@@IH@Z
   ============================================ */

void __thiscall CFrameWnd::OnInitMenuPopup(HWND *this, HMENU *a2, unsigned int a3, int a4)
{
  struct CWnd *TopLevelParent; // eax
  HMENU Menu; // eax
  HMENU v7; // edi
  int v8; // ebx
  int v9; // eax
  UINT MenuItemID; // eax
  HMENU SubMenu; // eax
  struct CMenu *v12; // eax
  UINT v13; // eax
  BOOL v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ebx
  UINT v17; // eax
  _BYTE v18[4]; // [esp+Ch] [ebp-2Ch] BYREF
  UINT v19; // [esp+10h] [ebp-28h]
  int nPos; // [esp+14h] [ebp-24h]
  HMENU *v21; // [esp+18h] [ebp-20h]
  struct CMenu *v22; // [esp+1Ch] [ebp-1Ch]
  unsigned int i; // [esp+2Ch] [ebp-Ch]
  struct CMenu *v24; // [esp+30h] [ebp-8h]
  struct CCmdTarget *v25; // [esp+34h] [ebp-4h]
  int MenuItemCount; // [esp+48h] [ebp+10h]

  v25 = (struct CCmdTarget *)this;
  AfxCancelModes(hWnd: *(this + 7));
  if ( a4 == 0 )
  {
    CCmdUI::CCmdUI(this: (CCmdUI *)v18);
    v21 = a2;
    if ( *((HMENU *)AfxGetThreadState() + 21) == a2[1] )
    {
      v24 = (struct CMenu *)a2;
    }
    else if ( GetMenu(hWnd: *(this + 7)) != nullptr )
    {
      TopLevelParent = CWnd::GetTopLevelParent((CWnd *)this);
      if ( TopLevelParent != nullptr )
      {
        Menu = GetMenu(hWnd: *((HWND *)TopLevelParent + 7));
        v7 = Menu;
        if ( Menu != nullptr )
        {
          v8 = 0;
          MenuItemCount = GetMenuItemCount(hMenu: Menu);
          if ( MenuItemCount > 0 )
          {
            while ( GetSubMenu(hMenu: v7, nPos: v8) != a2[1] )
            {
              if ( ++v8 >= MenuItemCount )
                goto LABEL_12;
            }
            v24 = CMenu::FromHandle(a1: v7);
          }
        }
      }
    }
LABEL_12:
    v9 = GetMenuItemCount(hMenu: a2[1]);
    nPos = 0;
    for ( i = v9; nPos < i; ++nPos )
    {
      MenuItemID = GetMenuItemID(hMenu: a2[1], nPos);
      v19 = MenuItemID;
      if ( MenuItemID != 0 )
      {
        if ( MenuItemID != -1 )
        {
          v22 = nullptr;
          v14 = *((_DWORD *)v25 + 15) != 0 && MenuItemID < 0xF000;
          CCmdUI::DoUpdate(this: (CCmdUI *)v18, a2: v25, a3: v14);
LABEL_24:
          v15 = GetMenuItemCount(hMenu: a2[1]);
          v16 = v15;
          if ( v15 < i )
          {
            for ( nPos += v15 - i; nPos < v16; ++nPos )
            {
              v17 = GetMenuItemID(hMenu: a2[1], nPos);
              if ( v17 != v19 )
                break;
            }
          }
          i = v16;
          continue;
        }
        SubMenu = GetSubMenu(hMenu: a2[1], nPos);
        v12 = CMenu::FromHandle(a1: SubMenu);
        v22 = v12;
        if ( v12 != nullptr )
        {
          v13 = GetMenuItemID(hMenu: *((HMENU *)v12 + 1), nPos: 0);
          v19 = v13;
          if ( v13 != 0 && v13 != -1 )
          {
            CCmdUI::DoUpdate(this: (CCmdUI *)v18, a2: v25, a3: 0);
            goto LABEL_24;
          }
        }
      }
    }
  }
}


/* ============================================
   Address: 0x41E762
   Function: ?OnMenuSelect@CFrameWnd@@IAEXIIPAUHMENU__@@@Z
   ============================================ */

void __thiscall CFrameWnd::OnMenuSelect(CFrameWnd *this, unsigned int a2, unsigned int a3, HMENU a4)
{
  struct CFrameWnd *TopLevelFrame; // eax
  int v6; // eax
  unsigned int v7; // ecx
  HWND Parent; // eax

  TopLevelFrame = CWnd::GetTopLevelFrame(this);
  if ( a3 != 0xFFFF )
  {
    v7 = a2;
    if ( a2 == 0 || (a3 & 0x810) != 0 )
    {
      *((_DWORD *)this + 36) = 0;
      goto LABEL_16;
    }
    if ( a2 < 0xF000 || a2 >= 0xF1F0 )
    {
      if ( a2 >= 0xFF00 )
      {
        *((_DWORD *)this + 36) = 61215;
        goto LABEL_16;
      }
    }
    else
    {
      v7 = ((a2 - 61440) >> 4) + 61184;
    }
    *((_DWORD *)this + 36) = v7;
LABEL_16:
    *((_DWORD *)TopLevelFrame + 9) |= 0x40u;
    goto LABEL_17;
  }
  *((_DWORD *)this + 9) &= ~0x40u;
  if ( *((_DWORD *)TopLevelFrame + 20) != 0 )
    *((_DWORD *)this + 36) = 57346;
  else
    *((_DWORD *)this + 36) = 57345;
  SendMessageA(hWnd: *((HWND *)this + 7), Msg: 0x362u, wParam: *((_DWORD *)this + 36), lParam: 0);
  v6 = (*(int (__thiscall **)(CFrameWnd *))(*(_DWORD *)this + 220))(a1: this);
  if ( v6 != 0 )
    UpdateWindow(hWnd: *(HWND *)(v6 + 28));
LABEL_17:
  if ( *((_DWORD *)this + 36) != *((_DWORD *)this + 37) )
  {
    Parent = GetParent(hWnd: *((HWND *)this + 7));
    if ( CWnd::FromHandle(a1: Parent) != nullptr )
      PostMessageA(hWnd: *((HWND *)this + 7), Msg: 0x36Au, wParam: 0, lParam: 0);
  }
}


/* ============================================
   Address: 0x41E851
   Function: ?GetMessageString@CFrameWnd@@UBEXIAAVCString@@@Z
   ============================================ */

void __thiscall CFrameWnd::GetMessageString(CFrameWnd *this, UINT uID, struct CString *a3)
{
  unsigned __int8 *Buffer; // esi
  unsigned __int8 *v4; // eax

  Buffer = (unsigned __int8 *)CString::GetBuffer(this: a3, a2: 255);
  if ( AfxLoadString(uID, lpBuffer: (LPSTR)Buffer, cchBufferMax: 0x100u) != 0 )
  {
    v4 = _mbschr(Str: Buffer, C: 0xAu);
    if ( v4 != nullptr )
      *v4 = 0;
  }
  CString::ReleaseBuffer(this: a3, a2: -1);
}


/* ============================================
   Address: 0x41E895
   Function: ?OnPopMessageString@CFrameWnd@@IAEJIJ@Z
   ============================================ */

LRESULT __thiscall CFrameWnd::OnPopMessageString(HWND *this, WPARAM wParam, LPARAM lParam)
{
  if ( (*(_BYTE *)(this + 9) & 0x40) != 0 )
    return 0;
  else
    return SendMessageA(hWnd: *(this + 7), Msg: 0x362u, wParam, lParam);
}


/* ============================================
   Address: 0x41E8B8
   Function: ?OnSetMessageString@CFrameWnd@@IAEJIJ@Z
   ============================================ */

int __thiscall CFrameWnd::OnSetMessageString(CFrameWnd *this, unsigned int a2, char *a3)
{
  int v4; // eax
  int v5; // edi
  unsigned int v6; // ebx
  HWND *ParentFrame; // eax
  int v9; // [esp+Ch] [ebp-1Ch]
  CWnd *v10; // [esp+10h] [ebp-18h]
  char *v11; // [esp+14h] [ebp-14h] BYREF
  char *v12; // [esp+18h] [ebp-10h]
  int v13; // [esp+24h] [ebp-4h]

  v4 = *((_DWORD *)this + 37);
  v5 = *(_DWORD *)this;
  *((_DWORD *)this + 9) &= ~0x40u;
  v9 = v4;
  v10 = (CWnd *)(*(int (**)(void))(v5 + 220))();
  if ( v10 != nullptr )
  {
    v12 = nullptr;
    CString::CString(this: (CString *)&v11);
    v13 = 0;
    if ( a3 != nullptr )
    {
      v6 = a2;
      v12 = a3;
    }
    else
    {
      v6 = a2;
      if ( a2 != 0 )
      {
        if ( a2 == 61190 && *((_DWORD *)this + 39) != 0 )
          v6 = 61445;
        (*(void (__thiscall **)(CFrameWnd *, unsigned int, char **))(v5 + 204))(a1: this, a2: v6, a3: &v11);
        v12 = v11;
      }
    }
    CWnd::SetWindowTextA(this: v10, lpString: v12);
    ParentFrame = CWnd::GetParentFrame(this: v10);
    if ( ParentFrame != nullptr )
    {
      ParentFrame[37] = (HWND)v6;
      ParentFrame[36] = (HWND)v6;
    }
    v13 = -1;
    CString::~CString(this: (CString *)&v11);
  }
  else
  {
    v6 = a2;
  }
  *((_DWORD *)this + 37) = v6;
  *((_DWORD *)this + 36) = v6;
  return v9;
}


/* ============================================
   Address: 0x41E98D
   Function: ?GetMessageBar@CFrameWnd@@UAEPAVCWnd@@XZ
   ============================================ */

struct CWnd *__thiscall CFrameWnd::GetMessageBar(HWND *this)
{
  return CWnd::GetDescendantWindow(hDlg: *(this + 7), nIDDlgItem: 59393, a3: 1);
}


/* ============================================
   Address: 0x41E99D
   Function: ?OnEnterIdle@CFrameWnd@@IAEXIPAVCWnd@@@Z
   ============================================ */

void __thiscall CFrameWnd::OnEnterIdle(CFrameWnd *this, unsigned int a2, struct CWnd *a3)
{
  CWnd::OnEnterIdle(this, a2, a3);
  if ( a2 == 2 && *((_DWORD *)this + 36) != *((_DWORD *)this + 37) )
    CFrameWnd::SetMessageText(this, a2: *((_DWORD *)this + 36));
}


/* ============================================
   Address: 0x41E9CE
   Function: ?SetMessageText@CFrameWnd@@QAEXI@Z
   ============================================ */

void __thiscall CFrameWnd::SetMessageText(HWND *this, WPARAM wParam)
{
  SendMessageA(hWnd: *(this + 7), Msg: 0x362u, wParam, lParam: 0);
}


/* ============================================
   Address: 0x41E9E5
   Function: ?DestroyDockBars@CFrameWnd@@QAEXXZ
   ============================================ */

void __thiscall CFrameWnd::DestroyDockBars(CFrameWnd *this)
{
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  int v4; // edi
  CPlex *v5; // esi
  CPlex *v6; // eax
  CWnd *v7; // ecx
  HWND *ParentFrame; // eax
  CPlex *v9[7]; // [esp+8h] [ebp-28h] BYREF
  int v10; // [esp+2Ch] [ebp-4h]

  sub_415E02(this: v9, a2: 10);
  v10 = 0;
  v2 = *((_DWORD **)this + 28);
  while ( v2 != nullptr )
  {
    v3 = v2;
    v2 = (_DWORD *)*v2;
    v4 = v3[2];
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 216))(a1: v4) != 0 )
      sub_415F02(this: (int *)v9, a2: v4);
  }
  v5 = v9[1];
  while ( v5 != nullptr )
  {
    v6 = v5;
    v5 = *(CPlex **)v5;
    v7 = *((CWnd **)v6 + 2);
    if ( *((_DWORD *)v7 + 30) != 0 )
    {
      ParentFrame = CWnd::GetParentFrame(this: v7);
      (*((void (__thiscall **)(HWND *))*ParentFrame + 24))(a1: ParentFrame);
    }
    else
    {
      (*(void (__thiscall **)(CWnd *))(*(_DWORD *)v7 + 96))(a1: v7);
    }
  }
  v10 = -1;
  sub_415E61(this: v9);
}


/* ============================================
   Address: 0x41EA6E
   Function: ?GetControlBar@CFrameWnd@@QAEPAVCControlBar@@I@Z
   ============================================ */

struct CControlBar *__thiscall CFrameWnd::GetControlBar(CFrameWnd *this, unsigned int a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  int v4; // edi

  if ( a2 != 0 )
  {
    v2 = *((_DWORD **)this + 28);
    while ( v2 != nullptr )
    {
      v3 = v2;
      v2 = (_DWORD *)*v2;
      v4 = v3[2];
      if ( (unsigned __int16)GetDlgCtrlID(hWnd: *(HWND *)(v4 + 28)) == a2 )
        return (struct CControlBar *)v4;
    }
  }
  return nullptr;
}


/* ============================================
   Address: 0x41EAA2
   Function: ?OnUpdateControlBarMenu@CFrameWnd@@QAEXPAVCCmdUI@@@Z
   ============================================ */

void __thiscall CFrameWnd::OnUpdateControlBarMenu(CFrameWnd *this, struct CCmdUI *a2)
{
  CWnd *ControlBar; // eax
  int v3; // edi
  LONG Style; // eax

  ControlBar = CFrameWnd::GetControlBar(this, a2: *((_DWORD *)a2 + 1));
  if ( ControlBar != nullptr )
  {
    v3 = *(_DWORD *)a2;
    Style = CWnd::GetStyle(this: ControlBar);
    (*(void (__thiscall **)(struct CCmdUI *, bool))(v3 + 4))(a1: a2, a2: (Style & 0x10000000) != 0);
  }
  else
  {
    *((_DWORD *)a2 + 7) = 1;
  }
}


/* ============================================
   Address: 0x41EAD7
   Function: ?OnBarCheck@CFrameWnd@@QAEHI@Z
   ============================================ */

int __thiscall CFrameWnd::OnBarCheck(CFrameWnd *this, unsigned int a2)
{
  CWnd *ControlBar; // eax
  struct CControlBar *v4; // esi
  LONG Style; // eax

  ControlBar = CFrameWnd::GetControlBar(this, a2);
  v4 = ControlBar;
  if ( ControlBar == nullptr )
    return 0;
  Style = CWnd::GetStyle(this: ControlBar);
  CFrameWnd::ShowControlBar(this, a2: v4, a3: (~Style & 0x10000000) != 0, a4: 0);
  return 1;
}


/* ============================================
   Address: 0x41EB10
   Function: ?OnToolTipText@CFrameWnd@@IAEHIPAUtagNMHDR@@PAJ@Z
   ============================================ */

int __thiscall CFrameWnd::OnToolTipText(CFrameWnd *this, unsigned int a2, struct tagNMHDR *a3, int *a4)
{
  UINT code; // eax
  UINT_PTR idFrom; // ecx
  CHAR *p_idFrom; // [esp-18h] [ebp-128h]
  CHAR Buffer[256]; // [esp+0h] [ebp-110h] BYREF
  LPCSTR lpString2; // [esp+100h] [ebp-10h] BYREF
  int v10; // [esp+10Ch] [ebp-4h]

  if ( unknown_libname_16() != 0 )
    return 0;
  CString::CString(this: (CString *)&lpString2);
  code = a3->code;
  idFrom = a3->idFrom;
  v10 = 0;
  if ( code == -520 && (a3[8].idFrom & 1) != 0 || code == -530 && ((int)a3[15].hwndFrom & 1) != 0 )
    idFrom = (unsigned __int16)GetDlgCtrlID(hWnd: (HWND)idFrom);
  if ( idFrom != 0 )
  {
    AfxLoadString(uID: idFrom, lpBuffer: Buffer, cchBufferMax: 0x100u);
    AfxExtractSubString(a1: (struct CString *)&lpString2, Str: Buffer, a3: 1, a4: 10);
  }
  p_idFrom = (CHAR *)&a3[1].idFrom;
  if ( a3->code == -520 )
    lstrcpynA(lpString1: p_idFrom, lpString2, iMaxLength: 80);
  else
    _mbstowcsz(lpWideCharStr: (LPWSTR)p_idFrom, lpMultiByteStr: lpString2, cchWideChar: 0x50u);
  *a4 = 0;
  SetWindowPos(hWnd: a3->hwndFrom, hWndInsertAfter: nullptr, X: 0, Y: 0, cx: 0, cy: 0, uFlags: 0x213u);
  v10 = -1;
  CString::~CString(this: (CString *)&lpString2);
  return 1;
}


/* ============================================
   Address: 0x41EBF1
   Function: ?OnUpdateKeyIndicator@CFrameWnd@@IAEXPAVCCmdUI@@@Z
   ============================================ */

void __thiscall CFrameWnd::OnUpdateKeyIndicator(CFrameWnd *this, struct CCmdUI *a2)
{
  int v2; // edi
  int v3; // eax
  void (__thiscall **v4)(struct CCmdUI *, int); // ebx
  SHORT KeyState; // ax

  v2 = 1;
  switch ( *((_DWORD *)a2 + 1) )
  {
    case 0xE701:
      v3 = 20;
      break;
    case 0xE702:
      v3 = 144;
      break;
    case 0xE703:
      v3 = 145;
      break;
    case 0xE706:
      v3 = 21;
      if ( dword_42F8DC == 0 )
        v2 = 0x8000;
      break;
    default:
      *((_DWORD *)a2 + 7) = 1;
      return;
  }
  v4 = *(void (__thiscall ***)(struct CCmdUI *, int))a2;
  KeyState = GetKeyState(nVirtKey: v3);
  (*v4)(a1: a2, a2: v2 & KeyState);
}


/* ============================================
   Address: 0x41EC52
   Function: ?OnUpdateContextHelp@CFrameWnd@@IAEXPAVCCmdUI@@@Z
   ============================================ */

void __thiscall CFrameWnd::OnUpdateContextHelp(CFrameWnd *this, struct CCmdUI *a2)
{
  if ( AfxGetMainWnd() == this )
    (*(void (__thiscall **)(struct CCmdUI *, bool))(*(_DWORD *)a2 + 4))(a1: a2, a2: *((_DWORD *)this + 20) != 0);
  else
    *((_DWORD *)a2 + 7) = 1;
}


/* ============================================
   Address: 0x41EC81
   Function: ?OnUpdateFrameTitle@CFrameWnd@@UAEXH@Z
   ============================================ */

void __thiscall CFrameWnd::OnUpdateFrameTitle(CFrameWnd *this, int a2)
{
  int v3; // ecx
  int v4; // eax

  if ( (((unsigned __int16)CWnd::GetStyle(this) >> 8) & 0x80u) != 0 )
  {
    v3 = *((_DWORD *)this + 26);
    if ( v3 == 0 || (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 112))(a1: v3) == 0 )
    {
      v4 = (*(int (__thiscall **)(CFrameWnd *))(*(_DWORD *)this + 196))(a1: this);
      if ( a2 != 0 && v4 != 0 )
        CFrameWnd::UpdateFrameTitleForDocument(this, a2: *(const char **)(v4 + 28));
      else
        CFrameWnd::UpdateFrameTitleForDocument(this, a2: nullptr);
    }
  }
}


/* ============================================
   Address: 0x41ECC5
   Function: ?UpdateFrameTitleForDocument@CFrameWnd@@IAEXPBD@Z
   ============================================ */

void __thiscall CFrameWnd::UpdateFrameTitleForDocument(CFrameWnd *this, const char *lpString2)
{
  int v3; // eax
  int v4; // eax
  int v5; // [esp-4h] [ebp-210h]
  int v6; // [esp-4h] [ebp-210h]
  CHAR String1[516]; // [esp+8h] [ebp-204h] BYREF

  if ( (CWnd::GetStyle(this) & 0x4000) != 0 )
  {
    String1[0] = 0;
    if ( lpString2 != nullptr )
    {
      lstrcpyA(lpString1: String1, lpString2);
      if ( *((int *)this + 16) > 0 )
      {
        v5 = *((_DWORD *)this + 16);
        v3 = lstrlenA(lpString: String1);
        wsprintfA(a1: &String1[v3], a2: ":%d", v5);
      }
      lstrcatA(lpString1: String1, lpString2: " - ");
    }
    lstrcatA(lpString1: String1, lpString2: *((LPCSTR *)this + 43));
  }
  else
  {
    lstrcpyA(lpString1: String1, lpString2: *((LPCSTR *)this + 43));
    if ( lpString2 != nullptr )
    {
      lstrcatA(lpString1: String1, lpString2: " - ");
      lstrcatA(lpString1: String1, lpString2);
      if ( *((int *)this + 16) > 0 )
      {
        v6 = *((_DWORD *)this + 16);
        v4 = lstrlenA(lpString: String1);
        wsprintfA(a1: &String1[v4], a2: ":%d", v6);
      }
    }
  }
  AfxSetWindowText(hWnd: *((HWND *)this + 7), lpString: String1);
}


/* ============================================
   Address: 0x41EDC2
   Function: ?OnSetPreviewMode@CFrameWnd@@UAEXHPAUCPrintPreviewState@@@Z
   ============================================ */

void __thiscall CFrameWnd::OnSetPreviewMode(CFrameWnd *this, HWND hWnd, struct CPrintPreviewState *a3)
{
  int v4; // eax
  int v5; // ecx
  _DWORD *v6; // ebp
  _DWORD *v8; // eax
  HWND *v9; // ebx
  unsigned __int16 DlgCtrlID; // ax
  HMENU Menu; // eax
  HWND DlgItem; // eax
  HWND v13; // eax
  int v14; // ecx
  HWND v15; // [esp-8h] [ebp-24h]
  int v16; // [esp+10h] [ebp-Ch]
  int v17; // [esp+14h] [ebp-8h]
  int v18; // [esp+18h] [ebp-4h]
  HWND hWnda; // [esp+20h] [ebp+4h]
  HWND hWndb; // [esp+20h] [ebp+4h]
  int v21; // [esp+24h] [ebp+8h]

  v4 = (*(int (__thiscall **)(CFrameWnd *))(*(_DWORD *)this + 200))(a1: this);
  v18 = v4;
  if ( hWnd != nullptr )
  {
    v5 = *(_DWORD *)(v4 + 104);
    if ( v5 != 0 )
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 100))(a1: v5, a2: 0);
  }
  v6 = *((_DWORD **)this + 28);
  v16 = 0;
  while ( v6 != nullptr )
  {
    v8 = v6;
    v6 = (_DWORD *)*v6;
    v9 = (HWND *)v8[2];
    DlgCtrlID = GetDlgCtrlID(hWnd: v9[7]);
    v17 = DlgCtrlID;
    if ( DlgCtrlID >= 0xE800u && DlgCtrlID <= 0xE81Fu )
    {
      v21 = 1 << DlgCtrlID;
      if ( (*((int (__thiscall **)(HWND *))*v9 + 52))(a1: v9) != 0 )
        v16 |= v21;
      if ( (*((int (__thiscall **)(HWND *))*v9 + 54))(a1: v9) == 0 || v17 != 59423 )
        CFrameWnd::ShowControlBar(this, a2: (struct CControlBar *)v9, a3: v21 & *((_DWORD *)a3 + 2), a4: 1);
    }
  }
  *((_DWORD *)a3 + 2) = v16;
  if ( hWnd != nullptr )
  {
    *((_DWORD *)this + 39) = *((_DWORD *)a3 + 4);
    CFrameWnd::ShowOwnedWindows(this, a2: 0);
    hWnda = GetDlgItem(hDlg: *((HWND *)this + 7), nIDDlgItem: *(_DWORD *)a3);
    ShowWindow(hWnd: hWnda, nCmdShow: 0);
    Menu = GetMenu(hWnd: *((HWND *)this + 7));
    *((_DWORD *)a3 + 1) = Menu;
    if ( Menu != nullptr )
    {
      InvalidateRect(hWnd: *((HWND *)this + 7), lpRect: nullptr, bErase: true);
      SetMenu(hWnd: *((HWND *)this + 7), hMenu: nullptr);
      *((_DWORD *)this + 46) &= ~1u;
    }
    *((_DWORD *)a3 + 5) = *((_DWORD *)this + 18);
    *((_DWORD *)this + 18) = 0;
    CFrameWnd::LoadAccelTable(this, lpTableName: (const char *)0x7915);
    if ( *(_DWORD *)a3 == 59648 )
      DlgItem = hWnda;
    else
      DlgItem = GetDlgItem(hDlg: *((HWND *)this + 7), nIDDlgItem: 59648);
    if ( DlgItem != nullptr )
      SetWindowLongA(hWnd: DlgItem, nIndex: -12, dwNewLong: 59937);
  }
  else
  {
    v15 = *((HWND *)this + 7);
    *((_DWORD *)this + 39) = 0;
    hWndb = GetDlgItem(hDlg: v15, nIDDlgItem: 59937);
    if ( hWndb != nullptr )
    {
      v13 = GetDlgItem(hDlg: *((HWND *)this + 7), nIDDlgItem: 59648);
      if ( v13 != nullptr )
        SetWindowLongA(hWnd: v13, nIndex: -12, dwNewLong: 59937);
      SetWindowLongA(hWnd: hWndb, nIndex: -12, dwNewLong: 59648);
    }
    if ( *((_DWORD *)a3 + 1) != 0 )
    {
      InvalidateRect(hWnd: *((HWND *)this + 7), lpRect: nullptr, bErase: true);
      SetMenu(hWnd: *((HWND *)this + 7), hMenu: *((HMENU *)a3 + 1));
    }
    v14 = *(_DWORD *)(v18 + 104);
    if ( v14 != 0 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 100))(a1: v14, a2: 1);
    (*(void (__thiscall **)(CFrameWnd *, int))(*(_DWORD *)this + 208))(a1: this, a2: 1);
    if ( *(_DWORD *)a3 != 59648 )
      hWndb = GetDlgItem(hDlg: *((HWND *)this + 7), nIDDlgItem: *(_DWORD *)a3);
    ShowWindow(hWnd: hWndb, nCmdShow: 5);
    *((_DWORD *)this + 18) = *((_DWORD *)a3 + 5);
    CFrameWnd::ShowOwnedWindows(this, a2: 1);
  }
}


/* ============================================
   Address: 0x41EFDD
   Function: ?DelayUpdateFrameMenu@CFrameWnd@@UAEXPAUHMENU__@@@Z
   ============================================ */

void __thiscall CFrameWnd::DelayUpdateFrameMenu(CFrameWnd *this, HMENU a2)
{
  *((_DWORD *)this + 46) |= 1u;
  *((_DWORD *)this + 42) = a2;
}


/* ============================================
   Address: 0x41EFF1
   Function: ?OnIdleUpdateCmdUI@CFrameWnd@@IAEXXZ
   ============================================ */

void __thiscall CFrameWnd::OnIdleUpdateCmdUI(CFrameWnd *this)
{
  if ( (*((_BYTE *)this + 184) & 1) != 0 )
    (*(void (__thiscall **)(CFrameWnd *, _DWORD))(*(_DWORD *)this + 236))(a1: this, a2: *((_DWORD *)this + 42));
  if ( (*((_BYTE *)this + 184) & 2) != 0 )
    (*(void (__thiscall **)(CFrameWnd *, int))(*(_DWORD *)this + 232))(a1: this, a2: 1);
  if ( (*((_DWORD *)this + 46) & 8) != 0 )
  {
    (*(void (__thiscall **)(CFrameWnd *, int))(*(_DWORD *)this + 208))(a1: this, a2: *((_DWORD *)this + 46) & 4);
    UpdateWindow(hWnd: *((HWND *)this + 7));
  }
  if ( *((_DWORD *)this + 36) != *((_DWORD *)this + 37) )
    CFrameWnd::SetMessageText((HWND *)this, wParam: *((_DWORD *)this + 36));
  *((_DWORD *)this + 46) = 0;
}


/* ============================================
   Address: 0x41F060
   Function: sub_41F060
   ============================================ */

void *__thiscall sub_41F060(void *this)
{
  return this;
}


/* ============================================
   Address: 0x41F063
   Function: ?RecalcLayout@CFrameWnd@@UAEXH@Z
   ============================================ */

void __thiscall CFrameWnd::RecalcLayout(CFrameWnd *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  struct tagRECT rcDst; // [esp+8h] [ebp-10h] BYREF

  if ( *((_DWORD *)this + 44) == 0 )
  {
    v3 = *((_DWORD *)this + 46);
    *((_DWORD *)this + 44) = 1;
    if ( (v3 & 4) != 0 )
      a2 = 1;
    LOBYTE(v3) = v3 & 0xF3;
    *((_DWORD *)this + 46) = v3;
    if ( a2 != 0 )
    {
      v4 = *((_DWORD *)this + 26);
      if ( v4 != 0 )
        (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 88))(a1: v4);
    }
    if ( (CWnd::GetStyle(this) & 0x2000) != 0 )
    {
      rcDst.right = 0x7FFF;
      rcDst.bottom = 0x7FFF;
      rcDst.left = 0;
      rcDst.top = 0;
      CWnd::RepositionBars((HWND *)this, a2: 0, a3: 0xFFFFu, a4: 0xE900u, a5: 1u, lprcDst: &rcDst, a7: &rcDst, a8: 0);
      CWnd::RepositionBars(
        (HWND *)this,
        a2: 0,
        a3: 0xFFFFu,
        a4: 0xE900u,
        a5: 2u,
        lprcDst: (LPRECT)((char *)this + 88),
        a7: &rcDst,
        a8: 1);
      (*(void (__thiscall **)(CFrameWnd *, struct tagRECT *, _DWORD))(*(_DWORD *)this + 104))(
        a1: this,
        a2: &rcDst,
        a3: 0);
      CWnd::SetWindowPos(
        this,
        hWndInsertAfter: nullptr,
        X: 0,
        Y: 0,
        a5: rcDst.right - rcDst.left,
        cy: rcDst.bottom - rcDst.top,
        uFlags: 0x16u);
    }
    else
    {
      CWnd::RepositionBars(
        (HWND *)this,
        a2: 0,
        a3: 0xFFFFu,
        a4: 0xE900u,
        a5: 2u,
        lprcDst: (LPRECT)((char *)this + 88),
        a7: nullptr,
        a8: 1);
    }
    *((_DWORD *)this + 44) = 0;
  }
}


/* ============================================
   Address: 0x41F150
   Function: ?NegotiateBorderSpace@CFrameWnd@@UAEHIPAUtagRECT@@@Z
   ============================================ */

int __thiscall CFrameWnd::NegotiateBorderSpace(HWND *this, unsigned int a2, struct tagRECT *lprc2)
{
  struct tagRECT *v3; // esi

  if ( a2 == 1 )
  {
    CWnd::RepositionBars(this, a2: 0, a3: 0xFFFFu, a4: 0xE900u, a5: 1u, lprcDst: lprc2, a7: nullptr, a8: 1);
    return 1;
  }
  if ( a2 == 3 )
  {
    if ( lprc2 != nullptr )
    {
      v3 = (struct tagRECT *)(this + 22);
      if ( !EqualRect(lprc1: (const RECT *)(this + 22), lprc2) )
      {
        CopyRect(lprcDst: v3, lprcSrc: lprc2);
        return 1;
      }
    }
    else if ( *(this + 22) != nullptr || *(this + 24) != nullptr || *(this + 23) != nullptr || *(this + 25) != nullptr )
    {
      SetRectEmpty(lprc: (LPRECT)(this + 22));
      return 1;
    }
    return 0;
  }
  return 1;
}


/* ============================================
   Address: 0x41F1CA
   Function: ?OnSize@CFrameWnd@@IAEXIHH@Z
   ============================================ */

void __thiscall CFrameWnd::OnSize(CFrameWnd *this, unsigned int a2, int a3, int a4)
{
  CWnd::Default(this);
  if ( a2 != 1 )
    (*(void (__thiscall **)(CFrameWnd *, int))(*(_DWORD *)this + 208))(a1: this, a2: 1);
}


/* ============================================
   Address: 0x41F1E9
   Function: ?OnEraseBkgnd@CFrameWnd@@IAEHPAVCDC@@@Z
   ============================================ */

int __thiscall CFrameWnd::OnEraseBkgnd(CFrameWnd *this, struct CDC *a2)
{
  if ( *((_DWORD *)this + 38) != 0 )
    return 1;
  else
    return CWnd::Default(this);
}


/* ============================================
   Address: 0x41F1FF
   Function: ?OnRegisteredMouseWheel@CFrameWnd@@IAEJIJ@Z
   ============================================ */

LRESULT __thiscall CFrameWnd::OnRegisteredMouseWheel(HWND *this, unsigned int a2, LRESULT lParam)
{
  __int16 v4; // bx
  __int16 v5; // ax
  unsigned __int16 v6; // bx
  HWND Focus; // esi
  HWND Parent; // eax
  HWND DesktopWindow; // [esp+Ch] [ebp-4h]

  if ( GetKeyState(nVirtKey: 17) >= 0 )
    v4 = 0;
  else
    v4 = 8;
  if ( GetKeyState(nVirtKey: 16) >= 0 )
    v5 = 0;
  else
    v5 = 4;
  v6 = v5 | v4;
  Focus = GetFocus();
  DesktopWindow = GetDesktopWindow();
  if ( Focus == nullptr )
    return SendMessageA(hWnd: *(this + 7), Msg: 0x20Au, wParam: v6 | (a2 << 16), lParam);
  do
  {
    lParam = SendMessageA(hWnd: Focus, Msg: 0x20Au, wParam: v6 | (a2 << 16), lParam);
    Parent = GetParent(hWnd: Focus);
    Focus = Parent;
  }
  while ( lParam == 0 && Parent != nullptr && Parent != DesktopWindow );
  return lParam;
}


/* ============================================
   Address: 0x41F2A7
   Function: ?ActivateFrame@CFrameWnd@@UAEXH@Z
   ============================================ */

void __thiscall CFrameWnd::ActivateFrame(HWND *this, int a2)
{
  int v2; // edi
  int v4; // [esp-4h] [ebp-Ch]

  v2 = a2;
  if ( a2 == -1 )
  {
    if ( IsWindowVisible(hWnd: *(this + 7)) )
    {
      if ( !IsIconic(hWnd: *(this + 7)) )
        goto LABEL_7;
      v4 = 9;
    }
    else
    {
      v4 = 1;
    }
    v2 = v4;
  }
LABEL_7:
  CFrameWnd::BringToTop((CFrameWnd *)this, a2: v2);
  if ( v2 != -1 )
  {
    CWnd::ShowWindow((CWnd *)this, nCmdShow: v2);
    CFrameWnd::BringToTop((CFrameWnd *)this, a2: v2);
  }
}


/* ============================================
   Address: 0x41F2F7
   Function: ?BringToTop@CFrameWnd@@IAEXH@Z
   ============================================ */

void __thiscall CFrameWnd::BringToTop(HWND *this, int a2)
{
  HWND LastActivePopup; // eax

  if ( a2 != 0 && a2 != 6 && a2 != 7 && a2 != 8 && a2 != 4 )
  {
    LastActivePopup = GetLastActivePopup(hWnd: *(this + 7));
    BringWindowToTop(hWnd: LastActivePopup);
  }
}


/* ============================================
   Address: 0x41F326
   Function: ?GetDockingFrame@CControlBar@@QBEPAVCFrameWnd@@XZ
   ============================================ */

HWND *__thiscall CControlBar::GetDockingFrame(CControlBar *this)
{
  HWND *result; // eax

  result = CWnd::GetParentFrame(this);
  if ( result == nullptr )
    return *((HWND **)this + 27);
  return result;
}


/* ============================================
   Address: 0x41F337
   Function: ?IsFloating@CControlBar@@QBEHXZ
   ============================================ */

int __thiscall CControlBar::IsFloating(CControlBar *this)
{
  int v3; // eax

  if ( (*(int (__thiscall **)(CControlBar *))(*(_DWORD *)this + 216))(a1: this) != 0 )
    return *((_DWORD *)this + 30);
  v3 = *((_DWORD *)this + 28);
  return v3 != 0 && *(_DWORD *)(v3 + 120) != 0;
}


/* ============================================
   Address: 0x41F361
   Function: ?AfxOleCanExitApp@@YGHXZ
   ============================================ */

BOOL __stdcall AfxOleCanExitApp()
{
  return *((_DWORD *)AfxGetModuleState() + 11) == 0;
}


/* ============================================
   Address: 0x41F371
   Function: ?AfxOleSetUserCtrl@@YGXH@Z
   ============================================ */

void __stdcall AfxOleSetUserCtrl(int a1)
{
  *((_DWORD *)AfxGetModuleState() + 12) = a1;
}


/* ============================================
   Address: 0x41F380
   Function: ?AfxOleGetUserCtrl@@YGHXZ
   ============================================ */

int __stdcall AfxOleGetUserCtrl()
{
  return *((_DWORD *)AfxGetModuleState() + 12);
}


/* ============================================
   Address: 0x41F389
   Function: sub_41F389
   ============================================ */

int sub_41F389()
{
  nullsub_17();
  return atexit(a1: sub_41F3A0);
}


/* ============================================
   Address: 0x41F393
   Function: nullsub_17
   ============================================ */

void nullsub_17()
{
  ;
}


/* ============================================
   Address: 0x41F3A0
   Function: sub_41F3A0
   ============================================ */

void __cdecl sub_41F3A0()
{
  AfxDeleteObject(a1: &dword_42FB04);
}


/* ============================================
   Address: 0x41F3AB
   Function: sub_41F3AB
   ============================================ */

char **sub_41F3AB()
{
  return &off_422638;
}


/* ============================================
   Address: 0x41F3B1
   Function: sub_41F3B1
   ============================================ */

char **sub_41F3B1()
{
  return &off_422758;
}


/* ============================================
   Address: 0x41F3B7
   Function: sub_41F3B7
   ============================================ */

char **sub_41F3B7()
{
  return &off_422770;
}


/* ============================================
   Address: 0x41F3BD
   Function: sub_41F3BD
   ============================================ */

char **sub_41F3BD()
{
  return &off_4227A0;
}


/* ============================================
   Address: 0x41F3C3
   Function: ?CreateObject@CWnd@@SGPAVCObject@@XZ
   ============================================ */

static struct CObject *__stdcall CWnd::CreateObject()
{
  CWnd *v0; // ecx
  struct CObject *result; // eax

  v0 = (CWnd *)operator new(Size: 0x3Cu);
  result = nullptr;
  if ( v0 != nullptr )
    return CWnd::CWnd(this: v0);
  return result;
}


/* ============================================
   Address: 0x41F3F5
   Function: sub_41F3F5
   ============================================ */

char **sub_41F3F5()
{
  return &off_422DB0;
}


/* ============================================
   Address: 0x41F3FB
   Function: ?_AfxLoadDotBitmap@@YGXXZ
   ============================================ */

void __stdcall _AfxLoadDotBitmap()
{
  unsigned int v0; // eax
  int v1; // ebx
  unsigned int v2; // eax
  int v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // esi
  _BYTE *v7; // edx
  int v8; // eax
  int v9; // eax
  _WORD Bits[66]; // [esp+Ch] [ebp-90h] BYREF
  int nHeight; // [esp+90h] [ebp-Ch]
  int v12; // [esp+94h] [ebp-8h]
  unsigned __int8 *v13; // [esp+98h] [ebp-4h]

  v0 = GetMenuCheckMarkDimensions();
  v1 = (__int16)v0;
  v2 = HIWORD(v0);
  nHeight = (__int16)v2;
  if ( v1 > 32 )
    v1 = 32;
  v3 = (v1 + 15) >> 4;
  v4 = 16 * v3 + (v1 - 4) / 2 - v1;
  if ( v4 > 12 )
    LOBYTE(v4) = 12;
  if ( (__int16)v2 > 32 )
    nHeight = 32;
  memset(a1: Bits, Val: 255, Size: 0x80u);
  v13 = (unsigned __int8 *)&unk_422FC8;
  v5 = v3 * ((nHeight - 6) >> 1);
  v6 = 2 * v3;
  v12 = 5;
  v7 = &Bits[v5];
  do
  {
    HIWORD(v8) = HIWORD(v13);
    LOWORD(v8) = *v13++;
    v9 = ~(v8 << v4);
    v7[1] = v9;
    *v7 = BYTE1(v9);
    v7 += v6;
    --v12;
  }
  while ( v12 != 0 );
  hBitmapChecked = CreateBitmap(nWidth: v1, nHeight, nPlanes: 1u, nBitCount: 1u, lpBits: Bits);
  if ( hBitmapChecked == nullptr )
    hBitmapChecked = LoadBitmapA(hInstance: nullptr, lpBitmapName: (LPCSTR)0x7FE3);
}


/* ============================================
   Address: 0x41F4DB
   Function: sub_41F4DB
   ============================================ */

char **sub_41F4DB()
{
  return &off_422FD0;
}


/* ============================================
   Address: 0x41F4E1
   Function: sub_41F4E1
   ============================================ */

_DWORD *__thiscall sub_41F4E1(_DWORD *this)
{
  *this = &_AFX_WIN_STATE::`vftable';
  return this;
}


/* ============================================
   Address: 0x41F4EA
   Function: ??_G_AFX_WIN_STATE@@UAEPAXI@Z
   ============================================ */

_AFX_WIN_STATE *__thiscall _AFX_WIN_STATE::`scalar deleting destructor'(_AFX_WIN_STATE *hMem, char a2)
{
  _AFX_WIN_STATE::~_AFX_WIN_STATE(this: hMem);
  if ( (a2 & 1) != 0 )
    CNoTrackObject::operator delete(hMem);
  return hMem;
}


/* ============================================
   Address: 0x41F505
   Function: ??0CWinApp@@QAE@PBD@Z
   ============================================ */

CWinApp *__thiscall CWinApp::CWinApp(CWinApp *this, char *Source)
{
  struct AFX_MODULE_STATE *ModuleState; // ebx

  CWinThread::CWinThread(this);
  *(_DWORD *)this = &CWinApp::`vftable';
  if ( Source != nullptr )
    *((_DWORD *)this + 30) = _strdup(Source);
  else
    *((_DWORD *)this + 30) = 0;
  ModuleState = AfxGetModuleState();
  *((_DWORD *)CThreadLocalObject::GetData(
                this: (struct AFX_MODULE_STATE *)((char *)ModuleState + 4208),
                a2: CThreadLocal<AFX_MODULE_THREAD_STATE>::CreateObject)
  + 1) = this;
  *((_DWORD *)this + 10) = GetCurrentThread();
  *((_DWORD *)this + 11) = GetCurrentThreadId();
  *((_DWORD *)ModuleState + 1) = this;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_WORD *)this + 89) = 0;
  *((_WORD *)this + 88) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 46) = 512;
  return this;
}


/* ============================================
   Address: 0x41F5EF
   Function: sub_41F5EF
   ============================================ */

CWinApp *__thiscall sub_41F5EF(CWinApp *Block, char a2)
{
  CWinApp::~CWinApp(this: Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}


/* ============================================
   Address: 0x41F60B
   Function: ?InitApplication@CWinApp@@UAEHXZ
   ============================================ */

int __thiscall CWinApp::InitApplication(CWinApp *this)
{
  int v1; // ecx

  if ( dword_42F5B0 != 0 )
  {
    if ( *((_DWORD *)this + 32) == 0 )
      *((_DWORD *)this + 32) = dword_42F5B0;
    dword_42F5B0 = 0;
  }
  v1 = *((_DWORD *)this + 32);
  if ( v1 != 0 )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v1 + 20))(a1: v1, a2: 0);
  else
    dword_427758 = 0;
  return 1;
}


/* ============================================
   Address: 0x41F64B
   Function: sub_41F64B
   ============================================ */

int sub_41F64B()
{
  return 1;
}


/* ============================================
   Address: 0x41F64F
   Function: ??1CWinApp@@UAE@XZ
   ============================================ */

void __thiscall CWinApp::~CWinApp(CWinApp *this)
{
  int v2; // ecx
  int v3; // ecx
  ATOM v4; // ax
  ATOM v5; // ax
  int v6; // ecx
  struct AFX_MODULE_STATE *ModuleState; // eax

  *(_DWORD *)this = &CWinApp::`vftable';
  v2 = *((_DWORD *)this + 32);
  if ( v2 != 0 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 4))(a1: v2, a2: 1);
  v3 = *((_DWORD *)this + 42);
  if ( v3 != 0 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 20))(a1: v3, a2: 1);
  if ( *((_BYTE *)AfxGetModuleState() + 20) == 0 )
  {
    if ( dword_42F5B4 != 0 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_42F5B4 + 4))(a1: dword_42F5B4, a2: 1);
      dword_42F5B4 = 0;
    }
    if ( dword_42F5B0 != 0 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_42F5B0 + 4))(a1: dword_42F5B0, a2: 1);
      dword_42F5B0 = 0;
    }
  }
  if ( *((_DWORD *)this + 37) != 0 )
    AfxGlobalFree(hMem: *((HGLOBAL *)this + 37));
  if ( *((_DWORD *)this + 38) != 0 )
    AfxGlobalFree(hMem: *((HGLOBAL *)this + 38));
  v4 = *((_WORD *)this + 88);
  if ( v4 != 0 )
    GlobalDeleteAtom(nAtom: v4);
  v5 = *((_WORD *)this + 89);
  if ( v5 != 0 )
    GlobalDeleteAtom(nAtom: v5);
  v6 = *((_DWORD *)this + 43);
  if ( v6 != 0 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 4))(a1: v6, a2: 1);
  ModuleState = AfxGetModuleState();
  if ( *((_DWORD *)ModuleState + 4) == *((_DWORD *)this + 30) )
    *((_DWORD *)ModuleState + 4) = 0;
  if ( *((CWinApp **)ModuleState + 1) == this )
    *((_DWORD *)ModuleState + 1) = 0;
  free(Block: *((void **)this + 30));
  free(Block: *((void **)this + 31));
  free(Block: *((void **)this + 34));
  free(Block: *((void **)this + 35));
  free(Block: *((void **)this + 36));
  CWinThread::~CWinThread(this);
}


/* ============================================
   Address: 0x41F784
   Function: ?SaveStdProfileSettings@CWinApp@@IAEXXZ
   ============================================ */

void __thiscall CWinApp::SaveStdProfileSettings(CWinApp *this)
{
  int v2; // ecx
  struct AFX_MODULE_STATE *ModuleState; // eax

  v2 = *((_DWORD *)this + 42);
  if ( v2 != 0 )
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 16))(a1: v2);
  if ( *((_DWORD *)this + 45) != 0 )
  {
    ModuleState = AfxGetModuleState();
    CWinApp::WriteProfileInt(
      (LPCSTR *)this,
      lpAppName: "Settings",
      lpValueName: "PreviewPages",
      Data: *(_DWORD *)(*((_DWORD *)ModuleState + 1) + 180));
  }
}


/* ============================================
   Address: 0x41F7C0
   Function: ?ExitInstance@CWinApp@@UAEHXZ
   ============================================ */

int __thiscall CWinApp::ExitInstance(CWinApp *this)
{
  int v2; // eax
  void (*v3)(void); // eax

  v2 = *((_DWORD *)this + 43);
  if ( (v2 == 0 || *(_DWORD *)(v2 + 16) != 5) && *((_BYTE *)AfxGetModuleState() + 20) == 0 )
    CWinApp::SaveStdProfileSettings(this);
  v3 = *((void (**)(void))this + 47);
  if ( v3 != nullptr )
    v3();
  return *((_DWORD *)this + 14);
}


/* ============================================
   Address: 0x41F7F6
   Function: sub_41F7F6
   ============================================ */

char **sub_41F7F6()
{
  return &off_423138;
}


/* ============================================
   Address: 0x41F7FC
   Function: sub_41F7FC
   ============================================ */

int sub_41F7FC()
{
  nullsub_18();
  return atexit(a1: sub_41F813);
}


/* ============================================
   Address: 0x41F806
   Function: nullsub_18
   ============================================ */

void nullsub_18()
{
  ;
}


/* ============================================
   Address: 0x41F813
   Function: sub_41F813
   ============================================ */

void __cdecl sub_41F813()
{
  CProcessLocalObject::~CProcessLocalObject(this: (CProcessLocalObject *)&unk_42F5AC);
}


/* ============================================
   Address: 0x41F822
   Function: sub_41F822
   ============================================ */

CWinThread *__thiscall sub_41F822(CWinThread *Block, char a2)
{
  CWinThread::~CWinThread(this: Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}


/* ============================================
   Address: 0x41F83E
   Function: ??0CWinThread@@QAE@XZ
   ============================================ */

CWinThread *__thiscall CWinThread::CWinThread(CWinThread *this)
{
  CCmdTarget::CCmdTarget(this);
  *(_DWORD *)this = &CWinThread::`vftable';
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  CWinThread::CommonConstruct(this);
  return this;
}


/* ============================================
   Address: 0x41F87B
   Function: ?CommonConstruct@CWinThread@@QAEXXZ
   ============================================ */

void __thiscall CWinThread::CommonConstruct(CWinThread *this)
{
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 25) = 0;
  GetCursorPos(lpPoint: (LPPOINT)((char *)this + 92));
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 9) = 1;
}


/* ============================================
   Address: 0x41F8AD
   Function: sub_41F8AD
   ============================================ */

char **sub_41F8AD()
{
  return &off_423210;
}


/* ============================================
   Address: 0x41F8B3
   Function: ?Enable3dControlsStatic@CWinApp@@IAEHXZ
   ============================================ */

int __thiscall CWinApp::Enable3dControlsStatic(CWinApp *this)
{
  struct CNoTrackObject *Data; // eax
  struct CNoTrackObject *v3; // esi
  struct AFX_MODULE_STATE *ModuleState; // eax
  struct AFX_MODULE_STATE *v5; // eax

  if ( dword_42F8DC != 0 )
    return 1;
  Data = CProcessLocalObject::GetData(
           this: (CProcessLocalObject *)&dword_42F878,
           a2: CProcessLocal<_AFX_CTL3D_STATE>::CreateObject);
  v3 = Data;
  if ( *((_DWORD *)Data + 1) == 0 )
  {
    *((_DWORD *)Data + 3) = Ctl3dRegister;
    *((_DWORD *)Data + 4) = Ctl3dUnregister;
    *((_DWORD *)Data + 5) = Ctl3dAutoSubclass;
    *((_DWORD *)Data + 6) = Ctl3dUnAutoSubclass;
    *((_DWORD *)Data + 7) = Ctl3dColorChange;
    *((_DWORD *)Data + 8) = Ctl3dSubclassDlgEx;
    *((_DWORD *)Data + 9) = Ctl3dWinIniChange;
    *((_DWORD *)Data + 10) = Ctl3dSubclassCtl;
    *((_DWORD *)Data + 11) = Ctl3dSubclassCtlEx;
    ModuleState = AfxGetModuleState();
    if ( (*((int (__stdcall **)(_DWORD))v3 + 3))(a1: *((_DWORD *)ModuleState + 2)) == 0 )
    {
      *((_DWORD *)v3 + 3) = 0;
      *((_DWORD *)v3 + 4) = 0;
      *((_DWORD *)v3 + 5) = 0;
      *((_DWORD *)v3 + 6) = 0;
      *((_DWORD *)v3 + 7) = 0;
      *((_DWORD *)v3 + 8) = 0;
      *((_DWORD *)v3 + 9) = 0;
      *((_DWORD *)v3 + 10) = 0;
      *((_DWORD *)v3 + 11) = 0;
    }
    *((_DWORD *)v3 + 1) = 1;
  }
  if ( *((_DWORD *)v3 + 5) == 0 )
    return 0;
  v5 = AfxGetModuleState();
  return (*((int (__stdcall **)(_DWORD))v3 + 5))(a1: *((_DWORD *)v5 + 2));
}


/* ============================================
   Address: 0x41F964
   Function: ??0_AFX_THREAD_STATE@@QAE@XZ
   ============================================ */

_AFX_THREAD_STATE *__thiscall _AFX_THREAD_STATE::_AFX_THREAD_STATE(_AFX_THREAD_STATE *this)
{
  *((_DWORD *)this + 53) = -1;
  *((_DWORD *)this + 65) = -1;
  *(_DWORD *)this = &_AFX_THREAD_STATE::`vftable';
  return this;
}


/* ============================================
   Address: 0x41F97B
   Function: ??_G_AFX_THREAD_STATE@@UAEPAXI@Z
   ============================================ */

_AFX_THREAD_STATE *__thiscall _AFX_THREAD_STATE::`scalar deleting destructor'(_AFX_THREAD_STATE *hMem, char a2)
{
  _AFX_THREAD_STATE::~_AFX_THREAD_STATE(this: hMem);
  if ( (a2 & 1) != 0 )
    CNoTrackObject::operator delete(hMem);
  return hMem;
}


/* ============================================
   Address: 0x41F996
   Function: ??1_AFX_THREAD_STATE@@UAE@XZ
   ============================================ */

void __thiscall _AFX_THREAD_STATE::~_AFX_THREAD_STATE(_AFX_THREAD_STATE *this)
{
  int v2; // ecx
  _DWORD *v3; // edi

  *(_DWORD *)this = &_AFX_THREAD_STATE::`vftable';
  v2 = *((_DWORD *)this + 51);
  v3 = (_DWORD *)((char *)this + 204);
  if ( v2 != 0 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 96))(a1: v2);
    if ( *v3 != 0 )
      (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*v3 + 4))(a1: *v3, a2: 1);
  }
  if ( *((_DWORD *)this + 12) != 0 )
    UnhookWindowsHookEx(hhk: *((HHOOK *)this + 12));
  if ( *((_DWORD *)this + 11) != 0 )
    UnhookWindowsHookEx(hhk: *((HHOOK *)this + 11));
  if ( *((_DWORD *)this + 3) != 0 )
    free(Block: *((void **)this + 3));
  *(_DWORD *)this = &CNoTrackObject::`vftable';
}


/* ============================================
   Address: 0x41FA10
   Function: ?AfxGetThreadState@@YGPAV_AFX_THREAD_STATE@@XZ
   ============================================ */

struct _AFX_THREAD_STATE *__stdcall AfxGetThreadState()
{
  return CThreadLocalObject::GetData(
           this: (CThreadLocalObject *)&unk_42F5B8,
           a2: CThreadLocal<_AFX_THREAD_STATE>::CreateObject);
}


/* ============================================
   Address: 0x41FA20
   Function: sub_41FA20
   ============================================ */

int sub_41FA20()
{
  nullsub_19();
  return atexit(a1: sub_41FA37);
}


/* ============================================
   Address: 0x41FA2A
   Function: nullsub_19
   ============================================ */

void nullsub_19()
{
  ;
}


/* ============================================
   Address: 0x41FA37
   Function: sub_41FA37
   ============================================ */

void __cdecl sub_41FA37()
{
  CThreadLocalObject::~CThreadLocalObject(this: (CThreadLocalObject *)&unk_42F5B8);
}


/* ============================================
   Address: 0x41FA46
   Function: ??0AFX_MODULE_STATE@@QAE@H@Z
   ============================================ */

AFX_MODULE_STATE *__thiscall AFX_MODULE_STATE::AFX_MODULE_STATE(AFX_MODULE_STATE *this, char a2)
{
  AFX_MODULE_STATE *result; // eax
  _DWORD *v3; // ecx

  result = this;
  v3 = (_DWORD *)((char *)this + 4156);
  *((_DWORD *)result + 7) = 0;
  *((_DWORD *)result + 8) = 0;
  *((_DWORD *)result + 9) = 0;
  *((_DWORD *)result + 10) = 0;
  *v3 = 0;
  v3[1] = 0;
  *((_DWORD *)result + 1043) = -1;
  *((_DWORD *)result + 1044) = 0;
  *((_DWORD *)result + 1049) = 0;
  *((_DWORD *)result + 1050) = 0;
  *(_DWORD *)result = &AFX_MODULE_STATE::`vftable';
  *((_DWORD *)result + 10) = 28;
  *((_DWORD *)result + 8) = 20;
  *((_WORD *)result + 12) = 0;
  *((_BYTE *)result + 20) = a2;
  *((_DWORD *)result + 12) = 1;
  *((_DWORD *)result + 1040) = 24;
  return result;
}


/* ============================================
   Address: 0x41FAAA
   Function: ??_GAFX_MODULE_STATE@@UAEPAXI@Z_0
   ============================================ */

AFX_MODULE_STATE *__thiscall AFX_MODULE_STATE::`scalar deleting destructor'(AFX_MODULE_STATE *hMem, char a2)
{
  AFX_MODULE_STATE::~AFX_MODULE_STATE(this: hMem);
  if ( (a2 & 1) != 0 )
    CNoTrackObject::operator delete(hMem);
  return hMem;
}


/* ============================================
   Address: 0x41FAC5
   Function: ??1AFX_MODULE_STATE@@UAE@XZ
   ============================================ */

void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(CMapPtrToPtr **this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  int v3; // eax
  int v4; // ecx
  void *v5[2]; // [esp+8h] [ebp-1Ch] BYREF
  struct __POSITION *v6; // [esp+10h] [ebp-14h] BYREF
  void *Block; // [esp+14h] [ebp-10h] BYREF
  int v8; // [esp+20h] [ebp-4h]

  v5[1] = this;
  *this = (CMapPtrToPtr *)&AFX_MODULE_STATE::`vftable';
  v2 = (void (__thiscall ***)(_DWORD, int))*(this + 1041);
  v8 = 1;
  if ( v2 != nullptr )
    (**v2)(a1: v2, a2: 1);
  v3 = (int)*(this + 1051);
  if ( v3 != 0 )
  {
    v6 = (struct __POSITION *)-(*(_DWORD *)(v3 + 12) != 0);
    while ( v6 != nullptr )
    {
      CMapPtrToPtr::GetNextAssoc(this: *(this + 1051), a2: &v6, a3: v5, a4: &Block);
      if ( Block != this + 1042 )
        operator delete(Block);
    }
    v4 = (int)*(this + 1051);
    if ( v4 != 0 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 4))(a1: v4, a2: 1);
  }
  LOBYTE(v8) = 0;
  CThreadLocalObject::~CThreadLocalObject(this: (CThreadLocalObject *)(this + 1052));
  *this = (CMapPtrToPtr *)&CNoTrackObject::`vftable';
}


/* ============================================
   Address: 0x41FB73
   Function: j_??1CThreadLocalObject@@QAE@XZ
   ============================================ */

// attributes: thunk
void __thiscall CThreadLocalObject::~CThreadLocalObject(CThreadLocalObject *this)
{
  ??1CThreadLocalObject@@QAE@XZ(this);
}


/* ============================================
   Address: 0x41FB78
   Function: ??0AFX_MODULE_THREAD_STATE@@QAE@XZ
   ============================================ */

AFX_MODULE_THREAD_STATE *__thiscall AFX_MODULE_THREAD_STATE::AFX_MODULE_THREAD_STATE(AFX_MODULE_THREAD_STATE *this)
{
  *(_DWORD *)this = &CNoTrackObject::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  sub_415F85(this: (_DWORD *)this + 12, a2: 10);
  sub_415F85(this: (_DWORD *)this + 19, a2: 10);
  sub_415E02(this: (_DWORD *)this + 26, a2: 10);
  *(_DWORD *)this = &AFX_MODULE_THREAD_STATE::`vftable';
  *((_DWORD *)this + 3) = 84;
  *((_DWORD *)this + 10) = AfxThrowMemoryException;
  return this;
}


/* ============================================
   Address: 0x41FBE3
   Function: ??_GAFX_MODULE_THREAD_STATE@@UAEPAXI@Z
   ============================================ */

AFX_MODULE_THREAD_STATE *__thiscall AFX_MODULE_THREAD_STATE::`scalar deleting destructor'(
        AFX_MODULE_THREAD_STATE *hMem,
        char a2)
{
  AFX_MODULE_THREAD_STATE::~AFX_MODULE_THREAD_STATE(this: hMem);
  if ( (a2 & 1) != 0 )
    CNoTrackObject::operator delete(hMem);
  return hMem;
}


/* ============================================
   Address: 0x41FBFE
   Function: ??1AFX_MODULE_THREAD_STATE@@UAE@XZ
   ============================================ */

void __thiscall AFX_MODULE_THREAD_STATE::~AFX_MODULE_THREAD_STATE(AFX_MODULE_THREAD_STATE *this)
{
  CHandleMap *v2; // edi
  void *v3; // edi
  void *v4; // edi
  void *v5; // edi
  void *v6; // edi
  void *v7; // eax

  *(_DWORD *)this = &AFX_MODULE_THREAD_STATE::`vftable';
  v2 = *((CHandleMap **)this + 5);
  if ( v2 != nullptr )
  {
    CHandleMap::~CHandleMap(this: v2);
    operator delete(Block: v2);
  }
  v3 = *((void **)this + 6);
  if ( v3 != nullptr )
  {
    CHandleMap::~CHandleMap(this: *((CHandleMap **)this + 6));
    operator delete(Block: v3);
  }
  v4 = *((void **)this + 7);
  if ( v4 != nullptr )
  {
    CHandleMap::~CHandleMap(this: *((CHandleMap **)this + 7));
    operator delete(Block: v4);
  }
  v5 = *((void **)this + 8);
  if ( v5 != nullptr )
  {
    CHandleMap::~CHandleMap(this: *((CHandleMap **)this + 8));
    operator delete(Block: v5);
  }
  v6 = *((void **)this + 9);
  if ( v6 != nullptr )
  {
    CHandleMap::~CHandleMap(this: *((CHandleMap **)this + 9));
    operator delete(Block: v6);
  }
  while ( *((_DWORD *)this + 29) != 0 )
  {
    v7 = (void *)sub_415F2B(this: (int **)this + 26);
    operator delete(Block: v7);
  }
  sub_415E61(this: (CPlex **)this + 26);
  sub_416039(this: (_DWORD *)this + 19);
  sub_416039(this: (_DWORD *)this + 12);
  *(_DWORD *)this = &CNoTrackObject::`vftable';
}


/* ============================================
   Address: 0x41FCDB
   Function: sub_41FCDB
   ============================================ */

int sub_41FCDB()
{
  nullsub_20();
  return atexit(a1: sub_41FCF2);
}


/* ============================================
   Address: 0x41FCE5
   Function: nullsub_20
   ============================================ */

void nullsub_20()
{
  ;
}


/* ============================================
   Address: 0x41FCF2
   Function: sub_41FCF2
   ============================================ */

void __cdecl sub_41FCF2()
{
  CProcessLocalObject::~CProcessLocalObject(this: (CProcessLocalObject *)&unk_42F5BC);
}


/* ============================================
   Address: 0x41FD01
   Function: ?CreateObject@?$CProcessLocal@V_AFX_BASE_MODULE_STATE@@@@SGPAVCNoTrackObject@@XZ
   ============================================ */

struct CNoTrackObject *__stdcall CProcessLocal<_AFX_BASE_MODULE_STATE>::CreateObject()
{
  AFX_MODULE_STATE *v0; // esi
  struct CNoTrackObject *result; // eax

  v0 = (AFX_MODULE_STATE *)CNoTrackObject::operator new(uBytes: 0x1074u);
  result = nullptr;
  if ( v0 != nullptr )
  {
    AFX_MODULE_STATE::AFX_MODULE_STATE(this: v0, a2: 1);
    *(_DWORD *)v0 = &_AFX_BASE_MODULE_STATE::`vftable';
    return v0;
  }
  return result;
}


/* ============================================
   Address: 0x41FD43
   Function: ??_GAFX_MODULE_STATE@@UAEPAXI@Z
   ============================================ */

AFX_MODULE_STATE *__thiscall AFX_MODULE_STATE::`scalar deleting destructor'(AFX_MODULE_STATE *hMem, char a2)
{
  AFX_MODULE_STATE::~AFX_MODULE_STATE(this: hMem);
  if ( (a2 & 1) != 0 )
    CNoTrackObject::operator delete(hMem);
  return hMem;
}


/* ============================================
   Address: 0x41FD5E
   Function: j_??1AFX_MODULE_STATE@@UAE@XZ
   ============================================ */

// attributes: thunk
void __thiscall AFX_MODULE_STATE::~AFX_MODULE_STATE(CMapPtrToPtr **this)
{
  ??1AFX_MODULE_STATE@@UAE@XZ(this);
}


/* ============================================
   Address: 0x41FD63
   Function: ?AfxGetModuleState@@YGPAVAFX_MODULE_STATE@@XZ
   ============================================ */

struct AFX_MODULE_STATE *__stdcall AfxGetModuleState()
{
  struct AFX_MODULE_STATE *result; // eax

  result = *((struct AFX_MODULE_STATE **)CThreadLocalObject::GetData(
                                           this: (CThreadLocalObject *)&unk_42F5B8,
                                           a2: CThreadLocal<_AFX_THREAD_STATE>::CreateObject)
           + 1);
  if ( result == nullptr )
    return CProcessLocalObject::GetData(
             this: (CProcessLocalObject *)&unk_42F5BC,
             a2: CProcessLocal<_AFX_BASE_MODULE_STATE>::CreateObject);
  return result;
}


/* ============================================
   Address: 0x41FD89
   Function: ?AfxGetModuleThreadState@@YGPAVAFX_MODULE_THREAD_STATE@@XZ
   ============================================ */

struct AFX_MODULE_THREAD_STATE *__stdcall AfxGetModuleThreadState()
{
  struct AFX_MODULE_STATE *ModuleState; // eax

  ModuleState = AfxGetModuleState();
  return CThreadLocalObject::GetData(
           this: (struct AFX_MODULE_STATE *)((char *)ModuleState + 4208),
           a2: CThreadLocal<AFX_MODULE_THREAD_STATE>::CreateObject);
}


/* ============================================
   Address: 0x41FDA0
   Function: ?Unlock@CTypeLibCache@@QAEXXZ
   ============================================ */

void __thiscall CTypeLibCache::Unlock(CTypeLibCache *this)
{
  int v2; // eax
  int v3; // eax

  if ( InterlockedDecrement(lpAddend: (volatile LONG *)this + 8) == 0 )
  {
    v2 = *((_DWORD *)this + 7);
    if ( v2 != 0 )
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v2 + 8))(a1: *((_DWORD *)this + 7));
      *((_DWORD *)this + 7) = 0;
    }
    v3 = *((_DWORD *)this + 2);
    if ( v3 != 0 )
    {
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 8))(a1: *((_DWORD *)this + 2));
      *((_DWORD *)this + 2) = 0;
    }
  }
}


/* ============================================
   Address: 0x41FDD5
   Function: sub_41FDD5
   ============================================ */

char **sub_41FDD5()
{
  return &off_4232E8;
}


/* ============================================
   Address: 0x41FDDB
   Function: sub_41FDDB
   ============================================ */

int sub_41FDDB()
{
  unknown_libname_25();
  return atexit(a1: sub_41FE03);
}


/* ============================================
   Address: 0x41FDE5
   Function: unknown_libname_25
   ============================================ */

// MFC 3.1-14.0 32bit
std::locale::facet *unknown_libname_25()
{
  return sub_405593(this: (std::locale::facet *)&dword_42F658, a2: 0, a3: 61474);
}


/* ============================================
   Address: 0x41FE03
   Function: sub_41FE03
   ============================================ */

void __cdecl sub_41FE03()
{
  sub_4057AB(this: dword_42F658);
}


/* ============================================
   Address: 0x41FE0D
   Function: sub_41FE0D
   ============================================ */

char **sub_41FE0D()
{
  return &off_423300;
}


/* ============================================
   Address: 0x41FE13
   Function: sub_41FE13
   ============================================ */

int sub_41FE13()
{
  unknown_libname_26();
  return atexit(a1: sub_41FE3B);
}


/* ============================================
   Address: 0x41FE1D
   Function: unknown_libname_26
   ============================================ */

// MFC 3.1-14.0 32bit
std::locale::facet *unknown_libname_26()
{
  return sub_4055BD(this: (std::locale::facet *)&dword_42F5C0, a2: 0, a3: 61476);
}


/* ============================================
   Address: 0x41FE3B
   Function: sub_41FE3B
   ============================================ */

void __cdecl sub_41FE3B()
{
  sub_4057AB(this: dword_42F5C0);
}


/* ============================================
   Address: 0x41FE45
   Function: ?CreateObject@CDC@@SGPAVCObject@@XZ
   ============================================ */

static struct CObject *__stdcall CDC::CreateObject()
{
  CDC *v0; // ecx
  struct CObject *result; // eax

  v0 = (CDC *)operator new(Size: 0x10u);
  result = nullptr;
  if ( v0 != nullptr )
    return CDC::CDC(this: v0);
  return result;
}


/* ============================================
   Address: 0x41FE77
   Function: sub_41FE77
   ============================================ */

char **sub_41FE77()
{
  return &off_423318;
}


/* ============================================
   Address: 0x41FE7D
   Function: sub_41FE7D
   ============================================ */

char **sub_41FE7D()
{
  return &off_423360;
}


/* ============================================
   Address: 0x41FE9D
   Function: sub_41FE9D
   ============================================ */

char **sub_41FE9D()
{
  return &off_423378;
}


/* ============================================
   Address: 0x41FEA3
   Function: ?CreateObject@CFrameWnd@@SGPAVCObject@@XZ
   ============================================ */

static struct CObject *__stdcall CFrameWnd::CreateObject()
{
  CFrameWnd *v0; // ecx
  struct CObject *result; // eax

  v0 = (CFrameWnd *)operator new(Size: 0xBCu);
  result = nullptr;
  if ( v0 != nullptr )
    return CFrameWnd::CFrameWnd(this: v0);
  return result;
}


/* ============================================
   Address: 0x41FED8
   Function: sub_41FED8
   ============================================ */

char **sub_41FED8()
{
  return &off_423A18;
}


/* ============================================
   Address: 0x41FEDE
   Function: sub_41FEDE
   ============================================ */

char **sub_41FEDE()
{
  return &off_423BC8;
}


/* ============================================
   Address: 0x41FEE4
   Function: sub_41FEE4
   ============================================ */

char **sub_41FEE4()
{
  return &off_423BE0;
}


/* ============================================
   Address: 0x41FEEA
   Function: sub_41FEEA
   ============================================ */

int sub_41FEEA()
{
  unknown_libname_27();
  return atexit(a1: sub_41FF12);
}


/* ============================================
   Address: 0x41FEF4
   Function: unknown_libname_27
   ============================================ */

// MFC 3.1-14.0 32bit
std::locale::facet *unknown_libname_27()
{
  return sub_405757(this: (std::locale::facet *)&dword_42F708, a2: 0, a3: 61475);
}


/* ============================================
   Address: 0x41FF12
   Function: sub_41FF12
   ============================================ */

void __cdecl sub_41FF12()
{
  sub_4057AB(this: dword_42F708);
}


/* ============================================
   Address: 0x41FF1C
   Function: sub_41FF1C
   ============================================ */

char **sub_41FF1C()
{
  return &off_423BF8;
}


/* ============================================
   Address: 0x41FF22
   Function: sub_41FF22
   ============================================ */

int sub_41FF22()
{
  unknown_libname_28();
  return atexit(a1: sub_41FF4A);
}


/* ============================================
   Address: 0x41FF2C
   Function: unknown_libname_28
   ============================================ */

// MFC 3.1-14.0 32bit
std::locale::facet *unknown_libname_28()
{
  return sub_405781(this: (std::locale::facet *)&dword_42F7A0, a2: 0, a3: 61473);
}


/* ============================================
   Address: 0x41FF4A
   Function: sub_41FF4A
   ============================================ */

void __cdecl sub_41FF4A()
{
  sub_4057AB(this: dword_42F7A0);
}


/* ============================================
   Address: 0x41FF54
   Function: ?AddHead@CSimpleList@@QAEXPAX@Z
   ============================================ */

void __thiscall CSimpleList::AddHead(CSimpleList *this, char *a2)
{
  *(_DWORD *)&a2[*((_DWORD *)this + 1)] = *(_DWORD *)this;
  *(_DWORD *)this = a2;
}


/* ============================================
   Address: 0x41FF67
   Function: ?Remove@CSimpleList@@QAEHPAX@Z
   ============================================ */

int __thiscall CSimpleList::Remove(CSimpleList *this, char *a2)
{
  char *v2; // edx
  int result; // eax
  int v4; // ebx
  char *v5; // edi

  v2 = *(char **)this;
  if ( *(_DWORD *)this == 0 )
    return 0;
  result = 0;
  if ( v2 == a2 )
  {
    *(_DWORD *)this = *(_DWORD *)&a2[*((_DWORD *)this + 1)];
    return 1;
  }
  if ( v2 != nullptr )
  {
    do
    {
      v4 = *((_DWORD *)this + 1);
      v5 = *(char **)&v2[v4];
      if ( v5 == a2 )
        break;
      v2 = *(char **)&v2[v4];
    }
    while ( v5 != nullptr );
    if ( v2 != nullptr )
    {
      *(_DWORD *)&v2[*((_DWORD *)this + 1)] = *(_DWORD *)&a2[*((_DWORD *)this + 1)];
      return 1;
    }
  }
  return result;
}


/* ============================================
   Address: 0x41FFB2
   Function: ??2CNoTrackObject@@SGPAXI@Z
   ============================================ */

static HLOCAL __stdcall CNoTrackObject::operator new(SIZE_T uBytes)
{
  HLOCAL result; // eax

  result = LocalAlloc(uFlags: 0x40u, uBytes);
  if ( result == nullptr )
    AfxThrowMemoryException();
  return result;
}


/* ============================================
   Address: 0x41FFD0
   Function: ??3CNoTrackObject@@SGXPAX@Z
   ============================================ */

static void __stdcall CNoTrackObject::operator delete(HLOCAL hMem)
{
  if ( hMem != nullptr )
    LocalFree(hMem);
}


/* ============================================
   Address: 0x41FFE4
   Function: ??0CThreadSlotData@@QAE@XZ
   ============================================ */

CThreadSlotData *__thiscall CThreadSlotData::CThreadSlotData(CThreadSlotData *this)
{
  DWORD v2; // eax

  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 6) = 4;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 1;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  v2 = TlsAlloc();
  *(_DWORD *)this = v2;
  if ( v2 == -1 )
    AfxThrowMemoryException();
  InitializeCriticalSection(lpCriticalSection: (LPCRITICAL_SECTION)((char *)this + 28));
  return this;
}


/* ============================================
   Address: 0x420026
   Function: ?AllocSlot@CThreadSlotData@@QAEHXZ
   ============================================ */

int __thiscall CThreadSlotData::AllocSlot(CThreadSlotData *this)
{
  int v2; // ebp
  int v3; // edi
  _BYTE *v4; // eax
  int v5; // ebp
  HGLOBAL v6; // eax
  HGLOBAL v7; // ebx
  HGLOBAL v8; // eax
  char *v9; // ebx
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [esp+14h] [ebp-4h]

  lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)((char *)this + 28);
  EnterCriticalSection(lpCriticalSection: (LPCRITICAL_SECTION)((char *)this + 28));
  v2 = *((_DWORD *)this + 1);
  v3 = *((_DWORD *)this + 2);
  if ( v3 >= v2 || (*(_BYTE *)(*((_DWORD *)this + 4) + 8 * v3) & 1) != 0 )
  {
    v3 = 1;
    if ( v2 <= 1 )
      goto LABEL_8;
    v4 = (_BYTE *)(*((_DWORD *)this + 4) + 8);
    do
    {
      if ( (*v4 & 1) == 0 )
        break;
      ++v3;
      v4 += 8;
    }
    while ( v3 < v2 );
    if ( v3 >= v2 )
    {
LABEL_8:
      v5 = v2 + 32;
      if ( *((_DWORD *)this + 4) != 0 )
      {
        v7 = GlobalHandle(pMem: *((LPCVOID *)this + 4));
        GlobalUnlock(hMem: v7);
        v6 = GlobalReAlloc(hMem: v7, dwBytes: 8 * v5, uFlags: 0x2002u);
      }
      else
      {
        v6 = GlobalAlloc(uFlags: 0x2002u, dwBytes: 8 * v5);
      }
      if ( v6 == nullptr )
      {
        v8 = GlobalHandle(pMem: *((LPCVOID *)this + 4));
        GlobalLock(hMem: v8);
        LeaveCriticalSection(lpCriticalSection);
        AfxThrowMemoryException();
      }
      v9 = (char *)GlobalLock(hMem: v6);
      memset(a1: &v9[8 * *((_DWORD *)this + 1)], Val: 0, Size: 8 * (v5 + 0x1FFFFFFF * *((_DWORD *)this + 1)));
      *((_DWORD *)this + 1) = v5;
      *((_DWORD *)this + 4) = v9;
    }
  }
  if ( v3 >= *((_DWORD *)this + 3) )
    *((_DWORD *)this + 3) = v3 + 1;
  *(_DWORD *)(*((_DWORD *)this + 4) + 8 * v3) |= 1u;
  *((_DWORD *)this + 2) = v3 + 1;
  LeaveCriticalSection(lpCriticalSection);
  return v3;
}


/* ============================================
   Address: 0x420138
   Function: ?FreeSlot@CThreadSlotData@@QAEXH@Z
   ============================================ */

void __thiscall CThreadSlotData::FreeSlot(CThreadSlotData *this, int a2)
{
  _DWORD *i; // esi
  void (__thiscall ***v4)(_DWORD, int); // ecx
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [esp+Ch] [ebp-4h]

  lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)((char *)this + 28);
  EnterCriticalSection(lpCriticalSection: (LPCRITICAL_SECTION)((char *)this + 28));
  for ( i = *((_DWORD **)this + 5); i != nullptr; i = (_DWORD *)i[1] )
  {
    if ( a2 < i[2] )
    {
      v4 = *(void (__thiscall ****)(_DWORD, int))(i[3] + 4 * a2);
      if ( v4 != nullptr )
        (**v4)(a1: v4, a2: 1);
      *(_DWORD *)(i[3] + 4 * a2) = 0;
    }
  }
  *(_DWORD *)(*((_DWORD *)this + 4) + 8 * a2) &= ~1u;
  LeaveCriticalSection(lpCriticalSection);
}


/* ============================================
   Address: 0x420195
   Function: ?SetValue@CThreadSlotData@@QAEXHPAX@Z
   ============================================ */

void __thiscall CThreadSlotData::SetValue(DWORD *this, int a2, void *a3)
{
  char *Value; // esi
  char *v5; // eax
  void *v6; // eax
  HLOCAL v7; // eax

  Value = (char *)TlsGetValue(dwTlsIndex: *this);
  if ( Value != nullptr )
  {
    if ( a2 < *((_DWORD *)Value + 2) || a3 == nullptr )
      goto LABEL_15;
  }
  else
  {
    v5 = (char *)CNoTrackObject::operator new(uBytes: 0x10u);
    if ( v5 != nullptr )
    {
      *(_DWORD *)v5 = &CThreadData::`vftable';
      Value = v5;
    }
    else
    {
      Value = nullptr;
    }
    *((_DWORD *)Value + 2) = 0;
    *((_DWORD *)Value + 3) = 0;
    CSimpleList::AddHead(this: (CSimpleList *)(this + 5), a2: Value);
  }
  v6 = *((void **)Value + 3);
  if ( v6 != nullptr )
    v7 = LocalReAlloc(hMem: v6, uBytes: 4 * *(this + 3), uFlags: 2u);
  else
    v7 = LocalAlloc(uFlags: 0, uBytes: 4 * *(this + 3));
  *((_DWORD *)Value + 3) = v7;
  if ( v7 == nullptr )
    AfxThrowMemoryException();
  memset(
    a1: (void *)(*((_DWORD *)Value + 3) + 4 * *((_DWORD *)Value + 2)),
    Val: 0,
    Size: 4 * (*(this + 3) + 0x3FFFFFFF * *((_DWORD *)Value + 2)));
  *((_DWORD *)Value + 2) = *(this + 3);
  TlsSetValue(dwTlsIndex: *this, lpTlsValue: Value);
LABEL_15:
  *(_DWORD *)(*((_DWORD *)Value + 3) + 4 * a2) = a3;
}


/* ============================================
   Address: 0x420263
   Function: sub_420263
   ============================================ */

HLOCAL __thiscall sub_420263(HLOCAL hMem, char a2)
{
  sub_42027E();
  if ( (a2 & 1) != 0 )
    CNoTrackObject::operator delete(hMem);
  return hMem;
}


/* ============================================
   Address: 0x42027E
   Function: sub_42027E
   ============================================ */

void __thiscall sub_42027E(_DWORD *this)
{
  *this = &CNoTrackObject::`vftable';
}


/* ============================================
   Address: 0x420285
   Function: ?DeleteValues@CThreadSlotData@@QAEXPAUCThreadData@@PAUHINSTANCE__@@@Z
   ============================================ */

void __thiscall CThreadSlotData::DeleteValues(CThreadSlotData *this, struct CThreadData *a2, HINSTANCE a3)
{
  int v4; // edi
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int i; // [esp+Ch] [ebp-4h]

  v4 = 1;
  for ( i = 1; v4 < *((_DWORD *)a2 + 2); ++v4 )
  {
    if ( a3 == nullptr || *(HINSTANCE *)(*((_DWORD *)this + 4) + 8 * v4 + 4) == a3 )
    {
      v5 = *(void (__thiscall ****)(_DWORD, int))(*((_DWORD *)a2 + 3) + 4 * v4);
      if ( v5 != nullptr )
        (**v5)(a1: v5, a2: 1);
      *(_DWORD *)(*((_DWORD *)a2 + 3) + 4 * v4) = 0;
    }
    else if ( *(_DWORD *)(*((_DWORD *)a2 + 3) + 4 * v4) != 0 )
    {
      i = 0;
    }
  }
  if ( i != 0 )
  {
    CSimpleList::Remove(this: (CThreadSlotData *)((char *)this + 20), (char *)a2);
    LocalFree(hMem: *((HLOCAL *)a2 + 3));
    if ( a2 != nullptr )
      (**(void (__thiscall ***)(struct CThreadData *, int))a2)(a1: a2, a2: 1);
    TlsSetValue(dwTlsIndex: *(_DWORD *)this, lpTlsValue: nullptr);
  }
}


/* ============================================
   Address: 0x42030D
   Function: ?DeleteValues@CThreadSlotData@@QAEXPAUHINSTANCE__@@H@Z
   ============================================ */

void __thiscall CThreadSlotData::DeleteValues(CThreadSlotData *this, HINSTANCE a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v4; // ebx
  struct CThreadData *Value; // eax
  int v6; // eax
  int v7; // edi

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 28);
  EnterCriticalSection(lpCriticalSection: (LPCRITICAL_SECTION)((char *)this + 28));
  if ( a3 != 0 )
  {
    v6 = *((_DWORD *)this + 5);
    if ( v6 != 0 )
    {
      do
      {
        v7 = *(_DWORD *)(v6 + 4);
        CThreadSlotData::DeleteValues(this, a2: (struct CThreadData *)v6, a3: a2);
        v6 = v7;
      }
      while ( v7 != 0 );
    }
  }
  else
  {
    Value = (struct CThreadData *)TlsGetValue(dwTlsIndex: *(_DWORD *)this);
    if ( Value != nullptr )
      CThreadSlotData::DeleteValues(this, a2: Value, a3: a2);
  }
  LeaveCriticalSection(lpCriticalSection: v4);
}


/* ============================================
   Address: 0x420366
   Function: ?GetData@CThreadLocalObject@@QAEPAVCNoTrackObject@@P6GPAV2@XZ@Z
   ============================================ */

struct CNoTrackObject *__thiscall CThreadLocalObject::GetData(
        CThreadLocalObject *this,
        struct CNoTrackObject *(__stdcall *a2)())
{
  CThreadSlotData *v3; // ecx
  int v4; // esi
  _DWORD *Value; // eax
  struct CNoTrackObject *v6; // esi

  if ( *(_DWORD *)this == 0 )
  {
    v3 = dword_42F838;
    if ( dword_42F838 == nullptr )
    {
      if ( &unk_42F840 != nullptr )
        v3 = CThreadSlotData::CThreadSlotData(this: (CThreadSlotData *)&unk_42F840);
      else
        v3 = nullptr;
      dword_42F838 = v3;
    }
    *(_DWORD *)this = CThreadSlotData::AllocSlot(this: v3);
  }
  v4 = *(_DWORD *)this;
  Value = TlsGetValue(dwTlsIndex: *(_DWORD *)dword_42F838);
  if ( Value != nullptr && v4 < Value[2] )
    v6 = *(struct CNoTrackObject **)(Value[3] + 4 * v4);
  else
    v6 = nullptr;
  if ( v6 == nullptr )
  {
    v6 = a2();
    CThreadSlotData::SetValue(this: (DWORD *)dword_42F838, a2: *(_DWORD *)this, a3: v6);
  }
  return v6;
}


/* ============================================
   Address: 0x4203DD
   Function: ??1CThreadLocalObject@@QAE@XZ
   ============================================ */

void __thiscall CThreadLocalObject::~CThreadLocalObject(CThreadLocalObject *this)
{
  if ( *(_DWORD *)this != 0 && dword_42F838 != nullptr )
    CThreadSlotData::FreeSlot(this: dword_42F838, a2: *(_DWORD *)this);
  *(_DWORD *)this = 0;
}


/* ============================================
   Address: 0x4203FB
   Function: ?GetData@CProcessLocalObject@@QAEPAVCNoTrackObject@@P6GPAV2@XZ@Z
   ============================================ */

struct CNoTrackObject *__thiscall CProcessLocalObject::GetData(
        CProcessLocalObject *this,
        struct CNoTrackObject *(__stdcall *a2)())
{
  _DWORD v4[6]; // [esp-10h] [ebp-24h] BYREF
  int v5; // [esp+10h] [ebp-4h]

  v4[3] = this;
  v4[5] = v4;
  v4[4] = this;
  if ( *(_DWORD *)this == 0 )
  {
    AfxLockGlobals(a1: 16);
    v5 = 0;
    if ( *(_DWORD *)this == 0 )
      *(_DWORD *)this = a2();
    v5 = -1;
    AfxUnlockGlobals(a1: 16);
  }
  return *(struct CNoTrackObject **)this;
}


/* ============================================
   Address: 0x420466
   Function: ??1CProcessLocalObject@@QAE@XZ
   ============================================ */

void __thiscall CProcessLocalObject::~CProcessLocalObject(CProcessLocalObject *this)
{
  if ( *(_DWORD *)this != 0 )
    (***(void (__thiscall ****)(_DWORD, int))this)(a1: *(_DWORD *)this, a2: 1);
}


/* ============================================
   Address: 0x42048B
   Function: ?AfxTermLocalData@@YGXPAUHINSTANCE__@@H@Z
   ============================================ */

void __stdcall AfxTermLocalData(HINSTANCE a1, int a2)
{
  if ( dword_42F838 != nullptr )
    CThreadSlotData::DeleteValues(this: dword_42F838, a2: a1, a3: a2);
}


/* ============================================
   Address: 0x4204A5
   Function: sub_4204A5
   ============================================ */

char **sub_4204A5()
{
  return &off_423CB8;
}


/* ============================================
   Address: 0x4204AB
   Function: ??1_AFX_CTL3D_STATE@@UAE@XZ
   ============================================ */

void __thiscall _AFX_CTL3D_STATE::~_AFX_CTL3D_STATE(_AFX_CTL3D_STATE *this)
{
  void (__stdcall *v2)(_DWORD); // eax

  *(_DWORD *)this = &_AFX_CTL3D_STATE::`vftable';
  v2 = *((void (__stdcall **)(_DWORD))this + 4);
  if ( v2 != nullptr )
    v2(a1: 0);
  if ( *((_DWORD *)this + 2) != 0 )
    FreeLibrary(hLibModule: *((HMODULE *)this + 2));
  *(_DWORD *)this = &CNoTrackObject::`vftable';
}


/* ============================================
   Address: 0x4204F2
   Function: ??1_AFX_CTL3D_THREAD@@UAE@XZ
   ============================================ */

void __thiscall _AFX_CTL3D_THREAD::~_AFX_CTL3D_THREAD(_AFX_CTL3D_THREAD *this)
{
  void (*v2)(void); // eax

  *(_DWORD *)this = &_AFX_CTL3D_THREAD::`vftable';
  if ( dword_42F878 != 0 )
  {
    v2 = *(void (**)(void))(dword_42F878 + 24);
    if ( v2 != nullptr )
      v2();
  }
  *(_DWORD *)this = &CNoTrackObject::`vftable';
}


/* ============================================
   Address: 0x420532
   Function: sub_420532
   ============================================ */

int sub_420532()
{
  nullsub_21();
  return atexit(a1: sub_420549);
}


/* ============================================
   Address: 0x42053C
   Function: nullsub_21
   ============================================ */

void nullsub_21()
{
  ;
}


/* ============================================
   Address: 0x420549
   Function: sub_420549
   ============================================ */

void __cdecl sub_420549()
{
  CThreadLocalObject::~CThreadLocalObject(this: (CThreadLocalObject *)&unk_42F87C);
}


/* ============================================
   Address: 0x420558
   Function: sub_420558
   ============================================ */

int sub_420558()
{
  nullsub_22();
  return atexit(a1: sub_42056F);
}


/* ============================================
   Address: 0x420562
   Function: nullsub_22
   ============================================ */

void nullsub_22()
{
  ;
}


/* ============================================
   Address: 0x42056F
   Function: sub_42056F
   ============================================ */

void __cdecl sub_42056F()
{
  CProcessLocalObject::~CProcessLocalObject(this: (CProcessLocalObject *)&dword_42F878);
}


/* ============================================
   Address: 0x42057E
   Function: sub_42057E
   ============================================ */

int sub_42057E()
{
  sub_420588();
  return atexit(a1: sub_42059E);
}


/* ============================================
   Address: 0x420588
   Function: sub_420588
   ============================================ */

AUX_DATA *sub_420588()
{
  return AUX_DATA::AUX_DATA(this: (AUX_DATA *)&dword_42F880);
}


/* ============================================
   Address: 0x42059E
   Function: sub_42059E
   ============================================ */

void __cdecl sub_42059E()
{
  AfxDeleteObject(a1: (void **)&hBitmapChecked);
}


/* ============================================
   Address: 0x4205A8
   Function: ?AfxEnableWin40Compatibility@@YGXXZ
   ============================================ */

void __stdcall AfxEnableWin40Compatibility()
{
  int SystemMetrics; // eax

  if ( dword_42F8DC != 0 )
  {
    dword_42F880 = GetSystemMetrics(nIndex: 2) + 1;
    SystemMetrics = GetSystemMetrics(nIndex: 3);
    dword_42F8E8 = 1;
    dword_42F884 = SystemMetrics + 1;
  }
}


/* ============================================
   Address: 0x4205D8
   Function: ?AfxEnableWin31Compatibility@@YGXXZ
   ============================================ */

void __stdcall AfxEnableWin31Compatibility()
{
  int SystemMetrics; // eax

  dword_42F880 = GetSystemMetrics(nIndex: 2);
  SystemMetrics = GetSystemMetrics(nIndex: 3);
  dword_42F8E8 = 0;
  dword_42F884 = SystemMetrics;
}


/* ============================================
   Address: 0x4205FA
   Function: ??0AUX_DATA@@QAE@XZ
   ============================================ */

AUX_DATA *__thiscall AUX_DATA::AUX_DATA(AUX_DATA *this)
{
  DWORD Version; // eax
  BOOL v3; // eax
  bool v4; // zf
  int v5; // eax

  Version = GetVersion();
  *((_DWORD *)this + 21) = BYTE1(Version) + ((unsigned __int8)Version << 8);
  *((_DWORD *)this + 22) = Version >> 31;
  v3 = (unsigned __int8)Version >= 4u;
  *((_DWORD *)this + 23) = v3;
  *((_DWORD *)this + 24) = 1 - v3;
  *((_DWORD *)this + 25) = v3;
  *((_DWORD *)this + 26) = 0;
  if ( v3 )
    *((_DWORD *)this + 26) = GetProcessVersion(ProcessId: 0) >= 0x40000;
  AUX_DATA::UpdateSysMetrics(this);
  *((_DWORD *)this + 9) = 0;
  AUX_DATA::UpdateSysColors(this);
  *((_DWORD *)this + 15) = LoadCursorA(hInstance: nullptr, lpCursorName: (LPCSTR)0x7F02);
  *((_DWORD *)this + 16) = LoadCursorA(hInstance: nullptr, lpCursorName: (LPCSTR)0x7F00);
  v4 = *((_DWORD *)this + 23) == 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 17) = 0;
  v5 = !v4 + 1;
  *((_DWORD *)this + 4) = v5;
  *((_DWORD *)this + 5) = v5;
  return this;
}


/* ============================================
   Address: 0x4206AF
   Function: sub_4206AF
   ============================================ */

char **sub_4206AF()
{
  return &off_423CF8;
}


/* ============================================
   Address: 0x4206B5
   Function: ?AfxCriticalInit@@YGHXZ
   ============================================ */

int __stdcall AfxCriticalInit()
{
  signed int Version; // eax

  if ( dword_42F8F0 == 0 )
  {
    dword_42F8F0 = 1;
    Version = GetVersion();
    dword_42FA90 = (unsigned __int8)Version < 4u && Version < 0;
    if ( dword_42FA90 == 0 )
      InitializeCriticalSection(lpCriticalSection: &CriticalSection);
  }
  return dword_42F8F0;
}


/* ============================================
   Address: 0x420703
   Function: ?AfxLockGlobals@@YGXH@Z
   ============================================ */

void __stdcall AfxLockGlobals(int a1)
{
  if ( dword_42F8F0 == 0 )
    AfxCriticalInit();
  if ( dword_42FA90 == 0 )
  {
    if ( dword_42FAB0[a1] == 0 )
    {
      EnterCriticalSection(lpCriticalSection: &CriticalSection);
      if ( dword_42FAB0[a1] == 0 )
      {
        InitializeCriticalSection(lpCriticalSection: (LPCRITICAL_SECTION)(24 * a1 + 4389112));
        ++dword_42FAB0[a1];
      }
      LeaveCriticalSection(lpCriticalSection: &CriticalSection);
    }
    EnterCriticalSection(lpCriticalSection: (LPCRITICAL_SECTION)(24 * a1 + 4389112));
  }
}


/* ============================================
   Address: 0x420773
   Function: ?AfxUnlockGlobals@@YGXH@Z
   ============================================ */

void __stdcall AfxUnlockGlobals(int a1)
{
  if ( dword_42FA90 == 0 )
    LeaveCriticalSection(lpCriticalSection: (LPCRITICAL_SECTION)(24 * a1 + 4389112));
}


/* ============================================
   Address: 0x420794
   Function: ?GetAppRegistryKey@CWinApp@@QAEPAUHKEY__@@XZ
   ============================================ */

HKEY __thiscall CWinApp::GetAppRegistryKey(LPCSTR *this)
{
  DWORD dwDisposition; // [esp+10h] [ebp-10h] BYREF
  HKEY v5; // [esp+14h] [ebp-Ch] BYREF
  HKEY hKey; // [esp+18h] [ebp-8h] BYREF
  HKEY phkResult; // [esp+1Ch] [ebp-4h] BYREF

  v5 = nullptr;
  phkResult = nullptr;
  hKey = nullptr;
  if ( RegOpenKeyExA(hKey: HKEY_CURRENT_USER, lpSubKey: "Software", ulOptions: 0, samDesired: 0x2001Fu, &phkResult) == 0
    && RegCreateKeyExA(
         hKey: phkResult,
         lpSubKey: *(this + 31),
         Reserved: 0,
         lpClass: nullptr,
         dwOptions: 0,
         samDesired: 0x2001Fu,
         lpSecurityAttributes: nullptr,
         phkResult: &hKey,
         lpdwDisposition: &dwDisposition) == 0 )
  {
    RegCreateKeyExA(
      hKey,
      lpSubKey: *(this + 36),
      Reserved: 0,
      lpClass: nullptr,
      dwOptions: 0,
      samDesired: 0x2001Fu,
      lpSecurityAttributes: nullptr,
      phkResult: &v5,
      lpdwDisposition: &dwDisposition);
  }
  if ( phkResult != nullptr )
    RegCloseKey(hKey: phkResult);
  if ( hKey != nullptr )
    RegCloseKey(hKey);
  return v5;
}


/* ============================================
   Address: 0x420828
   Function: ?GetSectionKey@CWinApp@@QAEPAUHKEY__@@PBD@Z
   ============================================ */

HKEY __thiscall CWinApp::GetSectionKey(LPCSTR *this, const char *lpSubKey)
{
  HKEY AppRegistryKey; // edi
  DWORD dwDisposition; // [esp+8h] [ebp-8h] BYREF
  HKEY phkResult; // [esp+Ch] [ebp-4h] BYREF

  phkResult = nullptr;
  AppRegistryKey = CWinApp::GetAppRegistryKey(this);
  if ( AppRegistryKey == nullptr )
    return nullptr;
  RegCreateKeyExA(
    hKey: AppRegistryKey,
    lpSubKey,
    Reserved: 0,
    lpClass: nullptr,
    dwOptions: 0,
    samDesired: 0x2001Fu,
    lpSecurityAttributes: nullptr,
    &phkResult,
    lpdwDisposition: &dwDisposition);
  RegCloseKey(hKey: AppRegistryKey);
  return phkResult;
}


/* ============================================
   Address: 0x42086E
   Function: sub_42086E
   ============================================ */

char **sub_42086E()
{
  return &off_423EB8;
}


/* ============================================
   Address: 0x420874
   Function: ?CreateObject@CImageList@@SGPAVCObject@@XZ
   ============================================ */

static struct CObject *__stdcall CImageList::CreateObject()
{
  _DWORD *v0; // ecx
  struct CObject *result; // eax

  v0 = operator new(Size: 8u);
  result = nullptr;
  if ( v0 != nullptr )
    return (struct CObject *)sub_405917(this: v0);
  return result;
}


/* ============================================
   Address: 0x4208A6
   Function: sub_4208A6
   ============================================ */

char **sub_4208A6()
{
  return &off_4240F8;
}


/* ============================================
   Address: 0x4208AC
   Function: sub_4208AC
   ============================================ */

// ?AfxWinInit@@YGHPAUHINSTANCE__@@0PAGH@Z
// doubtful name
int __stdcall sub_4208AC(int a1, int a2, int a3, int a4)
{
  UINT v4; // eax
  struct AFX_MODULE_STATE *ModuleState; // eax
  CWinApp *v6; // eax

  v4 = SetErrorMode(uMode: 0);
  LOWORD(v4) = v4 | 0x8001;
  SetErrorMode(uMode: v4);
  ModuleState = AfxGetModuleState();
  *((_DWORD *)ModuleState + 2) = a1;
  *((_DWORD *)ModuleState + 3) = a1;
  v6 = *((CWinApp **)AfxGetModuleState() + 1);
  if ( v6 != nullptr )
  {
    *((_DWORD *)v6 + 26) = a1;
    *((_DWORD *)v6 + 27) = a2;
    *((_DWORD *)v6 + 28) = a3;
    *((_DWORD *)v6 + 29) = a4;
    CWinApp::SetCurrentHandles(this: v6);
  }
  if ( *((_BYTE *)AfxGetModuleState() + 20) == 0 )
    AfxInitThread();
  return 1;
}


/* ============================================
   Address: 0x42090F
   Function: ?SetCurrentHandles@CWinApp@@QAEXXZ
   ============================================ */

void __thiscall CWinApp::SetCurrentHandles(CWinApp *this)
{
  struct AFX_MODULE_STATE *ModuleState; // edi
  CHAR *v3; // eax
  char *v4; // eax
  LPSTR v5; // ebx
  CHAR Buffer[256]; // [esp+Ch] [ebp-30Ch] BYREF
  CHAR Filename[260]; // [esp+10Ch] [ebp-20Ch] BYREF
  CHAR String1[260]; // [esp+210h] [ebp-108h] BYREF
  LPSTR lpString1; // [esp+314h] [ebp-4h]

  ModuleState = AfxGetModuleState();
  *((_DWORD *)ModuleState + 2) = *((_DWORD *)this + 26);
  *((_DWORD *)ModuleState + 3) = *((_DWORD *)this + 26);
  GetModuleFileNameA(hModule: *((HMODULE *)this + 26), lpFilename: Filename, nSize: 0x104u);
  v3 = (CHAR *)_mbsrchr(String: (const unsigned __int8 *)Filename, C: 0x2Eu);
  *v3 = 0;
  lpString1 = v3;
  AfxGetFileName(lpString: Filename, lpString1: String1, iMaxLength: 0x104u);
  if ( *((_DWORD *)this + 34) == 0 )
    *((_DWORD *)this + 34) = _strdup(Source: String1);
  if ( *((_DWORD *)this + 30) == 0 )
  {
    if ( AfxLoadString(uID: 0xE000u, lpBuffer: Buffer, cchBufferMax: 0x100u) != 0 )
      v4 = _strdup(Source: Buffer);
    else
      v4 = _strdup(Source: *((const char **)this + 34));
    *((_DWORD *)this + 30) = v4;
  }
  *((_DWORD *)ModuleState + 4) = *((_DWORD *)this + 30);
  if ( *((_DWORD *)this + 35) == 0 )
  {
    v5 = lpString1;
    lstrcpyA(lpString1, lpString2: ".HLP");
    *((_DWORD *)this + 35) = _strdup(Source: Filename);
    *v5 = 0;
  }
  if ( *((_DWORD *)this + 36) == 0 )
  {
    lstrcatA(lpString1: String1, lpString2: ".INI");
    *((_DWORD *)this + 36) = _strdup(Source: String1);
  }
}


/* ============================================
   Address: 0x420A2C
   Function: ?AfxGetFileName@@YGIPBDPADI@Z
   ============================================ */

int __stdcall AfxGetFileName(unsigned __int8 *lpString, LPSTR lpString1, unsigned int iMaxLength)
{
  unsigned __int8 *v3; // esi
  const CHAR *v4; // edi
  unsigned __int8 v5; // al

  v3 = lpString;
  v4 = (const CHAR *)lpString;
  while ( *v3 != 0 )
  {
    v5 = *v3;
    if ( *v3 == 92 || v5 == 47 || v5 == 58 )
      v4 = (const CHAR *)_mbsinc(Ptr: v3);
    v3 = _mbsinc(Ptr: v3);
  }
  if ( lpString1 == nullptr )
    return lstrlenA(lpString: v4) + 1;
  lstrcpynA(lpString1, lpString2: v4, iMaxLength);
  return 0;
}


/* ============================================
   Address: 0x420A82
   Function: ??1_AFX_WIN_STATE@@UAE@XZ
   ============================================ */

void __thiscall _AFX_WIN_STATE::~_AFX_WIN_STATE(void **this)
{
  *this = &_AFX_WIN_STATE::`vftable';
  AfxDeleteObject(a1: this + 1);
  *this = &CNoTrackObject::`vftable';
}


/* ============================================
   Address: 0x420AB9
   Function: ?AfxPostQuitMessage@@YGXH@Z
   ============================================ */

void __stdcall AfxPostQuitMessage(int nExitCode)
{
  struct CWinThread *Thread; // eax
  void (__stdcall *v2)(int, int); // eax

  Thread = AfxGetThread();
  if ( Thread != nullptr )
  {
    v2 = *((void (__stdcall **)(int, int))Thread + 21);
    if ( v2 != nullptr )
      v2(a1: 1, a2: 1);
  }
  PostQuitMessage(nExitCode);
}


/* ============================================
   Address: 0x420ADC
   Function: ??1CWinThread@@UAE@XZ
   ============================================ */

void __thiscall CWinThread::~CWinThread(CWinThread *this)
{
  void *v2; // eax
  struct AFX_MODULE_THREAD_STATE *ModuleThreadState; // eax

  *(_DWORD *)this = &CWinThread::`vftable';
  v2 = *((void **)this + 10);
  if ( v2 != nullptr )
    CloseHandle(hObject: v2);
  ModuleThreadState = AfxGetModuleThreadState();
  if ( *((CWinThread **)ModuleThreadState + 1) == this )
    *((_DWORD *)ModuleThreadState + 1) = 0;
  CCmdTarget::~CCmdTarget(this);
}


/* ============================================
   Address: 0x420B35
   Function: ?AfxWinTerm@@YGXXZ
   ============================================ */

void __stdcall AfxWinTerm()
{
  struct AFX_MODULE_STATE *ModuleState; // ebp
  const unsigned __int8 *v1; // ebp
  const unsigned __int8 *i; // esi
  unsigned __int8 *v3; // edi
  struct AFX_MODULE_STATE *v4; // eax
  int v5; // eax
  void (__stdcall *v6)(int, _DWORD); // eax
  struct _AFX_THREAD_STATE *ThreadState; // esi
  CToolTipCtrl *v8; // ecx

  ModuleState = AfxGetModuleState();
  AfxLockGlobals(a1: 1);
  v1 = (const unsigned __int8 *)ModuleState + 52;
  for ( i = v1; *i != 0; i = v3 + 1 )
  {
    v3 = _mbschr(Str: i, C: 0xAu);
    *v3 = 0;
    v4 = AfxGetModuleState();
    UnregisterClassA(lpClassName: (LPCSTR)i, hInstance: *((HINSTANCE *)v4 + 2));
  }
  *v1 = 0;
  AfxUnlockGlobals(a1: 1);
  v5 = *((_DWORD *)AfxGetModuleState() + 1);
  if ( v5 != 0 )
  {
    v6 = *(void (__stdcall **)(int, _DWORD))(v5 + 84);
    if ( v6 != nullptr )
      v6(a1: 1, a2: 0);
  }
  ThreadState = AfxGetThreadState();
  v8 = *((CToolTipCtrl **)ThreadState + 51);
  if ( v8 != nullptr && CToolTipCtrl::DestroyToolTipCtrl(this: v8) != 0 )
    *((_DWORD *)ThreadState + 51) = 0;
  if ( *((_BYTE *)AfxGetModuleState() + 20) == 0 )
  {
    if ( *((_DWORD *)ThreadState + 12) != 0 )
    {
      UnhookWindowsHookEx(hhk: *((HHOOK *)ThreadState + 12));
      *((_DWORD *)ThreadState + 12) = 0;
    }
    if ( *((_DWORD *)ThreadState + 11) != 0 )
    {
      UnhookWindowsHookEx(hhk: *((HHOOK *)ThreadState + 11));
      *((_DWORD *)ThreadState + 11) = 0;
    }
  }
}

