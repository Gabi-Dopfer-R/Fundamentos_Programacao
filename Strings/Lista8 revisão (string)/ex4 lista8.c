/*Ler um texto e armazenar a primeira palavra 
desse texto em outra string. Mostrar a string armazenada. 
Observação: Colocar ‘\0’ na nova string após o 
último caractere útil para indicar final da mesma.*/

#include <stdio.h>

int main(void)
{
    char resp;

    do 
    {
        char texto[100], palavra[30];
        int cont=0, i;

        printf("\nInsira um texto: ");
        fflush(stdin);
        gets(texto);

        for(i=0; texto[i] != ' '; i++)
        {
            palavra[i] = texto[i];
        }

        palavra[i] = '\0';
        
        printf("\nA primeira palavra %c: %s", 130, palavra);
        
        printf("\n\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}