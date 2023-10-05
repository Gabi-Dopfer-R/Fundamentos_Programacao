/*Na biblioteca "vetores.h" criar uma função com o protótipo 
void GerarVetorPositivoNegativo(int vetor[], int tam, int limNegativo, int limPositivo) 
para gerar um vetor com valores positivos e negativos em um intervalo.
A instrução para gerar valores inteiros positivos e negativos em um intervalo é:
vetor[i] = rand() % (limPositivo + limNegativo + 1) - limNegativo;
Usando essa função:
Gerar um vetor A de inteiros com 100 elementos, com valores entre -50 e +50. 
Em seguida, armazenar no vetor B somente os valores positivos do vetor A.*/

#include <stdio.h>
#include "vetores.h"

int main(void)
{
    char resp;

    do
    {
        int vetor[100];
        
        GerarVetorPositivoNegativo(vetor, 100, -50, 50);

        printf("\n\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');
}