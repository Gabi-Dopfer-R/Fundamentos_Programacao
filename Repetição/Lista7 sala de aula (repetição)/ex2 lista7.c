/*Escreva um programa que imprima todas as possibilidades de que no lançamento de
dois dados a soma das faces seja um valor informado pelo usuário. O usuário deve
informar um valor válido entre 2 a 12. Repetir a leitura até que o usuário informe um valor
válido.*/

#include <stdio.h>

int main (void)

{
    char resp;
    int n, a, b, c;
    do
    {
        do
        {
            printf("Informe a soma de dados desejada (entre 2 e 12):");
            fflush(stdin);
            scanf("%d", &n);

            if(n < 2 || n > 12)
            {
                printf("Soma inv%clida, tente novamente.\n", 160);
            }
        }while(n < 2 || n > 12);

        c = 0;

        for(a = 1; a <= 6; a++)
        {
            for(b = 6; b >= 1; b--)
            {
                if(a + b == n)
                {
                    printf("%d + %d = %d\n", a, b, n);
                    c++;
                }
            }
        }

        printf("O n%cmero de possibilidade %c: %d.\n", 163, 130, c);

        printf("Se deseja repetir o programa insira 'S' ou 's':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while(resp == 's' || resp == 'S');
}
