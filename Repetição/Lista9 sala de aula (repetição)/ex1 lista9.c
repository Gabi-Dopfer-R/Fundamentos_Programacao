/*Elaborar um programa para ler valores inteiros (incluindo valores positivos e negativos)
até que o valor zero seja informado. O valor zero não deverá ser considerado. O
programa deve informar o maior e o menor entre todos os valores lidos e apresentar a
média dos valores negativos informados. Obs.: Verificar para que não sejam realizadas
divisões por zero.*/

#include <stdio.h>

int main (void)

{
    char resp;
    int n, a, b, d;
    float c, soma;

    do
    {
        soma = 0;
        c = 0;
        a = n;
        b = 0;
        d = 0;

        do
        {
            do
            {
                printf("Insira um valor:");
                fflush(stdin);
                scanf("%d", &n);

                if(n == 0 && d == 0)
                {
                    printf("N%co %c poss%cvel inserir 0 sem um valor anterior.\n", 198, 130, 161);
                }
            }while(n == 0 && d == 0);

            d = 1;

            if(n == 0 && d != 0)
            {
                break;
            }

            if(n <= a && n != 0)
            {
                a = n;
            }
            if(n > b)
            {
                b = n;
            }

            if(n < 0)
            {
                c++;
                soma = soma + n;
            }
        }while(n != 0);

        printf("\nO maior valor %c: %d.\n", 130, b);
        printf("O menor valor %c: %d.\n", 130, a);
        printf("A m%cdia dos valores negativos %c: %.2f", 130, 130, soma / c);


        //repetir programa.
        printf("\n\nSe deseja continuar o programa insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while((resp == 's')||(resp == 'S'));

    return 0;
}
