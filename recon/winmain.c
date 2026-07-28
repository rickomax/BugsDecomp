// Module `winmain`.
//
// Reconstructed from Bugs.exe (PC v1.0) by tools/recon.py.
// Generated file -- do not edit by hand; see recon/README.md.
//
// Address range: 0x405950 - 0x407990 (11 functions).

#include "bugs.h"


// 0x405950  WinMain
// IDA symbol: _WinMain@16
int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
  HWND WindowA; // eax
  HWND v5; // esi
  UINT v7; // edi
  HWND v8; // eax
  int v9; // eax
  CHAR VolumeNameBuffer[260]; // [esp+Ch] [ebp-350h] BYREF
  CHAR Buffer[260]; // [esp+110h] [ebp-24Ch] BYREF
  char WindowName[260]; // [esp+214h] [ebp-148h] BYREF
  MSG v13; // [esp+318h] [ebp-44h] BYREF
  struct tagMSG Msg; // [esp+334h] [ebp-28h] BYREF
  DWORD Type; // [esp+350h] [ebp-Ch] BYREF
  DWORD cbData; // [esp+354h] [ebp-8h] BYREF
  HKEY phkResult; // [esp+358h] [ebp-4h] BYREF

  LoadStringA(hInstance, /*uID*/ *((_DWORD *)off_45F344 + 2), /*lpBuffer*/ Buffer, /*cchBufferMax*/ 260);
  LoadStringA(hInstance: ::hInstance, /*uID*/ *((_DWORD *)off_45F344 + 1), /*lpBuffer*/ WindowName, /*cchBufferMax*/ 260);
  WindowA = FindWindowA(/*lpClassName*/ ClassName, /*lpWindowName*/ WindowName);
  v5 = WindowA;
  if ( WindowA != NULL )
  {
    BringWindowToTop(/*hWnd*/ WindowA);
    if ( IsIconic(/*hWnd*/ v5) )
    {
      ShowWindow(/*hWnd*/ v5, /*nCmdShow*/ 9);
      return 0;
    }
    return 0;
  }
  dword_7C95E4 = GetSystemMetrics(/*nIndex*/ 0);
  dword_7C95E0 = GetSystemMetrics(/*nIndex*/ 1);
  sub_409E90();
  ReadConfig();
  switch ( dword_9CA828 )
  {
    case 0:
      off_45F344 = &unk_45F2B8;
      break;
    case 1:
      off_45F344 = &unk_45F2D0;
      break;
    case 2:
      off_45F344 = &unk_45F2E8;
      break;
    case 3:
      off_45F344 = &unk_45F300;
      break;
    case 4:
      off_45F344 = &unk_45F318;
      break;
    case 5:
      off_45F344 = &unk_45F330;
      break;
    default:
      break;
  }
  if ( RegOpenKeyExA(/*hKey*/ HKEY_CURRENT_USER, /*lpSubKey*/ SubKey, /*ulOptions*/ 0, /*samDesired*/ 0x20019u, &phkResult) != 0 )
    return 0;
  WindowName[0] = ::WindowName;
  memset(&WindowName[1], 0, 259);
  Type = 1;
  cbData = 260;
  if ( RegQueryValueExA(
         /*hKey*/ phkResult,
         /*lpValueName*/ ValueName,
         /*lpReserved*/ NULL,
         /*lpType*/ &Type,
         /*lpData*/ (LPBYTE)WindowName,
         /*lpcbData*/ &cbData) != 0 )
  {
    RegCloseKey(/*hKey*/ phkResult);
    return 0;
  }
  else
  {
    if ( Buffer[strlen(WindowName) + 259] != 92 )
      strcat(WindowName, "\\");
    strcat(WindowName, (const char *)&off_45F36C);
    _chdir(/*Path*/ WindowName);
    RegCloseKey(/*hKey*/ phkResult);
    v7 = SetErrorMode(/*uMode*/ 1u);
    strcpy(WindowName, "a:\\");
    if ( (char)off_45F368 <= 122 )
    {
      while ( GetDriveTypeA(/*lpRootPathName*/ WindowName) != 5
           || !GetVolumeInformationA(
                 /*lpRootPathName*/ WindowName,
                 /*lpVolumeNameBuffer*/ VolumeNameBuffer,
                 /*nVolumeNameSize*/ 0x104u,
                 /*lpVolumeSerialNumber*/ (LPDWORD)&phkResult,
                 /*lpMaximumComponentLength*/ &cbData,
                 /*lpFileSystemFlags*/ &Type,
                 /*lpFileSystemNameBuffer*/ NULL,
                 /*nFileSystemNameSize*/ 0)
           || _strcmpi(/*String1*/ VolumeNameBuffer, /*String2*/ String2) != 0 )
      {
        if ( ++WindowName[0] > 122 )
          goto LABEL_22;
      }
      byte_4B1928 = WindowName[0];
      strcpy((char *)&dword_4B1929, ":\\Datas\\");
    }
LABEL_22:
    SetErrorMode(/*uMode*/ v7);
    sub_408F90();
    sub_42A6A0();
    sub_409880();
    sub_4099B0();
    ::hInstance = hInstance;
    v8 = (HWND)sub_40E820(hInstance, /*nCmdShow*/ nShowCmd);
    if ( v8 == NULL )
    {
      if ( dword_9CA838 != 0 )
      {
        dword_9CA838 = 0;
        v8 = (HWND)sub_40E820(hInstance: ::hInstance, /*nCmdShow*/ 5);
      }
      if ( v8 == NULL )
      {
        dword_9CA824 = dword_4B1DE4 >= 300;
        v8 = (HWND)sub_40E820(hInstance: ::hInstance, /*nCmdShow*/ 5);
        if ( v8 == NULL )
          goto LABEL_71;
      }
    }
    hWnd = v8;
    sub_4061B0();
LABEL_30:
    if ( !PeekMessageA(/*lpMsg*/ &Msg, /*hWnd*/ NULL, /*wMsgFilterMin*/ 0, /*wMsgFilterMax*/ 0, /*wRemoveMsg*/ 1u) )
    {
LABEL_33:
      dword_4B18F0 = 0;
      dword_4B18F8 = 0;
      dword_4B1D00 = 0;
      dword_4B1924 = 0;
      QueryPerformanceCounter(/*lpPerformanceCount*/ &PerformanceCount);
      qword_7C95E8 = PerformanceCount.QuadPart;
      v9 = dword_45F2B0;
      if ( dword_45F2B0 != 1 )
        goto LABEL_56;
      while ( 1 )
      {
        if ( GetForegroundWindow() == hWnd || byte_4B2277 != 0 )
        {
          if ( sub_406600() == 0 )
            goto LABEL_55;
          if ( dword_4B1D00 != 0 )
          {
            LOWORD(dword_4B2368) = 0;
            sub_40A590(dword_4B39AC);
            ++dword_4B18F8;
          }
          else
          {
            dword_623654 = 0;
            dword_623650 = 0;
            dword_4B2368 = 0;
            GsSetRefView2L(&dword_4B38C0);
            sub_40A250(dword_4B39AC);
            dword_4EFB8C = (int)dword_4E5E44;
            sub_44B4E0(dword_4B2164);
            sub_44C620(dword_4B39AC);
            sub_44BCC0(&dword_4B21A0);
            sub_44D110(dword_4B373C);
            ++dword_4B18FC;
          }
          LOWORD(dword_4B2368) = 0;
          word_4B39C0 = 0;
          if ( word_4B39B0 <= 0 )
          {
            dword_4B1A90();
          }
          else
          {
            if ( dword_4B1D00 == 0 )
            {
              if ( dword_4E5E40 <= 0 )
              {
                dword_4B1A90();
              }
              else
              {
                InvalidateRect(/*hWnd*/ hWnd, /*lpRect*/ NULL, /*bErase*/ false);
                UpdateWindow(/*hWnd*/ hWnd);
                ++dword_4B18F4;
              }
              if ( PeekMessageA(/*lpMsg*/ &v13, /*hWnd*/ NULL, /*wMsgFilterMin*/ 0, /*wMsgFilterMax*/ 0, /*wRemoveMsg*/ 1u) )
              {
                while ( v13.message != 18 )
                {
                  TranslateMessage(/*lpMsg*/ &v13);
                  DispatchMessageA(/*lpMsg*/ &v13);
                  if ( !PeekMessageA(/*lpMsg*/ &v13, /*hWnd*/ NULL, /*wMsgFilterMin*/ 0, /*wMsgFilterMax*/ 0, /*wRemoveMsg*/ 1u) )
                    goto LABEL_48;
                }
LABEL_55:
                v9 = 0;
                dword_45F2B0 = 0;
LABEL_56:
                if ( v9 == 0 )
                {
                  PostQuitMessage(/*nExitCode*/ 0);
                  while ( PeekMessageA(/*lpMsg*/ &Msg, /*hWnd*/ NULL, /*wMsgFilterMin*/ 0, /*wMsgFilterMax*/ 0, /*wRemoveMsg*/ 1u) )
                  {
                    TranslateMessage(/*lpMsg*/ &Msg);
                    DispatchMessageA(/*lpMsg*/ &Msg);
                  }
                  goto LABEL_71;
                }
                LoadStringA(hInstance, /*uID*/ *((_DWORD *)off_45F344 + 4), /*lpBuffer*/ Buffer, /*cchBufferMax*/ 260);
                if ( dword_45F2B0 == 19 )
                {
                  sub_40DDA0();
                  dword_45F2B0 = 1;
                }
                else if ( dword_45F2B0 == 20 )
                {
                  if ( dword_9CA838 != 0 )
                  {
                    sub_40E230(0);
                    sub_40DDA0();
                  }
                  dword_45F2B0 = 0;
                  if ( MessageBoxA(/*hWnd*/ hWnd, /*lpText*/ Buffer, /*lpCaption*/ Caption, /*uType*/ 4u) == 7 )
                  {
                    if ( dword_9CA7B8 != 0 )
                    {
                      dword_45F2B0 = 19;
                      sub_40E230(1);
                      sub_40DDA0();
                    }
                    dword_45F2B0 = 1;
                    while ( (~BYTE1(dword_4B31C1) & 8) != 0 )
                      sub_449330();
                  }
                }
                else
                {
                  dword_45F2B0 = 1;
                }
                goto LABEL_30;
              }
            }
LABEL_48:
            word_4B39B0 = 0;
          }
          sub_406F00();
          ++dword_4B18F0;
        }
        while ( PeekMessageA(/*lpMsg*/ &Msg, /*hWnd*/ NULL, /*wMsgFilterMin*/ 0, /*wMsgFilterMax*/ 0, /*wRemoveMsg*/ 1u) )
        {
          TranslateMessage(/*lpMsg*/ &Msg);
          DispatchMessageA(/*lpMsg*/ &Msg);
        }
        v9 = dword_45F2B0;
        if ( dword_45F2B0 != 1 )
          goto LABEL_56;
      }
    }
    while ( Msg.message != 18 )
    {
      TranslateMessage(/*lpMsg*/ &Msg);
      DispatchMessageA(/*lpMsg*/ &Msg);
      if ( !PeekMessageA(/*lpMsg*/ &Msg, /*hWnd*/ NULL, /*wMsgFilterMin*/ 0, /*wMsgFilterMax*/ 0, /*wRemoveMsg*/ 1u) )
        goto LABEL_33;
    }
LABEL_71:
    dword_45F2B0 = 0;
    if ( dword_4B1D04 == 1 )
      sub_4095C0(/*FileName*/ &byte_7C9360);
    FiniDInput();
    sub_4478A0();
    sub_41E300();
    sub_41DE40();
    sub_423BB0();
    sub_447610();
    sub_40DCE0(&hWnd);
    UnloadGL();
    return Msg.wParam;
  }
}

// 0x4061b0  sub_4061B0
int sub_4061B0()
{
  DWORD TickCount; // esi
  DWORD v1; // esi
  __int64 v2; // rax
  DWORD v3; // esi
  DWORD v4; // esi
  DWORD v5; // esi
  DWORD v6; // esi
  int i; // eax
  _WORD *v8; // eax
  double v9; // st7
  struct tagMSG Msg; // [esp+10h] [ebp-1Ch] BYREF

  PadSetAct();
  sub_447910();
  sub_447A20();
  if ( dword_45F2A8 != 0 )
  {
    dword_7C95F8 = 0;
    sub_4310A0(78);
    TickCount = GetTickCount();
    dword_4B1A80();
    v1 = TickCount + 3000;
    if ( v1 > GetTickCount() )
    {
      do
      {
        sub_42E4E0();
        LODWORD(v2) = PeekMessageA(/*lpMsg*/ &Msg, /*hWnd*/ NULL, /*wMsgFilterMin*/ 0, /*wMsgFilterMax*/ 0, /*wRemoveMsg*/ 1u);
        if ( (_DWORD)v2 != 0 )
        {
          if ( Msg.message == 18 )
            return v2;
          TranslateMessage(/*lpMsg*/ &Msg);
          DispatchMessageA(/*lpMsg*/ &Msg);
        }
      }
      while ( (dword_7C95F8 == 0 || byte_4B1A31 != 0) && v1 > GetTickCount() );
    }
    dword_7C95F8 = 0;
    sub_4310A0(79);
    v3 = GetTickCount();
    dword_4B1A80();
    v4 = v3 + 3000;
    if ( v4 > GetTickCount() )
    {
      do
      {
        sub_42E4E0();
        LODWORD(v2) = PeekMessageA(/*lpMsg*/ &Msg, /*hWnd*/ NULL, /*wMsgFilterMin*/ 0, /*wMsgFilterMax*/ 0, /*wRemoveMsg*/ 1u);
        if ( (_DWORD)v2 != 0 )
        {
          if ( Msg.message == 18 )
            return v2;
          TranslateMessage(/*lpMsg*/ &Msg);
          DispatchMessageA(/*lpMsg*/ &Msg);
        }
      }
      while ( (dword_7C95F8 == 0 || byte_4B1A31 != 0) && v4 > GetTickCount() );
    }
    dword_7C95F8 = 0;
    sub_4310A0(80);
    v5 = GetTickCount();
    dword_4B1A80();
    v6 = v5 + 3000;
    if ( v6 > GetTickCount() )
    {
      do
      {
        sub_42E4E0();
        LODWORD(v2) = PeekMessageA(/*lpMsg*/ &Msg, /*hWnd*/ NULL, /*wMsgFilterMin*/ 0, /*wMsgFilterMax*/ 0, /*wRemoveMsg*/ 1u);
        if ( (_DWORD)v2 != 0 )
        {
          if ( Msg.message == 18 )
            return v2;
          TranslateMessage(/*lpMsg*/ &Msg);
          DispatchMessageA(/*lpMsg*/ &Msg);
        }
      }
      while ( (dword_7C95F8 == 0 || byte_4B1A31 != 0) && v6 > GetTickCount() );
    }
  }
  byte_4B1A31 = 0;
  sub_409FC0();
  if ( strlen(Destination) != 0 )
    *((_DWORD *)dword_52FD00 + 0x4000) = atoi(/*String*/ Destination);
  else
    *((_DWORD *)dword_52FD00 + 0x4000) = 2;
  if ( *((_DWORD *)dword_52FD00 + 0x4000) == 0 && flt_4EFB7C < 1.0 )
  {
    dword_4EFB84 = 1059481190;
    dword_4EFB88 = 1065353216;
  }
  sub_449110();
  for ( i = 0; i < 256; *((_BYTE *)dword_52FD00 + i + 65599) = 0 )
    ++i;
  *((_BYTE *)dword_52FD00 + 65601) = 6;
  *((_BYTE *)dword_52FD00 + 65602) = 6;
  *((_BYTE *)dword_52FD00 + 65616) = dword_9CA828;
  *((_BYTE *)dword_52FD00 + 65600) = 3;
  *((_BYTE *)dword_52FD00 + 65617) = 0;
  *((_WORD *)dword_52FD00 + 32779) = 0;
  *((_WORD *)dword_52FD00 + 32780) = 255;
  *((_WORD *)dword_52FD00 + 32781) = 127;
  *((_WORD *)dword_52FD00 + 32782) = 0;
  *((_WORD *)dword_52FD00 + 32783) = 255;
  *((_WORD *)dword_52FD00 + 32784) = 127;
  v8 = dword_52FD00;
  if ( *((_DWORD *)dword_52FD00 + 0x4000) == 0 && dword_4B1D04 == 2 )
  {
    sub_409540(/*FileName*/ &byte_7C9360);
    v8 = dword_52FD00;
  }
  if ( dword_4B1D04 == 1 )
  {
    dword_4B1D08 = 0;
    ElementCount = 0;
  }
  dword_45F2B0 = 1;
  byte_4B3E48 = 1;
  word_4B3650 = v8[0x8000];
  sub_430FD0(*((_DWORD *)v8 + 0x4000));
  LODWORD(v2) = sub_42E910(*((_WORD *)dword_52FD00 + 0x8000), (char *)dword_52FD00 + 0x200000);
  if ( (_DWORD)v2 != 0 )
  {
    dword_45F2B0 = 0;
  }
  else
  {
    sub_434DA0(dword_4B2490);
    sub_4509A0(1);
    sub_447EB0(dword_4B3740);
    sub_41D6A0();
    sub_41D670();
    sub_41D980();
    sub_41E260();
    LOWORD(dword_4B2368) = dword_4B2368 + 1;
    dword_4B2384 = 0;
    dword_4B28C4 = 0;
    dword_4B24A4 = 1;
    QueryPerformanceFrequency(/*lpFrequency*/ &Frequency);
    flt_7C95B0 = (float)Frequency.QuadPart;
    flt_7C95C0 = 1000.0 / flt_7C95B0;
    v9 = flt_7C95B0 * 0.033333335;
    flt_7C95A0 = v9;
    qword_7C95C8 = (__int64)v9;
    qword_7C95F0 = -(__int64)v9;
    qword_7C95B8 = (__int64)v9 / 2;
    v2 = -30 * (__int64)v9;
    qword_7C95D0 = v2;
    qword_7C95A8 = -(__int64)v9;
  }
  return v2;
}

// 0x406600  sub_406600
int sub_406600()
{
  int v0; // ecx
  int v1; // ecx
  int v3; // eax
  int v4; // eax
  int i; // esi
  struct tagMSG Msg; // [esp+Ch] [ebp-20h] BYREF
  DWORD TickCount; // [esp+28h] [ebp-4h]

  v0 = dword_4B24A4 + 2 - dword_4B28C4;
  dword_4B24A4 += 2;
  dword_4B2384 = v0;
  dword_4B28C4 = dword_4B24A4;
  sub_449330();
  sub_447EB0(dword_4B3740);
  sub_41EE30(word_4B39C0);
  sub_41E330();
  if ( byte_45F2AC == 0 )
  {
LABEL_94:
    LOWORD(dword_4B2368) = dword_4B2368 + 1;
    ++word_4B39B0;
    return 1;
  }
  if ( word_4B39BC == 0 )
    sub_4071B0();
  if ( byte_4B2260 != 0 )
  {
LABEL_19:
    dword_4B1908 = 0;
    dword_4B1A2C = 0;
    goto LABEL_20;
  }
  if ( (_BYTE)dword_4B226C == 0 )
  {
    if ( byte_4B3232 == 0
      && ((dword_4B3940 & 0x300) == 0 || (dword_4B3940 & 1) != 0)
      && *((_BYTE *)dword_52FD00 + 65654) == 0
      && byte_4B2277 == 0 )
    {
      if ( dword_4B1908 != 0 )
      {
        sub_449ED0(dword_4B2164);
        sub_449EF0(dword_4B2164);
        dword_4B226C = 65537;
        byte_4B2270 = 1;
        sub_41D640();
        sub_41F4D0();
        goto LABEL_21;
      }
      if ( dword_4B1A2C != 0 )
      {
        sub_449ED0(dword_4B2164);
        LOBYTE(dword_4B226C) = 3;
        sub_41D640();
        sub_41F4D0();
        goto LABEL_21;
      }
      goto LABEL_20;
    }
    goto LABEL_19;
  }
  if ( (_BYTE)dword_4B226C != 2 )
  {
    dword_4B1908 = 0;
    dword_4B1A2C = 0;
    sub_41D640();
    goto LABEL_21;
  }
  if ( dword_4B3FC0 == 0 )
  {
    LOBYTE(dword_4B226C) = 0;
    byte_4B28CC = 0;
    byte_4B238A = 0;
    byte_4B39B2 = 0;
    sub_449ED0(dword_4B2164);
    dword_4B1908 = 0;
    dword_4B1A2C = 0;
    std::ctype<char>::_Term();
    sub_41F590();
LABEL_20:
    sub_41D980();
  }
LABEL_21:
  if ( word_4B39BC != 1 )
  {
    if ( word_4B39BC == 2 )
    {
      LOBYTE(dword_4B226C) = 0;
      byte_4B28CC = 0;
      byte_4B238A = 0;
      byte_4B39B2 = 0;
      sub_449ED0(dword_4B2164);
      dword_4B1908 = 0;
      byte_4B2277 = 0;
      sub_41E330();
      word_4B39BC = 0;
      *((_BYTE *)dword_52FD00 + 65601) = 6;
      *((_BYTE *)dword_52FD00 + 65600) = 3;
      LOWORD(dword_4B2368) = dword_4B2368 + 1;
      ++word_4B39B0;
      dword_4B18F0 = 0;
      dword_4B18F8 = 0;
      dword_4B1D00 = 0;
      dword_4B1924 = 0;
      QueryPerformanceCounter(/*lpPerformanceCount*/ &PerformanceCount);
      qword_7C95E8 = PerformanceCount.QuadPart;
      return 1;
    }
    goto LABEL_94;
  }
  LOBYTE(dword_4B226C) = 0;
  byte_4B28CC = 0;
  byte_4B238A = 0;
  byte_4B39B2 = 0;
  sub_449ED0(dword_4B2164);
  dword_4B1908 = 0;
  byte_4B2277 = 0;
  sub_41E330();
  LOWORD(dword_4B2368) = dword_4B2368 + 1;
  ++word_4B39B0;
  sub_44C030(2, 256);
  byte_45F2AC = 0;
  if ( dword_4B1D00 != 0 )
  {
    LOWORD(dword_4B2368) = 0;
    sub_40A590(dword_4B39AC);
    ++dword_4B18F8;
  }
  else
  {
    dword_623654 = 0;
    dword_623650 = 0;
    dword_4B2368 = 0;
    GsSetRefView2L(&dword_4B38C0);
    sub_40A250(dword_4B39AC);
    dword_4EFB8C = (int)dword_4E5E44;
    sub_44B4E0(dword_4B2164);
    sub_44C620(dword_4B39AC);
    sub_44BCC0(&dword_4B21A0);
    sub_44D110(dword_4B373C);
    ++dword_4B18FC;
  }
  if ( byte_4B3232 <= 0 )
  {
LABEL_41:
    dword_4B1A90();
    byte_45F2AC = 1;
    goto LABEL_42;
  }
  while ( 1 )
  {
    LOWORD(dword_4B2368) = 0;
    word_4B39C0 = 0;
    if ( word_4B39B0 <= 0 )
    {
      dword_4B1A90();
      goto LABEL_36;
    }
    if ( dword_4B1D00 == 0 )
    {
      if ( dword_4E5E40 <= 0 )
      {
        dword_4B1A90();
      }
      else
      {
        InvalidateRect(/*hWnd*/ hWnd, /*lpRect*/ NULL, /*bErase*/ false);
        UpdateWindow(/*hWnd*/ hWnd);
        ++dword_4B18F4;
      }
      if ( PeekMessageA(/*lpMsg*/ &Msg, /*hWnd*/ NULL, /*wMsgFilterMin*/ 0, /*wMsgFilterMax*/ 0, /*wRemoveMsg*/ 1u) )
        break;
    }
LABEL_34:
    word_4B39B0 = 0;
LABEL_36:
    sub_406F00();
    ++dword_4B18F0;
    if ( sub_406600() == 0 )
      goto LABEL_42;
    if ( dword_4B1D00 != 0 )
    {
      LOWORD(dword_4B2368) = 0;
      sub_40A590(dword_4B39AC);
      sub_44C060();
      ++dword_4B18F8;
    }
    else
    {
      dword_623654 = 0;
      dword_623650 = 0;
      dword_4B2368 = 0;
      GsSetRefView2L(&dword_4B38C0);
      sub_40A250(dword_4B39AC);
      dword_4EFB8C = (int)dword_4E5E44;
      sub_44B4E0(dword_4B2164);
      sub_44C620(dword_4B39AC);
      sub_44BCC0(&dword_4B21A0);
      sub_44D110(dword_4B373C);
      ++dword_4B18FC;
    }
    if ( byte_4B3232 <= 0 )
      goto LABEL_41;
  }
  while ( Msg.message != 18 )
  {
    TranslateMessage(/*lpMsg*/ &Msg);
    DispatchMessageA(/*lpMsg*/ &Msg);
    if ( !PeekMessageA(/*lpMsg*/ &Msg, /*hWnd*/ NULL, /*wMsgFilterMin*/ 0, /*wMsgFilterMax*/ 0, /*wRemoveMsg*/ 1u) )
      goto LABEL_34;
  }
LABEL_42:
  word_4B39BC = 0;
  *((_BYTE *)dword_52FD00 + 65615) = 0;
  if ( *((int *)dword_52FD00 + 0x4000) < 0 )
    return 1;
  TickCount = GetTickCount();
  word_4B3650 = *((_WORD *)dword_52FD00 + 0x8000);
  sub_430FD0(*((_DWORD *)dword_52FD00 + 0x4000));
  dword_4B1A80();
  dword_4B2384 = 0;
  dword_4B28C4 = 0;
  dword_4B24A4 = 1;
  LOWORD(v1) = *((_WORD *)dword_52FD00 + 0x8000);
  sub_4310F0(v1);
  if ( dword_45F2B0 == 0 )
    return 0;
  v3 = *((_DWORD *)dword_52FD00 + 0x4000);
  if ( v3 == 2
    || v3 == 69
    || v3 == 49
    || v3 == 50
    || v3 == 44
    || v3 == 65
    || v3 == 66
    || v3 == 67
    || v3 == 40
    || v3 == 61
    || v3 == 62
    || v3 == 63
    || v3 == 64
    || v3 == 58
    || v3 == 59
    || v3 == 60
    || v3 == 57
    || v3 == 6
    || v3 == 7
    || v3 == 54
    || v3 == 53
    || v3 == 52
    || v3 == 70 )
  {
    v4 = GetTickCount() - TickCount;
    if ( v4 < 3000 )
      Sleep(/*dwMilliseconds*/ 3000 - v4);
  }
  LOWORD(dword_4B2368) = dword_4B2368 + 1;
  sub_44C000(1, 256);
  byte_45F2AC = 0;
  dword_4B1D00 = 0;
  for ( i = 0; i < 2; ++i )
  {
    if ( sub_406600() == 0 )
      goto LABEL_91;
    LOWORD(dword_4B2368) = 0;
    sub_40A590(dword_4B39AC);
  }
  sub_44C060();
  if ( sub_406600() != 0 )
  {
    dword_623654 = 0;
    dword_623650 = 0;
    dword_4B2368 = 0;
    GsSetRefView2L(&dword_4B38C0);
    sub_40A250(dword_4B39AC);
    dword_4EFB8C = (int)dword_4E5E44;
    sub_44B4E0(dword_4B2164);
    sub_44C620(dword_4B39AC);
    sub_44BCC0(&dword_4B21A0);
    sub_44D110(dword_4B373C);
    ++dword_4B18FC;
    if ( byte_4B3232 <= 0 )
    {
LABEL_90:
      dword_4B1A90();
      byte_45F2AC = 1;
      goto LABEL_91;
    }
    while ( 1 )
    {
      LOWORD(dword_4B2368) = 0;
      word_4B39C0 = 0;
      if ( word_4B39B0 <= 0 )
      {
        dword_4B1A90();
      }
      else
      {
        if ( dword_4B1D00 == 0 )
        {
          if ( dword_4E5E40 <= 0 )
          {
            dword_4B1A90();
          }
          else
          {
            InvalidateRect(/*hWnd*/ hWnd, /*lpRect*/ NULL, /*bErase*/ false);
            UpdateWindow(/*hWnd*/ hWnd);
            ++dword_4B18F4;
          }
          if ( PeekMessageA(/*lpMsg*/ &Msg, /*hWnd*/ NULL, /*wMsgFilterMin*/ 0, /*wMsgFilterMax*/ 0, /*wRemoveMsg*/ 1u) )
          {
            while ( Msg.message != 18 )
            {
              TranslateMessage(/*lpMsg*/ &Msg);
              DispatchMessageA(/*lpMsg*/ &Msg);
              if ( !PeekMessageA(/*lpMsg*/ &Msg, /*hWnd*/ NULL, /*wMsgFilterMin*/ 0, /*wMsgFilterMax*/ 0, /*wRemoveMsg*/ 1u) )
                goto LABEL_83;
            }
            break;
          }
        }
LABEL_83:
        word_4B39B0 = 0;
      }
      sub_406F00();
      ++dword_4B18F0;
      if ( sub_406600() == 0 )
        break;
      if ( dword_4B1D00 != 0 )
      {
        LOWORD(dword_4B2368) = 0;
        sub_40A590(dword_4B39AC);
        sub_44C060();
        ++dword_4B18F8;
      }
      else
      {
        dword_623654 = 0;
        dword_623650 = 0;
        dword_4B2368 = 0;
        GsSetRefView2L(&dword_4B38C0);
        sub_40A250(dword_4B39AC);
        dword_4EFB8C = (int)dword_4E5E44;
        sub_44B4E0(dword_4B2164);
        sub_44C620(dword_4B39AC);
        sub_44BCC0(&dword_4B21A0);
        sub_44D110(dword_4B373C);
        ++dword_4B18FC;
      }
      if ( byte_4B3232 <= 0 )
        goto LABEL_90;
    }
  }
LABEL_91:
  dword_4B18F0 = 0;
  dword_4B18F8 = 0;
  dword_4B1D00 = 0;
  dword_4B1924 = 0;
  QueryPerformanceCounter(/*lpPerformanceCount*/ &PerformanceCount);
  qword_7C95E8 = PerformanceCount.QuadPart;
  return 1;
}

// 0x406f00  sub_406F00
int sub_406F00()
{
  int v0; // kr00_4
  int result; // eax
  unsigned int v2; // ecx
  LONG v3; // esi
  unsigned __int64 v4; // kr08_8
  DWORD v5; // [esp+10h] [ebp-8h]

  QueryPerformanceCounter(/*lpPerformanceCount*/ &stru_7C95D8);
  v0 = qword_7C95E8;
  qword_7C95E8 += qword_7C95C8;
  v4 = qword_7C95E8;
  v3 = HIDWORD(v4);
  v5 = v4;
  v2 = (__PAIR64__(HIDWORD(qword_7C95E8), (int)qword_7C95C8 + v0) - stru_7C95D8.QuadPart) >> 32;
  result = qword_7C95C8 + v0 - stru_7C95D8.LowPart;
  if ( byte_4B2277 != 0 )
  {
    if ( dword_4B1924 < 4 )
    {
      if ( __SPAIR64__(v2, result) >= qword_7C95F0 || dword_4B1900 != 0 )
      {
        dword_4B1D00 = 0;
        dword_4B1924 = 0;
        if ( __SPAIR64__(v2, result) > qword_7C95B8 && dword_45F2A4 != 0 && stru_7C95D8.QuadPart < qword_7C95E8 )
        {
          do
          {
            QueryPerformanceCounter(/*lpPerformanceCount*/ &stru_7C95D8);
            result = stru_7C95D8.HighPart;
          }
          while ( stru_7C95D8.QuadPart < __SPAIR64__(v3, v5) );
        }
        return result;
      }
LABEL_20:
      dword_4B1D00 = 1;
      return ++dword_4B1924;
    }
    dword_4B1D00 = 0;
    dword_4B1924 = 0;
    if ( __SPAIR64__(v2, result) > qword_7C95B8 && dword_45F2A4 != 0 && stru_7C95D8.QuadPart < qword_7C95E8 )
    {
      do
      {
        do
          result = QueryPerformanceCounter(/*lpPerformanceCount*/ &stru_7C95D8);
        while ( stru_7C95D8.HighPart < v3 );
        if ( stru_7C95D8.HighPart > v3 )
          break;
        result = stru_7C95D8.LowPart;
      }
      while ( stru_7C95D8.LowPart < v5 );
    }
  }
  else if ( dword_4B1924 >= 2 )
  {
    dword_4B1D00 = 0;
    dword_4B1924 = 0;
    if ( __SPAIR64__(v2, result) >= qword_7C95D0 )
    {
      if ( __SPAIR64__(v2, result) > qword_7C95B8 && dword_45F2A4 != 0 && stru_7C95D8.QuadPart < qword_7C95E8 )
      {
        do
        {
          QueryPerformanceCounter(/*lpPerformanceCount*/ &stru_7C95D8);
          result = stru_7C95D8.HighPart;
        }
        while ( stru_7C95D8.QuadPart < __SPAIR64__(v3, v5) );
      }
    }
    else
    {
      qword_7C95E8 = stru_7C95D8.QuadPart;
      dword_4B18F0 = 0;
      dword_4B18F4 = 0;
      dword_4B18F8 = 0;
    }
  }
  else
  {
    if ( __SPAIR64__(v2, result) < qword_7C95F0 && dword_4B1900 == 0 )
      goto LABEL_20;
    dword_4B1D00 = 0;
    dword_4B1924 = 0;
    if ( __SPAIR64__(v2, result) > qword_7C95B8 && dword_45F2A4 != 0 && stru_7C95D8.QuadPart < qword_7C95E8 )
    {
      do
        result = QueryPerformanceCounter(/*lpPerformanceCount*/ &stru_7C95D8);
      while ( stru_7C95D8.QuadPart < __SPAIR64__(v3, v5) );
    }
  }
  return result;
}

// 0x4071b0  sub_4071B0
char sub_4071B0()
{
  size_t v0; // ebp
  FILE *v1; // eax
  FILE *v2; // esi
  char v3; // al
  int j; // eax
  char v5; // dl
  int i; // eax
  char result; // al
  char Buffer[32]; // [esp+10h] [ebp-160h] BYREF
  _BYTE v9[320]; // [esp+30h] [ebp-140h] BYREF

  if ( byte_4B226A != 0 )
  {
    switch ( byte_4B226A )
    {
      case 4:
        byte_4B227C = 0;
        byte_4B2285 = 1;
        byte_4B227B = 16;
        v5 = *((_BYTE *)dword_52FD00 + 65759);
        for ( i = 0; i < 256; *((_BYTE *)dword_52FD00 + i + 65599) = 0 )
          ++i;
        *((_BYTE *)dword_52FD00 + 65601) = 6;
        *((_BYTE *)dword_52FD00 + 65602) = 6;
        *((_BYTE *)dword_52FD00 + 65616) = dword_9CA828;
        *((_BYTE *)dword_52FD00 + 65600) = 3;
        *((_BYTE *)dword_52FD00 + 65617) = 0;
        *((_WORD *)dword_52FD00 + 32779) = 0;
        *((_WORD *)dword_52FD00 + 32780) = 255;
        *((_WORD *)dword_52FD00 + 32781) = 127;
        *((_WORD *)dword_52FD00 + 32782) = 0;
        *((_WORD *)dword_52FD00 + 32783) = 255;
        *((_WORD *)dword_52FD00 + 32784) = 127;
        *((_BYTE *)dword_52FD00 + 65614) = 56;
        *((_BYTE *)dword_52FD00 + 65759) = v5;
        break;
      case 5:
        if ( ((1 << (*((_BYTE *)dword_52FD00 + 65759) - 1)) & dword_4B28E4) != 0 )
        {
          byte_4B227C = 0;
          byte_4B2285 = 1;
          byte_4B227B = 16;
          v0 = 0;
          sprintf(Buffer, /*Format*/ "..\\bin\\Savegame%d.dat", *((unsigned __int8 *)dword_52FD00 + 65759));
          v1 = FsFOpen(/*FileName*/ Buffer, /*Mode*/ aRb);
          v2 = v1;
          if ( v1 != NULL )
          {
            v0 = fread(/*Buffer*/ v9, /*ElementSize*/ 0x140u, /*ElementCount*/ 1u, /*Stream*/ v1);
            fclose(/*Stream*/ v2);
          }
          if ( v0 != 0 )
          {
            v3 = *((_BYTE *)dword_52FD00 + 65616);
            qmemcpy((char *)dword_52FD00 + 0x10000, v9, 320);
            *((_BYTE *)dword_52FD00 + 65616) = v3;
          }
          else
          {
            byte_4B227B = 4;
          }
          *((_BYTE *)dword_52FD00 + 65616) = dword_9CA828;
          *((_BYTE *)dword_52FD00 + 65654) = 0;
          if ( v0 != 0 )
          {
            if ( *((_DWORD *)dword_52FD00 + 0x4000) != 0 )
              *((_BYTE *)dword_52FD00 + 65614) = *((_BYTE *)dword_52FD00 + 0x10000);
            else
              *((_BYTE *)dword_52FD00 + 65614) = 56;
          }
          else
          {
            for ( j = 0; j < 256; *((_BYTE *)dword_52FD00 + j + 65599) = 0 )
              ++j;
            *((_BYTE *)dword_52FD00 + 65601) = 6;
            *((_BYTE *)dword_52FD00 + 65602) = 6;
            *((_BYTE *)dword_52FD00 + 65616) = dword_9CA828;
            *((_BYTE *)dword_52FD00 + 65600) = 3;
            *((_BYTE *)dword_52FD00 + 65617) = 0;
            *((_WORD *)dword_52FD00 + 32779) = 0;
            *((_WORD *)dword_52FD00 + 32780) = 255;
            *((_WORD *)dword_52FD00 + 32781) = 127;
            *((_WORD *)dword_52FD00 + 32782) = 0;
            *((_WORD *)dword_52FD00 + 32783) = 255;
            *((_WORD *)dword_52FD00 + 32784) = 127;
            *((_BYTE *)dword_52FD00 + 65614) = 56;
          }
        }
        break;
      case 6:
        byte_4B2268 = sub_407510() != 0 ? 10 : 20;
        break;
      default:
        break;
    }
    byte_4B226A = 0;
  }
  if ( byte_4B2263 == 1 )
  {
    if ( *((_DWORD *)dword_52FD00 + 0x4000) == 0 )
      sub_407710();
    byte_4B227B = 14;
    byte_4B2284 = 1;
    byte_4B2263 = 2;
  }
  result = dword_9CA828;
  *((_BYTE *)dword_52FD00 + 65616) = dword_9CA828;
  return result;
}

// 0x407510  sub_407510
size_t sub_407510()
{
  size_t v0; // edi
  FILE *v1; // eax
  FILE *v2; // esi
  FILE *v3; // esi
  char v4; // dl
  char Buffer[32]; // [esp+8h] [ebp-20h] BYREF

  v0 = 0;
  *((_DWORD *)dword_52FD00 + 16385) = sub_42E750((char *)dword_52FD00 + 0x10000, 320);
  sprintf(Buffer, /*Format*/ "..\\bin\\Savegame%d.dat", *((unsigned __int8 *)dword_52FD00 + 65759));
  v1 = FsFOpen(/*FileName*/ Buffer, /*Mode*/ off_45F3E4);
  v2 = v1;
  if ( v1 != NULL )
  {
    rewind(/*Stream*/ v1);
    v0 = fwrite(/*Buffer*/ (char *)dword_52FD00 + 0x10000, /*ElementSize*/ 0x140u, /*ElementCount*/ 1u, /*Stream*/ v2);
    fclose(/*Stream*/ v2);
  }
  if ( v0 == 0 )
    goto LABEL_20;
  v3 = FsFOpen(/*FileName*/ aBinSavedataDat, /*Mode*/ off_45F3E4);
  if ( v3 != NULL )
  {
    dword_4B28E4 |= 1 << (*((_BYTE *)dword_52FD00 + 65759) - 1);
    v4 = *((_BYTE *)dword_52FD00 + 65759);
    switch ( v4 )
    {
      case 1:
        word_4B28E8 = (*((unsigned __int8 *)dword_52FD00 + 65852) << 8) + *((unsigned __int8 *)dword_52FD00 + 65607);
        word_4B28EA = *((unsigned __int8 *)dword_52FD00 + 65605);
        break;
      case 2:
        word_4B2914 = (*((unsigned __int8 *)dword_52FD00 + 65852) << 8) + *((unsigned __int8 *)dword_52FD00 + 65607);
        word_4B2916 = *((unsigned __int8 *)dword_52FD00 + 65605);
        break;
      case 3:
        word_4B2940 = (*((unsigned __int8 *)dword_52FD00 + 65852) << 8) + *((unsigned __int8 *)dword_52FD00 + 65607);
        word_4B2942 = *((unsigned __int8 *)dword_52FD00 + 65605);
        break;
      case 4:
        word_4B296C = (*((unsigned __int8 *)dword_52FD00 + 65852) << 8) + *((unsigned __int8 *)dword_52FD00 + 65607);
        word_4B296E = *((unsigned __int8 *)dword_52FD00 + 65605);
        break;
      case 5:
        word_4B2998 = (*((unsigned __int8 *)dword_52FD00 + 65852) << 8) + *((unsigned __int8 *)dword_52FD00 + 65607);
        word_4B299A = *((unsigned __int8 *)dword_52FD00 + 65605);
        break;
      case 6:
        word_4B29C4 = (*((unsigned __int8 *)dword_52FD00 + 65852) << 8) + *((unsigned __int8 *)dword_52FD00 + 65607);
        word_4B29C6 = *((unsigned __int8 *)dword_52FD00 + 65605);
        break;
      default:
        break;
    }
    rewind(/*Stream*/ v3);
    v0 = fwrite(/*Buffer*/ &unk_4B28E0, /*ElementSize*/ 0x168u, /*ElementCount*/ 1u, /*Stream*/ v3);
    fclose(/*Stream*/ v3);
  }
  if ( v0 != 0 )
  {
    dword_4B28E4 ^= 1 << (*((_BYTE *)dword_52FD00 + 65759) - 1);
    return v0;
  }
  else
  {
LABEL_20:
    byte_4B227B = 7;
    return v0;
  }
}

// 0x407710  sub_407710
size_t sub_407710()
{
  size_t v0; // ebx
  FILE *v1; // eax
  FILE *v2; // esi
  FILE *v3; // eax
  _WORD Buffer[180]; // [esp+10h] [ebp-168h] BYREF

  v0 = 0;
  v1 = FsFOpen(/*FileName*/ aBinSavedataDat, /*Mode*/ aRb);
  v2 = v1;
  if ( v1 != NULL )
  {
    v0 = fread(Buffer, /*ElementSize*/ 0x168u, /*ElementCount*/ 1u, /*Stream*/ v1);
LABEL_5:
    fclose(/*Stream*/ v2);
    goto LABEL_6;
  }
  memset(Buffer, 0, sizeof(Buffer));
  v3 = fopen(/*FileName*/ aBinSavedataDat, /*Mode*/ Mode);
  v2 = v3;
  if ( v3 != NULL )
  {
    rewind(/*Stream*/ v3);
    fwrite(Buffer, /*ElementSize*/ 0x168u, /*ElementCount*/ 1u, /*Stream*/ v2);
    goto LABEL_5;
  }
LABEL_6:
  if ( v0 != 0 )
  {
    qmemcpy(unk_4B28E0, Buffer, sizeof(unk_4B28E0));
    byte_4B2264 = Buffer[2];
    if ( *((_DWORD *)dword_52FD00 + 0x4000) == 0 )
    {
      word_4B228B = Buffer[4];
      word_4B228D = Buffer[26];
      byte_4B229B = Buffer[5];
      word_4B228F = Buffer[48];
      byte_4B229C = Buffer[27];
      word_4B2291 = Buffer[70];
      byte_4B229D = Buffer[49];
      byte_4B229E = Buffer[71];
      word_4B2293 = Buffer[92];
      byte_4B229F = Buffer[93];
      word_4B2295 = Buffer[114];
      byte_4B22A0 = Buffer[115];
    }
  }
  *((_BYTE *)dword_52FD00 + 65616) = dword_9CA828;
  return v0;
}

// 0x4078b0  sub_4078B0
int __cdecl sub_4078B0(int a1, _DWORD *a2, _DWORD *a3)
{
  int result; // eax

  result = (unsigned __int16)(*(_DWORD *)((char *)a2 + 2)
                            | *(_WORD *)(a1 + 2)
                            | ((unsigned int)(*a2 | *(_DWORD *)a1) >> 16)
                            | *(_WORD *)a2
                            | *(_WORD *)a1);
  *a3 = result;
  return result;
}

// 0x4078f0  sub_4078F0
int *__cdecl sub_4078F0(int *a1, int *a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // edx

  v2 = *a1;
  if ( *a1 < 0 )
    v2 = -v2;
  v3 = v2;
  v4 = a1[1];
  if ( v4 < 0 )
    v4 = -v4;
  v5 = v4;
  v6 = a1[2];
  if ( v6 < 0 )
    v6 = -v6;
  v7 = v6;
  if ( v3 <= v5 )
  {
    v8 = v5;
    v5 = v3;
  }
  else
  {
    v8 = v3;
  }
  if ( v8 <= v7 )
    v9 = v7 + ((v5 + v8) >> 2);
  else
    v9 = v8 + ((v5 + v7) >> 2);
  *a2 = v9;
  return a2;
}

// 0x407950  sub_407950
__int16 __cdecl sub_407950(int a1, int a2)
{
  __int16 result; // ax

  *(_DWORD *)a2 = *(_DWORD *)a1;
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 12);
  result = *(_WORD *)(a1 + 16);
  *(_WORD *)(a2 + 16) = result;
  return result;
}

// 0x407990  sub_407990
int __cdecl sub_407990(int *a1)
{
  int v1; // eax
  int v2; // esi
  int v3; // eax
  int v4; // edx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v9; // esi

  v1 = *a1;
  if ( *a1 < 0 )
    v1 = -v1;
  v2 = v1;
  v3 = a1[1];
  if ( v3 < 0 )
    v3 = -v3;
  v4 = v3;
  v5 = a1[2];
  if ( v5 < 0 )
    v5 = -v5;
  if ( v2 <= v4 )
  {
    v6 = v4;
    v4 = v2;
  }
  else
  {
    v6 = v2;
  }
  if ( v6 <= v5 )
  {
    v9 = v6;
    v6 = v5;
    v7 = (v9 + v4) >> 2;
  }
  else
  {
    v7 = (v5 + v4) >> 2;
  }
  return v6 + v7;
}
