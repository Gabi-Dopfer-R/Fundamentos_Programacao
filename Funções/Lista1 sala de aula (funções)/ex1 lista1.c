/*Fazer um programa que permite aplicar as opera��es de soma,
subtra��o, multiplica��o, divis�o e resto em dois n�meros fornecidos pelo usu�rio.
Cada opera��o � uma fun��o e deve ser acessada a partir de um menu (use switch case).
As fun��es s�o implementadas no pr�prio programa.
a) Soma sem par�metros e sem retorno
b) Subtra��o com par�metros e sem retorno
c) Multiplica��o sem par�metros e com retorno
d) Divis�o com par�metros e com retorno.
e) Resto com par�metros e com retorno.*/

#include <stdio.h>

//============================= N�MEROS ================================
int num1 ()
{
    int n1;

    printf("Insira o primeiro valor:");
    fflush(stdin);
    scanf("%d", &n1);

    return n1;
}

int num2()
{
    int n2;

    printf("Insira o sgundo valor:");
    fflush(stdin);
    scanf("%d", &n2);

    return n2;
}
//============================= 1 ================================
void soma()
{
    int n1, n2;

    n1 = num1();
    n2 = num2();

    printf("Soma: %d\n", n1 + n2);
    return;
}

//============================= 2 ================================
void subtracao(int n1, int n2)
{
    printf("Subtra%c%co: %d\n", 135, 198, n1 - n2);

    return;
}

//============================= 3 ================================
int multiplicacao()
{
    int n1, n2;

    n1 = num1();
    n2 = num2();

    return n1 * n2;
}

//============================ 4 =================================
float divisao(float n1, float n2)
{
    return n1 / n2;
}

//============================ 5 =================================
int resto (int n1, int n2)
{
    return n1 % n2;
}

//============================ PRINCIPAL ===============================
int main (void)
{
    char menu, resp;
    do
    {
        int n1, n2;
        do
        {
            printf("=============== MENU ===============\n");
            printf("Insira o valor equivalente a op%c%co desejada:\n", 135, 198);
            printf("1 = Soma.\n");
            printf("2 = Subtra%c%co.\n", 135, 198);
            printf("3 = Multiplica%c%co.\n", 135, 198);
            printf("4 = Divis%co.\n", 198);
            printf("5 = Resto de Divis%co.\n", 198);
            fflush(stdin);
            scanf("%d", &menu);
            printf("\n");

            switch(menu)
            {
                case 1://Soma sem par�metros e sem retorno

                   printf("\n================== 1 =================\n");

                   soma();

                break;

                case 2://Subtra��o com par�metros e sem retorno

                    printf("\n================== 2 =================\n");

                    n1 = num1();
                    n2 = num2();

                    subtracao(n1, n2);

                break;

                case 3://Multiplica��o sem par�metros e com retorno

                    printf("\n================== 3 =================\n");
                    printf("Multiplica%c%co: %d\n", 135, 198, multiplicacao());

                break;

                case 4://Divis�o com par�metros e com retorno.

                    printf("\n================== 4 =================\n");

                    n1 = num1();
                    n2 = num2();

                    printf("Divis%co: %.2f\n", 198, divisao(n1, n2));

                break;

                case 5://Resto com par�metros e com retorno.

                    printf("\n================== 5 =================\n");

                    n1 = num1();
                    n2 = num2();

                    printf("Resto de Divis%co: %d\n", 198, resto(n1, n2));

                break;

                default:
                    printf("Op%c%co inv%clida, tente novamente.\n", 135, 198, 160);
            }
        }while(menu != 1 && menu != 2 && menu != 3 && menu != 4 && menu != 5);

        printf("\nDesja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");
    }while(resp == 's' || resp == 'S');

    return 0;
}
