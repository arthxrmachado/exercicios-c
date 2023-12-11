/******************************************************************************

	FAETERJ-Rio
	
	2FPR - Manh� - 2021/1
	
	Aluno: Arthur Louren�o Machado
	
	Data: 25/06/2021   -   Atividade 10
	
	Quest�o 01:

	Implementar uma fun��o que armazene em uma lista encadeada os n primeiros m�ltiplos do n�mero x.


	Observa��o: os elementos devem estar dispostos do menor m�ltiplo para o maior.
	
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

void multiplos (TLista *L, int numero, int quant);
void exibir (TLista L);

//main

void main (){
	
	//declara��o de vari�veis
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
	
	//chamando a fun��o
	multiplos (&L1, x, n);
	exibir (L1);
		
}

//implementa��o das fun��es
void multiplos (TLista *L, int numero, int quant){
	
	//declara��o de vari�veis
	TLista aux;
	int i;
	
	for (i=quant-1; i>=0; i--){

		//alocar mem�ria para o novo elemento
		aux = (TLista) malloc (sizeof(TNo));
	
		//verificando se a mem�ria solicitada n�o foi alocada
		if (aux == NULL){
			
			printf("\nErro na alocacao de memoria!");
			
		}
		
		else{
			
			//armazenar o novo valor na mem�ria rec�m alocada
			aux->valor = (numero*i);
			
			aux->prox = *L;
			
			//fazer com que o L aponte para o novo elemento
			*L = aux;
			
		}
	
	}

}

void exibir (TLista L){
	
	//declara��o de vari�veis
	TLista aux;
	
	//testando se a lista est� vazia
	if (L == NULL){
		
		printf ("\nLista Vazia!\n\n");
		
	}
	
	else{
		
		printf ("\nLista: ");
		
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
