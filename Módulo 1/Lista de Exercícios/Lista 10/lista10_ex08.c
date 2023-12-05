/*
   FAC - Turma B
   Professor Leonardo Vianna
   Data: 19/11/2020
   
   Lista de Exercícios X
   
   QUESTÃO 08:
   Dados um vetor de reais (cujos elementos estão ordenados 
   crescentemente) e um número x, retornar a posição da primeira 
   ocorrência de x (caso encontre-se no vetor) ou a posição na 
   qual deveria estar (caso contrário).
   
   Exemplo:
   
   vetor:  1  4  8  8  9  12 12 12 15 20		
           0  1  2  3  4  5  6  7  8  9  	quantidade: 10
           
   buscar o nº 15: retornar 8    
   buscar o nº 12: retornar 5
   buscar o nº 10: retornar 5   
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define CAP 20

//protótipos das funções
void preencherVetor (float v[], int tamanho);
void exibirVetor (float v[], int tamanho);
int buscar (float v[], int quantidade, float numero);

//main
void main()
{
	//declaração de variáveis
	float vetor[CAP];
	float num;
	int posicao;
	
	//preenchendo o vetor aleatoriamente
    preencherVetor (vetor, CAP);
    
    //exibindo o vetor antes da busca
	exibirVetor (vetor, CAP);	
    
    //lendo o valor a ser buscado
    printf ("Entre com o valor a ser buscado: ");
    scanf ("%f", &num);
    
    //chamando a função
	posicao = buscar (vetor, CAP, num);
    
	printf ("\n\nPosicao: %d\n", posicao);
}

//implementação das funções

//preenchendo o vetor com valores gerados randomicamente
void preencherVetor (float v[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	//garantindo que a sequência mude a cada alteração
	srand (time(NULL));  //semente - seed
	
	//inserindo o primeiro elemento do vetor
	v[0] = 1+rand()%5;   //1..5
	
	//lendo os elementos do vetor
	for (i=1;i<tamanho;i++)
	{
		v[i] = v[i-1]+rand()%3;			
	}
}

//exibe na tela os elementos de um vetor com 'tamanho' elementos
void exibirVetor (float v[], int tamanho)
{
	//declaração de variáveis
	int i;	
	
	printf ("\n\nVetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%.1f ", v[i]);
	}
	
	printf ("\n\n");
}

int buscar (float v[], int quantidade, float numero)
{
	//declaração de variáveis;
	int i;
	
	//varrendo o vetor em busca do elemento
	for (i=0;i<quantidade;i++)
	{
		//verificando se o elemento foi encontrado
		/*if (v[i] == numero)
		{
			return i;
		}
		else
		{
			if (v[i] > numero)
			{
				return i;
			}
		}*/
		
		if (v[i] >= numero)
		{
			return i;
		}
	}
	
	//retornando a posição, caso o número seja maior do que todos no vetor
	return quantidade; //ou return i;
}
