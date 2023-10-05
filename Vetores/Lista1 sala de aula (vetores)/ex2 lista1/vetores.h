/*Gerar um arquivo de cabeçalho chamado vetores.h 
com uma função para gerar um vetor com números aleatórios, 
com determinado tamanho e que os valores aleatórios variem entre 0 e n e 
com outra função para mostrar um vetor com tamanho não fixo.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void MostrarVetor(int vetor[], int i);

//========================================================================================
void GerarVetor(int tam, int n)
{
    int i, soma=0, cont=0, aux, menor, vetor[tam];

    menor = n;
    srand(time(NULL));

    printf("\n================== VETOR GERADO ==================\n");
    for(i=0; i<tam; i++)
    { 
        vetor[i] = rand() % n+1;

        MostrarVetor(vetor, i);

        if(vetor[i] < menor)
        {
            menor = vetor[i];
            aux = i;
        }
        
        if(vetor[i] % 2 == 0)
        {
            soma += vetor[i];
            cont++;
        }
    }

    printf("\n\nO menor valor %c %d que est%c no %cndice %d.\n", 130, menor, 160, 161, aux);

    if(cont != 0)
    {
        printf("A m%cdia dos pares %c: %.2f\n", 130, 130, soma/(float)cont);
    }
    else
    {
        printf("N%co h%c nenhum valor par neste vetor.\n", 198, 160);
    }

    return;
}


//===================================================================================================
void MostrarVetor(int vetor[], int i)
{
   
    printf("%d\t", vetor[i]);
    return;
}

