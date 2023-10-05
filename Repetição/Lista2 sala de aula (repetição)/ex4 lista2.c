/*Apresentar os números divisíveis por 4 ou múltiplos de 10 entre 500 e 0 e a média
desses múltiplos.*/

#include <stdio.h>

int main (void)

{
    int n;
    float soma, a;

    soma = 0;
    a = 0;

    printf("N%cmeros divis%cveis por 4 e m%cltiplos de 10:\n", 163, 161, 163);
    for(n = 500; n >= 0; n--)
    {
        if((n % 4 == 0)||(n % 10 == 0))
           {
               printf("%d\t", n);

               soma = n + soma;
               a++;
           }
    }

    printf("\nA m%cdia desses n%cmeros %c: %.2f", 130, 163, 130, soma / a);

    return 0;
}
