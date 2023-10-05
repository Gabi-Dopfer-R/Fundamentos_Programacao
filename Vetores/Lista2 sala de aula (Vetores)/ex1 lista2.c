/*1) Gerar um vetor de inteiros com 15 elementos
aleatórios entre 1 e 25 . Gerar outros dois vetores um
contendo os valores pares e outro os ímpares Mostrar os três vetores.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main (void)
{
    char resp;
    
    do
    {
        int tam=15, n=25, vetor[tam], i;

        srand(time (NULL));
        
        //===================== primeiro vetor.===========================
        printf("\n================== Vetor de 15 elementos (valores entre 1 e 25) ==================\n");

        for(i=0; i<tam; i++)
        {
            vetor[i] = GerarVetor(n);
            MostrarVetor(vetor[i]);
        }

        //==================================segundo vetor.==========================
        printf("\n\n================== Vetor de 15 elementos pares (valores entre 1 e 25) ==================\n");
        
        i=0;
        while(i < tam)
        {
            vetor[i] = GerarVetor(n);
            if(vetor[i] % 2 == 0)
            {
                MostrarVetor(vetor[i]);
                i++;
            }
        }

        //======================================terceiro vetor.=========================
        printf("\n\n================== Vetor de 15 elementos %cmpares (valores entre 1 e 25) =================\n", 161);

        i=0;
        while(i < tam)
        {
            vetor[i] = GerarVetor(n);
            if(vetor[i] % 2 != 0)
            {
                MostrarVetor(vetor[i]);
                i++;
            } 
        }     

        //repetição do programa.
        printf("\n\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}