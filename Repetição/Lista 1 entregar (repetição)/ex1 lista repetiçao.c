/*Elaborar um programa para mostrar os números pares entre 20 e 100. Fazer a média dos valores desse
intervalo que são divisíveis por 5.*/

#include <stdio.h>

int main (void)

{
    int a;

    printf("Lista de numeros entre 20 e 100 pares e/ou divisiveis por 2:\n");

    printf("Numeros pares:\n");
    for(a = 20;a <= 100; a++)
    {
        if(a % 2 == 0)
        {
            printf("\/%d", a);
        }
    }

    printf("\nNumeros divisiveis por 5:\n");
    for(a = 20;a <= 100; a++)
    {
        if(a % 5 == 0)
        {
            printf("\/%d", a);
        }
    }

    return 0;
}
