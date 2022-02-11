#include<stdio.h>

// Converção de Celsius para Fahrenheits

int main()
{
	float n1,mul,rel;

	printf("Digite A Temp em Graus Celsius: ");
	scanf("%f",&n1);
	mul = n1 * 1.8;
	rel = mul + 32;
		
	printf("O valor da Temp em Graus Fahnreheit eh: %.2f\n",rel);

	system("pause");

	
	return 0;
}
