#include <stdio.h>

/* ==========FUN��ES==========

1 - Quadrado de um n�mero.
2 - Converter cm para polegadas.
3 - Multiplica��o de dois n�meros.
4 - Converter d�lar para real ou real para d�lar.
5 - Manter a repeti��o crescente vendo qual o limite menor.
6 - Validar caract�re.
*/

//=========== 1 ===============
int quadrado (int x)
{
    return x * x;
}

//============== 2 ===================
float polegada (float x)
{
    return x * 0.393701;
}

//============== 3 ====================
int multiplicacao(int n1, int n2)
{
    return n1 * n2;
}

//======================== 4 ==================================
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

//========================= 5 =================================
void invalido()
{
    printf("Caract%cre inv%clido, tente novamente.\n", 130, 160);
    return;
}
