#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
int main() {
//3-Escreva um programa que solicite uma palavra qualquer do usuário e no final imprima quantas vogais e quantas consoantes a palavra tem. Para simplificar, considere apenas palavras sem acentuação.
char nome[1][30];
int vogal = 0, consoante = 0, i, f;
setlocale(LC_ALL,"");
	for (i = 0; i < 1; i++){//incio for contador de palavras
    	printf("Informe a Palavra: ", ( i + 1 ) );
        scanf(" %s",nome[i]);
    }//fim for contador de palavras
		for (i = 0; i < 1; i++){//for contador de quantas palavras ele compara inicio
			for ( f = 0; f < strlen(nome[i]); f++){//for contador vogal e consoante inicio
            	if ((nome[i][f] == 'a') || (nome[i][f] == 'A')
                	    || (nome[i][f] == 'e') || (nome[i][f] == 'E')|| (nome[i][f] == 'i') || (nome[i][f] == 'I')
                	    || (nome[i][f] == 'o') || (nome[i][f] == 'O')|| (nome[i][f] == 'u') || (nome[i][f] == 'U')) {//contador vogal inicio
                	vogal++;
                    }//contador vogal final
				if ((nome[i][f] == 'B') || (nome[i][f] == 'b')
                    	|| (nome[i][f] == 'C') || (nome[i][f] == 'c')|| (nome[i][f] == 'D') || (nome[i][f] == 'd')
						|| (nome[i][f] == 'F') || (nome[i][f] == 'f')|| (nome[i][f] == 'G') || (nome[i][f] == 'g')
                    	|| (nome[i][f] == 'H') || (nome[i][f] == 'h')|| (nome[i][f] == 'J') || (nome[i][f] == 'j')
						|| (nome[i][f] == 'K') || (nome[i][f] == 'k')|| (nome[i][f] == 'L') || (nome[i][f] == 'l')
                    	|| (nome[i][f] == 'M') || (nome[i][f] == 'm')|| (nome[i][f] == 'N') || (nome[i][f] == 'n')
						|| (nome[i][f] == 'P') || (nome[i][f] == 'p')|| (nome[i][f] == 'Q') || (nome[i][f] == 'q')
                    	|| (nome[i][f] == 'R') || (nome[i][f] == 'r')|| (nome[i][f] == 'S') || (nome[i][f] == 's')
						|| (nome[i][f] == 'T') || (nome[i][f] == 't')|| (nome[i][f] == 'W') || (nome[i][f] == 'w')
                    	|| (nome[i][f] == 'Y') || (nome[i][f] == 'y')|| (nome[i][f] == 'X') || (nome[i][f] == 'x')
						|| (nome[i][f] == 'Z') || (nome[i][f] == 'z')){//contador consoante inicio					
                	consoante++;
            		}//contador consoante final
			}//for contador vogal e consoante final
			printf( "Nome: %s, tem %d vogais, tem %d consoantes\n", nome[i], vogal,consoante);//resultado impresso na tela
		}//for contador de quantas palavras ele compara final
getch();
return 0;
}
