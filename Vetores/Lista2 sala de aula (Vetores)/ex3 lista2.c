/*Gerar um vetor A de inteiros com 7 elementos aleatórios entre 1 e 10 . Construir um vetor B de mesmo
tamanho, sendo que cada elemento de B deverá ser o elemento de A correspondente multiplicado por sua
posição (ou índ ice), ou seja, B[i] = A[i] * i.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main (void)
{
    char resp;

    do
    {
        int vetor[7], i;
        
        //============== Primeiro Vetor ====================
        printf("\n================== Vetor A ===================\n");
        for(i=0; i<7; i++)
        {
            vetor[i] = GerarVetor(10);

            MostrarVetor(vetor[i]);
        }

        //================= Segundo Vetor =====================
        printf("\n\n=================== Vetor B =====================\n");
        for(i=0; i<7; i++)
        {
            vetor[i] *= i;

            MostrarVetor(vetor[i]);
        }

        printf("\n\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}