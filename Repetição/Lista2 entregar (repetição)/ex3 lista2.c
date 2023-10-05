/*Ler caracteres. Contar quantas vogais minúsculas são informadas. O caractere zero '0'
indica o final da leitura, ou seja, finalizar a leitura quando informado esse caractere. O
programa deverá informar também quantos caracteres foram digitados ao todo.*/

#include <stdio.h>

int main (void)

{
    char n;
    int a, b;

    a = 0;
    b = 0;

    printf("Para encerrar o programa digite 0.\n");

    do
    {
        fflush(stdin);
        printf("Insira um caract%cre:", 130);
        scanf("%c", &n);

        a++;

        switch(n)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                b++;
        }
    }while(n != '0');

    printf("Possuem %d vogais em min%csculo.\n", b, 163);
    printf("Total de caract%cres: %d", 130, a);

    return 0;
}
