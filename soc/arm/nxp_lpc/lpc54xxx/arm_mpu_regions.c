/*
 * Copyright (c) 2017, NXP
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <soc.h>
#include <arch/arm/cortex_m/mpu/arm_mpu.h>

#include "arm_mpu_mem_cfg.h"

static const struct arm_mpu_region mpu_regions[] = {
	/* Region 0 */
	MPU_REGION_ENTRY("FLASH_0",
			 CONFIG_FLASH_BASE_ADDRESS,
			 REGION_FLASH_ATTR(REGION_FLASH_SIZE)),
	/* Region 1 */
	MPU_REGION_ENTRY("SRAM_0",
			 CONFIG_SRAM_BASE_ADDRESS,
			 REGION_RAM_ATTR(REGION_SRAM_0_SIZE)),
};

const struct arm_mpu_config mpu_config = {
	.num_regions = ARRAY_SIZE(mpu_regions),
	.mpu_regions = mpu_regions,
};
