/*Ler a quantidade e o respectivo valor de produtos. Parar a leitura quando informado
valor 0 ou negativo para a quantidade. Ler o valor somente se informada quantidade
válida. O valor deve ser validado para que seja positivo.
a) Calcular o valor total da compra.
b) Calcular o valor médio dos itens comprados (fazer a média).
c) Do valor total da compra separar e mostrar reais e centavos.
d) Dos reais separar em cédulas de 100, 50, 20, 10, 5, 2 e moedas de 1.*/

#include <stdio.h>

int main (void)

{
    char resp;
    int qnto, soma, n100, x100, n50, x50, n20, x20, n10, x10, n5, x5, n2, x2, m1, real;
    float total, valor, cent;

    do
    {
        total = 0;
        soma = 0;

        do
        {
            do //validar quantidade.
            {
                printf("Insira a quantidade de produtos:");
                fflush(stdin);
                scanf("%d", &qnto);

                if((qnto <= 0)&&(total == 0))
                {
                    printf("Quantidade inv%clida, tente novamente.\n", 160);
                }

            }while((qnto <= 0)&&(total == 0 ));

            if(qnto == 0)
            {
                break;
            }

            do //validar valor.
            {
                printf("Insira o valor da unidade:");
                fflush(stdin);
                scanf("%f", &valor);

                if(valor <= 0)
                {
                    printf("Valor inv%clido, tente novamente.\n", 160);
                }
            }while(valor <= 0);

            printf("\n");

            total = (qnto * valor) + total;
            soma = qnto + soma;
            cent = total - (int)total;
            real = (int)total;

            //nota 100.
            n100 = real / 100;
            x100 = (real % 100);
            //nota 50.
            n50 = x100 / 50;
            x50 = x100 % 50;
            //nota 20.
            n20 = x50 / 20;
            x20 = x50 % 20;
            //nota 10.
            n10 = x20 / 10;
            x10 = x20 % 10;
            //nota 5.
            n5 = x10 / 5;
            x5 = x10 % 5;
            //nota 2.
            n2 = x5 / 2;
            x2 = x5 % 2;
            //moeda 1.
            m1 = x2;

        }while(qnto != 0);

        printf("\nValor total da compra: %.2f\n", total);
        printf("Valor m%cdio dos itens comprados: %.2f\n", 130, total / soma);
        printf("Valor separado em %d reais e %.2f centavos\n", real, cent);

        printf("%d reais equivale a:\n", real);
        if(n100 != 0)
        {
            printf("%d notas de 100 reais\n", n100);
        }
        if(n50 != 0)
        {
            printf("%d notas de 50 reais\n", n50);
        }
        if(n20 != 0)
        {
            printf("%d notas de 20 reais\n", n20);
        }
        if(n10 != 0)
        {
            printf("%d notas de 10 reais\n", n10);
        }
        if(n5 != 0)
        {
            printf("%d notas de 5 reais\n", n5);
        }
        if(n2 != 0)
        {
            printf("%d notas de 2 reais\n", n2);
        }
        if(m1 != 0)
        {
            printf("%d moedas de 1 real", m1);
        }

        //repetir programa.
        printf("\n\nSe deseja continuar o programa insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while((resp == 's')||(resp == 'S'));

    return 0;

}
