#ifndef MOUNSTRUO_H
#define MOUNSTRUO_H
typedef struct {
    const char *nombre; //Si el valor no va a cambiar poner "const"
    int vida;
    double ataque;
    double defensa;
}mounstruo_t;

void imprimirMonstruo(mounstruo_t m);

#endif // MOUNSTRUO_H
