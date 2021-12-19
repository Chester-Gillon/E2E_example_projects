/*
 * @file pthread_setname_np.h
 * @date 19 Dec 2021
 * @author Chester Gillon
 * @description Interface which defines the pthread_setname_np() function for SYS/BIOS
 */

#ifndef PTHREAD_SETNAME_NP_H_
#define PTHREAD_SETNAME_NP_H_

#include <pthread.h>

int pthread_setname_np(pthread_t thread, const char *name);

#endif /* PTHREAD_SETNAME_NP_H_ */
