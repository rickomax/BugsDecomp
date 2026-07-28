// Module `crt`.
//
// Reconstructed from Bugs.exe (PC v1.0) by tools/recon.py.
// Generated file -- do not edit by hand; see recon/README.md.
//
// Address range: 0x4170a0 - 0x45b3c0 (242 functions).

#include "bugs.h"


// 0x4170a0  __cfltcvt_init_3
// Documented as crt/crt in doc/functions.md.
void _cfltcvt_init_3()
{
  dword_565FE4 = (int)sub_417CA0;
  dword_5546A4 = sub_41C870;
  dword_5546AC = PadSetAct;
  dword_553440 = sub_41C880;
  dword_553408 = sub_4171C0;
  dword_553444 = (int (__cdecl *)(_DWORD))sub_417380;
  dword_555FC4 = sub_417340;
  dword_555FC0 = (int)sub_4171A0;
  dword_553404 = (int)sub_417150;
  dword_554464 = (int)sub_417110;
  dword_565FE0 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))sub_417130;
}

// 0x41d660  __Term___ctype_D_std__KAXXZ
// IDA symbol: ?_Term@?$ctype@D@std@@KAXXZ
// Documented as crt/crt in doc/functions.md.
int std::ctype<char>::_Term()
{
  return sub_41D6B0(dword_4ABF94);
}

// 0x42e380  ___setargv
// Documented as crt/crt in doc/functions.md.
void __setargv()
{
  dword_4B3FC0 = 1;
}

// 0x43f590  _iswlower
// Documented as crt/crt in doc/functions.md.
int __cdecl iswlower(wint_t C)
{
  return sub_43F690(C, 2);
}

// 0x43f5b0  _iswxdigit
// Documented as crt/crt in doc/functions.md.
int __cdecl iswxdigit(wint_t C)
{
  return sub_43F690(C, 128);
}

// 0x43f5d0  _iswdigit
// Documented as crt/crt in doc/functions.md.
int __cdecl iswdigit(wint_t C)
{
  return sub_43F690(C, 4);
}

// 0x43f5e0  _iswspace
// Documented as crt/crt in doc/functions.md.
int __cdecl iswspace(wint_t C)
{
  return sub_43F690(C, 8);
}

// 0x43f5f0  _iswpunct
// Documented as crt/crt in doc/functions.md.
int __cdecl iswpunct(wint_t C)
{
  return sub_43F690(C, 16);
}

// 0x43f600  _iswcntrl
// Documented as crt/crt in doc/functions.md.
int __cdecl iswcntrl(wint_t C)
{
  return sub_43F690(C, 32);
}

// 0x44eab0  DirectSoundCreate
// Documented as crt/crt in doc/functions.md.
// attributes: thunk
HRESULT __stdcall DirectSoundCreate(LPCGUID pcGuidDevice, LPDIRECTSOUND *ppDS, LPUNKNOWN pUnkOuter)
{
  return __imp_DirectSoundCreate(pcGuidDevice, ppDS, pUnkOuter);
}

// 0x44fdb8  DirectDrawCreate
// Documented as crt/crt in doc/functions.md.
// attributes: thunk
HRESULT __stdcall DirectDrawCreate(GUID *lpGUID, LPDIRECTDRAW *lplpDD, IUnknown *pUnkOuter)
{
  return __imp_DirectDrawCreate(lpGUID, lplpDD, pUnkOuter);
}

// 0x44fdbe  DirectDrawEnumerateA
// Documented as crt/crt in doc/functions.md.
// attributes: thunk
HRESULT __stdcall DirectDrawEnumerateA(LPDDENUMCALLBACKA lpCallback, LPVOID lpContext)
{
  return __imp_DirectDrawEnumerateA(lpCallback, lpContext);
}

// 0x44fdd0  malloc
// IDA symbol: _malloc
// Documented as crt/crt in doc/functions.md.
void *__cdecl malloc(size_t Size)
{
  return (void *)_nh_malloc(Size, dword_4B1E70);
}

// 0x44fdf0  __nh_malloc
// Documented as crt/crt in doc/functions.md.
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
    result = v2 > 0xFFFFFFE0 ? 0 : _heap_alloc(v2);
    if ( result != 0 || a2 == 0 )
      break;
    if ( _callnewh(/*Size*/ v2) == 0 )
      return 0;
  }
  return result;
}

// 0x44fe40  __heap_alloc
// Documented as crt/crt in doc/functions.md.
LPVOID __cdecl _heap_alloc(int a1)
{
  SIZE_T v1; // esi
  LPVOID result; // eax

  v1 = (a1 + 15) & 0xFFFFFFF0;
  if ( v1 > dword_4B0904 )
    return HeapAlloc(/*hHeap*/ hHeap, /*dwFlags*/ 0, /*dwBytes*/ v1);
  result = (LPVOID)__sbh_alloc_block(v1 >> 4);
  if ( result == NULL )
    return HeapAlloc(/*hHeap*/ hHeap, /*dwFlags*/ 0, /*dwBytes*/ v1);
  return result;
}

// 0x44fe80  __fpmath
// Documented as crt/crt in doc/functions.md.
int _fpmath()
{
  int result; // eax

  _cfltcvt_init_4();
  dword_4B1E10 = _ms_p5_mp_test_fdiv();
  result = _setdefaultprecision();
  __asm { fnclex }
  return result;
}

// 0x44fea0  __cfltcvt_init_4
// Documented as crt/crt in doc/functions.md.
int (__cdecl *_cfltcvt_init_4())(int, void *Src, int, int, int)
{
  off_4B090C[0] = (void (__noreturn *)())_cropzeros;
  off_4B0908[0] = (void (__noreturn *)())_cfltcvt;
  off_4B0910[0] = (void (__noreturn *)())_fassign;
  off_4B0914[0] = (void (__noreturn *)())_forcdecpt;
  off_4B0918[0] = (void (__noreturn *)())_positive;
  off_4B091C = (void (__noreturn *)())_cfltcvt;
  return _cfltcvt;
}

// 0x44fee0  __ftol
// Documented as crt/crt in doc/functions.md.
__int64 __usercall _ftol/*@<edx:eax>*/(double a1/*@<st0>*/)
{
  return (__int64)a1;
}

// 0x44ff10  free
// IDA symbol: _free
// Documented as crt/crt in doc/functions.md.
void __cdecl free(void *Block)
{
  void *v1; // esi
  int v2; // eax
  int v3; // [esp+4h] [ebp-4h] BYREF

  v1 = Block;
  if ( Block != NULL )
  {
    v2 = __sbh_find_block(Block, &v3, &Block);
    if ( v2 != 0 )
      __sbh_free_block(v3, Block, v2);
    else
      HeapFree(/*hHeap*/ hHeap, /*dwFlags*/ 0, /*lpMem*/ v1);
  }
}

// 0x44ff60  _lseek
// IDA symbol: __lseek
// Documented as crt/crt in doc/functions.md.
int __cdecl _lseek(int FileHandle, int Offset, int Origin)
{
  int v3; // esi
  int result; // eax
  DWORD v5; // edi
  DWORD LastError; // eax

  if ( FileHandle < uNumber
    && (v3 = 8 * (FileHandle & 0x1F), (*(_BYTE *)(dword_9CA9E0[FileHandle >> 5] + v3 + 4) & 1) != 0) )
  {
    result = _get_osfhandle(FileHandle);
    if ( result == -1 )
    {
      dword_4B1E14 = 9;
    }
    else
    {
      v5 = SetFilePointer(
             /*hFile*/ (HANDLE)result,
             /*lDistanceToMove*/ Offset,
             /*lpDistanceToMoveHigh*/ NULL,
             /*dwMoveMethod*/ Origin);
      if ( v5 == -1 )
        LastError = GetLastError();
      else
        LastError = 0;
      if ( LastError != 0 )
      {
        _dosmaperr(LastError);
        return -1;
      }
      else
      {
        *(_BYTE *)(dword_9CA9E0[FileHandle >> 5] + v3 + 4) &= ~2u;
        return v5;
      }
    }
  }
  else
  {
    dword_4B1E14 = 9;
    dword_4B1E18 = 0;
    return -1;
  }
  return result;
}

// 0x450020  _read
// IDA symbol: __read
// Documented as crt/crt in doc/functions.md.
int __cdecl _read(int FileHandle, void *DstBuf, unsigned int MaxCharCount)
{
  int v3; // ebx
  int v4; // ecx
  int *v5; // esi
  char v6; // dl
  DWORD v7; // ecx
  char *v8; // edi
  int v9; // ebp
  char *v10; // eax
  char v11; // dl
  DWORD LastError; // eax
  int v14; // ebp
  char v15; // al
  char v16; // al
  char *v17; // ebp
  char *v18; // esi
  char v19; // al
  DWORD v20; // ebp
  int *v21; // ecx
  char v22; // al
  char v23; // al
  _BYTE *v24; // ebx
  DWORD NumberOfBytesRead; // [esp+10h] [ebp-Ch] BYREF
  int *v26; // [esp+14h] [ebp-8h]
  char *v27; // [esp+18h] [ebp-4h]

  if ( FileHandle >= uNumber
    || (v3 = 8 * (FileHandle & 0x1F),
        v4 = dword_9CA9E0[FileHandle >> 5],
        v5 = &dword_9CA9E0[FileHandle >> 5],
        v26 = v5,
        NumberOfBytesRead = v3 + v4,
        ((v6 = *(_BYTE *)(v3 + v4 + 4)) & 1) == 0) )
  {
    dword_4B1E14 = 9;
    dword_4B1E18 = 0;
    return -1;
  }
  v7 = MaxCharCount;
  v8 = (char *)DstBuf;
  v9 = 0;
  v10 = (char *)DstBuf;
  if ( MaxCharCount == 0 || (v6 & 2) != 0 )
    return 0;
  if ( (v6 & 0x48) != 0 )
  {
    v11 = *(_BYTE *)(NumberOfBytesRead + 5);
    if ( v11 != 10 )
    {
      *(_BYTE *)DstBuf = v11;
      v10 = (char *)DstBuf + 1;
      v9 = 1;
      --v7;
      *(_BYTE *)(v3 + *v5 + 5) = 10;
    }
  }
  if ( !ReadFile(
          /*hFile*/ *(HANDLE *)(v3 + *v5),
          /*lpBuffer*/ v10,
          /*nNumberOfBytesToRead*/ v7,
          /*lpNumberOfBytesRead*/ &NumberOfBytesRead,
          /*lpOverlapped*/ NULL) )
  {
    LastError = GetLastError();
    if ( LastError == 5 )
    {
      dword_4B1E18 = 5;
      dword_4B1E14 = 9;
      return -1;
    }
    else if ( LastError == 109 )
    {
      return 0;
    }
    else
    {
      _dosmaperr(LastError);
      return -1;
    }
  }
  v14 = NumberOfBytesRead + v9;
  v15 = *(_BYTE *)(v3 + *v5 + 4);
  if ( v15 >= 0 )
    return v14;
  if ( NumberOfBytesRead != 0 && *(_BYTE *)DstBuf == 10 )
    v16 = v15 | 4;
  else
    v16 = v15 & 0xFB;
  *(_BYTE *)(v3 + *v5 + 4) = v16;
  v17 = (char *)DstBuf + v14;
  v18 = (char *)DstBuf;
  v27 = v17;
  if ( DstBuf >= v17 )
    return v18 - (_BYTE *)DstBuf;
  while ( 1 )
  {
    v19 = *v8;
    if ( *v8 == 26 )
      break;
    if ( v19 == 13 )
    {
      if ( v8 >= v17 - 1 )
      {
        v20 = 0;
        ++v8;
        if ( !ReadFile(
                /*hFile*/ *(HANDLE *)(v3 + *v26),
                /*lpBuffer*/ &MaxCharCount,
                /*nNumberOfBytesToRead*/ 1u,
                /*lpNumberOfBytesRead*/ &NumberOfBytesRead,
                /*lpOverlapped*/ NULL) )
          v20 = GetLastError();
        if ( v20 != 0 || NumberOfBytesRead == 0 )
        {
LABEL_39:
          *v18 = 13;
          goto LABEL_40;
        }
        v21 = v26;
        if ( (*(_BYTE *)(v3 + *v26 + 4) & 0x48) != 0 )
        {
          v22 = MaxCharCount;
          if ( (_BYTE)MaxCharCount == 10 )
          {
            *v18 = 10;
            goto LABEL_40;
          }
          *v18++ = 13;
          *(_BYTE *)(v3 + *v21 + 5) = v22;
        }
        else
        {
          if ( v18 == DstBuf && (_BYTE)MaxCharCount == 10 )
          {
            *v18 = 10;
            goto LABEL_40;
          }
          _lseek(FileHandle, /*Offset*/ -1, /*Origin*/ 1);
          if ( (_BYTE)MaxCharCount != 10 )
            goto LABEL_39;
        }
      }
      else
      {
        if ( v8[1] == 10 )
        {
          v8 += 2;
          *v18 = 10;
LABEL_40:
          ++v18;
          goto LABEL_41;
        }
        *v18++ = 13;
        ++v8;
      }
    }
    else
    {
      *v18++ = v19;
      ++v8;
    }
LABEL_41:
    v17 = v27;
    if ( v8 >= v27 )
      return v18 - (_BYTE *)DstBuf;
  }
  v23 = *(_BYTE *)(v3 + *v26 + 4);
  v24 = (_BYTE *)(v3 + *v26 + 4);
  if ( (v23 & 0x40) == 0 )
    *v24 = v23 | 2;
  return v18 - (_BYTE *)DstBuf;
}

// 0x450280  __alldiv
// Documented as crt/crt in doc/functions.md.
int __stdcall _alldiv(unsigned __int64 a1, __int64 a2)
{
  int v2; // edi
  int v3; // eax
  unsigned __int64 v4; // rtt
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned int v8; // esi
  unsigned __int64 v9; // rax

  v2 = 0;
  if ( (a1 & 0x8000000000000000uLL) != 0LL )
  {
    v2 = 1;
    HIDWORD(a1) = -HIDWORD(a1) - ((_DWORD)a1 != 0);
    LODWORD(a1) = -(int)a1;
  }
  v3 = HIDWORD(a2);
  if ( a2 < 0 )
  {
    ++v2;
    v3 = -HIDWORD(a2) - ((_DWORD)a2 != 0);
    HIDWORD(a2) = v3;
    LODWORD(a2) = -(int)a2;
  }
  if ( v3 != 0 )
  {
    v6 = __PAIR64__(v3, a2);
    v7 = a1;
    do
    {
      v6 >>= 1;
      v7 >>= 1;
    }
    while ( HIDWORD(v6) != 0 );
    v8 = v7 / (unsigned int)v6;
    v9 = v8 * (unsigned __int64)(unsigned int)a2;
    if ( __CFADD__(HIDWORD(a2) * v8, HIDWORD(v9)) || (HIDWORD(v9) = (a2 * (unsigned __int64)v8) >> 32, v9 > a1) )
      --v8;
    v5 = v8;
  }
  else
  {
    LODWORD(v4) = a1;
    HIDWORD(v4) = HIDWORD(a1) % (unsigned int)a2;
    LODWORD(v5) = v4 / (unsigned int)a2;
    HIDWORD(v5) = HIDWORD(a1) / (unsigned int)a2;
  }
  if ( v2 == 1 )
    return -v5;
  return v5;
}

// 0x450330  __allmul
// Documented as crt/crt in doc/functions.md.
unsigned __int64 __stdcall _allmul(__int64 a1, __int64 a2)
{
  if ( (HIDWORD(a1) | HIDWORD(a2)) != 0 )
    return a1 * a2;
  else
    return (unsigned int)a2 * (unsigned __int64)(unsigned int)a1;
}

// 0x450370  fseek
// IDA symbol: _fseek
// Documented as crt/crt in doc/functions.md.
int __cdecl fseek(FILE *Stream, int Offset, int Origin)
{
  int flag; // eax
  int v4; // edi
  int v5; // eax

  flag = Stream->_flag;
  if ( (flag & 0x83) != 0 && (v4 = Origin, (unsigned int)Origin <= 2) )
  {
    LOBYTE(flag) = flag & 0xEF;
    Stream->_flag = flag;
    if ( Origin == 1 )
    {
      v4 = 0;
      Offset += ftell(Stream);
    }
    _flush(Stream);
    v5 = Stream->_flag;
    if ( (v5 & 0x80u) == 0 )
    {
      if ( (v5 & 1) != 0 && (v5 & 8) != 0 && (v5 & 0x400) == 0 )
        Stream->_bufsiz = 512;
    }
    else
    {
      LOBYTE(v5) = v5 & 0xFC;
      Stream->_flag = v5;
    }
    return (_lseek(/*FileHandle*/ Stream->_file, Offset, /*Origin*/ v4) != -1) - 1;
  }
  else
  {
    dword_4B1E14 = 22;
    return -1;
  }
}

// 0x450410  ftell
// IDA symbol: _ftell
// Documented as crt/crt in doc/functions.md.
int __cdecl ftell(FILE *Stream)
{
  int file; // ebx
  int v2; // ecx
  int flag; // eax
  char *ptr; // ecx
  char *base; // ebp
  char *v7; // edx
  char *v8; // eax
  int cnt; // eax
  unsigned int bufsiz; // edi
  int v11; // esi
  char *v12; // eax
  char *i; // ecx
  int v14; // eax
  char *v15; // [esp+10h] [ebp-8h]
  int Offset; // [esp+14h] [ebp-4h]

  file = Stream->_file;
  if ( Stream->_cnt < 0 )
    Stream->_cnt = 0;
  v2 = _lseek(/*FileHandle*/ file, /*Offset*/ 0, /*Origin*/ 1);
  Offset = v2;
  if ( v2 < 0 )
    return -1;
  flag = Stream->_flag;
  if ( (flag & 0x108) == 0 )
    return v2 - Stream->_cnt;
  ptr = Stream->_ptr;
  base = Stream->_base;
  v7 = (char *)(Stream->_ptr - base);
  v15 = v7;
  if ( (flag & 3) != 0 )
  {
    if ( *(char *)(dword_9CA9E0[file >> 5] + 8 * (file & 0x1F) + 4) < 0 )
    {
      v8 = Stream->_base;
      if ( base < ptr )
      {
        do
        {
          if ( *v8 == 10 )
            ++v7;
          ++v8;
        }
        while ( v8 < ptr );
        v15 = v7;
      }
    }
LABEL_14:
    if ( Offset == 0 )
      return (int)v7;
    if ( (Stream->_flag & 1) == 0 )
      return (int)&v7[Offset];
    cnt = Stream->_cnt;
    if ( cnt == 0 )
      return Offset;
    bufsiz = &ptr[cnt] - base;
    v11 = 8 * (file & 0x1F);
    if ( *(char *)(v11 + dword_9CA9E0[file >> 5] + 4) >= 0 )
    {
LABEL_35:
      Offset -= bufsiz;
      return (int)&v7[Offset];
    }
    if ( _lseek(/*FileHandle*/ file, /*Offset*/ 0, /*Origin*/ 2) == Offset )
    {
      v12 = Stream->_base;
      for ( i = &v12[bufsiz]; v12 < i; ++v12 )
      {
        if ( *v12 == 10 )
          ++bufsiz;
      }
      if ( (Stream->_flag & 0x2000) == 0 )
        goto LABEL_34;
    }
    else
    {
      _lseek(/*FileHandle*/ file, Offset, /*Origin*/ 0);
      if ( bufsiz > 0x200 || ((v14 = Stream->_flag) & 8) == 0 || (v14 & 0x400) != 0 )
        bufsiz = Stream->_bufsiz;
      else
        bufsiz = 512;
      if ( (*(_BYTE *)(v11 + dword_9CA9E0[file >> 5] + 4) & 4) == 0 )
        goto LABEL_34;
    }
    ++bufsiz;
LABEL_34:
    v7 = v15;
    goto LABEL_35;
  }
  if ( (flag & 0x80u) != 0 )
    goto LABEL_14;
  dword_4B1E14 = 22;
  return -1;
}

// 0x4505c0  _sprintf
// Documented as crt/crt in doc/functions.md.
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
  v2 = _output(&File, (int)Format, (int)va);
  if ( --File._cnt < 0 )
    _flsbuf(/*Ch*/ 0, &File);
  else
    *File._ptr = 0;
  return v2;
}

// 0x450630  _vsprintf
// Documented as crt/crt in doc/functions.md.
int __cdecl vsprintf(char *const Buffer, const char *const Format, va_list ArgList)
{
  int v3; // esi
  FILE File; // [esp+4h] [ebp-20h] BYREF

  File._base = Buffer;
  File._ptr = Buffer;
  File._flag = 66;
  File._cnt = 0x7FFFFFFF;
  v3 = _output(&File, (int)Format, (int)ArgList);
  if ( --File._cnt < 0 )
    _flsbuf(/*Ch*/ 0, &File);
  else
    *File._ptr = 0;
  return v3;
}

// 0x4506a0  fclose
// IDA symbol: _fclose
// Documented as crt/crt in doc/functions.md.
int __cdecl fclose(FILE *Stream)
{
  int v1; // edi
  int flag; // eax

  v1 = -1;
  flag = Stream->_flag;
  if ( (flag & 0x40) != 0 )
  {
    Stream->_flag = 0;
    return -1;
  }
  if ( (flag & 0x83) != 0 )
  {
    v1 = _flush(Stream);
    _freebuf(Stream);
    if ( _close(/*FileHandle*/ Stream->_file) < 0 )
    {
      Stream->_flag = 0;
      return -1;
    }
    if ( Stream->_tmpfname != NULL )
    {
      free(/*Block*/ Stream->_tmpfname);
      Stream->_tmpfname = NULL;
    }
  }
  Stream->_flag = 0;
  return v1;
}

// 0x450720  _fprintf
// Documented as crt/crt in doc/functions.md.
int fprintf(FILE *const Stream, const char *const Format, ...)
{
  int v2; // edi
  int v3; // ebx
  va_list va; // [esp+18h] [ebp+Ch] BYREF

  va_start(va, Format);
  v2 = _stbuf(Stream);
  v3 = _output(/*File*/ Stream, (int)Format, (int)va);
  _ftbuf(v2, Stream);
  return v3;
}

// 0x450760  fwrite
// IDA symbol: _fwrite
// Documented as crt/crt in doc/functions.md.
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
    if ( _flsbuf(/*Ch*/ *v5, /*File*/ Stream) == -1 )
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
  if ( (Stream->_flag & 0x108) == 0 || _flush(Stream) == 0 )
  {
    if ( bufsiz != 0 )
      v11 = v4 - v4 % bufsiz;
    else
      v11 = v4;
    v12 = _write(/*FileHandle*/ Stream->_file, /*Buf*/ v5, /*MaxCharCount*/ v11);
    if ( v12 == -1 || (v4 -= v12, v5 += v12, Buffer = v5, v12 < v11) )
    {
      Stream->_flag |= 0x20u;
      return (v13 - v4) / ElementSize;
    }
    goto LABEL_24;
  }
  return (v13 - v4) / ElementSize;
}

// 0x4508b0  __fsopen
// Documented as crt/crt in doc/functions.md.
FILE *__cdecl _fsopen(const char *FileName, const char *Mode, int ShFlag)
{
  FILE *result; // eax

  result = (FILE *)_getstream();
  if ( result != NULL )
    return (FILE *)_openfile((char *)FileName, (int)Mode, /*ShareFlag*/ ShFlag, (int)result);
  return result;
}

// 0x4508e0  fopen
// IDA symbol: _fopen
// Documented as crt/crt in doc/functions.md.
FILE *__cdecl fopen(const char *FileName, const char *Mode)
{
  return _fsopen(FileName, Mode, /*ShFlag*/ 64);
}

// 0x450900  __chdir
// Documented as crt/crt in doc/functions.md.
int __cdecl _chdir(const char *Path)
{
  DWORD LastError; // eax
  CHAR Name[2]; // [esp+0h] [ebp-10Ch] BYREF
  char v4[2]; // [esp+2h] [ebp-10Ah] BYREF
  CHAR Buffer[264]; // [esp+4h] [ebp-108h] BYREF

  if ( SetCurrentDirectoryA(/*lpPathName*/ Path) && GetCurrentDirectoryA(/*nBufferLength*/ 0x105u, /*lpBuffer*/ Buffer) != 0 )
  {
    if ( (Buffer[0] == 92 || Buffer[0] == 47) && Buffer[0] == Buffer[1] )
      return 0;
    Name[0] = 61;
    Name[1] = _mbctoupper(/*Ch*/ (unsigned __int8)Buffer[0]);
    strcpy(v4, ":");
    if ( SetEnvironmentVariableA(/*lpName*/ Name, /*lpValue*/ Buffer) )
      return 0;
  }
  LastError = GetLastError();
  _dosmaperr(LastError);
  return -1;
}

// 0x4509b0  rand
// IDA symbol: _rand
// Documented as crt/crt in doc/functions.md.
int __cdecl rand()
{
  dword_4AE610 = 214013 * dword_4AE610 + 2531011;
  return (dword_4AE610 >> 16) & 0x7FFF;
}

// 0x4509e0  _atol
// Documented as crt/crt in doc/functions.md.
int __cdecl atol(const char *String)
{
  int v2; // eax
  int v3; // eax
  const char *v4; // edi
  int v5; // esi
  int v6; // ebp
  int v7; // ecx
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  int result; // eax

  while ( 1 )
  {
    v2 = (int)SrcSizeInBytes <= 1
       ? *((_BYTE *)off_4B0A98 + 2 * *(unsigned __int8 *)String) & 8
       : _isctype(/*C*/ *(unsigned __int8 *)String, /*Type*/ 8);
    if ( v2 == 0 )
      break;
    ++String;
  }
  v3 = *(unsigned __int8 *)String;
  v4 = String + 1;
  v5 = v3;
  v6 = v3;
  if ( v3 == 45 || v3 == 43 )
  {
    v7 = *(unsigned __int8 *)v4++;
    v5 = v7;
  }
  v8 = 0;
  while ( 1 )
  {
    v9 = (int)SrcSizeInBytes <= 1 ? *((_BYTE *)off_4B0A98 + 2 * v5) & 4 : _isctype(/*C*/ v5, /*Type*/ 4);
    if ( v9 == 0 )
      break;
    v10 = *(unsigned __int8 *)v4++;
    v8 = v5 + 10 * v8 - 48;
    v5 = v10;
  }
  result = v8;
  if ( v6 == 45 )
    return -v8;
  return result;
}

// 0x450a80  _atoi
// Documented as crt/crt in doc/functions.md.
int __cdecl atoi(const char *String)
{
  return atol(String);
}

// 0x450a90  fread
// IDA symbol: _fread
// Documented as crt/crt in doc/functions.md.
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
    v12 = _read(/*FileHandle*/ Stream->_file, /*DstBuf*/ v5, /*MaxCharCount*/ v11);
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
  v13 = _filbuf(/*File*/ Stream);
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

// 0x450bd0  _rewind
// Documented as crt/crt in doc/functions.md.
void __cdecl rewind(FILE *Stream)
{
  int file; // edi
  _BYTE *v2; // eax
  int flag; // eax

  file = Stream->_file;
  _flush(Stream);
  Stream->_flag &= 0xFFFFFFCF;
  if ( file == -1 )
    v2 = &dword_4B0A88;
  else
    v2 = (_BYTE *)(dword_9CA9E0[file >> 5] + 8 * (file & 0x1F));
  v2[4] &= ~2u;
  flag = Stream->_flag;
  if ( (flag & 0x80u) != 0 )
  {
    LOBYTE(flag) = flag & 0xFC;
    Stream->_flag = flag;
  }
  _lseek(/*FileHandle*/ file, /*Offset*/ 0, /*Origin*/ 0);
}

// 0x450c30  __cinit
// Documented as crt/crt in doc/functions.md.
void _cinit()
{
  if ( off_4AE5FC != NULL )
    off_4AE5FC();
  _initterm(/*First*/ &First, /*Last*/ &Last);
  _initterm(/*First*/ &dword_45E000, /*Last*/ &dword_45E004);
}

// 0x450c60  _exit
// Documented as crt/crt in doc/functions.md.
void __cdecl __noreturn exit(int Code)
{
  doexit(/*uExitCode*/ Code, 0, 0);
}

// 0x450c80  __exit
// Documented as crt/crt in doc/functions.md.
void __cdecl __noreturn _exit(int Code)
{
  doexit(/*uExitCode*/ Code, 1, 0);
}

// 0x450ca0  _doexit
// Documented as crt/crt in doc/functions.md.
void __cdecl doexit(UINT uExitCode, int a2, int a3)
{
  HANDLE CurrentProcess; // eax
  unsigned int v4; // ecx
  void (**v5)(void); // esi

  if ( dword_4B1E5C == 1 )
  {
    CurrentProcess = GetCurrentProcess();
    TerminateProcess(/*hProcess*/ CurrentProcess, uExitCode);
  }
  dword_4B1E58 = 1;
  byte_4B1E54 = a3;
  if ( a2 == 0 )
  {
    v4 = dword_9CBB08;
    if ( dword_9CBB08 != 0 )
    {
      v5 = (void (**)(void))(dword_9CBB04 - 4);
      if ( dword_9CBB04 - 4 >= (unsigned int)dword_9CBB08 )
      {
        do
        {
          if ( *v5 != NULL )
          {
            (*v5)();
            v4 = dword_9CBB08;
          }
          --v5;
        }
        while ( (unsigned int)v5 >= v4 );
      }
    }
    _initterm(/*First*/ &dword_45E014, /*Last*/ &dword_45E020);
  }
  _initterm(/*First*/ &dword_45E024, /*Last*/ &dword_45E028);
  if ( a3 == 0 )
  {
    dword_4B1E5C = 1;
    ExitProcess(uExitCode);
  }
}

// 0x450d50  __initterm
// Documented as crt/crt in doc/functions.md.
void __cdecl _initterm(_PVFV *First, _PVFV *Last)
{
  _PVFV *i; // esi

  for ( i = First; i < Last; ++i )
  {
    if ( *i != NULL )
      (*i)();
  }
}

// 0x450d70  _strncpy
// Documented as crt/crt in doc/functions.md.
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

// 0x450e70  _strstr
// Documented as crt/crt in doc/functions.md.
char *__cdecl strstr(const char *Str, const char *SubStr)
{
  unsigned __int8 v2; // dl
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
    return __from_strstr_to_strchr(v2, (char *)Str);
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
  return NULL;
}

// 0x450ef0  _sscanf
// Documented as crt/crt in doc/functions.md.
int sscanf(const char *const Buffer, const char *const Format, ...)
{
  FILE Stream; // [esp+4h] [ebp-20h] BYREF
  va_list va; // [esp+30h] [ebp+Ch] BYREF

  va_start(va, Format);
  Stream._base = (char *)Buffer;
  Stream._ptr = (char *)Buffer;
  Stream._cnt = strlen(Buffer);
  Stream._flag = 73;
  return _input(&Stream, (int)Format, (int)va);
}

// 0x450f40  _fgets
// Documented as crt/crt in doc/functions.md.
char *__cdecl fgets(char *Buffer, int MaxCount, FILE *Stream)
{
  char *v3; // edi
  int v5; // ebx
  int v6; // eax
  int v7; // eax

  v3 = Buffer;
  if ( MaxCount <= 0 )
    return NULL;
  v5 = MaxCount - 1;
  if ( MaxCount != 1 )
  {
    while ( 1 )
    {
      v6 = Stream->_cnt - 1;
      Stream->_cnt = v6;
      if ( v6 < 0 )
        v7 = _filbuf(/*File*/ Stream);
      else
        v7 = *(unsigned __int8 *)Stream->_ptr++;
      if ( v7 == -1 )
        break;
      *v3++ = v7;
      if ( (_BYTE)v7 == 10 )
        goto LABEL_13;
      if ( --v5 == 0 )
      {
        *v3 = 0;
        return Buffer;
      }
    }
    if ( v3 == Buffer )
      return NULL;
  }
LABEL_13:
  *v3 = 0;
  return Buffer;
}

// 0x450fc0  __alloca_probe
// Documented as crt/crt in doc/functions.md.
void __usercall _alloca_probe(unsigned int a1/*@<eax>*/, char a2)
{
  char *i; // ecx

  for ( i = &a2; a1 >= 0x1000; a1 -= 4096 )
    i -= 4096;
  __asm { retn }
}

// 0x450ff0  __filbuf
// Documented as crt/crt in doc/functions.md.
int __cdecl _filbuf(FILE *File)
{
  int flag; // eax
  int v3; // eax
  int v4; // edx
  _BYTE *v5; // edi
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
    _getbuf(File);
  v3 = _read(/*FileHandle*/ File->_file, /*DstBuf*/ File->_base, /*MaxCharCount*/ File->_bufsiz);
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
    v5 = File->_file == -1 ? &dword_4B0A88 : (_BYTE *)(dword_9CA9E0[File->_file >> 5] + 8 * (File->_file & 0x1F));
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

// 0x4510e0  _ldexp
// Documented as crt/crt in doc/functions.md.
double __cdecl ldexp(double X, int Y)
{
  int v2; // esi
  int v3; // eax
  double result; // st7
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  double v8; // [esp+0h] [ebp-1Ch]
  int v9; // [esp+18h] [ebp-4h] BYREF
  double Xa; // [esp+20h] [ebp+4h]
  double Xb; // [esp+20h] [ebp+4h]
  double Xc; // [esp+20h] [ebp+4h]

  v2 = _ctrlfp(4927, 0xFFFF);
  if ( (HIWORD(X) & 0x7FF0) == 0x7FF0 )
  {
    v3 = _sptype(LODWORD(X), HIDWORD(X));
    if ( v3 <= 0 )
    {
LABEL_6:
      result = (double)Y;
      _except2(
        8,
        25,
        SLODWORD(X),
        SHIDWORD(X),
        SLODWORD(result),
        HIDWORD(*(unsigned __int64 *)&result),
        X - -1.0,
        v2);
      return result;
    }
    if ( v3 > 2 )
    {
      if ( v3 == 3 )
        return _handle_qnan2(
                 25,
                 LODWORD(X),
                 HIDWORD(X),
                 COERCE_UNSIGNED_INT64((double)Y),
                 HIDWORD(COERCE_UNSIGNED_INT64((double)Y)),
                 v2);
      goto LABEL_6;
    }
  }
  else if ( X != 0.0 )
  {
    v5 = HIDWORD(X);
    v6 = LODWORD(X);
    _decomp(X, (int)&v9);
    v7 = v9 + Y;
    if ( v9 + Y <= 2560 )
    {
      if ( v7 <= 1024 )
      {
        if ( v7 >= -2557 )
        {
          if ( v7 >= -1021 )
          {
            Xc = _set_exp(LODWORD(X), HIDWORD(X), v7);
            _ctrlfp(v2, 0xFFFF);
            return Xc;
          }
          else
          {
            Xb = _set_exp(LODWORD(X), HIDWORD(X), v7 + 1536);
            result = (double)Y;
            _except2(
              18,
              25,
              v6,
              v5,
              SLODWORD(result),
              HIDWORD(*(unsigned __int64 *)&result),
              Xb,
              v2);
          }
        }
        else
        {
          result = (double)Y;
          _except2(
            18,
            25,
            SLODWORD(X),
            SHIDWORD(X),
            SLODWORD(result),
            HIDWORD(*(unsigned __int64 *)&result),
            0.0,
            v2);
        }
      }
      else
      {
        Xa = _set_exp(LODWORD(X), HIDWORD(X), v7 - 1536);
        result = (double)Y;
        _except2(
          17,
          25,
          v6,
          v5,
          SLODWORD(result),
          HIDWORD(*(unsigned __int64 *)&result),
          Xa,
          v2);
      }
    }
    else
    {
      v8 = _copysign(/*Number*/ Number, /*Sign*/ X);
      result = (double)Y;
      _except2(
        17,
        25,
        SLODWORD(X),
        SHIDWORD(X),
        SLODWORD(result),
        HIDWORD(*(unsigned __int64 *)&result),
        v8,
        v2);
    }
    return result;
  }
  _ctrlfp(v2, 0xFFFF);
  return X;
}

// 0x451340  __filelength
// Documented as crt/crt in doc/functions.md.
int __cdecl _filelength(int FileHandle)
{
  int v1; // esi
  int v3; // ebx

  if ( FileHandle < uNumber && (*(_BYTE *)(dword_9CA9E0[FileHandle >> 5] + 8 * (FileHandle & 0x1F) + 4) & 1) != 0 )
  {
    v1 = _lseek(FileHandle, /*Offset*/ 0, /*Origin*/ 1);
    if ( v1 == -1 )
    {
      return -1;
    }
    else
    {
      v3 = _lseek(FileHandle, /*Offset*/ 0, /*Origin*/ 2);
      if ( v1 != v3 )
        _lseek(FileHandle, /*Offset*/ v1, /*Origin*/ 0);
      return v3;
    }
  }
  else
  {
    dword_4B1E14 = 9;
    dword_4B1E18 = 0;
    return -1;
  }
}

// 0x4513d0  _close
// IDA symbol: __close
// Documented as crt/crt in doc/functions.md.
int __cdecl _close(int FileHandle)
{
  int v1; // edi
  intptr_t osfhandle; // ebx
  void *v3; // eax
  DWORD LastError; // ebx

  if ( FileHandle < uNumber
    && (v1 = 8 * (FileHandle & 0x1F), (*(_BYTE *)(dword_9CA9E0[FileHandle >> 5] + v1 + 4) & 1) != 0) )
  {
    if ( _get_osfhandle(FileHandle) == -1
      || (FileHandle == 1 || FileHandle == 2)
      && (osfhandle = _get_osfhandle(/*FileHandle*/ 2), _get_osfhandle(/*FileHandle*/ 1) == osfhandle)
      || (v3 = (void *)_get_osfhandle(FileHandle), CloseHandle(/*hObject*/ v3)) )
    {
      LastError = 0;
    }
    else
    {
      LastError = GetLastError();
    }
    _free_osfhnd(FileHandle);
    *(_BYTE *)(dword_9CA9E0[FileHandle >> 5] + v1 + 4) = 0;
    if ( LastError != 0 )
    {
      _dosmaperr(LastError);
      return -1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    dword_4B1E14 = 9;
    dword_4B1E18 = 0;
    return -1;
  }
}

// 0x4514b0  __CIpow
// Documented as crt/crt in doc/functions.md.
double __usercall _CIpow/*@<st0>*/(unsigned __int64 x/*@<st0>*/, double y/*@<st1>*/)
{
  sub_4514D2(x, HIDWORD(x), LODWORD(y), HIDWORD(y));
  return y;
}

// 0x4514c9  _pow
// Documented as crt/crt in doc/functions.md.
double __cdecl pow(double X, double Y)
{
  _fload_withFB();
  return sub_4514D2(LODWORD(X), HIDWORD(X), LODWORD(Y), HIDWORD(Y));
}

// 0x4516d0  __CIacos
// Documented as crt/crt in doc/functions.md.
double __usercall _CIacos/*@<st0>*/(unsigned __int64 x/*@<st0>*/)
{
  int v2; // [esp+0h] [ebp-8h]
  int v3; // [esp+4h] [ebp-4h]

  _checkTOS_withFB(x, HIDWORD(x));
  return sub_4516ED(v2, v3);
}

// 0x4516e4  _acos
// Documented as crt/crt in doc/functions.md.
double __cdecl acos(double X)
{
  int v1; // ecx

  _fload_withFB(v1, &X);
  return sub_4516ED(LODWORD(X), HIDWORD(X));
}

// 0x4517a0  __flsbuf
// Documented as crt/crt in doc/functions.md.
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
      if ( (v6 & 0x10C) == 0 && (v2 != &::File && v2 != &Stream || _isatty(/*FileHandle*/ v4) == 0) )
        _getbuf(v2);
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
            v10 = &dword_4B0A88;
          else
            v10 = (_BYTE *)(dword_9CA9E0[v4 >> 5] + 8 * (v4 & 0x1F));
          if ( (v10[4] & 0x20) != 0 )
            _lseek(/*FileHandle*/ v4, /*Offset*/ 0, /*Origin*/ 2);
          *v2->_base = Ch;
        }
        else
        {
          v5 = _write(/*FileHandle*/ v4, /*Buf*/ base, /*MaxCharCount*/ v8);
          *v2->_base = Ch;
        }
      }
      else
      {
        v8 = 1;
        v5 = _write(/*FileHandle*/ v4, /*Buf*/ &Ch, /*MaxCharCount*/ 1u);
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

// 0x4518d0  ___initstdio
// Documented as crt/crt in doc/functions.md.
int __initstdio()
{
  size_t v0; // eax
  char *v1; // eax
  int v2; // edx
  _UNKNOWN **v3; // ecx
  int result; // eax
  _DWORD *v5; // edx
  int v6; // ecx

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
  v1 = (char *)calloc(/*Count*/ v0, /*Size*/ 4u);
  dword_9CAAEC = (int)v1;
  if ( v1 == NULL )
  {
    Count = 20;
    v1 = (char *)calloc(/*Count*/ 0x14u, /*Size*/ 4u);
    dword_9CAAEC = (int)v1;
    if ( v1 == NULL )
      _amsg_exit(26);
  }
  v2 = 0;
  v3 = &off_4AE648;
  while ( 1 )
  {
    *(_DWORD *)&v1[v2] = v3;
    v3 += 8;
    v2 += 4;
    if ( (int)v3 >= (int)&unk_4AE8C8 )
      break;
    v1 = (char *)dword_9CAAEC;
  }
  result = 0;
  v5 = &unk_4AE658;
  do
  {
    v6 = *(_DWORD *)(dword_9CA9E0[result >> 5] + 8 * (result & 0x1F));
    if ( v6 == -1 || v6 == 0 )
      *v5 = -1;
    v5 += 8;
    ++result;
  }
  while ( (int)v5 < (int)dword_4AE6B8 );
  return result;
}

// 0x451990  ___endstdio
// Documented as crt/crt in doc/functions.md.
char __endstdio()
{
  char result; // al

  _flushall();
  result = byte_4B1E54;
  if ( byte_4B1E54 != 0 )
    return _fcloseall();
  return result;
}

// 0x4519b0  _qsort
// Documented as crt/crt in doc/functions.md.
void __cdecl qsort(
        void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        _CoreCrtNonSecureSearchSortCompareFunction CompareFunction)
{
  char *v4; // edi
  char *v5; // esi
  size_t v6; // eax
  void **v7; // esi
  char *v8; // ebp
  char *i; // esi
  int v10; // edi
  int v11; // ebp
  char *v12; // [esp+10h] [ebp-100h]
  char **v13; // [esp+14h] [ebp-FCh]
  char **v14; // [esp+18h] [ebp-F8h]
  int v15; // [esp+1Ch] [ebp-F4h]
  char v16; // [esp+20h] [ebp-F0h] BYREF
  char v17; // [esp+98h] [ebp-78h] BYREF

  if ( NumOfElements >= 2 && SizeOfElements != 0 )
  {
    v4 = (char *)Base;
    v5 = (char *)Base + SizeOfElements * (NumOfElements - 1);
    v15 = 0;
    v12 = v5;
    v13 = (char **)&v16;
    v14 = (char **)&v17;
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = (v5 - v4) / SizeOfElements + 1;
        if ( v6 <= 8 )
        {
          shortsort(v4, v5, SizeOfElements, CompareFunction);
          goto LABEL_6;
        }
        swap(&v4[SizeOfElements * (v6 >> 1)], v4, SizeOfElements);
        v8 = v4;
        for ( i = &v5[SizeOfElements]; ; swap(v8, i, SizeOfElements) )
        {
          do
            v8 += SizeOfElements;
          while ( v8 <= v12 && CompareFunction(v8, v4) <= 0 );
          do
            i -= SizeOfElements;
          while ( i > v4 && CompareFunction(i, v4) >= 0 );
          if ( i < v8 )
            break;
        }
        swap(v4, i, SizeOfElements);
        if ( i - v4 - 1 >= v12 - v8 )
          break;
        if ( v8 < v12 )
        {
          *v14 = v8;
          v11 = v15;
          *v13 = v12;
          v15 = v11 + 1;
          ++v14;
          ++v13;
        }
        if ( &v4[SizeOfElements] >= i )
        {
LABEL_6:
          v7 = (void **)(v14 - 1);
          --v15;
          --v14;
          --v13;
          if ( v15 < 0 )
            return;
          v4 = (char *)*v7;
          v12 = *v13;
          v5 = *v13;
        }
        else
        {
          v5 = &i[-SizeOfElements];
          v12 = v5;
        }
      }
      if ( &v4[SizeOfElements] < i )
      {
        *v14 = v4;
        v10 = v15;
        *v13 = &i[-SizeOfElements];
        v15 = v10 + 1;
        ++v14;
        ++v13;
      }
      if ( v8 >= v12 )
        goto LABEL_6;
      v5 = v12;
      v4 = v8;
    }
  }
}

// 0x451b60  _shortsort
// Documented as crt/crt in doc/functions.md.
void __cdecl shortsort(unsigned int a1, unsigned int a2, int a3, int (__cdecl *a4)(unsigned int, unsigned int))
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  unsigned int i; // esi

  v4 = a1;
  v5 = a2;
  if ( a2 > a1 )
  {
    while ( 1 )
    {
      for ( i = a3 + a1; i <= v5; i += a3 )
      {
        if ( a4(i, v4) > 0 )
          v4 = i;
      }
      swap(v4, v5, a3);
      v5 -= a3;
      if ( v5 <= a1 )
        break;
      v4 = a1;
    }
  }
}

// 0x451bc0  _swap
// Documented as crt/crt in doc/functions.md.
char *__cdecl swap(char *a1, char *a2, int a3)
{
  char *result; // eax
  char *v4; // ecx
  int i; // esi
  char v6; // dl

  result = a1;
  v4 = a2;
  if ( a1 != a2 && a3 != 0 )
  {
    for ( i = a3; i != 0; --i )
    {
      v6 = *result;
      *result++ = *v4;
      *v4++ = v6;
    }
  }
  return result;
}

// 0x451bf0  _printf
// Documented as crt/crt in doc/functions.md.
int printf(const char *const Format, ...)
{
  int v1; // esi
  int v2; // edi
  va_list va; // [esp+10h] [ebp+8h] BYREF

  va_start(va, Format);
  v1 = _stbuf(&File);
  v2 = _output(/*File*/ &File, (int)Format, (int)va);
  _ftbuf(v1, &File);
  return v2;
}

// 0x451c30  _memcpy
// Documented as crt/crt in doc/functions.md.
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
        __asm { jmp     dword ptr ds:(loc_451E14+4)[eax*4] }
        return result;
    }
  }
  else
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
    {
      if ( Size >= 4 )
        __asm { jmp     dword ptr ds:(loc_451C8C+4)[eax*4] }
      __asm { jmp     dword ptr ds:loc_451D88[ecx*4]; jumptable 00451C65 case 0 }
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

// 0x451f70  _strrchr
// Documented as crt/crt in doc/functions.md.
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
    return NULL;
}

// 0x451fa0  __itoa
// Documented as crt/crt in doc/functions.md.
char *__cdecl _itoa(int Value, char *Buffer, int Radix)
{
  if ( Radix == 10 && Value < 0 )
  {
    xtoa(Value, Buffer, 10, 1);
    return Buffer;
  }
  else
  {
    xtoa(Value, Buffer, Radix, 0);
    return Buffer;
  }
}

// 0x451fe0  _xtoa
// Documented as crt/crt in doc/functions.md.
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

// 0x4521f0  __amsg_exit
// Documented as crt/crt in doc/functions.md.
void __cdecl __noreturn _amsg_exit(int a1)
{
  if ( dword_4B1E6C == 1 )
    _FF_MSGBANNER();
  _NMSG_WRITE(a1);
  off_4AE8D0(/*Code*/ 255);
}

// 0x452220  __callnewh
// Documented as crt/crt in doc/functions.md.
int __cdecl _callnewh(size_t Size)
{
  return dword_4B1E74 != NULL && dword_4B1E74(Size) != 0;
}

// 0x452240  __heap_init
// Documented as crt/crt in doc/functions.md.
int _heap_init()
{
  int result; // eax

  result = (int)HeapCreate(/*flOptions*/ 1u, /*dwInitialSize*/ 0x1000u, /*dwMaximumSize*/ 0);
  hHeap = (HANDLE)result;
  if ( result != 0 )
  {
    if ( __sbh_new_region() != 0 )
    {
      return 1;
    }
    else
    {
      HeapDestroy(/*hHeap*/ hHeap);
      return 0;
    }
  }
  return result;
}

// 0x452280  ___sbh_new_region
// Documented as crt/crt in doc/functions.md.
_DWORD *__sbh_new_region()
{
  _DWORD *v0; // ebp
  _DWORD *v1; // eax
  _DWORD *v2; // esi
  _DWORD *v3; // ecx
  int i; // eax
  int v5; // edx

  if ( dword_4AE8F0 == -1 )
  {
    v0 = &off_4AE8E0;
  }
  else
  {
    v0 = HeapAlloc(/*hHeap*/ hHeap, /*dwFlags*/ 0, /*dwBytes*/ 0x2020u);
    if ( v0 == NULL )
      return NULL;
  }
  v1 = VirtualAlloc(/*lpAddress*/ NULL, /*dwSize*/ 0x400000u, /*flAllocationType*/ 0x2000u, /*flProtect*/ 4u);
  v2 = v1;
  if ( v1 == NULL )
  {
LABEL_18:
    if ( v0 != &off_4AE8E0 )
      HeapFree(/*hHeap*/ hHeap, /*dwFlags*/ 0, /*lpMem*/ v0);
    return NULL;
  }
  if ( VirtualAlloc(/*lpAddress*/ v1, /*dwSize*/ 0x10000u, /*flAllocationType*/ 0x1000u, /*flProtect*/ 4u) == NULL )
  {
    VirtualFree(/*lpAddress*/ v2, /*dwSize*/ 0, /*dwFreeType*/ 0x8000u);
    goto LABEL_18;
  }
  if ( v0 == &off_4AE8E0 )
  {
    if ( off_4AE8E0 == NULL )
      off_4AE8E0 = &off_4AE8E0;
    if ( lpMem == NULL )
      lpMem = &off_4AE8E0;
  }
  else
  {
    *v0 = &off_4AE8E0;
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

// 0x4523f0  ___sbh_release_region
// Documented as crt/crt in doc/functions.md.
BOOL __cdecl __sbh_release_region(LPVOID *lpMem)
{
  BOOL result; // eax

  result = VirtualFree(/*lpAddress*/ lpMem[4], /*dwSize*/ 0, /*dwFreeType*/ 0x8000u);
  if ( off_4B0900 == (_UNKNOWN **)lpMem )
    off_4B0900 = (_UNKNOWN **)lpMem[1];
  if ( lpMem == (LPVOID *)&off_4AE8E0 )
  {
    dword_4AE8F0 = -1;
  }
  else
  {
    *(_DWORD *)lpMem[1] = *lpMem;
    *((_DWORD *)*lpMem + 1) = lpMem[1];
    return HeapFree(/*hHeap*/ hHeap, /*dwFlags*/ 0, lpMem);
  }
  return result;
}

// 0x452450  ___sbh_decommit_pages
// Documented as crt/crt in doc/functions.md.
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
        if ( *v3 == 240 && VirtualFree(/*lpAddress*/ (LPVOID)(i + v1[4]), /*dwSize*/ 0x1000u, /*dwFreeType*/ 0x4000u) )
        {
          *v3 = -1;
          --dword_4B1E78;
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
          __sbh_release_region(/*lpMem*/ (LPVOID *)v6);
      }
    }
  }
  while ( v1 != lpMem && a1 > 0 );
}

// 0x452520  ___sbh_find_block
// Documented as crt/crt in doc/functions.md.
unsigned int __cdecl __sbh_find_block(unsigned int a1, _DWORD *a2, unsigned int *a3)
{
  _UNKNOWN **v3; // eax

  v3 = &off_4AE8E0;
  while ( a1 <= (unsigned int)v3[4] || a1 >= (unsigned int)v3[5] )
  {
    v3 = (_UNKNOWN **)*v3;
    if ( v3 == &off_4AE8E0 )
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

// 0x452580  ___sbh_free_block
// Documented as crt/crt in doc/functions.md.
void __cdecl __sbh_free_block(int a1, int a2, _BYTE *a3)
{
  int *v3; // eax
  int v4; // ecx

  v3 = (int *)(a1 + 8 * ((a2 - *(_DWORD *)(a1 + 16)) >> 12) + 24);
  *v3 += (unsigned __int8)*a3;
  *a3 = 0;
  v4 = *v3;
  v3[1] = 241;
  if ( v4 == 240 && ++dword_4B1E78 == 32 )
    __sbh_decommit_pages(16);
}

// 0x4525e0  ___sbh_alloc_block
// Documented as crt/crt in doc/functions.md.
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

  v1 = off_4B0900;
  v23 = off_4B0900;
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
          result = (_DWORD *)__sbh_alloc_block_from_page(i, *(_DWORD *)v4, a1);
          if ( result != NULL )
          {
            off_4B0900 = v23;
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
          result = (_DWORD *)__sbh_alloc_block_from_page(v9, *j, a1);
          if ( result != NULL )
          {
            off_4B0900 = v23;
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
  while ( v1 != off_4B0900 );
  v11 = (char *)&off_4AE8E0;
  while ( *((_DWORD *)v11 + 4) == -1 || *((_DWORD *)v11 + 3) == 0 )
  {
    v11 = *(char **)v11;
    if ( v11 == (char *)&off_4AE8E0 )
    {
      v21 = __sbh_new_region();
      if ( v21 != NULL )
      {
        v22 = v21[4];
        *(_BYTE *)(v22 + 8) = a1;
        off_4B0900 = (_UNKNOWN **)v21;
        *(_DWORD *)v22 = v22 + a1 + 8;
        *(_DWORD *)(v22 + 4) = 240 - a1;
        v21[6] -= (unsigned __int8)a1;
        return (_DWORD *)(v22 + 256);
      }
      return NULL;
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
  if ( VirtualAlloc(/*lpAddress*/ v13, /*dwSize*/ v14 << 12, /*flAllocationType*/ 0x1000u, /*flProtect*/ 4u) != v13 )
    return NULL;
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
  off_4B0900 = (_UNKNOWN **)v11;
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

// 0x452820  ___sbh_alloc_block_from_page
// Documented as crt/crt in doc/functions.md.
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

// 0x4529a0  __setdefaultprecision
// Documented as crt/crt in doc/functions.md.
unsigned int _setdefaultprecision()
{
  return _controlfp(/*NewValue*/ 0x10000u, /*Mask*/ 0x30000u);
}

// 0x4529c0  __ms_p5_test_fdiv
// Documented as crt/crt in doc/functions.md.
BOOL _ms_p5_test_fdiv()
{
  return 4195835.0 - 4195835.0 / 3145727.0 * 3145727.0 > 1.0;
}

// 0x452a10  __ms_p5_mp_test_fdiv
// Documented as crt/crt in doc/functions.md.
int _ms_p5_mp_test_fdiv()
{
  HMODULE ModuleHandleA; // eax
  BOOL (__stdcall *IsProcessorFeaturePresent)(DWORD); // eax

  ModuleHandleA = GetModuleHandleA(/*lpModuleName*/ "KERNEL32");
  if ( ModuleHandleA != NULL
    && (IsProcessorFeaturePresent = (BOOL (__stdcall *)(DWORD))GetProcAddress(
                                                                 /*hModule*/ ModuleHandleA,
                                                                 /*lpProcName*/ "IsProcessorFeaturePresent")) != NULL )
  {
    return IsProcessorFeaturePresent(/*ProcessorFeature*/ 0);
  }
  else
  {
    return _ms_p5_test_fdiv();
  }
}

// 0x452a40  __forcdecpt
// Documented as crt/crt in doc/functions.md.
char __cdecl _forcdecpt(char *a1)
{
  char *v1; // esi
  int v2; // eax
  char result; // al
  char *v4; // esi
  char v5; // cl
  char v6; // dl

  v1 = a1;
  if ( tolower(/*C*/ *a1) != 101 )
  {
    do
    {
      ++v1;
      if ( (int)SrcSizeInBytes <= 1 )
        v2 = *((_BYTE *)off_4B0A98 + 2 * *v1) & 4;
      else
        v2 = _isctype(/*C*/ *v1, /*Type*/ 4);
    }
    while ( v2 != 0 );
  }
  result = *v1;
  *v1 = byte_4B0CA8;
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

// 0x452aa0  __cropzeros
// Documented as crt/crt in doc/functions.md.
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
    if ( i == byte_4B0CA8 )
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
    if ( *v8 == byte_4B0CA8 )
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

// 0x452b10  __positive
// Documented as crt/crt in doc/functions.md.
BOOL __cdecl _positive(double *a1)
{
  return *a1 >= 0.0;
}

// 0x452b30  __fassign
// Documented as crt/crt in doc/functions.md.
_QWORD *__cdecl _fassign(int a1, _QWORD *a2, int a3)
{
  _QWORD *result; // eax
  __int64 v4; // [esp+0h] [ebp-8h] BYREF

  if ( a1 != 0 )
  {
    sub_4582D0(&v4, a3);
    *a2 = v4;
    return a2;
  }
  else
  {
    result = (_QWORD *)sub_458310(&a3, a3);
    *(_DWORD *)a2 = a3;
  }
  return result;
}

// 0x452b90  __cftoe
// Documented as crt/crt in doc/functions.md.
_BYTE *__cdecl _cftoe(_DWORD *a1, _BYTE *a2, int a3, int a4)
{
  int v4; // edi
  _BYTE *v5; // ebx
  _BYTE *v6; // eax
  char *v7; // esi
  _BYTE *v8; // esi
  int v9; // ecx
  _BYTE *v10; // esi
  _BYTE *v11; // esi

  if ( byte_4B1E80 != 0 )
  {
    v4 = dword_4B1E7C;
    v5 = a2;
    _shift(/*Src*/ &a2[*(_DWORD *)dword_4B1E7C == 45], a3 > 0);
  }
  else
  {
    v5 = a2;
    v4 = _fltout(*a1);
    _fptostr(&a2[(a3 > 0) + (*(_DWORD *)v4 == 45)], a3 + 1, v4);
  }
  v6 = v5;
  if ( *(_DWORD *)v4 == 45 )
  {
    *v5 = 45;
    v6 = v5 + 1;
  }
  if ( a3 > 0 )
  {
    *v6 = v6[1];
    *++v6 = byte_4B0CA8;
  }
  v7 = &v6[(byte_4B1E80 == 0) + a3];
  strcpy(v7, "e+000");
  if ( a4 != 0 )
    *v7 = 69;
  v8 = v7 + 1;
  if ( **(_BYTE **)(v4 + 12) != 48 )
  {
    v9 = *(_DWORD *)(v4 + 4) - 1;
    if ( v9 < 0 )
    {
      v9 = 1 - *(_DWORD *)(v4 + 4);
      *v8 = 45;
    }
    v10 = v8 + 1;
    if ( v9 >= 100 )
    {
      *v10 += v9 / 100;
      v9 %= 100;
    }
    v11 = v10 + 1;
    if ( v9 >= 10 )
    {
      *v11 += v9 / 10;
      v9 %= 10;
    }
    v11[1] += v9;
  }
  return v5;
}

// 0x452cd0  __cftof
// Documented as crt/crt in doc/functions.md.
_BYTE *__cdecl _cftof(_DWORD *a1, char *Src, int a3)
{
  _DWORD *v3; // esi
  _BYTE *v4; // ebp
  int v5; // ebx
  char *v6; // eax
  _BYTE *v7; // edi
  int v8; // eax
  _BYTE *v9; // edi
  int v10; // esi
  void *v11; // edi
  int v12; // esi

  if ( byte_4B1E80 != 0 )
  {
    v3 = (_DWORD *)dword_4B1E7C;
    v4 = Src;
    v5 = a3;
    if ( dword_4B1E84 == a3 )
    {
      v6 = &Src[(*(_DWORD *)dword_4B1E7C == 45) + dword_4B1E84];
      *v6 = 48;
      v6[1] = 0;
    }
  }
  else
  {
    v5 = a3;
    v3 = (_DWORD *)_fltout(*a1);
    v4 = Src;
    _fptostr(&Src[*v3 == 45], a3 + v3[1], v3);
  }
  v7 = v4;
  if ( *v3 == 45 )
  {
    *v4 = 45;
    v7 = v4 + 1;
  }
  v8 = v3[1];
  if ( v8 > 0 )
  {
    v9 = &v7[v8];
  }
  else
  {
    _shift(/*Src*/ v7, 1);
    *v7 = 48;
    v9 = v7 + 1;
  }
  if ( v5 > 0 )
  {
    _shift(/*Src*/ v9, 1);
    *v9 = byte_4B0CA8;
    v10 = v3[1];
    v11 = v9 + 1;
    if ( v10 < 0 )
    {
      if ( byte_4B1E80 != 0 )
      {
        v12 = -v10;
      }
      else
      {
        v12 = -v10;
        if ( v5 < v12 )
        {
LABEL_16:
          _shift(/*Src*/ v11, v5);
          memset(v11, 0x30u, v5);
          return v4;
        }
      }
      v5 = v12;
      goto LABEL_16;
    }
  }
  return v4;
}

// 0x452dd0  __cftog
// Documented as crt/crt in doc/functions.md.
int __cdecl _cftog(_DWORD *a1, char *Src, int a3, int a4)
{
  char *v4; // esi
  bool v5; // cl
  char v6; // al
  const char *v7; // esi

  dword_4B1E7C = _fltout(*a1);
  dword_4B1E84 = *(_DWORD *)(dword_4B1E7C + 4) - 1;
  v4 = &Src[*(_DWORD *)dword_4B1E7C == 45];
  _fptostr(v4, a3, dword_4B1E7C);
  v5 = dword_4B1E84 < *(_DWORD *)(dword_4B1E7C + 4) - 1;
  byte_4B1E88 = v5;
  dword_4B1E84 = *(_DWORD *)(dword_4B1E7C + 4) - 1;
  if ( dword_4B1E84 < -4 || dword_4B1E84 >= a3 )
    return _cftoe_g(a1, Src, a3, a4);
  if ( v5 )
  {
    v6 = *v4;
    v7 = v4 + 1;
    if ( v6 != 0 )
      v7 += strlen(v7) + 1;
    *((_BYTE *)v7 - 2) = 0;
  }
  return _cftof_g((int)a1, Src, a3);
}

// 0x452e80  __cftoe_g
// Documented as crt/crt in doc/functions.md.
_BYTE *__cdecl _cftoe_g(_DWORD *a1, _BYTE *a2, int a3, int a4)
{
  _BYTE *result; // eax

  byte_4B1E80 = 1;
  result = _cftoe(a1, a2, a3, a4);
  byte_4B1E80 = 0;
  return result;
}

// 0x452eb0  __cftof_g
// Documented as crt/crt in doc/functions.md.
_BYTE *__cdecl _cftof_g(_DWORD *a1, char *Src, int a3)
{
  _BYTE *result; // eax

  byte_4B1E80 = 1;
  result = _cftof(a1, Src, a3);
  byte_4B1E80 = 0;
  return result;
}

// 0x452ee0  __cfltcvt
// Documented as crt/crt in doc/functions.md.
_BYTE *__cdecl _cfltcvt(_DWORD *a1, char *Src, int a3, int a4, int a5)
{
  if ( a3 == 101 || a3 == 69 )
    return _cftoe(a1, Src, a4, a5);
  if ( a3 == 102 )
    return _cftof(a1, Src, a4);
  return (_BYTE *)_cftog(a1, Src, a4, a5);
}

// 0x452f50  __shift
// Documented as crt/crt in doc/functions.md.
void *__cdecl _shift(char *Src, int a2)
{
  void *result; // eax

  if ( a2 != 0 )
    return strcpy(&Src[a2], Src);
  return result;
}

// 0x452f80  __dosmaperr
// Documented as crt/crt in doc/functions.md.
_DWORD *__cdecl _dosmaperr(unsigned int a1)
{
  int v1; // ecx
  _DWORD *result; // eax

  dword_4B1E18 = a1;
  v1 = 0;
  result = &unk_4B0920;
  do
  {
    if ( a1 == *result )
    {
      result = (_DWORD *)dword_4B0924[2 * v1];
      dword_4B1E14 = (int)result;
      return result;
    }
    result += 2;
    ++v1;
  }
  while ( result < dword_4B0A88 );
  if ( a1 < 0x13 || a1 > 0x24 )
  {
    if ( a1 < 0xBC || (dword_4B1E14 = 8, a1 > 0xCA) )
      dword_4B1E14 = 22;
  }
  else
  {
    dword_4B1E14 = 13;
  }
  return result;
}

// 0x452ff0  __alloc_osfhnd
// Documented as crt/crt in doc/functions.md.
int _alloc_osfhnd()
{
  int v0; // ebp
  int v1; // esi
  int v2; // edi
  unsigned int *v3; // ecx
  unsigned int v4; // eax
  unsigned int v5; // edx
  char *v7; // eax
  UINT v8; // edi

  v0 = -1;
  v1 = 0;
  v2 = 0;
  v3 = (unsigned int *)dword_9CA9E0;
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == 0 )
      break;
    v5 = v4 + 256;
    if ( v4 < v4 + 256 )
    {
      while ( (*(_BYTE *)(v4 + 4) & 1) != 0 )
      {
        v4 += 8;
        if ( v4 >= v5 )
          goto LABEL_8;
      }
      *(_DWORD *)v4 = -1;
      v0 = v2 + ((int)(v4 - *v3) >> 3);
    }
LABEL_8:
    if ( v0 != -1 )
      return v0;
    ++v3;
    ++v1;
    v2 += 32;
    if ( (int)v3 >= (int)&uNumber )
      return -1;
  }
  v7 = (char *)malloc(/*Size*/ 0x100u);
  if ( v7 != NULL )
  {
    v8 = uNumber + 32;
    dword_9CA9E0[v1] = (int)v7;
    uNumber = v8;
    if ( v7 < v7 + 256 )
    {
      do
      {
        v7[4] = 0;
        *(_DWORD *)v7 = -1;
        v7[5] = 10;
        v7 += 8;
      }
      while ( (unsigned int)v7 < dword_9CA9E0[v1] + 256 );
    }
    return 32 * v1;
  }
  return v0;
}

// 0x4530b0  __set_osfhnd
// Documented as crt/crt in doc/functions.md.
int __cdecl _set_osfhnd(int a1, HANDLE hHandle)
{
  int *v2; // edi

  if ( a1 < uNumber && *(_DWORD *)(*(v2 = &dword_9CA9E0[a1 >> 5]) + 8 * (a1 & 0x1F)) == -1 )
  {
    if ( dword_4AE8D4 == 1 )
    {
      if ( a1 != 0 )
      {
        if ( a1 == 1 )
        {
          SetStdHandle(/*nStdHandle*/ 0xFFFFFFF5, hHandle);
          *(_DWORD *)(*v2 + 8) = hHandle;
          return 0;
        }
        if ( a1 == 2 )
        {
          SetStdHandle(/*nStdHandle*/ 0xFFFFFFF4, hHandle);
          *(_DWORD *)(*v2 + 16) = hHandle;
          return 0;
        }
      }
      else
      {
        SetStdHandle(/*nStdHandle*/ 0xFFFFFFF6, hHandle);
      }
    }
    *(_DWORD *)(*v2 + 8 * (a1 & 0x1F)) = hHandle;
    return 0;
  }
  else
  {
    dword_4B1E14 = 9;
    dword_4B1E18 = 0;
    return -1;
  }
}

// 0x453160  __free_osfhnd
// Documented as crt/crt in doc/functions.md.
int __cdecl _free_osfhnd(int a1)
{
  _DWORD *v1; // ecx

  if ( a1 >= uNumber || ((v1 = (_DWORD *)(dword_9CA9E0[a1 >> 5] + 8 * (a1 & 0x1F)))[1] & 1) == 0 || *v1 == -1 )
  {
    dword_4B1E14 = 9;
    dword_4B1E18 = 0;
    return -1;
  }
  else
  {
    if ( dword_4AE8D4 == 1 )
    {
      if ( a1 != 0 )
      {
        if ( a1 == 1 )
        {
          SetStdHandle(/*nStdHandle*/ 0xFFFFFFF5, /*hHandle*/ NULL);
        }
        else if ( a1 == 2 )
        {
          SetStdHandle(/*nStdHandle*/ 0xFFFFFFF4, /*hHandle*/ NULL);
        }
      }
      else
      {
        SetStdHandle(/*nStdHandle*/ 0xFFFFFFF6, /*hHandle*/ NULL);
      }
    }
    *(_DWORD *)(dword_9CA9E0[a1 >> 5] + 8 * (a1 & 0x1F)) = -1;
    return 0;
  }
}

// 0x453200  __get_osfhandle
// Documented as crt/crt in doc/functions.md.
intptr_t __cdecl _get_osfhandle(int FileHandle)
{
  int v1; // eax

  if ( FileHandle < uNumber )
  {
    v1 = dword_9CA9E0[FileHandle >> 5] + 8 * (FileHandle & 0x1F);
    if ( (*(_BYTE *)(v1 + 4) & 1) != 0 )
      return *(_DWORD *)v1;
  }
  dword_4B1E14 = 9;
  dword_4B1E18 = 0;
  return -1;
}

// 0x453250  __ioinit
// Documented as crt/crt in doc/functions.md.
UINT _ioinit()
{
  char *v0; // esi
  LPBYTE v1; // edi
  HANDLE *v2; // ebp
  char **v3; // esi
  char *v4; // eax
  UINT v5; // ecx
  int i; // esi
  int v7; // eax
  int v8; // ecx
  int j; // ebx
  int v10; // esi
  DWORD v11; // eax
  HANDLE StdHandle; // eax
  HANDLE v13; // edi
  DWORD FileType; // eax
  char v15; // al
  signed int v17; // [esp+10h] [ebp-48h]
  struct _STARTUPINFOA StartupInfo; // [esp+14h] [ebp-44h] BYREF

  v0 = (char *)malloc(/*Size*/ 0x100u);
  if ( v0 == NULL )
    _amsg_exit(27);
  dword_9CA9E0[0] = (int)v0;
  uNumber = 32;
  if ( v0 < v0 + 256 )
  {
    do
    {
      v0[4] = 0;
      *(_DWORD *)v0 = -1;
      v0[5] = 10;
      v0 += 8;
    }
    while ( (unsigned int)v0 < dword_9CA9E0[0] + 256 );
  }
  GetStartupInfoA(/*lpStartupInfo*/ &StartupInfo);
  if ( StartupInfo.cbReserved2 != 0 && StartupInfo.lpReserved2 != NULL )
  {
    v1 = StartupInfo.lpReserved2 + 4;
    v17 = *(_DWORD *)StartupInfo.lpReserved2;
    v2 = (HANDLE *)&StartupInfo.lpReserved2[*(_DWORD *)StartupInfo.lpReserved2 + 4];
    if ( *(int *)StartupInfo.lpReserved2 >= 2048 )
      v17 = 2048;
    if ( (int)uNumber < v17 )
    {
      v3 = (char **)&unk_9CA9E4;
      while ( 1 )
      {
        v4 = (char *)malloc(/*Size*/ 0x100u);
        if ( v4 == NULL )
          break;
        v5 = uNumber;
        *v3 = v4;
        for ( uNumber = v5 + 32; v4 < *v3 + 256; v4 += 8 )
        {
          v4[4] = 0;
          *(_DWORD *)v4 = -1;
          v4[5] = 10;
        }
        ++v3;
        if ( (int)uNumber >= v17 )
          goto LABEL_17;
      }
      v17 = uNumber;
    }
LABEL_17:
    for ( i = 0; i < v17; ++v2 )
    {
      if ( *v2 != (HANDLE)-1 && (*v1 & 1) != 0 && ((*v1 & 8) != 0 || GetFileType(/*hFile*/ *v2) != 0) )
      {
        v7 = i & 0x1F;
        v8 = dword_9CA9E0[i >> 5];
        *(_DWORD *)(v8 + 8 * v7) = *v2;
        *(_BYTE *)(v8 + 8 * v7 + 4) = *v1;
      }
      ++i;
      ++v1;
    }
  }
  for ( j = 0; j < 3; ++j )
  {
    v10 = dword_9CA9E0[0] + 8 * j;
    if ( *(_DWORD *)v10 == -1 )
    {
      *(_BYTE *)(v10 + 4) = -127;
      if ( j != 0 )
        v11 = -(j != 1) - 11;
      else
        v11 = -10;
      StdHandle = GetStdHandle(/*nStdHandle*/ v11);
      v13 = StdHandle;
      if ( StdHandle == (HANDLE)-1 || (FileType = GetFileType(/*hFile*/ StdHandle)) == 0 )
      {
        v15 = *(_BYTE *)(v10 + 4) | 0x40;
      }
      else
      {
        *(_DWORD *)v10 = v13;
        if ( (unsigned __int8)FileType == 2 )
        {
          v15 = *(_BYTE *)(v10 + 4) | 0x40;
        }
        else
        {
          if ( (unsigned __int8)FileType != 3 )
            continue;
          v15 = *(_BYTE *)(v10 + 4) | 8;
        }
      }
    }
    else
    {
      v15 = *(_BYTE *)(v10 + 4) | 0x80;
    }
    *(_BYTE *)(v10 + 4) = v15;
  }
  return SetHandleCount(/*uNumber*/ uNumber);
}

// 0x453450  _fflush
// Documented as crt/crt in doc/functions.md.
int __cdecl fflush(FILE *Stream)
{
  if ( Stream == NULL )
    return flsall(0);
  if ( _flush(Stream) != 0 )
    return -1;
  if ( (Stream->_flag & 0x4000) != 0 )
    return -(_commit(/*FileHandle*/ Stream->_file) != 0);
  return 0;
}

// 0x4534a0  __flush
// Documented as crt/crt in doc/functions.md.
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
      v4 = _write(/*FileHandle*/ a1[4], /*Buf*/ v2, /*MaxCharCount*/ v3) == v3;
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

// 0x453510  __flushall
// Documented as crt/crt in doc/functions.md.
int __cdecl _flushall()
{
  return flsall(1);
}

// 0x453520  _flsall
// Documented as crt/crt in doc/functions.md.
int __cdecl flsall(int a1)
{
  int v1; // ebp
  int v2; // edi
  signed int i; // esi
  int v4; // eax
  int v5; // ecx
  int result; // eax

  v1 = 0;
  v2 = 0;
  for ( i = 0; i < (int)Count; ++i )
  {
    v4 = *(_DWORD *)(dword_9CAAEC + 4 * i);
    if ( v4 != 0 )
    {
      v5 = *(_DWORD *)(v4 + 12);
      if ( (v5 & 0x83) != 0 )
      {
        if ( a1 == 1 )
        {
          if ( fflush(/*Stream*/ *(FILE **)(dword_9CAAEC + 4 * i)) != -1 )
            ++v1;
        }
        else if ( a1 == 0 && (v5 & 2) != 0 && fflush(/*Stream*/ *(FILE **)(dword_9CAAEC + 4 * i)) == -1 )
        {
          v2 = -1;
        }
      }
    }
  }
  result = v1;
  if ( a1 != 1 )
    return v2;
  return result;
}

// 0x4535a0  __output
// Documented as crt/crt in doc/functions.md.
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
      v9 = v5 < 32 || v5 > 120 ? 0 : ProcName[v5 + 24] & 0xF;
      v65 = byte_45CD50[8 * v9 + v3] >> 4;
      switch ( v65 )
      {
        case 0:
$NORMAL_STATE$684:
          v61 = 0;
          if ( *((char *)off_4B0A98 + 2 * (unsigned __int8)v66 + 1) < 0 )
          {
            write_char(v5, File, (int)&v58);
            v5 = *v6;
            v74 = v6 + 1;
          }
          write_char(v5, File, (int)&v58);
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
            int_arg = get_int_arg(&a3);
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
            v57 = get_int_arg(&a3);
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
                goto $NORMAL_STATE$684;
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
              v22 = (__int16 *)get_int_arg(&a3);
              if ( v22 != NULL && (v23 = *((char **)v22 + 1)) != NULL )
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
                p_MbCh = off_4B0A90;
                v4 = strlen(off_4B0A90);
              }
              goto LABEL_112;
            case 'c':
LABEL_40:
              if ( (v54 & 0x810) != 0 )
              {
                short_arg = get_short_arg(&a3);
                v4 = wctomb(&MbCh, /*WCh*/ short_arg);
                if ( v4 < 0 )
                {
                  v63 = 1;
                  p_MbCh = &MbCh;
                  goto LABEL_112;
                }
              }
              else
              {
                MbCh = get_int_arg(&a3);
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
              v47 = v60 - *(_DWORD *)&v59[1] - v4;
              if ( (v54 & 0xC) == 0 )
                write_multi_char(32, v60 - *(_DWORD *)&v59[1] - v4, File, (int)&v58);
              write_string((int)v59, *(int *)&v59[1], File, (int)&v58);
              if ( (v54 & 8) != 0 && (v54 & 4) == 0 )
                write_multi_char(48, v47, File, (int)&v58);
              if ( v61 != 0 && v4 > 0 )
              {
                v48 = (wchar_t *)p_MbCh;
                v49 = v4 - 1;
                do
                {
                  v53 = *v48++;
                  v50 = wctomb(/*MbCh*/ v68, /*WCh*/ v53);
                  if ( v50 <= 0 )
                    break;
                  write_string((int)v68, v50, File, (int)&v58);
                  v51 = v49--;
                }
                while ( v51 != 0 );
                v46 = v54;
              }
              else
              {
                write_string((int)p_MbCh, v4, File, (int)&v58);
              }
              if ( (v46 & 4) != 0 )
                write_multi_char(32, v47, File, (int)&v58);
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
              off_4B0908[0]();
            case 'n':
              v35 = (_WORD *)get_int_arg(&a3);
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
              v26 = (char *)get_int_arg(&a3);
              p_MbCh = v26;
              if ( (v54 & 0x810) != 0 )
              {
                if ( v26 == NULL )
                {
                  v26 = (char *)off_4B0A94;
                  p_MbCh = (char *)off_4B0A94;
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
                if ( v26 == NULL )
                {
                  v26 = off_4B0A90;
                  p_MbCh = off_4B0A90;
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
                    v39 = (__int16)get_int_arg(&a3);
                  else
                    v39 = (unsigned __int16)get_int_arg(&a3);
                }
                else if ( (v54 & 0x40) != 0 )
                {
                  v39 = (int)get_int_arg(&a3);
                }
                else
                {
                  v39 = (unsigned int)get_int_arg(&a3);
                }
              }
              else
              {
                LODWORD(v39) = get_int64_arg(&a3);
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

// 0x453f30  _write_char
// Documented as crt/crt in doc/functions.md.
int __cdecl write_char(int a1, FILE *File, _DWORD *a3)
{
  int v3; // eax
  int result; // eax

  v3 = File->_cnt - 1;
  File->_cnt = v3;
  if ( v3 < 0 )
  {
    result = _flsbuf(/*Ch*/ a1, File);
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

// 0x453f80  _write_multi_char
// Documented as crt/crt in doc/functions.md.
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
      write_char(a1, File, a4);
      result = *a4;
      if ( *a4 == -1 )
        break;
      v6 = v5--;
    }
    while ( v6 > 0 );
  }
  return result;
}

// 0x453fc0  _write_string
// Documented as crt/crt in doc/functions.md.
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
      write_char(v8, File, a4);
      result = *a4;
      if ( *a4 == -1 )
        break;
      v7 = v5--;
    }
    while ( v7 > 0 );
  }
  return result;
}

// 0x454000  _get_int_arg
// Documented as crt/crt in doc/functions.md.
int __cdecl get_int_arg(int *a1)
{
  int v1; // ecx

  v1 = *a1 + 4;
  *a1 = v1;
  return *(_DWORD *)(v1 - 4);
}

// 0x454020  _get_int64_arg
// Documented as crt/crt in doc/functions.md.
__int64 __cdecl get_int64_arg(int *a1)
{
  int v1; // ecx

  v1 = *a1 + 8;
  *a1 = v1;
  return *(_QWORD *)(v1 - 8);
}

// 0x454040  _get_short_arg
// Documented as crt/crt in doc/functions.md.
__int16 __cdecl get_short_arg(int *a1)
{
  int v1; // ecx

  v1 = *a1 + 4;
  *a1 = v1;
  return *(_WORD *)(v1 - 4);
}

// 0x454060  __freebuf
// Documented as crt/crt in doc/functions.md.
int __cdecl _freebuf(int a1)
{
  int result; // eax

  result = *(_DWORD *)(a1 + 12);
  if ( (result & 0x83) != 0 && (result & 8) != 0 )
  {
    free(/*Block*/ *(void **)(a1 + 8));
    *(_DWORD *)(a1 + 12) &= 0xFFFFFBF7;
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 4) = 0;
    return 0;
  }
  return result;
}

// 0x4540a0  __stbuf
// Documented as crt/crt in doc/functions.md.
int __cdecl _stbuf(FILE *a1)
{
  int v1; // edi
  void *v2; // eax
  int v3; // eax
  int flag; // eax

  if ( _isatty(/*FileHandle*/ a1->_file) == 0 )
    return 0;
  if ( a1 == &File )
  {
    v1 = 0;
  }
  else
  {
    if ( a1 != &Stream )
      return 0;
    v1 = 1;
  }
  ++dword_4B1E60;
  if ( (a1->_flag & 0x10C) == 0 )
  {
    if ( dword_4B1E90[v1] != 0 || (v2 = malloc(/*Size*/ 0x1000u), dword_4B1E90[v1] = (int)v2, v2 != NULL) )
    {
      v3 = dword_4B1E90[v1];
      a1->_bufsiz = 4096;
      a1->_base = (char *)v3;
      a1->_ptr = (char *)v3;
      flag = a1->_flag;
      a1->_cnt = 4096;
      a1->_flag = flag | 0x1102;
      return 1;
    }
  }
  return 0;
}

// 0x454140  __ftbuf
// Documented as crt/crt in doc/functions.md.
__int16 __cdecl _ftbuf(int a1, _DWORD *a2)
{
  int v2; // eax

  if ( a1 != 0 )
  {
    v2 = a2[3];
    if ( (v2 & 0x1000) != 0 )
    {
      _flush(a2);
      v2 = a2[3];
      BYTE1(v2) &= 0xEEu;
      a2[6] = 0;
      a2[3] = v2;
      *a2 = 0;
      a2[2] = 0;
    }
  }
  else
  {
    LOWORD(v2) = (_WORD)a2;
    if ( (a2[3] & 0x1000) != 0 )
      LOWORD(v2) = _flush(a2);
  }
  return v2;
}

// 0x4541a0  __write
// Documented as crt/crt in doc/functions.md.
int __cdecl _write(int FileHandle, const void *Buf, unsigned int MaxCharCount)
{
  int v3; // edx
  int v4; // esi
  char v5; // cl
  int v7; // eax
  _BYTE *v8; // ebp
  char *v9; // edi
  _BYTE *v10; // eax
  char v11; // cl
  int v12; // esi
  signed int v13; // esi
  DWORD v14; // [esp+10h] [ebp-41Ch]
  int v15; // [esp+14h] [ebp-418h]
  DWORD LastError; // [esp+18h] [ebp-414h]
  DWORD NumberOfBytesWritten; // [esp+1Ch] [ebp-410h] BYREF
  int v18; // [esp+20h] [ebp-40Ch]
  int *v19; // [esp+24h] [ebp-408h]
  _BYTE Buffer[1028]; // [esp+28h] [ebp-404h] BYREF

  if ( FileHandle >= uNumber
    || (v3 = dword_9CA9E0[FileHandle >> 5],
        v4 = 8 * (FileHandle & 0x1F),
        v19 = &dword_9CA9E0[FileHandle >> 5],
        v15 = v4,
        ((v5 = *(_BYTE *)(v4 + v3 + 4)) & 1) == 0) )
  {
    dword_4B1E14 = 9;
LABEL_30:
    dword_4B1E18 = 0;
    return -1;
  }
  v14 = 0;
  v18 = 0;
  if ( MaxCharCount == 0 )
    return 0;
  if ( (v5 & 0x20) != 0 )
    _lseek(FileHandle, /*Offset*/ 0, /*Origin*/ 2);
  v7 = v4 + dword_9CA9E0[FileHandle >> 5];
  if ( *(char *)(v7 + 4) >= 0 )
  {
    v8 = Buf;
    if ( WriteFile(
           /*hFile*/ *(HANDLE *)v7,
           /*lpBuffer*/ Buf,
           /*nNumberOfBytesToWrite*/ MaxCharCount,
           /*lpNumberOfBytesWritten*/ &NumberOfBytesWritten,
           /*lpOverlapped*/ NULL) )
    {
      LastError = 0;
      v14 = NumberOfBytesWritten;
    }
    else
    {
      LastError = GetLastError();
    }
  }
  else
  {
    v8 = Buf;
    LastError = 0;
    v9 = (char *)Buf;
    while ( 1 )
    {
      v10 = Buffer;
      do
      {
        if ( v9 - (_BYTE *)Buf >= MaxCharCount )
          break;
        v11 = *v9++;
        if ( v11 == 10 )
        {
          v12 = v18;
          *v10++ = 13;
          v18 = v12 + 1;
        }
        *v10++ = v11;
      }
      while ( v10 - Buffer < 1024 );
      v13 = v10 - Buffer;
      if ( !WriteFile(
              /*hFile*/ *(HANDLE *)(v15 + *v19),
              /*lpBuffer*/ Buffer,
              /*nNumberOfBytesToWrite*/ v10 - Buffer,
              /*lpNumberOfBytesWritten*/ &NumberOfBytesWritten,
              /*lpOverlapped*/ NULL) )
        break;
      v14 += NumberOfBytesWritten;
      if ( (int)NumberOfBytesWritten < v13 || v9 - (_BYTE *)Buf >= MaxCharCount )
        goto LABEL_17;
    }
    LastError = GetLastError();
LABEL_17:
    v4 = v15;
  }
  if ( v14 != 0 )
    return v14 - v18;
  if ( LastError == 0 )
  {
    if ( (*(_BYTE *)(v4 + *v19 + 4) & 0x40) != 0 && *v8 == 26 )
      return 0;
    dword_4B1E14 = 28;
    goto LABEL_30;
  }
  if ( LastError == 5 )
  {
    dword_4B1E18 = 5;
    dword_4B1E14 = 9;
  }
  else
  {
    _dosmaperr(LastError);
  }
  return -1;
}

// 0x4543c0  __openfile
// Documented as crt/crt in doc/functions.md.
_DWORD *__usercall _openfile/*@<eax>*/(int a1/*@<ebx>*/, char *FileName, char *a3, int ShareFlag, _DWORD *a5)
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
    v10 = dword_4B2108 | 2;
    goto LABEL_9;
  }
  if ( v5 != 114 )
  {
    if ( v5 != 119 )
      return NULL;
    v9 = 769;
    goto LABEL_8;
  }
  v9 = 0;
  v10 = dword_4B2108 | 1;
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
  v14 = _sopen(FileName, /*OpenFlag*/ v9, ShareFlag, 420);
  if ( v14 < 0 )
    return NULL;
  ++dword_4B1E60;
  a5[3] = v10;
  a5[1] = 0;
  *a5 = 0;
  a5[2] = 0;
  a5[7] = 0;
  a5[4] = v14;
  return a5;
}

// 0x454590  __getstream
// Documented as crt/crt in doc/functions.md.
_DWORD *_getstream()
{
  _DWORD *v0; // edi
  signed int v1; // ecx
  int v2; // edx
  int v3; // esi
  _DWORD *v4; // esi

  v0 = NULL;
  v1 = 0;
  if ( (int)Count > 0 )
  {
    v2 = dword_9CAAEC;
    while ( *(_DWORD *)v2 != 0 )
    {
      if ( (*(_BYTE *)(*(_DWORD *)v2 + 12) & 0x83) == 0 )
      {
        v0 = *(_DWORD **)(dword_9CAAEC + 4 * v1);
        goto LABEL_10;
      }
      ++v1;
      v2 += 4;
      if ( v1 >= (int)Count )
        goto LABEL_10;
    }
    v3 = 4 * v1;
    *(_DWORD *)(dword_9CAAEC + v3) = malloc(/*Size*/ 0x20u);
    v4 = *(_DWORD **)(dword_9CAAEC + v3);
    if ( v4 != NULL )
      v0 = v4;
  }
LABEL_10:
  if ( v0 != NULL )
  {
    v0[1] = 0;
    v0[3] = 0;
    v0[2] = 0;
    *v0 = 0;
    v0[7] = 0;
    v0[4] = -1;
  }
  return v0;
}

// 0x454620  __mbctoupper
// Documented as crt/crt in doc/functions.md.
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
    if ( (byte_4B1FB1[BYTE1(v1)] & 4) != 0
      && __crtLCMapStringA(
           /*Locale*/ Locale,
           /*dwMapFlags*/ 0x200u,
           /*lpSrcStr*/ (LPCSTR)&Ch,
           /*lpWideCharStr*/ (LPCWCH)2,
           /*lpDestStr*/ DestStr,
           /*cchDest*/ 2,
           /*CodePage*/ dword_4B20B4) != 0 )
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

// 0x4546b0  __isctype
// Documented as crt/crt in doc/functions.md.
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
    return (unsigned __int16)Type & *((_WORD *)off_4B0A98 + C);
  if ( *((char *)off_4B0A98 + 2 * BYTE1(C) + 1) >= 0 )
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
             /*dwInfoType*/ 1u,
             /*lpSrcStr*/ (LPCSTR)&C,
             /*cchSrc*/ v5,
             /*lpCharType*/ CharType,
             /*CodePage*/ 0,
             /*Locale*/ 0);
  if ( result != 0 )
    return (unsigned __int16)Type & CharType[0];
  return result;
}

// 0x454760  _strchr
// Documented as crt/crt in doc/functions.md.
char *__cdecl strchr(const char *Str, int Val)
{
  return __from_strstr_to_strchr((unsigned __int8)Val, (char *)Str);
}

// 0x454766  ___from_strstr_to_strchr
// Documented as crt/crt in doc/functions.md.
char *__usercall __from_strstr_to_strchr/*@<eax>*/(int a1/*@<eax>*/, char *Str, ...)
{
  int v3; // eax
  char *v4; // edx
  char v5; // cl
  int v6; // ebx
  int v7; // ecx
  int v8; // esi
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax

  v3 = a1 << 8;
  v4 = Str;
  if ( ((unsigned __int8)Str & 3) != 0 )
  {
    while ( 1 )
    {
      v5 = *v4++;
      if ( v5 == (_BYTE)a1 )
        return v4 - 1;
      if ( v5 == 0 )
        return NULL;
      if ( ((unsigned __int8)v4 & 3) == 0 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    v6 = v3 | a1 | ((v3 | a1) << 16);
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = v6 ^ *(_DWORD *)v4;
        v8 = *(_DWORD *)v4 + 2130640639;
        v9 = v8 ^ ~*(_DWORD *)v4;
        v4 += 4;
        if ( (((v7 + 2130640639) ^ ~v7) & 0x81010100) != 0 )
          break;
        v10 = v9 & 0x81010100;
        if ( v10 != 0 && ((v10 & 0x1010100) != 0 || (v8 & 0x80000000) == 0) )
          return NULL;
      }
      v12 = *((_DWORD *)v4 - 1);
      if ( (_BYTE)v12 == (_BYTE)v6 )
        break;
      if ( (_BYTE)v12 == 0 )
        return NULL;
      if ( BYTE1(v12) == (_BYTE)v6 )
        return v4 - 3;
      if ( BYTE1(v12) == 0 )
        return NULL;
      v13 = HIWORD(v12);
      if ( (_BYTE)v13 == (_BYTE)v6 )
        return v4 - 2;
      if ( (_BYTE)v13 == 0 )
        return NULL;
      if ( BYTE1(v13) == (_BYTE)v6 )
        return v4 - 1;
      if ( BYTE1(v13) == 0 )
        return NULL;
    }
    return v4 - 4;
  }
}

// 0x454820  __input
// Documented as crt/crt in doc/functions.md.
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
      v8 = *((_BYTE *)off_4B0A98 + 2 * v3) & 8;
    else
      v8 = _isctype(/*C*/ v3, /*Type*/ 8);
    if ( v8 != 0 )
    {
      --v55;
      v9 = _whiteout((int)&v55, /*Stream*/ v4);
      _un_inc(/*Character*/ v9, /*Stream*/ v4);
      for ( i = ++v6; isspace(/*C*/ *v6) != 0; i = v6 )
        ++v6;
    }
    if ( *v6 != 37 )
    {
      ++v55;
      v48 = fgetc(/*Stream*/ v4);
      v49 = *v6;
      v5 = v48;
      i = ++v6;
      if ( v49 == v48 )
      {
        if ( *((char *)off_4B0A98 + 2 * (unsigned __int8)v48 + 1) >= 0 )
          goto LABEL_236;
        ++v55;
        v50 = fgetc(/*Stream*/ v4);
        v51 = *v6++;
        i = v6;
        if ( v51 == v50 )
        {
          --v55;
          goto LABEL_236;
        }
        --v55;
        _un_inc(/*Character*/ v50, /*Stream*/ v4);
      }
LABEL_243:
      --v55;
      _un_inc(/*Character*/ v5, /*Stream*/ v4);
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
        v12 = *((_BYTE *)off_4B0A98 + 2 * (unsigned __int8)v11) & 4;
      }
      else
      {
        v12 = _isctype(/*C*/ (unsigned __int8)*v10, /*Type*/ 4);
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
        v15 = fgetc(/*Stream*/ v4);
      }
      else
      {
        v15 = _whiteout((int)&v55, /*Stream*/ v4);
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
        v17 = asc_4B0CB8;
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
        v5 = fgetc(/*Stream*/ v4);
LABEL_189:
        if ( v67 == 0 || v59 > 349 )
          v59 = 349;
        v41 = v69;
        while ( 1 )
        {
          v42 = (int)SrcSizeInBytes <= 1 ? *((_BYTE *)off_4B0A98 + 2 * v5) & 4 : _isctype(/*C*/ v5, /*Type*/ 4);
          if ( v42 == 0 )
            break;
          v28 = v59-- == 0;
          if ( v28 )
            break;
          *v40 = v5;
          ++v41;
          ++v40;
          ++v55;
          v5 = fgetc(/*Stream*/ v4);
        }
        if ( byte_4B0CA8 == (_BYTE)v5 )
        {
          v28 = v59-- == 0;
          if ( !v28 )
          {
            ++v55;
            v5 = fgetc(/*Stream*/ v4);
            *v40++ = byte_4B0CA8;
            while ( 1 )
            {
              v43 = (int)SrcSizeInBytes <= 1 ? *((_BYTE *)off_4B0A98 + 2 * v5) & 4 : _isctype(/*C*/ v5, /*Type*/ 4);
              if ( v43 == 0 )
                break;
              v28 = v59-- == 0;
              if ( v28 )
                break;
              *v40 = v5;
              ++v41;
              ++v40;
              ++v55;
              v5 = fgetc(/*Stream*/ v4);
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
        v45 = fgetc(/*Stream*/ v4);
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
          v47 = (int)SrcSizeInBytes <= 1 ? *((_BYTE *)off_4B0A98 + 2 * v5) & 4 : _isctype(/*C*/ v5, /*Type*/ 4);
          if ( v47 == 0 )
            break;
          v28 = v59-- == 0;
          if ( v28 )
            break;
          ++v41;
          *v40++ = v5;
LABEL_217:
          ++v55;
          v5 = fgetc(/*Stream*/ v4);
        }
LABEL_224:
        --v55;
        _un_inc(/*Character*/ v5, /*Stream*/ v4);
        if ( v41 == 0 )
          goto LABEL_245;
        if ( v58 == 0 )
        {
          ++v68;
          *v40 = 0;
          off_4B0910[0]();
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
          v5 = fgetc(/*Stream*/ v4);
        }
        else
        {
          v54 = 1;
        }
        goto LABEL_117;
      case 's':
        if ( v56 > 0 )
          v60 = 1;
        v17 = asc_4B0CB0;
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
          v5 = fgetc(/*Stream*/ v4);
        }
        else
        {
          v54 = 1;
        }
LABEL_102:
        if ( v5 == 48 )
        {
          ++v55;
          v30 = fgetc(/*Stream*/ v4);
          v5 = v30;
          if ( (_BYTE)v30 == 120 || (_BYTE)v30 == 88 )
          {
            ++v55;
            v16 = 120;
            v5 = fgetc(/*Stream*/ v4);
            v64 = 120;
          }
          else
          {
            v69 = 1;
            if ( v16 == 120 )
            {
              --v55;
              _un_inc(/*Character*/ v30, /*Stream*/ v4);
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
                v32 = *((_BYTE *)off_4B0A98 + 2 * v5) & 0x80;
              else
                v32 = _isctype(/*C*/ v5, /*Type*/ 128);
              if ( v32 == 0 )
                goto LABEL_134;
              v5 = _hextodec(/*C*/ v5);
              v31 *= 16;
            }
            else
            {
              if ( (int)SrcSizeInBytes <= 1 )
                v33 = *((_BYTE *)off_4B0A98 + 2 * v5) & 4;
              else
                v33 = _isctype(/*C*/ v5, /*Type*/ 4);
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
              _un_inc(/*Character*/ v5, Stream);
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
        _un_inc(/*Character*/ v5, /*Stream*/ v4);
        while ( 2 )
        {
          if ( v67 != 0 && (v28 = v59 == 0, --v59, v28) )
          {
            v65 = v26;
          }
          else
          {
            ++v55;
            v29 = fgetc(/*Stream*/ v4);
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
                if ( *((char *)off_4B0A98 + 2 * (unsigned __int8)v29 + 1) < 0 )
                {
                  ++v55;
                  SrcCh[1] = fgetc(/*Stream*/ v4);
                }
                mbtowc(&DstCh, SrcCh, /*SrcSizeInBytes*/ SrcSizeInBytes);
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
            _un_inc(/*Character*/ v29, /*Stream*/ v4);
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
          v36 = *((_BYTE *)off_4B0A98 + 2 * v5) & 0x80;
        else
          v36 = _isctype(/*C*/ v5, /*Type*/ 128);
        if ( v36 != 0 )
        {
          v34 *= 16;
          v5 = _hextodec(/*C*/ v5);
          goto LABEL_162;
        }
      }
      else
      {
        if ( (int)SrcSizeInBytes <= 1 )
          v35 = *((_BYTE *)off_4B0A98 + 2 * v5) & 4;
        else
          v35 = _isctype(/*C*/ v5, /*Type*/ 4);
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
        _un_inc(/*Character*/ v5, /*Stream*/ v4);
      }
      else
      {
        v34 = v34 + v5 - 48;
        ++v69;
        if ( v67 == 0 || (--v59, v59 != 0) )
        {
          ++v55;
          v5 = fgetc(/*Stream*/ v4);
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

// 0x455560  __hextodec
// Documented as crt/crt in doc/functions.md.
unsigned int __cdecl _hextodec(int C)
{
  int v1; // esi
  int v2; // eax

  v1 = C;
  if ( (int)SrcSizeInBytes <= 1 )
    v2 = *((_BYTE *)off_4B0A98 + 2 * C) & 4;
  else
    v2 = _isctype(C, /*Type*/ 4);
  if ( v2 == 0 )
    return (C & 0xFFFFFFDF) - 7;
  return v1;
}

// 0x4555a0  _fgetc
// Documented as crt/crt in doc/functions.md.
int __cdecl fgetc(FILE *Stream)
{
  int v1; // eax

  v1 = Stream->_cnt - 1;
  Stream->_cnt = v1;
  if ( v1 < 0 )
    return _filbuf(/*File*/ Stream);
  return *(unsigned __int8 *)Stream->_ptr++;
}

// 0x4555d0  __un_inc
// Documented as crt/crt in doc/functions.md.
int __cdecl _un_inc(int Character, FILE *Stream)
{
  int result; // eax

  result = Character;
  if ( Character != -1 )
    return ungetc(Character, Stream);
  return result;
}

// 0x4555f0  __whiteout
// Documented as crt/crt in doc/functions.md.
int __cdecl _whiteout(_DWORD *a1, FILE *Stream)
{
  int i; // esi

  ++*a1;
  for ( i = fgetc(Stream); isspace(/*C*/ i) != 0; i = fgetc(Stream) )
    ++*a1;
  return i;
}

// 0x455640  __getbuf
// Documented as crt/crt in doc/functions.md.
char __cdecl _getbuf(_DWORD *a1)
{
  void *v1; // eax
  bool v2; // zf
  int v3; // eax
  int v4; // edx

  ++dword_4B1E60;
  v1 = malloc(/*Size*/ 0x1000u);
  v2 = v1 == NULL;
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

// 0x4556a0  __set_exp
// Documented as crt/crt in doc/functions.md.
double __cdecl _set_exp(int a1, int a2, __int16 a3)
{
  double v4; // [esp+0h] [ebp-8h]

  LODWORD(v4) = a1;
  WORD2(v4) = a2;
  HIWORD(v4) = (16 * (a3 + 1022)) | HIWORD(a2) & 0x800F;
  return v4;
}

// 0x4556e0  __sptype
// Documented as crt/crt in doc/functions.md.
int __cdecl _sptype(int a1, int a2)
{
  if ( a2 == 2146435072 && a1 == 0 )
    return 1;
  if ( a2 == -1048576 && a1 == 0 )
    return 2;
  if ( (HIWORD(a2) & 0x7FF8) == 0x7FF8 )
    return 3;
  if ( (HIWORD(a2) & 0x7FF8) == 0x7FF0 && ((a2 & 0x7FFFF) != 0 || a1 != 0) )
    return 4;
  return 0;
}

// 0x455740  __decomp
// Documented as crt/crt in doc/functions.md.
// local variable allocation has failed, the output may be wrong!
double __cdecl _decomp(double a1, int *a2)
{
  double result; // st7
  int v3; // edx
  int v4; // ecx
  int v5; // esi
  BOOL i; // edi

  if ( a1 == 0.0 )
  {
    *a2 = 0;
    return 0.0;
  }
  else
  {
    v3 = HIDWORD(a1);
    v4 = LODWORD(a1);
    if ( (HIWORD(a1) & 0x7FF0) == 0 && ((HIDWORD(a1) & 0xFFFFF) != 0 || LODWORD(a1) != 0) )
    {
      v5 = -1021;
      for ( i = a1 < 0.0; (BYTE6(a1) & 0x10) == 0; --v5 )
      {
        v3 *= 2;
        HIDWORD(a1) = v3;
        if ( v4 < 0 )
        {
          v3 |= 1u;
          HIDWORD(a1) = v3;
        }
        v4 *= 2;
      }
      HIWORD(a1) &= ~0x10u;
      if ( i )
        HIBYTE(a1) |= 0x80u;
      result = _set_exp(v4, SHIDWORD(a1), 0);
      *a2 = v5;
    }
    else
    {
      result = _set_exp(SLODWORD(a1), SHIDWORD(a1), 0);
      *a2 = ((*(_DWORD *)((char *)&a1 + 6) >> 4) & 0x7FF) - 1022;
    }
  }
  return result;
}

// 0x455840  __copysign
// Documented as crt/crt in doc/functions.md.
double __cdecl _copysign(double Number, double Sign)
{
  double v3; // [esp+0h] [ebp-8h]

  LODWORD(v3) = LODWORD(Number);
  HIDWORD(v3) = HIDWORD(Sign) ^ (HIDWORD(Number) ^ HIDWORD(Sign)) & 0x7FFFFFFF;
  return v3;
}

// 0x455870  __fpclass
// Documented as crt/crt in doc/functions.md.
int __cdecl _fpclass(double X)
{
  int v1; // eax
  int v2; // eax
  int v4; // edx
  int v5; // eax
  int v6; // eax

  if ( (HIWORD(X) & 0x7FF0) == 0x7FF0 )
  {
    v1 = _sptype(SLODWORD(X), SHIDWORD(X)) - 1;
    if ( v1 != 0 )
    {
      v2 = v1 - 1;
      if ( v2 != 0 )
      {
        if ( v2 == 1 )
          return 2;
        else
          return 1;
      }
      else
      {
        return 4;
      }
    }
    else
    {
      return 512;
    }
  }
  else
  {
    v4 = HIWORD(X) & 0x8000;
    if ( (HIWORD(X) & 0x7FF0) == 0 && ((HIDWORD(X) & 0xFFFFF) != 0 || LODWORD(X) != 0) )
    {
      v5 = -(v4 != 0);
      LOBYTE(v5) = v5 & 0x90;
      return v5 + 128;
    }
    else
    {
      v6 = -(v4 != 0);
      if ( X == 0.0 )
      {
        LOBYTE(v6) = v6 & 0xE0;
        return v6 + 64;
      }
      else
      {
        LOBYTE(v6) = v6 & 8;
        return v6 + 256;
      }
    }
  }
}

// 0x455910  __handle_qnan2
// Documented as crt/crt in doc/functions.md.
double __cdecl _handle_qnan2(int a1, double a2, double a3, int a4)
{
  double result; // st7
  double v5; // [esp+0h] [ebp-8h]

  result = a3 + a2;
  v5 = a3 + a2;
  if ( dword_4B10D0 != 0 )
  {
    dword_4B1E14 = 33;
    _ctrlfp(a4, 0xFFFF);
    return v5;
  }
  else
  {
    _umatherr(/*Value*/ 1, a1, SLODWORD(a2), SHIDWORD(a2), SLODWORD(a3), SHIDWORD(a3), v5, a4);
  }
  return result;
}

// 0x455990  __except2
// Documented as crt/crt in doc/functions.md.
double __cdecl _except2(int a1, int a2, int a3, int a4, ULONG_PTR a5, ULONG_PTR a6, double a7, int a8)
{
  int v8; // eax
  int v9; // edi
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  double result; // st7
  ULONG_PTR Arguments[14]; // [esp+10h] [ebp-58h] BYREF
  int v15; // [esp+48h] [ebp-20h]

  v8 = _handle_exc(a1, &a7, a8);
  v9 = a6;
  v10 = a5;
  if ( v8 == 0 )
  {
    v11 = v15;
    LOBYTE(v11) = v15 & 0xE0 | 3;
    v15 = v11;
    Arguments[10] = a5;
    Arguments[11] = a6;
    _raise_exc((ULONG_PTR)Arguments, (int)&a8, a1, a2, (int)&a3, (int)&a7);
  }
  v12 = _errcode(a1);
  if ( dword_4B10D0 != 0 || v12 == 0 )
  {
    _set_errno(/*Value*/ v12);
    _ctrlfp(a8, 0xFFFF);
    return a7;
  }
  else
  {
    _umatherr(/*Value*/ v12, a2, a3, a4, v10, v9, a7, a8);
  }
  return result;
}

// 0x455a80  __raise_exc
// Documented as crt/crt in doc/functions.md.
unsigned int *__cdecl _raise_exc(unsigned int *Arguments, int *a2, char a3, __int16 a4, _DWORD *a5, unsigned int *a6)
{
  char v6; // al
  DWORD v7; // ebp
  int *v8; // esi
  char v9; // al
  unsigned int v10; // eax
  int v11; // eax
  _DWORD *v12; // eax
  unsigned int *v13; // edi
  unsigned int *result; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // edx

  Arguments[1] = 0;
  v6 = a3;
  Arguments[2] = 0;
  Arguments[3] = 0;
  if ( (v6 & 0x10) != 0 )
  {
    v7 = -1073741681;
    Arguments[1] |= 1u;
  }
  else
  {
    v7 = (DWORD)Arguments;
  }
  if ( (v6 & 2) != 0 )
  {
    v7 = -1073741677;
    Arguments[1] |= 2u;
  }
  if ( (v6 & 1) != 0 )
  {
    v7 = -1073741679;
    Arguments[1] |= 4u;
  }
  if ( (v6 & 4) != 0 )
  {
    v7 = -1073741682;
    Arguments[1] |= 8u;
  }
  if ( (v6 & 8) != 0 )
  {
    v7 = -1073741680;
    Arguments[1] |= 0x10u;
  }
  v8 = a2;
  Arguments[2] = Arguments[2] & 0xFFFFFFEF | (16 * ((*a2 & 1) == 0));
  Arguments[2] = Arguments[2] & 0xFFFFFFF7 | (2 * (~(unsigned __int8)*v8 & 4));
  Arguments[2] = Arguments[2] & 0xFFFFFFFB | ((unsigned int)~*v8 >> 1) & 4;
  Arguments[2] = Arguments[2] & 0xFFFFFFFD | ((unsigned int)~*v8 >> 3) & 2;
  Arguments[2] = Arguments[2] & 0xFFFFFFFE | ((~*v8 & 0x20) != 0);
  v9 = _statfp();
  if ( (v9 & 1) != 0 )
    Arguments[3] |= 0x10u;
  if ( (v9 & 4) != 0 )
    Arguments[3] |= 8u;
  if ( (v9 & 8) != 0 )
    Arguments[3] |= 4u;
  if ( (v9 & 0x10) != 0 )
    Arguments[3] |= 2u;
  if ( (v9 & 0x20) != 0 )
    Arguments[3] |= 1u;
  v10 = *v8 & 0xC00;
  if ( v10 > 0x400 )
  {
    if ( v10 == 2048 )
    {
      *Arguments = *Arguments & 0xFFFFFFFC | 2;
    }
    else if ( v10 == 3072 )
    {
      *Arguments |= 3u;
    }
  }
  else if ( v10 == 1024 )
  {
    *Arguments = *Arguments & 0xFFFFFFFC | 1;
  }
  else if ( v10 == 0 )
  {
    *Arguments &= 0xFFFFFFFC;
  }
  v11 = *v8 & 0x300;
  if ( v11 != 0 )
  {
    if ( v11 == 512 )
    {
      *Arguments = *Arguments & 0xFFFFFFE3 | 4;
    }
    else if ( v11 == 768 )
    {
      *Arguments &= 0xFFFFFFE3;
    }
  }
  else
  {
    *Arguments = *Arguments & 0xFFFFFFE3 | 8;
  }
  *Arguments = (32 * (a4 & 0xFFF)) | *Arguments & 0xFFFE001F;
  Arguments[8] |= 1u;
  Arguments[8] = Arguments[8] & 0xFFFFFFE1 | 2;
  v12 = a5;
  Arguments[4] = *a5;
  Arguments[5] = v12[1];
  Arguments[20] |= 1u;
  v13 = a6;
  Arguments[20] = Arguments[20] & 0xFFFFFFE1 | 2;
  Arguments[16] = *v13;
  Arguments[17] = v13[1];
  _clrfp();
  RaiseException(
    /*dwExceptionCode*/ v7,
    /*dwExceptionFlags*/ 0,
    /*nNumberOfArguments*/ 1u,
    /*lpArguments*/ (const ULONG_PTR *)&Arguments);
  result = Arguments;
  if ( (Arguments[2] & 0x10) != 0 )
    *v8 &= ~1u;
  if ( (result[2] & 8) != 0 )
    *v8 &= ~4u;
  if ( (result[2] & 4) != 0 )
    *v8 &= ~8u;
  if ( (result[2] & 2) != 0 )
    *v8 &= ~0x10u;
  if ( (result[2] & 1) != 0 )
    *v8 &= ~0x20u;
  switch ( *result & 3 )
  {
    case 0u:
      v15 = *v8;
      BYTE1(v15) = BYTE1(*v8) & 0xF3;
      goto LABEL_52;
    case 1u:
      v16 = *v8;
      BYTE1(v16) = BYTE1(*v8) & 0xF3 | 4;
      *v8 = v16;
      goto LABEL_53;
    case 2u:
      v15 = *v8;
      BYTE1(v15) = BYTE1(*v8) & 0xF3 | 8;
      goto LABEL_52;
    case 3u:
      v15 = *v8;
      BYTE1(v15) = BYTE1(*v8) | 0xC;
LABEL_52:
      *v8 = v15;
LABEL_53:
      v17 = (*result >> 2) & 7;
      if ( v17 != 0 )
      {
        v18 = v17 - 1;
        if ( v18 == 0 )
        {
          v20 = *v8;
          BYTE1(v20) = BYTE1(*v8) & 0xF1 | 2;
          *v8 = v20;
          *v13 = result[16];
          v13[1] = result[17];
          return result;
        }
        if ( v18 == 1 )
        {
          v19 = *v8;
          BYTE1(v19) = BYTE1(*v8) & 0xF3;
          *v8 = v19;
          *v13 = result[16];
          v13[1] = result[17];
          return result;
        }
      }
      else
      {
        v21 = *v8;
        BYTE1(v21) = BYTE1(*v8) & 0xF0 | 3;
        *v8 = v21;
      }
      *v13 = result[16];
      v13[1] = result[17];
      return result;
  }
}

// 0x455dc0  __handle_exc
// Documented as crt/crt in doc/functions.md.
BOOL __cdecl _handle_exc(char a1, unsigned int *a2, __int16 a3)
{
  char v3; // al
  int v4; // esi
  unsigned int v5; // eax
  BOOL v6; // esi
  unsigned int v7; // ecx
  unsigned int v8; // edx
  int v9; // ecx
  BOOL v10; // edx
  int v11; // eax
  int v13; // [esp+14h] [ebp-Ch] BYREF
  double v14; // [esp+18h] [ebp-8h]

  v3 = a1;
  v4 = a1 & 0x1F;
  if ( (a1 & 8) != 0 && (a3 & 1) != 0 )
  {
    _set_statfp(1);
    v3 = a1;
    v4 = a1 & 0x17;
  }
  else if ( (a1 & 4) != 0 && (a3 & 4) != 0 )
  {
    _set_statfp(4);
    v3 = a1;
    v4 = a1 & 0x1B;
  }
  else
  {
    if ( (a1 & 1) != 0 && (a3 & 8) != 0 )
    {
      _set_statfp(8);
      v5 = a3 & 0xC00;
      if ( v5 > 0x400 )
      {
        if ( v5 == 2048 )
        {
          if ( *(double *)a2 > 0.0 )
          {
            *(double *)a2 = Number;
            v3 = a1;
            v4 = a1 & 0x1E;
            goto LABEL_50;
          }
          v14 = -dbl_4B0CD0;
          *(double *)a2 = v14;
        }
        else if ( v5 == 3072 )
        {
          if ( *(double *)a2 <= 0.0 )
          {
            v14 = -dbl_4B0CD0;
            *(double *)a2 = v14;
          }
          else
          {
            *(double *)a2 = dbl_4B0CD0;
          }
          v3 = a1;
          v4 = a1 & 0x1E;
          goto LABEL_50;
        }
      }
      else
      {
        if ( v5 == 1024 )
        {
          if ( *(double *)a2 <= 0.0 )
          {
            v14 = -Number;
            *(double *)a2 = v14;
          }
          else
          {
            *(double *)a2 = dbl_4B0CD0;
          }
          v3 = a1;
          v4 = a1 & 0x1E;
          goto LABEL_50;
        }
        if ( (a3 & 0xC00) == 0 )
        {
          if ( *(double *)a2 <= 0.0 )
          {
            v14 = -Number;
            *(double *)a2 = v14;
          }
          else
          {
            *(double *)a2 = Number;
          }
          v3 = a1;
          v4 = a1 & 0x1E;
          goto LABEL_50;
        }
      }
      v3 = a1;
      v4 = a1 & 0x1E;
      goto LABEL_50;
    }
    if ( (a1 & 2) != 0 && (a3 & 0x10) != 0 )
    {
      v6 = (a1 & 0x10) != 0;
      v7 = *a2;
      v8 = a2[1];
      LODWORD(v14) = *a2;
      HIDWORD(v14) = v8;
      if ( v14 == 0.0 )
      {
        v6 = true;
      }
      else
      {
        v14 = _decomp(COERCE_DOUBLE(__PAIR64__(v8, v7)), &v13);
        v9 = v13 - 1536;
        if ( v13 - 1536 >= -1074 )
        {
          v10 = v14 < 0.0;
          HIWORD(v14) = BYTE6(v14) & 0xF | 0x10;
          if ( v9 < -1021 )
          {
            v11 = -1021 - v9;
            do
            {
              if ( (LOBYTE(v14) & 1) != 0 && !v6 )
                v6 = true;
              LODWORD(v14) >>= 1;
              if ( (BYTE4(v14) & 1) != 0 )
                LODWORD(v14) |= 0x80000000;
              --v11;
              HIDWORD(v14) >>= 1;
            }
            while ( v11 != 0 );
          }
          if ( v10 )
            v14 = -v14;
          *(double *)a2 = v14;
        }
        else
        {
          v6 = true;
          *a2 = 0;
          v14 = 0.0;
          a2[1] = 0;
        }
      }
      if ( v6 )
        _set_statfp(16);
      v3 = a1;
      v4 = a1 & 0x1D;
    }
  }
LABEL_50:
  if ( (v3 & 0x10) != 0 && (a3 & 0x20) != 0 )
  {
    _set_statfp(32);
    v4 &= ~0x10u;
  }
  return v4 == 0;
}

// 0x4560f0  __umatherr
// Documented as crt/crt in doc/functions.md.
double __cdecl _umatherr(int Value, int a2, int a3, int a4, int a5, int a6, double a7, int a8)
{
  if ( _get_fname(a2) != 0 )
  {
    _ctrlfp(a8, 0xFFFF);
    if ( PadInfoMode() == 0 )
      _set_errno(Value);
    return a7;
  }
  else
  {
    _ctrlfp(a8, 0xFFFF);
    _set_errno(Value);
    return a7;
  }
}

// 0x4561a0  __set_errno
// Documented as crt/crt in doc/functions.md.
errno_t __cdecl _set_errno(int Value)
{
  errno_t result; // eax

  result = Value;
  if ( Value == 1 )
  {
    dword_4B1E14 = 33;
  }
  else if ( Value > 1 && Value <= 3 )
  {
    dword_4B1E14 = 34;
  }
  return result;
}

// 0x4561d0  __get_fname
// Documented as crt/crt in doc/functions.md.
int __cdecl _get_fname(int a1)
{
  int v1; // ecx
  _DWORD *v2; // eax

  v1 = 0;
  v2 = &unk_4B0CE8;
  while ( *v2 != a1 )
  {
    v2 += 2;
    ++v1;
    if ( (int)v2 >= (int)&tbyte_4B0DC0 )
      return 0;
  }
  return (int)*(&off_4B0CEC + 2 * v1);
}

// 0x456200  __errcode
// Documented as crt/crt in doc/functions.md.
int __cdecl _errcode(char a1)
{
  if ( (a1 & 0x20) != 0 )
    return 5;
  if ( (a1 & 8) != 0 )
    return 1;
  if ( (a1 & 4) != 0 )
    return 2;
  if ( (a1 & 1) != 0 )
    return 3;
  return 2 * (a1 & 2);
}

// 0x456240  __statfp
// Documented as crt/crt in doc/functions.md.
int __usercall _statfp/*@<eax>*/(__int16 a1/*@<fpstat>*/)
{
  return a1;
}

// 0x456250  __clrfp
// Documented as crt/crt in doc/functions.md.
int __usercall _clrfp/*@<eax>*/(__int16 a1/*@<fpstat>*/)
{
  __asm { fnclex }
  return a1;
}

// 0x456270  __ctrlfp
// Documented as crt/crt in doc/functions.md.
int __fastcall _ctrlfp(__int16 a1)
{
  return a1;
}

// 0x4562a0  __set_statfp
// Documented as crt/crt in doc/functions.md.
void _set_statfp()
{
  ;
}

// 0x456311  __fFEXP
// Documented as crt/crt in doc/functions.md.
void __usercall _fFEXP(__int16 a1/*@<cx>*/, int a2/*@<ebp>*/, double a3/*@<st0>*/)
{
  double v3; // st7

  *(_BYTE *)(a2 - 144) = -2;
  HIBYTE(a1) = 0;
  v3 = a3 * 1.442695040888963407;
  _ffexpm1(a1);
  if ( (*(_BYTE *)(a2 - 159) & 1) != 0 && dword_4B1E10 == 1 )
    unknown_libname_14(v3);
  JUMPOUT(0x456608);
}

// 0x456432  _expbigret
// Documented as crt/crt in doc/functions.md.
void expbigret()
{
  ;
}

// 0x456451  _rtforexpinf
// Documented as crt/crt in doc/functions.md.
double __fastcall rtforexpinf(char a1)
{
  if ( a1 != 0 )
    JUMPOUT(0x456616);
  return *(double *)&tbyte_4B0DE0;
}

// 0x45645e  __ffexpm1
// Documented as crt/crt in doc/functions.md.
// positive sp value has been detected, the output may be wrong!
void __usercall _ffexpm1(int a1/*@<ebp>*/, long double a2/*@<st0>*/)
{
  bool v2; // c0
  char v3; // c2
  bool v4; // c3
  double v5; // st6
  __int16 v6; // fps
  bool v7; // c0
  char v8; // c2
  bool v9; // c3
  __int16 v10; // fps
  long double v11; // st6
  bool v12; // c0
  char v13; // c2
  bool v14; // c3
  __int16 v15; // fps
  long double v16; // st6
  bool v17; // c0
  char v18; // c2
  bool v19; // c3

  v5 = fabs(a2);
  v7 = *(double *)&tbyte_4B0DFE < v5;
  v8 = 0;
  v9 = *(double *)&tbyte_4B0DFE == v5;
  *(_WORD *)(a1 - 160) = v6;
  if ( (*(_BYTE *)(a1 - 159) & 0x41) != 0 )
  {
    v2 = a2 < 0.0;
    v3 = 0;
    v4 = a2 == 0.0;
    *(_WORD *)(a1 - 160) = v6;
    if ( (*(_BYTE *)(a1 - 159) & 1) != 0 )
    {
      *(_BYTE *)(a1 - 144) = 4;
      JUMPOUT(0x456616);
    }
    expbigret();
  }
  else
  {
    v11 = rint(a2);
    v12 = v11 < 0.0;
    v13 = 0;
    v14 = v11 == 0.0;
    *(_WORD *)(a1 - 160) = v10;
    v16 = a2 - v11;
    v17 = v16 < 0.0;
    v18 = 0;
    v19 = v16 == 0.0;
    *(_WORD *)(a1 - 160) = v15;
  }
}

// 0x4564a1  _isintTOS
// Documented as crt/crt in doc/functions.md.
int __usercall isintTOS/*@<eax>*/(long double a1/*@<st0>*/)
{
  if ( rint(a1) != a1 )
    return notanint();
  if ( rint(a1 * dbl_4B0E12) == a1 * dbl_4B0E12 )
    return evenint();
  return isintTOSret();
}

// 0x4564c6  _isintTOSret
// Documented as crt/crt in doc/functions.md.
void isintTOSret()
{
  ;
}

// 0x4564d5  _usepowhlp
// Documented as crt/crt in doc/functions.md.
double __usercall usepowhlp/*@<st0>*/(int a1/*@<ebp>*/, double X/*@<st1>*/, double a3/*@<st0>*/)
{
  int v4; // eax
  double result; // st7
  double *v6; // [esp+10h] [ebp-7Ch]
  double v7[15]; // [esp+14h] [ebp-78h] BYREF

  _ESI = v7;
  v6 = v7;
  __asm { fsave   byte ptr [esi+8] }
  v4 = _powhlp(a3, X, (int)v7);
  __asm { frstor  byte ptr [esi+8] }
  result = v7[0];
  if ( v4 != 0 )
    *(_BYTE *)(a1 - 144) = 1;
  return result;
}

// 0x4566e0  __startTwoArgErrorHandling
// Documented as crt/crt in doc/functions.md.
void _startTwoArgErrorHandling()
{
  JUMPOUT(0x456700);
}

// 0x4566f7  __startOneArgErrorHandling
// Documented as crt/crt in doc/functions.md.
double __usercall _startOneArgErrorHandling/*@<st0>*/(
        int a1/*@<eax>*/,
        int a2/*@<edx>*/,
        int a3/*@<ecx>*/,
        double a4/*@<st0>*/,
        __int16 a5,
        int a6,
        int a7,
        int a8)
{
  _DWORD v9[6]; // [esp+0h] [ebp-20h] BYREF
  double v10; // [esp+18h] [ebp-8h]

  v9[0] = a1;
  v10 = a4;
  v9[1] = a3;
  v9[2] = a7;
  v9[3] = a8;
  _87except(a2, v9, &a5);
  return v10;
}

// 0x456740  __twoToTOS
// Documented as crt/crt in doc/functions.md.
long double __usercall _twoToTOS/*@<st0>*/(long double a1/*@<st0>*/)
{
  long double v1; // rt0

  v1 = rint(a1);
  return __FSCALE__(__F2XM1__(-(v1 - a1)) + 1.0, v1);
}

// 0x456755  __load_CW
// Documented as crt/crt in doc/functions.md.
void _load_CW()
{
  ;
}

// 0x45676c  __convertTOStoQNaN
// Documented as crt/crt in doc/functions.md.
double __usercall _convertTOStoQNaN/*@<st0>*/(int a1/*@<eax>*/, double result/*@<st0>*/)
{
  if ( (a1 & 0x80000) == 0 )
    return result + 1.0;
  return result;
}

// 0x456785  __fload_withFB
// Documented as crt/crt in doc/functions.md.
double __fastcall _fload_withFB(int a1, _DWORD *a2)
{
  double result; // st7

  if ( (a2[1] & 0x7FF00000) != 0x7FF00000 )
    return *(double *)a2;
  *(_QWORD *)&result = *(_QWORD *)a2 << 11;
  return result;
}

// 0x4567c8  __checkTOS_withFB
// Documented as crt/crt in doc/functions.md.
int __cdecl _checkTOS_withFB(int a1, int a2)
{
  int result; // eax

  result = a2 & 0x7FF00000;
  if ( (a2 & 0x7FF00000) == 0x7FF00000 )
    return a2;
  return result;
}

// 0x456815  __check_overflow_exit
// Documented as crt/crt in doc/functions.md.
void _check_overflow_exit()
{
  JUMPOUT(0x45683D);
}

// 0x4568d0  __powhlp
// Documented as crt/crt in doc/functions.md.
int __cdecl _powhlp(double a1, double X, int a3)
{
  int v3; // edx
  int v4; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // ecx

  v3 = HIDWORD(a1);
  v4 = LODWORD(a1);
  if ( a1 < 0.0 )
    a1 = -a1;
  if ( X == INFINITY )
  {
    if ( a1 > 1.0 )
    {
      *(double *)a3 = Number;
      return 0;
    }
    if ( a1 < 1.0 )
    {
      *(_DWORD *)a3 = 0;
      *(_DWORD *)(a3 + 4) = 0;
      return 0;
    }
LABEL_13:
    *(_DWORD *)a3 = dword_4B0CC8;
    *(_DWORD *)(a3 + 4) = dword_4B0CCC;
    return 1;
  }
  if ( X == -INFINITY )
  {
    if ( a1 > 1.0 )
    {
      *(_DWORD *)a3 = 0;
      *(_DWORD *)(a3 + 4) = 0;
      return 0;
    }
    if ( a1 < 1.0 )
    {
      *(double *)a3 = Number;
      return 0;
    }
    goto LABEL_13;
  }
  if ( v3 == 2146435072 && v4 == 0 )
  {
    if ( X > 0.0 )
    {
      *(double *)a3 = Number;
      return 0;
    }
    v6 = a3;
    *(_DWORD *)a3 = 0;
    if ( X < 0.0 )
    {
      *(_DWORD *)(a3 + 4) = 0;
      return 0;
    }
    goto LABEL_33;
  }
  if ( v3 != -1048576 || v4 != 0 )
    return 0;
  v7 = _d_inttype(X);
  if ( X <= 0.0 )
  {
    if ( X >= 0.0 )
    {
      v6 = a3;
      *(_DWORD *)a3 = 0;
LABEL_33:
      *(_DWORD *)(v6 + 4) = 1072693248;
      return 0;
    }
    if ( v7 == 1 )
    {
      v8 = dword_4B0CE4;
      *(_DWORD *)a3 = dword_4B0CE0;
      *(_DWORD *)(a3 + 4) = v8;
    }
    else
    {
      *(_DWORD *)a3 = 0;
      *(_DWORD *)(a3 + 4) = 0;
    }
    return 0;
  }
  else
  {
    if ( v7 == 1 )
      *(double *)a3 = -Number;
    else
      *(double *)a3 = Number;
    return 0;
  }
}

// 0x456b00  __d_inttype
// Documented as crt/crt in doc/functions.md.
int __usercall _d_inttype/*@<eax>*/(double a1/*@<st0>*/, double X)
{
  if ( (_fpclass(X) & 0x90) != 0 )
    return 0;
  _frnd(X);
  if ( a1 != X )
    return 0;
  _frnd(X / 2.0);
  return 2;
}

// 0x456b90  __frnd
// Documented as crt/crt in doc/functions.md.
long double __cdecl _frnd(long double a1)
{
  return rint(a1);
}

// 0x456bb0  __isatty
// Documented as crt/crt in doc/functions.md.
int __cdecl _isatty(int FileHandle)
{
  if ( FileHandle < uNumber )
    return *(_BYTE *)(dword_9CA9E0[FileHandle >> 5] + 8 * (FileHandle & 0x1F) + 4) & 0x40;
  else
    return 0;
}

// 0x456be0  _calloc
// Documented as crt/crt in doc/functions.md.
void *__cdecl calloc(size_t Count, size_t Size)
{
  SIZE_T v2; // esi
  void *v3; // edx
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
    v3 = NULL;
    if ( v2 <= 0xFFFFFFE0 )
    {
      if ( v2 <= dword_4B0904 )
      {
        v3 = __sbh_alloc_block(v2 >> 4);
        if ( v3 == NULL )
        {
LABEL_10:
          v3 = HeapAlloc(/*hHeap*/ hHeap, /*dwFlags*/ 8u, /*dwBytes*/ v2);
          goto LABEL_11;
        }
        memset(v3, 0, v2);
      }
      if ( v3 != NULL )
        return v3;
      goto LABEL_10;
    }
LABEL_11:
    if ( v3 != NULL || dword_4B1E70 == 0 )
      return v3;
    result = (void *)_callnewh(/*Size*/ v2);
    if ( result == NULL )
      return result;
  }
}

// 0x456c80  __fcloseall
// Documented as crt/crt in doc/functions.md.
int __cdecl _fcloseall()
{
  int v0; // esi
  int i; // edi
  int v2; // eax

  v0 = 3;
  for ( i = 0; v0 < (int)Count; ++v0 )
  {
    v2 = *(_DWORD *)(dword_9CAAEC + 4 * v0);
    if ( v2 != 0 )
    {
      if ( (*(_BYTE *)(v2 + 12) & 0x83) != 0 && fclose(/*Stream*/ *(FILE **)(dword_9CAAEC + 4 * v0)) != -1 )
        ++i;
      if ( v0 >= 20 )
      {
        free(/*Block*/ *(void **)(dword_9CAAEC + 4 * v0));
        *(_DWORD *)(dword_9CAAEC + 4 * v0) = 0;
      }
    }
  }
  return i;
}

// 0x456cf0  __aulldiv
// Documented as crt/crt in doc/functions.md.
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

// 0x456d60  __aullrem
// Documented as crt/crt in doc/functions.md.
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

// 0x456de0  __XcptFilter
// Documented as crt/crt in doc/functions.md.
LONG __cdecl _XcptFilter(int a1, struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  int *v2; // eax
  void (__cdecl *v3)(int, int); // ebx
  int v5; // ebp
  int v6; // edx
  _DWORD *v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // esi
  int v11; // [esp-4h] [ebp-10h]

  v2 = (int *)xcptlookup(a1);
  if ( v2 == NULL )
    return UnhandledExceptionFilter(ExceptionInfo);
  v3 = (void (__cdecl *)(int, int))v2[2];
  if ( v3 == NULL )
    return UnhandledExceptionFilter(ExceptionInfo);
  if ( v3 == (void (__cdecl *)(int, int))5 )
  {
    v2[2] = 0;
    return 1;
  }
  if ( v3 == (void (__cdecl *)(int, int))1 )
    return -1;
  v5 = dword_4B1E98;
  dword_4B1E98 = (int)ExceptionInfo;
  if ( v2[1] == 8 )
  {
    if ( dword_4B0EF8 < dword_4B0EF8 + dword_4B0EFC )
    {
      v6 = dword_4B0EFC;
      v7 = (_DWORD *)((char *)&unk_4B0E88 + 12 * dword_4B0EF8);
      do
      {
        *v7 = 0;
        v7 += 3;
        --v6;
      }
      while ( v6 != 0 );
    }
    v8 = *v2;
    v9 = dword_4B0F04;
    v10 = dword_4B0F04;
    switch ( v8 )
    {
      case -1073741682:
        v9 = 131;
        break;
      case -1073741680:
        v9 = 129;
        break;
      case -1073741679:
        v9 = 132;
        break;
      case -1073741677:
        v9 = 133;
        break;
      case -1073741683:
        v9 = 130;
        break;
      case -1073741681:
        v9 = 134;
        break;
      case -1073741678:
        v9 = 138;
        break;
      default:
LABEL_26:
        v3(8, v9);
        dword_4B0F04 = v10;
        dword_4B1E98 = v5;
        return -1;
    }
    dword_4B0F04 = v9;
    goto LABEL_26;
  }
  v11 = v2[1];
  v2[2] = 0;
  ((void (__cdecl *)(int))v3)(v11);
  dword_4B1E98 = v5;
  return -1;
}

// 0x456f20  _xcptlookup
// Documented as crt/crt in doc/functions.md.
int *__cdecl xcptlookup(int a1)
{
  int *result; // eax

  result = dword_4B0E80;
  if ( dword_4B0E80[0] != a1 )
  {
    do
      result += 3;
    while ( result < &dword_4B0E80[3 * dword_4B0F00] && *result != a1 );
  }
  if ( result >= &dword_4B0E80[3 * dword_4B0F00] || *result != a1 )
    return NULL;
  return result;
}

// 0x456f70  __ismbblead
// Documented as crt/crt in doc/functions.md.
int __cdecl _ismbblead(unsigned int Ch)
{
  return x_ismbbtype(Ch, 0, 4);
}

// 0x456f90  _x_ismbbtype
// Documented as crt/crt in doc/functions.md.
int __cdecl x_ismbbtype(unsigned __int8 a1, int a2, unsigned __int8 a3)
{
  int result; // eax

  if ( (a3 & (unsigned __int8)byte_4B1FB1[a1]) != 0 )
    return 1;
  result = a2 != 0 ? (unsigned __int16)(a2 & _ctype[a1 + 1]) : 0;
  if ( result != 0 )
    return 1;
  return result;
}

// 0x456fd0  __setenvp
// Documented as crt/crt in doc/functions.md.
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

  v0 = (const char *)dword_4B1E64;
  v1 = *(_BYTE *)dword_4B1E64;
  for ( i = 0; v1 != 0; v0 += v3 )
  {
    if ( v1 != 61 )
      ++i;
    v3 = strlen(v0) + 1;
    v1 = v0[v3];
  }
  v4 = (char **)malloc(/*Size*/ 4 * i + 4);
  v9 = v4;
  dword_4B1E3C = (int)v4;
  if ( v4 == NULL )
    _amsg_exit(9);
  v5 = (const char *)dword_4B1E64;
  for ( j = *(_BYTE *)dword_4B1E64; j != 0; v5 += v7 )
  {
    v7 = strlen(v5) + 1;
    if ( j != 61 )
    {
      v8 = (char *)malloc(/*Size*/ v7);
      *v4 = v8;
      if ( v8 == NULL )
        _amsg_exit(9);
      strcpy(*v9++, v5);
      v4 = v9;
    }
    j = v5[v7];
  }
  free(/*Block*/ dword_4B1E64);
  dword_4B1E64 = NULL;
  *v4 = NULL;
}

// 0x4570c0  __setargv
// Documented as crt/crt in doc/functions.md.
int _setargv()
{
  CHAR *v0; // edi
  char *v1; // esi
  int v3; // [esp+8h] [ebp-8h] BYREF
  int v4; // [esp+Ch] [ebp-4h] BYREF

  GetModuleFileNameA(/*hModule*/ NULL, /*lpFilename*/ Filename, /*nSize*/ 0x104u);
  v0 = (CHAR *)dword_9CAAE8;
  dword_4B1E4C = (int)Filename;
  if ( *(_BYTE *)dword_9CAAE8 == 0 )
    v0 = Filename;
  parse_cmdline(v0, 0, 0, &v3, &v4);
  v1 = (char *)malloc(/*Size*/ v4 + 4 * v3);
  if ( v1 == NULL )
    _amsg_exit(8);
  parse_cmdline(v0, v1, &v1[4 * v3], &v3, &v4);
  dword_4B1E34 = (int)v1;
  dword_4B1E30 = v3 - 1;
  return v3 - 1;
}

// 0x457160  _parse_cmdline
// Documented as crt/crt in doc/functions.md.
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
  if ( a2 != NULL )
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
      if ( (byte_4B1FB1[v9] & 4) != 0 )
      {
        ++*a5;
        if ( v6 != NULL )
          *v6++ = *i++;
      }
      ++*a5;
      if ( v6 != NULL )
        *v6++ = *i;
    }
    ++*a5;
    if ( v6 != NULL )
      *v6++ = 0;
    if ( *i == 34 )
      ++i;
  }
  else
  {
    do
    {
      ++*a5;
      if ( v6 != NULL )
        *v6++ = *i;
      v10 = *i++;
      if ( (byte_4B1FB1[v10] & 4) != 0 )
      {
        ++*a5;
        if ( v6 != NULL )
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
    if ( v6 != NULL )
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
      if ( v5 != NULL )
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
              if ( v6 != NULL )
                *v6++ = 92;
              --v17;
              ++*a5;
            }
            while ( v17 != 0 );
          }
          v18 = *i;
          if ( *i == 0 || !v11 && (v18 == 32 || v18 == 9) )
          {
            if ( v6 != NULL )
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
        if ( v6 == NULL )
        {
          if ( (byte_4B1FB1[*i] & 4) != 0 )
          {
            ++i;
            ++*a5;
          }
          ++*a5;
          goto LABEL_65;
        }
        if ( (byte_4B1FB1[v18] & 4) != 0 )
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
  if ( v5 != NULL )
    *v5 = NULL;
  ++*a4;
  return a4;
}

// 0x457370  ___crtGetEnvironmentStringsA
// Documented as crt/crt in doc/functions.md.
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

  v0 = dword_4B1FA8;
  EnvironmentStringsW = NULL;
  EnvironmentStrings = NULL;
  if ( dword_4B1FA8 == 0 )
  {
    EnvironmentStringsW = GetEnvironmentStringsW();
    if ( EnvironmentStringsW != NULL )
    {
      v0 = 1;
    }
    else
    {
      EnvironmentStrings = GetEnvironmentStrings();
      if ( EnvironmentStrings == NULL )
        return NULL;
      v0 = 2;
    }
    dword_4B1FA8 = v0;
  }
  if ( v0 == 1 )
  {
    if ( EnvironmentStringsW != NULL || (EnvironmentStringsW = GetEnvironmentStringsW()) != NULL )
    {
      for ( i = EnvironmentStringsW; *i != 0; ++i )
      {
        do
          ++i;
        while ( *i != 0 );
      }
      v4 = i - EnvironmentStringsW + 1;
      v5 = WideCharToMultiByte(
             /*CodePage*/ 0,
             /*dwFlags*/ 0,
             /*lpWideCharStr*/ EnvironmentStringsW,
             /*cchWideChar*/ v4,
             /*lpMultiByteStr*/ NULL,
             /*cbMultiByte*/ 0,
             /*lpDefaultChar*/ NULL,
             /*lpUsedDefaultChar*/ NULL);
      v6 = v5;
      if ( v5 != 0 && (v7 = (CHAR *)malloc(/*Size*/ v5), v8 = v7, v7 != NULL) )
      {
        if ( WideCharToMultiByte(
               /*CodePage*/ 0,
               /*dwFlags*/ 0,
               /*lpWideCharStr*/ EnvironmentStringsW,
               /*cchWideChar*/ v4,
               /*lpMultiByteStr*/ v7,
               /*cbMultiByte*/ v6,
               /*lpDefaultChar*/ NULL,
               /*lpUsedDefaultChar*/ NULL) == 0 )
        {
          free(/*Block*/ v8);
          v8 = NULL;
        }
        FreeEnvironmentStringsW(/*penv*/ EnvironmentStringsW);
        return v8;
      }
      else
      {
        FreeEnvironmentStringsW(/*penv*/ EnvironmentStringsW);
        return NULL;
      }
    }
    return NULL;
  }
  if ( v0 != 2 )
    return NULL;
  if ( EnvironmentStrings == NULL )
  {
    EnvironmentStrings = GetEnvironmentStrings();
    if ( EnvironmentStrings == NULL )
      return NULL;
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
  v14 = malloc(/*Size*/ v13);
  if ( v14 != NULL )
  {
    qmemcpy(v14, EnvironmentStrings, v13);
    FreeEnvironmentStringsA(/*penv*/ EnvironmentStrings);
    return (CHAR *)v14;
  }
  else
  {
    FreeEnvironmentStringsA(/*penv*/ EnvironmentStrings);
    return NULL;
  }
}

// 0x4574d0  __setmbcp
// Documented as crt/crt in doc/functions.md.
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

  SystemCP = getSystemCP(CodePage);
  CodePagea = SystemCP;
  if ( SystemCP == dword_4B20B4 )
    return 0;
  if ( SystemCP != 0 )
  {
    v3 = 0;
    v4 = &unk_4B0F10;
    while ( *v4 != SystemCP )
    {
      v4 += 12;
      ++v3;
      if ( v4 >= dword_4B1000 )
      {
        if ( GetCPInfo(/*CodePage*/ SystemCP, /*lpCPInfo*/ &CPInfo) )
        {
          memset(&unk_4B1FB0, 0, 0x100u);
          unk_4B20B0 = 0;
          if ( CPInfo.MaxCharSize <= 1 )
          {
            dword_4B20B4 = 0;
            Locale = 0;
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
                  byte_4B1FB1[i] |= 4u;
                v8 = v5[1];
                v5 += 2;
              }
              while ( v8 != 0 );
            }
            for ( j = 1; j < 0xFF; ++j )
              byte_4B1FB1[j] |= 8u;
            dword_4B20B4 = SystemCP;
            Locale = CPtoLCID(SystemCP);
          }
          dword_4B20C0 = 0;
          dword_4B20C4 = 0;
          dword_4B20C8 = 0;
          return 0;
        }
        else if ( dword_4B20CC != 0 )
        {
          setSBCS();
          return 0;
        }
        else
        {
          return -1;
        }
      }
    }
    memset(&unk_4B1FB0, 0, 0x100u);
    unk_4B20B0 = 0;
    v10 = 0;
    v11 = 12 * v3;
    v12 = (unsigned __int8 *)&unk_4B0F20 + 48 * v3;
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
            v16 = byte_4B0F08[v10];
            do
              byte_4B1FB1[v15++] |= v16;
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
    dword_4B20B4 = CodePagea;
    v18 = CPtoLCID(CodePagea);
    v19 = dword_4B0F14[v11];
    v20 = dword_4B0F18[v11];
    Locale = v18;
    dword_4B20C0 = v19;
    v21 = dword_4B0F14[v11 + 2];
    dword_4B20C4 = v20;
    dword_4B20C8 = v21;
    return 0;
  }
  else
  {
    setSBCS();
    return 0;
  }
}

// 0x4576c0  _getSystemCP
// Documented as crt/crt in doc/functions.md.
UINT __cdecl getSystemCP(UINT a1)
{
  UINT result; // eax

  result = a1;
  dword_4B20CC = 0;
  switch ( a1 )
  {
    case 0xFFFFFFFE:
      dword_4B20CC = 1;
      return GetOEMCP();
    case 0xFFFFFFFD:
      dword_4B20CC = 1;
      return GetACP();
    case 0xFFFFFFFC:
      dword_4B20CC = 1;
      return CodePage;
    default:
      break;
  }
  return result;
}

// 0x457710  _CPtoLCID
// Documented as crt/crt in doc/functions.md.
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

// 0x457770  _setSBCS
// Documented as crt/crt in doc/functions.md.
int setSBCS()
{
  memset(&unk_4B1FB0, 0, 0x100u);
  unk_4B20B0 = 0;
  dword_4B20B4 = 0;
  Locale = 0;
  dword_4B20C0 = 0;
  dword_4B20C4 = 0;
  dword_4B20C8 = 0;
  return 0;
}

// 0x4577a0  ___initmbctable
// Documented as crt/crt in doc/functions.md.
int __initmbctable()
{
  return _setmbcp(/*CodePage*/ -3);
}

// 0x4577b0  __global_unwind2
// Documented as crt/crt in doc/functions.md.
void __cdecl _global_unwind2(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, /*TargetIp*/ &gu_return, /*ExceptionRecord*/ NULL, /*ReturnValue*/ NULL);
}

// 0x4577d0  __unwind_handler
// Documented as crt/crt in doc/functions.md.
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

// 0x4577f2  __local_unwind2
// Documented as crt/crt in doc/functions.md.
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
      _NLG_Notify(257);
      (*(void (__cdecl **)(struct _EXCEPTION_REGISTRATION_RECORD *, int (__cdecl *)(int, int, int, _DWORD *)))(v3 + 4 * v5 + 8))(
        ExceptionList,
        v7);
    }
  }
  return result;
}

// 0x45785a  __abnormal_termination
// Documented as crt/crt in doc/functions.md.
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

// 0x45787d  __NLG_Notify1
// Documented as crt/crt in doc/functions.md.
void __stdcall _NLG_Notify1(int a1)
{
  JUMPOUT(0x457890);
}

// 0x457886  __NLG_Notify
// Documented as crt/crt in doc/functions.md.
int __userpurge _NLG_Notify/*@<eax>*/(int result/*@<eax>*/, int a2/*@<ebp>*/, int a3)
{
  dword_4B1000[2] = *(_DWORD *)(a2 + 8);
  dword_4B1000[1] = result;
  dword_4B1000[3] = a2;
  return result;
}

// 0x4578a8  __except_handler3
// Documented as crt/crt in doc/functions.md.
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
    _local_unwind2((int)TargetFrame, -1);
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
          _global_unwind2(/*TargetFrame*/ (PVOID)v3[3]);
          v3 = v4 + 4;
          _local_unwind2((int)v4, v5);
          _NLG_Notify(/*result*/ *(_DWORD *)(v8 + 12 * v5 + 8), (int)(v4 + 4), 1);
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

// 0x457965  __seh_longjmp_unwind_4
// IDA symbol: __seh_longjmp_unwind@4
// Documented as crt/crt in doc/functions.md.
int __stdcall _seh_longjmp_unwind(int a1)
{
  return _local_unwind2(*(_DWORD *)(a1 + 24), *(_DWORD *)(a1 + 28));
}

// 0x457980  __FF_MSGBANNER
// Documented as crt/crt in doc/functions.md.
int _FF_MSGBANNER()
{
  int result; // eax

  result = dword_4B1E6C;
  if ( dword_4B1E6C == 1 || dword_4B1E6C == 0 && dword_4AE8D4 == 1 )
  {
    _NMSG_WRITE(252);
    if ( dword_4B20D0 != NULL )
      dword_4B20D0();
    return _NMSG_WRITE(255);
  }
  return result;
}

// 0x4579c0  __NMSG_WRITE
// Documented as crt/crt in doc/functions.md.
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

  result = dword_4B1010;
  v2 = 0;
  do
  {
    if ( a1 == *result )
      break;
    result += 2;
    ++v2;
  }
  while ( result < dword_4B10A0 );
  if ( a1 == dword_4B1010[2 * v2] )
  {
    result = (int *)dword_4B1E6C;
    if ( dword_4B1E6C == 1 || dword_4B1E6C == 0 && dword_4AE8D4 == 1 )
    {
      if ( dword_9CA9E0[0] == 0 || (StdHandle = *(HANDLE *)(dword_9CA9E0[0] + 16)) == (HANDLE)-1 )
        StdHandle = GetStdHandle(/*nStdHandle*/ 0xFFFFFFF4);
      return (int *)WriteFile(
                      /*hFile*/ StdHandle,
                      /*lpBuffer*/ lpBuffer[2 * v2],
                      /*nNumberOfBytesToWrite*/ strlen((const char *)lpBuffer[2 * v2]),
                      /*lpNumberOfBytesWritten*/ &v6[5],
                      /*lpOverlapped*/ NULL);
    }
    else if ( a1 != 252 )
    {
      if ( GetModuleFileNameA(/*hModule*/ NULL, /*lpFilename*/ Filename, /*nSize*/ 0x104u) == 0 )
        strcpy(Filename, "<program name unknown>");
      v3 = Filename;
      if ( strlen(Filename) + 1 > 0x3C )
      {
        v3 = (char *)&v6[31] + strlen(Filename) + 1;
        strncpy(/*Destination*/ v3, /*Source*/ "...", /*Count*/ 3u);
      }
      strcpy(v7, "Runtime Error!\n\nProgram: ");
      strcat(v7, v3);
      v6[0] = 73744;
      v5 = "Microsoft Visual C++ Runtime Library";
      strcat(v7, asc_4AC548);
      strcat(v7, (const char *)lpBuffer[2 * v2]);
      return (int *)__crtMessageBoxA(v7, v5, v6[0]);
    }
  }
  return result;
}

// 0x457ba0  __control87
// Documented as crt/crt in doc/functions.md.
unsigned int __cdecl _control87(unsigned int NewValue, unsigned int Mask)
{
  unsigned int v2; // esi

  v2 = _abstract_cw() & ~Mask | NewValue & Mask;
  _hw_cw(v2);
  return v2;
}

// 0x457be0  __controlfp
// Documented as crt/crt in doc/functions.md.
unsigned int __cdecl _controlfp(unsigned int NewValue, unsigned int Mask)
{
  return _control87(NewValue, /*Mask*/ Mask & 0xFFF7FFFF);
}

// 0x457c00  __abstract_cw
// Documented as crt/crt in doc/functions.md.
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

// 0x457ca0  __hw_cw
// Documented as crt/crt in doc/functions.md.
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

// 0x457d30  _tolower
// Documented as crt/crt in doc/functions.md.
int __cdecl tolower(int C)
{
  int result; // eax
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  unsigned __int16 DestStr[4]; // [esp+4h] [ebp-8h] BYREF

  if ( dword_4B2128 != 0 )
  {
    v2 = C;
    if ( C >= 256
      || ((int)SrcSizeInBytes <= 1 ? (v3 = *((_BYTE *)off_4B0A98 + 2 * C) & 1) : (v3 = _isctype(C, /*Type*/ 1)), v3 != 0) )
    {
      if ( *((char *)off_4B0A98 + 2 * BYTE1(v2) + 1) >= 0 )
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
             /*Locale*/ dword_4B2128,
             /*dwMapFlags*/ 0x100u,
             /*lpSrcStr*/ (LPCSTR)&C,
             /*lpWideCharStr*/ (LPCWCH)v4,
             /*lpDestStr*/ (LPSTR)DestStr,
             /*cchDest*/ 3,
             /*CodePage*/ 0);
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

// 0x457e30  __ZeroTail
// Documented as crt/crt in doc/functions.md.
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

// 0x457ea0  __IncMan
// Documented as crt/crt in doc/functions.md.
int __cdecl _IncMan(int a1, int a2)
{
  int result; // eax
  int v3; // esi
  _DWORD *v4; // edi

  result = __addl(*(_DWORD *)(a1 + 4 * (a2 / 32)), 1 << (31 - a2 % 32), a1 + 4 * (a2 / 32));
  v3 = a2 / 32 - 1;
  if ( v3 >= 0 )
  {
    v4 = (_DWORD *)(a1 + 4 * v3);
    do
    {
      if ( result == 0 )
        break;
      result = __addl(*v4, 1, v4);
      --v3;
      --v4;
    }
    while ( v3 >= 0 );
  }
  return result;
}

// 0x457f10  __RoundMan
// Documented as crt/crt in doc/functions.md.
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
  if ( ((1 << v2) & *(_DWORD *)(a1 + 4 * v3)) == 0 || _ZeroTail(a1, v7 + 2) != 0 )
    v4 = 0;
  else
    v4 = _IncMan(a1, v7);
  *(_DWORD *)(a1 + 4 * v3) &= -1 << v2;
  v5 = v3 + 1;
  if ( v5 < 3 )
    memset((void *)(a1 + 4 * v5), 0, 4 * (3 - v5));
  return v4;
}

// 0x457fb0  __CopyMan
// Documented as crt/crt in doc/functions.md.
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

// 0x457fd0  __FillZeroMan
// Documented as crt/crt in doc/functions.md.
int __cdecl _FillZeroMan(_DWORD *a1)
{
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  return 0;
}

// 0x457fe0  __IsZeroMan
// Documented as crt/crt in doc/functions.md.
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

// 0x458000  __ShrMan
// Documented as crt/crt in doc/functions.md.
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

// 0x4580c0  __ld12cvt
// Documented as crt/crt in doc/functions.md.
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
    if ( _IsZeroMan(&v17) == 0 )
    {
      _FillZeroMan(&v17);
      result = 2;
      goto LABEL_14;
    }
  }
  else
  {
    _CopyMan((int)v20, &v17);
    if ( _RoundMan((int)&v17, a3[2]) != 0 )
      ++v6;
    v10 = a3[1];
    if ( v6 < v10 - a3[2] )
    {
      _FillZeroMan(&v17);
      v8 = 0;
      result = 2;
      goto LABEL_14;
    }
    if ( v6 <= v10 )
    {
      v11 = v10 - v6;
      _CopyMan((int)&v17, v20);
      _ShrMan(&v17, v11);
      _RoundMan((int)&v17, a3[2]);
      _ShrMan(&v17, a3[3] + 1);
      v8 = 0;
      result = 2;
      goto LABEL_14;
    }
    if ( v6 >= *a3 )
    {
      _FillZeroMan(&v17);
      v15 = a3[3];
      v17 |= 0x80000000;
      _ShrMan(&v17, v15);
      v8 = *a3 + a3[5];
      result = 1;
      goto LABEL_14;
    }
    v8 = v6 + a3[5];
    v16 = a3[3];
    v17 &= ~0x80000000;
    _ShrMan(&v17, v16);
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

// 0x458350  __fptostr
// Documented as crt/crt in doc/functions.md.
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

// 0x4583f0  __fltout
// Documented as crt/crt in doc/functions.md.
int *__cdecl _fltout(char a1)
{
  __int16 v2; // [esp-10h] [ebp-1Ch]
  _DWORD v3[2]; // [esp+0h] [ebp-Ch] BYREF
  __int16 v4; // [esp+8h] [ebp-4h]

  __dtold(v3, &a1);
  v2 = v4;
  dword_4B2100 = _I10_OUTPUT(v3[0], v3[1], v2, 17, 0, &word_4B20D8);
  dword_4B20F8 = byte_4B20DA;
  dword_4B20FC = word_4B20D8;
  dword_4B2104 = (int)&unk_4B20DC;
  return &dword_4B20F8;
}

// 0x458470  ___dtold
// Documented as crt/crt in doc/functions.md.
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

// 0x458530  __fptrap
// Documented as crt/crt in doc/functions.md.
void __noreturn _fptrap()
{
  _amsg_exit(2);
}

// 0x458540  __commit
// Documented as crt/crt in doc/functions.md.
int __cdecl _commit(int FileHandle)
{
  void *osfhandle; // eax
  int result; // eax

  if ( FileHandle >= uNumber || (*(_BYTE *)(dword_9CA9E0[FileHandle >> 5] + 8 * (FileHandle & 0x1F) + 4) & 1) == 0 )
    goto LABEL_8;
  osfhandle = (void *)_get_osfhandle(FileHandle);
  if ( FlushFileBuffers(/*hFile*/ osfhandle) )
    result = 0;
  else
    result = GetLastError();
  if ( result != 0 )
  {
    dword_4B1E18 = result;
LABEL_8:
    dword_4B1E14 = 9;
    return -1;
  }
  return result;
}

// 0x4585a0  _wctomb
// Documented as crt/crt in doc/functions.md.
int __cdecl wctomb(char *MbCh, wchar_t WCh)
{
  int result; // eax
  char *v3; // [esp-10h] [ebp-10h]

  result = (int)MbCh;
  if ( MbCh != NULL )
  {
    if ( dword_4B2128 == 0 )
    {
      if ( WCh <= 0xFFu )
      {
        *MbCh = WCh;
        return 1;
      }
      goto LABEL_7;
    }
    v3 = MbCh;
    MbCh = NULL;
    result = WideCharToMultiByte(
               /*CodePage*/ CodePage,
               /*dwFlags*/ 0x220u,
               /*lpWideCharStr*/ &WCh,
               /*cchWideChar*/ 1,
               /*lpMultiByteStr*/ v3,
               /*cbMultiByte*/ SrcSizeInBytes,
               /*lpDefaultChar*/ NULL,
               /*lpUsedDefaultChar*/ (LPBOOL)&MbCh);
    if ( result == 0 || MbCh != NULL )
    {
LABEL_7:
      dword_4B1E14 = 42;
      return -1;
    }
  }
  return result;
}

// 0x458620  _open
// IDA symbol: __open
// Documented as crt/crt in doc/functions.md.
int _open(const char *FileName, int OpenFlag, ...)
{
  int v3; // [esp+Ch] [ebp+Ch]
  va_list va; // [esp+10h] [ebp+10h] BYREF

  va_start(va, OpenFlag);
  v3 = va_arg(va, _DWORD);
  return _sopen(FileName, OpenFlag, /*ShareFlag*/ 64, v3);
}

// 0x458640  __sopen
// Documented as crt/crt in doc/functions.md.
int _sopen(const char *FileName, int OpenFlag, int ShareFlag, ...)
{
  DWORD v3; // ebx
  unsigned int v4; // eax
  DWORD v5; // ebp
  DWORD v6; // edi
  int result; // eax
  int v8; // esi
  HANDLE v9; // eax
  void *v10; // edi
  DWORD LastError; // eax
  DWORD FileType; // eax
  DWORD v13; // eax
  char v14; // al
  int v15; // edi
  int v16; // ebp
  char v17; // [esp+13h] [ebp-11h]
  DWORD dwDesiredAccess; // [esp+14h] [ebp-10h]
  struct _SECURITY_ATTRIBUTES SecurityAttributes; // [esp+18h] [ebp-Ch] BYREF
  int v20; // [esp+34h] [ebp+10h]
  va_list va; // [esp+38h] [ebp+14h] BYREF

  va_start(va, ShareFlag);
  v20 = va_arg(va, _DWORD);
  SecurityAttributes.nLength = 12;
  SecurityAttributes.lpSecurityDescriptor = NULL;
  if ( (OpenFlag & 0x80u) == 0 )
  {
    SecurityAttributes.bInheritHandle = true;
    v17 = 0;
  }
  else
  {
    SecurityAttributes.bInheritHandle = false;
    v17 = 16;
  }
  if ( (OpenFlag & 0x8000) == 0 && ((OpenFlag & 0x4000) != 0 || dword_4B2148 != 0x8000) )
    v17 |= 0x80u;
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
        dword_4B1E18 = 0;
        dword_4B1E14 = 22;
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
  if ( (OpenFlag & 0x100) != 0 && ((unsigned __int8)~(_BYTE)dword_4B1E1C & (unsigned __int8)v20 & 0x80) == 0 )
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
  result = _alloc_osfhnd();
  v8 = result;
  if ( result == -1 )
  {
    dword_4B1E14 = 24;
    dword_4B1E18 = 0;
    return result;
  }
  v9 = CreateFileA(
         /*lpFileName*/ FileName,
         dwDesiredAccess,
         /*dwShareMode*/ v3,
         /*lpSecurityAttributes*/ &SecurityAttributes,
         /*dwCreationDisposition*/ v5,
         /*dwFlagsAndAttributes*/ v6,
         /*hTemplateFile*/ NULL);
  v10 = v9;
  if ( v9 == (HANDLE)-1 )
  {
    LastError = GetLastError();
    _dosmaperr(LastError);
    return -1;
  }
  FileType = GetFileType(/*hFile*/ v9);
  switch ( FileType )
  {
    case 0u:
      CloseHandle(/*hObject*/ v10);
      v13 = GetLastError();
      _dosmaperr(v13);
      return -1;
    case 2u:
      v14 = v17 | 0x40;
LABEL_58:
      v17 = v14;
      break;
    case 3u:
      v14 = v17 | 8;
      goto LABEL_58;
    default:
      break;
  }
  _set_osfhnd(v8, /*hHandle*/ v10);
  v15 = 8 * (v8 & 0x1F);
  *(_BYTE *)(v15 + dword_9CA9E0[v8 >> 5] + 4) = v17 | 1;
  if ( (v17 & 0x48) == 0 && v17 < 0 && (OpenFlag & 2) != 0 )
  {
    v16 = _lseek(/*FileHandle*/ v8, /*Offset*/ -1, /*Origin*/ 2);
    if ( v16 == -1 )
    {
      if ( dword_4B1E18 != 131 )
      {
LABEL_64:
        _close(/*FileHandle*/ v8);
        return -1;
      }
    }
    else
    {
      LOBYTE(ShareFlag) = 0;
      if ( _read(/*FileHandle*/ v8, /*DstBuf*/ &ShareFlag, /*MaxCharCount*/ 1u) == 0
        && (_BYTE)ShareFlag == 26
        && _chsize(/*FileHandle*/ v8, /*Size*/ v16) == -1
        || _lseek(/*FileHandle*/ v8, /*Offset*/ 0, /*Origin*/ 0) == -1 )
      {
        goto LABEL_64;
      }
    }
  }
  if ( (v17 & 0x48) == 0 && (OpenFlag & 8) != 0 )
    *(_BYTE *)(v15 + dword_9CA9E0[v8 >> 5] + 4) |= 0x20u;
  return v8;
}

// 0x458a00  ___crtLCMapStringA
// Documented as crt/crt in doc/functions.md.
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

  result = dword_4B2110;
  if ( dword_4B2110 == 0 )
  {
    if ( LCMapStringA(/*Locale*/ 0, /*dwMapFlags*/ 0x100u, /*lpSrcStr*/ SrcStr, /*cchSrc*/ 1, /*lpDestStr*/ NULL, /*cchDest*/ 0) != 0 )
    {
      result = 2;
    }
    else
    {
      if ( LCMapStringW(
             /*Locale*/ 0,
             /*dwMapFlags*/ 0x100u,
             /*lpSrcStr*/ &word_45D1F0,
             /*cchSrc*/ 1,
             /*lpDestStr*/ NULL,
             /*cchDest*/ 0) == 0 )
        return 0;
      result = 1;
    }
    dword_4B2110 = result;
  }
  v8 = lpWideCharStr;
  if ( (int)lpWideCharStr > 0 )
  {
    v8 = (LPCWCH)strncnt(lpSrcStr, lpWideCharStr);
    result = dword_4B2110;
  }
  if ( result == 2 )
    return LCMapStringA(Locale, dwMapFlags, lpSrcStr, /*cchSrc*/ (int)v8, lpDestStr, cchDest);
  if ( result == 1 )
  {
    v9 = CodePage;
    lpWideCharStra = NULL;
    if ( CodePage == 0 )
    {
      CodePage = ::CodePage;
      v9 = ::CodePage;
    }
    result = MultiByteToWideChar(
               /*CodePage*/ v9,
               /*dwFlags*/ 9u,
               /*lpMultiByteStr*/ lpSrcStr,
               /*cbMultiByte*/ (int)v8,
               /*lpWideCharStr*/ NULL,
               /*cchWideChar*/ 0);
    v10 = result;
    if ( result != 0 )
    {
      result = (int)malloc(/*Size*/ 2 * result);
      v11 = (WCHAR *)result;
      if ( result != 0 )
      {
        if ( MultiByteToWideChar(
               /*CodePage*/ v9,
               /*dwFlags*/ 1u,
               /*lpMultiByteStr*/ lpSrcStr,
               /*cbMultiByte*/ (int)v8,
               /*lpWideCharStr*/ (LPWSTR)result,
               /*cchWideChar*/ v10) != 0 )
        {
          v12 = LCMapStringW(Locale, dwMapFlags, /*lpSrcStr*/ v11, /*cchSrc*/ v10, /*lpDestStr*/ NULL, /*cchDest*/ 0);
          v13 = v12;
          if ( v12 != 0 )
          {
            if ( (dwMapFlags & 0x400) != 0 )
            {
              if ( cchDest == 0
                || v12 <= cchDest
                && LCMapStringW(Locale, dwMapFlags, /*lpSrcStr*/ v11, /*cchSrc*/ v10, (LPWSTR)lpDestStr, cchDest) != 0 )
              {
                goto LABEL_22;
              }
              goto LABEL_30;
            }
            v14 = (WCHAR *)malloc(/*Size*/ 2 * v12);
            lpWideCharStra = v14;
            if ( v14 != NULL
              && LCMapStringW(Locale, dwMapFlags, /*lpSrcStr*/ v11, /*cchSrc*/ v10, /*lpDestStr*/ v14, /*cchDest*/ v13) != 0 )
            {
              if ( cchDest != 0 )
              {
                v13 = WideCharToMultiByte(
                        CodePage,
                        /*dwFlags*/ 0x220u,
                        /*lpWideCharStr*/ lpWideCharStra,
                        /*cchWideChar*/ v13,
                        /*lpMultiByteStr*/ lpDestStr,
                        /*cbMultiByte*/ cchDest,
                        /*lpDefaultChar*/ NULL,
                        /*lpUsedDefaultChar*/ NULL);
                if ( v13 != 0 )
                {
LABEL_22:
                  free(/*Block*/ v11);
                  free(/*Block*/ lpWideCharStra);
                  return v13;
                }
              }
              else
              {
                v13 = WideCharToMultiByte(
                        CodePage,
                        /*dwFlags*/ 0x220u,
                        /*lpWideCharStr*/ lpWideCharStra,
                        /*cchWideChar*/ v13,
                        /*lpMultiByteStr*/ NULL,
                        /*cbMultiByte*/ 0,
                        /*lpDefaultChar*/ NULL,
                        /*lpUsedDefaultChar*/ NULL);
                if ( v13 != 0 )
                  goto LABEL_22;
              }
            }
          }
        }
LABEL_30:
        free(/*Block*/ v11);
        free(/*Block*/ lpWideCharStra);
        return 0;
      }
    }
  }
  return result;
}

// 0x458c20  _strncnt
// Documented as crt/crt in doc/functions.md.
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

// 0x458c50  ___crtGetStringTypeA
// Documented as crt/crt in doc/functions.md.
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

  result = dword_4B2118;
  v7 = NULL;
  if ( dword_4B2118 == 0 )
  {
    if ( GetStringTypeA(/*Locale*/ 0, /*dwInfoType*/ 1u, /*lpSrcStr*/ SrcStr, /*cchSrc*/ 1, /*lpCharType*/ &CharType) )
    {
      result = 2;
      dword_4B2118 = 2;
    }
    else
    {
      if ( !GetStringTypeW(/*dwInfoType*/ 1u, /*lpSrcStr*/ &word_45D1F0, /*cchSrc*/ 1, /*lpCharType*/ &CharType) )
        return 0;
      result = 1;
      dword_4B2118 = 1;
    }
  }
  if ( result == 2 )
  {
    v8 = Locale;
    if ( Locale == 0 )
      v8 = dword_4B2128;
    return GetStringTypeA(/*Locale*/ v8, dwInfoType, lpSrcStr, cchSrc, lpCharType);
  }
  else if ( result == 1 )
  {
    v9 = CodePage;
    if ( CodePage == 0 )
      v9 = ::CodePage;
    v10 = MultiByteToWideChar(
            /*CodePage*/ v9,
            /*dwFlags*/ 9u,
            /*lpMultiByteStr*/ lpSrcStr,
            /*cbMultiByte*/ cchSrc,
            /*lpWideCharStr*/ NULL,
            /*cchWideChar*/ 0);
    v11 = v10;
    if ( v10 != 0
      && (v7 = (WCHAR *)calloc(/*Count*/ 2u, /*Size*/ v10)) != NULL
      && (v12 = MultiByteToWideChar(
                  /*CodePage*/ v9,
                  /*dwFlags*/ 1u,
                  /*lpMultiByteStr*/ lpSrcStr,
                  /*cbMultiByte*/ cchSrc,
                  /*lpWideCharStr*/ v7,
                  /*cchWideChar*/ v11)) != 0 )
    {
      StringTypeW = GetStringTypeW(dwInfoType, /*lpSrcStr*/ v7, /*cchSrc*/ v12, lpCharType);
      free(/*Block*/ v7);
      return StringTypeW;
    }
    else
    {
      free(/*Block*/ v7);
      return 0;
    }
  }
  return result;
}

// 0x458d80  _mbtowc
// Documented as crt/crt in doc/functions.md.
int __cdecl mbtowc(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes)
{
  int result; // eax
  bool v4; // cf
  bool v5; // zf

  if ( SrcCh == NULL || SrcSizeInBytes == 0 )
    return 0;
  if ( *SrcCh == 0 )
  {
    if ( DstCh != NULL )
    {
      *DstCh = 0;
      return 0;
    }
    return 0;
  }
  if ( dword_4B2128 == 0 )
  {
    if ( DstCh != NULL )
    {
      *DstCh = *(unsigned __int8 *)SrcCh;
      return 1;
    }
    return 1;
  }
  if ( *((char *)off_4B0A98 + 2 * *(unsigned __int8 *)SrcCh + 1) >= 0 )
  {
    if ( MultiByteToWideChar(
           /*CodePage*/ CodePage,
           /*dwFlags*/ 9u,
           /*lpMultiByteStr*/ SrcCh,
           /*cbMultiByte*/ 1,
           /*lpWideCharStr*/ DstCh,
           /*cchWideChar*/ DstCh != NULL) != 0 )
      return 1;
LABEL_18:
    dword_4B1E14 = 42;
    return -1;
  }
  result = ::SrcSizeInBytes;
  if ( (int)::SrcSizeInBytes > 1 )
  {
    v4 = SrcSizeInBytes < ::SrcSizeInBytes;
    if ( (int)SrcSizeInBytes < (int)::SrcSizeInBytes )
      goto LABEL_14;
    v5 = MultiByteToWideChar(
           /*CodePage*/ CodePage,
           /*dwFlags*/ 9u,
           /*lpMultiByteStr*/ SrcCh,
           cbMultiByte: ::SrcSizeInBytes,
           /*lpWideCharStr*/ DstCh,
           /*cchWideChar*/ DstCh != NULL) == 0;
    result = ::SrcSizeInBytes;
    if ( !v5 )
      return result;
  }
  v4 = SrcSizeInBytes < result;
LABEL_14:
  if ( v4 )
    goto LABEL_18;
  if ( SrcCh[1] == 0 )
  {
    dword_4B1E14 = 42;
    return -1;
  }
  return result;
}

// 0x458e80  _isspace
// Documented as crt/crt in doc/functions.md.
int __cdecl isspace(int C)
{
  if ( (int)SrcSizeInBytes <= 1 )
    return *((_BYTE *)off_4B0A98 + 2 * C) & 8;
  else
    return _isctype(C, /*Type*/ 8);
}

// 0x458eb0  __allshl
// Documented as crt/crt in doc/functions.md.
int __usercall _allshl/*@<eax>*/(__int64 a1/*@<edx:eax>*/, unsigned __int8 a2/*@<cl>*/)
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

// 0x458ed0  _ungetc
// Documented as crt/crt in doc/functions.md.
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
      if ( Stream->_base == NULL )
        _getbuf(Stream);
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

// 0x458f60  unknown_libname_1
// Documented as crt/crt in doc/functions.md.
// Microsoft VisualC 2-14/net runtime
double __cdecl unknown_libname_1(_TBYTE a1, _TBYTE a2)
{
  double v2; // st7
  double v3; // st6
  unsigned int v4; // eax

  v2 = *(double *)&a2;
  v3 = *(double *)&a1;
  while ( !__CFADD__(DWORD1(a1), DWORD1(a1)) )
  {
    if ( *(_QWORD *)&a1 == 0 || (HIWORD(a1) & 0x7FFF) != 0 )
      return v2 / v3;
    if ( (HIWORD(a2) & 0x7FFF) != 0 )
    {
      if ( (HIWORD(a2) & 0x7FFF) == 0x7FFF || !__CFADD__(DWORD1(a2), DWORD1(a2)) )
        return v2 / v3;
    }
    else if ( __CFADD__(DWORD1(a2), DWORD1(a2)) )
    {
      return v2 / v3;
    }
    *(double *)&a1 = v3 * flt_4B10F8;
    v2 = *(double *)&a2;
  }
  v4 = (2 * DWORD1(a1)) ^ 0xE000000;
  if ( (v4 & 0xE000000) != 0 )
    return v2 / v3;
  if ( byte_4B10E0[v4 >> 28] == 0 )
    return v2 / v3;
  if ( (HIWORD(a1) & 0x7FFF) == 0 || (HIWORD(a1) & 0x7FFF) == 0x7FFF )
    return v2 / v3;
  if ( (HIWORD(a2) & 0x7FFF) == 1 )
    return v2 * flt_4B10F4 / (v3 * flt_4B10F4);
  else
    return v2 * flt_4B10F0 / (v3 * flt_4B10F0);
}

// 0x459077  unknown_libname_2
// Documented as crt/crt in doc/functions.md.
// Microsoft VisualC 2-14/net runtime
// positive sp value has been detected, the output may be wrong!
void __usercall unknown_libname_2(char a1/*@<al>*/)
{
  _TBYTE v1; // [esp-2Ch] [ebp-58h]
  _TBYTE v2; // [esp-20h] [ebp-4Ch]
  _TBYTE v17; // [esp+0h] [ebp-2Ch]
  _TBYTE v18; // [esp+Ch] [ebp-20h]

  switch ( a1 & 0x3F )
  {
    case 0:
      __asm { fdiv    st, st; jumptable 0045907D case 0 }
      return;
    case 1:
      __asm { int     6;  - internal hardware - UNDEFINED OPCODE (80286+) }
      goto LABEL_4;
    case 2:
LABEL_4:
      __asm { fdivr   st, st; jumptable 0045907D case 2 }
      return;
    case 3:
      __asm { int     6;  - internal hardware - UNDEFINED OPCODE (80286+) }
      goto LABEL_6;
    case 4:
LABEL_6:
      __asm { fdiv    st, st; jumptable 0045907D case 4 }
      return;
    case 5:
      __asm { fdivp   st, st; jumptable 0045907D case 5 }
      return;
    case 6:
      __asm { fdivr   st, st; jumptable 0045907D case 6 }
      return;
    case 7:
      __asm { fdivrp  st, st; jumptable 0045907D case 7 }
      return;
    case 8:
      __asm
      {
        fstp    [esp+2Ch+var_20]; jumptable 0045907D case 8
        fld     st
        fstp    [esp+2Ch+var_2C]; _TBYTE
        fstp    [esp+2Ch+var_C]
      }
      unknown_libname_1(v1, v2);
      __asm
      {
        fld     [esp+2Ch+var_C]
        fxch    st(1)
      }
      return;
    case 9:
      __asm { int     6;  - internal hardware - UNDEFINED OPCODE (80286+) }
      goto LABEL_12;
    case 0xA:
LABEL_12:
      __asm
      {
        fstp    tbyte ptr [esp+0]; jumptable 0045907D case 10
        fstp    [esp+arg_8]; _TBYTE
      }
      unknown_libname_1(v17, v18);
      __asm
      {
        fld     [esp+arg_8]
        fxch    st(1)
      }
      return;
    case 0xB:
      __asm { int     6;  - internal hardware - UNDEFINED OPCODE (80286+) }
      goto LABEL_14;
    case 0xC:
LABEL_14:
      __asm
      {
        fxch    st(1); jumptable 0045907D case 12
        fstp    [esp+arg_8]; _TBYTE
        fld     st
        fstp    tbyte ptr [esp+0]; _TBYTE
        fstp    [esp+arg_1C]
      }
      unknown_libname_1(v17, v18);
      __asm { fld     [esp+arg_1C] }
      return;
    case 0xD:
      __asm
      {
        fstp    [esp+2Ch+var_2C]; jumptable 0045907D case 13
        fstp    [esp+2Ch+var_20]; _TBYTE
      }
      unknown_libname_1(v1, v2);
      return;
    case 0xE:
      __asm
      {
        fstp    [esp+2Ch+var_20]; jumptable 0045907D case 14
        fstp    [esp+2Ch+var_2C]; _TBYTE
      }
      unknown_libname_1(v1, v2);
      __asm { fld     [esp+2Ch+var_20] }
      return;
    case 0xF:
      __asm
      {
        fstp    [esp+2Ch+var_20]; jumptable 0045907D case 15
        fstp    [esp+2Ch+var_2C]; _TBYTE
      }
      unknown_libname_1(v1, v2);
      return;
    case 0x10:
      __asm
      {
        fstp    [esp+2Ch+var_20]; jumptable 0045907D case 16
        fxch    st(1)
        fld     st
        fstp    [esp+2Ch+var_2C]; _TBYTE
        fstp    [esp+2Ch+var_C]
      }
      unknown_libname_1(v1, v2);
      __asm
      {
        fxch    st(1)
        fld     [esp+2Ch+var_C]
        fxch    st(2)
      }
      return;
    case 0x11:
      __asm { int     6;  - internal hardware - UNDEFINED OPCODE (80286+) }
      goto LABEL_20;
    case 0x12:
LABEL_20:
      __asm
      {
        fstp    tbyte ptr [esp+0]; jumptable 0045907D case 18
        fxch    st(1)
        fstp    [esp+arg_8]; _TBYTE
      }
      unknown_libname_1(v17, v18);
      __asm
      {
        fxch    st(1)
        fld     [esp+arg_8]
        fxch    st(2)
      }
      return;
    case 0x13:
      __asm { int     6;  - internal hardware - UNDEFINED OPCODE (80286+) }
      goto LABEL_22;
    case 0x14:
LABEL_22:
      __asm
      {
        fxch    st(2); jumptable 0045907D case 20
        fstp    [esp+arg_8]; _TBYTE
        fxch    st(1)
        fld     st
        fstp    tbyte ptr [esp+0]; _TBYTE
        fstp    [esp+arg_1C]
      }
      unknown_libname_1(v17, v18);
      __asm
      {
        fxch    st(1)
        fld     [esp+arg_1C]
      }
      return;
    case 0x15:
      __asm
      {
        fstp    [esp+2Ch+var_2C]; jumptable 0045907D case 21
        fxch    st(1)
        fstp    [esp+2Ch+var_20]; _TBYTE
      }
      unknown_libname_1(v1, v2);
      __asm { fxch    st(1) }
      return;
    case 0x16:
      __asm
      {
        fstp    [esp+2Ch+var_20]; jumptable 0045907D case 22
        fxch    st(1)
        fstp    [esp+2Ch+var_2C]; _TBYTE
      }
      unknown_libname_1(v1, v2);
      __asm
      {
        fxch    st(1)
        fld     [esp+2Ch+var_20]
      }
      return;
    case 0x17:
      __asm
      {
        fstp    [esp+2Ch+var_20]; jumptable 0045907D case 23
        fxch    st(1)
        fstp    [esp+2Ch+var_2C]; _TBYTE
      }
      unknown_libname_1(v1, v2);
      __asm { fxch    st(1) }
      return;
    case 0x18:
      __asm
      {
        fstp    [esp+2Ch+var_20]; jumptable 0045907D case 24
        fxch    st(2)
        fld     st
        fstp    [esp+2Ch+var_2C]; _TBYTE
        fstp    [esp+2Ch+var_C]
      }
      unknown_libname_1(v1, v2);
      __asm
      {
        fxch    st(2)
        fld     [esp+2Ch+var_C]
        fxch    st(3)
      }
      return;
    case 0x19:
      __asm { int     6;  - internal hardware - UNDEFINED OPCODE (80286+) }
      goto LABEL_28;
    case 0x1A:
LABEL_28:
      __asm
      {
        fstp    tbyte ptr [esp+0]; jumptable 0045907D case 26
        fxch    st(2)
        fstp    [esp+arg_8]; _TBYTE
      }
      unknown_libname_1(v17, v18);
      __asm
      {
        fxch    st(2)
        fld     [esp+arg_8]
        fxch    st(3)
      }
      return;
    case 0x1B:
      __asm { int     6;  - internal hardware - UNDEFINED OPCODE (80286+) }
      goto LABEL_30;
    case 0x1C:
LABEL_30:
      __asm
      {
        fxch    st(3); jumptable 0045907D case 28
        fstp    [esp+arg_8]; _TBYTE
        fxch    st(2)
        fld     st
        fstp    tbyte ptr [esp+0]; _TBYTE
        fstp    [esp+arg_1C]
      }
      unknown_libname_1(v17, v18);
      __asm
      {
        fxch    st(2)
        fld     [esp+arg_1C]
      }
      return;
    case 0x1D:
      __asm
      {
        fstp    [esp+2Ch+var_2C]; jumptable 0045907D case 29
        fxch    st(2)
        fstp    [esp+2Ch+var_20]; _TBYTE
      }
      unknown_libname_1(v1, v2);
      __asm { fxch    st(2) }
      return;
    case 0x1E:
      __asm
      {
        fstp    [esp+2Ch+var_20]; jumptable 0045907D case 30
        fxch    st(2)
        fstp    [esp+2Ch+var_2C]; _TBYTE
      }
      unknown_libname_1(v1, v2);
      __asm
      {
        fxch    st(2)
        fld     [esp+2Ch+var_20]
      }
      return;
    case 0x1F:
      __asm
      {
        fstp    [esp+2Ch+var_20]; jumptable 0045907D case 31
        fxch    st(2)
        fstp    [esp+2Ch+var_2C]; _TBYTE
      }
      unknown_libname_1(v1, v2);
      __asm { fxch    st(2) }
      return;
    case 0x20:
      __asm
      {
        fstp    [esp+2Ch+var_20]; jumptable 0045907D case 32
        fxch    st(3)
        fld     st
        fstp    [esp+2Ch+var_2C]; _TBYTE
        fstp    [esp+2Ch+var_C]
      }
      unknown_libname_1(v1, v2);
      __asm
      {
        fxch    st(3)
        fld     [esp+2Ch+var_C]
        fxch    st(4)
      }
      return;
    case 0x21:
      __asm { int     6;  - internal hardware - UNDEFINED OPCODE (80286+) }
      goto LABEL_36;
    case 0x22:
LABEL_36:
      __asm
      {
        fstp    tbyte ptr [esp+0]; jumptable 0045907D case 34
        fxch    st(3)
        fstp    [esp+arg_8]; _TBYTE
      }
      unknown_libname_1(v17, v18);
      __asm
      {
        fxch    st(3)
        fld     [esp+arg_8]
        fxch    st(4)
      }
      return;
    case 0x23:
      __asm { int     6;  - internal hardware - UNDEFINED OPCODE (80286+) }
      goto LABEL_38;
    case 0x24:
LABEL_38:
      __asm
      {
        fxch    st(4); jumptable 0045907D case 36
        fstp    [esp+arg_8]; _TBYTE
        fxch    st(3)
        fld     st
        fstp    tbyte ptr [esp+0]; _TBYTE
        fstp    [esp+arg_1C]
      }
      unknown_libname_1(v17, v18);
      __asm
      {
        fxch    st(3)
        fld     [esp+arg_1C]
      }
      return;
    case 0x25:
      __asm
      {
        fstp    [esp+2Ch+var_2C]; jumptable 0045907D case 37
        fxch    st(3)
        fstp    [esp+2Ch+var_20]; _TBYTE
      }
      unknown_libname_1(v1, v2);
      __asm { fxch    st(3) }
      return;
    case 0x26:
      __asm
      {
        fstp    [esp+2Ch+var_20]; jumptable 0045907D case 38
        fxch    st(3)
        fstp    [esp+2Ch+var_2C]; _TBYTE
      }
      unknown_libname_1(v1, v2);
      __asm
      {
        fxch    st(3)
        fld     [esp+2Ch+var_20]
      }
      return;
    case 0x27:
      __asm
      {
        fstp    [esp+2Ch+var_20]; jumptable 0045907D case 39
        fxch    st(3)
        fstp    [esp+2Ch+var_2C]; _TBYTE
      }
      unknown_libname_1(v1, v2);
      __asm { fxch    st(3) }
      return;
    case 0x28:
      __asm
      {
        fstp    [esp+2Ch+var_20]; jumptable 0045907D case 40
        fxch    st(4)
        fld     st
        fstp    [esp+2Ch+var_2C]; _TBYTE
        fstp    [esp+2Ch+var_C]
      }
      unknown_libname_1(v1, v2);
      __asm
      {
        fxch    st(4)
        fld     [esp+2Ch+var_C]
        fxch    st(5)
      }
      return;
    case 0x29:
      __asm { int     6;  - internal hardware - UNDEFINED OPCODE (80286+) }
      goto LABEL_44;
    case 0x2A:
LABEL_44:
      __asm
      {
        fstp    tbyte ptr [esp+0]; jumptable 0045907D case 42
        fxch    st(4)
        fstp    [esp+arg_8]; _TBYTE
      }
      unknown_libname_1(v17, v18);
      __asm
      {
        fxch    st(4)
        fld     [esp+arg_8]
        fxch    st(5)
      }
      return;
    case 0x2B:
      __asm { int     6;  - internal hardware - UNDEFINED OPCODE (80286+) }
      goto LABEL_46;
    case 0x2C:
LABEL_46:
      __asm
      {
        fxch    st(5); jumptable 0045907D case 44
        fstp    [esp+arg_8]; _TBYTE
        fxch    st(4)
        fld     st
        fstp    tbyte ptr [esp+0]; _TBYTE
        fstp    [esp+arg_1C]
      }
      unknown_libname_1(v17, v18);
      __asm
      {
        fxch    st(4)
        fld     [esp+arg_1C]
      }
      return;
    case 0x2D:
      __asm
      {
        fstp    [esp+2Ch+var_2C]; jumptable 0045907D case 45
        fxch    st(4)
        fstp    [esp+2Ch+var_20]; _TBYTE
      }
      unknown_libname_1(v1, v2);
      __asm { fxch    st(4) }
      return;
    case 0x2E:
      __asm
      {
        fstp    [esp+2Ch+var_20]; jumptable 0045907D case 46
        fxch    st(4)
        fstp    [esp+2Ch+var_2C]; _TBYTE
      }
      unknown_libname_1(v1, v2);
      __asm
      {
        fxch    st(4)
        fld     [esp+2Ch+var_20]
      }
      return;
    case 0x2F:
      __asm
      {
        fstp    [esp+2Ch+var_20]; jumptable 0045907D case 47
        fxch    st(4)
        fstp    [esp+2Ch+var_2C]; _TBYTE
      }
      unknown_libname_1(v1, v2);
      __asm { fxch    st(4) }
      return;
    case 0x30:
      __asm
      {
        fstp    [esp+2Ch+var_20]; jumptable 0045907D case 48
        fxch    st(5)
        fld     st
        fstp    [esp+2Ch+var_2C]; _TBYTE
        fstp    [esp+2Ch+var_C]
      }
      unknown_libname_1(v1, v2);
      __asm
      {
        fxch    st(5)
        fld     [esp+2Ch+var_C]
        fxch    st(6)
      }
      return;
    case 0x31:
      __asm { int     6;  - internal hardware - UNDEFINED OPCODE (80286+) }
      goto LABEL_52;
    case 0x32:
LABEL_52:
      __asm
      {
        fstp    tbyte ptr [esp+0]; jumptable 0045907D case 50
        fxch    st(5)
        fstp    [esp+arg_8]; _TBYTE
      }
      unknown_libname_1(v17, v18);
      __asm
      {
        fxch    st(5)
        fld     [esp+arg_8]
        fxch    st(6)
      }
      return;
    case 0x33:
      __asm { int     6;  - internal hardware - UNDEFINED OPCODE (80286+) }
      goto LABEL_54;
    case 0x34:
LABEL_54:
      __asm
      {
        fxch    st(6); jumptable 0045907D case 52
        fstp    [esp+arg_8]; _TBYTE
        fxch    st(5)
        fld     st
        fstp    tbyte ptr [esp+0]; _TBYTE
        fstp    [esp+arg_1C]
      }
      unknown_libname_1(v17, v18);
      __asm
      {
        fxch    st(5)
        fld     [esp+arg_1C]
      }
      return;
    case 0x35:
      __asm
      {
        fstp    [esp+2Ch+var_2C]; jumptable 0045907D case 53
        fxch    st(5)
        fstp    [esp+2Ch+var_20]; _TBYTE
      }
      unknown_libname_1(v1, v2);
      __asm { fxch    st(5) }
      return;
    case 0x36:
      __asm
      {
        fstp    [esp+2Ch+var_20]; jumptable 0045907D case 54
        fxch    st(5)
        fstp    [esp+2Ch+var_2C]; _TBYTE
      }
      unknown_libname_1(v1, v2);
      __asm
      {
        fxch    st(5)
        fld     [esp+2Ch+var_20]
      }
      return;
    case 0x37:
      __asm
      {
        fstp    [esp+2Ch+var_20]; jumptable 0045907D case 55
        fxch    st(5)
        fstp    [esp+2Ch+var_2C]; _TBYTE
      }
      unknown_libname_1(v1, v2);
      __asm { fxch    st(5) }
      return;
    case 0x38:
      __asm
      {
        fstp    [esp+2Ch+var_20]; jumptable 0045907D case 56
        fxch    st(6)
        fld     st
        fstp    [esp+2Ch+var_2C]; _TBYTE
        fstp    [esp+2Ch+var_C]
      }
      unknown_libname_1(v1, v2);
      __asm
      {
        fxch    st(6)
        fld     [esp+2Ch+var_C]
        fxch    st(7)
      }
      return;
    case 0x39:
      __asm { int     6;  - internal hardware - UNDEFINED OPCODE (80286+) }
      goto LABEL_60;
    case 0x3A:
LABEL_60:
      __asm
      {
        fstp    tbyte ptr [esp+0]; jumptable 0045907D case 58
        fxch    st(6)
        fstp    [esp+arg_8]; _TBYTE
      }
      unknown_libname_1(v17, v18);
      __asm
      {
        fxch    st(6)
        fld     [esp+arg_8]
        fxch    st(7)
      }
      return;
    case 0x3B:
      __asm { int     6;  - internal hardware - UNDEFINED OPCODE (80286+) }
      goto LABEL_62;
    case 0x3C:
LABEL_62:
      __asm
      {
        fxch    st(7); jumptable 0045907D case 60
        fstp    [esp+arg_8]; _TBYTE
        fxch    st(6)
        fld     st
        fstp    tbyte ptr [esp+0]; _TBYTE
        fstp    [esp+arg_1C]
      }
      unknown_libname_1(v17, v18);
      __asm
      {
        fxch    st(6)
        fld     [esp+arg_1C]
      }
      break;
    case 0x3D:
      __asm
      {
        fstp    [esp+2Ch+var_2C]; jumptable 0045907D case 61
        fxch    st(6)
        fstp    [esp+2Ch+var_20]; _TBYTE
      }
      unknown_libname_1(v1, v2);
      __asm { fxch    st(6) }
      break;
    case 0x3E:
      __asm
      {
        fstp    [esp+2Ch+var_20]; jumptable 0045907D case 62
        fxch    st(6)
        fstp    [esp+2Ch+var_2C]; _TBYTE
      }
      unknown_libname_1(v1, v2);
      __asm
      {
        fxch    st(6)
        fld     [esp+2Ch+var_20]
      }
      break;
    case 0x3F:
      __asm
      {
        fstp    [esp+2Ch+var_20]; jumptable 0045907D case 63
        fxch    st(6)
        fstp    [esp+2Ch+var_2C]; _TBYTE
      }
      unknown_libname_1(v1, v2);
      __asm { fxch    st(6) }
      break;
  }
}

// 0x459516  unknown_libname_3
// Documented as crt/crt in doc/functions.md.
// Microsoft VisualC 2-14/net runtime
void __usercall unknown_libname_3(double a1/*@<st1>*/, double a2/*@<st0>*/)
{
  _TBYTE v2; // [esp+0h] [ebp-2Ch]
  _TBYTE v3; // [esp+Ch] [ebp-20h]

  *(double *)&v2 = a1;
  *(double *)&v3 = a2;
  unknown_libname_1(v2, v3);
}

// 0x459529  unknown_libname_4
// Documented as crt/crt in doc/functions.md.
// Microsoft VisualC 2-14/net runtime
void __usercall unknown_libname_4(double a1/*@<st1>*/, double a2/*@<st0>*/)
{
  _TBYTE v2; // [esp+0h] [ebp-2Ch]
  _TBYTE v3; // [esp+Ch] [ebp-20h]

  *(double *)&v3 = a1;
  *(double *)&v2 = a2;
  unknown_libname_1(v2, v3);
}

// 0x45973c  unknown_libname_13
// Documented as crt/crt in doc/functions.md.
// Microsoft VisualC 2-14/net runtime
void __usercall /*__spoils<edx,ecx,st0>*/ unknown_libname_13(double a1/*@<st1>*/, double a2/*@<st0>*/)
{
  _TBYTE v2; // [esp+0h] [ebp-30h]
  _TBYTE v3; // [esp+Ch] [ebp-24h]

  *(double *)&v2 = a1;
  *(double *)&v3 = a2;
  unknown_libname_1(v2, v3);
}

// 0x459751  unknown_libname_14
// Documented as crt/crt in doc/functions.md.
// Microsoft VisualC 2-14/net runtime
void __usercall /*__spoils<edx,ecx,st0>*/ unknown_libname_14(double a1/*@<st1>*/, double a2/*@<st0>*/)
{
  _TBYTE v2; // [esp+0h] [ebp-30h]
  _TBYTE v3; // [esp+Ch] [ebp-24h]

  *(double *)&v3 = a1;
  *(double *)&v2 = a2;
  unknown_libname_1(v2, v3);
}

// 0x459766  unknown_libname_15
// Documented as crt/crt in doc/functions.md.
// Microsoft VisualC 2-14/net runtime
unsigned int __usercall unknown_libname_15/*@<eax>*/(char a1/*@<dl>*/, __int128 a2, int a3, int a4, __int128 a5)
{
  unsigned int result; // eax
  int v6; // ecx
  double v7; // st7
  __int16 v8; // fps
  double v9; // st6
  bool v10; // c0
  char v11; // c2
  bool v12; // c3
  __int16 v13; // fps

  result = *(_DWORD *)((char *)&a2 + 6) ^ 0x700;
  if ( ((*(_DWORD *)((char *)&a2 + 6) ^ 0x700) & 0x700) == 0 )
  {
    result = (result >> 11) & 0xF;
    if ( byte_4B10FC[result] != 0 )
    {
      result = *(_DWORD *)((_BYTE *)&a2 + 6) & 0x7FFF0000;
      if ( (*(_DWORD *)((_BYTE *)&a2 + 6) & 0x7FFF0000) != 0x7FFF0000 )
      {
        result = *(_DWORD *)((_BYTE *)&a5 + 6) & 0x7FFF0000;
        if ( (*(_DWORD *)((_BYTE *)&a5 + 6) & 0x7FFF0000) != 0 && result != 2147418112 )
        {
          result = 2 * DWORD1(a5);
          if ( 2 * DWORD1(a5) == 0 )
          {
            result = 2 * DWORD1(a2);
            if ( 2 * DWORD1(a2) == 0 )
            {
              if ( (WORD4(a5) & 0x7FFFu) > (WORD4(a2) & 0x7FFFu) + 63 )
              {
                v6 = ((BYTE8(a5) - BYTE8(a2)) & 0x3F | 0x20) + 1;
                v7 = fabs(*(long double *)&a2);
                v9 = fabs(*(long double *)&a5);
                do
                {
                  v10 = v9 < v7;
                  v11 = 0;
                  v12 = v9 == v7;
                  result = v8 & 0x100;
                  if ( (v8 & 0x100) == 0 )
                    v9 = v9 - v7;
                  v7 = v7 * dbl_4B112C;
                  --v6;
                }
                while ( v6 != 0 );
              }
              else
              {
                while ( 1 )
                {
                  result = (WORD4(a2) & 0x7FFF) + 10;
                  if ( (int)((WORD4(a5) & 0x7FFF) - result) < 0 )
                    break;
                  *(double *)&a5 = __FPREM__(*(long double *)&a5, *(long double *)&a2);
                }
              }
            }
          }
        }
      }
    }
  }
  if ( (a1 & 3) != 0 )
  {
    __asm { fnstenv [esp+28h+var_28] }
    __asm { fldenv  [esp+28h+var_28] }
    return v13 & 0x4300;
  }
  return result;
}

// 0x45996c  unknown_libname_16
// Documented as crt/crt in doc/functions.md.
// Microsoft VisualC 2-14/net runtime
int __usercall /*__spoils<ecx,st0>*/ unknown_libname_16/*@<eax>*/(double a1/*@<st1>*/, double a2/*@<st0>*/)
{
  int result; // eax
  char v3; // dl
  _BYTE v4[20]; // [esp+0h] [ebp-34h]
  int v5; // [esp+14h] [ebp-20h]
  __int128 v6; // [esp+18h] [ebp-1Ch]

  *(double *)&v6 = a1;
  *(double *)v4 = a2;
  if ( (*(_DWORD *)&v4[6] & 0x7FFF0000) != 0 )
    return unknown_libname_15(0, *(__int128 *)v4, *(int *)&v4[16], v5, v6);
  result = *(_DWORD *)&v4[4] | *(_DWORD *)v4;
  if ( a2 != 0.0 )
  {
    *(double *)&v4[12] = a2;
    v3 = 2;
    if ( (WORD4(v6) & 0x7FFFu) <= 0x7FBE )
    {
      v3 = 3;
      *(double *)&v6 = a1 * dbl_4B1114;
    }
    *(double *)v4 = a2 * dbl_4B1114;
    return unknown_libname_15(v3, *(__int128 *)v4, HIDWORD(*(unsigned __int64 *)&a2), v5, v6);
  }
  return result;
}

// 0x459a1e  unknown_libname_17
// Documented as crt/crt in doc/functions.md.
// Microsoft VisualC 2-14/net runtime
unsigned int __usercall unknown_libname_17/*@<eax>*/(char a1/*@<dl>*/, __int128 a2, int a3, int a4, __int128 a5)
{
  unsigned int result; // eax
  int v6; // ecx
  double v7; // st7
  __int16 v8; // fps
  double v9; // st6
  bool v10; // c0
  char v11; // c2
  bool v12; // c3
  __int16 v13; // fps

  result = *(_DWORD *)((char *)&a2 + 6) ^ 0x700;
  if ( ((*(_DWORD *)((char *)&a2 + 6) ^ 0x700) & 0x700) == 0 )
  {
    result = (result >> 11) & 0xF;
    if ( byte_4B10FC[result] != 0 )
    {
      result = *(_DWORD *)((_BYTE *)&a2 + 6) & 0x7FFF0000;
      if ( (*(_DWORD *)((_BYTE *)&a2 + 6) & 0x7FFF0000) != 0x7FFF0000 )
      {
        result = *(_DWORD *)((_BYTE *)&a5 + 6) & 0x7FFF0000;
        if ( (*(_DWORD *)((_BYTE *)&a5 + 6) & 0x7FFF0000) != 0 && result != 2147418112 )
        {
          result = 2 * DWORD1(a5);
          if ( 2 * DWORD1(a5) == 0 )
          {
            result = 2 * DWORD1(a2);
            if ( 2 * DWORD1(a2) == 0 )
            {
              if ( (WORD4(a5) & 0x7FFFu) > (WORD4(a2) & 0x7FFFu) + 63 )
              {
                v6 = ((BYTE8(a5) - BYTE8(a2)) & 0x3F | 0x20) + 1;
                v7 = fabs(*(long double *)&a2);
                v9 = fabs(*(long double *)&a5);
                do
                {
                  v10 = v9 < v7;
                  v11 = 0;
                  v12 = v9 == v7;
                  result = v8 & 0x100;
                  if ( (v8 & 0x100) == 0 )
                    v9 = v9 - v7;
                  v7 = v7 * dbl_4B112C;
                  --v6;
                }
                while ( v6 != 0 );
              }
              else
              {
                while ( 1 )
                {
                  result = (WORD4(a2) & 0x7FFF) + 10;
                  if ( (int)((WORD4(a5) & 0x7FFF) - result) < 0 )
                    break;
                  *(double *)&a5 = __FPREM__(*(long double *)&a5, *(long double *)&a2);
                }
              }
            }
          }
        }
      }
    }
  }
  if ( (a1 & 3) != 0 )
  {
    __asm { fnstenv [esp+28h+var_28] }
    __asm { fldenv  [esp+28h+var_28] }
    return v13 & 0x4300;
  }
  return result;
}

// 0x459c24  unknown_libname_18
// Documented as crt/crt in doc/functions.md.
// Microsoft VisualC 2-14/net runtime
int __usercall /*__spoils<ecx,st0>*/ unknown_libname_18/*@<eax>*/(double a1/*@<st1>*/, double a2/*@<st0>*/)
{
  int result; // eax
  char v3; // dl
  _BYTE v4[20]; // [esp+0h] [ebp-34h]
  int v5; // [esp+14h] [ebp-20h]
  __int128 v6; // [esp+18h] [ebp-1Ch]

  *(double *)&v6 = a1;
  *(double *)v4 = a2;
  if ( (*(_DWORD *)&v4[6] & 0x7FFF0000) != 0 )
    return unknown_libname_17(0, *(__int128 *)v4, *(int *)&v4[16], v5, v6);
  result = *(_DWORD *)&v4[4] | *(_DWORD *)v4;
  if ( a2 != 0.0 )
  {
    *(double *)&v4[12] = a2;
    v3 = 2;
    if ( (WORD4(v6) & 0x7FFFu) <= 0x7FBE )
    {
      v3 = 3;
      *(double *)&v6 = a1 * dbl_4B1114;
    }
    *(double *)v4 = a2 * dbl_4B1114;
    return unknown_libname_17(v3, *(__int128 *)v4, HIDWORD(*(unsigned __int64 *)&a2), v5, v6);
  }
  return result;
}

// 0x459cf0  __87except
// Documented as crt/crt in doc/functions.md.
errno_t __cdecl _87except(int a1, _DWORD *a2, int a3)
{
  __int16 v3; // ax
  int v4; // ecx
  char v5; // di
  errno_t result; // eax
  ULONG_PTR Arguments[14]; // [esp+Ch] [ebp-58h] BYREF
  unsigned int v8; // [esp+44h] [ebp-20h]

  v3 = *(_WORD *)a3;
  v4 = *a2 - 1;
  a3 = *(unsigned __int16 *)a3;
  switch ( v4 )
  {
    case 0:
    case 4:
      v5 = 8;
      goto LABEL_3;
    case 1:
      v5 = 4;
      goto LABEL_3;
    case 2:
      v5 = 17;
      goto LABEL_3;
    case 3:
      v5 = 18;
      goto LABEL_3;
    case 6:
      *a2 = 1;
      break;
    case 7:
      v5 = 16;
LABEL_3:
      if ( !_handle_exc(v5, a2 + 6, v3) )
      {
        if ( a1 == 16 || a1 == 22 || a1 == 29 )
        {
          Arguments[10] = a2[4];
          v8 = v8 & 0xFFFFFFE0 | 3;
          Arguments[11] = a2[5];
        }
        else
        {
          v8 &= ~1u;
        }
        _raise_exc(Arguments, &a3, v5, a1, a2 + 2, a2 + 6);
      }
      break;
    default:
      break;
  }
  _ctrlfp(v4);
  result = 0;
  if ( *a2 != 8 && dword_4B10D0 == 0 )
    result = PadInfoMode();
  if ( result == 0 )
    return _set_errno(/*Value*/ *a2);
  return result;
}

// 0x459e10  ___crtMessageBoxA
// Documented as crt/crt in doc/functions.md.
int __cdecl __crtMessageBoxA(const CHAR *a1, const CHAR *a2, UINT a3)
{
  HWND ActiveWindow; // ebx
  HMODULE LibraryA; // eax
  HMODULE v5; // esi

  ActiveWindow = NULL;
  if ( MessageBoxA_0 == NULL )
  {
    LibraryA = LoadLibraryA(/*lpLibFileName*/ "user32.dll");
    v5 = LibraryA;
    if ( LibraryA == NULL )
      return 0;
    MessageBoxA_0 = (int (__stdcall *)(HWND, LPCSTR, LPCSTR, UINT))GetProcAddress(
                                                                     /*hModule*/ LibraryA,
                                                                     /*lpProcName*/ "MessageBoxA");
    if ( MessageBoxA_0 == NULL )
      return 0;
    GetActiveWindow = (HWND (__stdcall *)())GetProcAddress(/*hModule*/ v5, /*lpProcName*/ "GetActiveWindow");
    GetLastActivePopup = (HWND (__stdcall *)(HWND))GetProcAddress(/*hModule*/ v5, /*lpProcName*/ "GetLastActivePopup");
  }
  if ( GetActiveWindow != NULL )
    ActiveWindow = GetActiveWindow();
  if ( ActiveWindow != NULL && GetLastActivePopup != NULL )
    ActiveWindow = GetLastActivePopup(/*hWnd*/ ActiveWindow);
  return MessageBoxA_0(/*hWnd*/ ActiveWindow, /*lpText*/ a1, /*lpCaption*/ a2, /*uType*/ a3);
}

// 0x459ea0  ___addl
// Documented as crt/crt in doc/functions.md.
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

// 0x459ed0  ___add_12
// Documented as crt/crt in doc/functions.md.
int __cdecl __add_12(unsigned int *a1, unsigned int *a2)
{
  if ( __addl(*a1, *a2, a1) != 0 && __addl(a1[1], 1u, a1 + 1) != 0 )
    ++a1[2];
  if ( __addl(a1[1], a2[1], a1 + 1) != 0 )
    ++a1[2];
  return __addl(a1[2], a2[2], a1 + 2);
}

// 0x459f40  ___shl_12
// Documented as crt/crt in doc/functions.md.
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

// 0x459f70  ___shr_12
// Documented as crt/crt in doc/functions.md.
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

// 0x459fa0  ___mtold12
// Documented as crt/crt in doc/functions.md.
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
      __shl_12((unsigned int *)a3);
      __shl_12((unsigned int *)a3);
      __add_12((unsigned int *)a3, &v11);
      __shl_12((unsigned int *)a3);
      v11 = *a1;
      v12 = 0;
      v13 = 0;
      __add_12((unsigned int *)a3, &v11);
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
    __shl_12((unsigned int *)a3);
    result = *(_DWORD *)(a3 + 8);
  }
  *(_WORD *)(a3 + 10) = v4;
  return result;
}

// 0x45a0a0  ___strgtold12
// Documented as crt/crt in doc/functions.md.
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
        if ( v13 == byte_4B0CA8 )
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
        if ( v13 != byte_4B0CA8 )
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
        if ( v13 == byte_4B0CA8 )
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
              ? *((_BYTE *)off_4B0A98 + 2 * (unsigned __int8)a3) & 4
              : _isctype(/*C*/ (unsigned __int8)a3, /*Type*/ 4);
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
        if ( v13 != byte_4B0CA8 )
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
              ? *((_BYTE *)off_4B0A98 + 2 * (unsigned __int8)a3) & 4
              : _isctype(/*C*/ (unsigned __int8)a3, /*Type*/ 4);
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
          v16 = *((_BYTE *)off_4B0A98 + 2 * (unsigned __int8)v13) & 4;
        else
          v16 = _isctype(/*C*/ (unsigned __int8)v13, /*Type*/ 4);
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
          ? *((_BYTE *)off_4B0A98 + 2 * (unsigned __int8)a3) & 4
          : _isctype(/*C*/ (unsigned __int8)a3, /*Type*/ 4);
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
      v21 = (int)SrcSizeInBytes <= 1 ? *((_BYTE *)off_4B0A98 + 2 * v19) & 4 : _isctype(/*C*/ v19, /*Type*/ 4);
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
    __mtold12(v51, v8, (int)v48);
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
    __multtenpow12(v48, v29, a4);
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
    v30 = NULL;
  }
LABEL_128:
  if ( v38 != 0 )
  {
    if ( v46 != 0 )
    {
      v30 = NULL;
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
      v30 = NULL;
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
    v30 = NULL;
    v34 = 4;
  }
  *(_WORD *)a1 = v33;
  *(_DWORD *)(a1 + 2) = v30;
  *(_DWORD *)(a1 + 6) = v31;
  *(_WORD *)(a1 + 10) = v45 | v32;
  return v34;
}

// 0x45a830  __I10_OUTPUT
// IDA symbol: _$I10_OUTPUT
// Documented as crt/crt in doc/functions.md.
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
    __multtenpow12(v29, -(__int16)v12, 1);
    if ( *(_WORD *)&v29[10] >= 0x3FFFu )
    {
      LOWORD(v12) = v12 + 1;
      __ld12mul(v29, v28);
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
      __shl_12((unsigned int *)v29);
      --v16;
    }
    while ( v16 != 0 );
    if ( v17 < 0 )
    {
      for ( i = (unsigned __int8)-(char)v17; i != 0; --i )
        __shr_12((int *)v29);
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
        __shl_12((unsigned int *)v29);
        __shl_12((unsigned int *)v29);
        __add_12((unsigned int *)v29, (unsigned int *)&a1);
        __shl_12((unsigned int *)v29);
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

// 0x45abc0  __chsize
// Documented as crt/crt in doc/functions.md.
int __cdecl _chsize(int FileHandle, int Size)
{
  int v2; // ebp
  int v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // edi
  unsigned int v7; // eax
  int v8; // eax
  void *osfhandle; // eax
  BOOL v11; // eax
  int Offset; // [esp+10h] [ebp-1004h]
  _BYTE Buf[4096]; // [esp+14h] [ebp-1000h] BYREF

  v2 = 0;
  if ( FileHandle >= uNumber || (*(_BYTE *)(dword_9CA9E0[FileHandle >> 5] + 8 * (FileHandle & 0x1F) + 4) & 1) == 0 )
  {
    dword_4B1E14 = 9;
    return -1;
  }
  v3 = _lseek(FileHandle, /*Offset*/ 0, /*Origin*/ 1);
  Offset = v3;
  if ( v3 == -1 )
    return -1;
  v4 = _lseek(FileHandle, /*Offset*/ 0, /*Origin*/ 2);
  if ( v4 == -1 )
    return -1;
  v5 = Size - v4;
  if ( Size - v4 <= 0 )
  {
    if ( Size - v4 < 0 )
    {
      _lseek(FileHandle, /*Offset*/ Size, /*Origin*/ 0);
      osfhandle = (void *)_get_osfhandle(FileHandle);
      v11 = SetEndOfFile(/*hFile*/ osfhandle);
      v2 = v11 - 1;
      if ( !v11 )
      {
        dword_4B1E14 = 13;
        dword_4B1E18 = GetLastError();
      }
    }
    _lseek(FileHandle, /*Offset*/ v3, /*Origin*/ 0);
    return v2;
  }
  else
  {
    memset(Buf, 0, sizeof(Buf));
    v6 = _setmode(FileHandle, /*Mode*/ 0x8000);
    while ( 1 )
    {
      v7 = 4096;
      if ( v5 < 4096 )
        v7 = v5;
      v8 = _write(FileHandle, Buf, /*MaxCharCount*/ v7);
      if ( v8 == -1 )
        break;
      v5 -= v8;
      if ( v5 <= 0 )
        goto LABEL_15;
    }
    if ( dword_4B1E18 == 5 )
      dword_4B1E14 = 13;
    v2 = -1;
LABEL_15:
    _setmode(FileHandle, /*Mode*/ v6);
    _lseek(FileHandle, Offset, /*Origin*/ 0);
    return v2;
  }
}

// 0x45ad40  ___ld12mul
// Documented as crt/crt in doc/functions.md.
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
            if ( __addl(*(v19 - 1), *v12 * *v11, v19 - 1) != 0 )
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
          __shl_12(v24);
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
              __shr_12((int *)v24);
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

// 0x45b000  ___multtenpow12
// Documented as crt/crt in doc/functions.md.
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
  v4 = (char *)&unk_4B1240 - 96;
  if ( a2 != 0 )
  {
    if ( a2 < 0 )
    {
      v3 = -a2;
      v4 = (char *)&unk_4B13A0 - 96;
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
        __ld12mul((int)a1, (int)v8);
      }
    }
  }
}

// 0x45b090  __setmode
// Documented as crt/crt in doc/functions.md.
int __cdecl _setmode(int FileHandle, int Mode)
{
  int v2; // edx
  char v3; // cl
  _BYTE *v4; // edx
  int v5; // eax
  char v6; // cl

  if ( FileHandle < uNumber
    && (v2 = dword_9CA9E0[FileHandle >> 5],
        v3 = *(_BYTE *)(v2 + 8 * (FileHandle & 0x1F) + 4),
        v4 = (_BYTE *)(v2 + 8 * (FileHandle & 0x1F) + 4),
        (v3 & 1) != 0) )
  {
    v5 = v3 & 0x80;
    if ( Mode == 0x8000 )
    {
      v6 = v3 & 0x7F;
LABEL_7:
      *v4 = v6;
      return v5 != 0 ? 0x4000 : 0x8000;
    }
    if ( Mode == 0x4000 )
    {
      v6 = v3 | 0x80;
      goto LABEL_7;
    }
    dword_4B1E14 = 22;
    return -1;
  }
  else
  {
    dword_4B1E14 = 9;
    return -1;
  }
}

// 0x45b120  __strcmpi
// Documented as crt/crt in doc/functions.md.
int __cdecl _strcmpi(const char *String1, const char *String2)
{
  int result; // eax
  char v5; // t0
  int v6; // ebx
  int v7; // [esp-4h] [ebp-10h]

  if ( dword_4B2128 != 0 )
  {
    result = 255;
    v6 = 0;
    while ( (_BYTE)result != 0 )
    {
      LOBYTE(result) = *String2++;
      LOBYTE(v6) = *String1++;
      if ( (_BYTE)result != (_BYTE)v6 )
      {
        v7 = result;
        v6 = tolower(/*C*/ v6);
        result = tolower(/*C*/ v7);
        if ( (_BYTE)v6 != (_BYTE)result )
          return -((unsigned __int8)v6 < (unsigned __int8)result)
               - (((unsigned __int8)v6 < (unsigned __int8)result)
                - 1);
      }
    }
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
  return result;
}

// 0x45b2c0  __getextendedkeycode
// Documented as crt/crt in doc/functions.md.
char *__cdecl _getextendedkeycode(int a1)
{
  int v1; // ebx
  char *result; // eax
  int v3; // edx
  _WORD *v4; // ecx

  v1 = *(_DWORD *)(a1 + 12);
  if ( (v1 & 0x100) != 0 )
  {
    result = NULL;
    v3 = 0;
    v4 = &unk_4B1500;
    while ( *v4 != *(_WORD *)(a1 + 8) )
    {
      v4 += 5;
      ++v3;
      if ( v4 >= (_WORD *)&unk_4B1578 )
        return result;
    }
    if ( (v1 & 3) != 0 )
    {
      return (char *)&unk_4B1508 + 10 * v3;
    }
    else if ( (v1 & 0xC) != 0 )
    {
      return (char *)&unk_4B1506 + 10 * v3;
    }
    else if ( (v1 & 0x10) != 0 )
    {
      return (char *)&unk_4B1504 + 10 * v3;
    }
    else
    {
      return (char *)&unk_4B1502 + 10 * v3;
    }
  }
  else
  {
    if ( (v1 & 3) != 0 )
    {
      result = (char *)&unk_4B157E + 8 * *(unsigned __int16 *)(a1 + 8);
    }
    else if ( (v1 & 0xC) != 0 )
    {
      result = (char *)&unk_4B157C + 8 * *(unsigned __int16 *)(a1 + 8);
    }
    else if ( (v1 & 0x10) != 0 )
    {
      result = (char *)&unk_4B157A + 8 * *(unsigned __int16 *)(a1 + 8);
    }
    else
    {
      result = (char *)&unk_4B1578 + 8 * *(unsigned __int16 *)(a1 + 8);
    }
    if ( *result != 0 && *result != -32 || result[1] == 0 )
      return NULL;
  }
  return result;
}

// 0x45b3a0  ___initconin
// Documented as crt/crt in doc/functions.md.
HANDLE __initconin()
{
  HANDLE result; // eax

  result = CreateFileA(
             /*lpFileName*/ "CONIN$",
             /*dwDesiredAccess*/ 0xC0000000,
             /*dwShareMode*/ 3u,
             /*lpSecurityAttributes*/ NULL,
             /*dwCreationDisposition*/ 3u,
             /*dwFlagsAndAttributes*/ 0,
             /*hTemplateFile*/ NULL);
  hConsoleHandle = result;
  return result;
}

// 0x45b3c0  ___termcon
// Documented as crt/crt in doc/functions.md.
HANDLE __termcon()
{
  HANDLE result; // eax

  if ( hObject != (HANDLE)-1 && hObject != (HANDLE)-2 )
    CloseHandle(/*hObject*/ hObject);
  result = hConsoleHandle;
  if ( hConsoleHandle != (HANDLE)-1 && hConsoleHandle != (HANDLE)-2 )
    return (HANDLE)CloseHandle(/*hObject*/ hConsoleHandle);
  return result;
}
