/*1) Ler 10 números inteiros e armazenar em um vetor. 
Validar as entradas para que sejam informados valores positivos. 
Em listagens separadas:
a) Mostrar e contar os valores pares do vetor;
b) Mostrar os valores do vetor que divisíveis por 3 e por 5, 
contar a quantidade deles e mostrar essa quantidade.
c) Mostrar e contar os valores do vetor que são menores que 10 ou maiores do que 100.
d) Mostrar e contar os valores do vetor que são maiores que 10 e os menores que 100.
e) Mostrar os ímpares e a quantidade de ímpares. 
Calcular o percentual dos ímpares em relação a quantidade total de números.
O programa permanecerá em execução até que seja escolhida a opção sair.*/

#include <stdio.h>

void valoresPares(int valor[]);
void divisiveisPor3e5(int valor[]);
void limite(int valor[]);
void impar(int valor[]);

//============================ PRINCIPAL ==========================
int main (void)
{
    char resp;

    do
    {
        int valor[10], i;

        printf("\n");
        for(i=0; i < 10; i++)
        {
            do
            {
                printf("Insira o valor %d do vetor: ", i);
                scanf("%d", &valor[i]);

                if(valor[i] <= 0)
                {
                    printf("O valor precisa ser positivo.\n");
                }
            }while(valor[i] <= 0);
        }

        printf("\n============== Valores Pares do vetor ==============\n");
        valoresPares(valor);
        printf("\n");

        printf("\n============== Divis%cveis por 3 e 5 =============\n", 161);
        divisiveisPor3e5(valor);
        printf("\n");

        //valore entre o limite.
        limite(valor);
        printf("\n");

        printf("\n================= Valores %cmpares ==================\n", 161);
        impar(valor);
        printf("\n");



        printf("\nDeseja sair do programa? (N ou S)");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");
    }while(resp == 'n' || resp == 'N');

    return 0;
}

//=========================== 1 ============================
void valoresPares (int valor[])
{
    int i, cont;

    for(cont=0, i=0; i<10; i++)
    {
        if(valor[i] % 2 == 0)
        {
            printf("%d\t", valor[i]);
            cont++;
        }
    }

    printf("\nQuantidade = %d", cont);

    return;
}

//=========================== 2 =========================
void divisiveisPor3e5(int valor[])
{
    int i, cont=0;

    for(i=0; i<10; i++)
    {
        if(valor[i] % 3 == 0 && valor[i] % 5 == 0)
        {
            printf("%d\t", valor[i]);
            cont++;
        }
    }

    printf("\nQuantidade = %d", cont);

    return;
}

//========================= 3 ===========================
void limite(int valor[])
{
    int i, cont;

    printf("\n================== Valores fora do intervalo 10 a 100 ===============\n");
    for(cont=0, i=0; i<10; i++)
    {
        if(valor[i] < 10 || valor[i] > 100)
        {
            printf("%d\t", valor[i]);
            cont++;
        }
    }

    printf("\nQuantidade = %d\n", cont);

    printf("\n================== Valores dentro do intervalo 10 a 100 ===============\n");
    for(cont=0, i=0; i<10; i++)
    {
        if(valor[i] > 10 && valor[i] < 100)
        {
            printf("%d\t", valor[i]);
            cont++;
        }
    }

    printf("\nQuantidade = %d", cont);

    return;
}

//=========================== 4 ==========================
void impar(int valor[])
{
    int cont=0, i;

    for(i=0; i<10; i++)
    {
        if(valor[i] % 2 != 0)
        {
            printf("%d\t", valor[i]);
            cont++;
        }
    }

    printf("\nQuantidade = %d\n", cont);
    printf("Porcentagem = %.2f %%\n", cont * 10.00);

    return;
}
