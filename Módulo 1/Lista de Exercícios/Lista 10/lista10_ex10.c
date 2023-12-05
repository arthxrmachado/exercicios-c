/*
   FAC - Turma B
   Professor Leonardo Vianna
   Data: 24/11/2020
   
   Lista de Exercícios X
   
   QUESTÃO 10:
   Fazer um função que, dados dois vetores A e B com números inteiros, gerar o vetor C que 
   consiste na união dos dois primeiros.
   
   Nota: considerar que não existe repetição no conjunto A, nem no conjunto B.
   
   Exemplo:
   
   		A:	3  6  1  2
   		B:  1  4  7  6  2  5  8
   		
   		A U B: 3 6 1 2 4 7 5 8
*/

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void exibirVetor (int v[], int quantidade);
int buscar (int v[], int quantidade, int numero);
void uniao (int A[], int quantA, int B[], int quantB, int C[], int *quantC);

//main
void main()
{
	//declaração de variáveis
	int vetA[5] = {6,1,4,2,0};
	int vetB[8] = {3,9,1,4,10,5,7,8};
	int vetC[13];
	int quant;
	
	//chamando a função
	uniao (vetA, 5, vetB, 8, vetC, &quant);
	
	//exibindo os conjuntos
	exibirVetor (vetA, 5);
	exibirVetor (vetB, 8);
	exibirVetor (vetC, quant);
}

//implementação das funções

//exibe na tela os elementos de um vetor com 'tamanho' elementos
void exibirVetor (int v[], int tamanho)
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
			printf ("%d ", v[i]);
		}
		
		printf ("\n\n");
	}
}

int buscar (int v[], int quantidade, int numero)
{
	//declaração de variáveis
	int i;
	
	//percorrendo o vetor
	for (i=0;i<quantidade;i++)
	{
		//verificando se o 'numero' foi encontrado
		if (v[i] == numero)
		{
			return i;
		}
	}
	
	//se chegou neste ponto, é porque o elemento não existe no vetor
	return -1;
}

void uniao (int A[], int quantA, int B[], int quantB, int C[], int *quantC)
{
	//declaração de variáveis
	int i, j; 
	
	//parte I: copiar para C todos os elementos de A
	for (i=0;i<quantA;i++)
	{
		C[i] = A[i];
	}
	
	//parte II: copiar para C os elementos de B que não estão em A
	for (j=0;j<quantB;j++)
	{
		//verificando se o elemento 'B[j]' NÃO existe no vetor 'A'
		if (buscar (A, quantA, B[j]) == -1)
		{
			C[i] = B[j];
			i++;
		}
	}
	
	//salvando o tamanho do vetor união
	*quantC = i;
}
	
 /*  		A:	3  6  1  2
            0  1  2  3
            
   		B:  1  4  7  6  2  5  8
   		    0  1  2  3  4  5  6
   		    
   		A U B: 3  6  1  2  4  7  5  8  
   		       0  1  2  3  4  5  6  7  8  9  10  11  12
*/
