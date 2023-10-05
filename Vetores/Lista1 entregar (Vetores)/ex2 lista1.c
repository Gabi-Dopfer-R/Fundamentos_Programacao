/*Gerar um vetor com 50 elementos (valores aleatórios), com valor até 100. 
Armazenar em um vetor os números pares e em outro os números ímpares. 
Mostrar os três vetores. Dica: Declarar os três vetores com tamanho 50, 
na pior hipótese todos os números gerados seriam pares ou ímpares.
Uma solução mais otimizada: primeiro percorrer o vetor 
e contar quantos valores há de cada tipo 
e em seguida declarar os vetores com o tamanho exato, obtido da contagem.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//======================================== FUNÇÕES =============================================
int GerarVetor()
{
    return rand() % 100 + 1;
}

void MostrarVetor(int n)
{
    printf("%d\t", n);
    return;
}

//======================================= PRINCIPAL ===========================================
int main(void)
{
    char resp;
    
    do
    {
        int vet[50], par[50], impar[50], i, i2, i3;
        srand(time(NULL));

        printf("\n============================ Vetor ===========================\n");
        for(i=0, i2=0, i3=0; i<50; i++)
        {
            vet[i] = GerarVetor();
            MostrarVetor(vet[i]);

            if(vet[i] % 2 == 0)
            {
                par[i2] = vet[i];
                i2++;
            }
            else 
            {
                impar[i3] = vet[i];
                i3++;
            }
        }

        printf("\n\n============================ Valores pares ============================\n");
        for(i=0; i<i2; i++)
        {
            MostrarVetor(par[i]);
        }

        printf("\n\n============================ Valores %cmpares ========================\n", 161);
        for(i=0; i<i3; i++)
        {
            MostrarVetor(impar[i]);
        }

        printf("\n\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');
}