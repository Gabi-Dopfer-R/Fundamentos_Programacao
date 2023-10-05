/*Fazer uma fun��o que apresenta o resultado da multiplica��o de dois n�meros. Usar essa fun��o para:
a) Apresentar a multiplica��o de dois n�meros informados pelo usu�rio.
b) Apresentar a tabuada (0 a 10) de um n�mero informado pelo usu�rio.*/

#include<stdio.h>

int multiplicacao(int n1, int n2)
{
    return n1 * n2;
}


int main (void)
{
    char resp;
    int n1, n2, n, tabuada;

    do
    {
        //primeira parte.
        printf("Insira o primeiro n%cmero:", 163);
        fflush(stdin);
        scanf("%d", &n1);

        printf("Insira o segundo n%cmero:", 163);
        fflush(stdin);
        scanf("%d", &n2);

        printf("M%cltiplica%c%co: %d * %d = %d\n", 163, 135, 198, n1, n2, multiplicacao(n1, n2));

        //segunda parte.
        printf("\nInsira o n%cmero que deseja calcular a tabuada:", 163);
        fflush(stdin);
        scanf("%d", &n);

        printf("==== TABUADA ====\n");
        for(tabuada = 0; tabuada <= 10; tabuada++)
        {
            printf("%d * %d = %d\n", n, tabuada, multiplicacao(n, tabuada));
        }

        printf("\nDeseja repetir o progama? \"s\" ou \"S\":");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");
    }while(resp == 's' || resp == 'S');
}
