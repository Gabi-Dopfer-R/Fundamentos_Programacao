/*Ler dois n�meros que representam, respectivamente, o limite inferior e superior de um
intervalo. Validar para que o limite superior seja maior que o limite inferior. Em rela��o a
esse intervalo:
a) Mostrar os n�meros pares em colunas (n n�meros por linha, separados por tabula��o).
n � um valor informado pelo usu�rio e deve ser validado para se obter uma entrada maior
que zero.
b) Calcular e mostrar a m�dia dos n�meros �mpares. Validar para que n�o seja realizada
uma divis�o por zero. Aten��o: Antes de fazer a soma dos n�meros, converter os
negativos para*/

#include <stdio.h>

int main (void)

{
    char resp;
    int a, b, inicio, fim, n;
    float soma, c;

    do
    {
        soma = 0;
        c = 0;
        do
        {
            printf("Insira um limite inferior:");
            fflush(stdin);
            scanf("%d", &inicio);

            if(inicio <= 0)
            {
                printf("Limite inv%clido, tente novamente.\n", 160);
            }
        }while(inicio <= 0);

        do
        {
            printf("Insira um limite superior:");
            fflush(stdin);
            scanf("%d", &fim);

            if(fim <= inicio)
            {
                printf("Limite inv%clido, tente novamente.\n", 160);
            }
        }while(fim <= inicio);

        do
        {
            printf("Insira um limite de valores por linha:");
            fflush(stdin);
            scanf("%d", &n);

            if(n <= 0)
            {
                printf("Limite inv%clido, tente novamente.\n", 160);
            }
        }while(n <= 0);

        printf("N%cmeros pares:\n", 163);
        for(a = inicio, b = n; a <= fim; a++)
        {
            if(a % 2 == 0)
            {
                printf("%d\t", a);
                b++;
            }

            if(b % n == 0 && b > n)
            {
                printf("\n");
            }

            if(a % 2 != 0)
            {
                soma = a + soma;
                c++;
            }
        }

        printf("\nA m%cdia dos valores %cmpares %c de: %.2f", 130, 161, 130, soma / c);

        printf("\nSe deseja continuar o programa insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while((resp == 's')||(resp == 'S'));

    return 0;
}
