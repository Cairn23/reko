// test.c
// Generated by decompiling test
// using Reko decompiler version 0.8.1.0.

#include "test.h"

// 00000588: void _init()
void _init()
{
	if (__gmon_start__ == 0x00)
	{
		word32 sp_n;
		word32 r28_n;
		word32 r25_n;
		word32 ra_n;
		word32 r2_n;
		(*(ptr32 *) 0x00020A4C + 2004)();
		word32 sp_n;
		word32 r28_n;
		word32 r25_n;
		word32 ra_n;
		word32 r2_n;
		(*(ptr32 *) 0x00020A4C + 0x0970)();
	}
	else
	{
		word32 sp_n;
		word32 r28_n;
		word32 r25_n;
		word32 ra_n;
		word32 r2_n;
		__gmon_start__();
	}
}

// 00000610: void __start(Stack word32 dwArg00)
void __start(word32 dwArg00)
{
	<anonymous> * r25_n = *(<anonymous> **) 0x00020A24;
	word32 sp_n;
	word32 ra_n;
	word32 r0_n;
	word32 r28_n;
	word32 r4_n;
	word32 r5_n;
	word32 r6_n;
	word32 r1_n;
	word32 r7_n;
	word32 r8_n;
	word32 r2_n;
	word32 r25_n;
	r25_n();
	while (true)
		;
}

// 00000670: void deregister_tm_clones()
void deregister_tm_clones()
{
	word32 r2_n = globals->dw10AA4;
	if (r2_n == globals->ptr10AA8 + 2692)
		return;
	<anonymous> * r25_n = globals->ptr10AE4;
	if (r25_n == null)
		return;
	word32 sp_n;
	word32 r28_n;
	word32 r25_n;
	word32 r4_n;
	word32 r2_n;
	word32 ra_n;
	r25_n();
}

// 000006A8: void register_tm_clones()
void register_tm_clones()
{
	int32 r5_n = globals->dw10AA4 - (globals->ptr10AA8 + 2692);
	Eq_n r2_n = r5_n >> 0x02 >> 0x1F;
	if (r2_n + (r5_n >> 0x02) >> 0x01 == 0x00)
		return;
	<anonymous> * r25_n = globals->ptr10AD4;
	if (r25_n == null)
		return;
	word32 sp_n;
	word32 r28_n;
	word32 r25_n;
	word32 r4_n;
	word32 r5_n;
	word32 r2_n;
	r25_n();
}

// 000006F4: void __do_global_dtors_aux()
void __do_global_dtors_aux()
{
	struct Eq_n * r19_n = globals->ptr10AA8;
	if ((word32) r19_n[2800] == 0x00)
	{
		if (__cxa_finalize != 0x00)
		{
			word32 sp_n;
			word32 r28_n;
			word32 r25_n;
			word32 ra_n;
			word32 r18_n;
			word32 r17_n;
			word32 r16_n;
			word32 r2_n;
			word32 r4_n;
			word32 r3_n;
			__cxa_finalize();
		}
		struct Eq_n * r17_n = globals->ptr10AA8;
		struct Eq_n * r2_n = globals->ptr10AA8;
		Eq_n r2_n = r17_n[0x0AF4];
		Eq_n r16_n = (globals->dw10AB0 - (r2_n + 2664) >> 0x02) + -0x01;
		word32 r18_n = r2_n + 2664;
		if ((word32) (r2_n < r16_n) != 0x00)
		{
			do
			{
				uint32 r2_n = (word32) r2_n.u1 + 0x01;
				r17_n[0x0AF4] = (struct Eq_n) r2_n;
				<anonymous> ** r2_n = r18_n + (r2_n << 0x02);
				<anonymous> * r25_n = *r2_n;
				word32 sp_n;
				word32 r28_n;
				word32 r25_n;
				word32 ra_n;
				Eq_n r16_n;
				word32 r2_n;
				word32 r4_n;
				word32 r3_n;
				r25_n();
				r2_n = r17_n[0x0AF4];
			} while ((word32) (r2_n < r16_n) != 0x00);
		}
		deregister_tm_clones();
		r19_n[2800] = (struct Eq_n) 0x01;
	}
}

// 000007D4: void frame_dummy()
void frame_dummy()
{
	register_tm_clones();
}

// 000007F0: void main(Stack word32 dwArg00, Stack word32 dwArg04)
void main(word32 dwArg00, word32 dwArg04)
{
	memset(r4_n, r5_n, r6_n);
	calloc(r4_n, r5_n);
	r2_n->t0000 = dwLoc14;
	r2_n->b0004 = (byte) (word32) bLoc10;
	r2_n->t0000.u0 = 0x0C;
	r2_n->dw0001 = 0x00;
	struct Eq_n * r2_n = r2_n;
	Eq_n r3_n = dwLoc14;
	struct Eq_n * r2_n = r2_n;
}

// 000008C0: void __libc_csu_init()
void __libc_csu_init()
{
	_init();
	word32 * r16_n = globals->ptr10ABC;
	if (globals->ptr10ABC - r16_n >> 0x02 != 0x00)
	{
		while (true)
		{
			<anonymous> * r25_n = *r16_n;
			word32 sp_n;
			word32 r28_n;
			word32 r25_n;
			word32 r21_n;
			word32 r6_n;
			word32 r20_n;
			word32 r5_n;
			word32 r19_n;
			word32 r4_n;
			word32 r18_n;
			word32 r16_n;
			word32 ra_n;
			word32 r17_n;
			r25_n();
			if (r18_n == r17_n)
				break;
			r16_n = r16_n + 0x04;
		}
	}
}

// 00000964: void __libc_csu_fini()
void __libc_csu_fini()
{
}

// 00000970: void __do_global_ctors_aux()
void __do_global_ctors_aux()
{
	struct Eq_n * r3_n = globals->ptr10AA8;
	<anonymous> * r25_n = r3_n[2656];
	if (r25_n != (<anonymous> *) -0x01)
	{
		do
		{
			word32 sp_n;
			word32 r28_n;
			word32 r25_n;
			word32 r3_n;
			word32 r2_n;
			word32 ra_n;
			word32 r17_n;
			int32 * r16_n;
			r25_n();
		} while (*r16_n != -0x01);
	}
}

// 000009D0: void __libc_start_main(Register ptr32 r28)
void __libc_start_main(ptr32 r28)
{
	<anonymous> * r25_n = *(r28 - 0x7FF0);
	word32 sp_n;
	word32 r28_n;
	word32 r25_n;
	word32 ra_n;
	word32 r15_n;
	word32 r24_n;
	r25_n();
}

// 000009E0: void memset(Register ptr32 r28)
void memset(ptr32 r28)
{
	<anonymous> * r25_n = *(r28 - 0x7FF0);
	word32 sp_n;
	word32 r28_n;
	word32 r25_n;
	word32 ra_n;
	word32 r15_n;
	word32 r24_n;
	r25_n();
}

// 000009F0: void calloc(Register ptr32 r28)
void calloc(ptr32 r28)
{
	<anonymous> * r25_n = *(r28 - 0x7FF0);
	word32 sp_n;
	word32 r28_n;
	word32 r25_n;
	word32 ra_n;
	word32 r15_n;
	word32 r24_n;
	r25_n();
	_fini();
}

// 00000A10: void _fini()
void _fini()
{
	word32 sp_n;
	word32 r28_n;
	word32 r25_n;
	word32 ra_n;
	(*(ptr32 *) 0x00020A4C + 0x06F4)();
}

