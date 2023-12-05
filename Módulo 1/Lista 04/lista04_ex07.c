/*
   FAC - Turma B
   Data: 17/09/2020
   
   QUEST�O 07:
   
   Desenvolver um programa no qual o usu�rio entre com v�rios n�meros inteiros e 
   positivos e imprima o produto dos n�meros �mpares e a soma dos n�meros pares. 
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int i, n, numero, soma = 0, produto = 1;
	
	//perguntando a quantidade de n�meros que ser�o fornecidos
	printf ("Entre com a quantidade de numeros: ");
	scanf ("%d", &n);
	
	//lendo os N valores
	for (i=1;i<=n;i++)
	{
		do
		{
			printf ("%do. numero: ", i);
			scanf ("%d", &numero);
			
			//enviando msg ao usu�rio caso o numero n�o seja positivo
			if (numero <= 0)
			{
				printf ("\tErro: numero invalido! Tente novamente um valor positivo.\n");
			}
		}
		while (numero <= 0);
		
		//verificando se o n�mero � par
		if (numero % 2 == 0)
		{
			soma = soma + numero;  //soma += numero;
		}
		else  //� �mpar
		{
			produto = produto * numero;  //produto *= numero;
		}
	}
	
	//exibindo os resultados
	printf ("\n\nSoma dos pares = %d\n", soma);
	printf ("Produto dos impares = %d\n", produto);	
}
