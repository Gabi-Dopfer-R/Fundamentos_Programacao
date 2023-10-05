/*Fazer um programa que receba um valor inteiro, 
que se refere a quantidade de linhas de um triângulo. 
Implementar no próprio programa uma função que recebe como 
parâmetro esse valor e imprime um triângulo.*/

#include <stdio.h>

//=========================== função ===========================
void triangulo(int linhas)
{
    int aux, a, b, c, aux2;

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

        printf("\n==================== Tri%cngulo ====================\n", 131);
        triangulo(linhas);
        
        printf("\nDeseja repettir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}