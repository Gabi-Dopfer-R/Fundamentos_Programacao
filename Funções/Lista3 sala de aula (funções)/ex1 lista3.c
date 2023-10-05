/*               Fazer um programa que:
a) Leia dois valores sendo que o primeiro representa o limite final do intervalo 
(o limite inicial é 1) e o segundo valor representa “múltiplo de”.
b) Leia três valores, sendo que o primeiro e o segundo representam, 
respectivamente, o limite inicial e final de um intervalo e o terceiro valor representa “múltiplo de”. 
Utilize as duas funções, criadas anteriormente, para apresentar a saída da forma como apresentado a seguir.
Nesse exemplo os valores para os limites inferior e superior são 10 e 13 e o “múltiplo de” é 2.*/
/*                Fazer funções para:
a) Mostrar os múltiplos de y entre 1 (se for o caso) e x, 
sendo x o valor até o qual os múltiplos de y devem ser mostrados.
A função recebe por parâmetro o número e valor que representa "múltiplo de". 
Por exemplo: parâmetros 10 (como x) e 2 (como y) significa os múltiplos de 2 entre 1 e 10.
b) Somar os múltiplos de y entre 1 (se for o caso) e x, 
sendo x o valor até o qual os múltiplos devem ser somados. 
Por exemplo: parâmetros 10 (como x) e 2 (como y) significa somar os 
múltiplos de 2 entre 1 e 10. O resultado da soma deve ser retornado da função.*/

#include <stdio.h>

//========================= MÚLTIPLOS =========================
void multiplos(int x, int y)
{
    int aux;

    printf("%d :", x);

    for(aux = y; aux <= x; aux++)
    {
        if(aux % y == 0)
        {
            printf(" %d", aux);
        }
    }
    
    return;
}

//======================== SOMA =========================
int soma(int x, int y)
{
    int aux, soma;  

    for(soma = 0, aux = y; aux <= x; aux++)
    {
        if(aux % y == 0)
        {
            soma = aux + soma;
        }
    }
    return soma;
}

//============================================ PRINCIPAL =========================================
int main (void)
{
    char resp;

    do
    {
        int menu, y, sup, ini, inf, fim;

        do
        {
            printf("=========================== MENU ===========================\n");
            printf("Insira o valor correspondente ao item desejado:\n");
            printf("1 = Apresetar e somar os m%cltiplos de um n%cmero.\n", 163, 163);
            printf("2 = Apresetar e somar os m%cltiplos de um n%cmero em um intervalo.\n", 163, 163); 
            fflush(stdin);
            scanf("%d", &menu);
            printf("\n");
            if(menu != 1 && menu != 2)
            {
                printf("Caract%cre inv%clido, tente novamente.\n", 130, 160);
            }
        }while(menu != 1 && menu != 2);

        switch(menu)
        {
            case 1:

                printf("=================== 1 ======================\n");
                printf("Insira o limite superior para os m%cltiplos: ", 163);
                fflush(stdin);
                scanf("%d", &sup);

                do
                {
                    printf("Insira o valor o qual deseja apresentar os m%cltiplos: ", 163);
                    fflush(stdin);
                    scanf("%d", &y);
                    printf("\n");

                    if(y > sup)
                    {
                        printf("O valor deve ser menor ou igual ao limite.\n");
                    }
                }while(y > sup);

                multiplos(sup, y);

                printf(" ==> Soma: %d\n", soma(sup, y));
            break;

            case 2:
                printf("=================== 2 ======================\n");
                printf("Insira o limite inferior para os m%cltiplos: ", 163);
                fflush(stdin);
                scanf("%d", &inf);

                printf("Insira o limite superior para os m%cltiplos: ", 163);
                fflush(stdin);
                scanf("%d", &sup);

                do
                {
                    printf("Insira o valor o qual deseja apresentar os m%cltiplos no intervalo:", 163);
                    fflush(stdin);
                    scanf("%d", &y);
                    printf("\n");

                    if(y > sup && y > inf)
                    {
                        printf("O valor deve ser menor ou igual a pelo menos um dos limites.\n");
                    }
                }while(y > sup && y > inf);

                if(inf > sup)
                {
                    ini = sup;
                    fim = inf;
                }
                else
                {
                    ini = inf;
                    fim = sup;
                }

                for(ini = ini; ini <= fim; ini++)
                {
                    multiplos(ini, y);
                   printf(" ==> Soma: %d\n", soma(ini, y));
                }
        }
        printf("\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");
    }while(resp == 's' || resp == 'S');

    return 0;
}