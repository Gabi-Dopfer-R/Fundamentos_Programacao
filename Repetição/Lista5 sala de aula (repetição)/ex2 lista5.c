/*Elaborar um programa que determine a potência de um número. O usuário informa a base e o
expoente e o programa informa o resultado da base elevada ao expoente. Não usar funções
prontas do C para fazer o cálculo da potência.*/

#include <stdio.h>

int main (void)

{
    int exp, base, a, potencia;

    printf("Insira a base da pot%cncia:", 136);
    scanf("%d", &base);

    printf("Insira o expoente da pot%cncia:", 136);
    scanf("%d", &exp);
    printf("\n");

    potencia = 1;

    for(a = 1; a <= exp; a++)
    {
        printf("%d", base);

        if(a < exp)
        {
            printf(" * ");
        }
        else if(a == exp)
        {
            printf(" = ");
        }
        potencia = base * potencia;
    }

    printf("%d.\n", potencia);

    return 0;
}
