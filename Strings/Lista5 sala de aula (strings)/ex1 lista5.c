/*Ler uma string e copiá-la para outra string sem os 
possíveis espaços em branco no início e no final. 
Também devem ser eliminados dois ou mais espaços sucessivos entre as palavras.*/

#include <stdio.h>

int main(void)
{
    char resp;

    do
    {
        char texto[101], texto2[101];
        int i, j;

        printf("\nInsira um texto: ");
        fflush(stdin);
        gets(texto);

        for(j=0, i=0; texto[i] != '\0'; i++)
        {
            if(texto[i] != ' ')
            {
                texto2[j] = texto[i];
                j++;
            }
        }

        texto2[j] = '\0';

        printf("\nTexto sem espa%cos: %s", 135, texto2);
        
        printf("\n\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}