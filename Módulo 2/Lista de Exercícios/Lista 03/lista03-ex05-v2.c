/********************************************************************************************

	FPR - Manhã
	Professor Leonardo Vianna
	2021/1
	Data: 21/04/2021
	
	Strings + recursividade
	
	Questão 5: fazer uma função recursiva que verifique se uma string é um palíndromo.
	
*******************************************************************************************/

//definição de constantes
#define TRUE 1
#define FALSE 0

//importação de bibliotecas
#include <stdio.h>
#include <string.h>

//protótipos das funções
int palindromo (char string[]);
int palindromo_aux (char string[], int inicio, int fim);

//função main
void main ()
{
	//declaração de variáveis
	char s[20];

	//leitura da string
	fflush(stdin);
	printf("Digite uma palavra: ");
	gets(s);
	
	//verificando se é um palíndromo
	if (palindromo(s) == 1)
	{
		printf ("\nA string %s e' um palindromo.", s);
	}
	else
	{
		printf ("\nA string %s nao e' um palindromo.", s);
	}
}

//implementação das funções
int palindromo_aux (char string[], int inicio, int fim)
{
	//caso base 1: é palíndromo
	if (inicio >= fim)
	{
		return TRUE;
	}
	else
	{
		//caso base 2: não é palíndromo
		
		//printf ("Comparando %c com %c\n",string[inicio], string[fim]);
		if (string[inicio] != string[fim])
		{
			return FALSE;
		}
		else
		{
			return palindromo_aux (string, inicio+1, fim-1);	
		}
	}
}

int palindromo (char string[])
{
	return palindromo_aux (string,0,strlen(string)-1);
}

