/*Elabore um programa que obtenha por meio do teclado a pontuação, em valores
inteiros, de um candidato ao concurso vestibular, nas seguintes área: exatas (e), humanas
(h) e conhecimento geral (cg). A seguir deverá ser definida a média ponderada usando a
seguinte expressão: mp = ((e * 3) + (h * 2) + cg) / 6. A média ponderada calculada define
o rendimento do candidato de acordo com a seguinte tabela:
Insuficiente = 0 - 250 pontos
Baixo = 251 - 500 pontos
Regular = 501 - 700 pontos
Bom = 701 - 900 pontos
Excelente = maior que 900 pontos*/

#include <stdio.h>

int main (void)

{
    float e, h, cg, mp;

    printf ("Insira as notas referentes as determinadas areas:\n");
    printf ("Exatas:");
    scanf ("%f", &e);

    printf("Humanas:");
    scanf ("%f", &h);

    printf ("Conhecimentos Gerais:");
    scanf ("%f", &cg);

    mp = ((e * 3) + (h * 2) + cg) / 6;

    printf ("Media ponderada: %.2f\n", mp);

    if ((mp >= 0) && (mp <= 250))
    {
        printf ("Desempenho: insuficiente.");
    }

    else if ((mp > 250) && (mp <=500))
    {
        printf("Desempenho: baixo.");
    }

    else if ((mp >500) && (mp <= 700))
    {
        printf("Desmpenho: regular.");
    }

    else if ((mp > 700) && (mp <= 900))
    {
        printf ("Desempenho: bom.");
    }

    else if (mp > 900)
    {
        printf ("Desempenho: excelente.");
    }

    return 0;
}
