/*Ler um n�mero e ler um d�gito. Contar quantos d�gitos o n�mero possui. Exemplo:
� informado 5 como d�gito:
55 � possui 2 d�gitos cinco;
10 � possui nenhum d�gito cinco;
1550 � possui dois d�gitos cinco;
50050 � possui dois d�gitos cinco.
Repetir o programa enquanto informados valores positivos.*/

#include <stdio.h>

int main (void)

{
    char resp;
    int n, a, b, c = 0, dig;

    do
    {
        do
        {
            printf("Insira um n%cmero positivo:", 163);
            scanf("%d", &n);

            if(n <= 0)
            {
                printf("Caract%cre inv%clido. Tente novamente.\n", 130, 160);
            }
        }while(n <= 0);

        do
        {
            printf("Insira um d%cgito positivo:", 161);
            scanf("%d", &dig);
            if(dig <= 0)
            {
                printf("Caract%cre inv%clido. Tente novamente.\n", 130, 160);
            }
        }while(dig <=0);

        b = n;

        while(n != 0)
        {
            if(n % 10 == dig)
            {
                c++;
            }

            n = n/10;
        }

        printf("O n%cmero tem %d d%cgitos iguais a %d.\n", 163, c, 161, dig);

        printf("Se deseja continuar o programa insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while((resp == 's')||(resp == 'S'));

    return 0;
}
