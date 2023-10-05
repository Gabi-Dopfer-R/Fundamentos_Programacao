/*Gerar um vetor A com 100 elementos entre 10 e 400, inclusive, mostrar o vetor gerado. 
Em seguida percorrer o vetor A e contar quantos elementos estão entre 10 e 100, 
quantos estão entre 101 e 200, quantos estão entre 201 e 300 e quantos estão entre 301 e 400. 
A quantidade será armazenada no vetor B com tamanho 4, para cada uma das respectivas quantidades. 
Por exemplo, vetorB[0] conterá a quantidade de valores entre 10 e 100 no vetor A.
Observação: É indispensável que os valores sejam contados à medida que o vetor A é percorrido.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char resp;

    do
    {
        int vetA[100], vetB[4]={0,0,0,0}, i;
        srand(time(NULL));

        printf("\n================== VETOR A ==================\n");
        for(i=0; i<100; i++)
        {
            vetA[i] = rand() % 391 + 10;

            printf("%d\t", vetA[i]);

            if(vetA[i] <= 100)
            {
                vetB[0]++;
            }
            else if(vetA[i] <= 200 && vetA[i] > 100)
            {
                vetB[1]++;
            }
            else if(vetA[i] <= 300 && vetA[i] > 200)
            {
                vetB[2]++;
            }
            else
            {
                vetB[3]++;
            }
        }

        printf("\n\n===================== VETOR B ====================\n");
        for(i=0; i<4; i++)
        {
            printf("%d\t", vetB[i]);
        }

        printf("\n\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}