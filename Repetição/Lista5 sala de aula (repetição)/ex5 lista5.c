/*Elaborar um programa que valide o número de uma conta corrente com três dígitos, retorne o
dígito verificador e informe se o número da conta está correto. Ler os quatro dígitos como um
único número, validando para que esse número esteja em um intervalo de 1000 a 9999. Separar
os dígitos de forma que os três primeiros sejam o número da conta e o último o dígito verificador.
Validar a entrada, ou seja, repetir a entrada do número até que seja informado um número com
somente quatro dígitos. Por exemplo: Se o número informado for 1234, 123 é o número da conta e
4 é o dígito verificador.
Para obter o dígito verificador:
- Somar o número da conta com o seu inverso = 123 + 321 = 444
- Multiplicar cada dígito pela sua ordem posicional e somar os resultados = 4 *1 + 4 * 2 + 4 * 3 = 24
- O último dígito desse resultado é o verificador: 4 */

#include <stdio.h>

int main (void)

{
    int n, n2, n3, x, digiton1, digiton2, digiton3, digitox1, digitox2, digitox3, digitox4, soma, verif;

    do
    {
        printf("Insira aqui o n%cmero da conta:", 163);
        scanf("%d", &n);

        if(n < 0)
        {
            n = -1 * n;
        }

        if(n < 9999 && n > 1000)
        {
            n2 = n / 10;

            //separar digitos.
            digiton1 = n2 % 10;
            digiton2 = ((n2 % 100) - digiton1)/ 10;
            digiton3 = (n2  - digiton1 - digiton2)/ 100;
            //inverter digitos.
            n3 = (digiton1 * 100)+(digiton2 * 10)+ digiton3;
            //somar.
            x = n2 + n3;
            //múltiplicar pela posição e somar.
            digitox1 = x % 10;
            digitox2 = ((x % 100) - digitox1)/ 10;
            digitox3 = ((x  - digitox1 - (digitox2*10))/100)% 10;
            digitox4 = (x  - digitox1 - (digitox2*10) - (digitox3*100))/ 1000;
            soma  = (digitox1 * 3)+(digitox2 * 2)+(digitox3 * 1)+(digitox4 * 0);
            //Verificador
            verif = soma % 10;

            if(verif == n%10)
            {
                printf("O n%cmero da conta est%c correto.", 163, 160);
            }
            else
            {
                printf("O n%cmero da conta est%c incorreto.", 163, 160);
            }
        }
        else
        {
            printf("N%cmero inv%clido, tente novamente.\n", 163, 160);
        }
    }while(n < 1000 || n > 9999);

    return 0;
}
