/*
	FAC		- 	   Turma B
	Lista de Exercícios X
	
	QUESTÃO 02:
	Implementar uma função que, dado um vetor de reais, 
	troque o 1  e o 2  elementos, em seguida o 3  e o 4  
	elementos e assim sucessivamente, até se chegar ao final 
	do vetor.
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define TAM 10

//protótipos das funções
void trocar (float v[], int tamVetor);
void exibir (float v[], int tamVetor);

//main
void main ()
{
	//declaração de variáveis
	float vetor[TAM] = {1,7,9,5,7,1,2,7,1,7};

	//exibindo o vetor antes da troca
	exibir (vetor, TAM);
	
	//chamando a função troca	
	trocar (vetor, TAM);		
	
	//exibindo o vetor após a troca
	exibir (vetor, TAM);
}

//implementação das funções
void trocar (float vetor[], int tamVetor)
{
	//declaração de variáveis
	int i;
	float aux;
	
	//fazendo a troca dos elementos
	for (i=0;i<tamVetor-1;i+=2)
	{
	    aux = vetor[i];
	    vetor [i] = vetor[i+1];
		vetor[i+1] = aux;
	}
}

void exibir (float v[], int tamVetor)
{
	//declaração de variáveis
	int i;
	
	printf ("\nVetor: ");
	for (i=0;i<tamVetor;i++)
	{
		printf ("%.1f  ", v[i]);
	}
	printf ("\n\n");
}
