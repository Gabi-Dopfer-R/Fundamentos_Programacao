/*Gerar uma matriz 5x5 com números randômicos, no intervalo de 1 a 5. 
Em seguida criar dois vetores que contenham, respectivamente, 
as somas das linhas e das colunas da matriz. Mostrar os vetores criados.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void MostrarVetor(int vet[], int tam);

//=============================================================================================
int main(void)
{
    char resp;

    do 
    {
        int matriz[5][5], i, j, linhas[5], colunas[5];
        srand(time(NULL));

        for(i=0; i<5; i++)
        {
            linhas[i] = 0;
            colunas[i] = 0;
        }

        printf("\n============== MATRIZ =============\n");
        for(i=0; i<5; i++)
        {
            for(j=0; j<5; j++)
            {
                matriz[i][j] = rand() % 5 +1;
                printf("%2d\t", matriz[i][j]);

                linhas[i] += matriz[i][j];
                colunas[j] += matriz[i][j];
            }
            printf("\n");
        }

        printf("\n\n=========== SOMA DAS LINHAS ===========\n");
        MostrarVetor(linhas, 5);

        printf("\n\n=========== SOMA DAS COLUNAS ============\n");
        MostrarVetor(colunas, 5);

        printf("\n\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}

//====================================================================================


void MostrarVetor(int vet[], int tam)
{
    int i;
    
    for(i=0; i<tam; i++)
    {
        printf("%d\t", vet[i]);
    }

    return;
}