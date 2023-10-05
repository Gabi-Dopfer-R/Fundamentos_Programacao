/*Copiar todas as funções criadas nos exercícios anteriores
para dentro de uma biblioteca chamada "diversos.h".
Fazer um programa que use essa biblioteca e
tenha o seguinte menu de opções (use switch-case):
1 - Calcula o quadrado de um numero
2 - Converte centímetros para polegadas
3 - Converte um valor para dólar ou real
4 - Multiplica dois números*/

#include <stdio.h>
#include "diversos.h"

int main (void)
{
    char resp;
    int menu;

    do
    {
        do
        {
            printf("=============================== Menu ===============================\n");
            printf("Insira o caract%cre correspondente de acordo com o desejado:\n", 130);
            printf("1 = Quadrado do n%cmero.\n", 163);
            printf("2 = Conversor cent%cmetro para polegada.\n", 161);
            printf("3 = Conversor D%clar e Real.\n", 162);
            printf("4 = M%cltiplicador.\n", 163);
            fflush(stdin);
            scanf("%d", &menu);
            printf("\n");

            switch(menu)
            {
                case 1:
                    printf("==== Quadrado do n%cmero. ====\n", 163);

                    int n;

                    printf("Insira um n%cmero:", 163);
                    fflush(stdin);
                    scanf("%d", &n);

                    printf("Quadrado: %d\n\n", quadrado(n));
                break;

                case 2:
                    printf("==== Conversor cent%cmetro para polegada ====\n", 161);

                    float cent;

                    printf("Insira um valor em cent%cmetros:", 161);
                    fflush(stdin);
                    scanf("%f", &cent);

                    printf("Valor correspondente em polegadas: %.2f\n\n", polegada(cent));
                break;

                case 3:
                    printf("==== Conversor D%clar e Real ====\n", 162);

                    float valor, cotacao;
                    char tipo;

                    printf("Insira um valor:");
                    fflush(stdin);
                    scanf("%f", &valor);

                     do
                     {
                        printf("Qual o valor da cota%c%co?", 135, 198);
                        fflush(stdin);
                        scanf("%f", &cotacao);

                        if(cotacao == 0)
                        {
                            invalido();
                        }

                     }while(cotacao == 0);

                    do
                    {
                        printf("Converter para D%clar (D) ou Real (R)?", 162);
                        fflush(stdin);
                        scanf("%c", &tipo);

                        if(tipo != 'd' && tipo != 'D' && tipo != 'r' && tipo != 'R')
                        {
                            invalido();
                        }
                    }while(tipo != 'd' && tipo != 'D' && tipo != 'r' && tipo != 'R');

                    printf("Valor convertido: %.2f\n\n", conversor(valor, cotacao, tipo));
                break;

                case 4:
                    printf("==== M%cltiplicador ====\n", 163);

                    int num1, num2;

                    printf("Insira o primeiro n%cmero:", 163);
                    fflush(stdin);
                    scanf("%d", &num1);

                    printf("Insira o segundo n%cmero:", 163);
                    fflush(stdin);
                    scanf("%d", &num2);

                    printf("A m%cltiplica%c%co deles %c: %d\n\n", 163, 135, 198, 130, multiplicacao(num1, num2));

                break;

                default:
                    invalido();
            }
        }while(menu != 1 && menu != 2 && menu != 3 && menu != 4);

        //repetir programa.
        printf("Deseja continuar o programa? Se SIM \"S\":");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");
    }while(resp == 's' || resp == 'S');
}
