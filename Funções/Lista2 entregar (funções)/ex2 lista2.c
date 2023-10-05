/*Fazer uma função que verifica se um número é retangular.
Um número é retangular se ele pode ser obtido a partir da soma
de uma sequência de números pares, iniciando em 2. Por exemplo:
30 é retangular porque resulta da soma de 2 + 4 + 6 + 8 + 10.
Use essa função para:
a) Verificar se um número, informado pelo usuário, é retangular.
b) Mostrar quais números de um intervalo são retangulares.
Use menu de opções (com switch-case) e implemente a repetição de programa.*/

#include <stdio.h>

//=================== 1 ======================
int retangular(int n)
{
    int a, soma, aux = 0;

    if(n % 2 == 0 && n > 2)
    {
        printf("O n%cmero %d %c retangular ==> ", 163, n, 130);

        for (a = 2, soma = 0; a < n; a+=2)
        {
            soma = soma + a;

            if(soma != n)
            {
                printf("%d + ", a);
            }
            if(soma == n)
            {
                printf("%d = %d\n", a, n);
                return aux + 1;
            }
        }
    }
    return aux;
}

//====================== 2 =========================
int limiteCrescente(int inicio, int fim)
{
    if (inicio >= fim)
    {
        return fim, inicio;
    }
    else
    {
        return inicio, fim;
    }
}

//============ PRINCIPAL ============
int main(void)
{
    char resp;
    int menu, n, inicio, fim, aux;

    do
    {
        do
        {
            printf("===================== MENU ===================\n");
            printf("Insira o equivalente a op%c%co desejada:\n", 135, 198);
            printf("1 = Verificar se o n%cmero %c retangular.\n", 163, 130);
            printf("2 = Mostrar n%cmeros retangulares no intervalo informado.\n", 163);
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

                    aux = retangular(n);

                    if(aux == 0)
                    {
                       printf("O n%cmero %d n%co %c retangular.\n", 163, n, 198, 130);
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

                    inicio, fim = limiteCrescente(inicio, fim);

                    for (inicio = inicio; inicio <= fim; inicio++)
                    {
                        retangular(inicio);
                    }
                    break;

                default:
                    printf("Caract%cre inv%clido, tente novamente.\n\n", 130, 160);
            }
        }while(menu != 1 && menu != 2);

        printf("\nDeseja repetir o programa? Se SIM (S):");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");
    }while (resp == 's' || resp == 'S');

    return 0;
}
