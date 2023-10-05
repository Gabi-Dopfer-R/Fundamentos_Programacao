/*Mostrar os números entre 10 e 0 (ordem decrescente) com intervalo de 0.5.*/

#include <stdio.h>

int main (void)

{
    float a;

    printf("Numeros entre 0 e 10 com um intervalo de 0.5 em ordem decrecente.\n");
    for(a = 10; a >= 0.5; a--)
    {
        printf("\/%.1f", a);
        printf("\/%.1f", a - 0.5);
    }

    return 0;
}
