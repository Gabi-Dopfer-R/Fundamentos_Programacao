/*Elabore um programa que leia o dia e o mês de nascimento de uma pessoa e determine o seu
signo. Se informada uma data que não corresponde aos intervalos indicados, informar que a data é
inválida.*/

#include <stdio.h>

int main (void)

{
    int mes, dia;

    printf ("Para saber seu signo insira o dia e o mes de seu nascimento conforme pedido abaixo :\n");
    printf ("Mes:");
    scanf ("%d", &mes);

    printf ("Dia:");
    scanf ("%d", &dia);

    switch (mes)
    {
        case 1:
            if ((dia>0)&&(dia<=20))
            {
                printf("Capricornio.");
            }
            else if ((dia>20)&&(dia<=31))
            {
                printf("Aquario.");
            }
            else
            {
                printf("Dia invalido.");
            };break;
        case 2:
            if ((dia>0)&&(dia<=19))
            {
                printf("Aquario.");
            }
            else if ((dia>19)&&(dia<=29))
            {
                printf("Peixes.");
            }
            else
            {
                printf("Dia invalido.");
            };break;
        case 3:
            if ((dia>0)&&(dia<=20))
            {
                printf("Peixes.");
            }
            else if ((dia>20)&&(dia<=31))
            {
                printf("Aries.");
            }
            else
            {
                printf("Dia invalido.");
            };break;
        case 4:
            if ((dia>0)&&(dia<=20))
            {
                printf("Aries.");
            }
            else if ((dia>20)&&(dia<=30))
            {
                printf("Touro.");
            }
            else
            {
                printf("Dia invalido.");
            };break;
        case 5:
            if ((dia>0)&&(dia<=20))
            {
                printf("Touro.");
            }
            else if ((dia>20)&&(dia<=31))
            {
                printf("Gemeos.");
            }
            else
            {
                printf("Dia invalido.");
            };break;
        case 6:
            if ((dia>0)&&(dia<=20))
            {
                printf("Gemeos.");
            }
            else if ((dia>20)&&(dia<=30))
            {
                printf("Cancer.");
            }
            else
            {
                printf("Dia invalido.");
            };break;
        case 7:
            if ((dia>0)&&(dia<=21))
            {
                printf("Cancer.");
            }
            else if ((dia>21)&&(dia<=31))
            {
                printf("Leao.");
            }
            else
            {
                printf("Dia invalido.");
            };break;
        case 8:
            if ((dia>0)&&(dia<=22))
            {
                printf("Leao.");
            }
            else if ((dia>22)&&(dia<=31))
            {
                printf("Virgem.");
            }
            else
            {
                printf("Dia invalido.");
            };break;
        case 9:
            if ((dia>0)&&(dia<=22))
            {
                printf("Virgem.");
            }
            else if ((dia>22)&&(dia<=30))
            {
                printf("Libra.");
            }
            else
            {
                printf("Dia invalido.");
            };break;
        case 10:
            if ((dia>0)&&(dia<=22))
            {
                printf("Libra.");
            }
            else if ((dia>22)&&(dia<=31))
            {
                printf("Escorpiao.");
            }
            else
            {
                printf("Dia invalido.");
            };break;
        case 11:
            if ((dia>0)&&(dia<=21))
            {
                printf("Escorpiao.");
            }
            else if ((dia>21)&&(dia<=30))
            {
                printf("Sagitario.");
            }
            else
            {
                printf("Dia invalido.");
            };break;
        case 12:
            if ((dia>0)&&(dia<=21))
            {
                printf("Sagitario.");
            }
            else if ((dia>21)&&(dia<=31))
            {
                printf("Capricornio.");
            }
            else
            {
                printf("Dia invalido.");
            };break;
        default:
            printf("Mes invalido.");
    }

    return 0;
}
