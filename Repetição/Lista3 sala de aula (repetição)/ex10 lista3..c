/*Escreva um algoritmo que gere a s�rie de Fibonacci at� o termo n que � informado
pelo usu�rio. A s�rie de Fibonacci � formada pela sequ�ncia: 1, 1, 2, 3, 5, 8, 13, 21, 34,
55, ... , etc.*/

#include <stdio.h>

int main (void)

{
    int n, x, a, b, c;

    printf("Informe o n%cmero de termos:", 163);
    scanf("%d", &n);

    a = 0;
    b = 1;

    if(n < 0)
    {
        printf("1\t");
    }
    for(x = 2; x <= n; x++)
    {
        c = a + b;
        printf("%d\t", c);
        a = b;
        b = c;
    }

    return 0;
}
