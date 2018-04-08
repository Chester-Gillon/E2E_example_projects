/*
 * @file test_interface.h
 * @date 8 Apr 2018
 * @author Chester Gillon
 * @brief Interface between main and the test threads
 */

#ifndef TEST_INTERFACE_H_
#define TEST_INTERFACE_H_

void *flashWriteThread(void *arg0);
void *ledThread (void *arg0);

#endif /* TEST_INTERFACE_H_ */
