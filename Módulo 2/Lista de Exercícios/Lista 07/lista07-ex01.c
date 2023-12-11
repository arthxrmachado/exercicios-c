/*
	FPR - Fundamentos de Programa��o
	2021/1 - Manh�
	Data: 02/06/2021
	
	Lista de Exerc�cios IX (Arquivos):
	
	Quest�o 01:
	Desenvolver uma fun��o que, dado um arquivo texto, verifique o n�mero de caracteres 
	no mesmo.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de prot�tipos
int quantidadeCaracteres (char nomeArq[]);

//main
void main ()
{
	printf ("Quantidade de caracteres: %d\n", quantidadeCaracteres ("teste.txt"));
}

//implementa��o das fun��es
int quantidadeCaracteres (char nomeArq[])
{
	//declara��o de vari�veis
	FILE *arquivo;
	int cont = 0;
	char ch;
	
	//abrindo o arquivo
	arquivo = fopen (nomeArq, "r"); //r - read
	
	//testando se o houve erro na abertura do arquivo
	if (arquivo == NULL)   //if (!arquivo)
	{
		return -1; //sinalizando que houve erro na abertura
	}
	else
	{
		//ler caracteres do arquivo at� chegar ao seu final
		while (fscanf (arquivo, "%c", &ch) != EOF)
		{
			cont++;	
		}	
		
		//fechando o arquivo
		fclose (arquivo);
		
		//retornando a quantidade de caracteres do arquivo
		return cont;		
	}	
}
