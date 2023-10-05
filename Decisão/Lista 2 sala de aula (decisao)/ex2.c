/* Ler três valores inteiros diferentes, encontrar e mostrar o número do meio. Deve ser
criada uma variável para armazenar esse número */

#include <stdio.h>

int main (void)

{
	int v1, v2, v3, vmeio;
	
	printf ("Insira o primeiro valor:");
	scanf ("%d", &v1 );
	
	printf("Insira o segundo valor:");
	scanf("%d", &v2);
	
	printf("Insira o terceiro valor:");
	scanf("%d", &v3);
	
	if((v1<v2 && v1>v3)|| (v1>v2 && v1<v3))
	{
		vmeio = v1;
	}
	
	else if((v2<v1 && v2>v3) || (v2>v1 && v2<v3))
	{
		vmeio = v2;
	}
	
	else if((v3<v1 && v3>v2) || (v3>v1 && v3<v2))
	 {
	 	vmeio = v3;
	 }
	 
	 printf("O valor do meio e: %d", vmeio);
	 
	 return 0;
}
