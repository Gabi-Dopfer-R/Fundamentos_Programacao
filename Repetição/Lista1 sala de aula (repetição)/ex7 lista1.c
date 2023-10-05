/*Ler uma série de números indicados pelo usuário até ser informado o valor zero.
Encontrar e mostrar o maior e o menor dos valores informados pelo usuário. O valor zero
indica o final da leitura e não deve ser considerado.*/

#include <stdio.h>

int main (void)

{
    int n, menor, maior;

    menor = 2147483647;
    maior = 0;
    printf("Insira alguns valores:\n");
    printf("(para encerrar basta inserir o n%cmero 0).\n", 163);
    while(n != 0)
    {
        scanf("%d", &n);

        if(n > maior)
        {
            maior = n;
        }
        if((n < menor)&&(n != 0))
        {
            menor = n;
        }
    }

    printf("Maior n%cmero: %d\n", 163, maior);
    printf("Menor n%cmero: %d", 163, menor);

    return 0;
}
