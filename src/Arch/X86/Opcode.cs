#region License
/* 
 * Copyright (C) 1999-2017 John K�ll�n.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; see the file COPYING.  If not, write to
 * the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 */
#endregion

namespace Reko.Arch.X86
{
    public enum Opcode : ushort
    {
        illegal,

        aaa,
        aad,
        aam,
        aas,
        adc,
        add,
        and,
        arpl,
        bound,
        bsf,
        bsr,
        bswap,
        bt,
        btc,
        btr,
        bts,
        call,
        cbw,
        clc,
        cld,
        cli,
        cmc,
        cmova,
        cmovbe,
        cmovc,
        cmovg,
        cmovge,
        cmovl,
        cmovle,
        cmovnc,
        cmovno,
        cmovns,
        cmovnz,
        cmovo,
        cmovpe,
        cmovpo,
        cmovs,
        cmovz,
        cmp,
        cmps,
        cmpsb,
        cmpxchg,
        cpuid,
        cvttpd2si,
        cvttps2pi,
        cvttsd2si,
        cvttss2si,
        cwd,
        daa,
        das,
        dec,
        div,
        enter,

        f2xm1,
        fabs,
        fadd,
        faddp,
        fbld,
        fbstp,
        fchs,
        fclex,
        fcom,
        fcomp,
        fcompp,
        fcos,
        fdecstp,
        fdiv,
        fdivp,
        fdivr,
        fdivrp,
        ffree,
        fiadd,
        ficom,
        ficomp,
        fidiv,
        fidivr,
        fild,
        fildenv,
        fildcw,
        fimul,
        fincstp,
        fist,
        fistenv,
        fistcw,
        fistp,
        fisub,
        fisubr,
        fld,
        fld1,
        fldcw,
        fldenv,
        fldl2t,
        fldl2e,
        fldlg2,
        fldln2,
        fldpi,
        fldz,
        fnop,
        fmul,
        fmulp,
        fpatan,
        fptan,
        fprem1,
        fprem,
        frndint,
        frstor,
        fsave,
        fscale,
        fsin,
        fsincos,
        fsqrt,
        fst,
        fstcw,
        fstenv,
        fstp,
        fstsw,
        fsub,
        fsubp,
        fsubr,
        fsubrp,
        ftst,
        fucomi,
        fucomip,
        fucompp,
        fxam,
        fxch,
        fxtract,
        fyl2x,
        fyl2xp1,

        hlt,
        idiv,
        imul,
        @in,
        ins,
        insb,
        inc,
        @int,
        into,
        iret,
        ja,
        jbe,
        jc,
        jcxz,
        jg,
        jge,
        jl,
        jle,
        jmp,
        jnc,
        jno,
        jns,
        jnz,
        jo,
        jpe,
        jpo,
        js,
        jz,
        lahf,
        ldmxcsr,
        lds,
        lea,
        leave,
        les,
        lfs,
        lgs,
        lss,
        @lock,
        lods,
        lodsb,
        loop,
        loope,
        loopne,
        mov,
        movaps,
        movd,
        movdqa,
        movhpd, 
        movlhps,
        movq,
        movs,
        movsb,
        movshdup,
        movsd,
        movss,
        movsx,
        movupd,
        movups,
        movzx,
        mul,
        neg,
        nop,
        not,
        or,
        @out,
        outs,
        outsb,
        palignr,
        pcmpeqb,
        pcmpistri,
        pop,
        popa,
        popf,
        pshufd,
        pshufhw,
        pshuflw,
        pshufw,
        punpcklbw,
        punpcklwd,
        push,
        pusha,
        pushf,
        pxor,
        rcl,
        rcr,
        rdtsc,
        rep,
        repne,
        ret,
        retf,
        rol,
        ror,
        sahf,
        sar,
        sbb,
        scas,
        scasb,
        seta,
        setbe,
        setc,
        setg,
        setge,
        setl,
        setle,
        setnc,
        setno,
        setns,
        setnz,
        seto,
        setpe,
        setpo,
        sets,
        setz,
        shl,
        shld,
        shr,
        shrd,
        stc,
        std,
        sti,
        stmxcsr,
        stos,
        stosb,
        sub,
        syscall,
        sysret,
        test,
        wait,
        xadd,
        xchg,
        xgetbv,
        xlat,
        xor,

        // Borland implemented an x87 emulator, and introduced these
        // pseudo-instructions.
        BOR_exp,
        BOR_ln,
    }
}
