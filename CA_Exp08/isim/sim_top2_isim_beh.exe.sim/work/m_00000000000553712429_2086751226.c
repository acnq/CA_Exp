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
static const char *ng0 = "D:/AAuniversityTasks/CSComputerArch/TRUECourse/chap8Exp/work/CMU2.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {1, 0};



static void Cont_84_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 7776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3736U);
    t3 = *((char **)t2);
    t2 = (t0 + 10272);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t3, 8);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t8 = (t0 + 10080);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Always_87_1(char *t0)
{
    char t14[8];
    char t23[8];
    char t30[8];
    char t73[8];
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
    int t12;
    char *t13;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;

LAB0:    t1 = (t0 + 8024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 10096);
    *((int *)t2) = 1;
    t3 = (t0 + 8056);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(87, ng0);

LAB5:    xsi_set_current_line(88, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 6696);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 6376);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2296U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 6216);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB10:    t5 = (t0 + 880);
    t11 = *((char **)t5);
    t12 = xsi_vlog_unsigned_case_compare(t4, 3, t11, 32);
    if (t12 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t12 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t12 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t12 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t12 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t12 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t12 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t12 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t12 == 1)
        goto LAB19;

LAB20:
LAB21:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(90, ng0);

LAB9:    xsi_set_current_line(91, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 6696);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 6376);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    goto LAB8;

LAB11:    xsi_set_current_line(95, ng0);

LAB22:    xsi_set_current_line(96, ng0);
    t5 = (t0 + 2616U);
    t13 = *((char **)t5);
    memset(t14, 0, 8);
    t5 = (t13 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t5) != 0)
        goto LAB25;

LAB26:    t16 = (t14 + 4);
    t17 = *((unsigned int *)t14);
    t18 = (!(t17));
    t19 = *((unsigned int *)t16);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB27;

LAB28:    memcpy(t30, t14, 8);

LAB29:    t58 = (t30 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t30);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB37;

LAB38:
LAB39:    goto LAB21;

LAB13:    xsi_set_current_line(105, ng0);

LAB61:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3576U);
    t5 = *((char **)t2);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 6536);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 6696);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 2);

LAB64:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3576U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t2) != 0)
        goto LAB67;

LAB68:    t11 = (t14 + 4);
    t17 = *((unsigned int *)t14);
    t18 = *((unsigned int *)t11);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB69;

LAB70:    memcpy(t73, t14, 8);

LAB71:    t71 = (t73 + 4);
    t79 = *((unsigned int *)t71);
    t80 = (~(t79));
    t81 = *((unsigned int *)t73);
    t82 = (t81 & t80);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = (t0 + 6376);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB85:    goto LAB21;

LAB15:    xsi_set_current_line(115, ng0);

LAB86:    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 6696);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t2 = (t0 + 6376);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    goto LAB21;

LAB17:    xsi_set_current_line(119, ng0);

LAB87:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3576U);
    t5 = *((char **)t2);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 6536);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 6696);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 2);

LAB90:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 3576U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t2) != 0)
        goto LAB93;

LAB94:    t11 = (t14 + 4);
    t17 = *((unsigned int *)t14);
    t18 = *((unsigned int *)t11);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB95;

LAB96:    memcpy(t73, t14, 8);

LAB97:    t71 = (t73 + 4);
    t79 = *((unsigned int *)t71);
    t80 = (~(t79));
    t81 = *((unsigned int *)t73);
    t82 = (t81 & t80);
    t83 = (t82 != 0);
    if (t83 > 0)
        goto LAB109;

LAB110:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t2 = (t0 + 6376);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB111:    goto LAB21;

LAB19:    xsi_set_current_line(129, ng0);

LAB112:    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 6696);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 2);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 6376);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    goto LAB21;

LAB23:    *((unsigned int *)t14) = 1;
    goto LAB26;

LAB25:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB26;

LAB27:    t21 = (t0 + 2936U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    t21 = (t22 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t21) != 0)
        goto LAB32;

LAB33:    t31 = *((unsigned int *)t14);
    t32 = *((unsigned int *)t23);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = (t14 + 4);
    t35 = (t23 + 4);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t34);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB34;

LAB35:
LAB36:    goto LAB29;

LAB30:    *((unsigned int *)t23) = 1;
    goto LAB33;

LAB32:    t29 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB33;

LAB34:    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t30) = (t42 | t43);
    t44 = (t14 + 4);
    t45 = (t23 + 4);
    t46 = *((unsigned int *)t44);
    t47 = (~(t46));
    t48 = *((unsigned int *)t14);
    t49 = (t48 & t47);
    t50 = *((unsigned int *)t45);
    t51 = (~(t50));
    t52 = *((unsigned int *)t23);
    t53 = (t52 & t51);
    t54 = (~(t49));
    t55 = (~(t53));
    t56 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t56 & t54);
    t57 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t57 & t55);
    goto LAB36;

LAB37:    xsi_set_current_line(96, ng0);

LAB40:    xsi_set_current_line(97, ng0);
    t64 = (t0 + 4056U);
    t65 = *((char **)t64);
    t64 = (t65 + 4);
    t66 = *((unsigned int *)t64);
    t67 = (~(t66));
    t68 = *((unsigned int *)t65);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 4216U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t2) != 0)
        goto LAB46;

LAB47:    t11 = (t14 + 4);
    t17 = *((unsigned int *)t14);
    t18 = *((unsigned int *)t11);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB48;

LAB49:    memcpy(t30, t14, 8);

LAB50:    t36 = (t30 + 4);
    t62 = *((unsigned int *)t36);
    t63 = (~(t62));
    t66 = *((unsigned int *)t30);
    t67 = (t66 & t63);
    t68 = (t67 != 0);
    if (t68 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t2 = (t0 + 6376);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB60:
LAB43:    goto LAB39;

LAB41:    xsi_set_current_line(98, ng0);
    t71 = (t0 + 880);
    t72 = *((char **)t71);
    t71 = (t0 + 6376);
    xsi_vlogvar_assign_value(t71, t72, 0, 0, 3);
    goto LAB43;

LAB44:    *((unsigned int *)t14) = 1;
    goto LAB47;

LAB46:    t5 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB47;

LAB48:    t13 = (t0 + 4376U);
    t15 = *((char **)t13);
    memset(t23, 0, 8);
    t13 = (t15 + 4);
    t20 = *((unsigned int *)t13);
    t24 = (~(t20));
    t25 = *((unsigned int *)t15);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t13) != 0)
        goto LAB53;

LAB54:    t28 = *((unsigned int *)t14);
    t31 = *((unsigned int *)t23);
    t32 = (t28 & t31);
    *((unsigned int *)t30) = t32;
    t21 = (t14 + 4);
    t22 = (t23 + 4);
    t29 = (t30 + 4);
    t33 = *((unsigned int *)t21);
    t37 = *((unsigned int *)t22);
    t38 = (t33 | t37);
    *((unsigned int *)t29) = t38;
    t39 = *((unsigned int *)t29);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB50;

LAB51:    *((unsigned int *)t23) = 1;
    goto LAB54;

LAB53:    t16 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB54;

LAB55:    t41 = *((unsigned int *)t30);
    t42 = *((unsigned int *)t29);
    *((unsigned int *)t30) = (t41 | t42);
    t34 = (t14 + 4);
    t35 = (t23 + 4);
    t43 = *((unsigned int *)t14);
    t46 = (~(t43));
    t47 = *((unsigned int *)t34);
    t48 = (~(t47));
    t50 = *((unsigned int *)t23);
    t51 = (~(t50));
    t52 = *((unsigned int *)t35);
    t54 = (~(t52));
    t12 = (t46 & t48);
    t49 = (t51 & t54);
    t55 = (~(t12));
    t56 = (~(t49));
    t57 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t57 & t55);
    t59 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t59 & t56);
    t60 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t60 & t55);
    t61 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t61 & t56);
    goto LAB57;

LAB58:    xsi_set_current_line(100, ng0);
    t44 = (t0 + 1016);
    t45 = *((char **)t44);
    t44 = (t0 + 6376);
    xsi_vlogvar_assign_value(t44, t45, 0, 0, 3);
    goto LAB60;

LAB62:    xsi_set_current_line(107, ng0);
    t11 = (t0 + 6536);
    t13 = (t11 + 56U);
    t15 = *((char **)t13);
    t16 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 2, t15, 2, t16, 2);
    t21 = (t0 + 6696);
    xsi_vlogvar_assign_value(t21, t14, 0, 0, 2);
    goto LAB64;

LAB65:    *((unsigned int *)t14) = 1;
    goto LAB68;

LAB67:    t5 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB68;

LAB69:    t13 = (t0 + 6536);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t21 = ((char*)((ng3)));
    memset(t23, 0, 8);
    t22 = (t16 + 4);
    t29 = (t21 + 4);
    t20 = *((unsigned int *)t16);
    t24 = *((unsigned int *)t21);
    t25 = (t20 ^ t24);
    t26 = *((unsigned int *)t22);
    t27 = *((unsigned int *)t29);
    t28 = (t26 ^ t27);
    t31 = (t25 | t28);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t29);
    t37 = (t32 | t33);
    t38 = (~(t37));
    t39 = (t31 & t38);
    if (t39 != 0)
        goto LAB75;

LAB72:    if (t37 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t23) = 1;

LAB75:    memset(t30, 0, 8);
    t35 = (t23 + 4);
    t40 = *((unsigned int *)t35);
    t41 = (~(t40));
    t42 = *((unsigned int *)t23);
    t43 = (t42 & t41);
    t46 = (t43 & 1U);
    if (t46 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t35) != 0)
        goto LAB78;

LAB79:    t47 = *((unsigned int *)t14);
    t48 = *((unsigned int *)t30);
    t50 = (t47 & t48);
    *((unsigned int *)t73) = t50;
    t44 = (t14 + 4);
    t45 = (t30 + 4);
    t58 = (t73 + 4);
    t51 = *((unsigned int *)t44);
    t52 = *((unsigned int *)t45);
    t54 = (t51 | t52);
    *((unsigned int *)t58) = t54;
    t55 = *((unsigned int *)t58);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB80;

LAB81:
LAB82:    goto LAB71;

LAB74:    t34 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB75;

LAB76:    *((unsigned int *)t30) = 1;
    goto LAB79;

LAB78:    t36 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB79;

LAB80:    t57 = *((unsigned int *)t73);
    t59 = *((unsigned int *)t58);
    *((unsigned int *)t73) = (t57 | t59);
    t64 = (t14 + 4);
    t65 = (t30 + 4);
    t60 = *((unsigned int *)t14);
    t61 = (~(t60));
    t62 = *((unsigned int *)t64);
    t63 = (~(t62));
    t66 = *((unsigned int *)t30);
    t67 = (~(t66));
    t68 = *((unsigned int *)t65);
    t69 = (~(t68));
    t12 = (t61 & t63);
    t49 = (t67 & t69);
    t70 = (~(t12));
    t74 = (~(t49));
    t75 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t75 & t70);
    t76 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t76 & t74);
    t77 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t77 & t70);
    t78 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t78 & t74);
    goto LAB82;

LAB83:    xsi_set_current_line(111, ng0);
    t72 = (t0 + 1152);
    t84 = *((char **)t72);
    t72 = (t0 + 6376);
    xsi_vlogvar_assign_value(t72, t84, 0, 0, 3);
    goto LAB85;

LAB88:    xsi_set_current_line(121, ng0);
    t11 = (t0 + 6536);
    t13 = (t11 + 56U);
    t15 = *((char **)t13);
    t16 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 2, t15, 2, t16, 2);
    t21 = (t0 + 6696);
    xsi_vlogvar_assign_value(t21, t14, 0, 0, 2);
    goto LAB90;

LAB91:    *((unsigned int *)t14) = 1;
    goto LAB94;

LAB93:    t5 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB94;

LAB95:    t13 = (t0 + 6536);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t21 = ((char*)((ng3)));
    memset(t23, 0, 8);
    t22 = (t16 + 4);
    t29 = (t21 + 4);
    t20 = *((unsigned int *)t16);
    t24 = *((unsigned int *)t21);
    t25 = (t20 ^ t24);
    t26 = *((unsigned int *)t22);
    t27 = *((unsigned int *)t29);
    t28 = (t26 ^ t27);
    t31 = (t25 | t28);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t29);
    t37 = (t32 | t33);
    t38 = (~(t37));
    t39 = (t31 & t38);
    if (t39 != 0)
        goto LAB101;

LAB98:    if (t37 != 0)
        goto LAB100;

LAB99:    *((unsigned int *)t23) = 1;

LAB101:    memset(t30, 0, 8);
    t35 = (t23 + 4);
    t40 = *((unsigned int *)t35);
    t41 = (~(t40));
    t42 = *((unsigned int *)t23);
    t43 = (t42 & t41);
    t46 = (t43 & 1U);
    if (t46 != 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t35) != 0)
        goto LAB104;

LAB105:    t47 = *((unsigned int *)t14);
    t48 = *((unsigned int *)t30);
    t50 = (t47 & t48);
    *((unsigned int *)t73) = t50;
    t44 = (t14 + 4);
    t45 = (t30 + 4);
    t58 = (t73 + 4);
    t51 = *((unsigned int *)t44);
    t52 = *((unsigned int *)t45);
    t54 = (t51 | t52);
    *((unsigned int *)t58) = t54;
    t55 = *((unsigned int *)t58);
    t56 = (t55 != 0);
    if (t56 == 1)
        goto LAB106;

LAB107:
LAB108:    goto LAB97;

LAB100:    t34 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB101;

LAB102:    *((unsigned int *)t30) = 1;
    goto LAB105;

LAB104:    t36 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB105;

LAB106:    t57 = *((unsigned int *)t73);
    t59 = *((unsigned int *)t58);
    *((unsigned int *)t73) = (t57 | t59);
    t64 = (t14 + 4);
    t65 = (t30 + 4);
    t60 = *((unsigned int *)t14);
    t61 = (~(t60));
    t62 = *((unsigned int *)t64);
    t63 = (~(t62));
    t66 = *((unsigned int *)t30);
    t67 = (~(t66));
    t68 = *((unsigned int *)t65);
    t69 = (~(t68));
    t12 = (t61 & t63);
    t49 = (t67 & t69);
    t70 = (~(t12));
    t74 = (~(t49));
    t75 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t75 & t70);
    t76 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t76 & t74);
    t77 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t77 & t70);
    t78 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t78 & t74);
    goto LAB108;

LAB109:    xsi_set_current_line(125, ng0);
    t72 = (t0 + 1424);
    t84 = *((char **)t72);
    t72 = (t0 + 6376);
    xsi_vlogvar_assign_value(t72, t84, 0, 0, 3);
    goto LAB111;

}

static void Always_136_2(char *t0)
{
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

LAB0:    t1 = (t0 + 8272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 10112);
    *((int *)t2) = 1;
    t3 = (t0 + 8304);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(136, ng0);

LAB5:    xsi_set_current_line(137, ng0);
    t4 = (t0 + 2296U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(141, ng0);

LAB10:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 6376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6216);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 6696);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6536);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(137, ng0);

LAB9:    xsi_set_current_line(138, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 6216);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB8;

}

static void Always_149_3(char *t0)
{
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

LAB0:    t1 = (t0 + 8520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 10128);
    *((int *)t2) = 1;
    t3 = (t0 + 8552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(149, ng0);

LAB5:    xsi_set_current_line(150, ng0);
    t4 = (t0 + 2296U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 6536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6856);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(151, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 6856);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB8;

}

static void Always_156_4(char *t0)
{
    char t9[8];
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    int t21;
    char *t22;

LAB0:    t1 = (t0 + 8768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 10144);
    *((int *)t2) = 1;
    t3 = (t0 + 8800);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(156, ng0);

LAB5:    xsi_set_current_line(157, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 5576);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(158, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5736);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5896);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6056);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 6376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = (t0 + 880);
    t6 = *((char **)t5);
    t7 = xsi_vlog_unsigned_case_compare(t4, 3, t6, 32);
    if (t7 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t7 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t7 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 1288);
    t5 = *((char **)t2);
    t21 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 32);
    if (t21 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t7 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t7 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(162, ng0);

LAB18:    xsi_set_current_line(163, ng0);
    t5 = (t0 + 2456U);
    t8 = *((char **)t5);
    t5 = (t0 + 5896);
    xsi_vlogvar_assign_value(t5, t8, 0, 0, 32);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 2936U);
    t3 = *((char **)t2);
    t2 = (t0 + 5736);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 3096U);
    t3 = *((char **)t2);
    t2 = (t0 + 6056);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB17;

LAB9:    xsi_set_current_line(167, ng0);

LAB19:    xsi_set_current_line(168, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 6696);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t11 = (t0 + 2456U);
    t12 = *((char **)t11);
    memset(t10, 0, 8);
    t11 = (t10 + 4);
    t13 = (t12 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (t14 >> 4);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t13);
    t17 = (t16 >> 4);
    *((unsigned int *)t11) = t17;
    t18 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t18 & 268435455U);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t19 & 268435455U);
    xsi_vlogtype_concat(t9, 32, 32, 3U, t10, 28, t8, 2, t2, 2);
    t20 = (t0 + 5896);
    xsi_vlogvar_assign_value(t20, t9, 0, 0, 32);
    goto LAB17;

LAB11:    goto LAB9;

LAB13:    xsi_set_current_line(170, ng0);

LAB20:    xsi_set_current_line(171, ng0);
    t2 = ((char*)((ng4)));
    t6 = (t0 + 6856);
    t8 = (t6 + 56U);
    t11 = *((char **)t8);
    t12 = (t0 + 2456U);
    t13 = *((char **)t12);
    memset(t10, 0, 8);
    t12 = (t10 + 4);
    t20 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (t14 >> 4);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t20);
    t17 = (t16 >> 4);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t18 & 268435455U);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t19 & 268435455U);
    xsi_vlogtype_concat(t9, 32, 32, 3U, t10, 28, t11, 2, t2, 2);
    t22 = (t0 + 5896);
    xsi_vlogvar_assign_value(t22, t9, 0, 0, 32);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 3416U);
    t3 = *((char **)t2);
    t2 = (t0 + 6056);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    xsi_set_current_line(173, ng0);
    t2 = (t0 + 3576U);
    t3 = *((char **)t2);
    t2 = (t0 + 5576);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    goto LAB17;

LAB15:    goto LAB13;

}

static void Always_179_5(char *t0)
{
    char t16[8];
    char t17[8];
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
    int t12;
    char *t13;
    int t14;
    int t15;
    char *t18;
    char *t19;
    unsigned int t20;
    char *t21;
    char *t22;

LAB0:    t1 = (t0 + 9016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 10160);
    *((int *)t2) = 1;
    t3 = (t0 + 9048);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(179, ng0);

LAB5:    xsi_set_current_line(180, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 4936);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(181, ng0);
    t2 = (t0 + 2296U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(185, ng0);
    t2 = (t0 + 6376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB10:    t5 = (t0 + 880);
    t11 = *((char **)t5);
    t12 = xsi_vlog_unsigned_case_compare(t4, 3, t11, 32);
    if (t12 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t12 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t12 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 1424);
    t5 = *((char **)t2);
    t14 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 32);
    if (t14 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 1016);
    t11 = *((char **)t2);
    t15 = xsi_vlog_unsigned_case_compare(t4, 3, t11, 32);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t12 = xsi_vlog_unsigned_case_compare(t4, 3, t3, 32);
    if (t12 == 1)
        goto LAB19;

LAB20:
LAB21:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(181, ng0);

LAB9:    xsi_set_current_line(182, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 5096);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5256);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB11:    xsi_set_current_line(186, ng0);

LAB22:    xsi_set_current_line(187, ng0);
    t5 = ((char*)((ng1)));
    t13 = (t0 + 4936);
    xsi_vlogvar_wait_assign_value(t13, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(188, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5096);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5256);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB21;

LAB13:    goto LAB11;

LAB15:    goto LAB11;

LAB17:    xsi_set_current_line(191, ng0);

LAB23:    xsi_set_current_line(192, ng0);
    t2 = ((char*)((ng5)));
    t13 = (t0 + 4936);
    xsi_vlogvar_wait_assign_value(t13, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(193, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 5096);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(194, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6696);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t13 = (t0 + 2456U);
    t18 = *((char **)t13);
    memset(t17, 0, 8);
    t13 = (t17 + 4);
    t19 = (t18 + 4);
    t6 = *((unsigned int *)t18);
    t7 = (t6 >> 4);
    *((unsigned int *)t17) = t7;
    t8 = *((unsigned int *)t19);
    t9 = (t8 >> 4);
    *((unsigned int *)t13) = t9;
    t10 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t10 & 63U);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 63U);
    t21 = (t0 + 3896U);
    t22 = *((char **)t21);
    xsi_vlogtype_concat(t16, 32, 32, 4U, t22, 22, t17, 6, t11, 2, t2, 2);
    t21 = (t0 + 5256);
    xsi_vlogvar_wait_assign_value(t21, t16, 0, 0, 32, 0LL);
    goto LAB21;

LAB19:    xsi_set_current_line(196, ng0);

LAB24:    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng5)));
    t5 = (t0 + 4936);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5096);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(199, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6696);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t13 = (t0 + 2456U);
    t18 = *((char **)t13);
    memset(t17, 0, 8);
    t13 = (t17 + 4);
    t19 = (t18 + 4);
    t6 = *((unsigned int *)t18);
    t7 = (t6 >> 4);
    *((unsigned int *)t17) = t7;
    t8 = *((unsigned int *)t19);
    t9 = (t8 >> 4);
    *((unsigned int *)t13) = t9;
    t10 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t10 & 268435455U);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 268435455U);
    xsi_vlogtype_concat(t16, 32, 32, 3U, t17, 28, t11, 2, t2, 2);
    t21 = (t0 + 5256);
    xsi_vlogvar_wait_assign_value(t21, t16, 0, 0, 32, 0LL);
    goto LAB21;

}

static void Always_204_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 9264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(204, ng0);
    t2 = (t0 + 10176);
    *((int *)t2) = 1;
    t3 = (t0 + 9296);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(204, ng0);

LAB5:    xsi_set_current_line(205, ng0);
    t4 = (t0 + 3736U);
    t5 = *((char **)t4);
    t4 = (t0 + 5416);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    goto LAB2;

}

static void Cont_208_7(char *t0)
{
    char t7[8];
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
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 9512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(208, ng0);
    t2 = (t0 + 6376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 880);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t5 = (t4 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB5;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB7:    t22 = (t0 + 10336);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t7 + 4);
    t30 = *((unsigned int *)t7);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 10192);
    *((int *)t35) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t7) = 1;
    goto LAB7;

LAB6:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 9760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng4)));
    t3 = (t0 + 10400);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}


extern void work_m_00000000000553712429_2086751226_init()
{
	static char *pe[] = {(void *)Cont_84_0,(void *)Always_87_1,(void *)Always_136_2,(void *)Always_149_3,(void *)Always_156_4,(void *)Always_179_5,(void *)Always_204_6,(void *)Cont_208_7,(void *)implSig1_execute};
	xsi_register_didat("work_m_00000000000553712429_2086751226", "isim/sim_top2_isim_beh.exe.sim/work/m_00000000000553712429_2086751226.didat");
	xsi_register_executes(pe);
}
