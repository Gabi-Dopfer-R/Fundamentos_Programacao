/*Ler a altura de 5 pessoas, armazenar em um vetor. 
Validar para que seja informado um valor positivo para a altura. 
Identificar e mostrar a maior altura e o índice do vetor que essa altura corresponde. 
Calcular a média das alturas acima de 1,50 e mostrar essa média. 
Validar para que não seja realizada uma divisão por zero no cálculo da média.*/

#include <stdio.h>

int main (void)
{
    char resp;

    do
    {
        float altura[5], maior=0, soma=0;
        int i, cont=0, posicao;

        printf("\n");
        for(i=0; i<5; i++)
        {
            do
            {
                printf("Insira a altura da pessoa %d: ", i+1);
                scanf("%f", &altura[i]);
                
                if(altura[i] <= 0)
                {
                    printf("Altura iv%clida, Tente novamente.\n", 160);
                }
            }while(altura[i] <= 0);

            if(altura[i] > maior)
            {
                maior = altura[i];
                posicao = i;
            }
            if(altura[i] > 1.5)
            {
                soma += altura[i];
                cont++;
            }
        }

        printf("\nA maior altura %c %.2f e est%c na posi%c%co %d do vetor.\n", 130, maior, 160, 135, 198, posicao);
        
        if(cont != 0)
        {
            printf("A m%cdia das alturas maiores que um metro e meio %c: %.2f\n", 130, 130, soma/cont);
        }
        else
        {
            printf("N%co h%c valores maiores que um metro e meio.\n", 198, 160);
        }

        printf("\ndeseja repetir o programa? (S o N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}