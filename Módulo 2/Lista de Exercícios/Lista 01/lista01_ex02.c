/******************************************************************************
	FAETERJ-Rio
	2FPR - Manh� - 2021/1
	Professor Leonardo Vianna
	
	Data: 10/03/2021   -   Aula de revis�o	(Vetores)
	
	Exerc�cio 2: Preencher um vetor com n�meros dados pelo usu�rio.

******************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define TAM 5

//prot�tipos das fun��es
void preencher (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

//fun��o main
void main ()
{
	//declara��o de vari�veis
	int v[TAM];
	
	//chamando a fun��o para preencher o vetor 'v'
	preencher (v, TAM);
	
	//exibindo o vetor 'v'
	exibir (v, TAM);
}

//implementa��o das fun��es
void preencher(int vetor[], int tamanho)
//void preencher(int *vetor, int tamanho)  == ou um, ou outro
{
    //declaracao de variaveis
    int i;
    
    //corpo da fun��o
    for(i = 0; i < tamanho; i++)
	{
        printf("Digite o valor [%d] do vetor: ", i+1);
        scanf("%d", &vetor[i]);
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
