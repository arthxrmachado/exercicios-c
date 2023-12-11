/********************************************************************************************

	FPR - Manhã
	Professor Leonardo Vianna
	2021/1
	Data: 28/04/2021
	
	Lista de Exercícios VII: Strings + recursividade
	
	Questão 02

*******************************************************************************************/

//importação de bibliotecas
#include <stdio.h>

int funcao (int a, int b) 
{
	if (a > 0) 
	{
		if (a > b) 
		{
			return funcao (a-1, b+2) + funcao (b-a, b);
		} 
		else 
		{
			return funcao (a-2, b);
		}
	} 
	else 
	{
		return b;
	}
}

void main () 
{
	printf ("Resposta = %d", funcao (10, 5));
}
