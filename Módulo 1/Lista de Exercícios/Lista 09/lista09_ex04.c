/*

	Lista de Exerc�cios - IX
	
	QUEST�O 04: A fun��o logar�tmica � complementar � potencia��o. 
	Ou seja, uma vez que 3^4 = 81, podemos ent�o afirmar que log 3 81 = 4. 
	Generalizando, temos que: base^expoente = pot <-> log base pot = expoente. 
	Com base nessa descri��o, pede-se o desenvolvimento de uma fun��o que, dados a e b, 
	calcule o valor de log a b. Nota: a sua solu��o dever� apresentar um valor inteiro que, 
	na verdade, ser� a solu��o aproximada do logaritmo.

*/

#include <stdio.h>

//prot�tipo das fun��es

void exibirLog (int a, int b);

//main

void main(){
	
	//vari�veis
	
	int a, b;
	
	//dados
	
	printf("Digite o primeiro valor: ");
	scanf ("%d" , &a);
	
	printf("Digite o segundo valor: ");
	scanf ("%d" , &b);
	
	exibirLog(a, b);
	
}

//implementa��o das fun��es

void exibirLog (int a, int b){
	
	//vari�veis
	
	int cont, valor=b;
	
	do{
		
		valor=valor/a;
		cont++;
		
	}while(valor>=a);
	
	printf("Log %d %d = %d" , a, b, cont);
}
