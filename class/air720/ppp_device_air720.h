/*
 * Copyright (c) 2006-2019, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author         Notes
 * 2019-08-15    xiangxistu      the first version
 */

#ifndef __PPP_AIR720_H__
#define __PPP_AIR720_H__

#include <ppp_device.h>
#include <ppp_chat.h>

/* ppp_device base from ppp_device */
struct ppp_air720
{
    struct ppp_device  device;          /* ppp_device struct in ppp_air720 */
    enum ppp_trans_type type;           /* the type is used to establish a ppp connection */
};

extern int ppp_air720_register(void);

#endif  /* __PPP_AIR720_H__ */
