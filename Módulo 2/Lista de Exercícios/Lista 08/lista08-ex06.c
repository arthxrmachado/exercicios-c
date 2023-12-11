/*
	FPR - Manhã
	Data: 30/06/2021
	
	Lista de Exercícios X
	
	QUESTÃO 06:
	Desenvolver uma função que, dada uma lista L1, crie uma nova lista L2, 
	cópia de L1.
*/

//importação de bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração de constantes
#define TRUE 1
#define FALSE 0

//declaração de tipos
typedef struct No {
	int valor;			//no caso, representando uma lista de inteiros
	struct No* prox;
} TNo;

typedef TNo* TLista;

//protótipos das funções
void copiar (TLista L1, TLista *L2);

int inserir (TLista* L, int numero);
void exibir (TLista L);

//main
void main ()
{
	//declaração de variáveis
	TLista lista1 = NULL, 
	       lista2 = NULL;
	
	//inserindo valores em lista1
	inserir (&lista1, 1);
	inserir (&lista1, 2);
	inserir (&lista1, 3);
	inserir (&lista1, 4);
	inserir (&lista1, 5);
	
	//exibindo as duas listas
	printf ("Exibindo as listas antes da copia:\n\n");
	
	printf ("Lista1:\n");
	exibir (lista1);
	
	printf ("\n\nLista2:\n");
	exibir (lista2);

	//copiando os elementos da lista 1 para a lista 2
	copiar (lista1, &lista2);

	//exibindo as duas listas
	printf ("\n\nExibindo as listas depois da copia:\n\n");

	printf ("Lista1:\n");
	exibir (lista1);
	
	printf ("\n\nLista2:\n");
	exibir (lista2);
}

//implementação das funções
int inserir (TLista* L, int numero)
{
	//declaração de variáveis
	TLista aux;
	
	//Passo1: alocar memória para o novo elemento
	aux = (TLista) malloc (sizeof(TNo));
	
	//testar se a memória foi alocada
	if (aux == NULL) //if (!aux)
	{
		return FALSE;
	}
	else
	{
		//Passo2: Armazenar na memória alocada o novo valor						
		aux->valor = numero;
		
		//Passo3: Fazer o prox do novo nó apontar para o antigo primeiro elemento da lista		
		aux->prox = *L;
		
		//Passo4: Mandar L apontar para o novo nó			
		*L = aux;
		
		//retornando sucesso
		return TRUE;
	}	
}

void exibir (TLista L)
{
	//declaração de variáveis
	TLista aux;
	
	//verificando se a lista está vazia
	if (L == NULL)   // if (!L)
	{
		printf ("Lista vazia!\n");
	}
	else
	{
		printf ("Lista: ");
		
		//iniciando aux com o endereço do primeiro nó
		aux = L;
		
		//percorrendo a lista até o seu final
		while (aux != NULL)    //while (aux)
		{
			//exibindo cada elemento da lista
			printf ("%d ", aux->valor);
			
			//andando com 'aux' para o próximo nó
			aux = aux->prox;
		}
	}
}

void copiar (TLista L1, TLista *L2)
{
	//declaração de variáveis
	TLista aux1, aux2, novo;
	
	//inicializando o aux1
	aux1 = L1;
	
	//percorrendo toda a lista L1
	while (aux1)
	{
		//alocando memória para o novo nó de L2
		novo = (TLista) malloc (sizeof(TNo));
		
		novo->valor = aux1->valor;
		
		//verificando se este será o primeiro nó da lista
		if (!(*L2)) // ou    if (*L2 == NULL)
		{
			//*L2 = novo;
			//aux2 = novo;
			
			*L2 = aux2 = novo;
		}
		else
		{
			aux2->prox = novo;
			
			aux2 = aux2->prox;
		}
		
		//atualizando aux1
		aux1 = aux1->prox;
	}
	
	//terminando *L2 com NULL
	aux2->prox = NULL;
}
