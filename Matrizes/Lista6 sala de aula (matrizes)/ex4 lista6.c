/*Gerar uma matriz 50x10 que se refere as respostas de 10 questões de 
múltipla escolha referentes a 50 alunos. 
Gerar um vetor de 10 posições contendo o gabarito de respostas que 
podem ser 1, 2, 3, 4, ou 5. Em seguida comparar as respostas de cada 
candidato com o gabarito e mostrar e mostrar a pontuação correspondente.*/

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
        int alunos[50][10], notas[50], i, j, gabarito[10];

        for(i=0; i<10; i++)
        {
            gabarito[i] = GerarMatrizInteiro(5);
        }
        
        printf("\n==================================== Respostas dos alunos ====================================");
        for(i=0; i<50; i++)
        {
            notas[i] = 0;

            printf("\nAluno %d ==>\t", i+1);
            for(j=0; j<10; j++)
            {
                alunos[i][j] = GerarMatrizInteiro(5);
                MostrarMatrizInteiro(alunos[i][j]);

                if(alunos[i][j] == gabarito[j])
                {
                    notas[i]++;
                }
            }
        }
        
        printf("\n\n================================ Gabarito ==================================\n");
        for(i=0; i<10; i++)
        {
            MostrarMatrizInteiro(gabarito[i]);
        }

        printf("\n\n=========== Pontua%c%co obtida ============\n", 135, 198);
        for(i=0; i<50; i++)
        {
            printf("\nAluno %d ==>\t", i+1);
            MostrarMatrizInteiro(notas[i]);
            printf("\n");
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