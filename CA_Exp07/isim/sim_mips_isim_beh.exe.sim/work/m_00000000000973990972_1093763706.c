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
static const char *ng0 = "D:/00a/CA/CA_Exp/CA_Exp06/cp0.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static unsigned int ng5[] = {0U, 0U};



static void Cont_49_0(char *t0)
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

LAB0:    t1 = (t0 + 11544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 9412U);
    t3 = *((char **)t2);
    t2 = (t0 + 6344);
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

LAB7:    t20 = (t0 + 12240);
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
    t33 = (t0 + 12172);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void Always_51_1(char *t0)
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

LAB0:    t1 = (t0 + 11688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 12180);
    *((int *)t2) = 1;
    t3 = (t0 + 11716);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 9872U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(57, ng0);

LAB10:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 10240U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 10652);
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
LAB13:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 10056U);
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

LAB36:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 10240U);
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
LAB37:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 10056U);
    t3 = *((char **)t2);
    t2 = (t0 + 11020);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);

LAB8:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 9964U);
    t3 = *((char **)t2);
    t2 = (t0 + 10836);
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
LAB43:    t27 = (t0 + 10744);
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
LAB46:    t72 = (t0 + 10652);
    xsi_vlogvar_assign_value(t72, t17, 0, 0, 1);
    goto LAB2;

LAB6:    xsi_set_current_line(52, ng0);

LAB9:    xsi_set_current_line(53, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 10744);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 10836);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 11020);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB8;

LAB11:    xsi_set_current_line(59, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 10744);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB13;

LAB14:    xsi_set_current_line(61, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 10744);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    goto LAB16;

LAB17:    *((unsigned int *)t13) = 1;
    goto LAB20;

LAB19:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB20;

LAB21:    t11 = (t0 + 11020);
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

LAB35:    xsi_set_current_line(63, ng0);
    t72 = ((char*)((ng1)));
    t73 = (t0 + 10836);
    xsi_vlogvar_assign_value(t73, t72, 0, 0, 1);
    goto LAB37;

LAB38:    xsi_set_current_line(65, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 10836);
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

static void Cont_74_2(char *t0)
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

LAB0:    t1 = (t0 + 11832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 10928);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 10928);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 10928);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 9504U);
    t13 = *((char **)t12);
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t13, 5, 2);
    t12 = (t0 + 12276);
    t14 = (t12 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 40U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t12, 0, 31);
    t18 = (t0 + 12188);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_77_3(char *t0)
{
    char t7[8];
    char t31[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t41;
    int t42;
    unsigned int t43;
    int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;

LAB0:    t1 = (t0 + 11976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 12196);
    *((int *)t2) = 1;
    t3 = (t0 + 12004);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(77, ng0);

LAB5:    xsi_set_current_line(78, ng0);
    t4 = (t0 + 9412U);
    t5 = *((char **)t4);
    t4 = (t0 + 6344);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t7) = 1;

LAB9:    t22 = (t7 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t7);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 9412U);
    t3 = *((char **)t2);
    t2 = (t0 + 6264);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t7) = 1;

LAB17:    t8 = (t7 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t7);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 10652);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (~(t9));
    t11 = *((unsigned int *)t4);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(90, ng0);

LAB30:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 10468);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 10560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB26:
LAB20:
LAB12:    goto LAB2;

LAB8:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(78, ng0);

LAB13:    xsi_set_current_line(79, ng0);
    t28 = (t0 + 10928);
    t29 = (t28 + 36U);
    t30 = *((char **)t29);
    t32 = (t0 + 10928);
    t33 = (t32 + 44U);
    t34 = *((char **)t33);
    t35 = (t0 + 10928);
    t36 = (t35 + 40U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t31, 32, t30, t34, t37, 2, 1, t38, 32, 1);
    t39 = (t0 + 10560);
    xsi_vlogvar_assign_value(t39, t31, 0, 0, 32);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10468);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

LAB16:    t6 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(82, ng0);

LAB21:    xsi_set_current_line(83, ng0);
    t21 = (t0 + 9780U);
    t22 = *((char **)t21);
    t21 = (t0 + 10928);
    t28 = (t0 + 10928);
    t29 = (t28 + 44U);
    t30 = *((char **)t29);
    t32 = (t0 + 10928);
    t33 = (t32 + 40U);
    t34 = *((char **)t33);
    t35 = (t0 + 9688U);
    t36 = *((char **)t35);
    xsi_vlog_generic_convert_array_indices(t31, t40, t30, t34, 2, 1, t36, 5, 2);
    t35 = (t31 + 4);
    t41 = *((unsigned int *)t35);
    t42 = (!(t41));
    t37 = (t40 + 4);
    t43 = *((unsigned int *)t37);
    t44 = (!(t43));
    t45 = (t42 && t44);
    if (t45 == 1)
        goto LAB22;

LAB23:    goto LAB20;

LAB22:    t46 = *((unsigned int *)t31);
    t47 = *((unsigned int *)t40);
    t48 = (t46 - t47);
    t49 = (t48 + 1);
    xsi_vlogvar_assign_value(t21, t22, 0, *((unsigned int *)t40), t49);
    goto LAB23;

LAB24:    xsi_set_current_line(85, ng0);

LAB27:    xsi_set_current_line(86, ng0);
    t6 = (t0 + 10928);
    t8 = (t6 + 36U);
    t21 = *((char **)t8);
    t22 = (t0 + 10928);
    t28 = (t22 + 44U);
    t29 = *((char **)t28);
    t30 = (t0 + 10928);
    t32 = (t30 + 40U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t7, 32, t21, t29, t33, 2, 1, t34, 32, 1);
    t35 = (t0 + 10560);
    xsi_vlogvar_assign_value(t35, t7, 0, 0, 32);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 10148U);
    t3 = *((char **)t2);
    t2 = (t0 + 10928);
    t4 = (t0 + 10928);
    t5 = (t4 + 44U);
    t6 = *((char **)t5);
    t8 = (t0 + 10928);
    t21 = (t8 + 40U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t7, t31, t6, t22, 2, 1, t28, 32, 1);
    t29 = (t7 + 4);
    t9 = *((unsigned int *)t29);
    t42 = (!(t9));
    t30 = (t31 + 4);
    t10 = *((unsigned int *)t30);
    t44 = (!(t10));
    t45 = (t42 && t44);
    if (t45 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10468);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB26;

LAB28:    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t31);
    t48 = (t11 - t12);
    t49 = (t48 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t31), t49);
    goto LAB29;

}


extern void work_m_00000000000973990972_1093763706_init()
{
	static char *pe[] = {(void *)Cont_49_0,(void *)Always_51_1,(void *)Cont_74_2,(void *)Always_77_3};
	xsi_register_didat("work_m_00000000000973990972_1093763706", "isim/sim_mips_isim_beh.exe.sim/work/m_00000000000973990972_1093763706.didat");
	xsi_register_executes(pe);
}
