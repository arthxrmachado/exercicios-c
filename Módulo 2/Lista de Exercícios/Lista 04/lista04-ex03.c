/*
	FPR - 15/05/2021 (aula extra)
	
	Lista de Exercícios VI (strings)
	
	Questão 03:
	Desenvolver uma função que, dada uma string s, crie uma substring que inicie 
	na posição p de s e contenha n caracteres.

	Observações: 
	i. se p e/ou n forem inválidos, a substring será vazia; 
	ii) se s não possuir n caracteres além de p, a substring a ser criada começará 
	em p e terminará no final de s.
	
	Exemplos:
	
	1)    s = "A L G O R I T M O S"
	           0 1 2 3 4 5 6 7 8 9
			      
	      p = 3
	      n = 4
	      
	      substring: "ORIT"
	
	2)    s = "A L G O R I T M O S"
	           0 1 2 3 4 5 6 7 8 9
			      
	      p = -5     5        20
	      n = 4      -1       3
	      
	      substring: ""

	3)    s = "A L G O R I T M O S"
	           0 1 2 3 4 5 6 7 8 9
			      
	      p = 5
	      n = 15
	      
	      substring: "ITMOS"	
*/

//importação de bibliotecas
#include <stdio.h>
#include <string.h>

//protótipos das funções
void substring (char s[], int p, int n, char subs[]);

//main
void main ()
{
	//declaração de variáveis
	char string[20], sub[20];
	
	strcpy (string, "ALGORITMOS");
	
	substring (string, 3, 25, sub);
	
	printf ("\n\nstring: %s\nsub: %s", string, sub);
}

//implementação das funções
void substring (char s[], int p, int n, char subs[])
{
	int i, j;
	/*
		s: "A L G O R I T M O S"
	        0 1 2 3 4 5 6 7 8 9
		
		p = 3   n =5
	*/
	
	//validando os valores de p e n
	if ((p<0) || (p >= strlen(s)) || (n<=0))// || (n > strlen(s)))
	{
		subs[0] = '\0';
		//strcpy (subs, "");
	}
	else
	{		
		for (i=p,j=0; s[i] && (j<n); i++,j++)
		{
			subs[j] = s[i];
		}
		
		subs[j] = '\0';
	}
}
