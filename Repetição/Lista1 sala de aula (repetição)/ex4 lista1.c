/*Apresentar os números entre 10 e 0, ou seja, em ordem decrescente, separados por
tabulação.*/

#include <stdio.h>

int main (void)

{
    int a;

    printf("Numeros entre 10 e 0, em ordem decrescente:\n");
    for(a = 10; a >= 0; a--)
    {
        printf("%d\t", a);
    }

    return 0;
}
