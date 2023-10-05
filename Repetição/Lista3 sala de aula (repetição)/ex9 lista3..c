/*Ler dois valores que representam os limites de um intervalo. O usuário pode informar
os valores em ordem crescente ou decrescente. Para os limites do intervalo validar para
que:
1) O programa não aceite valores iguais, ou seja, que o limite inferior seja igual ao
superior e vice-versa;
2) Em cada limite não seja informado valor menor ou igual a zero.
Apresentar os valores separados por tabulação. Fazer a média dos valores que são
divisíveis por 11 e por 7, desse intervalo.*/

#include <stdio.h>

int main (void)

{
    int soma, a, inicio, fim;

    printf("Insira:\n");
    printf("In%ccio do intervalo:", 161);
    scanf("%d", &inicio);
    printf("Fim do intervalo:");
    scanf("%d", &fim);

    if((inicio == fim)||(fim == 0)||(inicio == 0))
    {
        printf("Caract%cre inv%clido.", 130, 160);
    }

    else if(inicio < fim)
    {
        soma = 0;
        a = 0;

        printf("Valores entre os limites:\n");

        while(inicio <= fim)
        {
           printf("%d\t", inicio);

           if((inicio % 7 == 0)&&(inicio % 11 == 0))
           {
               soma = inicio + soma;
               a++;
           }

           inicio++;
        }
    }

    else if(inicio > fim)
    {
        soma = 0;
        a = 0;

        printf("Valores entre os limites:\n");

        while(inicio >= fim)
        {
           printf("%d\t", inicio);

           if((inicio % 7 == 0)&&(inicio % 11 == 0))
           {
               soma = inicio + soma;
               a++;
           }

           inicio--;
        }
    }

    if(a != 0)
    {
        printf("\nM%cdia dos valores divis%cveis por 11 e por 7: %.2f.", 130, 161, (float)soma / a);
    }
    else
    {
        printf("\nM%cdia dos valores divis%cveis por 11 e por 7: Sem valores correspondentes no intervalo.", 130, 161);
    }
    return 0;
}
