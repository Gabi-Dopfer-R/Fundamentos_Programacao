/*Ler um n�mero positivo, validar a entrada repetindo a leitura at� que seja informado um
n�mero que atende essa condi��o. Esse n�mero representa a quantidade de n�meros
�mpares a serem mostrados. Apresentar esses valores n por linha, sendo n um n�mero
maior que zero, informado pelo usu�rio. Os valores s�o apresentados separados por
tabula��o. Fazer a m�dia dos n�meros �mpares mostrados.*/

#include <stdio.h>

int main (void)

{
    char resp;
    int impares, n, a, b, soma;

    do //repetir programa.
    {
        do
        {
            printf("Insira aqui a quantidade de n%cmeros %cmpares desejados:", 163, 161);
            scanf("%d", &impares);

            if(impares <= 0)
            {
                printf("Valor inv%clido. Tente novamente.\n", 160);
            }
            else
            {
                do
                {
                    printf("Quantos valores devem ser mostrados por linha?");
                    scanf("%d", &n);

                    soma = 0;

                    if(n <= 0)
                    {
                        printf("Valor inv%clido. Tente novamente.", 160);
                    }
                    else
                    {
                        for(a = 1, b = 0; a <= 2 * impares; a+=2, b++)
                        {
                            soma = a + soma;

                            if(b % n == 0 && b >= n)
                            {
                                printf("\n");
                            }

                            printf("%d\t", a);
                        }
                    }
                }while(n <= 0);
            }
        }while(impares <= 0);

        printf("\nA m%cdia dos valores %c: %.2f.\n\n", 130, 130, (float)soma / impares);

        printf("Se deseja repetir o programa. Insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);

    }while(resp == 's' || resp== 'S');

    return 0;
}
