/*
QUESTAO 05: O cardapio de uma lanchonete e o seguinte:

Especificação 		Código 	Preço
Cachorro quente 	100 	3,50
Bauru simples 		101 	4,50
Bauru com ovo 		102 	5,20
Hamburger 		103 	3,00
Cheeseburger 		104 	4,00
Refrigerante 		105 	2,50

Escrever um algoritmo que obtenha o código do item pedido, a quantidade e calcule o valor a ser pago.

Considere que, a cada execução do algoritmo, somente será calculado o valor relacionado a um item.
*/

//importacao de bibliotecas
#include <stdio.h>

void main()
{
	int cod,q;
	float valor;
	
	printf("Entre com o codigo do produto:\n");
	scanf("%d",&cod);
	printf("Entre com a quantidade do produto:\n");
	scanf("%d",&q);
	
	if(cod==100)
	{
		valor=3.50*q;
		printf("Codigo Escolhido: %d\n Quantidade: %d\n Valor do Produto:%.2f\n",cod,q,valor);
	}else
	if(cod==101)
	{
		valor=4.50*q;
		printf("Codigo Escolhido: %d\n Quantidade: %d\n Valor do Produto:%.2f\n",cod,q,valor);
	}else
	if(cod==102)
{
		valor=5.20*q;
		printf("Codigo Escolhido: %d\n Quantidade: %d\n Valor do Produto:%.2f\n",cod,q,valor);
	}else
	if(cod==103)
	{
		valor=3.00*q;
		printf("Codigo Escolhido: %d\n Quantidade: %d\n Valor do Produto:%.2f\n",cod,q,valor);
	}else
	if(cod==104)
	{
		valor=4.00*q;
		printf("Codigo Escolhido: %d\n Quantidade: %d\n Valor do Produto:%.2f\n",cod,q,valor);
	}else
	if(cod==105)
	{
		valor=2.50*q;
		printf("Codigo Escolhido: %d\n Quantidade: %d\n Valor do Produto:%.2f\n",cod,q,valor);
	}else

	{
		printf("O codigo digitado e invalido. Reinicie o programa e tente novamente o seu pedido!");
	}
}
