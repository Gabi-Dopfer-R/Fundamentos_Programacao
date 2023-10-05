#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//========================== MOSTRAR VETOR ===============================
void MostrarVetor(int vetor)
{
    printf("%d\t", vetor);
    
    return;
}

//========================== CONTAR DIVISORES =============================
int ContarDivisores(int n)
{
    int aux, cont;

    for(cont = 0, aux = 1; aux <= n; aux++)
    {
        if(n % aux == 0)
        {
            cont++;
        }
    }

    return cont;
}

//==================================== MOSTRAR DIVISORES =======================================
void MostrarDivisores(int n)
{
    int aux;

    for(aux = 1; aux <= n; aux++)
    {
        if(n % aux == 0)
        {
                printf("%d  ", aux); 
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

    igual = vet2[0];

    printf("\n\n======================= DIVISORES =======================\n");
    for(i=0; i<tam; i++)
    {
        if(vet2[i] != igual || i == 0)
        {
            igual = vet2[i];
            printf("%d = ", vet2[i]);
            MostrarDivisores(vet2[i]);
            printf(" ==> %d divisores.\n", ContarDivisores(vet2[i])); 
        }        
    }  
    return;
} 

//================================= VETOR COM LIMITE ===========================================
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