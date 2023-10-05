/*Gerar um vetor A de inteiros com 8 elementos aleatórios entre 1 e 10 . Construir um vetor B de mesma
dimensão com os elementos de A multiplicados por 2.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main(void)
{
    char resp;

    do 
    {
        int i, vetor[8];

        srand (time (NULL));

        //============================== Primeiro Vetor ===============================
        printf("\n\n===================== Vetor A ===================\n");
        for(i=0; i<8; i++)
        {
            vetor[i] = GerarVetor(10);

            MostrarVetor(vetor[i]);
        }

        //============================== Segundo Vetor =================================
        printf("\n\n========================== Vetor B ====================\n");
        for(i=0; i<8; i++)
        {
            vetor[i] *= 2;

            MostrarVetor(vetor[i]);
        }
        
        printf("\n\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');
}