/*Números palíndromos são aqueles que escritos da direita para a esquerda ou da
esquerda para a direita tem o mesmo valor. Ex.: 9229, 4554, 9779. Fazer um programa
que dado um número de 4 dígitos, calcular e escrever se este número é ou não
palíndromo.*/

#include <stdio.h>

int main (void)

{
    int n1, n2, n3, n4, n;

    printf ("Insira um numero de 4 digitos:");
    scanf ("%d", &n);

    n1 = n / 1000;
    n2 = (n / 100) - (n1 * 10);
    n3 = (n / 10) - ((n1 * 100) + (n2 * 10));
    n4 = n - ((n1 * 1000) + (n2 * 100) + (n3 * 10));

    if ((n1 == n4) && (n2 == n3))
    {
        printf ("Este numero e um palindromo.");
    }

    else
    {
        printf ("Este numero nao e um palindromo.");
    }

    return 0;
}
