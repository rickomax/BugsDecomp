// Module `cfg`.
//
// Reconstructed from Bugs.exe (PC v1.0) by tools/recon.py.
// Generated file -- do not edit by hand; see recon/README.md.
//
// Address range: 0x409a40 - 0x409d20 (5 functions).

#include "bugs.h"


// 0x409a40  WriteConfig
// IDA symbol: sub_409A40
// Documented as port/cfg in doc/functions.md.
FILE *WriteConfig()
{
  FILE *result; // eax
  FILE *v1; // esi
  char FileName[260]; // [esp+4h] [ebp-104h] BYREF

  strcpy(FileName, "..\\bin\\config.pc");
  result = FsFOpen(FileName, /*Mode*/ aWb_0);
  v1 = result;
  if ( result != NULL )
  {
    fwrite(/*Buffer*/ &dword_9CA820, /*ElementSize*/ 0x80u, /*ElementCount*/ 1u, /*Stream*/ result);
    return (FILE *)fclose(/*Stream*/ v1);
  }
  return result;
}

// 0x409ac0  SetConfigDefaults
// IDA symbol: sub_409AC0
// Documented as port/cfg in doc/functions.md.
char __cdecl SetConfigDefaults(char a1, int a2)
{
  char result; // al
  DWORD v4; // [esp+18h] [ebp+8h]

  *(_DWORD *)a2 = 16;
  if ( a1 != 0 )
  {
    switch ( GetSystemDefaultLangID() & 0x3FF )
    {
      case 7:
        *(_DWORD *)(a2 + 8) = 2;
        off_45F344 = &unk_45F2E8;
        break;
      case 0xA:
        *(_DWORD *)(a2 + 8) = 3;
        off_45F344 = &unk_45F300;
        break;
      case 0xC:
        *(_DWORD *)(a2 + 8) = 1;
        off_45F344 = &unk_45F2D0;
        break;
      case 0x10:
        *(_DWORD *)(a2 + 8) = 4;
        off_45F344 = &unk_45F318;
        break;
      case 0x13:
        *(_DWORD *)(a2 + 8) = 5;
        off_45F344 = &unk_45F330;
        break;
      default:
        *(_DWORD *)(a2 + 8) = 0;
        off_45F344 = &unk_45F2B8;
        break;
    }
  }
  if ( (a1 & 4) != 0 )
  {
    *(_DWORD *)(a2 + 16) = 512;
    *(_DWORD *)(a2 + 20) = 384;
    if ( TestGL() != 0 )
      *(_DWORD *)(a2 + 4) = 2;
    else
      *(_DWORD *)(a2 + 4) = dword_4B1DE4 >= 300;
    *(_DWORD *)(a2 + 28) = 2;
    *(_DWORD *)(a2 + 12) = TestGL();
    *(_DWORD *)(a2 + 24) = 1;
    *(_DWORD *)(a2 + 32) = 0;
    *(_DWORD *)(a2 + 36) = 1072693248;
  }
  result = a1;
  if ( (a1 & 2) != 0 )
  {
    *(_DWORD *)(a2 + 56) = 0;
    *(_BYTE *)(a2 + 60) = 0;
    *(_BYTE *)(a2 + 61) = 1;
    *(_BYTE *)(a2 + 62) = 2;
    *(_BYTE *)(a2 + 63) = 3;
    *(_BYTE *)(a2 + 64) = 4;
    *(_BYTE *)(a2 + 65) = 5;
    *(_BYTE *)(a2 + 66) = 6;
    *(_BYTE *)(a2 + 67) = 7;
    *(_BYTE *)(a2 + 68) = 8;
    *(_BYTE *)(a2 + 69) = 9;
  }
  if ( (a1 & 1) != 0 )
  {
    *(_BYTE *)(a2 + 70) = -56;
    *(_BYTE *)(a2 + 71) = -48;
    *(_BYTE *)(a2 + 72) = -51;
    *(_BYTE *)(a2 + 73) = -53;
    v4 = OemKeyScan(/*wOemChar*/ 0x61u);
    if ( OemKeyScan(/*wOemChar*/ 0x71u) >= v4 )
    {
      *(_BYTE *)(a2 + 74) = 30;
      *(_BYTE *)(a2 + 75) = 44;
      *(_BYTE *)(a2 + 78) = 16;
    }
    else
    {
      *(_BYTE *)(a2 + 74) = 16;
      *(_BYTE *)(a2 + 75) = 17;
      *(_BYTE *)(a2 + 78) = 30;
    }
    result = 28;
    *(_BYTE *)(a2 + 76) = 18;
    *(_BYTE *)(a2 + 77) = 19;
    *(_BYTE *)(a2 + 79) = 31;
    *(_BYTE *)(a2 + 80) = 32;
    *(_BYTE *)(a2 + 81) = 33;
    *(_BYTE *)(a2 + 82) = 15;
    *(_BYTE *)(a2 + 83) = 28;
    *(_BYTE *)(a2 + 84) = 15;
    *(_BYTE *)(a2 + 85) = 28;
  }
  if ( (a1 & 0x10) != 0 )
  {
    result = 100;
    *(_DWORD *)(a2 + 48) = 100;
    *(_DWORD *)(a2 + 52) = 100;
  }
  if ( (a1 & 8) != 0 )
  {
    *(_DWORD *)(a2 + 40) = 0;
    *(_DWORD *)(a2 + 88) = 0;
    *(_DWORD *)(a2 + 96) = 0;
    *(_DWORD *)(a2 + 104) = 0;
    *(_DWORD *)(a2 + 112) = 0;
    *(_DWORD *)(a2 + 44) = 1072693248;
    *(_BYTE *)(a2 + 86) = 16;
    *(_BYTE *)(a2 + 87) = 1;
    *(_DWORD *)(a2 + 92) = 0;
    *(_DWORD *)(a2 + 100) = 1072693248;
    *(_DWORD *)(a2 + 108) = 1072693248;
    *(_DWORD *)(a2 + 116) = 1072693248;
    *(_BYTE *)(a2 + 120) = 0;
  }
  return result;
}

// 0x409ce0  SaveAltConfig
// IDA symbol: sub_409CE0
// Documented as port/cfg in doc/functions.md.
void SaveAltConfig()
{
  qmemcpy(unk_9CA7A0, &dword_9CA820, sizeof(unk_9CA7A0));
}

// 0x409d00  LoadAltConfig
// IDA symbol: sub_409D00
// Documented as port/cfg in doc/functions.md.
void LoadAltConfig()
{
  qmemcpy(&dword_9CA820, unk_9CA7A0, 128);
}

// 0x409d20  ReadConfig
// IDA symbol: sub_409D20
// Documented as port/cfg in doc/functions.md.
FILE *ReadConfig()
{
  FILE *v0; // eax
  FILE *v1; // esi
  int v2; // edi
  FILE *result; // eax
  FILE *v4; // esi
  char FileName[260]; // [esp+8h] [ebp-208h] BYREF
  char v6[260]; // [esp+10Ch] [ebp-104h] BYREF

  strcpy(FileName, "..\\bin\\config.pc");
  v0 = fopen(FileName, /*Mode*/ aRb);
  v1 = v0;
  if ( v0 != NULL )
  {
    fseek(/*Stream*/ v0, /*Offset*/ 0, /*Origin*/ 2);
    v2 = ftell(/*Stream*/ v1);
    fseek(/*Stream*/ v1, /*Offset*/ 0, /*Origin*/ 0);
    if ( v2 == 128 )
    {
      fread(/*Buffer*/ &dword_9CA820, /*ElementSize*/ 0x80u, /*ElementCount*/ 1u, /*Stream*/ v1);
      fclose(/*Stream*/ v1);
      result = (FILE *)dword_9CA820;
      if ( dword_9CA820 == 16 )
        return result;
    }
    else
    {
      fclose(/*Stream*/ v1);
    }
  }
  SetConfigDefaults(255, (int)&dword_9CA820);
  SetConfigDefaults(255, (int)&unk_9CA7A0);
  strcpy(v6, "..\\bin\\config.pc");
  dword_9CA7B8 = 0;
  result = FsFOpen(/*FileName*/ v6, /*Mode*/ aWb_0);
  v4 = result;
  if ( result != NULL )
  {
    fwrite(/*Buffer*/ &dword_9CA820, /*ElementSize*/ 0x80u, /*ElementCount*/ 1u, /*Stream*/ result);
    return (FILE *)fclose(/*Stream*/ v4);
  }
  return result;
}
