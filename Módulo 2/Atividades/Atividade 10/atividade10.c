/******************************************************************************

	FAETERJ-Rio
	
	2FPR - Manhã - 2021/1
	
	Aluno: Arthur Lourenço Machado
	
	Data: 25/06/2021   -   Atividade 10
	
	Questão 01:

	Implementar uma função que armazene em uma lista encadeada os n primeiros múltiplos do número x.


	Observação: os elementos devem estar dispostos do menor múltiplo para o maior.
	
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

void multiplos (TLista *L, int numero, int quant);
void exibir (TLista L);

//main

void main (){
	
	//declaração de variáveis
	TLista L1 = NULL;
	int x, n;
	
	//iniciando o programa
	printf("##############################################################");
	printf("\n### PROGRAMA PARA CALCULAR MULTIPLOS DE UM NUMERO QUALQUER ###\n");
	printf("##############################################################\n\n");
	
	printf("Digite um numero: ");
	scanf("%d" , &x);
	
	printf("Digite a quantidade de multiplos que deseja visualizar: ");
	scanf("%d" , &n);
	
	//chamando a função
	multiplos (&L1, x, n);
	exibir (L1);
		
}

//implementação das funções
void multiplos (TLista *L, int numero, int quant){
	
	//declaração de variáveis
	TLista aux;
	int i;
	
	for (i=quant-1; i>=0; i--){

		//alocar memória para o novo elemento
		aux = (TLista) malloc (sizeof(TNo));
	
		//verificando se a memória solicitada não foi alocada
		if (aux == NULL){
			
			printf("\nErro na alocacao de memoria!");
			
		}
		
		else{
			
			//armazenar o novo valor na memória recém alocada
			aux->valor = (numero*i);
			
			aux->prox = *L;
			
			//fazer com que o L aponte para o novo elemento
			*L = aux;
			
		}
	
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
		
		
	}
	
}
