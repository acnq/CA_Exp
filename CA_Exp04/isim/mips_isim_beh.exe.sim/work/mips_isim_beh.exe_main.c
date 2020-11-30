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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002258938251_3092946469_init();
    work_m_00000000002799876866_1621107508_init();
    work_m_00000000003192907568_2725559894_init();
    work_m_00000000000035040408_3027548060_init();
    work_m_00000000000088495118_1602209333_init();
    work_m_00000000000254283397_1397843898_init();
    work_m_00000000003387696891_0362415942_init();
    work_m_00000000001494838369_3877310806_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001494838369_3877310806");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
