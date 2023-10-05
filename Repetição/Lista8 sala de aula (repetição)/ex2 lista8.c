/*Alice e Beto são amigos e sempre que se encontram relembram os tempos de infância
tirando par-ou-ímpar para decidir quem escolhe o filme a ser assistido, ou qual o
restaurante em que vão almoçar, etc. Escreva um programa para determinar quem
ganhou a série de par-ou-ímpar.
A primeira entrada deve ser um valor que identifica a quantidade de jogos realizados,
identificada pela variável n, que deve ser um número maior que zero. A seguir deve-se ler
os n resultados (R1, R2, R3, ..., Ri) dos jogos. Se Ri = 0 significa que Alice ganhou o iésimo
jogo e se Ri = 1 Beto ganhou o i-ésimo jogo, portanto, essa entrada deve ser
validada para aceitar somente o valor 0 ou o valor 1.*/

#include <stdio.h>

int main(void)

{
    char resp;
    int r, a, alice, beto, n;

    do
    {

        alice = 0;
        beto = 0;

        do
        {
            printf("Insira o n%cmero de partidas:", 163);
            fflush(stdin);
            scanf("%d", &n);

            if(n <= 0)
            {
                printf("Valor inv%clido, tente novamente.\n", 160);
            }
        }while(n <= 0);

        printf("Se Alice ganhou a partida insira 0, se foi Beto que ganhuou insira 1:\n");
        for(a = 1; a <= n; a++)
        {
            do
            {
                printf("Partida %d:", a);
                fflush(stdin);
                scanf("%d", &r);

                if(r != 0 && r != 1)
                {
                    printf("Valor inv%clido, tente novamente.\n", 160);
                }
            }while(r != 0 && r != 1);

            if(r == 0)
            {
                alice++;
            }

            if(r == 1)
            {
                beto++;
            }
        }

        printf("Alice ganhou %d partidas. \nBeto ganhou %d partidas.\n", alice, beto);


        printf("\nSe deseja continuar o programa insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while((resp == 's')||(resp == 'S'));

    return 0;
}
