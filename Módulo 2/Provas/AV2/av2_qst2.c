/*
	FAETERJ-Rio
	
	2FPR - Manhã - 2021/1
	
	Aluno: Arthur Lourenço Machado
	
	Data: 06/07/2021   -   AV2
	
	Questão 02:

*/

//importação de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//definição de constantes
#define TRUE 1
#define FALSE 0

//declaração de tipos

typedef struct No1
{
	
	int matricula;
	float nota;
	char disciplina[20];
	struct No1 *prox;
	
} TNo1;

typedef struct No2
{
	
	float media;
	char disciplina[20];
	struct No2 *prox;
	
} TNo2;

typedef TNo1* TNotas;
typedef TNo2* TDisciplinas;

//protótipos das funções
void questao02 (TNotas L1, TDisciplinas *L2);

//algumas funções auxiliares
void exibirNotas (TNotas L);
void exibirDisciplinas (TDisciplinas L);
int inserirNotas (TNotas *L, int matricula, char disciplina[20], float nota);

//main
void main ()
{
	//declaração de variáveis [criando uma lista de cada tipo e inicializando-as com NULL]
	TNotas notas = NULL;
	TDisciplinas disc = NULL;
	
	//inserindo dados na lista notas
	inserirNotas (&notas, 123456, "FAC", 8.5);
	inserirNotas (&notas, 234567, "ESD", 2.0);
	inserirNotas (&notas, 345678, "ESD", 10.0);
	inserirNotas (&notas, 456789, "FPR", 6.0);
	inserirNotas (&notas, 567890, "FAC", 4.5);
	inserirNotas (&notas, 678901, "FPR", 5.0);
	inserirNotas (&notas, 454545, "OO1", 8.0);
	inserirNotas (&notas, 789012, "FPR", 6.5);
	inserirNotas (&notas, 890123, "ESD", 9.0);
	inserirNotas (&notas, 901234, "FAC", 7.0);
	inserirNotas (&notas, 111111, "FAC", 1.5);
	
	//exibindo a lista de notas
	exibirNotas (notas);
	
	//chamando a função
	questao02 (notas, &disc);
	
	printf("\n\n");

	//exibindo a lista de disciplinas	
	exibirDisciplinas (disc);
}

//implementação das funções

/* A partir de uma lista encadeada L1, do tipo TNotas, cria uma lista encadeada L2, do tipo TDisciplina.*/
void questao02 (TNotas L1, TDisciplinas *L2)
{
	//declaração de variáveis
	TNotas aux, aux1;
	TDisciplinas aux2, novo;
	int cont = 0;
	
	aux = L1;
	aux1 = L1;
	aux2 = *L2;
	
	//vazio
	aux2 = (TDisciplinas) malloc (sizeof(TNo2));
	
	strcpy (aux2->disciplina, aux->disciplina);

	printf("\n(%s)" , aux2->disciplina);
	printf("\n");
	
	while (aux != NULL){
		
		if (strcmp(aux->disciplina, aux2->disciplina) == 0){
			
			aux2->media += aux->nota;
			
			printf ("\n%.1f" , aux2->media);
				
			cont++;
				
		}
		
		//andar com o 'aux' de forma que ele aponte para o próximo nó
		aux = aux->prox;
			
	}
		
	aux2->media = (aux2->media/cont);
	
	printf ("\n\n%.1f\n" , aux2->media);
	
	aux = L1;
	
	//uma disciplina ou mais
	while (aux != NULL){
		
		if (strcmp(aux->disciplina, aux2->disciplina) == 0){
			
			novo = (TDisciplinas) malloc (sizeof(TNo2));
			
			aux2->prox = novo;
			
			//andar com o 'aux' de forma que ele aponte para o próximo nó
			aux = aux->prox;
			
		}
		
		else{
			
			cont = 0;
			
			strcpy (aux2->disciplina, aux->disciplina);
			
			printf("\n(%s)" , aux2->disciplina);
			
			while (aux1 != NULL){
		
				if (strcmp(aux1->disciplina, aux2->disciplina) == 0){
			
				aux2->media += aux1->nota;
				
				printf ("\n%.1f" , aux2->media);
				
				cont++;
				
				}
				
				//andar com o 'aux' de forma que ele aponte para o próximo nó
				aux1 = aux1->prox;
			
			}
			
			aux2->media = (aux2->media/cont);
			
			printf ("\n\n%.1f\n" , aux2->media);
			
			//andar com o 'aux' de forma que ele aponte para o próximo nó
			aux = aux->prox;
				
		}
	
	}
		
}


void exibirNotas (TNotas L)
{
	//declaração de variáveis
	TNotas aux;
	
	//verificando se a lista está vazia
	if (L == NULL)   // if (!L)
	{
		printf ("Lista vazia!\n");
	}
	else
	{
		printf ("\nLista:\n");
		
		//iniciando aux com o endereço do primeiro nó
		aux = L;
		
		//percorrendo a lista até o seu final
		while (aux != NULL)    //while (aux)
		{
			//exibindo cada elemento da lista
			printf ("(%d, %s, %.1f)\n", aux->matricula, aux->disciplina, aux->nota);
			
			//andando com 'aux' para o próximo nó
			aux = aux->prox;
		}
	}
}

void exibirDisciplinas (TDisciplinas L)
{
	//declaração de variáveis
	TDisciplinas aux;
	
	aux = L;
		
	//verificando se a lista está vazia
	if (aux == NULL)   // if (!L)
	{
		printf ("Lista vazia!\n");
	}
	else
	{
		printf ("\nLista:\n");

		//percorrendo a lista até o seu final
		while (aux != NULL)    //while (aux)
		{
			//exibindo cada elemento da lista
			printf ("(%s, %.1f)\n", aux->disciplina, aux->media);
			
			//andando com 'aux' para o próximo nó
			aux = aux->prox;
		}
	}
}

int inserirNotas (TNotas *L, int matricula, char disciplina[20], float nota)
{
	//declaração de variáveis
	TNotas aux;
	
	//Passo1: alocar memória para o novo elemento
	aux = (TNotas) malloc (sizeof(TNo1));
	
	//testar se a memória foi alocada
	if (aux == NULL) //if (!aux)
	{
		return FALSE;
	}
	else
	{
		//Passo2: Armazenar na memória alocada o novo valor						
		aux->matricula = matricula;
		strcpy (aux->disciplina, disciplina);
		aux->nota = nota;
		
		//Passo3: Fazer o prox do novo nó apontar para o antigo primeiro elemento da lista		
		aux->prox = *L;
		
		//Passo4: Mandar L apontar para o novo nó			
		*L = aux;
		
		//retornando sucesso
		return TRUE;
	}	
	
}
