/*
   FAC - Turma B - 2020/1
   Professor Leonardo Vianna
   
   Lista de Exerc�cios VIII (Fun��es):
   
   QUEST�O 01:
   Desenvolver uma fun��o que exiba os m�ltiplos de N 
   compreendidos no intervalo definido por A e B.
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
void exibirMultiplos (int n, int a, int b);

//main
void main ()
{	
	exibirMultiplos (3, 10, 50);
}

//implementa��o das fun��es
void exibirMultiplos (int n, int a, int b)
{
	//declara��o de vari�veis	
	int i, aux;
	
	//verificando se a < b. Se n�o for, trocar seus conte�dos
	if (a > b)
	{
		aux = a;
		a = b;
		b = aux;
	}
	
	//varrendo o intervalo de 'a' a 'b'
	for (i=a;i<=b;i++)
	{
		if (i%n==0)
		{
			printf ("%d ", i);
		}
	}
}
