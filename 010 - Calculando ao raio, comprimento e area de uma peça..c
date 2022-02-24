#include<stdio.h>

// Calculando ao raio, comprimento e area de uma peça.

int main()
{
	float raio,comprimento,area,pi;
	
	printf("Digite O Raio: ");
	scanf("%f",&raio);

	pi = 3.1416;
	comprimento = ((2 * pi) * raio);
	area = (pi * (raio * raio));
	 
	printf("\nO valor do comprimento eh : %f\n",comprimento);
	printf("O valor da area eh : %f\n",area);

	system("pause");

	return 0;
}
