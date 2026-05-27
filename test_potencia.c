#include <stdio.h>

int calcule_a_potencia(int base, int expoente);

int main() {
    printf("3^2 = %d (Valor esperado: 9)\n", calcule_a_potencia(3, 2));
    printf("3^3 = %d (Valor esperado: 27)\n", calcule_a_potencia(3, 3));
    printf("4^10 = %d (Valor esperado: 1048576)\n", calcule_a_potencia(4, 10));
    printf("5^5 = %d (Valor esperado: 3125)\n", calcule_a_potencia(5, 5));
    
    printf("Criado por Allyson Rodolfo da Silva (https://github.com/TravaChipzzxk)\n");
    return 0;
}