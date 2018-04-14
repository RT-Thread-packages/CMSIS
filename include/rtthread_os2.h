/*
 * File      : rtthread.h
 * This file is part of RT-Thread RTOS
 * COPYRIGHT (C) 2006 - 2018, RT-Thread Development Team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Change Logs:
 * Date           Author       Notes
 * 2018-04-12     misonyo      the first version
 */

#ifndef __RTTHREAD_OS2_H__
#define __RTTHREAD_OS2_H__

#include <rtthread.h>


#ifdef __cplusplus
extern "C" {
#endif


typedef struct
{
    rt_uint8_t flags;
    struct rt_thread thread;
    rt_sem_t joinable_sem;    ///< semaphore for joinable thread
    rt_uint8_t flag_set;      ///< thread flag set
}thread_cb_t;

typedef struct
{
    rt_uint8_t flags;
    struct rt_timer timer;
}timer_cb_t;

typedef struct
{
    rt_uint8_t flags;
    struct rt_event event;
}event_cb_t;

typedef struct
{
    rt_uint8_t flags;
    struct rt_mutex mutex;
}mutex_cb_t;

typedef struct
{
    rt_uint8_t flags;
    struct rt_semaphore sem;
}sem_cb_t;

typedef struct
{
    rt_uint8_t flags;
    struct rt_mempool mp;
}mempool_cb_t;

typedef struct
{
    rt_uint32_t init_msg_size;
    rt_uint8_t flags;
    struct rt_messagequeue mq;
}mq_cb_t;



#ifdef __cplusplus
}
#endif

#endif
