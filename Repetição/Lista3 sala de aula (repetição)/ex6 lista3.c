/*Apresente os pares entre 0 e 100, sem utilizar if dentro do for. Também calcule e
forneça a média dos pares.*/

#include <stdio.h>

int main (void)

{
    int a, b, soma;

    soma = 0;
    b = 0;

    printf("N%cmeros pares entre 0 e 100.\n", 163);
    for(a = 2; a <= 100; a += 2)
    {
        soma = a + soma;
        b++;
        printf("%d\t", a);
    }

    printf("\nM%cdia dos n%cmeros pares: %.2f", 130, 163, (float)soma / (float)b);

    return 0;
}
