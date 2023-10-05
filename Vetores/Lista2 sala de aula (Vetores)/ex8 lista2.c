/*8) Gerar aleatoriamente um vetor com 100 elementos que conterá somente valores 0
ou 1. Mostrar esse vetor. Em seguida contar quantos 0s sucessivos o vetor contém, 
armazenar essa quantidade em outro vetor e mostrá lo. Qual seria o tamanho mínimo e máximo 
desse vetor que armazena as quantidades? Criá lo para o tamanho máximo possível.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main (void)
{
    char resp;

    do
    {
        int vetor[100], i, aux, vetor2[100], cont;

        srand(time(NULL));

        printf("\n================== Vetor A ==================\n");
        for(i=0, cont=0, aux=0; i<100; i++)
        {
            vetor[i] = GerarVetor(2);
            vetor[i] -= 1;
            MostrarVetor(vetor[i]);

            if(vetor[i] == 0)
            {
                cont++;
            }
            if(vetor[i] == 1 && cont != 0)
            {
                vetor2[aux] = cont;
                cont = 0;
                aux++;
            }
        }

        printf("\n\n=========================== Vetor B ========================\n");
        for(i=0; i<aux; i++)
        {
            MostrarVetor(vetor2[i]);
        }



        printf("\n\nDeseja reptir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');


}