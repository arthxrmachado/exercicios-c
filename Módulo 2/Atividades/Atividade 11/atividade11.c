/******************************************************************************

	FAETERJ-Rio
	
	2FPR - Manhã - 2021/1
	
	Aluno: Arthur Lourenço Machado
	
	Data: 27/06/2021   -   Atividade 11
	
	Questão 01:

	Desenvolver uma função que insira um número inteiro N na i-ésima posição de 
	uma lista encadeada L, do tipo TLista.
 
	Observação: caso a posição i informada seja inválida, a função deverá 
	retornar o valor 0; caso contrário, o retorno será igual a 1.
	
******************************************************************************/

//importação de bibliotecas
#include <stdio.h>
#include <stdlib.h>

//definição de tipos
typedef struct No{
	
	int valor;
	struct No* prox;
	
} TNo;

typedef TNo* TLista;

//protótipo das funções

int inserirPos (TLista *L, int numero, int posicao);
int inserir (TLista* L, int numero);
void exibir (TLista L);

//main

void main (){
	
	//declaração de variáveis
	TLista L1 = NULL;
	int x, pos;
	
	//inserindo valores em L1
	inserir (&L1, 5);
	inserir (&L1, 4);
	inserir (&L1, 3);
	inserir (&L1, 2);
	inserir (&L1, 1);
	
	exibir(L1);
	
	//digitando o número a ser colocado na lista
	printf("\n\nDigite um numero: ");
	scanf("%d" , &x);
	
	//digitando a posição que esse número será colocado
	printf("\nDigite a posicao da lista que deseja inserir esse numero: ");
	scanf("%d" , &pos);
				
	//chamando a função e printando seu retorno
	printf("\nRetorno: %d\n\n", inserirPos(&L1, x, pos));
	
	//exibindo lista com novo número
	exibir(L1);
		
}

//implementação das funções
int inserirPos (TLista *L, int numero, int posicao){
	
	//declaração de variáveis
	TLista aux, aux2, novo;
	int i;
	
	//inicializando 'aux' de forma que aponte para o primeiro nó da lista
	aux = *L;
		
	//percorrendo todos os nós da lista. ps: a lista vai de 1 à 6
	for (i=1; aux!= NULL; i++){
		
		//se o usuário resolver colocar um novo número no início da lista
		if (posicao == 1){
			
			//alocando memória
			aux = (TLista) malloc (sizeof(TNo));
	
			//armazenar na memória alocada o novo valor						
			aux->valor = numero;
		
			//fazer o prox do novo nó apontar para o antigo primeiro elemento da lista		
			aux->prox = *L;
		
			//mandar L apontar para o novo nó			
			*L = aux;
			
			return 1;
			
		}
		
		if (i == posicao-1){
			
			//alocando memória
			novo = (TLista) malloc (sizeof(TNo));
			
			//aux2 guarda a posição que vem depois da seguinte na lista
			aux2 = aux->prox;
			
			//posição seguinte recebe uma nova posição
			aux->prox = novo;
			
			//valor de novo é preenchido
			novo->valor = numero;
			
			//novo aponta pro nó que havia sido guardado anteriormente
			novo->prox = aux2;
			
			return 1;
					
		}
		
		//andando com a lista
		aux = aux->prox;
		
	}		
	
	//posição inválida
	return 0;
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
	
	//testando se a lista está vazia
	if (L == NULL){
		
		printf ("\nLista Vazia!\n");
		
	}
	
	else{
		
		printf ("Lista: ");
		
		//inicializando 'aux' de forma que aponte para o primeiro nó da lista
		aux = L;
		
		//percorrendo todos os nós da lista
		while (aux != NULL){
			
			//exibindo o valor apontado pelo 'aux'
			printf ("%d ", aux->valor);
			
			//andar com o 'aux' de forma que ele aponte para o próximo nó
			aux = aux->prox;
			
		}
		
		
	}
	
}

