/*Elaborar um programa para automatizar o caixa de uma loja. Leia a quantidade e o
valor unitário de cada produto. Calcule o valor total da compra. Informe esse valor para o
usuário e o usuário informa o valor para pagamento. O programa calcula o troco e
informa-o ao usuário em notas de 10, 5, 1 e os centavos. Prosseguir a leitura enquanto a
quantidade for maior que zero. Se informado zero ou valor negativo para a quantidade, não ler o valor unitário.*/

#include<stdio.h>
#include<math.h>

int main()
{
    int quantidade, n10, n5, n1, a;
    float valor, total, cliente, troco, cent;

    total = 0;

    do
    {
        printf("Insira a quantidade do produto:");
        scanf("%d", &quantidade);

        if(quantidade <= 0)
        {
            break;
        }
        else if(quantidade > 0)
        {
            printf("Insira o valor do produto:");
            scanf("%f", &valor);

            total = (valor * quantidade) + total;
        }
    }while(quantidade > 0);

    printf("Valor total %c igual a: %.2f\n", 130, total);

    printf("Insira o valor entregue pelo cliente:");
    scanf("%f", &cliente);

    troco = cliente - total;
    n10 = floor(troco / 10);
    a = ((int)troco % 10);
    n5 = floor(a / 5);
    n1 = a % 5;
    cent = troco - floor(troco);

    if(cliente > 0)
    {
        printf("Valor do troco: %.2f\n", troco);
        printf("Notas de 10 reais: %d.\n", n10);
        printf("Notas de 5 reais: %d.\n", n5);
        printf("Moedas de 1 reais: %d.\n", n1);
        printf("Centavos: %.2f.", cent);
    }
    else
    {
        printf("Valor insuficiente.");
    }

    return 0;
}
