/*Incremente o código da função do exercício anterior e 
transforme o triângulo em uma árvore de Natal, como mostrado no exemplo a seguir.*/

#include <stdio.h>

//=========================== função ===========================
void triangulo(int linhas)
{
    int aux, a, b, c, aux2, x;

    for(aux = 1,aux2 = 0, a=linhas-1; aux <= linhas; aux++, a--, aux2++)
    {
        for(b=a; b>0; b--)
        {
            printf(" ");
        }
        for(c=1; c<=aux + aux2; c++)
        {
            printf("*");
        }
        printf("\n");
        
    }

    for(aux=1; aux<= linhas/2; aux++)
    {
        for(a=1; a <= linhas-1; a++)
        {
            printf(" ");
        }
        printf("*\n");
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

        printf("\n==================== Pinheiro ====================\n");
        triangulo(linhas);
        
        printf("\nDeseja repettir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}