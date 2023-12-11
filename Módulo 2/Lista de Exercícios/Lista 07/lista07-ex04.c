/*
	FPR - Fundamentos de Programa��o
	2021/1 - Manh�
	Data: 02/06/2021
	
	Lista de Exerc�cios IX (Arquivos):
	
	Quest�o 04:
	Desenvolver uma fun��o que, dado um arquivo texto contendo n�meros, determine se 
	estes encontram-se ordenados crescentemente.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define TRUE 1
#define FALSE 0

//declara��o de prot�tipos
int verificaOrdenacao (char nomeArq[]);

//main
void main ()
{
	printf ("Resultado: %d\n", verificaOrdenacao ("teste.txt"));
}

//implementa��o das fun��es
int verificaOrdenacao (char nomeArq[])
{
	//declara��o de vari�veis
	FILE *arquivo;
	float anterior, atual;
	
	//abrindo o arquivo
	arquivo = fopen (nomeArq, "r"); //r - read
	
	//testando se o houve erro na abertura do arquivo
	if (arquivo == NULL)   //if (!arquivo)
	{
		return -1; //sinalizando que houve erro na abertura
	}
	else
	{
		//lendo o primeiro valor do arquivo
		fscanf (arquivo, "%f", &anterior);
		
		//lendo os demais, at� chegar ao final do arquivo
		while (fscanf (arquivo, "%f", &atual) != EOF)
		{
			//comparando o n�mero que acabou de ler com o anterior
			if (atual < anterior)
			{
				//n�o esquecer de fechar o arquivo, mesmo quando concluir que ele n�o est� ordenado
				fclose (arquivo);
				
				return FALSE;
			}
			else
			{
				//atualizando o valor 'anterior'
				anterior = atual;
			}
		}
		
		//fechando o arquivo
		fclose (arquivo);
		
		//retornando TRUE para dizer que o arquivo est� ordenado
		return TRUE;
	}	
}
