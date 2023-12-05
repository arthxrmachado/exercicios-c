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
