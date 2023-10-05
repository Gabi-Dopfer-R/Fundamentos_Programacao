/*O que faz o algoritmo a seguir:
r= mostrar um vetor com valores aleatórios e um com os valores pares do primeiro.

Implemente uma solução na linguagem C para esse algoritmo.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char resp;
    
    do
    {
        int vetA[30], vetB[30], i, j;
        srand(time(NULL));

        printf("\n============================ VETOR A ===============================\n");
        for(i = 0, j=0; i < 30; i++)
        {
            vetA[i] = rand() % 100 + 1;

            printf("%d\t", vetA[i]);

            if(vetA[i] % 2 == 0)
            {
                vetB[j] = vetA[i];
                j++;
            }
        }

        printf("\n============================ VETOR B ===============================\n");
        for(i=0; i<j; i++)
        {
            printf("%d\t", vetB[i]);
        }

        printf("\n\nDeseja repeir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}