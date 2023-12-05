/*
QUESTÃO 02: Um fazendeiro realizou um tratamento sobre sua plantação de café que gerou um crescimento constante de C % em sua produção, por ano. 
Considerando que atualmente sua produção anual seja de M u.p., implementar um programa que determine a quantidade de anos necessária para que a produção 
duplique.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int anos = 0;
	float m, c, prod;
	
	//lendo os dados de entrada
	printf ("Entre com a producao anual atual: ");
	scanf ("%f", &m);
	
	printf ("Entre com a taxa de crescimento anual: ");
	scanf ("%f", &c);
	
	prod = m;
	while (prod < 2*m)
	{
		prod += (c/100)*prod;
			
		anos++;
	}
	
	//exibindo o resultado
	printf ("Foram necessarios %d anos para a producao duplicar (%.1f --> %.1f)\n", anos, m, prod);
}
