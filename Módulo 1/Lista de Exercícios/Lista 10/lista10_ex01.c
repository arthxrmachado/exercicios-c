/*
QUESTÃO 01: Desenvolver uma função que determine o número de ocorrências de um número inteiro x em um vetor A.
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define TAM 10

//protótipos das funções
int numOcorrencias (int x, int v[TAM]);

//main
void main ()
{
	//declaração de variáveis
	int quant, numero, i, vetor[TAM] = {1,7,9,5,7,1,2,7,1,7};
		
	//lendo o número a ser buscado
	printf ("\n\nEntre com o numero a ser buscado no vetor: ");
	scanf ("%d", &numero);
	
	//chamando a função
	quant = numOcorrencias (numero, vetor);
	
	//exibindo o resultado
	printf ("\n\nForam encontradas %d ocorrencias do numero %d no vetor.", quant, numero);
}

//implementação das funções
int numOcorrencias (int x, int v[TAM])
{
	//declaração de variáveis
	int i, cont = 0;
	
	//varrendo o vetor
	for (i=0;i<TAM;i++)
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
