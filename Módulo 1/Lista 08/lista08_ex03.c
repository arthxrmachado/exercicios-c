/*
   FAC - Turma B - 2020/1
   Professor Leonardo Vianna
   
   Lista de Exerc�cios VIII (Fun��es):
   
   QUEST�O 03:
   Desenvolver uma fun��o que calcule o n-�simo termo da 
   sequ�ncia de Fibonacci.
   
   						________
   					-->	|      | -->
   					-->	|______|
					   
	Fibonacci: 1 1 2 3 5 8 13 21 ...
	                          *
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
int fibonacci (int n);

//main
void main ()
{	
	//declara��o de vari�veis
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

//implementa��o das fun��es
int fibonacci (int n)
{
	//declara��o de vari�veis
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
//        T 
//1 1 2 3 5 8 13 21 ...
//    P U 
