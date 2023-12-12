// Questão 1: Preencher um vetor com os números de 1 até TAM.

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define TAM 50

//protótipos das funções
void preencher (int vetor[TAM]);
void exibir (int vetor[TAM]);

//função main
void main ()
{
	//declaração de variáveis
	int v[TAM];
	
	//chamando a função
	preencher (v);
	
	//exibindo o vetor
	exibir (v);
}

//implementação das funções
void preencher (int vetor[TAM])
{
	//declaração de variáveis
	int i;
	
	//percorrendo todas as posições do vetor
	for (i=0;i<TAM;i++)
	{
		vetor[i] = i+1;
	}
}

void exibir (int vetor[TAM])
{
	//declaração de variáveis
	int i;
	
	printf ("\nElementos do vetor: ");
	
	//percorrendo todas as posições do vetor
	for (i=0;i<TAM;i++)
	{
		printf ("%d  ", vetor[i]);
	}
	
	printf ("\n\n");
}
