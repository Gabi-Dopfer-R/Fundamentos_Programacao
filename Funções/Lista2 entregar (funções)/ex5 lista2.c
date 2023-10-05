/*Elaborar uma função que recebe o número de linhas, o número de colunas, um determinado caractere e
desenha um quadrado ou retângulo na tela utilizando o caractere.*/

#include <stdio.h>

//============ 1 ===============
void validar()
{
    printf("Caract%cre inv%clido, tente novamente.\n", 130, 160);
    return;
}

//============= 2 ===============
void funcao(linha, coluna, x)
{
    int aux, aux2;

    for(aux = 1; aux <= linha; aux++)
    {
        for(aux2 = 1; aux2 <= coluna; aux2++)
        {
            printf("%c ", x);
        }

        printf("\n");
    }

    return;
}

//================= PRINCIPAL =================
int main(void)
{
    char resp, x;
    int linha, coluna;

    do
    {
        do
        {
            printf("Insira a quantidade de linhas desejadas:");
            fflush(stdin);
            scanf("%d", &linha);
            printf("\n");

            if(linha <= 0)
            {
                validar();
            }
        }while(linha <= 0);

        do
        {
            printf("Insira a quantidade de colunas desejadas:");
            fflush(stdin);
            scanf("%d", &coluna);
            printf("\n");

            if(coluna <= 0)
            {
                validar();
            }
        }while(coluna <= 0);

        printf("Insira o caract%cre que deseja apresentar:", 130);
        fflush(stdin);
        scanf("%c", &x);

        printf("\n=============== Fun%c%co ==============\n", 135, 198);

        funcao(linha, coluna, x);

        printf("\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");
    }while(resp == 's' || resp == 'S');

    return 0;
}
