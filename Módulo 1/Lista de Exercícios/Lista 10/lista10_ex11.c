/*
QUESTÃO 11: Fazer um função que, dado dois vetores A e B com números inteiros, gerar o vetor C que consiste na intersecção dos dois primeiros.
   
   Nota: considerar que não existe repetição no conjunto A, nem no conjunto B.
   
   Exemplo:
   
   		A:	3  6  1  2
   		B:  1  4  7  6  2  5  8
   		
   		A intersecção B: 6  1  2
*/

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void exibirVetor (int v[], int quantidade);
int buscar (int v[], int quantidade, int numero);
void interseccao (int A[], int quantA, int B[], int quantB, int C[], int *quantC);

//main
void main()
{
	//declaração de variáveis
	int vetA[5] = {6,1,4,2,0};
	int vetB[8] = {3,9,1,10,5,7,4,8};
	int vetC[5];
	int quant;
	
	//chamando a função
	interseccao (vetA, 5, vetB, 8, vetC, &quant);
	
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

void interseccao (int A[], int quantA, int B[], int quantB, int C[], int *quantC)
{
	//declaração de variáveis
	int i, posicao = 0; 
	
	//varrendo o vetor A
	for (i=0;i<quantA;i++)
	{
		//verificando se cada elemento de 'A' existe no vetor 'B'
		if (buscar (B, quantB, A[i]) != -1)
		{
			C[posicao] = A[i];
			posicao++;
		}		
	}
	
	//salvando o tamanho do vetor união
	*quantC = posicao;
}
