/*Implemente um programa que adivinhe o "número mágico" entre 0 e 10. O programa deverá
imprimir a mensagem "Certo! %d é o número mágico" quando o jogador acerta o número mágico,
a mensagem "Errado, muito alto", caso o jogador tenha digitado um número maior que o número
mágico e a mensagem "Errado, muito baixo", caso o jogador tenha digitado um número menor
que o número mágico. O número mágico é produzido usando o gerador de números randômicos
de C (função rand(), que exige o uso da biblioteca stdlib.h).*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void)

{
    int n, r;

    printf("Tente acertar o numero no intervalo de 0 a 10:");
    scanf("%d", &n);

    srand(time(NULL));
    r = rand()%11;

    if (n < r)
    {
        printf("Errado! Muito baixo.\n");
        printf("O numero era: %d", r);
    }
    else if (n > r)
    {
        printf("Errado! Muito alto.\n");
        printf("O numero era: %d", r);
    }
    else
    {
        printf("Esse e o numero magico.");
    }

    return 0;

}
