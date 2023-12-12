// QUESTÃO 05: Fazer uma função recursiva que verifique se uma string é um palíndromo.

//definição de constantes
#define TRUE 1
#define FALSE 0

//importação de bibliotecas
#include <stdio.h>
#include <string.h>

//protótipos das funções
int palindromo (char string[], int inicio, int fim);

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
	if (palindromo(s,0,strlen(s)-1) == 1)
	{
		printf ("\nA string %s e' um palindromo.", s);
	}
	else
	{
		printf ("\nA string %s nao e' um palindromo.", s);
	}
}

//implementação das funções
int palindromo (char string[], int inicio, int fim)
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
			return palindromo (string, inicio+1, fim-1);	
		}
	}
}
