/*Apresentar os n�meros primos entre dois valores, que representam os limites inferior e
superior, respectivamente, de um intervalo, informados pelo usu�rio. Apresent�-los com n
n�meros por linha. n � informado pelo usu�rio. Validar n para que seja maior que 0.
Validar o limite inferior para seja maior que 1 e o limite superior para que seja maior ou
igual ao limite inferior. Implementar a repeti��o de programa.
Exemplo de entrada e sa�da:*/

#include <stdio.h>

int main (void)

{
    char resp;
    int inicio, fim, n, a, b, c, d;

    do //repetir prgrama.
    {
        d = 0;

        do //validar o in�cio.
        {
            printf("Insira um limite inicial:");
            fflush(stdin);
            scanf("%d", &inicio);

            if(inicio <= 1)
            {
                printf("In%ccio inv%clido. Tente novamente:\n", 161, 160);
            }
        }while(inicio <= 1);

        do //validar final.
        {
            printf("Insira um limite final:");
            fflush(stdin);
            scanf("%d", &fim);

            if(fim < inicio)
            {
                printf("Fim inv%clido. Tente novamente:\n", 160);
            }
        }while(fim < inicio);

        do //validar quantidade por linha.
        {
            printf("Insira aqui a quantidade de valores por linha desejada:");
            fflush(stdin);
            scanf("%d", &n);

            if(n < 1)
            {
                printf("Valor inv%clido. Tente novamente:\n", 160);
            }
        }while(n < 1);

        for(a = inicio; a <= fim; a++) //n�mero do intervalo.
        {
            c = 0;

            for(b = 2; b < a; b++) //divisores dos n�meros.
            {
                if(a % b == 0) //calcular se � primo.
                {
                    c++;
                }

                if((c == 0) && (b == a - 1)) //coletar apenas os primos.
                {
                    d++;
                    printf("%d\t", a);


                    if((d >= n) && (d % n == 0)) //definir quando mudar a linha.
                    {
                        printf("\n");
                    }
                }
            }
        }


        printf("\nSe deseja continuar o programa insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while(resp == 's' || resp == 'S');

    return 0;
}
