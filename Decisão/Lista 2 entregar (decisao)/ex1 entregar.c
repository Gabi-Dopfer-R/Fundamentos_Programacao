/*Elaborar um programa que receba como entrada o valor do salário mínimo e o valor do
salário bruto, calcule o INSS e o salário líquido restante e informe-os.*/

#include <stdio.h>

int main (void)

{
    float salario_m, salario_b, inss, salario_l;

    printf ("Insira o valor do salario minimo:");
    scanf ("%f", &salario_m);

    printf ("Insira o valor de seu salario bruto:");
    scanf ("%f", &salario_b);

   if (salario_b <= (3 * salario_m))
   {
       inss = (salario_b * 8) / 100;
   }

   else if (salario_b > (3 * salario_m))
   {
       salario_m <= (salario_b / 10) ? (inss = ((salario_b * 8)/100)): (inss = (salario_b / 10));
   }

   printf ("O valor do INSS e: %.3f\n", inss);

   salario_l = salario_b - inss;

   printf ("O valor do salario liquido e: %.3f\n", salario_l);

   return 0;
}
