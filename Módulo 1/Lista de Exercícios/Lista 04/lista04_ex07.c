/*
QUESTÃO 07: Desenvolver um programa no qual o usuário entre com vários números inteiros e positivos e imprima o produto dos números ímpares e a soma dos 
números pares. 
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int i, n, numero, soma = 0, produto = 1;
	
	//perguntando a quantidade de números que serão fornecidos
	printf ("Entre com a quantidade de numeros: ");
	scanf ("%d", &n);
	
	//lendo os N valores
	for (i=1;i<=n;i++)
	{
		do
		{
			printf ("%do. numero: ", i);
			scanf ("%d", &numero);
			
			//enviando msg ao usuário caso o numero não seja positivo
			if (numero <= 0)
			{
				printf ("\tErro: numero invalido! Tente novamente um valor positivo.\n");
			}
		}
		while (numero <= 0);
		
		//verificando se o número é par
		if (numero % 2 == 0)
		{
			soma = soma + numero;  //soma += numero;
		}
		else  //é ímpar
		{
			produto = produto * numero;  //produto *= numero;
		}
	}
	
	//exibindo os resultados
	printf ("\n\nSoma dos pares = %d\n", soma);
	printf ("Produto dos impares = %d\n", produto);	
}
