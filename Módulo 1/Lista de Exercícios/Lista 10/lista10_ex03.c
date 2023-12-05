/*
	FAC		- 	   Turma B
	Lista de Exercícios X
	
	QUESTÃO 03:
	Pede-se a implementação de uma função que, dado um vetor 
	contendo números reais, determine se o mesmo encontra-se 
	ordenado de forma crescente.
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define TRUE 1
#define FALSE 0

//protótipos das funções
int verificaOrdenacao (float v[], int tamanho);
void exibir (float v[], int tamVetor);

//main
void main ()
{
	//declaração de variáveis
	float vet1[5] = {1,7,9,8,10},
	      vet2[8] = {3.2, 4.5, 7, 8.1, 8.4, 9, 9.7, 10};

	//exibindo o vetor 1
	exibir (vet1, 5);
	
	//verificando se o vetor 1 está ordenada
	if (verificaOrdenacao (vet1, 5) == TRUE)
	{
		printf ("Vet1 esta ordenado crescentemente!\n\n");
	}
	else
	{
		printf ("Vet1 nao esta ordenado crescentemente!\n\n");
	}
	
	//exibindo o vetor 2
	exibir (vet2, 8);
	
	//verificando se o vetor 2 está ordenada
	if (verificaOrdenacao (vet2, 8) == TRUE)
	{
		printf ("Vet2 esta ordenado crescentemente!\n");
	}
	else
	{
		printf ("Vet2 nao esta ordenado crescentemente!\n");
	}
}

//implementação das funções
int verificaOrdenacao (float v[], int tamanho)
{
	//declaração de variáveis
	int i;
		
	//varrendo o vetor comparando os elementos dois a dois
	for (i=0;i<tamanho-1;i++)
	{
		if (v[i]>v[i+1])
		{
			return FALSE;
		}
	}
	
	return TRUE;
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
