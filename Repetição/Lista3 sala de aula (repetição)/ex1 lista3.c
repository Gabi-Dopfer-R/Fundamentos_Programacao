/*Apresente (separados por tabula��o) os n�meros entre 1 e 1000 que s�o divis�veis por
11 e �mpares.*/

#include <stdio.h>

int main (void)

{
    int n;

    printf("N%cmeros entre 1 e 100 %cmpares e divis%cveis por 11:\n", 163, 161, 161);
    for(n = 1; n <= 100; n++)
    {
        if((n % 2 != 0)&&(n % 11 == 0))
        {
                printf("%d\t", n);
        }
    }

    return 0;
}
