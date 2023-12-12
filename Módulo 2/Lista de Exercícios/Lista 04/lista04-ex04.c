// QUESTÃO 04: Fazer uma função que inverta uma string.

//importação de bibliotecas
#include <stdio.h>
#include <string.h>

//declaração de constantes

//protótipos das funções

void inverterString (char string[]);

//função main

void main ()
{
	
	//declaração de variáveis
	
	char s[20];
	
	
	//leitura de string
	
	fflush (stdin);
	printf(" Digite uma palavra: ");
	gets(s);
	
	//exibindo antes da inversão
	
	printf("\n Antes da inversao %s\n" , s);
	
	//chamando a função
	
	inverterString(s);
	
	//exibindo depois da inversão
	
	printf("\n Depois da inversao %s\n", s);
	
	
}

//implementação das funções

void inverterString (char string[]){
	
	//declaração variáveis
		
	int i, j;
	char aux;
	
	//varrendo a string para fazer a inversão
	
	for (i=0, j=strlen(string)-1; i<j; i++, j--)
	
	{
		
		//trocar de posição os caracteres das posições i e j
		
		aux = string[i];
		string[i] = string[j];
		string[j]=aux;
		
	}
	
}
