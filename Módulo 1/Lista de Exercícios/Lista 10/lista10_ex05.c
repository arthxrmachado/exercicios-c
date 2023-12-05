/*
   FAC - Turma B
   Professor Leonardo Vianna
   Data: 12/11/2020
   
   Lista de Exerc�cios X
   
   QUEST�O 05:
   Elaborar uma fun��o que, dado um conjunto de 300 valores 
   inteiros, distribua-os em 2 vetores conforme forem pares 
   ou �mpares.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define TAM 300

//prot�tipos das fun��es
void preencherVetor (int v[], int tamanho);
void exibirVetor (int v[], int tamanho);
void verificaParidade (int v[], int tamV, int pares[], int *tamP, int impares[], int *tamI);

//main
void main()
{
	//declara��o de vari�veis
	int vetor[TAM], vetP[TAM], vetI[TAM];
	int quantP, quantI;
	
	//preenchendo o vetor original aleatoriamente
    preencherVetor (vetor, TAM);
    
    //separando os elementos nos vetores de pares e de �mpares
    verificaParidade (vetor, TAM, vetP, &quantP, vetI, &quantI);

    //exibindo os vetores 
	printf ("\nVetor original:\n");
	exibirVetor (vetor, TAM);	
	
	printf ("\nVetor de pares:\n");
	exibirVetor (vetP, quantP);	
	
	printf ("\nVetor de impares:\n");
	exibirVetor (vetI, quantI);	
}

//implementa��o das fun��es
//preenchendo o vetor com valores fornecidos pelo usu�rio
/*void preencherVetor (int v[], int tamanho)
{
	//declara��o de vari�veis
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
	//declara��o de vari�veis
	int i;
	
	//garantindo que a sequ�ncia mude a cada altera��o
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
	//declara��o de vari�veis
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
	//declara��o de vari�veis
	int i, j=0, k=0;
	
	//varrendo o vetor original
	for (i=0;i<tamV;i++)
	{
		//verificando se o elemento � par
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
	
	//retornando a quantidade de pares e de �mpares
	*tamP = j;
	*tamI = k;
}

/*
v:          4  8  3  4  5  6
i:          0  1  2  3  4  5
     
pares:		4  8  4  6
j:          0  1  2  3  4
	
impares:    3  5
k:          0  1  2
*/
