/*Apresentar a tabuada de um número informado pelo usuário.*/

#include <stdio.h>

int main(void)

{
    int n, a;

    printf("Informe um n%cmero:", 163);
    scanf("%d", &n);

    for(a = 0; a <= 10; a++)
    {
        printf("%d * %d = %d\n", n, a, n * a);
    }

    return 0;
}

