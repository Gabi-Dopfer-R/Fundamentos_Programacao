/*Apresentar n valores divisíveis por 5 e não divisíveis por 2 com x valores por linha.
Validar n e x para que sejam positivos.*/

#include <stdio.h>

int main (void)

{
    char resp;
    int x, n, a, b, c;

    do
    {
        do //validar n
        {
            printf("Quantos valores divis%cveis por 5 e n%co divis%cveis por 2 deseja apresentar? ", 161, 198, 161);
            fflush(stdin);
            scanf("%d", &n);

            if(n <= 0)
            {
                printf("Caract%cre inv%clido, tente novamente.\n", 130, 160);
            }
        }while(n <= 0);

        do //validar x
        {
            printf("Insira quantos valores por linha deseja apresentar:");
            fflush(stdin);
            scanf("%d", &x);

            if(x <= 0)
            {
                printf("Caract%cre inv%clido, tente novamente.\n", 130, 160);
            }
        }while(x <= 0);

        for(a = 1, b = 1, c = 0; b <= n; a+=2)
        {
            if(a % 5 == 0)
            {
                b++;
                c++;
                printf("%d\t", a);

                if(c >= x && c % x == 0)
                {
                    printf("\n");
                }
            }
        }

        //repetir programa.
        printf("\nSe deseja continuar o programa insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while((resp == 's')||(resp == 'S'));

    return 0;
}
