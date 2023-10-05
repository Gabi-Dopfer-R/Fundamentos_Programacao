//Fazer duas funções: uma para calcular o fatorial de um número e a outra para mostrar o fatorial de um número. 

#include <stdio.h>

//======================= mostrar fatorial ========================
void fatorar(int n)
{
    int aux;

    printf("%d! = %d", n, n);

    for(aux = n - 1; aux >= 1; aux--)
    {
        printf(" * %d", aux);
    }

    printf(" = ");

    result(n);

    return;
}

//====================== resultado do fatorial ========================
void result(int n)
{
    int cont;

    for(cont = 1, n = n; n >= 1; n--)
    {
        cont = cont * n;
    }

    printf(" %d\n", cont);

    return;
}