#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
// O programa que lê duas palavras do teclado e diz se elas são iguais ou diferentes. O programa deve dizer ainda se alguma das palavras digitadas é igual a “Pindamonhangaba”.
	
	char p1[30],p2[30];
	int i;
	setlocale(LC_ALL,"");
		for(i=0; i<3; i++){//inicio for		
			printf("\n\n\t\t\tpalavra 1: >>>");
			scanf("%s",p1);			
			printf("\n\n\t\t\tpalavra 2: >>>");
			scanf("%s",p2);
				if((strcmp(p1,"pindamonhangaba")==0)&&(strcmp(p2,"pindamonhangaba")==0)){//inicio if
					printf("\n\n\t\t\t>>> Palavras iguais e palavras 1 e 2 iguais a pindamonhangaba <<<");
				}//fim if					
				else if(strcmp(p1,"pindamonhangaba")==0){//inicio else if 1
					printf("\n\n\t\t\t>>> Palavras diferentes e palavra 1 igual pindamonhangaba <<<");
				}//fim else if 1
				else if(strcmp(p2,"pindamonhangaba")==0){//inicio else if 2
					printf("\n\n\t\t\t>>> Palavras diferentes e palavra 2 igual pindamonhangaba <<<");
				}//fim else if 2
				else if(strcmp(p1,p2)==0){//inicio else if 3
					printf("\n\n\t\t\t>>> Palavras iguais <<<");
				}//fim inicio else if 3
				else if(strcmp(p1,p2)==-1){//inicio else if 4
					printf("\n\n\t\t\t>>> Palavras diferentes <<<");
				}//fim inicio else if 4
				else if(strcmp(p1,p2)==1){//inicio else if 5
					printf("\n\n\t\t\t>>> Palavras diferentes <<<");
				}//inicio else if 5
				getch();
				system("clear || cls\n\n\n");				
		}//fim for
getch();
return 0;		
}
