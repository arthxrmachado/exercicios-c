/*
   FAC - Turma B
   Professor Leonardo Vianna
   Data: 19/11/2020
   
   Lista de Exerc�cios X
   
   QUEST�O 08:
   Dados um vetor de reais (cujos elementos est�o ordenados 
   crescentemente) e um n�mero x, retornar a posi��o da primeira 
   ocorr�ncia de x (caso encontre-se no vetor) ou a posi��o na 
   qual deveria estar (caso contr�rio).
   
   Exemplo:
   
   vetor:  1  4  8  8  9  12 12 12 15 20		
           0  1  2  3  4  5  6  7  8  9  	quantidade: 10
           
   buscar o n� 15: retornar 8    
   buscar o n� 12: retornar 5
   buscar o n� 10: retornar 5   
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define CAP 20

//prot�tipos das fun��es
void preencherVetor (float v[], int tamanho);
void exibirVetor (float v[], int tamanho);
int buscar (float v[], int quantidade, float numero);

//main
void main()
{
	//declara��o de vari�veis
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
    
    //chamando a fun��o
	posicao = buscar (vetor, CAP, num);
    
	printf ("\n\nPosicao: %d\n", posicao);
}

//implementa��o das fun��es

//preenchendo o vetor com valores gerados randomicamente
void preencherVetor (float v[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	//garantindo que a sequ�ncia mude a cada altera��o
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
	//declara��o de vari�veis
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
	//declara��o de vari�veis;
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
	
	//retornando a posi��o, caso o n�mero seja maior do que todos no vetor
	return quantidade; //ou return i;
}
