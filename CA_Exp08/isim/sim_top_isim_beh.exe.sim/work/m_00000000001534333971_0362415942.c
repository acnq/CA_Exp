/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/00a/CA/CA_Exp/CA_Exp08/data_ram.v";
static const char *ng1 = "data_mem.hex";
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {3, 0};
static unsigned int ng5[] = {0U, 0U};



static void Initial_21_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(21, ng0);

LAB2:    xsi_set_current_line(22, ng0);
    t1 = (t0 + 1644);
    xsi_vlogfile_readmemh(ng1, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void Always_25_1(char *t0)
{
    char t6[8];
    char t17[8];
    char t28[8];
    char t44[8];
    char t52[8];
    char t92[8];
    char t93[8];
    char t100[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    int t76;
    int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t111;
    int t112;
    char *t113;
    unsigned int t114;
    int t115;
    int t116;
    unsigned int t117;
    unsigned int t118;
    int t119;
    int t120;

LAB0:    t1 = (t0 + 2588U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 3360);
    *((int *)t2) = 1;
    t3 = (t0 + 2616);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(26, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB10;

LAB11:    memcpy(t52, t6, 8);

LAB12:    t84 = (t52 + 4);
    t85 = *((unsigned int *)t84);
    t86 = (~(t85));
    t87 = *((unsigned int *)t52);
    t88 = (t87 & t86);
    t89 = (t88 != 0);
    if (t89 > 0)
        goto LAB24;

LAB25:
LAB26:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t18 = (t0 + 1140U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t17 + 4);
    t20 = (t19 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (t21 >> 5);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 5);
    *((unsigned int *)t18) = t24;
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 134217727U);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 & 134217727U);
    t27 = ((char*)((ng2)));
    memset(t28, 0, 8);
    t29 = (t17 + 4);
    t30 = (t27 + 4);
    t31 = *((unsigned int *)t17);
    t32 = *((unsigned int *)t27);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t30);
    t36 = (t34 ^ t35);
    t37 = (t33 | t36);
    t38 = *((unsigned int *)t29);
    t39 = *((unsigned int *)t30);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t37 & t41);
    if (t42 != 0)
        goto LAB16;

LAB13:    if (t40 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t28) = 1;

LAB16:    memset(t44, 0, 8);
    t45 = (t28 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t28);
    t49 = (t48 & t47);
    t50 = (t49 & 1U);
    if (t50 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t45) != 0)
        goto LAB19;

LAB20:    t53 = *((unsigned int *)t6);
    t54 = *((unsigned int *)t44);
    t55 = (t53 & t54);
    *((unsigned int *)t52) = t55;
    t56 = (t6 + 4);
    t57 = (t44 + 4);
    t58 = (t52 + 4);
    t59 = *((unsigned int *)t56);
    t60 = *((unsigned int *)t57);
    t61 = (t59 | t60);
    *((unsigned int *)t58) = t61;
    t62 = *((unsigned int *)t58);
    t63 = (t62 != 0);
    if (t63 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB15:    t43 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t44) = 1;
    goto LAB20;

LAB19:    t51 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB20;

LAB21:    t64 = *((unsigned int *)t52);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t52) = (t64 | t65);
    t66 = (t6 + 4);
    t67 = (t44 + 4);
    t68 = *((unsigned int *)t6);
    t69 = (~(t68));
    t70 = *((unsigned int *)t66);
    t71 = (~(t70));
    t72 = *((unsigned int *)t44);
    t73 = (~(t72));
    t74 = *((unsigned int *)t67);
    t75 = (~(t74));
    t76 = (t69 & t71);
    t77 = (t73 & t75);
    t78 = (~(t76));
    t79 = (~(t77));
    t80 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t80 & t78);
    t81 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t81 & t79);
    t82 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t82 & t78);
    t83 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t83 & t79);
    goto LAB23;

LAB24:    xsi_set_current_line(27, ng0);
    t90 = (t0 + 1232U);
    t91 = *((char **)t90);
    t90 = (t0 + 1644);
    t94 = (t0 + 1644);
    t95 = (t94 + 44U);
    t96 = *((char **)t95);
    t97 = (t0 + 1644);
    t98 = (t97 + 40U);
    t99 = *((char **)t98);
    t101 = (t0 + 1140U);
    t102 = *((char **)t101);
    memset(t100, 0, 8);
    t101 = (t100 + 4);
    t103 = (t102 + 4);
    t104 = *((unsigned int *)t102);
    t105 = (t104 >> 0);
    *((unsigned int *)t100) = t105;
    t106 = *((unsigned int *)t103);
    t107 = (t106 >> 0);
    *((unsigned int *)t101) = t107;
    t108 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t108 & 31U);
    t109 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t109 & 31U);
    xsi_vlog_generic_convert_array_indices(t92, t93, t96, t99, 2, 1, t100, 5, 2);
    t110 = (t92 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (!(t111));
    t113 = (t93 + 4);
    t114 = *((unsigned int *)t113);
    t115 = (!(t114));
    t116 = (t112 && t115);
    if (t116 == 1)
        goto LAB27;

LAB28:    goto LAB26;

LAB27:    t117 = *((unsigned int *)t92);
    t118 = *((unsigned int *)t93);
    t119 = (t117 - t118);
    t120 = (t119 + 1);
    xsi_vlogvar_wait_assign_value(t90, t91, 0, *((unsigned int *)t93), t120, 0LL);
    goto LAB28;

}

static void Always_31_2(char *t0)
{
    char t13[8];
    char t32[8];
    char t42[8];
    char t52[8];
    char t68[8];
    char t76[8];
    char t116[8];
    char t117[8];
    char t124[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    int t100;
    int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t123;
    char *t125;
    char *t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    unsigned int t135;
    int t136;
    char *t137;
    unsigned int t138;
    int t139;
    int t140;
    unsigned int t141;
    unsigned int t142;
    int t143;
    int t144;

LAB0:    t1 = (t0 + 2732U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3368);
    *((int *)t2) = 1;
    t3 = (t0 + 2760);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 772U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(34, ng0);

LAB10:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1828);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1140U);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB14;

LAB11:    if (t18 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t13) = 1;

LAB14:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(42, ng0);

LAB50:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1736);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB17:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1140U);
    t3 = *((char **)t2);
    t2 = (t0 + 1828);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(32, ng0);

LAB9:    xsi_set_current_line(33, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 1736);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 2);
    goto LAB8;

LAB13:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(35, ng0);

LAB18:    xsi_set_current_line(36, ng0);
    t28 = (t0 + 1736);
    t29 = (t28 + 36U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng3)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t30, 2, t31, 32);
    t33 = (t0 + 1736);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 2);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1736);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB22;

LAB19:    if (t18 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t13) = 1;

LAB22:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB23;

LAB24:
LAB25:    goto LAB17;

LAB21:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(37, ng0);

LAB26:    xsi_set_current_line(38, ng0);
    t28 = (t0 + 1048U);
    t29 = *((char **)t28);
    memset(t32, 0, 8);
    t28 = (t29 + 4);
    t34 = *((unsigned int *)t28);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t28) != 0)
        goto LAB29;

LAB30:    t31 = (t32 + 4);
    t39 = *((unsigned int *)t32);
    t40 = *((unsigned int *)t31);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB31;

LAB32:    memcpy(t76, t32, 8);

LAB33:    t108 = (t76 + 4);
    t109 = *((unsigned int *)t108);
    t110 = (~(t109));
    t111 = *((unsigned int *)t76);
    t112 = (t111 & t110);
    t113 = (t112 != 0);
    if (t113 > 0)
        goto LAB45;

LAB46:
LAB47:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1644);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1644);
    t11 = (t5 + 44U);
    t12 = *((char **)t11);
    t21 = (t0 + 1644);
    t22 = (t21 + 40U);
    t28 = *((char **)t22);
    t29 = (t0 + 1140U);
    t30 = *((char **)t29);
    memset(t32, 0, 8);
    t29 = (t32 + 4);
    t31 = (t30 + 4);
    t6 = *((unsigned int *)t30);
    t7 = (t6 >> 0);
    *((unsigned int *)t32) = t7;
    t8 = *((unsigned int *)t31);
    t9 = (t8 >> 0);
    *((unsigned int *)t29) = t9;
    t10 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t10 & 31U);
    t14 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t14 & 31U);
    xsi_vlog_generic_get_array_select_value(t13, 32, t4, t12, t28, 2, 1, t32, 5, 2);
    t33 = (t0 + 1920);
    xsi_vlogvar_assign_value(t33, t13, 0, 0, 32);
    goto LAB25;

LAB27:    *((unsigned int *)t32) = 1;
    goto LAB30;

LAB29:    t30 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB30;

LAB31:    t33 = (t0 + 1140U);
    t43 = *((char **)t33);
    memset(t42, 0, 8);
    t33 = (t42 + 4);
    t44 = (t43 + 4);
    t45 = *((unsigned int *)t43);
    t46 = (t45 >> 5);
    *((unsigned int *)t42) = t46;
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 5);
    *((unsigned int *)t33) = t48;
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t49 & 134217727U);
    t50 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t50 & 134217727U);
    t51 = ((char*)((ng2)));
    memset(t52, 0, 8);
    t53 = (t42 + 4);
    t54 = (t51 + 4);
    t55 = *((unsigned int *)t42);
    t56 = *((unsigned int *)t51);
    t57 = (t55 ^ t56);
    t58 = *((unsigned int *)t53);
    t59 = *((unsigned int *)t54);
    t60 = (t58 ^ t59);
    t61 = (t57 | t60);
    t62 = *((unsigned int *)t53);
    t63 = *((unsigned int *)t54);
    t64 = (t62 | t63);
    t65 = (~(t64));
    t66 = (t61 & t65);
    if (t66 != 0)
        goto LAB37;

LAB34:    if (t64 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t52) = 1;

LAB37:    memset(t68, 0, 8);
    t69 = (t52 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t52);
    t73 = (t72 & t71);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t69) != 0)
        goto LAB40;

LAB41:    t77 = *((unsigned int *)t32);
    t78 = *((unsigned int *)t68);
    t79 = (t77 & t78);
    *((unsigned int *)t76) = t79;
    t80 = (t32 + 4);
    t81 = (t68 + 4);
    t82 = (t76 + 4);
    t83 = *((unsigned int *)t80);
    t84 = *((unsigned int *)t81);
    t85 = (t83 | t84);
    *((unsigned int *)t82) = t85;
    t86 = *((unsigned int *)t82);
    t87 = (t86 != 0);
    if (t87 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB33;

LAB36:    t67 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t68) = 1;
    goto LAB41;

LAB40:    t75 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB41;

LAB42:    t88 = *((unsigned int *)t76);
    t89 = *((unsigned int *)t82);
    *((unsigned int *)t76) = (t88 | t89);
    t90 = (t32 + 4);
    t91 = (t68 + 4);
    t92 = *((unsigned int *)t32);
    t93 = (~(t92));
    t94 = *((unsigned int *)t90);
    t95 = (~(t94));
    t96 = *((unsigned int *)t68);
    t97 = (~(t96));
    t98 = *((unsigned int *)t91);
    t99 = (~(t98));
    t100 = (t93 & t95);
    t101 = (t97 & t99);
    t102 = (~(t100));
    t103 = (~(t101));
    t104 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t104 & t102);
    t105 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t105 & t103);
    t106 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t106 & t102);
    t107 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t107 & t103);
    goto LAB44;

LAB45:    xsi_set_current_line(39, ng0);
    t114 = (t0 + 1232U);
    t115 = *((char **)t114);
    t114 = (t0 + 1644);
    t118 = (t0 + 1644);
    t119 = (t118 + 44U);
    t120 = *((char **)t119);
    t121 = (t0 + 1644);
    t122 = (t121 + 40U);
    t123 = *((char **)t122);
    t125 = (t0 + 1140U);
    t126 = *((char **)t125);
    memset(t124, 0, 8);
    t125 = (t124 + 4);
    t127 = (t126 + 4);
    t128 = *((unsigned int *)t126);
    t129 = (t128 >> 0);
    *((unsigned int *)t124) = t129;
    t130 = *((unsigned int *)t127);
    t131 = (t130 >> 0);
    *((unsigned int *)t125) = t131;
    t132 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t132 & 31U);
    t133 = *((unsigned int *)t125);
    *((unsigned int *)t125) = (t133 & 31U);
    xsi_vlog_generic_convert_array_indices(t116, t117, t120, t123, 2, 1, t124, 5, 2);
    t134 = (t116 + 4);
    t135 = *((unsigned int *)t134);
    t136 = (!(t135));
    t137 = (t117 + 4);
    t138 = *((unsigned int *)t137);
    t139 = (!(t138));
    t140 = (t136 && t139);
    if (t140 == 1)
        goto LAB48;

LAB49:    goto LAB47;

LAB48:    t141 = *((unsigned int *)t116);
    t142 = *((unsigned int *)t117);
    t143 = (t141 - t142);
    t144 = (t143 + 1);
    xsi_vlogvar_assign_value(t114, t115, 0, *((unsigned int *)t117), t144);
    goto LAB49;

}

static void Cont_49_3(char *t0)
{
    char t6[8];
    char t27[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;

LAB0:    t1 = (t0 + 2876U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1736);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t22 = (t0 + 1828);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    t25 = (t0 + 1140U);
    t26 = *((char **)t25);
    memset(t27, 0, 8);
    t25 = (t24 + 4);
    t28 = (t26 + 4);
    t29 = *((unsigned int *)t24);
    t30 = *((unsigned int *)t26);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t25);
    t33 = *((unsigned int *)t28);
    t34 = (t32 ^ t33);
    t35 = (t31 | t34);
    t36 = *((unsigned int *)t25);
    t37 = *((unsigned int *)t28);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB11;

LAB8:    if (t38 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t27) = 1;

LAB11:    t43 = *((unsigned int *)t6);
    t44 = *((unsigned int *)t27);
    t45 = (t43 & t44);
    *((unsigned int *)t42) = t45;
    t46 = (t6 + 4);
    t47 = (t27 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t46);
    t50 = *((unsigned int *)t47);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB12;

LAB13:
LAB14:    t74 = (t0 + 3436);
    t75 = (t74 + 32U);
    t76 = *((char **)t75);
    t77 = (t76 + 40U);
    t78 = *((char **)t77);
    memset(t78, 0, 8);
    t79 = 1U;
    t80 = t79;
    t81 = (t42 + 4);
    t82 = *((unsigned int *)t42);
    t79 = (t79 & t82);
    t83 = *((unsigned int *)t81);
    t80 = (t80 & t83);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t85 | t79);
    t86 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t86 | t80);
    xsi_driver_vfirst_trans(t74, 0, 0);
    t87 = (t0 + 3376);
    *((int *)t87) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB10:    t41 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB11;

LAB12:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t42) = (t54 | t55);
    t56 = (t6 + 4);
    t57 = (t27 + 4);
    t58 = *((unsigned int *)t6);
    t59 = (~(t58));
    t60 = *((unsigned int *)t56);
    t61 = (~(t60));
    t62 = *((unsigned int *)t27);
    t63 = (~(t62));
    t64 = *((unsigned int *)t57);
    t65 = (~(t64));
    t66 = (t59 & t61);
    t67 = (t63 & t65);
    t68 = (~(t66));
    t69 = (~(t67));
    t70 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t70 & t68);
    t71 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t68);
    t73 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t73 & t69);
    goto LAB14;

}

static void Cont_50_4(char *t0)
{
    char t4[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;

LAB0:    t1 = (t0 + 3020U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 864U);
    t3 = *((char **)t2);
    t2 = (t0 + 1324U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;

LAB7:    t12 = (t4 + 4);
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB9;

LAB8:    t20 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t20 & 1U);
    t21 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t21 & 1U);
    t23 = *((unsigned int *)t3);
    t24 = *((unsigned int *)t4);
    t25 = (t23 & t24);
    *((unsigned int *)t22) = t25;
    t26 = (t3 + 4);
    t27 = (t4 + 4);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t26);
    t30 = *((unsigned int *)t27);
    t31 = (t29 | t30);
    *((unsigned int *)t28) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB10;

LAB11:
LAB12:    t54 = (t0 + 3472);
    t55 = (t54 + 32U);
    t56 = *((char **)t55);
    t57 = (t56 + 40U);
    t58 = *((char **)t57);
    memset(t58, 0, 8);
    t59 = 1U;
    t60 = t59;
    t61 = (t22 + 4);
    t62 = *((unsigned int *)t22);
    t59 = (t59 & t62);
    t63 = *((unsigned int *)t61);
    t60 = (t60 & t63);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t65 | t59);
    t66 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t66 | t60);
    xsi_driver_vfirst_trans(t54, 0, 0);
    t67 = (t0 + 3384);
    *((int *)t67) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB9:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t13);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t12) = (t18 | t19);
    goto LAB8;

LAB10:    t34 = *((unsigned int *)t22);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t22) = (t34 | t35);
    t36 = (t3 + 4);
    t37 = (t4 + 4);
    t38 = *((unsigned int *)t3);
    t39 = (~(t38));
    t40 = *((unsigned int *)t36);
    t41 = (~(t40));
    t42 = *((unsigned int *)t4);
    t43 = (~(t42));
    t44 = *((unsigned int *)t37);
    t45 = (~(t44));
    t46 = (t39 & t41);
    t47 = (t43 & t45);
    t48 = (~(t46));
    t49 = (~(t47));
    t50 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t50 & t48);
    t51 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t51 & t49);
    t52 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t52 & t48);
    t53 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t53 & t49);
    goto LAB12;

}

static void Always_52_5(char *t0)
{
    char t4[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 3164U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3392);
    *((int *)t2) = 1;
    t3 = (t0 + 3192);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t5 = (t0 + 1140U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 5);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 5);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 134217727U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 134217727U);
    t14 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB7;

LAB6:    if (t27 != 0)
        goto LAB8;

LAB9:    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1920);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 1552);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB12:    goto LAB2;

LAB7:    *((unsigned int *)t15) = 1;
    goto LAB9;

LAB8:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(54, ng0);
    t37 = ((char*)((ng5)));
    t38 = (t0 + 1552);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 32);
    goto LAB12;

}


extern void work_m_00000000001534333971_0362415942_init()
{
	static char *pe[] = {(void *)Initial_21_0,(void *)Always_25_1,(void *)Always_31_2,(void *)Cont_49_3,(void *)Cont_50_4,(void *)Always_52_5};
	xsi_register_didat("work_m_00000000001534333971_0362415942", "isim/sim_top_isim_beh.exe.sim/work/m_00000000001534333971_0362415942.didat");
	xsi_register_executes(pe);
}
