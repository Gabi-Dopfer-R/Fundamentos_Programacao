/*Apresentar os números entre 0 e 4, com intervalo de 0.25 entre eles, separados por
tabulação.*/

#include <stdio.h>

int main (void)

{
    float a;

    printf("Numeros entre 0 e 4, com um intervalo de 0.25 entre eles:\n");
    for(a = 0; a <= 4; a++)
    {
        if (a == 4)
        {
            printf ("%.2f\t", a);
            break;
        }

        printf("%.2f\t", a);
        printf("%.2f\t", a + 0.25);
        printf("%.2f\t", a + 0.50);
        printf("%.2f\t", a + 0.75);
    }

    return 0;
}
