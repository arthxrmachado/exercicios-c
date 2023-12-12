// QUESTÃO 04: Desenvolver uma função que, dado um arquivo texto contendo números, determine se estes encontram-se ordenados crescentemente.

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define TRUE 1
#define FALSE 0

//declaração de protótipos
int verificaOrdenacao (char nomeArq[]);

//main
void main ()
{
	printf ("Resultado: %d\n", verificaOrdenacao ("teste.txt"));
}

//implementação das funções
int verificaOrdenacao (char nomeArq[])
{
	//declaração de variáveis
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
		
		//lendo os demais, até chegar ao final do arquivo
		while (fscanf (arquivo, "%f", &atual) != EOF)
		{
			//comparando o número que acabou de ler com o anterior
			if (atual < anterior)
			{
				//não esquecer de fechar o arquivo, mesmo quando concluir que ele não está ordenado
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
		
		//retornando TRUE para dizer que o arquivo está ordenado
		return TRUE;
	}	
}
