/*(DESAFIO) Fazer um programa que receba um valor inteiro, 
que se refere a quantidade de linhas de um triângulo e um valor do tipo char, 
que se refere ao tipo do triângulo (que pode ser preenchido ou vazado). 
Implementar no próprio programa uma função que recebe como parâmetros esses valores e 
imprime um triângulo como no exemplo a seguir.*/

#include <stdio.h>

//=========================== função ===========================
void triangulo(int linhas, char tipo)
{
    int aux, a, b, c, aux2;

    if(tipo == 'p' || tipo == 'P')
    {
        for(aux = 1,aux2 = 0; aux <= linhas; aux++, aux2++)
        {
            for(c=1; c<=aux + aux2; c++)
            {
                printf("*");
            }
            printf("\n");
            
        }
    }
    else
    {
        printf("*\n");

        if(linhas >= 2)
        {
              printf("**\n");

        }
        
        for(aux=1, b=1; aux<=linhas-2; aux++, b++)
        { 
            printf("*");

            for(a=1; a<=b; a++)
            {
                printf(" ");
            }

            printf("*\n");
        }

        for(c=1; c<=linhas; c++)
        {
            printf("*");
        }
    }

    return;
}

//============================ PRINCIPAL ============================
int main (void)
{
    char resp;

    do
    {
        int linhas;
        char tipo;

        do
        {
            printf("\nInsira o n%cmero de linhas desejadas no tri%cngulo:", 163, 131);
            fflush(stdin);
            scanf("%d", &linhas);

            if(linhas <= 0)
            {
                printf("O valor precisa ser positivo.\n");
            }
        }while(linhas <= 0);

        do
        {
            printf("Deseja o tri%cngulo vazado (V) ou preenchido (P)? ", 131);
            fflush(stdin);
            scanf("%c", &tipo);

            if(tipo != 'p' && tipo != 'P' && tipo != 'v' && tipo != 'V')
            {
                printf("O caract%cre precisa ser p ou v.\n", 130);
            }
        }while(tipo != 'p' && tipo != 'P' && tipo != 'v' && tipo != 'V');

        printf("\n==================== Tri%cngulo ====================\n", 131);
        triangulo(linhas, tipo);
        
        printf("\n\nDeseja repettir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}