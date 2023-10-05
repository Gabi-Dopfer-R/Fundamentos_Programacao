/*10) O que faz o algoritmo a seguir:
R=Gera um vetor, imrpime o mesmo e informa qual é o menor valor e sua posição.

Implemente a solução na linguagem C para esse algoritmo. 
Deve m ser utilizadas as funções par a gerar 
aleatoriamente os valores do vetor e mostrar os elementos do vetor , que se encontram em Vetores.h 
Considere que os valores do vetor devem estar compreendidos em um intervalo de 0 a 100.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main(void)
{
    char resp;
    
    do
    {
        int vet[80], i, menor, posicaomenor;
        srand(time(NULL));

        posicaomenor=0;
        menor=100;

        printf("\n================ Vetor ===============\n");
        for(i = 0; i < 80; i++)
        {
            vet[i] = GerarVetor(101);
            vet[i] -= 1;
            MostrarVetor(vet[i]);

            if(vet[i] < menor)
            {
                menor = vet[i];
                posicaomenor = i;
            }
        }

        printf("\n\nO menor valor %c %d e est%c na posi%c%co %d", 130, menor, 160, 135, 198, posicaomenor);

        printf("\n\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');
}