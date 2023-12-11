/******************************************************************************
	FAETERJ-Rio
	2FPR - Manh� - 2021/1
	Professor Leonardo Vianna
	
	Data: 10/03/2021   -   Aula de revis�o	(Vetores)
	
	Exerc�cio 4: Inverter os elementos de um vetor.
	
		Exemplo: 
		
			v (antes da invers�o):  4  7  2  1  6
			v (depois da invers�o): 6  1  2  7  4

******************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define TAM 7

//prot�tipos das fun��es
void preencher (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);
void trocar (int vetor[], int tamanho);

//fun��o main
void main ()
{
	//declara��o de vari�veis
	int v[TAM];
	
	//chamando a fun��o para preencher o vetor 'v'
	preencher (v, TAM);
	
	//exibindo o vetor 'v' antes da invers�o
	exibir (v, TAM);
	
	//invertendo os elementos do vetor
	trocar (v, TAM);
	
	//exibindo o vetor 'v' ap�s a invers�o
	exibir (v, TAM);

}

//implementa��o das fun��es
void trocar (int vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i, aux;
	
	//fazendo a troca dos elementos
	for (i=0;i<tamanho/2;i++)
	{
	    aux = vetor[i];
	    vetor [i] = vetor[tamanho-i-1];
		vetor[tamanho-i-1] = aux;
	}
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
