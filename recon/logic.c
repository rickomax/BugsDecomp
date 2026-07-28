// Module `logic`.
//
// Reconstructed from Bugs.exe (PC v1.0) by tools/recon.py.
// Generated file -- do not edit by hand; see recon/README.md.
//
// Address range: 0x42a850 - 0x42d1a0 (148 functions).

#include "bugs.h"


// 0x42a850  TestLogicCond
// IDA symbol: sub_42A850
// Documented as game/logic in doc/functions.md.
int __cdecl TestLogicCond(int a1, _BYTE *a2)
{
  if ( *a2 < 0x63u )
    return ((int (__cdecl *)(int, _BYTE *))funcs_42A868[(unsigned __int8)*a2])(a1, a2);
  else
    return 0;
}

// 0x42a880  CondTrue
// IDA symbol: sub_42A880
// Documented as game/logic in doc/functions.md.
int CondTrue()
{
  return 1;
}

// 0x42a890  CondCiseq
// IDA symbol: sub_42A890
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondCiseq(int a1, int a2)
{
  return byte_4B2260[*(unsigned __int8 *)(a2 + 2)] == *(_BYTE *)(a2 + 1);
}

// 0x42a8b0  CondCseq
// IDA symbol: sub_42A8B0
// Shared implementation, also known as: CondCsseq
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondCseq(int a1, int a2)
{
  return byte_4B2260[*(unsigned __int8 *)(a2 + 2)] == byte_4B2260[*(unsigned __int8 *)(a2 + 1)];
}

// 0x42a8e0  CondCisne
// IDA symbol: sub_42A8E0
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondCisne(int a1, int a2)
{
  return byte_4B2260[*(unsigned __int8 *)(a2 + 2)] != *(_BYTE *)(a2 + 1);
}

// 0x42a900  CondCsne
// IDA symbol: sub_42A900
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondCsne(int a1, int a2)
{
  return byte_4B2260[*(unsigned __int8 *)(a2 + 2)] != byte_4B2260[*(unsigned __int8 *)(a2 + 1)];
}

// 0x42a930  CondCisltu
// IDA symbol: sub_42A930
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondCisltu(int a1, int a2)
{
  return *(_BYTE *)(a2 + 1) < (unsigned __int8)byte_4B2260[*(unsigned __int8 *)(a2 + 2)];
}

// 0x42a950  CondCislt
// IDA symbol: sub_42A950
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondCislt(int a1, int a2)
{
  return byte_4B2260[*(unsigned __int8 *)(a2 + 2)] > *(_BYTE *)(a2 + 1);
}

// 0x42a970  CondCsltu
// IDA symbol: sub_42A970
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondCsltu(int a1, int a2)
{
  return (unsigned __int8)byte_4B2260[*(unsigned __int8 *)(a2 + 1)] < (unsigned __int8)byte_4B2260[*(unsigned __int8 *)(a2 + 2)];
}

// 0x42a9a0  CondCslt
// IDA symbol: sub_42A9A0
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondCslt(int a1, int a2)
{
  return byte_4B2260[*(unsigned __int8 *)(a2 + 2)] > byte_4B2260[*(unsigned __int8 *)(a2 + 1)];
}

// 0x42a9d0  CondCisleu
// IDA symbol: sub_42A9D0
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondCisleu(int a1, int a2)
{
  return (unsigned __int8)byte_4B2260[*(unsigned __int8 *)(a2 + 2)] >= *(_BYTE *)(a2 + 1);
}

// 0x42a9f0  CondCisgtu
// IDA symbol: sub_42A9F0
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondCisgtu(int a1, int a2)
{
  return (unsigned __int8)byte_4B2260[*(unsigned __int8 *)(a2 + 2)] < *(_BYTE *)(a2 + 1);
}

// 0x42aa10  CondCisgt
// IDA symbol: sub_42AA10
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondCisgt(int a1, int a2)
{
  return byte_4B2260[*(unsigned __int8 *)(a2 + 2)] < *(_BYTE *)(a2 + 1);
}

// 0x42aa30  CondCsgtu
// IDA symbol: sub_42AA30
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondCsgtu(int a1, int a2)
{
  return (unsigned __int8)byte_4B2260[*(unsigned __int8 *)(a2 + 2)] < (unsigned __int8)byte_4B2260[*(unsigned __int8 *)(a2 + 1)];
}

// 0x42aa60  CondCsgt
// IDA symbol: sub_42AA60
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondCsgt(int a1, int a2)
{
  return byte_4B2260[*(unsigned __int8 *)(a2 + 2)] < byte_4B2260[*(unsigned __int8 *)(a2 + 1)];
}

// 0x42aa90  CondCisgeu
// IDA symbol: sub_42AA90
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondCisgeu(int a1, int a2)
{
  return *(_BYTE *)(a2 + 1) >= (unsigned __int8)byte_4B2260[*(unsigned __int8 *)(a2 + 2)];
}

// 0x42aab0  CondTismnz
// IDA symbol: sub_42AAB0
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondTismnz(int a1, int a2)
{
  return (*(_BYTE *)(a2 + 1) & (unsigned __int8)byte_4B2260[*(unsigned __int8 *)(a2 + 2)]) != 0;
}

// 0x42aad0  CondTisaz
// IDA symbol: sub_42AAD0
// Shared implementation, also known as: CondTismz
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondTisaz(int a1, int a2)
{
  return (*(_BYTE *)(a2 + 1) & (unsigned __int8)byte_4B2260[*(unsigned __int8 *)(a2 + 2)]) == 0;
}

// 0x42aaf0  CondCigeq
// IDA symbol: sub_42AAF0
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondCigeq(int a1, int a2)
{
  return *((_BYTE *)dword_52FD00 + *(unsigned __int8 *)(a2 + 2) + 65600) == *(_BYTE *)(a2 + 1);
}

// 0x42ab20  CondCigne
// IDA symbol: sub_42AB20
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondCigne(int a1, int a2)
{
  return *((_BYTE *)dword_52FD00 + *(unsigned __int8 *)(a2 + 2) + 65600) != *(_BYTE *)(a2 + 1);
}

// 0x42ab50  CondCgne
// IDA symbol: sub_42AB50
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondCgne(int a1, int a2)
{
  return *((_BYTE *)dword_52FD00 + *(unsigned __int8 *)(a2 + 2) + 65600) != *((_BYTE *)dword_52FD00
                                                                            + *(unsigned __int8 *)(a2 + 1)
                                                                            + 65600);
}

// 0x42ab80  CondCgeq
// IDA symbol: sub_42AB80
// Shared implementation, also known as: CondCggeq
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondCgeq(int a1, int a2)
{
  return *((_BYTE *)dword_52FD00 + *(unsigned __int8 *)(a2 + 2) + 65600) == *((_BYTE *)dword_52FD00
                                                                            + *(unsigned __int8 *)(a2 + 1)
                                                                            + 65600);
}

// 0x42abb0  CondCigltu
// IDA symbol: sub_42ABB0
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondCigltu(int a1, int a2)
{
  return *(_BYTE *)(a2 + 1) < *((_BYTE *)dword_52FD00 + *(unsigned __int8 *)(a2 + 2) + 65600);
}

// 0x42abd0  CondCiglt
// IDA symbol: sub_42ABD0
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondCiglt(int a1, int a2)
{
  return *((_BYTE *)dword_52FD00 + *(unsigned __int8 *)(a2 + 2) + 65600) > *(_BYTE *)(a2 + 1);
}

// 0x42ac00  CondCgltu
// IDA symbol: sub_42AC00
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondCgltu(int a1, int a2)
{
  return *((_BYTE *)dword_52FD00 + *(unsigned __int8 *)(a2 + 1) + 65600) < *((_BYTE *)dword_52FD00
                                                                           + *(unsigned __int8 *)(a2 + 2)
                                                                           + 65600);
}

// 0x42ac30  CondCigleu
// IDA symbol: sub_42AC30
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondCigleu(int a1, int a2)
{
  return *((_BYTE *)dword_52FD00 + *(unsigned __int8 *)(a2 + 2) + 65600) >= *(_BYTE *)(a2 + 1);
}

// 0x42ac50  CondCiggtu
// IDA symbol: sub_42AC50
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondCiggtu(int a1, int a2)
{
  return *((_BYTE *)dword_52FD00 + *(unsigned __int8 *)(a2 + 2) + 65600) < *(_BYTE *)(a2 + 1);
}

// 0x42ac70  CondCiggt
// IDA symbol: sub_42AC70
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondCiggt(int a1, int a2)
{
  return *((_BYTE *)dword_52FD00 + *(unsigned __int8 *)(a2 + 2) + 65600) < *(_BYTE *)(a2 + 1);
}

// 0x42aca0  CondCggtu
// IDA symbol: sub_42ACA0
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondCggtu(int a1, int a2)
{
  return *((_BYTE *)dword_52FD00 + *(unsigned __int8 *)(a2 + 2) + 65600) < *((_BYTE *)dword_52FD00
                                                                           + *(unsigned __int8 *)(a2 + 1)
                                                                           + 65600);
}

// 0x42acd0  CondCiggeu
// IDA symbol: sub_42ACD0
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondCiggeu(int a1, int a2)
{
  return *(_BYTE *)(a2 + 1) >= *((_BYTE *)dword_52FD00 + *(unsigned __int8 *)(a2 + 2) + 65600);
}

// 0x42acf0  CondTigmnz
// IDA symbol: sub_42ACF0
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondTigmnz(int a1, int a2)
{
  return (*(_BYTE *)(a2 + 1) & *((_BYTE *)dword_52FD00 + *(unsigned __int8 *)(a2 + 2) + 65600)) != 0;
}

// 0x42ad20  CondTigaz
// IDA symbol: sub_42AD20
// Shared implementation, also known as: CondTigmz
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondTigaz(int a1, int a2)
{
  return (*(_BYTE *)(a2 + 1) & *((_BYTE *)dword_52FD00 + *(unsigned __int8 *)(a2 + 2) + 65600)) == 0;
}

// 0x42ad50  sub_42AD50
BOOL sub_42AD50()
{
  return (*(_DWORD *)(dword_4B324C + 20) & 0x2000020) == 0;
}

// 0x42ad70  sub_42AD70
BOOL sub_42AD70()
{
  return (*(_DWORD *)(dword_4B324C + 20) & 0x2000020) != 0;
}

// 0x42ad90  sub_42AD90
BOOL sub_42AD90()
{
  return (*(_DWORD *)(dword_4B324C + 20) & 0x1000000) != 0;
}

// 0x42ada0  sub_42ADA0
BOOL sub_42ADA0()
{
  return (~*(_DWORD *)(dword_4B324C + 20) & 0x1000000) != 0;
}

// 0x42adc0  sub_42ADC0
BOOL __cdecl sub_42ADC0(int a1, int a2)
{
  return *(_WORD *)(dword_4B324C + 380) == (unsigned __int16)*(unsigned __int8 *)(a2 + 1);
}

// 0x42ade0  sub_42ADE0
BOOL __cdecl sub_42ADE0(int a1, int a2)
{
  return *(_WORD *)(*(_DWORD *)(dword_4B324C + 384) + 2 * *(unsigned __int16 *)(dword_4B324C + 382) + 6) == (unsigned __int16)*(unsigned __int8 *)(a2 + 1);
}

// 0x42ae10  sub_42AE10
BOOL sub_42AE10()
{
  return (*(_DWORD *)(dword_4B324C + 20) & 0x40) != 0;
}

// 0x42ae30  sub_42AE30
BOOL sub_42AE30()
{
  return (~*(_BYTE *)(dword_4B324C + 20) & 0x40) != 0;
}

// 0x42ae50  sub_42AE50
BOOL __cdecl sub_42AE50(int a1)
{
  return *(_DWORD *)(a1 + 108) == 0;
}

// 0x42ae60  sub_42AE60
BOOL __cdecl sub_42AE60(int a1)
{
  return *(_DWORD *)(a1 + 108) != 0;
}

// 0x42ae70  sub_42AE70
BOOL __cdecl sub_42AE70(int a1, int a2)
{
  return *(_WORD *)(dword_4B324C + 38) == (unsigned __int16)*(unsigned __int8 *)(a2 + 1);
}

// 0x42ae90  sub_42AE90
BOOL __cdecl sub_42AE90(int a1, int a2)
{
  return *(_WORD *)(dword_4B324C + 38) != (unsigned __int16)*(unsigned __int8 *)(a2 + 1);
}

// 0x42aeb0  sub_42AEB0
BOOL __cdecl sub_42AEB0(int a1, int a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  char v7; // al

  v2 = ratan2(
         *(_DWORD *)dword_4B3724 - *(_DWORD *)(a1 + 228),
         *(_DWORD *)(dword_4B3724 + 8) - *(_DWORD *)(a1 + 236));
  v3 = v2 + (v2 < 0 ? 0x1000 : 0);
  v4 = *(__int16 *)(dword_4B324C + 222) % 4096 + (*(__int16 *)(dword_4B324C + 222) % 4096 < 0 ? 0x1000 : 0);
  v5 = v3 - v4 + (v3 - v4 < 0 ? 0x1000 : 0);
  if ( v5 > 2048 )
    v5 -= 4096;
  if ( v5 < 660 && v5 > -660 )
    return false;
  v7 = *(_BYTE *)(a2 + 1);
  if ( v7 == 1 && v5 > 0 )
    return false;
  return v7 != 2 || v5 >= 0;
}

// 0x42af60  sub_42AF60
BOOL __cdecl sub_42AF60(int a1, int a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  char v6; // al

  v2 = ratan2(
         *(_DWORD *)dword_4B3724 - *(_DWORD *)(a1 + 228),
         *(_DWORD *)(dword_4B3724 + 8) - *(_DWORD *)(a1 + 236));
  v3 = v2 + (v2 < 0 ? 0x1000 : 0);
  v4 = *(__int16 *)(dword_4B324C + 222) % 4096 + (*(__int16 *)(dword_4B324C + 222) % 4096 < 0 ? 0x1000 : 0);
  v5 = v3 - v4 + (v3 - v4 < 0 ? 0x1000 : 0);
  if ( v5 > 2048 )
    v5 -= 4096;
  return v5 < 660 && v5 > -660 && ((v6 = *(_BYTE *)(a2 + 1)) != 1 || v5 <= 0) && (v6 != 2 || v5 >= 0);
}

// 0x42b010  sub_42B010
BOOL __cdecl sub_42B010(int a1, int a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  char v6; // al

  v2 = ratan2(
         *(_DWORD *)(dword_4B324C + 228) - *(_DWORD *)(a1 + 228),
         *(_DWORD *)(dword_4B324C + 236) - *(_DWORD *)(a1 + 236));
  v3 = v2 + (v2 < 0 ? 0x1000 : 0);
  v4 = *(__int16 *)(a1 + 222) % 4096 + (*(__int16 *)(a1 + 222) % 4096 < 0 ? 0x1000 : 0);
  v5 = v3 - v4 + (v3 - v4 < 0 ? 0x1000 : 0);
  if ( v5 > 2048 )
    v5 -= 4096;
  return v5 < 660 && v5 > -660 && ((v6 = *(_BYTE *)(a2 + 1)) != 1 || v5 <= 0) && (v6 != 2 || v5 >= 0);
}

// 0x42b0c0  sub_42B0C0
BOOL __cdecl sub_42B0C0(int a1, int a2)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  char v7; // al

  v2 = ratan2(
         *(_DWORD *)(dword_4B324C + 228) - *(_DWORD *)(a1 + 228),
         *(_DWORD *)(dword_4B324C + 236) - *(_DWORD *)(a1 + 236));
  v3 = v2 + (v2 < 0 ? 0x1000 : 0);
  v4 = *(__int16 *)(a1 + 222) % 4096 + (*(__int16 *)(a1 + 222) % 4096 < 0 ? 0x1000 : 0);
  v5 = v3 - v4 + (v3 - v4 < 0 ? 0x1000 : 0);
  if ( v5 > 2048 )
    v5 -= 4096;
  if ( v5 < 660 && v5 > -660 )
    return false;
  v7 = *(_BYTE *)(a2 + 1);
  if ( v7 == 1 && v5 > 0 )
    return false;
  return v7 != 2 || v5 >= 0;
}

// 0x42b170  sub_42B170
BOOL __cdecl sub_42B170(int a1, int a2)
{
  return *(unsigned __int16 *)(a1 + 34) < (unsigned int)*(unsigned __int16 *)(a2 + 1);
}

// 0x42b190  sub_42B190
BOOL __cdecl sub_42B190(int a1, int a2)
{
  return *(unsigned __int16 *)(a2 + 1) < (unsigned int)*(unsigned __int16 *)(a1 + 34);
}

// 0x42b1b0  sub_42B1B0
BOOL __cdecl sub_42B1B0(int a1, int a2)
{
  return *(unsigned __int16 *)(a1 + 34) == *(unsigned __int16 *)(a2 + 1);
}

// 0x42b1d0  sub_42B1D0
BOOL __cdecl sub_42B1D0(int a1, int a2)
{
  return *(unsigned __int16 *)(a1 + 34) / 30 < (unsigned int)*(unsigned __int16 *)(a2 + 1);
}

// 0x42b210  sub_42B210
BOOL __cdecl sub_42B210(int a1, int a2)
{
  return *(unsigned __int16 *)(a2 + 1) < (unsigned int)(*(unsigned __int16 *)(a1 + 34) / 30);
}

// 0x42b250  sub_42B250
BOOL __cdecl sub_42B250(int a1, int a2)
{
  int v2; // ecx

  v2 = *(unsigned __int16 *)(a1 + 34);
  return (unsigned __int16)v2 % 30 == 0 && v2 / 30 == *(unsigned __int16 *)(a2 + 1);
}

// 0x42b2a0  sub_42B2A0
BOOL __cdecl sub_42B2A0(int a1, int a2)
{
  return *(unsigned __int16 *)(a1 + 34) / 1800 < (unsigned int)*(unsigned __int16 *)(a2 + 1);
}

// 0x42b2e0  sub_42B2E0
BOOL __cdecl sub_42B2E0(int a1, int a2)
{
  return *(unsigned __int16 *)(a2 + 1) < (unsigned int)(*(unsigned __int16 *)(a1 + 34) / 1800);
}

// 0x42b320  sub_42B320
BOOL __cdecl sub_42B320(int a1, int a2)
{
  return *(unsigned __int16 *)(a1 + 34) / 1800 == *(unsigned __int16 *)(a2 + 1);
}

// 0x42b360  sub_42B360
BOOL sub_42B360()
{
  return word_4B3DAC != 0;
}

// 0x42b370  CondTisxz
// IDA symbol: sub_42B370
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondTisxz(int a1, int a2)
{
  return *(_BYTE *)(a2 + 1) == (unsigned __int8)byte_4B2260[*(unsigned __int8 *)(a2 + 2)];
}

// 0x42b390  CondTigxz
// IDA symbol: sub_42B390
// Documented as game/logic in doc/functions.md.
BOOL __cdecl CondTigxz(int a1, int a2)
{
  return *(_BYTE *)(a2 + 1) == *((_BYTE *)dword_52FD00 + *(unsigned __int8 *)(a2 + 2) + 65600);
}

// 0x42b3c0  CondTbdact
// IDA symbol: sub_42B3C0
// Documented as game/logic in doc/functions.md.
BOOL CondTbdact()
{
  return (*((_BYTE *)dword_52FD00 + 65546) & 8) != 0;
}

// 0x42b3e0  CondTbuact
// IDA symbol: sub_42B3E0
// Documented as game/logic in doc/functions.md.
BOOL CondTbuact()
{
  return (~*((_BYTE *)dword_52FD00 + 65546) & 8) != 0;
}

// 0x42b400  sub_42B400
BOOL __cdecl sub_42B400(int a1, int a2)
{
  int v2; // eax
  unsigned int v3; // eax

  v2 = (*(__int16 *)(a1 + 222) % 4096) >> 4;
  v3 = v2 + (v2 < 0 ? 0x100 : 0);
  return v3 > *(unsigned __int8 *)(a2 + 1) && v3 < *(unsigned __int8 *)(a2 + 2);
}

// 0x42b450  CondTpnmv
// IDA symbol: sub_42B450
// Documented as game/logic in doc/functions.md.
BOOL CondTpnmv()
{
  return (*(_DWORD *)(dword_4B324C + 24) & 2) != 0;
}

// 0x42b470  sub_42B470
BOOL sub_42B470()
{
  return (*(_DWORD *)(dword_4B324C + 24) & 4) != 0;
}

// 0x42b490  CondTpmov
// IDA symbol: sub_42B490
// Documented as game/logic in doc/functions.md.
BOOL CondTpmov()
{
  return (~*(_BYTE *)(dword_4B324C + 24) & 2) != 0;
}

// 0x42b4b0  sub_42B4B0
BOOL sub_42B4B0()
{
  return (~*(_BYTE *)(dword_4B324C + 24) & 4) != 0;
}

// 0x42b4d0  sub_42B4D0
BOOL __cdecl sub_42B4D0(int a1, int a2)
{
  dword_4B3FC4 = sub_44E4B0(*(unsigned __int16 *)(a2 + 4), 0, 0);
  return ((unsigned __int8)dword_4B3FC4 & *(_BYTE *)(a2 + 1)) != 0;
}

// 0x42b500  sub_42B500
BOOL __cdecl sub_42B500(int a1, int a2)
{
  return ((unsigned __int8)dword_4B3FC4 & *(_BYTE *)(a2 + 1)) != 0;
}

// 0x42b520  sub_42B520
BOOL __cdecl sub_42B520(int a1, int a2)
{
  unsigned int v2; // eax

  v2 = *((unsigned __int16 *)dword_52FD00 + 32776);
  if ( (v2 & 0x800) != 0 || (word_4B18D0 & 1) != 0 )
    LOBYTE(v2) = v2 | 0x40;
  if ( byte_4B2277 != 0 && word_4B18D0 != 0 )
    LOBYTE(v2) = v2 | 0x40;
  return (*(_BYTE *)(a2 + 1) & (BYTE1(v2) ^ (BYTE1(v2) ^ (unsigned __int8)(v2 >> 4)) & 0xF)) != 0;
}

// 0x42b580  sub_42B580
BOOL __cdecl sub_42B580(int a1, int a2)
{
  unsigned int v2; // eax

  v2 = *((unsigned __int16 *)dword_52FD00 + 32776);
  if ( (v2 & 0x800) != 0 || (word_4B18D0 & 1) != 0 )
    LOBYTE(v2) = v2 | 0x40;
  if ( byte_4B2277 != 0 && word_4B18D0 != 0 )
    LOBYTE(v2) = v2 | 0x40;
  return (*(_BYTE *)(a2 + 1) & (BYTE1(v2) ^ (BYTE1(v2) ^ (unsigned __int8)(v2 >> 4)) & 0xF)) == 0;
}

// 0x42b5e0  sub_42B5E0
BOOL __cdecl sub_42B5E0(int a1, int a2)
{
  return (unsigned __int16)*(unsigned __int8 *)(a2 + 1) == *(_WORD *)(a1 + 30);
}

// 0x42b600  sub_42B600
BOOL __cdecl sub_42B600(int a1, int a2)
{
  return *(_WORD *)(a1 + 30) > *(unsigned __int8 *)(a2 + 1);
}

// 0x42b620  sub_42B620
BOOL __cdecl sub_42B620(int a1, int a2)
{
  return *(_WORD *)(a1 + 30) < *(unsigned __int8 *)(a2 + 1);
}

// 0x42b640  sub_42B640
BOOL __cdecl sub_42B640(int a1, int a2)
{
  return *(_WORD *)(a1 + 38) == (unsigned __int16)*(unsigned __int8 *)(a2 + 1);
}

// 0x42b660  sub_42B660
BOOL __cdecl sub_42B660(int a1, int a2)
{
  return *(_WORD *)(a1 + 38) != (unsigned __int16)*(unsigned __int8 *)(a2 + 1);
}

// 0x42b680  sub_42B680
BOOL sub_42B680()
{
  return (*(_DWORD *)(dword_4B324C + 20) & 0x10) != 0;
}

// 0x42b6a0  sub_42B6A0
BOOL sub_42B6A0()
{
  return (~*(_BYTE *)(dword_4B324C + 20) & 0x10) != 0;
}

// 0x42b6c0  sub_42B6C0
BOOL __cdecl sub_42B6C0(int a1, int a2)
{
  char v2; // al
  int v3; // ecx
  int v5; // ecx
  char v6; // al

  v2 = *(_BYTE *)(a2 + 1);
  v3 = *(_DWORD *)(dword_4B324C + 20);
  if ( (v2 & 1) != 0 && (v3 & 1) != 0 )
    return true;
  if ( (v2 & 2) != 0 && (v3 & 2) != 0 )
    return true;
  if ( (v2 & 4) != 0 && (v3 & 0x10) != 0 )
    return true;
  if ( (v2 & 8) != 0 && (v3 & 8) != 0 )
    return true;
  if ( (v2 & 0x10) != 0 && (v3 & 0x200) != 0 )
    return true;
  if ( (v2 & 0x20) != 0 && (v3 & 0x400) != 0 )
    return true;
  if ( (v2 & 0x40) != 0 && (v3 & 0x4000) != 0 )
    return true;
  if ( v2 < 0 && (v3 & 0x1000000) != 0 )
    return true;
  v5 = *(_DWORD *)(dword_4B324C + 24);
  v6 = *(_BYTE *)(a2 + 2);
  if ( (v6 & 1) != 0 && (v5 & 0x2000000) != 0 )
    return true;
  if ( (v6 & 2) != 0 && (v5 & 0x10000000) != 0 )
    return true;
  if ( (v6 & 4) != 0 && v5 < 0 )
    return true;
  if ( (v6 & 8) != 0 && (v5 & 2) != 0 )
    return true;
  return (v6 & 0x10) != 0 && (v5 & 4) != 0;
}

// 0x42b7c0  sub_42B7C0
BOOL __cdecl sub_42B7C0(int a1, int a2)
{
  char v2; // al
  int v3; // ecx
  int v5; // ecx
  char v6; // al

  v2 = *(_BYTE *)(a2 + 1);
  v3 = *(_DWORD *)(dword_4B324C + 20);
  if ( (v2 & 1) != 0 && (v3 & 1) != 0 )
    return false;
  if ( (v2 & 2) != 0 && (v3 & 2) != 0 )
    return false;
  if ( (v2 & 4) != 0 && (v3 & 0x10) != 0 )
    return false;
  if ( (v2 & 8) != 0 && (v3 & 8) != 0 )
    return false;
  if ( (v2 & 0x10) != 0 && (v3 & 0x200) != 0 )
    return false;
  if ( (v2 & 0x20) != 0 && (v3 & 0x400) != 0 )
    return false;
  if ( (v2 & 0x40) != 0 && (v3 & 0x4000) != 0 )
    return false;
  if ( v2 < 0 && (v3 & 0x1000000) != 0 )
    return false;
  v5 = *(_DWORD *)(dword_4B324C + 24);
  v6 = *(_BYTE *)(a2 + 2);
  if ( (v6 & 1) != 0 && (v5 & 0x2000000) != 0 )
    return false;
  if ( (v6 & 2) != 0 && (v5 & 0x10000000) != 0 )
    return false;
  if ( (v6 & 4) != 0 && v5 < 0 )
    return false;
  if ( (v6 & 8) != 0 && (v5 & 2) != 0 )
    return false;
  return (v6 & 0x10) == 0 || (v5 & 4) == 0;
}

// 0x42b8a0  sub_42B8A0
BOOL __cdecl sub_42B8A0(int a1, int a2)
{
  return (*(_BYTE *)(a2 + 1)
        & (unsigned __int8)((*((unsigned __int16 *)dword_52FD00 + 32776) >> 4)
                          ^ (*((_WORD *)dword_52FD00 + 32776)
                           ^ (*((unsigned __int16 *)dword_52FD00 + 32776) >> 4))
                          & 0xF)) != 0;
}

// 0x42b8d0  sub_42B8D0
BOOL __cdecl sub_42B8D0(int a1, int a2)
{
  return (*(_BYTE *)(a2 + 1)
        & (unsigned __int8)((*((unsigned __int16 *)dword_52FD00 + 32776) >> 4)
                          ^ (*((_WORD *)dword_52FD00 + 32776)
                           ^ (*((unsigned __int16 *)dword_52FD00 + 32776) >> 4))
                          & 0xF)) == 0;
}

// 0x42b900  sub_42B900
BOOL __cdecl sub_42B900(int a1, int a2)
{
  return (*(_BYTE *)(a2 + 1)
        & (HIBYTE(*((_WORD *)dword_52FD00 + 32799))
         ^ ((unsigned __int8)(*((unsigned __int16 *)dword_52FD00 + 32799) >> 4)
          ^ (unsigned __int8)HIBYTE(*((_WORD *)dword_52FD00 + 32799)))
         & 0xF)) != 0;
}

// 0x42b940  sub_42B940
BOOL __cdecl sub_42B940(int a1, int a2)
{
  return (*(_BYTE *)(a2 + 1)
        & (HIBYTE(*((_WORD *)dword_52FD00 + 32799))
         ^ ((unsigned __int8)(*((unsigned __int16 *)dword_52FD00 + 32799) >> 4)
          ^ (unsigned __int8)HIBYTE(*((_WORD *)dword_52FD00 + 32799)))
         & 0xF)) == 0;
}

// 0x42b980  sub_42B980
BOOL __cdecl sub_42B980(int a1, int a2)
{
  int v2; // eax

  v2 = *(int *)(dword_4B324C + 232) >> 8;
  return *(char *)(a2 + 1) <= v2 && *(char *)(a2 + 2) >= v2;
}

// 0x42b9b0  sub_42B9B0
BOOL __cdecl sub_42B9B0(int a1, int a2)
{
  __int16 *v2; // eax
  int v3; // edx

  v2 = word_4B3260;
  v3 = 0;
  while ( (HIBYTE(*v2) & 0x80u) == 0 || (*v2 & 5) == 0 || **((_WORD **)v2 + 2) != *(unsigned __int8 *)(a2 + 1) )
  {
    v2 += 10;
    if ( ++v3 >= 24 )
      return *(_BYTE *)(a2 + 2) != 1;
  }
  return *(_BYTE *)(a2 + 2) == 1;
}

// 0x42ba10  sub_42BA10
BOOL __cdecl sub_42BA10(int a1, int a2)
{
  __int16 *v2; // eax
  int v3; // edx

  v2 = word_4B3260;
  v3 = 0;
  while ( (HIBYTE(*v2) & 0x80u) == 0
       || (*v2 & 5) == 0
       || **((_WORD **)v2 + 2) != *(unsigned __int8 *)(a2 + 1)
       || *((_DWORD *)v2 + 1) != a1 )
  {
    v2 += 10;
    if ( ++v3 >= 24 )
      return *(_BYTE *)(a2 + 2) != 1;
  }
  return *(_BYTE *)(a2 + 2) == 1;
}

// 0x42ba80  sub_42BA80
BOOL sub_42BA80()
{
  return *(_DWORD *)(dword_4B324C + 108) != 0;
}

// 0x42baa0  sub_42BAA0
BOOL __cdecl sub_42BAA0(int a1, int a2)
{
  int v2; // ecx

  v2 = dword_4B3E80[4 * *(unsigned __int8 *)(a2 + 2)];
  return (v2 == 0 || dword_4B3E88[4 * v2] == dword_4B3E84[4 * *(unsigned __int8 *)(a2 + 2)])
      && dword_4B3E88[4 * *(unsigned __int8 *)(a2 + 2)] == *(unsigned __int8 *)(a2 + 1);
}

// 0x42baf0  sub_42BAF0
BOOL __cdecl sub_42BAF0(int a1, int a2)
{
  int v2; // ecx

  v2 = dword_4B3E80[4 * *(unsigned __int8 *)(a2 + 2)];
  if ( v2 == 0 )
    return dword_4B3E88[4 * *(unsigned __int8 *)(a2 + 2)] != *(unsigned __int8 *)(a2 + 1);
  if ( dword_4B3E88[4 * v2] == dword_4B3E84[4 * *(unsigned __int8 *)(a2 + 2)] )
    return false;
  return dword_4B3E88[4 * *(unsigned __int8 *)(a2 + 2)] == *(unsigned __int8 *)(a2 + 1);
}

// 0x42bb50  sub_42BB50
int __cdecl sub_42BB50(int a1, int a2)
{
  int v2; // eax
  char v3; // cl
  int result; // eax

  v2 = 0;
  if ( byte_9CA8DE == 0
    && byte_9CA8F0 == 0
    && byte_9CA8EE == 0
    && byte_9CA8E0 == 0
    && byte_9CA8D2 == 0
    && byte_9CA8E1 == 0
    && byte_9CA8E2 == 0
    && byte_9CA8E3 == 0
    && byte_9CA8D7 == 0
    && byte_9CA8E4 == 0
    && byte_9CA8E5 == 0
    && byte_9CA8E6 == 0
    && byte_9CA8F2 == 0
    && byte_9CA8F1 == 0
    && byte_9CA8D8 == 0
    && byte_9CA8D9 == 0
    && byte_9CA8D0 == 0
    && byte_9CA8D3 == 0
    && byte_9CA8DF == 0
    && byte_9CA8D4 == 0
    && byte_9CA8D6 == 0
    && byte_9CA8EF == 0
    && byte_9CA8D1 == 0
    && byte_9CA8ED == 0
    && byte_9CA8D5 == 0
    && byte_9CA8EC == 0 )
  {
    return 0;
  }
  do
    v3 = byte_9CA8C1[v2++];
  while ( v3 == 0 );
  switch ( dword_4B3E88[4 * *(unsigned __int8 *)(a2 + 2)] )
  {
    case 0:
      if ( HIBYTE(dword_9CA86C) == v2 )
        HIBYTE(dword_9CA86C) = BYTE2(dword_9CA86C);
      if ( (unsigned __int8)dword_9CA870 == v2 )
        LOBYTE(dword_9CA870) = BYTE2(dword_9CA86C);
      if ( BYTE1(dword_9CA870) == v2 )
        BYTE1(dword_9CA870) = BYTE2(dword_9CA86C);
      if ( (unsigned __int8)dword_9CA86C == v2 )
        LOBYTE(dword_9CA86C) = BYTE2(dword_9CA86C);
      if ( BYTE1(dword_9CA86C) == v2 )
        BYTE1(dword_9CA86C) = BYTE2(dword_9CA86C);
      if ( (unsigned __int8)byte_9CA86A == v2 )
        byte_9CA86A = BYTE2(dword_9CA86C);
      if ( (unsigned __int8)byte_9CA86B == v2 )
        byte_9CA86B = BYTE2(dword_9CA86C);
      BYTE2(dword_9CA86C) = v2;
      WriteConfig();
      result = 1;
      break;
    case 1:
      if ( BYTE2(dword_9CA86C) == v2 )
        BYTE2(dword_9CA86C) = HIBYTE(dword_9CA86C);
      if ( (unsigned __int8)dword_9CA870 == v2 )
        LOBYTE(dword_9CA870) = HIBYTE(dword_9CA86C);
      if ( BYTE1(dword_9CA870) == v2 )
        BYTE1(dword_9CA870) = HIBYTE(dword_9CA86C);
      if ( (unsigned __int8)dword_9CA86C == v2 )
        LOBYTE(dword_9CA86C) = HIBYTE(dword_9CA86C);
      if ( BYTE1(dword_9CA86C) == v2 )
        BYTE1(dword_9CA86C) = HIBYTE(dword_9CA86C);
      if ( (unsigned __int8)byte_9CA86A == v2 )
        byte_9CA86A = HIBYTE(dword_9CA86C);
      if ( (unsigned __int8)byte_9CA86B == v2 )
        byte_9CA86B = HIBYTE(dword_9CA86C);
      HIBYTE(dword_9CA86C) = v2;
      WriteConfig();
      result = 1;
      break;
    case 2:
      if ( HIBYTE(dword_9CA86C) == v2 )
        HIBYTE(dword_9CA86C) = dword_9CA870;
      if ( BYTE2(dword_9CA86C) == v2 )
        BYTE2(dword_9CA86C) = dword_9CA870;
      if ( BYTE1(dword_9CA870) == v2 )
        BYTE1(dword_9CA870) = dword_9CA870;
      if ( (unsigned __int8)dword_9CA86C == v2 )
        LOBYTE(dword_9CA86C) = dword_9CA870;
      if ( BYTE1(dword_9CA86C) == v2 )
        BYTE1(dword_9CA86C) = dword_9CA870;
      if ( (unsigned __int8)byte_9CA86A == v2 )
        byte_9CA86A = dword_9CA870;
      if ( (unsigned __int8)byte_9CA86B == v2 )
        byte_9CA86B = dword_9CA870;
      LOBYTE(dword_9CA870) = v2;
      WriteConfig();
      result = 1;
      break;
    case 3:
      if ( HIBYTE(dword_9CA86C) == v2 )
        HIBYTE(dword_9CA86C) = BYTE1(dword_9CA870);
      if ( BYTE2(dword_9CA86C) == v2 )
        BYTE2(dword_9CA86C) = BYTE1(dword_9CA870);
      if ( (unsigned __int8)dword_9CA870 == v2 )
        LOBYTE(dword_9CA870) = BYTE1(dword_9CA870);
      if ( (unsigned __int8)dword_9CA86C == v2 )
        LOBYTE(dword_9CA86C) = BYTE1(dword_9CA870);
      if ( BYTE1(dword_9CA86C) == v2 )
        BYTE1(dword_9CA86C) = BYTE1(dword_9CA870);
      if ( (unsigned __int8)byte_9CA86A == v2 )
        byte_9CA86A = BYTE1(dword_9CA870);
      if ( (unsigned __int8)byte_9CA86B == v2 )
        byte_9CA86B = BYTE1(dword_9CA870);
      BYTE1(dword_9CA870) = v2;
      WriteConfig();
      result = 1;
      break;
    case 4:
      if ( HIBYTE(dword_9CA86C) == v2 )
        HIBYTE(dword_9CA86C) = dword_9CA86C;
      if ( BYTE2(dword_9CA86C) == v2 )
        BYTE2(dword_9CA86C) = dword_9CA86C;
      if ( (unsigned __int8)dword_9CA870 == v2 )
        LOBYTE(dword_9CA870) = dword_9CA86C;
      if ( BYTE1(dword_9CA870) == v2 )
        BYTE1(dword_9CA870) = dword_9CA86C;
      if ( BYTE1(dword_9CA86C) == v2 )
        BYTE1(dword_9CA86C) = dword_9CA86C;
      if ( (unsigned __int8)byte_9CA86A == v2 )
        byte_9CA86A = dword_9CA86C;
      if ( (unsigned __int8)byte_9CA86B == v2 )
        byte_9CA86B = dword_9CA86C;
      LOBYTE(dword_9CA86C) = v2;
      WriteConfig();
      result = 1;
      break;
    case 5:
      if ( HIBYTE(dword_9CA86C) == v2 )
        HIBYTE(dword_9CA86C) = BYTE1(dword_9CA86C);
      if ( BYTE2(dword_9CA86C) == v2 )
        BYTE2(dword_9CA86C) = BYTE1(dword_9CA86C);
      if ( (unsigned __int8)dword_9CA870 == v2 )
        LOBYTE(dword_9CA870) = BYTE1(dword_9CA86C);
      if ( BYTE1(dword_9CA870) == v2 )
        BYTE1(dword_9CA870) = BYTE1(dword_9CA86C);
      if ( (unsigned __int8)dword_9CA86C == v2 )
        LOBYTE(dword_9CA86C) = BYTE1(dword_9CA86C);
      if ( (unsigned __int8)byte_9CA86A == v2 )
        byte_9CA86A = BYTE1(dword_9CA86C);
      if ( (unsigned __int8)byte_9CA86B == v2 )
        byte_9CA86B = BYTE1(dword_9CA86C);
      BYTE1(dword_9CA86C) = v2;
      WriteConfig();
      result = 1;
      break;
    case 6:
      if ( HIBYTE(dword_9CA86C) == v2 )
        HIBYTE(dword_9CA86C) = byte_9CA86A;
      if ( BYTE2(dword_9CA86C) == v2 )
        BYTE2(dword_9CA86C) = byte_9CA86A;
      if ( (unsigned __int8)dword_9CA870 == v2 )
        LOBYTE(dword_9CA870) = byte_9CA86A;
      if ( BYTE1(dword_9CA870) == v2 )
        BYTE1(dword_9CA870) = byte_9CA86A;
      if ( (unsigned __int8)dword_9CA86C == v2 )
        LOBYTE(dword_9CA86C) = byte_9CA86A;
      if ( BYTE1(dword_9CA86C) == v2 )
        BYTE1(dword_9CA86C) = byte_9CA86A;
      if ( (unsigned __int8)byte_9CA86B == v2 )
        byte_9CA86B = byte_9CA86A;
      byte_9CA86A = v2;
      WriteConfig();
      result = 1;
      break;
    case 7:
      if ( HIBYTE(dword_9CA86C) == v2 )
        HIBYTE(dword_9CA86C) = byte_9CA86B;
      if ( BYTE2(dword_9CA86C) == v2 )
        BYTE2(dword_9CA86C) = byte_9CA86B;
      if ( (unsigned __int8)dword_9CA870 == v2 )
        LOBYTE(dword_9CA870) = byte_9CA86B;
      if ( BYTE1(dword_9CA870) == v2 )
        BYTE1(dword_9CA870) = byte_9CA86B;
      if ( (unsigned __int8)dword_9CA86C == v2 )
        LOBYTE(dword_9CA86C) = byte_9CA86B;
      if ( BYTE1(dword_9CA86C) == v2 )
        BYTE1(dword_9CA86C) = byte_9CA86B;
      if ( (unsigned __int8)byte_9CA86B == v2 )
        byte_9CA86A = byte_9CA86B;
      byte_9CA86B = v2;
      WriteConfig();
      result = 1;
      break;
    default:
      return 0;
  }
  return result;
}

// 0x42c1c0  sub_42C1C0
int __cdecl sub_42C1C0(int a1, int a2)
{
  int v2; // eax
  int result; // eax

  v2 = GetPressedButton();
  if ( v2 == 255 || v2 == 254 )
    return 0;
  switch ( dword_4B3E88[4 * *(unsigned __int8 *)(a2 + 2)] )
  {
    case 0:
      if ( BYTE1(dword_9CA85C) == v2 )
        BYTE1(dword_9CA85C) = dword_9CA85C;
      if ( BYTE2(dword_9CA85C) == v2 )
        BYTE2(dword_9CA85C) = dword_9CA85C;
      if ( HIBYTE(dword_9CA85C) == v2 )
        HIBYTE(dword_9CA85C) = dword_9CA85C;
      if ( (unsigned __int8)dword_9CA860 == v2 )
        LOBYTE(dword_9CA860) = dword_9CA85C;
      if ( BYTE1(dword_9CA860) == v2 )
        BYTE1(dword_9CA860) = dword_9CA85C;
      if ( HIBYTE(dword_9CA860) == v2 )
        HIBYTE(dword_9CA860) = dword_9CA85C;
      if ( BYTE2(dword_9CA860) == v2 )
        BYTE2(dword_9CA860) = dword_9CA85C;
      LOBYTE(dword_9CA85C) = v2;
      WriteConfig();
      result = 1;
      break;
    case 1:
      if ( (unsigned __int8)dword_9CA85C == v2 )
        LOBYTE(dword_9CA85C) = BYTE1(dword_9CA85C);
      if ( BYTE2(dword_9CA85C) == v2 )
        BYTE2(dword_9CA85C) = BYTE1(dword_9CA85C);
      if ( HIBYTE(dword_9CA85C) == v2 )
        HIBYTE(dword_9CA85C) = BYTE1(dword_9CA85C);
      if ( (unsigned __int8)dword_9CA860 == v2 )
        LOBYTE(dword_9CA860) = BYTE1(dword_9CA85C);
      if ( BYTE1(dword_9CA860) == v2 )
        BYTE1(dword_9CA860) = BYTE1(dword_9CA85C);
      if ( HIBYTE(dword_9CA860) == v2 )
        HIBYTE(dword_9CA860) = BYTE1(dword_9CA85C);
      if ( BYTE2(dword_9CA860) == v2 )
        BYTE2(dword_9CA860) = BYTE1(dword_9CA85C);
      BYTE1(dword_9CA85C) = v2;
      WriteConfig();
      result = 1;
      break;
    case 2:
      if ( BYTE1(dword_9CA85C) == v2 )
        BYTE1(dword_9CA85C) = BYTE2(dword_9CA85C);
      if ( (unsigned __int8)dword_9CA85C == v2 )
        LOBYTE(dword_9CA85C) = BYTE2(dword_9CA85C);
      if ( HIBYTE(dword_9CA85C) == v2 )
        HIBYTE(dword_9CA85C) = BYTE2(dword_9CA85C);
      if ( (unsigned __int8)dword_9CA860 == v2 )
        LOBYTE(dword_9CA860) = BYTE2(dword_9CA85C);
      if ( BYTE1(dword_9CA860) == v2 )
        BYTE1(dword_9CA860) = BYTE2(dword_9CA85C);
      if ( HIBYTE(dword_9CA860) == v2 )
        HIBYTE(dword_9CA860) = BYTE2(dword_9CA85C);
      if ( BYTE2(dword_9CA860) == v2 )
        BYTE2(dword_9CA860) = BYTE2(dword_9CA85C);
      BYTE2(dword_9CA85C) = v2;
      WriteConfig();
      result = 1;
      break;
    case 3:
      if ( BYTE1(dword_9CA85C) == v2 )
        BYTE1(dword_9CA85C) = HIBYTE(dword_9CA85C);
      if ( (unsigned __int8)dword_9CA85C == v2 )
        LOBYTE(dword_9CA85C) = HIBYTE(dword_9CA85C);
      if ( BYTE2(dword_9CA85C) == v2 )
        BYTE2(dword_9CA85C) = HIBYTE(dword_9CA85C);
      if ( (unsigned __int8)dword_9CA860 == v2 )
        LOBYTE(dword_9CA860) = HIBYTE(dword_9CA85C);
      if ( BYTE1(dword_9CA860) == v2 )
        BYTE1(dword_9CA860) = HIBYTE(dword_9CA85C);
      if ( HIBYTE(dword_9CA860) == v2 )
        HIBYTE(dword_9CA860) = HIBYTE(dword_9CA85C);
      if ( BYTE2(dword_9CA860) == v2 )
        BYTE2(dword_9CA860) = HIBYTE(dword_9CA85C);
      HIBYTE(dword_9CA85C) = v2;
      WriteConfig();
      result = 1;
      break;
    case 4:
      if ( BYTE1(dword_9CA85C) == v2 )
        BYTE1(dword_9CA85C) = dword_9CA860;
      if ( (unsigned __int8)dword_9CA85C == v2 )
        LOBYTE(dword_9CA85C) = dword_9CA860;
      if ( BYTE2(dword_9CA85C) == v2 )
        BYTE2(dword_9CA85C) = dword_9CA860;
      if ( HIBYTE(dword_9CA85C) == v2 )
        HIBYTE(dword_9CA85C) = dword_9CA860;
      if ( BYTE1(dword_9CA860) == v2 )
        BYTE1(dword_9CA860) = dword_9CA860;
      if ( HIBYTE(dword_9CA860) == v2 )
        HIBYTE(dword_9CA860) = dword_9CA860;
      if ( BYTE2(dword_9CA860) == v2 )
        BYTE2(dword_9CA860) = dword_9CA860;
      LOBYTE(dword_9CA860) = v2;
      WriteConfig();
      result = 1;
      break;
    case 5:
      if ( BYTE1(dword_9CA85C) == v2 )
        BYTE1(dword_9CA85C) = BYTE1(dword_9CA860);
      if ( (unsigned __int8)dword_9CA85C == v2 )
        LOBYTE(dword_9CA85C) = BYTE1(dword_9CA860);
      if ( BYTE2(dword_9CA85C) == v2 )
        BYTE2(dword_9CA85C) = BYTE1(dword_9CA860);
      if ( HIBYTE(dword_9CA85C) == v2 )
        HIBYTE(dword_9CA85C) = BYTE1(dword_9CA860);
      if ( (unsigned __int8)dword_9CA860 == v2 )
        LOBYTE(dword_9CA860) = BYTE1(dword_9CA860);
      if ( HIBYTE(dword_9CA860) == v2 )
        HIBYTE(dword_9CA860) = BYTE1(dword_9CA860);
      if ( BYTE2(dword_9CA860) == v2 )
        BYTE2(dword_9CA860) = BYTE1(dword_9CA860);
      BYTE1(dword_9CA860) = v2;
      WriteConfig();
      result = 1;
      break;
    case 6:
      if ( BYTE1(dword_9CA85C) == v2 )
        BYTE1(dword_9CA85C) = HIBYTE(dword_9CA860);
      if ( (unsigned __int8)dword_9CA85C == v2 )
        LOBYTE(dword_9CA85C) = HIBYTE(dword_9CA860);
      if ( BYTE2(dword_9CA85C) == v2 )
        BYTE2(dword_9CA85C) = HIBYTE(dword_9CA860);
      if ( HIBYTE(dword_9CA85C) == v2 )
        HIBYTE(dword_9CA85C) = HIBYTE(dword_9CA860);
      if ( (unsigned __int8)dword_9CA860 == v2 )
        LOBYTE(dword_9CA860) = HIBYTE(dword_9CA860);
      if ( BYTE1(dword_9CA860) == v2 )
        BYTE1(dword_9CA860) = HIBYTE(dword_9CA860);
      if ( BYTE2(dword_9CA860) == v2 )
        BYTE2(dword_9CA860) = HIBYTE(dword_9CA860);
      HIBYTE(dword_9CA860) = v2;
      WriteConfig();
      result = 1;
      break;
    case 7:
      if ( BYTE1(dword_9CA85C) == v2 )
        BYTE1(dword_9CA85C) = BYTE2(dword_9CA860);
      if ( (unsigned __int8)dword_9CA85C == v2 )
        LOBYTE(dword_9CA85C) = BYTE2(dword_9CA860);
      if ( BYTE2(dword_9CA85C) == v2 )
        BYTE2(dword_9CA85C) = BYTE2(dword_9CA860);
      if ( HIBYTE(dword_9CA85C) == v2 )
        HIBYTE(dword_9CA85C) = BYTE2(dword_9CA860);
      if ( (unsigned __int8)dword_9CA860 == v2 )
        LOBYTE(dword_9CA860) = BYTE2(dword_9CA860);
      if ( BYTE1(dword_9CA860) == v2 )
        BYTE1(dword_9CA860) = BYTE2(dword_9CA860);
      if ( BYTE2(dword_9CA860) == v2 )
        HIBYTE(dword_9CA860) = BYTE2(dword_9CA860);
      BYTE2(dword_9CA860) = v2;
      WriteConfig();
      result = 1;
      break;
    default:
      return 0;
  }
  return result;
}

// 0x42c700  CondTkdesc
// IDA symbol: sub_42C700
// Documented as port/logic in doc/functions.md.
BOOL CondTkdesc()
{
  return (word_4B18D0 & 2) != 0;
}

// 0x42c710  sub_42C710
BOOL sub_42C710()
{
  return dword_4B1A2C != 0;
}

// 0x42c720  sub_42C720
char __cdecl sub_42C720(int a1, int a2)
{
  char result; // al

  result = dword_9CA858;
  if ( dword_9CA858 != 0 && *(_BYTE *)(a2 + 1) != 0 )
    return 1;
  if ( dword_9CA858 == 0 )
  {
    if ( *(_BYTE *)(a2 + 1) != 0 )
      return result;
    if ( dword_9CA858 == 0 )
      goto LABEL_13;
  }
  if ( *(_BYTE *)(a2 + 1) == 0 )
    return 0;
  if ( dword_9CA858 == 0 )
  {
LABEL_13:
    result = *(_BYTE *)(a2 + 1);
    if ( result == 0 )
      return 1;
  }
  return result;
}

// 0x42c760  RunLogicAction
// IDA symbol: sub_42C760
// Documented as game/logic in doc/functions.md.
unsigned __int8 __cdecl RunLogicAction(int a1, int a2)
{
  unsigned __int8 result; // al

  result = *(_BYTE *)(a2 + 3);
  if ( result < 0x81u )
    return ((_DWORD (__cdecl *)(int, int))funcs_42C776[*(unsigned __int8 *)(a2 + 3)])(a1, a2);
  return result;
}

// 0x42c790  ActionIncs
// IDA symbol: sub_42C790
// Documented as game/logic in doc/functions.md.
unsigned __int16 __cdecl ActionIncs(int a1, int a2)
{
  unsigned __int16 result; // ax

  result = *(_WORD *)(a2 + 6);
  ++byte_4B2260[result];
  return result;
}

// 0x42c7b0  ActionIncg
// IDA symbol: sub_42C7B0
// Documented as game/logic in doc/functions.md.
_BYTE *__cdecl ActionIncg(int a1, int a2)
{
  unsigned __int16 v2; // ax
  _BYTE *result; // eax

  if ( *(_WORD *)(a2 + 6) == 7 )
  {
    HIBYTE(v2) = *((_BYTE *)dword_52FD00 + 65852);
    LOBYTE(v2) = *((_BYTE *)dword_52FD00 + 65607);
    result = (_BYTE *)(v2 + 1);
    *((_BYTE *)dword_52FD00 + 65607) = (_BYTE)result;
    *((_BYTE *)dword_52FD00 + 65852) = BYTE1(result);
  }
  else
  {
    result = (char *)dword_52FD00 + *(unsigned __int16 *)(a2 + 6) + 65600;
    ++*result;
  }
  return result;
}

// 0x42c800  ActionMovsi
// IDA symbol: sub_42C800
// Documented as game/logic in doc/functions.md.
int __cdecl ActionMovsi(int a1, int a2)
{
  byte_4B2260[*(unsigned __int16 *)(a2 + 6)] = *(_BYTE *)(a2 + 4);
  return a2;
}

// 0x42c820  ActionMovgi
// IDA symbol: sub_42C820
// Documented as game/logic in doc/functions.md.
void *__cdecl ActionMovgi(int a1, int a2)
{
  void *result; // eax

  result = dword_52FD00;
  *((_BYTE *)dword_52FD00 + *(unsigned __int16 *)(a2 + 6) + 65600) = *(_BYTE *)(a2 + 4);
  return result;
}

// 0x42c840  ActionDecs
// IDA symbol: sub_42C840
// Documented as game/logic in doc/functions.md.
unsigned __int16 __cdecl ActionDecs(int a1, int a2)
{
  unsigned __int16 result; // ax

  result = *(_WORD *)(a2 + 6);
  --byte_4B2260[result];
  return result;
}

// 0x42c860  ActionDecg
// IDA symbol: sub_42C860
// Documented as game/logic in doc/functions.md.
_BYTE *__cdecl ActionDecg(int a1, int a2)
{
  unsigned __int16 v2; // ax
  _BYTE *result; // eax

  if ( *(_WORD *)(a2 + 6) == 7 )
  {
    HIBYTE(v2) = *((_BYTE *)dword_52FD00 + 65852);
    LOBYTE(v2) = *((_BYTE *)dword_52FD00 + 65607);
    result = (_BYTE *)(v2 + 0xFFFF);
    *((_BYTE *)dword_52FD00 + 65607) = (_BYTE)result;
    *((_BYTE *)dword_52FD00 + 65852) = BYTE1(result);
  }
  else
  {
    result = (char *)dword_52FD00 + *(unsigned __int16 *)(a2 + 6) + 65600;
    --*result;
  }
  return result;
}

// 0x42c8c0  ActionClrs
// IDA symbol: sub_42C8C0
// Documented as game/logic in doc/functions.md.
int __cdecl ActionClrs(int a1, int a2)
{
  int result; // eax

  result = *(unsigned __int16 *)(a2 + 6);
  byte_4B2260[result] = 0;
  return result;
}

// 0x42c8e0  ActionClrg
// IDA symbol: sub_42C8E0
// Documented as game/logic in doc/functions.md.
int __cdecl ActionClrg(int a1, int a2)
{
  int result; // eax

  result = *(unsigned __int16 *)(a2 + 6);
  *((_BYTE *)dword_52FD00 + result + 65600) = 0;
  return result;
}

// 0x42c900  ActionNegs
// IDA symbol: sub_42C900
// Documented as game/logic in doc/functions.md.
unsigned __int16 __cdecl ActionNegs(int a1, int a2)
{
  unsigned __int16 result; // ax

  result = *(_WORD *)(a2 + 6);
  byte_4B2260[result] = -byte_4B2260[result];
  return result;
}

// 0x42c920  ActionNegg
// IDA symbol: sub_42C920
// Documented as game/logic in doc/functions.md.
_BYTE *__cdecl ActionNegg(int a1, int a2)
{
  unsigned __int16 v2; // ax
  char v3; // cl
  _BYTE *result; // eax

  v2 = *(_WORD *)(a2 + 6);
  v3 = *((_BYTE *)dword_52FD00 + v2 + 65600);
  result = (char *)dword_52FD00 + v2 + 65600;
  *result = -v3;
  return result;
}

// 0x42c950  ActionOrsi
// IDA symbol: sub_42C950
// Documented as game/logic in doc/functions.md.
unsigned __int16 __cdecl ActionOrsi(int a1, int a2)
{
  unsigned __int16 result; // ax

  result = *(_WORD *)(a2 + 6);
  byte_4B2260[result] |= *(_BYTE *)(a2 + 4);
  return result;
}

// 0x42c970  ActionOrgi
// IDA symbol: sub_42C970
// Documented as game/logic in doc/functions.md.
_BYTE *__cdecl ActionOrgi(int a1, int a2)
{
  _BYTE *result; // eax

  result = (char *)dword_52FD00 + *(unsigned __int16 *)(a2 + 6) + 65600;
  *result |= *(_BYTE *)(a2 + 4);
  return result;
}

// 0x42c990  ActionAndsi
// IDA symbol: sub_42C990
// Documented as game/logic in doc/functions.md.
unsigned __int16 __cdecl ActionAndsi(int a1, int a2)
{
  unsigned __int16 result; // ax

  result = *(_WORD *)(a2 + 6);
  byte_4B2260[result] &= *(_BYTE *)(a2 + 4);
  return result;
}

// 0x42c9b0  ActionAndgi
// IDA symbol: sub_42C9B0
// Documented as game/logic in doc/functions.md.
_BYTE *__cdecl ActionAndgi(int a1, int a2)
{
  _BYTE *result; // eax

  result = (char *)dword_52FD00 + *(unsigned __int16 *)(a2 + 6) + 65600;
  *result &= *(_BYTE *)(a2 + 4);
  return result;
}

// 0x42c9d0  ActionMovss
// IDA symbol: sub_42C9D0
// Documented as game/logic in doc/functions.md.
char __cdecl ActionMovss(int a1, int a2)
{
  char result; // al

  result = byte_4B2260[*(unsigned __int16 *)(a2 + 4)];
  byte_4B2260[*(unsigned __int16 *)(a2 + 6)] = result;
  return result;
}

// 0x42c9f0  ActionMovgg
// IDA symbol: sub_42C9F0
// Documented as game/logic in doc/functions.md.
void *__cdecl ActionMovgg(int a1, int a2)
{
  void *result; // eax

  result = dword_52FD00;
  *((_BYTE *)dword_52FD00 + *(unsigned __int16 *)(a2 + 6) + 65600) = *((_BYTE *)dword_52FD00
                                                                     + *(unsigned __int16 *)(a2 + 4)
                                                                     + 65600);
  return result;
}

// 0x42ca20  ActionMovgs
// IDA symbol: sub_42CA20
// Documented as game/logic in doc/functions.md.
char __cdecl ActionMovgs(int a1, int a2)
{
  char result; // al

  result = byte_4B2260[*(unsigned __int16 *)(a2 + 4)];
  *((_BYTE *)dword_52FD00 + *(unsigned __int16 *)(a2 + 6) + 65600) = result;
  return result;
}

// 0x42ca50  ActionMovsg
// IDA symbol: sub_42CA50
// Documented as game/logic in doc/functions.md.
void *__cdecl ActionMovsg(int a1, int a2)
{
  void *result; // eax

  result = dword_52FD00;
  byte_4B2260[*(unsigned __int16 *)(a2 + 6)] = *((_BYTE *)dword_52FD00 + *(unsigned __int16 *)(a2 + 4) + 65600);
  return result;
}

// 0x42ca80  ActionIncss
// IDA symbol: sub_42CA80
// Documented as game/logic in doc/functions.md.
unsigned __int16 __cdecl ActionIncss(int a1, int a2)
{
  unsigned __int16 result; // ax

  ++byte_4B2260[*(unsigned __int16 *)(a2 + 6)];
  result = *(_WORD *)(a2 + 4);
  ++byte_4B2260[result];
  return result;
}

// 0x42cab0  ActionIncgg
// IDA symbol: sub_42CAB0
// Documented as game/logic in doc/functions.md.
_BYTE *__cdecl ActionIncgg(int a1, int a2)
{
  __int16 v2; // ax
  _BYTE *v3; // eax
  __int16 v4; // ax
  char v5; // dl
  _BYTE *result; // eax

  if ( *(_WORD *)(a2 + 6) == 7 )
  {
    HIBYTE(v2) = *((_BYTE *)dword_52FD00 + 65852);
    LOBYTE(v2) = *((_BYTE *)dword_52FD00 + 65607);
    *((_BYTE *)dword_52FD00 + 65607) = ++v2;
    *((_BYTE *)dword_52FD00 + 65852) = HIBYTE(v2);
  }
  else
  {
    v3 = (char *)dword_52FD00 + *(unsigned __int16 *)(a2 + 6) + 65600;
    ++*v3;
  }
  if ( *(_WORD *)(a2 + 4) == 7 )
  {
    HIBYTE(v4) = *((_BYTE *)dword_52FD00 + 65852);
    LOBYTE(v4) = *((_BYTE *)dword_52FD00 + 65607);
    *((_BYTE *)dword_52FD00 + 65607) = ++v4;
    v5 = HIBYTE(v4);
    result = dword_52FD00;
    *((_BYTE *)dword_52FD00 + 65852) = v5;
  }
  else
  {
    result = (char *)dword_52FD00 + *(unsigned __int16 *)(a2 + 4) + 65600;
    ++*result;
  }
  return result;
}

// 0x42cb50  ActionRnds
// IDA symbol: sub_42CB50
// Documented as game/logic in doc/functions.md.
int __cdecl ActionRnds(int a1, int a2)
{
  int v2; // edx
  int result; // eax

  v2 = BugsRand() % *(unsigned __int16 *)(a2 + 4);
  result = *(unsigned __int16 *)(a2 + 6);
  byte_4B2260[result] = v2;
  return result;
}

// 0x42cb80  ActionRndg
// IDA symbol: sub_42CB80
// Documented as game/logic in doc/functions.md.
int __cdecl ActionRndg(int a1, int a2)
{
  int v2; // edx
  int result; // eax

  v2 = BugsRand() % *(unsigned __int16 *)(a2 + 4);
  result = *(unsigned __int16 *)(a2 + 6);
  *((_BYTE *)dword_52FD00 + result + 65600) = v2;
  return result;
}

// 0x42cbb0  sub_42CBB0
int __cdecl sub_42CBB0(int a1)
{
  int v2; // ecx

  v2 = *(_DWORD *)(a1 + 20);
  BYTE1(v2) |= 1u;
  *(_DWORD *)(a1 + 20) = v2;
  return a1;
}

// 0x42cbc0  sub_42CBC0
int __cdecl sub_42CBC0(int a1, int a2)
{
  int v3; // ecx

  ++byte_4B2260[*(unsigned __int16 *)(a2 + 6)];
  v3 = *(_DWORD *)(a1 + 20);
  BYTE1(v3) |= 1u;
  *(_DWORD *)(a1 + 20) = v3;
  return a1;
}

// 0x42cbf0  sub_42CBF0
int __cdecl sub_42CBF0(int a1, int a2)
{
  int v3; // ecx

  ++byte_4B2260[*(unsigned __int16 *)(a2 + 6)];
  ++byte_4B2260[*(unsigned __int16 *)(a2 + 4)];
  v3 = *(_DWORD *)(a1 + 20);
  BYTE1(v3) |= 1u;
  *(_DWORD *)(a1 + 20) = v3;
  return a1;
}

// 0x42cc30  sub_42CC30
__int16 __cdecl sub_42CC30(int a1, int a2)
{
  __int16 result; // ax
  unsigned __int16 v3; // cx
  __int16 v4; // dx

  result = word_4B39DE;
  if ( (unsigned __int16)word_4B39DE < 8u )
  {
    v3 = word_4B39DE;
    result = word_4B39DE + 1;
    v4 = *(_WORD *)(a2 + 4);
    ++word_4B39DE;
    word_4B2480[v3] = v4;
  }
  return result;
}

// 0x42cc60  sub_42CC60
int __cdecl sub_42CC60(int a1)
{
  *(_WORD *)(a1 + 34) = 0;
  return a1;
}

// 0x42cc70  sub_42CC70
int __cdecl sub_42CC70(int a1, int a2)
{
  int result; // eax
  int v3; // edi
  char v4; // cl

  result = a2;
  v3 = *(unsigned __int16 *)(a2 + 6);
  v4 = byte_4B2260[(unsigned __int16)v3];
  if ( v4 != 0 )
  {
    result = 0;
    if ( *(unsigned __int16 *)(a1 + 34) / 30 > 1 )
    {
      byte_4B2260[v3] = v4 - 1;
      *(_WORD *)(a1 + 34) = 0;
    }
  }
  return result;
}

// 0x42ccc0  sub_42CCC0
int __cdecl sub_42CCC0(int a1, int a2)
{
  int result; // eax
  int v3; // eax

  *(_WORD *)(dword_4B324C + 222) = *(_WORD *)(a1 + 222) + 2048;
  *(_WORD *)(dword_4B324C + 382) = 0;
  *(_WORD *)(dword_4B324C + 380) = *(_WORD *)(a2 + 4);
  *(_DWORD *)(dword_4B324C + 20) |= 0x2000000u;
  result = dword_4B324C;
  if ( *(_DWORD *)(dword_4B324C + 112) != 0 )
  {
    *(_DWORD *)(dword_4B324C + 196) = 0;
    *(_DWORD *)(dword_4B324C + 192) = dword_4B324C + 204;
    v3 = *(_DWORD *)(dword_4B324C + 112);
    if ( v3 == *(_DWORD *)(v3 + 108) )
      *(_DWORD *)(v3 + 108) = 0;
    *(_DWORD *)(dword_4B324C + 112) = 0;
    result = dword_4B324C;
    *(_DWORD *)(dword_4B324C + 20) &= 0xFFFFFFEB;
  }
  return result;
}

// 0x42cd60  sub_42CD60
int __cdecl sub_42CD60(int a1)
{
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFF9FFFFF | 0x200000;
  return a1;
}

// 0x42cd80  sub_42CD80
int __cdecl sub_42CD80(int a1)
{
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFF9FFFFF | 0x400000;
  return a1;
}

// 0x42cda0  sub_42CDA0
int __cdecl sub_42CDA0(int a1)
{
  *(_WORD *)(a1 + 60) &= ~0x40u;
  return a1;
}

// 0x42cdb0  sub_42CDB0
int __cdecl sub_42CDB0(int a1)
{
  int result; // eax
  int v2; // eax
  int v3; // ecx

  result = *(_DWORD *)(a1 + 108);
  if ( result != 0 )
  {
    *(_DWORD *)(result + 20) &= 0xFFFFF7EB;
    v2 = *(_DWORD *)(a1 + 108);
    v3 = *(_DWORD *)(v2 + 20);
    BYTE1(v3) |= 0x10u;
    *(_DWORD *)(v2 + 20) = v3;
    *(_DWORD *)(*(_DWORD *)(a1 + 108) + 196) = 0;
    *(_DWORD *)(*(_DWORD *)(a1 + 108) + 192) = *(_DWORD *)(a1 + 108) + 204;
    *(_WORD *)(*(_DWORD *)(a1 + 108) + 38) = *(_WORD *)(a1 + 38);
    *(_WORD *)(*(_DWORD *)(a1 + 108) + 220) = *(_WORD *)(a1 + 220);
    *(_WORD *)(*(_DWORD *)(a1 + 108) + 222) = *(_WORD *)(a1 + 222);
    *(_WORD *)(*(_DWORD *)(a1 + 108) + 224) = *(_WORD *)(a1 + 224);
    *(_DWORD *)(*(_DWORD *)(a1 + 108) + 112) = 0;
    result = sub_437820(*(_DWORD *)(a1 + 108) + 124);
    *(_DWORD *)(a1 + 108) = 0;
  }
  return result;
}

// 0x42ce60  sub_42CE60
void __cdecl sub_42CE60(int a1, int a2)
{
  sub_41DF30(a1, *(_WORD *)(a2 + 4), 1, dword_4B2368);
}

// 0x42ce90  sub_42CE90
int sub_42CE90()
{
  *((_BYTE *)dword_52FD00 + 65601) = 0;
  if ( dword_4B39D8 != 0 )
    return sub_437D00(dword_4B39D8, &dword_4B2180);
  else
    return sub_437D00(dword_4B2370, &dword_4B2180);
}

// 0x42ced0  ActionAddsi
// IDA symbol: sub_42CED0
// Documented as game/logic in doc/functions.md.
unsigned __int16 __cdecl ActionAddsi(int a1, int a2)
{
  unsigned __int16 result; // ax

  result = *(_WORD *)(a2 + 6);
  byte_4B2260[result] += *(_BYTE *)(a2 + 4);
  return result;
}

// 0x42cef0  ActionAddgi
// IDA symbol: sub_42CEF0
// Documented as game/logic in doc/functions.md.
_BYTE *__cdecl ActionAddgi(int a1, int a2)
{
  __int16 v2; // cx
  __int16 v3; // cx
  _BYTE *result; // eax

  if ( *(_WORD *)(a2 + 6) == 7 )
  {
    HIBYTE(v2) = *((_BYTE *)dword_52FD00 + 65852);
    LOBYTE(v2) = *((_BYTE *)dword_52FD00 + 65607);
    v3 = (unsigned __int8)*(_WORD *)(a2 + 4) + v2;
    *((_BYTE *)dword_52FD00 + 65607) = v3;
    result = dword_52FD00;
    *((_BYTE *)dword_52FD00 + 65852) = HIBYTE(v3);
  }
  else
  {
    result = (char *)dword_52FD00 + *(unsigned __int16 *)(a2 + 6) + 65600;
    *result += *(_BYTE *)(a2 + 4);
  }
  return result;
}

// 0x42cf50  ActionSubsi
// IDA symbol: sub_42CF50
// Documented as game/logic in doc/functions.md.
unsigned __int16 __cdecl ActionSubsi(int a1, int a2)
{
  unsigned __int16 result; // ax

  result = *(_WORD *)(a2 + 6);
  byte_4B2260[result] -= *(_BYTE *)(a2 + 4);
  return result;
}

// 0x42cf70  ActionSubgi
// IDA symbol: sub_42CF70
// Documented as game/logic in doc/functions.md.
_BYTE *__cdecl ActionSubgi(int a1, int a2)
{
  __int16 v2; // cx
  __int16 v3; // cx
  _BYTE *result; // eax

  if ( *(_WORD *)(a2 + 6) == 7 )
  {
    HIBYTE(v2) = *((_BYTE *)dword_52FD00 + 65852);
    LOBYTE(v2) = *((_BYTE *)dword_52FD00 + 65607);
    v3 = v2 - (unsigned __int8)*(_WORD *)(a2 + 4);
    *((_BYTE *)dword_52FD00 + 65607) = v3;
    result = dword_52FD00;
    *((_BYTE *)dword_52FD00 + 65852) = HIBYTE(v3);
  }
  else
  {
    result = (char *)dword_52FD00 + *(unsigned __int16 *)(a2 + 6) + 65600;
    *result -= *(_BYTE *)(a2 + 4);
  }
  return result;
}

// 0x42cfd0  sub_42CFD0
int __cdecl sub_42CFD0(int a1, int a2)
{
  *(_WORD *)(*(_DWORD *)(a1 + 192) + 18) += (dword_4B2384
                                           * *((__int16 *)dword_52FD00 + 32777)
                                           * (16 * *(unsigned __int16 *)(a2 + 4)
                                            + (unsigned int)*(unsigned __int16 *)(a2 + 6))) >> 7;
  return sub_437820(a1 + 124);
}

// 0x42d020  sub_42D020
int __cdecl sub_42D020(int a1, int a2)
{
  *(_WORD *)(*(_DWORD *)(a1 + 192) + 18) += (unsigned int)(dword_4B2384
                                                         * *((__int16 *)dword_52FD00 + 32777)
                                                         * byte_4B2260[*(unsigned __int16 *)(a2 + 6)]) >> 7;
  return sub_437820(a1 + 124);
}

// 0x42d070  sub_42D070
int __cdecl sub_42D070(int a1, int a2)
{
  *(_WORD *)(*(_DWORD *)(a1 + 192) + 18) += *(_WORD *)(a2 + 6) + 16 * *(_WORD *)(a2 + 4);
  return sub_437820(a1 + 124);
}

// 0x42d0a0  sub_42D0A0
int __cdecl sub_42D0A0(int a1, int a2)
{
  *(_WORD *)(*(_DWORD *)(a1 + 192) + 18) += byte_4B2260[*(unsigned __int16 *)(a2 + 6)];
  return sub_437820(a1 + 124);
}

// 0x42d0d0  sub_42D0D0
int __cdecl sub_42D0D0(int a1, int a2)
{
  word_4B3DAC = *(_WORD *)(a2 + 4);
  return a2;
}

// 0x42d0e0  sub_42D0E0
int sub_42D0E0()
{
  int result; // eax

  result = dword_4B324C;
  *(_DWORD *)(dword_4B324C + 20) |= 0x80000000;
  return result;
}

// 0x42d0f0  sub_42D0F0
void *sub_42D0F0()
{
  void *result; // eax

  result = dword_52FD00;
  *((_DWORD *)dword_52FD00 + 0x4000) = *((unsigned __int8 *)dword_52FD00 + 65614);
  word_4B39BC = 1;
  return result;
}

// 0x42d110  sub_42D110
int __cdecl sub_42D110(int a1, int a2)
{
  *(_WORD *)(dword_4B324C + 222) = 16 * *(_WORD *)(a2 + 4);
  return a2;
}

// 0x42d130  sub_42D130
int __cdecl sub_42D130(int a1, int a2)
{
  *(_WORD *)(dword_4B324C + 40) = *(_WORD *)(a2 + 4);
  return a2;
}

// 0x42d150  sub_42D150
int __cdecl sub_42D150(int a1, int a2)
{
  int result; // eax

  result = *(unsigned __int16 *)(a2 + 6);
  byte_4B2260[result] = *(_BYTE *)(a1 + 30);
  return result;
}

// 0x42d170  sub_42D170
int __cdecl sub_42D170(int a1, int a2)
{
  *(_WORD *)(a1 + 30) = (unsigned __int8)byte_4B2260[*(unsigned __int16 *)(a2 + 6)];
  return a1;
}

// 0x42d190  sub_42D190
int sub_42D190()
{
  int result; // eax

  result = dword_4B324C;
  *(_DWORD *)(dword_4B324C + 24) |= 1u;
  return result;
}

// 0x42d1a0  ActionGvcrt
// IDA symbol: sub_42D1A0
// Documented as game/logic in doc/functions.md.
char __cdecl ActionGvcrt(int a1, int a2)
{
  char v2; // al
  _BYTE *v3; // eax

  v2 = *((_BYTE *)dword_52FD00 + 65601);
  if ( v2 == *((_BYTE *)dword_52FD00 + 65602) )
  {
    v3 = (char *)dword_52FD00 + *(unsigned __int16 *)(a2 + 6) + 65600;
    ++*v3;
  }
  else
  {
    LOBYTE(v3) = v2 + 1;
    *((_BYTE *)dword_52FD00 + 65601) = (_BYTE)v3;
  }
  return (char)v3;
}
