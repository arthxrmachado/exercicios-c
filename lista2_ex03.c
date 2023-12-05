/*QUESTAO 03: As vendas parceladas se tornaram uma �tima op��o para os lojistas que,
a cada dia, criam novas promo��es para tentar conquistar novos clientes. 

Fa�a um algoritmo que permita ao lojista informar o pre�o do produto e receber as seguintes 
informa��es:
	a) O valor com 10% de desconto para pagamento � vista;
	b) O valor da presta��o para parcelamento sem juros, em 5x;
	c) O valor da presta��o para parcelamento com juros, em 10x, com 20% de acr�scimo
	no valor do produto.
*/

//Importa��o de bibliotecas
#include <stdio.h>

void main ()
{
	//declara��o de vari�veis
	float valor, aVista, pSemJuros, pComJuros;
	
	//leitura do valor do produto
	printf ("Entre com o valor do produto: ");
	scanf ("%f", &valor);
	
	//calculando o valor de pagamento � vista
	//aVista = valor - (0.1*valor);
	aVista = valor*0.9;
	
	//calculando o valor da parcela (sem juros)
	pSemJuros = valor/5;
	
	//calculando o valor da parcela (com juros)
	//pComJuros = (valor + valor*0.2) /10;  
	pComJuros = (valor*1.2)/10;
	
	//exibindo os resultados
	printf ("Valor do produto: R$ %.2f\n", valor);
	printf ("\tA vista: R$ %.2f\n", aVista);
	printf ("\tParcelamento sem juros: 5 x R$ %.2f\n", pSemJuros);
	printf ("\tParcelamento com juros: 10 x R$ %.2f\n", pComJuros);
}
