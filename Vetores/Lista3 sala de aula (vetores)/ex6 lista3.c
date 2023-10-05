/*Na biblioteca "vetores.h" criar uma função com o protótipo 
void GerarVetorCharAlfanumerico(char vetor[], int tam) 
que gera um vetor randômico de caracteres alfanuméricos 
(números, letras e símbolos especiais, exceto caracteres de controle). 
A instrução para gerar randomicamente caracteres alfanuméricos é:
vetor[i] = rand() % 223 + 33;

Usando essa função:
a) Gerar randomicamente um vetor com 200 caracteres alfanuméricos 
(números, letras e símbolos especiais, exceto caracteres de controle).
b) Mostrar o vetor gerado em colunas com 12 caracteres por linha separados por um espaço.
c) Percorrer o vetor e contar quantos caracteres são alfabéticos maiúsculos, 
quantos são alfabéticos minúsculos e quantos são números. 
Armazenar essas quantidades em um vetor. Esse vetor possui tamanho
3 e cada índice armazena a quantidade de um desses tipos. 
É indispensável ir armazenando as quantidades à medida que o vetor é percorrido 
(vet[0]=vet[0]+1), portanto, é necessário inicializar 
com zero o vetor das quantidades antes de utilizá-lo.
d) Mostrar o vetor com as quantidades.*/

#include <stdio.h>
#include "vetores.h"

int main(void)
{
    char resp;

    do
    {
        char vetor[200];

        GerarVetorCharAlfanumerico(vetor, 200); 

        printf("\n\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}
