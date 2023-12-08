/*
QUESTÃO 03: Desenvolver uma função que calcule o n-ésimo termo da sequência de Fibonacci.

Fibonacci: 1 1 2 3 5 8 13 21...
*/

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int fibonacci (int n);

//main
void main ()
{	
	//declaração de variáveis
	int ordem;
		
	//lendo a ordem do elemento desejado
	/*printf ("Entre com a ordem do elemento desejado da sequencia de Fibonacci: ");
	scanf ("%d", &ordem);
	
	printf ("%do. Fibonacci: %d\n", ordem, fibonacci (ordem));*/
	
	printf ("Fibonacci: ");
	for (ordem=1;ordem<=20;ordem++)
	{
		printf ("%d ", fibonacci(ordem));
	}
}

//implementação das funções
int fibonacci (int n)
{
	//declaração de variáveis
	int ultimo, penultimo, termo, i;
	
	//if ((n == 1) || (n == 2))
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		ultimo = 1;
		penultimo = 1;
		
		for (i=3;i<=n;i++)
		{
			termo = ultimo + penultimo;
		    penultimo = ultimo;
		    ultimo = termo;
		}
		
		return termo;
	}
}
