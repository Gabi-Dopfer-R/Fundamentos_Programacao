/*Ler dois números que representam os limites de um intervalo e ler o incremento.
Mostrar os números desse intervalo de acordo com o incremento indicado e em ordem
crescente. O usuário pode informar os valores que representam os limites do intervalo
em ordem crescente ou decrescente. Fazer a média dos ímpares e divisíveis por 35 do
intervalo.*/

#include <stdio.h>

int main (void)

{
    float inicio, fim, incremento, a, soma, media, b;

    printf("Informe:\n");

    printf("Inicio do intervalo:");
    scanf("%f", &inicio);

    printf("Fim do intervalo:");
    scanf("%f", &fim);

    printf("Incremento:");
    scanf("%f", &incremento);

    soma = 0;
    b = 0;

    if(inicio <= fim)
    {
        for (a = inicio; a <= fim; a+= incremento)
        {
            if(((int)a % 2 != 0)&&((int)a % 35 == 0))
            {
                printf("%.2f\t impar e divisivel por 35.\n", a);
                soma = a + soma;
                b++;
            }
            else
            {
                printf("%.2f\n", a);
            }
        }
    }

    else
    {
        for (a = inicio; a >= fim; a-= incremento)
        {
            if(((int)a % 2 != 0)&&((int)a % 35 == 0))
            {
                printf("%.2f.\t impar e divisivel por 35.\n", a);
                soma = a + soma;
                b++;
            }
            else
            {
                printf("%.2f.\n", a);
            }


        }

    }

    media = soma / b;


    printf("A media dos valores impares e divisiveis por 35 e: %.2f", media);

    return 0;
}
