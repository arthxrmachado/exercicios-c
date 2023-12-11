/********************************************************************************************

	FPR - Manh�
	Professor Leonardo Vianna
	2021/1
	Data: 07/04/2021
	
	Lista de Exerc�cios V - Recursividade
	
	Exerc�cio 04: Pede-se a implementa��o de uma fun��o recursiva 
	que exiba os n primeiros termos de uma PG (Progress�o Geom�trica),
	onde a1 � o seu primeiro termo e q a raz�o.

	Observa��o: uma PG consiste em uma sequ�ncia de valores, 
	iniciadas pelo valor a1. Os demais elementos s�o definidos 
	como o anterior multiplicado pela raz�o.
	
	Exemplo:
	
		a1 = 10   n = 5   q = 3
		PG: 10  30  90  270  810
		
*******************************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
void PG (int a1, int n, int q);

//fun��o main
void main ()
{
	//declara��o de vari�veis
	int termo1, razao, quant;
	
	//leitura dos dados
	printf ("1o. termo da PG: ");
	scanf ("%d", &termo1);
	
	printf ("Razao da PG: ");
	scanf ("%d", &razao);
	
	printf ("Quantidade de elementos: ");
	scanf ("%d", &quant);
	
	//chamando a fun��o	
  	PG (termo1, quant, razao);
}

//implementa��o das fun��es
void PG (int a1, int n, int q)
{
	if (n > 0)
	{
		printf ("%d ", a1);
		PG (a1*q,n-1,q);
	}
}
