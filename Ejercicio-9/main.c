#include <stdio.h>
int main() {
int matrix[3][4] = {
{1, 2, 3, 4},
{5, 6, 7, 8},
{9, 10, 11, 12}
};
// p apunta al int en la fila 0, columna 0
int *p = &matrix[0][0]; //&matrix[0][0] es la direccion de memoria de inicio de la matriz
// ¿que es reshape?
int (*reshape)[2] = (int (*)[2]) p; // Nueva variable que interpreta la matriz en 2 columnas y no 4
printf("%d\n", p[3]); // direccion de comienzo de matriz + avanzar 3= elemento que pertenezca a fila 1 orden 3
printf("%d\n", reshape[1][1]); // Fila 2 columna 2, nueva matriz de (filas)6x2(columnas)
return 0; // Recordar que int(*)[columnas] "puntero a un array de enteros de tamaño columnas"
// Como (int (*)[2]) p; esta entre ()-> Esta Casteando p a ese tipo de dato matriz de elementosx2columnas
}