/*Questão 3 (3,4 pontos) Criar funções para:
1)Transformar os caracteres alfabéticos de uma string para letras minúsculas. Exemplo:
String
2)
Mostrar uma string com apenas 1 espaço entre as palavras e sem nenhum espaço no início e no final da string. Exemplo (considere
no exemplo que os traços representam os espaços):
Fazer um programa que leia uma string e
usando função, mostre a string em letras minúsculas. Na sequência, também usando função,
retirar os espaços do início e do final de uma st ring e deixar apenas 1 espaço entre as palavras, imprimir a string e calcular e mostrar o
percentual de consoantes da string . substitu ir cada vogal lida por N vogais iguais, onde N representa o número de vogais lidas
até então, gerando uma nova string. Para os demais caracteres, o programa deve rá imprimir apenas o próprio caractere.
Exemplo:*/

#include<stdio.h>

void letrasMinusculas(char texto[]);
void retirarEspacos(char texto[]);
void vogaisReplicadas(char texto[]);

//==============================================================
int main (void)
{
    char resp;

    do 
    {
        char texto[100];

        printf("\nInsira um texto:");
        fflush(stdin);
        gets(texto);

        letrasMinusculas(texto);
        
        printf("\n\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}
//=====================================================================

void letrasMinusculas(char texto[])
{
    int i;

    for(i=0; texto[i] != '\0'; i++)
    {
        if(texto[i] >= 65 && texto[i] <= 90)
        {
            texto[i] = (int)texto[i] + 32;
        }
    }

    printf("\n===Texto em letras min%csculas===", 163);
    printf("\n%s", texto);

    retirarEspacos(texto);

    return;
}

void retirarEspacos(char texto[])
{
    int i, j, cont=0;
    char texto2[100];

    for(i=0, j=0; texto[i] != '\0'; i++)
    {
        if((texto[i]==' ' && texto[i+1]!=' ' && i!=0 && texto[i+1]!='\0')||(texto[i]!=' '))
        {
            texto2[j] = texto[i];
            j++;
        }

        if(texto[i] >= 97 && texto[i] <= 122)
        {
            if(texto[i]!='a' && texto[i]!='e' && texto[i]!='i' && texto[i]!='o' && texto[i]!='u')
            {
                cont++;
            }
        }
        
    }

    texto2[j] = '\0';

    printf("\n\n====Texto sem espa%cos sucessivos====", 135);
    printf("\n%s", texto2);
    printf("\nPercentual de consoantes: %.2f%%", ((float)cont*100)/(float)i);

    vogaisReplicadas(texto2);

    return;
}

void vogaisReplicadas(char texto[])
{
    int i, j, aux=0, cont=1;
    char texto2[100];

    for(i=0; texto[i] != '\0'; i++)
    {
        
        if(texto[i]=='a' || texto[i]=='e' || texto[i]=='i' || texto[i]=='o' || texto[i]=='u')
        {
            for(j=1; j <= cont ; j++)
            {
                texto2[aux] = texto[i];
                aux++;
            }
            cont++;
        }
        else
        {
            texto2[aux] = texto[i];
            aux++;
        }
    }

    texto2[aux] = '\0';

    printf("\n\n===Texto com vogais replicadas===");
    printf("\n%s", texto2);

    return;
}