/******************************************************************************
	FAETERJ-Rio
	2FPR - Manhã - 2021/1
	Professor Leonardo Vianna
	
	Data: 10/03/2021   -   Aula de revisão	(Vetores)
	
	Exercício 9: Busca binária de um elemento em um vetor.
				 O(log2n)	
******************************************************************************/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define TAM 1000

//protótipos das funções
void preencher (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

int buscaBinaria (int vetor[], int tamanho, int numero);

//função main
void main ()
{
	//declaração de variáveis
	int v[TAM], pos, num;
	
	//chamando a função para preencher o vetor 'v'
	preencher (v, TAM);
	
	//exibindo o vetor 'v' antes da inversão
	exibir (v, TAM);
	
	//obtendo o valor a ser pesquisado
	printf ("Entre com o valor a ser pesquisado: ");
	scanf ("%d", &num);
	
	//chamando a função para buscar o elemento
	pos = buscaBinaria (v, TAM, num);
	
	//exibindo os resultados
	if (pos != -1)
	{
		printf ("O valor %d foi encontrado na posicao %d.\n", num, pos);
	}
	else
	{
		printf ("O valor %d nao foi encontrado no vetor\n", num);
	}
}
	
//implementação das funções
int buscaBinaria (int vetor[], int tamanho, int numero)
{
	//declaração de variáveis
	int inicio, fim, meio;
	
	//inicializando as variáveis 'inicio' e 'fim'
	inicio = 0;
	fim = tamanho-1;
	
	while (inicio <= fim)
	{
		//calculando a posição 'meio' da porção do vetor que está sendo considerada
		meio = (inicio+fim)/2;
		
		//comparando o elemento buscado com aquele que está no meio do vetor
	
		//--- esse printd está aqui apenas para ilustrar o numero de comparações feitas.
		printf ("comparando %d com %d\n", numero, vetor[meio]);
			
		if (numero == vetor[meio])
		{
			return meio;
		}
		else
		{
			//se o elemento buscado for menor do que aquele que está no meio, a busca deve continuar apenas na porção da esquerda
			if (numero < vetor[meio])
			{
				fim = meio-1;
			}
			else
			{
				//se o elemento buscado for maior do que aquele que está no meio, a busca deve continuar apenas na porção da direita
				inicio = meio + 1;
			}
		}		
	}
	
	//elemento não encontrado
	return -1;
}

void preencher(int vetor[], int tamanho)
{
    //declaracao de variaveis
    int i;
    
    srand (time(NULL));
    
    //armazenando na primeira posição um valor de 1 a 10
    vetor[0] = 1 + rand()%10;
    
    //corpo da função
    for(i = 1; i < tamanho; i++)
	{
		vetor[i] = vetor[i-1] + rand()%5; 
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
