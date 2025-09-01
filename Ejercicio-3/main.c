#include <stdio.h>
#include <stdint.h>
int main(){

//uint8_t *x = (uint8_t*) 0xF0; Son direcciones teoricas como ejemplo
//int8_t *y = (int8_t*) 0xF6; En la practica estas no funcionan

// Por eso defininos un array que ocupe espacio en memoria y usamos eso
// Como ejemplo demostrativo para ver la direccion de memoria y el valor
// que se almacena
uint8_t data[16];    
data[0] = 255;          
data[6] = -5;          

uint8_t *x = &data[0];
int8_t *y = (int8_t*) &data[6];

printf("Dir de x: %p Valor: %d\n", (void*) x, *x);
printf("Dir de y: %p Valor: %d\n", (void*) y, *y);
//Devolver´a:
// Dir de x: 0xF0 Valor: 255
// Dir de y: 0xF6 Valor: -128
}