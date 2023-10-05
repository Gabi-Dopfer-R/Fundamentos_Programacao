/*Um número abundante é aquele cuja soma dos seus divisores (excluído o próprio número) é
maior do que ele mesmo. Escreva um programa que permita a leitura de um valor a partir do teclado e imprima uma
mensagem informando se o número digitado é ou não abundante.*/

#include <stdio.h>

int main (void)

{
    int n, soma, a;

    printf("Insira um n%cmero:", 163);
    scanf("%d", &n);

    soma = 0;

    printf("\nDivisores:\n");

    for(a = 1; a < n; a++)
    {
        if(n % a == 0)
        {
            printf("   %d\n", a);
            soma = a + soma;
        }
    }

    printf(" ------\n   %d\n\n", soma);

    if(soma > n)
    {
        printf("%d %c abundante, pois a soma dos divisores %c maior que %d.\n", n, 130, 130, n);
    }
    else
    {
        printf("%d n%co %c abundante, pois a soma dos divisores %c menor que %d.\n", n, 198, 130, 130, n);
    }

}
