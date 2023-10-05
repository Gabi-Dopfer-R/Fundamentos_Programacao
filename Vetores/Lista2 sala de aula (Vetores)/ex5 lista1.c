/*5) Gerar vetores A e B, sendo A com n elementos aleatórios entre 1 e 20 e B com n elementos aleatórios
entre 1 e 15 . O usuário informa a quantidade de elementos dos vetores, ou seja, o seu tamanho. Validar para
que seja informado um valor positivo para a quantidade de elementos. Mostrar os elementos dos vetores A e B.
Construir um vetor C, em que cada elemento de C será 1 quando o elemento de A for maior que o 
respectivo elemento em B; será 0 quando o elemento de A for igual ao respectivo elemento em B; 
e seráserá -1 quando o elemento de A for menor que o respectivo elemento em B. 
Mostrar os elementos do vetor C.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main (void)
{
    char resp;

    do 
    {
        int a, b, aux, i, c;

        srand(time (NULL));

        do
        {
            printf("\nInsira a quantidade de elementos do vetor A: ");
            fflush(stdin);
            scanf("%d", &a);

            if(a <= 0)
            {
                printf("O valor precisa ser positivo.\n");
            }
        }while(a <= 0);

        do
        {
            printf("Insira a quantidade de elementos do vetor B: ");
            fflush(stdin);
            scanf("%d", &b);

            if(b <= 0)
            {
                printf("O valor precisa ser positivo.\n\n");
            }
        }while(b <= 0);

        int vetorA[a], vetorB[b];

        //====================================== Primeiro Vetor ================================
        printf("\n================= Vetor A =================\n");
        for(i=0; i<a; i++)
        {
            vetorA[i] = GerarVetor(20);
            MostrarVetor(vetorA[i]);
        }

        //===================================== Segundo Vetor ===================================
        printf("\n\n================ Vetor B =================\n");
        for(i=0; i<b; i++)
        {
            vetorB[i] = GerarVetor(15);
            MostrarVetor(vetorB[i]);
        }

        //=================================== Terceiro Vetor =================================
        printf("\n\n================ Vetor C =================\n");
        
        if(a >= b)
        {
            aux = b;
            c = a;
        }
        else 
        {
            aux = a;
            c = b;
        }

        int vetorC[c];

        for(i=0; i<c; i++)
        {
            if(i < aux)
            {
                if(vetorA[i] == vetorB[i])
                {
                    vetorC[i] = 0;
                }
                else if(vetorA[i] > vetorB[i])
                {
                    vetorC[i] = 1;
                }
                else
                {
                    vetorC[i] = -1;
                }
            }
            else
            {
                if(c == a)
                {
                    vetorC[i] = 1;
                }
                else
                {
                    vetorC[i] = -1;
                }
            }

            MostrarVetor(vetorC[i]);
        }

        printf("\n\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}