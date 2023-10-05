/*Ler uma string e contar quantos espaços sucessivos ela contém. 
Armazenar esses valores em um vetor. Mostrar esse vetor. Por exemplo:
String informada: Tecnologia em Análise e Desenvolvimento de Sistemas.
Vetor: 1 3 2 4 2 2
Há um espaço entre “Tecnologia” e “em”, há três espaços entre “em” e “Análise”, 
há dois espaços entre “Análise” e “e”, e assim para os demais.*/

#include <stdio.h>

void MostrarVetorInteiro(int vet[], int tam);

int main(void)
{
    char resp;

    do 
    {
        char texto[100];
        int cont=0, i, j, espaco[30];

        printf("\nInsira um texto:");
        fflush(stdin);
        gets(texto);

        for(i=0, j=0; texto[i] != '\0'; i++)
        {
            if(texto[i] == ' ')
            {
                cont++;
            }
            else if(texto[i] != ' ' && cont != 0)
            {
                espaco[j] = cont;
                j++;
                cont=0;
            }
        }
        
        printf("\n================= VETOR ======================\n");
        MostrarVetorInteiro(espaco, j);
        
        printf("\n\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
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