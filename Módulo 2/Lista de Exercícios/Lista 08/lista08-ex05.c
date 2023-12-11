/*
	FPR - Manh�
	Data: 30/06/2021
	
	Lista de Exerc�cios X
	
	QUEST�O 05:
	Implementar uma fun��o que, dadas duas listas din�micas do tipo TLista, 
	verifique se elas possuem os mesmos elementos, independente da ordem na qual 
	apare�am.
	
	Exemplos:
	
		L1		1 2 3 4					possuem os mesmos elementos
		L2		1 2 3 4
		
		L1		1 2 3 4					possuem os mesmos elementos
		L2 		4 3 2 1
		
		L1		1 3 2 5 4 1 2 3			possuem os mesmos elementos
		L2		1 2 3 4 5
		
		L1 		1 2 3 4 5				n�o possuem os mesmos elementos
		L2		1 4 2 3 5 2 1 4 6 3 2
*/

//importa��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declara��o de constantes
#define FALSE 0
#define TRUE 1

//declara��o de tipos
typedef struct No {
	int valor;			//no caso, representando uma lista de inteiros
	struct No* prox;
} TNo;

typedef TNo* TLista;

//prot�tipos das fun��es
int possuemMesmosElementos (TLista listaA, TLista listaB);
int contido (TLista L1, TLista L2);
int buscar (TLista L, int numero);

int inserir (TLista* L, int numero);
void exibir (TLista L);

//main
void main ()
{
	//declara��o de vari�veis
	TLista lista1 = NULL, 
	       lista2 = NULL,
		   lista3 = NULL;
	
	//inserindo valores em lista1
	inserir (&lista1, 1);
	inserir (&lista1, 2);
	inserir (&lista1, 3);
	inserir (&lista1, 4);
	inserir (&lista1, 5);
	
	//inserindo os mesmos elementos em lista2
	inserir (&lista2, 4);
	inserir (&lista2, 5);
	inserir (&lista2, 2);
	inserir (&lista2, 4);
	inserir (&lista2, 1);
	inserir (&lista2, 3);
	inserir (&lista2, 2);
	
	//inserindo valores em lista3
	inserir (&lista3, 3);
	inserir (&lista3, 1);
	inserir (&lista3, 4);
	inserir (&lista3, 2);
	inserir (&lista3, 6);
	inserir (&lista3, 1);
	inserir (&lista3, 5);
	
	//exibindo as tr�s listas
	printf ("Lista1:\n");
	exibir (lista1);
	
	printf ("\n\nLista2:\n");
	exibir (lista2);

	printf ("\n\nLista3:\n");
	exibir (lista3);
	
	//verificando se lista1 e lista2 possuem os mesmos elementos (sabemos que sim)
	if (possuemMesmosElementos (lista1, lista2) == TRUE)
	{
		printf ("\n\nAs listas lista1 e lista2 possuem os mesmos elementos!\n");
	}
	else
	{
		printf ("\nAs listas lista1 e lista2 nao possuem os mesmos elementos!\n");
	}
	
	//verificando se lista2 e lista3 possuem os mesmos elementos (sabemos que n�o)
	if (possuemMesmosElementos (lista2, lista3) == TRUE)
	{
		printf ("\n\nAs listas lista2 e lista3 possuem os mesmos elementos!\n");
	}
	else
	{
		printf ("\nAs listas lista2 e lista3 nao possuem os mesmos elementos!\n");
	}
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

int buscar (TLista L, int numero)
{
	//declara��o de vari�veis
	TLista aux;
	
	//inicializando 'aux' de forma que aponte para o primeiro n� da lista
	aux = L;
		
	//percorrendo todos os n�s da lista
	while (aux != NULL) //while (aux) 
	{
		//verificando se 'numero' foi encontrado
		if (aux->valor == numero)
		{
			return TRUE;
		}
				
		//andar com o 'aux' de forma que ele aponte para o pr�ximo n�
		aux = aux->prox;
	}		
	
	//'numero' n�o existe na lista
	return FALSE;
}

int possuemMesmosElementos (TLista listaA, TLista listaB)
{
	if ((contido (listaA, listaB) == TRUE) && //verificando se todos os elementos da listaA est�o na listaB
	    (contido (listaB, listaA) == TRUE))   //verificando se todos os elementos da listaB est�o na listaA
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int contido (TLista L1, TLista L2)
{
	//declara��o de vari�veis
	TLista aux;
	
	//fazendo o auxiliar apontar para o primeiro elemento da lista L1
	aux = L1;
	
	//permanecer na lista enquanto o auxiliar n�o chegar a NULL
	while (aux)
	{		
		if (buscar (L2, aux->valor) == FALSE)	
		{
			return FALSE;
		}	
		
		//atualizando o auxiliar
		aux = aux->prox;
	}
	
	//se chegou at� aqui, � porque todos os elementos de L1 est�o em L2
	return TRUE;
}
