/*
	FPR - Fundamentos de Programa��o
	2021/1 - Manh�
	Data: 02/06/2021
	
	Lista de Exerc�cios IX (Arquivos):
	
	Quest�o 02:
	Desenvolver uma fun��o que, dado um arquivo texto, verifique o n�mero de vezes 
	que um determinado caracter aparece no arquivo.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de prot�tipos
int quantidadeCaracteres (char nomeArq[], char caracter);

//main
void main ()
{
	printf ("Quantidade de caracteres: %d\n", quantidadeCaracteres ("teste.txt", 'F'));
}

//implementa��o das fun��es
int quantidadeCaracteres (char nomeArq[], char caracter)
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
			if (ch == caracter)
			{
				cont++;	
			}
		}	
		
		//fechando o arquivo
		fclose (arquivo);
		
		//retornando a quantidade de caracteres do arquivo
		return cont;		
	}	
}
