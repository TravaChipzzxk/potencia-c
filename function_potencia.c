#include <stdio.h>

int calcule_a_potencia(int base, int expoente) {
    int resultado = 1;
    int i;
    for (i = 0; i < expoente; i++) {
        resultado = resultado * base;
    }
    return resultado;
}