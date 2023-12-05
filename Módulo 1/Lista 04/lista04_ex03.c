/*QUESTÃO 03: Fazer um programa que exiba todos os divisores de um número fornecido pelo usuário.*/

#include<stdio.h>

void main(){
	
	//variáveis
	
	int i, num, numSoma=0;
	
	//corpo do programa
	
	printf("Escreva um numero inteiro: ");
	scanf("%d" , &num);
	
	for(i=1; i<=num; i++){
		if(num%i==0){
			printf("%d " , i);
		}
	}
}

