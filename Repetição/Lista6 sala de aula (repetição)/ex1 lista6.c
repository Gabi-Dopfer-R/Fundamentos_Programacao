/*Ler um número positivo, validar a entrada repetindo a leitura até que seja informado um
número que atende essa condição. Esse número representa a quantidade de números
ímpares a serem mostrados. Apresentar esses valores n por linha, sendo n um número
maior que zero, informado pelo usuário. Os valores são apresentados separados por
tabulação. Fazer a média dos números ímpares mostrados.*/

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
