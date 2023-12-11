/********************************************************************************************

	FPR - Manh�
	Professor Leonardo Vianna
	2021/1
	Data: 21/04/2021
	
	Strings + recursividade
	
	Quest�o 5: fazer uma fun��o recursiva que verifique se uma string � um pal�ndromo.
	
*******************************************************************************************/

//defini��o de constantes
#define TRUE 1
#define FALSE 0

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//prot�tipos das fun��es
int palindromo (char string[]);
int palindromo_aux (char string[], int inicio, int fim);

//fun��o main
void main ()
{
	//declara��o de vari�veis
	char s[20];

	//leitura da string
	fflush(stdin);
	printf("Digite uma palavra: ");
	gets(s);
	
	//verificando se � um pal�ndromo
	if (palindromo(s) == 1)
	{
		printf ("\nA string %s e' um palindromo.", s);
	}
	else
	{
		printf ("\nA string %s nao e' um palindromo.", s);
	}
}

//implementa��o das fun��es
int palindromo_aux (char string[], int inicio, int fim)
{
	//caso base 1: � pal�ndromo
	if (inicio >= fim)
	{
		return TRUE;
	}
	else
	{
		//caso base 2: n�o � pal�ndromo
		
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

