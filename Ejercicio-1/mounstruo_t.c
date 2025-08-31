#include "mounstruo_t.h"
#include <stdio.h>

void imprimirMonstruo(mounstruo_t m) {
    printf("Nombre: %s\n", m.nombre);
    printf("Vida: %d\n", m.vida);
    printf("Ataque: %f\n", m.ataque);
    printf("Defensa: %f\n", m.defensa);
}
