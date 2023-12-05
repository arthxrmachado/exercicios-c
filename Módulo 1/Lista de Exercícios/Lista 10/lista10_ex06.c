/*
   FAC - Turma B
   Professor Leonardo Vianna
   Data: 12/11/2020
   
   Lista de Exerc�cios X
   
   QUEST�O 06:
   Fa�a uma fun��o que, dado um vetor de reais, altere 
   todas as ocorr�ncias do n�mero A pelo n�mero B.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define TAM 20

//prot�tipos das fun��es
void preencherVetor (float v[], int tamanho);
void exibirVetor (float v[], int tamanho);
void alterar (float v[], int tamanho, float A, float B);

//main
void main()
{
	//declara��o de vari�veis
	float vetor[TAM];
	float num1, num2;
	
	//preenchendo o vetor aleatoriamente
    preencherVetor (vetor, TAM);
    
    //exibindo o vetor antes da altera��o
	exibirVetor (vetor, TAM);	
    
    //lendo os valores envolvidos na altera��o
    printf ("Entre com o valor a ser alterado: ");
    scanf ("%f", &num1);
    
    printf ("Entre com o novo valor: ");
    scanf ("%f", &num2);
    
    //chamando a fun��o
    alterar (vetor, TAM, num1, num2);
    
    //exibindo o vetor ap�s a altera��o
	exibirVetor (vetor, TAM);	
}

//implementa��o das fun��es

//preenchendo o vetor com valores gerados randomicamente
void preencherVetor (float v[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	//garantindo que a sequ�ncia mude a cada altera��o
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
	//declara��o de vari�veis
	int i;
	
	
	printf ("\n\nVetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%.1f ", v[i]);
	}
	
	printf ("\n\n");
}

//altera todas as ocorr�ncias do n�mero 'A' por 'B' no vetor 'v'
void alterar (float v[], int tamanho, float A, float B)
{
	//declara��o de vari�veis
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
