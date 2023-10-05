/*Ler um n�mero positivo, validar a entrada repetindo a leitura at� que seja informado um
n�mero que atende essa condi��o. Esse n�mero representa a quantidade de n�meros
primos a serem mostrados.*/

#include <stdio.h>

int main (void)

{
    char resp;
    int n, a, b, c;

    do
    {
        do
        {
            printf("Quantos valores primos deseja mostrar?");
            scanf("%d", &n);

            if(n <= 0)
            {
                printf("Caract%cre inv%clido. Tente novamente.\n", 130, 160);
            }
            else
            {
                a = 1;
                b = 1;
                while(b <= n)
                {
                    for(c = 1; c < a; c++)
                    {
                        if((a % c == 0)&&(a != 2)&&(c > 1))
                        {
                            break;
                        }
                        if(((a % c != 0)&&(c == a - 1))||(a == 2))
                        {
                            printf("%d\t", a);
                            b++;
                            break;
                        }
                    }

                    a++;
                }
            }
        }while(n <= 0);

        printf("\nSe deseja repetir o programa. Insira: 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);

    }while(resp == 's' || resp == 'S');
}
