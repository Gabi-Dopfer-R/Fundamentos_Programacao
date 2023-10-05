/*Fazer o programa para o algoritmo representado no fluxograma.*/

#include <stdio.h>

int main (void)

{
    float salario_base, gratificacao, salario_bruto, IR, salario_liquido;

    printf ("Insira o valor do salario base:");
    scanf ("%f", &salario_base);

    printf ("Insira o valor da gratificacao:");
    scanf ("%f", &gratificacao);

    salario_bruto = salario_base + gratificacao;

    if (salario_bruto < 1000)
    {
        IR = salario_bruto * 20 / 100;
    }

    else
    {
        IR = salario_bruto * 17 / 100;
    }

    salario_liquido = salario_bruto - IR;

    printf ("O salario liquido e de: %.2f", salario_liquido);

    return 0;

}
