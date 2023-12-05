/*
   FAC - Turma B - 2020/1
   Professor Leonardo Vianna
   
   Lista de Exercícios VIII (Funções):
   
   QUESTÃO 08:
   Desenvolver uma função que exiba todos os números primos 
   inferiores a determinado valor inteiro N.

*/

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void exibirPrimos (int n);

//main
void main ()
{	
	//declaração de variáveis
	int numero;
	
	//lendo o valor de entrada
	printf ("Entre com um numero: ");
	scanf ("%d", &numero);
	
	//chamando a função
	exibirPrimos (numero);
}

//implementação das funções
void exibirPrimos (int n)
{
	//declaração de variáveis
	int i, j, cont;
	
	//varrendo os números de 2 a té n (excluindo o 1, pois não é primo)
	for (i=2;i<=n;i++)
	{
		cont = 0;
		
		//contando o número de divisores de 'i'
		for (j=1;j<=i;j++)
		{
			if (i%j==0)
			{
				cont++;
			}
		}
		
		//verificando se é primo
		if (cont == 2)
		{
			printf ("%d ", i);
		}
	}
}
