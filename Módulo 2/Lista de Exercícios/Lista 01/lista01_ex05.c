// QUESTÃO 05: Determinar o maior elemento de um vetor.

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define TAM 10

//protótipos das funções
void preencher (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);
void maiorElemento(int vetor[], int tamanho, int *maior);

//função main
void main ()
{
	//declaração de variáveis
	int v[TAM], m;
	
	//chamando a função para preencher o vetor 'v'
	preencher (v, TAM);
	
	//exibindo o vetor 'v' antes da inversão
	exibir (v, TAM);
	
	//chamando a função para determinar o maior elemento do vetor
	maiorElemento (v, TAM, &m);
	
	//exibindo o maior elemento do vetor
	printf ("Maior elemento = %d\n", m);
}
	

//implementação das funções
void maiorElemento(int vetor[], int tamanho, int *maior)
{
	//declaração de variáveis
	int i, ma=-999;
	
	//varrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		//verificando qual é o maior de todos
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
