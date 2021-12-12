#include "includes/loader/loader.h"


/*
    *    util/loader/loader.c
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


int main(int argc, char **argv) {
    if (check_args(argc, argv) == false) {
        return EXIT_FAILURE;
    }
    handler(argc, argv);
    return EXIT_SUCCESS;
}