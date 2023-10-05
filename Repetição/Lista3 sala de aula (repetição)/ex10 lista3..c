/*Escreva um algoritmo que gere a série de Fibonacci até o termo n que é informado
pelo usuário. A série de Fibonacci é formada pela sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34,
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
