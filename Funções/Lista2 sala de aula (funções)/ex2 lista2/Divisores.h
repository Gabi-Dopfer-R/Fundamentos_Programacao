#include <stdio.h>

//========================== DIVISORES =============================
int divisores(int n)
{
    int aux, cont;

    for(cont = 0, aux = 1; aux <= n; aux++)
    {
        if(n % aux == 0)
        {
            cont++;
        }
    }

    return cont;
}

//==================================== DIVISORES2 =======================================
void divisores2 (int n)
{
    int aux;

    for(aux = 1; aux <= n; aux++)
    {
        if(n % aux == 0)
        {
                printf("%d  ", aux); 
        }
    }

    return;
}


//============================= SOMA ============================
int soma(int n)
{
    int aux, soma;
    
    for(soma = 0, aux = 1; aux <= n; aux++)
    {
        if(n % aux == 0)
        {
            soma = aux + soma;
        }
    }

    return soma;
}

//============================= MDC ==================================
int MDC(int n1, int n2)
{
    int aux, maior;

    for(aux = 1, maior = 0; aux <= n1; aux++)
    {
        if(n1 % aux == 0 && n2 % aux == 0 && aux >= maior)
        {
                maior = aux;
        }
    }

    return maior;
}