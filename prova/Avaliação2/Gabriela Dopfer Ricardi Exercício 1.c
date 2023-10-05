/*Questão 1 (3,
3 pontos) Ler uma string e contar quantos espaços sucessivos ela contém. Armazenar esses valores em um vetor.
Utilizando função, m ostrar os elementos d esse vetor. Identifique se nesse vetor há três valores em sequência que estão em ordem
crescente. Se há mostre os. Em seguida , usando ordene o vetor e mostre o novamente. Conte a quantidade de cada valor que
há no vetor. Por exemplo:*/

#include<stdio.h>

void ContarEspacos(char texto[]);
void SequeciaDeTresNum(int vet[], int tam);
void OrdenarVetor(int vet[], int tam);
void Ocorrencias(int vet[], int tam);


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

        ContarEspacos(texto);
        
        printf("\n\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}
//=====================================================================

void ContarEspacos(char texto[])
{

    int i, cont, j, vet[100];

    printf("\n==== Vetor mostrado ====\n");
    for(i=0, j=0, cont=0; texto[i] != '\0'; i++)
    {
        if(texto[i] == ' ')
        {
            cont++;
        }
        else if(cont != 0)
        {
            vet[j] = cont;
            cont=0;

            printf("%d\t", vet[j]);
            j++;
        }
    }

    SequeciaDeTresNum(vet, j);

    return;
}

void SequeciaDeTresNum(int vet[], int tam)
{
    int i, j, vetTresNum[3], aux;

    for(i=0, aux=0, j=0; i<tam; i++)
    {
        if(vet[i]+1 == vet[i+1] && vet[i+1]+1 == vet[i+2])
        {
            while(j<3)
            {
                vetTresNum[j] = vet[i];
                i++;
                j++;
                aux=1;
            }
            break;
        }
    }
    
    if(aux == 1)
    {
        printf("\n\n== Sequ%cncia de tr%cs n%cmeros em ordem crescente ==\n", 136, 136, 163);
        for(i=0; i<3; i++)
        {
            printf("%d\t", vetTresNum[i]);
        }
    }
    

    OrdenarVetor(vet, tam);

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
        vet[posicao] = 100;

        printf("%d\t", vetOrden[i]);
    }

    Ocorrencias(vetOrden, tam);

    return;
}

void Ocorrencias(int vet[], int tam)
{
    int i, j, matriz[tam][2], vet2[tam];

    for(i=0, j=0; i<tam; i++)
    {
        if(vet[i] != vet[i+1])
        {
            vet2[j] = vet[i];
            j++;
        }
    }

    printf("\n\nValor \t Ocorr%cncias\n", 136);
    for(i=0; i<tam; i++)
    {
        matriz[i][1] = 0;

        for(j=0; j<tam; j++)
        {
            if(vet[j] == vet2[i])
            {
                matriz[i][0] = vet2[i];
                matriz[i][1]++;
            }
        }

        if(i != tam-1)
        {
            printf("%d \t %d\n", matriz[i][0], matriz[i][1]);
        }
    }

    return;
}