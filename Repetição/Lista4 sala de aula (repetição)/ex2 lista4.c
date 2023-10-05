/*Uma pessoa aplicou R$ 1000,00 com rendimento de 5% ao mês. Quantos meses serão necessários para
que o capital investido ultrapasse R$ 1200,00.*/

#include <stdio.h>

int main (void)

{
    float a;
    int b;

    a = 1000;
    b = 0;

    printf("Uma pessoa aplicou R$ 1000,00 com rendimento de 5\%% ao m%cs.\n", 136);

    while(a <= 1200)
    {
        a = a + (a * 0.05);
        b++;
    }

    printf("\nPara ultrapassar R$ 1200,00 %c necess%crio %d meses.\n", 130, 160, b);

    return 0;
}
