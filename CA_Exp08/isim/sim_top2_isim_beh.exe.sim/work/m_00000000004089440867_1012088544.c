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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/AAuniversityTasks/CSComputerArch/TRUECourse/chap8Exp/work/cache.v";
static int ng1[] = {0, 0, 0, 0};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};



static void Initial_31_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(31, ng0);

LAB2:    xsi_set_current_line(32, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4296);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 64);
    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4456);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 64);

LAB1:    return;
}

static void Always_35_1(char *t0)
{
    char t7[8];
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;

LAB0:    t1 = (t0 + 5944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 6760);
    *((int *)t2) = 1;
    t3 = (t0 + 5976);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 4296);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 4296);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t12 = (t0 + 2456U);
    t13 = *((char **)t12);
    memset(t11, 0, 8);
    t12 = (t11 + 4);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t13);
    t16 = (t15 >> 4);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 4);
    *((unsigned int *)t12) = t18;
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 & 63U);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 63U);
    xsi_vlog_generic_get_index_select_value(t7, 1, t6, t10, 2, t11, 6, 2);
    t21 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t21, t7, 0, 0, 1, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4456);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 2456U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t9 = (t11 + 4);
    t12 = (t10 + 4);
    t15 = *((unsigned int *)t10);
    t16 = (t15 >> 4);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t12);
    t18 = (t17 >> 4);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 & 63U);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t20 & 63U);
    xsi_vlog_generic_get_index_select_value(t7, 1, t4, t8, 2, t11, 6, 2);
    t13 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t13, t7, 0, 0, 1, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4616);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4616);
    t6 = (t5 + 72U);
    t8 = *((char **)t6);
    t9 = (t0 + 4616);
    t10 = (t9 + 64U);
    t12 = *((char **)t10);
    t13 = (t0 + 2456U);
    t14 = *((char **)t13);
    memset(t11, 0, 8);
    t13 = (t11 + 4);
    t21 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (t15 >> 4);
    *((unsigned int *)t11) = t16;
    t17 = *((unsigned int *)t21);
    t18 = (t17 >> 4);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 & 63U);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 63U);
    xsi_vlog_generic_get_array_select_value(t7, 22, t4, t8, t12, 2, 1, t11, 6, 2);
    t22 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t22, t7, 0, 0, 22, 0LL);
    goto LAB2;

}

static void Cont_41_2(char *t0)
{
    char t3[8];
    char t15[8];
    char t22[8];
    char t32[8];
    char t48[8];
    char t63[8];
    char t71[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t62;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    int t95;
    int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;

LAB0:    t1 = (t0 + 6192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2456U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 10);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 10);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 4194303U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 4194303U);
    t12 = (t0 + 4616);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t16 = (t0 + 4616);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 4616);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t23 = (t0 + 2456U);
    t24 = *((char **)t23);
    memset(t22, 0, 8);
    t23 = (t22 + 4);
    t25 = (t24 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (t26 >> 4);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t25);
    t29 = (t28 >> 4);
    *((unsigned int *)t23) = t29;
    t30 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t30 & 63U);
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t31 & 63U);
    xsi_vlog_generic_get_array_select_value(t15, 22, t14, t18, t21, 2, 1, t22, 6, 2);
    memset(t32, 0, 8);
    t33 = (t3 + 4);
    t34 = (t15 + 4);
    t35 = *((unsigned int *)t3);
    t36 = *((unsigned int *)t15);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t33);
    t39 = *((unsigned int *)t34);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t34);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB7;

LAB4:    if (t44 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t32) = 1;

LAB7:    memset(t48, 0, 8);
    t49 = (t32 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (~(t50));
    t52 = *((unsigned int *)t32);
    t53 = (t52 & t51);
    t54 = (t53 & 1U);
    if (t54 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t49) != 0)
        goto LAB10;

LAB11:    t56 = (t48 + 4);
    t57 = *((unsigned int *)t48);
    t58 = *((unsigned int *)t56);
    t59 = (t57 || t58);
    if (t59 > 0)
        goto LAB12;

LAB13:    memcpy(t71, t48, 8);

LAB14:    t103 = (t0 + 6872);
    t104 = (t103 + 56U);
    t105 = *((char **)t104);
    t106 = (t105 + 56U);
    t107 = *((char **)t106);
    memset(t107, 0, 8);
    t108 = 1U;
    t109 = t108;
    t110 = (t71 + 4);
    t111 = *((unsigned int *)t71);
    t108 = (t108 & t111);
    t112 = *((unsigned int *)t110);
    t109 = (t109 & t112);
    t113 = (t107 + 4);
    t114 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t114 | t108);
    t115 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t115 | t109);
    xsi_driver_vfirst_trans(t103, 0, 0);
    t116 = (t0 + 6776);
    *((int *)t116) = 1;

LAB1:    return;
LAB6:    t47 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t48) = 1;
    goto LAB11;

LAB10:    t55 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB11;

LAB12:    t60 = (t0 + 3816);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    memset(t63, 0, 8);
    t64 = (t62 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t62);
    t68 = (t67 & t66);
    t69 = (t68 & 1U);
    if (t69 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t64) != 0)
        goto LAB17;

LAB18:    t72 = *((unsigned int *)t48);
    t73 = *((unsigned int *)t63);
    t74 = (t72 & t73);
    *((unsigned int *)t71) = t74;
    t75 = (t48 + 4);
    t76 = (t63 + 4);
    t77 = (t71 + 4);
    t78 = *((unsigned int *)t75);
    t79 = *((unsigned int *)t76);
    t80 = (t78 | t79);
    *((unsigned int *)t77) = t80;
    t81 = *((unsigned int *)t77);
    t82 = (t81 != 0);
    if (t82 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB14;

LAB15:    *((unsigned int *)t63) = 1;
    goto LAB18;

LAB17:    t70 = (t63 + 4);
    *((unsigned int *)t63) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB18;

LAB19:    t83 = *((unsigned int *)t71);
    t84 = *((unsigned int *)t77);
    *((unsigned int *)t71) = (t83 | t84);
    t85 = (t48 + 4);
    t86 = (t63 + 4);
    t87 = *((unsigned int *)t48);
    t88 = (~(t87));
    t89 = *((unsigned int *)t85);
    t90 = (~(t89));
    t91 = *((unsigned int *)t63);
    t92 = (~(t91));
    t93 = *((unsigned int *)t86);
    t94 = (~(t93));
    t95 = (t88 & t90);
    t96 = (t92 & t94);
    t97 = (~(t95));
    t98 = (~(t96));
    t99 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t99 & t97);
    t100 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t100 & t98);
    t101 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t101 & t97);
    t102 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t102 & t98);
    goto LAB21;

}

static void Always_43_3(char *t0)
{
    char t7[8];
    char t14[8];
    char t36[8];
    char t42[8];
    char t70[8];
    char t78[8];
    char t114[8];
    char t115[8];
    char t122[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t121;
    char *t123;
    char *t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    unsigned int t133;
    int t134;
    char *t135;
    unsigned int t136;
    int t137;
    int t138;
    unsigned int t139;
    unsigned int t140;
    int t141;
    int t142;

LAB0:    t1 = (t0 + 6440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 6792);
    *((int *)t2) = 1;
    t3 = (t0 + 6472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 4776);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 4776);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 4776);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t15 = (t0 + 2456U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t15 = (t14 + 4);
    t17 = (t16 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (t18 >> 2);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 2);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 255U);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 255U);
    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t10, t13, 2, 1, t14, 8, 2);
    t24 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t24, t7, 0, 0, 32, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2296U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t18 = *((unsigned int *)t2);
    t19 = (~(t18));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(48, ng0);

LAB10:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2616U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t18 = *((unsigned int *)t2);
    t19 = (~(t18));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t2) != 0)
        goto LAB13;

LAB14:    t5 = (t7 + 4);
    t23 = *((unsigned int *)t7);
    t25 = (!(t23));
    t26 = *((unsigned int *)t5);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB15;

LAB16:    memcpy(t78, t7, 8);

LAB17:    t106 = (t78 + 4);
    t107 = *((unsigned int *)t106);
    t108 = (~(t107));
    t109 = *((unsigned int *)t78);
    t110 = (t109 & t108);
    t111 = (t110 != 0);
    if (t111 > 0)
        goto LAB39;

LAB40:
LAB41:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2936U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t18 = *((unsigned int *)t2);
    t19 = (~(t18));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2616U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t18 = *((unsigned int *)t2);
    t19 = (~(t18));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2776U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t18 = *((unsigned int *)t2);
    t19 = (~(t18));
    t20 = *((unsigned int *)t3);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t2) != 0)
        goto LAB65;

LAB66:    t5 = (t7 + 4);
    t23 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t5);
    t26 = (t23 || t25);
    if (t26 > 0)
        goto LAB67;

LAB68:    memcpy(t36, t7, 8);

LAB69:    t16 = (t36 + 4);
    t59 = *((unsigned int *)t16);
    t60 = (~(t59));
    t61 = *((unsigned int *)t36);
    t64 = (t61 & t60);
    t65 = (t64 != 0);
    if (t65 > 0)
        goto LAB77;

LAB78:
LAB79:
LAB55:
LAB47:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(45, ng0);

LAB9:    xsi_set_current_line(46, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 64, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 64, 0LL);
    goto LAB8;

LAB11:    *((unsigned int *)t7) = 1;
    goto LAB14;

LAB13:    t4 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB14;

LAB15:    t6 = (t0 + 2776U);
    t8 = *((char **)t6);
    memset(t14, 0, 8);
    t6 = (t8 + 4);
    t28 = *((unsigned int *)t6);
    t29 = (~(t28));
    t30 = *((unsigned int *)t8);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t6) != 0)
        goto LAB20;

LAB21:    t10 = (t14 + 4);
    t33 = *((unsigned int *)t14);
    t34 = *((unsigned int *)t10);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB22;

LAB23:    memcpy(t42, t14, 8);

LAB24:    memset(t70, 0, 8);
    t71 = (t42 + 4);
    t72 = *((unsigned int *)t71);
    t73 = (~(t72));
    t74 = *((unsigned int *)t42);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t71) != 0)
        goto LAB34;

LAB35:    t79 = *((unsigned int *)t7);
    t80 = *((unsigned int *)t70);
    t81 = (t79 | t80);
    *((unsigned int *)t78) = t81;
    t82 = (t7 + 4);
    t83 = (t70 + 4);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t82);
    t86 = *((unsigned int *)t83);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 != 0);
    if (t89 == 1)
        goto LAB36;

LAB37:
LAB38:    goto LAB17;

LAB18:    *((unsigned int *)t14) = 1;
    goto LAB21;

LAB20:    t9 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB21;

LAB22:    t11 = (t0 + 3256U);
    t12 = *((char **)t11);
    memset(t36, 0, 8);
    t11 = (t12 + 4);
    t37 = *((unsigned int *)t11);
    t38 = (~(t37));
    t39 = *((unsigned int *)t12);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t11) != 0)
        goto LAB27;

LAB28:    t43 = *((unsigned int *)t14);
    t44 = *((unsigned int *)t36);
    t45 = (t43 & t44);
    *((unsigned int *)t42) = t45;
    t15 = (t14 + 4);
    t16 = (t36 + 4);
    t17 = (t42 + 4);
    t46 = *((unsigned int *)t15);
    t47 = *((unsigned int *)t16);
    t48 = (t46 | t47);
    *((unsigned int *)t17) = t48;
    t49 = *((unsigned int *)t17);
    t50 = (t49 != 0);
    if (t50 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB24;

LAB25:    *((unsigned int *)t36) = 1;
    goto LAB28;

LAB27:    t13 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB28;

LAB29:    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t17);
    *((unsigned int *)t42) = (t51 | t52);
    t24 = (t14 + 4);
    t53 = (t36 + 4);
    t54 = *((unsigned int *)t14);
    t55 = (~(t54));
    t56 = *((unsigned int *)t24);
    t57 = (~(t56));
    t58 = *((unsigned int *)t36);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t66 & t64);
    t67 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t67 & t65);
    t68 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t68 & t64);
    t69 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t69 & t65);
    goto LAB31;

LAB32:    *((unsigned int *)t70) = 1;
    goto LAB35;

LAB34:    t77 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB35;

LAB36:    t90 = *((unsigned int *)t78);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t78) = (t90 | t91);
    t92 = (t7 + 4);
    t93 = (t70 + 4);
    t94 = *((unsigned int *)t92);
    t95 = (~(t94));
    t96 = *((unsigned int *)t7);
    t97 = (t96 & t95);
    t98 = *((unsigned int *)t93);
    t99 = (~(t98));
    t100 = *((unsigned int *)t70);
    t101 = (t100 & t99);
    t102 = (~(t97));
    t103 = (~(t101));
    t104 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t104 & t102);
    t105 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t105 & t103);
    goto LAB38;

LAB39:    xsi_set_current_line(49, ng0);

LAB42:    xsi_set_current_line(50, ng0);
    t112 = (t0 + 3096U);
    t113 = *((char **)t112);
    t112 = (t0 + 4776);
    t116 = (t0 + 4776);
    t117 = (t116 + 72U);
    t118 = *((char **)t117);
    t119 = (t0 + 4776);
    t120 = (t119 + 64U);
    t121 = *((char **)t120);
    t123 = (t0 + 2456U);
    t124 = *((char **)t123);
    memset(t122, 0, 8);
    t123 = (t122 + 4);
    t125 = (t124 + 4);
    t126 = *((unsigned int *)t124);
    t127 = (t126 >> 2);
    *((unsigned int *)t122) = t127;
    t128 = *((unsigned int *)t125);
    t129 = (t128 >> 2);
    *((unsigned int *)t123) = t129;
    t130 = *((unsigned int *)t122);
    *((unsigned int *)t122) = (t130 & 255U);
    t131 = *((unsigned int *)t123);
    *((unsigned int *)t123) = (t131 & 255U);
    xsi_vlog_generic_convert_array_indices(t114, t115, t118, t121, 2, 1, t122, 8, 2);
    t132 = (t114 + 4);
    t133 = *((unsigned int *)t132);
    t134 = (!(t133));
    t135 = (t115 + 4);
    t136 = *((unsigned int *)t135);
    t137 = (!(t136));
    t138 = (t134 && t137);
    if (t138 == 1)
        goto LAB43;

LAB44:    goto LAB41;

LAB43:    t139 = *((unsigned int *)t114);
    t140 = *((unsigned int *)t115);
    t141 = (t139 - t140);
    t142 = (t141 + 1);
    xsi_vlogvar_wait_assign_value(t112, t113, 0, *((unsigned int *)t115), t142, 0LL);
    goto LAB44;

LAB45:    xsi_set_current_line(52, ng0);

LAB48:    xsi_set_current_line(53, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 4296);
    t6 = (t0 + 4296);
    t8 = (t6 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2456U);
    t11 = *((char **)t10);
    memset(t14, 0, 8);
    t10 = (t14 + 4);
    t12 = (t11 + 4);
    t23 = *((unsigned int *)t11);
    t25 = (t23 >> 4);
    *((unsigned int *)t14) = t25;
    t26 = *((unsigned int *)t12);
    t27 = (t26 >> 4);
    *((unsigned int *)t10) = t27;
    t28 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t28 & 63U);
    t29 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t29 & 63U);
    xsi_vlog_generic_convert_bit_index(t7, t9, 2, t14, 6, 2);
    t13 = (t7 + 4);
    t30 = *((unsigned int *)t13);
    t62 = (!(t30));
    if (t62 == 1)
        goto LAB49;

LAB50:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4456);
    t4 = (t0 + 4456);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t8 = (t0 + 2456U);
    t9 = *((char **)t8);
    memset(t14, 0, 8);
    t8 = (t14 + 4);
    t10 = (t9 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (t18 >> 4);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t10);
    t21 = (t20 >> 4);
    *((unsigned int *)t8) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 63U);
    t23 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t23 & 63U);
    xsi_vlog_generic_convert_bit_index(t7, t6, 2, t14, 6, 2);
    t11 = (t7 + 4);
    t25 = *((unsigned int *)t11);
    t62 = (!(t25));
    if (t62 == 1)
        goto LAB51;

LAB52:    goto LAB47;

LAB49:    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t7), 1, 0LL);
    goto LAB50;

LAB51:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t7), 1, 0LL);
    goto LAB52;

LAB53:    xsi_set_current_line(55, ng0);

LAB56:    xsi_set_current_line(56, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t0 + 4296);
    t6 = (t0 + 4296);
    t8 = (t6 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 2456U);
    t11 = *((char **)t10);
    memset(t14, 0, 8);
    t10 = (t14 + 4);
    t12 = (t11 + 4);
    t23 = *((unsigned int *)t11);
    t25 = (t23 >> 4);
    *((unsigned int *)t14) = t25;
    t26 = *((unsigned int *)t12);
    t27 = (t26 >> 4);
    *((unsigned int *)t10) = t27;
    t28 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t28 & 63U);
    t29 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t29 & 63U);
    xsi_vlog_generic_convert_bit_index(t7, t9, 2, t14, 6, 2);
    t13 = (t7 + 4);
    t30 = *((unsigned int *)t13);
    t62 = (!(t30));
    if (t62 == 1)
        goto LAB57;

LAB58:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4456);
    t4 = (t0 + 4456);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t8 = (t0 + 2456U);
    t9 = *((char **)t8);
    memset(t14, 0, 8);
    t8 = (t14 + 4);
    t10 = (t9 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (t18 >> 4);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t10);
    t21 = (t20 >> 4);
    *((unsigned int *)t8) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 63U);
    t23 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t23 & 63U);
    xsi_vlog_generic_convert_bit_index(t7, t6, 2, t14, 6, 2);
    t11 = (t7 + 4);
    t25 = *((unsigned int *)t11);
    t62 = (!(t25));
    if (t62 == 1)
        goto LAB59;

LAB60:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2456U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t4 = (t3 + 4);
    t18 = *((unsigned int *)t3);
    t19 = (t18 >> 10);
    *((unsigned int *)t7) = t19;
    t20 = *((unsigned int *)t4);
    t21 = (t20 >> 10);
    *((unsigned int *)t2) = t21;
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t22 & 4194303U);
    t23 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t23 & 4194303U);
    t5 = (t0 + 4616);
    t6 = (t0 + 4616);
    t8 = (t6 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 4616);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2456U);
    t15 = *((char **)t13);
    memset(t42, 0, 8);
    t13 = (t42 + 4);
    t16 = (t15 + 4);
    t25 = *((unsigned int *)t15);
    t26 = (t25 >> 4);
    *((unsigned int *)t42) = t26;
    t27 = *((unsigned int *)t16);
    t28 = (t27 >> 4);
    *((unsigned int *)t13) = t28;
    t29 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t29 & 63U);
    t30 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t30 & 63U);
    xsi_vlog_generic_convert_array_indices(t14, t36, t9, t12, 2, 1, t42, 6, 2);
    t17 = (t14 + 4);
    t31 = *((unsigned int *)t17);
    t62 = (!(t31));
    t24 = (t36 + 4);
    t32 = *((unsigned int *)t24);
    t63 = (!(t32));
    t97 = (t62 && t63);
    if (t97 == 1)
        goto LAB61;

LAB62:    goto LAB55;

LAB57:    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t7), 1, 0LL);
    goto LAB58;

LAB59:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t7), 1, 0LL);
    goto LAB60;

LAB61:    t33 = *((unsigned int *)t14);
    t34 = *((unsigned int *)t36);
    t101 = (t33 - t34);
    t134 = (t101 + 1);
    xsi_vlogvar_wait_assign_value(t5, t7, 0, *((unsigned int *)t36), t134, 0LL);
    goto LAB62;

LAB63:    *((unsigned int *)t7) = 1;
    goto LAB66;

LAB65:    t4 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB66;

LAB67:    t6 = (t0 + 3256U);
    t8 = *((char **)t6);
    memset(t14, 0, 8);
    t6 = (t8 + 4);
    t27 = *((unsigned int *)t6);
    t28 = (~(t27));
    t29 = *((unsigned int *)t8);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t6) != 0)
        goto LAB72;

LAB73:    t32 = *((unsigned int *)t7);
    t33 = *((unsigned int *)t14);
    t34 = (t32 & t33);
    *((unsigned int *)t36) = t34;
    t10 = (t7 + 4);
    t11 = (t14 + 4);
    t12 = (t36 + 4);
    t35 = *((unsigned int *)t10);
    t37 = *((unsigned int *)t11);
    t38 = (t35 | t37);
    *((unsigned int *)t12) = t38;
    t39 = *((unsigned int *)t12);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB74;

LAB75:
LAB76:    goto LAB69;

LAB70:    *((unsigned int *)t14) = 1;
    goto LAB73;

LAB72:    t9 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB73;

LAB74:    t41 = *((unsigned int *)t36);
    t43 = *((unsigned int *)t12);
    *((unsigned int *)t36) = (t41 | t43);
    t13 = (t7 + 4);
    t15 = (t14 + 4);
    t44 = *((unsigned int *)t7);
    t45 = (~(t44));
    t46 = *((unsigned int *)t13);
    t47 = (~(t46));
    t48 = *((unsigned int *)t14);
    t49 = (~(t48));
    t50 = *((unsigned int *)t15);
    t51 = (~(t50));
    t62 = (t45 & t47);
    t63 = (t49 & t51);
    t52 = (~(t62));
    t54 = (~(t63));
    t55 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t55 & t52);
    t56 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t56 & t54);
    t57 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t57 & t52);
    t58 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t58 & t54);
    goto LAB76;

LAB77:    xsi_set_current_line(59, ng0);

LAB80:    xsi_set_current_line(60, ng0);
    t17 = ((char*)((ng3)));
    t24 = (t0 + 4456);
    t53 = (t0 + 4456);
    t71 = (t53 + 72U);
    t77 = *((char **)t71);
    t82 = (t0 + 2456U);
    t83 = *((char **)t82);
    memset(t70, 0, 8);
    t82 = (t70 + 4);
    t84 = (t83 + 4);
    t66 = *((unsigned int *)t83);
    t67 = (t66 >> 4);
    *((unsigned int *)t70) = t67;
    t68 = *((unsigned int *)t84);
    t69 = (t68 >> 4);
    *((unsigned int *)t82) = t69;
    t72 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t72 & 63U);
    t73 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t73 & 63U);
    xsi_vlog_generic_convert_bit_index(t42, t77, 2, t70, 6, 2);
    t92 = (t42 + 4);
    t74 = *((unsigned int *)t92);
    t97 = (!(t74));
    if (t97 == 1)
        goto LAB81;

LAB82:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2456U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t4 = (t3 + 4);
    t18 = *((unsigned int *)t3);
    t19 = (t18 >> 10);
    *((unsigned int *)t7) = t19;
    t20 = *((unsigned int *)t4);
    t21 = (t20 >> 10);
    *((unsigned int *)t2) = t21;
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t22 & 4194303U);
    t23 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t23 & 4194303U);
    t5 = (t0 + 4616);
    t6 = (t0 + 4616);
    t8 = (t6 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 4616);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 2456U);
    t15 = *((char **)t13);
    memset(t42, 0, 8);
    t13 = (t42 + 4);
    t16 = (t15 + 4);
    t25 = *((unsigned int *)t15);
    t26 = (t25 >> 4);
    *((unsigned int *)t42) = t26;
    t27 = *((unsigned int *)t16);
    t28 = (t27 >> 4);
    *((unsigned int *)t13) = t28;
    t29 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t29 & 63U);
    t30 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t30 & 63U);
    xsi_vlog_generic_convert_array_indices(t14, t36, t9, t12, 2, 1, t42, 6, 2);
    t17 = (t14 + 4);
    t31 = *((unsigned int *)t17);
    t62 = (!(t31));
    t24 = (t36 + 4);
    t32 = *((unsigned int *)t24);
    t63 = (!(t32));
    t97 = (t62 && t63);
    if (t97 == 1)
        goto LAB83;

LAB84:    goto LAB79;

LAB81:    xsi_vlogvar_wait_assign_value(t24, t17, 0, *((unsigned int *)t42), 1, 0LL);
    goto LAB82;

LAB83:    t33 = *((unsigned int *)t14);
    t34 = *((unsigned int *)t36);
    t101 = (t33 - t34);
    t134 = (t101 + 1);
    xsi_vlogvar_wait_assign_value(t5, t7, 0, *((unsigned int *)t36), t134, 0LL);
    goto LAB84;

}


extern void work_m_00000000004089440867_1012088544_init()
{
	static char *pe[] = {(void *)Initial_31_0,(void *)Always_35_1,(void *)Cont_41_2,(void *)Always_43_3};
	xsi_register_didat("work_m_00000000004089440867_1012088544", "isim/sim_top2_isim_beh.exe.sim/work/m_00000000004089440867_1012088544.didat");
	xsi_register_executes(pe);
}
