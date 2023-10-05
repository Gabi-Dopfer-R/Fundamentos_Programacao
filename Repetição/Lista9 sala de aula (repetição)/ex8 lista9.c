/*Apresentar os números primos em ordem crescente entre dois valores informados pelo
usuário, com x valores por linha. Validar as entradas para que sejam valores positivos.*/

#include <stdio.h>

int main (void)

{
    char resp;
    int n, n2, inicio, fim, a, b, c, x;

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

        do //validar x.
        {
            printf("Quantos valores por linha deseja apresentar?");
            scanf("%d", &x);

            if(x <= 0)
            {
                printf("Caract%cre inv%clido, tente novamente.\n", 130, 160);
            }
        }while(x <= 0);

        if(n > n2)
        {
            inicio = n2;
            fim = n;
        }
        else
        {
            inicio = n;
            fim = n2;
        }

        printf("Valores primos em ordem crescente:\n");
        for(a = inicio, c = 0; a <= fim; a++)
        {
            for(b = 2; b <= a; b++)
            {
                if(a % b == 0 && a != b)
                {
                    break;
                }
                if((a % b != 0 && b == a - 1)|| a == 2)
                {
                    printf("%d\t", a);
                    c++;

                    if(c >= x && c % x == 0)
                    {
                        printf("\n");
                    }
                }
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
