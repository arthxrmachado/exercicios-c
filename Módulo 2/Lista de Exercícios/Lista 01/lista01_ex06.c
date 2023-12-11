/******************************************************************************
	FAETERJ-Rio
	2FPR - Manhã - 2021/1
	Professor Leonardo Vianna
	
	Data: 10/03/2021   -   Aula de revisão	(Vetores)
	
	Exercício 6: Determinar a soma e a média dos elementos de um vetor.
	
******************************************************************************/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define TAM 5

//protótipos das funções
void preencher (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);
void somaMediaElementos (int vetor[], int tamanho, int* soma, float* media);

//função main
void main ()
{
	//declaração de variáveis
	int v[TAM], s;
	float m;
	
	//chamando a função para preencher o vetor 'v'
	preencher (v, TAM);
	
	//exibindo o vetor 'v' antes da inversão
	exibir (v, TAM);
	
	//chamando a função para determinar a soma e a média dos elementos do vetor
	somaMediaElementos (v, TAM, &s, &m);
	
	//exibindo os resultados
	printf ("Soma = %d  -  Media = %.1f\n", s, m);
}
	
//implementação das funções
void somaMediaElementos (int vetor[], int tamanho, int* soma, float* media)
{
    //declaração de variáveis
	int i;
	
	//inicializando a soma
    *soma = 0;
    
    //percorrendo o vetor para calcular a soma dos elementos    
    for(i = 0; i < tamanho; i++)
	{
        *soma += vetor[i]; //*soma = *soma + vetor[i];
    }
    
    //calculando a média
    *media = (float)*soma / tamanho;   //casting
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
