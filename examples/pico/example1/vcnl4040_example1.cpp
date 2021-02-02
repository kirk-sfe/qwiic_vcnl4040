/**
 * Copyright (c) 2020 SparkFun Electronics
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <stdio.h>
#include <string.h>

#include "pico/stdlib.h"
#include "qwiic_vcnl4040.h"

VCNL4040 myDevice;


int main() {

     // setup stdio. Output device is controlled in CMakeLists.txt file
    stdio_init_all();

	printf("Starting VCNL4040 Test\n\n");

    // Init the system 

    if(!myDevice.begin()){
    	printf("Error starting the qwiic VCNL4040 device. Aboarting\n");
  		return 0;
    }

    while (1) {

        printf("Proximity Value: %d\n", myDevice.getProximity());

        sleep_ms(1000);

    }

    return 0;
}
