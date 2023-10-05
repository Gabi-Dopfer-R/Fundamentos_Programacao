/*Elaborar um programa que leia uma frase e 
determine se a mesma representa um palíndromo. 
Em frases de palíndromos os espaços não são considerados, 
então é necessário inicialmente retirar os espaços em brancos do texto. 
Para comparar as strings use a função 
int ComparaStrings(char str1[], char str2[]) criada na Lista 4 de exercícios.*/

#include <stdio.h>

//========================================================
int palindromo(char palavra[], char aveso[], int tam)
{
    int i, cont=0;

    for(i=0; i < tam; i++)
    {
        if(palavra[i] == aveso[i])
        {
            cont++;
        }
    }

    if(cont == tam)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//======================== PRINCIPAL ==========================
int main(void)
{
    char resp;

    do
    {
        char frase[101], semEspaco[101], aveso[101];
        int i, j;

        printf("\nInsira uma frase: ");
        fflush(stdin);
        gets(frase);

        for(i=0, j=0; frase[i] != '\0'; i++)
        {
            if(frase[i] != ' ')
            {
                semEspaco[j] = frase[i];
                j++;
            }
        }

        semEspaco[j] = '\0';
        j--;

        for(i=0; j >= 0; i++, j--)
        {
            aveso[i] = semEspaco[j];
        }

        aveso[i] = '\0';

        printf("\nInverso da palavra: %s\n", aveso);
        
        if(palindromo(semEspaco, aveso, i) == 1)
        {
            printf("%c um pal%cndromo.", 144, 161);
        }
        else
        {
            printf("N%co %c um pal%cndromo.", 198, 144, 161);

        }
        

        printf("\n\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}