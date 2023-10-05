/*Ler dois números que representam os limites de um intervalo. Ler primeiro o valor do
limite inferior, que deve ser positivo e, em seguida, ler o valor do limite superior, que deve
ser maior que o limite inferior. Validar as entradas. Apresentar os pares e divisíveis por 3
de cada um dos valores do intervalo da seguinte forma:*/

#include <stdio.h>

int main (void)

{
    char resp;
    int inicio, fim, a, b;

    do
    {
        do //validar inicio.
        {
            printf("Insira um valor para o limite inferior:");
            fflush(stdin);
            scanf("%d", &inicio);

            if(inicio <= 0)
            {
                printf("Caract%cre inv%clido, tente novamente.\n", 130, 160);
            }
        }while(inicio <= 0);

        do //validar fim.
        {
            printf("Insira um segundo valor para o limite superior:");
            fflush(stdin);
            scanf("%d", &fim);

            if(fim <= inicio)
            {
                printf("Caract%cre inv%clido, tente novamente.\n", 130, 160);
            }
        }while(fim <= inicio);

        for(a = inicio; a <= fim; a++)
        {
            printf("%d  =", a);

            for(b = 2; b <= a; b+=2)
            {
                if(b % 3 == 0)
                {
                    printf("%d  ", b);
                }

            }

            if(a <= 5)
            {
                printf("Nenhum");
            }
            printf("\n");
        }

        //repetir programa.
        printf("\n\nSe deseja continuar o programa insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while((resp == 's')||(resp == 'S'));

    return 0;
}
