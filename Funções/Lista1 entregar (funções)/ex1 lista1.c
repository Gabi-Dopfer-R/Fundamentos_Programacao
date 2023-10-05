/*Fazer uma função para calcular o quadrado de um número. Usar essa função para:
a) Mostrar o quadrado de um número informado pelo usuário.
b) Apresentar o quadrado entre dois valores (limites de um intervalo) informado pelo usuário.
Os valores para os limites devem estar 1 e 100:*/

#include <stdio.h>

int quadrado (int x)
{
    return x * x;
}

void invalido()
{
    printf("Caract%cre inv%clido, tente novamente.\n", 130, 160);
    return;
}

int main (void)
{
    int n, inicio, fim, ini, fin;
    char resp;

    do
    {
        printf("Insira um n%cmero:", 163);
        fflush(stdin);
        scanf("%d", &n);

        printf("O quadrado desse n%cmero %c: %d\n", 163, 130, quadrado(n));

        do // validar inicio.
        {
            printf("Insira o limite inicial (entre 1 e 100):");
            fflush(stdin);
            scanf("%d", &inicio);

            if(inicio < 1 || inicio > 100)
            {
                invalido();
            }
        }while(inicio > 100 || inicio < 1);

        do // validar fim.
        {
            printf("Insira o limite final (entre 1 e 100):");
            fflush(stdin);
            scanf("%d", &fim);

            if(fim < 1 || fim > 100)
                {
                    invalido();
                }
        }while(fim < 1 || fim > 100);

        if(inicio > fim)
        {
            ini = fim;
            fin = inicio;
        }
        else
        {
            ini = inicio;
            fin = fim;
        }

        printf("==== Quadrado dos valores do limite ====\n");

        for(ini = ini; ini <= fin; ini++)
        {
            printf("%d ^ 2 = %d\n", ini,quadrado(ini));
        }

        printf("\nGostaria de repetir o programa? \"s\" ou \"S\":");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while(resp == 's' || resp == 'S');

    return 0;
}
