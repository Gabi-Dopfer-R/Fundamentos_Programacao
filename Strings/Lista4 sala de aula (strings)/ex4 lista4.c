/*Fazer uma função para contar a quantidade de caracteres de uma string, 
incluindo espaços, e outra função não incluindo espaços.*/

#include <stdio.h>

int main(void)
{
    char resp;

    do
    {
        char frase[101];
        int cont, i, aux;

        printf("\nInsira uma frase: ");
        fflush(stdin);
        gets(frase);

        for(i=0, cont=0, aux=0; frase[i] != 0; i++)
        {
            cont++;
            if(frase[i] == ' ')
            {
                aux++;
            }
        }

        printf("\nN%cmero de caract%cres com espa%co: %d\n", 163, 130, 135, cont);
        printf("N%cmero de caract%cres sem espa%co: %d", 163, 130, 135, cont - aux);
        
        printf("\n\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}