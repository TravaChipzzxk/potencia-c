#include <stdio.h>
#include "function_potencia.c"

int calcule_a_potencia(int base, int expoente);

int main(int argc, char *argv[])
{
    int base, expoente, resultado;

    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    resultado = calcule_a_potencia(base, expoente);
    printf("O resultado eh: %d\n", resultado);

    printf("Criado por Allyson Rodolfo da Silva (https://github.com/TravaChipzzxk)\n");
    return 0;
}