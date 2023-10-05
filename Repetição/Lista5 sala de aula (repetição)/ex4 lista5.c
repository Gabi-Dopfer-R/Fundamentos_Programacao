/*Elaborar um programa que solicita a idade de um profissional e se ele é do tipo autônomo ou
funcionário, calcula e mostra:
a) O total de profissionais autônomos com menos de 18 anos.
b) A média das idades dos funcionários com mais de 18 anos.
O programa deve validar as entradas: permitir somente valores positivos (maior que 0) para a
idade e A/a/F/f (autônomo ou funcionário) para o tipo de profissional.
O programa termina quando for informado 0 ou um valor negativo para a idade, que não deve ser
considerado. Portanto, ao ser informado 0 ou um valor negativo para a idade, não deve ser
solicitado o tipo de profissional.*/

#include <stdio.h>

int main (void)

{
    int idade, a, b, soma;
    char tipo;

    soma = 0;
    a = 0;
    b = 0;

    do
    {
        printf("Qual a idade do profissional?");
        scanf("%d", &idade);

        if(idade == 0)
        {
            break;
        }
        else if(idade < 0)
        {
            printf("Caract%cre inv%clido.\n", 130, 160);
        }
        else
        {
            do
            {
                fflush(stdin);
                printf("Aut%cnomo(A) ou funcion%crio(F)?", 147, 160);
                scanf("%c", &tipo);

                if(tipo == 'A' || tipo == 'a')
                {
                    if(idade < 18)
                    {
                        a++;
                        break;

                    }else{break;}
                }

                else if(tipo == 'f' || tipo == 'F')
                {
                    if(idade >= 18)
                    {
                        b++;
                        soma = idade + soma;
                        break;

                    }else{break;}
                }

                else if(tipo != 'f' || tipo != 'F' || tipo != 'a' || tipo != 'A')
                {
                    printf("Tipo inv%clido.\n", 160);
                }

            }while((tipo != 'f')||(tipo != 'F')||(tipo != 'a')||(tipo != 'A'));
        }
    }while(idade != 0);

    printf("Aut%cnomos e menor de 18: %d\n", 147, a);
    printf("M%cdia doa funcion%crios maiores de 18: %.2f", 130, 160, (float)soma / b);

    return 0;
}
