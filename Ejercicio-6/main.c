#include <stdio.h>
#include "crearPersona.h"
#include "persona_t.h"
#include <stdlib.h>
#include "eliminarPersona.h"

int main () {

    persona_t *agus = crearPersona("Agustin",22);
    
    printf("%s\n", agus->nombre);
    eliminarPersona(agus);
    printf("%s\n", agus->nombre); //Segmentation fault. Ya no esta definido
                                 // Este bloque de memoria
    return 0;
}