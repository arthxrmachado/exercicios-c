/*

	Lista de Exerc�cios - IX
	
	QUEST�O 05: Fazer uma fun��o que exiba a tabuada de
	pot�ncias de um n�mero n, no intervalo de 1 a
	9. Se o n�mero n�o estiver neste intervalo, o
	c�digo 0 deve ser retornado; caso contr�rio,
	retorna-se 1.

*/

#include <stdio.h>

//prot�tipo das fun��es

void exibirTabuada (int n);

//main

void main(){
	
	//vari�veis
	
	int n;
	
	//dados
	
	do{
	
	printf("Digite um valor no intervalo de 1 a 9: ");
	scanf ("%d" , &n);

	if(n<=0||n>=10){
		
		printf("\nErro! Tente novamente!\n");
		
	}
	
	}while (n<=0||n>=10);
	
	exibirTabuada(n);
	
}

//implementa��o das fun��es

void exibirTabuada (int n){
	
	//vari�veis
	
	int i, potencia=1;
	
	for(i=0;i<=9;i++){
		
		printf("%d^%d=%d\n" , n,i,potencia);
		
		potencia=potencia*n;
		
	}
}
