/*QUESTÃO 01: Dado um número inteiro N, fazer um programa que exiba os números pares iguais ou inferiores a N.*/

#include<stdio.h>

void main (){
	
	//variáveis
	
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
