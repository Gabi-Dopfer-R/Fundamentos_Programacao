/*Elaborar um programa que aceita e valida uma senha com 6 dígitos numéricos, 
que deve ser armazenada em uma string. O usuário tem três tentativas para acertar a senha, 
se ultrapassar esse limite, ele deve ser informado. 
O usuário também deve ser informado se ele acertou a senha em até três tentativas.
Dica: Considere que já existe uma senha armazenada na string senhaArmazenada[7]="123456";*/

#include <stdio.h>

int main(void)
{
    char senhaArmazenada[7]="123456", senha[7];
    int i, cont, aux=0;

    do
    {
        printf("Informe a senha: ");
        fflush(stdin);
        gets(senha);

        for(i=0, cont=0; senha[i] != '\0'; i++)
        {
            if(senha[i] == senhaArmazenada[i])
            {
                cont++;
            }
        }
            
        aux++;
        if(aux >= 3 && aux % 3 == 0 &&  cont != 6)
        {
            printf("Acesso negado!\n\n");
        }

    }while(cont != 6);

    printf("Senha v%clida!", 160);

    return 0;
}