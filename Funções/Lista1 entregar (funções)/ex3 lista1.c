/*3) Fazer uma fun��o que converte de reais para d�lares ou de d�lares para reais. Essa fun��o recebe como
par�metros: o valor a ser convertido, o valor da cota��o, � se � para converter em d�lares ou em reais. A
fun��o faz a convers�o e retorna o valor convertido.
Sugest�o de cabe�alho da fun��o:
float ConverterModeadas(float Valor, float Cotacao, char Tipo) /*Tipo 'D' ou 'd' significa que a convers�o � de real para d�lar e 'R' ou
'r' significa que a convers�o � de d�lar para real.
Usando essa fun��o:
a) Ler um determinado valor, o valor da cota��o e o tipo de convers�o e apresentar o valor obtido.
b) Ler os valores que representam os limites de um intervalo, o valor da cota��o e o tipo de convers�o e
apresentar a tabela de convers�o resultante.*/

#include <stdio.h>

//fun��o 1
void invalido()
{
    printf("Caract%cre inv%clido, tente novamente.\n", 130, 160);
    return;
}

//fun��o 2
float conversor(float valor, float cotacao, char tipo)
{
    if(tipo == 'r' || tipo == 'R')
    {
        return valor * cotacao;
    }
    else
    {
        return valor / cotacao;
    }

}

//============================ PRINCIPAL ============================
int main (void)
{
    char resp, tipo;
    float valor, cotacao, inicio, fim, ini, fin;

    do
    {
       //============================ primeira parte ================================
       printf("Informe o valor:");
       fflush(stdin);
       scanf("%f", &valor);

        do//validar cota��o.
        {
            printf("Informe o valor da cota%c%co:", 135, 198);
            fflush(stdin);
            scanf("%f", &cotacao);

            if(cotacao == 0)
            {
                invalido();
            }
        }while(cotacao == 0);

        do //validar o tipo.
        {
            printf("Insira o tipo de convers%co desejada.\n", 198);
            printf("Real => Dolar = \"D\".\n");
            printf("D%clar => Real = \"R\".", 162);
            fflush(stdin);
            scanf("%c", &tipo);

            if(tipo != 'd' && tipo != 'D' && tipo != 'r' && tipo != 'R')
            {
                invalido();
            }
        }while(tipo != 'd' && tipo != 'D' && tipo != 'r' && tipo != 'R');


       printf("O valor obtido %c: %.2f\n\n", 130, conversor(valor, cotacao, tipo));


       //========================= segunda parte ===============================
       printf("Insira o limite inicial:");
       fflush(stdin);
       scanf("%f", &inicio);

       printf("Insira o limite final:");
       fflush(stdin);
       scanf("%f", &fim);

        do//validar cota��o.
        {
            printf("Informe o valor da cota%c%co:", 135, 198);
            fflush(stdin);
            scanf("%f", &cotacao);

            if(cotacao == 0)
            {
                invalido();
            }
        }while(cotacao == 0);

        do //validar o tipo.
        {
            printf("Insira o tipo de convers%co desejada.\n", 198);
            printf("Real => Dolar = \"D\".\n");
            printf("D%clar => Real = \"R\".", 162);
            fflush(stdin);
            scanf("%c", &tipo);

            if(tipo != 'd' && tipo != 'D' && tipo != 'r' && tipo != 'R')
            {
                invalido();
            }
        }while(tipo != 'd' && tipo != 'D' && tipo != 'r' && tipo != 'R');

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

       printf("============= CONVERSOR ============\n");
       if(tipo == 'd' || tipo == 'D')
        {
            printf("Real ==== D%clar\n", 162);
        }
       else
       {
           printf("D%clar ==== Real\n", 162);
       }

       for(ini = ini; ini <= fin; ini++)
       {
           printf("%.2f  ==== %.2f\n", ini, conversor(ini, cotacao, tipo));
       }


       printf("\nDeseja repetir o programa \"S\" ou \"s\" ?");
       fflush(stdin);
       scanf("%c", &resp);
       printf("\n");
    }while(resp == 's' || resp == 'S');

    return 0;
}
