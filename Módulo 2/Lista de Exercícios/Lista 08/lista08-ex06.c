/*
	FPR - Manh�
	Data: 30/06/2021
	
	Lista de Exerc�cios X
	
	QUEST�O 06:
	Desenvolver uma fun��o que, dada uma lista L1, crie uma nova lista L2, 
	c�pia de L1.
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o de constantes
#define TRUE 1
#define FALSE 0

//declara��o de tipos
typedef struct No {
	int valor;			//no caso, representando uma lista de inteiros
	struct No* prox;
} TNo;

typedef TNo* TLista;

//prot�tipos das fun��es
void copiar (TLista L1, TLista *L2);

int inserir (TLista* L, int numero);
void exibir (TLista L);

//main
void main ()
{
	//declara��o de vari�veis
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

//implementa��o das fun��es
int inserir (TLista* L, int numero)
{
	//declara��o de vari�veis
	TLista aux;
	
	//Passo1: alocar mem�ria para o novo elemento
	aux = (TLista) malloc (sizeof(TNo));
	
	//testar se a mem�ria foi alocada
	if (aux == NULL) //if (!aux)
	{
		return FALSE;
	}
	else
	{
		//Passo2: Armazenar na mem�ria alocada o novo valor						
		aux->valor = numero;
		
		//Passo3: Fazer o prox do novo n� apontar para o antigo primeiro elemento da lista		
		aux->prox = *L;
		
		//Passo4: Mandar L apontar para o novo n�			
		*L = aux;
		
		//retornando sucesso
		return TRUE;
	}	
}

void exibir (TLista L)
{
	//declara��o de vari�veis
	TLista aux;
	
	//verificando se a lista est� vazia
	if (L == NULL)   // if (!L)
	{
		printf ("Lista vazia!\n");
	}
	else
	{
		printf ("Lista: ");
		
		//iniciando aux com o endere�o do primeiro n�
		aux = L;
		
		//percorrendo a lista at� o seu final
		while (aux != NULL)    //while (aux)
		{
			//exibindo cada elemento da lista
			printf ("%d ", aux->valor);
			
			//andando com 'aux' para o pr�ximo n�
			aux = aux->prox;
		}
	}
}

void copiar (TLista L1, TLista *L2)
{
	//declara��o de vari�veis
	TLista aux1, aux2, novo;
	
	//inicializando o aux1
	aux1 = L1;
	
	//percorrendo toda a lista L1
	while (aux1)
	{
		//alocando mem�ria para o novo n� de L2
		novo = (TLista) malloc (sizeof(TNo));
		
		novo->valor = aux1->valor;
		
		//verificando se este ser� o primeiro n� da lista
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
