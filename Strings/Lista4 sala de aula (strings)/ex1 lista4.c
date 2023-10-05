/*Ler um texto com até 100 caracteres. 
Se o primeiro caractere for 'a' imprimir esse texto, 
caso contrário contar quantos caracteres 'o' o texto possui.*/

#include <stdio.h>

int main(void)
{
    char resp;

    do
    {
        char frase[101];
        int cont, i;

        printf("\nInsira uma frase: ");
        fflush(stdin);
        gets(frase);

        if(frase[0] == 'A' || frase[0] == 'a')
        {
            printf("\n\nA frase inserida foi: %s", frase);
        }
        else
        {
            for(i=0, cont=0; frase[i] != '\0'; i++)
            {
                if(frase[i] == 'o' || frase[i] == 'O')
                {
                    cont++;
                }
            }

            printf("\n\n O texto \"%s\" possui %d caract%cres \"O\".", frase, cont, 130);
        }  

        printf("\n\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}