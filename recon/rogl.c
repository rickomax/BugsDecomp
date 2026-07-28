// Module `rogl`.
//
// Reconstructed from Bugs.exe (PC v1.0) by tools/recon.py.
// Generated file -- do not edit by hand; see recon/README.md.
//
// Address range: 0x40d740 - 0x40e820 (12 functions).
//
// Code here refers to the original source file name "D:\Projets\Bugs\src\Pcrogl.c".

#include "bugs.h"


// 0x40d740  sub_40D740
int __cdecl sub_40D740(HINSTANCE hInstance)
{
  HWND Window; // esi
  WNDCLASSA WndClass; // [esp+8h] [ebp-94h] BYREF
  _DWORD v4[27]; // [esp+30h] [ebp-6Ch] BYREF

  memset(v4, 0, sizeof(v4));
  v4[0] = 108;
  if ( lpDD->lpVtbl->GetDisplayMode(/*This*/ lpDD, (LPDDSURFACEDESC)v4) != 0 )
  {
    ConPrintf(/*Format*/ "file: %s  l: %d  \n  ->msg: GetDisplayMode\n", aDProjetsBugsSr, 633);
    return 0;
  }
  WndClass.style = 8227;
  WndClass.lpfnWndProc = sub_40E2D0;
  WndClass.cbClsExtra = 0;
  WndClass.cbWndExtra = 0;
  WndClass.hInstance = hInstance;
  WndClass.hIcon = LoadIconA(hInstance, /*lpIconName*/ (LPCSTR)0x7F00);
  memset(&WndClass.hCursor, 0, 12);
  WndClass.lpszClassName = aBblitResWindow;
  RegisterClassA(/*lpWndClass*/ &WndClass);
  Window = CreateWindowExA(
             /*dwExStyle*/ 8u,
             /*lpClassName*/ aBblitResWindow,
             /*lpWindowName*/ &WindowName,
             /*dwStyle*/ 0x90000000,
             /*X*/ 0x80000000,
             /*Y*/ 0x80000000,
             /*nWidth*/ qword_467748,
             /*nHeight*/ (*(int *)0x46774C),
             /*hWndParent*/ NULL,
             /*hMenu*/ NULL,
             hInstance,
             /*lpParam*/ NULL);
  if ( Window == NULL )
  {
    ConPrintf(/*Format*/ aErreurFenetreP);
    return 0;
  }
  if ( lpDD->lpVtbl->SetCooperativeLevel(/*This*/ lpDD, Window, 17) != 0
    || lpDD->lpVtbl->SetDisplayMode(/*This*/ lpDD, v4[3], v4[2], 16) != 0
    || lpDD->lpVtbl->SetCooperativeLevel(/*This*/ lpDD, Window, 8) != 0 )
  {
    DestroyWindow(/*hWnd*/ Window);
    if ( lpDD != NULL )
    {
      lpDD->lpVtbl->Release(/*This*/ lpDD);
      lpDD = NULL;
      return 0;
    }
  }
  else
  {
    DestroyWindow(/*hWnd*/ Window);
  }
  return 0;
}

// 0x40d8b0  sub_40D8B0
BOOL __cdecl sub_40D8B0(DWORD a1, DWORD a2, DWORD a3, HWND a4)
{
  _DWORD v5[27]; // [esp+8h] [ebp-6Ch] BYREF

  memset(v5, 0, sizeof(v5));
  v5[0] = 108;
  if ( lpDD->lpVtbl->GetDisplayMode(/*This*/ lpDD, (LPDDSURFACEDESC)v5) != 0 )
  {
    ConPrintf(/*Format*/ "file: %s  l: %d  \n  ->msg: GetDisplayMode\n", aDProjetsBugsSr, 761);
    return false;
  }
  else if ( lpDD->lpVtbl->SetCooperativeLevel(/*This*/ lpDD, a4, 17) != 0 )
  {
    return false;
  }
  else
  {
    return lpDD->lpVtbl->SetDisplayMode(/*This*/ lpDD, a1, a2, a3) == 0
        && lpDD->lpVtbl->SetCooperativeLevel(/*This*/ lpDD, a4, 8) == 0;
  }
}

// 0x40d970  sub_40D970
int __cdecl sub_40D970(char a1, char a2, char a3)
{
  double v3; // st7
  int v4; // ecx
  double v5; // st7
  float v7; // [esp+0h] [ebp-40h]
  float v8; // [esp+4h] [ebp-3Ch]
  float v9; // [esp+8h] [ebp-38h]
  double v10; // [esp+10h] [ebp-30h] BYREF
  double v11; // [esp+18h] [ebp-28h] BYREF
  double v12; // [esp+20h] [ebp-20h] BYREF
  int v13[2]; // [esp+28h] [ebp-18h] BYREF
  int v14[2]; // [esp+30h] [ebp-10h] BYREF
  int v15[2]; // [esp+38h] [ebp-8h] BYREF
  int v16; // [esp+44h] [ebp+4h]
  int v17; // [esp+44h] [ebp+4h]

  v3 = (double)(unsigned __int8)byte_4B5B40[(unsigned __int8)byte_4D5D40[a1 & 0xF8]] * 0.00392156862745098;
  v16 = (unsigned __int8)byte_4B5B40[(unsigned __int8)byte_4D5D40[a2 & 0xF8]];
  v4 = (unsigned __int8)byte_4D5D40[a3 & 0xF8];
  *(double *)v15 = v3;
  v5 = (double)v16;
  v17 = (unsigned __int8)byte_4B5B40[v4];
  *(double *)v14 = v5 * 0.00392156862745098;
  *(double *)v13 = (double)v17 * 0.00392156862745098;
  sub_425450(*(double *)v15, *(double *)v14, *(double *)v13, (int)&v11, (int)&v12, (int)&v10);
  v11 = v11 + dbl_9CA878;
  if ( v11 > 360.0 )
    v11 = v11 - 360.0;
  v10 = v10 * dbl_9CA888;
  if ( v10 > 1.0 )
    v10 = 1.0;
  v12 = v12 * dbl_9CA880;
  if ( v12 > 1.0 )
    v12 = 1.0;
  sub_425170((int)v15, (int)v14, (int)v13, v11, v12, v10);
  if ( byte_4B3232 != 0 )
  {
    *(double *)v15 = flt_467740 * *(double *)v15;
    *(double *)v14 = flt_467740 * *(double *)v14;
    *(double *)v13 = flt_467740 * *(double *)v13;
  }
  v9 = *(double *)v13;
  v8 = *(double *)v14;
  v7 = *(double *)v15;
  return dword_7C6274(LODWORD(v7), LODWORD(v8), LODWORD(v9), 1065353216);
}

// 0x40db50  sub_40DB50
int sub_40DB50()
{
  dword_7C90A8(515);
  dword_7C9098(0, 0, 0, 1072693248);
  dword_7C632C(2929);
  dword_7C6274(0, 0, 0, 0);
  dword_7C6354(1032, 6914);
  dword_7C62D4(7425);
  dword_7C63C8(770, 771);
  dword_7C63C0(516, 0);
  dword_7C9070(3155, 4353);
  dword_7C9070(3152, 4353);
  dword_7C639C(3024);
  dword_7C639C(2848);
  dword_7C639C(2832);
  dword_7C639C(2881);
  dword_7C639C(2884);
  dword_7C639C(2896);
  dword_7C639C(3042);
  dword_7C639C(3008);
  dword_7C660C(0, 0, qword_467748, (*(int *)0x46774C));
  dword_7C90AC(5889);
  dword_7C9090();
  dword_7C946C(
    COERCE_UNSIGNED_INT64((double)qword_467748 * -0.5),
    HIDWORD(COERCE_UNSIGNED_INT64((double)qword_467748 * -0.5)),
    COERCE_UNSIGNED_INT64((double)qword_467748 * 0.5),
    HIDWORD(COERCE_UNSIGNED_INT64((double)qword_467748 * 0.5)),
    COERCE_UNSIGNED_INT64((double)(*(int *)0x46774C) * -0.5),
    HIDWORD(COERCE_UNSIGNED_INT64((double)(*(int *)0x46774C) * -0.5)),
    COERCE_UNSIGNED_INT64((double)(*(int *)0x46774C) * 0.5),
    HIDWORD(COERCE_UNSIGNED_INT64((double)(*(int *)0x46774C) * 0.5)),
    0,
    1081671680,
    0,
    1089470464);
  dword_7C90AC(5888);
  return dword_7C6318(16640);
}

// 0x40dce0  sub_40DCE0
HWND __cdecl sub_40DCE0(HWND *a1)
{
  HWND v1; // esi
  HWND result; // eax

  if ( lpDD != NULL )
  {
    lpDD->lpVtbl->Release(/*This*/ lpDD);
    lpDD = NULL;
  }
  v1 = *a1;
  if ( *a1 != NULL )
  {
    if ( dword_4AC094 == 2 )
    {
      dword_7C63B8(0, 0);
      dword_7C661C(dword_4B1AC0);
      dword_4B1AC0 = 0;
      if ( lpDD != NULL )
      {
        lpDD->lpVtbl->Release(/*This*/ lpDD);
        lpDD = NULL;
      }
    }
    else if ( (unsigned int)dword_4AC094 <= 1 )
    {
      dword_555FC4();
    }
    dword_4AC094 = 16;
    if ( hDC != NULL && v1 != NULL )
      ReleaseDC(/*hWnd*/ v1, /*hDC*/ hDC);
    hDC = NULL;
    DestroyWindow(/*hWnd*/ *a1);
    *a1 = NULL;
  }
  result = dword_4B1CF0;
  if ( dword_4B1CF0 != NULL )
  {
    result = (HWND)DestroyWindow(/*hWnd*/ dword_4B1CF0);
    dword_4B1CF0 = NULL;
  }
  return result;
}

// 0x40dda0  sub_40DDA0
int sub_40DDA0()
{
  HWND v0; // eax
  HWND v1; // esi
  __int16 *v3; // eax

  v0 = hWnd;
  dword_4B1C24 = 1;
  if ( hWnd != NULL )
  {
    FiniDInput();
    if ( lpDD != NULL )
    {
      lpDD->lpVtbl->Release(/*This*/ lpDD);
      lpDD = NULL;
    }
    v1 = hWnd;
    if ( hWnd != NULL )
    {
      if ( dword_4AC094 == 2 )
      {
        dword_7C63B8(0, 0);
        dword_7C661C(dword_4B1AC0);
        dword_4B1AC0 = 0;
        if ( lpDD != NULL )
        {
          lpDD->lpVtbl->Release(/*This*/ lpDD);
          lpDD = NULL;
        }
      }
      else if ( (unsigned int)dword_4AC094 <= 1 )
      {
        dword_555FC4();
      }
      dword_4AC094 = 16;
      if ( hDC != NULL && v1 != NULL )
        ReleaseDC(/*hWnd*/ v1, /*hDC*/ hDC);
      hDC = NULL;
      DestroyWindow(/*hWnd*/ hWnd);
      hWnd = NULL;
    }
    if ( dword_4B1CF0 != NULL )
    {
      DestroyWindow(/*hWnd*/ dword_4B1CF0);
      dword_4B1CF0 = NULL;
    }
    v0 = (HWND)sub_40E820(/*hInstance*/ hInstance, /*nCmdShow*/ 5);
    hWnd = v0;
    if ( v0 != NULL )
      goto LABEL_24;
  }
  if ( dword_9CA838 != 0 )
  {
    dword_9CA838 = 0;
    v0 = (HWND)sub_40E820(/*hInstance*/ hInstance, /*nCmdShow*/ 5);
    hWnd = v0;
  }
  if ( v0 != NULL )
    goto LABEL_24;
  if ( dword_9CA824 == 2 )
  {
    dword_9CA824 = dword_4B1DE4 >= 300;
    v0 = (HWND)sub_40E820(/*hInstance*/ hInstance, /*nCmdShow*/ 5);
    hWnd = v0;
  }
  if ( v0 != NULL )
  {
LABEL_24:
    GsSetRefView2L(&dword_4B38C0);
    GsSetProjection(400);
    if ( sub_4025B0(1) != 1 )
      sub_4025B0(0);
    sub_423B50();
    v3 = &word_52FD72;
    do
    {
      *v3 = 0;
      v3 += 24;
    }
    while ( (int)v3 < (int)word_547472 );
    sub_41DDF0();
    sub_423AE0();
    sub_423AB0();
    sub_422AC0();
    dword_4B1C24 = 0;
    return 1;
  }
  else
  {
    dword_4B1C24 = 0;
    return 0;
  }
}

// 0x40df80  SetGLPixelFormat
// IDA symbol: sub_40DF80
// Documented as port/rogl in doc/functions.md.
int SetGLPixelFormat()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  PIXELFORMATDESCRIPTOR ppfd; // [esp+8h] [ebp-28h] BYREF

  memset(&ppfd, 0, sizeof(ppfd));
  ppfd.iPixelType = 0;
  ppfd.iLayerType = 0;
  ppfd.nSize = 40;
  ppfd.nVersion = 1;
  ppfd.dwFlags = 37;
  ppfd.cColorBits = 16;
  v0 = ChoosePixelFormat(/*hdc*/ hDC, &ppfd);
  if ( v0 != 0 )
  {
    if ( (ppfd.dwFlags & 0x20) == 0
      || (ppfd.dwFlags & 0x40) != 0 && (ppfd.dwFlags & 0x1000) == 0
      || (ppfd.dwFlags & 1) == 0
      || ppfd.iPixelType != 0
      || ppfd.cColorBits != 16
      || ppfd.iLayerType != 0 )
    {
      return 0;
    }
    v1 = SetPixelFormat(/*hdc*/ hDC, /*format*/ v0, &ppfd);
  }
  else
  {
    v2 = dword_7C6584(hDC, &ppfd);
    if ( v2 == 0
      || (ppfd.dwFlags & 0x20) == 0
      || (ppfd.dwFlags & 0x40) != 0 && (ppfd.dwFlags & 0x1000) == 0
      || (ppfd.dwFlags & 1) == 0
      || ppfd.iPixelType != 0
      || ppfd.cColorBits != 16
      || ppfd.iLayerType != 0 )
    {
      return 0;
    }
    v1 = dword_7C637C(hDC, v2, &ppfd);
  }
  if ( v1 != 0 )
  {
    dword_4B1AB4 = 1;
    return 1;
  }
  return 0;
}

// 0x40e0b0  TestGL
// IDA symbol: sub_40E0B0
// Documented as port/rogl in doc/functions.md.
int TestGL()
{
  HMODULE LibraryA; // eax
  DWORD LastError; // eax
  FARPROC **v2; // esi
  FARPROC ProcAddress; // eax
  FARPROC *v4; // edx
  char dwFlags; // al
  PIXELFORMATDESCRIPTOR ppfd; // [esp+8h] [ebp-28h] BYREF

  dword_4B1AB4 = 0;
  if ( hLibModule != NULL )
  {
    FreeLibrary(/*hLibModule*/ hLibModule);
    hLibModule = NULL;
  }
  LibraryA = LoadLibraryA(/*lpLibFileName*/ LibFileName);
  hLibModule = LibraryA;
  if ( LibraryA != NULL )
  {
    v2 = (FARPROC **)&off_468750;
    while ( 1 )
    {
      ProcAddress = GetProcAddress(/*hModule*/ LibraryA, /*lpProcName*/ (LPCSTR)v2[1]);
      v4 = *v2;
      v2 += 2;
      *v4 = ProcAddress;
      if ( v2 >= (FARPROC **)&unk_469290 )
        break;
      LibraryA = hLibModule;
    }
    LastError = 0;
  }
  else
  {
    LastError = GetLastError();
  }
  if ( LastError != 0 )
    return 0;
  memset(&ppfd, 0, sizeof(ppfd));
  ppfd.iPixelType = 0;
  ppfd.iLayerType = 0;
  ppfd.nSize = 40;
  ppfd.nVersion = 1;
  ppfd.dwFlags = 37;
  ppfd.cColorBits = 16;
  if ( ChoosePixelFormat(/*hdc*/ hDC, &ppfd) != 0 )
  {
    dwFlags = ppfd.dwFlags;
    if ( (ppfd.dwFlags & 0x20) == 0 )
      return 0;
    if ( (ppfd.dwFlags & 0x40) != 0 )
    {
      if ( (ppfd.dwFlags & 0x1000) != 0
        && (ppfd.dwFlags & 1) != 0
        && ppfd.iPixelType == 0
        && ppfd.cColorBits == 16
        && ppfd.iLayerType == 0 )
      {
        dword_4B1AB4 = 1;
        return 1;
      }
      return 0;
    }
  }
  else
  {
    if ( dword_7C6584(hDC, &ppfd) == 0 )
      return 0;
    dwFlags = ppfd.dwFlags;
    if ( (ppfd.dwFlags & 0x20) == 0 || (ppfd.dwFlags & 0x40) != 0 && (ppfd.dwFlags & 0x1000) == 0 )
      return 0;
  }
  if ( (dwFlags & 1) != 0 && ppfd.iPixelType == 0 && ppfd.cColorBits == 16 && ppfd.iLayerType == 0 )
  {
    dword_4B1AB4 = 1;
    return 1;
  }
  return 0;
}

// 0x40e210  UnloadGL
// IDA symbol: sub_40E210
// Documented as port/rogl in doc/functions.md.
HMODULE UnloadGL()
{
  HMODULE result; // eax

  result = hLibModule;
  if ( hLibModule != NULL )
  {
    result = (HMODULE)FreeLibrary(/*hLibModule*/ hLibModule);
    hLibModule = NULL;
  }
  return result;
}

// 0x40e230  sub_40E230
void __cdecl sub_40E230(int a1)
{
  if ( dword_4B1C24 == 0 && dword_4AC094 != 16 && dword_45F2B0 != 0 )
  {
    if ( a1 != 0 )
    {
      if ( dword_9CA7B8 != 0 )
      {
        LoadAltConfig();
        dword_9CA7A4 = 0;
        dword_9CA7B8 = 0;
        dword_9CA7B0 = 512;
        dword_9CA7B4 = 384;
        dword_45F2B0 = 19;
      }
    }
    else if ( dword_9CA838 != 0 )
    {
      SaveAltConfig();
      dword_9CA824 = 0;
      dword_9CA838 = 0;
      qword_9CA830 = 512;
      (*(int *)0x9CA834) = 384;
      dword_45F2B0 = 19;
    }
  }
}

// 0x40e2d0  sub_40E2D0
LRESULT __stdcall sub_40E2D0(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  HDC v5; // esi
  bool v6; // zf
  struct tagPAINTSTRUCT Paint; // [esp+Ch] [ebp-40h] BYREF

  if ( Msg <= 0xF )
  {
    if ( Msg != 15 )
    {
      switch ( Msg )
      {
        case 2u:
          goto LABEL_25;
        case 5u:
          return 0;
        case 6u:
          if ( (_WORD)wParam == 0 )
            goto LABEL_84;
          if ( ((_WORD)wParam == 1 || (_WORD)wParam == 2)
            && dword_4B1C24 == 0
            && dword_4AC094 != 16
            && dword_45F2B0 != 0
            && dword_9CA7B8 != 0 )
          {
            goto LABEL_96;
          }
          return DefWindowProcA(hWnd, Msg, wParam, lParam);
        default:
          return DefWindowProcA(hWnd, Msg, wParam, lParam);
      }
    }
    dword_4B1CF8 = 1;
    v5 = BeginPaint(hWnd, /*lpPaint*/ &Paint);
    if ( byte_4B3E48 == 0 && dword_4B1A70 != NULL )
      dword_4B1A70();
    if ( (unsigned int)dword_4AC094 < 2 )
    {
      dword_553444(v5);
    }
    else if ( dword_4AC094 == 2 && dword_7C9490(v5) == 0 )
    {
      SwapBuffers(v5);
    }
    EndPaint(hWnd, /*lpPaint*/ &Paint);
    dword_4B1CF8 = 0;
    return DefWindowProcA(hWnd, Msg, wParam, lParam);
  }
  if ( Msg <= 0x1C )
  {
    if ( Msg != 28 )
    {
      if ( Msg == 18 )
LABEL_25:
        dword_45F2B0 = 0;
      return DefWindowProcA(hWnd, Msg, wParam, lParam);
    }
    if ( dword_4B1C24 == 0 && dword_4AC094 != 16 && dword_45F2B0 != 0 )
    {
      if ( wParam != 0 )
      {
        if ( dword_9CA7B8 == 0 )
          goto LABEL_35;
        LoadAltConfig();
        dword_9CA7A4 = 0;
        dword_9CA7B8 = 0;
        dword_9CA7B0 = 512;
        dword_9CA7B4 = 384;
      }
      else
      {
        if ( dword_9CA838 == 0 )
          goto LABEL_37;
        SaveAltConfig();
        dword_9CA824 = 0;
        dword_9CA838 = 0;
        qword_9CA830 = 512;
        (*(int *)0x9CA834) = 384;
      }
      dword_45F2B0 = 19;
    }
LABEL_35:
    if ( dword_9CA838 != 0 )
    {
      hCursor = NULL;
      return DefWindowProcA(hWnd, Msg, wParam, lParam);
    }
LABEL_37:
    hCursor = LoadCursorA(/*hInstance*/ NULL, /*lpCursorName*/ (LPCSTR)0x7F00);
    return DefWindowProcA(hWnd, Msg, wParam, lParam);
  }
  if ( Msg > 0x100 )
  {
    if ( Msg > 0x112 )
    {
      if ( Msg != 513 && Msg != 516 && Msg != 519 )
        return DefWindowProcA(hWnd, Msg, wParam, lParam);
      goto LABEL_92;
    }
    if ( Msg == 274 )
    {
      if ( wParam <= 0xF040 )
      {
        if ( wParam != 61504 && wParam != 61472 )
          return DefWindowProcA(hWnd, Msg, wParam, lParam);
        goto LABEL_84;
      }
      if ( wParam == 61520 || wParam == 61744 )
      {
LABEL_84:
        if ( dword_4B1C24 != 0 || dword_4AC094 == 16 || dword_45F2B0 == 0 || dword_9CA838 == 0 )
          return DefWindowProcA(hWnd, Msg, wParam, lParam);
        SaveAltConfig();
        dword_9CA824 = 0;
        dword_9CA838 = 0;
        qword_9CA830 = 512;
        (*(int *)0x9CA834) = 384;
        goto LABEL_97;
      }
      v6 = wParam == 61760;
    }
    else
    {
      if ( Msg != 261 )
        return DefWindowProcA(hWnd, Msg, wParam, lParam);
      v6 = wParam == 9;
    }
    if ( !v6 )
      return DefWindowProcA(hWnd, Msg, wParam, lParam);
    goto LABEL_84;
  }
  switch ( Msg )
  {
    case 0x100u:
      dword_7C95F8 = 1;
      switch ( wParam )
      {
        case 0x1Bu:
          if ( dword_4B3FC0 == 0 && byte_4B2277 == 0 && *((_BYTE *)dword_52FD00 + 65654) == 0 )
          {
            if ( dword_4B1A2C != 0 )
            {
              if ( (_BYTE)dword_4B226C != 0 )
                LOBYTE(dword_4B226C) = 2;
              dword_4B1A2C = 0;
            }
            else if ( (_BYTE)dword_4B226C != 0 )
            {
              LOBYTE(dword_4B226C) = 2;
            }
            else
            {
              dword_4B1908 = 1;
            }
          }
          break;
        case 0x70u:
          if ( dword_4B3FC0 == 0 && dword_4B1908 == 0 )
          {
            if ( (_BYTE)dword_4B226C != 0 )
              LOBYTE(dword_4B226C) = 2;
            else
              dword_4B1A2C = 1;
          }
          break;
        case 0x71u:
          if ( dword_9CA850 <= 0 )
          {
            dword_9CA850 = dword_9CA7D0;
            if ( dword_9CA7D0 <= 0 )
              dword_9CA850 = 100;
            sub_41F590();
          }
          else
          {
            dword_9CA7D0 = dword_9CA850;
            dword_9CA850 = 0;
            sub_41F4D0();
          }
          break;
        case 0x72u:
          if ( dword_9CA854 <= 0 )
          {
            dword_9CA854 = dword_9CA7D4;
            if ( dword_9CA7D4 <= 0 )
              dword_9CA854 = 100;
            std::ctype<char>::_Term();
          }
          else
          {
            dword_9CA7D4 = dword_9CA854;
            dword_9CA854 = 0;
            sub_41D640();
          }
          break;
        case 0x73u:
          dword_45F2B0 = 20;
          break;
        default:
          return DefWindowProcA(hWnd, Msg, wParam, lParam);
      }
      return DefWindowProcA(hWnd, Msg, wParam, lParam);
    case 0x1Fu:
      goto LABEL_84;
    case 0x20u:
      SetCursor(/*hCursor*/ hCursor);
      return 1;
    case 0x21u:
LABEL_92:
      if ( dword_4B1C24 != 0 || dword_4AC094 == 16 || dword_45F2B0 == 0 || dword_9CA7B8 == 0 )
        return DefWindowProcA(hWnd, Msg, wParam, lParam);
LABEL_96:
      LoadAltConfig();
      dword_9CA7A4 = 0;
      dword_9CA7B8 = 0;
      dword_9CA7B0 = 512;
      dword_9CA7B4 = 384;
LABEL_97:
      dword_45F2B0 = 19;
      break;
    default:
      break;
  }
  return DefWindowProcA(hWnd, Msg, wParam, lParam);
}

// 0x40e820  sub_40E820
HWND __cdecl sub_40E820(HINSTANCE hInstance, int nCmdShow)
{
  LPDIRECTDRAW v2; // eax
  unsigned int v3; // ecx
  HWND v4; // esi
  HRESULT v5; // eax
  HWND Window; // edi
  int v7; // eax
  HMODULE LibraryA; // eax
  DWORD (__stdcall *v9)(); // esi
  DWORD LastError; // eax
  FARPROC **v11; // esi
  FARPROC ProcAddress; // eax
  FARPROC *v13; // edx
  int v14; // eax
  DWORD v15; // eax
  WNDCLASSA WndClass; // [esp+58h] [ebp-144h] BYREF
  double hWnd; // [esp+80h] [ebp-11Ch]
  struct tagRECT Rect; // [esp+88h] [ebp-114h] BYREF
  CHAR Buffer[260]; // [esp+98h] [ebp-104h] BYREF

  LoadStringA(hInstance: ::hInstance, /*uID*/ *((_DWORD *)off_45F344 + 1), /*lpBuffer*/ Buffer, /*cchBufferMax*/ 260);
  sub_40CC30(qword_9CA830, SHIDWORD(qword_9CA830));
  sub_40D200(qword_9CA830, WORD2(qword_9CA830), 0x200u, 0xF0u);
  v2 = lpDD;
  v3 = 16;
  dword_4AC094 = 16;
  if ( lpDD != NULL )
  {
    lpDD->lpVtbl->Release(/*This*/ lpDD);
    v3 = dword_4AC094;
    v2 = NULL;
    lpDD = NULL;
  }
  v4 = ::hWnd;
  if ( ::hWnd != NULL )
  {
    if ( v3 == 2 )
    {
      dword_7C63B8(0, 0);
      dword_7C661C(dword_4B1AC0);
      dword_4B1AC0 = 0;
      if ( lpDD != NULL )
      {
        lpDD->lpVtbl->Release(/*This*/ lpDD);
        lpDD = NULL;
      }
    }
    else if ( v3 <= 1 )
    {
      dword_555FC4();
    }
    dword_4AC094 = 16;
    if ( hDC != NULL && v4 != NULL )
      ReleaseDC(/*hWnd*/ v4, /*hDC*/ hDC);
    hDC = NULL;
    DestroyWindow(hWnd: ::hWnd);
    v2 = lpDD;
    ::hWnd = NULL;
  }
  if ( dword_4B1CF0 != NULL )
  {
    DestroyWindow(/*hWnd*/ dword_4B1CF0);
    v2 = lpDD;
    dword_4B1CF0 = NULL;
  }
  if ( v2 != NULL )
  {
    v2->lpVtbl->Release(/*This*/ v2);
    lpDD = NULL;
  }
  if ( (unsigned int)dword_9CA824 > 2 )
    v5 = DirectDrawCreate(/*lpGUID*/ (GUID *)&unk_7C5E70 + 133 * dword_9CA824, /*lplpDD*/ &lpDD, /*pUnkOuter*/ NULL);
  else
    v5 = DirectDrawCreate(/*lpGUID*/ NULL, /*lplpDD*/ &lpDD, /*pUnkOuter*/ NULL);
  if ( v5 == 0 )
  {
    dword_4B1CF0 = (HWND)sub_40D740(hInstance);
    WndClass.style = 8227;
    WndClass.lpfnWndProc = sub_40E2D0;
    WndClass.cbClsExtra = 0;
    WndClass.cbWndExtra = 0;
    WndClass.hInstance = hInstance;
    if ( dword_9CA838 != 0 )
    {
      WndClass.hIcon = LoadIconA(hInstance, /*lpIconName*/ (LPCSTR)0x7F00);
      memset(&WndClass.hCursor, 0, 12);
      WndClass.lpszClassName = ClassName;
      RegisterClassA(/*lpWndClass*/ &WndClass);
      Window = CreateWindowExA(
                 /*dwExStyle*/ 8u,
                 /*lpClassName*/ ClassName,
                 /*lpWindowName*/ Buffer,
                 /*dwStyle*/ 0x96000000,
                 /*X*/ 0x80000000,
                 /*Y*/ 0x80000000,
                 /*nWidth*/ qword_467748,
                 /*nHeight*/ *(&qword_467748 + 1),
                 /*hWndParent*/ NULL,
                 /*hMenu*/ NULL,
                 hInstance,
                 /*lpParam*/ NULL);
    }
    else
    {
      WndClass.hIcon = LoadIconA(hInstance, /*lpIconName*/ (LPCSTR)0x7F00);
      WndClass.hCursor = LoadCursorA(/*hInstance*/ NULL, /*lpCursorName*/ (LPCSTR)0x7F00);
      WndClass.hbrBackground = NULL;
      WndClass.lpszMenuName = NULL;
      WndClass.lpszClassName = ClassName;
      RegisterClassA(/*lpWndClass*/ &WndClass);
      Window = CreateWindowExA(
                 /*dwExStyle*/ 0x40000u,
                 /*lpClassName*/ ClassName,
                 /*lpWindowName*/ Buffer,
                 /*dwStyle*/ 0x96C00000,
                 /*X*/ 0x80000000,
                 /*Y*/ 0x80000000,
                 /*nWidth*/ qword_467748,
                 /*nHeight*/ *(&qword_467748 + 1),
                 /*hWndParent*/ NULL,
                 /*hMenu*/ NULL,
                 hInstance,
                 /*lpParam*/ NULL);
      GetClientRect(/*hWnd*/ Window, /*lpRect*/ &Rect);
      SetWindowPos(
        /*hWnd*/ Window,
        /*hWndInsertAfter*/ (HWND)0xFFFFFFFE,
        /*X*/ 0,
        /*Y*/ 0,
        /*cx*/ 2 * qword_467748 - Rect.right,
        /*cy*/ 2 * *(&qword_467748 + 1) - Rect.bottom,
        /*uFlags*/ 0);
    }
    if ( Window == NULL )
      goto LABEL_56;
    hDC = GetDC(/*hWnd*/ Window);
    if ( hDC == NULL )
      goto LABEL_56;
    v7 = dword_9CA824;
    if ( dword_9CA824 == 2 )
    {
      dword_46AF60 = dword_4AC0B4;
      dword_46AF64 = dword_4AC0B4 >> 3;
      if ( dword_9CA838 != 0 )
      {
        if ( !sub_40D8B0(qword_467748, *(&qword_467748 + 1), dword_4AC0B4, Window) )
          goto LABEL_56;
        SetWindowPos(
          /*hWnd*/ Window,
          /*hWndInsertAfter*/ NULL,
          /*X*/ 0,
          /*Y*/ 0,
          /*cx*/ qword_467748,
          /*cy*/ *(&qword_467748 + 1),
          /*uFlags*/ 0);
      }
      if ( hLibModule != NULL )
      {
        FreeLibrary(/*hLibModule*/ hLibModule);
        hLibModule = NULL;
      }
      LibraryA = LoadLibraryA(/*lpLibFileName*/ LibFileName);
      hLibModule = LibraryA;
      if ( LibraryA != NULL )
      {
        v11 = (FARPROC **)&off_468750;
        while ( 1 )
        {
          ProcAddress = GetProcAddress(/*hModule*/ LibraryA, /*lpProcName*/ (LPCSTR)v11[1]);
          v13 = *v11;
          v11 += 2;
          *v13 = ProcAddress;
          if ( v11 >= (FARPROC **)&unk_469290 )
            break;
          LibraryA = hLibModule;
        }
        v9 = GetLastError;
        LastError = 0;
      }
      else
      {
        v9 = GetLastError;
        LastError = GetLastError();
      }
      if ( LastError != 0 )
        goto LABEL_56;
      dword_4AC094 = dword_9CA824;
      if ( SetGLPixelFormat() == 0 )
        goto LABEL_56;
      v14 = dword_7C934C(hDC);
      dword_4B1AC0 = v14;
      if ( v14 != 0 && dword_7C63B8(hDC, v14) != 0 )
        v15 = 0;
      else
        v15 = v9();
      if ( v15 != 0 )
        goto LABEL_56;
      dword_4B1A70 = sub_412540;
      dword_4B1A90 = sub_40D4A0;
      dword_4B1A94 = (int)sub_41F880;
      dword_7C624C = (int)sub_40A720;
      dword_7C6250 = (int)sub_40B190;
      dword_4B1A5C = (int)sub_40B9E0;
      dword_4B1A60 = (int)sub_40BE70;
      dword_4B1A64 = (int)sub_40C640;
      dword_4B1A68 = (int)sub_40C8B0;
      dword_4B1A74 = (int)sub_414BD0;
      dword_4B1A78 = (int)sub_414620;
      dword_4B1A7C = (int)sub_413BD0;
      dword_4B1A8C = (int)sub_413AB0;
      dword_4B1A80 = sub_413EF0;
      dword_4B1A84 = (int)sub_414010;
      dword_4B1A88 = (int)sub_413E30;
      dword_4B1A98 = (int)sub_40F980;
      dword_4B1A9C = (int)sub_40F040;
      dword_4B1AA0 = (int)sub_40F5A0;
      dword_4B1AA4 = (int)sub_40FB20;
      dword_7C961C = (int (__cdecl *)(_DWORD))sub_4113C0;
      dword_7C9618 = (int)sub_4113E0;
      sub_40DB50();
      dword_7C90AC(5889);
      dword_7C9090();
      hWnd = (double)qword_467748;
      dword_7C946C(
        COERCE_UNSIGNED_INT64(hWnd * -0.5),
        HIDWORD(COERCE_UNSIGNED_INT64(hWnd * -0.5)),
        COERCE_UNSIGNED_INT64(hWnd * 0.5),
        HIDWORD(COERCE_UNSIGNED_INT64(hWnd * 0.5)),
        COERCE_UNSIGNED_INT64((double)*(&qword_467748 + 1) * -0.5),
        HIDWORD(COERCE_UNSIGNED_INT64((double)*(&qword_467748 + 1) * -0.5)),
        COERCE_UNSIGNED_INT64((double)*(&qword_467748 + 1) * 0.5),
        HIDWORD(COERCE_UNSIGNED_INT64((double)*(&qword_467748 + 1) * 0.5)),
        COERCE_UNSIGNED_INT64((double)dword_4EFB3C),
        HIDWORD(COERCE_UNSIGNED_INT64((double)dword_4EFB3C)),
        0,
        1089470464);
      dword_7C90AC(5888);
    }
    else
    {
      if ( (unsigned int)dword_9CA824 > 1 )
        goto LABEL_56;
      if ( hLibModule != NULL )
      {
        FreeLibrary(/*hLibModule*/ hLibModule);
        v7 = dword_9CA824;
        hLibModule = NULL;
      }
      if ( dword_9CA838 != 0 && v7 == 1 )
      {
        if ( !sub_40D8B0(qword_467748, *(&qword_467748 + 1), 0x10u, Window) )
          goto LABEL_56;
        SetWindowPos(
          /*hWnd*/ Window,
          /*hWndInsertAfter*/ NULL,
          /*X*/ 0,
          /*Y*/ 0,
          /*cx*/ qword_467748,
          /*cy*/ *(&qword_467748 + 1),
          /*uFlags*/ 0);
      }
      else
      {
        ShowWindow(/*hWnd*/ Window, nCmdShow);
        SetFocus(/*hWnd*/ Window);
      }
      dword_46AF60 = dword_9CA824 != 1 ? 8 : 24;
      sub_41C8D0(dword_9CA838);
      if ( dword_553408(Window, qword_467748, *(&qword_467748 + 1), dword_46AF60) == 0 )
        goto LABEL_56;
      dword_4B1A80 = sub_417080;
      dword_4B1A88 = (int)PadSetAct;
      dword_4B1A90 = sub_40D520;
      dword_4B1A94 = (int)sub_420040;
      dword_7C624C = (int)sub_40AB50;
      dword_7C6250 = (int)sub_40B5B0;
      dword_4B1A64 = (int)sub_40C3B0;
      dword_4B1A68 = (int)sub_40C980;
      dword_4B1A74 = (int)sub_416240;
      dword_4B1A78 = (int)sub_415A50;
      dword_4B1A5C = (int)sub_40BCC0;
      dword_4B1A60 = (int)sub_40C0D0;
      dword_4B1A7C = (int)sub_4143E0;
      if ( dword_46AF60 != 8 )
        dword_4B1A7C = (int)sub_4140B0;
      dword_4B1A8C = (int)sub_413F00;
      dword_4B1A98 = (int)sub_40F770;
      dword_4B1A9C = (int)sub_40F1E0;
      dword_4B1AA0 = (int)sub_40F3D0;
      dword_4B1AA4 = (int)sub_40FC90;
      dword_7C961C = (int (__cdecl *)(_DWORD))sub_411780;
      dword_7C9618 = (int)sub_4117B0;
      dword_4B1A84 = (int)sub_414010;
      sub_403E70();
      dword_4AC094 = dword_9CA824;
    }
    ShowWindow(/*hWnd*/ Window, nCmdShow);
    sub_4220D0();
    return Window;
  }
  ConPrintf(/*Format*/ "file: %s  l: %d  \n  ->msg: DirectDrawCreate\n", aDProjetsBugsSr, 1651);
  Window = (HWND)LODWORD(hWnd);
LABEL_56:
  if ( lpDD != NULL )
  {
    lpDD->lpVtbl->Release(/*This*/ lpDD);
    lpDD = NULL;
  }
  if ( Window != NULL )
  {
    if ( dword_4AC094 == 2 )
    {
      dword_7C63B8(0, 0);
      dword_7C661C(dword_4B1AC0);
      dword_4B1AC0 = 0;
      if ( lpDD != NULL )
      {
        lpDD->lpVtbl->Release(/*This*/ lpDD);
        lpDD = NULL;
      }
    }
    else if ( (unsigned int)dword_4AC094 <= 1 )
    {
      dword_555FC4();
    }
    dword_4AC094 = 16;
    if ( hDC != NULL )
      ReleaseDC(/*hWnd*/ Window, /*hDC*/ hDC);
    hDC = NULL;
    DestroyWindow(/*hWnd*/ Window);
  }
  if ( dword_4B1CF0 != NULL )
  {
    DestroyWindow(/*hWnd*/ dword_4B1CF0);
    dword_4B1CF0 = NULL;
  }
  return NULL;
}
