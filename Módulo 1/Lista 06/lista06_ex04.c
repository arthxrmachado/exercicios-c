/*
   FAC - Turma B
   
   Lista de Exercícios VI
   
   QUESTÃO 04: Faça um programa que leia um número inteiro N 
   e informe se o mesmo é ou não primo.
   
   Nota: um número é dito primo quando for divisível apenas 
   por 1 e por ele mesmo.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int n, i, cont=0;
	
	//lendo o valor de n
	printf ("Entre com um numero: ");
	scanf ("%d", &n);
	
	//contando o número de divisores de n
	for (i=1;i<=n;i++)
	{
		if (n%i==0)
		{
			cont++;
		}
	}
	
	//verificando se n é primo
	if (cont == 2)
	{
		printf ("%d eh primo", n);
	}
	else
	{
		printf ("%d nao eh primo", n);	
	}	
}
