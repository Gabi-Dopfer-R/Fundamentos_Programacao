/*Em um intervalo de 0 a 100, apresentar:
a) Os n�meros divis�veis por 3.
b) O quadrado dos n�meros divis�veis por 3.
c) Os n�meros divis�veis por 5 ou por 7.
d) A raiz quadrada dos n�meros divis�veis por 5 ou por 7.
Apresentar cada item em listagem separada. Colocar um cabe�alho antes de cada
listagem de maneira a identificar o conte�do da mesma. Em cada listagem separar os
n�meros por uma tabula��o. A raiz quadrada pode ser obtida pela fun��o sqrt() que est�
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
