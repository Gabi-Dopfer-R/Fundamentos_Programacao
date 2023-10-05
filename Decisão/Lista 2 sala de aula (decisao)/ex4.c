/*Ler o gênero (F ou f para feminino, M ou m para masculino. Para qualquer outro
caractere informar que é inválido e finalizar o programa). Se informado um caractere
válido, ler a altura da pessoa e calcular e mostrar o seu peso ideal.*/

#include <stdio.h>

int main (void)

{
    char x;
    float altura, peso;

    printf ("Insira f para feminino e m para masculino de acordo com o seu genero:");
    scanf ("%c", &x);

    if ((x == 'f')  || (x == 'F'))
    {
        printf ("Insira sua altura em metros:");
        scanf ("%f", &altura);

        peso = (62.1 * altura) - (44.7);

        printf ("Seu peso ideal e de: %.2f\n", peso);
    }

    else if  ((x == 'm') || (x == 'M'))
    {
        printf ("Insira sua altura em metros:");
        scanf ("%f", &altura);

        peso = (72.7 * altura) - (58);

        printf ("Seu peso ideal e de: %.2f\n", peso);
    }

    else
    {
        printf ("Caracter invalido.");
    }

    return 0;
}
