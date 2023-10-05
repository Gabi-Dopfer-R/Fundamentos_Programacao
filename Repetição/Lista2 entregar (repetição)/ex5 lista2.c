/*Ler n�meros inteiros. Prosseguir a leitura at� ser informado o valor zero que n�o deve
ser considerados nos c�lculos. Informar:
a) Quantos valores positivos foram informados.
b) Quantos valores negativos e pares foram informados.
c) A m�dia dos valores divis�veis por 3 informados. Usar a func�o abs() para converter os
valores negativos em positivos. Validar para n�o fazer divis�o por zero no c�lculo da
m�dia.*/

#include <stdio.h>

int main (void)

{
    int n, a, b, c, soma;

    soma = 0;
    a = 0;
    b = 0;
    c = 0;

    printf("Para parar o programa digite 0.\n");

    do
    {
        fflush(stdin);
        printf("Insira um valor inteiro:");
        scanf("%d", &n);

        if(n == 0)
        {
            break;
        }

        if(n > 0)
        {
            a++;
        }

        if((n % 2 == 0)&&(n < 0))
        {
            b++;
        }

        if(n % 3 == 0)
        {
            if(n < 0)
            {
                n = abs(n);
                n = -1 * n;
            }

            c++;
            soma = n + soma;
        }
    }while(n != 0);

    printf("Quantidade de valores positivos: %d.\n", a);
    printf("Quantidade de valores negativos e pares: %d.\n", b);
    printf("M%cdia dos valores divis%cveis por 3: %.2f", 130, 161, (float)soma / c);

    return 0;
}
