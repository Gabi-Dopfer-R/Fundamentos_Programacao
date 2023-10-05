/*Use a função criada no exercício anterior para mostrar todos os 
números felizes existentes no intervalo de 1 até 500.*/

#include <stdio.h>

//============================ FELIZ ============================
int feliz(int n)
{
    int result, a, aux, cont, soma;

    result = n;

    for(a=0; a <= 10; a++)
    {
        soma = 0;

        for(aux = result; aux!=0; aux=aux/10)
        {
            if(result/ 10 != 0)
            {   
                soma = ((result%10) * (result%10)) + soma;
                result = result / 10;
            }
            else
            {
                result = result * result;
                soma = result + soma;
            }
        }

        result = soma;

        if(soma == 1)
        {
            return cont = 1;
        }
    }

    return cont = 0;
}

//========================= PRINCIPAL ===========================
int main (void)
{
    char resp;

    do 
    {
        int aux;

        printf("\n============ N%cmeros felizes entre 1 e 500 =============\n", 163);
        for(aux = 1; aux <= 500; aux++)
        {
           if(feliz(aux) == 1)
           {
               printf("%d ", aux);
           }
        }   

        printf("\n\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 's');

    return 0;
}
