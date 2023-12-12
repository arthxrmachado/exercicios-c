/*

QUESTÃO 01: Suponha que não existissem as funções strlen, strcpy, strcat e strcmp. Pede-se, então, a implementação de funções que tenham o mesmo 
objetivo daquelas.	
	
*/

//importação de bibliotecas
#include <stdio.h>
#include <string.h>

//protótipos das funções
int tamanho (char s[]);
void copiar (char s1[], char s2[]);
void concatenar (char s1[], char s2[]);
int comparar (char s1[], char s2[]);

//função main
void main ()
{
	//declaração de variáveis
	char s1[20], s2[20], s3[20];
	int retorno;
	
	//leitura de uma string
/*	fflush (stdin);
	printf ("Entre com uma palavra: ");
	gets (s2);
	
	//exibindo a string lida
	printf ("\nString lida: %s", s2);
	
	//testando a função copiar
	copiar (s1, s2);
	
	//exibindo a string s1
	printf ("\ns1: %s", s1);
	
	//testando a concatenação
	copiar (s3, "TESTE");
	concatenar (s3, s1);
	
	//exibindo a string s3
	printf ("\ns3: %s", s3);
	
	//comparando as strings
	retorno = comparar (s2,s3);
	
	if (retorno == 0)
	{
		printf ("\nAs strings %s e %s sao iguais!\n", s2, s3);
	}
	else
	{
		printf ("\nAs strings %s e %s nao sao iguais!\n", s2, s3);
	}*/
	
	copiar (s1, "CADERNO");
	copiar (s2, "CASA");
	copiar (s3, "CASARAO");

	printf ("Comparando %s e %s: %d\n", s3, s1, comparar(s3,s1));
	printf ("Comparando %s e %s: %d\n", s2, s3, comparar(s2,s3));
	printf ("Comparando %s e %s: %d\n", s2, s2, comparar(s2,s2));		
}

//implementação das funções
int tamanho (char s[])
{
	//declaração de variáveis
	int i;
	
	//percorrendo os caracteres da string
	for (i=0;s[i]!='\0';i++);
	
	//retornando o resultado
	return i;
}

void copiar (char s1[], char s2[])
{
	//declaração de variáveis
	int i;
	
	//percorrendo os caracteres da segunda string e copiando-os para a primeira
	for (i=0;s2[i]!='\0';i++)
	{	
		s1[i]=s2[i];
	}
	
	s1[i] = '\0';
}

void concatenar (char s1[], char s2[])
{
	//declaração de variáveis
	int i1, i2 ;
	
	//fazendo a concatenação
	for (i1=tamanho(s1), i2=0; s2[i2] != '\0'; i1++, i2++)
	{
		s1[i1] = s2[i2];
	}
	
	//finalizando a string
	s1[i1] = '\0';
}

/*s1: ABCDEXYZ
            i1
s2: XYZ
       i2
*/

int comparar (char s1[], char s2[])
{
	//declaração de variáveis
	int i;
	
	//percorrendo as strings até chegar ao final de uma delas
	//for (i=0;(s1[i] != '\0')&&(s2[i] != '\0');i++)
	for (i=0;s1[i] && s2[i];i++)
	{
		//verificando se, alfabeticamente, s1 está antes de s2
		if (s1[i] < s2[i])
		{
			return -1;
		}
		else
		{
			//verificando se, alfabeticamente, s2 está antes de s1
			if (s1[i] > s2[i])
			{
				return 1;
			}
		}
	}
	
	//se chegou até aqui, é pq todos os caracteres são iguais
	//if ((s1[i] == '\0') && (s2[i] == '\0'))
	//if (!s1[i] && !s2[i])
	if (s1[i] == s2[i])
	{
		return 0;
	}
	else
	{
		if (s1[i] < s2[i])
		{
			return -1;
		}
		else
		{
			if (s1[i] > s2[i])
			{
				return 1;
			}
		}
	}
}
