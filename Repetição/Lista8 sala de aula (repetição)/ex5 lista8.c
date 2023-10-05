/*Fazer um programa para mostrar os divisores, calcular a quantidade deles e mostrar
essa quantidade para os números compreendidos entre o valor ‘x’ (informado pelo usuário)
e ‘x+10’, inclusive. Validar a entrada, o usuário deverá fornecer um número positivo entre
2 e 100. Ao final, mostrar a maior quantidade de divisores.*/

#include <stdio.h>

int main (void)

{
    char resp;
    int n, a, b, c, d;

    do
    {
        d = 0;

        do
        {
            printf("Insira um n%cmero entre 2 e 100: ", 163);
            fflush(stdin);
            scanf("%d", &n);

            if(n < 2 || n > 100)
            {
                printf("Caract%cre inv%clido, tente novamente.\n", 130, 160);
            }
        }while(n < 2 || n > 100);

        for(a = n; a <= n + 10; a++)
        {
            printf("%d ==> ", a);

            for(b = 1, c = 0; b <= a; b++)
            {
                if(a % b == 0)
                {
                    printf("%d,  ", b);
                    c++;
                }
            }

            printf("%d dividores.\n", c);
            if (c > d)
            {
                d = c;
            }
        }
        printf("A maior quantidade de divisores %c: %d\n", 130, d);

        printf("\nSe deseja continuar o programa insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while((resp == 's')||(resp == 'S'));

    return 0;

}
