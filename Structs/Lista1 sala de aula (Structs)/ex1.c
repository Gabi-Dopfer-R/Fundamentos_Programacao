/*1) Criar uma estrutura chamada registro_aluno para armazenar dados como:
- Nome - String de tamanho 50
- Disciplina - String de tamanho 30
- Nota1 - Float
- Nota2 - Float
- Media - Float
Usando a estrutura registro_aluno, 
cadastre dados de 3 alunos e calcule a média aritmética. 
Mostrar os dados com a média calculada.*/

#include <stdio.h>
#include <string.h>

struct registro_aluno
{
    char nome[50];
    char disciplina[30];
    float nota1; 
    float nota2; 
    float media; 
}; 

struct registro_aluno aluno[3];
int i;

//FUNÇÕES............
void ler_dados(void);
void mostrar_dados(void);

//PRINCIPAL.............        
int main (void)
{   
    ler_dados();

    printf("====MOSTRAR DADOS====\n");

    for(i=0; i<3; i++)
    {
        mostrar_dados();
    }

    printf("\n====MOSTRAR DADOS COM M%cDIA====\n", 144);

    for(i=0; i<3; i++)
    {
        mostrar_dados();
        
        aluno[i].media = (aluno[i].nota1 + aluno[i].nota2) /2;
        printf("M%cdia: %.2f\n", 130, aluno[i].media);
    }

    return 0;
}


void ler_dados(void)
{
    printf("\n====CADASTRO DE ALUNOS====\n\n");
    
    for(i=0; i<3; i++)
    {
        printf("ALUNO %d\n", i+1);
        
        printf("Nome do aluno:");
        fflush(stdin);
        gets(aluno[i].nome);

        printf("Disciplins:");
        fflush(stdin);
        gets(aluno[i].disciplina);

        printf("Primeira nota:");
        fflush(stdin);
        scanf("%f", &aluno[i].nota1);

        printf("Segunda nota:");
        fflush(stdin);
        scanf("%f", &aluno[i].nota2);
        printf("\n");
    }

    return;
}

void mostrar_dados(void)
{
    printf("\nALUNO %d\n", i+1);      
    printf("Nome do aluno: %s\n", aluno[i].nome);
    printf("Disciplins: %s\n", aluno[i].disciplina);
    printf("Primeira nota: %.2f\n", aluno[i].nota1);
    printf("Segunda nota: %.2f\n", aluno[i].nota2);
    
    return;
}