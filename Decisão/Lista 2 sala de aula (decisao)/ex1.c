/*Ler três valores inteiros diferentes, encontrar e mostrar o menor deles. Deve ser criada
uma variável para armazenar o menor número.*/

#include <stdio.h>

int main (void)

{
    int v1, v2, v3, menor;

    printf ("Insira o primeiro valor:");
    scanf ("%d", &v1);

    printf ("Insira o segundo valor:");
    scanf ("%d", &v2);

    printf ("Insira o terceiro valor:");
    scanf ("%d", &v3);

    if (v1<v2 && v1<v3)
    {
        menor = v1;

    }

    else if (v2<v1 && v2<v3)
    {
        menor = v2;
    }
    else
    {
        menor = v3;
    }

    printf ("O menor valor e: %d", menor);
}
