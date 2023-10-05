/*Use a biblioteca "Fatorial.h" (criada no Exercício 3 da Lista 1) para:
a) Calcular e mostrar o fatorial de um número informado pelo usuário.
b) Calcular e mostrar o fatorial dos números de 1 a 12.*/

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
            printf("1 = Fatorial de um n%cmero.\n", 163);
            printf("2 = Fatorial dos n%cmeros entre 1 e 12.\n", 163);
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
                printf("Insira um n%cmero:", 163);
                fflush(stdin);
                scanf("%d", &n);

                fatorar(n);
            break;

            case 2:

                printf("\n============= 2 =============\n");

                for(n = 1; n <= 12; n++)
                {
                    fatorar(n);
                }
            break;
        }

        printf("\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");
    }while(resp == 's' || resp == 'S');

    return 0;
}