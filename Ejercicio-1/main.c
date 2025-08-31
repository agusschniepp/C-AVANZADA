#include "mounstruo_t.h"
#include "evolution.h"
#include <stdio.h>

int main () {

    mounstruo_t pepe = {
    .nombre = "El Pepe",
    .vida = 3060,
    .ataque = 777.7,
    .defensa = 3000.30
};

    printf("Pepe antes de la evolucion\n");
    imprimirMonstruo (pepe);
    printf("Pepe despues de la evolucion\n");

    // Existen dos formas, que evolution devuelta una nueva estructura
    // O pasar la estructura como puntero para modificar su valor

    // Cuando pasas un parametro a una funcion se hace una copia
    // Del parametro y dentro de la funcion se utiliza eso
    evolution(&pepe);
    imprimirMonstruo(pepe);

    return 0;
}