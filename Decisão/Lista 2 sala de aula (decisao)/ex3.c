/*Ler três valores inteiros diferentes e colocá-los em ordem crescente.*/

#include <stdio.h>

int main (void)

{
	int v1, v2, v3, menor, meio, maior;

	printf("Insira o primeiro valor:");
	scanf("%d", &v1);

	printf("Insira o segundo valor");
	scanf("%d", &v2);

	printf("Insira o terceiro valor");
	scanf("%d", &v3);

	if(v1<v2 && v1<v3)
	{
		menor = v1;
	}

	else if((v1<v2 && v1>v3) || (v1>v2 && v1<v3))
	{
		meio = v1;
    }

    else
    {
    	maior = v1;
    }

    if(v2<v1 && v2<v3)
    {
    	menor = v2;
    }

    else if((v2<v1 && v2>v3) || (v2>v1 && v2<v3))
    {
    	meio = v2;
    }

    else
    {
    	maior = v2;
    }

    if(v3<v1 && v3<v2)
    {
    	menor = v3;
    }

    else if((v3<v1 && v3>v2) || (v3>v1 && v3<v2))
    {
    	meio = v3;
    }

    else
    {
    	maior = v3;
    }

	printf("menor: %d meio: %d maior: %d", menor, meio, maior);

	return 0;
}
