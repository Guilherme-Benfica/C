#include<stdio.h>

// Definindo a porcenatgem a ser recebida por um vendedor de carros. 

int main()
{
	int veiculos;
	float n1,n2,n3,n4;
		
	printf("Digite A Quantidade de Veiculos Vendidos: ");
	scanf("%i",&veiculos);

	n1 = 350;
	n2 = 250;
	n3 = veiculos * 350;
	n4 = n3 + n2;

	printf("O salario do vendendor eh: %f\n",n4);

	system("pause");

	
	return 0;
}
