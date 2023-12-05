/*
   FAC - Turma B - 2020/1
   Professor Leonardo Vianna
   
   Lista de Exerc�cios VIII (Fun��es):
   
   QUEST�O 08:
   Desenvolver uma fun��o que exiba todos os n�meros primos 
   inferiores a determinado valor inteiro N.

*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
void exibirPrimos (int n);

//main
void main ()
{	
	//declara��o de vari�veis
	int numero;
	
	//lendo o valor de entrada
	printf ("Entre com um numero: ");
	scanf ("%d", &numero);
	
	//chamando a fun��o
	exibirPrimos (numero);
}

//implementa��o das fun��es
void exibirPrimos (int n)
{
	//declara��o de vari�veis
	int i, j, cont;
	
	//varrendo os n�meros de 2 a t� n (excluindo o 1, pois n�o � primo)
	for (i=2;i<=n;i++)
	{
		cont = 0;
		
		//contando o n�mero de divisores de 'i'
		for (j=1;j<=i;j++)
		{
			if (i%j==0)
			{
				cont++;
			}
		}
		
		//verificando se � primo
		if (cont == 2)
		{
			printf ("%d ", i);
		}
	}
}
