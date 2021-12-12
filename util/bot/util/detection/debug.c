#include "../../includes/detection/debug.h"


/*
    *    util/bot/util/detection/debug.c
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


bool debug_detection(void) {
    if (syscall(SYS_ptrace, PTRACE_TRACEME, 0, 0, 0) == -1) {
        return true;
    }
    syscall(SYS_ptrace, PTRACE_DETACH, syscall(SYS_getpid), 0, 0);
    return false;
}