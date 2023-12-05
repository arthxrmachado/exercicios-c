/*
   FAC - Turma B
   Professor Leonardo Vianna
   Data: 19/11/2020
   
   Lista de Exercícios X
   
   QUESTÃO 09:
   Implementar a função de inserção de determinado elemento em um 
   vetor ordenado crescentemente (dica: utilizar a função do item 
   08 para auxiliar).
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define CAP 5

#define TRUE 1
#define FALSE 0

//protótipos das funções
void exibirVetor (float v[], int tamanho);
int buscar (float v[], int quantidade, float numero);
int inserir (float v[], int *quantidade, int capacidade, float numero);

//main
void main()
{
	//declaração de variáveis
	float vetor[CAP];
	float num;
	int retorno, quant=0;
	char resp;
	
	do
	{
	    //exibindo o vetor antes da busca
		exibirVetor (vetor, quant);	
		
		//obtendo o número a ser inserido
		printf ("\nEntre com o numero a ser inserido: ");
		scanf ("%f", &num);
		
		//chamando a função inserir
		retorno = inserir (vetor, &quant, CAP, num);
		
		//testando o retorno
		if (retorno == TRUE)
		{
			printf ("\n\nO valor %.1f foi inserido com sucesso!\n", num);
		}
		else
		{
			printf ("\n\nERRO: não ha mais espaco para insercao!\n");
		}
		
		//verificando se o usuário deseja continuar
		printf ("\nDeseja continuar [S/N]? ");
		fflush (stdin);
		scanf ("%c", &resp);
		resp = toupper(resp);		
	}
	while (resp == 'S');
}

//implementação das funções

//exibe na tela os elementos de um vetor com 'tamanho' elementos
void exibirVetor (float v[], int tamanho)
{
	//declaração de variáveis
	int i;	
	
	//verirficando se o vetor está vazio
	if (tamanho == 0)
	{
		printf ("\nNenhum elemento no vetor!\n");
	}
	else
	{	
		printf ("\n\nVetor: ");
		
		for (i=0;i<tamanho;i++)
		{
			printf ("%.1f ", v[i]);
		}
		
		printf ("\n\n");
	}
}

int buscar (float v[], int quantidade, float numero)
{
	//declaração de variáveis;
	int i;
	
	//varrendo o vetor em busca do elemento
	for (i=0;i<quantidade;i++)
	{
		//verificando se o elemento foi encontrado
		/*if (v[i] == numero)
		{
			return i;
		}
		else
		{
			if (v[i] > numero)
			{
				return i;
			}
		}*/
		
		if (v[i] >= numero)
		{
			return i;
		}
	}
	
	//retornando a posição, caso o número seja maior do que todos no vetor
	return quantidade; //ou return i;
}

int inserir (float v[], int *quantidade, int capacidade, float numero)
{	
	//declaração de variáveis
	int i, posicao;

	//verificando se o vetor está cheio
	if (*quantidade == capacidade)
	{
		return FALSE;
	}	
	else
	{
		//verificando a posição na qual o número deve ser inserido
		posicao = buscar (v, *quantidade, numero);
		
		//deslocando para a direita os elementos que estão nas posições 'pos' ao final
		for (i=(*quantidade)-1;i>=posicao;i--)
		{
			v[i+1] = v[i];
		}
		
		//inserindo o número em 'posicao'
		v[posicao] = numero;
		
		//atualizando a quantidade de elementos no vetor
		(*quantidade)++;
		
		return TRUE;
	}
}
