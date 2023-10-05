/*Na biblioteca "vetores.h" criar função:
    a) Com o protótipo void GerarVetorFloat0a1(float vetor[], int tam) 
que gera vetor com valores float aleatórios entre 0 e 1, para isso use:
vetor[i] = (float)(rand()) / RAND_MAX;
    b) Com o protótipo void GerarVetorFloat0a100(float vetor[], int tam) 
que gera vetor com valores float aleatórios entre 0 e 100, para isso use:
vetor[i] = ((float)(rand()) / RAND_MAX)*100;
    c) Com o protótipo void MostrarVetorFloat(float vetor[], int tam) 
que mostra os elementos de um vetor float.
    d) Com o protótipo float SomarVetorFloat(float vetor[], int tam) 
que soma os elementos de um vetor float.

Usando essas funções:
    a) Gerar um vetor do tipo float com 10 elementos aleatórios entre 0 e 1, 
exibir o vetor e mostrar a soma de todos os elementos do vetor.

    b) Gerar um vetor do tipo float com 50 elementos aleatórios 
entre 0 e 100 e exibir o vetor. Criar outros dois vetores numéricos do tipo float, 
em um deles armazenar os valores menores que 50 e em outro os maiores que 50. 
Mostrar os vetores gerados.*/

#include <stdio.h>
#include "vetores.h"

int main(void)
{
    char resp;

    do
    {
        float vetor[50];

        GerarVetorFloat0a1(vetor, 10);

        GerarVetorFloat0a100(vetor, 50);
        

        printf("\n\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');
}

