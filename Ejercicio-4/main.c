#include <stdint.h>
#include <stdio.h>

int main () {

    uint8_t arreglo[8];
    arreglo[0] = (uint8_t) 1;
    arreglo[1] = (uint8_t) 2;
    arreglo[3] = (uint8_t) 3;

    //  uint8_t arreglo[8] = {1,2,3,4,5,6,7,8} seria otra forma

    arreglo[7] = -1;

    uint8_t *p = arreglo;
    p += 7;
    printf("%p\n", (void*) p);
    printf("%d\n", (int8_t) *p);
    
    p +=1; //Si solo avanzo a la siguiente posicion, por mas que no este
           // Definida, si no opero con ella no pasa nada
    
    // Si hago saltaria error *p = 5; 
    return 0;
}