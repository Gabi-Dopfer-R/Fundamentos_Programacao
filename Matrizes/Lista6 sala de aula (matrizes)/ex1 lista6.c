/*1) Criar um arquivo "matrizes.h". Dentro desse arquivo incluir função para:
a) Gerar uma matriz de elementos inteiros randômicos entre 1 e limite com o protótipo:
void GerarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna], int limite)
b) Mostrar uma matriz com o protótipo:
void MostrarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna])
Usar as funções para:
a) Gerar uma matriz de 3x3 com números aleatórios entre 1 e 10.
b) Somar todos os elementos da matriz.
c) Somar os elementos da diagonal principal da matriz.
d) Somar os elementos da diagonal secundária da matriz.
e) Mostrar a matriz e as somas.*/

#include <stdio.h>
#include "matrizes.h"

int main(void)
{
    char resp;

    do 
    {
        int matriz[3][3];

        GerarMatrizInteiro(3, 3, matriz, 10);

        printf("\n\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}