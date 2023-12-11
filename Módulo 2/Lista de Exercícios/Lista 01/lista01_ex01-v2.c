/******************************************************************************
	FAETERJ-Rio
	2FPR - Manh� - 2021/1
	Professor Leonardo Vianna
	
	Data: 10/03/2021   -   Aula de revis�o	(Vetores)
	
	Exerc�cio 1: Preencher um vetor com os n�meros de 1 at� TAM.

******************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define TAM 50

//prot�tipos das fun��es
void preencher (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

//fun��o main
void main ()
{
	//declara��o de vari�veis
	int v[TAM];
	int vet[15];
	
	//chamando a fun��o para preencher o vetor 'v'
	preencher (v, TAM);
	
	//exibindo o vetor 'v'
	exibir (v, TAM);
	
	//chamando a fun��o para preencher o vetor 'vet'
	preencher (vet, 15);
	
	//exibindo o vetor 'vet'
	exibir (vet, 15);
}

//implementa��o das fun��es
void preencher (int vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	//percorrendo todas as posi��es do vetor
	for (i=0;i<tamanho;i++)
	{
		vetor[i] = i+1;
	}
}

void exibir (int vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	printf ("\nElementos do vetor: ");
	
	//percorrendo todas as posi��es do vetor
	for (i=0;i<tamanho;i++)
	{
		printf ("%d  ", vetor[i]);
	}
	
	printf ("\n\n");
}
