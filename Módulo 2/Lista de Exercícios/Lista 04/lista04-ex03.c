/*
	FPR - 15/05/2021 (aula extra)
	
	Lista de Exerc�cios VI (strings)
	
	Quest�o 03:
	Desenvolver uma fun��o que, dada uma string s, crie uma substring que inicie 
	na posi��o p de s e contenha n caracteres.

	Observa��es: 
	i. se p e/ou n forem inv�lidos, a substring ser� vazia; 
	ii) se s n�o possuir n caracteres al�m de p, a substring a ser criada come�ar� 
	em p e terminar� no final de s.
	
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

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//prot�tipos das fun��es
void substring (char s[], int p, int n, char subs[]);

//main
void main ()
{
	//declara��o de vari�veis
	char string[20], sub[20];
	
	strcpy (string, "ALGORITMOS");
	
	substring (string, 3, 25, sub);
	
	printf ("\n\nstring: %s\nsub: %s", string, sub);
}

//implementa��o das fun��es
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
