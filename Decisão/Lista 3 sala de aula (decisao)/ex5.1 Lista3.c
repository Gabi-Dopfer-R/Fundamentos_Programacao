/*A figura a seguir apresenta um exemplo fict�cio de �rvore de decis�o, tomando atributos de
clientes de uma institui��o financeira. Elabore um programa que implemente essa �rvore de
decis�o. As entradas podem ser do tipo char, portanto, considere a primeira letra de cada palavra
como entrada. Caso o usu�rio informe um caractere diferente dos aceit�veis, apresente a
mensagem "Caractere inv�lido".*/

#include <stdio.h>

int main (void)

{
    char x1, x2;

    printf ("Voce possui saldo em conta corrente?\n");
    printf (" Insira:\n");
    printf (" \"P\" para \"Positivo\".\n");
    printf (" \"N\" para \"Negativo\".");
    scanf ("%c", &x1);

    if ((x1 == 'p') || (x1 == 'P'))
    {
        printf ("Cliente sem risco.");
    }

    else if ((x1 == 'n') || (x1 == 'N'))
    {
        fflush (stdin);
        printf ("Voce possui aplicacoes?\n");
        printf (" Insira:\n");
        printf (" \"S\" para \"Sim\".\n");
        printf (" \"N\" para \"Nao\".");
        scanf ("%c", &x2);

        switch (x2)
        {
            case 's':
            case 'S':
                printf ("Cliente sem risco."); break;
            case 'n':
            case 'N':
                printf ("Cliente com risco."); break;
            default:
                printf ("Caractere invalido.");
        }
    }
    else
    {
        printf ("Caractere invalido.");
    }

    return 0;
}
