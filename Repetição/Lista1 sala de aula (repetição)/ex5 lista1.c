/*Ler um número maior que 2 e:
imprimir todos os pares entre 2 e o número lido.
Imprimir a soma dos pares.
o produto dos ímpares que são divisíveis por 9.
a média de todos os números do intervalo.*/

#include <stdio.h>

int main (void)

{
    int a, n, soma1, produto, soma2;
    float media;

    printf("Insira um numero maior que dois:");
    scanf ("%d", &n);


    a = 2;
    soma1 = 0;
    produto = 1;

    printf("Os numero pares entre dois e o numero inserido sao:\n");
    do
    {
        if(a % 2 == 0)
        {
            printf("%d\t", a);
            soma1 = a + soma1;
        }
        else if((a % 2 != 0)&&(a % 9 == 0))
        {
            produto = a * produto;
        }
        else
        {
            produto = 0;
        }
        a++;
    }while(a <= n);

    printf("\nSoma dos numeros pares: %d.\n", soma1);
    printf("O produto dos numeros impares que sao divisiveis por nove e: %d.\n", produto);

    soma2 = 0;
    for(a = 2; a<= n; a++)
    {
        soma2 = a + soma2;
    }

    media = (float) soma2 / (n - 1);
    printf("A media dos numeros entre 2 e o valor inserido e: %.2f", media);

    return 0;
}
