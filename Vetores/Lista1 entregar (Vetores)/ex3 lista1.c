/*Deseja-se publicar o número de acertos de cada aluno em uma prova. A prova consta de 10 questões,
cada uma com cinco alternativas identificadas por A, B, C, D e E. Para isso são dados:
- O cartão gabarito;
- O número de alunos da turma;
- O cartão de respostas para cada aluno, contendo o seu número e suas respostas.*/

#include <stdio.h>

//==========================================================================================================
char gabarito(int i)
{
    char r;
    do
    {
        printf("Insira o gabarito da pergunta %d: ", i+1);
        fflush(stdin);
        scanf("%c", &r);

        if(r!='a' && r!='A' && r!='b' && r!='B' && r!='c' && r!='C' && r!='d' && r!='D' && r!='e' && r!='E')
        {
            printf("Resposta inv%clida, tente novamente.\n", 160);
        }
    }while(r!='a' && r!='A' && r!='b' && r!='B' && r!='c' && r!='C' && r!='d' && r!='D' && r!='e' && r!='E');

    return r;
}

//==================================== PRINCIPl ============================================================
int main(void)
{
    char resp;

    do 
    {
        int alunos, aux, i, cont;
        char vet[10], gab[10];

        do
        {
            printf("\nInsira a quantidade de alunos: ");
            fflush(stdin);
            scanf("%d", &alunos);
            printf("\n");

            if(alunos <= 0)
            {
                printf("O quantidade de alunos precisa ser positiva.");
            }
        }while(alunos <= 0);

        printf("============== GABARITO ===============\n");
        for(i=0; i<10; i++)
        {
            gab[i] = gabarito(i);
        }

        for(aux=1; aux<=alunos; aux++)
        {
            printf("\n==== Aluno %d ====\n", aux);
            for(i=0, cont=0; i<10; i++)
            {
                vet[i] = gabarito(i);

                if(vet[i] == gab[i])
                {
                    cont++;
                }
            }

            printf("\nO aluno %d fez %d pontos.\n", aux, cont);
        }

        printf("\n\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');
}