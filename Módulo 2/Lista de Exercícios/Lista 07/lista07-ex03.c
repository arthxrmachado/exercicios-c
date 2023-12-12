/*

QUESTÃO 03: Desenvolver uma função que, dado um arquivo texto, verifique o número de letras existentes no mesmo (entendendo que no arquivo podem existir 
letras, algarismos e símbolos).
 
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de protótipos
int quantidadeLetras (char nomeArq[]);

//main
void main ()
{
	printf ("Quantidade de caracteres: %d\n", quantidadeLetras ("teste.txt"));
}

//implementação das funções
int quantidadeLetras (char nomeArq[])
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
			if ((toupper(ch) >= 'A') && (toupper(ch) <= 'Z'))
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
