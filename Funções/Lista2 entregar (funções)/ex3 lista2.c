/*Fazer uma função que verifica se um número é um quadrado perfeito. Um número é quadrado perfeito se
possui como raiz quadrada um valor inteiro. A função para obter a raiz quadrada é sqrt() e está na biblioteca
<math. Por exemplo, 25 é um quadrado perfeito porque raiz quadrada de 25 é 5.
Use essa função para:
a) Verificar se um número, informado pelo usuário, é um quadrado perfeito.
b) Mostrar quais números de um intervalo são quadrados perfeitos.
Use menu de opções (com switch-case) e implemente a repetição de programa.*/

#include <stdio.h>
#include <math.h>

//===================== 1 ============================
int quadradoPerfeito(int n)
{
    int a = 0;
    float aux;

    aux = sqrt((float)n);

    if(aux - (int)aux == 0)
    {
        printf("%d %c um quadrado perfeito ==> raiz de %d = %.0f\n", n, 130, n, aux);
        a++;
    }
    return a;
}

//===========================PRINCIPAL===============================
int main (void)
{
    char resp;

    do
    {
        int n, inicio, fim, menu, ini, fin;

        do
        {
            printf("=============== MENU =================\n");
            printf("Insira o equivalente ao item desejado.\n");
            printf("1 - Quadrado perfeito de um n%cmero.\n", 163);
            printf("2 - Quadrado perfeito de n%cmeros de um limites.\n", 163);
            fflush(stdin);
            scanf("%d", &menu);

            switch(menu)
            {
                case 1:
                    printf("\n============= 1 ===============\n");
                    printf("Insira um n%cmero:", 163);
                    fflush(stdin);
                    scanf("%d", &n);

                    if(quadradoPerfeito(n) == 0)
                    {
                        printf("N%co %c um quadrado perfeito.\n", 198, 130);
                    }
                break;

                case 2:
                    printf("\n============= 2 ===============\n");
                    printf("Informe o limite inferior:");
                    fflush(stdin);
                    scanf("%d", &inicio);

                    printf("Informe o limite suoperior:");
                    fflush(stdin);
                    scanf("%d", &fim);

                    if(inicio >= fim)
                    {
                        ini = fim;
                        fin = inicio;
                    }
                    else
                    {
                        ini = inicio;
                        fin = fim;
                    }

                    for(ini = ini; ini <= fin; ini++)
                    {
                       quadradoPerfeito(ini);
                    }
                break;

                default:
                    printf("\nOp%c%co inv%clida, tente novamente.\n", 135, 198, 160);
            }
        }while(menu != 1 && menu != 2);

        printf("\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");
    }while(resp == 's' || resp == 'S');
}
