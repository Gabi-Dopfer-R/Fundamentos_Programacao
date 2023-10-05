/*Criar uma função para trocar os caracteres 
maiúsculos por minúsculos de uma string.*/

#include <stdio.h>

void maiusculoParaMinusculo(char string[]);

int main(void)
{
    char resp;

    do 
    {
        char string[100];

        printf("\nInsira uma string:");
        fflush(stdin);
        gets(string);

        maiusculoParaMinusculo(string);
        
        printf("\n\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}

//================================================================================================
void maiusculoParaMinusculo(char string[])
{
    int i;

    for(i=0; string[i] != '\0'; i++)
    {
        if(string[i] >= 65 && string[i] <= 90)
        {
            string[i] = (int)string[i] + 32;
        }
    }

    printf("\nString min%cscula: \"%s\".", 163, string);

    return;
}