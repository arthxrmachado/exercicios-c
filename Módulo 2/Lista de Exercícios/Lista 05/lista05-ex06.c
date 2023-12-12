/*

QUESTÃO 06: Implementar uma função recursiva que, dados uma string str e um caracter ch, remova de str todas as ocorrências de ch, retornando o total de
remoções realizadas.

*/

//importação de bibliotecas
#include <stdio.h>
#include <string.h>

//protótipos das funções
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

//implementação das funções

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
			//deslocar para a esquerda os caracteres da posição 'pos' em diante
			deslocarCaracteres (s, pos);
			
    		return 1 + removerCaracteres (s, ch, pos);
		}
		else
		{
			return removerCaracteres (s, ch, pos+1);
		}		
	}
}
