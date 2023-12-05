/*
QUESTAO 03: As vendas parceladas se tornaram uma otima opcao para os lojistas que, a cada dia, criam novas promocoes para tentar conquistar novos clientes. 

Faca um algoritmo que permita ao lojista informar o preco do produto e receber as seguintes informacoes:

	a) O valor com 10% de desconto para pagamento a vista;
	b) O valor da prestacao para parcelamento sem juros, em 5x;
	c) O valor da prestacao para parcelamento com juros, em 10x, com 20% de acrescimo no valor do produto.
*/

#include<stdio.h>

int main()
{
	//variáveis
	float preco, preco_desconto, preco_parcelado, preco_juros;
	
	//corpo do programa
	printf("Escreva o preco do produto: ");
	scanf("%f" , &preco);
	
	preco_desconto=preco*0.9;
	preco_parcelado=preco/5;
	preco_juros=(preco*1.2)/10;
	
	printf("\nO preco com 10%% de desconto e: %f" , preco_desconto);
	printf("\n\nO preco parcelado em cinco vezes e: %f" , preco_parcelado);
	printf("\n\nO preco parcelado em dez vezes com juros de 20%% e: %f" , preco_juros);
}
