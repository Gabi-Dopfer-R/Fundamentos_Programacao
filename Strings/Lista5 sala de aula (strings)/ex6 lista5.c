/*Utilizar uma função para gerar um vetor com 10 valores entre 5 e 50. 
Utilizar uma função para verificar se cada elemento do vetor é ou não um número primo. 
Armazenar em outro vetor somente os números que são primos. 
Mostrar os dois vetores utilizando função.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gerarVetor(int inf, int sup);
void mostrarVetor(int vet[], int tam);
int primos(int vet[], int tam);

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
            vet[i] = gerarVetor(5, 50);    
        }

        mostrarVetor(vet, 10);
        printf("\n\n");
        primos(vet, 10);
        
        printf("\n\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}

int gerarVetor(int inf, int sup)
{
    return rand() % (sup - inf) + inf;
}


void mostrarVetor(int vet[], int tam)
{
    int i;
    
    for(i=0; i<tam; i++)
    {
        printf("%d\t", vet[i]);
    }

    return;
}


int primos(int vet[], int tam)
{
    int i, j, z, primo[tam]; 

    for(i=0, z=0; i<tam; i++)
    {
        for(j=1; j<vet[i]; j++)
        {
            if(vet[i] % j == 0 && j != 1) 
            {
                printf("%d n%co %c primo.\n", vet[i], 198, 130);
                break;
            }
            else if(j == vet[i] - 1)
            {
                primo[z] = vet[i];
                z++;
            }
        }
    }

    printf("\n================= PRIMOS ===============\n");
    mostrarVetor(primo, z);
}