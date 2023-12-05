/*

	Lista de Exercícios - IX
	
	QUESTÃO 05: Fazer uma função que exiba a tabuada de
	potências de um número n, no intervalo de 1 a
	9. Se o número não estiver neste intervalo, o
	código 0 deve ser retornado; caso contrário,
	retorna-se 1.

*/

#include <stdio.h>

//protótipo das funções

void exibirTabuada (int n);

//main

void main(){
	
	//variáveis
	
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

//implementação das funções

void exibirTabuada (int n){
	
	//variáveis
	
	int i, potencia=1;
	
	for(i=0;i<=9;i++){
		
		printf("%d^%d=%d\n" , n,i,potencia);
		
		potencia=potencia*n;
		
	}
}
