/*Faça um programa que solicite ao usuário o valor do salário de um funcionário e
apresente o menu a seguir e permita ao usuário escolher a opção desejada e mostre o
resultado. Verifique a possibilidade de opção inválida e não se preocupe com restrições,
como salário negativo. Use switch - case, if e if - else para a solução.*/

#include <stdio.h>

int main (void)

{
    int opcao;
    float salario, imposto, aumento, salarioT;

    printf ("Menu de opcoes:\n");
    printf ("1 - Imposto\n");
    printf ("2 - Novo salario\n");
    printf ("3 - Classificacao\n");
    printf ("Digite a opcao desejada:");
    scanf ("%d", &opcao);

    switch (opcao)
    {
    case 1:
    case 2:
    case 3:
        printf ("Insira aqui o valor de seu salario:");
        scanf ("%f", &salario);

        switch (opcao)
        {
            case 1:
                if (salario < 1000)
                {
                    imposto = salario * 5 / 100;
                }

                else if ((salario >= 1000) && (salario <= 1500))
                {
                    imposto = salario * 10 / 100;
                }

                else
                {
                    imposto = salario * 15 / 100;
                }

                printf ("O valor do imposto sobre seu salario e de %.2f reais.\n", imposto);
            break;

            case 2:
                if (salario < 1000)
                {
                    aumento = 75;
                }

                else if ((salario >= 1000) && (salario <= 1500))
                {
                    aumento = 100;
                }

                else
                {
                    aumento = 150;
                }

                salarioT = salario + aumento;

                printf ("O valor do aumento e de %.2f reais.\n", aumento);
                printf ("E do salario com o aumento incluido e de %.2f.\n", salarioT);
            break;

            case 3:
                if (salario >= 1000)
                {
                    printf ("Esta na categoria A.");
                }

                else
                {
                    printf ("Esta na categoria B.");
                }
            break;
        }

    break;

    default:
            printf ("Opcao invalida.");
    }

    return 0;
}
