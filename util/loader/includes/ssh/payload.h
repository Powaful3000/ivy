#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libssh/libssh.h>
#pragma once


/*
    *    util/loader/includes/ssh/payload.h
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


void ssh_exec_payload(char *ipaddr, char *payload, ssh_session session);