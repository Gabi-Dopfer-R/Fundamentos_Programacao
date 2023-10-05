/*Ler a idade, o tipo (E = Estudante e P = Professor) de cinco pessoas. Se o tipo for P,
solicitar o salário e fazer a média dos salários informados. Se o tipo for E, solicitar se o
mesmo recebe mesada. Contar quantos recebem e quantos não recebem mesada.
Garantir que o usuário informe uma idade válida, ou seja, maior que 0, que o tipo seja E
ou P e que recebe mesada seja S ou N. Validar essas entradas, ou seja, solicitar essas
entradas até que sejam válidas. Validar para que não seja realizada uma divisão por zero.*/

#include <stdio.h>

int main (void)

{
    char resp, a, tipo;
    int n, b, c, d;
    float salario, soma;

    do
    {
        soma = 0;
        b = 0;
        c = 0;
        d = 0;

        for(n = 1; n <= 5; n++)
        {
            do
            {
                printf("Insira o tipo (E) Estudante ou (P) Professor:");
                fflush(stdin);
                scanf("%c", &tipo);

                if(tipo != 'p' && tipo != 'P' && tipo != 'e' && tipo != 'E')
                {
                    printf("Tipo inv%clido, tente novamente.\n", 160);
                }
            }while(tipo != 'p' && tipo != 'P' && tipo != 'e' && tipo != 'E');

            if(tipo == 'p' || tipo == 'P')
            {
                do
                {
                    printf("Insira o valor do sal%crio:", 160);
                    fflush(stdin);
                    scanf("%f", &salario);

                    if(salario <= 0)
                    {
                        printf("Sal%crio inv%clido, tente novamente.\n", 160, 160);
                    }
                }while(salario <= 0);

                soma = salario + soma;
                d++;
            }

            if(tipo == 'e' || tipo == 'E')
            {
                do
                {
                    printf("Recebe mesada (S) Sim ou (N) N%co?", 198);
                    fflush(stdin);
                    scanf("%c", &a);

                    if((a != 's' && a != 'S')&&(a != 'n' && a != 'N'))
                    {
                        printf("Caract%cre inv%clido, tente novamente.\n", 130, 160);
                    }
                }while((a != 's' && a != 'S')&&(a != 'n' && a != 'N'));
            }

            if(a == 'S' || a == 's')
            {
                b++;
            }

            if(a == 'N' || a == 'n')
            {
                c++;
            }
        }

        printf("A m%cdia dos sal%crios dos Professores %c: %.2f\n", 130, 160, 130, soma / d);
        printf("Quantidade de estudantes que n%co recebem mesada: %d\n", 198, c);
        printf("Quantidade de estudantes que recebem mesadas: %d\n", b);

        printf("\nSe deseja continuar o programa insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n\n");

    }while((resp == 's')||(resp == 'S'));

    return 0;
}
