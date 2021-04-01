/*
 * mpu_region_icache_usage.h
 *
 *  Created on: 1 Apr 2021
 *      Author: Chester Gillon
 */

#ifndef MPU_REGION_ICACHE_USAGE_H_
#define MPU_REGION_ICACHE_USAGE_H_

#ifdef __cplusplus
extern "C" {
#endif


void mpu_region_x_instructions __attribute__((section(".mpu_region_x"))) (void);
void mpu_region_y_instructions __attribute__((section(".mpu_region_y"))) (void);


#ifdef __cplusplus
}
#endif

#endif /* MPU_REGION_ICACHE_USAGE_H_ */
