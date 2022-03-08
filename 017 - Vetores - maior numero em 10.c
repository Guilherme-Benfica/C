//Escreva um programa que leia 10 números informados pelo usuário, guarde em um vetor. No final leia o vetor novamente e imprima o maior deles.
#include <stdio.h>
#include <conio.h>
int main()
{
    int i,maior,A[10]; 
    for (i=0;i<10;++i){
        printf("A[%d]:",i);
        scanf("%d",&A[i]);
}    
    maior=A[0];
    for(i=0;i<10;++i){
        if(A[i]>maior)maior=A[i];
}        
    printf("\n\nMaior: %d\n",maior);        
    getch();
    return 0;
}

