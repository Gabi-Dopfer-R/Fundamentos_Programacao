/*Gerar dois vetores com 10 elementos cada, 
os elementos devem ser distintos. 
Os valores são aleatórios e entre 1 e 15 para 
o primeiro vetor e entre 1 e 10 para o segundo vetor. 
Gerar um terceiro vetor com a interseção dos valores dos vetores anteriores. 
Utilizar o conceito matemático de intersecção entre conjuntos. 
Mostrar os três vetores.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GerarVetorSemRepeticao(int vetor[], int tamanho, int limite);
void interseccao(int vet[], int vetor[], int tam);
void MostrarVetorInteiro(int vet[], int tam);

//======================================================================================
int main(void)
{
    char resp;
    srand(time(NULL));

    do 
    {
        int vetor[10];

        GerarVetorSemRepeticao(vetor, 10, 10);
        
        printf("\n\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}

//==================================================================
void GerarVetorSemRepeticao(int vetor[], int tamanho, int limite)
{
    int i, vet[tamanho], j;

    vet[0] = rand() % 15 +1;

    for(i=1; i<tamanho; i++)
    {
        vet[i] = rand() % 15 +1;

        for(j=0; j<i; j++)
        {
            if(vet[i] == vet[j])
            {
                vet[i] = rand() % 15 +1;
                j = -1;
            }
        }
    }

    vetor[0] = rand() % limite +1;
    
    for(i=1; i<tamanho; i++)
    {
        vetor[i] = rand() % limite +1;

        for(j=0; j<i; j++)
        {
            if(vetor[i] == vetor[j])
            {
                vetor[i] = rand() % limite +1;
                j = -1;
            }
        }
    }

    printf("\n===================== VETOR A ====================\n");
    MostrarVetorInteiro(vet, tamanho);

    printf("\n\n===================== VETOR B ====================\n");
    MostrarVetorInteiro(vetor, tamanho);

    interseccao(vet, vetor, tamanho);

    return;
}


void interseccao(int vet[], int vetor[], int tam)
{
    int i, j, z, vetResult[tam];

    for(i=0, z=0; i<tam; i++)
    {
        for(j=0; j<tam; j++)
        {
            if(vet[i] == vetor[j])
            {
                vetResult[z] = vet[i];
                z++;
                break;
            }
        }
    }

    printf("\n\n===================== INTERSE%c%cO ==================\n", 128, 199);
    MostrarVetorInteiro(vetResult, z);

    return;
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
