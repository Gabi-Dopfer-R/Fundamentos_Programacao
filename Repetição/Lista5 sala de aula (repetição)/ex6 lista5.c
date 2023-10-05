/*(Desafio) Implemente um algoritmo que l� n�meros informados pelo usu�rio. O algoritmo deve
parar quando informado um n�mero negativo. Para cada n�mero lido, exceto o n�mero negativo
que representa a sa�da, o algoritmo deve imprimir a quantidade de d�gitos do n�mero informado.
Observa��o: Desconsidere 0 como d�gito se o mesmo estiver no in�cio do n�mero.*/

#include <stdio.h>

int main (void)

{
    int n, a, b;

    do
    {
        fflush(stdin);
        printf("Insira um n%cmero:", 163);
        scanf("%d", &n);

        if(n < 0)
        {
            break;
        }
        else
        {
            for(a = 10, b = 1; a > 0; a = a * 10, b++)
            {
                if(n / a == 0)
                {
                    printf("O n%cmero tem %d d%cgitos.\n", 163, b, 161);
                    break;
                }
            }
        }
    }while(a >= 0);

    return 0;
}
