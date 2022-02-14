#include<stdio.h>

// Valores gastos em uma lanchonete

int main()
{
	int hamb,batata,refri,cerveja,doce;
	float n1,n2,n3,n4,n5,n6;
		
	printf("Digite A Quantidade de Hamburguers: ");
	scanf("%i",&hamb);
	printf("Digite A Quantidade de Batatas Frita: ");
	scanf("%i",&batata);
	printf("Digite A Quantidade de Refrigerantes: ");
	scanf("%i",&refri);
	printf("Digite A Quantidade de Cervejas: ");
	scanf("%i",&cerveja);
	printf("Digite A Quantidade de Doces: ");
	scanf("%i",&doce);

	n1 = hamb * 8.00;
	n2 = batata * 12.00;
	n3 = refri * 3.00;
	n4 = cerveja * 5.00;
	n5 = doce * 3.00;
	n6 = n1 + n2 + n3 + n4 + n5;

	printf("\nSendo assim, as quantidades sao \n");
	printf("O valor total dos hamburguers eh: %f\n",n1);
	printf("O valor total das batatas fritas eh: %f\n",n2);
	printf("O valor total dos refrigerantes eh: %f\n",n3);
	printf("O valor total das cervejas eh: %f\n",n4);
	printf("O valor total dos doces eh: %f\n",n5);

	printf("\nO Valor total da conta eh : %f\n",n6);

	
	system("pause");

	
	return 0;
}
