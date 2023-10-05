/*N�meros pal�ndromos s�o aqueles que escritos da direita para a esquerda ou da
esquerda para a direita tem o mesmo valor. Ex.: 9229, 4554, 9779. Fazer um programa
que dado um n�mero de 4 d�gitos, calcular e escrever se este n�mero � ou n�o
pal�ndromo.*/

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
