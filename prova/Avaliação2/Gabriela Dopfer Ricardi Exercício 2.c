/*Questão 2 (3,3 pontos) - Ler uma string. 
Copiar o valor decimal do código ASCII de cada elemento 
da string para um vetor e mostrar o vetor. 
Ordenar o vetor e mostrar o vetor ordenado. 
Percorrer o vetor ordenado contando, 
sem repetição, os números pares e os números ímpares 
e mostrar a soma total desses valores. 
Criar um vetor pares e um vetor impares e copiar, 
sem repetição, os elementos pares e os ímpares do 
vetor ordenado para os vetores pares e impares, 
respectivamente, e mostrar os dois vetores. Criar duas matrizes: 
mPares e mImpares, sendo que mPares deverá conter na primeira 
coluna todos os elementos pares do vetor principal e na segunda
Data: 21 10 /2020
Horário: 12:30 às 15:30
coluna a ocorrência de cada elemento par no vetor 
principal e a mImpares deverá conter na primeira coluna
todos os elementos ímpares do vetor principal e na segunda 
coluna a ocorrência de cada elemento ímpar no vetor principal. 
Mostrar as duas matrizes. Exemplo:*/

#include<stdio.h>

void matrizesSemRepeticao(int vet[], int tam, int vetPar[], int tamPar, int vetImpar[], int tamImpar);
int ParesEImpares(int vet[], int tam);
void OrdenarVetor(int vet[], int tam);
void formarVetor(char texto[]);

//==============================================================
int main (void)
{
    char resp;

    do 
    {
        char texto[100];

        printf("\nInsira um texto:");
        fflush(stdin);
        gets(texto);

        formarVetor(texto);
        
        printf("\n\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}
//=====================================================================

void formarVetor(char texto[])
{
    int i, vet[100];

    printf("\n==== Vetor ====\n");
    for(i=0; texto[i] != '\0'; i++)
    {
        vet[i] = texto[i];

        printf("%d\t", vet[i]);
    }

    OrdenarVetor(vet, i);

    return;
}

void OrdenarVetor(int vet[], int tam)
{
    int i, posicao, j, vetOrden[tam];
    
    printf("\n\n======= Vetor ordenado =========\n");
    for(i=0, posicao=0; i<tam; i++)
    {
        for(j=0; j<tam; j++)
        {
            if(vet[j] < vet[posicao])
            {
                posicao = j;
            }
        }

        vetOrden[i] = vet[posicao];
        vet[posicao] = 256;

        printf("%d\t", vetOrden[i]);
    }

    ParesEImpares(vetOrden, tam);
    return;
}

int ParesEImpares(int vet[], int tam)
{
    int i, j=0, z=0, vetPar[tam], vetImpar[tam];

    for(i=0; i<tam; i++)
    {
        if(vet[i] % 2 == 0)
        {
            if(vet[i+1] != vet[i])
            {
                vetPar[j] = vet[i];
                j++;
            }
        }
        else
        {
            if(vet[i+1] != vet[i])
            {
                vetImpar[z] = vet[i];
                z++;
            }
        }
    }

    printf("\n\nN%cmero de pares (sem repeti%c%co): %d", 163, 135, 198, j);
    printf("\nN%cmero de %cmpares (sem repeti%c%co): %d", 163, 161, 135, 198, z);

    printf("\n\n========= Vetor par =======\n");
    for(i=0; i<j; i++)
    {
        printf("%d\t", vetPar[i]);
    }

    printf("\n\n========= Vetor %cmpar =======\n", 161);
    for(i=0; i<z; i++)
    {
        printf("%d\t", vetImpar[i]);
    }

    matrizesSemRepeticao(vet, tam, vetPar, j, vetImpar, z);

    return;
}

void matrizesSemRepeticao(int vet[], int tam, int vetPar[], int tamPar, int vetImpar[], int tamImpar)
{
    int i, j, mPar[tamPar][2], mImpar[tamImpar][2];

    printf("\n\n======== Matriz par ========\n");
    printf("Pares \t Ocorr%cncias\n", 136);
    for(i=0; i<tamPar; i++)
    {
        mPar[i][1] = 0;

        for(j=0; j<tam; j++)
        {
            if(vet[j] == vetPar[i])
            {
                mPar[i][0] = vetPar[i];
                mPar[i][1]++;
            }
        }

        printf("%d \t %d\n", mPar[i][0], mPar[i][1]);
    }

    printf("\n\n======== Matriz %cmpar ========\n", 161);
    printf("%cmares \t Ocorr%cncias\n", 214, 136);
    for(i=0; i<tamImpar; i++)
    {
        mImpar[i][1] = 0;
        
        for(j=0; j<tam; j++)
        {
            if(vet[j] == vetImpar[i])
            {
                mImpar[i][0] = vetImpar[i];
                mImpar[i][1]++;
            }
        }

        printf("%d \t %d\n", mImpar[i][0], mImpar[i][1]);
    }

    return;
}