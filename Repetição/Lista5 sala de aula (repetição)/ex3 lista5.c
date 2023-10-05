/*Qual o objetivo do programa representado no código a seguir.*/

/*
R: Mostrar os números de dois em dois entre o valor inserido e 50.
*/

#include <stdio.h>

int main(void)

{
    int num, i;

    do
    {
        printf("Informe um n%cmero entre 1 e 50: ", 163);
        scanf("%d",&num);

        if(num < 1 || num > 50)
        {
            printf("Valor informado fora da faixa.\n");
        }

    }while(num < 1 || num > 50);

    for(i = num; i <= 50; i = i+2)
    {
        printf("\n%d\t",i);
    }

    return 0;
}
