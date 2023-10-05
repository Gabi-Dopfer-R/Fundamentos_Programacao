/*(Desafio) Gerar um vetor (pode conter valores repetidos)
com 15 valores entre 1 e 20. Ordenar o vetor. 
Copiar esses valores para outro vetor sem os elementos repetidos.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GerarVetor(int n);
void MostrarVetorInteiro(int vet[], int tam);
int ExisteNoVetor(int vet[], int tamanho, int valor);
void OrdenarVetor(int vet[], int tam);


//======================================================================================
int main(void)
{
    char resp;
    srand(time(NULL));

    do 
    {
        int vet[15], i;

        for(i=0; i<15; i++)
        {
            vet[i] = GerarVetor(20);
        }

        printf("\n==================== VETOR =================\n");
        MostrarVetorInteiro(vet, 15);

        OrdenarVetor(vet, 15);

        printf("\n\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}

//==============================================================================================
int GerarVetor(int n)
{
    return rand() % n +1;
}

void MostrarVetorInteiro(int vet[], int tam)
{
    int i;
    
    for(i=0; i<tam; i++)
    {
        printf("%d\t", vet[i]);
    }

    return;
}

int ExisteNoVetor(int vet[], int tamanho, int valor)
{
    int i, cont=0;

    for(i=0; i<tamanho; i++)
    {
        if(vet[i] == valor)
        {
            cont++;
        }
    }

    return cont;
}
 
void OrdenarVetor(int vet[], int tam)
{
    int vetOrdenado[tam], vetResult[tam], menor, cont, aux, i, j;
    
    for(aux=0, menor=20; aux<tam; aux++)
    {
        for(i=0; i<tam; i++)
        {
            if(vet[i] < menor)
            {
                menor = vet[i];
                cont = i;
            } 
        }

        vetOrdenado[aux] = vet[cont];
        vet[cont] = 20;
        menor = 20;
    }

    for(i=0, j=0; i<tam; i++)
    {
        if(ExisteNoVetor(vetOrdenado, tam, vetOrdenado[i]) <= 1)
        {
            vetResult[j] = vetOrdenado[i]; 
            j++;    
        }
    }

    printf("\n\n==================== N%cO REPETIDOS ==================\n", 199);
    MostrarVetorInteiro(vetResult, j);
    
    return;
}
