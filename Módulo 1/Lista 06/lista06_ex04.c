/*
   FAC - Turma B
   
   Lista de Exerc�cios VI
   
   QUEST�O 04: Fa�a um programa que leia um n�mero inteiro N 
   e informe se o mesmo � ou n�o primo.
   
   Nota: um n�mero � dito primo quando for divis�vel apenas 
   por 1 e por ele mesmo.
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int n, i, cont=0;
	
	//lendo o valor de n
	printf ("Entre com um numero: ");
	scanf ("%d", &n);
	
	//contando o n�mero de divisores de n
	for (i=1;i<=n;i++)
	{
		if (n%i==0)
		{
			cont++;
		}
	}
	
	//verificando se n � primo
	if (cont == 2)
	{
		printf ("%d eh primo", n);
	}
	else
	{
		printf ("%d nao eh primo", n);	
	}	
}
