/********************************************************************************************

	FPR - Manh�
	Professor Leonardo Vianna
	2021/1
	Data: 28/04/2021
	
	Lista de Exerc�cios VII: Strings + recursividade
	
	Quest�o 04: Desenvolver uma fun��o recursiva que, dada uma string, exiba-a 
	invertida.

*******************************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//prot�tipos das fun��es
void exibir_aux (char *s, int pos);
void exibir (char *s);

void main () 
{
	exibir ("Clareou mais um pouco");
}

void exibir_aux (char *s, int pos)
{
	if (pos >= 0)
	{
		printf ("%c", s[pos]);
		exibir_aux (s, pos-1);
	}
}

void exibir (char *s)
{
	exibir_aux (s, strlen(s)-1);
}
