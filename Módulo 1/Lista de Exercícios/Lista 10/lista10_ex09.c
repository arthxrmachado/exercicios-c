/*
   FAC - Turma B
   Professor Leonardo Vianna
   Data: 19/11/2020
   
   Lista de Exerc�cios X
   
   QUEST�O 09:
   Implementar a fun��o de inser��o de determinado elemento em um 
   vetor ordenado crescentemente (dica: utilizar a fun��o do item 
   08 para auxiliar).
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define CAP 5

#define TRUE 1
#define FALSE 0

//prot�tipos das fun��es
void exibirVetor (float v[], int tamanho);
int buscar (float v[], int quantidade, float numero);
int inserir (float v[], int *quantidade, int capacidade, float numero);

//main
void main()
{
	//declara��o de vari�veis
	float vetor[CAP];
	float num;
	int retorno, quant=0;
	char resp;
	
	do
	{
	    //exibindo o vetor antes da busca
		exibirVetor (vetor, quant);	
		
		//obtendo o n�mero a ser inserido
		printf ("\nEntre com o numero a ser inserido: ");
		scanf ("%f", &num);
		
		//chamando a fun��o inserir
		retorno = inserir (vetor, &quant, CAP, num);
		
		//testando o retorno
		if (retorno == TRUE)
		{
			printf ("\n\nO valor %.1f foi inserido com sucesso!\n", num);
		}
		else
		{
			printf ("\n\nERRO: n�o ha mais espaco para insercao!\n");
		}
		
		//verificando se o usu�rio deseja continuar
		printf ("\nDeseja continuar [S/N]? ");
		fflush (stdin);
		scanf ("%c", &resp);
		resp = toupper(resp);		
	}
	while (resp == 'S');
}

//implementa��o das fun��es

//exibe na tela os elementos de um vetor com 'tamanho' elementos
void exibirVetor (float v[], int tamanho)
{
	//declara��o de vari�veis
	int i;	
	
	//verirficando se o vetor est� vazio
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
	//declara��o de vari�veis;
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
	
	//retornando a posi��o, caso o n�mero seja maior do que todos no vetor
	return quantidade; //ou return i;
}

int inserir (float v[], int *quantidade, int capacidade, float numero)
{	
	//declara��o de vari�veis
	int i, posicao;

	//verificando se o vetor est� cheio
	if (*quantidade == capacidade)
	{
		return FALSE;
	}	
	else
	{
		//verificando a posi��o na qual o n�mero deve ser inserido
		posicao = buscar (v, *quantidade, numero);
		
		//deslocando para a direita os elementos que est�o nas posi��es 'pos' ao final
		for (i=(*quantidade)-1;i>=posicao;i--)
		{
			v[i+1] = v[i];
		}
		
		//inserindo o n�mero em 'posicao'
		v[posicao] = numero;
		
		//atualizando a quantidade de elementos no vetor
		(*quantidade)++;
		
		return TRUE;
	}
}
