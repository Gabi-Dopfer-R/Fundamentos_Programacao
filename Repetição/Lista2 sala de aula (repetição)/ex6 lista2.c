/*O que faz o algoritmo a seguir?*/

#include <stdio.h>

int main (void)

/*O algoritmo mostra os números pares entre 0 e 9.*/
{
    int i;

    for(i = 0; i < 10; i += 2)
    {
        printf("o valor i =%d\n", i);
    }

    return 0;
}
