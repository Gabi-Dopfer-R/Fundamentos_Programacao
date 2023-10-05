/*Sabendo-se que na matem�tica os n�meros primos come�am a partir do 2, solicite ao
usu�rio que forne�a o valor do limite superior de um intervalo (validar para que seja maior
que 2). O programa dever� fornecer todos os n�meros primos presentes no intervalo. Por
exemplo, se o usu�rio informar 10, o programa dever� fornecer todos os n�meros primos
entre 2 e 10, que s�o 2, 3, 5 e 7.*/

#include <stdio.h>

int main (void)

{
    char resp;
    int n, a, b, c;

    do
    {
        do
        {
            printf("Insira um valor superior a 2:");
            fflush(stdin);
            scanf("%d", &n);

            if(n <= 2)
            {
                printf("Valor inv%clido.\n", 160);
            }
        }while(n <= 2);

        for(a = 2; a <= n; a++)
        {
            c = 0;
            b = 1;

            do
            {
                if(a % b == 0 && b != 1)
                {
                    c++;
                }
                if(c == 0 && b == a - 1)
                {
                    printf("%d\t", a);
                }

                b++;
            }while(b < a);
        }

        printf("\nSe deseja continuar o programa insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while((resp == 's')||(resp == 'S'));

    return 0;
}
