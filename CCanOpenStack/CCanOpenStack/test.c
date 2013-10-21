//
//  test.c
//  CCanOpenStack
//
//  Created by Timo Jääskeläinen on 20.10.2013.
//  Copyright (c) 2013 Timo Jääskeläinen. All rights reserved.
//

#include "test.h"
#include "log.h"
#include "test_can_bus.h"
#include "test_od.h"
#include "test_sdo.h"

/****************************** Global Functions *****************************/
extern void test_run_all_tests(void) {
    int error = 0;
    error |= test_can_bus_run();
    error |= test_od_run();
    error |= test_sdo_run();
    if (!error) {
        log_write_ln("test: ALL OK");
    } else {
        log_write_ln("test: ERRORS");
    }
}