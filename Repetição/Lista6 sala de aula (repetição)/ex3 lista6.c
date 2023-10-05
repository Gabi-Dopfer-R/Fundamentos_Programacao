/*Ler dois números positivos que representam os limites inferior e superior de um
intervalo. Validar a entrada para que sejam informados números positivos. É mais
adequado validá-los separadamente. Validar também para que o valor do limite superior
seja maior e diferente que o valor do limite inferior. Imprimir os números múltiplos de 3
desse intervalo e fornecer a média deles.*/

#include <stdio.h>

int main (void)

{
    char resp;
    int soma, inicio, fim, a, b;
    do
    {
        do
        {
            printf("Insira um limite inicial positivo:");
            fflush(stdin);
            scanf("%d", &inicio);

            if(inicio <= 0)
            {
                printf("Caract%cre inv%clido. Tente novamente.\n", 130, 160);
            }
            else
            {
                do
                {
                    printf("Insira um limite final maior e diferente do inicial:");
                    fflush(stdin);
                    scanf("%d", &fim);

                    if(fim <= inicio)
                    {
                        printf("Caract%cre inv%clido. Tente novamente.\n", 130, 160);
                    }
                    else
                    {
                        printf("N%cmeros m%cltiplos de 3 entre o intervalo:\n", 163, 163);

                        soma = 0;
                        b = 0;

                        for (a = inicio; a <= fim; a++)
                        {
                            if(a % 3 == 0)
                            {
                                printf("%d\t", a);
                                soma = a + soma;
                                b++;
                            }
                        }
                        printf("\nA m%cdia desses valores %c: %.2f.\n", 130, 130, (float)soma / b);
                    }

                }while(fim <= inicio);
            }
        }while(inicio <= 0);

        printf("Se deseja continuar o probrama insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");
    }while((resp == 's')||(resp == 'S'));

}
