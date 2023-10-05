/*Gerar uma matriz 10x2 com valores de 1 a 6. 
A primeira coluna da matriz é a base e a segunda o expoente. 
Utilizando a função potência, 
gerar um vetor que armazena a potência obtida a partir dos valores da matriz. 
A função potência será utilizada para calcular a potência 
(base elevada a um expoente) e não para gerar o vetor. 
O valor obtido do cálculo será armazenado no vetor.*/

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
        int matriz[10][2], i, j, result;

        printf("\n====== Matriz ======\n");
        for(i=0; i<10; i++)
        {
            for(j=0; j<2; j++)
            {
                matriz[i][j] = GerarMatrizInteiro(6);
                MostrarMatrizInteiro(matriz[i][j]);
            }
            printf("\n");
        }
        
        printf("\n\n=========== C%clculo da pot%cncia ============\n", 160, 136);
        printf("BASE \t EXPOENTE \t RESULTADO\n");
        for(i=0; i<10; i++)
        {
            result=1;

            for(j=1; j<=matriz[i][1]; j++)
            {
                result *= matriz[i][0];
            }

            printf("%d \t %d \t\t %d\n", matriz[i][0], matriz[i][1], result);
        }

        printf("\nDeseja repetir o programa? (S ou N)");
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