/******************************************************************************
	FAETERJ-Rio
	2FPR - Manh� - 2021/1
	Professor Leonardo Vianna
	
	Data: 10/03/2021   -   Aula de revis�o	(Vetores)
	
	Exerc�cio 7: Busca linear de um elemento.
	
******************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define TAM 10

//prot�tipos das fun��es
void preencher (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

int buscaLinear (int vetor[], int tamanho, int numero);

//fun��o main
void main ()
{
	//declara��o de vari�veis
	int v[TAM], pos, num;
	
	//chamando a fun��o para preencher o vetor 'v'
	preencher (v, TAM);
	
	//exibindo o vetor 'v' antes da invers�o
	exibir (v, TAM);
	
	//obtendo o valor a ser pesquisado
	printf ("Entre com o valor a ser pesquisado: ");
	scanf ("%d", &num);
	
	//chamando a fun��o para buscar o elemento
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
	
//implementa��o das fun��es
int buscaLinear (int vetor[], int tamanho, int numero)
{
	//declara��o de vari�veis
	int i;
	
	//percorrendo o vetor
	for (i=0;i<tamanho;i++)
	{
		if (numero == vetor[i])   //elemento encontrado
		{
			return i;
		}
	}	
	
	//elemento n�o existe no vetor
	return -1;
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
