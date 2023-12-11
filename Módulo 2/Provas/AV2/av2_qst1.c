/*
	FPR - 2021/1
	Prova a compor a AV2 - 06/07/2021
	
	Questão 01 [2,5 pontos]:
	
	a. Desenvolver uma função que, dada uma lista encadeada L do tipo TLista, com seus elementos ordenados 
	   crescentemente, insira um número inteiro em L, de forma que esta se mantenha ordenada.
	b. Considerando um arquivo contendo valores inteiros, um por linha, implementar uma função que leia-os e os 
	   armazene em uma lista encadeada do tipo TLista, de forma que os elementos fiquem ordenados crescentemente.

	Notas:
 	- O tipo TLista citado é exatamente o tipo que definimos em nossas aulas, em todas as implementações envolvendo 
	  listas encadeadas.
 	- A função do item b deve chamar a função do item a.

  		
	ATENÇÃO: ESTE É APENAS UM ESQUELETO DO PROGRAMA, CABENDO AO ALUNO INCLUIR O QUE ELE ACHAR NECESSÁRIO!

*/

//importação de bibliotecas
#include <stdio.h>
#include <stdlib.h>

//definição de constantes
#define TRUE 1
#define FALSE 0

//declaração de tipos
typedef struct No
{
	int valor;
	struct No *prox;
} TNo;

typedef TNo* TLista;

//protótipos das funções
int itemA (TLista *L, int numero);
int itemB (char nomeArq[], TLista *L);

void exibir (TLista L);

//main
void main ()
{
	//declaração de variáveis
	TLista lista = NULL;
	
	//chamando a função
	if (itemB ("numeros.txt", &lista) == TRUE)
	{
		exibir (lista);		
	}
	else
	{
		printf ("\n\nErro na abertura do arquivo!\n");
	}
}

//implementação das funções

/*Dada uma lista encadeada L, com seus elementos ordenados crescentemente, inserir um número inteiro em L, de forma 
que esta se mantenha ordenada.

Retornará TRUE se a inserção for feita e FALSE, caso contrário.*/
int itemA (TLista *L, int numero)
{

	//declaração de variáveis
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

/*Função que lê os números existentes em um arquivo e os transfere para uma lista encadeada, de forma que os 
elementos da lista fiquem ordenados crescentemente.*/
int itemB (char nomeArq[], TLista *L)
{
	//declaração de variáveis
	FILE *arq;
	int numero;
	
	//abertura do arquivo para leitura
	arq = fopen (nomeArq, "r");
	
	//testando se o arquivo foi ou não aberto
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
	//declaração de variáveis
	TLista aux;
	
	//verificando se a lista está vazia
	if (L == NULL)   // if (!L)
	{
		printf ("Lista vazia!\n");
	}
	else
	{
		printf ("Lista: ");
		
		//iniciando aux com o endereço do primeiro nó
		aux = L;
		
		//percorrendo a lista até o seu final
		while (aux != NULL)    //while (aux)
		{
			//exibindo cada elemento da lista
			printf ("%d ", aux->valor);
			
			//andando com 'aux' para o próximo nó
			aux = aux->prox;
		}
	}
}
