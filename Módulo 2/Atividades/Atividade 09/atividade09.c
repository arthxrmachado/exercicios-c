/******************************************************************************

	FAETERJ-Rio
	
	2FPR - Manh� - 2021/1
	
	Aluno: Arthur Louren�o Machado
	
	Data: 16/06/2021   -   Atividade 9
	
	Quest�o 01:

	Implementar uma fun��o que destrua todos os elementos de uma lista encadeada 
	do tipo TLista.

	Observa��o: apresentar a solu��o em duas vers�es: uma iterativa e outra 
	recursiva.
	
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

void remover (TLista *L);
void removerRecursiva (TLista *L);
int inserir (TLista *L, int numero);
void exibir (TLista L);

//main

void main (){
	
	//declara��o de vari�veis
	TLista L1 = NULL;
	int num, opcao;
	
	//while para apresentar as op��es para o usu�rio escolher
	do{
		
		opcao = menu ();
	
		switch (opcao){
		
			//inserindo um n�mero novo na lista
			case 1: printf ("\nEntre com o numero a ser inserido: ");
					scanf ("%d", &num);
		
					if (inserir (&L1, num) == 1){
			
						printf ("\nO numero %d foi inserido na lista!\n\n", num);
				        	
					}
		
					else{
			
						printf ("\nERRO: o numero %d nao foi inserido na lista!\n\n", num);
			
					}
					break;
					
			//removendo todos os n�meros da lista
			case 2: remover/*removerRecursiva*/(&L1);
			
					printf("\nDestruicao bem sucedida.\n\n");
					break;
					
			//exibindo a lista	
			case 3: exibir (L1);
			        break;
			
			//finalizando programa
			case 4: printf ("\nFim do programa.\n\n");
				    break;
			
			//caso o usu�rio digite uma op��o inv�lida
			default: printf("Digite uma opcao valida.\n\n");
			
		}
		
	system ("pause");
	
	}while(opcao != 4);
		
}

//implementa��o das fun��es

void remover (TLista *L){
	
	//declara��o de vari�veis
	TLista aux;

	while (*L != NULL){
		
		//fazer um auxiliar apontar para o primeiro n�
		aux = *L;
		
		//fazer 'L' apontar para o "2�" elemento
		*L = aux->prox;
		
		//liberar a mem�ria apontada por 'aux'
		free (aux);
		
	}
	
}

void removerRecursiva (TLista *L){
	
	//declara��o de vari�veis
	TLista aux;

	if(*L != NULL){
		
		//fazer um auxiliar apontar para o primeiro n�
		aux = *L;
		
		//fazer 'L' apontar para o "2�" elemento
		*L = aux->prox;
		
		//liberar a mem�ria apontada por 'aux'
		free (aux);
		
		//chamando a fun��o novamente
		removerRecursiva (L);
		
	}
	
}

int inserir (TLista *L, int numero){
	
	//declara��o de vari�veis
	TLista aux;
	
	//alocar mem�ria para o novo elemento
	aux = (TLista) malloc (sizeof(TNo));

	//verificando se a mem�ria solicitada n�o foi alocada
	if (aux == NULL){
		
		return 0;
		
	}
	
	else{
		
		//armazenar o novo valor na mem�ria rec�m alocada
		aux->valor = numero;
		
		//fazer o novo n� apontar para o n� que, at� ent�o, era o primeiro da lista.
		aux->prox = *L;
		
		//fazer com que o L aponte para o novo elemento
		*L = aux;
		
		return 1;
		
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
