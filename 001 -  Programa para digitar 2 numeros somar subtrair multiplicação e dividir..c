#include<stdio.h>

// Programa para digitar 2 numeros, somar,subtrair, multiplicação e dividir.

int main()

{
	float n1,n2,som,sub,mul,div;

	printf("Digite o Primeiro Numero: ");
	scanf("%f",&n1);
	printf("Digite o Segundo Numero: ");
	scanf("%f",&n2);
	som = n1 + n2;
	sub = n1 - n2;
	mul = n1 * n2;
	div = n1 / n2;
		
	
	printf("O valor da soma é: %f\n",som);
	printf("O valor da subtraÇão é: %f\n",sub);
	printf("O valor da multiplicação é: %f\n",mul);
	printf("O valor da divisão é: %f\n",div);

	system("pause");

	
	return 0;
}
