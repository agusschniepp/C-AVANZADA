#include <stdio.h>
#include "crearPersona.h"
#include "persona_t.h"
#include <stdlib.h>

persona_t *crearPersona(char *nombre, int edad){
    
    persona_t *persona = malloc(sizeof(persona_t));
    persona->nombre = nombre;
    persona->edad = edad;
    return persona;
}