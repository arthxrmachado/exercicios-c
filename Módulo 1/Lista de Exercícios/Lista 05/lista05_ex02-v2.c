/* Lista V

   QUEST�O 02: 
   Pede-se o desenvolvimento de um programa que leia n valores e determine o maior e 
   o menor elementos do conjunto fornecido.
   
   vers�o 2: neste, o primeiro dos n valores � lido fora do FOR e este ser� o valor inicial
   das vari�veis menor e maior 
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//Declara��o de vari�veis
	int i, n, numero, maior, menor;

	//leitura do valor de n
	printf ("Entre com a quantidade de valores a serem lidos: ");
	scanf ("%d", &n);
	
	//pulando uma linha
	printf ("\n");
	
	//leitura do primeiro valor (fora do FOR)
	printf ("Entre com um numero: ");
	scanf ("%d", &numero);

	//inicializando maior e menor com o 1� valor lido, ao inv�s de incializar com 
	//n�meros "altos" e "baixos"
	maior = numero;
	menor = numero;
	//ou maior = menor = numero;
		
	//repeti��o para a leitura dos demais n-1 valores
	for (i=2;i<=n;i++)
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
		else
		{
			//verificando se o valor lido � o menor de todos
			if (numero < menor)
			{
				//atualizando o menor
				menor = numero;
			}
		}
	}
	
	//exibindo os resultados
	printf ("\n\nMaior: %d\nMenor: %d", maior, menor);
}
