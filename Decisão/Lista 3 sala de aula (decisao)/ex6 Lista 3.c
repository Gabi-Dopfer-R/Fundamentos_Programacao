/*Crie um programa que leia dia, mês e ano separadamente e imprima se a data é válida ou não.*/

#include <stdio.h>

int main (void)

{
    int dia, mes, ano;

    printf("Insira uma data como pedido:\n");
    printf("Dia:");
    scanf("%d", &dia);
    printf("Mes:");
    scanf("%d", &mes);
    printf("Ano:");
    scanf("%d", &ano);

    if(dia == 31)
    {
        switch (mes)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                printf("Essa data e valida."); break;
            default:
                printf("Essa data e invalida.");
        }
    }
    else if ((dia == 29)&&(mes == 2))
    {
        if(((ano % 4 == 0)&&(ano % 100 != 0))||(ano % 400 == 0))
        {
            printf("Essa data e valida.");
        }
        else
        {
            printf("Esta data e invalida.");
        }
    }
    else if((dia >= 1) && (dia <= 30))
    {
        switch (mes)
        {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
                printf("Essa data e valida."); break;
            default:
                printf("Essa data e invalida.");
        }
    }
    else
    {
        printf("Essa data e invalida.");
    }

    return 0;
}
