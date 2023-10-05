/*Uma empresa deseja calcular a depreciação de seus bens. Para tanto, desenvolver um
programa que obtenha a taxa de depreciação anual para os bens, o valor do bem a ser
depreciado e o período em anos.
Valor depreciado = valor do bem * (taxa de depreciação / 100)
Valor do bem depreciado = valor do bem – valor depreciado
Mostrar os resultados com sugere a figura a seguir:*/

#include <stdio.h>

int main (void)

{
    char resp;
    int temp, a;
    float valor, depreciacao, taxa, soma;

    do
    {
        soma = 0;

        do
        {
            printf("Insira o valor do bem a ser depreciado:");
            fflush(stdin);
            scanf("%f", &valor);

            if(valor <= 0)
            {
                printf("Caract%cre inv%clido. Tente novamente.\n", 130, 160);
            }
        }while(valor <= 0);

        do
        {
            printf("Insira o tempo de deprecia%c%co (em anos):", 135, 198);
            fflush(stdin);
            scanf("%d", &temp);
            if(temp <= 0)
            {
                printf("Caract%cre inv%clido. Tente novamente.\n", 130, 160);
            }
        }while(temp <=0);

        do
        {
            printf("Insira a taxa de deprecia%c%co em porcentagem:", 135, 198);
            fflush(stdin);
            scanf("%f", &taxa);

            if(taxa <= 0)
            {
                printf("Caract%cre inv%clido. Tente novamente.\n", 130, 160);
            }

        }while(taxa <= 0);

        printf("Ano: \t Valor do bem: \t Deprecia%c%co: \t Valor depreciado:\n", 135, 198);
        printf("============================================================\n");

        for(a = 1; a <= temp; a++)
        {
            //ano
            printf("%d \t ", a);

            //valor do bem
            printf("%.2f \t ", valor);

            //depreciação e valor depreciado
            depreciacao = (valor * (taxa / 100));
            soma = depreciacao + soma;
            valor = valor - depreciacao;

            printf("%.2f", depreciacao);
            printf(" \t\t %.2f \n", valor);
        }
        printf("============================================================\n");
        printf("Deprecia%c%co acumulada: %.2f\n", 135, 198, soma);

        printf("Se deseja continuar o programa insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while((resp == 's')||(resp == 'S'));

    return 0;
}
