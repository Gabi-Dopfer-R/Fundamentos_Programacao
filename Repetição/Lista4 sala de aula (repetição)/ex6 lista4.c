/*Ler caracteres e parar quando o usuário informar o caractere '0'. Utilizando a tabela ASCII contar quantos
caracteres são letras maiúsculas, quantos são letras minúsculas e quantos caracteres não são letras.*/

#include <stdio.h>

int main (void)

{
        char n;
        int a, b, c;

        a = 0;
        b = 0;
        c = 0;

        do
        {
            fflush(stdin);
            printf("Insira um caract%cre:", 130);
            scanf("%c", &n);

            if(n == '0')
            {
                break;
            }
            else if((n >= 65)&&(n <= 90))
            {
                a++;
            }
            else if ((n >= 97)&&(n <= 122))
            {
                b++;
            }
            else
            {
                c++;
            }
        }while(n != '0');

        printf("S%co letras mai%csculas: %d\n", 198, 163, a);
        printf("S%co letras min%csculas: %d\n", 198, 163, b);
        printf("N%co s%co letras: %d", 198, 198, c);

        return 0;
}
