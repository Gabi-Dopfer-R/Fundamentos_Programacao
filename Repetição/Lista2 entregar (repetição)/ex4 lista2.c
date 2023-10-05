/*Mostrar os valores ímpares e divisíveis por 7 entre 500 e 0 em ordem decrescente.
Obter a média dos pares e divisíveis por 3 desse intervalo.*/

#include <stdio.h>

int main (void)

{
    int a, b, soma;
    float media;

    soma = 0;
    a = 0;

    printf("Interv%clo entre 500 e 0:\n");
    printf("Valores %cmpares e divis%cveis por 7.\n", 161, 161);

    for(a = 500; a >= 0; a--)
    {
        if((a % 2 != 0)&&(a % 7 == 0))
        {
            printf("%d\t", a);
        }
        if((a % 2 == 0)&&(a % 3 == 0))
        {
            b++;
            soma = a + soma;
        }
    }

    printf("\nM%cdia dos valores pares e divis%cveis por 3: %.2f", 130, 161, (float)soma / b);

    return 0;
}
