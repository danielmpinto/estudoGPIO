/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include "pico/stdlib.h"
#include <stdio.h>


int main() {
const uint BTN_1 = 0;
const uint LED_1_BTN = 1;
const uint LED_PIN = 21;

// inicializando pinos
gpio_init(LED_PIN);
gpio_init(LED_1_BTN);
gpio_init(BTN_1);

// setando pinos
gpio_set_dir(LED_PIN, GPIO_OUT);
gpio_set_dir(LED_1_BTN, GPIO_OUT);
gpio_set_dir(BTN_1, GPIO_IN);

// pull up interno btn 1
gpio_pull_up(BTN_1);

// void btn_pressed(){
//     if (gpio_get(LED_1_BTN) == 0){
//         gpio_put(LED_1_BTN, 1);
//     }
//     else{ gpio_put(LED_1_BTN, 0);
//     }
// }

// loop maain
/// led de funcionamento
while (true) {
    if(gpio_get(BTN_1) == 1){
        gpio_put(LED_1_BTN, 1);
    }
    else {
        gpio_put(LED_1_BTN, 0);

    }
    
}
}

