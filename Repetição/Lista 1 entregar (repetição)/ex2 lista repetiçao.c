/*Elaborar um programa para mostrar, em ordem decrescente, os números divisíveis por 3 entre 200 e 100.*/

#include <stdio.h>

int main (void)

{
    int a;

    printf("Numeros divisiveis por 3 entre 100 e 200 reproduzidos de forma decrescente:\n");

    for (a = 200; (a >= 100); a--)
    {
        while (a % 3 == 0)
        {
            printf("\/%d", a);
            a--;
        }
    }

    return 0;
}
