/*Escreva um programa que conta e exibe, separadamente, 
a quantidade de caracteres alfabéticos e de dígitos 
numéricos existentes em um texto de até 100 caracteres 
fornecido pelo usuário.*/

#include <stdio.h>

int main(void)
{
    char resp;

    do 
    {
        char texto[100];
        int cont=0, i, cont2=0;

        printf("\nInsira um texto: ");
        fflush(stdin);
        gets(texto);

        for(i=0; texto[i] != '\0'; i++)
        {
            if((texto[i] >= 65 && texto[i] <= 90)||(texto[i] >= 97 && texto[i] <= 122))
            {
                cont++;
            }
            if(texto[i] >= 48 && texto[i] <= 57)
            {
                cont2++;
            }
        }

        printf("\nExistem %d caract%cres alfab%cticos no texto.", cont, 130, 130);
        printf("\nExistem %d d%cgitos no texto.", cont2, 161);

        printf("\n\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}