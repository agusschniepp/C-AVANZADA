#include "len.h"
#include "mayus.h"
#include <stdio.h>

int main () {

    char text[] = "hola me llamo agus";

    //printf("El Largo del texto sin espacios: %lu\n",len(text));
    mayus(text);
    printf("%s\n",text);
}