/*Um número é primo quando é divisível de maneira exata somente por 1 e por ele
mesmo. Na figura a seguir, os números destacados são primos:
Elaborar um programa que leia um número inteiro e determine se o mesmo é ou não um
número primo.*/

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
