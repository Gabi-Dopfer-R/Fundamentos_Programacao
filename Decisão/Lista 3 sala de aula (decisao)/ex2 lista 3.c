/*Ler dois n�meros inteiros e informar:
a) Se ambos s�o divis�veis por 5.
b) Se pelo menos um deles � divis�vel por 5.
c) Se ambos s�o pares.
d) Se pelo menos um deles � �mpar.*/

#include <stdio.h>

int main (void)

{
    int n1, n2;

    printf ("Insira o primeiro numero:");
    scanf ("%d", &n1);

    printf ("Insira o segundo numero:");
    scanf ("%d", &n2);

    if ((n1 % 5 == 0) && (n2 % 5 == 0))
    {
        printf ("Ambos os numeros %d e %d sao divisiveis por 5.\n", n1, n2);
    }

    else if (n1 % 5 == 0)
    {
        printf ("Apenas o numero %d e divisivel por 5.\n", n1);
    }

    else if (n2 % 5 == 0)
    {
        printf ("Apenas o numero %d e divisivel por 5.\n", n2);
    }
    else
    {
        printf ("Nenhum deles e divisivel por 5.\n");
    }

    if ((n1 % 2 == 0) && (n2 % 2 == 0))
    {
        printf ("Ambos os numeros sao pares.");
    }

    else if ((n1 % 2 != 0) && (n2 % 2 != 0))
    {
        printf ("Ambos os numeros sao imapares.");
    }

    else if (n1 % 2 != 0)
    {
        printf ("A penas o numero %d e impar.", n1);
    }

    else if (n2 % 2 != 0)
    {
        printf ("Apensa o numero %d e impar.", n2);
    }

    return 0;
}
