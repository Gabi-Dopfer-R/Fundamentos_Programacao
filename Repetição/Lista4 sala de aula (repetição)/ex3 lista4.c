/*Ler n�meros informados pelo usu�rio. Parar a leitura quando informado um n�mero negativo ou 0. Esse
n�mero n�o deve ser considerado na contagem. Contar e mostrar quantos n�meros divis�veis por 5 e pares
foram informados.*/

#include <stdio.h>

int main(void)

{
    int n, a;

    a = 0;

    printf("Para interromper o programa basta inserir 0 ou um valor negativo.\n");

    do
    {
        fflush(stdin);
        printf("Insira um n%cmero:", 163);
        scanf("%d", &n);

        if(n <= 0)
        {
            break;
        }
        if((n % 5 == 0)&&(n % 2 == 0))
        {
            a++;
        }
    }while(n > 0);

    printf("Foram apresentados %d valores pares e divis%cveis por 5.", a, 161);

    return 0;
}
