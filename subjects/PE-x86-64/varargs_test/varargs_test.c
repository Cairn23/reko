// varargs_test.c
// Generated by decompiling varargs_test.exe
// using Reko decompiler version 0.7.0.0.

#include "varargs_test.h"

// 0000000140001000: Register word32 fn0000000140001000(Register out Eq_3 silOut)
word32 fn0000000140001000(Eq_3 & silOut)
{
	fn0000000140001140(qwLocCC, qwLocC8, qwLocC0, qwLocB8, qwLocB0);
	*(fp - 0x90) = fp - 0x84;
	*(fp - 0x98) = fp - 0x88;
	*(fp - 0xA0) = fp - 0x78;
	*(fp - 0xA8) = fp - 0x80;
	fn00000001400010D0(qwLoc04, qwArg00, qwArg08, qwArg10, qwArg18);
	byte sil_44;
	return fn00000001400011B0(*(fp - 0x10) ^ fp - 200, out sil_44);
}

// 00000001400010C0: Register ptr64 fn00000001400010C0()
ptr64 fn00000001400010C0()
{
	return 0x140003628;
}

// 00000001400010D0: void fn00000001400010D0(Stack word64 qwArg04, Stack word64 qwArg08, Stack word64 qwArg10, Stack word64 qwArg18, Stack word64 qwArg20)
void fn00000001400010D0(word64 qwArg04, word64 qwArg08, word64 qwArg10, word64 qwArg18, word64 qwArg20)
{
	word64 rsp_30;
	word64 rcx_31;
	word64 rdx_32;
	word64 r8_33;
	word64 r9_34;
	word64 rbx_35;
	word64 rsi_36;
	word64 rdi_37;
	byte SCZO_38;
	word32 ecx_39;
	byte SZO_40;
	byte C_41;
	word64 rax_42;
	word32 r9d_43;
	_acrt_iob_func();
	ui64 * rax_45 = fn00000001400010C0();
	word64 rsp_55;
	word64 rcx_56;
	word64 rdx_57;
	word64 r8_58;
	word64 r9_59;
	word64 rbx_60;
	word64 rsi_61;
	word64 rdi_62;
	byte SCZO_63;
	word32 ecx_64;
	byte SZO_65;
	byte C_66;
	word64 rax_67;
	word32 r9d_68;
	_stdio_common_vfscanf();
	return;
}

// 0000000140001130: Register ptr64 fn0000000140001130()
ptr64 fn0000000140001130()
{
	return 0x140003620;
}

// 0000000140001140: void fn0000000140001140(Stack word64 qwArg04, Stack word64 qwArg08, Stack word64 qwArg10, Stack word64 qwArg18, Stack word64 qwArg20)
void fn0000000140001140(word64 qwArg04, word64 qwArg08, word64 qwArg10, word64 qwArg18, word64 qwArg20)
{
	word64 rsp_28;
	word64 rcx_29;
	word64 rdx_30;
	word64 r8_31;
	word64 r9_32;
	word64 rbx_33;
	word64 rsi_34;
	word64 rdi_35;
	byte SCZO_36;
	word32 ecx_37;
	word64 rax_38;
	word32 r9d_39;
	byte SZO_40;
	byte C_41;
	_acrt_iob_func();
	ui64 * rax_43 = fn0000000140001130();
	word64 rsp_53;
	word64 rcx_54;
	word64 rdx_55;
	word64 r8_56;
	word64 r9_57;
	word64 rbx_58;
	word64 rsi_59;
	word64 rdi_60;
	byte SCZO_61;
	word32 ecx_62;
	word64 rax_63;
	word32 r9d_64;
	byte SZO_65;
	byte C_66;
	_stdio_common_vfprintf();
	return;
}

// 00000001400011B0: Register word32 fn00000001400011B0(Register ui64 rcx, Register out Eq_63 silOut)
word32 fn00000001400011B0(ui64 rcx, Eq_63 & silOut)
{
fn00000001400011B0_entry:
	rsp = fp
	SCZO = cond(rcx - globals->qw40003000)
	Z = SCZO
	branch Test(NE,Z) l00000001400011CC
	goto l00000001400011BA
l00000001400011B0:
l00000001400011BA:
	v6 = (rcx & 0x00010000) != 0x00
	rcx = __rol(rcx, 0x10)
	cx = (word16) rcx
	ecx = (word32) rcx
	SZO = cond(cx & ~0x00)
	Z = SZO
	C = false
	branch Test(NE,Z) l00000001400011C8
l00000001400011C6:
	return eax
l00000001400011C8:
	v12 = (rcx & 0x00010000) != 0x00
	rcx = __ror(rcx, 0x10)
	C = v12
l00000001400011CC:
	eax = fn000000014000147C(qwArg08, out sil)
	rax = DPB(rax, eax, 0)
	return eax
fn00000001400011B0_exit:
	use sil (=> silOut)
}

// 00000001400011D4: void fn00000001400011D4(Register word64 rbx, Register word64 r8, Register word64 r13, Register word128 xmm1)
void fn00000001400011D4(word64 rbx, word64 r8, word64 r13, word128 xmm1)
{
	word64 rsp_8;
	word64 rbx_9;
	byte SCZO_10;
	word32 ecx_11;
	word64 rcx_12;
	word32 eax_13;
	word64 rax_14;
	byte al_15;
	byte SZO_16;
	byte C_17;
	byte Z_18;
	ui64 r8_19;
	ptr64 r13_20;
	word128 xmm1_21;
	byte bl_22;
	set_app_type();
	fn0000000140001920();
	_set_fmode(dwLoc24);
	*__p__commode() = fn0000000140001ABC();
	word32 eax_35 = fn000000014000164C(0x01, r8_19, r13_20, xmm1_21, qwLoc24, qwLoc20);
	byte al_37 = (byte) eax_35;
	if (al_37 != 0x00)
	{
		fn0000000140001B5C(qwArg00, qwArg04, qwArg08, qwArg0C);
		fn0000000140001854(eax_35);
		word32 eax_78 = fn0000000140001918();
		word64 rsp_80;
		word64 rbx_81;
		byte SCZO_82;
		word32 ecx_83;
		word64 rcx_84;
		word32 eax_85;
		word64 rax_86;
		byte al_87;
		byte SZO_88;
		byte C_89;
		byte Z_90;
		word64 r8_91;
		word64 r13_92;
		word128 xmm1_93;
		byte bl_94;
		configure_narrow_argv();
		if (eax_85 == 0x00)
		{
			fn0000000140001928();
			if (fn0000000140001958() != 0x00)
				__setusermatherr(&globals->t40001ABC);
			fn0000000140001DD0();
			fn0000000140001DD0();
			word32 eax_102 = fn0000000140001ABC();
			word64 rsp_104;
			word64 rbx_105;
			byte SCZO_106;
			word32 ecx_107;
			word64 rcx_108;
			word32 eax_109;
			word64 rax_110;
			byte al_111;
			byte SZO_112;
			byte C_113;
			byte Z_114;
			word64 r8_115;
			word64 r13_116;
			word128 xmm1_117;
			byte bl_118;
			configthreadlocale();
			fn0000000140001938();
			if (0x01 != 0x00)
			{
				word64 rsp_139;
				word64 rbx_140;
				byte SCZO_141;
				word32 ecx_142;
				word64 rcx_143;
				word32 eax_144;
				word64 rax_145;
				byte al_146;
				byte SZO_147;
				byte C_148;
				byte Z_149;
				word64 r8_150;
				word64 r13_151;
				word128 xmm1_152;
				byte bl_153;
				initialize_narrow_environment();
			}
			fn0000000140001ABC();
			return;
		}
	}
	else
	{
		word64 rcx_157;
		byte bl_158;
		fn0000000140001974(0x07, qwLoc04, qwArg00, qwArg04, qwArg0C, out rcx_157, out bl_158);
		int3();
	}
	word64 rcx_73;
	byte bl_74;
	fn0000000140001974(0x07, qwLoc04, qwArg00, qwArg04, qwArg0C, out rcx_73, out bl_74);
	int3();
	int3();
	fn0000000140001290();
	return;
}

// 0000000140001290: void fn0000000140001290()
void fn0000000140001290()
{
	fn000000014000193C();
	return;
}

// 00000001400012A0: void fn00000001400012A0()
void fn00000001400012A0()
{
	fn0000000140001B14();
	word32 eax_4 = fn0000000140001ABC();
	word64 rsp_9;
	byte SCZO_10;
	word32 ecx_11;
	word32 eax_12;
	word64 rcx_13;
	globals->u40002098();
	return;
}

// 00000001400012BC: Register uint64 fn00000001400012BC(Register word32 edx, Register word64 rdi, Register ptr64 r13, Register (ptr Eq_410) gs, Stack word64 qwArg08, Stack word64 qwArg10)
uint64 fn00000001400012BC(word32 edx, word64 rdi, ptr64 r13, Eq_410 * gs, word64 qwArg08, word64 qwArg10)
{
	if (fn0000000140001600(0x01, edx, r13) == 0x00)
	{
		word64 rcx_354;
		byte bl_355;
		fn0000000140001974(0x07, qwLoc04, qwArg00, qwArg04, qwArg0C, out rcx_354, out bl_355);
		int3();
	}
	*(fp - 0x14) = 0x00;
	word32 eax_24 = fn00000001400015C4(gs);
	word64 rax_27 = DPB(rax, eax_24, 0);
	byte bl_28 = (byte) eax_24;
	word32 ecx_33 = (word32) (uint64) globals->dw400035B0;
	if (ecx_33 == 0x01)
	{
		ecx_33 = 0x07;
		word64 rcx_347;
		rax_27 = DPB(rax, fn0000000140001974(0x07, qwLoc04, qwArg00, qwArg04, qwArg0C, out rcx_347, out bl_28), 0);
	}
	uint64 rax_225;
	if (ecx_33 == 0x00)
	{
		globals->dw400035B0 = 0x01;
		word64 rax_326 = DPB(rax_27, _initterm_e(&globals->t400021B8, &globals->t400021D0), 0);
		if (_initterm_e(&globals->t400021B8, &globals->t400021D0) != 0x00)
		{
			rax_225 = 0xFF;
			return rax_225;
		}
		_initterm(&globals->t400021A0, &globals->t400021B0);
		globals->dw400035B0 = 0x02;
	}
	else
		*(fp - 0x14) = 0x01;
	fn00000001400017B4(bl_28);
	word64 * rax_79 = fn0000000140001964();
	if (*rax_79 != 0x00)
	{
		word64 rax_285 = fn0000000140001718(rax_79);
		byte al_286 = (byte) rax_285;
		if (al_286 != 0x00)
		{
			word64 rbx_291 = *rax_79;
			fn0000000140001BF4();
			Eq_530 ebx_292 = (word32) rbx_291;
			word64 rsp_299;
			word64 rbx_300;
			word64 rsi_301;
			word64 rdi_302;
			byte SCZO_303;
			word64 rcx_304;
			byte al_305;
			byte SZO_306;
			byte C_307;
			byte Z_308;
			byte sil_309;
			byte bl_310;
			word32 ecx_311;
			word64 rdx_312;
			word64 rax_313;
			word32 eax_314;
			byte cl_315;
			word32 r8d_316;
			word64 r8_317;
			word32 edx_318;
			word32 ebx_319;
			word64 r13_320;
			struct Eq_554 * gs_321;
			byte dl_322;
			ebx_292();
		}
	}
	word64 * rax_106 = fn000000014000196C();
	if (*rax_106 != 0x00)
	{
		word64 rax_253 = fn0000000140001718(rax_106);
		byte al_254 = (byte) rax_253;
		if (al_254 != 0x00)
		{
			word64 rsp_260;
			word64 rbx_261;
			word64 rsi_262;
			word64 rdi_263;
			byte SCZO_264;
			word64 rcx_265;
			byte al_266;
			byte SZO_267;
			byte C_268;
			byte Z_269;
			byte sil_270;
			byte bl_271;
			word32 ecx_272;
			word64 rdx_273;
			word64 rax_274;
			word32 eax_275;
			byte cl_276;
			word32 r8d_277;
			word64 r8_278;
			word32 edx_279;
			word32 ebx_280;
			word64 r13_281;
			struct Eq_594 * gs_282;
			byte dl_283;
			register_thread_local_exe_atexit_callback();
		}
	}
	word64 rsp_114;
	word64 rbx_115;
	word64 rsi_116;
	word64 rdi_117;
	byte SCZO_118;
	word64 rcx_119;
	byte al_120;
	byte SZO_121;
	byte C_122;
	byte Z_123;
	byte sil_124;
	byte bl_125;
	word32 ecx_126;
	word64 rdx_127;
	word64 rax_128;
	word32 eax_129;
	byte cl_130;
	word32 r8d_131;
	word64 r8_132;
	word32 edx_133;
	word32 ebx_134;
	word64 r13_135;
	struct Eq_620 * gs_136;
	byte dl_137;
	_p___argv();
	word64 rsp_139;
	word64 rbx_140;
	word64 rsi_141;
	word64 rdi_142;
	byte SCZO_143;
	word64 rcx_144;
	byte al_145;
	byte SZO_146;
	byte C_147;
	byte Z_148;
	byte sil_149;
	byte bl_150;
	word32 ecx_151;
	word64 rdx_152;
	word64 rax_153;
	word32 eax_154;
	byte cl_155;
	word32 r8d_156;
	word64 r8_157;
	word32 edx_158;
	word32 ebx_159;
	word64 r13_160;
	struct Eq_646 * gs_161;
	byte dl_162;
	_p___argc();
	word64 rsp_164;
	word64 rbx_165;
	word64 rsi_166;
	word64 rdi_167;
	byte SCZO_168;
	word64 rcx_169;
	byte al_170;
	byte SZO_171;
	byte C_172;
	byte Z_173;
	byte sil_174;
	byte bl_175;
	word32 ecx_176;
	word64 rdx_177;
	word64 rax_178;
	word32 eax_179;
	byte cl_180;
	word32 r8d_181;
	word64 r8_182;
	word32 edx_183;
	word32 ebx_184;
	word64 r13_185;
	struct Eq_672 * gs_186;
	byte dl_187;
	get_initial_narrow_environment();
	byte sil_191;
	word32 eax_192 = fn0000000140001000(out sil_191);
	uint64 rbx_193 = (uint64) eax_192;
	word32 ebx_195 = (word32) rbx_193;
	byte al_196 = fn0000000140001AC0();
	if (al_196 == 0x00)
		exit((uint64) ebx_195);
	if (sil_191 == 0x00)
	{
		word64 rsp_228;
		word64 rbx_229;
		word64 rsi_230;
		word64 rdi_231;
		byte SCZO_232;
		word64 rcx_233;
		byte al_234;
		byte SZO_235;
		byte C_236;
		byte Z_237;
		byte sil_238;
		byte bl_239;
		word32 ecx_240;
		word64 rdx_241;
		word64 rax_242;
		word32 eax_243;
		byte cl_244;
		word32 r8d_245;
		word64 r8_246;
		word32 edx_247;
		word32 ebx_248;
		word64 r13_249;
		struct Eq_721 * gs_250;
		byte dl_251;
		cexit();
	}
	rax_225 = (uint64) fn00000001400017D8(0x00);
	return rax_225;
}

// 0000000140001434: Register Eq_737 Win32CrtStartup()
Eq_737 Win32CrtStartup()
{
	fn000000014000186C(rbx, qwLoc24, qwLoc1C, qwLoc14, qwLoc10, qwLoc0C);
	return fn00000001400012BC(edx, rdi, r13, gs, qwArg08, qwArg10);
}

// 0000000140001448: Register word32 fn0000000140001448()
word32 fn0000000140001448()
{
	SetUnhandledExceptionFilter(tLoc20);
	UnhandledExceptionFilter(tLoc20);
	Eq_772 eax_14 = GetCurrentProcess();
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
	word64 rdx_34;
	globals->ptr40002058();
	return eax_31;
}

// 000000014000147C: Register word32 fn000000014000147C(Stack word64 qwArg08, Register out Eq_166 silOut)
word32 fn000000014000147C(word64 qwArg08, Eq_166 & silOut)
{
	if (IsProcessorFeaturePresent(tLoc38) == 0x00)
	{
		byte sil_16;
		*silOut = fn0000000140001550(&globals->t400030E0, qwLoc3C, qwLoc2C);
		globals->qw400031D8 = fp->qw0000;
		globals->ptr40003178 = &fp->qw0008;
		globals->qw40003050 = globals->qw400031D8;
		globals->qw40003160 = fp->qw0008;
		globals->dw40003040 = 0xC0000409;
		globals->dw40003044 = 0x01;
		globals->dw40003058 = 0x01;
		globals->qw40003060 = 0x02;
		*(fp - 0x18) = globals->qw40003000;
		*(fp - 0x10) = globals->qw40003008;
		return fn0000000140001448();
	}
	else
		__fastfail(0x02);
}

// 0000000140001550: Register byte fn0000000140001550(Register (ptr Eq_807) rcx, Stack word64 qwArg04, Stack word64 qwArg14)
byte fn0000000140001550(Eq_807 * rcx, word64 qwArg04, word64 qwArg14)
{
	RtlCaptureContext(tLoc48);
	Eq_891 rsi_16 = rcx->t00F8;
l000000014000156A:
	Eq_921 rax_49 = RtlLookupFunctionEntry(rsi_16, fp + 0x14, null);
	if (rax_49 != null)
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
		word64 r8_107;
		word64 rdx_108;
		word64 rax_109;
		byte Z_110;
		word64 r9_111;
		word32 ecx_112;
		byte SO_113;
		byte sil_114;
		KERNEL32.dll!RtlVirtualUnwind();
		if ((word32) (uint64) (edi_103 + 0x01) < 0x02)
			goto l000000014000156A;
	}
	return (byte) qwLoc04;
}

// 00000001400015C4: Register word32 fn00000001400015C4(Register (ptr Eq_410) gs)
word32 fn00000001400015C4(Eq_410 * gs)
{
	word32 eax_13;
	word32 eax_21 = fn0000000140001DC4();
	if (eax_21 != 0x00)
	{
		word64 rcx_32 = gs->ptr0030->qw0008;
		do
		{
			__lock();
			eax_21 = 0x00;
			word64 rax_39;
			if (!__cmpxchg(globals->qw400035B8, rcx_32, 0x00, out rax_39))
				goto l00000001400015F2;
		} while (rcx_32 == rax_39);
		eax_13 = 0x01;
	}
	else
	{
l00000001400015F2:
		eax_13 = DPB(eax_21, 0x00, 0);
	}
	return eax_13;
}

// 0000000140001600: Register byte fn0000000140001600(Register word32 ecx, Register word32 edx, Register ptr64 r13)
byte fn0000000140001600(word32 ecx, word32 edx, ptr64 r13)
{
	byte al_16 = (byte) (word32) globals->b400035F0;
	if (ecx == 0x00)
		al_16 = 0x01;
	byte al_35;
	globals->b400035F0 = al_16;
	byte bl_26 = fn0000000140001BFC(edx, 0x01, r13, qwLoc20, qwLoc1C, qwLoc18, qwLoc14, qwLoc10);
	fn0000000140001938();
	if (true)
	{
		fn0000000140001938();
		if (true)
		{
			al_35 = bl_26;
			return al_35;
		}
		fn0000000140001938();
	}
	al_35 = 0x00;
	return al_35;
}

// 000000014000164C: Register word32 fn000000014000164C(Register uint32 ecx, Register ui64 r8, Register ptr64 r13, Register word128 xmm1, Stack word64 qwArg08, Stack word64 qwArg0C)
word32 fn000000014000164C(uint32 ecx, ui64 r8, ptr64 r13, word128 xmm1, word64 qwArg08, word64 qwArg0C)
{
	uint64 rbx_10 = (uint64) ecx;
	word32 ebx_11 = (word32) rbx_10;
	if (ecx > 0x01)
	{
		word64 * rcx_183;
		byte bl_184;
		fn0000000140001974(0x05, qwLoc48, qwLoc44, qwLoc40, qwLoc38, out rcx_183, out bl_184);
		int3();
		int3();
		int3();
		int3();
		return (word32) fn0000000140001718(rcx_183);
	}
	else
	{
		word32 eax_143;
		word32 eax_37 = fn0000000140001DC4();
		if (eax_37 != 0x00 && ebx_11 == 0x00)
		{
			word64 rsp_117;
			word64 rbx_118;
			word64 rbp_119;
			byte SCZO_120;
			word32 ebx_121;
			word32 ecx_122;
			byte CZ_123;
			word32 eax_124;
			byte SZO_125;
			byte C_126;
			byte Z_127;
			word64 rcx_128;
			byte al_129;
			word64 rdx_130;
			word64 r8_131;
			word32 edx_132;
			word64 rax_133;
			byte cl_134;
			word64 r13_135;
			word128 xmm0_136;
			word128 xmm1_137;
			byte bl_138;
			initialize_onexit_table();
			if (eax_124 != 0x00)
				eax_143 = DPB(eax_124, 0x00, 0);
			else
			{
				word64 rsp_148;
				word64 rbx_149;
				word64 rbp_150;
				byte SCZO_151;
				word32 ebx_152;
				word32 ecx_153;
				byte CZ_154;
				word32 eax_155;
				byte SZO_156;
				byte C_157;
				byte Z_158;
				word64 rcx_159;
				byte al_160;
				word64 rdx_161;
				word64 r8_162;
				word32 edx_163;
				word64 rax_164;
				byte cl_165;
				word64 r13_166;
				word128 xmm0_167;
				word128 xmm1_168;
				byte bl_169;
				initialize_onexit_table();
				eax_143 = DPB(eax_155, eax_155 == 0x00, 0);
			}
		}
		else
		{
			word64 rdx_71 = globals->qw40003000;
			word32 eax_80 = (word32) (uint64) ((word32) (uint64) (word32) rdx_71 & 0x3F);
			ui64 r8_88 = __ror(r8 | ~0x00, (byte) (uint64) (0x40 - eax_80)) ^ rdx_71;
			*(r13 - 0x20) = r8_88;
			*(r13 - 0x18) = r8_88;
			*(r13 - 0x10) = r8_88;
			globals->ow400035C0 = owLoc24;
			*(r13 - 0x20) = r8_88;
			*(r13 - 0x18) = r8_88;
			*(r13 - 0x10) = r8_88;
			globals->r400035D0 = rLoc14;
			globals->ow400035D8 = owLoc24;
			globals->r400035E8 = rLoc14;
			eax_143 = DPB(eax_80, 0x01, 0);
		}
		return eax_143;
	}
}

// 0000000140001718: Register (ptr Eq_1172) fn0000000140001718(Register (ptr word64) rcx)
Eq_1172 * fn0000000140001718(word64 * rcx)
{
	struct Eq_1172 * rax_101;
	word32 * rax_33 = (word32 *) 23117;
	if (*(word16 *) 0x140000000 == 23117)
	{
		rax_33 = (int64) *(word32 *) 0x14000003C;
		word64 rcx_51 = rax_33 + 0x0000000140000000;
		if (rcx_51->dw0000 == 0x4550)
		{
			rax_33 = (word32 *) 0x020B;
			if (rcx_51->w0018 == 0x020B)
			{
				struct Eq_1203 * rax_61 = DPB(0x020B, (word32) rcx_51->w0014, 0);
				word64 rdx_116 = rcx_51 + 0x18 + rax_61;
				struct Eq_1214 * rax_114 = DPB(rax_61, (word32) rcx_51->w0006, 0);
				word64 r8_59 = rcx - 0x0000000140000000;
				word64 r9_69 = rdx_116 + (rax_114 * 0x05) * 0x08;
				while (rdx_116 != r9_69)
				{
					struct Eq_1214 * rcx_109 = (uint64) rdx_116->dw000C;
					word32 ecx_110 = (word32) rcx_109;
					if (r8_59 >= rcx_109)
					{
						rax_114 = (uint64) ((word32) (uint64) rdx_116->dw0008 + ecx_110);
						if (r8_59 < rax_114)
							goto l000000014000178F;
					}
					rdx_116 = rdx_116 + 0x28;
				}
				rdx_116 = null;
l000000014000178F:
				if (rdx_116 == null)
					rax_101 = (struct Eq_1172 *) DPB(rax_114, 0x00, 0);
				else if (rdx_116->dw0024 < 0x00)
					rax_101 = (struct Eq_1172 *) DPB(rax_114, 0x00, 0);
				else
					rax_101 = (struct Eq_1172 *) DPB(rax_114, 0x01, 0);
				return rax_101;
			}
		}
	}
	rax_101 = (struct Eq_1172 *) DPB(rax_33, 0x00, 0);
	return rax_101;
}

// 00000001400017B4: void fn00000001400017B4(Register byte cl)
void fn00000001400017B4(byte cl)
{
	if (fn0000000140001DC4() != 0x00 && cl == 0x00)
		globals->qw400035B8 = 0x00;
	return;
}

// 00000001400017D8: Register word32 fn00000001400017D8(Register byte dl)
word32 fn00000001400017D8(byte dl)
{
	if (globals->b400035F0 == 0x00 || dl == 0x00)
	{
		fn0000000140001938();
		fn0000000140001938();
	}
	return (word32) qwLoc04;
}

// 0000000140001804: Register word64 fn0000000140001804(Register word32 eax)
word64 fn0000000140001804(word32 eax)
{
	uint64 rbx_25;
	word32 eax_23;
	word64 rdx_7 = globals->qw40003000;
	word32 edx_8 = (word32) rdx_7;
	ui32 ecx_12 = (word32) (uint64) edx_8;
	byte cl_15 = (byte) (uint64) (ecx_12 & 0x3F);
	word64 rdx_17 = __ror(rdx_7 ^ globals->ow400035C0, cl_15);
	if (rdx_17 == ~0x00)
	{
		word64 rsp_51;
		byte SCZO_53;
		word64 rdx_54;
		word64 rcx_55;
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
		word64 rsp_66;
		byte SCZO_68;
		word64 rdx_69;
		word64 rcx_70;
		word32 ecx_71;
		word32 edx_72;
		byte SZO_73;
		byte C_74;
		byte cl_75;
		byte Z_76;
		word64 rax_78;
		register_onexit_function();
	}
	uint64 rcx_27 = 0x00;
	if (eax_23 == 0x00)
		rcx_27 = rbx_25;
	return rcx_27;
}

// 0000000140001854: void fn0000000140001854(Register word32 eax)
void fn0000000140001854(word32 eax)
{
	fn0000000140001804(eax);
	return;
}

// 000000014000186C: void fn000000014000186C(Register Eq_740 rbx, Stack word64 qwArg0C, Stack ui64 qwArg14, Stack word64 qwArg1C, Stack word64 qwArg20, Stack word64 qwArg24)
void fn000000014000186C(Eq_740 rbx, word64 qwArg0C, ui64 qwArg14, word64 qwArg1C, word64 qwArg20, word64 qwArg24)
{
	Eq_740 rax_15 = globals->qw40003000;
	if (rax_15 == rbx)
	{
		GetSystemTimeAsFileTime(tLoc20);
		ui64 v15_48 = qwArg14 & 0x00 ^ (uint64) GetCurrentThreadId() ^ (uint64) GetCurrentProcessId();
		QueryPerformanceCounter(tLoc20);
		rax_15 = ((uint64) dwArg1C << 0x20 ^ qwArg1C ^ v15_48 ^ (word64) fp + 0x0C) & (word64) fp + 0x0C;
		if (rax_15 == rbx)
			rax_15 = (word64) fp + 0x0C;
		globals->qw40003000 = rax_15;
	}
	globals->qw40003008 = ~rax_15;
	return;
}

// 0000000140001918: Register word32 fn0000000140001918()
word32 fn0000000140001918()
{
	return 0x01;
}

// 0000000140001920: Register word32 fn0000000140001920()
word32 fn0000000140001920()
{
	return 0x4000;
}

// 0000000140001928: void fn0000000140001928()
void fn0000000140001928()
{
	word64 rsp_4;
	word64 rcx_5;
	globals->ptr40002028();
	return;
}

// 0000000140001938: void fn0000000140001938()
void fn0000000140001938()
{
	return;
}

// 000000014000193C: void fn000000014000193C()
void fn000000014000193C()
{
	ui64 * rax_4 = fn0000000140001130();
	*rax_4 = *rax_4 | 0x04;
	ui64 * rax_10 = fn00000001400010C0();
	*rax_10 = *rax_10 | 0x02;
	return;
}

// 0000000140001958: Register word32 fn0000000140001958()
word32 fn0000000140001958()
{
	return (word32) (globals->dw40003014 == 0x00);
}

// 0000000140001964: Register ptr64 fn0000000140001964()
ptr64 fn0000000140001964()
{
	return 0x140003638;
}

// 000000014000196C: Register ptr64 fn000000014000196C()
ptr64 fn000000014000196C()
{
	return 0x140003630;
}

// 0000000140001974: Register Eq_771 fn0000000140001974(Register word32 ecx, Stack word64 qwArg04, Stack word64 qwArg08, Stack word64 qwArg0C, Stack word64 qwArg14, Register out ptr64 rcxOut, Register out Eq_264 blOut)
LONG fn0000000140001974(word32 ecx, word64 qwArg04, word64 qwArg08, word64 qwArg0C, word64 qwArg14, ptr64 & rcxOut, Eq_264 & blOut)
{
	word32 ebx_11 = (word32) (uint64) ecx;
	if (IsProcessorFeaturePresent(tLoc05C4) == 0x00)
	{
		globals->dw40003610 = globals->dw40003610 & 0x00;
		Eq_1465 eax_29 = memset(ptrLoc05C4, dwLoc05BC, tLoc05B4);
		RtlCaptureContext(tLoc05C0);
		Eq_921 rax_36 = RtlLookupFunctionEntry(qwLoc03DC, fp + 0x14, null);
		if (rax_36 != null)
		{
			word64 rsp_138;
			word64 rbx_139;
			word64 rbp_140;
			byte SCZO_141;
			word32 ebx_142;
			word32 ecx_143;
			word64 rcx_144;
			word32 eax_145;
			byte SZO_146;
			byte C_147;
			byte Z_148;
			word32 edx_149;
			word64 rdx_150;
			word64 rax_151;
			word32 r8d_152;
			word64 r8_153;
			word64 r9_154;
			byte bl_155;
			KERNEL32.dll!RtlVirtualUnwind();
		}
		memset(ptrLoc05C4, dwLoc05BC, tLoc05B4);
		Eq_796 eax_72 = IsDebuggerPresent();
		SetUnhandledExceptionFilter(tLoc05C0);
		word64 rcx_84;
		*rcxOut = fp - 1412;
		Eq_771 eax_109 = UnhandledExceptionFilter(tLoc05C0);
		if (eax_109 == 0x00)
		{
			eax_109 = (word32) (uint64) (0x00 - (-(eax_72 == 0x01) == 0x00));
			globals->dw40003610 = globals->dw40003610 & eax_109;
		}
		byte bl_98;
		*blOut = (byte) qwArg0C;
		return eax_109;
	}
	else
		__fastfail((word32) (uint64) ebx_11);
}

// 0000000140001ABC: Register word32 fn0000000140001ABC()
word32 fn0000000140001ABC()
{
	return 0x00;
}

// 0000000140001AC0: Register bool fn0000000140001AC0()
bool fn0000000140001AC0()
{
	bool al_21;
	struct Eq_1553 * rax_7 = DPB(rax, GetModuleHandleW(tLoc24), 0);
	if (rax_7 != null && rax_7->w0000 == 23117)
	{
		word64 rax_49 = (int64) rax_7->dw003C + rax_7;
		if (rax_49->dw0000 == 0x4550 && (rax_49->w0018 == 0x020B && rax_49->dw0084 > 0x0E))
		{
			al_21 = rax_49->dw00F8 != 0x00;
			return al_21;
		}
	}
	al_21 = 0x00;
	return al_21;
}

// 0000000140001B14: void fn0000000140001B14()
void fn0000000140001B14()
{
	word64 rsp_4;
	word64 rcx_5;
	globals->ptr40002068();
	return;
}

// 0000000140001B24: void fn0000000140001B24(Register (ptr (ptr Eq_1602)) rcx)
void fn0000000140001B24(Eq_1602 * * rcx)
{
	struct Eq_1602 * rax_5 = *rcx;
	if (rax_5->dw0000 == ~0x1F928C9C && rax_5->dw0018 == 0x04)
	{
		uint64 rcx_33 = (uint64) rax_5->dw0020;
		word32 ecx_34 = (word32) rcx_33;
		if (rcx_33 <= ~0x19930521 || ecx_34 == 0x01994000)
		{
			word64 rsp_38;
			byte SCZO_39;
			word64 rax_40;
			word64 rcx_41;
			byte Z_42;
			word32 ecx_43;
			word32 eax_44;
			byte CZ_45;
			byte SZO_46;
			byte C_47;
			api-ms-win-crt-runtime-l1-1-0.dll!terminate();
			int3();
			fn0000000140001B5C(qwLoc28, qwLoc24, qwLoc20, qwLoc1C);
			return;
		}
	}
	return;
}

// 0000000140001B5C: void fn0000000140001B5C(Stack word64 qwArg08, Stack word64 qwArg0C, Stack word64 qwArg10, Stack word64 qwArg14)
void fn0000000140001B5C(word64 qwArg08, word64 qwArg0C, word64 qwArg10, word64 qwArg14)
{
	word64 * rbx_11 = &globals->qw40002680;
	word64 * rsi_12 = &globals->qw40002680;
	while (rbx_11 < rsi_12)
	{
		word64 rdi_37 = *rbx_11;
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

// 0000000140001BA8: void fn0000000140001BA8(Stack word64 qwArg08, Stack word64 qwArg0C, Stack word64 qwArg10, Stack word64 qwArg14)
void fn0000000140001BA8(word64 qwArg08, word64 qwArg0C, word64 qwArg10, word64 qwArg14)
{
	word64 * rbx_11 = &globals->qw40002690;
	word64 * rsi_12 = &globals->qw40002690;
	while (rbx_11 < rsi_12)
	{
		word64 rdi_37 = *rbx_11;
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

// 0000000140001BF4: void fn0000000140001BF4()
void fn0000000140001BF4()
{
	word64 rsp_3;
	globals->ptr40002190();
	return;
}

// 0000000140001BFC: Register byte fn0000000140001BFC(Register word32 edx, Register uint64 rbx, Register ptr64 r13, Stack word64 qwArg0C, Stack word64 qwArg10, Stack word64 qwArg14, Stack word64 qwArg18, Stack word64 qwArg1C)
byte fn0000000140001BFC(word32 edx, uint64 rbx, ptr64 r13, word64 qwArg0C, word64 qwArg10, word64 qwArg14, word64 qwArg18, word64 qwArg1C)
{
	globals->dw4000301C = 0x02;
	word32 eax_20;
	word32 ebx_21;
	word32 ecx_22;
	word32 edx_23;
	__cpuid(0x00, 0x00, &eax_20, &ebx_21, &ecx_22, &edx_23);
	globals->dw40003018 = 0x01;
	ui32 r8d_201 = (word32) (uint64) globals->dw40003614;
	ui32 eax_65;
	word32 ebx_66;
	word32 ecx_67;
	word32 edx_68;
	__cpuid(0x01, 0x00, &eax_65, &ebx_66, &ecx_67, &edx_68);
	word32 r9d_71 = (word32) (uint64) ecx_67;
	*(r13 - 0x08) = r9d_71;
	word32 r11d_219 = (word32) (uint64) ((word32) (uint64) ((word32) (uint64) ((word32) (uint64) ebx_21 ^ 1752462657) | (word32) ((uint64) ((word32) ((uint64) edx_23) ^ 0x69746E65))) | (word32) ((uint64) (ecx_22 ^ 0x444D4163)));
	int32 edi_58 = (word32) (uint64) eax_20;
	ui32 ecx_75 = (word32) (uint64) eax_65;
	if ((word32) (uint64) ((word32) (uint64) ((word32) (uint64) ((word32) (uint64) edx_23 ^ 0x49656E69) | (word32) ((uint64) ((word32) ((uint64) ecx_22) ^ 1818588270))) | (word32) ((uint64) ((word32) ((uint64) ebx_21) ^ 1970169159))) == 0x00)
	{
		globals->qw40003020 = globals->qw40003020 | ~0x00;
		r8d_201 = (word32) (uint64) (r8d_201 | 0x04);
		globals->dw40003614 = r8d_201;
		word32 eax_211 = (word32) (uint64) (eax_65 & 0x0FFF3FF0);
		if (eax_211 == 0x000106C0 || (eax_211 == 0x00020660 || eax_211 == 0x00020670))
		{
l0000000140001CDE:
			r8d_201 = (word32) (uint64) (r8d_201 | 0x01);
			globals->dw40003614 = r8d_201;
			goto l0000000140001CE9;
		}
		uint64 rax_235 = (uint64) (eax_211 + ~0x0003064F);
		if ((word32) rax_235 <= 0x20)
		{
			r11d_219 = 0x00010001;
			if (!__bt(rbx, rax_235))
				goto l0000000140001CDE;
		}
	}
l0000000140001CE9:
	if (r11d_219 == 0x00 && (word32) ((uint64) (ecx_75 & 0x0FF00F00)) >= 0x00600F00)
	{
		r8d_201 = (word32) (uint64) (r8d_201 | 0x04);
		globals->dw40003614 = r8d_201;
	}
	*(r13 - 0x1C) = r9d_71;
	if (edi_58 >= 0x07)
	{
		word32 eax_181;
		word32 ebx_182;
		word32 ecx_183;
		word32 edx_184;
		__cpuid(0x07, 0x00, &eax_181, &ebx_182, &ecx_183, &edx_184);
		if (!__bt(ebx_182, 0x09))
			globals->dw40003614 = (word32) (uint64) (r8d_201 | 0x02);
	}
	if (!__bt(r9d_71, 0x14))
	{
		globals->dw40003018 = 0x02;
		globals->dw4000301C = 0x06;
		if (!__bt(r9d_71, 0x1B) && !__bt(r9d_71, 0x1C))
		{
			ui64 edx_eax_149 = __xgetbv(0x00);
			if (((byte) (edx_eax_149 << 0x20 | edx_eax_149) & 0x06) == 0x06)
			{
				ui32 eax_163 = (word32) (uint64) ((word32) (uint64) globals->dw4000301C | 0x08);
				globals->dw40003018 = 0x03;
				globals->dw4000301C = eax_163;
				if ((bLoc1C & 0x20) != 0x00)
				{
					globals->dw40003018 = 0x05;
					globals->dw4000301C = (word32) (uint64) (eax_163 | 0x20);
				}
			}
		}
	}
	return (byte) qwArg14;
}

// 0000000140001DC4: Register word32 fn0000000140001DC4()
word32 fn0000000140001DC4()
{
	return (word32) (globals->dw40003030 != 0x00);
}

// 0000000140001DD0: void fn0000000140001DD0()
void fn0000000140001DD0()
{
	return;
}

// 0000000140001E7C: void fn0000000140001E7C(Register (ptr Eq_1977) rax, Register Eq_1978 rdx, Register (ptr Eq_1979) r9)
void fn0000000140001E7C(Eq_1977 * rax, Eq_1978 rdx, Eq_1979 * r9)
{
	fn0000000140001E9C(rax, rdx, r9, r9->ptr0038);
	return;
}

// 0000000140001E9C: void fn0000000140001E9C(Register (ptr Eq_1977) rax, Register Eq_1978 rcx, Register (ptr Eq_1979) rdx, Register (ptr Eq_1985) r8)
void fn0000000140001E9C(Eq_1977 * rax, Eq_1978 rcx, Eq_1979 * rdx, Eq_1985 * r8)
{
	word32 r11d_12 = (word32) (uint64) ((word32) (uint64) r8->dw0000 & ~0x07);
	Eq_1978 r9_14 = rcx;
	Eq_1978 r10_19 = rcx;
	if ((rax->b0000 & 0x04) != 0x00)
		r10_19 = (word64) rcx.u1 + (int64) r8->dw0004 & (int64) ((word32) ((uint64) (-((word32) ((uint64) rax->dw0008)))));
	word64 rdx_24 = Mem0[(int64) r11d_12 + r10_19:word64];
	struct Eq_2013 * rcx_27 = (uint64) rdx->ptr0010->dw0008 + rdx->qw0008;
	if ((rcx_27->b0003 & 0x0F) != 0x00)
		r9_14 = (word64) rcx.u1 + (uint64) ((word32) rcx_27->b0003 & ~0x0F);
	ui64 r9_37 = r9_14 ^ rdx_24;
	byte sil_45;
	fn00000001400011B0(r9_37, out sil_45);
	return;
}

// 0000000140001F10: void fn0000000140001F10()
void fn0000000140001F10()
{
	word64 rsp_3;
	word32 eax_4;
	eax();
	return;
}

// 0000000140001F12: void fn0000000140001F12(Register word64 rcx)
void fn0000000140001F12(word64 rcx)
{
	word64 rsp_16;
	word64 rbp_17;
	byte SCZO_18;
	word64 rdx_19;
	word64 rax_20;
	word64 rcx_21;
	word32 ecx_22;
	seh_filter_exe();
	return;
}

// 0000000140001F30: void fn0000000140001F30(Register word64 rcx)
void fn0000000140001F30(word64 rcx)
{
	return;
}

