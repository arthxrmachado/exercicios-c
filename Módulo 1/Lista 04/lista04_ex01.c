/*QUEST�O 01: Dado um n�mero inteiro N, fazer um programa que exiba os n�meros pares iguais ou inferiores a N.*/

#include<stdio.h>

void main (){
	
	//vari�veis
	
	int i, num, div;
	
	//corpo do programa
	
	printf("Escreva um numero inteiro: ");
	scanf("%d" , &num);
	
	for(i=0; i<=num; i++){
		
		div=i%2;
		if(div==0){
			printf("%d " , i);
		}
	}
}
