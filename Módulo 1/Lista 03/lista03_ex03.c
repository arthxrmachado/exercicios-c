/*QUEST�O 03: Jo�ozinho investiu Q reais em uma aplica��o com rendimento fixo de R% ao m�s. Pede-se a implementa��o de um programa que calcule o valor (e exiba-o) dispon�vel na conta de Jo�ozinho ap�s A anos de investimento.*/

#include <stdio.h>

void main (){
	
	//vari�veis
	
	int a, i;
	float q, r;
	
	//informa��es
	
	printf("Qual o valor investido? ");
	scanf("%f" , &q);
	
	printf("Qual e o rendimento fixo ao mes? ");
	scanf("%f" , &r);
	
	printf("Quantos anos renderam? ");
	scanf("%d" , &a);
	
	//transformando anos em meses
	
	a=a*12;
	
	//transformando o rendimento fixo em porcentagem
	
	r=r/100;
	
	//calculando os juros
	
	for(i=1; i<=a; i++){
		q=q*r+q;
	}
	
	printf("%2.f" , q);
}
