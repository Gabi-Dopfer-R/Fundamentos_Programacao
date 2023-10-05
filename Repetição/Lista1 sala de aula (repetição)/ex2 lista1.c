/*Apresentar os múltiplos de 5, entre 5 e 50 separados por tabulação.*/

#include <stdio.h>

int main (void)

{
    int a;

    printf("Multiplos de 5 entre 5 e 50:\n");
    for(a = 5; a <= 50; a++)
    {
        if(a % 5 == 0)
        {
            printf("%d\t", a);
        }
    }

    return 0;
}
