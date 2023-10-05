/*6) Gerar um vetor de inteiros com 10 elementos aleatórios entre 1 e 200 . 
Desse vetor, calcular e mostrar:
a) A soma de elementos armazenados nesse vetor que são inferiores a 100;
b) A quantidade de elementos armazenados nesse vetor que
tem valor igual a 100;
c) A média dos elementos armazenados nesse vetor que são superiores a 100. 
Validar para não realizar uma divisão por zero.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main (void)
{
    char resp;
    
    do
    {
        int i, cont=0, cont2=0, soma=0, soma2=0, vetor[10];

        printf("\n===================== Vetor ======================\n");
        for(i=0; i<10; i++)
        {
            vetor[i] = GerarVetor(200);
            MostrarVetor(vetor[i]);

            if(vetor[i] < 100)
            {
                soma += vetor[i];
            }
            else if(vetor[i] == 100)
            {
                cont++;
            }
            else
            {
                soma2 += vetor[i];
                cont2++;
            }
        }

        printf("\n\nA soma dos elementos menores que 100 %c: %d\n", 130, soma);
        printf("A quantidade de elementos iguais a 100 %c: %d\n", 130, cont);
        if(cont2 != 0)
        {
            printf("A m%cdia dos elementos maiores que 200 %c: %.2f", 130, 130, soma2 / (float)cont2);
        }
        else 
        {
            printf("O vetor n%co possui elementos maiores que 200.", 198);
        }
        
        printf("\n\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}