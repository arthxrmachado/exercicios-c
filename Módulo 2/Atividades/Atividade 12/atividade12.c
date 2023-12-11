/******************************************************************************

	FAETERJ-Rio
	
	2FPR - Manhã - 2021/1
	
	Aluno: Arthur Lourenço Machado
	
	Data: 03/07/2021   -   Atividade 12
	
	Questão 01:

	Implementar uma função que, dada uma lista encadeada L1, do tipo TLista, 
	crie uma nova lista L2, também do tipo TLista, contendo os elementos de 
	L1, porém na ordem inversa.
	
******************************************************************************/

///importação de bibliotecas
#include <stdio.h>
#include <stdlib.h>

//declaração de tipos
typedef struct No {
	
	int valor;
	struct No* prox;
	
} TNo;

typedef TNo* TLista;

//protótipos das funções
int inverso (TLista L1, TLista* L2);
int inserir (TLista* L, int numero);
void exibir (TLista L);

//main
void main (){
	
	//declaração de variáveis
	TLista L1 = NULL, L2 = NULL;
	
	//inserindo valores em L1
	inserir (&L1, 5);
	inserir (&L1, 4);
	inserir (&L1, 3);
	inserir (&L1, 2);
	inserir (&L1, 1);

	//exibindo as duas listas
	printf ("Lista 1:\n");
	exibir (L1);
	
	printf ("\n\nLista 2:\n");
	exibir (L2);
	
	inverso (L1, &L2);
	
	printf ("\n\nLista 1:\n");
	exibir (L1);
	
	printf ("\n\nLista 2:\n");
	exibir (L2);
	
}

//implementação das funções
int inverso (TLista L1, TLista* L2){
	
	//declaração de variáveis
	TLista aux1, aux2;
	
	//inicializando os auxiliares
	aux1 = L1;
	aux2 = *L2;
	
	//percorrendo a primeira lista
	while (aux1 != NULL){
		
		//alocando memória em aux2
		aux2 = (TLista) malloc (sizeof(TNo));
		
		//passando o valor de aux1 pra aux2
		aux2->valor = aux1->valor;
		
		//fazendo aux2 colocar os números na ordem inversa
		aux2->prox = *L2;
		
		*L2 = aux2;
		
		//indo para o próximo número
		aux1 = aux1->prox;	
			
	}

}

int inserir (TLista* L, int numero){
	
	//declaração de variáveis
	TLista aux;
	
	//Passo1: alocar memória para o novo elemento
	aux = (TLista) malloc (sizeof(TNo));
	
	//testar se a memória foi alocada
	if (aux == NULL){
		
		return 0;
		
	}
	
	else{
		
		//Passo2: Armazenar na memória alocada o novo valor						
		aux->valor = numero;
		
		//Passo3: Fazer o prox do novo nó apontar para o antigo primeiro elemento da lista		
		aux->prox = *L;
		
		//Passo4: Mandar L apontar para o novo nó			
		*L = aux;
		
		//retornando sucesso
		return 1;
		
	}
	
}

void exibir (TLista L){
	
	//declaração de variáveis
	TLista aux;
	
	//verificando se a lista está vazia
	if (L == NULL){
		
		printf ("Lista vazia!\n");
		
	}
	
	else{
		
		//iniciando aux com o endereço do primeiro nó
		aux = L;
		
		//percorrendo a lista até o seu final
		while (aux != NULL){
			
			//exibindo cada elemento da lista
			printf ("%d ", aux->valor);
			
			//andando com 'aux' para o próximo nó
			aux = aux->prox;
		}
		
	}
	
}
