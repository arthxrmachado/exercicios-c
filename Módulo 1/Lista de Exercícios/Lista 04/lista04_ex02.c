/*QUEST�O 02: Desenvolver um programa que calcule a soma dos n�meros de 1 a N, sendo N um n�mero inteiro fornecido pelo usu�rio.*/

#include<stdio.h>

void main (){
	
	//vari�veis
	
	int i, num, numSoma=0;
	
	//corpo do programa
	
	printf("Escreva um numero inteiro: ");
	scanf("%d" , &num);
	
	for(i=1; i<=num; i++){
		numSoma=numSoma+i;
	}
	
	printf("A soma dos numeros positivos menores que %d seria: %d" , num, numSoma);
}
