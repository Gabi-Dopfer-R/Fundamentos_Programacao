/*Fazer uma função para verificar se um número equivale a 
soma dos n primeiros ímpares iniciando em 1. Por exemplo, 
9, é um número que tem essa característica porque 1 + 3 + 5 = 9 
(soma dos n primeiros números ímpares iniciando em 1). 
Essa função recebe como parâmetro um valor inteiro e retorna 's' 
se o número equivale a soma dos n primeiros ímpares e 'n' caso não.
Fazer um programa que use essa função para:
a) Ler um número inteiro informado pelo usuário é verificar se o mesmo tem essa característica.
b) Mostrar todos os números que têm ou não têm essa característica e pertencem a um intervalo informado pelo usuário.*/

#include <stdio.h>

//=========================== função =============================
char impares(int n)
{
    int aux, cont, soma;

    printf("%d =", n);

    for(soma = 0, aux = 1; aux <= n; aux+=2)
    {
        soma = aux + soma;

        printf(" %d", aux);

        if(soma == n)
        {
            return cont = 's';
        }
        else if(soma > n)
        {
            return cont = 'n';   
        }
    }
}

//=========================== principal =============================
int main(void)
{
    char resp;

    do
    {
        int menu, n, inf, fim, ini, sup, aux;
        char cont;

        do
        {
            printf("====================== MENU =======================\n");
            printf("Insira o valor correspodente ao item desejado:\n");
            printf("1 = Informar se valor %c igual a soma dos %cmpares sucessivos de 1.\n", 130, 161);
            printf("2 = Mostrar valores igual a soma dos %cmpares sucessivos de 1 em um intervalo.\n", 161);
            fflush(stdin);
            scanf("%d", &menu);
            printf("\n");

            if(menu != 1 && menu != 2)
            {
                printf("Caract%cere inv%clido, tente novamente.\n", 130, 160);
            }
        }while(menu != 1 && menu != 2);
        
        switch(menu)
        {
            case 1:

                printf("========================== 1 ==========================\n");
                printf("insira um valor para ser verificado:");
                fflush(stdin);
                scanf("%d", &n);

                cont = impares(n);

                if(cont == 's')
                {
                    printf(" => Equivale a soma dos %cmpares.\n", 161);
                }
                else
                {
                    printf(" => N%co equivale a soma dos %cmpares.\n", 198, 161);
                }
            break;

            case 2:

                printf("========================== 2 ========================\n");
                printf("Insira um limite superior:");
                fflush(stdin);
                scanf("%d", &fim);

                printf("Insira um limite inferior:");
                fflush(stdin);
                scanf("%d", &ini);

                if(ini > fim)
                {
                    inf = fim;
                    sup = ini;
                }
                else
                {
                    inf = ini;
                    sup = fim;
                }

                for(aux = inf; aux <= sup; aux++)
                {
                    cont = impares(aux);

                    if(cont == 's')
                    {
                        printf(" => Equivale a soma dos %cmpares.\n", 161);
                    }
                    else
                    {
                        printf(" => N%co equivale a soma dos %cmpares.\n", 198, 161);
                    }
                }
            break;
        }

        printf("\nDeseja repetir o programa? (S ou N).");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");
    }while(resp == 's' || resp == 'S');

    return 0;
}