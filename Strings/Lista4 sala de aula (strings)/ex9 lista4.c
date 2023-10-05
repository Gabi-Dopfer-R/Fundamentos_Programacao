/*Fazer uma função que recebe duas strings e retorna 1 se elas são iguais ou 0, caso sejam diferentes.
Elaborar um programa que leia uma palavra, armazene o seu inverso em outra string e determine se a
mesma representa um palíndromo ou não, usando a função que compara strings. Exemplos de palavras
palíndromos: ovo, natan, sos, arara, mirim, anilina ana.*/

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
        char palavra[30], aveso[30];
        int i, j;

        printf("\nInsira uma palavra: ");
        fflush(stdin);
        gets(palavra);

        i=0;
        while(palavra[i] != '\0')
        {
            i++;
        }

        for(j=i-1, i=0; j >= 0; i++, j--)
        {
            aveso[i] = palavra[j];
        }

        aveso[i] = '\0';

        printf("\nInverso da palavra: %s\n", aveso);
        
        if(palindromo(palavra, aveso, i) == 1)
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