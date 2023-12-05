/*
	FAC		- 	   Turma B
	Lista de Exercícios X
	
	QUESTÃO 01:
	Desenvolver uma função que determine o número de ocorrências 
	de um número inteiro x em um vetor A.
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define TAM 10

//protótipos das funções
int numOcorrencias (int x, int v[], int tamanho);

//main
void main ()
{
	//declaração de variáveis
	int quant, numero;
	int vet1[TAM] = {1,7,9,5,7,1,2,7,1,7},
	    vet2[5] = {1,7,4,7,5};
		
	//lendo o número a ser buscado
	printf ("\n\nEntre com o numero a ser buscado no vetor: ");
	scanf ("%d", &numero);
	
	//chamando a função para o 1º vetor
	quant = numOcorrencias (numero, vet1, TAM);
	
	//exibindo o resultado para o 1º vetor
	printf ("\n\nForam encontradas %d ocorrencias do numero %d em vet1.", quant, numero);
	
	//chamando a função para o 2º vetor
	quant = numOcorrencias (numero, vet2, 5);
	
	//exibindo o resultado para o 2º vetor
	printf ("\n\nForam encontradas %d ocorrencias do numero %d em vet2.", quant, numero);
}

//implementação das funções
int numOcorrencias (int x, int v[], int tamanho)
{
	//declaração de variáveis
	int i, cont = 0;
	
	//varrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		//verificando se o elemento do vetor é o 'x'
		if (v[i] == x)
		{
			cont++;
		}
	}
	
	//retornando o resultado
	return cont;
}
