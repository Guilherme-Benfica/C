#include<stdio.h>

// Conversão de mm para polegada em nivel de chuva

int main()
{
	float n1,n2,n3;
		
	printf("Digite A Quantidade de Chuva em mm: "); // utilizar ponto (.) não virgula(,) para fazr o código.
	scanf("%f",&n1);

	n2 = 25.4;
	n3 = n1 / n2;
		
	printf("\nA quantidade de chuva em polegadas eh: %f\n",n3);
	
	system("pause");

	
	return 0;
}
