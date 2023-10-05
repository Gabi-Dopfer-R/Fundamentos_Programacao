/*Ler um número N qualquer maior ou igual a 1 e menor ou igual a 50 e apresentar o
valor obtido da multiplicação sucessiva de N por 2, enquanto o produto for menor que 250
(N*2; N*2*2; N*2*2*2; etc.). O valor N deverá ser verificado quanto a sua validade. Caso o
usuário informe um valor fora da faixa, o programa deverá informar que o valor digitado
não é válido e repetir a leitura.
Atenção: o produto deve ser menor que 250.*/

#include <stdio.h>

int main (void)

{
    char resp;
    int n;

    do
    {
        do
        {
            printf("Insira um n%cmero:", 163);
            fflush(stdin);
            scanf("%d", &n);

            if(n < 1 || n > 50)
            {
                printf("Valor inv%clido, tente novamente.\n", 160);
            }

        }while(n < 1 || n > 50);

        while(n * 2 < 250)
        {
                n = n * 2;
                printf("N * 2 = %d\n", n);

        }

        printf("Se deseja repetir o programa insira 'S' ou 's':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while(resp == 's' || resp == 'S');
}
