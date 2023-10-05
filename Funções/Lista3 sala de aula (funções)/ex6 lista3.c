/*Para saber se um número é feliz, 
você deve obter o quadrado de cada dígito deste número, 
em seguida você faz a soma desses resultados. 
A seguir o mesmo procedimento deve ser feito com o valor resultante desta soma. 
Se ao repetir o procedimento diversas vezes obtivermos o valor 1, 
o número inicial é considerado feliz.
Desenvolva uma função que receba um número inteiro positivo e retorne 1 se o 
número for feliz e 0 se o número não for feliz. 
Elabore um programa que use essa função para determinar se um número é ou não feliz.*/

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
        int n, aux;

        do
        {
            printf("\nInsira um n%cmero: ", 163);
            fflush(stdin);
            scanf("%d", &n);

            if(n <= 0)
            {
                printf("O valor deve ser positivo para ser feliz.\n");
            }
        }while(n <= 0);

        aux = feliz(n);

        if(aux == 1)
        {
            printf("O n%cmero %d %c feliz.\n", 163, n, 130);
        }
        else
        {
            printf("O n%cmero %d n%co %c feliz.\n", 163, n, 198, 130);
        }

        printf("Deseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 's');

    return 0;
}
