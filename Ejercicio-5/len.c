#include "len.h"
#include <stdio.h>

size_t len (char *str){
    size_t len = 0;
    while (*str != '\0'){
        if (*str != ' '){
        len++;
        str++;
        }else {
           str++; 
        }
    }
    return len;
}