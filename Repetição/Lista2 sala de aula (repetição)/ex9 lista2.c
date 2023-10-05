/*Ler números inteiros informados pelo usuário até ser informado um valor negativo.
Dentre os números informados, exceto o valor negativo que é a condição de saída:
a) Contar a quantidade de números menores que 10 ou maiores que 100.
b) Contar a quantidade de números ímpares.
c) Contar a quantidade de números divisíveis por 10.
d) Contar a quantidade de números entre 10 e 100.
e) Contar quantas vezes é informado o número 30.
f) Contar quantas vezes é informado um número diferente de 10, de 20 e de 30.*/

#include <stdio.h>

int main (void)

{
    int n, a, b, c, d, e, f;

    a=0;
    b=0;
    c=0;
    d=0;
    e=0;
    f=0;

    do
    {
        printf("Insira um valor:");
        scanf("%d", &n);

        if(n < 0)
        {
            break;
        }
        else
        {
            if((n < 10)||(n > 100))
            {
                a++;
            }
            if(n % 2 != 0)
            {
                b++;
            }
            if(n % 10 == 0)
            {
                c++;
            }
            if((n >= 10)&&(n <= 100))
            {
                d++;
            }
            if(n == 30)
            {
                e++;
            }
            if((n != 10)&&(n != 20)&&(n != 30))
            {
                f++;
            }
        }
    }while(n >= 0);

    printf("Existem %d n%cmeros menores que 10 e maiores que 100.\n", a, 163);
    printf("Existem %d n%cmeros %cmpares.\n", b, 163, 161);
    printf("Existem %d n%cmeros divis%cveis por 10.\n", c, 163, 161);
    printf("Existem %d n%cmeros entre 10 e 100.\n", d, 163);
    printf("Foi informado %d vezes o n%cmero 30.\n", e, 163);
    printf("Foi informado %d vezes um n%cmero diferente de 10, 20 e 30.\n", f, 163);

    return 0;
}
