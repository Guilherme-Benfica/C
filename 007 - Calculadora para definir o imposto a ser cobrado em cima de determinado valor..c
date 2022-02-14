#include<stdio.h>

//Calculadora para definir o imposto a ser cobrado em cima de determinado valor.
 
int main()
{
	float precobase,percimposto,valorimposto,valortotal;
	
	printf("Digite O Preco Base do Produtos: ");
	scanf("%f",&precobase);

	percimposto = 17;
	valorimposto = precobase * (percimposto / 100);
	valortotal = precobase + valorimposto;

	printf("O valor do imposto eh: %f\n",valorimposto);
	printf("O valor total do item com imposto: %f\n",valortotal);

	system("pause");

	
	return 0;
}
