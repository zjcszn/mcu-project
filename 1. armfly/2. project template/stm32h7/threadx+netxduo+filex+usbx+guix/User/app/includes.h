/*
*********************************************************************************************************
*
*	模块名称 : 头文件汇总
*	文件名称 : includes.h
*	版    本 : V1.0
*	说    明 : 当前使用头文件汇总
*
*	修改记录 :
*		版本号    日期        作者     说明
*		V1.0    2020-06-04  Eric2013   首次发布
*
*	Copyright (C), 2019-2030, 安富莱电子 www.armfly.com
*
*********************************************************************************************************
*/

#ifndef  __INCLUDES_H__
#define  __INCLUDES_H__

/*
*********************************************************************************************************
*                                         标准库
*********************************************************************************************************
*/
#include  <stdarg.h>
#include  <stdio.h>
#include  <stdlib.h>
#include  <math.h>

/*
*********************************************************************************************************
*                                           OS
*********************************************************************************************************
*/
#include "tx_api.h"
#include "tx_timer.h"
#include "fx_api.h"
#include "nx_api.h"

#include "ux_api.h"
#include "ux_system.h"
#include "ux_utility.h"
#include "ux_device_stack.h"
#include "ux_dcd_stm32.h"
#include "ux_device_descriptors.h"
#include "ux_device_class_storage.h"
#include "ux_device_msc.h"

/*
*********************************************************************************************************
*                                        APP / BSP
*********************************************************************************************************
*/

#include  <bsp.h>

/*
*********************************************************************************************************
*                                          变量和函数
*********************************************************************************************************
*/
/* 方便RTOS里面使用 */
extern void SysTick_ISR(void);

extern EXECUTION_TIME     _tx_execution_thread_time_total;
extern EXECUTION_TIME     _tx_execution_isr_time_total;
extern EXECUTION_TIME     _tx_execution_idle_time_total;

#define bsp_ProPer1ms  SysTick_ISR

#endif

/***************************** 安富莱电子 www.armfly.com (END OF FILE) *********************************/
