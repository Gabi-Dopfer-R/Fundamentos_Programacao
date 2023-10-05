/*Apresentar n valores que são divisíveis por x e y. n, x e y são informados pelo usuário e
devem ser maiores que zero. Validar.*/

#include <stdio.h>

int main (void)

{
   char resp;
   int a, b, n, x, y;

   do
   {
        do //validar n.
        {
            printf("Insira um valor para a quantidade de n%cmeros:", 163);
            fflush(stdin);
            scanf("%d", &n);

            if(n <= 0)
            {
                printf("Caract%cre inv%clido, tente novamente.\n", 130, 160);
            }
        }while(n <= 0);

        do //validar x.
        {
            printf("Os n%cmeros ser%co divis%cveis por:", 163, 198, 161);
            fflush(stdin);
            scanf("%d", &x);

            if(x <= 0)
            {
                printf("Caract%cre inv%clido, tente novamente.\n", 130, 160);
            }
        }while(x <= 0);

        do //validar y.
        {
            printf("E divis%cveis por:", 161);
            fflush(stdin);
            scanf("%d", &y);

            if(y <= 0)
            {
                printf("Caract%cre inv%clido, tente novamente.\n", 130, 160);
            }
        }while(y <= 0);

        b = 1;
        a = x;

        while(b <= n)
        {
            if(a % y == 0 && a >= y)
            {
                printf("%d\t", a);
                b++;
            }
            a = a + x;
        }

        //repetir programa.
        printf("\n\nSe deseja continuar o programa insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while((resp == 's')||(resp == 'S'));

    return 0;
}
