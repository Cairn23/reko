// varargs_test.c
// Generated by decompiling varargs_test.exe
// using Reko decompiler version 0.6.1.0.

#include "varargs_test.h"

word32 fn0000000140001000(ptr64 & silOut)
{
	fn0000000140001140(qwLocC8, qwLocC0, qwLocB8, qwLocB0);
	Mem22[fp - 0x90 + 0x00:word64] = fp - 0x84;
	Mem25[fp - 0x98 + 0x00:word64] = fp - 0x88;
	Mem28[fp - 0xA0 + 0x00:word64] = fp - 0x78;
	Mem32[fp - 0xA8 + 0x00:word64] = fp - 0x80;
	fn00000001400010D0(qwArg00, qwArg08, qwArg10, qwArg18);
	byte sil_42;
	return fn00000001400011B0(Mem32[fp - 0x10 + 0x00:word64] ^ fp - 200, out sil_42);
}

word64 fn00000001400010C0()
{
	return 0x0000000140003628;
}

void fn00000001400010D0(word64 qwArg08, word64 qwArg10, word64 qwArg18, word64 qwArg20)
{
	word64 rsp_27;
	word64 rcx_28;
	word64 rdx_29;
	word64 r8_30;
	word64 r9_31;
	word64 rbx_32;
	word64 rsi_33;
	word64 rdi_34;
	byte SCZO_35;
	word32 ecx_36;
	byte SZO_37;
	byte C_38;
	word64 rax_39;
	word32 r9d_40;
	_acrt_iob_func();
	word64 rsp_52;
	word64 rcx_53;
	word64 rdx_54;
	word64 r8_55;
	word64 r9_56;
	word64 rbx_57;
	word64 rsi_58;
	word64 rdi_59;
	byte SCZO_60;
	word32 ecx_61;
	byte SZO_62;
	byte C_63;
	word64 rax_64;
	word32 r9d_65;
	_stdio_common_vfscanf();
	return;
}

word64 fn0000000140001130()
{
	return 0x0000000140003620;
}

void fn0000000140001140(word64 qwArg08, word64 qwArg10, word64 qwArg18, word64 qwArg20)
{
	word64 rsp_26;
	word64 rcx_27;
	word64 rdx_28;
	word64 r8_29;
	word64 r9_30;
	word64 rbx_31;
	word64 rsi_32;
	word64 rdi_33;
	byte SCZO_34;
	word32 ecx_35;
	word64 rax_36;
	word32 r9d_37;
	byte SZO_38;
	byte C_39;
	_acrt_iob_func();
	word64 rsp_51;
	word64 rcx_52;
	word64 rdx_53;
	word64 r8_54;
	word64 r9_55;
	word64 rbx_56;
	word64 rsi_57;
	word64 rdi_58;
	byte SCZO_59;
	word32 ecx_60;
	word64 rax_61;
	word32 r9d_62;
	byte SZO_63;
	byte C_64;
	_stdio_common_vfprintf();
	return;
}

word32 fn00000001400011B0(word64 rcx, ptr64 & silOut)
{
	*silOut = sil;
	word64 rcx_6 = __rol(rcx, 0x10);
	if (rcx_6 == 0x00)
	{
		__ror(rcx_6, 0x10);
		byte sil_24;
		return fn000000014000147C(qwArg08, out sil_24);
	}
	else
		return eax;
}

void fn00000001400011D4(word64 rbx, word64 r8, word64 r13)
{
	word64 rsp_8;
	word64 rbx_9;
	byte SCZO_10;
	word32 ecx_11;
	word32 eax_12;
	word64 rax_13;
	byte al_14;
	byte SZO_15;
	byte C_16;
	byte Z_17;
	word64 rcx_18;
	word64 r8_19;
	word64 r13_20;
	byte bl_21;
	set_app_type();
	fn0000000140001920();
	_set_fmode(dwLoc2C);
	word64 rax_26 = __p__commode();
	fn0000000140001ABC();
	Mem29[rax_26 + 0x00:word32] = 0x00;
	word32 eax_31 = fn000000014000164C(0x01, r8_19, r13_20, qwLoc2C);
	byte al_33 = (byte) eax_31;
	if (al_33 != 0x00)
	{
		fn0000000140001B5C(qwArg00, qwArg04, qwArg08, qwArg0C);
		fn0000000140001854(eax_31);
		fn0000000140001918();
		word64 rsp_74;
		word64 rbx_75;
		byte SCZO_76;
		word32 ecx_77;
		word32 eax_78;
		word64 rax_79;
		byte al_80;
		byte SZO_81;
		byte C_82;
		byte Z_83;
		word64 rcx_84;
		word64 r8_85;
		word64 r13_86;
		byte bl_87;
		configure_narrow_argv();
		if (false)
		{
			fn0000000140001928();
			word32 eax_92 = fn0000000140001958();
			if (eax_92 != 0x00)
			{
				word64 rsp_147;
				word64 rbx_148;
				byte SCZO_149;
				word32 ecx_150;
				word32 eax_151;
				word64 rax_152;
				byte al_153;
				byte SZO_154;
				byte C_155;
				byte Z_156;
				word64 rcx_157;
				word64 r8_158;
				word64 r13_159;
				byte bl_160;
				_setusermatherr();
			}
			fn0000000140001DD0();
			fn0000000140001DD0();
			fn0000000140001ABC();
			word64 rsp_97;
			word64 rbx_98;
			byte SCZO_99;
			word32 ecx_100;
			word32 eax_101;
			word64 rax_102;
			byte al_103;
			byte SZO_104;
			byte C_105;
			byte Z_106;
			word64 rcx_107;
			word64 r8_108;
			word64 r13_109;
			byte bl_110;
			configthreadlocale();
			fn0000000140001938();
			if (0x01 != 0x00)
			{
				word64 rsp_131;
				word64 rbx_132;
				byte SCZO_133;
				word32 ecx_134;
				word32 eax_135;
				word64 rax_136;
				byte al_137;
				byte SZO_138;
				byte C_139;
				byte Z_140;
				word64 rcx_141;
				word64 r8_142;
				word64 r13_143;
				byte bl_144;
				initialize_narrow_environment();
			}
			fn0000000140001ABC();
			return;
		}
	}
	else
	{
		word64 rcx_164;
		byte bl_165;
		fn0000000140001974(0x07, qwLoc04, qwArg00, qwArg04, qwArg0C, out rcx_164, out bl_165);
		int3();
	}
	word64 rcx_68;
	byte bl_69;
	fn0000000140001974(0x07, qwLoc04, qwArg00, qwArg04, qwArg0C, out rcx_68, out bl_69);
	int3();
	int3();
	fn0000000140001290();
	return;
}

void fn0000000140001290()
{
	fn000000014000193C();
	return;
}

void fn00000001400012A0()
{
	fn0000000140001B14();
	fn0000000140001ABC();
	word64 rsp_8;
	byte SCZO_9;
	word32 ecx_10;
	word32 eax_11;
	Mem0[0x0000000140002098 + 0x00:word32]();
	return;
}

word64 fn00000001400012BC(word32 edx, word64 rdi, word64 r13, selector gs, word64 qwArg08, word64 qwArg10)
{
	if (fn0000000140001600(0x01, edx, r13) == 0x00)
	{
		word64 rcx_421;
		byte bl_422;
		fn0000000140001974(0x07, qwLoc04, qwArg00, qwArg04, qwArg0C, out rcx_421, out bl_422);
		int3();
	}
	Mem23[fp - 0x14 + 0x00:byte] = 0x00;
	byte bl_29 = (byte) fn00000001400015C4(gs);
	word32 ecx_33 = Mem23[0x00000001400035B0 + 0x00:word32];
	if (ecx_33 == 0x01)
	{
		word64 rcx_414;
		fn0000000140001974(0x07, qwLoc04, qwArg00, qwArg04, qwArg0C, out rcx_414, out bl_29);
		ecx_33 = 0x07;
	}
	word64 rax_241;
	if (ecx_33 == 0x00)
	{
		Mem339[0x00000001400035B0 + 0x00:word32] = 0x01;
		word64 rsp_345;
		word64 rbx_346;
		word64 rsi_347;
		word64 rdi_348;
		byte SCZO_349;
		word32 ecx_350;
		byte al_351;
		byte SZO_352;
		byte C_353;
		byte Z_354;
		byte sil_355;
		byte bl_356;
		word64 rdx_357;
		word64 rcx_358;
		word32 eax_359;
		byte cl_360;
		word64 rax_361;
		word32 r8d_362;
		word32 edx_363;
		word32 ebx_364;
		word64 r8_365;
		word64 r13_366;
		selector gs_367;
		byte dl_368;
		initterm_e();
		if (eax_359 != 0x00)
		{
			rax_241 = DPB(rax_361, 0xFF, 0);
			return rax_241;
		}
		word64 rsp_378;
		word64 rbx_379;
		word64 rsi_380;
		word64 rdi_381;
		byte SCZO_382;
		word32 ecx_383;
		byte al_384;
		byte SZO_385;
		byte C_386;
		byte Z_387;
		byte sil_388;
		word64 rdx_390;
		word64 rcx_391;
		word32 eax_392;
		byte cl_393;
		word64 rax_394;
		word32 r8d_395;
		word32 edx_396;
		word32 ebx_397;
		word64 r8_398;
		word64 r13_399;
		selector gs_400;
		byte dl_401;
		initterm();
		Mem403[0x00000001400035B0 + 0x00:word32] = 0x02;
	}
	else
		Mem405[fp - 0x14 + 0x00:byte] = 0x01;
	fn00000001400017B4(bl_29);
	word64 rax_91 = fn0000000140001964();
	if (Mem23[rax_91 + 0x00:word64] != 0x00)
	{
		word64 rax_301 = fn0000000140001718(rax_91);
		byte al_302 = (byte) rax_301;
		if (al_302 != 0x00)
		{
			word64 rbx_307 = Mem23[rax_91 + 0x00:word64];
			fn0000000140001BF4();
			word32 ebx_308 = (word32) rbx_307;
			word64 rsp_315;
			word64 rbx_316;
			word64 rsi_317;
			word64 rdi_318;
			byte SCZO_319;
			word32 ecx_320;
			byte al_321;
			byte SZO_322;
			byte C_323;
			byte Z_324;
			byte sil_325;
			byte bl_326;
			word64 rdx_327;
			word64 rcx_328;
			word32 eax_329;
			byte cl_330;
			word64 rax_331;
			word32 r8d_332;
			word32 edx_333;
			word32 ebx_334;
			word64 r8_335;
			word64 r13_336;
			selector gs_337;
			byte dl_338;
			ebx_308();
		}
	}
	word64 rax_115 = fn000000014000196C();
	if (Mem23[rax_115 + 0x00:word64] != 0x00)
	{
		word64 rax_268 = fn0000000140001718(rax_115);
		byte al_269 = (byte) rax_268;
		if (al_269 != 0x00)
		{
			word64 rsp_275;
			word64 rbx_276;
			word64 rsi_277;
			word64 rdi_278;
			byte SCZO_279;
			word32 ecx_280;
			byte al_281;
			byte SZO_282;
			byte C_283;
			byte Z_284;
			byte sil_285;
			byte bl_286;
			word64 rdx_287;
			word64 rcx_288;
			word32 eax_289;
			byte cl_290;
			word64 rax_291;
			word32 r8d_292;
			word32 edx_293;
			word32 ebx_294;
			word64 r8_295;
			word64 r13_296;
			selector gs_297;
			byte dl_298;
			register_thread_local_exe_atexit_callback();
		}
	}
	word64 rsp_123;
	word64 rbx_124;
	word64 rsi_125;
	word64 rdi_126;
	byte SCZO_127;
	word32 ecx_128;
	byte al_129;
	byte SZO_130;
	byte C_131;
	byte Z_132;
	byte sil_133;
	byte bl_134;
	word64 rdx_135;
	word64 rcx_136;
	word32 eax_137;
	byte cl_138;
	word64 rax_139;
	word32 r8d_140;
	word32 edx_141;
	word32 ebx_142;
	word64 r8_143;
	word64 r13_144;
	selector gs_145;
	byte dl_146;
	_p___argv();
	word64 rsp_149;
	word64 rbx_150;
	word64 rsi_151;
	word64 rdi_152;
	byte SCZO_153;
	word32 ecx_154;
	byte al_155;
	byte SZO_156;
	byte C_157;
	byte Z_158;
	byte sil_159;
	byte bl_160;
	word64 rdx_161;
	word64 rcx_162;
	word32 eax_163;
	byte cl_164;
	word64 rax_165;
	word32 r8d_166;
	word32 edx_167;
	word32 ebx_168;
	word64 r8_169;
	word64 r13_170;
	selector gs_171;
	byte dl_172;
	_p___argc();
	word64 rsp_175;
	word64 rbx_176;
	word64 rsi_177;
	word64 rdi_178;
	byte SCZO_179;
	word32 ecx_180;
	byte al_181;
	byte SZO_182;
	byte C_183;
	byte Z_184;
	byte sil_185;
	byte bl_186;
	word64 rdx_187;
	word64 rcx_188;
	word32 eax_189;
	byte cl_190;
	word32 r8d_192;
	word32 edx_193;
	word32 ebx_194;
	word64 r8_195;
	word64 r13_196;
	selector gs_197;
	byte dl_198;
	word64 rax_191;
	get_initial_narrow_environment();
	byte sil_203;
	word32 eax_204 = fn0000000140001000(out sil_203);
	byte al_208 = fn0000000140001AC0();
	if (al_208 == 0x00)
		exit(DPB(rcx_188, eax_204, 0));
	if (sil_203 == 0x00)
	{
		word64 rsp_242;
		word64 rbx_243;
		word64 rsi_244;
		word64 rdi_245;
		byte SCZO_246;
		word32 ecx_247;
		byte al_248;
		byte SZO_249;
		byte C_250;
		byte Z_251;
		byte sil_252;
		byte bl_253;
		word64 rdx_254;
		word64 rcx_255;
		word32 eax_256;
		byte cl_257;
		word32 r8d_259;
		word32 edx_260;
		word32 ebx_261;
		word64 r8_262;
		word64 r13_263;
		selector gs_264;
		byte dl_265;
		cexit();
	}
	rax_241 = DPB(rax_191, fn00000001400017D8(0x00), 0);
	return rax_241;
}

DWORD Win32CrtStartup()
{
	fn000000014000186C(rbx, qwLoc24, qwLoc1C, qwLoc14, qwLoc10, qwLoc0C);
	return fn00000001400012BC(edx, rdi, r13, gs, qwArg08, qwArg10);
}

word32 fn0000000140001448()
{
	SetUnhandledExceptionFilter(tLoc20);
	UnhandledExceptionFilter(tLoc20);
	word64 rsp_24;
	word64 rbx_25;
	byte SCZO_26;
	word64 rcx_27;
	word32 ecx_28;
	byte SZO_29;
	byte C_30;
	word32 eax_31;
	word64 rax_32;
	word32 edx_33;
	Mem0[0x0000000140002058 + 0x00:word64]();
	return eax_31;
}

word32 fn000000014000147C(word64 qwArg08, ptr64 & silOut)
{
	if (IsProcessorFeaturePresent(tLoc38) == 0x00)
	{
		byte sil_15;
		*silOut = fn0000000140001550(0x00000001400030E0, qwLoc3C, qwLoc2C);
		Mem18[0x00000001400031D8 + 0x00:word64] = Mem0[fp + 0x00:word64];
		Mem21[0x0000000140003178 + 0x00:word64] = fp + 0x08;
		Mem23[0x0000000140003050 + 0x00:word64] = Mem21[0x00000001400031D8 + 0x00:word64];
		word64 rax_24 = Mem23[fp + 0x08:word64];
		Mem25[0x0000000140003160 + 0x00:word64] = rax_24;
		Mem26[0x0000000140003040 + 0x00:word32] = 0xC0000409;
		Mem27[0x0000000140003044 + 0x00:word32] = 0x01;
		Mem28[0x0000000140003058 + 0x00:word32] = 0x01;
		word64 rax_30 = DPB(rax_24, 0x08, 0);
		0x0000000140003060[rax_30 * 0x00] = 0x02;
		word64 rax_35 = DPB(rax_30 *s 0x00, 0x08, 0);
		(fp - 0x18)[rax_35 * 0x00] = Mem33[0x0000000140003000 + 0x00:word64];
		(fp - 0x18)[DPB(rax_35 *s 0x00, 0x08, 0) * 0x01] = Mem38[0x0000000140003008 + 0x00:word64];
		return fn0000000140001448();
	}
	else
		__fastfail(0x02);
}

byte fn0000000140001550(word64 rcx, word64 qwArg04, word64 qwArg14)
{
	RtlCaptureContext(tLoc48);
	word64 rsi_16 = Mem0[rcx + 0xF8:word64];
l000000014000156A:
	word64 rax_50 = RtlLookupFunctionEntry(rsi_16, fp + 0x14, DPB(r8, 0x00, 0));
	if (rax_50 != 0x00)
	{
		word64 rsp_97;
		word64 rbx_98;
		word64 rdi_100;
		byte SCZO_101;
		word64 rcx_102;
		word32 edi_103;
		byte SZO_104;
		byte C_105;
		word32 r8d_106;
		word64 rdx_107;
		word64 rax_108;
		byte Z_110;
		word64 r9_111;
		word32 ecx_112;
		byte SO_113;
		byte sil_114;
		KERNEL32.dll!RtlVirtualUnwind();
		if (edi_103 < ~0x00)
			goto l000000014000156A;
	}
	return (byte) qwLoc04;
}

word32 fn00000001400015C4(selector gs)
{
	word32 eax_15;
	word32 eax_26 = fn0000000140001DC4();
	if (eax_26 != 0x00)
	{
		word64 rax_38 = Mem0[gs:0x30:word64];
		word64 rcx_39 = Mem0[rax_38 + 0x08:word64];
		do
		{
			__lock();
			__lock();
			eax_26 = 0x00;
			rax_38 = DPB(rax_38, 0x00, 0);
			if (!__cmpxchg(Mem0[0x00000001400035B8 + 0x00:word64], rcx_39, Mem44, out Mem51))
				goto l00000001400015F2;
		} while (rcx_39 == rax_38);
		eax_15 = 0x01;
	}
	else
	{
l00000001400015F2:
		eax_15 = DPB(eax_26, 0x00, 0);
	}
	return eax_15;
	return eax_15;
	return eax_15;
}

byte fn0000000140001600(word32 ecx, word32 edx, word64 r13)
{
	byte al_16 = (byte) (word32) Mem0[0x00000001400035F0 + 0x00:byte];
	word64 rbx_14 = DPB(rbx, 0x01, 0);
	if (ecx == 0x00)
		al_16 = 0x01;
	byte al_34;
	Mem18[0x00000001400035F0 + 0x00:byte] = al_16;
	byte bl_26 = fn0000000140001BFC(edx, rbx_14, r13, qwLoc20, qwLoc1C, qwLoc18, qwLoc14, qwLoc10);
	fn0000000140001938();
	if (true)
	{
		fn0000000140001938();
		if (true)
		{
			al_34 = bl_26;
			return al_34;
		}
		fn0000000140001938();
	}
	al_34 = 0x00;
	return al_34;
}

word32 fn000000014000164C(word32 ecx, word64 r8, word64 r13, word64 qwArg08)
{
	if (ecx >u 0x01)
	{
		word64 rcx_156;
		byte bl_157;
		fn0000000140001974(0x05, qwLoc48, qwLoc44, qwLoc40, qwLoc38, out rcx_156, out bl_157);
		int3();
		int3();
		int3();
		int3();
		return (word32) fn0000000140001718(rcx_156);
	}
	else
	{
		word32 eax_35 = fn0000000140001DC4();
		if (eax_35 == 0x00 || ecx != 0x00)
		{
			word64 rdx_44 = Mem0[0x0000000140003000 + 0x00:word64];
			word64 r8_56 = __ror(r8 | ~0x00, (byte) (0x40 - ((word32) rdx_44 & 0x3F))) ^ rdx_44;
			Mem59[r13 - 0x20 + 0x00:word64] = r8_56;
			Mem61[r13 - 0x18 + 0x00:word64] = r8_56;
		}
		else
		{
			word32 eax_105;
			word64 rsp_69;
			word64 rbx_70;
			word64 rbp_71;
			byte SCZO_72;
			word32 ebx_73;
			word32 ecx_74;
			byte CZ_75;
			word32 eax_76;
			byte SZO_77;
			byte C_78;
			byte Z_79;
			word64 rcx_80;
			byte al_81;
			word64 rdx_82;
			word64 r8_83;
			word32 edx_84;
			byte cl_85;
			word64 r13_86;
			byte bl_87;
			word64 rax_88;
			initialize_onexit_table();
			if (eax_76 != 0x00)
				eax_105 = DPB(eax_76, 0x00, 0);
			else
			{
				word64 rsp_121;
				word64 rbx_122;
				word64 rbp_123;
				byte SCZO_124;
				word32 ebx_125;
				word32 ecx_126;
				byte CZ_127;
				word32 eax_128;
				byte SZO_129;
				byte C_130;
				byte Z_131;
				word64 rcx_132;
				byte al_133;
				word64 rdx_134;
				word64 r8_135;
				word32 edx_136;
				byte cl_137;
				word64 r13_138;
				byte bl_139;
				word64 rax_140;
				initialize_onexit_table();
				eax_105 = DPB(eax_128, eax_128 == 0x00, 0);
			}
			return eax_105;
		}
	}
}

word64 fn0000000140001718(word64 rcx)
{
	word64 rax_103;
	if (Mem0[0x0000000140000000 + 0x00:word16] == 23117)
	{
		rax = (int64) Mem0[0x000000014000003C + 0x00:word32];
		word64 rdx_50 = 0x0000000140000000;
		word64 rcx_52 = rax + rdx_50;
		if (Mem0[rcx_52 + 0x00:word32] == 0x4550 && Mem0[rcx_52 + 0x18:word16] == 0x020B)
		{
			word64 rax_115 = DPB(rax, (word32) Mem0[rcx_52 + 0x06:word16], 0);
			word64 rdx_117 = rcx_52 + 0x18 + DPB(rax, (word32) Mem0[rcx_52 + 0x14:word16], 0);
			word64 r8_60 = rcx - rdx_50;
			word64 rcx_111 = rax_115 * 0x05;
			word64 r9_70 = rdx_117 + (rax_115 * 0x05) * 0x08;
			while (rdx_117 != r9_70)
			{
				word32 ecx_110 = Mem0[rdx_117 + 0x0C:word32];
				rcx_111 = DPB(rcx_111, ecx_110, 0);
				if (r8_60 >=u rcx_111)
				{
					rax_115 = DPB(rax_115, Mem0[rdx_117 + 0x08:word32] + ecx_110, 0);
					if (r8_60 <u rax_115)
						goto l000000014000178F;
				}
				rdx_117 = rdx_117 + 0x28;
			}
			rdx_117 = DPB(rdx_117, 0x00, 0);
l000000014000178F:
			if (rdx_117 == 0x00)
				rax_103 = DPB(rax_115, 0x00, 0);
			else if (Mem0[rdx_117 + 0x24:word32] < 0x00)
				rax_103 = DPB(rax_115, 0x00, 0);
			else
				rax_103 = DPB(rax_115, 0x01, 0);
			return rax_103;
		}
	}
	rax_103 = DPB(rax, 0x00, 0);
	return rax_103;
}

void fn00000001400017B4(byte cl)
{
	word64 rdx_13 = DPB(rdx, 0x00, 0);
	if (fn0000000140001DC4() != 0x00 && cl == 0x00)
		Mem31[0x00000001400035B8 + 0x00:word64] = rdx_13;
	return;
}

word32 fn00000001400017D8(byte dl)
{
	if (Mem0[0x00000001400035F0 + 0x00:byte] == 0x00 || dl == 0x00)
	{
		fn0000000140001938();
		fn0000000140001938();
	}
	return (word32) qwLoc04;
}

word64 fn0000000140001804(word32 eax)
{
	word64 rbx_25;
	word32 eax_23;
	word64 rcx_21;
	word64 rdx_7 = Mem0[0x0000000140003000 + 0x00:word64];
	word32 edx_8 = (word32) rdx_7;
	byte cl_14 = (byte) (edx_8 & 0x3F);
	word64 rdx_16 = __ror(rdx_7 ^ Mem0[0x00000001400035C0 + 0x00:word64], cl_14);
	if (rdx_16 == ~0x00)
	{
		word64 rsp_51;
		byte SCZO_53;
		word64 rdx_54;
		word32 ecx_56;
		word32 edx_57;
		byte SZO_58;
		byte C_59;
		byte cl_60;
		byte Z_61;
		word64 rax_63;
		crt_atexit();
	}
	else
	{
		word64 rsp_67;
		byte SCZO_69;
		word64 rdx_70;
		word32 ecx_72;
		word32 edx_73;
		byte SZO_74;
		byte C_75;
		byte cl_76;
		byte Z_77;
		word64 rax_79;
		register_onexit_function();
	}
	word64 rcx_28 = DPB(rcx_21, 0x00, 0);
	if (eax_23 == 0x00)
		rcx_28 = rbx_25;
	return rcx_28;
}

void fn0000000140001854(word32 eax)
{
	fn0000000140001804(eax);
	return;
}

void fn000000014000186C(word64 rbx, word64 qwArg0C, word64 qwArg14, word64 qwArg1C, word64 qwArg20, word64 qwArg24)
{
	word64 rax_15 = Mem0[0x0000000140003000 + 0x00:word64];
	if (rax_15 == rbx)
	{
		GetSystemTimeAsFileTime(tLoc20);
		word64 v15_50 = qwArg14 & 0x00 ^ DPB(qwArg14 & 0x00, GetCurrentThreadId(), 0) ^ DPB(qwArg14 & 0x00, GetCurrentProcessId(), 0);
		QueryPerformanceCounter(tLoc20);
		rax_15 = (DPB(qwArg14 & 0x00, dwArg1C, 0) << 0x20 ^ qwArg1C ^ v15_50 ^ fp + 0x0C) & fp + 0x0C;
		if (rax_15 == rbx)
			rax_15 = fp + 0x0C;
		Mem70[0x0000000140003000 + 0x00:word64] = rax_15;
	}
	Mem32[0x0000000140003008 + 0x00:word64] = ~rax_15;
	return;
}

void fn0000000140001918()
{
	return;
}

void fn0000000140001920()
{
	return;
}

void fn0000000140001928()
{
	word64 rsp_4;
	word64 rcx_5;
	Mem0[0x0000000140002028 + 0x00:word64]();
	return;
}

void fn0000000140001938()
{
	return;
}

void fn000000014000193C()
{
	word64 rax_4 = fn0000000140001130();
	Mem7[rax_4 + 0x00:word64] = Mem0[rax_4 + 0x00:word64] | 0x04;
	word64 rax_10 = fn00000001400010C0();
	Mem12[rax_10 + 0x00:word64] = Mem7[rax_10 + 0x00:word64] | 0x02;
	return;
}

word32 fn0000000140001958()
{
	return (word32) (Mem0[0x0000000140003014 + 0x00:word32] == 0x00);
}

word64 fn0000000140001964()
{
	return 0x0000000140003638;
}

word64 fn000000014000196C()
{
	return 0x0000000140003630;
}

word32 fn0000000140001974(word32 ecx, word64 qwArg04, word64 qwArg08, word64 qwArg0C, word64 qwArg14, ptr64 & rcxOut, ptr64 & blOut)
{
	if (IsProcessorFeaturePresent(tLoc05C4) == 0x00)
	{
		Mem22[0x0000000140003610 + 0x00:word32] = Mem0[0x0000000140003610 + 0x00:word32] & 0x00;
		word32 eax_28 = memset(ptrLoc05C4, dwLoc05BC, tLoc05B4);
		RtlCaptureContext(tLoc05C0);
		word64 rax_37 = RtlLookupFunctionEntry(qwLoc03DC, fp + 0x14, DPB(r8, 0x00, 0));
		if (rax_37 != 0x00)
		{
			word64 rsp_138;
			word64 rbx_139;
			word64 rbp_140;
			byte SCZO_141;
			word32 ebx_142;
			word32 ecx_143;
			word32 eax_144;
			byte SZO_145;
			byte C_146;
			byte Z_147;
			word64 rcx_148;
			word32 edx_149;
			word64 rdx_150;
			word32 r8d_151;
			word64 rax_152;
			word64 r8_153;
			word64 r9_154;
			byte bl_155;
			KERNEL32.dll!RtlVirtualUnwind();
		}
		memset(ptrLoc05C4, dwLoc05BC, tLoc05B4);
		word32 eax_73 = IsDebuggerPresent();
		SetUnhandledExceptionFilter(tLoc05C0);
		word64 rcx_85;
		*rcxOut = fp - 1412;
		word32 eax_109 = UnhandledExceptionFilter(tLoc05C0);
		if (eax_109 == 0x00)
		{
			eax_109 = 0x00 - (-(eax_73 == 0x01) == 0x00);
			Mem112[0x0000000140003610 + 0x00:word32] = Mem22[0x0000000140003610 + 0x00:word32] & eax_109;
		}
		byte bl_99;
		*blOut = (byte) qwArg0C;
		return eax_109;
	}
	else
		__fastfail(ecx);
}

void fn0000000140001ABC()
{
	return;
}

byte fn0000000140001AC0()
{
	byte al_21;
	word64 rax_7 = DPB(rax, GetModuleHandleW(tLoc24), 0);
	if (rax_7 != 0x00 && Mem0[rax_7 + 0x00:word16] == 23117)
	{
		word64 rax_49 = (int64) Mem0[rax_7 + 0x3C:word32] + rax_7;
		if (Mem0[rax_49 + 0x00:word32] == 0x4550 && (Mem0[rax_49 + 0x18:word16] == 0x020B && Mem0[rax_49 + 0x84:word32] >u 0x0E))
		{
			al_21 = Mem0[rax_49 + 0xF8:word32] != 0x00;
			return al_21;
		}
	}
	al_21 = 0x00;
	return al_21;
}

void fn0000000140001B14()
{
	word64 rsp_4;
	word64 rcx_5;
	Mem0[0x0000000140002068 + 0x00:word64]();
	return;
}

void fn0000000140001B24(word64 rcx)
{
	word64 rax_5 = Mem0[rcx + 0x00:word64];
	if (Mem0[rax_5 + 0x00:word32] == ~0x1F928C9C && Mem0[rax_5 + 0x18:word32] == 0x04)
	{
		word32 ecx_32 = Mem0[rax_5 + 0x20:word32];
		word64 rcx_33 = DPB(rcx, ecx_32, 0);
		if (rcx_33 <=u ~0x19930521 || ecx_32 == 0x01994000)
		{
			word64 rsp_37;
			byte SCZO_38;
			word64 rax_39;
			word64 rcx_40;
			byte Z_41;
			word32 ecx_42;
			word32 eax_43;
			byte CZ_44;
			byte SZO_45;
			byte C_46;
			api-ms-win-crt-runtime-l1-1-0.dll!terminate();
			int3();
			fn0000000140001B5C(qwLoc28, qwLoc24, qwLoc20, qwLoc1C);
			return;
		}
	}
	return;
}

void fn0000000140001B5C(word64 qwArg08, word64 qwArg0C, word64 qwArg10, word64 qwArg14)
{
	word64 rbx_11 = 0x0000000140002680;
	word64 rsi_12 = 0x0000000140002680;
	while (rbx_11 <u rsi_12)
	{
		word64 rdi_37 = Mem0[rbx_11 + 0x00:word64];
		if (rdi_37 != 0x00)
		{
			fn0000000140001BF4();
			word64 rsp_53;
			word64 rdi_56;
			byte SCZO_57;
			byte C_58;
			byte SZO_59;
			byte Z_60;
			word64 rcx_61;
			edi();
		}
		rbx_11 = rbx_11 + 0x08;
	}
	return;
}

void fn0000000140001BA8(word64 qwArg08, word64 qwArg0C, word64 qwArg10, word64 qwArg14)
{
	word64 rbx_11 = 0x0000000140002690;
	word64 rsi_12 = 0x0000000140002690;
	while (rbx_11 <u rsi_12)
	{
		word64 rdi_37 = Mem0[rbx_11 + 0x00:word64];
		if (rdi_37 != 0x00)
		{
			fn0000000140001BF4();
			word64 rsp_53;
			word64 rdi_56;
			byte SCZO_57;
			byte C_58;
			byte SZO_59;
			byte Z_60;
			word64 rcx_61;
			edi();
		}
		rbx_11 = rbx_11 + 0x08;
	}
	return;
}

void fn0000000140001BF4()
{
	word64 rsp_3;
	Mem0[0x0000000140002190 + 0x00:word64]();
	return;
}

byte fn0000000140001BFC(word32 edx, word64 rbx, word64 r13, word64 qwArg0C, word64 qwArg10, word64 qwArg14, word64 qwArg18, word64 qwArg1C)
{
	Mem17[0x000000014000301C + 0x00:word32] = 0x02;
	word32 eax_18;
	word32 ebx_19;
	word32 ecx_20;
	word32 edx_21;
	__cpuid(0x00, 0x00, &eax_18, &ebx_19, &ecx_20, &edx_21);
	Mem23[0x0000000140003018 + 0x00:word32] = 0x01;
	word32 r8d_174 = Mem23[0x0000000140003614 + 0x00:word32];
	word32 eax_51;
	word32 ebx_52;
	word32 ecx_53;
	word32 edx_54;
	__cpuid(0x01, 0x00, &eax_51, &ebx_52, &ecx_53, &edx_54);
	Mem57[r13 - 0x08 + 0x00:word32] = ecx_53;
	word32 r11d_191 = ebx_19 ^ 1752462657 | edx_21 ^ 0x69746E65 | ecx_20 ^ 0x444D4163;
	if ((edx_21 ^ 0x49656E69 | ecx_20 ^ 1818588270 | ebx_19 ^ 1970169159) == 0x00)
	{
		Mem179[0x0000000140003020 + 0x00:word64] = Mem57[0x0000000140003020 + 0x00:word64] | ~0x00;
		Mem186[0x0000000140003614 + 0x00:word32] = r8d_174 | 0x04;
		r8d_174 = r8d_174 | 0x04;
		if ((eax_51 & 0x0FFF3FF0) == 0x000106C0 || ((eax_51 & 0x0FFF3FF0) == 0x00020660 || (eax_51 & 0x0FFF3FF0) == 0x00020670))
		{
l0000000140001CDE:
			r8d_174 = r8d_174 | 0x04 | 0x01;
			Mem201[0x0000000140003614 + 0x00:word32] = r8d_174;
			goto l0000000140001CE9;
		}
		word32 eax_206 = (eax_51 & 0x0FFF3FF0) + ~0x0003064F;
		word64 rax_207 = DPB(rax, eax_206, 0);
		if (eax_206 <=u 0x20)
		{
			r11d_191 = 0x00010001;
			if (!__bt(rbx, rax_207))
				goto l0000000140001CDE;
		}
	}
l0000000140001CE9:
	if (r11d_191 == 0x00 && (eax_51 & 0x0FF00F00) >=u 0x00600F00)
	{
		r8d_174 = r8d_174 | 0x04;
		Mem177[0x0000000140003614 + 0x00:word32] = r8d_174;
	}
	Mem88[r13 - 0x1C + 0x00:word32] = ecx_53;
	if (eax_18 >= 0x07)
	{
		word32 eax_157;
		word32 ebx_158;
		word32 ecx_159;
		word32 edx_160;
		__cpuid(0x07, 0x00, &eax_157, &ebx_158, &ecx_159, &edx_160);
		if (!__bt(ebx_158, 0x09))
			Mem170[0x0000000140003614 + 0x00:word32] = r8d_174 | 0x02;
	}
	if (!__bt(ecx_53, 0x14))
	{
		Mem123[0x0000000140003018 + 0x00:word32] = 0x02;
		Mem124[0x000000014000301C + 0x00:word32] = 0x06;
		if (!__bt(ecx_53, 0x1B) && !__bt(ecx_53, 0x1C))
		{
			word64 edx_eax_128 = __xgetbv(0x00);
			if (((byte) (edx_eax_128 << 0x20 | edx_eax_128) & 0x06) == 0x06)
			{
				word32 eax_139 = Mem124[0x000000014000301C + 0x00:word32];
				Mem144[0x0000000140003018 + 0x00:word32] = 0x03;
				Mem149[0x000000014000301C + 0x00:word32] = eax_139 | 0x08;
				if ((bLoc1C & 0x20) != 0x00)
				{
					Mem153[0x0000000140003018 + 0x00:word32] = 0x05;
					Mem154[0x000000014000301C + 0x00:word32] = eax_139 | 0x08 | 0x20;
				}
			}
		}
	}
	return (byte) qwArg14;
}

word32 fn0000000140001DC4()
{
	return (word32) (Mem0[0x0000000140003030 + 0x00:word32] != 0x00);
}

void fn0000000140001DD0()
{
	return;
}

void fn0000000140001E7C(word64 rax, word64 rdx, word64 r9)
{
	fn0000000140001E9C(rax, rdx, r9, Mem0[r9 + 0x38:word64]);
	return;
}

void fn0000000140001E9C(word64 rax, word64 rcx, word64 rdx, word64 r8)
{
	word64 rcx_20;
	word32 r11d_7 = Mem0[r8 + 0x00:word32];
	word64 r9_12 = rcx;
	word64 r10_17 = rcx;
	rcx_20 = rcx;
	if ((Mem0[rax + 0x00:byte] & 0x04) != 0x00)
	{
		rcx_20 = (int64) -Mem0[rax + 0x08:word32];
		r10_17 = (int64) Mem0[r8 + 0x04:word32] + rcx & rcx_20;
	}
	word64 rax_24 = Mem0[rdx + 0x10:word64];
	word64 rdx_23 = Mem0[(int64) (r11d_7 & ~0x07) + r10_17:word64];
	word64 rcx_27 = DPB(rcx_20, Mem0[rax_24 + 0x08:word32], 0) + Mem0[rdx + 0x08:word64];
	if ((Mem0[rcx_27 + 0x03:byte] & 0x0F) != 0x00)
		r9_12 = rcx + DPB(rax_24, (word32) Mem0[rcx_27 + 0x03:byte] & ~0x0F, 0);
	word64 r9_37 = r9_12 ^ rdx_23;
	byte sil_45;
	fn00000001400011B0(r9_37, out sil_45);
	return;
}

void fn0000000140001F10()
{
	word64 rsp_3;
	word32 eax_4;
	eax();
	return;
}

void fn0000000140001F12(word64 rcx)
{
	word64 rsp_14;
	word64 rbp_15;
	byte SCZO_16;
	word64 rdx_17;
	word64 rax_18;
	word64 rcx_19;
	word32 ecx_20;
	seh_filter_exe();
	return;
}

void fn0000000140001F30(word64 rcx)
{
	return;
}

