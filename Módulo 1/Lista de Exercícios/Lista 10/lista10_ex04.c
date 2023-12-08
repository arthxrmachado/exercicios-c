/*
QUESTÃO 04: Fazer uma função que armazene em um vetor os 50 primeiros termos da seguinte sequência:

		S = 1, 2, 4, 7, 11, 16, ...

	Nota: observem que a diferença entre o 1º e 2º elementos 
	é igual a 1, entre o 2º e 3º é igual a 2, entre o 3º e o 
	4º é igual a 3, e assim sucessivamente.
*/

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void preencheVetor (int v[], int tamanho);
void exibir (int v[], int tamanho);

//main
void main ()
{
	//declaração de variáveis
	int vet[50];

	//chamando a função
	preencheVetor (vet, 50);
	
	//exibindo o vetor
	exibir (vet, 50);
}

//implementação das funções
void preencheVetor (int v[], int tamanho)
{
	//declaração de variáveis
	int i, j=1;
	
	//preenchendo o vetor
	v[0] = 1;
	for (i=1;i<tamanho;i++)
	{
		v[i] = v[i-1] + j;
		j++;
	}
}

void exibir (int v[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	printf ("\nVetor: ");
	for (i=0;i<tamanho;i++)
	{
		printf ("%d  ", v[i]);
	}
	printf ("\n\n");
}
