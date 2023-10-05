/*Ler uma string e contar quantas palavras a mesma possui. Considerar o seguinte contexto:
O usuário pode informar apenas uma palavra, com ou sem espaços no início ou no final da mesma.
O usuário pode informar mais de um espaço entre palavras.
O usuário pode não informar nenhuma palavra (simplesmente pressionar ENTER).*/

#include <stdio.h>

int main(void)
{
    char resp;

    do
    {
        char texto[101];
        int i, cont, aux;

        printf("\nInsira um texto: ");
        fflush(stdin);
        gets(texto);

        i=0;
        cont=0;
        while(texto[i] != '\0')
        {
            aux=0;
            while(texto[i] != ' ' && texto[i] != '\0')
            {
                aux=1;
                i++;
            }

            if((texto[i] == ' ' || texto[i] == '\0')&& aux == 1)
            {
                cont++;    
            }

            if(texto[i] != '\0')
            {
                i++;
            } 
        }

        printf("\n \"%s\" possui %d palavras", texto, cont);
        
        printf("\n\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}