#include <stdio.h>
#include "crearPersona.h"
#include "persona_t.h"
#include <stdlib.h>
#include "eliminarPersona.h"

int main () {

    persona_t *agus = crearPersona("Agustin",22);
    
    printf("%s\n", agus->nombre);
    printf("%d\n", agus->edad);
    eliminarPersona(agus);
    //printf("%s\n", agus->nombre); //Segmentationn fault. Ya no esta definido
                                 // Este bloque de memoria
    return 0;
}