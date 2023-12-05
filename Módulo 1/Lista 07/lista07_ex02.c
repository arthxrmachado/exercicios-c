/*
	FAC - 2020/1
	Lista de Exercícios VII
	
	Questão 02:
	Construir um programa que, dado um número inteiro n fornecido pelo usuário, exiba uma 
	sequência de elementos, distribuídos em linhas, como nos exemplos a seguir:

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

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int n, i, j, k;
	
	//leitura do valor de N
	printf ("Entre com um numero inteiro positivo: ");
	scanf ("%d", &n);
	
	//exibindo conforme disposição apresentada no enunciado
	for (i=1;i<=n;i++)  //este for controlará o número de linhas que serão exibidas
	{
		//o primeiro for exibirá os elementos de i até 1
		//Isto é: se estiver na terceira linha, exibirá  3  2  1
		for (j=i;j>=1;j--)
		{
			printf ("%d  ", j);
		}
		
		//este segundo for "completará" a linha com zeros
		for (k=i+1;k<=n;k++)
		{
			printf ("0  ");
		}

		//pulando para a próxima linha		
		printf ("\n");
	}
}
