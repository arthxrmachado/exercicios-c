/*QUEST�O 03: Fazer um programa que exiba todos os divisores de um n�mero fornecido pelo usu�rio.*/

#include<stdio.h>

void main(){
	
	//vari�veis
	
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

