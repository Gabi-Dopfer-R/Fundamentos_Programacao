/*2) Fazer funções para:
a) Contar as palavras de uma string.
b) Mostrar o primeiro caractere de cada palavra de uma string.
c) Mostrar o último caractere de cada palavra de uma string.
Usando as funções criadas, elabore um programa que receba uma 
string de até 100 caracteres e forneça a
quantidade de palavras da string, mostre o primeiro caractere 
de cada palavra da string e mostre o último
caractere de cada palavra da string.
O programa também deverá copiar a primeira palavra da string 
para uma outra string e imprimi-la.*/

#include <stdio.h>

void contarPalavras(char frase[]);
void primeiroCaractere(char frase[]);
void ultimoCaractere(char frase[]);
void primeiraPalavra(char frase[]);

int main(void)
{
    char resp;

    do 
    {
        char frase[100];

        printf("\nInsira uma frase de at%c 100 caract%cres:", 130, 130);
        fflush(stdin);
        gets(frase);

        contarPalavras(frase);
        primeiroCaractere(frase);
        ultimoCaractere(frase);
        primeiraPalavra(frase);
        
        printf("\n\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}

void contarPalavras(char frase[])
{
    int i, cont=0;

    for(i=0; frase[i] != '\0'; i++)
    {
        if((frase[i-1] == ' ' || i == 0)&& frase[i] != ' ')
        {
            cont++;
        }
    }

    printf("\n\n\"%s\" possui %d palavras.", frase, cont);

    return;
}

void primeiroCaractere(char frase[])
{
    int i, j;
    char primeiroCaractere[30];

    for(i=0, j=0; frase[i] != '\0'; i++)
    {
        if((frase[i-1] == ' ' || i == 0)&& frase[i] != ' ')
        {
            primeiroCaractere[j] = frase[i];
            j++;
            primeiroCaractere[j] = ' ';
            j++;
        }
    }

    primeiroCaractere[j] = '\0';

    printf("\n\nPrimeiro caract%cre de cada palavra:\n%s", 130, primeiroCaractere);

    return;
}

void ultimoCaractere(char frase[])
{
    int i, j;
    char ultimoCaractere[30];

    for(i=0, j=0; frase[i] != '\0'; i++)
    {
        if((frase[i+1] == ' ' || frase[i+1] == '\0')&& frase[i] != ' ')
        {
            ultimoCaractere[j] = frase[i];
            j++;
            ultimoCaractere[j] = ' ';
            j++;
        }   
    }

    ultimoCaractere[j] = '\0';

    printf("\n\n%cltimo caract%cre de cada palavra:\n%s", 233, 130, ultimoCaractere);

    return;
}

void primeiraPalavra(char frase[])
{
    int i, j, aux;
    char primeiraPalavra[30];

    for(i=0, j=0; frase[i] != '\0'; i++)
    {
        if(frase[i] != ' ')
        {
            primeiraPalavra[j] = frase[i];
            j++;
            aux = 0;   
        }
        if((frase[i]  == ' ' || frase[i] == '\0')&& aux==0)
        {
            break;
        }
    }

    primeiraPalavra[j] = '\0';

    printf("\n\nPrimeira palavra da frase:\n%s", primeiraPalavra);
}
