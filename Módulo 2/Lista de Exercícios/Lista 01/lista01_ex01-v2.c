/******************************************************************************
	FAETERJ-Rio
	2FPR - Manhã - 2021/1
	Professor Leonardo Vianna
	
	Data: 10/03/2021   -   Aula de revisão	(Vetores)
	
	Exercício 1: Preencher um vetor com os números de 1 até TAM.

******************************************************************************/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define TAM 50

//protótipos das funções
void preencher (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

//função main
void main ()
{
	//declaração de variáveis
	int v[TAM];
	int vet[15];
	
	//chamando a função para preencher o vetor 'v'
	preencher (v, TAM);
	
	//exibindo o vetor 'v'
	exibir (v, TAM);
	
	//chamando a função para preencher o vetor 'vet'
	preencher (vet, 15);
	
	//exibindo o vetor 'vet'
	exibir (vet, 15);
}

//implementação das funções
void preencher (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	//percorrendo todas as posições do vetor
	for (i=0;i<tamanho;i++)
	{
		vetor[i] = i+1;
	}
}

void exibir (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	printf ("\nElementos do vetor: ");
	
	//percorrendo todas as posições do vetor
	for (i=0;i<tamanho;i++)
	{
		printf ("%d  ", vetor[i]);
	}
	
	printf ("\n\n");
}
