/******************************************************************************
	FAETERJ-Rio
	2FPR - Manhã - 2021/1
	Professor Leonardo Vianna
	
	Data: 24/03/2021   -   Matrizes
	
	Lista de Exercícios IV
	
	QUESTÃO 05:
	Implementar uma função que, dada uma matriz M10×8, gere um 
	vetor V de tamanho 8, onde cada elemento do vetor consiste 
	na soma dos elementos de uma coluna de M. Ou seja, o
	elemento V[1] consiste na soma dos elementos da primeira 
	coluna de M, o elemento V[2] consiste na soma dos elementos 
	da segunda coluna de M, e assim por diante.	
	
******************************************************************************/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define L 10
#define C 8

//protótipos das funções
void preencherMatriz(float matriz[L][C]);
void exibirMatriz(float matriz[L][C]);
void exibirVetor(float vetor[C]);

void soma(float matriz[L][C], float vetor[C]);

//main
void main()
{
	//declaração de variáveis
    float m[L][C];
	float v[C];
	
	//preenchendo a matriz aleatoriamente
	preencherMatriz(m);
	
	//exibindo a matriz
	exibirMatriz(m);
	
	//gerando o vetor soma
	soma(m, v);

	//exibindo o vetor
	exibirVetor(v);
	
}

//preenchendo a matriz aleatoriamente
void preencherMatriz(float matriz[L][C])
{
	int i,j;
	
	srand (time(NULL));
	
	for(i=0;i<L;i++)
	{	
		for(j=0;j<C;j++)
		{
			matriz[i][j]=rand() % 100 + 1;
		}
	}
}

//exibindo a matriz
void exibirMatriz(float matriz[L][C])
{
	int i,j;
	
	for(i=0;i<L;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("%5.1f ",matriz[i][j]);
		}
		printf("\n");
	}
}

//exibindo o vetor
void exibirVetor(float vetor[C])
{
	int i;
	
	printf ("\n\nElementos do vetor: ");
	for(i=0;i<C;i++)
	{
		printf("%5.1f ",vetor[i]);
	}
}

//gera o vetor de acordo com o especificado no enunciado
void soma(float matriz[L][C], float vetor[C])
{
	int i, j, soma;
	for(i=0;i<C;i++)
	{
		soma=0;
		for(j=0;j<L;j++)
		{
			soma=soma+matriz[j][i];
		}
		vetor[i]=soma;
	}
}
