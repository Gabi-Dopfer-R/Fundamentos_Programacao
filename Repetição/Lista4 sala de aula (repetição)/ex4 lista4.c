/*Ler n�meros informados pelo usu�rio. Parar a leitura quando informado o n�mero zero, que n�o deve ser
considerado. Fazer a m�dia dos valores negativos informados. Dos valores positivos contar quantos s�o
�mpares.*/

#include <stdio.h>

int main(void)

{
    int a, b, n, soma;

    soma = 0;
    a = 0;
    b = 0;

    do
    {
        fflush(stdin);
        printf("Insira um n%cmero:", 163);
        scanf("%d", &n);

        if(n == 0)
        {
            break;
        }

        if(n < 0)
        {
            soma = n + soma;
            a++;
        }

        if((n > 0)&&(n % 2 != 0))
        {
            b++;
        }
    }while(n != 0);

    soma = abs(soma);

    printf("Quantidade de valores positivos e %cmpares: %d.\n", 161, b);
    printf("M%cdia dos valores negativos: %.2f", 163, (float)soma / a);

    return 0;
}
