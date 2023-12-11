/******************************************************************************
	FAETERJ-Rio
	2FPR - Manh� - 2021/1
	Professor Leonardo Vianna
	
	Data: 10/03/2021   -   Aula de revis�o	(Vetores)
	
	Exerc�cio 5: Determinar o maior elemento de um vetor.
	
******************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define TAM 10

//prot�tipos das fun��es
void preencher (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);
void maiorElemento(int vetor[], int tamanho, int *maior);

//fun��o main
void main ()
{
	//declara��o de vari�veis
	int v[TAM], m;
	
	//chamando a fun��o para preencher o vetor 'v'
	preencher (v, TAM);
	
	//exibindo o vetor 'v' antes da invers�o
	exibir (v, TAM);
	
	//chamando a fun��o para determinar o maior elemento do vetor
	maiorElemento (v, TAM, &m);
	
	//exibindo o maior elemento do vetor
	printf ("Maior elemento = %d\n", m);
}
	

//implementa��o das fun��es
void maiorElemento(int vetor[], int tamanho, int *maior)
{
	//declara��o de vari�veis
	int i, ma=-999;
	
	//varrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		//verificando qual � o maior de todos
		if (vetor[i] > ma)
		{
			ma = vetor[i];
		}
	}
	
	//retornando resultado
	*maior = ma;
}

void preencher(int vetor[], int tamanho)
{
    //declaracao de variaveis
    int i;
    
    srand (time(NULL));
    
    //corpo da fun��o
    for(i = 0; i < tamanho; i++)
	{
		vetor[i] = 1 + rand()%100;  //gerando n�meros aleat�rios no intervalo de 1 a 100
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
