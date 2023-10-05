/*Em um intervalo de 0 a 100, apresentar:
a) Os números divisíveis por 3.
b) O quadrado dos números divisíveis por 3.
c) Os números divisíveis por 5 ou por 7.
d) A raiz quadrada dos números divisíveis por 5 ou por 7.
Apresentar cada item em listagem separada. Colocar um cabeçalho antes de cada
listagem de maneira a identificar o conteúdo da mesma. Em cada listagem separar os
números por uma tabulação. A raiz quadrada pode ser obtida pela função sqrt() que está
na biblioteca math.h*/

#include <stdio.h>
#include <math.h>

int main (void)

{
    int n;

    printf("\n\t\t\t\t\tN%cmeros no intervalo entre 0 e 100.\n\n", 163);

    n = 0;

    printf("N%cmeros divis%cveis por 3:\n", 163, 161);
    while(n <= 100)
    {
        if(n % 3 == 0)
        {
            printf("%d\t", n);
        }

        n++;
    }

    n = 0;

    printf("\nQuadrado dos n%cmeros acima:\n", 163);
    while(n <= 100)
    {
        if(n % 3 == 0)
        {
            printf("%d\t", n*n);
        }

        n++;
    }

    n = 0;

    printf("\nN%cmeros divis%cveis por 5 ou por 7:\n", 163, 161);
    while(n <= 100)
    {
        if((n % 5 == 0)||(n % 7 == 0))
        {
            printf("%d\t", n);
        }

        n++;
    }

     n = 0;

    printf("\nRaiz quadrada dos n%cmeros acima:\n", 163);
    while(n <= 100)
    {
        if((n % 5 == 0)||(n % 7 == 0))
        {
            printf("%.2f\t", sqrt(n));
        }

        n++;
    }

    return 0;
}
