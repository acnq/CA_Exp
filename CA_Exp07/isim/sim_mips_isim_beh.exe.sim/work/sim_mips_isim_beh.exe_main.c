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
    work_m_00000000001018038820_3092946469_init();
    work_m_00000000002799876866_1621107508_init();
    work_m_00000000003896109208_2725559894_init();
    work_m_00000000001669867218_3027548060_init();
    work_m_00000000001312477101_1093763706_init();
    work_m_00000000001800972282_1602209333_init();
    work_m_00000000003847423983_1397843898_init();
    work_m_00000000000639490967_0362415942_init();
    work_m_00000000001528123443_3877310806_init();
    work_m_00000000002138168198_2302953071_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002138168198_2302953071");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
