// Declarations for every reconstructed function.
//
// Reconstructed from Bugs.exe (PC v1.0) by tools/recon.py.
// Generated file -- do not edit by hand; see recon/README.md.

#pragma once

#include "defs.h"


// -- alternate entry points --------------------------------------------------
//
// Addresses the code calls that are not functions of their own: they sit part
// way into another function, past its prologue. There is nothing to declare
// them as, so they are named by address, as the game's code is elsewhere.

#define sub_4516ED     ((int (*)())0x4516ED)


// -- track -----------------------------------------------------------------

// 0x401000
int __cdecl InitTrack(_DWORD *a1, int *a2, int a3, int a4, unsigned int *a5, int a6);
// 0x401330
void __cdecl FiniTrack(int a1);
// 0x4013c0
int __cdecl SetTrackSource(_DWORD *a1, int a2, int a3, int a4);
// 0x401490
int __cdecl ResetTrack(_DWORD *a1);
// 0x4014f0
int __cdecl RefillTrackBuffer(int a1, unsigned int a2, int a3);
// 0x4018d0
int __cdecl PlayTrack(int a1);
// 0x401910
int __cdecl StopTrack(int a1);
// 0x401930
BOOL __cdecl CheckTrackDone(int a1);
// 0x4019a0
unsigned int __cdecl UpdateTrack(unsigned int a1, _DWORD *a2);
// 0x401af0
int __cdecl ConvertTrackAudio(int a1, const void *a2, void *a3, int a4);
// 0x401be0
__int16 *__cdecl CvtStereoAdpcm(__int16 *a1, char *a2, _WORD *a3, int a4);
// 0x401e10
unsigned __int8 *__cdecl CvtMonoAdpcm(int a1, unsigned __int8 *a2, _WORD *a3, int a4);


// -- pad_402000 ------------------------------------------------------------

// 0x402000
int __stdcall EnumDInputDevs(int a1, int a2);
// 0x402180
int __cdecl ReadJoystick(_DWORD *a1, _DWORD *a2, _DWORD *a3);
// 0x402250
_UNKNOWN **__cdecl GetKeyName(int a1);
// 0x402290
_BYTE *MapAltKeyboardInput();
// 0x4023e0
_BYTE *__thiscall MapKeyboardInput(void *this);
// 0x4025b0
int __cdecl sub_4025B0(int a1);
// 0x402610
int InitDInput();
// 0x402790
void FiniDInput();
// 0x402810
int ReadKbdDInput();
// 0x4028a0
int ReadKbdWinMsg();
// 0x402fd0
// attributes: thunk;
// 0x402fe0
int PadGetState();
// 0x402ff0
int __cdecl PadInitDirect(int a1, int a2);
// 0x403010
void MapJoystickInput();
// 0x403210
int GetPressedButton();
// 0x403260
char *__cdecl GetButtonName(unsigned int a1);


// -- unk_4032e0 ------------------------------------------------------------

// 0x4032e0
int sub_4032E0();
// 0x403300
int __cdecl sub_403300(__int16 a1);
// 0x4033f0
_DWORD *__cdecl sub_4033F0(_DWORD *a1, int a2);
// 0x403470
_DWORD *__cdecl sub_403470(_DWORD *a1, int a2);
// 0x4034f0
int __cdecl sub_4034F0(_DWORD *a1, _DWORD *a2, int a3);
// 0x403b00
int __cdecl sub_403B00(__int16 a1);
// 0x403b70
int __cdecl sub_403B70(int a1, int *a2);
// 0x403cc0
int __cdecl sub_403CC0(__int16 a1);
// 0x403d30
int __cdecl sub_403D30(_DWORD *a1, int *a2);
// 0x403e70
void sub_403E70();
// 0x403ed0
int __cdecl sub_403ED0(int a1, int a2, int a3);
// 0x404220
int __cdecl sub_404220(int a1, int a2, int a3);
// 0x4045f0
int __cdecl sub_4045F0(int a1, int a2, int a3);
// 0x404970
int __cdecl sub_404970(int a1, int a2, int a3);
// 0x404d20
int __cdecl sub_404D20(int **a1, float *a2, int a3);
// 0x404f20
int __cdecl sub_404F20(int a1, float *a2, int a3);
// 0x405180
int __cdecl sub_405180(float *a1, float *a2, int a3);
// 0x405390
int __cdecl sub_405390(float *a1, float *a2, int a3);


// -- misc_4055d0 -----------------------------------------------------------

// 0x4055d0
HANDLE ConPrintf(char *Format, ...);
// 0x405640
int ShowRetryDialog(char *Format, ...);


// -- fs --------------------------------------------------------------------

// 0x4056c0
int __cdecl FsOpen(char *FileName, int a2);
// 0x405760
FILE *__cdecl FsFOpen(char *FileName, char *Mode);
// 0x405800
int __cdecl FsSeek(int FileHandle, int Offset, int Origin);
// 0x405820
int __cdecl FsRead(int FileHandle, void *DstBuf, unsigned int MaxCharCount);
// 0x405840
int __cdecl FsClose(int FileHandle);
// 0x405850
int FsFindRoot();


// -- winmain ---------------------------------------------------------------

// 0x405950
int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd);
// 0x4061b0
int sub_4061B0();
// 0x406600
int sub_406600();
// 0x406f00
int sub_406F00();
// 0x4071b0
char sub_4071B0();
// 0x407510
size_t sub_407510();
// 0x407710
size_t sub_407710();
// 0x4078b0
int __cdecl sub_4078B0(int a1, _DWORD *a2, _DWORD *a3);
// 0x4078f0
int *__cdecl sub_4078F0(int *a1, int *a2);
// 0x407950
__int16 __cdecl sub_407950(int a1, int a2);
// 0x407990
int __cdecl sub_407990(int *a1);


// -- gte -------------------------------------------------------------------

// 0x4079e0
int __cdecl SquareRoot0(int a1);
// 0x407a00
int __cdecl ratan2(int a1, int a2);
// 0x407a30
int __cdecl rcos(int a1);
// 0x407a50
int __cdecl rsin(__int16 a1);
// 0x407a70
_WORD *__cdecl RotMatrix(__int16 *a1, _WORD *a2);
// 0x407b10
_WORD *__cdecl RotMatrixYXZ(__int16 *a1, _WORD *a2);
// 0x407bb0
_WORD *__cdecl RotMatrixZYX(__int16 *a1, _WORD *a2);
// 0x407c50
__int16 *__cdecl RotMatrixX(int a1, __int16 *a2);
// 0x407dc0
__int16 *__cdecl RotMatrixY(int a1, __int16 *a2);
// 0x407f20
__int16 *__cdecl RotMatrixZ(int a1, __int16 *a2);
// 0x408080
__int16 *__cdecl ScaleMatrix(__int16 *a1, _DWORD *a2);
// 0x408120
_DWORD *__cdecl TransMatrix(_DWORD *a1, _DWORD *a2);
// 0x408140
int *__cdecl ApplyMatrix(__int16 *a1, __int16 *a2, int *a3);
// 0x4081e0
_DWORD *__cdecl ApplyMatrixSV(__int16 *a1, __int16 *a2, _DWORD *a3);
// 0x408280
int *__cdecl ApplyMatrixLV(__int16 *a1, _DWORD *a2, int *a3);
// 0x408310
_WORD *__cdecl MulMatrix0(__int16 *a1, __int16 *a2, _WORD *a3);
// 0x4084b0
__int16 *__cdecl MulMatrix2(__int16 *a1, __int16 *a2);
// 0x408660
int __cdecl MulMatrix2_0(__int16 *a1, int a2);
// 0x4086b0
int __cdecl CompMatrixLV(__int16 *a1, __int16 *a2, int a3);
// 0x4088d0
__int16 *__cdecl CompMatrix2LV(__int16 *a1, __int16 *a2);
// 0x408910
void __cdecl sub_408910(const void *a1);
// 0x408930
int __cdecl sub_408930(int a1);
// 0x408a40
_WORD *__cdecl IdentMatrix(_WORD *a1);
// 0x408a70
int PadInfoMode();
// 0x408a80
int __cdecl gte_ApplyMatrix(__int16 *a1, __int16 *a2, int *a3);
// 0x408b20
_DWORD *__cdecl gte_ApplyMatrixSV(__int16 *a1, __int16 *a2, _DWORD *a3);
// 0x408bc0
int __cdecl Square0(_DWORD *a1, _DWORD *a2);


// -- unk_408bf0 ------------------------------------------------------------

// 0x408bf0
int __cdecl sub_408BF0(__int16 *a1);
// 0x408c60
int __cdecl sub_408C60(__int16 *a1, int *a2);
// 0x408d10
int __cdecl sub_408D10(__int16 *a1);
// 0x408d40
_WORD *__cdecl sub_408D40(_WORD *a1);
// 0x408d70
int sub_408D70();
// 0x408e10
int __cdecl sub_408E10(int *a1);
// 0x408e30
int sub_408E30();
// 0x408f60
_DWORD *__cdecl sub_408F60(_DWORD *a1);
// 0x408f70
_WORD *__cdecl sub_408F70(_WORD *a1);
// 0x408f90
int sub_408F90();
// 0x409540
FILE *__cdecl sub_409540(char *FileName);
// 0x4095c0
int __cdecl sub_4095C0(char *FileName);
// 0x409610
int __stdcall sub_409610(_DWORD *a1, int a2);
// 0x409680
int __stdcall sub_409680(_DWORD *a1, int a2, const char *a3, int a4, int a5, int a6);
// 0x409750
BOOL __stdcall Callback(GUID *lpGUID, const char *a2, LPSTR a3, LPVOID a4);
// 0x409880
int sub_409880();
// 0x4099b0
int sub_4099B0();


// -- cfg -------------------------------------------------------------------

// 0x409a40
FILE *WriteConfig();
// 0x409ac0
char __cdecl SetConfigDefaults(char a1, int a2);
// 0x409ce0
void SaveAltConfig();
// 0x409d00
void LoadAltConfig();
// 0x409d20
FILE *ReadConfig();


// -- unk_409e90 ------------------------------------------------------------

// 0x409e90
int sub_409E90();
// 0x409fc0
int sub_409FC0();
// 0x40a0b0
int __cdecl sub_40A0B0(_DWORD *a1, _DWORD *a2, _DWORD *a3);
// 0x40a1b0
int __cdecl sub_40A1B0(_DWORD *a1, void *a2);
// 0x40a250
int __cdecl sub_40A250(int a1);
// 0x40a590
__int16 __cdecl sub_40A590(int a1);
// 0x40a720
int __cdecl sub_40A720(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, char a9, int a10, char a11);
// 0x40ab50
int __cdecl sub_40AB50(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, char a9, int a10, char a11);
// 0x40b190
int __cdecl sub_40B190(__int16 *a1);
// 0x40b5b0
int __cdecl sub_40B5B0(__int16 *a1);
// 0x40b9e0
int __cdecl sub_40B9E0(int a1);
// 0x40bcc0
int __cdecl sub_40BCC0(int a1, int a2);
// 0x40be70
int __cdecl sub_40BE70(int a1);
// 0x40c0d0
int __cdecl sub_40C0D0(int a1);
// 0x40c3b0
int __cdecl sub_40C3B0(int a1, int a2);
// 0x40c640
int __cdecl sub_40C640(int a1, int a2);
// 0x40c8b0
int __cdecl sub_40C8B0(__int16 *a1);
// 0x40c980
int __cdecl sub_40C980(__int16 *a1);
// 0x40cc30
int __cdecl sub_40CC30(int a1, int a2);
// 0x40cc70
int __cdecl sub_40CC70(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3);
// 0x40cce0
int __cdecl sub_40CCE0(int a1);


// -- gs --------------------------------------------------------------------

// 0x40cd80
char __cdecl GsSetProjection(int a1);
// 0x40cdc0
int __cdecl GsMapModelingData(int a1);
// 0x40ce00
int __cdecl sub_40CE00(int a1, int a2);
// 0x40ce90
int __cdecl GsInitCoordinate2(int a1, int a2);
// 0x40cf10
int __cdecl GsSetRefView2L(_DWORD *a1);


// -- unk_40d200 ------------------------------------------------------------

// 0x40d200
int __cdecl sub_40D200(unsigned __int16 a1, unsigned __int16 a2, unsigned __int16 a3, unsigned __int16 a4);
// 0x40d440
void __cdecl sub_40D440(int a1, int a2, int a3);
// 0x40d4a0
int sub_40D4A0();
// 0x40d520
int sub_40D520();
// 0x40d580
float *__cdecl sub_40D580(float *a1, float *a2);


// -- rogl ------------------------------------------------------------------

// 0x40d740
int __cdecl sub_40D740(HINSTANCE hInstance);
// 0x40d8b0
BOOL __cdecl sub_40D8B0(DWORD a1, DWORD a2, DWORD a3, HWND a4);
// 0x40d970
int __cdecl sub_40D970(char a1, char a2, char a3);
// 0x40db50
int sub_40DB50();
// 0x40dce0
HWND __cdecl sub_40DCE0(HWND *a1);
// 0x40dda0
int sub_40DDA0();
// 0x40df80
int SetGLPixelFormat();
// 0x40e0b0
int TestGL();
// 0x40e210
HMODULE UnloadGL();
// 0x40e230
void __cdecl sub_40E230(int a1);
// 0x40e2d0
LRESULT __stdcall sub_40E2D0(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam);
// 0x40e820
HWND __cdecl sub_40E820(HINSTANCE hInstance, int nCmdShow);


// -- unk_40f040 ------------------------------------------------------------

// 0x40f040
int __cdecl sub_40F040(int a1);
// 0x40f1e0
int __cdecl sub_40F1E0(int a1);
// 0x40f3d0
int __cdecl sub_40F3D0(char a1, int a2, char a3);
// 0x40f5a0
int __cdecl sub_40F5A0(float a1, int a2, char a3);
// 0x40f770
int __cdecl sub_40F770(_DWORD *a1);
// 0x40f980
int __cdecl sub_40F980(_DWORD *a1);
// 0x40fb20
int __cdecl sub_40FB20(unsigned __int16 a1, float *a2);
// 0x40fc90
int __cdecl sub_40FC90(unsigned __int16 a1, float *a2);
// 0x40fe50
int __cdecl sub_40FE50(_DWORD *a1);
// 0x40ff20
int __cdecl sub_40FF20(int a1, int a2, int a3);
// 0x4113c0
char *sub_4113C0();
// 0x4113e0
int __cdecl sub_4113E0(int a1);
// 0x411780
int sub_411780();
// 0x4117b0
int __cdecl sub_4117B0(int a1);
// 0x411b60
unsigned int __cdecl sub_411B60(int a1);
// 0x411ba0
int __cdecl sub_411BA0(int a1, int a2, int a3);
// 0x412540
int sub_412540();
// 0x413a20
int sub_413A20();
// 0x413ab0
int sub_413AB0();
// 0x413bd0
int sub_413BD0();
// 0x413e30
int __cdecl sub_413E30(int a1, int a2, int a3, int a4, int a5);
// 0x413ef0
int sub_413EF0();
// 0x413f00
int sub_413F00();
// 0x414010
int __cdecl sub_414010(int a1, int a2, int a3, int a4);
// 0x4140b0
int sub_4140B0();
// 0x4143e0
int sub_4143E0();
// 0x414620
int __cdecl sub_414620(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, int a6);
// 0x414bd0
int __cdecl sub_414BD0(int a1, int *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, int a6);
// 0x415a50
int __cdecl sub_415A50(_DWORD *a1, _DWORD *a2, int *a3, _DWORD *a4, _DWORD *a5, int a6);
// 0x416240
int __cdecl sub_416240(_DWORD *a1, _DWORD *a2, int *a3, _DWORD *a4, _DWORD *a5, int a6);
// 0x416c10
void __cdecl sub_416C10(_DWORD *a1);
// 0x416e90
void __cdecl sub_416E90(_DWORD *a1);
// 0x417080
int sub_417080();
// 0x417110
char __cdecl sub_417110(char a1, char a2, char a3);
// 0x417130
char __cdecl sub_417130(char a1, char a2, char a3);
// 0x417150
__int16 sub_417150();
// 0x4171a0
__int16 sub_4171A0();
// 0x4171c0
int __cdecl sub_4171C0(int a1, LONG a2, LONG a3, int a4);
// 0x417340
void sub_417340();
// 0x417380
int __cdecl sub_417380(HDC hdc);
// 0x4173c0
int __cdecl sub_4173C0(int a1, int a2);
// 0x4177c0
int __cdecl sub_4177C0(int a1, int a2);
// 0x417920
int __cdecl sub_417920(_DWORD *a1, _DWORD *a2);
// 0x417bc0
int __cdecl sub_417BC0(_DWORD *a1, _DWORD *a2);
// 0x417ca0
int __cdecl sub_417CA0(int *a1, __int16 a2);
// 0x418230
int (*sub_418230())();
// 0x418370
int sub_418370();
// 0x418440
int sub_418440();
// 0x418520
int sub_418520();
// 0x418620
int sub_418620();
// 0x418780
int sub_418780();
// 0x4188b0
int sub_4188B0();
// 0x418a80
int sub_418A80();
// 0x418c30
int sub_418C30();
// 0x418df0
int sub_418DF0();
// 0x418fb0
int sub_418FB0();
// 0x4191d0
int sub_4191D0();
// 0x419400
int sub_419400();
// 0x4195c0
int sub_4195C0();
// 0x419790
int sub_419790();
// 0x419960
int sub_419960();
// 0x419bd0
int sub_419BD0();
// 0x419e80
int sub_419E80();
// 0x41a1c0
int sub_41A1C0();
// 0x41a590
FILE *__cdecl sub_41A590(char *Str, int a2);
// 0x41a680
int __cdecl sub_41A680(int a1);
// 0x41a750
unsigned int __cdecl sub_41A750(int a1, int a2, int a3);
// 0x41a780
unsigned int __cdecl sub_41A780(int a1, int a2, int a3);
// 0x41a7b0
void *sub_41A7B0();
// 0x41a830
void *__cdecl sub_41A830(const char *a1);


// -- pcrsoft8 --------------------------------------------------------------

// 0x41a970
int __cdecl sub_41A970(HWND a1, int a2, int a3, int a4);


// -- unk_41ac70 ------------------------------------------------------------

// 0x41ac70
LPDIRECTDRAW sub_41AC70();
// 0x41acd0
int sub_41ACD0();
// 0x41ad60
int sub_41AD60();
// 0x41adb0
int sub_41ADB0();
// 0x41ae10
int __cdecl sub_41AE10(int a1);
// 0x41ae80
int sub_41AE80();
// 0x41af40
int __cdecl sub_41AF40(int a1, LONG a2, LONG a3, int a4);
// 0x41b140
int __cdecl sub_41B140(int a1);
// 0x41b190
void *__cdecl sub_41B190(HDC hdc);
// 0x41b2f0
char __cdecl sub_41B2F0(int a1, __int16 a2);
// 0x41b750
int (__cdecl *sub_41B750())(int, int, int, int, int, int, int, int);
// 0x41b820
__int16 __usercall sub_41B820/*@<ax>*/(int a1/*@<eax>*/);
// 0x41b8a0
int sub_41B8A0();
// 0x41b950
int __thiscall sub_41B950(void *this);
// 0x41ba90
int sub_41BA90();
// 0x41bbf0
int sub_41BBF0();
// 0x41bd50
int sub_41BD50();
// 0x41bec0
int sub_41BEC0();
// 0x41c030
int sub_41C030();
// 0x41c1a0
int sub_41C1A0();
// 0x41c4b0
signed int sub_41C4B0();
// 0x41c7e0
int __cdecl sub_41C7E0(_DWORD *a1, int a2, int a3);
// 0x41c800
char __cdecl sub_41C800(_DWORD *a1);
// 0x41c870
BOOL sub_41C870();
// 0x41c880
int sub_41C880();
// 0x41c8d0
_DWORD *__cdecl sub_41C8D0(int a1);
// 0x41c920
int __cdecl sub_41C920(int *a1, int a2);
// 0x41c990
int __cdecl sub_41C990(int *a1, int a2);
// 0x41ca10
int __cdecl sub_41CA10(int a1, float *a2);
// 0x41ccf0
int __cdecl sub_41CCF0(float *a1, float *a2);
// 0x41cdd0
int __cdecl sub_41CDD0(int a1);
// 0x41cee0
int __cdecl sub_41CEE0(int a1, __int16 a2);
// 0x41d0d0
int __cdecl sub_41D0D0(int a1);
// 0x41d330
int sub_41D330();
// 0x41d530
double __cdecl sub_41D530(char *a1);
// 0x41d640
LPDIRECTSOUND sub_41D640();
// 0x41d670
int sub_41D670();
// 0x41d6a0
void sub_41D6A0();
// 0x41d6b0
LPDIRECTSOUND __cdecl sub_41D6B0(int a1);
// 0x41d910
int sub_41D910();
// 0x41d930
int __cdecl sub_41D930(char *a1);
// 0x41d980
char sub_41D980();
// 0x41da80
int sub_41DA80();
// 0x41ddf0
LPDIRECTSOUND sub_41DDF0();
// 0x41de10
int sub_41DE10();
// 0x41de40
int sub_41DE40();
// 0x41dec0
unsigned int __cdecl sub_41DEC0(int a1);
// 0x41df30
void __cdecl sub_41DF30(int a1, __int16 a2, __int16 a3, char a4);
// 0x41e0b0
LPDIRECTSOUND __cdecl sub_41E0B0(int *a1);
// 0x41e0f0
LPDIRECTSOUND __cdecl sub_41E0F0(int *a1);
// 0x41e130
LPDIRECTSOUND sub_41E130();
// 0x41e160
void __cdecl sub_41E160(int *a1);
// 0x41e260
LPDIRECTSOUND sub_41E260();
// 0x41e300
int sub_41E300();
// 0x41e330
char sub_41E330();
// 0x41e6b0
LPDIRECTSOUNDBUFFER *__cdecl sub_41E6B0(;
// 0x41e7d0
int __cdecl sub_41E7D0(DWORD a1, char *a2, char *a3, unsigned int a4, char *a5, LPDIRECTSOUNDBUFFER *a6);
// 0x41e9d0
LPDIRECTSOUNDBUFFER *__cdecl sub_41E9D0(int a1);
// 0x41ee30
LPDIRECTSOUND __cdecl sub_41EE30(__int16 a1);
// 0x41f4d0
int sub_41F4D0();
// 0x41f590
LPDIRECTSOUND sub_41F590();
// 0x41f650
__int16 __cdecl sub_41F650(int a1);
// 0x41f6a0
__int16 __cdecl sub_41F6A0(_DWORD *a1, int a2);
// 0x41f870
int sub_41F870();
// 0x41f880
__int16 __cdecl sub_41F880(int a1, int a2);
// 0x420040
__int16 __cdecl sub_420040(int a1, int a2);
// 0x420970
FILE *__cdecl sub_420970(char *FileName, void *Buffer);
// 0x4209e0
int sub_4209E0();
// 0x420ba0
char __usercall sub_420BA0/*@<al>*/(int a1/*@<ebp>*/, unsigned int a2/*@<edi>*/, _BYTE *a3, unsigned __int8 *a4, _BYTE *a5);
// 0x420d90
int __cdecl sub_420D90(int a1, _BYTE *a2, int a3, int a4, int a5);
// 0x4217f0
int __cdecl sub_4217F0(int a1, _BYTE *a2, int a3, int a4, int a5);
// 0x421cf0
int __cdecl sub_421CF0(int a1, int a2, int a3, int a4, int a5, int a6, _BYTE *a7);
// 0x421fd0
int __cdecl sub_421FD0(int a1, int a2, int a3, int a4, int a5, int a6, _BYTE *a7);
// 0x4220d0
int sub_4220D0();
// 0x422a20
int __cdecl sub_422A20(int a1, int a2);
// 0x422ac0
char sub_422AC0();
// 0x423510
int __cdecl sub_423510(int a1, int a2, int a3);
// 0x423960
int __cdecl sub_423960(int a1);
// 0x423ab0
void *sub_423AB0();
// 0x423ae0
void *sub_423AE0();
// 0x423b50
void sub_423B50();
// 0x423bb0
void sub_423BB0();
// 0x423c50
int __cdecl sub_423C50(int a1, int a2);
// 0x423f30
unsigned __int16 *__cdecl sub_423F30(int a1);
// 0x424820
__int16 __cdecl sub_424820(int a1, int a2);
// 0x4248c0
int sub_4248C0();
// 0x424a90
int __cdecl sub_424A90(int a1, int a2);
// 0x424ce0
char *__cdecl sub_424CE0(char *Str);
// 0x424f70
int __cdecl sub_424F70(double a1, double a2);
// 0x424fc0
void __cdecl sub_424FC0(int a1, int a2, int a3, double a4, double a5);
// 0x425170
void __cdecl sub_425170(double *a1, double *a2, double *a3, double a4, double a5, double a6);
// 0x425450
void __cdecl sub_425450(double a1, double a2, double a3, long double *a4, double *a5, int a6);
// 0x425610
void __usercall sub_425610(unsigned int a1/*@<esi>*/, char *Str, _WORD *a3);
// 0x425a60
__int64 __cdecl sub_425A60(int a1);
// 0x425bd0
int __cdecl sub_425BD0(int a1, int a2);
// 0x425db0
int __cdecl sub_425DB0(int a1, int a2, int a3);
// 0x425de0
int __cdecl sub_425DE0(int a1, int a2, int a3, int a4);
// 0x425f90
int __cdecl sub_425F90(int a1, int a2, int a3, int a4);
// 0x426090
int __cdecl sub_426090(int a1, int a2, int a3, int a4);
// 0x4261a0
int __cdecl sub_4261A0(int a1, int a2, int a3, int a4);
// 0x4263f0
int __cdecl sub_4263F0(int a1, int a2, int a3, int a4);
// 0x426620
int __cdecl sub_426620(int a1, int a2, int a3, int a4);
// 0x426820
FILE *__cdecl sub_426820(char *FileName, int a2, void *a3);
// 0x426980
FILE *__cdecl sub_426980(char *FileName, int a2, void *a3, int ElementCount);
// 0x426b10
char *__cdecl sub_426B10(char *ArgList, int a2, double a3, double a4, double a5, char a6);
// 0x426f10
char *__cdecl sub_426F10(char *ArgList, int a2, double a3);
// 0x4270e0
_BYTE *__cdecl sub_4270E0(char *ArgList, int a2);
// 0x427230
int __cdecl sub_427230(int a1, int a2, int a3, void *a4, int a5);
// 0x427530
int sub_427530();
// 0x4276e0
int __cdecl sub_4276E0(int a1);
// 0x4279b0
int __cdecl sub_4279B0(int a1);
// 0x427b50
int __cdecl sub_427B50(_WORD *a1, int a2, unsigned int a3);
// 0x427dc0
unsigned int *__cdecl sub_427DC0(unsigned int *a1);
// 0x427e50
unsigned int __cdecl sub_427E50(int a1, int a2, int a3);
// 0x428110
int __cdecl CompareFunction(unsigned int *a1, unsigned int *a2);
// 0x428170
int __cdecl sub_428170(_WORD *a1, int a2, unsigned int a3);
// 0x428490
int __cdecl sub_428490(int a1, unsigned __int8 *a2, int a3);
// 0x428640
int sub_428640();
// 0x428740
int __cdecl sub_428740(int a1, int a2, int *a3);
// 0x4287d0
int __cdecl sub_4287D0(int a1, _BYTE *a2);
// 0x428840
int __cdecl sub_428840(int a1, int a2, int a3);
// 0x428b70
int __cdecl sub_428B70(;
// 0x428e90
_DWORD *__cdecl sub_428E90(;
// 0x429000
unsigned int __cdecl sub_429000(_DWORD *a1);
// 0x429e60
unsigned int sub_429E60();
// 0x42a010
signed __int8 sub_42A010();
// 0x42a150
int __usercall sub_42A150/*@<eax>*/(char a1/*@<efl>*/);
// 0x42a6a0
int __usercall sub_42A6A0/*@<eax>*/(char a1/*@<efl>*/);


// -- logic -----------------------------------------------------------------

// 0x42a850
int __cdecl TestLogicCond(int a1, _BYTE *a2);
// 0x42a880
int CondTrue();
// 0x42a890
BOOL __cdecl CondCiseq(int a1, int a2);
// 0x42a8b0
BOOL __cdecl CondCseq(int a1, int a2);
// 0x42a8e0
BOOL __cdecl CondCisne(int a1, int a2);
// 0x42a900
BOOL __cdecl CondCsne(int a1, int a2);
// 0x42a930
BOOL __cdecl CondCisltu(int a1, int a2);
// 0x42a950
BOOL __cdecl CondCislt(int a1, int a2);
// 0x42a970
BOOL __cdecl CondCsltu(int a1, int a2);
// 0x42a9a0
BOOL __cdecl CondCslt(int a1, int a2);
// 0x42a9d0
BOOL __cdecl CondCisleu(int a1, int a2);
// 0x42a9f0
BOOL __cdecl CondCisgtu(int a1, int a2);
// 0x42aa10
BOOL __cdecl CondCisgt(int a1, int a2);
// 0x42aa30
BOOL __cdecl CondCsgtu(int a1, int a2);
// 0x42aa60
BOOL __cdecl CondCsgt(int a1, int a2);
// 0x42aa90
BOOL __cdecl CondCisgeu(int a1, int a2);
// 0x42aab0
BOOL __cdecl CondTismnz(int a1, int a2);
// 0x42aad0
BOOL __cdecl CondTisaz(int a1, int a2);
// 0x42aaf0
BOOL __cdecl CondCigeq(int a1, int a2);
// 0x42ab20
BOOL __cdecl CondCigne(int a1, int a2);
// 0x42ab50
BOOL __cdecl CondCgne(int a1, int a2);
// 0x42ab80
BOOL __cdecl CondCgeq(int a1, int a2);
// 0x42abb0
BOOL __cdecl CondCigltu(int a1, int a2);
// 0x42abd0
BOOL __cdecl CondCiglt(int a1, int a2);
// 0x42ac00
BOOL __cdecl CondCgltu(int a1, int a2);
// 0x42ac30
BOOL __cdecl CondCigleu(int a1, int a2);
// 0x42ac50
BOOL __cdecl CondCiggtu(int a1, int a2);
// 0x42ac70
BOOL __cdecl CondCiggt(int a1, int a2);
// 0x42aca0
BOOL __cdecl CondCggtu(int a1, int a2);
// 0x42acd0
BOOL __cdecl CondCiggeu(int a1, int a2);
// 0x42acf0
BOOL __cdecl CondTigmnz(int a1, int a2);
// 0x42ad20
BOOL __cdecl CondTigaz(int a1, int a2);
// 0x42ad50
BOOL sub_42AD50();
// 0x42ad70
BOOL sub_42AD70();
// 0x42ad90
BOOL sub_42AD90();
// 0x42ada0
BOOL sub_42ADA0();
// 0x42adc0
BOOL __cdecl sub_42ADC0(int a1, int a2);
// 0x42ade0
BOOL __cdecl sub_42ADE0(int a1, int a2);
// 0x42ae10
BOOL sub_42AE10();
// 0x42ae30
BOOL sub_42AE30();
// 0x42ae50
BOOL __cdecl sub_42AE50(int a1);
// 0x42ae60
BOOL __cdecl sub_42AE60(int a1);
// 0x42ae70
BOOL __cdecl sub_42AE70(int a1, int a2);
// 0x42ae90
BOOL __cdecl sub_42AE90(int a1, int a2);
// 0x42aeb0
BOOL __cdecl sub_42AEB0(int a1, int a2);
// 0x42af60
BOOL __cdecl sub_42AF60(int a1, int a2);
// 0x42b010
BOOL __cdecl sub_42B010(int a1, int a2);
// 0x42b0c0
BOOL __cdecl sub_42B0C0(int a1, int a2);
// 0x42b170
BOOL __cdecl sub_42B170(int a1, int a2);
// 0x42b190
BOOL __cdecl sub_42B190(int a1, int a2);
// 0x42b1b0
BOOL __cdecl sub_42B1B0(int a1, int a2);
// 0x42b1d0
BOOL __cdecl sub_42B1D0(int a1, int a2);
// 0x42b210
BOOL __cdecl sub_42B210(int a1, int a2);
// 0x42b250
BOOL __cdecl sub_42B250(int a1, int a2);
// 0x42b2a0
BOOL __cdecl sub_42B2A0(int a1, int a2);
// 0x42b2e0
BOOL __cdecl sub_42B2E0(int a1, int a2);
// 0x42b320
BOOL __cdecl sub_42B320(int a1, int a2);
// 0x42b360
BOOL sub_42B360();
// 0x42b370
BOOL __cdecl CondTisxz(int a1, int a2);
// 0x42b390
BOOL __cdecl CondTigxz(int a1, int a2);
// 0x42b3c0
BOOL CondTbdact();
// 0x42b3e0
BOOL CondTbuact();
// 0x42b400
BOOL __cdecl sub_42B400(int a1, int a2);
// 0x42b450
BOOL CondTpnmv();
// 0x42b470
BOOL sub_42B470();
// 0x42b490
BOOL CondTpmov();
// 0x42b4b0
BOOL sub_42B4B0();
// 0x42b4d0
BOOL __cdecl sub_42B4D0(int a1, int a2);
// 0x42b500
BOOL __cdecl sub_42B500(int a1, int a2);
// 0x42b520
BOOL __cdecl sub_42B520(int a1, int a2);
// 0x42b580
BOOL __cdecl sub_42B580(int a1, int a2);
// 0x42b5e0
BOOL __cdecl sub_42B5E0(int a1, int a2);
// 0x42b600
BOOL __cdecl sub_42B600(int a1, int a2);
// 0x42b620
BOOL __cdecl sub_42B620(int a1, int a2);
// 0x42b640
BOOL __cdecl sub_42B640(int a1, int a2);
// 0x42b660
BOOL __cdecl sub_42B660(int a1, int a2);
// 0x42b680
BOOL sub_42B680();
// 0x42b6a0
BOOL sub_42B6A0();
// 0x42b6c0
BOOL __cdecl sub_42B6C0(int a1, int a2);
// 0x42b7c0
BOOL __cdecl sub_42B7C0(int a1, int a2);
// 0x42b8a0
BOOL __cdecl sub_42B8A0(int a1, int a2);
// 0x42b8d0
BOOL __cdecl sub_42B8D0(int a1, int a2);
// 0x42b900
BOOL __cdecl sub_42B900(int a1, int a2);
// 0x42b940
BOOL __cdecl sub_42B940(int a1, int a2);
// 0x42b980
BOOL __cdecl sub_42B980(int a1, int a2);
// 0x42b9b0
BOOL __cdecl sub_42B9B0(int a1, int a2);
// 0x42ba10
BOOL __cdecl sub_42BA10(int a1, int a2);
// 0x42ba80
BOOL sub_42BA80();
// 0x42baa0
BOOL __cdecl sub_42BAA0(int a1, int a2);
// 0x42baf0
BOOL __cdecl sub_42BAF0(int a1, int a2);
// 0x42bb50
int __cdecl sub_42BB50(int a1, int a2);
// 0x42c1c0
int __cdecl sub_42C1C0(int a1, int a2);
// 0x42c700
BOOL CondTkdesc();
// 0x42c710
BOOL sub_42C710();
// 0x42c720
char __cdecl sub_42C720(int a1, int a2);
// 0x42c760
unsigned __int8 __cdecl RunLogicAction(int a1, int a2);
// 0x42c790
unsigned __int16 __cdecl ActionIncs(int a1, int a2);
// 0x42c7b0
_BYTE *__cdecl ActionIncg(int a1, int a2);
// 0x42c800
int __cdecl ActionMovsi(int a1, int a2);
// 0x42c820
void *__cdecl ActionMovgi(int a1, int a2);
// 0x42c840
unsigned __int16 __cdecl ActionDecs(int a1, int a2);
// 0x42c860
_BYTE *__cdecl ActionDecg(int a1, int a2);
// 0x42c8c0
int __cdecl ActionClrs(int a1, int a2);
// 0x42c8e0
int __cdecl ActionClrg(int a1, int a2);
// 0x42c900
unsigned __int16 __cdecl ActionNegs(int a1, int a2);
// 0x42c920
_BYTE *__cdecl ActionNegg(int a1, int a2);
// 0x42c950
unsigned __int16 __cdecl ActionOrsi(int a1, int a2);
// 0x42c970
_BYTE *__cdecl ActionOrgi(int a1, int a2);
// 0x42c990
unsigned __int16 __cdecl ActionAndsi(int a1, int a2);
// 0x42c9b0
_BYTE *__cdecl ActionAndgi(int a1, int a2);
// 0x42c9d0
char __cdecl ActionMovss(int a1, int a2);
// 0x42c9f0
void *__cdecl ActionMovgg(int a1, int a2);
// 0x42ca20
char __cdecl ActionMovgs(int a1, int a2);
// 0x42ca50
void *__cdecl ActionMovsg(int a1, int a2);
// 0x42ca80
unsigned __int16 __cdecl ActionIncss(int a1, int a2);
// 0x42cab0
_BYTE *__cdecl ActionIncgg(int a1, int a2);
// 0x42cb50
int __cdecl ActionRnds(int a1, int a2);
// 0x42cb80
int __cdecl ActionRndg(int a1, int a2);
// 0x42cbb0
int __cdecl sub_42CBB0(int a1);
// 0x42cbc0
int __cdecl sub_42CBC0(int a1, int a2);
// 0x42cbf0
int __cdecl sub_42CBF0(int a1, int a2);
// 0x42cc30
__int16 __cdecl sub_42CC30(int a1, int a2);
// 0x42cc60
int __cdecl sub_42CC60(int a1);
// 0x42cc70
int __cdecl sub_42CC70(int a1, int a2);
// 0x42ccc0
int __cdecl sub_42CCC0(int a1, int a2);
// 0x42cd60
int __cdecl sub_42CD60(int a1);
// 0x42cd80
int __cdecl sub_42CD80(int a1);
// 0x42cda0
int __cdecl sub_42CDA0(int a1);
// 0x42cdb0
int __cdecl sub_42CDB0(int a1);
// 0x42ce60
void __cdecl sub_42CE60(int a1, int a2);
// 0x42ce90
int sub_42CE90();
// 0x42ced0
unsigned __int16 __cdecl ActionAddsi(int a1, int a2);
// 0x42cef0
_BYTE *__cdecl ActionAddgi(int a1, int a2);
// 0x42cf50
unsigned __int16 __cdecl ActionSubsi(int a1, int a2);
// 0x42cf70
_BYTE *__cdecl ActionSubgi(int a1, int a2);
// 0x42cfd0
int __cdecl sub_42CFD0(int a1, int a2);
// 0x42d020
int __cdecl sub_42D020(int a1, int a2);
// 0x42d070
int __cdecl sub_42D070(int a1, int a2);
// 0x42d0a0
int __cdecl sub_42D0A0(int a1, int a2);
// 0x42d0d0
int __cdecl sub_42D0D0(int a1, int a2);
// 0x42d0e0
int sub_42D0E0();
// 0x42d0f0
void *sub_42D0F0();
// 0x42d110
int __cdecl sub_42D110(int a1, int a2);
// 0x42d130
int __cdecl sub_42D130(int a1, int a2);
// 0x42d150
int __cdecl sub_42D150(int a1, int a2);
// 0x42d170
int __cdecl sub_42D170(int a1, int a2);
// 0x42d190
int sub_42D190();
// 0x42d1a0
char __cdecl ActionGvcrt(int a1, int a2);


// -- unk_42d1e0 ------------------------------------------------------------

// 0x42d1e0
int __cdecl sub_42D1E0(int a1, int a2);
// 0x42d200
int __cdecl sub_42D200(int a1, int a2);
// 0x42d250
int __cdecl sub_42D250(int a1, int a2);
// 0x42d280
int __cdecl sub_42D280(int a1, int a2);
// 0x42d2b0
int __cdecl sub_42D2B0(int a1);
// 0x42d2c0
int __cdecl sub_42D2C0(int a1);
// 0x42d2d0
_WORD *__cdecl sub_42D2D0(_WORD *a1);
// 0x42d300
int __cdecl sub_42D300(int a1, int a2);
// 0x42d310
int __cdecl sub_42D310(int a1, int a2);
// 0x42d350
int __cdecl sub_42D350(int a1, int a2);
// 0x42d390
__int16 __cdecl sub_42D390(int a1, int a2);


// -- pad_42d400 ------------------------------------------------------------

// 0x42d400
void PadSetAct();


// -- unk_42d410 ------------------------------------------------------------

// 0x42d410
int __cdecl sub_42D410(int a1);
// 0x42d440
int __cdecl sub_42D440(int a1);
// 0x42d450
int __cdecl sub_42D450(int a1, int a2);
// 0x42d470
int __cdecl sub_42D470(_DWORD *a1, int a2);
// 0x42d500
void __cdecl sub_42D500(_DWORD *a1, int a2);
// 0x42d5b0
__int16 __cdecl sub_42D5B0(int a1, int a2);
// 0x42d5f0
__int16 __cdecl sub_42D5F0(int a1, int a2);
// 0x42d630
int sub_42D630();
// 0x42d640
char __cdecl sub_42D640(int a1, int a2);
// 0x42d710
void sub_42D710();
// 0x42d720
void sub_42D720();
// 0x42d730
void sub_42D730();
// 0x42d750
int __cdecl sub_42D750(int a1, int a2);
// 0x42d770
int __cdecl sub_42D770(int a1, int a2);
// 0x42d790
int __cdecl sub_42D790(int a1, int a2);
// 0x42d7b0
int __cdecl sub_42D7B0(int a1, int a2);
// 0x42d7d0
int __cdecl sub_42D7D0(int a1, int a2);
// 0x42d7f0
char __cdecl sub_42D7F0(int a1, int a2);
// 0x42d890
void __cdecl sub_42D890(int a1, int a2);
// 0x42d8c0
void sub_42D8C0();
// 0x42d8d0
void sub_42D8D0();
// 0x42d8e0
int __cdecl sub_42D8E0(int a1);
// 0x42d8f0
int __cdecl sub_42D8F0(int a1);
// 0x42d900
unsigned __int16 __cdecl sub_42D900(int a1, int a2);
// 0x42d990
void sub_42D990();
// 0x42d9a0
int __cdecl sub_42D9A0(int a1, int a2);
// 0x42d9b0
int __cdecl sub_42D9B0(int a1, int a2);
// 0x42db10
void sub_42DB10();
// 0x42db20
void sub_42DB20();
// 0x42db30
void sub_42DB30();
// 0x42db40
int sub_42DB40();
// 0x42db50
void sub_42DB50();
// 0x42db60
void sub_42DB60();
// 0x42db70
void sub_42DB70();
// 0x42db80
int __cdecl sub_42DB80(int a1, int a2);
// 0x42dc80
__int16 __cdecl sub_42DC80(int a1, int a2);
// 0x42dcc0
__int16 __cdecl sub_42DCC0(int a1, int a2);
// 0x42dcf0
__int16 __cdecl sub_42DCF0(int a1, int a2);
// 0x42dd30
unsigned __int16 __cdecl sub_42DD30(int a1, int a2);
// 0x42dd70
int *__cdecl sub_42DD70(int a1, int a2);
// 0x42ddf0
int *__cdecl sub_42DDF0(int a1, int a2);
// 0x42ded0
_QWORD *__cdecl sub_42DED0(int a1, int a2);
// 0x42df10
int __cdecl sub_42DF10(int a1, int a2);
// 0x42df30
int __cdecl sub_42DF30(int a1, int a2);
// 0x42df50
int __cdecl sub_42DF50(int a1, int a2);
// 0x42df90
int __cdecl sub_42DF90(int a1, int a2);
// 0x42dfb0
int __cdecl sub_42DFB0(int a1, int a2);
// 0x42e010
int __cdecl sub_42E010(int a1, int a2);
// 0x42e060
int __cdecl sub_42E060(int a1, int a2);
// 0x42e080
int __cdecl sub_42E080(int a1, int a2);
// 0x42e0d0
int __cdecl sub_42E0D0(int a1, int a2);
// 0x42e0f0
FILE *__cdecl sub_42E0F0(int a1, int a2);
// 0x42e330
int *__cdecl sub_42E330(int a1, int a2);
// 0x42e390
void sub_42E390();
// 0x42e3a0
FILE *sub_42E3A0();
// 0x42e3d0
FILE *sub_42E3D0();
// 0x42e400
FILE *sub_42E400();
// 0x42e430
FILE *sub_42E430();
// 0x42e460
int __cdecl sub_42E460(int a1, int a2);
// 0x42e490
int __cdecl sub_42E490(int a1, int a2);
// 0x42e4c0
int sub_42E4C0();
// 0x42e4e0
int sub_42E4E0();
// 0x42e510
int __cdecl sub_42E510(_DWORD *a1, int a2, int a3);
// 0x42e5b0
int __cdecl sub_42E5B0(int FileHandle, char *DstBuf);
// 0x42e740
int __cdecl sub_42E740(int FileHandle);
// 0x42e750
int __cdecl sub_42E750(char *a1, int a2);
// 0x42e770
__int16 __cdecl sub_42E770(int a1);
// 0x42e910
int __cdecl sub_42E910(__int16 a1);
// 0x430fd0
int __cdecl sub_430FD0(int a1);
// 0x4310a0
__int16 __cdecl sub_4310A0(int a1);
// 0x4310f0
char __cdecl sub_4310F0(__int16 a1);
// 0x431160
char __cdecl sub_431160(_BYTE *a1, _BYTE *a2);


// -- misc_4312c0 -----------------------------------------------------------

// 0x4312c0
// attributes: thunk;


// -- unk_4312d0 ------------------------------------------------------------

// 0x4312d0
int sub_4312D0();
// 0x431430
void sub_431430();
// 0x431510
int __cdecl sub_431510(_DWORD *a1, _DWORD *a2, int a3, int a4);
// 0x4318e0
int __cdecl sub_4318E0(int a1, _DWORD *a2, _WORD *a3, int a4);
// 0x431a60
void __cdecl sub_431A60(int a1, int a2);
// 0x433150
int __cdecl sub_433150(int a1, int a2, int *a3);
// 0x433300
int __cdecl sub_433300(int a1, int a2, int *a3);
// 0x4334f0
int __cdecl sub_4334F0(int a1, _WORD *a2, int a3, int a4, int a5);
// 0x433670
int __cdecl sub_433670(_DWORD *a1, __int16 *a2, int a3, int a4);
// 0x4343a0
int __cdecl sub_4343A0(_WORD *a1, int a2, int a3);
// 0x4348b0
int __cdecl sub_4348B0(_WORD *a1, int a2);
// 0x4349b0
_BOOL2 __cdecl sub_4349B0(int a1, _WORD *a2, int a3);
// 0x434b00
_BOOL2 __cdecl sub_434B00(int a1, __int16 *a2, int a3);
// 0x434c70
int __cdecl sub_434C70(int a1, _WORD *a2, int a3);
// 0x434da0
_DWORD *__cdecl sub_434DA0(_DWORD *a1);
// 0x434e40
int __cdecl sub_434E40(_DWORD *a1, _DWORD *a2, int a3, int a4);
// 0x436cd0
unsigned __int16 *__cdecl sub_436CD0(int *a1, __int16 a2);
// 0x436d90
_DWORD *__cdecl sub_436D90(_DWORD *a1, int a2, int a3);
// 0x436f50
char __cdecl sub_436F50(int a1, int a2, int a3);
// 0x437160
int __cdecl sub_437160(int a1, int a2, int a3, int a4);
// 0x437360
_DWORD *__cdecl sub_437360(int a1, _DWORD *a2, int a3, int a4);
// 0x437500
char __cdecl sub_437500(int a1, _DWORD *a2, int a3, int a4);
// 0x437560
__int16 __cdecl sub_437560(int *a1);
// 0x437680
_DWORD *__cdecl sub_437680(int a1, int a2, _DWORD *a3);
// 0x437740
int __cdecl sub_437740(int *a1);
// 0x4377c0
__int16 *__cdecl sub_4377C0(_DWORD *a1);
// 0x437820
_DWORD *__cdecl sub_437820(int a1);
// 0x437860
int __cdecl sub_437860(int a1, _DWORD *a2, int a3);
// 0x437910
int __cdecl sub_437910(int a1, int a2, int **a3);
// 0x437b20
__int16 __cdecl sub_437B20(int a1, int a2, int a3);
// 0x437c20
void __cdecl sub_437C20(__int16 a1);
// 0x437d00
void __cdecl sub_437D00(__int16 a1, _DWORD *a2);
// 0x437f00
int __cdecl sub_437F00(int a1, int a2);
// 0x4380b0
_WORD *__cdecl sub_4380B0(int a1, _WORD *a2, int a3, int a4, int a5);
// 0x4383f0
int __cdecl sub_4383F0(int a1, int a2);
// 0x438610
void __cdecl sub_438610(int a1, int **a2);
// 0x4388e0
int __cdecl sub_4388E0(int a1, int a2, int a3);
// 0x4389a0
_WORD *__cdecl sub_4389A0(int a1, int a2, char a3);
// 0x438ae0
int __cdecl sub_438AE0(int a1, int a2, int a3, _DWORD *a4, int a5);
// 0x439550
int __cdecl sub_439550(int a1, int a2, int a3, unsigned __int16 a4, int a5);
// 0x43a3c0
char __cdecl sub_43A3C0(int a1);
// 0x43a480
int __cdecl sub_43A480(_WORD *a1, _WORD *a2, int a3, int a4);
// 0x43a920
__int16 __usercall sub_43A920/*@<ax>*/(int a1/*@<esi>*/, int a2, int a3, int *a4);
// 0x43a9f0
int __cdecl sub_43A9F0(int a1);
// 0x43f050
__int16 __cdecl sub_43F050(_DWORD *a1);
// 0x43f130
int __cdecl sub_43F130(int a1);
// 0x43f5a0
int __cdecl sub_43F5A0(int a1);
// 0x43f610
int __cdecl sub_43F610(int a1);
// 0x43f620
int __cdecl sub_43F620(int a1);
// 0x43f630
int __cdecl sub_43F630(int a1);
// 0x43f650
int __cdecl sub_43F650(int a1);
// 0x43f670
int __cdecl sub_43F670(int a1);
// 0x43f690
__int16 __cdecl sub_43F690(int a1, __int16 a2);
// 0x440290
__int16 __cdecl sub_440290(int a1);
// 0x444750
__int16 __cdecl sub_444750(int a1);
// 0x444cc0
__int16 __cdecl sub_444CC0(unsigned int *a1);
// 0x445410
void __cdecl sub_445410(int a1);
// 0x445670
int __cdecl sub_445670(int a1);
// 0x445750
__int16 __cdecl sub_445750(int a1);
// 0x445bd0
void __cdecl sub_445BD0(int a1);
// 0x446b00
__int16 __cdecl sub_446B00(int a1);
// 0x446e80
__int16 __cdecl sub_446E80(int a1);
// 0x447250
__int16 __cdecl sub_447250(int a1);
// 0x447330
__int16 __cdecl sub_447330(int a1);
// 0x4473f0
int __cdecl sub_4473F0(int a1);
// 0x447600
int __cdecl sub_447600(int a1);
// 0x447610
int sub_447610();
// 0x447620
void *sub_447620();
// 0x4478a0
void sub_4478A0();
// 0x447910
int sub_447910();
// 0x447a20
char sub_447A20();
// 0x447a50
_DWORD *__cdecl sub_447A50(int a1);
// 0x447bc0
_DWORD *__cdecl sub_447BC0(int a1);
// 0x447cf0
_BYTE *sub_447CF0();
// 0x447eb0
_DWORD *__cdecl sub_447EB0(int a1);
// 0x448970
int __cdecl sub_448970(int a1);


// -- list ------------------------------------------------------------------

// 0x4489c0
unsigned int __cdecl AllocListNode(unsigned int a1, int a2, int a3);
// 0x448a00
int __cdecl InitListPool(_DWORD *a1, unsigned int a2, int a3);
// 0x448a40
_DWORD *__cdecl RemoveListNode(_DWORD *a1, _DWORD *a2);
// 0x448a90
int __cdecl ClearList(_DWORD *a1);
// 0x448ac0
_DWORD *__cdecl AppendListNode(_DWORD **a1, _DWORD *a2);


// -- unk_448af0 ------------------------------------------------------------

// 0x448af0
int sub_448AF0();
// 0x448b60
int __cdecl sub_448B60(int a1, int a2);
// 0x448c10
_DWORD *__cdecl sub_448C10(int a1, int a2);
// 0x448c90
int sub_448C90();
// 0x448d40
int sub_448D40();
// 0x448eb0
unsigned int __cdecl sub_448EB0(__int16 a1, _DWORD *a2, _WORD *a3);
// 0x449010
void sub_449010();
// 0x449020
int sub_449020();
// 0x449110
void *sub_449110();
// 0x4491f0
char sub_4491F0();
// 0x449330
char sub_449330();
// 0x449d00
unsigned int __cdecl sub_449D00(unsigned __int16 a1);
// 0x449d70
__int16 __cdecl sub_449D70(int *a1, __int16 a2, __int16 *a3, __int16 a4);
// 0x449ed0
_DWORD *__cdecl sub_449ED0(_DWORD *a1);
// 0x449ef0
__int16 sub_449EF0();
// 0x44a6f0
unsigned int __cdecl sub_44A6F0(int a1);
// 0x44a880
char __cdecl sub_44A880(int a1, __int16 a2);
// 0x44a970
__int16 *__cdecl sub_44A970(int a1, int a2, int a3);
// 0x44ab10
int __cdecl sub_44AB10(int a1, unsigned __int16 a2, __int16 a3);
// 0x44ace0
int __cdecl sub_44ACE0(int a1, int a2);
// 0x44ae30
char sub_44AE30();
// 0x44b4e0
int __usercall sub_44B4E0/*@<eax>*/(int a1/*@<ebx>*/, int a2);
// 0x44b660
int __cdecl sub_44B660(int a1, int a2, int a3, int a4);
// 0x44bb70
int __cdecl sub_44BB70(int a1, _DWORD *a2, int a3);
// 0x44bcc0
int __cdecl sub_44BCC0(int a1);
// 0x44c000
char __cdecl sub_44C000(char a1, __int16 a2);
// 0x44c030
char __cdecl sub_44C030(char a1, __int16 a2);
// 0x44c060
__int16 sub_44C060();
// 0x44c1e0
int __cdecl sub_44C1E0(int a1, int a2, _DWORD *a3);
// 0x44c2e0
int __usercall sub_44C2E0/*@<eax>*/(int a1/*@<edx>*/, int a2, int a3, int a4);
// 0x44c3e0
__int16 __cdecl sub_44C3E0(int a1, int a2, _DWORD *a3);
// 0x44c620
int __usercall sub_44C620/*@<eax>*/(int a1/*@<edi>*/, int a2);
// 0x44cd00
char __cdecl sub_44CD00(int a1, int a2, _WORD *a3);
// 0x44cdf0
int __cdecl sub_44CDF0(__int16 a1, unsigned __int16 a2, int a3);
// 0x44ce40
_DWORD *sub_44CE40();
// 0x44d110
void __cdecl sub_44D110(_BYTE *a1);
// 0x44d270
int __cdecl sub_44D270(int a1, unsigned __int8 *a2, int a3);
// 0x44e4b0
unsigned int __cdecl sub_44E4B0(int a1, int a2, unsigned int a3);
// 0x44e5a0
unsigned int __cdecl sub_44E5A0(_DWORD *a1, int a2, int *a3);
// 0x44f9c4
void nullsub_2();
// 0x44f9d4
void nullsub_3();
// 0x44fa44
int nullsub_4();
// 0x44fa54
int nullsub_5();
// 0x4509a0
int __cdecl sub_4509A0(int a1);
// 0x4514d2
// local variable allocation has failed, the output may be wrong!;
// 0x4516a5
void sub_4516A5();
// 0x452050
void __noreturn start();
// 0x4563e7
void zerotoxdone();
// 0x4564c7
void notanint();
// 0x4564ce
void evenint();
// 0x458290
int __cdecl sub_458290(unsigned __int16 *a1, unsigned int *a2);
// 0x4582b0
int __cdecl sub_4582B0(unsigned __int16 *a1, unsigned int *a2);
// 0x4582d0
int __cdecl sub_4582D0(unsigned int *a1, int a2);
// 0x458310
int __cdecl sub_458310(unsigned int *a1, int a2);
// 0x45b110
// attributes: thunk;
// 0x45b1b0
int sub_45B1B0();


// -- crt -------------------------------------------------------------------

// 0x4170a0
void _cfltcvt_init_3();
// 0x41d660
int std::ctype<char>::_Term();
// 0x42e380
void __setargv();
// 0x43f590
int __cdecl iswlower(wint_t C);
// 0x43f5b0
int __cdecl iswxdigit(wint_t C);
// 0x43f5d0
int __cdecl iswdigit(wint_t C);
// 0x43f5e0
int __cdecl iswspace(wint_t C);
// 0x43f5f0
int __cdecl iswpunct(wint_t C);
// 0x43f600
int __cdecl iswcntrl(wint_t C);
// 0x44eab0
// attributes: thunk;
// 0x44fdb8
// attributes: thunk;
// 0x44fdbe
// attributes: thunk;
// 0x44fdd0
void *__cdecl malloc(size_t Size);
// 0x44fdf0
int __cdecl _nh_malloc(size_t Size, int a2);
// 0x44fe40
LPVOID __cdecl _heap_alloc(int a1);
// 0x44fe80
int _fpmath();
// 0x44fea0
int (__cdecl *_cfltcvt_init_4())(int, void *Src, int, int, int);
// 0x44fee0
__int64 __usercall _ftol/*@<edx:eax>*/(double a1/*@<st0>*/);
// 0x44ff10
void __cdecl free(void *Block);
// 0x44ff60
int __cdecl _lseek(int FileHandle, int Offset, int Origin);
// 0x450020
int __cdecl _read(int FileHandle, void *DstBuf, unsigned int MaxCharCount);
// 0x450280
int __stdcall _alldiv(unsigned __int64 a1, __int64 a2);
// 0x450330
unsigned __int64 __stdcall _allmul(__int64 a1, __int64 a2);
// 0x450370
int __cdecl fseek(FILE *Stream, int Offset, int Origin);
// 0x450410
int __cdecl ftell(FILE *Stream);
// 0x4505c0
int sprintf(char *const Buffer, const char *const Format, ...);
// 0x450630
int __cdecl vsprintf(char *const Buffer, const char *const Format, va_list ArgList);
// 0x4506a0
int __cdecl fclose(FILE *Stream);
// 0x450720
int fprintf(FILE *const Stream, const char *const Format, ...);
// 0x450760
size_t __cdecl fwrite(const void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream);
// 0x4508b0
FILE *__cdecl _fsopen(const char *FileName, const char *Mode, int ShFlag);
// 0x4508e0
FILE *__cdecl fopen(const char *FileName, const char *Mode);
// 0x450900
int __cdecl _chdir(const char *Path);
// 0x4509b0
int __cdecl rand();
// 0x4509e0
int __cdecl atol(const char *String);
// 0x450a80
int __cdecl atoi(const char *String);
// 0x450a90
size_t __cdecl fread(void *Buffer, size_t ElementSize, size_t ElementCount, FILE *Stream);
// 0x450bd0
void __cdecl rewind(FILE *Stream);
// 0x450c30
void _cinit();
// 0x450c60
void __cdecl __noreturn exit(int Code);
// 0x450c80
void __cdecl __noreturn _exit(int Code);
// 0x450ca0
void __cdecl doexit(UINT uExitCode, int a2, int a3);
// 0x450d50
void __cdecl _initterm(_PVFV *First, _PVFV *Last);
// 0x450d70
char *__cdecl strncpy(char *Destination, const char *Source, size_t Count);
// 0x450e70
char *__cdecl strstr(const char *Str, const char *SubStr);
// 0x450ef0
int sscanf(const char *const Buffer, const char *const Format, ...);
// 0x450f40
char *__cdecl fgets(char *Buffer, int MaxCount, FILE *Stream);
// 0x450fc0
void __usercall _alloca_probe(unsigned int a1/*@<eax>*/, char a2);
// 0x450ff0
int __cdecl _filbuf(FILE *File);
// 0x4510e0
double __cdecl ldexp(double X, int Y);
// 0x451340
int __cdecl _filelength(int FileHandle);
// 0x4513d0
int __cdecl _close(int FileHandle);
// 0x4514b0
double __usercall _CIpow/*@<st0>*/(unsigned __int64 x/*@<st0>*/, double y/*@<st1>*/);
// 0x4514c9
double __cdecl pow(double X, double Y);
// 0x4516d0
double __usercall _CIacos/*@<st0>*/(unsigned __int64 x/*@<st0>*/);
// 0x4516e4
double __cdecl acos(double X);
// 0x4517a0
int __cdecl _flsbuf(int Ch, FILE *File);
// 0x4518d0
int __initstdio();
// 0x451990
char __endstdio();
// 0x4519b0
void __cdecl qsort(;
// 0x451b60
void __cdecl shortsort(unsigned int a1, unsigned int a2, int a3, int (__cdecl *a4)(unsigned int, unsigned int));
// 0x451bc0
char *__cdecl swap(char *a1, char *a2, int a3);
// 0x451bf0
int printf(const char *const Format, ...);
// 0x451c30
void *__cdecl memcpy(void *a1, const void *Src, size_t Size);
// 0x451f70
char *__cdecl strrchr(const char *Str, int Ch);
// 0x451fa0
char *__cdecl _itoa(int Value, char *Buffer, int Radix);
// 0x451fe0
char __cdecl xtoa(unsigned int a1, char *a2, unsigned int a3, int a4);
// 0x4521f0
void __cdecl __noreturn _amsg_exit(int a1);
// 0x452220
int __cdecl _callnewh(size_t Size);
// 0x452240
int _heap_init();
// 0x452280
_DWORD *__sbh_new_region();
// 0x4523f0
BOOL __cdecl __sbh_release_region(LPVOID *lpMem);
// 0x452450
void __cdecl __sbh_decommit_pages(int a1);
// 0x452520
unsigned int __cdecl __sbh_find_block(unsigned int a1, _DWORD *a2, unsigned int *a3);
// 0x452580
void __cdecl __sbh_free_block(int a1, int a2, _BYTE *a3);
// 0x4525e0
_DWORD *__cdecl __sbh_alloc_block(unsigned int a1);
// 0x452820
int __cdecl __sbh_alloc_block_from_page(int a1, unsigned int a2, unsigned int a3);
// 0x4529a0
unsigned int _setdefaultprecision();
// 0x4529c0
BOOL _ms_p5_test_fdiv();
// 0x452a10
int _ms_p5_mp_test_fdiv();
// 0x452a40
char __cdecl _forcdecpt(char *a1);
// 0x452aa0
char *__cdecl _cropzeros(char *a1);
// 0x452b10
BOOL __cdecl _positive(double *a1);
// 0x452b30
_QWORD *__cdecl _fassign(int a1, _QWORD *a2, int a3);
// 0x452b90
_BYTE *__cdecl _cftoe(_DWORD *a1, _BYTE *a2, int a3, int a4);
// 0x452cd0
_BYTE *__cdecl _cftof(_DWORD *a1, char *Src, int a3);
// 0x452dd0
int __cdecl _cftog(_DWORD *a1, char *Src, int a3, int a4);
// 0x452e80
_BYTE *__cdecl _cftoe_g(_DWORD *a1, _BYTE *a2, int a3, int a4);
// 0x452eb0
_BYTE *__cdecl _cftof_g(_DWORD *a1, char *Src, int a3);
// 0x452ee0
_BYTE *__cdecl _cfltcvt(_DWORD *a1, char *Src, int a3, int a4, int a5);
// 0x452f50
void *__cdecl _shift(char *Src, int a2);
// 0x452f80
_DWORD *__cdecl _dosmaperr(unsigned int a1);
// 0x452ff0
int _alloc_osfhnd();
// 0x4530b0
int __cdecl _set_osfhnd(int a1, HANDLE hHandle);
// 0x453160
int __cdecl _free_osfhnd(int a1);
// 0x453200
intptr_t __cdecl _get_osfhandle(int FileHandle);
// 0x453250
UINT _ioinit();
// 0x453450
int __cdecl fflush(FILE *Stream);
// 0x4534a0
int __cdecl _flush(_DWORD *a1);
// 0x453510
int __cdecl _flushall();
// 0x453520
int __cdecl flsall(int a1);
// 0x4535a0
int __cdecl _output(FILE *File, char *a2, int a3);
// 0x453f30
int __cdecl write_char(int a1, FILE *File, _DWORD *a3);
// 0x453f80
int __cdecl write_multi_char(int a1, int a2, FILE *File, int *a4);
// 0x453fc0
int __cdecl write_string(char *a1, int a2, FILE *File, int *a4);
// 0x454000
int __cdecl get_int_arg(int *a1);
// 0x454020
__int64 __cdecl get_int64_arg(int *a1);
// 0x454040
__int16 __cdecl get_short_arg(int *a1);
// 0x454060
int __cdecl _freebuf(int a1);
// 0x4540a0
int __cdecl _stbuf(FILE *a1);
// 0x454140
__int16 __cdecl _ftbuf(int a1, _DWORD *a2);
// 0x4541a0
int __cdecl _write(int FileHandle, const void *Buf, unsigned int MaxCharCount);
// 0x4543c0
_DWORD *__usercall _openfile/*@<eax>*/(int a1/*@<ebx>*/, char *FileName, char *a3, int ShareFlag, _DWORD *a5);
// 0x454590
_DWORD *_getstream();
// 0x454620
unsigned int __cdecl _mbctoupper(unsigned int Ch);
// 0x4546b0
int __cdecl _isctype(int C, int Type);
// 0x454760
char *__cdecl strchr(const char *Str, int Val);
// 0x454766
char *__usercall __from_strstr_to_strchr/*@<eax>*/(int a1/*@<eax>*/, char *Str, ...);
// 0x454820
int __cdecl _input(FILE *Stream, unsigned __int8 *i, int a3);
// 0x455560
unsigned int __cdecl _hextodec(int C);
// 0x4555a0
int __cdecl fgetc(FILE *Stream);
// 0x4555d0
int __cdecl _un_inc(int Character, FILE *Stream);
// 0x4555f0
int __cdecl _whiteout(_DWORD *a1, FILE *Stream);
// 0x455640
char __cdecl _getbuf(_DWORD *a1);
// 0x4556a0
double __cdecl _set_exp(int a1, int a2, __int16 a3);
// 0x4556e0
int __cdecl _sptype(int a1, int a2);
// 0x455740
// local variable allocation has failed, the output may be wrong!;
// 0x455840
double __cdecl _copysign(double Number, double Sign);
// 0x455870
int __cdecl _fpclass(double X);
// 0x455910
double __cdecl _handle_qnan2(int a1, double a2, double a3, int a4);
// 0x455990
double __cdecl _except2(int a1, int a2, int a3, int a4, ULONG_PTR a5, ULONG_PTR a6, double a7, int a8);
// 0x455a80
unsigned int *__cdecl _raise_exc(unsigned int *Arguments, int *a2, char a3, __int16 a4, _DWORD *a5, unsigned int *a6);
// 0x455dc0
BOOL __cdecl _handle_exc(char a1, unsigned int *a2, __int16 a3);
// 0x4560f0
double __cdecl _umatherr(int Value, int a2, int a3, int a4, int a5, int a6, double a7, int a8);
// 0x4561a0
errno_t __cdecl _set_errno(int Value);
// 0x4561d0
int __cdecl _get_fname(int a1);
// 0x456200
int __cdecl _errcode(char a1);
// 0x456240
int __usercall _statfp/*@<eax>*/(__int16 a1/*@<fpstat>*/);
// 0x456250
int __usercall _clrfp/*@<eax>*/(__int16 a1/*@<fpstat>*/);
// 0x456270
int __fastcall _ctrlfp(__int16 a1);
// 0x4562a0
void _set_statfp();
// 0x456311
void __usercall _fFEXP(__int16 a1/*@<cx>*/, int a2/*@<ebp>*/, double a3/*@<st0>*/);
// 0x456432
void expbigret();
// 0x456451
double __fastcall rtforexpinf(char a1);
// 0x45645e
// positive sp value has been detected, the output may be wrong!;
// 0x4564a1
int __usercall isintTOS/*@<eax>*/(long double a1/*@<st0>*/);
// 0x4564c6
void isintTOSret();
// 0x4564d5
double __usercall usepowhlp/*@<st0>*/(int a1/*@<ebp>*/, double X/*@<st1>*/, double a3/*@<st0>*/);
// 0x4566e0
void _startTwoArgErrorHandling();
// 0x4566f7
double __usercall _startOneArgErrorHandling/*@<st0>*/(;
// 0x456740
long double __usercall _twoToTOS/*@<st0>*/(long double a1/*@<st0>*/);
// 0x456755
void _load_CW();
// 0x45676c
double __usercall _convertTOStoQNaN/*@<st0>*/(int a1/*@<eax>*/, double result/*@<st0>*/);
// 0x456785
double __fastcall _fload_withFB(int a1, _DWORD *a2);
// 0x4567c8
int __cdecl _checkTOS_withFB(int a1, int a2);
// 0x456815
void _check_overflow_exit();
// 0x4568d0
int __cdecl _powhlp(double a1, double X, int a3);
// 0x456b00
int __usercall _d_inttype/*@<eax>*/(double a1/*@<st0>*/, double X);
// 0x456b90
long double __cdecl _frnd(long double a1);
// 0x456bb0
int __cdecl _isatty(int FileHandle);
// 0x456be0
void *__cdecl calloc(size_t Count, size_t Size);
// 0x456c80
int __cdecl _fcloseall();
// 0x456cf0
unsigned int __stdcall _aulldiv(unsigned __int64 a1, __int64 a2);
// 0x456d60
unsigned __int64 __stdcall _aullrem(unsigned __int64 a1, __int64 a2);
// 0x456de0
LONG __cdecl _XcptFilter(int a1, struct _EXCEPTION_POINTERS *ExceptionInfo);
// 0x456f20
int *__cdecl xcptlookup(int a1);
// 0x456f70
int __cdecl _ismbblead(unsigned int Ch);
// 0x456f90
int __cdecl x_ismbbtype(unsigned __int8 a1, int a2, unsigned __int8 a3);
// 0x456fd0
void _setenvp();
// 0x4570c0
int _setargv();
// 0x457160
_DWORD *__cdecl parse_cmdline(unsigned __int8 *a1, unsigned __int8 **a2, unsigned __int8 *a3, _DWORD *a4, _DWORD *a5);
// 0x457370
CHAR *__crtGetEnvironmentStringsA();
// 0x4574d0
int __cdecl _setmbcp(int CodePage);
// 0x4576c0
UINT __cdecl getSystemCP(UINT a1);
// 0x457710
int __cdecl CPtoLCID(int a1);
// 0x457770
int setSBCS();
// 0x4577a0
int __initmbctable();
// 0x4577b0
void __cdecl _global_unwind2(PVOID TargetFrame);
// 0x4577d0
int __cdecl _unwind_handler(int a1, int a2, int a3, _DWORD *a4);
// 0x4577f2
int __cdecl _local_unwind2(int a1, int a2);
// 0x45785a
int __cdecl _abnormal_termination();
// 0x45787d
void __stdcall _NLG_Notify1(int a1);
// 0x457886
int __userpurge _NLG_Notify/*@<eax>*/(int result/*@<eax>*/, int a2/*@<ebp>*/, int a3);
// 0x4578a8
int __cdecl _except_handler3(int a1, _DWORD *TargetFrame, int a3);
// 0x457965
int __stdcall _seh_longjmp_unwind(int a1);
// 0x457980
int _FF_MSGBANNER();
// 0x4579c0
int *__cdecl _NMSG_WRITE(int a1);
// 0x457ba0
unsigned int __cdecl _control87(unsigned int NewValue, unsigned int Mask);
// 0x457be0
unsigned int __cdecl _controlfp(unsigned int NewValue, unsigned int Mask);
// 0x457c00
char __cdecl _abstract_cw(char a1);
// 0x457ca0
char __cdecl _hw_cw(int a1);
// 0x457d30
int __cdecl tolower(int C);
// 0x457e30
int __cdecl _ZeroTail(int a1, int a2);
// 0x457ea0
int __cdecl _IncMan(int a1, int a2);
// 0x457f10
int __cdecl _RoundMan(int a1, int a2);
// 0x457fb0
_DWORD *__cdecl _CopyMan(int a1, _DWORD *a2);
// 0x457fd0
int __cdecl _FillZeroMan(_DWORD *a1);
// 0x457fe0
int __cdecl _IsZeroMan(_DWORD *a1);
// 0x458000
int __cdecl _ShrMan(unsigned int *a1, int a2);
// 0x4580c0
int __cdecl _ld12cvt(unsigned __int16 *a1, unsigned int *a2, int *a3);
// 0x458350
char *__cdecl _fptostr(char *a1, int a2, int a3);
// 0x4583f0
int *__cdecl _fltout(char a1);
// 0x458470
int __cdecl __dtold(int a1, int *a2);
// 0x458530
void __noreturn _fptrap();
// 0x458540
int __cdecl _commit(int FileHandle);
// 0x4585a0
int __cdecl wctomb(char *MbCh, wchar_t WCh);
// 0x458620
int _open(const char *FileName, int OpenFlag, ...);
// 0x458640
int _sopen(const char *FileName, int OpenFlag, int ShareFlag, ...);
// 0x458a00
int __cdecl __crtLCMapStringA(;
// 0x458c20
_BYTE *__cdecl strncnt(_BYTE *a1, int a2);
// 0x458c50
int __cdecl __crtGetStringTypeA(;
// 0x458d80
int __cdecl mbtowc(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes);
// 0x458e80
int __cdecl isspace(int C);
// 0x458eb0
int __usercall _allshl/*@<eax>*/(__int64 a1/*@<edx:eax>*/, unsigned __int8 a2/*@<cl>*/);
// 0x458ed0
int __cdecl ungetc(int Character, FILE *Stream);
// 0x458f60
// Microsoft VisualC 2-14/net runtime;
// 0x459077
// Microsoft VisualC 2-14/net runtime;
// 0x459516
// Microsoft VisualC 2-14/net runtime;
// 0x459529
// Microsoft VisualC 2-14/net runtime;
// 0x45973c
// Microsoft VisualC 2-14/net runtime;
// 0x459751
// Microsoft VisualC 2-14/net runtime;
// 0x459766
// Microsoft VisualC 2-14/net runtime;
// 0x45996c
// Microsoft VisualC 2-14/net runtime;
// 0x459a1e
// Microsoft VisualC 2-14/net runtime;
// 0x459c24
// Microsoft VisualC 2-14/net runtime;
// 0x459cf0
errno_t __cdecl _87except(int a1, _DWORD *a2, int a3);
// 0x459e10
int __cdecl __crtMessageBoxA(const CHAR *a1, const CHAR *a2, UINT a3);
// 0x459ea0
int __cdecl __addl(unsigned int a1, unsigned int a2, unsigned int *a3);
// 0x459ed0
int __cdecl __add_12(unsigned int *a1, unsigned int *a2);
// 0x459f40
unsigned int *__cdecl __shl_12(unsigned int *a1);
// 0x459f70
int *__cdecl __shr_12(int *a1);
// 0x459fa0
int __cdecl __mtold12(char *a1, int a2, int a3);
// 0x45a0a0
int __cdecl __strgtold12(int a1, char **a2, char *a3, int a4, int a5, int a6, int a7);
// 0x45a830
int __cdecl _I10_OUTPUT(int a1, unsigned int a2, int a3, int a4, char a5, int a6);
// 0x45abc0
int __cdecl _chsize(int FileHandle, int Size);
// 0x45ad40
unsigned int __cdecl __ld12mul(int a1, int a2);
// 0x45b000
void __cdecl __multtenpow12(_WORD *a1, int a2, int a3);
// 0x45b090
int __cdecl _setmode(int FileHandle, int Mode);
// 0x45b120
int __cdecl _strcmpi(const char *String1, const char *String2);
// 0x45b2c0
char *__cdecl _getextendedkeycode(int a1);
// 0x45b3a0
HANDLE __initconin();
// 0x45b3c0
HANDLE __termcon();
