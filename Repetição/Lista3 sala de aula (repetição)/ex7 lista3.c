/*Ler 10 números e desses contar quantos são pares, quantos são ímpares e quantos
são divisíveis por 7. Apresentar essas quantidades.*/

#include <stdio.h>

int main (void)

{
    int a, b, c, n, x;

    a = 0;
    b = 0;
    c = 0;

    for(x = 1; x <= 10; x++)
    {
        printf("Insira um n%cmero:", 163);
        scanf("%d", &n);

        if(n % 2 == 0)
        {
            a++;
        }
        if(n % 2 != 0)
        {
            b++;
        }
        if(n % 7 == 0)
        {
            c++;
        }
    }
    printf("N%cmero de valores pares: %d\n", 163, a);
    printf("N%cmero de valores %cmpares: %d\n", 163, 161, b);
    printf("N%cmero de valores divis%cveis por 7: %d", 163, 161, c);

    return 0;
}
