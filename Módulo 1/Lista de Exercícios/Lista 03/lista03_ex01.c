/*QUEST�O 01: Fa�a um programa que leia um n�mero inteiro positivo N e exiba todos os m�ltiplos de Y inferiores a N, onde N e Y s�o fornecidos pelo usu�rio.*/

#include <stdio.h>

void main (){
	
	//vari�veis
	
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
