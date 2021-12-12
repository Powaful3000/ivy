#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#pragma once


/*
    *    util/loader/includes/telnet/connect.h
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


void telnet_load(char *ipaddr, char *username, char *password, char *payload);