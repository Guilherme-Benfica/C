#include<stdio.h>

//soma da temperatura dos 7 dias da semana e dividir por 7.

int main()
{
	float n1,n2,n3,n4,n5,n6,n7,med;

	printf("Digite a Temperatura na Segunda: ");
	scanf("%f",&n1);
	printf("Digite a Temperatura na Terca: ");
	scanf("%f",&n2);
	printf("Digite a Temperatura na Quarta: ");
	scanf("%f",&n3);
	printf("Digite a Temperatura na Quinta: ");
	scanf("%f",&n4);	
	printf("Digite a Temperatura na Sexta: ");
	scanf("%f",&n5);
	printf("Digite a Temperatura no Sabado: ");
	scanf("%f",&n6);	
	printf("Digite a Temperatura no Domingo: ");
	scanf("%f",&n7);	
		
	med = (n1 + n2 + n3 + n4 + n5 + n6 + n7) /7 ;
		
	printf("O valor da media eh: %f\n",med);

	system("pause");

	
	return 0;
}
