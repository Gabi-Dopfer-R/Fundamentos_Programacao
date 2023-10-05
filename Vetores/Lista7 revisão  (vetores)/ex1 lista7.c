/*Gerar aleatoriamente um vetor com 5 elementos inteiros entre 1 a 9. 
Mostrar a tabuada de cada um dos elementos armazenados no vetor. 
A tabuada deve ser mostrada por uma função, 
que recebe como parâmetro o número e apresenta a respectiva tabuada.*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GerarMatrizInteiro(int n);
void MostrarMatrizInteiro(int n);
void MostrarTabuada(int n);

//======================================================================================
int main(void)
{
    char resp;

    do 
    {
        int vet[5], i;
        srand(time(NULL));

        printf("\n================ VETOR ==================\n");
        for(i=0; i<5; i++)
        {
            vet[i] = GerarMatrizInteiro(9);
            MostrarMatrizInteiro(vet[i]);
        }
        
        printf("\n");
        
        for(i=0; i<5; i++)
        {
            printf("\n================ TABUADA DO %d ==================\n", vet[i]);
            MostrarTabuada(vet[i]);
        }
        
        printf("\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}

//=======================================================================================
int GerarMatrizInteiro(int n)
{   
    return rand() % n + 1;
}

void MostrarMatrizInteiro(int n)
{
    printf("%d\t", n);
    return;
}

void MostrarTabuada(int n)
{
    int i;

    for(i=0; i<10; i++)
    {
        printf("%d * %d =  %d\n", n, i, n*i);
    }

    return;
}