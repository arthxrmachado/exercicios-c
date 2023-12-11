/******************************************************************************
	FAETERJ-Rio
	
	2FPR - Manh� - 2021/1
	
	Aluno: Arthur Louren�o Machado
	
	Data: 21/04/2021   -   Strings
	
	Exerc�cio 4:
	
	Fazer uma fun��o que inverta uma string.

******************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//declara��o de constantes

//prot�tipos das fun��es

void inverterString (char string[]);

//fun��o main

void main ()
{
	
	//declara��o de vari�veis
	
	char s[20];
	
	
	//leitura de string
	
	fflush (stdin);
	printf(" Digite uma palavra: ");
	gets(s);
	
	//exibindo antes da invers�o
	
	printf("\n Antes da inversao %s\n" , s);
	
	//chamando a fun��o
	
	inverterString(s);
	
	//exibindo depois da invers�o
	
	printf("\n Depois da inversao %s\n", s);
	
	
}

//implementa��o das fun��es

void inverterString (char string[]){
	
	//declara��o vari�veis
		
	int i, j;
	char aux;
	
	//varrendo a string para fazer a invers�o
	
	for (i=0, j=strlen(string)-1; i<j; i++, j--)
	
	{
		
		//trocar de posi��o os caracteres das posi��es i e j
		
		aux = string[i];
		string[i] = string[j];
		string[j]=aux;
		
	}
	
}
