/* Lista V

   QUESTÃO 02: 
   Pede-se o desenvolvimento de um programa que leia n valores e determine o maior e 
   o menor elementos do conjunto fornecido.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//Declaração de variáveis
	int i, n, numero, 
	    maior = -9999,     //começando o maior com um numero muito alto  (embora não seja a melhor solução)
		menor =  9999;     //começando o menor com um numero muito baixo

	//leitura do valor de n
	printf ("Entre com a quantidade de valores a serem lidos: ");
	scanf ("%d", &n);
	
	//pulando uma linha
	printf ("\n");
	
	//repetição para a leitura dos n valores
	for (i=1;i<=n;i++)
	{
		//leitura de cada valor
		printf ("Entre com um numero: ");
		scanf ("%d", &numero);
		
		//verificando se o valor lido é o maior de todos
		if (numero > maior)
		{
			//atualizando o maior
			maior = numero;
		}
			
		//verificando se o valor lido é o menor de todos
		if (numero < menor)
		{
			//atualizando o menor
			menor = numero;
		}
	}
	
	//exibindo os resultados
	printf ("\n\nMaior: %d\nMenor: %d", maior, menor);
}
