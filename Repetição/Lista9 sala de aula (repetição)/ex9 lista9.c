/* Ler dados de pessoas: idade, curso e se reside em Pato Branco (variável tipo char com
resposta s/S/n/N). Para o curso, a pessoa deverá informar a letra A para Agronomia e
letra Q para Química. Validar a entrada para se reside em Pato Branco (deve ser
informado um desses caracteres: s/S/n/N).
a) Fazer a média de idade de alunos do curso de Agronomia.
b) Contar quantos alunos residem em Pato Branco.
c) Encontrar a menor idade entre os alunos que não residem em Pato Branco.
d) Contar quantos alunos não cursam Agronomia.
Parar a leitura (entrada de dados) quando informado 0 ou valor negativo para a idade.*/

#include <stdio.h>

int main (void)

{
    char resp, curso, pb;
    int idade, a, b, c, soma, menor;

    do
    {
        a = 0;
        soma = 0;
        b = 0;
        c = 0;
        menor = idade;

        do
        {
            do //validar idade.
            {
                printf("Insira a idade:");
                fflush(stdin);
                scanf("%d", &idade);

                if((idade <= 0)&&(a == 0 && b == 0))
                {
                    printf("Idade inv%clida, tente novamente.\n", 160);
                }

            }while((idade <= 0)&&(a == 0 && b == 0));

            if(idade == 0)
            {
                break;
            }

            do //validar curso.
            {
                printf("Insira curso (A) Agronomia ou (Q) Qu%cmica:", 161);
                fflush(stdin);
                scanf("%c", &curso);

                if(curso != 'A' && curso != 'a' && curso != 'Q' && curso != 'q')
                {
                    printf("Curso inv%clida, tente novamente.\n", 160);
                }
            }while(curso != 'A' && curso != 'a' && curso != 'Q' && curso != 'q');

            do //validar residência.
            {
                printf("Reside em Pato Branco (S) Sim ou (N) N%co?", 198);
                fflush(stdin);
                scanf("%c", &pb);

                if(pb != 'S' && pb != 's' && pb != 'N' && pb != 'n')
                {
                    printf("Curso inv%clida, tente novamente.\n", 160);
                }
            }while(pb != 'S' && pb != 's' && pb != 'N' && pb != 'n');

            printf("\n");

            if(curso == 'A' || curso == 'a')
            {
                a++;
                soma = idade + soma;
            }
            else
            {
                b++;
            }

            if(pb == 's' || pb == 'S')
            {
                c++;
            }
            else
            {
                if(idade < menor)
                {
                    menor = idade;
                }
            }

        }while(idade != 0);

        printf("\nA m%cdia de idade dos alunos de Agronomia %c: %.2f\n", 130, 130, (float)soma / a);
        printf("Quantidade de alunos que residem em Pato Branco: %d\n", b);
        printf("Menor idade entre os alunos que n%co residem em Pato Branco: %d\n", 198, menor);
        printf("Quantidade de alunos que n%co cursam Agronomia: %d", 198, c);

        //repetir programa.
        printf("\n\nSe deseja continuar o programa insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while((resp == 's')||(resp == 'S'));

    return 0;
}
