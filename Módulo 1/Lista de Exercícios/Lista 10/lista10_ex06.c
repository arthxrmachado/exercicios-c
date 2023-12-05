/*
   FAC - Turma B
   Professor Leonardo Vianna
   Data: 12/11/2020
   
   Lista de Exercícios X
   
   QUESTÃO 06:
   Faça uma função que, dado um vetor de reais, altere 
   todas as ocorrências do número A pelo número B.
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define TAM 20

//protótipos das funções
void preencherVetor (float v[], int tamanho);
void exibirVetor (float v[], int tamanho);
void alterar (float v[], int tamanho, float A, float B);

//main
void main()
{
	//declaração de variáveis
	float vetor[TAM];
	float num1, num2;
	
	//preenchendo o vetor aleatoriamente
    preencherVetor (vetor, TAM);
    
    //exibindo o vetor antes da alteração
	exibirVetor (vetor, TAM);	
    
    //lendo os valores envolvidos na alteração
    printf ("Entre com o valor a ser alterado: ");
    scanf ("%f", &num1);
    
    printf ("Entre com o novo valor: ");
    scanf ("%f", &num2);
    
    //chamando a função
    alterar (vetor, TAM, num1, num2);
    
    //exibindo o vetor após a alteração
	exibirVetor (vetor, TAM);	
}

//implementação das funções

//preenchendo o vetor com valores gerados randomicamente
void preencherVetor (float v[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	//garantindo que a sequência mude a cada alteração
	srand (time(NULL));  //semente - seed
	
	//lendo os elementos do vetor
	for (i=0;i<tamanho;i++)
	{
		v[i] = 1+rand()%10;  //1..10
	}
}

//exibe na tela os elementos de um vetor com 'tamanho' elementos
void exibirVetor (float v[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	
	printf ("\n\nVetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%.1f ", v[i]);
	}
	
	printf ("\n\n");
}

//altera todas as ocorrências do número 'A' por 'B' no vetor 'v'
void alterar (float v[], int tamanho, float A, float B)
{
	//declaração de variáveis
	int i;
	
	//varrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		//verificando se o elemento 'A' foi encontrado
		if (v[i] == A)
		{
			v[i] = B;
		}
	}
}
