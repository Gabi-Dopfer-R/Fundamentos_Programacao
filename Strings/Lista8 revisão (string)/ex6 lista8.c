/*Fazer uma função que verifica se uma substring pertence a uma string.
Exemplo:
String: O gato subiu no telhado
Substring: telha
Resposta: A substring "telha" faz parte da string "O gato subiu no telhado".*/

#include <stdio.h>

int Substring(char string[], char substring[]);

int main(void)
{
    char resp;

    do 
    {
        char string[100], substring[100];

        printf("\nInsira uma string:");
        fflush(stdin);
        gets(string);

        printf("Insira uma substring:");
        fflush(stdin);
        gets(substring);

        if(Substring(string, substring) == 0)
        {
            printf("\nA substring \"%s\" faz parte da string \"%s\".", substring, string);
        }
        else 
        {
            printf("\nA substring \"%s\" n%co faz parte da string \"%s\".", substring, 198, string);
        }
        
        printf("\n\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}

//================================================================================================
int Substring(char string[], char substring[])
{
    int i, cont, j, z;
    
    i=0;
    while(string[i] != '\0')
    {
        for(j=i, z=0, cont=0; substring[z] != '\0'; j++, z++)
        {
            if(string[j] == substring[z])
            {
                cont++;
            }

        }
        
        if(cont == z)
        {
            return 0;
        }
        else
        {
            i++;
        }
    }

    return 1;
}