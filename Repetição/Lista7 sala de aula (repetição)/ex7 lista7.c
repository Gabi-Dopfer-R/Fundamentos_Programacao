/*Num intervalo A e B informado pelo usuário, sendo que A e B devem ser números
pares maiores do que zero e B deve ser maior que A, utilize uma estrutura for para
mostrar cada um dos itens em listagens separadas. Colocar um cabeçalho/título que
identifique cada uma das listagens:
a) Os valores desse intervalo em ordem decrescente.
b) Os valores pares desse intervalo, sem utilizar if, apenas a variável de inicialização,
controle e incremento/decremento do for.
c) Os múltiplos de 10, em ordem decrescente e sem utilizar if, apenas a variável de
inicialização, controle e incremento/decremento do for.
d) Os múltiplos de 5, em ordem decrescente e sem utilizar if, apenas a variável de
inicialização, controle e incremento/decremento do for.*/

#include <stdio.h>

int main (void)

{
    char resp;
    int A, B, a;

    do
    {
        do
        {
            printf("Insira o valor inicial do limite:");
            fflush(stdin);
            scanf("%d", &A);

            if(A <= 0)
            {
                printf("O valor deve ser maior que 0, tente novamente.\n");
            }
            if(A % 2 != 0)
            {
                printf("O valor deve ser par, tente novamente.\n");
            }
        }while(A <= 0 || A % 2 != 0);

        do
        {
            printf("Insira o valor final do limite:");
            fflush(stdin);
            scanf("%d", &B);

            if(B <= A)
            {
                printf("O n%cmero deve ser maior que o valor inicial, tente novamente.\n", 163);
            }
            if(B % 2 != 0)
            {
                printf("O valor deve ser par, tente novamente.\n");
            }
        }while(B <= A || B % 2 != 0);

        printf("==== Os valores desse intervalo em ordem decrescente: ====\n");
        for(a = B; a >= A; a--)
        {
            printf("%d\t", a);
        }

        printf("\n==== Os valores pares desse intervalo: ====\n");
        for(a = A; a <= B; a+=2)
        {
            printf("%d\t", a);
        }

        printf("\n==== Os m%cltiplos de 10, em ordem decrescente: ====\n", 163);
        for(a = B; a >= 10 && a >= A; a-=10)
        {
            printf("%d\t", a);
        }

        printf("\n==== Os m%cltiplos de 5, em ordem decrescente: ====\n", 163);
        for(a = B; a >= 5 && a >= A; a-=5)
        {
            printf("%d\t", a);
        }

        printf("\n\nSe deseja continuar o programa insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while((resp == 's')||(resp == 'S'));

    return 0;
}
