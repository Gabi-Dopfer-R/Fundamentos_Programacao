/*Elaborar uma fun��o que verifica se um n�mero � pal�ndromo.
Um n�mero � pal�ndromo quando ele n�o muda se lido da esquerda
para a direita ou da direita para a esquerda. Por exemplo, 2112 � pal�ndromo.
Elaborar uma fun��o que verifica se um n�mero, que contenha entre 2 e 9 d�gitos, � pal�ndromo.
Utilizando essa fun��o:
a) Verificar se um n�mero informado pelo usu�rio � pal�ndromo.
b) Apresentar os n�meros pal�ndromos que pertencem a um intervalo informado pelo usu�rio.
Use menu de op��es (com switch-case) e implemente a repeti��o de programa.*/

#include <stdio.h>


//===================== 1 ============================
int palindromo(int n)
{
    int cont, cont2, result, aux, n2;
    
    aux = n;
    cont2 = 0;
    cont = 1;
    while(aux>0)
    {
        cont= cont * 10;
        cont2++;
        aux=aux/10;
    }
    cont = cont/10;

    for(n2=n, result=0; cont > 0; n2/=10, cont2--)
    {
        if(n2 != 0)
        {
            result += (n2%10) * cont;
        }
        else
        {
            result *= 10;
        }
        cont=cont/10;
    }

    if(result == n)
    {
        return cont = 1;
    }
    else
    {
        return cont = 0;
    }
        
}

//==================== PRINCIPAL =======================
int main (void)
{
    char resp;

    do
    {
        int n, inicio, fim, menu, ini, fin, a;

        do
        {
            printf("=============== MENU =================\n");
            printf("Insira o equivalente ao item desejado.\n");
            printf("1 - Um valor pal%cndromo.\n", 161);
            printf("2 - Valores al%cdromos de um limite.\n", 161);
            fflush(stdin);
            scanf("%d", &menu);
            
            if(menu != 1 && menu != 2)
            {
                printf("\nOp%c%co inv%clida, tente novamente.\n", 135, 198, 160);
            }        
        }while(menu != 1 && menu != 2);

            switch(menu)
            {
                case 1:
                    do
                    {
                        printf("\n============= 1 ===============\n");
                        printf("Insira um n%cmero (2 a 9 d%cgitos):", 163, 161);
                        fflush(stdin);
                        scanf("%d", &n);

                        if(n < 10 || n > 999999999)
                        {
                            printf("Valor inv%clido, tente novamente.\n", 160);
                        }
                    }while(n < 10 || n > 999999999);

                    a = palindromo(n);

                    if(a == 0)
                    {
                        printf("N%co %c um pal%cndromo.\n", 198, 130, 161);
                    }
                    else
                    {
                        printf("%c um pal%cndromo.\n", 144, 161);
                    }
                break;

                case 2:
                    do
                    {
                        printf("\n============= 2 ===============\n");
                        printf("Informe o limite inferior (2 a 9 d%cgitos):");
                        fflush(stdin);
                        scanf("%d", &inicio);
                        
                        if(inicio < 10 || inicio > 999999999)
                        {
                            printf("\nValor inv%clido, tente novamente.\n", 160);
                        }
                    }while(inicio < 10 || inicio > 999999999);

                    do
                    {
                        printf("Informe o limite suoperior (2 a 9 d%cgitos):");
                        fflush(stdin);
                        scanf("%d", &fim);
                    
                        if(fim < 10 || fim > 999999999)
                        {
                            printf("\nValor inv%clido, tente novamente.\n", 160);
                        }
                    }while(fim < 10 || fim > 999999999);

                    if(inicio >= fim)
                    {
                        ini = fim;
                        fin = inicio;
                    }
                    else
                    {
                        ini = inicio;
                        fin = fim;
                    }

                    for(ini = ini; ini <= fin; ini++)
                    {
                       a = palindromo(ini);
                       if(a == 1)
                       {
                           printf("%d  ", ini);
                       }
                    }
                    printf("\n");
                break;
            }

        printf("\nDeseja repetir o programa? (S ou N)");
        fflush(stdin);
        scanf("%c", &resp);
        printf("\n");
    }while(resp == 's' || resp == 'S');

    return 0;
}
