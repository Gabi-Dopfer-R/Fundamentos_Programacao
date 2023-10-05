/*Em uma determinada cidade, sabe se que, de janeiro a abril de um determinado ano (121 dias), a temperatura
ficou entre a 5° e 45°. Gerar um vetor com valores inteiros randômicos nesse intervalo para esse período de
tempo. Para isso, crie uma função na biblioteca Vetores.h chamada GerarVetorInteiroComLimite() que receba
como parâmetros o vetor, o tamanho do vetor, o valor inicial e o valor final do limite da aleatoriedade. A par tir do
vetor gerado, obtenha e mostre:
a) A menor temperatura ocorrida.
b) A maior temperatura ocorrida.
c) A temperatura média.
d) O número de dias em que a temperatura foi inferior à temperatura média.*/

#include <stdio.h>
#include "vetores.h"

int main (void)
{
    char resp;
    
    do
    {
        int vetor[121], inf=5, sup=45, tam=121;

        GerarVetorInteiroComLimite(vetor, tam, inf, sup);

        printf("\n\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}