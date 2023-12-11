/******************************************************************************
	FAETERJ-Rio
	2FPR - Manh� - 2021/1
	Professor Leonardo Vianna
	
	Data: 10/03/2021   -   Aula de revis�o	(Vetores)
	
	Exerc�cio 9: Busca bin�ria de um elemento em um vetor.
				 O(log2n)	
******************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define TAM 1000

//prot�tipos das fun��es
void preencher (int vetor[], int tamanho);
void exibir (int vetor[], int tamanho);

int buscaBinaria (int vetor[], int tamanho, int numero);

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
	
//implementa��o das fun��es
int buscaBinaria (int vetor[], int tamanho, int numero)
{
	//declara��o de vari�veis
	int inicio, fim, meio;
	
	//inicializando as vari�veis 'inicio' e 'fim'
	inicio = 0;
	fim = tamanho-1;
	
	while (inicio <= fim)
	{
		//calculando a posi��o 'meio' da por��o do vetor que est� sendo considerada
		meio = (inicio+fim)/2;
		
		//comparando o elemento buscado com aquele que est� no meio do vetor
	
		//--- esse printd est� aqui apenas para ilustrar o numero de compara��es feitas.
		printf ("comparando %d com %d\n", numero, vetor[meio]);
			
		if (numero == vetor[meio])
		{
			return meio;
		}
		else
		{
			//se o elemento buscado for menor do que aquele que est� no meio, a busca deve continuar apenas na por��o da esquerda
			if (numero < vetor[meio])
			{
				fim = meio-1;
			}
			else
			{
				//se o elemento buscado for maior do que aquele que est� no meio, a busca deve continuar apenas na por��o da direita
				inicio = meio + 1;
			}
		}		
	}
	
	//elemento n�o encontrado
	return -1;
}

void preencher(int vetor[], int tamanho)
{
    //declaracao de variaveis
    int i;
    
    srand (time(NULL));
    
    //armazenando na primeira posi��o um valor de 1 a 10
    vetor[0] = 1 + rand()%10;
    
    //corpo da fun��o
    for(i = 1; i < tamanho; i++)
	{
		vetor[i] = vetor[i-1] + rand()%5; 
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
