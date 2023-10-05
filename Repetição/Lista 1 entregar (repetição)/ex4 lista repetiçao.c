/*Elabore um programa que permita ao usuário fornecer 30 números quaisquer e apresente:
A soma dos 10 primeiros números.
A soma do 11º número até o 20º número.
A soma do 21º número até o 30º número.
A soma de todos os números.*/

#include <stdio.h>

int main (void)

{
    int a;
    float soma, soma2, soma3, n1, n2, n3, n4, n5, n6;

    printf("Insira 30 numeros aleatorios:");

    a = 1;

    do
    {
        scanf("%f", &n1);
        scanf("%f", &n2);

        soma = n1 + n2 + soma;
        a++;
    } while (a <= 5);
    do
    {
        scanf("%f", &n3);
        scanf("%f", &n4);

        soma2 = n3 + n4 + soma2;
        a++;
    } while (a <= 10);
    do
    {
        scanf("%f", &n5);
        scanf("%f", &n6);

        soma3 = n5 + n6 + soma3;
        a++;
    } while (a <= 15);

    printf("A soma dos primeiros 10 numeros e:%f\n", soma);
    printf("A soma do 11 ao 20 numero e:%.2f\n", soma2);
    printf("A soma do 21 ao 30 numero e:%.2f\n", soma3);
    printf("A soma de todos os numeros e:%.2f\n", soma + soma2 + soma3);

    return 0;
}
