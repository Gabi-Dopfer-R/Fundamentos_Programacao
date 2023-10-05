/*3) Dado um vetor de n números reais, 
informar os elementos que compõem o vetor e o número de vezes que
cada um deles ocorre no vetor. Sugestão: 
Ordenar o vetor antes de verificar a ocorrência dos elementos no
mesmo.*/

#include <stdio.h>

void MostrarVetor(float vet[], int tam);
int OrdenarVetor(float vet[], int tam);
void ContarValores(float vet[], int tam);

//=======================================================================
int main(void)
{
    char resp;

    do
    {
        int tam, aux, i;

        printf("\nInforme a quantidade de elementos do vetor: ");
        fflush(stdin);
        scanf("%d", &tam);
        printf("\n");

        float vet[tam], vetOrdenado[tam];

        for(i=0; i<tam; i++)
        {
            printf("Valor do elemento %d do vetor: ", i);
            fflush(stdin);
            scanf("%f", &vet[i]);
        }

        printf("\n============================= VETOR ===========================\n");
        MostrarVetor(vet, tam);

        printf("\n\n====================== VETOR ORDENADO =======================\n");
        for(i=0; i<tam; i++)
        {
            aux = OrdenarVetor(vet, tam);
            vetOrdenado[i] = vet[aux];
            vet[aux] = 1111111111;
        }
        MostrarVetor(vetOrdenado, tam);

        printf("\n");
        ContarValores(vetOrdenado, tam);

        printf("\n\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}

//================================================================================
void MostrarVetor(float vet[], int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        printf("%.1f\t", vet[i]);
    }

    return;
}

int OrdenarVetor(float vet[], int tam)
{
    int posicao=0, i; 
    float menor = vet[0];

    for(i=0; i<tam; i++)
    {
        if(vet[i] < menor)
        {
            menor = vet[i];
            posicao = i;
        }
    }

    return posicao;
}  

void ContarValores(float vet[], int tam)
{
    int i, cont;
    float aux;

    aux = vet[0];
    for(i=1, cont=1; i<tam; i++)
    {
        if(vet[i] == aux && i != 0)
        {
            cont++;
        }
        else 
        {
            printf("\n%.1f ocorre %d vezes.", vet[i-1], cont);
            cont=1;
            aux = vet[i];
        }
    }

    printf("\n%.1f ocorre %d vezes.", vet[tam-1], cont);

    return;
}