/*
QUESTÃO 04: Pede-se a implementação de uma função recursiva que exiba os n primeiros termos de uma PG (Progressão Geométrica), onde 'A1' é o seu primeiro 
termo e 'Q' a razão.

Observação: uma PG consiste em uma sequência de valores, iniciadas pelo valor a1. Os demais elementos são definidos como o anterior multiplicado pela razão.
	
Exemplo:
	
a1 = 10   n = 5   q = 3

PG: 10  30  90  270  810
		
*******************************************************************************************/

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void PG (int a1, int n, int q);

//função main
void main ()
{
	//declaração de variáveis
	int termo1, razao, quant;
	
	//leitura dos dados
	printf ("1o. termo da PG: ");
	scanf ("%d", &termo1);
	
	printf ("Razao da PG: ");
	scanf ("%d", &razao);
	
	printf ("Quantidade de elementos: ");
	scanf ("%d", &quant);
	
	//chamando a função	
  	PG (termo1, quant, razao);
}

//implementação das funções
void PG (int a1, int n, int q)
{
	if (n > 0)
	{
		printf ("%d ", a1);
		PG (a1*q,n-1,q);
	}
}
