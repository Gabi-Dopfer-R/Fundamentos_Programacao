/*Elaborar um programa que leia um n�mero que representa a quantidade de valores �mpares e
m�ltiplos de 5 que o usu�rio que ver. Se o usu�rio informar um valor negativo transform�-lo em
positivo sem usar a fun��o abs(). Fazer a m�dia dos valores m�ltiplos de 3 desse intervalo.*/


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
