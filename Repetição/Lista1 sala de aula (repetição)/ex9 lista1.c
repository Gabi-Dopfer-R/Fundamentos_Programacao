/*Ler um número que indica a quantidade de ímpares iniciando em 1 que deve ser
mostrada. O valor informado para a quantidade deve ser maior que 0. Validar a entrada.*/

#include <stdio.h>

int main (void)

{
    int n, a, b;

    printf("Insira o n%cmero de valores %cmpares desejados:", 163, 161);
    scanf("%d", &n);

    a = n + (n--);
    b = 1;

    do
    {
        if(n <= 0)
        {
            printf("O valor deve ser maior que 0. Tente novamente.");
        }
        else if (b % 2 != 0)
        {
            printf("%d\n", b);
        }

        b++;

    } while((b <= a));

    return 0;
}
