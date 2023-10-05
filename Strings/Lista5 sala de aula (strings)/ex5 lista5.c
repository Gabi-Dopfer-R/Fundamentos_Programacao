/*Gerar um vetor com 10 valores inteiros aleatórios entre 1 e 100. 
Para os elementos de índice par, verificar se é perfeito. 
Para os elementos de índice ímpar, somar os seus dígitos. 
Utilizar funções para verificar se um número 
é perfeito e para somar os seus dígitos. 
Um número é perfeito quando a soma dos seus divisores 
(exceto ele próprio) é igual ao próprio número 
(por exemplo 6 é perfeito porque possui 1, 2 e 3 como divisores que somam 6).*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ValoresParesPerfeitos(int vet[], int tam);
void SomarDigitosDosImpares(int vet[], int tam);

//=======================================================================
int main(void)
{
    char resp;

    do
    {
        int vet[10], i;
        srand(time(NULL));

        printf("\n============== VETOR =============\n");
        for(i=0; i<10; i++)
        {
            vet[i] = rand() % 100 + 1;
            printf("%d\t", vet[i]);
        }

        ValoresParesPerfeitos(vet, 10);
        SomarDigitosDosImpares(vet, 10);
        
        printf("\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}

//===================================================================
void ValoresParesPerfeitos(int vet[], int tam)
{
    int i, j, soma;

    printf("\n\n=============== PARES =================\n");
    for(i=0; i<tam; i++)
    {
        if(vet[i] % 2 == 0)
        {
            for(j=1, soma=0; j < vet[i]; j++)
            {
                if(vet[i] % j == 0)
                {
                    soma += j;
                }
            }
        
            printf("%d ", vet[i]);
            if(soma == vet[i])
            {
                printf("%c perfeito\n", 130);
            }
            else 
            {
                printf("n%co %c perfeito\n", 198, 130);
            }
        }
        
    }

    return;
}

void SomarDigitosDosImpares(int vet[], int tam)
{
    int i, soma, impar;

    printf("\n=================== %cmpares =================\n", 214);
    for(i=0; i<tam; i++)
    {
        if(vet[i] % 2 != 0)
        {
            impar = vet[i];
            soma=0;

            do
            {
                soma += (impar % 10);
                impar = impar / 10;   
            }while(impar != 0);

            printf("%d - soma dos d%cgitos: %d\n", vet[i], 161, soma);
        }
    }

    return;
}