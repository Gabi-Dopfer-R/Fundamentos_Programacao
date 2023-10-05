/*Faça o programa que apresente a seguinte saída como no exemplo, perguntando ao
usuário o número máximo (deve ser positivo).*/

#include <stdio.h>

int main (void)

{
    char resp;
    int n, a, b;

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
            else
            {
                for(a = 1; a <= n; a++)
                {
                    for(b = 1; b <= a; b++)
                    {
                        printf("%d\t", b);
                    }
                    printf("\n");
                }
            }


        }while(n <= 0);

        printf("\nSe deseja continuar o probrama insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while((resp == 's')||(resp == 'S'));

    return 0;
}
