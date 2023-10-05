/*Escreva um programa que leia o valor de uma aplicação, o percentual de rendimento
mensal obtido por esta aplicação e o período do investimento; e retorne o valor da
aplicação ao final do período de investimento. Obs.: A cada 12 meses o percentual de
rendimento deve ser aumentado em 0,25%. Validar o valor da aplicação para que seja
positivo. Validar o percentual de rendimento para que seja um número entre 0 e 1. Validar
o período para que seja um valor positivo.*/

#include <stdio.h>

int main (void)

{
    char resp;
    int temp, a;
    float valor, taxa;

    do
    {
        do
        {
            printf("Insira o valor da aplica%c%co:", 135, 198);
            fflush(stdin);
            scanf("%f", &valor);

            if(valor <= 0)
            {
                printf("Caract%cre inv%clido. Tente novamente.\n", 130, 160);
            }
        }while(valor <= 0);

        do
        {
            printf("Insira o precentual de rendimento (entre 0 e 1):");
            fflush(stdin);
            scanf("%f", &taxa);

            if(taxa <= 0 || taxa > 1)
            {
                printf("Caract%cre inv%clido. Tente novamente.\n", 130, 160);
            }

        }while(taxa <= 0 || taxa > 1);

        do
        {
            printf("Insira o per%codo de rendimento (em meses):", 161);
            fflush(stdin);
            scanf("%d", &temp);
            if(temp <= 0)
            {
                printf("Caract%cre inv%clido. Tente novamente.\n", 130, 160);
            }
        }while(temp <=0);

        printf("Mes: \t Rendimento(\%%): \t Valor da aplica%c%co:\n", 135, 198);
        printf("====================================================\n");

        for(a = 1; a <= temp; a++)
        {
            //mes
            printf("%d \t ", a);

            if(a >= 12 && a % 12 == 0)
            {
                taxa = taxa + 0.25;
            }

            //rendimento.
            printf("%.2f", taxa);

            //valor final.
            valor = valor +  (valor * taxa);

            printf(" \t\t\t %.2f \n", valor);
        }
        printf("============================================================\n");

        printf("Se deseja continuar o programa insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while((resp == 's')||(resp == 'S'));

    return 0;
}
