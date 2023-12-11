/********************************************************************************************

	FPR - Manhã
	Professor Leonardo Vianna
	2021/1
	Data: 07/04/2021
	
	Lista de Exercícios V - Recursividade
	
	Exercício 2: Desenvolver uma função recursiva que exiba 
	todos os múltiplos do número N, inferiores ao valor V.
		
*******************************************************************************************/

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void multiplos (int n, int v);
void multiplos_aux (int n, int v, int aux);

//função main
void main ()
{
	//declaração de variáveis
	int num, limite;
	
	//leitura dos dados
	printf ("Entre com o valor do qual serao exibidos os multiplos: ");
	scanf ("%d", &num);
	
	printf ("Entre com o limite: ");
	scanf ("%d", &limite);
	
  	multiplos (num, limite);
}

void multiplos (int n, int v)
{
	multiplos_aux (n, v, 0);
}

void multiplos_aux (int n, int v, int aux)
{
	if (aux <= v)   //caso geral
  	{
    	printf("%d ", aux);
    	multiplos_aux (n, v, aux+n);
  	}
}
