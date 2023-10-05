/*Uma árvore A tem 1,50 metros e cresce 2 centímetros por ano, enquanto uma árvore B tem 1,10 metros
e cresce 3 centímetros por ano. Construa um programa que calcule e imprima quantos anos serão
necessários para que a árvore B seja maior que a árvore A.*/

#include <stdio.h>

int main (void)

{
    int a, b, c;

    c = 0;

    printf("Uma %crvore A tem 1,50 metros e cresce 2 cent%cmetros por ano,\n", 160, 161);
    printf("enquanto uma %crvore B tem 1,10 metros e cresce 3 cent%cmetros por ano.\n\n", 160, 161);

    for(a = 150, b = 110; b <= a; a+=2, b+=3)
    {
        c++;
    }

    printf("Ir%c levar %d anos para que B ultrapasse A em tamanho.\n", 160, c);

    return 0;
}
