/*1) Ler uma matriz 5x5 com valores entre 1 e 50. A seguir, 
ler um número inteiro x e escrever uma mensagem indicando 
se o valor de x existe ou não na matriz.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int nEstaNaMatriz(int linha, int coluna, int matriz[linha][coluna], int n);

int main(void)
{
    char resp;

    do
    {
        int matriz[5][5], j, i, n;
        srand(time(NULL));

        printf("\n=================== VETOR ================\n");
        for(i=0; i<5; i++)
        {
            for(j=0; j<5; j++)
            {
                matriz[i][j] = rand() % 50 + 1;
                printf("%d\t", matriz[i][j]);
            }
            printf("\n");
        } 
        
        printf("\n\nIsira um valor: ");
        fflush(stdin);
        scanf("%d", &n);

        if(nEstaNaMatriz(5, 5, matriz, n) == 0)
        {
            printf("\n%d n%co existe na matriz.", n, 198);
        }
        else
        {
            printf("\n%d existe na matriz.", n);
        }

        printf("\n\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}

int nEstaNaMatriz(int linha, int coluna, int matriz[linha][coluna], int n)
{
    int i, j;

    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            if(matriz[i][j] == n)
            {
                return i = 1;
            }
        }
    } 

    return i = 0;
}