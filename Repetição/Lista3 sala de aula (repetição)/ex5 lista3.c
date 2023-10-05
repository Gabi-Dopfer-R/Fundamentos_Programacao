/*Mostrar os valores ímpares e não divisíveis por 5 entre 200 e 1. Apresentar os valores
em ordem decrescente. Fazer a média dos valores desse intervalo que são divisíveis por
3 e por 5.*/

#include <stdio.h>

int main (void)

{
   int a, soma, b;

   soma = 0;
   b = 0;

   printf("Valores %cmpares e n%co divis%cveis por 5:\n", 161, 198, 161);
   for(a = 200; a >= 1; a--)
   {
       if((a % 5 != 0)&&(a % 2 != 0))
       {
           printf("%d\t", a);
       }
       if((a % 3 == 0)&&(a % 5 == 0))
       {
           soma = a + soma;
           b++;
       }
   }

   printf("\nA m%cdia dos valores divis%cveis por 3 e por 5 %c: %.2f.", 130, 161, 130, (float)soma / (float)b);
}
