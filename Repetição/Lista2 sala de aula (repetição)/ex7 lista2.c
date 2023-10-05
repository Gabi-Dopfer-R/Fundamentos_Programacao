/*
1 - O que faz o algoritmo a seguir?
2 - Por que a vari�vel s foi inicializada com 0?

Respostas:
1 - O algoritmo mostra a som dos n�meros de 0 a 9.

2 - A v�riavel s foi inicializada com 0 porque s equivale a soma dos n�meros.
Dessa forma para utilizar ela dentro de for realizando a conta correta.
� necess�rio definir uma valor inicial considerado nulo para s.
*/

#include <stdio.h>

int main (void)

{
    int i, s;

    s = 0;

    for(i = 0; i < 10; i++)
    {
        s = s + i;
    }

    printf("%d", s);

    return 0;
}
