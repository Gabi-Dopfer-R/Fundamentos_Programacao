/*Elaborar um programa que leia um número que representa a quantidade de valores ímpares e
múltiplos de 5 que o usuário que ver. Se o usuário informar um valor negativo transformá-lo em
positivo sem usar a função abs(). Fazer a média dos valores múltiplos de 3 desse intervalo.*/


#include <stdio.h>

int main (void)

{
    int n, a, b=0, soma=0;

    printf("Insira o n%cmero de valores %cmpares e divis%cveis por 5 desejados:", 163, 161, 161);
    scanf("%d", &n);

    for(a = 1; a <= n * 5; a++)
    {
        if(a % 3 ==0 && a >= 3)
        {
            soma = a + soma;
            b++;
        }
    }

    printf("A m%cdia dos valores m%cltiplos de 3 nesse intervalo %c: %.2f.", 130, 163, 130, (float)soma / b);
}
