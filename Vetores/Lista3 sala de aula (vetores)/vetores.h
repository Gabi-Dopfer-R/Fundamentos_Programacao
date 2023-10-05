#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GerarVetor(int n);
void MostrarVetor(int i);
void GerarVetorInteiroComLimite(int vetor[], int tam, int inf, int sup);
int SomarVetorInteiro(int a[], int i);
void OrdenarVetor(int tam, int n);
void GerarVetorFloat0a1(float vetor[], int tam);
void GerarVetorFloat0a100(float vetor[], int tam);
void MostrarVetorFloat(float vetor[], int tam);
float SomarVetorFloat(float vetor[], int tam); 
void GerarVetorCharMinuscula(char vetor[], int tam);
void GerarVetorCharMaiuscula(char vetor[], int tam); 
void MostrarVetorChar(char vetor[], int tam, int n);
void GerarVetorCharAlfanumerico(char vetor[], int tam);
void GerarVetorPositivoNegativo(int vetor[], int tam, int limNegativo, int limPositivo);

//==========================================================
int GerarVetor(int n)
{
    int vetor;

    vetor = rand() % n+1;

    return vetor;
}


//========================================================
void MostrarVetor(int i)
{
    printf("%d\t", i);

    return;
}

//====================================================
void GerarVetorInteiroComLimite(int vetor[], int tam, int inf, int sup)
{
    int i, menor=45, maior=0, soma=0, cont=0;
    float media;

    srand(time(NULL));

    printf("\n======================== Vetor ======================\n");
    for(i=0; i<tam; i++)
    {
        vetor[i] = rand() % (sup +1 -inf) + inf;

        printf("%d\t", vetor[i]);

        if(vetor[i] < menor)
        {
            menor = vetor[i];
        }
        if(vetor[i] > maior)
        {
            maior = vetor[i];
        }

        soma += vetor[i];
    }

    media = soma / 121.00;

    for(i=0; i<121; i++)
    {
        if(vetor[i] < media)
        {
            cont++;
        }
    } 

    printf("\n\nA menor teperatura registrada foi: %d\n", menor);
    printf("A maior temperatura registrada foi: %d\n", maior);
    printf("A temperatura m%cdia foi de: %.2f\n", 130, media);
    printf("N%cmero de dias em que foi regitrada temperatura menor que a m%cdia: %d", 163, 130, cont);
}

//=========================================================================================================
int SomarVetorInteiro(int a[], int i)    
{
    int soma=0;
    
    soma = soma + a[i];
    return soma;
}

//=========================================================================================================
void OrdenarVetor(int tam, int n)
{
    int vet2[tam], vet[tam], menor=10, cont, aux, i;

    for(i=0; i<tam; i++)
    {
        vet[i] = GerarVetor(n);
        MostrarVetor(vet[i]);
    }

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
        vet[cont] = 10;
        menor = 10;
        MostrarVetor(vet2[aux]);
    }

    return;
}  

//==================================================================================
void GerarVetorFloat0a1(float vetor[], int tam)
{
    int i;

    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
        vetor[i] = (float)(rand()) / RAND_MAX;
    }
    
    printf("\n\n========================= VETOR 1 ==============================\n");
    MostrarVetorFloat(vetor, tam);
    
    printf("\n\nSoma de todos os elementos = %.2f", SomarVetorFloat(vetor, tam));

    return;
}


//==================================================================================
void GerarVetorFloat0a100(float vetor[], int tam)
{
    int i, aux1, aux2;
    float maior[tam], menor[tam];

    srand(time(NULL));

    for(i=0, aux1=0, aux2=0; i<tam; i++)
    {
        vetor[i] = ((float)(rand()) / RAND_MAX)*100;

        if(vetor[i] <= 50.00)
        {
            menor[aux1] = vetor[i];
            aux1++;
        }
        else
        {
            maior[aux2] = vetor[i];
            aux2++;
        }
    }

    printf("\n\n========================= VETOR 2 ==============================\n");
    MostrarVetorFloat(vetor, tam);

    printf("\n\n======================== VETOR 3 ===============================\n");
    MostrarVetorFloat(menor, aux1);

    printf("\n\n======================== VETOR 4 ===============================\n");
    MostrarVetorFloat(maior, aux2);

    return;
}

//========================================================================================
void MostrarVetorFloat(float vetor[], int tam)
{
    int i;
    
    for(i=0; i<tam; i++)
    {
        printf("%.2f\t", vetor[i]);
    }

    return;
}

//=====================================================================================
float SomarVetorFloat(float vetor[], int tam)
{
    int i;
    float soma=0;

    for(i=0; i<tam; i++)
    {
        soma+= vetor[i];
    }

    return soma;
}

//======================================================================================================
void GerarVetorCharMinuscula(char vetor[], int tam)
{
    int i;
    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
        vetor[i] = rand() % 26 + 97;
    }

    printf("\n\n ======== Vetor de Min%csculas ========\n", 163);
    MostrarVetorChar(vetor, tam, 10);
    
    return;
}

//================================================================================================
void GerarVetorCharMaiuscula(char vetor[], int tam)
{
    int i;
    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
       vetor[i] = rand() % 26 + 65; 
    }

    printf("\n\n ========== Vetor de Mai%csculas ===========\n", 163);
    MostrarVetorChar(vetor, tam, 10);

    return;
}

//==============================================================================================
void MostrarVetorChar(char vetor[], int tam, int n)
{
    int aux, i;

    for(i=0, aux=1; i<tam; i++, aux++)
    {
        printf("%c ", vetor[i]);

        if(aux % n == 0 && aux >= n)
        {
            printf("\n");
        }
    }

    return;
}

//==============================================================================================
void GerarVetorCharAlfanumerico(char vetor[], int tam)
{
    int i, vet[3]={0,0,0};
    srand(time(NULL));

    for(i=0; i<tam; i++)
    {
        vetor[i] = rand() % 223 + 33;

        if(vetor[i] >= 65 && vetor[i] <= 90)
        {
            vet[0]++;
        }
        else if(vetor[i] >= 97 && vetor[i] <= 122)
        {
            vet[1]++;
        }
        else if(vetor[i] >= 48 && vetor[i] <= 57)
        {
            vet[2]++;
        }
    }

    printf("\n\n============= Vetor Alfanum%crico ==============\n", 130);
    MostrarVetorChar(vetor, tam, 12);

    printf("\n\nCaract%cres alfab%cticos mai%csculos: %d.\n", 130, 130, 163, vet[0]);
    printf("Caract%cres alfab%cticos min%csculos: %d.\n", 130, 130, 163, vet[1]);
    printf("Caract%cres num%cricos: %d.", 130, 130, vet[2]);

    return;
}

//======================================================================================
void GerarVetorPositivoNegativo(int vetor[], int tam, int limNegativo, int limPositivo)
{
    int i, j, vet[tam];
    srand(time(NULL));

    printf("\n\n================ VETOR A ==================\n");
    for(i=0, j=0; i<tam; i++)
    {
        vetor[i] = rand() % (limPositivo - limNegativo + 1) + limNegativo;

        if(vetor[i] > 0)
        {
            vet[j] = vetor[i];
            j++;
        }

        MostrarVetor(vetor[i]);
    }

    printf("\n\n================ VETOR B ==================\n");
    for(i=0; i<j; i++)
    {
        MostrarVetor(vet[i]);
    }

    return;
}