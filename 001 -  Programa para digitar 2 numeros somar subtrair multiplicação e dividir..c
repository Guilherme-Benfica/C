#include<stdio.h>

// Programa para digitar 2 numeros, somar,subtrair, multiplica��o e dividir.

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
		
	
	printf("O valor da soma �: %f\n",som);
	printf("O valor da subtra��o �: %f\n",sub);
	printf("O valor da multiplica��o �: %f\n",mul);
	printf("O valor da divis�o �: %f\n",div);

	system("pause");

	
	return 0;
}
