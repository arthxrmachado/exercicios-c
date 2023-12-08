/*
QUESTÃO 07: Implementar uma função que, dado um número inteiro n, e o intervalo definido pelos números a e b, determine quantos valores do intervalo possuem
divisores (sendo estes diferentes de 1) que também sejam divisores de n.
   
   Exemplo:
   	    	n = 6  (2 3 6)
		a = 10 e b = 20

	Resposta = 7 (pois os números 10, 12, 14, 15, 16, 18 e 20 
	              possuem divisores em comum com o número 6).

	
	intervalo: 10, 11, 12, 13, 14, 15 ,16 ,17 ,18 ,19 ,20 
	            *      *       *   *   *       *       *
*/

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int verificarDivisores (int n, int a, int b);

//main
void main ()
{	
	int resposta = verificarDivisores (6, 10, 20);
	
	printf ("%d elementos encontrados.\n", resposta);
}

//implementação das funções
int verificarDivisores (int n, int a, int b)
{
	//declaração de variáveis
	int i, j, resp = 0, comuns, aux;
	
	//verificando se o intervalo está crescente
	if (a > b)
	{
		aux = a;
		a = b;
		b = aux;
	}
	
	//varrendo o intervalo
	for (i=a;i<=b;i++)
	{
		//contar o número de divisores comuns entre 'i' e 'n'
		comuns = 0;
		
		//varrendo os possíveis divisores de n
		for (j=2;j<=n;j++)
		{
			//verificando se 'j' é divisor de 'n' e do número do intervalo ('i')
			if ((n%j==0) && (i%j==0))
			{
				comuns++;
			}
		}
		
		//verificando se foi encontrado algum divisor comum
		if (comuns > 0)
		{
			resp++;
		}		
	}
	
	return resp;
}
