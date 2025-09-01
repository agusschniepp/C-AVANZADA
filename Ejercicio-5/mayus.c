#include "mayus.h"
#include <stdio.h>

void mayus (char *str) {
    int a = 'A'-'a';
    while (*str != '\0'){
        if (*str != ' '){
            *str += a;
            str++;
        }else {
        str++;
        };
    };
}