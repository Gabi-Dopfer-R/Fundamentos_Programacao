/*Um número primo é definido se ele possuir somente dois divisores: 
o número um e ele próprio. São exemplos de números primos: 
2, 3, 5, 101, 367 e 523. Neste problema, 
você deve ler uma palavra composta somente por letras [a-zA-Z]. 
Cada letra possui um valor específico, a vale 1, b vale 2 e assim por diante, 
até a letra z que vale 26. Do mesmo modo A vale 27, 
B vale 28, até a letra Z que vale 52. 
Você precisa definir se cada palavra em um conjunto de palavras é prima ou não. 
Para ela ser prima, a soma dos valores de suas letras deve ser um número primo.
Para resolver este problema, 
é necessário criar uma função para contar os caracteres de um texto 
(com o protótipo int ContarCaracteres(char texto[]);) 
e uma função para converter os caracteres para números 
(com o protótipo int ConverteCharParaNumero(char ch);).
Além disso, é necessário usar uma função que 
recebe um número e retorna 0 se esse número for primo ou 1, caso contrário.*/

#include <stdio.h>

int ContarCaracteres(char texto[]);

//======================== PRINCIPAL ==========================
int main(void)
{
    char resp;

    do
    {
        char texto[101], palavra[30];
        int i, j, cont;

        printf("\nInsira um texto: ");
        fflush(stdin);
        gets(texto);

        i=0;
        while(texto[i] != '\0')
        {
            j=0;
        
            while(texto[i] != ' ' && texto[i] != '\0')
            {
                palavra[j] = texto[i];
                i++;
                j++;
            }
            palavra[j] = '\0';

            printf("%s = ", palavra);

            cont = ContarCaracteres(palavra);

            if(cont == 0)
            {
                printf(" Prima\n");
            }
            else
            {
                printf(" N%co prima\n", 198);
            } 
            
            if(texto[i] != '\0')
            {
                i++;
            }           
        }

        printf("\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}

//============================================================
int ContarCaracteres(char texto[])
{
    char alfabeto[52], aux;
    int soma, i, j;

    //Númerar os alfabétos
    i=0;
    aux=97;
    while(i<26)
    {
        alfabeto[i] = aux;
        aux = (int)aux + 1;
        i++;
    }
    aux=65;  
    while(i<52)
    {
        alfabeto[i] = aux;
        aux = (int)aux + 1;
        i++;
    }

    //Atribuir valor as letras.
    j=0;
    soma=0;
    while(texto[j] != 0)
    {   
        for(i=0; i<52; i++)
        {
            if(texto[j] == alfabeto[i])
            {
                soma = soma + i + 1;
                j++;
                break;
            }
        }
    }

    printf("%d =>", soma);

    for(i=1; i<soma; i++)
    {
        if((soma % i == 0 && i != 1)|| soma == 1)
        {
            return 1;
        }
        else if(i == soma-1)
        {
            return 0;
        }
    }
}