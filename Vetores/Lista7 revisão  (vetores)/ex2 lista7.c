/*(Desafio) Implemente uma função que recebe por parâmetro 
um vetor numérico e retorna o número de maior ocorrência no vetor.
Use a função para verificar o número que ocorre com maior 
frequência em um vetor de 10 posições com valores aleatórios entre 1 e 5. 
Se ocorrer de mais de um elemento ter a maior frequência, 
considere apenas o que ocorre primeiro no vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GerarVetorInteiro(int n);
void MostrarVetorInteiro(int n);
int ElementoComMaiorFrequencia(int vet[], int tam);

//======================================================================================
int main(void)
{
    char resp;

    do 
    {
        int vet[10], i;
        srand(time(NULL));

        printf("\n================ VETOR ==================\n");
        for(i=0; i<10; i++)
        {
            vet[i] = GerarVetorInteiro(5);
            MostrarVetorInteiro(vet[i]);
        }
        
        printf("\n\nMaior frequ%cncia no vetor: %d.", 136, ElementoComMaiorFrequencia(vet, 10)); 
        
        printf("\n\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}

//=======================================================================================
int GerarVetorInteiro(int n)
{   
    return rand() % n + 1;
}

//=================
void MostrarVetorInteiro(int n)
{
    printf("%d\t", n);
    return;
}

//=================
int ElementoComMaiorFrequencia(int vet[], int tam)
{
    int i, anterior, freq, cont, maior;

    anterior = vet[0];
    cont=0;
    freq=1;
    
    for(i=1; i<tam; i++)
    {
        if(vet[i] == anterior)
        {
            freq++;   
        }
        else
        {
            freq = 1;
        }

        anterior = vet[i];

        if(freq > cont)
        {
            cont = freq;
            maior = vet[i];
        }
    }

    return maior;
    
}
