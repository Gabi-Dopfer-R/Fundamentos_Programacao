/*Criar uma função para ordenar os elementos de um vetor de tamanho n, 
sendo n um número positivo. Insira essa função na biblioteca "vetores.h" 
(criada no Exercício 2 - Lista 1) que já contém as funções para GerarVetorInteiro() 
e MostrarVetorInteiro(), e que podem ser reutilizadas neste exercício. 
Usar essas funções para gerar a saída mostrada no exemplo a seguir.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "vetores.h"

int main(void)
{
    char resp;
    
    do
    {   
        int n;

        n = GerarVetor(100);

        printf("\n=================== VETOR ORIGINAL =====================\n");
        OrdenarVetor(n, 10);

        printf("\n\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}