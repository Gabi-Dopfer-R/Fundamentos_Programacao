/*O Triângulo de Floyd é um triângulo formado com números naturais. O triângulo
começa em 1 no canto superior esquerdo e continua a escrever a sequência de números
naturais de tal modo que cada linha contém um número a mais do que a linha anterior.
Escreva um programa que leia um número inteiro positivo n e em seguida imprima n
linhas do Triângulo de Floyd.*/

#include <stdio.h>

int main (void)

{
    char resp;
    int n, a, b, c;

    do
    {
        do
        {
            printf("Insira um n%cmero positivo:", 163);
            fflush(stdin);
            scanf("%d", &n);

            if(n <= 0)
            {
                printf("Valor inv%clido, tente novamente.\n", 160);
            }
        }while(n <= 0);

        a = 1;
        b = 1;
        while(a <= n)
        {
            for(c = 1; c <= a; c++)
            {
                printf("%d\t", b);
                b++;
            }

            printf("\n");
            a++;
        }

        printf("\nSe deseja continuar o programa insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while((resp == 's')||(resp == 'S'));

    return 0;
}
