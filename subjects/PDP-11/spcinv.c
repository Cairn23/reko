// spcinv.c
// Generated by decompiling spcinv.sav
// using Reko decompiler version 0.8.0.2.

#include "spcinv.h"

// 0200: void fn0200(Register Eq_2 r5, Register (ptr16 Eq_3) pc)
void fn0200(Eq_2 r5, Eq_3 * pc)
{
	ptr16 sp_1 = fp;
	do
	{
		PRINT(&globals->b0F9A);
		struct Eq_11 * r2_29 = &globals->t0002;
		int16 r3_28 = 0x00;
		do
		{
			word16 r0_14;
		} while (TTYIN(out r0_14));
		do
		{
			word16 r0_19;
		} while (TTYIN(out r0_19));
		do
		{
			word16 r0_21;
		} while (TTYIN(out r0_21));
		if (0xF0A8 == 0x00)
		{
			PRINT(&globals->b0FDA);
			do
			{
				word16 r0_398;
			} while (TTYIN(out r0_398));
			break;
		}
		r2_29 = &globals->t0001;
		r3_28 = 0x01;
		if (~0x0F50 == 0x00)
			break;
		r2_29 = null;
		r3_28 = 0x02;
	} while (61611 != 0x00);
	globals->ptr0F06 = r2_29;
	globals->w0F08 = r3_28;
	globals->w0024 |= 0x1040;
	globals->w1166 = 0x1100;
	globals->w1168 = 4464;
	FnSubfn(&globals->w1166);
	globals->w0AB4 = globals->w1170;
	globals->w0B5E = 0x00;
	globals->w1166 = 0x0101;
	globals->w1168 = 4446;
	FnSubfn(&globals->w1166);
	if (true)
	{
		globals->w1166 = 0x0801;
		globals->w1168 = 0x00;
		globals->w116A = 0x0B5E;
		globals->w116C = 0x01;
		globals->w116E = 0x00;
		FnSubfn(&globals->w1166);
		__syscall(0x88FC);
	}
	fn0BD6();
l02A2:
	byte * r4_117 = fn0C20(r5, pc, out r5);
	while (true)
	{
		Eq_130 r0_86;
		if (!TTYIN(out r0_86) && globals->ptr0EFA == null)
			break;
		globals->w1166 = 0x1100;
		globals->w1168 = 4464;
		FnSubfn(&globals->w1166);
		ci16 r0_112 = globals->w1170 - globals->w1172;
		if (r0_112 >= 0x00)
		{
			globals->w1174 = globals->w1170;
			++pc->w0E52;
			word16 v34_153 = ~globals->w0EF4;
			globals->w0EF6 = v34_153;
			if (v34_153 == 0x00)
				globals->w0EF8 = ~globals->w0EF6;
			if (globals->ptr0EFA != null)
			{
				word16 v40_313 = globals->ptr0EFA - 0x01;
				globals->w0EFC = v40_313;
				NZV = cond(v40_313);
				if (v40_313 != 0x00)
					goto l0370;
				if (globals->w0F18 == 0x00)
					goto l03AE;
				Eq_2 r5_323;
				byte * r4_324 = fn0486(r4_117, r5, bLoc02, out r5_323);
				globals->w0F16 = 0x02;
				r4_117 = fn0470(r4_324, r5_323, bLoc02);
				globals->w0F18 = 0x78;
			}
			if (globals->w0EF8 == 0x00)
			{
				if (globals->t0F14 <= 0x08)
					goto l0370;
				ci16 v64_307 = globals->w0F16 - 0x01;
				globals->w0F18 = v64_307;
				NZV = cond(v64_307);
				if (v64_307 > 0x00)
					goto l0370;
				globals->ptr0EFA = &globals->t0456;
			}
			word16 r2_289;
			byte NZ_290;
			bool V_291;
			word16 r3_292;
			bool C_293;
			bool N_294;
			bool Z_295;
			word16 r0_296;
			word16 r1_297;
			byte NZVC_298;
			byte ZC_302;
			word16 r5_303;
			globals->ptr0EFA();
l0370:
			Eq_2 r5_248;
			byte * r4_249 = fn04A0(r4_117, pc, out r5_248);
			Eq_2 r5_251;
			byte * r4_252 = fn07A6(fn06D6(r4_249, r5_248, pc), pc, out r5_251);
			r4_117 = fn0998(r4_252, r5_251, pc, out r5);
			if (r4_117 != &globals->b1178)
				goto l038E;
			if (globals->w0F12 != 0x00)
				continue;
			if (globals->t0F02 != 0x00)
				goto l0392;
			if (!DPB(NZV, false, 0))
			{
				struct Eq_421 * v72_276 = globals->w0F18 + 0x01;
				globals->ptr0F1A = v72_276;
				NZV = cond(v72_276);
				goto l02A2;
			}
l03AE:
			cup16 v50_173 = globals->w0B5A - globals->w0B5A;
			if (v50_173 > 0x00)
			{
				globals->w0B5E = globals->w0B5A;
				globals->w1166 = 0x0101;
				globals->w1168 = 4446;
				FnSubfn(&globals->w1166);
				if (v50_173 < 0x00)
				{
					globals->w1166 = 0x0201;
					globals->w1168 = 4446;
					globals->w116A = 0x01;
					FnSubfn(&globals->w1166);
					if (v50_173 >= 0x00)
						goto l03E6;
				}
				else
				{
l03E6:
					globals->w1166 = 0x0901;
					globals->w1168 = 0x00;
					globals->w116A = 0x0B5E;
					globals->w116C = 0x01;
					globals->w116E = 0x00;
					FnSubfn(&globals->w1166);
					__syscall(0x88FC);
				}
			}
			Eq_2 r5_189;
			byte * r4_190 = fn0486(r4_117, r5, bLoc02, out r5_189);
			struct Eq_303 * sp_191 = sp_1 - 0x01;
			sp_191->b0000 = 0x01;
			sp_191->b0001 = 0x18;
			byte * r4_196;
			word16 r5_197;
			fn0AB6(r4_190, r5_189, out r4_196, out r5_197);
			*(sp_191 - 0x02) = r5_197;
			word16 r0_203;
			word16 r4_204;
			word16 r5_205;
			fn0AE8(r4_196, &globals->ptr0420, wArg00, out r0_203, out r4_204, out r5_205);
			return;
		}
		if (r4_117 == &globals->b1178)
			continue;
l038E:
		r4_117 = fn0AF6(r4_117, r5, out r5);
l0392:
	}
	globals->t02CB = r0_86;
	word16 * r1_347 = &globals->w02C6;
	do
	{
		r1_347 = r1_400 + 0x01;
		word16 * r1_400 = r1_347;
	} while (*r1_400 - r0_86 != 0x00);
	struct Eq_144 * r1_357 = r1_347 - 711 << 0x01;
	word16 sp_359;
	word16 r2_360;
	byte NZ_361;
	bool V_362;
	word16 r3_363;
	bool C_364;
	bool N_365;
	bool Z_366;
	word16 r0_367;
	word16 r1_368;
	byte NZVC_369;
	byte NZV_370;
	word16 pc_371;
	word16 r4_372;
	byte ZC_373;
	word16 r5_374;
	r1_357->ptr02CC();
}

// 0470: Register (ptr16 byte) fn0470(Register (ptr16 byte) r4, Register Eq_2 r5, Stack byte bArg00)
byte * fn0470(byte * r4, Eq_2 r5, byte bArg00)
{
	byte * r4_11;
	word16 r5_12;
	fn0AB6(r4, r5, out r4_11, out r5_12);
	*(fp - 0x03) = r5_12;
	word16 r0_18;
	byte * r4_19;
	word16 r5_20;
	fn0AE8(r4_11, &globals->ptr0482, wArg00, out r0_18, out r4_19, out r5_20);
	return r4_19;
}

// 0486: Register (ptr16 byte) fn0486(Register (ptr16 byte) r4, Register Eq_2 r5, Stack byte bArg00, Register out ptr16 r5Out)
byte * fn0486(byte * r4, Eq_2 r5, byte bArg00, ptr16 & r5Out)
{
	byte * r4_11;
	Eq_2 r5_12;
	fn0AB6(r4, r5, out r4_11, out r5_12);
	byte * r4_14;
	word16 r5_15;
	fn0A74(r4_11, r5_12, out r4_14, out r5_15);
	return r4_14;
}

// 04A0: Register (ptr16 byte) fn04A0(Register (ptr16 byte) r4, Register (ptr16 Eq_3) pc, Register out ptr16 r5Out)
byte * fn04A0(byte * r4, Eq_3 * pc, ptr16 & r5Out)
{
	*r5Out = r5;
	union Eq_494 * sp_1 = fp;
	cui16 v5_4 = pc->w0A52 & globals->w0EF4;
	pc->w0A52 = v5_4;
	if (v5_4 != 0x00)
		return r4;
	Eq_2 r5_106 = globals->t0F04;
	do
	{
		Eq_511 r3_128 = (int16) *((word32) r5_106 + 0x0EF0);
		if (r3_128 != 0x00)
		{
			globals->t0F0C = r3_128;
			int16 r0_77 = (int16) *((word32) r5_106 + 0x0EF3);
			sp_1 -= 0x02;
			*sp_1 = (union Eq_494 *) r3_128;
			*((char *) sp_1 + 0x01) = r0_77;
			byte * r4_83;
			struct Eq_324 * r0_85 = fn0AB6(r4, r5_106, out r4_83, out r5_106);
			*r4_83 = 0x20;
			r4 = r4_83 + 0x01;
			word16 r0_120 = r0_85 - 0x01;
			if ((DPB(NZV, false, 0) || r0_85 - 0x01 < 0x04) && r0_85 - 0x01 != 0x02)
			{
				*((word32) r5_106 + 0x0EF3) = r0_85 - 0x01;
				if (r0_85 - 0x01 > 22 || !fn067C(r0_85 - 0x01, r3_128, r4_83 + 0x01, r5_106, out r0_120, out r4, out r5_106))
				{
					word16 r1_124 = r0_120 + 0x01;
					if (r0_120 != 0x03 || (DPB(NZV, false, 0) || !fn05D4(r3_128, r4, r5_106, pc, bLoc02, out r0_120, out r3_128, out r4, out r5_106)))
					{
						sp_1 = (union Eq_494 *) ((char *) sp_1 + 0x02);
						word16 r0_136;
						if (!fn064A(r0_120, r1_124, r3_128, r4, r5_106, out r0_136, out r4, out r5_106))
						{
							struct Eq_618 * r2_141;
							do
							{
								if (r2_141[0x06DC] - r0_136 == 0x00)
								{
l0524:
									struct Eq_324 * r0_188 = r2_141[0x06D6];
									word16 r1_189;
									for (r1_189 = 0x08; r1_189 != 0x00; --r1_189)
									{
										Eq_735 r3_201 = r0_188->t0000;
										NV.u0 = DPB(NV, false, 0);
										if (r3_201 != 0x00)
										{
											if (!NV)
											{
												if ((word16) r3_201 + 0x04 - *((word32) r5_106 + 0x0EF0) <= 0x00)
												{
													if (r0_188->t0000 - *((word32) r5_106 + 0x0EF0) < 0x00)
														break;
													Eq_753 r1_234 = r0_188->t0000;
													r0_188->t0000.u6 = r0_188->t0000 | 0x8000;
													struct Eq_765 * r0_237 = r0_188 - r2_141[0x06D6];
													globals->ptr0F0A = r0_237;
													--r0_237->w0DC4;
													sp_1 -= 0x02;
													*sp_1 = (union Eq_494 *) r1_234;
													*((char *) sp_1 + 0x01) = (union Eq_494 *) r2_141[0x06DC];
													byte * r4_248;
													Eq_2 r5_249;
													fn0AB6(r4, r5_106, out r4_248, out r5_249);
													Eq_2 r5_251;
													byte * r4_252 = fn0A7C(r4_248, r5_249, out r5_251);
													pc->w05F2 = (word16) r2_141[1770] + pc->w05F2;
													r4 = fn0B1A(r4_252, r5_251, bLoc02, out r5_106);
													Eq_399 v65_259 = globals->w0F12 - 0x01;
													globals->t0F14 = v65_259;
													byte NZV_261 = cond(v65_259);
													if (v65_259 <= 0x00 && !DPB(NZV_261, false, 0))
													{
														globals->ptr0EFA = null;
														globals->w0EFC = 0x05;
													}
													goto l0584;
												}
											}
											else
											{
												struct Eq_680 * sp_274 = sp_1 - 0x01;
												sp_274->b0000 = (byte) r0_188->t0000;
												sp_274->t0001 = r2_141[0x06DC];
												byte * r4_280;
												Eq_2 r5_281;
												fn0AB6(r4, r5_106, out r4_280, out r5_281);
												byte * r4_283;
												Eq_2 r5_284;
												*fn0A74(r4_280, r5_281, out r4_283, out r5_284) = 0x00;
												*(sp_274 - 0x02) = (int16) *((word32) r5_284 + 0x0EF0) + 0x01;
												*(sp_274 - 0x01) = (byte) *((word32) r5_284 + 0x0EF3);
												sp_1 = sp_274 - 0x02;
												r0_188 = fn0AB6(r4_283, r5_284, out r4, out r5_106);
											}
										}
										++r0_188;
									}
									break;
								}
								cup16 v38_299 = r2_141[0x06DC] - r1_124;
								NV = cond(v38_299);
								if (v38_299 < 0x00)
									break;
								if (v38_299 == 0x00)
									goto l0524;
								++r2_141;
							} while (r2_141 >= &globals->t000A);
							*(sp_1 - 0x02) = (union Eq_2 *) r5_106;
							word16 r0_177;
							byte * r4_178;
							word16 r5_179;
							fn0AE8(r4, &globals->ptr05B8, wArg00, out r0_177, out r4_178, out r5_179);
							return r4_178;
						}
					}
				}
			}
l0584:
			((word32) r5_106 + 0x0EF0)->u0 = 0x00;
		}
		--r5_106;
		*r5Out = r5_106;
		NZV = cond(r5_106);
		NV = NZV;
	} while (r5_106 >= 0x00);
	return r4;
}

// 05D4: FlagGroup bool fn05D4(Register Eq_511 r3, Register (ptr16 byte) r4, Register Eq_2 r5, Register (ptr16 Eq_3) pc, Stack byte bArg00, Register out ptr16 r0Out, Register out ptr16 r3Out, Register out ptr16 r4Out, Register out (ptr16 Eq_611) r5Out)
bool fn05D4(Eq_511 r3, byte * r4, Eq_2 r5, Eq_3 * pc, byte bArg00, ptr16 & r0Out, ptr16 & r3Out, ptr16 & r4Out, Eq_611 * & r5Out)
{
	*r3Out = r3;
	*r0Out = r0;
	*r4Out = r4;
	*r5Out = r5;
	cup16 v11_10 = 0x04 - (r3 - globals->t0F02);
	bool Z_15 = (bool) cond(v11_10);
	if (v11_10 > 0x00)
		return Z_15;
	byte * r4_44;
	Eq_2 r5_45;
	fn0AB6(r4, r5, out r4_44, out r5_45);
	Eq_2 r5_47;
	byte * r4_48 = fn0A7C(r4_44, r5_45, out r5_47);
	fn0A94();
	ui16 r3_52 = __rol(0x00, 0x00);
	ui16 r3_54 = __rol(r3_52, r3_52);
	word16 r0_56 = globals->a0F2A[r3_54 * 0x02];
	Eq_897 v23_58 = pc->t090A >> 0x01;
	pc->t090A = v23_58;
	word16 r3_55;
	*r3Out = r3_54 << 0x01;
	if (v23_58 >= 0x00)
		r0_56 += 200;
	pc->w054A += r0_56;
	*(fp - 0x02) = (union Eq_2 *) globals->t0F02;
	*(fp - 0x01) = 0x04;
	byte * r4_72;
	word16 r5_73;
	fn0AB6(r4_48, r5_47, out r4_72, out r5_73);
	*(fp - 0x04) = r5_73;
	word16 r0_79;
	word16 r4_80;
	word16 r5_81;
	return fn0AE8(r4_72, &globals->ptr0624, wArg00, out r0_79, out r4_80, out r5_81);
}

// 064A: FlagGroup bool fn064A(Register word16 r0, Register word16 r1, Register Eq_511 r3, Register (ptr16 byte) r4, Register Eq_2 r5, Register out ptr16 r0Out, Register out ptr16 r4Out, Register out (ptr16 Eq_594) r5Out)
bool fn064A(word16 r0, word16 r1, Eq_511 r3, byte * r4, Eq_2 r5, ptr16 & r0Out, ptr16 & r4Out, Eq_594 * & r5Out)
{
	*r0Out = r0;
	*r4Out = r4;
	*r5Out = r5;
	struct Eq_11 * r2_11 = globals->ptr0F06;
	do
	{
		bool Z_43;
		if (r2_11[0x0EE6] - r3 == 0x00 && r2_11[0x0EEC] >= 0x00)
		{
			if (r2_11[0x0EE9] - r1 == 0x00)
			{
				r2_11[0x0EE6] = (struct Eq_11) 0x00;
				Z_43 = true;
				return Z_43;
			}
			if (r2_11[0x0EE9] - r0 == 0x00)
			{
				word16 r0_76;
				word16 r4_77;
				word16 r5_78;
				return fn0AE8(r4, &globals->ptr066A, r5, out r0_76, out r4_77, out r5_78);
			}
		}
		--r2_11;
		Z_43 = (bool) cond(r2_11);
	} while (r2_11 >= null);
	return Z_43;
}

// 067C: FlagGroup bool fn067C(Register cup16 r0, Register Eq_511 r3, Register (ptr16 byte) r4, Register Eq_2 r5, Register out ptr16 r0Out, Register out ptr16 r4Out, Register out (ptr16 Eq_575) r5Out)
bool fn067C(cup16 r0, Eq_511 r3, byte * r4, Eq_2 r5, ptr16 & r0Out, ptr16 & r4Out, Eq_575 * & r5Out)
{
	*r0Out = r0;
	*r5Out = r5;
	*r4Out = r4;
	struct Eq_1011 * r1_7 = (r3 - 0x01 << 0x01) + r0;
	byte v11_9 = r1_7->b0E2A;
	bool Z_12 = (bool) cond(v11_9);
	if (v11_9 != 0x00)
	{
		--r1_7->b0E2A;
		struct Eq_1034 * r1_40 = (int16) r1_7->b0E2A;
		byte * r4_46;
		word16 r5_47;
		word16 r0_48;
		*r0Out = fn0AB6(r4, r5, out r4_46, out r5_47);
		byte v21_49 = r1_40->b0EE0;
		*r4_46 = v21_49;
		word16 r4_51;
		*r4Out = r4_46 + 0x01;
		Z_12 = (bool) cond(v21_49);
	}
	return Z_12;
}

// 06A2: void fn06A2()
void fn06A2()
{
	if (globals->ptr0F0A != null)
	{
		Eq_2 r5_25;
		do
		{
			if (*((word32) r5_25 + 0x0EF0) == 0x00)
			{
				Eq_399 r0_37 = globals->t0F14;
				if (r0_37 <= 0x08)
				{
					*((word32) r5_25 + 0x0EF0) = (word32) r0_37 + 0x02;
					((word32) r5_25 + 0x0EF3)->u0 = 0x18;
					globals->t0F0C.u0 = 0x00;
				}
				return;
			}
			--r5_25;
		} while (r5_25 >= 0x00);
	}
}

// 06D6: Register (ptr16 byte) fn06D6(Register (ptr16 byte) r4, Register Eq_2 r5, Register (ptr16 Eq_3) pc)
byte * fn06D6(byte * r4, Eq_2 r5, Eq_3 * pc)
{
	struct Eq_1093 * sp_1 = fp;
	struct Eq_11 * r2_21 = globals->ptr0F06;
	do
	{
		Eq_511 r3_24 = (int16) r2_21[0x0EE6];
		if (r3_24 != 0x00)
		{
			cui16 v12_59 = pc->w0812 & globals->w0EF4;
			pc->w0812 = v12_59;
			if (v12_59 == 0x00 && (DPB(NZV, false, 0) || globals->w0EF4 - globals->w0EF4 == 0x00))
				goto l07A0;
			struct Eq_324 * r0_168;
			int16 r0_67 = (int16) r2_21[0x0EE9];
			if (r2_21[0x0EEC] >= 0x00)
			{
				sp_1 -= 0x02;
				sp_1->w0000 = (word16) r3_24;
				sp_1->w0001 = r0_67;
				byte * r4_166;
				r0_168 = fn0AB6(r4, r5, out r4_166, out r5);
				*r4_166 = 0x20;
				r4 = r4_166 + 0x01;
			}
			else
			{
				sp_1 -= 0x02;
				sp_1->w0000 = (word16) r3_24 + 0x01;
				sp_1->w0001 = r0_67;
				r0_168 = fn0AB6(r4, r5, out r4, out r5);
				r2_21[0x0EEC] = (struct Eq_11) (r2_21[0x0EEC] & ~0x80);
			}
			r2_21[0x0EE9] = (struct Eq_11) ((byte) r2_21[0x0EE9] + 0x01);
			cup16 r0_83 = (char *) &r0_168->t0000 + 0x01;
			if (r0_83 != 0x19)
			{
				if (r0_83 != 0x18)
				{
					if (r0_83 > 22)
						goto l078A;
					word16 r0_120;
					if (!fn067C(r0_83, r3_24, r4, r5, out r0_120, out r4, out r5))
						goto l0784;
				}
				else if (globals->ptr0EFA == null && (globals->t0F14 - r3_24 >= 0x00 && globals->t0F14 - (r3_24 - 0x04) <= 0x00))
				{
					struct Eq_1243 * sp_138 = sp_1 - 0x01;
					sp_138->t0000 = globals->t0F14;
					sp_138->b0001 = 0x18;
					byte * r4_143;
					Eq_2 r5_144;
					fn0AB6(r4, r5, out r4_143, out r5_144);
					word16 r5_146;
					byte * r4_147 = fn0A7C(r4_143, r5_144, out r5_146);
					globals->ptr0EFA = null;
					globals->w0EFC = 0x05;
					globals->ptr0F1A = globals->w0F18 - 0x01;
					*(sp_138 - 0x02) = r5_146;
					word16 r0_157;
					byte * r4_158;
					word16 r5_159;
					fn0AE8(r4_147, &globals->ptr077E, wArg00, out r0_157, out r4_158, out r5_159);
					return r4_158;
				}
l078A:
				*(sp_1 - 0x02) = (union Eq_2 *) r5;
				word16 r0_113;
				byte * r4_114;
				word16 r5_115;
				fn0AE8(r4, &globals->ptr078E, wArg00, out r0_113, out r4_114, out r5_115);
				return r4_114;
			}
l0784:
			r2_21[0x0EE6] = (struct Eq_11) 0x00;
		}
l07A0:
		--r2_21;
		NZV = cond(r2_21);
	} while (r2_21 >= null);
	return r4;
}

// 07A6: Register (ptr16 byte) fn07A6(Register (ptr16 byte) r4, Register (ptr16 Eq_3) pc, Register out ptr16 r5Out)
byte * fn07A6(byte * r4, Eq_3 * pc, ptr16 & r5Out)
{
	*r5Out = r5;
	Eq_2 sp_1 = fp;
	word16 v5_3 = globals->w0F1C - 0x01;
	globals->w0F1E = v5_3;
	Eq_1303 NZV_103 = cond(v5_3);
	if (v5_3 == 0x00)
	{
		globals->w0F1E = globals->w0F26;
		Eq_2 r5_171;
		*r5Out = 0x00;
		do
		{
			struct Eq_421 * r2_186 = globals->ptr0F1A;
			Eq_491 r0_187 = r2_186->t0DB8;
			if (r0_187 != 0x00)
			{
				if (globals->w0EFC != 0x00)
				{
					struct Eq_1335 * r1_388 = r2_186->ptr0DAC;
					word16 r3_389;
					for (r3_389 = 0x08; r3_389 != 0x00; --r3_389)
					{
						if (r1_388->t0000 != 0x00)
						{
							--sp_1;
							*sp_1 = r1_388->t0000;
							*((word32) sp_1 + 0x01) = r0_187;
							byte * r4_431;
							Eq_2 r5_432;
							fn0AB6(r4, r5_171, out r4_431, out r5_432);
							r0_187 = fn0A74(r4_431, r5_432, out r4, out r5_171);
							if (r1_388->t0000 <= 0x00)
								r1_388->t0000.u0 = 0x00;
						}
						++r1_388;
					}
					r2_186->t0DB8 = (word32) r2_186->t0DB8 + 0x01;
					r0_187 = (word16) r0_187 + 0x01;
					NZV_103 = cond(r0_187);
				}
				struct Eq_1335 * r1_268 = r2_186->ptr0DAC;
				cui16 r3_269 = 0x08;
				do
				{
					if (!DPB(NZV_103, false, 0))
					{
						r1_268->t0000 = (word32) r1_268->t0000 + globals->w0F20;
						if (r1_268->t0000 >= 0x08 || r1_268->t0000 <= 0x48)
							globals->t0F00 = sp_1;
						if (r0_187 == 0x17)
							globals->t0F02 = sp_1;
						if (r0_187 <= 22)
							fn093C(r0_187, r1_268);
						struct Eq_1596 * sp_306 = sp_1 - 0x01;
						sp_306->t0000 = r1_268->t0000;
						sp_306->t0001 = r0_187;
						byte * r4_311;
						word16 r5_312;
						fn0AB6(r4, (word32) r5_171 + 0x01, out r4_311, out r5_312);
						fn096A(r3_269);
						*(sp_306 - 0x02) = r5_312;
						word16 r0_318;
						byte * r4_319;
						word16 r5_320;
						fn0AE8(r4_311, &globals->ptr083C, wArg00, out r0_318, out r4_319, out r5_320);
						return r4_319;
					}
					NV.u0 = DPB(NV, false, 0);
					if (!NV && globals->w0EFC == 0x00)
					{
						--sp_1;
						*sp_1 = r1_268->t0000;
						*((word32) sp_1 + 0x01) = r0_187;
						byte * r4_377;
						Eq_2 r5_378;
						fn0AB6(r4, r5_171, out r4_377, out r5_378);
						r0_187 = fn0A74(r4_377, r5_378, out r4, out r5_171);
						r1_268->t0000 = 0x00;
					}
					--r3_269;
					++r1_268;
					NZV_103 = cond(r3_269);
				} while (r3_269 != 0x00);
				if (r5_171 == 0x00)
					r2_186->t0DB8.u0 = 0x00;
			}
			ci16 v75_203 = pc->w06AE - 0x02;
			pc->w06AE = v75_203;
			NV = cond(v75_203);
			if (v75_203 < 0x00)
			{
				globals->w0F1C = 0x0A;
				globals->w0DAA = ~globals->w0DA8;
				if (globals->w0EFC != 0x00)
					globals->w0EFE = 0x00;
				else if (globals->w0EFE != 0x00)
				{
					globals->w0F22 = -globals->w0F20;
					if (globals->t0F00 == 0x00)
						globals->w0EFE = 0x01;
				}
				globals->t0F00.u0 = 0x00;
				globals->t0F02.u0 = 0x00;
				goto l08B2;
			}
		} while (r5_171 == 0x00);
		globals->t0F28 = r5_171;
	}
l08B2:
	if (globals->w0F12 != 0x00)
	{
		cui16 v36_50 = pc->w063A & globals->w0EF4;
		pc->w063A = v36_50;
		if (v36_50 != 0x00)
		{
			struct Eq_11 * r2_55 = globals->ptr0F06;
			do
			{
				if (r2_55[0x0EE6] == 0x00)
				{
					do
					{
						if ((fn0A94() & globals->w0F0E) != 0x00)
							return r4;
						cui16 r0_90 = fn0A94();
						int16 r1_144 = globals->w0F08;
						if (r1_144 >= 0x00)
						{
							NZV_103 = DPB(NZV_103, false, 0);
							if (!NZV_103 && r0_90 << 0x01 < 0x00)
								break;
						}
						ui16 r1_139 = __rol(0x00, 0x00);
						ui16 r1_141 = __rol(r1_139, r1_139);
						r1_144 = __rol(r1_141, r1_141) << 0x01;
						NZV_103 = DPB(NZV_103, false, 0);
					} while (NZV_103);
					struct Eq_1445 * r0_102 = globals->a0DB8;
					do
					{
						r0_102 -= 0x02;
						byte * r3_106 = r0_102->w0000 + r1_144;
						NZV_103 = DPB(NZV_103, false, 0);
					} while (NZV_103);
					r2_55[0x0EE6] = (struct Eq_11) ((int16) *r3_106 + 0x02);
					r2_55[0x0EE9] = (struct Eq_11) r0_102[0x06];
					r2_55[0x0EEC] = (struct Eq_11) 0x80;
					if (r0_102 == globals->a0DAC || (fn0A94() & globals->t0F0C) == 0x00)
						r2_55[0x0EEC] = (struct Eq_11) ((byte) r2_55[0x0EEC] + 0x01);
					return r4;
				}
				--r2_55;
				NZV_103 = cond(r2_55);
			} while (r2_55 >= null);
		}
	}
	return r4;
}

// 093C: void fn093C(Register Eq_491 r0, Register (ptr16 Eq_1335) r1)
void fn093C(Eq_491 r0, Eq_1335 * r1)
{
	word16 r3_7 = r1->t0000;
	cui16 r3_17 = r3_7 - 0x01;
	if (globals->w0F20 >= 0x00)
		r3_17 = r3_7 - 0x02;
	struct Eq_1684 * r3_21 = (word32) r0 + (r3_17 << 0x01) - 22 + 0x0E40;
	word16 wLoc04_24 = 0x07;
	do
	{
		r3_21->b0000 = 0x00;
		word16 v18_32 = wLoc04_24 - 0x01;
		++r3_21;
		wLoc04_24 = v18_32;
	} while (v18_32 != 0x00);
}

// 096A: void fn096A(Register cui16 r3)
void fn096A(cui16 r3)
{
	if ((r3 & 0x01) == 0x00)
	{
		if (globals->w0DA8 == 0x00)
		{
l0976:
			globals->b112D = 0x2F;
			globals->b1131 = 0x5C;
			return;
		}
	}
	else if (globals->w0DA8 != 0x00)
		goto l0976;
	globals->b112D = 0x5C;
	globals->b1131 = 0x2F;
}

// 0998: Register (ptr16 byte) fn0998(Register (ptr16 byte) r4, Register Eq_2 r5, Register (ptr16 Eq_3) pc, Register out ptr16 r5Out)
byte * fn0998(byte * r4, Eq_2 r5, Eq_3 * pc, ptr16 & r5Out)
{
	*r5Out = r5;
	Eq_2 r2_102 = globals->t0F02;
	Eq_1735 NZV_146 = DPB(NZV, false, 0);
	if (!NZV_146)
	{
		ci16 v10_144 = globals->w0F1E - 0x01;
		globals->w0F20 = v10_144;
		NZV_146 = cond(v10_144);
		if (v10_144 != 0x00)
		{
			if (r2_102 == 0x00)
				return r4;
			ci16 v43_194 = 0x28 - globals->w0F1E;
			NZV_146 = cond(v43_194);
			if (v43_194 > 0x00)
				return r4;
			goto l0A2A;
		}
		globals->w0F20 = 100;
		globals->w0F12 = 0x01;
		globals->w0A6A = 4404;
		cui16 r0_157 = fn0A94();
		r2_102.u0 = 0x01;
		word16 r1_152 = 0x00;
		int16 r0_158 = r0_157 << 0x01;
		if (r0_157 << 0x01 < 0x00)
		{
			r0_158 = r0_157 << 0x02;
			if (r0_157 << 0x02 < 0x00)
			{
				globals->w0F12 = globals->w0F10 + 0x01;
				globals->w0A6A = 0x113D;
				r1_152 = 0x0A;
			}
		}
		if (r0_158 <= 0x00)
		{
			globals->w0F12 = -globals->w0F10;
			pc->w008A += r1_152;
			r2_102.u0 = 0x4A;
		}
	}
	if (globals->w0EF4 != 0x00 || globals->w0EF6 != 0x00)
	{
l0A18:
		globals->t0F04 = r2_102;
		return r4;
	}
	if (globals->w0F10 >= 0x00)
	{
		if (r2_102 != 0x49)
		{
l0A04:
			r2_102.u0 = (byte) r2_102.u0 + globals->w0F10;
			byte * r4_133;
			Eq_2 r5_134;
			fn0AB6(r4, r5, out r4_133, out r5_134);
			word16 r5_136;
			r4 = fn0A60(r4_133, r5_134, out r5_136);
			goto l0A18;
		}
	}
	else if (r2_102 != 0x02)
		goto l0A04;
l0A2A:
	byte * r4_56;
	Eq_2 r5_57;
	fn0AB6(r4, r5, out r4_56, out r5_57);
	byte * r4_59;
	Eq_2 r5_60;
	fn0A74(r4_56, r5_57, out r4_59, out r5_60);
	*(fp - 0x04) = (union Eq_2 *) r2_102;
	*(fp - 0x03) = 0x04;
	byte * r4_67;
	Eq_2 r5_68;
	fn0AB6(r4_59, r5_60, out r4_67, out r5_68);
	word16 r5_71;
	fn0A74(r4_67, r5_68, out r4, out r5_71);
	globals->t0F04.u0 = 0x00;
	if (!DPB(NZV_146, false, 0))
	{
		globals->ptr0EFA = null;
		globals->w0EFC = 0x05;
	}
	return r4;
}

// 0A60: Register (ptr16 byte) fn0A60(Register (ptr16 byte) r4, Register Eq_2 r5, Register out ptr16 r5Out)
byte * fn0A60(byte * r4, Eq_2 r5, ptr16 & r5Out)
{
	word16 r0_7;
	byte * r4_8;
	word16 r5_9;
	fn0AE8(r4, &globals->ptr0A64, r5, out r0_7, out r4_8, out r5_9);
	return r4_8;
}

// 0A74: Register word16 fn0A74(Register (ptr16 byte) r4, Register Eq_2 r5, Register out ptr16 r4Out, Register out ptr16 r5Out)
word16 fn0A74(byte * r4, Eq_2 r5, ptr16 & r4Out, ptr16 & r5Out)
{
	word16 r0_7;
	word16 r4_8;
	word16 r5_9;
	fn0AE8(r4, &globals->ptr0A78, r5, out r0_7, out r4_8, out r5_9);
	return r0_7;
}

// 0A7C: Register (ptr16 byte) fn0A7C(Register (ptr16 byte) r4, Register Eq_2 r5, Register out ptr16 r5Out)
byte * fn0A7C(byte * r4, Eq_2 r5, ptr16 & r5Out)
{
	*r4 = globals->b0F24;
	word16 r0_13;
	byte * r4_14;
	word16 r5_15;
	fn0AE8(r4 + 0x01, &globals->ptr0A84, r5, out r0_13, out r4_14, out r5_15);
	return r4_14;
}

// 0A94: Register ui16 fn0A94()
ui16 fn0A94()
{
	ui16 r0_10 = ((DPB(__swab(globals->w0AB2), 0x00, 0) << 0x01) + globals->w0AB2 << 0x02) + globals->w0AB2;
	globals->w0AB4 = r0_10 + 0x3619;
	return r0_10 + 0x3619;
}

// 0AB6: Register word16 fn0AB6(Register (ptr16 byte) r4, Register Eq_2 r5, Register out ptr16 r4Out, Register out (ptr16 Eq_321) r5Out)
word16 fn0AB6(byte * r4, Eq_2 r5, ptr16 & r4Out, Eq_321 * & r5Out)
{
	word16 r0_7;
	word16 r4_8;
	word16 r5_9;
	fn0AE8(r4, &globals->ptr0ABA, r5, out r0_7, out r4_8, out r5_9);
	return r0_7;
}

// 0AE8: FlagGroup bool fn0AE8(Register (ptr16 byte) r4, Register (ptr16 (ptr16 byte)) r5, Stack Eq_2 wArg00, Register out ptr16 r0Out, Register out ptr16 r4Out, Register out ptr16 r5Out)
bool fn0AE8(byte * r4, byte * * r5, Eq_2 wArg00, ptr16 & r0Out, ptr16 & r4Out, ptr16 & r5Out)
{
	byte * r0_14 = *r5;
	do
	{
		byte v8_15 = *r0_14;
		*r4 = v8_15;
		++r0_14;
		++r4;
	} while (v8_15 != 0x00);
	word16 sp_35;
	word16 r0_36;
	byte NZ_37;
	bool V_38;
	word16 r5_39;
	word16 r4_40;
	bool Z_41;
	byte NZV_42;
	(*((char *) r5 + 0x02))();
	return Z_41;
}

// 0AF6: Register (ptr16 byte) fn0AF6(Register (ptr16 byte) r4, Register Eq_2 r5, Register out ptr16 r5Out)
byte * fn0AF6(byte * r4, Eq_2 r5, ptr16 & r5Out)
{
	byte * r4_13;
	word16 r5_14;
	fn0AB6(r4, r5, out r4_13, out r5_14);
	*r4_13 = 0x80;
	PRINT(&globals->b1178);
	return &globals->b1178;
}

// 0B1A: Register (ptr16 byte) fn0B1A(Register (ptr16 byte) r4, Register Eq_2 r5, Stack byte bArg00, Register out (ptr16 Eq_821) r5Out)
byte * fn0B1A(byte * r4, Eq_2 r5, byte bArg00, Eq_821 * & r5Out)
{
	byte * r4_12;
	word16 r5_13;
	fn0AB6(r4, r5, out r4_12, out r5_13);
	*(fp - 0x03) = r5_13;
	word16 r0_19;
	byte * r4_20;
	word16 r5_21;
	fn0AE8(r4_12, &globals->ptr0B34, wArg00, out r0_19, out r4_20, out r5_21);
	return r4_20;
}

// 0B60: void fn0B60(Register cup16 r0, Register ci16 r3, Register (ptr16 word16) r4)
void fn0B60(cup16 r0, ci16 r3, word16 * r4)
{
	word16 wLoc08_113 = 0x00;
	if (r3 >= 0x00)
		globals->w0BC8 = 0x20;
	else
	{
		globals->w0BC8 = 0x30;
		r3 = -r3;
	}
	if (r3 != 0x00)
	{
		word16 * r2_54 = 0x0BD4 - (r3 << 0x01);
		do
		{
			word16 r5_63 = 0x30;
			cup16 v16_66 = *r2_54;
			++r2_54;
			if (v16_66 == 0x00)
				return;
			while (true)
			{
				r0 -= v16_66;
				if (r0 < 0x00)
					break;
				++r5_63;
			}
			int16 r5_104;
			r0 += v16_66;
			if (wLoc08_113 == 0x00)
			{
				if (r5_63 != ~0x2F)
				{
					++wLoc08_113;
					goto l0BB4;
				}
				if (r3 == 0x01 || *r2_54 == 0x00)
					goto l0BB4;
				r5_104 = (int16) globals->b0BC6;
			}
			else
			{
l0BB4:
				r5_104 = r5_63 + 0x00;
			}
			*r4 = r5_104;
			++r4;
			--r3;
		} while (r3 != 0x00);
	}
}

// 0BD6: void fn0BD6()
void fn0BD6()
{
	globals->ptr0F1A = &globals->t0003;
	globals->w0B5C = 0x00;
	globals->w0F0E = 0xF800;
	globals->w0F10 = 0xE000;
	byte * r1_14 = &globals->b0E56;
	word16 r0_18;
	for (r0_18 = 0x06; r0_18 != 0x00; --r0_18)
	{
		word16 r2_19;
		for (r2_19 = 0x0A; r2_19 != 0x00; --r2_19)
		{
			*r1_14 = 0x04;
			++r1_14;
		}
		r1_14 += 0x0A;
	}
	globals->w1166 = 0x1100;
	globals->w1168 = 4464;
	FnSubfn(&globals->w1166);
	globals->w1174 = globals->w1170;
}

// 0C20: Register word16 fn0C20(Register Eq_2 r5, Register (ptr16 Eq_3) pc, Register out ptr16 r5Out)
word16 fn0C20(Eq_2 r5, Eq_3 * pc, ptr16 & r5Out)
{
	word16 * r1_11 = globals->a0DB8;
	word16 r0_14;
	Eq_629 r2_12 = 0x05;
	for (r0_14 = 0x06; r0_14 != 0x00; --r0_14)
	{
		*r1_11 = (word16) r2_12;
		++r1_11;
		r2_12.u1 = (word16) r2_12.u1 + 0x02;
	}
	struct Eq_2155 * r1_17 = null;
	word16 r0_19;
	word16 r2_20 = 11;
	for (r0_19 = 0x08; r0_19 != 0x00; --r0_19)
	{
		r1_17[1776] = (struct Eq_2155) r2_20;
		r1_17[0x06F8] = (struct Eq_2155) r2_20;
		r1_17[0x0700] = (struct Eq_2155) r2_20;
		r1_17[1800] = (struct Eq_2155) r2_20;
		r1_17[1808] = (struct Eq_2155) r2_20;
		r1_17[1816] = (struct Eq_2155) r2_20;
		r1_17[0x06E2] = (struct Eq_2155) 0x06;
		++r1_17;
		r2_20 += 0x08;
	}
	word16 * r1_42 = globals->a0EE6;
	word16 r0_43;
	for (r0_43 = 0x10; r0_43 != 0x00; --r0_43)
	{
		*r1_42 = 0x00;
		++r1_42;
	}
	globals->ptr0F0A = (struct Eq_765 *) ~0x00;
	globals->t0F14.u0 = 0x30;
	globals->w0F16 = 0x02;
	globals->w0F18 = 0x78;
	globals->w0F1C = 0x0A;
	globals->w0F1E = 0x04;
	globals->t0F28.u0 = 0x04;
	globals->w0F20 = 100;
	globals->w0F22 = 0x01;
	pc->w025E <<= 0x01;
	ui16 v17_66 = pc->w025C << 0x01;
	pc->w025C = v17_66;
	if (v17_66 == 0x00)
		pc->w0256 >>= 0x01;
	word16 r0_78;
	word16 r4_79;
	word16 r5_80;
	fn0AE8(&globals->b1178, &globals->ptr0CC2, r5, out r0_78, out r4_79, out r5_80);
	return r4_79;
}

// 0D98: void fn0D98(Register (ptr16 Eq_2269) r0, Register (ptr16 byte) r4)
void fn0D98(Eq_2269 * r0, byte * r4)
{
	word16 r1_18;
	for (r1_18 = 0x46; r1_18 != 0x00; --r1_18)
	{
		*r4 = (byte) ((int16) r0->b0000 + 0x0EE0);
		++r0;
		++r4;
	}
}

