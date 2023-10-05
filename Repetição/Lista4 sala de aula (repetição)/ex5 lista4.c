/*Ler caracteres informados pelo usuário. Parar a leitura quando o usuário informar o caractere '0'. Contar
quantas vezes foi informado o caractere 'A'.*/

#include <stdio.h>

int main (void)

{
    char x;
    int a;

    a = 0;

    do
    {
        fflush(stdin);
        printf("Insira um caract%cre:", 130);
        scanf("%c", &x);

        if(x == 'A')
        {
            a++;
        }
    }while(x != '0');

    printf("Existem %d caract%cres \"A\".", a, 130);

    return 0;
}
