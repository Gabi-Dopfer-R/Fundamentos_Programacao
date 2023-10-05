/*(Desafio) Implemente um algoritmo que lê números informados pelo usuário. O algoritmo deve
parar quando informado um número negativo. Para cada número lido, exceto o número negativo
que representa a saída, o algoritmo deve imprimir a quantidade de dígitos do número informado.
Observação: Desconsidere 0 como dígito se o mesmo estiver no início do número.*/

#include <stdio.h>

int main (void)

{
    int n, a, b;

    do
    {
        fflush(stdin);
        printf("Insira um n%cmero:", 163);
        scanf("%d", &n);

        if(n < 0)
        {
            break;
        }
        else
        {
            for(a = 10, b = 1; a > 0; a = a * 10, b++)
            {
                if(n / a == 0)
                {
                    printf("O n%cmero tem %d d%cgitos.\n", 163, b, 161);
                    break;
                }
            }
        }
    }while(a >= 0);

    return 0;
}
