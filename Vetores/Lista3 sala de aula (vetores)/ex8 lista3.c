/*Gerar um vetor A de inteiros com 100 elementos aleatórios entre 0 e 10. 
Criar um vetor B float que conterá os valores do vetor A divididos 
pelo maior valor contido no vetor A. Mostrar os dois vetores.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main(void)
{
    char resp;

    do
    {
        int vetA[100], maior = 0, i;
        float vetB[100];
        srand(time(NULL));

        printf("\n============= VETOR A ==============\n");
        for(i=0; i<100; i++)
        {
            vetA[i] = GerarVetor(11) - 1;
            
            if(vetA[i] > maior)
            {
                maior = vetA[i];
            }

            MostrarVetor(vetA[i]);
        }

        printf("\n\nMaior valor: %d", maior);

        printf("\n\n============= VETOR B =============\n");
        for(i=0; i<100; i++)
        {
            vetB[i] = vetA[i] / (float) maior;
        }

        MostrarVetorFloat(vetB, 100);

        printf("\n\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's'|| resp == 'S');
}