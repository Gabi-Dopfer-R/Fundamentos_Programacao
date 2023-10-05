/*Completar e corrigir o c�digo a seguir para:
a) Ler a quantidade somente se a categoria � v�lida.
b) Garantir que a quantidade seja maior que 0.
c) Validar para que n�o seja realizada uma divis�o por zero no c�lculo da m�dia.
d) Permitir a leitura da categoria nas execu��es sucessivas do programa.
e) Garantir que a m�dia seja float.*/

#include <stdio.h>

int main(void)

{
    char categoria, resp;
    int quantidade, total;
    float media, soma;

    soma = 0;
    total = 0;
    do
    {
        do
        {
            printf("Informe a categoria:");
            fflush(stdin);
            scanf("%c", &categoria);

            if((categoria != 'A')&&(categoria != 'a')&&(categoria != 'B')&&(categoria != 'b'))
            {
                printf("Caract%cre inv%clido. Tente novamente.\n", 130, 160);
            }
        }while((categoria != 'A')&&(categoria != 'a')&&(categoria != 'B')&&(categoria != 'b'));

        do
        {
            printf("Informe a quantidade:");
            scanf("%d", &quantidade);

            if(quantidade <= 0)
            {
                printf("Caract%cre inv%clido. Tente novamente.\n", 130, 160);
            }
        }while(quantidade <= 0);

        soma = quantidade + soma;
        total++;

        printf("Se deseja continuar o programa insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while((resp == 's')||(resp == 'S'));
    media = soma / total;
    printf("A media dos produtos %c: %.2f.", 130, media);

    return 0;
}
