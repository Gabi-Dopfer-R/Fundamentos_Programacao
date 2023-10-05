/*Faça um programa que imprima os n (indicado pelo usuário) primeiros números pares
(começa em 0). Apresentar 5 valores por linha.*/

#include <stdio.h>

int main (void)

{
    int n, a, b;

    printf("Insira a quantidade de valores pares que devem ser mostrados:");
    scanf("%d", &n);

    b = 1;

    for(a = 0; a < 2 * n; a += 2, b++)
    {
        printf("%d\t", a);

        if(b % 5 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}
