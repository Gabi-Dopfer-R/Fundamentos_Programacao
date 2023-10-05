/* Ler dois valores que representam os limites de um intervalo. 
Mostrar os números parese divisíveis por 3 desse intervalo em ordem crescente. 
O usuário pode informar os valores em qualquerordem.*/

#include<stdio.h>

int main(void)
{
    int inicio, fim, a;
    
    printf("Insira o in%ccio do limite:", 161);
    scanf("%d", &inicio);
    
    printf("Insira o fim do limite:");
    scanf("%d", &fim);
    
    printf("Valores pares e divis%cveis por 3 em ordem crescente e que pertencem ao limite:\n", 161);
    
    if(inicio < fim)
    {
        for(a = inicio; a <= fim; a++)
        {
            if((a % 2 == 0)&&(a % 3 == 0))
            {
               printf("%d\t", a); 
            }
        }
    }
    
    else if(inicio > fim)
    {
        for(a = fim; a <= inicio; a++)
        {
            if((a % 2 == 0)&&(a % 3 == 0))
            {
               printf("%d\t", a); 
            }
        }
    }
    
    else
    {
        printf("Sem valores nesse intervalo.");
    }
    
    return 0;
}