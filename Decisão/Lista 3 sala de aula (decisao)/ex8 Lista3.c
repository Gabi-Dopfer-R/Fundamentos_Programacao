/*Implemente um programa que adivinhe o "n�mero m�gico" entre 0 e 10. O programa dever�
imprimir a mensagem "Certo! %d � o n�mero m�gico" quando o jogador acerta o n�mero m�gico,
a mensagem "Errado, muito alto", caso o jogador tenha digitado um n�mero maior que o n�mero
m�gico e a mensagem "Errado, muito baixo", caso o jogador tenha digitado um n�mero menor
que o n�mero m�gico. O n�mero m�gico � produzido usando o gerador de n�meros rand�micos
de C (fun��o rand(), que exige o uso da biblioteca stdlib.h).*/

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
