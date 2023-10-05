/*Escreva um programa que calcule e escreva a quantidade 
de letras maiúsculas existentes em um texto de até 
100 caracteres fornecido pelo usuário.*/

#include <stdio.h>

int main(void)
{
    char resp;

    do 
    {
        char texto[100];
        int cont=0, i;

        printf("\nInsira um texto: ");
        fflush(stdin);
        gets(texto);

        for(i=0; texto[i] != '\0'; i++)
        {
            if(texto[i] >= 65 && texto[i] <= 90)
            {
                cont++;
            }
        }

        printf("\nExistem %d caract%cres mai%csculos no texto.", cont, 130, 163);

        printf("\n\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}