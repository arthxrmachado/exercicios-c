/*
	FAC		- 	   Turma B
	Lista de Exerc�cios X
	
	QUEST�O 02:
	Implementar uma fun��o que, dado um vetor de reais, 
	troque o 1  e o 2  elementos, em seguida o 3  e o 4  
	elementos e assim sucessivamente, at� se chegar ao final 
	do vetor.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define TAM 10

//prot�tipos das fun��es
void trocar (float v[], int tamVetor);
void exibir (float v[], int tamVetor);

//main
void main ()
{
	//declara��o de vari�veis
	float vetor[TAM] = {1,7,9,5,7,1,2,7,1,7};

	//exibindo o vetor antes da troca
	exibir (vetor, TAM);
	
	//chamando a fun��o troca	
	trocar (vetor, TAM);		
	
	//exibindo o vetor ap�s a troca
	exibir (vetor, TAM);
}

//implementa��o das fun��es
void trocar (float vetor[], int tamVetor)
{
	//declara��o de vari�veis
	int i;
	float aux;
	
	//fazendo a troca dos elementos
	for (i=0;i<tamVetor-1;i+=2)
	{
	    aux = vetor[i];
	    vetor [i] = vetor[i+1];
		vetor[i+1] = aux;
	}
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
