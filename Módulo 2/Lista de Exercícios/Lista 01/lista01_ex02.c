/*
Questão 2: Preencher um vetor com números dados pelo usuário.
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define TAM 5

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
//void preencher(int *vetor, int tamanho)  == ou um, ou outro
{
    //declaracao de variaveis
    int i;
    
    //corpo da função
    for(i = 0; i < tamanho; i++)
	{
        printf("Digite o valor [%d] do vetor: ", i+1);
        scanf("%d", &vetor[i]);
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
