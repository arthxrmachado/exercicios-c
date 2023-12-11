/******************************************************************************
	FAETERJ-Rio
	2FPR - Manh� - 2021/1
	Professor Leonardo Vianna
	
	Data: 10/03/2021   -   Aula de revis�o	(Vetores)
	
	Exerc�cio 6: Determinar a soma e a m�dia dos elementos de um vetor.
	
******************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define TAM 5

//prot�tipos das fun��es
void preencher (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);
void somaMediaElementos (int vetor[], int tamanho, int* soma, float* media);

//fun��o main
void main ()
{
	//declara��o de vari�veis
	int v[TAM], s;
	float m;
	
	//chamando a fun��o para preencher o vetor 'v'
	preencher (v, TAM);
	
	//exibindo o vetor 'v' antes da invers�o
	exibir (v, TAM);
	
	//chamando a fun��o para determinar a soma e a m�dia dos elementos do vetor
	somaMediaElementos (v, TAM, &s, &m);
	
	//exibindo os resultados
	printf ("Soma = %d  -  Media = %.1f\n", s, m);
}
	
//implementa��o das fun��es
void somaMediaElementos (int vetor[], int tamanho, int* soma, float* media)
{
    //declara��o de vari�veis
	int i;
	
	//inicializando a soma
    *soma = 0;
    
    //percorrendo o vetor para calcular a soma dos elementos    
    for(i = 0; i < tamanho; i++)
	{
        *soma += vetor[i]; //*soma = *soma + vetor[i];
    }
    
    //calculando a m�dia
    *media = (float)*soma / tamanho;   //casting
}

void preencher(int vetor[], int tamanho)
{
    //declaracao de variaveis
    int i;
    
    srand (time(NULL));
    
    //corpo da fun��o
    for(i = 0; i < tamanho; i++)
	{
		vetor[i] = 1 + rand()%10;  //gerando n�meros aleat�rios no intervalo de 1 a 100
    }
}

void exibir (int vetor[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	printf ("\nElementos do vetor: ");
	
	//percorrendo todas as posi��es do vetor
	for (i=0;i<tamanho;i++)
	{
		printf ("%d  ", vetor[i]);
	}
	
	printf ("\n\n");
}
