/*
	FPR - Manhã
	
	Data: 12/05/2021
	
	Lista de Exercícios VIII - Structs
	
	Questão 04: 
	Suponha a existência de um vetor de tamanho TAM, cada posição armazenando o nome 
	da pessoa e a sua data de aniversário (representada por um struct do tipo TData, 
	contendo os campos dia e mes). Pede-se o desenvolvimento das seguintes funções:
 	
	- Determinar a quantidade de pessoas que fazem aniversário no mês M;
 	- Exibir os nomes de todas pessoas que fazem aniversário entre as datas d1 e d2, 
	  ambas do tipo Tdata.
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define TAM 5
#define TRUE 1
#define FALSE

//declaração de tipos
typedef struct {
	int dia, mes;
} TData;

typedef struct {
	char nome[20];
	TData dataAnv;
} TPessoa;

//protótipos das funções
int aniversariantesMes (TPessoa pessoas[], int quant, int mes);
void exibirPessoas (TPessoa pessoas[], int quant, TData d1, TData d2); 
int dataNoIntervalo (TData data, TData d1, TData d2);
void preencherVetor (TPessoa pessoas[], int quant);

//main
void main ()
{
	//declaração de variáveis
	TPessoa p[TAM];
	TData data1, data2;
	
	//inicializando as datas
	data1.dia = 26;
	data1.mes = 5;
	
	data2.dia = 3;
	data2.mes = 8;
	
	//preenchendo o vetor
	preencherVetor (p, TAM);
	
	//testando as funções
	printf ("\n\nQuantidade de pessoas que fazem aniversário em Junho: %d\n\n", 
	         aniversariantesMes (p, TAM, 6));

	exibirPessoas (p, TAM, data1, data2);	
}

//implementação das funções

//Determinar a quantidade de pessoas que fazem aniversário no mês M.
int aniversariantesMes (TPessoa pessoas[], int quant, int mes)
{
	//declaração de variáveis
	int i, cont = 0;
	
	//varrendo o vetor
	for (i=0;i<quant;i++)
	{
		//verificando se a pessoa na posição 'i' faz aniversário no mês 'mes'
		if (pessoas[i].dataAnv.mes == mes)
		{
			cont++;
		}
	}
	
	//retornando a quantidade de aniversariantes do mês 'mes'
	return cont;
}

//Exibir os nomes de todas pessoas que fazem aniversário entre as datas d1 e d2, 
//ambas do tipo Tdata.
void exibirPessoas (TPessoa pessoas[], int quant, TData d1, TData d2)
{
	//declaração de variáveis
	int i;
	
	//varrendo o vetor
	for (i=0;i<quant;i++)
	{
		//verificando se a data de aniversário da pessoa na posição 'i' está entre 'd1' e 'd2'
		if (dataNoIntervalo (pessoas[i].dataAnv, d1, d2) == TRUE)
		{
			printf ("%s\n", pessoas[i].nome);
		}
	}
}

//verifica se 'data' está no intervalo definido pelas datas 'd1' e 'd2'
int dataNoIntervalo (TData data, TData d1, TData d2)
{
	//se o mês de 'data' for inferior ao mês inicial do intervalo... 
	if (data.mes < d1.mes)
	{
		return FALSE;
	}

	//se o mês de 'data' for superior ao mês final do intervalo... 	
	if (data.mes > d2.mes)   //pode juntar essa condição com a anterior em um mesmo if, unidas por ||
	{
		return FALSE;
	}
	
	//'data' está no mesmo mês de 'd1', porém em dia anterior
	if ((data.mes == d1.mes) && (data.dia < d1.dia))
	{
		return FALSE;
	}


	//'data' está no mesmo mês de 'd2', porém em dia posterior
	if ((data.mes == d2.mes) && (data.dia > d2.dia))
	{
		return FALSE;
	}

	//se não caiu em nenhuma condição anterior, é pq a data está entre 'd1' e 'd2'	
	return TRUE;
}

void preencherVetor (TPessoa pessoas[], int quant)
{
	//declaração de variáveis
	int i;
	
	//varrendo o vetor
	for (i=0;i<quant;i++)
	{
		fflush (stdin);
		printf ("Nome: ");
		gets (pessoas[i].nome);
		
		printf ("Data de aniversario (DD MM): ");
		scanf ("%d %d", &pessoas[i].dataAnv.dia, &pessoas[i].dataAnv.mes);
	}
}
