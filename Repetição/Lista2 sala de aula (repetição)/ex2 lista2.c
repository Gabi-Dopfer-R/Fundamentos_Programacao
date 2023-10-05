/*Na matem�tica, o fatorial de um n�mero � o produto de todos os inteiros positivos
menores ou iguais ao n�mero. Exemplo: Fatorial de 5 � 1 * 2 * 3 * 4 * 5 = 120. Elabore um
programa que calcule o fatorial de um n�mero informado pelo usu�rio. Lembrando que
fatorial de 1 = 1 e fatorial de 0 = 1.
Obs.: Use uma vari�vel de tipo de dado long long int (%lld) para armazenar o fatorial.*/

#include <stdio.h>

int main (void)

{
    long long int n, fatorial, a;

    printf("Insira um valor:");
    scanf("%lld", &n);

    fatorial = 1;

    if((n == 1)||(n == 0))
    {
        printf("O fatorial %c %lld", 130, fatorial);
    }
    else
    {
        for(a = 1; a <= n; a++)
        {
            fatorial = a * fatorial;
        }

        printf("O fatorial %c %lld", 130, fatorial);
    }

    return 0;
}

