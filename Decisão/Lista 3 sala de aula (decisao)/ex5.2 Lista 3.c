/*Considera-se o problema de esperar para jantar em um restaurante. O objetivo é o programa
aprender a definição para DeveEsperar? Existem os seguintes atributos para descrever as
situações:*/

#include <stdio.h>

int main (void)

{
    char clientes, fome, alternativa1, chuva, alternativa2, reserva, bar, sabado;
    int tempo;

    printf ("Quantos clientes ha?\n");
    printf (" Insira:\n");
    printf (" \"A\" para \"Alguns\".\n");
    printf (" \"N\" para \"Nenhum\".\n");
    printf (" \"C\" para \"Cheio\".");
    scanf ("%c", &clientes);

    if ((clientes == 'a') || (clientes == 'A'))
    {
        printf ("Voce deve esperar.");
    }
    else if ((clientes == 'n') || (clientes == 'N'))
    {
        printf("Nao precisa esperar.");
    }
    else if ((clientes == 'c') || (clientes == 'C'))
    {
        fflush(stdin);
        printf ("Qual o tempo de espera estimada?\n");
        scanf ("%d", &tempo);

        if (tempo > 60)
        {
            printf("Voce nao deve esperar.");
        }
        else if ((tempo >= 0) && (tempo <= 10))
        {
            printf("Voce deve esperar.");
        }
        else if ((tempo > 10) && (tempo <= 30))
        {
            fflush(stdin);
            printf ("Voce esta faminto?\n");
            printf (" \"S\" para \"Sim\".\n");
            printf (" \"N\" para \"Nao\".\n");
            scanf ("%c", &fome);

            if ((fome == 'n') || (fome == 'N'))
            {
                printf("Voce deve esperar.");
            }
            else if ((fome == 's') || (fome == 'S'))
            {
                fflush(stdin);
                printf("Voce possui outra alternativa?\n");
                printf (" \"S\" para \"Sim\".\n");
                printf (" \"N\" para \"Nao\".\n");
                scanf("%c", &alternativa1);

                if ((alternativa1 == 'n') || (alternativa1 == 'N'))
                {
                    printf("Voce deve esperar.");
                }
                else if ((alternativa1 == 's') || (alternativa1 == 'S'))
                {
                    fflush(stdin);
                    printf("Esta chovendo?\n");
                    printf (" \"S\" para \"Sim\".\n");
                    printf (" \"N\" para \"Nao\".\n");
                    scanf ("%c", &chuva);

                    if ((chuva == 's') || (chuva == 'S'))
                    {
                        printf("Voce deve esperar.");
                    }
                    else  if ((chuva == 'n')|| (chuva == 'N'))
                    {
                        printf("Voce nao deve esperar.");
                    }
                    else
                    {
                        printf("Caractere invalido");
                    }

                }
                else
                {
                    printf("Caractere invalido");
                }
            }
            else
            {
                printf("Caractere invalido");
            }
        }
        else if ((tempo > 30) && (tempo <= 60))
        {
            fflush(stdin);
            printf("Voce possui outra alternativa?\n");
            printf (" \"S\" para \"Sim\".\n");
            printf (" \"N\" para \"Nao\".\n");
            scanf("%c", &alternativa2);

            if ((alternativa2 == 'n') || (alternativa2 == 'N'))
            {
                fflush(stdin);
                printf("Voce possui reserva?\n");
                printf (" \"S\" para \"Sim\".\n");
                printf (" \"N\" para \"Nao\".\n");
                scanf("%c", &reserva);

                if ((reserva == 'n') || (reserva == 'N'))
                {
                    fflush(stdin);
                    printf("Existe um bar confortavel para esperar?\n");
                    printf (" \"S\" para \"Sim\".\n");
                    printf (" \"N\" para \"Nao\".\n");
                    scanf("%c", &bar);

                    if ((bar == 'n') || (bar == 'N'))
                    {
                        printf("Voce nao deve esperar.");
                    }
                    else if ((bar == 's') || (bar == 'S'))
                    {
                        printf("Voca deve esperar.");
                    }
                       else
                    {
                        printf("Caractere invalido");
                    }
                }
                else if ((reserva == 's') || (reserva == 'S'))
                {
                    printf("Voce deve esperar.");
                }
                else
                {
                    printf("Caractere invalido.");
                }
            }
            else if ((alternativa2 == 's') || (alternativa2 == 'S'))
            {
                fflush(stdin);
                printf("Hoje e sexta-feira ou sabado?\n");
                printf (" \"S\" para \"Sim\".\n");
                printf (" \"N\" para \"Nao\".\n");
                scanf("%c", &sabado);

                if ((sabado == 's') ||(sabado == 's'))
                {
                    printf("Voce deve esperar.");
                }
                else if ((sabado == 'n') || (sabado == 'N'))
                {
                    printf("Voce nao deve esperar.");
                }
                else
                {
                    printf("Caractere invalido");
                }
            }
            else
            {
                printf("Caractere invalido.");
            }
        }
        else
        {
            printf("Caractere invalido.");
        }
    }
    else
    {
        printf("Caractere invalido.");
    }

    return 0;
}
