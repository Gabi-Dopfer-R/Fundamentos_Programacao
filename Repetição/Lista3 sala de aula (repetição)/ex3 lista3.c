/*Faça um programa que mostre o resultado da seguinte soma, sendo n o valor
informado pelo usuário:
Soma = 1 + 1/2 + 1/3 + 1/4 + 1/5 + … + 1/n */

#include <stdio.h>

int main (void)

{
    int n, base;
    float soma;

    printf("Isira o n%cmero para o denominador da fra%c%co:", 163, 135, 198);
    scanf("%d", &n);

    soma = 0;

    for(base = 1; base <= n; base++)
    {
        soma = soma + (float)1/base;
    }

    printf("Soma: %f", soma);

    return 0;
}
