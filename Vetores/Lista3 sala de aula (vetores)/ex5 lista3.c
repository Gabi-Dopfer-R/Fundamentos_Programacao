/*Na biblioteca "vetores.h" criar função:
a) Com o protótipo void GerarVetorCharMinuscula(char vetor[], int tam) 
para gerar um vetor randômico de caracteres alfabéticos minúsculos. 
A instrução para gerar randomicamente caracteres alfabéticos minúsculos é:
vetor[i] = rand() % 26 + 97;
b) Com o protótipo void GerarVetorCharMaiuscula(char vetor[], int tam) 
para gerar um vetor randômico de caracteres alfabéticos maiúsculos. 
A instrução para gerar randomicamente caracteres alfabéticos maiúsculos é:
vetor[i] = rand() % 26 + 65;
c) Com o protótipo void MostrarVetorChar(char vetor[], int tam, int n) 
para mostrar o vetor gerado em colunas com n caracteres por linha, separados por um espaço.

Usando essas funções:
a) Gerar randomicamente um vetor com 100 caracteres alfabéticos minúsculos.
b) Gerar randomicamente um vetor com 200 caracteres alfabéticos maiúsculos.
c) Mostrar ambos os vetores gerados em colunas com 10 caracteres por linha, 
sendo cada caractere separado por um espaço.*/

#include <stdio.h>
#include "vetores.h"

int main(void)
{
    char resp;
    
    do
    {
        char vetor[200];

        GerarVetorCharMinuscula(vetor, 100);

        GerarVetorCharMaiuscula(vetor, 200);

        printf("\n\nDeseja repetir o programa? (S ou n) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');
}