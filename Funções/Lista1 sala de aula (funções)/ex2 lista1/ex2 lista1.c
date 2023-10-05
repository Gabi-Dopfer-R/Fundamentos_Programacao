/*Fazer uma fun��o para verificar se um n�mero � primo ou n�o.
A fun��o ser� implementada em um arquivo de cabe�alho "Primo.h"
e deve retornar 0 se o n�mero for primo ou 1, caso o n�mero n�o seja primo.
Elaborar um programa para usar essa fun��o para:
a) Verificar se um n�mero informado pelo usu�rio � ou n�o um n�mero primo.
   Validar a entrada para que o usu�rio informe um n�mero positivo.
b) Mostrar os primos no intervalo entre 1 e 100.
c) Fazer a m�dia dos primos entre 200 e 100.*/

#include <stdio.h>
#include "Primo.h"

//====================== validar ===========================
void validar()
{
    printf("Caract%cre inv%clido, tente novamente.\n", 130, 160);
    return;
}


//================================== PRINCIPAL =====================================
int main (void)
{
    char resp, menu;

    do
    {
        int cont=0, aux, n, soma=0;

        do
        {
            printf("=============== MENU ===============\n");
            printf("Insira o valor correspondente ao item desejado:\n");
            printf("1 = Saber se o valor %c primo.\n", 130);
            printf("2 = Primos entre 1 e 100.\n");
            printf("3 = M%cdia dos primos entre 200 e 100.\n", 130);
            fflush(stdin);
            scanf("%d", &menu);
            printf("\n");

            if(menu != 1 && menu != 2 && menu != 3)
            {
                validar();
            }
        }while(menu != 1 && menu != 2 && menu != 3);

        switch(menu)
        {
            case 1:

                printf("============== 1 ==============\n");
                do
                {
                    printf("Insira um n%cmero:", 163);
                    fflush(stdin);
                    scanf("%d", &n);

                    if(n <= 0)
                    {
                        validar();
                    }
                }while(n <= 0);

                aux = primo(n);

                if(aux == 1)
                {
                    printf("%d n%co %c primo.\n", n, 198, 130);
                }
                else
                {
                    printf("%d %c primo.\n", n, 130);
                }
            break;

            case 2:

                printf("=============== 2 ===============\n");
                for(n = 1; n <= 100; n++)
                {
                    aux = primo(n);
                    if(aux == 0)
                    {
                        printf("%d\t", n);
                    }
                }
            break;

            case 3:

                printf("=============== 3 ==============\n");
                for(n = 200; n >= 100; n--)
                {
                    aux = primo(n);

                    if(aux == 0)
                    {
                        soma = soma + n;
                        cont++;
                    }
                }

                printf("M%cdia: %.2f\n", 130, (float)soma/cont);
            break;


        }

        printf("\n\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");
    }while(resp == 's' || resp == 'S');

    return 0;
}
