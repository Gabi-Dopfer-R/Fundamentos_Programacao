/*Ler um texto (pode ser composto por uma ou mais palavras), 
copiar para um vetor somente a primeira palavra. 
Mostrar a string armazenada.
Observação: Não esquecer de finalizar a string gerada (copiada).*/

#include <stdio.h>

int main(void)
{
    char resp;

    do
    {
        char texto[101], palavra[30];
        int i;

        printf("\nInsira o texto: ");
        fflush(stdin);
        gets(texto);

        for(i=0; texto[i] != ' '; i++)
        {
            palavra[i] = texto[i];
        }

        palavra[i] = '\0';
        
        printf("\nA string copiada %c: %s\n", 130, palavra);

        printf("\n\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}