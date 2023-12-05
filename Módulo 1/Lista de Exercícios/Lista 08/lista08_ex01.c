/*
   FAC - Turma B - 2020/1
   Professor Leonardo Vianna
   
   Lista de Exercícios VIII (Funções):
   
   QUESTÃO 01:
   Desenvolver uma função que exiba os múltiplos de N 
   compreendidos no intervalo definido por A e B.
*/

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void exibirMultiplos (int n, int a, int b);

//main
void main ()
{	
	exibirMultiplos (3, 10, 50);
}

//implementação das funções
void exibirMultiplos (int n, int a, int b)
{
	//declaração de variáveis	
	int i, aux;
	
	//verificando se a < b. Se não for, trocar seus conteúdos
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
