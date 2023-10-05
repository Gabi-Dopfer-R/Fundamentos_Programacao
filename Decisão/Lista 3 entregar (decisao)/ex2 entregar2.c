/*Fa�a um programa que receba um caractere via teclado, transforme esse caractere em
mai�sculo e verifique se ele pertence ou n�o ao alfabeto (A, B, ..., Z). Caso ele perten�a,
o programa deve gerar a sa�da printf("O caracter digitado pertence ao
albafeto\n")e, com o uso da estrutura switch - case, verificar se o caractere � uma
vogal (neste caso, a sa�da deve ser printf("VOGAL %c\n", ch)) ou uma consoante
(neste caso, a sa�da deve ser printf("CONSOANTE %c\n", ch)). Caso o caractere
n�o perten�a ao alfabeto, o programa dever� gerar a sa�da printf("O caracter
digitado nao pertence ao alfabeto\n").*/

#include <stdio.h>
#include <ctype.h>

int main (void)

{
    char ch;

    printf ("Insira um caractere:");
    scanf ("%c", &ch);

    ch = toupper (ch);

    printf ("Maiusculo: %c\n", ch);

    switch (ch)
    {
        case 'B':
        case 'C':
        case 'D':
        case 'F':
        case 'G':
        case 'H':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            printf("O caracter digitado pertence ao albafeto.\n");
            printf("CONSOANTE %c\n", ch); break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("O caracter digitado pertence ao albafeto.\n");
            printf("VOGAL %c\n", ch); break;
        default:
            printf("O caracter digitado nao pertence ao alfabeto.\n"); break;
    }

    return 0;
}
