/*Ler uma string, contar e exibir 
a quantidade de cada uma das vogais existentes nessa string. 
Armazenar essas quantidades em um vetor. 
É indispensável armazenar a quantidade no vetor 
à medida que a string é percorrida na forma vetVogais[indice]++. 
Portanto, o vetor que armazena a quantidade de vogais 
deve ser inicializado com zero antes de ser utilizado.*/

#include <stdio.h>

//======================================================
int vogais(char frase[], char vogal)
{
    char VOGAL;
    int i, cont;

    VOGAL = (int)vogal - 32;

    for(i=0, cont=0; frase[i] != '\0'; i++)
    {
        if(frase[i] == VOGAL || frase[i] == vogal)
        {
            cont++;
        }
    }
        
    return cont;
}
        
//========================= PRINCIPAL ==============================
int main(void)
{
    char resp;

    do
    {
        char frase[101], vog[6]="aeiou";
        int cont, i, vetVogais[5];

        printf("\nInsira uma frase: ");
        fflush(stdin);
        gets(frase);

        printf("\nVOGAL\tQUANTIDADE\n");
        printf("==========================\n");
        for(i=0; i<5; i++)
        {
            vetVogais[i] = vogais(frase, vog[i]);

            printf("%c/%c  \t%d\n", (int)vog[i]-32, vog[i], vetVogais[i]);
        }

        printf("\nDeseja repetir o programa? (S ou N) ");
        fflush(stdin);
        scanf("%c", &resp);
    }while(resp == 's' || resp == 'S');

    return 0;
}