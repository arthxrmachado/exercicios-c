/*
	FPR - Manh�
	Data: 30/06/2021
	
	Lista de Exerc�cios X
	
	QUEST�O 04:
	Implementar uma fun��o que, dadas duas listas din�micas do tipo TLista, 
	verifique se estas s�o iguais; isto �, cont�m os mesmos elementos, na 
	mesma ordem.
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
int iguais (TLista L1, TLista L2);

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
	inserir (&lista2, 1);
	inserir (&lista2, 2);
	inserir (&lista2, 3);
	inserir (&lista2, 4);
	inserir (&lista2, 5);
	
	//inserindo valores em lista3
	inserir (&lista3, 7);
	inserir (&lista3, 4);
	inserir (&lista3, 8);
	inserir (&lista3, 1);

	//exibindo as tr�s listas
	printf ("Lista1:\n");
	exibir (lista1);
	
	printf ("\n\nLista2:\n");
	exibir (lista2);

	printf ("\n\nLista3:\n");
	exibir (lista3);
	
	//verificando se lista1 e lista2 s�o iguais (sabemos que s�o)
	if (iguais (lista1, lista2) == TRUE)
	{
		printf ("\n\nAs listas lista1 e lista2 sao iguais!\n");
	}
	else
	{
		printf ("\nAs listas lista1 e lista2 nao sao iguais!\n");
	}
	
	//verificando se lista1 e lista3 s�o iguais (sabemos que n�o s�o)
	if (iguais (lista1, lista3) == TRUE)
	{
		printf ("\nAs listas lista1 e lista3 sao iguais!\n");
	}
	else
	{
		printf ("\nAs listas lista1 e lista3 nao sao iguais!\n");
	}
}

//implementa��o das fun��es
int iguais (TLista L1, TLista L2)
{
	//declara��o de vari�veis
	TLista aux1, aux2;
	
	//inicializando os auxiliares
	aux1 = L1;
	aux2 = L2;
	
	while ((aux1 != NULL) && (aux2 != NULL))
	//while (aux1 && aux2)
	{
		//comparando os elementos
		if (aux1->valor != aux2->valor)
		{
			return FALSE;
		}		
		
		//atualizando os auxiliares
		aux1 = aux1->prox;
		aux2 = aux2->prox;		
	}
	
	//verificando se as duas listas terminaram
	if (!aux1 && !aux2)
	//if ((aux1 == NULL) && (aux2 == NULL))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	
	/*
	//verificando se alguma lista ainda possui elementos
	if ((aux1 != NULL) || (aux2 != NULL))
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
	
	if (aux1 == aux2)  //implicitamente, testando se os dois s�o NULL
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}*/
}

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
