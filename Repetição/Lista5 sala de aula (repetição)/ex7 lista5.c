/*Implemente um algoritmo que l� n�meros informados pelo usu�rio. O algoritmo deve parar
quando informado um n�mero negativo. Para cada n�mero lido, exceto o n�mero negativo que
representa a sa�da, o algoritmo dever� imprimir a soma dos d�gitos.*/

#include <stdio.h>

int main (void)

{
    int n, soma;

    do
    {
        fflush(stdin);
        printf("Insira um n%cmero:", 163);
        scanf("%d", &n);

        soma = 0;

        if(n < 0)
        {
            break;
        }
        else
        {
            while(n != 0)
            {
                soma = (n % 10) + soma;
                n = n / 10;
            }

            printf("A soma dos d%cgitos %c: %d.\n", 161, 130, soma);
        }
    }while(n >= 0);

    return 0;
}
