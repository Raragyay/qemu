/*
 * BCM2711 Random Number Generator emulation
 *
 * Copyright (C) 2017 Marcin Chojnacki <marcinch7@gmail.com>
 *
 * This work is licensed under the terms of the GNU GPL, version 2 or later.
 * See the COPYING file in the top-level directory.
 */

#ifndef BCM2711_RNG_H
#define BCM2711_RNG_H

#include "hw/sysbus.h"
#include "qom/object.h"

#define TYPE_BCM2711_RNG "bcm2711-rng200"
OBJECT_DECLARE_SIMPLE_TYPE(BCM2711RngState, BCM2711_RNG)

struct BCM2711RngState {
    SysBusDevice busdev;
    MemoryRegion iomem;

    uint32_t rng_ctrl;
    uint32_t rng_status;
};

#endif
