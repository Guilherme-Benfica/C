#include<stdio.h>

// Convesão de reais para dolares, lançando taxa cambial.

int main()
{
	float real,dolar,taxa;
	
	printf("Digite A Taxa Cambial em Reais: ");
	scanf("%f",&taxa);
	printf("Digite O Valor em Reais: ");
	scanf("%f",&real);

	dolar = real / taxa;

	printf("Voce tem %.2f dolares quando a taxa eh %.2f\n",dolar,taxa);

	system("pause");

	return 0;
}
