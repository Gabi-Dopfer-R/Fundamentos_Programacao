/*Fazer duas funções: uma para calcular o fatorial de um número e a outra para mostrar o fatorial de um número. 
Ambas as funções devem ser implementadas em um arquivo de cabeçalho chamado "Fatorial.h". 
Elaborar um programa que use essas funções para:
a) Calcular e mostrar o fatorial dos números entre 1 e 8.
b) Calcular e mostrar o fatorial de um valor informado pelo usuário. 
Continuar a leitura enquanto forem informados valores positivos.*/

#include <stdio.h>
#include "Fatorial.h"

int main (void)
{
    char resp;

    do
    {
        int menu, n;

        do
        {
            printf("======================= MENU =====================\n");
            printf("Insira o valor equivalente ao desejado:\n");
            printf("1 = Fatorial dos n%cmeros entre 1 e 8.\n", 163);
            printf("2 = Fatorial de um n%cmero.\n", 163);
            fflush(stdin);
            scanf("%d", &menu);
            printf("\n");

            if(menu != 1 && menu != 2)
            {
                printf("Caract%cre inv%clido, tente novamente.\n", 130, 160);
            }
        }while(menu != 1 && menu != 2);

        switch(menu)
        {
            case 1:

                printf("\n============= 1 =============\n");

                for(n = 1; n <= 8; n++)
                {
                    fatorar(n);
                }
            break;

            case 2:

                printf("\n============= 2 =============\n");
                printf("Insira um n%cmero:", 163);
                fflush(stdin);
                scanf("%d", &n);

                fatorar(n);
            break;
        }

        printf("\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");
    }while(resp == 's' || resp == 'S');

    return 0;
}