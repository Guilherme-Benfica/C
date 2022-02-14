#include<stdio.h>

// Valor a ser pago na compra de um veiculo.

int main()
{
	float precobase,percdist,percimp,percimp2,valordist,valorimp,valortotal,n1;
	
	printf("Digite O Preco Base do Carro: ");
	scanf("%f",&precobase);

	percdist = 12;
	percimp = 45;
	valordist = precobase * (percdist / 100);
	percimp2 = percimp / 100;
	n1 = (precobase + valordist);
	valorimp = n1 * percimp2;
	valortotal = n1 + valorimp;
	
	printf("\nO valor do distribuidor eh: %f\n",valordist);
	printf("O valor do carro com a parte do distribuidor eh: %f\n",n1);
	printf("O valor do imposto eh: %f\n",valorimp);
	printf("O valor total do carro com o valor do distribuidor e imposto: %f\n",valortotal);

	system("pause");

	
	return 0;
}
