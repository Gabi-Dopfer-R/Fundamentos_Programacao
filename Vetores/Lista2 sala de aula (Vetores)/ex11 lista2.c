/*O que faz o algoritmo a seguir:
R=

Implemente uma solução na linguagem C para esse algoritmo.
Para gerar os elementos do vetor A, deve ser utilizada a função para 
gerar valores aleatórios e a função para mostrar os valores do vetor Considere que os
valores do vetor devem estar compreendidos em um intervalo de 0 a 100.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main(void)
{
    char resp;
    
    do
    {
        int A[30], B[30], i, k;
        srand(time(NULL));
        
        printf("\n========================== Vetor A ==========================\n");
        for(i = 0, k=0; i < 30; i++)
        {
            A[i] = GerarVetor(101);
            A[i] -= 1;
            MostrarVetor(A[i]);

            if(A[i] != 0)
            {
                B[k] = A[i];
                k++;
            }
        }

        printf("\n\n============================= Vetor B ===========================\n");
        for(i=0; i<k; i++)
        {
            MostrarVetor(B[i]);
        }
        
        printf("\n\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');
}