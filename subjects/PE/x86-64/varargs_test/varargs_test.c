// varargs_test.c
// Generated by decompiling varargs_test.exe
// using Reko decompiler version 0.7.2.0.

#include "varargs_test.h"

// 0000000140001000: Register word32 fn0000000140001000()
word32 fn0000000140001000()
{
	ui64 rax_5 = globals->qw40003000 ^ fp - 200;
	fn0000000140001140(qwLocC8, qwLocC0, qwLocB8, qwLocB0);
	fn00000001400010D0(qwLocC8, qwLocC0, qwLocB8, qwLocB0);
	return fn00000001400011B0(rax_5 ^ fp - 200);
}

// 00000001400010C0: Register ptr64 fn00000001400010C0()
ptr64 fn00000001400010C0()
{
	return 0x140003628;
}

// 00000001400010D0: void fn00000001400010D0(Stack word64 qwArg08, Stack word64 qwArg10, Stack word64 qwArg18, Stack word64 qwArg20)
void fn00000001400010D0(word64 qwArg08, word64 qwArg10, word64 qwArg18, word64 qwArg20)
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
	byte SZO_36;
	byte C_37;
	word64 rax_38;
	word32 r9d_39;
	_acrt_iob_func();
	ui64 * rax_41 = fn00000001400010C0();
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
	byte SZO_61;
	byte C_62;
	word64 rax_63;
	word32 r9d_64;
	_stdio_common_vfscanf();
}

// 0000000140001130: Register ptr64 fn0000000140001130()
ptr64 fn0000000140001130()
{
	return 0x140003620;
}

// 0000000140001140: void fn0000000140001140(Stack word64 qwArg08, Stack word64 qwArg10, Stack word64 qwArg18, Stack word64 qwArg20)
void fn0000000140001140(word64 qwArg08, word64 qwArg10, word64 qwArg18, word64 qwArg20)
{
	word64 rsp_24;
	word64 rcx_25;
	word64 rdx_26;
	word64 r8_27;
	word64 r9_28;
	word64 rbx_29;
	word64 rsi_30;
	word64 rdi_31;
	byte SCZO_32;
	word32 ecx_33;
	word64 rax_34;
	word32 r9d_35;
	byte SZO_36;
	byte C_37;
	_acrt_iob_func();
	ui64 * rax_39 = fn0000000140001130();
	word64 rsp_49;
	word64 rcx_50;
	word64 rdx_51;
	word64 r8_52;
	word64 r9_53;
	word64 rbx_54;
	word64 rsi_55;
	word64 rdi_56;
	byte SCZO_57;
	word32 ecx_58;
	word64 rax_59;
	word32 r9d_60;
	byte SZO_61;
	byte C_62;
	_stdio_common_vfprintf();
}

// 00000001400011B0: Register word32 fn00000001400011B0(Register ui64 rcx)
word32 fn00000001400011B0(ui64 rcx)
{
	if (rcx != globals->qw40003000)
		return fn000000014000147C(rcx, qwArg00, qwArg08);
	ui64 rcx_30 = __rol(rcx, 0x10);
	if (((word16) rcx_30 & ~0x00) == 0x00)
		return eax;
	rcx = __ror(rcx_30, 0x10);
	return fn000000014000147C(rcx, qwArg00, qwArg08);
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
	_set_fmode(dwLoc28);
	*__p__commode() = fn0000000140001ABC();
	word32 eax_34 = fn000000014000164C(0x01, r8_19, r13_20, xmm1_21, qwLoc28);
	byte al_36 = (byte) eax_34;
	if (al_36 != 0x00)
	{
		fn0000000140001B5C(qwArg00, qwArg08);
		fn0000000140001854(eax_34);
		word32 eax_74 = fn0000000140001918();
		word64 rsp_76;
		word64 rbx_77;
		byte SCZO_78;
		word32 ecx_79;
		word64 rcx_80;
		word32 eax_81;
		word64 rax_82;
		byte al_83;
		byte SZO_84;
		byte C_85;
		byte Z_86;
		word64 r8_87;
		word64 r13_88;
		word128 xmm1_89;
		byte bl_90;
		configure_narrow_argv();
		if (eax_81 == 0x00)
		{
			fn0000000140001928();
			if (fn0000000140001958() != 0x00)
				__setusermatherr(&globals->t40001ABC);
			fn0000000140001DD0();
			fn0000000140001DD0();
			word32 eax_98 = fn0000000140001ABC();
			word64 rsp_100;
			word64 rbx_101;
			byte SCZO_102;
			word32 ecx_103;
			word64 rcx_104;
			word32 eax_105;
			word64 rax_106;
			byte al_107;
			byte SZO_108;
			byte C_109;
			byte Z_110;
			word64 r8_111;
			word64 r13_112;
			word128 xmm1_113;
			byte bl_114;
			configthreadlocale();
			fn0000000140001938();
			if (0x01 != 0x00)
			{
				word64 rsp_135;
				word64 rbx_136;
				byte SCZO_137;
				word32 ecx_138;
				word64 rcx_139;
				word32 eax_140;
				word64 rax_141;
				byte al_142;
				byte SZO_143;
				byte C_144;
				byte Z_145;
				word64 r8_146;
				word64 r13_147;
				word128 xmm1_148;
				byte bl_149;
				initialize_narrow_environment();
			}
			fn0000000140001ABC();
			return;
		}
	}
	else
	{
		byte bl_153;
		fn0000000140001974(0x07, rbx, qwArg00, qwArg08, out bl_153);
		int3();
	}
	byte bl_71;
	fn0000000140001974(0x07, rbx, qwArg00, qwArg08, out bl_71);
	int3();
	int3();
	fn0000000140001290();
}

// 0000000140001290: void fn0000000140001290()
void fn0000000140001290()
{
	fn000000014000193C();
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
	set_new_mode();
}

// 00000001400012BC: Register word32 fn00000001400012BC(Register word32 edx, Register ptr64 r13, Register (ptr Eq_339) gs, Stack word64 qwArg08, Stack word64 qwArg10)
word32 fn00000001400012BC(word32 edx, ptr64 r13, Eq_339 * gs, word64 qwArg08, word64 qwArg10)
{
	if (fn0000000140001600(0x01, edx, r13) == 0x00)
	{
		byte bl_347;
		fn0000000140001974(0x07, qwLoc40, qwLoc38, qwLoc30, out bl_347);
		int3();
	}
	byte bl_26 = fn00000001400015C4(gs);
	word32 ecx_32 = (word32) (uint64) globals->dw400035B0;
	if (ecx_32 == 0x01)
		ecx_32 = (word32) fn0000000140001974(0x07, qwLoc40, qwLoc38, qwLoc30, out bl_26);
	word32 eax_224;
	if (ecx_32 == 0x00)
	{
		globals->dw400035B0 = 0x01;
		if (_initterm_e(&globals->t400021B8, &globals->t400021D0) != 0x00)
		{
			eax_224 = 0xFF;
			return eax_224;
		}
		_initterm(&globals->t400021A0, &globals->t400021B0);
		globals->dw400035B0 = 0x02;
	}
	fn00000001400017B4(bl_26);
	<anonymous> ** rax_77 = fn0000000140001964();
	if (*rax_77 != null)
	{
		word64 rax_282 = fn0000000140001718(rax_77);
		byte al_283 = (byte) rax_282;
		if (al_283 != 0x00)
		{
			<anonymous> * rbx_288 = *rax_77;
			fn0000000140001BF4();
			word64 rsp_295;
			word64 rbx_296;
			word64 rsi_297;
			word64 rdi_298;
			byte SCZO_299;
			word64 rcx_300;
			byte al_301;
			byte SZO_302;
			byte C_303;
			byte Z_304;
			byte sil_305;
			byte bl_306;
			word32 ecx_307;
			word64 rdx_308;
			word32 eax_309;
			word64 rax_310;
			byte cl_311;
			word32 r8d_312;
			word64 r8_313;
			word32 edx_314;
			word32 ebx_315;
			word64 r13_316;
			struct Eq_461 * gs_317;
			byte dl_318;
			rbx_288();
		}
	}
	<anonymous> ** rax_104 = fn000000014000196C();
	if (*rax_104 != null)
	{
		word64 rax_250 = fn0000000140001718(rax_104);
		byte al_251 = (byte) rax_250;
		if (al_251 != 0x00)
		{
			word64 rsp_257;
			word64 rbx_258;
			word64 rsi_259;
			word64 rdi_260;
			byte SCZO_261;
			word64 rcx_262;
			byte al_263;
			byte SZO_264;
			byte C_265;
			byte Z_266;
			byte sil_267;
			byte bl_268;
			word32 ecx_269;
			word64 rdx_270;
			word32 eax_271;
			word64 rax_272;
			byte cl_273;
			word32 r8d_274;
			word64 r8_275;
			word32 edx_276;
			word32 ebx_277;
			word64 r13_278;
			struct Eq_501 * gs_279;
			byte dl_280;
			register_thread_local_exe_atexit_callback();
		}
	}
	word64 rsp_112;
	word64 rbx_113;
	word64 rsi_114;
	word64 rdi_115;
	byte SCZO_116;
	word64 rcx_117;
	byte al_118;
	byte SZO_119;
	byte C_120;
	byte Z_121;
	byte sil_122;
	byte bl_123;
	word32 ecx_124;
	word64 rdx_125;
	word32 eax_126;
	word64 rax_127;
	byte cl_128;
	word32 r8d_129;
	word64 r8_130;
	word32 edx_131;
	word32 ebx_132;
	word64 r13_133;
	struct Eq_527 * gs_134;
	byte dl_135;
	_p___argv();
	word64 rsp_137;
	word64 rbx_138;
	word64 rsi_139;
	word64 rdi_140;
	byte SCZO_141;
	word64 rcx_142;
	byte al_143;
	byte SZO_144;
	byte C_145;
	byte Z_146;
	byte sil_147;
	byte bl_148;
	word32 ecx_149;
	word64 rdx_150;
	word32 eax_151;
	word64 rax_152;
	byte cl_153;
	word32 r8d_154;
	word64 r8_155;
	word32 edx_156;
	word32 ebx_157;
	word64 r13_158;
	struct Eq_553 * gs_159;
	byte dl_160;
	_p___argc();
	word64 rsp_162;
	word64 rbx_163;
	word64 rsi_164;
	word64 rdi_165;
	byte SCZO_166;
	word64 rcx_167;
	byte al_168;
	byte SZO_169;
	byte C_170;
	byte Z_171;
	byte sil_172;
	byte bl_173;
	word32 ecx_174;
	word64 rdx_175;
	word32 eax_176;
	word64 rax_177;
	byte cl_178;
	word32 r8d_179;
	word64 r8_180;
	word32 edx_181;
	word32 ebx_182;
	word64 r13_183;
	struct Eq_579 * gs_184;
	byte dl_185;
	get_initial_narrow_environment();
	word32 eax_189 = fn0000000140001000();
	uint64 rbx_190 = (uint64) eax_189;
	word32 ebx_192 = (word32) rbx_190;
	byte al_193 = fn0000000140001AC0();
	if (al_193 != 0x00)
	{
		if (sil_172 == 0x00)
		{
			word64 rsp_225;
			word64 rbx_226;
			word64 rsi_227;
			word64 rdi_228;
			byte SCZO_229;
			word64 rcx_230;
			byte al_231;
			byte SZO_232;
			byte C_233;
			byte Z_234;
			byte sil_235;
			byte bl_236;
			word32 ecx_237;
			word64 rdx_238;
			word32 eax_239;
			word64 rax_240;
			byte cl_241;
			word32 r8d_242;
			word64 r8_243;
			word32 edx_244;
			word32 ebx_245;
			word64 r13_246;
			struct Eq_626 * gs_247;
			byte dl_248;
			cexit();
		}
		eax_224 = (word32) (uint64) fn00000001400017D8(0x00);
		return eax_224;
	}
	else
		exit((uint64) ebx_192);
}

// 0000000140001434: Register Eq_637 Win32CrtStartup()
DWORD Win32CrtStartup()
{
	fn000000014000186C(qwLoc28, qwLoc20, qwLoc18, qwLoc10);
	return fn00000001400012BC(edx, r13, gs, qwArg08, qwArg10);
}

// 0000000140001448: Register word32 fn0000000140001448()
word32 fn0000000140001448()
{
	SetUnhandledExceptionFilter(tLoc28);
	UnhandledExceptionFilter(tLoc28);
	Eq_667 eax_12 = GetCurrentProcess();
	word64 rsp_22;
	word64 rbx_23;
	byte SCZO_24;
	word64 rcx_25;
	word32 ecx_26;
	byte SZO_27;
	byte C_28;
	word32 eax_29;
	word64 rax_30;
	word32 edx_31;
	word64 rdx_32;
	globals->ptr40002058();
	return eax_29;
}

// 000000014000147C: Register word32 fn000000014000147C(Register ui64 rcx, Stack word64 qwArg00, Stack word64 qwArg08)
word32 fn000000014000147C(ui64 rcx, word64 qwArg00, word64 qwArg08)
{
	if (IsProcessorFeaturePresent(tLoc38) == 0x00)
	{
		fn0000000140001550(&globals->t400030E0, qwLoc38);
		globals->qw400031D8 = qwArg00;
		globals->ptr40003178 = fp + 0x08;
		globals->qw40003050 = globals->qw400031D8;
		globals->qw40003160 = rcx;
		globals->dw40003040 = 0xC0000409;
		globals->dw40003044 = 0x01;
		globals->dw40003058 = 0x01;
		globals->qw40003060 = 0x02;
		return fn0000000140001448();
	}
	else
		__fastfail(0x02);
}

// 0000000140001550: void fn0000000140001550(Register (ptr Eq_701) rcx, Stack word64 qwArg08)
void fn0000000140001550(Eq_701 * rcx, word64 qwArg08)
{
	RtlCaptureContext(tLoc58);
	Eq_757 rsi_16 = rcx->t00F8;
	do
	{
		Eq_784 rax_47 = RtlLookupFunctionEntry(rsi_16, fp + 0x08, null);
		if (rax_47 == null)
			return;
		word64 rsp_91;
		word64 rbx_92;
		word64 rdi_94;
		byte SCZO_95;
		word64 rcx_96;
		word32 edi_97;
		byte SZO_98;
		byte C_99;
		word32 r8d_100;
		word64 r8_101;
		word64 rdx_102;
		word64 rax_103;
		byte Z_104;
		word64 r9_105;
		word32 ecx_106;
		byte SO_107;
		KERNEL32.dll!RtlVirtualUnwind();
	} while ((word32) (uint64) (edi_97 + 0x01) < 0x02);
}

// 00000001400015C4: Register byte fn00000001400015C4(Register (ptr Eq_339) gs)
byte fn00000001400015C4(Eq_339 * gs)
{
	byte al_12;
	if (fn0000000140001DC4() != 0x00)
	{
		word64 rcx_32 = gs->ptr0030->qw0008;
		do
		{
			__lock();
			word64 rax_39;
			if (!__cmpxchg(globals->qw400035B8, rcx_32, 0x00, out rax_39))
				goto l00000001400015F2;
		} while (rcx_32 != rax_39);
		al_12 = 0x01;
	}
	else
	{
l00000001400015F2:
		al_12 = 0x00;
	}
	return al_12;
}

// 0000000140001600: Register byte fn0000000140001600(Register word32 ecx, Register word32 edx, Register ptr64 r13)
byte fn0000000140001600(word32 ecx, word32 edx, ptr64 r13)
{
	byte al_16 = (byte) (word32) globals->b400035F0;
	if (ecx == 0x00)
		al_16 = 0x01;
	byte al_33;
	globals->b400035F0 = al_16;
	byte bl_24 = fn0000000140001BFC(edx, 0x01, r13, qwLoc28, qwLoc20, qwLoc18);
	fn0000000140001938();
	if (true)
	{
		fn0000000140001938();
		if (true)
		{
			al_33 = bl_24;
			return al_33;
		}
		fn0000000140001938();
	}
	al_33 = 0x00;
	return al_33;
}

// 000000014000164C: Register word32 fn000000014000164C(Register up32 ecx, Register ui64 r8, Register ptr64 r13, Register word128 xmm1, Stack word64 qwArg08)
word32 fn000000014000164C(up32 ecx, ui64 r8, ptr64 r13, word128 xmm1, word64 qwArg08)
{
	uint64 rbx_10 = (uint64) ecx;
	word32 ebx_11 = (word32) rbx_10;
	if (ecx > 0x01)
	{
		byte bl_179;
		<anonymous> ** rcx_180 = fn0000000140001974(0x05, qwLoc50, qwLoc48, qwLoc40, out bl_179);
		int3();
		int3();
		int3();
		int3();
		return (word32) fn0000000140001718(rcx_180);
	}
	else
	{
		word32 eax_141;
		word32 eax_37 = fn0000000140001DC4();
		if (eax_37 != 0x00 && ebx_11 == 0x00)
		{
			word64 rsp_115;
			word64 rbx_116;
			word64 rbp_117;
			byte SCZO_118;
			word32 ebx_119;
			word32 ecx_120;
			byte CZ_121;
			word32 eax_122;
			byte SZO_123;
			byte C_124;
			byte Z_125;
			word64 rcx_126;
			byte al_127;
			word64 rdx_128;
			word64 r8_129;
			word32 edx_130;
			word64 rax_131;
			byte cl_132;
			word64 r13_133;
			word128 xmm0_134;
			word128 xmm1_135;
			byte bl_136;
			initialize_onexit_table();
			if (eax_122 != 0x00)
				eax_141 = DPB(eax_122, 0x00, 0);
			else
			{
				word64 rsp_146;
				word64 rbx_147;
				word64 rbp_148;
				byte SCZO_149;
				word32 ebx_150;
				word32 ecx_151;
				byte CZ_152;
				word32 eax_153;
				byte SZO_154;
				byte C_155;
				byte Z_156;
				word64 rcx_157;
				byte al_158;
				word64 rdx_159;
				word64 r8_160;
				word32 edx_161;
				word64 rax_162;
				byte cl_163;
				word64 r13_164;
				word128 xmm0_165;
				word128 xmm1_166;
				byte bl_167;
				initialize_onexit_table();
				eax_141 = DPB(eax_153, eax_153 == 0x00, 0);
			}
		}
		else
		{
			word64 rdx_69 = globals->qw40003000;
			word32 eax_78 = (word32) (uint64) ((word32) (uint64) (word32) rdx_69 & 0x3F);
			ui64 r8_86 = __ror(r8 | ~0x00, (byte) (uint64) (0x40 - eax_78)) ^ rdx_69;
			*(r13 - 0x20) = r8_86;
			*(r13 - 0x18) = r8_86;
			*(r13 - 0x10) = r8_86;
			globals->ow400035C0 = owLoc28;
			*(r13 - 0x20) = r8_86;
			*(r13 - 0x18) = r8_86;
			*(r13 - 0x10) = r8_86;
			globals->r400035D0 = rLoc18;
			globals->ow400035D8 = owLoc28;
			globals->r400035E8 = rLoc18;
			eax_141 = DPB(eax_78, 0x01, 0);
		}
		return eax_141;
	}
}

// 0000000140001718: Register Eq_1032 fn0000000140001718(Register (ptr (ptr code)) rcx)
Eq_1032 fn0000000140001718(code * * rcx)
{
	Eq_1032 rax_101;
	word32 * rax_33 = (word32 *) 23117;
	if (globals->w40000000 == 23117)
	{
		rax_33 = (int64) globals->dw4000003C;
		word64 rcx_51 = rax_33 + 0x0000000140000000;
		if (*rcx_51 == 0x4550)
		{
			rax_33 = (word32 *) 0x020B;
			if (*((word64) rcx_51 + 0x0018) == 0x020B)
			{
				Eq_1063 rax_61 = DPB(0x020B, (word32) *((word64) rcx_51 + 0x0014), 0);
				word64 rdx_116 = rcx_51 + 0x18 + rax_61;
				Eq_1074 rax_114 = DPB(rax_61, (word32) *((word64) rcx_51 + 0x06), 0);
				Eq_1074 r8_59 = rcx - 0x140000000;
				word64 r9_69 = rdx_116 + (rax_114 * 0x05) * 0x08;
				while (rdx_116 != r9_69)
				{
					Eq_1074 rcx_109 = (uint64) rdx_116.u0[0x03];
					word32 ecx_110 = (word32) rcx_109;
					if (r8_59 >= rcx_109)
					{
						rax_114 = (uint64) ((word32) (uint64) rdx_116.u0[0x02] + ecx_110);
						if (r8_59 < rax_114)
							goto l000000014000178F;
					}
					rdx_116 = rdx_116 + 0x28;
				}
				rdx_116.u0 = 0x00;
l000000014000178F:
				if (rdx_116 == 0x00)
					rax_101 = DPB(rax_114, 0x00, 0);
				else if (rdx_116.u0[0x09] < 0x00)
					rax_101 = DPB(rax_114, 0x00, 0);
				else
					rax_101 = DPB(rax_114, 0x01, 0);
				return rax_101;
			}
		}
	}
	rax_101 = DPB(rax_33, 0x00, 0);
	return rax_101;
}

// 00000001400017B4: void fn00000001400017B4(Register byte cl)
void fn00000001400017B4(byte cl)
{
	if (fn0000000140001DC4() != 0x00 && cl == 0x00)
		globals->qw400035B8 = 0x00;
}

// 00000001400017D8: Register word32 fn00000001400017D8(Register byte dl)
word32 fn00000001400017D8(byte dl)
{
	if (globals->b400035F0 == 0x00 || dl == 0x00)
	{
		fn0000000140001938();
		fn0000000140001938();
	}
	return (word32) rbx;
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
	ui64 rdx_17 = __ror(rdx_7 ^ globals->ow400035C0, cl_15);
	if (rdx_17 == ~0x00)
	{
		word64 rsp_50;
		byte SCZO_52;
		word64 rdx_53;
		word64 rcx_54;
		word32 ecx_55;
		word32 edx_56;
		byte SZO_57;
		byte C_58;
		byte cl_59;
		byte Z_60;
		word64 rax_62;
		crt_atexit();
	}
	else
	{
		word64 rsp_65;
		byte SCZO_67;
		word64 rdx_68;
		word64 rcx_69;
		word32 ecx_70;
		word32 edx_71;
		byte SZO_72;
		byte C_73;
		byte cl_74;
		byte Z_75;
		word64 rax_77;
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
}

// 000000014000186C: void fn000000014000186C(Stack word64 qwArg08, Stack ui64 qwArg10, Stack word64 qwArg18, Stack word64 qwArg20)
void fn000000014000186C(word64 qwArg08, ui64 qwArg10, word64 qwArg18, word64 qwArg20)
{
	ui64 rax_15 = globals->qw40003000;
	if (rax_15 == 769630770)
	{
		GetSystemTimeAsFileTime(tLoc28);
		ui64 v14_44 = qwArg10 & 0x00 ^ (uint64) GetCurrentThreadId() ^ (uint64) GetCurrentProcessId();
		QueryPerformanceCounter(tLoc28);
		ui64 rax_55 = (uint64) dwArg18 << 0x20 ^ qwArg18 ^ v14_44 ^ fp + 0x08;
		rax_15 = rax_55 & 0xFFFFFFFF;
		if ((rax_55 & 0xFFFFFFFF) == 769630770)
			rax_15 = 769630771;
		globals->qw40003000 = rax_15;
	}
	globals->qw40003008 = ~rax_15;
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
}

// 0000000140001938: void fn0000000140001938()
void fn0000000140001938()
{
}

// 000000014000193C: void fn000000014000193C()
void fn000000014000193C()
{
	ui64 * rax_4 = fn0000000140001130();
	*rax_4 = *rax_4 | 0x04;
	ui64 * rax_10 = fn00000001400010C0();
	*rax_10 = *rax_10 | 0x02;
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

// 0000000140001974: Register ptr64 fn0000000140001974(Register word32 ecx, Stack word64 qwArg00, Stack word64 qwArg08, Stack word64 qwArg10, Register out Eq_204 blOut)
ptr64 fn0000000140001974(word32 ecx, word64 qwArg00, word64 qwArg08, word64 qwArg10, Eq_204 & blOut)
{
	word32 ebx_11 = (word32) (uint64) ecx;
	if (IsProcessorFeaturePresent(tLoc05C8) == 0x00)
	{
		globals->dw40003610 = globals->dw40003610 & 0x00;
		Eq_1328 eax_30 = memset(ptrLoc05C8, dwLoc05C0, tLoc05B8);
		RtlCaptureContext(ptrLoc05C8);
		Eq_784 rax_36 = RtlLookupFunctionEntry(qwLoc03E0, fp + 0x10, null);
		if (rax_36 != null)
		{
			word64 rsp_134;
			word64 rbx_135;
			word64 rbp_136;
			byte SCZO_137;
			word32 ebx_138;
			word32 ecx_139;
			word64 rcx_140;
			word32 eax_141;
			byte SZO_142;
			byte C_143;
			byte Z_144;
			word32 edx_145;
			word64 rdx_146;
			word32 r8d_147;
			word64 r8_148;
			word64 rax_149;
			word64 r9_150;
			byte bl_151;
			KERNEL32.dll!RtlVirtualUnwind();
		}
		memset(ptrLoc05C8, dwLoc05C0, tLoc05B8);
		Eq_691 eax_72 = IsDebuggerPresent();
		SetUnhandledExceptionFilter(ptrLoc05C8);
		if (UnhandledExceptionFilter(ptrLoc05C8) == 0x00)
			globals->dw40003610 = globals->dw40003610 & (word32) ((uint64) (0x00 - (-(eax_72 == 0x01) == 0x00)));
		byte bl_96;
		*blOut = (byte) rbx;
		return fp - 0x0588;
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
	struct Eq_1413 * rax_7 = DPB(rax, GetModuleHandleW(tLoc28), 0);
	if (rax_7 != null && rax_7->w0000 == 23117)
	{
		struct Eq_1429 * rax_49 = rax_7 + (int64) rax_7->dw003C / 0x0040;
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
}

// 0000000140001B24: void fn0000000140001B24(Register (ptr (ptr Eq_1462)) rcx)
void fn0000000140001B24(Eq_1462 * * rcx)
{
	struct Eq_1462 * rax_5 = *rcx;
	if (rax_5->dw0000 != ~0x1F928C9C || rax_5->dw0018 != 0x04)
		return;
	uint64 rcx_33 = (uint64) rax_5->dw0020;
	word32 ecx_34 = (word32) rcx_33;
	if (rcx_33 > ~0x19930521 && ecx_34 != 0x01994000)
		return;
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
	fn0000000140001B5C(qwLoc28, qwLoc20);
}

// 0000000140001B5C: void fn0000000140001B5C(Stack word64 qwArg08, Stack word64 qwArg10)
void fn0000000140001B5C(word64 qwArg08, word64 qwArg10)
{
	word64 * rbx_11 = &globals->qw40002680;
	word64 * rsi_12 = &globals->qw40002680;
	while (rbx_11 < rsi_12)
	{
		<anonymous> * rdi_32 = *rbx_11;
		if (rdi_32 != null)
		{
			fn0000000140001BF4();
			word64 rsp_47;
			word64 rdi_50;
			byte SCZO_51;
			byte C_52;
			byte SZO_53;
			byte Z_54;
			word64 rcx_55;
			rdi_32();
		}
		rbx_11 = rbx_11 + 0x01;
	}
}

// 0000000140001BA8: void fn0000000140001BA8(Stack word64 qwArg08, Stack word64 qwArg10)
void fn0000000140001BA8(word64 qwArg08, word64 qwArg10)
{
	word64 * rbx_11 = &globals->qw40002690;
	word64 * rsi_12 = &globals->qw40002690;
	while (rbx_11 < rsi_12)
	{
		<anonymous> * rdi_32 = *rbx_11;
		if (rdi_32 != null)
		{
			fn0000000140001BF4();
			word64 rsp_47;
			word64 rdi_50;
			byte SCZO_51;
			byte C_52;
			byte SZO_53;
			byte Z_54;
			word64 rcx_55;
			rdi_32();
		}
		rbx_11 = rbx_11 + 0x01;
	}
}

// 0000000140001BF4: void fn0000000140001BF4()
void fn0000000140001BF4()
{
	word64 rsp_3;
	globals->ptr40002190();
}

// 0000000140001BFC: Register byte fn0000000140001BFC(Register word32 edx, Register word32 ebx, Register ptr64 r13, Stack word64 qwArg08, Stack word64 qwArg10, Stack word64 qwArg18)
byte fn0000000140001BFC(word32 edx, word32 ebx, ptr64 r13, word64 qwArg08, word64 qwArg10, word64 qwArg18)
{
	globals->dw4000301C = 0x02;
	word32 eax_20;
	word32 ebx_21;
	word32 ecx_22;
	word32 edx_23;
	__cpuid(0x00, 0x00, &eax_20, &ebx_21, &ecx_22, &edx_23);
	globals->dw40003018 = 0x01;
	ui32 r8d_100 = (word32) (uint64) globals->dw40003614;
	ui32 eax_65;
	word32 ebx_66;
	word32 ecx_67;
	word32 edx_68;
	__cpuid(0x01, 0x00, &eax_65, &ebx_66, &ecx_67, &edx_68);
	word32 r9d_71 = (word32) (uint64) ecx_67;
	*(r13 - 0x08) = r9d_71;
	word32 r11d_52 = (word32) (uint64) ((word32) (uint64) ((word32) (uint64) ((word32) (uint64) ebx_21 ^ 1752462657) | (word32) ((uint64) ((word32) ((uint64) edx_23) ^ 0x69746E65))) | (word32) ((uint64) (ecx_22 ^ 0x444D4163)));
	int32 edi_58 = (word32) (uint64) eax_20;
	ui32 ecx_75 = (word32) (uint64) eax_65;
	if ((word32) (uint64) ((word32) (uint64) ((word32) (uint64) ((word32) (uint64) edx_23 ^ 0x49656E69) | (word32) ((uint64) ((word32) ((uint64) ecx_22) ^ 1818588270))) | (word32) ((uint64) ((word32) ((uint64) ebx_21) ^ 1970169159))) == 0x00)
	{
		globals->qw40003020 = globals->qw40003020 | ~0x00;
		r8d_100 = (word32) (uint64) (r8d_100 | 0x04);
		globals->dw40003614 = r8d_100;
		word32 eax_210 = (word32) (uint64) (eax_65 & 0x0FFF3FF0);
		if (eax_210 == 0x000106C0 || (eax_210 == 0x00020660 || eax_210 == 0x00020670))
		{
l0000000140001CDE:
			r8d_100 = (word32) (uint64) (r8d_100 | 0x01);
			globals->dw40003614 = r8d_100;
			goto l0000000140001CE9;
		}
		uint64 rax_235 = (uint64) (eax_210 + ~0x0003064F);
		if ((word32) rax_235 <= 0x20 && !__bt(0x00010001, rax_235))
			goto l0000000140001CDE;
	}
l0000000140001CE9:
	if (r11d_52 == 0x00 && (word32) ((uint64) (ecx_75 & 0x0FF00F00)) >= 0x00600F00)
	{
		r8d_100 = (word32) (uint64) (r8d_100 | 0x04);
		globals->dw40003614 = r8d_100;
	}
	*(r13 - 0x1C) = r9d_71;
	if (edi_58 >= 0x07)
	{
		word32 eax_180;
		word32 ebx_181;
		word32 ecx_182;
		word32 edx_183;
		__cpuid(0x07, 0x00, &eax_180, &ebx_181, &ecx_182, &edx_183);
		if (!__bt(ebx_181, 0x09))
			globals->dw40003614 = (word32) (uint64) (r8d_100 | 0x02);
	}
	if (!__bt(r9d_71, 0x14))
	{
		globals->dw40003018 = 0x02;
		globals->dw4000301C = 0x06;
		if (!__bt(r9d_71, 0x1B) && !__bt(r9d_71, 0x1C))
		{
			ui64 edx_eax_148 = __xgetbv(0x00);
			if (((byte) (edx_eax_148 << 0x20 | edx_eax_148) & 0x06) == 0x06)
			{
				ui32 eax_162 = (word32) (uint64) ((word32) (uint64) globals->dw4000301C | 0x08);
				globals->dw40003018 = 0x03;
				globals->dw4000301C = eax_162;
				if ((bLoc20 & 0x20) != 0x00)
				{
					globals->dw40003018 = 0x05;
					globals->dw4000301C = (word32) (uint64) (eax_162 | 0x20);
				}
			}
		}
	}
	return (byte) rbx;
}

// 0000000140001DC4: Register word32 fn0000000140001DC4()
word32 fn0000000140001DC4()
{
	return (word32) (globals->dw40003030 != 0x00);
}

// 0000000140001DD0: void fn0000000140001DD0()
void fn0000000140001DD0()
{
}

// 0000000140001E7C: void fn0000000140001E7C(Register (ptr Eq_1847) rax, Register int64 rdx, Register (ptr Eq_1849) r9)
void fn0000000140001E7C(Eq_1847 * rax, int64 rdx, Eq_1849 * r9)
{
	fn0000000140001E9C(rax, rdx, r9, r9->ptr0038);
}

// 0000000140001E9C: void fn0000000140001E9C(Register (ptr Eq_1847) rax, Register int64 rcx, Register (ptr Eq_1849) rdx, Register (ptr Eq_1855) r8)
void fn0000000140001E9C(Eq_1847 * rax, int64 rcx, Eq_1849 * rdx, Eq_1855 * r8)
{
	word32 r11d_12 = (word32) (uint64) ((word32) (uint64) r8->dw0000 & ~0x07);
	int64 r9_14 = rcx;
	int64 r10_19 = rcx;
	if ((rax->b0000 & 0x04) != 0x00)
		r10_19 = (int64) r8->dw0004 + rcx & (int64) ((word32) ((uint64) (-((word32) ((uint64) rax->dw0008)))));
	word64 rdx_24 = *((word64) (int64) r11d_12 + r10_19);
	struct Eq_1883 * rcx_27 = (uint64) rdx->ptr0010->dw0008 + rdx->qw0008;
	if ((rcx_27->b0003 & 0x0F) != 0x00)
		r9_14 = rcx + (uint64) ((word32) rcx_27->b0003 & ~0x0F);
	ui64 r9_37 = r9_14 ^ rdx_24;
	fn00000001400011B0(r9_37);
}

// 0000000140001F10: void fn0000000140001F10()
void fn0000000140001F10()
{
	word64 rsp_3;
	word64 rax_4;
	rax();
}

// 0000000140001F12: void fn0000000140001F12(Register word64 rcx)
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
}

// 0000000140001F30: void fn0000000140001F30(Register word64 rcx)
void fn0000000140001F30(word64 rcx)
{
}
