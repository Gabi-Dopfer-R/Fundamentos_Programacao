/*Fazer uma função que verifica se um número é triangular.
Um número natural é triangular quando o produto de três números
naturais consecutivos for igual ao próprio número.
Por exemplo: 120 é triangular, pois 4 * 5 * 6 = 120.
Use essa função para:
a) Verificar se um número, informado pelo usuário, é triangular.
b) Mostrar quais números de um intervalo são triangulares.
Use menu de opções (com switch-case) e implemente a repetição de programa.*/

#include <stdio.h>

//=================== 1 ======================
int triangular(int n)
{
    int a, b, c, aux = 0;
    for (a = 1, b = 2, c = 3; c < n; a++, b++, c++)
    {
        if (a * b * c == n)
        {
            printf("O n%cmero %d %c triangular ==> %d * %d * %d = %d\n", 163, n, 130, a, b, c, n);
            return aux + 1;
        }
    }
    return aux;
}


//============ PRINCIPAL ============
int main(void)
{
    char resp;
    int menu, n, inicio, fim, aux, fin, ini;

    do
    {
        do
        {
            printf("===================== MENU ===================\n");
            printf("Insira o equivalente a op%c%co desejada:\n", 135, 198);
            printf("1 = Verificar se o n%cmero %c triangular.\n", 163, 130);
            printf("2 = Mostrar n%cmeros triangulares no intervalo informado.\n", 163);
            fflush(stdin);
            scanf("%d", &menu);

            switch (menu)
            {
                case 1:
                    printf("\n======= Vereficar n%cmero =======\n", 163);
                    printf("Insira um n%cmero:", 163);
                    fflush(stdin);
                    scanf("%d", &n);
                    printf("\n");

                    aux = triangular(n);

                    if(aux == 0)
                    {
                       printf("O n%cmero %d n%co %c triangular.\n", 163, n, 198, 130);
                    }
                    break;

                case 2:
                    printf("\n======= Verificar n%cmeros do limite ========\n", 163);
                    printf("Insira o limite inferior:");
                    fflush(stdin);
                    scanf("%d", &inicio);

                    printf("Insira o limite superior:");
                    fflush(stdin);
                    scanf("%d", &fim);

                    if(inicio > fim)
                    {
                        ini = fim;
                        fin = inicio;
                    }
                    else
                    {
                        ini = inicio;
                        fin = fim;
                    }

                    for (ini = ini; ini <= fin; ini++)
                    {
                        triangular(ini);
                    }
                    break;

                default:
                    printf("Caract%cre inv%clido, tente novamente.\n\n", 130, 160);
            }
        }while(menu != 1 && menu != 2);

        printf("\nDeseja repetir o programa? (S ou N):");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");
    }while (resp == 's' || resp == 'S');

    return 0;
}
