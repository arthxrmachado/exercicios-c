/******************************************************************************
	FAETERJ-Rio
	2FPR - Manh� - 2021/1
	Professor Leonardo Vianna
	
	Data: 24/03/2021   -   Matrizes
	
	Lista de Exerc�cios IV
	
	QUEST�O 03: Desenvolver uma funcao que gere a seguinte
	matriz M5x5:
						1 2 3 4 5
						2 3 4 5 6
						3 4 5 6 7
						4 5 6 7 8
						5 6 7 8 9

******************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define ORDEM 5

//prot�tipos das fun��es
void exibirMatriz(int matriz[ORDEM][ORDEM]);

void gerarMatriz(int matriz[ORDEM][ORDEM]);

//main
void main()
{
	//declara��o de vari�veis
	int m[ORDEM][ORDEM];
	
	//preenchendo a matriz e, em seguida, exibindo-a
	gerarMatriz(m);
	exibirMatriz(m);
}

//exibindo a matriz
void exibirMatriz(int matriz[ORDEM][ORDEM])
{
	int i,j;
	
	for(i=0;i<ORDEM;i++)
	{
		for(j=0;j<ORDEM;j++)
		{
			printf("%4d ",matriz[i][j]);
		}
		printf("\n");
	}
}
	
//gerando a matriz, conforme enunciado
void gerarMatriz(int matriz[ORDEM][ORDEM])
{
	int i, j, k;
	
	for(i=0;i<ORDEM;i++)
	{
		k = i+1;
		for(j=0;j<ORDEM;j++)
		{
			matriz[i][j]=k;
			k++;
		}
	}	
}
