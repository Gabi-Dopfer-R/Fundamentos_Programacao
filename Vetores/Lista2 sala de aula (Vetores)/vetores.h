/*Gerar um arquivo de cabeçalho chamado vetores.h 
com uma função para gerar um vetor com números aleatórios, 
com determinado tamanho e que os valores aleatórios variem entre 0 e n e 
com outra função para mostrar um vetor com tamanho não fixo.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void MostrarVetor(int i);

//==========================================================
int GerarVetor(int n)
{
    int vetor;

    vetor = rand() % n+1;

    return vetor;
}


//========================================================
void MostrarVetor(int i)
{
    printf("%d\t", i);

    return;
}

//====================================================
void GerarVetorInteiroComLimite(int vetor[], int tam, int inf, int sup)
{
    int i, menor=45, maior=0, soma=0, cont=0;
    float media;

    srand(time(NULL));

    printf("\n======================== Vetor ======================\n");
    for(i=0; i<tam; i++)
    {
        vetor[i] = rand() % (sup +1 -inf) + inf;

        printf("%d\t", vetor[i]);

        if(vetor[i] < menor)
        {
            menor = vetor[i];
        }
        if(vetor[i] > maior)
        {
            maior = vetor[i];
        }

        soma += vetor[i];
    }

    media = soma / 121.00;

    for(i=0; i<121; i++)
    {
        if(vetor[i] < media)
        {
            cont++;
        }
    } 

    printf("\n\nA menor teperatura registrada foi: %d\n", menor);
    printf("A maior temperatura registrada foi: %d\n", maior);
    printf("A temperatura m%cdia foi de: %.2f\n", 130, media);
    printf("N%cmero de dias em que foi regitrada temperatura menor que a m%cdia: %d", 163, 130, cont);
}

//=========================================================================================================
int SomarVetorInteiro(int a[], int i)    
{
    int soma=0;
    
    soma = soma + a[i];
    return soma;
}