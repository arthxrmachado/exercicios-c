/*
	FPR - 2021/1
	Prova a compor a AV2 - 06/07/2021
	
	Quest�o 02 [2,5 pontos]:
	Considere a exist�ncia de uma lista encadeada L1, do tipo TNotas, que consiste em um ponteiro para TNo1 com os 
	campos matricula, disciplina e nota - al�m de um ponteiro para o pr�ximo n� da lista.
	Pede-se o desenvolvimento de uma fun��o que crie uma lista encadeada L2, do tipo TDisciplina (ponteiro para 
	TNo2 com os campos disciplina, media e prox).

	Notas:
 	- Cada n� de L1 representar� o desempenho de um aluno em determinada disciplina;
 	- Por sua vez, cada n� da nova lista armazenar� o nome da disciplina e a m�dia da turma na mesma. 

  		
	ATEN��O: ESTE � APENAS UM ESQUELETO DO PROGRAMA, CABENDO AO ALUNO INCLUIR O QUE ELE ACHAR NECESS�RIO!

*/

//importa��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//defini��o de constantes
#define TRUE 1
#define FALSE 0

//declara��o de tipos

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

//prot�tipos das fun��es
void questao02 (TNotas L1, TDisciplinas *L2);

//algumas fun��es auxiliares
void exibirNotas (TNotas L);
void exibirDisciplinas (TDisciplinas L);
int inserirNotas (TNotas *L, int matricula, char disciplina[20], float nota);

//main
void main ()
{
	//declara��o de vari�veis [criando uma lista de cada tipo e inicializando-as com NULL]
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
	
	//chamando a fun��o
	questao02 (notas, &disc);
	
	printf("\n\n");

	//exibindo a lista de disciplinas	
	exibirDisciplinas (disc);
}

//implementa��o das fun��es

/* A partir de uma lista encadeada L1, do tipo TNotas, cria uma lista encadeada L2, do tipo TDisciplina.*/
void questao02 (TNotas L1, TDisciplinas *L2)
{
	//declara��o de vari�veis
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
		
		//andar com o 'aux' de forma que ele aponte para o pr�ximo n�
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
			
			//andar com o 'aux' de forma que ele aponte para o pr�ximo n�
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
				
				//andar com o 'aux' de forma que ele aponte para o pr�ximo n�
				aux1 = aux1->prox;
			
			}
			
			aux2->media = (aux2->media/cont);
			
			printf ("\n\n%.1f\n" , aux2->media);
			
			//andar com o 'aux' de forma que ele aponte para o pr�ximo n�
			aux = aux->prox;
				
		}
	
	}
		
}


void exibirNotas (TNotas L)
{
	//declara��o de vari�veis
	TNotas aux;
	
	//verificando se a lista est� vazia
	if (L == NULL)   // if (!L)
	{
		printf ("Lista vazia!\n");
	}
	else
	{
		printf ("\nLista:\n");
		
		//iniciando aux com o endere�o do primeiro n�
		aux = L;
		
		//percorrendo a lista at� o seu final
		while (aux != NULL)    //while (aux)
		{
			//exibindo cada elemento da lista
			printf ("(%d, %s, %.1f)\n", aux->matricula, aux->disciplina, aux->nota);
			
			//andando com 'aux' para o pr�ximo n�
			aux = aux->prox;
		}
	}
}

void exibirDisciplinas (TDisciplinas L)
{
	//declara��o de vari�veis
	TDisciplinas aux;
	
	aux = L;
		
	//verificando se a lista est� vazia
	if (aux == NULL)   // if (!L)
	{
		printf ("Lista vazia!\n");
	}
	else
	{
		printf ("\nLista:\n");

		//percorrendo a lista at� o seu final
		while (aux != NULL)    //while (aux)
		{
			//exibindo cada elemento da lista
			printf ("(%s, %.1f)\n", aux->disciplina, aux->media);
			
			//andando com 'aux' para o pr�ximo n�
			aux = aux->prox;
		}
	}
}

int inserirNotas (TNotas *L, int matricula, char disciplina[20], float nota)
{
	//declara��o de vari�veis
	TNotas aux;
	
	//Passo1: alocar mem�ria para o novo elemento
	aux = (TNotas) malloc (sizeof(TNo1));
	
	//testar se a mem�ria foi alocada
	if (aux == NULL) //if (!aux)
	{
		return FALSE;
	}
	else
	{
		//Passo2: Armazenar na mem�ria alocada o novo valor						
		aux->matricula = matricula;
		strcpy (aux->disciplina, disciplina);
		aux->nota = nota;
		
		//Passo3: Fazer o prox do novo n� apontar para o antigo primeiro elemento da lista		
		aux->prox = *L;
		
		//Passo4: Mandar L apontar para o novo n�			
		*L = aux;
		
		//retornando sucesso
		return TRUE;
	}	
	
}
