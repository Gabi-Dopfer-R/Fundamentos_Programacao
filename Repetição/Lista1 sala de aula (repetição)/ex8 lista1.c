/*Fazer um programa que faça o levantamento dos candidatos que se inscreveram para
vagas em uma empresa. Considerando que para cada candidato, a empresa tenha obtido
as seguintes informações:
- Idade
- Nacionalidade (B - Brasileiro ou E - Estrangeiro)
- Possui curso superior (S - Sim ou N - Não)
Faça um programa para determinar:
a) A quantidade de brasileiros.
b) A quantidade de estrangeiros.
c) A idade média dos brasileiros sem curso superior.
d) A menor idade entre os estrangeiros com curso superior.
Estabelecer uma condição para finalizar a entrada de dados do programa. Por exemplo,
igual a 0 ou idade negativa. Se a idade for igual a 0 ou negativa, não ler as informações
de nacionalidade e se possui curso superior, e sair do programa.*/

#include <stdio.h>

int main (void)

{
    float idade, soma1, idade2, media;
    char nacionalidade, ensino;
    int br, es, a, menor;

    printf("Candidatura %c uma vaga de funcion%crio.\n", 133, 160);

    br = 0;
    es = 0;
    soma1 = 0;
    a = 0;
    menor = 2147483647;

    while(idade > 0)
    {
        printf("Insira sua idade:");
        scanf("%f", &idade);

        if(idade <= 0)
        {
            break;
        }
        else
        {

            fflush(stdin);

            printf("Voc%c %c estrangeiro(E) ou brasileiro(B):", 136, 130);
            scanf("%c", &nacionalidade);

            if((nacionalidade == 'b')||(nacionalidade == 'B'))
            {
                fflush(stdin);

                printf("Voc%c possui ensino superior? Sim(S) ou N%co(N):", 136, 198);
                scanf("%c", &ensino);

                br++;

                if((ensino == 'n')||(ensino == 'N'))
                {
                    soma1 = idade + soma1;
                    a++;
                }
            }
            if((nacionalidade == 'e')||(nacionalidade == 'E'))
            {
                fflush(stdin);

                printf("Voc%c possui ensino superior? Sim(S) ou N%co(n):", 136, 198);
                scanf("%c", &ensino);

                es++;

                if((ensino == 's')||(ensino == 'S'))
                {
                    if(idade < menor)
                    {
                        idade2 = idade;
                    }
                }
            }
        }
    }

    media = soma1 / a;

    printf("A quantidade de brasileiros candidatos %c de: %d pessoas.\n", 130, br);

    printf("A quantidade de estrangeiros candidatos %c de: %d pessoas.\n", 130, es);

    printf("A idade media dos brasileiros sem curso superior %c: %.0f anos.\n", 130, media);

    printf("a menor idade de estrangeiros com cursos superior %c: %.0f anos.", 130, idade2);

    return 0;
}
