/*Apresentar todos os n�meros entre 20 e 35 separados por tabula��o.*/

#include <stdio.h>

int main (void)

{
    int a;

    printf("Numeros entre 20 e 35:\n");
    for(a = 20; a <= 35; a++)
    {
        printf("%d\t", a);
    }

    return 0;
}
