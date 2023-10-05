/*(Desafio) Gerar um vetor (pode conter valores repetidos) 
com 15 valores aleatórios entre 1 e 20. Ordenar o vetor. 
Mostrar o vetor. Gerar um novo vetor apenas com os 
valores que se repetem no vetor anterior. Mostrar o vetor.
Dica: Poderá ser criada uma função com o protótipo 
int ExisteNoVetor(int vet[], int tamanho, int valor) 
que recebe como parâmetros o vetor, 
o tamanho do vetor e um valor e retorna o número de 
vezes que esse valor ocorre no vetor.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GerarVetor(int n);
void MostrarVetorInteiro(int vet[], int tam);
int ExisteNoVetor(int vet[], int tamanho, int valor);

//======================================================================================
int main(void)
{
    char resp;
    srand(time(NULL));

    do 
    {
        int vet[15], vetResult[15], i, j;

        for(i=0; i<15; i++)
        {
            vet[i] = GerarVetor(20);
        }

        printf("\n==================== VETOR =================\n");
        MostrarVetorInteiro(vet, 15);

        for(i=0, j=0; i<15; i++)
        {
            if(ExisteNoVetor(vet, 15, vet[i]) > 1)
            {
                if(ExisteNoVetor(vetResult, j, vet[i]) < 1)
                {
                    vetResult[j] = vet[i]; 
                    j++;
                }     
            }
        }

        printf("\n\n==================== REPETIDOS ==================\n");
        MostrarVetorInteiro(vetResult, j);

        printf("\n\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}

//==================================================================
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