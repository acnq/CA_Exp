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
    work_m_00000000001673622508_3632223972_init();
    work_m_00000000001010149997_2254302435_init();
    work_m_00000000004089440867_1012088544_init();
    work_m_00000000000553712429_2086751226_init();
    work_m_00000000001968620895_3478914295_init();
    work_m_00000000003365063128_2701349838_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003365063128_2701349838");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
