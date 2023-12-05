/*
	FAC - 2020/1
	Lista de Exerc�cios VII
	
	Quest�o 02:
	Construir um programa que, dado um n�mero inteiro n fornecido pelo usu�rio, exiba uma 
	sequ�ncia de elementos, distribu�dos em linhas, como nos exemplos a seguir:

	Exemplos:

	N = 7

	1	0	0	0	0	0	0
	2	1	0	0	0	0	0
	3	2	1	0	0	0	0
	4	3	2	1	0	0	0
	5	4	3	2	1	0	0
	6	5	4	3	2	1	0
	7	6	5	4	3	2	1
	
	N = 4
	
	1	0	0	0
	2	1	0	0
	3	2	1	0
	4	3	2	1
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int n, i, j, k;
	
	//leitura do valor de N
	printf ("Entre com um numero inteiro positivo: ");
	scanf ("%d", &n);
	
	//exibindo conforme disposi��o apresentada no enunciado
	for (i=1;i<=n;i++)  //este for controlar� o n�mero de linhas que ser�o exibidas
	{
		//o primeiro for exibir� os elementos de i at� 1
		//Isto �: se estiver na terceira linha, exibir�  3  2  1
		for (j=i;j>=1;j--)
		{
			printf ("%d  ", j);
		}
		
		//este segundo for "completar�" a linha com zeros
		for (k=i+1;k<=n;k++)
		{
			printf ("0  ");
		}

		//pulando para a pr�xima linha		
		printf ("\n");
	}
}
