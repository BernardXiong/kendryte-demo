/*
 * Copyright (c) 2006-2018, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2018/12/19     Bernard      The first version
 */

#include <rtthread.h>

RT_WEAK
int exec_demo(void)
{
    return 0;
}
MSH_CMD_EXPORT(exec_demo, run demo);
