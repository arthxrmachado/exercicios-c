/*QUESTÃO 03: Joãozinho investiu Q reais em uma aplicação com rendimento fixo de R% ao mês. Pede-se a implementação de um programa que calcule o valor (e exiba-o) disponível na conta de Joãozinho após A anos de investimento.*/

#include <stdio.h>

void main (){
	
	//variáveis
	
	int a, i;
	float q, r;
	
	//informações
	
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
