/*
QUESTÃO 04: A função logarítmica é complementar à potenciação. Ou seja, uma vez que 3^4 = 81, podemos então afirmar que log 3 81 = 4. Generalizando, temos 
que: base^expoente = pot <-> log base pot = expoente. 

Com base nessa descrição, pede-se o desenvolvimento de uma função que, dados a e b, calcule o valor de log a b. Nota: a sua solução deverá apresentar um 
valor inteiro que, na verdade, será a solução aproximada do logaritmo.
*/

#include <stdio.h>

//protótipo das funções

void exibirLog (int a, int b);

//main

void main(){
	
	//variáveis
	
	int a, b;
	
	//dados
	
	printf("Digite o primeiro valor: ");
	scanf ("%d" , &a);
	
	printf("Digite o segundo valor: ");
	scanf ("%d" , &b);
	
	exibirLog(a, b);
	
}

//implementação das funções

void exibirLog (int a, int b){
	
	//variáveis
	
	int cont, valor=b;
	
	do{
		
		valor=valor/a;
		cont++;
		
	}while(valor>=a);
	
	printf("Log %d %d = %d" , a, b, cont);
}
