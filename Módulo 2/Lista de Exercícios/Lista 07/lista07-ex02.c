/*
	FPR - Fundamentos de Programação
	2021/1 - Manhã
	Data: 02/06/2021
	
	Lista de Exercícios IX (Arquivos):
	
	Questão 02:
	Desenvolver uma função que, dado um arquivo texto, verifique o número de vezes 
	que um determinado caracter aparece no arquivo.
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de protótipos
int quantidadeCaracteres (char nomeArq[], char caracter);

//main
void main ()
{
	printf ("Quantidade de caracteres: %d\n", quantidadeCaracteres ("teste.txt", 'F'));
}

//implementação das funções
int quantidadeCaracteres (char nomeArq[], char caracter)
{
	//declaração de variáveis
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
		//ler caracteres do arquivo até chegar ao seu final
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
