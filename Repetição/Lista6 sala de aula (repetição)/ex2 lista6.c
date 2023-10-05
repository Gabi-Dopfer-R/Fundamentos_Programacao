/*Ler um número positivo, validar a entrada repetindo a leitura até que seja informado um
número que atende essa condição. Esse número representa a quantidade de números
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
