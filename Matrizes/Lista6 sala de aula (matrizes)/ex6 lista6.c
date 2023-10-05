/*Gerar uma matriz 3x3 com números randômicos no intervalo 
de 1 a 100 e a seguir escrever a localização 
(linha e a coluna) do maior valor.*/

#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GerarMatrizInteiro(int n);
void MostrarMatrizInteiro(int n);

//======================================================================================
int main(void)
{
    char resp;

    do 
    {
        int matriz[10][2], i, j, loc[2], maior=0;

        printf("\n====== Matriz ======\n");
        for(i=0; i<3; i++)
        {
            for(j=0; j<3; j++)
            {
                matriz[i][j] = GerarMatrizInteiro(100);
                MostrarMatrizInteiro(matriz[i][j]);

                if(matriz[i][j] > maior)
                {
                    maior = matriz[i][j];
                    loc[0]= i;
                    loc[1]= j;
                }
            }
            printf("\n");
        }

        printf("\nO maior elemento da matriz %c %d e se encontra na coluna %d da linha %d.", 130, maior, loc[1]+1, loc[0]+1);
        
        printf("\n\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}

//=======================================================================================
int GerarMatrizInteiro(int n)
{
    return rand() % n + 1;
}

void MostrarMatrizInteiro(int n)
{
    printf("%d\t", n);
    return;
}