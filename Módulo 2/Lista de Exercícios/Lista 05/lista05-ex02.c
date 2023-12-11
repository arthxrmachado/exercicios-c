/********************************************************************************************

	FPR - Manh�
	Professor Leonardo Vianna
	2021/1
	Data: 28/04/2021
	
	Lista de Exerc�cios VII: Strings + recursividade
	
	Quest�o 02

*******************************************************************************************/

//importa��o de bibliotecas
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
