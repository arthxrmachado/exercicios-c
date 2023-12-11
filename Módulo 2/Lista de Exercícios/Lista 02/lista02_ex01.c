/******************************************************************************
	FAETERJ-Rio
	2FPR - Manh� - 2021/1
	Professor Leonardo Vianna
	
	Data: 24/03/2021   -   Matrizes
	
	Lista de Exerc�cios IV
	
	QUEST�O 01: Fa�a um fun��o que, dada uma matriz M8�5 de 
	reais, gere a matriz Mt, sua transposta.

******************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define L 8
#define C 5

//prot�tipos das fun��es
void preencherMatriz(float matriz[L][C]);
void exibirMatriz(float matriz[L][C]);

void gerarT(float matriz[L][C],float mT[C][L]);

//main
void main()
{
	//declara��o de vari�veis
	float m[L][C];
	float matrizT[C][L];
	int i,j;
	
	//preenchendo a matriz aleatoriamente e, em seguida, exibindo-a
	preencherMatriz(m);
	exibirMatriz(m);
	
	printf("\n\n");
	
	//gerando a matriz transposta
	gerarT(m,matrizT);
	
	//exibindo a matriz transposta
	for(i=0;i<C;i++)
	{
		for(j=0;j<L;j++)
		{
			printf("%5.1f ",matrizT[i][j]);
		}
		printf("\n");
	}	
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
	
//gerando a matriz transposta
void gerarT(float matriz[L][C],float mT[C][L])
{	
	int i,j;
	
	for(i=0;i<C;i++)
	{
		for(j=0;j<L;j++)
		{
			mT[i][j]= matriz[j][i];
		}
	}
}
