/*Criar uma função para gerar valores aleatórios com ambos os limites especificados com o seguinte
protótipo:
void GerarVetorInteiroComFaixa(int vet[], int tam, int limInf, int limSup)
Sendo que limInf e limSup aceitam quaisquer valores positivos.
Dica: Use vetor[i] = (rand() % ((limSup - limInf) + 1)) + limInf;
Usando a função GerarVetorInteiroComFaixa(), gerar aleatoriamente um vetor com 20 elementos entre 5 e
20. Em seguida ordenar o vetor. Percorrer o vetor ordenado e mostrar os divisores e a quantidade de
divisores de cada um dos valores armazenados. Caso existam elementos repetidos, considerar apenas um
deles.
Atenção: Neste exercício, além de utilizar a função GerarVetorInteiroComFaixa(), a função
MostrarVetorInteiro() e a função OrdenarVetorInteiro(), utilizar também a função MostrarDivisores() e a função
QtdeDivisores(), ambas criadas em exercícios anteriores e armazenadas em uma biblioteca chamada
"divisores.h".
A seguir um exemplo da execução do programa, utilizá-lo como modelo de saída.*/

#include <stdio.h>
#include "divisores.h"

int main(void)
{
    char resp;
    
    do
    {
        int limInf=5, limSup=20, vet[20];

        GerarVetorInteiroComFaixa(vet, 20, limInf, limSup);

        printf("\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');
    
    return 0;
}