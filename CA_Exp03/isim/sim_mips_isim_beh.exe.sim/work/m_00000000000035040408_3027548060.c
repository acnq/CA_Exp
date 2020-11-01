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
static const char *ng0 = "D:/AAuniversityTasks/CSComputerArch/TRUECourse/chap3Exp/2018_topic3_student_2/datapath.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static int ng6[] = {5, 0};
static int ng7[] = {6, 0};
static int ng8[] = {7, 0};
static int ng9[] = {8, 0};
static unsigned int ng10[] = {0U, 0U};
static int ng11[] = {9, 0};
static int ng12[] = {10, 0};
static int ng13[] = {11, 0};
static int ng14[] = {12, 0};
static int ng15[] = {13, 0};
static int ng16[] = {14, 0};
static int ng17[] = {15, 0};
static int ng18[] = {16, 0};
static int ng19[] = {17, 0};
static int ng20[] = {18, 0};
static int ng21[] = {19, 0};
static int ng22[] = {20, 0};
static int ng23[] = {21, 0};
static int ng24[] = {22, 0};
static int ng25[] = {23, 0};
static unsigned int ng26[] = {4294967295U, 0U};



static void Always_130_0(char *t0)
{
    char t4[8];
    char t20[8];
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
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 28472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 34744);
    *((int *)t2) = 1;
    t3 = (t0 + 28504);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(130, ng0);

LAB5:    xsi_set_current_line(131, ng0);
    t5 = (t0 + 11952U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 31U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 31U);

LAB6:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t14, 32);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng14)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng15)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng16)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng17)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng18)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng19)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng20)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng21)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng22)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng23)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng24)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng25)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB53;

LAB54:
LAB56:
LAB55:    xsi_set_current_line(156, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 27552);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB57:    goto LAB2;

LAB7:    xsi_set_current_line(132, ng0);
    t16 = (t0 + 20032);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 27552);
    xsi_vlogvar_wait_assign_value(t19, t18, 0, 0, 32, 0LL);
    goto LAB57;

LAB9:    xsi_set_current_line(133, ng0);
    t3 = (t0 + 14512U);
    t5 = *((char **)t3);
    t3 = (t0 + 27552);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    goto LAB57;

LAB11:    xsi_set_current_line(134, ng0);
    t3 = (t0 + 23712);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 27552);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB57;

LAB13:    xsi_set_current_line(135, ng0);
    t3 = (t0 + 18592);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 27552);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB57;

LAB15:    xsi_set_current_line(136, ng0);
    t3 = (t0 + 24192);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 27552);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB57;

LAB17:    xsi_set_current_line(137, ng0);
    t3 = (t0 + 24512);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 27552);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB57;

LAB19:    xsi_set_current_line(138, ng0);
    t3 = (t0 + 25792);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 27552);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB57;

LAB21:    xsi_set_current_line(139, ng0);
    t3 = (t0 + 26112);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 27552);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB57;

LAB23:    xsi_set_current_line(140, ng0);
    t3 = (t0 + 16912U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng10)));
    xsi_vlogtype_concat(t20, 32, 32, 2U, t3, 27, t5, 5);
    t6 = (t0 + 27552);
    xsi_vlogvar_wait_assign_value(t6, t20, 0, 0, 32, 0LL);
    goto LAB57;

LAB25:    xsi_set_current_line(141, ng0);
    t3 = (t0 + 17392U);
    t5 = *((char **)t3);
    t3 = (t0 + 27552);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    goto LAB57;

LAB27:    xsi_set_current_line(142, ng0);
    t3 = (t0 + 17072U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng10)));
    xsi_vlogtype_concat(t20, 32, 32, 2U, t3, 27, t5, 5);
    t6 = (t0 + 27552);
    xsi_vlogvar_wait_assign_value(t6, t20, 0, 0, 32, 0LL);
    goto LAB57;

LAB29:    xsi_set_current_line(143, ng0);
    t3 = (t0 + 17552U);
    t5 = *((char **)t3);
    t3 = (t0 + 27552);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    goto LAB57;

LAB31:    xsi_set_current_line(144, ng0);
    t3 = (t0 + 17712U);
    t5 = *((char **)t3);
    t3 = (t0 + 27552);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    goto LAB57;

LAB33:    xsi_set_current_line(145, ng0);
    t3 = (t0 + 25152);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 27552);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB57;

LAB35:    xsi_set_current_line(146, ng0);
    t3 = (t0 + 25312);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 27552);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB57;

LAB37:    xsi_set_current_line(147, ng0);
    t3 = (t0 + 17872U);
    t5 = *((char **)t3);
    t3 = (t0 + 27552);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    goto LAB57;

LAB39:    xsi_set_current_line(148, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 27552);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 32, 0LL);
    goto LAB57;

LAB41:    xsi_set_current_line(149, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 27552);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 32, 0LL);
    goto LAB57;

LAB43:    xsi_set_current_line(150, ng0);
    t3 = (t0 + 15792U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng10)));
    t6 = (t0 + 15632U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng10)));
    t14 = (t0 + 19872);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng10)));
    xsi_vlogtype_concat(t20, 32, 32, 6U, t18, 19, t17, 1, t6, 7, t7, 1, t3, 3, t5, 1);
    t19 = (t0 + 27552);
    xsi_vlogvar_wait_assign_value(t19, t20, 0, 0, 32, 0LL);
    goto LAB57;

LAB45:    xsi_set_current_line(151, ng0);
    t3 = (t0 + 15952U);
    t5 = *((char **)t3);
    t3 = (t0 + 27552);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    goto LAB57;

LAB47:    xsi_set_current_line(152, ng0);
    t3 = (t0 + 16272U);
    t5 = *((char **)t3);
    t3 = (t0 + 27552);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    goto LAB57;

LAB49:    xsi_set_current_line(153, ng0);
    t3 = (t0 + 16112U);
    t5 = *((char **)t3);
    t3 = (t0 + 27552);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    goto LAB57;

LAB51:    xsi_set_current_line(154, ng0);
    t3 = (t0 + 20992);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng10)));
    xsi_vlogtype_concat(t20, 32, 32, 2U, t7, 27, t6, 5);
    t14 = (t0 + 27552);
    xsi_vlogvar_wait_assign_value(t14, t20, 0, 0, 32, 0LL);
    goto LAB57;

LAB53:    xsi_set_current_line(155, ng0);
    t3 = (t0 + 27392);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 27552);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB57;

}

static void Cont_160_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 28720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 11952U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 5);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 5);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t28 = *((unsigned int *)t4);
    t29 = (~(t28));
    t30 = *((unsigned int *)t21);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t33, 8);

LAB16:    t32 = (t0 + 35208);
    t34 = (t32 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t3, 8);
    xsi_driver_vfirst_trans(t32, 0, 31);
    t38 = (t0 + 34760);
    *((int *)t38) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t25 = (t0 + 27552);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    goto LAB9;

LAB10:    t32 = (t0 + 18192U);
    t33 = *((char **)t32);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t27, 32, t33, 32);
    goto LAB16;

LAB14:    memcpy(t3, t27, 8);
    goto LAB16;

}

static void Cont_165_2(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 28968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(166, ng0);
    t2 = (t0 + 20032);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 35272);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t6, 8);
    xsi_driver_vfirst_trans(t7, 0, 31);
    t12 = (t0 + 34776);
    *((int *)t12) = 1;

LAB1:    return;
}

static void Always_168_3(char *t0)
{
    char t4[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;

LAB0:    t1 = (t0 + 29216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 34792);
    *((int *)t2) = 1;
    t3 = (t0 + 29248);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(168, ng0);

LAB5:    xsi_set_current_line(169, ng0);
    t5 = (t0 + 14192U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t0 + 14352U);
    t24 = *((char **)t23);
    t26 = *((unsigned int *)t4);
    t27 = *((unsigned int *)t24);
    t28 = (t26 & t27);
    *((unsigned int *)t25) = t28;
    t23 = (t4 + 4);
    t29 = (t24 + 4);
    t30 = (t25 + 4);
    t31 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB12;

LAB13:
LAB14:    t56 = (t0 + 19712);
    xsi_vlogvar_assign_value(t56, t25, 0, 0, 1);
    xsi_set_current_line(170, ng0);
    t2 = (t0 + 14192U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t2) == 0)
        goto LAB15;

LAB17:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB18:    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB20;

LAB19:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 1U);
    t13 = (t0 + 19872);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    t36 = *((unsigned int *)t25);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t25) = (t36 | t37);
    t38 = (t4 + 4);
    t39 = (t24 + 4);
    t40 = *((unsigned int *)t4);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t24);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t54 & t50);
    t55 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t55 & t51);
    goto LAB14;

LAB15:    *((unsigned int *)t4) = 1;
    goto LAB18;

LAB20:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t19 | t20);
    goto LAB19;

}

static void Always_173_4(char *t0)
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 29464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 34808);
    *((int *)t2) = 1;
    t3 = (t0 + 29496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(173, ng0);

LAB5:    xsi_set_current_line(174, ng0);
    t4 = (t0 + 14192U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(177, ng0);
    t2 = (t0 + 14352U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(174, ng0);

LAB9:    xsi_set_current_line(175, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 20032);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(177, ng0);

LAB13:    xsi_set_current_line(178, ng0);
    t4 = (t0 + 19232);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t11 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t11);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(181, ng0);
    t2 = (t0 + 16752U);
    t3 = *((char **)t2);
    t2 = (t0 + 20032);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);

LAB16:    goto LAB12;

LAB14:    xsi_set_current_line(179, ng0);
    t18 = (t0 + 26752);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 20032);
    xsi_vlogvar_wait_assign_value(t21, t20, 0, 0, 32, 0LL);
    goto LAB16;

}

static void Always_186_5(char *t0)
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

LAB0:    t1 = (t0 + 29712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 34824);
    *((int *)t2) = 1;
    t3 = (t0 + 29744);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(186, ng0);

LAB5:    xsi_set_current_line(187, ng0);
    t4 = (t0 + 14672U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(193, ng0);
    t2 = (t0 + 14832U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(187, ng0);

LAB9:    xsi_set_current_line(188, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 20192);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 23712);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 18592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 23872);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(193, ng0);

LAB13:    xsi_set_current_line(194, ng0);
    t4 = (t0 + 19712);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 20192);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(195, ng0);
    t2 = (t0 + 20032);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 23712);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 14512U);
    t3 = *((char **)t2);
    t2 = (t0 + 18592);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 16752U);
    t3 = *((char **)t2);
    t2 = (t0 + 23872);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB12;

}

static void Cont_201_6(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 29960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(202, ng0);
    t2 = (t0 + 18592);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 21);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 21);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 31U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 31U);
    t14 = (t0 + 35336);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 31U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 4);
    t27 = (t0 + 34840);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_201_7(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 30208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(202, ng0);
    t2 = (t0 + 18592);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 16);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 16);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 31U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 31U);
    t14 = (t0 + 35400);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 31U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 4);
    t27 = (t0 + 34856);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_201_8(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 30456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(203, ng0);
    t2 = (t0 + 18592);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 11);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 11);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 31U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 31U);
    t14 = (t0 + 35464);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 31U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 4);
    t27 = (t0 + 34872);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_201_9(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t17[8];
    char t29[8];
    char t34[8];
    char t47[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
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
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;

LAB0:    t1 = (t0 + 30704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(204, ng0);
    t2 = (t0 + 12432U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t43 = *((unsigned int *)t4);
    t44 = (~(t43));
    t45 = *((unsigned int *)t12);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t47, 8);

LAB16:    t61 = (t0 + 35528);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    memcpy(t65, t3, 8);
    xsi_driver_vfirst_trans(t61, 0, 31);
    t66 = (t0 + 34888);
    *((int *)t66) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 18592);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t17, 0, 8);
    t21 = (t17 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 0);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 0);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t27 & 65535U);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 & 65535U);
    t30 = ((char*)((ng18)));
    t31 = (t0 + 18592);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t34, 0, 8);
    t35 = (t34 + 4);
    t36 = (t33 + 4);
    t37 = *((unsigned int *)t33);
    t38 = (t37 >> 15);
    t39 = (t38 & 1);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 >> 15);
    t42 = (t41 & 1);
    *((unsigned int *)t35) = t42;
    xsi_vlog_mul_concat(t29, 16, 1, t30, 1U, t34, 1);
    xsi_vlogtype_concat(t16, 32, 32, 2U, t29, 16, t17, 16);
    goto LAB9;

LAB10:    t49 = (t0 + 18592);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    memset(t48, 0, 8);
    t52 = (t48 + 4);
    t53 = (t51 + 4);
    t54 = *((unsigned int *)t51);
    t55 = (t54 >> 0);
    *((unsigned int *)t48) = t55;
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 0);
    *((unsigned int *)t52) = t57;
    t58 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t58 & 65535U);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t59 & 65535U);
    t60 = ((char*)((ng10)));
    xsi_vlogtype_concat(t47, 32, 32, 2U, t60, 16, t48, 16);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t16, 32, t47, 32);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

}

static void Always_207_10(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    int t17;

LAB0:    t1 = (t0 + 30952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(207, ng0);
    t2 = (t0 + 34904);
    *((int *)t2) = 1;
    t3 = (t0 + 30984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(207, ng0);

LAB5:    xsi_set_current_line(208, ng0);
    t5 = (t0 + 18592);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 11);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 11);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 31U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 31U);
    t16 = (t0 + 24032);
    xsi_vlogvar_assign_value(t16, t4, 0, 0, 5);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 13712U);
    t3 = *((char **)t2);

LAB6:    t2 = (t0 + 3872);
    t5 = *((char **)t2);
    t17 = xsi_vlog_unsigned_case_compare(t3, 2, t5, 32);
    if (t17 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 4008);
    t5 = *((char **)t2);
    t17 = xsi_vlog_unsigned_case_compare(t3, 2, t5, 32);
    if (t17 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 4144);
    t5 = *((char **)t2);
    t17 = xsi_vlog_unsigned_case_compare(t3, 2, t5, 32);
    if (t17 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(210, ng0);
    t2 = (t0 + 17232U);
    t6 = *((char **)t2);
    t2 = (t0 + 24032);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 5);
    goto LAB13;

LAB9:    xsi_set_current_line(211, ng0);
    t2 = (t0 + 17072U);
    t6 = *((char **)t2);
    t2 = (t0 + 24032);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 5);
    goto LAB13;

LAB11:    xsi_set_current_line(212, ng0);
    t2 = (t0 + 11080);
    t6 = *((char **)t2);
    t2 = (t0 + 24032);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 5);
    goto LAB13;

}

static void Always_232_11(char *t0)
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

LAB0:    t1 = (t0 + 31200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(232, ng0);
    t2 = (t0 + 34920);
    *((int *)t2) = 1;
    t3 = (t0 + 31232);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(232, ng0);

LAB5:    xsi_set_current_line(233, ng0);
    t4 = (t0 + 14992U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(260, ng0);
    t2 = (t0 + 15152U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(233, ng0);

LAB9:    xsi_set_current_line(234, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 20352);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(235, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 24192);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(236, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 24512);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(237, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 24352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(238, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 18912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(239, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 21632);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(240, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 21952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(241, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 22112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(248, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 24672);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(249, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 24832);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(250, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 24992);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(251, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 22592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(252, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 22752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(253, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 22912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(254, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 23232);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(255, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 19072);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(257, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 21152);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(258, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 21312);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(260, ng0);

LAB13:    xsi_set_current_line(261, ng0);
    t4 = (t0 + 20192);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 20352);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(262, ng0);
    t2 = (t0 + 23712);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 24192);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(263, ng0);
    t2 = (t0 + 18592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 24512);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(264, ng0);
    t2 = (t0 + 23872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 24352);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(265, ng0);
    t2 = (t0 + 24032);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 18912);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(266, ng0);
    t2 = (t0 + 12272U);
    t3 = *((char **)t2);
    t2 = (t0 + 21632);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(267, ng0);
    t2 = (t0 + 12592U);
    t3 = *((char **)t2);
    t2 = (t0 + 21952);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(268, ng0);
    t2 = (t0 + 12752U);
    t3 = *((char **)t2);
    t2 = (t0 + 22112);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(269, ng0);
    t2 = (t0 + 12912U);
    t3 = *((char **)t2);
    t2 = (t0 + 22272);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(270, ng0);
    t2 = (t0 + 13072U);
    t3 = *((char **)t2);
    t2 = (t0 + 22432);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(271, ng0);
    t2 = (t0 + 17392U);
    t3 = *((char **)t2);
    t2 = (t0 + 24672);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(272, ng0);
    t2 = (t0 + 17552U);
    t3 = *((char **)t2);
    t2 = (t0 + 24832);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(273, ng0);
    t2 = (t0 + 17712U);
    t3 = *((char **)t2);
    t2 = (t0 + 24992);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(274, ng0);
    t2 = (t0 + 13232U);
    t3 = *((char **)t2);
    t2 = (t0 + 22592);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(275, ng0);
    t2 = (t0 + 13392U);
    t3 = *((char **)t2);
    t2 = (t0 + 22752);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(276, ng0);
    t2 = (t0 + 13552U);
    t3 = *((char **)t2);
    t2 = (t0 + 22912);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(277, ng0);
    t2 = (t0 + 13872U);
    t3 = *((char **)t2);
    t2 = (t0 + 23232);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(278, ng0);
    t2 = (t0 + 14032U);
    t3 = *((char **)t2);
    t2 = (t0 + 19072);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(280, ng0);
    t2 = (t0 + 16912U);
    t3 = *((char **)t2);
    t2 = (t0 + 21152);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    xsi_set_current_line(281, ng0);
    t2 = (t0 + 17072U);
    t3 = *((char **)t2);
    t2 = (t0 + 21312);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    goto LAB12;

}

static void Always_286_12(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 31448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(286, ng0);
    t2 = (t0 + 34936);
    *((int *)t2) = 1;
    t3 = (t0 + 31480);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(286, ng0);

LAB5:    xsi_set_current_line(287, ng0);
    t4 = (t0 + 21632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 472);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t6 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t8);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB9:    t24 = (t0 + 18752);
    xsi_vlogvar_wait_assign_value(t24, t9, 0, 0, 1, 0LL);
    goto LAB2;

LAB7:    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB8:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

}

static void Cont_291_13(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 31696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(292, ng0);
    t2 = (t0 + 25472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 25632);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t9 = (t4 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    t24 = (t0 + 35592);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 1U;
    t30 = t29;
    t31 = (t8 + 4);
    t32 = *((unsigned int *)t8);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t24, 0, 0);
    t37 = (t0 + 34952);
    *((int *)t37) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

}

static void Always_296_14(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;

LAB0:    t1 = (t0 + 31944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(296, ng0);
    t2 = (t0 + 34968);
    *((int *)t2) = 1;
    t3 = (t0 + 31976);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(296, ng0);

LAB5:    xsi_set_current_line(297, ng0);
    t4 = (t0 + 24672);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 25472);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(298, ng0);
    t2 = (t0 + 24832);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 25632);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(299, ng0);
    t2 = (t0 + 12912U);
    t3 = *((char **)t2);

LAB6:    t2 = (t0 + 2104);
    t4 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t3, 2, t4, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 2240);
    t4 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t3, 2, t4, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 2376);
    t4 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t3, 2, t4, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 2512);
    t4 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t3, 2, t4, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(305, ng0);
    t2 = (t0 + 13072U);
    t4 = *((char **)t2);

LAB16:    t2 = (t0 + 2648);
    t5 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 32);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 2784);
    t5 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 32);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 2920);
    t5 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 32);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 3056);
    t5 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 32);
    if (t8 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(300, ng0);
    t2 = (t0 + 26592);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 25472);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB15;

LAB9:    xsi_set_current_line(301, ng0);
    t2 = (t0 + 16272U);
    t5 = *((char **)t2);
    t2 = (t0 + 25472);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);
    goto LAB15;

LAB11:    xsi_set_current_line(302, ng0);
    t2 = (t0 + 27392);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 25472);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB15;

LAB13:    xsi_set_current_line(303, ng0);
    t2 = (t0 + 24672);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 25472);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB15;

LAB17:    xsi_set_current_line(306, ng0);
    t2 = (t0 + 26592);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t9 = (t0 + 25632);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    goto LAB25;

LAB19:    xsi_set_current_line(307, ng0);
    t2 = (t0 + 16272U);
    t6 = *((char **)t2);
    t2 = (t0 + 25632);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    goto LAB25;

LAB21:    xsi_set_current_line(308, ng0);
    t2 = (t0 + 27392);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t9 = (t0 + 25632);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    goto LAB25;

LAB23:    xsi_set_current_line(309, ng0);
    t2 = (t0 + 24832);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t9 = (t0 + 25632);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    goto LAB25;

}

static void Always_316_15(char *t0)
{
    char t12[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 32192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(316, ng0);
    t2 = (t0 + 34984);
    *((int *)t2) = 1;
    t3 = (t0 + 32224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(316, ng0);

LAB5:    xsi_set_current_line(317, ng0);
    t4 = (t0 + 25472);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 25152);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(318, ng0);
    t2 = (t0 + 25632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 25312);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(319, ng0);
    t2 = (t0 + 21952);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = (t0 + 1152);
    t6 = *((char **)t5);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t6, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(324, ng0);
    t2 = (t0 + 22112);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);

LAB14:    t6 = (t0 + 1560);
    t7 = *((char **)t6);
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t7, 32);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 32);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 32);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 32);
    if (t8 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(320, ng0);
    t5 = (t0 + 25472);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t10 = (t0 + 25152);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    goto LAB13;

LAB9:    xsi_set_current_line(321, ng0);
    t2 = (t0 + 24352);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 25152);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB13;

LAB11:    xsi_set_current_line(322, ng0);
    t2 = (t0 + 24352);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 25152);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB13;

LAB15:    xsi_set_current_line(325, ng0);
    t6 = (t0 + 25632);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 25312);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 32);
    goto LAB23;

LAB17:    xsi_set_current_line(326, ng0);
    t2 = (t0 + 24992);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t9 = (t0 + 25312);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    goto LAB23;

LAB19:    xsi_set_current_line(327, ng0);
    t2 = ((char*)((ng10)));
    t6 = (t0 + 25312);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 32);
    goto LAB23;

LAB21:    xsi_set_current_line(328, ng0);
    t2 = ((char*)((ng10)));
    t6 = (t0 + 24992);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memset(t13, 0, 8);
    t10 = (t13 + 4);
    t11 = (t9 + 4);
    t14 = *((unsigned int *)t9);
    t15 = (t14 >> 0);
    *((unsigned int *)t13) = t15;
    t16 = *((unsigned int *)t11);
    t17 = (t16 >> 0);
    *((unsigned int *)t10) = t17;
    t18 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t18 & 1073741823U);
    t19 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t19 & 1073741823U);
    xsi_vlogtype_concat(t12, 32, 32, 2U, t13, 30, t2, 2);
    t20 = (t0 + 25312);
    xsi_vlogvar_assign_value(t20, t12, 0, 0, 32);
    goto LAB23;

}

static void Always_343_16(char *t0)
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

LAB0:    t1 = (t0 + 32440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(343, ng0);
    t2 = (t0 + 35000);
    *((int *)t2) = 1;
    t3 = (t0 + 32472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(343, ng0);

LAB5:    xsi_set_current_line(344, ng0);
    t4 = (t0 + 15312U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(361, ng0);
    t2 = (t0 + 15472U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(344, ng0);

LAB9:    xsi_set_current_line(345, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 20512);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(346, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 21792);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(347, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 25792);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(348, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 26112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(349, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 25952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(350, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 19392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(351, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 26272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(352, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 26432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(353, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 26592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(354, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 21472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(355, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 23072);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(356, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 23392);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(357, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 19552);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(358, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 26912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(361, ng0);

LAB13:    xsi_set_current_line(362, ng0);
    t4 = (t0 + 20352);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 20512);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(363, ng0);
    t2 = (t0 + 21632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 21792);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);
    xsi_set_current_line(364, ng0);
    t2 = (t0 + 24192);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 25792);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(365, ng0);
    t2 = (t0 + 24512);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 26112);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(366, ng0);
    t2 = (t0 + 24352);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 25952);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(367, ng0);
    t2 = (t0 + 18912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 19392);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(371, ng0);
    t2 = (t0 + 25472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 26272);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(372, ng0);
    t2 = (t0 + 25632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 26432);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(375, ng0);
    t2 = (t0 + 17872U);
    t3 = *((char **)t2);
    t2 = (t0 + 26592);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(376, ng0);
    t2 = (t0 + 22752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 21472);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(377, ng0);
    t2 = (t0 + 22912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 23072);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(378, ng0);
    t2 = (t0 + 23232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 23392);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(379, ng0);
    t2 = (t0 + 19072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 19552);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(380, ng0);
    t2 = (t0 + 18032U);
    t3 = *((char **)t2);
    t2 = (t0 + 26912);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    goto LAB12;

}

static void Always_385_17(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 32688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(385, ng0);
    t2 = (t0 + 35016);
    *((int *)t2) = 1;
    t3 = (t0 + 32720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(385, ng0);

LAB5:    xsi_set_current_line(386, ng0);
    t4 = (t0 + 21792);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 472);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t6 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t8);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB9:    t24 = (t0 + 19232);
    xsi_vlogvar_wait_assign_value(t24, t9, 0, 0, 1, 0LL);
    goto LAB2;

LAB7:    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB8:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

}

static void Always_389_18(char *t0)
{
    char t10[8];
    char t11[8];
    char t23[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 32936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(389, ng0);
    t2 = (t0 + 35032);
    *((int *)t2) = 1;
    t3 = (t0 + 32968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(389, ng0);

LAB5:    xsi_set_current_line(390, ng0);
    t4 = (t0 + 21792);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 608);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t8, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(395, ng0);
    t2 = (t0 + 25952);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 26752);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(391, ng0);
    t7 = ((char*)((ng10)));
    t12 = (t0 + 26112);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t11, 0, 8);
    t15 = (t11 + 4);
    t16 = (t14 + 4);
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 0);
    *((unsigned int *)t11) = t18;
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 0);
    *((unsigned int *)t15) = t20;
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t21 & 67108863U);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 & 67108863U);
    t24 = (t0 + 25792);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t23, 0, 8);
    t27 = (t23 + 4);
    t28 = (t26 + 4);
    t29 = *((unsigned int *)t26);
    t30 = (t29 >> 28);
    *((unsigned int *)t23) = t30;
    t31 = *((unsigned int *)t28);
    t32 = (t31 >> 28);
    *((unsigned int *)t27) = t32;
    t33 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t33 & 15U);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t34 & 15U);
    xsi_vlogtype_concat(t10, 32, 32, 3U, t23, 4, t11, 26, t7, 2);
    t35 = (t0 + 26752);
    xsi_vlogvar_wait_assign_value(t35, t10, 0, 0, 32, 0LL);
    goto LAB17;

LAB9:    xsi_set_current_line(392, ng0);
    t2 = (t0 + 26272);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memcpy(t10, t5, 8);
    t7 = (t0 + 26752);
    xsi_vlogvar_wait_assign_value(t7, t10, 0, 0, 32, 0LL);
    goto LAB17;

LAB11:    xsi_set_current_line(393, ng0);
    t2 = (t0 + 26912);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t11, 0, 8);
    t7 = (t5 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    t19 = *((unsigned int *)t5);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t7) != 0)
        goto LAB20;

LAB21:    t12 = (t11 + 4);
    t22 = *((unsigned int *)t11);
    t29 = *((unsigned int *)t12);
    t30 = (t22 || t29);
    if (t30 > 0)
        goto LAB22;

LAB23:    t31 = *((unsigned int *)t11);
    t32 = (~(t31));
    t33 = *((unsigned int *)t12);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t12) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t11) > 0)
        goto LAB28;

LAB29:    memcpy(t10, t25, 8);

LAB30:    t26 = (t0 + 26752);
    xsi_vlogvar_wait_assign_value(t26, t10, 0, 0, 32, 0LL);
    goto LAB17;

LAB13:    xsi_set_current_line(394, ng0);
    t2 = (t0 + 26912);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t11, 0, 8);
    t7 = (t5 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    t19 = *((unsigned int *)t5);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t7) != 0)
        goto LAB33;

LAB34:    t12 = (t11 + 4);
    t22 = *((unsigned int *)t11);
    t29 = *((unsigned int *)t12);
    t30 = (t22 || t29);
    if (t30 > 0)
        goto LAB35;

LAB36:    t31 = *((unsigned int *)t11);
    t32 = (~(t31));
    t33 = *((unsigned int *)t12);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t12) > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t11) > 0)
        goto LAB41;

LAB42:    memcpy(t10, t25, 8);

LAB43:    t26 = (t0 + 26752);
    xsi_vlogvar_wait_assign_value(t26, t10, 0, 0, 32, 0LL);
    goto LAB17;

LAB18:    *((unsigned int *)t11) = 1;
    goto LAB21;

LAB20:    t8 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB21;

LAB22:    t13 = (t0 + 25952);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    goto LAB23;

LAB24:    t16 = (t0 + 26592);
    t24 = (t16 + 56U);
    t25 = *((char **)t24);
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t10, 32, t15, 32, t25, 32);
    goto LAB30;

LAB28:    memcpy(t10, t15, 8);
    goto LAB30;

LAB31:    *((unsigned int *)t11) = 1;
    goto LAB34;

LAB33:    t8 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB34;

LAB35:    t13 = (t0 + 26592);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    goto LAB36;

LAB37:    t16 = (t0 + 25952);
    t24 = (t16 + 56U);
    t25 = *((char **)t24);
    goto LAB38;

LAB39:    xsi_vlog_unsigned_bit_combine(t10, 32, t15, 32, t25, 32);
    goto LAB43;

LAB41:    memcpy(t10, t15, 8);
    goto LAB43;

}

static void Cont_399_19(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 33184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(400, ng0);
    t2 = (t0 + 21472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 35656);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 35048);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_399_20(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 33432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(400, ng0);
    t2 = (t0 + 23072);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 35720);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 35064);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_399_21(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 33680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(401, ng0);
    t2 = (t0 + 26592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 35784);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 35080);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_399_22(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 33928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(402, ng0);
    t2 = (t0 + 26432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 35848);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 35096);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_406_23(char *t0)
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

LAB0:    t1 = (t0 + 34176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(406, ng0);
    t2 = (t0 + 35112);
    *((int *)t2) = 1;
    t3 = (t0 + 34208);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(406, ng0);

LAB5:    xsi_set_current_line(407, ng0);
    t4 = (t0 + 16432U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(415, ng0);
    t2 = (t0 + 16592U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(407, ng0);

LAB9:    xsi_set_current_line(408, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 20672);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(409, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 20832);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(410, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 23552);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(411, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 20992);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(412, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 27072);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(413, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 27232);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(415, ng0);

LAB13:    xsi_set_current_line(416, ng0);
    t4 = (t0 + 20512);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 20672);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(417, ng0);
    t2 = (t0 + 19552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 20832);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(418, ng0);
    t2 = (t0 + 23392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 23552);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(419, ng0);
    t2 = (t0 + 19392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 20992);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(420, ng0);
    t2 = (t0 + 26592);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 27072);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(421, ng0);
    t2 = (t0 + 16272U);
    t3 = *((char **)t2);
    t2 = (t0 + 27232);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB12;

}

static void Always_425_24(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 34424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(425, ng0);
    t2 = (t0 + 35128);
    *((int *)t2) = 1;
    t3 = (t0 + 34456);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(425, ng0);

LAB5:    xsi_set_current_line(426, ng0);
    t4 = (t0 + 27072);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 27392);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(427, ng0);
    t2 = (t0 + 23552);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = (t0 + 4280);
    t6 = *((char **)t5);
    t8 = xsi_vlog_unsigned_case_compare(t4, 1, t6, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 4416);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 1, t3, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(428, ng0);
    t5 = (t0 + 27072);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t10 = (t0 + 27392);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    goto LAB11;

LAB9:    xsi_set_current_line(429, ng0);
    t2 = (t0 + 27232);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 27392);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB11;

}


extern void work_m_00000000000035040408_3027548060_init()
{
	static char *pe[] = {(void *)Always_130_0,(void *)Cont_160_1,(void *)Cont_165_2,(void *)Always_168_3,(void *)Always_173_4,(void *)Always_186_5,(void *)Cont_201_6,(void *)Cont_201_7,(void *)Cont_201_8,(void *)Cont_201_9,(void *)Always_207_10,(void *)Always_232_11,(void *)Always_286_12,(void *)Cont_291_13,(void *)Always_296_14,(void *)Always_316_15,(void *)Always_343_16,(void *)Always_385_17,(void *)Always_389_18,(void *)Cont_399_19,(void *)Cont_399_20,(void *)Cont_399_21,(void *)Cont_399_22,(void *)Always_406_23,(void *)Always_425_24};
	xsi_register_didat("work_m_00000000000035040408_3027548060", "isim/sim_mips_isim_beh.exe.sim/work/m_00000000000035040408_3027548060.didat");
	xsi_register_executes(pe);
}
