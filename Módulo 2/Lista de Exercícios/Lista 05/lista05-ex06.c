/*
	FPR - 15/05/2021 (aula extra)
	
	Lista de Exerc�cios VII (strings + recursividade)
	
	Quest�o 06:
	Implementar uma fun��o recursiva que, dados uma string str e um caracter ch, 
	remova de str todas as ocorr�ncias de ch, retornando o total de remo��es realizadas.
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//prot�tipos das fun��es
int removerCaracteres (char s[], char ch, int pos);
void deslocarCaracteres (char s[], int pos);

//main
void main ()
{
	char str[20];
	
	strcpy (str, "ALGORITMOS");
	
	int quant = removerCaracteres (str, 'O', 0);
	
	printf ("String apos a remocao: %s\nQuantidade de remocoes: %d", str, quant);
}

//implementa��o das fun��es

void deslocarCaracteres (char s[], int pos)
{
	int i;
	
	for (i=pos; s[i] != '\0'; i++)
	{
		s[i] = s[i+1];
	}
	
	s[i-1] = '\0';
}


int removerCaracteres (char s[], char ch, int pos)
{
	if (s[pos] != '\0')
	{
		if (s[pos] == ch)
		{
			//deslocar para a esquerda os caracteres da posi��o 'pos' em diante
			deslocarCaracteres (s, pos);
			
    		return 1 + removerCaracteres (s, ch, pos);
		}
		else
		{
			return removerCaracteres (s, ch, pos+1);
		}		
	}
}
