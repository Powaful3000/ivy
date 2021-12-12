#include "../../includes/adb/payload.h"


/*
    *    util/loader/util/adb/payload.c
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


void adb_exec_payload(int fd, char *payload) {
    if (send(fd, payload, strlen(payload), 0) == -1) {
        printf("\e[0;32mStatus: Sent Command!\n");
    } else {
        printf("\e[0;31mStatus: Failed to send command!\n");
    }
}