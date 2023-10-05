/*Leia dois valores que representam os limites de um intervalo. O usu�rio pode informar
os valores em ordem crescente ou decrescente. Validar para que o programa n�o aceite
valores iguais para os limites do intervalo. Mostrar os divis�veis por x e n�o divis�veis por y
nesse intervalo. x e y s�o vari�veis informadas pelo usu�rio.*/

#include <stdio.h>

int main (void)

{
    int inicio, fim, x, y, a, b;

    printf("Insira aqui os limites do intervalo.\n");
    printf("In%ccio:", 161);
    scanf("%d", &inicio);
    printf("Fim:");
    scanf("%d", &fim);

    if(inicio == fim)
    {
        printf("Valores inv%clidos.", 160);
    }

    else
    {
        printf("Informe os valores de x e y:\n");
        printf("X igual a:");
        scanf("%d", &x);
        printf("Y igual a:");
        scanf("%D", &y);

        if(inicio < fim)
        {
            printf("\nN%cmeros divis%cveis por %d e n%co divis%cveis por %d:\n", 163, 161, x, 198, 161, y);
            while(inicio <= fim)
            {
                if((inicio % x == 0)&&(inicio % y!= 0))
                {
                    printf("%d\t", inicio);
                }
                inicio++;
            }
        }

        else if(inicio > fim)
        {
            printf("\nN%cmeros divis%cveis por %d e n%co divis%cveis por %d:\n", 163, 161, x, 198, 161, y);
            while(inicio >= fim)
            {
                if((inicio % x == 0)&&(inicio % y != 0))
                {
                    printf("%d\t", inicio);
                }
                inicio--;
            }
        }
    }

    return 0;
}
