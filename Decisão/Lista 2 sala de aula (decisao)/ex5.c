/*Calcular o imposto de renda de uma pessoa de acordo com a seguinte tabela.*/

#include <stdio.h>

int main (void)

{
    float salario, imposto;

    printf ("Insira aqui seu salario:");
    scanf ("%f", &salario);

    if ((salario>0) && (salario<=10000))
    {
        printf ("Nao ha imposto de renda.");
    }

    else if ((salario>10000) && (salario<=25000))
    {
        imposto = (salario * 10) / 100;
        printf ("O imposto de renda e de %.3f reais", imposto);
    }
    else if (salario>25000)
    {
        imposto = (salario * 25)/100;
        printf ("O imposto de renda e de %.3f reais", imposto);
    }

    return 0;
}
