/*Ler um número positivo e maior que zero (validar a entrada). Esse número indica a
quantidade de valores divisíveis por 5 que devem ser mostrados. Apresentar n valores por
linha. n é informado pelo usuário e deve ser maior que zero. Validar a entrada.*/

#include <stdio.h>

int main (void)

{
    char resp;
    int n, num, a, b, c;

    do
    {
        do
        {
            printf("Insira quantos m%cltiplos de 5 deseja apresentar:", 163);
            fflush(stdin);
            scanf("%d", &num);

            if(num <= 0)
            {
                printf("Caract%cre inv%clido. Tente novamente.\n", 130, 160);
            }
            else
            {
                do
                {
                    printf("Informe quantos valores por linha deseja apresentar:");
                    fflush(stdin);
                    scanf("%d", &n);

                    if(n <= 0)
                    {
                        printf("Caract%cre inv%clido. Tente novamente.\n", 130, 160);
                    }
                    else
                    {
                       printf("Valores divis%cveis por 5:\n");

                       for(a = 1,c = n, b = 1; b <= num; a++)
                       {
                           if(a % 5 == 0)
                           {
                               b++;
                               c++;
                               printf("%d\t", a);
                           }
                           if((c % n == 0)&&(a % 5 == 0))
                           {
                               printf("\n");
                           }
                       }
                    }

                }while(n <= 0);
            }
        }while(num <= 0);

        printf("\nSe deseja continuar o probrama insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");
    }while((resp == 's')||(resp == 'S'));
}
