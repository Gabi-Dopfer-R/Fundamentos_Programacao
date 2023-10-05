/*Num sorteio que distribui pr�mios, um participante inicialmente sorteia um inteiro X e depois N valores.
O n�mero de pontos do participante � o tamanho da maior sequ�ncia de valores consecutivos iguais.
Por exemplo, suponhamos que um participante sorteia X = 11 e os N valores nesta ordem:
30; 30; 30; 30; 40; 40; 40; 40; 40; 30; 30.
Ent�o, o participante ganha 5 pontos, correspondentes aos 5 valores 40 consecutivos.
Note que o participante sorteou 6 valores iguais a 30, mas n�o s�o todos consecutivos.
S�o contados apenas os consecutivos. Escreva um programa que leia o n�mero X e
em seguida os N valores que correspondem a essa quantidade X.
O valor de X e os N valores s�o informados pelo usu�rio na execu��o do programa.
Calcule a pontua��o do participante.*/

#include <stdio.h>

int main (void)

{
    int x, n, a, n1, c, d, b;
    do
    {
        printf("Quantidade:");
        fflush(stdin);
        scanf("%d", &x);

        if(x <= 0)
        {
            printf("Valor inv%clido, tente novamente.\n", 160);
        }
    }while(x <= 0);

    printf("1 : ");
    fflush(stdin);
    scanf("%d", &n1);

    c = 1;
    d = 0;

    for(a = 2; a <= x; a++)
    {
        printf("%d : ", a);
        fflush(stdin);
        scanf("%d", &n);

        if(c > d)
        {
            d = c;
            b = n;
        }
        if(n == n1)
        {
            c++;

        }
        else
        {
            c = 1;
        }


        n1 = n;
    }

    printf("Pontua��o: %2d pontos \n", d + 1);
    printf("Numero que se repete mais vezes em sequencia: %d \n", b);

    return 0;
}
