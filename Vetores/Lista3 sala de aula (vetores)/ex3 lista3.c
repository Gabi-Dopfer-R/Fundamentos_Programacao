/*Gerar um vetor com 20 elementos aleatórios entre 5 e 20. 
Em seguida ordenar o vetor. Percorrer o vetor ordenado e 
mostrar os pares e a soma dos pares de cada um dos valores armazenados. 
Caso existam elementos repetidos, considerar apenas um deles.
Neste exercício, além de utilizar a função GerarVetorInteiroComFaixa(), 
a função MostrarVetorInteiro() e a função OrdenarVetorInteiro(), 
utilizar também uma função MostrarPares() e uma função SomarPares(), 
ambas devem ser criadas em uma biblioteca "pares.h".
O exemplo a seguir mostra a execução do programa, utilizá-lo como modelo de saída.*/

#include <stdio.h>
#include "pares.h"

int main(void)
{
    char resp;

    do
    {
        int vet[20];
        
        GerarVetorInteiroComFaixa(vet, 20, 5, 20);

        printf("\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');
}