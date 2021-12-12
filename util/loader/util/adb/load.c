#include "../../includes/adb/load.h"


/*
    *    util/loader/util/adb/load.c
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


void adb_load(char *filename, char *payload) {
    char data[5000];
    FILE * targ = fopen(filename, "r");
    if (targ == NULL) {
        fprintf(stderr, "\nError: Could not open file '%s'!", filename);
        exit(EXIT_FAILURE);
    }
    while (fgets(data, sizeof(data), targ) != NULL) {
        adb_connect_load(data, payload);
    }
}