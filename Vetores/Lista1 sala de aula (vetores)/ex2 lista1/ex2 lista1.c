/*Utilizar essas funções para:
a) Gerar um vetor de valores randômicos com a quantidade de elementos e o 
valor de n informada pelo usuário. Validar as entradas para que sejam informados valores positivos.
b) Mostrar o vetor.
c) Encontrar e mostrar o menor elemento armazenado no vetor.
d) Fazer a média dos pares que estão armazenados no vetor. 
Validar para que não seja realizada divisão por zero no cálculo da média.
O programa permanecerá em execução até que seja escolhida a opção sair.*/

#include <stdio.h>
#include "vetores.h"

int main (void)
{
    char resp;

    do
    {
        int n, tam;

        printf("\n");
        do
        {
            printf("Informe o tamanho do vetor: ");
            fflush(stdin);
            scanf("%d", &tam);

            if(tam <= 0)
            {
                printf("\nO valor precisa ser positivo.\n");
            }           
        }while(tam <= 0);

        do
        {
            printf("Informe o valor de n: ");
            fflush(stdin);
            scanf("%d", &n);

            if(n <= 0)
            {
                printf("O valor precisa ser positivo.\n");
            }
        }while(n <= 0);

        GerarVetor(tam, n);

        printf("\nDeseja sair do programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");
    }while(resp == 'n' || resp == 'N');

    return 0;
}


