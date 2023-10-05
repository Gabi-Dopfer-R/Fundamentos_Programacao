/*Escreva um programa que informe se em um 
texto fornecido pelo usuário existem caracteres numéricos.*/

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
            if(texto[i] >= 48 && texto[i] <= 57)
            {
                cont++;
            }
        }

        if(cont != 0)
        {
            printf("\nExistem caract%cres num%cricos.", 130, 130);
        }
        else 
        {
            printf("\nN%co existem caract%cres num%cricos.", 198, 130, 130);
        }       

        printf("\n\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}