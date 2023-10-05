/*Fazer um programa que solicite ao usu�rio informar um n�mero compreendido entre 10
e 20. Validar essa entrada. Mostrar os n�meros compreendidos entre o valor �x�
(informado pelo usu�rio) e �x+6�, inclusive. Para cada n�mero gerado, mostrar os n�meros
pares de 2 at� o n�mero gerado, calcular a soma dos pares e mostrar a soma.
A sa�da deve ser exibida conforme o exemplo a seguir:*/

#include <stdio.h>

int main(void)

{
    char resp;
    int n, a, b, soma;

    do
    {
        do
        {
            printf("Insira um n%cmero entre 10 e 20: ", 163);
            fflush(stdin);
            scanf("%d", &n);

            if(n < 10 || n > 20)
            {
                printf("Caract%cre inv%clido, tente novamente.\n", 130, 160);
            }
        }while(n < 10 || n > 20);

        for(a = n; a <= n + 6; a++)
        {
            printf("%d ==> ", a);

            for(b = 2, soma = 0; b <= a; b+=2)
            {
                    printf("%d,  ", b);
                    soma = b + soma;
            }

            printf("<-- Soma = %d .\n", soma);
        }

        printf("\nSe deseja continuar o programa insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while((resp == 's')||(resp == 'S'));

    return 0;
}
