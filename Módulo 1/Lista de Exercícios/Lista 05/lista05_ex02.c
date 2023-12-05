/* Lista V

   QUEST�O 02: 
   Pede-se o desenvolvimento de um programa que leia n valores e determine o maior e 
   o menor elementos do conjunto fornecido.
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//Declara��o de vari�veis
	int i, n, numero, 
	    maior = -9999,     //come�ando o maior com um numero muito alto  (embora n�o seja a melhor solu��o)
		menor =  9999;     //come�ando o menor com um numero muito baixo

	//leitura do valor de n
	printf ("Entre com a quantidade de valores a serem lidos: ");
	scanf ("%d", &n);
	
	//pulando uma linha
	printf ("\n");
	
	//repeti��o para a leitura dos n valores
	for (i=1;i<=n;i++)
	{
		//leitura de cada valor
		printf ("Entre com um numero: ");
		scanf ("%d", &numero);
		
		//verificando se o valor lido � o maior de todos
		if (numero > maior)
		{
			//atualizando o maior
			maior = numero;
		}
			
		//verificando se o valor lido � o menor de todos
		if (numero < menor)
		{
			//atualizando o menor
			menor = numero;
		}
	}
	
	//exibindo os resultados
	printf ("\n\nMaior: %d\nMenor: %d", maior, menor);
}
