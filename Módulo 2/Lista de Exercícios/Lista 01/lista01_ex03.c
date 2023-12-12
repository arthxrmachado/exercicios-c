// Questão 3: Preencher um vetor com números aleatórios.

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define TAM 50

//protótipos das funções
void preencher (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

//função main
void main ()
{
	//declaração de variáveis
	int v[TAM];
	
	//chamando a função para preencher o vetor 'v'
	preencher (v, TAM);
	
	//exibindo o vetor 'v'
	exibir (v, TAM);
}

//implementação das funções
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
