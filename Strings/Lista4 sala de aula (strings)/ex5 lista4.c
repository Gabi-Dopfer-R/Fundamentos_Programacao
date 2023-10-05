/*Ler um texto e imprimir o inverso do texto.*/

#include <stdio.h>

int main(void)
{
    char resp;

    do
    {
        char texto[101], texto2[101];
        int i, j;

        printf("\nInsira o texto: ");
        fflush(stdin);
        gets(texto);

        i=0;
        while(texto[i] != '\0')
        {
            i++;
        }

        j=i-1;
        i=0;

        while(j >= 0) 
        {
            texto2[i] = texto[j];
            j--;
            i++;
        }
        texto2[i] = '\0';

        printf("\n============ TEXTO INVERSO =============\n");
        printf("%s", texto2);

        printf("\n\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}