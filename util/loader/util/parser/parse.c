#include "../../includes/parser/parse.h"


/*
    *    util/loader/util/parser/parse.c
    *    Date: 12/11/21
    *    Author: 0x80000000
*/


void parse(char *buffer, char *remove) {
    int r = 0;
    int a, g, o;
    size_t q = strlen(remove), v = strlen(buffer);
    for (a = 0; a < v; a++) {
       o = a;
       for (g = 0; g < q; g++) {
          if (buffer[a] == remove[g]) {
              a++;
          }
       }
       r = a - o;
       if (r == q) {
          a = o;
          for (g = a; g < (v - q); g++) {
              buffer[g] = buffer[g + q];
          }
          v = v - q;
          buffer[g]='\0';
       }
    }
}

void string_handler(char *username, char *data) {
    for (int i = 0; i < strlen(data); i++) {
        if (data[i] == ':') {
            data[i] = ' ';
            break;
        }
        username[i] = data[i];
    }
    parse(data, username);
}