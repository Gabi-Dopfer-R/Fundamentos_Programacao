/*Fazer uma função para gerar um vetor com números 
aleatórios entre 1 e um limite superior informado, 
sem números repetidos, com o seguinte protótipo:
void GerarVetorSemRepeticao(int vetor[], int tamanho, int limite)
Usar essa função nos exercícios 4 a 6.
Atenção: O valor do limite dos números aleatórios nunca 
deve menor que o tamanho do vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GerarVetorSemRepeticao(int vetor[], int tamanho, int limite);
void MostrarVetorInteiro(int vet[], int tam);

void GerarVetorSemRepeticao(int vetor[], int tamanho, int limite)
{
    int i, vet[tamanho], j;

    vet[0] = rand() % 15 +1;

    for(i=1; i<tamanho; i++)
    {
        vet[i] = rand() % 15 +1;

        for(j=0; j<i; j++)
        {
            if(vet[i] == vet[j])
            {
                vet[i] = rand() % 15 +1;
                j = -1;
            }
        }
    }

    vetor[0] = rand() % limite +1;
    
    for(i=1; i<tamanho; i++)
    {
        vetor[i] = rand() % limite +1;

        for(j=0; j<i; j++)
        {
            if(vetor[i] == vetor[j])
            {
                vetor[i] = rand() % limite +1;
                j = -1;
            }
        }
    }

    printf("\n===================== VETOR A ====================\n");
    MostrarVetorInteiro(vet, tamanho);

    printf("\n\n===================== VETOR B ====================\n");
    MostrarVetorInteiro(vetor, tamanho);

    interseccao(vet, vetor, tamanho);

    return;
}

void MostrarVetorInteiro(int vet[], int tam)
{
    int i;
    
    for(i=0; i<tam; i++)
    {
        printf("%d\t", vet[i]);
    }

    return;
}