/*Imprimir os números de 100 a 0 (nessa ordem) utilizando a estrutura while. Calcular e mostrar a média
aritmética dos números.*/

#include <stdio.h>

int main (void)

{
    int soma, a;
    printf("N%cmeros de 100 a 0.\n", 163);

    a = 100;
    soma = 0;

    while(a >= 0)
    {
        printf("%d\t", a);
        soma = a + soma;
        a--;
    }

    printf("A m%cdia dos valores deste intervalo %c: %.2f", 130, 130, (float)soma / 101);

    return 0;
}
