/*
QUESTÃO 05: Elaborar uma função que, dado um conjunto de 300 valores inteiros, distribua-os em 2 vetores conforme forem pares ou ímpares.
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define TAM 300

//protótipos das funções
void preencherVetor (int v[], int tamanho);
void exibirVetor (int v[], int tamanho);
void verificaParidade (int v[], int tamV, int pares[], int *tamP, int impares[], int *tamI);

//main
void main()
{
	//declaração de variáveis
	int vetor[TAM], vetP[TAM], vetI[TAM];
	int quantP, quantI;
	
	//preenchendo o vetor original aleatoriamente
    preencherVetor (vetor, TAM);
    
    //separando os elementos nos vetores de pares e de ímpares
    verificaParidade (vetor, TAM, vetP, &quantP, vetI, &quantI);

    //exibindo os vetores 
	printf ("\nVetor original:\n");
	exibirVetor (vetor, TAM);	
	
	printf ("\nVetor de pares:\n");
	exibirVetor (vetP, quantP);	
	
	printf ("\nVetor de impares:\n");
	exibirVetor (vetI, quantI);	
}

//implementação das funções
//preenchendo o vetor com valores fornecidos pelo usuário
/*void preencherVetor (int v[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	//lendo os elementos do vetor
	for (i=0;i<tamanho;i++)
	{
		printf ("Entre com um numero: ");
		scanf ("%d", &v[i]);
	}
}*/

//preenchendo o vetor com valores gerados randomicamente
void preencherVetor (int v[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	//garantindo que a sequência mude a cada alteração
	srand (time(NULL));  //semente - seed
	
	//lendo os elementos do vetor
	for (i=0;i<tamanho;i++)
	{
		v[i] = 1+rand()%100;  //1..100
	}
}

//exibe na tela os elementos de um vetor com 'tamanho' elementos
void exibirVetor (int v[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	
	printf ("\n\nVetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%d ", v[i]);
	}
	
	printf ("\n\n");
}

//separando os elementos do vetor 'v' em pares e impares
void verificaParidade (int v[], int tamV, int pares[], int *tamP, int impares[], int *tamI)
{
	//declaração de variáveis
	int i, j=0, k=0;
	
	//varrendo o vetor original
	for (i=0;i<tamV;i++)
	{
		//verificando se o elemento é par
		if (v[i]%2==0)
		{
			pares[j] = v[i];
			j++;
		}
		else
		{
			impares[k] = v[i];
			k++;
		}
	}	
	
	//retornando a quantidade de pares e de ímpares
	*tamP = j;
	*tamI = k;
}
