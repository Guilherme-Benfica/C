#include<stdio.h>

// Lançameto de notas de um aluno e definindo a sua média.

int main()
{
	float n1,n2,n3,p1,p2,p3,r1,r2,r3,med;
	
	printf("Digite A Nota Da Prova 1: ");
	scanf("%f",&n1);
	printf("Digite A Nota Da Prova 2: ");
	scanf("%f",&n2);
	printf("Digite A Nota Da Prova 3: ");
	scanf("%f",&n3);

	p1 = 20;
	p2 = 30;
	p3 = 50;
	r1 = (n1 * (p1 / 100 ));
	r2 = (n2 * (p2 / 100 ));
	r3 = (n3 * (p3 / 100 ));
	med = r1 + r2 + r3;
	 
	printf("\nO valor da media do Aluno eh: %f\n",med);

	system("pause");

	return 0;
}
