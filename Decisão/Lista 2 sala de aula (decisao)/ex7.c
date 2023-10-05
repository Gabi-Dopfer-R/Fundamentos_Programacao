/*Ler um n�mero e utilizando uma estrutura if else if else if... (obrigatoriamente
encadeada) informar se ele �:
a) Divis�vel por 5, por 3 ou por 2;
b) Se ele � divis�vel somente por 5 e por 3; por 5 e por 2; ou por 3 e por 2;
c) Divis�vel somente por 5, por 3 ou por 2;
d) N�o � divis�vel por nenhum destes;*/

#include <stdio.h>

int main (void)

{
    int n;

    printf ("Insira um numero para saber se ele e divisivel por 2, 3 ou 5:");
    scanf ("%d", &n);

    printf ("O numero e divisivel por:\t");

    if (n % 2 == 0)
    {
        printf (" \"2\" ");

        if (n % 3 == 0)
        {
            printf (" \"3\" ");

            if (n % 5 == 0)
            {
                printf (" \"5\" ");
            }
        }

        else if (n % 5 == 0)
        {
            printf (" \"5\" ");
        }
    }

    else if (n % 3 == 0)
    {
        printf (" \"3\" ");

        if (n % 5 == 0)
        {
            printf (" \"5\" ");
        }
    }

    else if (n % 5 == 0)
    {
        printf (" \"5\" ");
    }

    else
    {
        printf ("Nenhum deles.");
    }

    return 0;
}
