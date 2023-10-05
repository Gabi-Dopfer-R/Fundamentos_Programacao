/*Ler dois números que representam os limites de um intervalo. Validar a entrada, o
usuário deverá fornecer valores positivos. Mostrar o intervalo em ordem crescente.
a) Mostrar os números primos desse intervalo, com cinco números por linha.
b) Calcular a média dos múltiplos de 3 e de 7 desse intervalo. Validar para que não seja
realizada uma divisão por zero.*/

#include <stdio.h>

int main (void)

{
    char resp;
    int n1, n2, inicio, fim, a, b, c;
    float soma, d;

    do //repetir programa.
    {
        do //validar inicio.
        {
            printf("Insira um valor para o limite inferior:");
            fflush(stdin);
            scanf("%d", &n1);

            if(n1 <= 0)
            {
                printf("Caract%cre inv%clido, tente novamente.\n", 130, 160);
            }
        }while(n1 <= 0);

        do //validar fim.
        {
            printf("Insira um segundo valor para o limite superior:");
            fflush(stdin);
            scanf("%d", &n2);

            if(n2 <= 0)
            {
                printf("Caract%cre inv%clido, tente novamente.\n", 130, 160);
            }
        }while(n2 <= 0);

        //dfinir inicio e fim para que seja em ordem crescente.
        if(n1 > n2)
        {
            inicio = n2;
            fim = n1;
        }
        else
        {
            inicio = n1;
            fim = n2;
        }

        d = 0;
        soma = 0;

        printf("\nN%cmeros primos do intervalo:\n", 163);
        for(a = inicio, b = 0; a <= fim; a++)
        {
            for(c = 2; c <= a; c++) //valores primos.
            {
               if(a % c == 0 && a != c)
               {
                   break;
               }

               if((a % c != 0 && c == a - 1)|| a == 2)
               {
                   printf("%d\t", a);
                   b++;

                   if(b >= 5 && b % 5 == 0) //pular linha a cada 5 números.
                   {
                        printf("\n");
                   }
               }
            }



            if(a >= 7 && a % 3 == 0 && a % 7 == 0)//múltiplos de 3 e 7.
            {
                d++;
                soma = a + soma;
            }
        }

        printf("\nA m%cdia dos valores m%cltiplos de 3 e 7: %.2f", 130, 163, soma / d);



        printf("\n\nSe deseja continuar o programa insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while((resp == 's')||(resp == 'S'));

    return 0;
}
