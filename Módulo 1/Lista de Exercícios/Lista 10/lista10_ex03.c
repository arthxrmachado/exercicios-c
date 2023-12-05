/*
	FAC		- 	   Turma B
	Lista de Exerc�cios X
	
	QUEST�O 03:
	Pede-se a implementa��o de uma fun��o que, dado um vetor 
	contendo n�meros reais, determine se o mesmo encontra-se 
	ordenado de forma crescente.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define TRUE 1
#define FALSE 0

//prot�tipos das fun��es
int verificaOrdenacao (float v[], int tamanho);
void exibir (float v[], int tamVetor);

//main
void main ()
{
	//declara��o de vari�veis
	float vet1[5] = {1,7,9,8,10},
	      vet2[8] = {3.2, 4.5, 7, 8.1, 8.4, 9, 9.7, 10};

	//exibindo o vetor 1
	exibir (vet1, 5);
	
	//verificando se o vetor 1 est� ordenada
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
	
	//verificando se o vetor 2 est� ordenada
	if (verificaOrdenacao (vet2, 8) == TRUE)
	{
		printf ("Vet2 esta ordenado crescentemente!\n");
	}
	else
	{
		printf ("Vet2 nao esta ordenado crescentemente!\n");
	}
}

//implementa��o das fun��es
int verificaOrdenacao (float v[], int tamanho)
{
	//declara��o de vari�veis
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
	//declara��o de vari�veis
	int i;
	
	printf ("\nVetor: ");
	for (i=0;i<tamVetor;i++)
	{
		printf ("%.1f  ", v[i]);
	}
	printf ("\n\n");
}
