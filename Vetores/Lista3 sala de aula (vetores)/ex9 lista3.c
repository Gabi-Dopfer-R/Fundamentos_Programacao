/*Uma locadora de vídeos armazena em um vetor A de 300 posições 
a quantidade de filmes retirados por seus clientes durante o ano. 
A locadora está fazendo uma promoção e para cada 10 filmes retirados, 
o cliente tem direito a uma locação grátis. 
Faça um programa que crie um vetor B contendo a quantidade de locações 
gratuitas a que cada cliente tem direito. Declare ambos os vetores com valores inteiros.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main(void)
{
    char resp;

    do 
    {
        int i, vetA[300], vetB[300];

        printf("\n============ VETOR A =============\n");
        for(i=0; i<300; i++)
        {
            vetA[i] = GerarVetor(101) -1;

            MostrarVetor(vetA[i]);

            vetB[i] = vetA[i] / 10;
        }

        printf("\n\n============= VETOR B ===============\n");
        for(i=0; i<300; i++)
        {
            MostrarVetor(vetB[i]);
        }

        printf("\n\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');
}