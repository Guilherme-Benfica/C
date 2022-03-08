#include<stdio.h>
#define dimensao 3
int main()
{
//Criar um programa que leia os elementos de uma matriz inteira de 3 x 3 e imprimir outra matriz multiplicando cada elemento da primeira matriz por 2.	
	int matriz[dimensao][dimensao];
	int linha,coluna;
	for(linha=0;linha<3;linha++)
		for(coluna=0;coluna<3;coluna++){
			printf("\nValor[%d][%d]",linha+1,coluna+1);
			scanf("%i",&matriz[linha][coluna]);
		}
	printf("\nMatriz 3x3:\n\n");
	for(linha=0;linha<3;linha++){
		for(coluna=0;coluna<3;coluna++)
			printf("%i",matriz[linha][coluna]);
			printf("\n");
		}
	for(linha=0;linha<dimensao;linha++)
	for(coluna=0;coluna<dimensao;coluna++)
	matriz[linha][coluna]=matriz[linha][coluna]*2;
	printf("\nMatriz 3x3 multiplicada por 2\n\n");
	for(linha=0;linha<dimensao;linha++){
		for(coluna=0;coluna<dimensao;coluna++)
			printf("%i",matriz[linha][coluna]);
			printf("\n");
		}
getch();
return 0;		
}
