/*Ler um texto e imprimir o texto na vertical com uma letra por linha.*/

#include <stdio.h>

int main(void)
{
    char resp;

    do
    {
        char texto[101];
        int i;

        printf("\nInsira o texto: ");
        fflush(stdin);
        gets(texto);

        printf("\n============ TEXTO NA VERTICAL =============\n");
        for(i=0; texto[i] != '\0'; i++)
        {
            printf("%c\n", texto[i]);
        }

        printf("\n\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}