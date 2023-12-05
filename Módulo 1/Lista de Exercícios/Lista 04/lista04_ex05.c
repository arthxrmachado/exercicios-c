/*QUESTÃO 05: Criar um programa que exiba os N primeiros termos da seguinte série: 1,2,4,8,16,32,...*/

#include<stdio.h>

void main(){
	
	//variáveis
	
	int i, n, termo=1;
	
	//corpo do programa
	
	printf("Informe quantos termos de uma serie serao apresentados: ");
	scanf("%d" , &n);
	
	for(i=1; i<=n; i++){
			printf("%d " , termo);
			termo=termo*2;
		}
	}
