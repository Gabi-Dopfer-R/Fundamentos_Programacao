/*Criar uma função para inverter uma string.*/

#include <stdio.h>

void inverterString(char string[]);

int main(void)
{
    char resp;

    do 
    {
        char string[100];

        printf("\nInsira uma string:");
        fflush(stdin);
        gets(string);

        inverterString(string);
        
        printf("\n\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}

//================================================================================================
void inverterString(char string[])
{
    int i, j;
    char inverso[100];

    j=0;
    while(string[j] != '\0')
    {
        j++;
    }

    inverso[j] = '\0';
    j--;

    for(i=0; string[i] != '\0'; i++, j--)
    {
        inverso[j] = string[i];
    }

    printf("\nString inversa: \"%s\".", inverso);

    return;
}