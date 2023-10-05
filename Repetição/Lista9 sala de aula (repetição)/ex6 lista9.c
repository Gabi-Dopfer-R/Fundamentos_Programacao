/*Ler dois valores que representam os limites do intervalo. Apresentar os valores pares e
divisíveis por cinco desse intervalo em ordem decrescente. O usuário pode informar os
valores em ordem crescente ou decrescente.*/

#include <stdio.h>

int main (void)

{
    char resp;
    int n, n2, inicio, fim, a;

    do
    {
        do //validar limite inicial.
        {
            printf("Insira o limite inferior:");
            fflush(stdin);
            scanf("%d", &n);

            if(n <= 0)
            {
                printf("Caract%cre inv%clido, tente novamente.\n", 130, 160);
            }
        }while(n <= 0);

        do //validar limite final.
        {
            printf("Insira o limite superior:");
            scanf("%d", &n2);

            if(n2 <= 0)
            {
                printf("Caract%cre inv%clido, tente novamente.\n", 130, 160);
            }
        }while(n2 <= 0);

        if(n > n2)
        {
            inicio = n;
            fim = n2;
        }
        else
        {
            inicio = n2;
            fim = n;
        }

         printf("==== Valores do limite pares e divis%cveis por 5 em ordem decrescente ====\n", 161);
         for(a = inicio; a >= fim; a--)
         {
             if(a % 5 == 0 && a % 2 == 0)
             {
                 printf("%d\t", a);
             }
         }

        //repetir programa.
        printf("\n\nSe deseja continuar o programa insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while((resp == 's')||(resp == 'S'));

    return 0;
}
