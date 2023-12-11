/*
	FPR - 2021/1
	Prova a compor a AV2 - 06/07/2021
	
	Quest�o 01 [2,5 pontos]:
	
	a. Desenvolver uma fun��o que, dada uma lista encadeada L do tipo TLista, com seus elementos ordenados 
	   crescentemente, insira um n�mero inteiro em L, de forma que esta se mantenha ordenada.
	b. Considerando um arquivo contendo valores inteiros, um por linha, implementar uma fun��o que leia-os e os 
	   armazene em uma lista encadeada do tipo TLista, de forma que os elementos fiquem ordenados crescentemente.

	Notas:
 	- O tipo TLista citado � exatamente o tipo que definimos em nossas aulas, em todas as implementa��es envolvendo 
	  listas encadeadas.
 	- A fun��o do item b deve chamar a fun��o do item a.

  		
	ATEN��O: ESTE � APENAS UM ESQUELETO DO PROGRAMA, CABENDO AO ALUNO INCLUIR O QUE ELE ACHAR NECESS�RIO!

*/

//importa��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>

//defini��o de constantes
#define TRUE 1
#define FALSE 0

//declara��o de tipos
typedef struct No
{
	int valor;
	struct No *prox;
} TNo;

typedef TNo* TLista;

//prot�tipos das fun��es
int itemA (TLista *L, int numero);
int itemB (char nomeArq[], TLista *L);

void exibir (TLista L);

//main
void main ()
{
	//declara��o de vari�veis
	TLista lista = NULL;
	
	//chamando a fun��o
	if (itemB ("numeros.txt", &lista) == TRUE)
	{
		exibir (lista);		
	}
	else
	{
		printf ("\n\nErro na abertura do arquivo!\n");
	}
}

//implementa��o das fun��es

/*Dada uma lista encadeada L, com seus elementos ordenados crescentemente, inserir um n�mero inteiro em L, de forma 
que esta se mantenha ordenada.

Retornar� TRUE se a inser��o for feita e FALSE, caso contr�rio.*/
int itemA (TLista *L, int numero)
{

	//declara��o de vari�veis
	TLista aux1, aux2, novo;

    aux1 = *L;
    aux2 = NULL;
    
    novo = (TLista) malloc (sizeof(TNo));
    novo->valor = numero;

    if(!aux1){
    	
    	*L = novo;
    	
        novo->prox = NULL;
        
        return TRUE;
        
    } 
	
	else{
    	
        while(aux1 && aux1->valor<numero){
        	
            aux2 = aux1;
            
            aux1 = aux1->prox;
            
        }

        novo->prox = aux1;

	        if(!aux2){
	        	
	            *L = novo;
	            
	        } 
			
			else{
	        	
	            aux2->prox = novo;
	            
	            return TRUE;
	            
	        }
        
    }
    
    return FALSE;
    
}

/*Fun��o que l� os n�meros existentes em um arquivo e os transfere para uma lista encadeada, de forma que os 
elementos da lista fiquem ordenados crescentemente.*/
int itemB (char nomeArq[], TLista *L)
{
	//declara��o de vari�veis
	FILE *arq;
	int numero;
	
	//abertura do arquivo para leitura
	arq = fopen (nomeArq, "r");
	
	//testando se o arquivo foi ou n�o aberto
	if (arq == NULL){
		
		return 0;
		
	}
	
	else{
		
		while (fscanf (arq, "%d", &numero) != EOF){
			
				itemA (L, numero);
				
			}
			
	}
			
		//fechar o arquivo
		fclose (arq);
		
		return TRUE;
		
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
