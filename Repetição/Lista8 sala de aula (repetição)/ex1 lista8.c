/*Fazer um programa que calcule o fatorial dos números inteiros de 1 até 12. Fazer com
que a saída do programa seja mostrada como no exemplo a seguir:*/

#include <stdio.h>

int main (void)

{
    char resp;
    int a, b, fatorial;

    do
    {
        printf("Fatorial dos valore entre 1 e 12:\n");
        for(a = 1; a <= 12; a++)
        {
            fatorial = 1;

            printf("%d! => ", a);

            for(b = 1; b <= a; b++)
            {
                printf("%d", b);
                if (b < a)
                {
                    printf(" * ");
                }

                fatorial = b * fatorial;
            }

            printf(" = %d\n", fatorial);char resp;
        }

        printf("\nSe deseja continuar o programa insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while((resp == 's')||(resp == 'S'));

    return 0;
}
