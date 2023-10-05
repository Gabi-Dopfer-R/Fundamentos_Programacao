/*Complete o código a seguir para:
a) Ler a quantidade somente se o valor é válido.
b) Garantir que a quantidade seja maior que 0;
c) Garantir que a média seja float e que não seja realizada divisão por zero.*/


#include <stdio.h>

int main(void)

{
    char resp;
    int quantidade, soma = 0, qtde = 0;
    float valor, media;

    do
    {
        do
        {
            printf("Informe o valor:");
            fflush(stdin);
            scanf("%f", &valor);

            if(valor <= 0)
            {
                printf("Valor inv%clido. Tente novamente.\n", 198);
            }
        }while(valor <= 0);

        do
        {
            printf("Informe a quantidade:");
            fflush(stdin);
            scanf("%d", &quantidade);

            if(quantidade <= 0)
            {
                printf("Quantidade inv%clida. Tente novamente.\n", 198);
            }
        }while(quantidade <= 0);

        soma = soma + (valor * quantidade);
        qtde = quantidade + qtde;

        printf("Para continuar insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);

    }while(resp == 's' || resp == 'S');

    media = (float)soma / qtde;

    printf("Media geral (de todas as entradas): %.2f", media);

    return 0;
}
