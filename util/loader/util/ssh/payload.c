#include "../../includes/ssh/payload.h"


/*
    *    util/loader/util/ssh/payload.c
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


void ssh_exec_payload(char *ipaddr, char *payload, ssh_session session) {
    int b, rc;
    char buf[256];
    ssh_channel chan;
    
    chan = ssh_channel_new(session);
    rc = ssh_channel_open_session(chan); 
    rc = ssh_channel_request_exec(chan, payload);
    
    if (rc == SSH_ERROR) {
        printf("\e[0;31mStatus: Failed to send command!\n", ipaddr);
        return;
    }
    
    b = ssh_channel_read(chan, buf, sizeof(buf), 0);
    while (b > 0) {
        b = ssh_channel_read(chan, buf, sizeof(buf), 0);
    }
    
    printf("\e[0;32mStatus: Sent Command!\n", ipaddr);
    
    ssh_channel_send_eof(chan);
    ssh_channel_close(chan);
    ssh_channel_free(chan); 
}