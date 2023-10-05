/*(DESAFIO) Desenvolva uma função que receba um número inteiro 
positivo e ímpar e imprima um diamante de asteriscos. 
Escreva um programa para validar a entrada e chamar a função.*/

#include <stdio.h>

//=========================== função ===========================
void diamante(int linhas)
{
    int aux, a, b, c, aux2;

    for(aux = 1,aux2 = 0, a=(linhas-1)/2; aux <= (linhas-1)/2; aux++, a--, aux2++)
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

    for(aux = 1; aux <= linhas; aux++)
    {
        printf("*");
    }
    printf("\n");

    for(aux = (linhas-1)/2, aux2 = (linhas -3)/2, a= 1; aux >= 1; aux--, a++, aux2--)
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
            printf("\nInsira um n%cmero de linhas %cmpar:", 163, 161);
            fflush(stdin);
            scanf("%d", &linhas);

            if(linhas % 2 == 0 || linhas <= 0)
               {
                   printf("Tente um valor positivo e %cmpar.\n", 161);
               }
        }while(linhas % 2 == 0 || linhas <= 0);


        printf("\n==================== Diamante ====================\n\n");
        diamante(linhas);
        
        printf("\nDeseja repettir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}