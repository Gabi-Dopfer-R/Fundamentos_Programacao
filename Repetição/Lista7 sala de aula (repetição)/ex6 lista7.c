/*Apresentar os n primeiros n�meros pares e divis�veis por 3 informados pelo usu�rio
(validar para que n seja diferente de 0). Se o usu�rio informar um n�mero negativo
transform�-lo em positivo (sem usar fun��es prontas) antes de utilizar.
Por exemplo, se o usu�rio informar 4, o programa dever� mostrar os quatro primeiros
n�meros pares que s�o divis�veis por tr�s: 0, 6, 12 e 18.*/

#include <stdio.h>

int main (void)

{
    char resp;
    int n, a, b;

    do
    {
        do
        {
            printf("Insira a quantidade de valores pare e divis%cveis por 3 desejada:", 161);
            fflush(stdin);
            scanf("%d", &n);

            if(n == 0)
            {
                printf("Valor inv%clido, tente novamente.\n", 160);
            }
        }while(n == 0);

        if(n < 0)
        {
            n = -1 * n;
        }

        for(a = 0, b = 1; b <= n; a+=2)
        {
            if(a % 3 == 0)
            {
                printf("%d\t", a);

                b++;
            }
        }

        printf("\nSe deseja continuar o programa insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while((resp == 's')||(resp == 'S'));

    return 0;
}
