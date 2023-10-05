/*Gerar um vetor A de inteiros com 10 elementos aleatórios entre 1 e 10 e construir um vetor B de mesma
dimensão com os mesmos elementos de A, mas em ordem invertida, ou seja, o primeiro elemento de A será o
último de B, o segundo elemento de A será o penúltimo de B e assim sucessivamente*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main (void)
{
    char resp;

    do 
    {
        int i, vetor[10], aux, vetor2[10];

        srand(time (NULL));

        //====================================== Primeiro Vetor ================================
        printf("\n================= Vetor A =================\n");
        for(i=0; i<10; i++)
        {
            vetor[i] = GerarVetor(10);
            MostrarVetor(vetor[i]);
        }

        //===================================== Segundo Vetor ===================================
        printf("\n\n================ Vetor B =================\n");
        for(aux=0, i=9; aux < 10; i--, aux++)
        {
            vetor2[aux] = vetor[i];
            MostrarVetor(vetor2[aux]);
        }
        printf("\n\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}