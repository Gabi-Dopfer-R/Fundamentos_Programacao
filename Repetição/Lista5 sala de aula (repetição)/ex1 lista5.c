/*Ler um n�mero maior ou igual a 0 que representa a quantidade de valores pares que devem ser
mostrados. Apresentar esses valores n por linha, sendo n um n�mero positivo, informado pelo
usu�rio. Os valores s�o apresentados separados por tabula��o.*/

#include <stdio.h>

int main (void)

{
    int n, a, linha, b;

    printf("Insira um n%cmero que conforme a quantidade de valores pares desejada:", 163);
    scanf("%d", &n);

    if(n >= 0)
    {
        printf("Insira quantos valores por linhas devem ser apresentados:");
        scanf("%d", &linha);

        if(linha > 0)
        {
            for(a = 2, b = 1; a <= 2 * n; a+=2, b++)
            {
                printf("%d\t", a);

                if(b % linha == 0)
                {
                    printf("\n");
                }
            }
        }
    }

    return 0;
}
