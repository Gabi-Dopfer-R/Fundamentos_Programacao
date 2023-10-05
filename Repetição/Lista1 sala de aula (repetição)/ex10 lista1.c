/*Uma indústria fabrica roupas categorizadas em masculinas, femininas e infantis. Ler a
quantidade e a respectiva categoria (M, F ou I). Após o loop, calcular e mostrar o
percentual de produtos por categoria. Validar para que seja informada uma categoria
válida. Finalizar a leitura quando informado um valor 0 ou negativo para a quantidade. Ler
inicialmente a quantidade e depois a categoria. Se informada uma quantidade negativa,
não ler a categoria.*/

#include <stdio.h>

int main (void)

{
    float soma, somaM, somaF, somaI;
    int quantidade;
    char categoria;

    soma = 0;
    somaM = 0;
    somaF = 0;
    somaI = 0;

    do
    {
        printf("Insira a quantidade de produtos:");
        scanf("%d", &quantidade);

        if( quantidade > 0)
        {
            do
            {
                fflush(stdin);
                printf("Para que categoria esses produtos pertencem? (I)Infantil, (M)Masculina ou (F)Feminina.");
                scanf("%c", &categoria);

                if((categoria == 'm')||(categoria == 'M'))
                {
                    somaM = quantidade + somaM;
                }

                else if((categoria == 'f')||(categoria == 'F'))
                {
                    somaF = quantidade + somaF;
                }

                else if((categoria == 'i')||(categoria == 'I'))
                {
                    somaI = quantidade + somaI;
                }
                else
                {
                    printf("Categoria inv%clida. Tente outra vez.\n", 160);
                }

            }while((categoria!= 'm')&&(categoria!= 'M')&&(categoria!= 'f')&&(categoria!= 'F')&&(categoria!= 'i')&&(categoria!= 'I'));
        }

        else
        {
            break;
        }

        soma = quantidade + soma;

    }while(quantidade > 0);

    printf("%.2f\%% Feminino.\n", somaF * 100 / soma);
    printf("%.2f\%% Masculino. \n", somaM * 100 / soma);
    printf("%.2f\%% Infantil. \n", somaI * 100 / soma);

    return 0;
}
