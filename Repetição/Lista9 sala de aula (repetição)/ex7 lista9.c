/*Sendo n um número positivo, apresentar as n primeiras raízes quadradas exatas. A
função para obter a raiz quadrada é sqrt() e está na biblioteca <math.h>.*/

#include <stdio.h>
#include <math.h>

int main (void)

{
    char resp;
    int n, a, b;
    float raiz;

    do
    {
        do //validar limite inicial.
        {
            printf("Insira o valor de ra%czes quadradas exatas desejadas:", 161);
            fflush(stdin);
            scanf("%d", &n);

            if(n <= 0)
            {
                printf("Caract%cre inv%clido, tente novamente.\n", 130, 160);
            }
        }while(n <= 0);

        for(a = 1, b = 1; b <= n; a++)
        {
            raiz = sqrt(a);

            if(raiz - (int)raiz == 0)
            {
                printf("raiz de %d => %.0f\n", a, sqrt(a));
                b++;
            }
        }

        //repetir programa.
        printf("\n\nSe deseja continuar o programa insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while((resp == 's')||(resp == 'S'));

    return 0;
}
