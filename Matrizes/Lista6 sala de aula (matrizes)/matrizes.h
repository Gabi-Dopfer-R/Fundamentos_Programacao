/*Criar um arquivo "matrizes.h". Dentro desse arquivo incluir função para:
a) Gerar uma matriz de elementos inteiros randômicos entre 1 e limite com o protótipo:
void GerarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna], int limite)
b) Mostrar uma matriz com o protótipo:
void MostrarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna])*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GerarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna], int limite);
void MostrarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna]);

//=======================================================================================
void GerarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna], int limite)
{
    int i, j, diagonal1=0, diagonal2=0, total=0;
    srand(time(NULL));
    
    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            matriz[i][j] = rand() % limite + 1;

            if(i == j)
            {
                diagonal1 += matriz[i][j];

            }
            if(i == coluna - j-1)
            {
                diagonal2 += matriz[i][j];
            }

            total += matriz[i][j];
        }
    }

    printf("\n===== MATRIZ =====\n");
    MostrarMatrizInteiro(linha, coluna, matriz);

    printf("\nSoma dos elementos da diagonal secund%cria: %d", 160, diagonal2);
    printf("\nSoma dos elementos da diagonal principal: %d", diagonal1);
    printf("\nSoma de todos os elementos: %d", total);
    

    return;
}

//=======================================================================================
void MostrarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna])
{
    int j, i;

    for(i=0; i<linha; i++)
    {
        for(j=0; j<coluna; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    

    return;
}