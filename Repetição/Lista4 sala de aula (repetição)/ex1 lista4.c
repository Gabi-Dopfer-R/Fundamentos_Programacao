/*Uma �rvore A tem 1,50 metros e cresce 2 cent�metros por ano, enquanto uma �rvore B tem 1,10 metros
e cresce 3 cent�metros por ano. Construa um programa que calcule e imprima quantos anos ser�o
necess�rios para que a �rvore B seja maior que a �rvore A.*/

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
