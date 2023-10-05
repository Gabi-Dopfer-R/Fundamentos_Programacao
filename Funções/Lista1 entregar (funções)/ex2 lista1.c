/*Sabendo-se que 1cm = 0,393701 polegadas, fazer uma função que converte de centímetros para polegadas.
Usar essa função para:
a) Mostrar o valor em polegadas de um determinado valor informado pelo usuário.
b) Imprimir uma tabela de conversão de centímetros para polegadas entre 1 a 20.*/

#include <stdio.h>

float polegada (float x)
{
    return x * 0.393701;
}

int main (void)
{
    char resp;
    float n;

    do
    {
        printf("Insira um valor:");
        fflush(stdin);
        scanf("%f", &n);

        printf("O valor em polegadas %c: %.2f\n", 130, polegada(n));

        printf("==== Tabela de convers%cp ====\n", 198);
        printf("  Cent%cmetros    Polegadas\n", 161);

        for(n = 1; n <= 20; n++)
        {
            printf("  %.0f \t\t %.2f\n", n, polegada(n));
        }

        printf("\nDeseja repetir o programa? \"S\" ou \"s\":");
        fflush (stdin);
        scanf("%c", &resp);
        printf("\n");
    }while(resp == 'S' || resp == 's');

    return 0;
}
