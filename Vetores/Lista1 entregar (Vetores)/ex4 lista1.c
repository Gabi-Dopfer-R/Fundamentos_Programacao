/*Gerar um vetor aleatório com 10 elementos entre 0 e 50. Verificar se cada um dos elementos armazenados
no vetor é primo. Utilizar, obrigatoriamente, uma função para verificar se o número é primo. Essa função
retorna 0 para indicar que o número é primo e 1 para indicar que não é primo. Tratar esse retorno na função
chamadora. Mostrar da seguinte forma:*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//==============================================================================
int primo(int n)
{
    int cont, aux;

    for(aux=1; aux<n; aux++)
    {
        if(n % aux == 0 && aux != 1)
        {
            return cont=1;
        }
    }

    return cont=0;
}

//============================== PRINCIPAL =====================================
int main(void)
{
    char resp;
    
    do
    {
        int i, vet[10], cont;
        srand(time(NULL));

        printf("\n================= VETOR ===================\n");
        for(i=0; i<10; i++)
        {
            vet[i] = rand() % 50 + 1;
            printf("%d\t", vet[i]);
        }

        printf("\n\nInd%cce \tN%cmero \tPrimo\n", 161, 163);
        for(i=0; i<10; i++)
        {
            printf("%d    \t%d    \t", i, vet[i]);

            cont = primo(vet[i]);
            if(cont == 0)
            {
                printf("Sim\n");
            }
            else
            {
                printf("N%co\n", 198);
            }
        }

        printf("\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}