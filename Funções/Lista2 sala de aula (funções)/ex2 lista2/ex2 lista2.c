/*Criar função para:
a) Receber, por parâmetro, um número inteiro e positivo e retornar a quantidade de divisores que esse número possui.
b) Mostrar os divisores de um número. Essa função recebe como parâmetro o número e mostra 
   os divisores de 1 até o número passado como parâmetro da função.
c) Receber, por parâmetro, um número positivo e retornar a soma dos divisores que esse número possui.
d) Receber, por parâmetro, dois números e retornar o Máximo Divisor Comum dos dois números.
   Salvar todas as funções dentro de uma biblioteca chamada Divisores.h. Use a biblioteca "Divisores.h" 
   em um programa para gerar o seguinte menu:
1 - Quantidade de divisores de um número
2 - Divisores de um número
3 - Divisores, quantidade e soma de um intervalo
4 - Maximo Divisor Comum de dois números*/

#include <stdio.h>
#include "Divisores.h"

int main (void)
{
    char resp;

    do//repete programa
    {
        int menu, n, inf, sup, n1, n2, inicio, fim, aux;

        do//validar menu
        {
            printf("==================== MENU ====================\n");
            printf("Insira o valor correspondente ao item desejado:\n");
            printf("1 - Quantidade de divisores de um n%cmero.\n", 163);
            printf("2 - Divisores de um n%cmero.\n", 163);
            printf("3 - Divisores, quantidade e soma de um intervalo.\n");
            printf("4 - Maximo Divisor Comum de dois n%cmeros.\n", 163);
            fflush(stdin);
            scanf("%d", &menu);
            printf("\n");

            if(menu != 1 && menu != 2 && menu != 3 && menu != 4)
            {
                printf("Caract%cre inv%clido, tente novamente.\n", 130, 160);
            }
        }while(menu != 1 && menu != 2 && menu != 3 && menu != 4);

        switch(menu)
        {
            case 1:
                    printf("================== 1 ==================\n");
                    do
                {
                    printf("Insira um n%cmero:", 163);
                    fflush(stdin);
                    scanf("%d", &n);
                    printf("\n");

                    if(n <= 0)
                    {
                        printf("Caract%cre inv%clido, tente novamente.\n", 130, 160);
                    }
                }while(n <= 0);

                printf("Quantidade: %d", divisores(n));
            break;

            case 2:
                printf("================== 2 ==================\n");

                printf("Insira um n%cmero:", 163);
                fflush(stdin);
                scanf("%d", &n);
                printf("\n");

                divisores2(n);
            break;

            case 3:

                printf("================== 3 ==================\n");
                printf("Insira o limite inferior:");
                fflush(stdin);
                scanf("%d", &inf);

                printf("Insira o limite superior:");
                fflush(stdin);
                scanf("%d", &sup);
                printf("\n");

                if(inf >= sup)
                {
                    inicio = sup;
                    fim = inf;
                }
                else
                {
                    inicio = inf;
                    fim = sup;
                }

                for(aux = inicio; aux <= fim; aux++)
                {
                    printf("%d : ", aux);

                    divisores2(aux);

                    printf("==> Qtdade: %d ==> Soma: %d\n", divisores(aux), soma(aux));
                }
            break;

            case 4:

                printf("================== 4 ==================\n");
                printf("Insira o primeiro n%cmero:", 163);
                fflush(stdin);
                scanf("%d", &n1);

                printf("Insira o segundo n%cmero:", 163);
                fflush(stdin);
                scanf("%d", &n2);
                printf("\n");

                if(n1 >= n2)
                {
                    printf("MDC = %d", MDC(n2, n1));
                }
                else
                {
                    printf("MDC = %d", MDC(n1, n2));
                }
            break;
        }

        printf("\n\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");
    }while(resp == 'S' || resp == 's');
}