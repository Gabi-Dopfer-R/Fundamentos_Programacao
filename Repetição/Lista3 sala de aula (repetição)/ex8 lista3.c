/*Apresentar os números pares entre 100 e 200. Contar quantos são ímpares e não
divisíveis por 3 nesse intervalo. Fazer a média dos valores pares e divisíveis por 5 do
intervalo.*/

#include <stdio.h>

int main (void)

{
    int soma, a, b, c;

    c = 0;
    b = 0;
    soma = 0;

    printf("Intervalo de entre 100 e 200.\n");
    printf("N%cmeros pares:\n", 163);

    for(a = 100; a <= 200; a++)
    {
        if(a % 2 == 0)
        {
            printf("%d\t", a);

            if (a % 5 == 0)
            {
               soma = a + soma;
               c++;
            }
        }
        if((a % 2 != 0)&&(a % 3 != 0))
        {
            b++;
        }
    }
    printf("\nExistem %d valores %cmpares e n%co divis%cveis por 3 nesse intervalo.\n", b, 161, 198);
    printf("A m%cdia dos valores pares e divis%cveis por 5 %c: %.2f", 130, 161, 130, (float)soma / c);
}

