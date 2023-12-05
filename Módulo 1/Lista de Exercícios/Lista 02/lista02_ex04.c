/*
QUESTAO 04: Desenvolva um algoritmo que calcule o consumo de combustivel de um automovel em determinada viagem. Para isso, devem ser obtidos:

	i) o percurso (em quilometros) da viagem; 
	ii) o numero de quilometros que o carro percorre com um litro de combustivel (km/l);
	iii) o preco do litro do combustivel.

Ao final, o algoritmo deve determinar:
- A quantidade de combustivel, em litros, consumida durante a viagem;
- O custo total de combustivel.
*/

//importacao de bibliotecas
#include<stdio.h>

int main()
{
	//variáveis
	int percurso, litro_km, quantidade_combustivel;
	float preco, custo_total;
	
	//corpo do programa
	printf("Escreva o percurso da viagem em km: ");
	scanf("%i" , &percurso);
	
	printf("\nEscreva o numero de km que o carro percorre por litro: ");
	scanf("%i" , &litro_km);
	
	printf("\nEscreva o preco do litro do combustivel: ");
	scanf("%f" , &preco);
	
	quantidade_combustivel=percurso/litro_km;
	custo_total=preco*quantidade_combustivel;
	
	printf("\nA quantidade de combustivel consumida durante a viagem e: %i litros" , quantidade_combustivel);
	printf("\n\nO custo total do combustivel e: %0.2f" , custo_total);
}
