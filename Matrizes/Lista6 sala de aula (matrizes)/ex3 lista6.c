/*Gerar uma matriz 10x10 preenchida com o número 1 e mostrar a matriz. 
Em seguida, preencher com 0 as diagonais principal e 
secundária e mostrar a matriz.*/

#include <stdio.h>

int main(void)
{
    char resp;

    do 
    {
        int matriz[10][10], matriz2[10][10], i, j;
        

        printf("\n============================= MATRIZ ORIGINAL ==============================\n");
        for(i=0; i<10; i++)
        {
            for(j=0; j<10; j++)
            {
                matriz[i][j] = 1;
                printf("%2d\t", matriz[i][j]);
            }
            printf("\n");
        }

        printf("\n\n============================== MATRIZ ATUAL ================================\n");
        for(i=0; i<10; i++)
        {
            for(j=0; j<10; j++)
            {
                if(i == j || i == 9 - j)
                {
                    matriz2[i][j] = 0;
                }
                else 
                {
                    matriz2[i][j] = 1;
                }
                
                printf("%2d\t", matriz2[i][j]);
            }
            printf("\n");
        }

        printf("\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}

