/******************************************************************************
	FAETERJ-Rio
	2FPR - Manhã - 2021/1
	Professor Leonardo Vianna
	
	Data: 10/03/2021   -   Aula de revisão	(Vetores)
	
	Exercício 7: Busca linear de um elemento.
	
******************************************************************************/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define TAM 10

//protótipos das funções
void preencher (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

int buscaLinear (int vetor[], int tamanho, int numero);

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
	pos = buscaLinear (v, TAM, num);
	
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
int buscaLinear (int vetor[], int tamanho, int numero)
{
	//declaração de variáveis
	int i;
	
	//percorrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		if (numero == vetor[i])   //elemento encontrado
		{
			return i;
		}
	}	
	
	//elemento não existe no vetor
	return -1;
}

void preencher(int vetor[], int tamanho)
{
    //declaracao de variaveis
    int i;
    
    srand (time(NULL));
    
    //corpo da função
    for(i = 0; i < tamanho; i++)
	{
		vetor[i] = 1 + rand()%10;  //gerando números aleatórios no intervalo de 1 a 100
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
