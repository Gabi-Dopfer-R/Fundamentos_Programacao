/*Um determinado material radioativo perde metade de sua massa a cada 60 segundos.
Dada a massa inicial, em gramas, fazer um programa que determine o tempo necessário
para que essa massa se torne menor que 0,5 gramas. A massa inicial informada pelo
usuário tem que ser maior que zero. Validar essa entrada, isto é, ficar repetindo a leitura
da massa inicial até que o usuário informe um valor válido, ou seja, maior que zero. O
programa deverá mostrar a massa final e o tempo calculado em minutos.*/

#include <stdio.h>

int main (void)

{
    char resp;
    float massa;
    int tempo;
    do
    {
        do
        {
            printf("Insira a massa:");
            fflush(stdin);
            scanf("%f", &massa);

            if(massa < 1)
            {
                printf("Massa inv%clida. Tente novamente.", 160);
            }
        }while(massa < 1);

        tempo = 0;

        while(massa >= 0.5)
        {
            tempo++;
            massa = massa/2;
        }

        printf("Massa final: %.2f\n", massa);
        printf("Ser%co necess%crios %d minutos para atingir a massa final.", 198, 160, tempo);


        printf("\nSe deseja repetir o programa insira 'S' ou 's':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while(resp == 's' || resp == 'S');
}
