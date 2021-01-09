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
static const char *ng0 = "D:/00a/CA/CA_Exp/CA_Exp07/cp0.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static unsigned int ng5[] = {0U, 0U};
static int ng6[] = {9, 0};



static void Cont_53_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
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
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 11808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 9492U);
    t3 = *((char **)t2);
    t2 = (t0 + 6424);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t3 + 4);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t2);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t5) = 1;

LAB7:    t20 = (t0 + 12504);
    t21 = (t20 + 32U);
    t22 = *((char **)t21);
    t23 = (t22 + 40U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t5 + 4);
    t28 = *((unsigned int *)t5);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0);
    t33 = (t0 + 12436);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void Always_55_1(char *t0)
{
    char t13[8];
    char t17[8];
    char t26[8];
    char t34[8];
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
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    int t74;
    int t75;
    unsigned int t76;

LAB0:    t1 = (t0 + 11952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 12444);
    *((int *)t2) = 1;
    t3 = (t0 + 11980);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 9952U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(61, ng0);

LAB10:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 10504U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 10916);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB13:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 10136U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t2) != 0)
        goto LAB19;

LAB20:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB21;

LAB22:    memcpy(t34, t13, 8);

LAB23:    t66 = (t34 + 4);
    t67 = *((unsigned int *)t66);
    t68 = (~(t67));
    t69 = *((unsigned int *)t34);
    t70 = (t69 & t68);
    t71 = (t70 != 0);
    if (t71 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 10504U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB38;

LAB39:
LAB40:
LAB37:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 10136U);
    t3 = *((char **)t2);
    t2 = (t0 + 11284);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);

LAB8:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 10044U);
    t3 = *((char **)t2);
    t2 = (t0 + 11100);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t5);
    t8 = (t6 & t7);
    *((unsigned int *)t13) = t8;
    t11 = (t3 + 4);
    t12 = (t5 + 4);
    t18 = (t13 + 4);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 | t10);
    *((unsigned int *)t18) = t14;
    t15 = *((unsigned int *)t18);
    t16 = (t15 != 0);
    if (t16 == 1)
        goto LAB41;

LAB42:
LAB43:    t27 = (t0 + 11008);
    t33 = (t27 + 36U);
    t38 = *((char **)t33);
    t44 = *((unsigned int *)t13);
    t45 = *((unsigned int *)t38);
    t46 = (t44 & t45);
    *((unsigned int *)t17) = t46;
    t39 = (t13 + 4);
    t40 = (t38 + 4);
    t48 = (t17 + 4);
    t47 = *((unsigned int *)t39);
    t50 = *((unsigned int *)t40);
    t51 = (t47 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB44;

LAB45:
LAB46:    t72 = (t0 + 10916);
    xsi_vlogvar_assign_value(t72, t17, 0, 0, 1);
    goto LAB2;

LAB6:    xsi_set_current_line(56, ng0);

LAB9:    xsi_set_current_line(57, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 11008);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 11100);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 11284);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB8;

LAB11:    xsi_set_current_line(63, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 11008);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB13;

LAB14:    xsi_set_current_line(65, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 11008);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    goto LAB16;

LAB17:    *((unsigned int *)t13) = 1;
    goto LAB20;

LAB19:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB20;

LAB21:    t11 = (t0 + 11284);
    t12 = (t11 + 36U);
    t18 = *((char **)t12);
    memset(t17, 0, 8);
    t19 = (t18 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB27;

LAB25:    if (*((unsigned int *)t19) == 0)
        goto LAB24;

LAB26:    t25 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t25) = 1;

LAB27:    memset(t26, 0, 8);
    t27 = (t17 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t17);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t27) != 0)
        goto LAB30;

LAB31:    t35 = *((unsigned int *)t13);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t13 + 4);
    t39 = (t26 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB32;

LAB33:
LAB34:    goto LAB23;

LAB24:    *((unsigned int *)t17) = 1;
    goto LAB27;

LAB28:    *((unsigned int *)t26) = 1;
    goto LAB31;

LAB30:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB31;

LAB32:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t13 + 4);
    t49 = (t26 + 4);
    t50 = *((unsigned int *)t13);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t26);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB34;

LAB35:    xsi_set_current_line(67, ng0);
    t72 = ((char*)((ng1)));
    t73 = (t0 + 11100);
    xsi_vlogvar_assign_value(t73, t72, 0, 0, 1);
    goto LAB37;

LAB38:    xsi_set_current_line(69, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 11100);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB40;

LAB41:    t20 = *((unsigned int *)t13);
    t21 = *((unsigned int *)t18);
    *((unsigned int *)t13) = (t20 | t21);
    t19 = (t3 + 4);
    t25 = (t5 + 4);
    t22 = *((unsigned int *)t3);
    t23 = (~(t22));
    t24 = *((unsigned int *)t19);
    t28 = (~(t24));
    t29 = *((unsigned int *)t5);
    t30 = (~(t29));
    t31 = *((unsigned int *)t25);
    t32 = (~(t31));
    t58 = (t23 & t28);
    t59 = (t30 & t32);
    t35 = (~(t58));
    t36 = (~(t59));
    t37 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t37 & t35);
    t41 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t41 & t36);
    t42 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t42 & t35);
    t43 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t43 & t36);
    goto LAB43;

LAB44:    t54 = *((unsigned int *)t17);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t17) = (t54 | t55);
    t49 = (t13 + 4);
    t66 = (t38 + 4);
    t56 = *((unsigned int *)t13);
    t57 = (~(t56));
    t60 = *((unsigned int *)t49);
    t61 = (~(t60));
    t62 = *((unsigned int *)t38);
    t63 = (~(t62));
    t64 = *((unsigned int *)t66);
    t65 = (~(t64));
    t74 = (t57 & t61);
    t75 = (t63 & t65);
    t67 = (~(t74));
    t68 = (~(t75));
    t69 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t69 & t67);
    t70 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t70 & t68);
    t71 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t71 & t67);
    t76 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t76 & t68);
    goto LAB46;

}

static void Cont_78_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 12096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 11192);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 11192);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 11192);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 9584U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 12540);
    t14 = (t12 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 12452);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_81_3(char *t0)
{
    char t13[8];
    char t29[8];
    char t38[8];
    char t48[8];
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
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t39;
    int t40;
    unsigned int t41;
    int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    int t47;
    char *t49;
    char *t50;
    char *t51;
    char *t52;

LAB0:    t1 = (t0 + 12240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 12460);
    *((int *)t2) = 1;
    t3 = (t0 + 12268);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(81, ng0);

LAB5:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 10320U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(86, ng0);

LAB10:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 9492U);
    t3 = *((char **)t2);
    t2 = (t0 + 6424);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t2);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB14;

LAB11:    if (t18 != 0)
        goto LAB13;

LAB12:    *((unsigned int *)t13) = 1;

LAB14:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 9492U);
    t3 = *((char **)t2);
    t2 = (t0 + 6344);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t2);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB22;

LAB19:    if (t18 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t13) = 1;

LAB22:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 10916);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(99, ng0);

LAB33:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 10412U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB34;

LAB35:
LAB36:
LAB31:
LAB25:
LAB17:
LAB8:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 10916);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB38;

LAB39:
LAB40:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 9952U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(111, ng0);

LAB49:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 11192);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 11192);
    t11 = (t5 + 44U);
    t12 = *((char **)t11);
    t26 = (t0 + 11192);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    t30 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t13, 32, t4, t12, t28, 2, 1, t30, 32, 1);
    t31 = ((char*)((ng1)));
    memset(t29, 0, 8);
    xsi_vlog_unsigned_add(t29, 32, t13, 32, t31, 32);
    t32 = (t0 + 11192);
    t33 = (t0 + 11192);
    t34 = (t33 + 44U);
    t35 = *((char **)t34);
    t36 = (t0 + 11192);
    t37 = (t36 + 40U);
    t49 = *((char **)t37);
    t50 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t38, t48, t35, t49, 2, 1, t50, 32, 1);
    t51 = (t38 + 4);
    t6 = *((unsigned int *)t51);
    t40 = (!(t6));
    t52 = (t48 + 4);
    t7 = *((unsigned int *)t52);
    t42 = (!(t7));
    t43 = (t40 && t42);
    if (t43 == 1)
        goto LAB50;

LAB51:
LAB45:    goto LAB2;

LAB6:    xsi_set_current_line(82, ng0);

LAB9:    xsi_set_current_line(83, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 10824);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 10732);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB8;

LAB13:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB14;

LAB15:    xsi_set_current_line(87, ng0);

LAB18:    xsi_set_current_line(88, ng0);
    t26 = (t0 + 11192);
    t27 = (t26 + 36U);
    t28 = *((char **)t27);
    t30 = (t0 + 11192);
    t31 = (t30 + 44U);
    t32 = *((char **)t31);
    t33 = (t0 + 11192);
    t34 = (t33 + 40U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t29, 32, t28, t32, t35, 2, 1, t36, 32, 1);
    t37 = (t0 + 10824);
    xsi_vlogvar_assign_value(t37, t29, 0, 0, 32);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10732);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB17;

LAB21:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(91, ng0);

LAB26:    xsi_set_current_line(92, ng0);
    t26 = (t0 + 9860U);
    t27 = *((char **)t26);
    t26 = (t0 + 11192);
    t28 = (t0 + 11192);
    t30 = (t28 + 44U);
    t31 = *((char **)t30);
    t32 = (t0 + 11192);
    t33 = (t32 + 40U);
    t34 = *((char **)t33);
    t35 = (t0 + 9768U);
    t36 = *((char **)t35);
    xsi_vlog_generic_convert_array_indices(t29, t38, t31, t34, 2, 1, t36, 5, 2);
    t35 = (t29 + 4);
    t39 = *((unsigned int *)t35);
    t40 = (!(t39));
    t37 = (t38 + 4);
    t41 = *((unsigned int *)t37);
    t42 = (!(t41));
    t43 = (t40 && t42);
    if (t43 == 1)
        goto LAB27;

LAB28:    goto LAB25;

LAB27:    t44 = *((unsigned int *)t29);
    t45 = *((unsigned int *)t38);
    t46 = (t44 - t45);
    t47 = (t46 + 1);
    xsi_vlogvar_assign_value(t26, t27, 0, *((unsigned int *)t38), t47);
    goto LAB28;

LAB29:    xsi_set_current_line(94, ng0);

LAB32:    xsi_set_current_line(95, ng0);
    t11 = (t0 + 11192);
    t12 = (t11 + 36U);
    t26 = *((char **)t12);
    t27 = (t0 + 11192);
    t28 = (t27 + 44U);
    t30 = *((char **)t28);
    t31 = (t0 + 11192);
    t32 = (t31 + 40U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t13, 32, t26, t30, t33, 2, 1, t34, 32, 1);
    t35 = (t0 + 10824);
    xsi_vlogvar_assign_value(t35, t13, 0, 0, 32);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10732);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB31;

LAB34:    xsi_set_current_line(100, ng0);

LAB37:    xsi_set_current_line(101, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 10732);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 10824);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB36;

LAB38:    xsi_set_current_line(107, ng0);
    t11 = (t0 + 10228U);
    t12 = *((char **)t11);
    t11 = (t0 + 11192);
    t26 = (t0 + 11192);
    t27 = (t26 + 44U);
    t28 = *((char **)t27);
    t30 = (t0 + 11192);
    t31 = (t30 + 40U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t13, t29, t28, t32, 2, 1, t33, 32, 1);
    t34 = (t13 + 4);
    t14 = *((unsigned int *)t34);
    t40 = (!(t14));
    t35 = (t29 + 4);
    t15 = *((unsigned int *)t35);
    t42 = (!(t15));
    t43 = (t40 && t42);
    if (t43 == 1)
        goto LAB41;

LAB42:    goto LAB40;

LAB41:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t29);
    t46 = (t16 - t17);
    t47 = (t46 + 1);
    xsi_vlogvar_assign_value(t11, t12, 0, *((unsigned int *)t29), t47);
    goto LAB42;

LAB43:    xsi_set_current_line(108, ng0);

LAB46:    xsi_set_current_line(109, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 11192);
    t11 = (t0 + 11192);
    t12 = (t11 + 44U);
    t26 = *((char **)t12);
    t27 = (t0 + 11192);
    t28 = (t27 + 40U);
    t30 = *((char **)t28);
    t31 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t13, t29, t26, t30, 2, 1, t31, 32, 1);
    t32 = (t13 + 4);
    t14 = *((unsigned int *)t32);
    t40 = (!(t14));
    t33 = (t29 + 4);
    t15 = *((unsigned int *)t33);
    t42 = (!(t15));
    t43 = (t40 && t42);
    if (t43 == 1)
        goto LAB47;

LAB48:    goto LAB45;

LAB47:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t29);
    t46 = (t16 - t17);
    t47 = (t46 + 1);
    xsi_vlogvar_assign_value(t5, t4, 0, *((unsigned int *)t29), t47);
    goto LAB48;

LAB50:    t8 = *((unsigned int *)t38);
    t9 = *((unsigned int *)t48);
    t46 = (t8 - t9);
    t47 = (t46 + 1);
    xsi_vlogvar_assign_value(t32, t29, 0, *((unsigned int *)t48), t47);
    goto LAB51;

}


extern void work_m_00000000001312477101_1093763706_init()
{
	static char *pe[] = {(void *)Cont_53_0,(void *)Always_55_1,(void *)Cont_78_2,(void *)Always_81_3};
	xsi_register_didat("work_m_00000000001312477101_1093763706", "isim/sim_mips_isim_beh.exe.sim/work/m_00000000001312477101_1093763706.didat");
	xsi_register_executes(pe);
}
