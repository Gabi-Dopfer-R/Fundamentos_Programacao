/*Apresentar os múltiplos de 10 entre 1000 e 0 (ordem decrescente). Mostrar os valores
separados por uma marca de tabulação e em colunas com 8 números por linha.*/

#include <stdio.h>

int main (void)

{
    int a, b;

    b = 0;

    printf("Valores m%cltiplos de 10 entre 1000 e 0:\n", 163);

    for(a = 1000; a >= 0; a--,b++)
    {
        if(b % 80 == 0)
        {
            printf("\n");
        }
        if(a % 10 == 0)
        {
            printf("%d\t", a);
        }
    }

    return 0;
}
