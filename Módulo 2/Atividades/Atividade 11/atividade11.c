/******************************************************************************

	FAETERJ-Rio
	
	2FPR - Manh� - 2021/1
	
	Aluno: Arthur Louren�o Machado
	
	Data: 27/06/2021   -   Atividade 11
	
	Quest�o 01:

	Desenvolver uma fun��o que insira um n�mero inteiro N na i-�sima posi��o de 
	uma lista encadeada L, do tipo TLista.
 
	Observa��o: caso a posi��o i informada seja inv�lida, a fun��o dever� 
	retornar o valor 0; caso contr�rio, o retorno ser� igual a 1.
	
******************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>

//defini��o de tipos
typedef struct No{
	
	int valor;
	struct No* prox;
	
} TNo;

typedef TNo* TLista;

//prot�tipo das fun��es

int inserirPos (TLista *L, int numero, int posicao);
int inserir (TLista* L, int numero);
void exibir (TLista L);

//main

void main (){
	
	//declara��o de vari�veis
	TLista L1 = NULL;
	int x, pos;
	
	//inserindo valores em L1
	inserir (&L1, 5);
	inserir (&L1, 4);
	inserir (&L1, 3);
	inserir (&L1, 2);
	inserir (&L1, 1);
	
	exibir(L1);
	
	//digitando o n�mero a ser colocado na lista
	printf("\n\nDigite um numero: ");
	scanf("%d" , &x);
	
	//digitando a posi��o que esse n�mero ser� colocado
	printf("\nDigite a posicao da lista que deseja inserir esse numero: ");
	scanf("%d" , &pos);
				
	//chamando a fun��o e printando seu retorno
	printf("\nRetorno: %d\n\n", inserirPos(&L1, x, pos));
	
	//exibindo lista com novo n�mero
	exibir(L1);
		
}

//implementa��o das fun��es
int inserirPos (TLista *L, int numero, int posicao){
	
	//declara��o de vari�veis
	TLista aux, aux2, novo;
	int i;
	
	//inicializando 'aux' de forma que aponte para o primeiro n� da lista
	aux = *L;
		
	//percorrendo todos os n�s da lista. ps: a lista vai de 1 � 6
	for (i=1; aux!= NULL; i++){
		
		//se o usu�rio resolver colocar um novo n�mero no in�cio da lista
		if (posicao == 1){
			
			//alocando mem�ria
			aux = (TLista) malloc (sizeof(TNo));
	
			//armazenar na mem�ria alocada o novo valor						
			aux->valor = numero;
		
			//fazer o prox do novo n� apontar para o antigo primeiro elemento da lista		
			aux->prox = *L;
		
			//mandar L apontar para o novo n�			
			*L = aux;
			
			return 1;
			
		}
		
		if (i == posicao-1){
			
			//alocando mem�ria
			novo = (TLista) malloc (sizeof(TNo));
			
			//aux2 guarda a posi��o que vem depois da seguinte na lista
			aux2 = aux->prox;
			
			//posi��o seguinte recebe uma nova posi��o
			aux->prox = novo;
			
			//valor de novo � preenchido
			novo->valor = numero;
			
			//novo aponta pro n� que havia sido guardado anteriormente
			novo->prox = aux2;
			
			return 1;
					
		}
		
		//andando com a lista
		aux = aux->prox;
		
	}		
	
	//posi��o inv�lida
	return 0;
}

int inserir (TLista* L, int numero){
	
	//declara��o de vari�veis
	TLista aux;
	
	//Passo1: alocar mem�ria para o novo elemento
	aux = (TLista) malloc (sizeof(TNo));
	
	//testar se a mem�ria foi alocada
	if (aux == NULL){
		
		return 0;
		
	}
	
	else{
		
		//Passo2: Armazenar na mem�ria alocada o novo valor						
		aux->valor = numero;
		
		//Passo3: Fazer o prox do novo n� apontar para o antigo primeiro elemento da lista		
		aux->prox = *L;
		
		//Passo4: Mandar L apontar para o novo n�			
		*L = aux;
		
		//retornando sucesso
		return 1;
		
	}
	
}

void exibir (TLista L){
	
	//declara��o de vari�veis
	TLista aux;
	
	//testando se a lista est� vazia
	if (L == NULL){
		
		printf ("\nLista Vazia!\n");
		
	}
	
	else{
		
		printf ("Lista: ");
		
		//inicializando 'aux' de forma que aponte para o primeiro n� da lista
		aux = L;
		
		//percorrendo todos os n�s da lista
		while (aux != NULL){
			
			//exibindo o valor apontado pelo 'aux'
			printf ("%d ", aux->valor);
			
			//andar com o 'aux' de forma que ele aponte para o pr�ximo n�
			aux = aux->prox;
			
		}
		
		
	}
	
}

