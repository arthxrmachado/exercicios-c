/******************************************************************************
	FAETERJ-Rio
	2FPR - Manhã - 2021/1
	Professor Leonardo Vianna
	
	Data: 10/03/2021   -   Aula de revisão	(Vetores)
	
	Exercício 4: Inverter os elementos de um vetor.
	
		Exemplo: 
		
			v (antes da inversão):  4  7  2  1  6
			v (depois da inversão): 6  1  2  7  4

******************************************************************************/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define TAM 7

//protótipos das funções
void preencher (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);
void trocar (int vetor[], int tamanho);

//função main
void main ()
{
	//declaração de variáveis
	int v[TAM];
	
	//chamando a função para preencher o vetor 'v'
	preencher (v, TAM);
	
	//exibindo o vetor 'v' antes da inversão
	exibir (v, TAM);
	
	//invertendo os elementos do vetor
	trocar (v, TAM);
	
	//exibindo o vetor 'v' após a inversão
	exibir (v, TAM);

}

//implementação das funções
void trocar (int vetor[], int tamanho)
{
	//declaração de variáveis
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
    
    //corpo da função
    for(i = 0; i < tamanho; i++)
	{
		vetor[i] = 1 + rand()%100;  //gerando números aleatórios no intervalo de 1 a 100
    }
}

void exibir (int vetor[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	printf ("\nElementos do vetor: ");
	
	//percorrendo todas as posições do vetor
	for (i=0;i<tamanho;i++)
	{
		printf ("%d  ", vetor[i]);
	}
	
	printf ("\n\n");
}
