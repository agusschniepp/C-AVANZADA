#include <stdio.h>
#include "crearPersona.h"
#include "persona_t.h"
#include <stdlib.h>
#include "eliminarPersona.h"

void eliminarPersona (persona_t *persona) {
    free (persona);
}
