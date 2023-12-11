/******************************************************************************

	FAETERJ-Rio
	
	2FPR - Manhã - 2021/1
	
	Aluno: Arthur Lourenço Machado
	
	Data: 16/06/2021   -   Atividade 9
	
	Questão 01:

	Implementar uma função que destrua todos os elementos de uma lista encadeada 
	do tipo TLista.

	Observação: apresentar a solução em duas versões: uma iterativa e outra 
	recursiva.
	
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

void remover (TLista *L);
void removerRecursiva (TLista *L);
int inserir (TLista *L, int numero);
void exibir (TLista L);

//main

void main (){
	
	//declaração de variáveis
	TLista L1 = NULL;
	int num, opcao;
	
	//while para apresentar as opções para o usuário escolher
	do{
		
		opcao = menu ();
	
		switch (opcao){
		
			//inserindo um número novo na lista
			case 1: printf ("\nEntre com o numero a ser inserido: ");
					scanf ("%d", &num);
		
					if (inserir (&L1, num) == 1){
			
						printf ("\nO numero %d foi inserido na lista!\n\n", num);
				        	
					}
		
					else{
			
						printf ("\nERRO: o numero %d nao foi inserido na lista!\n\n", num);
			
					}
					break;
					
			//removendo todos os números da lista
			case 2: remover/*removerRecursiva*/(&L1);
			
					printf("\nDestruicao bem sucedida.\n\n");
					break;
					
			//exibindo a lista	
			case 3: exibir (L1);
			        break;
			
			//finalizando programa
			case 4: printf ("\nFim do programa.\n\n");
				    break;
			
			//caso o usuário digite uma opção inválida
			default: printf("Digite uma opcao valida.\n\n");
			
		}
		
	system ("pause");
	
	}while(opcao != 4);
		
}

//implementação das funções

void remover (TLista *L){
	
	//declaração de variáveis
	TLista aux;

	while (*L != NULL){
		
		//fazer um auxiliar apontar para o primeiro nó
		aux = *L;
		
		//fazer 'L' apontar para o "2º" elemento
		*L = aux->prox;
		
		//liberar a memória apontada por 'aux'
		free (aux);
		
	}
	
}

void removerRecursiva (TLista *L){
	
	//declaração de variáveis
	TLista aux;

	if(*L != NULL){
		
		//fazer um auxiliar apontar para o primeiro nó
		aux = *L;
		
		//fazer 'L' apontar para o "2º" elemento
		*L = aux->prox;
		
		//liberar a memória apontada por 'aux'
		free (aux);
		
		//chamando a função novamente
		removerRecursiva (L);
		
	}
	
}

int inserir (TLista *L, int numero){
	
	//declaração de variáveis
	TLista aux;
	
	//alocar memória para o novo elemento
	aux = (TLista) malloc (sizeof(TNo));

	//verificando se a memória solicitada não foi alocada
	if (aux == NULL){
		
		return 0;
		
	}
	
	else{
		
		//armazenar o novo valor na memória recém alocada
		aux->valor = numero;
		
		//fazer o novo nó apontar para o nó que, até então, era o primeiro da lista.
		aux->prox = *L;
		
		//fazer com que o L aponte para o novo elemento
		*L = aux;
		
		return 1;
		
	}

}

void exibir (TLista L){
	
	//declaração de variáveis
	TLista aux;
	
	//testando se a lista está vazia
	if (L == NULL){
		
		printf ("\nLista Vazia!\n\n");
		
	}
	
	else{
		
		printf ("\nLista: ");
		
		//inicializando 'aux' de forma que aponte para o primeiro nó da lista
		aux = L;
		
		//percorrendo todos os nós da lista
		while (aux != NULL){
			
			//exibindo o valor apontado pelo 'aux'
			printf ("%d ", aux->valor);
			
			//andar com o 'aux' de forma que ele aponte para o próximo nó
			aux = aux->prox;
			
		}
		
		printf ("\n\n");
		
	}
	
}

int menu (){
	
	int op;
	
	system ("cls");
	
	printf ("Menu:\n\n");
	
	printf ("(1) Inserir\n(2) Destruir lista\n(3) Exibir\n(4) Sair\n\n");
	
	scanf ("%d", &op);
	
	return op;
}
