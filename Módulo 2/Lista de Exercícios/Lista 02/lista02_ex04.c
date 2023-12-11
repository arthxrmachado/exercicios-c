/******************************************************************************
	FAETERJ-Rio
	2FPR - Manh� - 2021/1
	Professor Leonardo Vianna
	
	Data: 24/03/2021   -   Matrizes
	
	Lista de Exerc�cios IV
	
	QUEST�O 04:
	Fazer uma fun��o que, dada uma matriz M6�6, determine se 
	ela � sim�trica.

	Exemplos:
					1  2  3
				M = 2  3  4			� sim�trica
					3  4  9
	
******************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define ORDEM 3

//prot�tipos das fun��es
void exibirMatriz(int matriz[ORDEM][ORDEM]);
int simetrica (int matriz[ORDEM][ORDEM]);

//main
void main()
{
	//declara��o de vari�veis
    int m1[ORDEM][ORDEM] = {{1,2,3},
	                        {2,7,8},
							{3,8,6}};

	int m2[ORDEM][ORDEM] = {{1,2,3},
	                        {4,5,6},
							{7,8,9}};
	
	//exibindo a matriz m1 e determinando se � ou n�o sim�trica
	exibirMatriz(m1);
	
	if (simetrica (m1) == 1)
	{
		printf ("\nm1 e' simetrica\n");
	}
	else
	{
		printf ("\nm1 nao e' simetrica\n");
	}
	
	//exibindo a matriz m2 e determinando se � ou n�o sim�trica
	exibirMatriz(m2);
	
	if (simetrica (m2) == 1)
	{
		printf ("\nm2 e' simetrica\n");
	}
	else
	{
		printf ("\nm2 nao e' simetrica\n");
	}

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

//verifica se a matriz � ou n�o sim�trica	
int simetrica (int matriz[ORDEM][ORDEM])
{
	//declara��o de vari�veis
    int i, j;

	//percorrendo as linhas da matriz
    for (i=0;i<ORDEM;i++)
    {
    	//percorrendo as colunas da matriz
        for (j=0;j<ORDEM;j++)
        {
        	//verificando se os elementos s�o diferentes
            if(matriz[i][j] != matriz[j][i])
            {
            	//retorna 0 se n�o for sim�trica
            	return 0;
			}
        }
    }
    
    //retorna 1 se for sim�trica
    return 1;
}
