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
	int i=1, numero, soma = 0, produto = 1;
	char opcao;
	
	do
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
		
		//verificar se o usu�rio deseja continuar
		do
		{
			printf ("Deseja continuar [S/N]? ");
			fflush (stdin);
			scanf ("%c", &opcao);
			opcao = toupper (opcao);
			
			//enviando msg ao usu�rio caso a op��o seja inv�lida
			if ((opcao != 'S') && (opcao != 'N'))
			{
				printf ("\tErro: opcao invalida! Tente novamente.\n");
			}
		}
		while ((opcao != 'S') && (opcao != 'N'));
		
		i++;
	}
	while (opcao == 'S');
	
	//exibindo os resultados
	printf ("\n\nSoma dos pares = %d\n", soma);
	printf ("Produto dos impares = %d\n", produto);	
}
