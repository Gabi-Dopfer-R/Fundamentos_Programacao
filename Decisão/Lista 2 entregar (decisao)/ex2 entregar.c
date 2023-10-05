/*Faça um programa que apresente o menu a seguir e permita ao usuário escolher a
opção desejada, receba os dados necessários para executar a operação e mostre o
resultado.*/

#include <stdio.h>

int main (void)

{
    int opcao, a, b, c;

    printf ("Menu de opcoes:\n");
    printf ("1 - Mostrar os numeros em ordem crescente.\n");
    printf ("2 - Mostrar os numeros em ordem decrescente.\n");
    printf ("3 - Mostrar os numeros que sao multiplos de 2.\n");
    printf ("Digite a opcao desejada:");
    scanf ("%d", &opcao);

    if ((opcao == 1) || (opcao == 2) || (opcao == 3))
    {
        printf ("Insira aqui tres valores inteiros:\n");
        printf ("Primeiro:");
        scanf ("%d", &a);

        printf ("Segundo:");
        scanf ("%d", &b);

        printf ("Terceiro:");
        scanf ("%d", &c);

        if (opcao == 1)
        {
            if ((a<c) && (a<b))
            {
                (b<c) ? printf ("A ordem e: %d %d %d", a, b, c) : printf("A ordem e:%d %d %d", a, c, b);
            }

            else if ((b<a) && (b<c))
            {
                (a<c) ? printf ("A ordem e: %d %d %d", b, a, c) : printf ("A ordem e:%d %d %d", b, c, a);
            }

            else if ((c<a) && (c<b))
            {
                (a<b) ? printf ("A ordem e:%d %d %d", c, a, b) : printf ("A ordem e:%d %d %d", c, b, a);
            }
        }

        else if (opcao == 2)
        {
            if ((a>b) && (a>c))
            {
                (b>c) ? printf ("A ordem e:%d %d %d", a, b, c) : printf("A ordem e:%d %d %d", a, c, b);
            }
            else if ((b>a) && (b>c))
            {
                (a>c) ? printf ("A ordem e:%d %d %d", b, a, c) : printf ("A ordem e:%d %d %d", b, c, a);
            }

            else if ((c>a) && (c>b))
            {
                (a>b) ? printf ("A ordem e:%d %d %d", c, a, b) : printf ("A ordem e:%d %d %d", c, b, a);
            }
        }

        else if (opcao == 3)
        {
            if ((a % 2 == 0) && (b % 2 == 0) && (c % 2 == 0))
            {
                printf("Os valores %d, %d e %d sao numeros multiplos de 2.", a, b, c);
            }

            else if ((a % 2 == 0) && (b % 2 == 0) && (c % 2 != 0))
            {
                printf("Os valores %d e %d sao numeros multiplos de 2.", a, b);
            }

            else if ((a % 2 == 0) && (b % 2 != 0) && (c % 2 == 0))
            {
                printf("Os valores %d e %d sao numeros multiplos de 2.", a, c);
            }

            else if ((a % 2 != 0) && (b % 2 == 0) && (c % 2 == 0))
            {
                printf("Os valores %d e %d sao numeros multiplos de 2.", b, c);
            }

            else if ((a % 2 == 0) && (b % 2 != 0) && (c % 2 != 0))
            {
                printf("O valor %d e um numero e multiplo de 2.", a);
            }

            else if ((a % 2 != 0) && (b % 2 == 0) && (c % 2 != 0))
            {
                printf("O valor %d e um numero multiplo de 2.", b);
            }

            else if ((a % 2 != 0) && (b % 2 != 0) && (c % 2 == 0))
            {
                printf("O valor %d e um numero multiplo de 2.", c);
            }

            else
            {
                printf("Nao ha valores multiplos de 2.");
            }
        }
    }

    else
    {
        printf ("Opcao invalida.");
    }

    return 0;
}
