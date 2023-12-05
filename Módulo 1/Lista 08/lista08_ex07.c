/*
   FAC - Turma B - 2020/1
   Professor Leonardo Vianna
   
   Lista de Exerc�cios VIII (Fun��es):
   
   QUEST�O 07:
   Implementar uma fun��o que, dado um n�mero inteiro n, e o 
   intervalo definido pelos n�meros a e b, determine quantos 
   valores do intervalo possuem divisores (sendo estes diferentes 
   de 1) que tamb�m sejam divisores de n.
   
   Exemplo:
   	    n = 6  (2 3 6)
		a = 10 e b = 20

	Resposta = 7 (pois os n�meros 10, 12, 14, 15, 16, 18 e 20 
	              possuem divisores em comum com o n�mero 6).

	
	intervalo: 10, 11, 12, 13, 14, 15 ,16 ,17 ,18 ,19 ,20 
	            *      *       *   *   *       *       *
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
int verificarDivisores (int n, int a, int b);

//main
void main ()
{	
	int resposta = verificarDivisores (6, 10, 20);
	
	printf ("%d elementos encontrados.\n", resposta);
}

//implementa��o das fun��es
int verificarDivisores (int n, int a, int b)
{
	//declara��o de vari�veis
	int i, j, resp = 0, comuns, aux;
	
	//verificando se o intervalo est� crescente
	if (a > b)
	{
		aux = a;
		a = b;
		b = aux;
	}
	
	//varrendo o intervalo
	for (i=a;i<=b;i++)
	{
		//contar o n�mero de divisores comuns entre 'i' e 'n'
		comuns = 0;
		
		//varrendo os poss�veis divisores de n
		for (j=2;j<=n;j++)
		{
			//verificando se 'j' � divisor de 'n' e do n�mero do intervalo ('i')
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
