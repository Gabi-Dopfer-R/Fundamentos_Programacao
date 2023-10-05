/*Faça um programa que apresente uma tabela de lucro esperado, em decorrência do
número de pessoas e valor do ingresso. O valor do ingresso vai de R$ 15,00 até R$ 20,00
aumentando de R$ 0,50 centavos. É informada a quantidade de pessoas.*/

#include <stdio.h>

int main (void)

{
    float ingresso, total;
    int pessoas;

    printf("Insira o n%cmero de pessoas:", 163);
    scanf("%d", &pessoas);

    printf ("\nValor do ingresso:\t Valor total recebido:\n");
    for(ingresso = 15; ingresso <= 20; ingresso+= 0.5)
    {
        total = pessoas * ingresso;
        printf(" %.2f   \t\t  %.2f\n", ingresso, total);
    }

    return 0;
}
