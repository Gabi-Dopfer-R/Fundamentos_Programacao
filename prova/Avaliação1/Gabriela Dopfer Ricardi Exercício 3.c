/*Escreva um programa que imprima os n�meros de 1 at� o n�mero informado pelo usu�rio
que deve validado para ser maior que 0 Para cada um desses n�meros calcule e imprima os �mpares consecuti vos
e a soma deles. Tamb�m dever� ser calculada e mostrada a soma de todos os �mpares.*/

#include <stdio.h>

int main (void)

{
    int n, a, b, soma, soma2 = 0, c;

    do
    {
        printf("Insira um n%cmero:", 163);
        fflush(stdin);
        scanf("%d", &n);

        if(n <= 0)
        {
            printf("N%cmero inv%clido, tente novamente.\n", 163, 160);
        }
    }while(n <= 0);

    for(a = 1, c = 1; a <= n; a++)
    {
        soma = 0;
        printf("%d ==>", a);

        for(b = 1; b <= a ; b++, c+=2)
        {
            printf(" %d ", c);
            soma = c + soma;
            if(b != a)
            {
                printf("+");
            }
        }
        printf(" = %d\n", soma);
        soma2 = soma + soma2;
    }
    printf("Soma dos %cmpares: %d", 161, soma2);

    return 0;
}
