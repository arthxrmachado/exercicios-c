/*
QUESTÃO 01: Faça um programa que leia um número inteiro positivo N e exiba todos os múltiplos de Y inferiores a N, onde N e Y são fornecidos pelo usuário.
*/

#include <stdio.h>

void main (){
	
	//variáveis
	
	int n, y, j, i, div;
	
	//corpo do programa
	
	printf("Digite um numero positivo: ");
	scanf("%d" , &n);
	
	printf("Digite outro numero positivo: ");
	scanf("%d" , &y);
	
	for(i=0; i<=n; i++){
		
		div=i%y;
		if(div==0){
			printf("%d " , i);
		}
		
	}
}
