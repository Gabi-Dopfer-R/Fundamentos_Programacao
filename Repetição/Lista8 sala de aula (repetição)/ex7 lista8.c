/*Construa um programa que leia um conjunto de dados contendo altura (que deve ser
maior que 0) e sexo (que dever ser masculino ou feminino) de um grupo de pessoas.
Quando fornecida uma altura igual a 0, é encerrada a entrada de dados. O programa deve
calcular e fornecer:
a) A maior e a menor altura do grupo.
b) A média de altura das mulheres.
c) A média de altura dos homens.
d) O número de homens e o percentual que eles representam no grupo.
e) O número de mulheres e o percentual que elas representam no grupo.*/

#include <stdio.h>

int main (void)

{
        char resp, sexo;
        float altura, a, b, soma, soma2, qntoT;
        int qntoM, qntoF;

    do// repetir programa.
    {
        soma = 0;
        soma2 = 0;
        qntoT = 0;
        qntoF = 0;
        qntoM = 0;
        a = 2.0;
        b = 0;


        do//parar com 0.
        {
            do//validar a altura.
            {
                printf("Insira a altura: ");
                fflush(stdin);
                scanf("%f", &altura);

                if(altura < 0)
                {
                    printf("Altura inv%clida, tente novamente.\n", 160);
                }
            }while(altura < 0);

            if(altura == 0)
            {
                break;
            }

            do//validar sexo.
            {
                printf("Insira o sexo:");
                fflush(stdin);
                scanf("%c", &sexo);

                if((sexo != 'm') && (sexo != 'M') && (sexo != 'f') && (sexo != 'F'))
                {
                    printf("Caract%cre inv%clido, tente M ou F.\n", 130, 160);
                }
            }while((sexo != 'm') && (sexo != 'M') && (sexo != 'f') && (sexo != 'F'));

            printf("\n");

            //menor e maior altura.
            if(altura < a)
            {
                a = altura;
            }
            if(altura > b)
            {
                b = altura;
            }

            qntoT++;

            //mulheres.
            if(sexo == 'f' || sexo == 'F')
            {
                qntoF++;
                soma = soma + altura;
            }

            //homens.
            else if(sexo == 'm' || sexo == 'M')
            {
                qntoM++;
                soma2 = soma2 + altura;
            }
        }while(altura != 0);//fim da repetição.

        //menor e maior altura;
        printf("\nMenor altura: %.2f\n", a);
        printf("Maior altura: %.2f\n\n", b);

        //mulheres
        printf("==== Mulheres ====\n");
        printf("Quantidade: %d\n", qntoF);
        printf("M%cdia da altura: %.2f\n", 130, soma / qntoF);
        printf("Porcentagem: %.2f\n\n", (100 * qntoF) / qntoT);

        //homens
        printf("==== Homens ====\n");
        printf("Quantidade: %d\n", qntoM);
        printf("M%cdia da altura: %.2f\n", 130, soma2 / qntoM);
        printf("Porcentagem: %.2f\n", (100 * qntoM) / qntoT);

        //repetir programa.
        printf("\nSe deseja continuar o programa insira 's' ou 'S':");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");

    }while((resp == 's')||(resp == 'S'));

    return 0;
}
