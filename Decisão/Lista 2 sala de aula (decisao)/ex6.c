/*Ler três valores inteiros que representam os lados de um triângulo e determinar se
esses valores podem formar um triângulo (obs.: para ser um triângulo cada lado deve ser
menor que a soma dos outros dois lados). Se for um triângulo, determinar o seu tipo:
equilátero (todos os lados iguais), isósceles (dois lados iguais) e escaleno (todos os lados
diferentes).*/

#include <stdio.h>

int  main (void)

{
    float a, b, c;

    printf ("Insira aqui os lados do triangulo:\n");
    printf ("Lado a:");
    scanf ("%f", &a);

    printf ("Lado b:");
    scanf ("%f", &b);

    printf ("Lado c:");
    scanf ("%f", &c);

    if ((a < (b + c)) && (b < (a + c)) && (c < (b + a)))
    {
        printf ("E um triangulo:");
        if ((a == b) && (b == c))
        {
            printf ("equilatero.");
        }

        else if ((a != b) && (b != c) && (c != a))
        {
            printf ("escaleno.");
        }

        else
        {
            printf ("isoceles.");
        }
    }

    else
    {
        printf ("Nao se pode formar um triangulo com essas medidas.");
    }

    return 0;
}
