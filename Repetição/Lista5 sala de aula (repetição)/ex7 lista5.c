/*Implemente um algoritmo que lê números informados pelo usuário. O algoritmo deve parar
quando informado um número negativo. Para cada número lido, exceto o número negativo que
representa a saída, o algoritmo deverá imprimir a soma dos dígitos.*/

#include <stdio.h>

int main (void)

{
    int n, soma;

    do
    {
        fflush(stdin);
        printf("Insira um n%cmero:", 163);
        scanf("%d", &n);

        soma = 0;

        if(n < 0)
        {
            break;
        }
        else
        {
            while(n != 0)
            {
                soma = (n % 10) + soma;
                n = n / 10;
            }

            printf("A soma dos d%cgitos %c: %d.\n", 161, 130, soma);
        }
    }while(n >= 0);

    return 0;
}
