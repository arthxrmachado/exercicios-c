/*QUESTÃO 02: Desenvolver um programa que calcule a soma dos números de 1 a N, sendo N um número inteiro fornecido pelo usuário.*/

#include<stdio.h>

void main (){
	
	//variáveis
	
	int i, num, numSoma=0;
	
	//corpo do programa
	
	printf("Escreva um numero inteiro: ");
	scanf("%d" , &num);
	
	for(i=1; i<=num; i++){
		numSoma=numSoma+i;
	}
	
	printf("A soma dos numeros positivos menores que %d seria: %d" , num, numSoma);
}
