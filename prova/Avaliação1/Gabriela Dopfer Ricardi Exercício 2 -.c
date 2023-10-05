/*a - Se o caractere estiver entre '1' e '9',
mostrar o processo de cálculo do fatorial do valor decimal ASCII do caractere.
Não precisa calcular o fatorial, apenas apresentar o processo de cálculo. Exemplo:
se o caractere for '2', o valor decimal será 50.
b - Se o caractere estiver entre 'a' e 'z' ou entre 'A' e 'Z',
mostrar todos os números primos, sendo 6 números por linha,
no intervalo de 1 até o valor decimal ASCII do caractere e somar todos os números primos desse intervalo.
Exemplo: se o caractere for 'A', o valor decimal será 65,
então mostrar todos os números primos no intervalo de 1 a 65, sendo 6 por linha:
c - Contar os caracteres que são letras minúsculas e a quantidade total de caracteres informados
e calcular e mostrar o percentual de letras minúsculas em relação ao total de caracteres válidos informados.
Validar para que não seja possível ocorrer uma divisão por 0.*/

#include <stdio.h>

int main (void)

{
    int a, n, b, c, primos, letra;
    char x, resp;

    do
    {
        letra = 0;
        n = 0;

        do
        {
            do
            {
                printf("Insira um caract%cre:", 130);
                fflush(stdin);
                scanf("%c", &x);

                if(x <= '0' && n == 0)
                {
                    printf("Caract%cre inv%clido, precisa realizar algo antes de encerrar o pograma.\n", 163, 160);
                }
            }while(x <= '0' && n == 0);

            if(x == 0)
            {
                break;
            }
            n++;

            if(x >= '1' && x <= '9')//valor entre 1 e 9 fatorado.
            {
                for(a = x; a >= 1; a--)
                {
                    printf(" %d ", a);

                    if(a != 1)
                    {
                        printf("*");
                    }
                }
            }

            else if((x >= 'a' && x <= 'z')||(x >= 'A' && x <= 'Z'))
            {
                primos = 0;

                for(a = 1, c = 0; a <= x; a++)//valor de letras em primos.
                {
                    for(b = 2; b <= a; b++)
                    {
                        if(a % b == 0 && (b != a))
                        {
                            break;
                        }
                        else if(a % b != 0 && b == a - 1 || a == 2)
                        {
                            printf("%d\t", a);
                            c++;
                            primos = a + primos;

                            if(c >= 6 && c % 6 == 0)
                            {
                                printf("\n");
                            }
                        }
                    }

                }
                printf("\nSoma dos primos: %d", primos);
            }

            if(x >= 'a' && x <= 'z')//para as contas do final.
            {
                letra++;
            }

            printf("\n");

        }while(x != '0');

        printf("Total de letras min%csculas: %d\n", 163, letra);
        printf("Total de caract%cres digitados: %d\n", 130, n - 1);
        printf("Percentual de letras min%csculas: %.2f", 163, ((float)letra * 100) / ((float)n - 1));

        printf("\n\nSe deseja repetir o programa insira 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while(resp == 'S' || resp == 's');

    return 0;
}
