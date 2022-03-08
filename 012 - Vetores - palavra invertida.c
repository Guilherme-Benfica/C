#include<stdio.h>
#include<stdlib.h>//Biblioteca necessária para usar as funções strcpy e strlen
#include<locale.h>
#include<conio.h>
#include<math.h>
#include<string.h>
//Escreva um programa que leia um texto com 10 letras e exiba este texto em ordem invertida na tela.
int main()
{
	int x,tam;
	setlocale(LC_ALL,"");
	char nome[30];
	printf("\n\n\t\tDigite uma palavra:");
	scanf("%s",nome);
	tam=strlen(nome);//strlen calcula a quantidade de caracteres que tem a string
	printf("\n\n\t\tA palavra invertida é:\t ");
for (x=tam-1; x >= 0; x--){
	printf("%c",nome[x]);
}
	getch();
	return 0;
}
