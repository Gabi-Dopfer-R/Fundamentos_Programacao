#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//========================== MOSTRAR VETOR ===============================
void MostrarVetor(int vetor)
{
    printf("%d\t", vetor);
    
    return;
}

//================================= SOMAR PARES =====================================
void SomarPares(int pares[], int tam)
{
    int soma=0, i;
    for(i=0; i<tam; i++)
    {
        soma += pares[i];
    }

    printf(" => Soma = %d\n", soma);

    return;
}

//===================================== PARES ==================================================
void MostrarPares(int vet[], int tam)
{
    int i, aux, j, pares[50], igual=vet[0];

    printf("\n\n============================= PARES ========================\n");
    for(i=0; i<tam; i++)
    {
        if(vet[i] != igual || i == 0)
        {    
            printf("%d ==> ", vet[i]);

            for(aux=2, j=0; aux<=vet[i]; aux+=2, j++)
            {
                printf(" %d", aux);
                if(aux < vet[i]-1)
                {
                    printf(" +");
                }

                pares[j] = aux;
            }

            SomarPares(pares, j);

            igual = vet[i];
        }
    }

    return;
}

//================================ ORDENAR VETOR ================================================
void OrdenarVetor(int vet[],int tam)
{
    int vet2[tam], menor=1234567, cont, aux, i, igual;

    printf("\n\n======================= VETOR ORDENADO ======================\n");
    for(aux=0; aux<tam; aux++)
    {
        for(i=0; i<tam; i++)
        {
            if(vet[i] < menor)
            {
                menor = vet[i];
                cont = i;
            } 
        }

        vet2[aux] = vet[cont];
        vet[cont] = 1234567;
        menor = 1234567;
        MostrarVetor(vet2[aux]);
    }

    MostrarPares(vet2, tam);
    return;
} 

//================================= VETOR COM FAIXA ===========================================
void GerarVetorInteiroComFaixa(int vet[], int tam, int limInf, int limSup)
{
    int i;
    srand(time(NULL));

    printf("\n===================== VETOR ======================\n");
    for(i=0; i<tam; i++)
    {
        vet[i] = (rand() % ((limSup - limInf) + 1)) + limInf;

        MostrarVetor(vet[i]);
    }

    OrdenarVetor(vet, tam);
    return;
}