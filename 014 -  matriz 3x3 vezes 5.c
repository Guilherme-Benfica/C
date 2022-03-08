#include<stdio.h>
#define dimensao 3
int main()
{
// Faça um programa que lê uma matriz de 3 x 3 elementos usando um comando for, multiplica cada elemento por 5 e imprime o resultado.	
	int matriz[dimensao][dimensao];
	int linha,coluna;	
	for(linha=0;linha<dimensao;linha++)
		for(coluna=0;coluna<dimensao;coluna++){
			printf("Elementos[%i][%i]:",linha+1,coluna+1);
			scanf("%i",&matriz[linha][coluna]);
		}
	printf("\nMatriz 3x3\n");
	for(linha=0;linha<dimensao;linha++){		
		for(coluna=0;coluna<dimensao;coluna++)							
			printf("%i",matriz[linha][coluna]);
			printf("\n");}	
		for(linha=0;linha<dimensao;linha++)
		for(coluna=0;coluna<dimensao;coluna++)
		matriz[linha][coluna]=matriz[linha][coluna]*5;
	printf("\nMatriz 3x3 multiplicada por 3\n");
	for(linha=0;linha<dimensao;linha++){
		for(coluna=0;coluna<dimensao;coluna++)							
			printf("%i",matriz[linha][coluna]);
			printf("\n");
	}	
getch();
return 0;		
}
