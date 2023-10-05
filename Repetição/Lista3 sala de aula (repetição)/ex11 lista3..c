/*Um n�mero � primo quando � divis�vel de maneira exata somente por 1 e por ele
mesmo. Na figura a seguir, os n�meros destacados s�o primos:
Elaborar um programa que leia um n�mero inteiro e determine se o mesmo � ou n�o um
n�mero primo.*/

#include <stdio.h>

int main (void)

{
    int n, a, b;

    printf("Insira um n%cmero inteiro:", 163);
    scanf("%d", &n);

    b = 0;

    for(a = 2; a < n; a++)
    {
        if(n % a == 0)
        {
            b++;
        }
    }

    if(b == 0)
    {
        printf("N%cmero primo.", 163);
    }
    else
    {
        printf("N%co %c um n%cmero primo.", 198, 130, 163);
    }
}
