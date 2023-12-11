/*
	FPR - Manh�
	
	Data: 12/05/2021
	
	Lista de Exerc�cios VIII - Structs
	
	Quest�o 04: 
	Suponha a exist�ncia de um vetor de tamanho TAM, cada posi��o armazenando o nome 
	da pessoa e a sua data de anivers�rio (representada por um struct do tipo TData, 
	contendo os campos dia e mes). Pede-se o desenvolvimento das seguintes fun��es:
 	
	- Determinar a quantidade de pessoas que fazem anivers�rio no m�s M;
 	- Exibir os nomes de todas pessoas que fazem anivers�rio entre as datas d1 e d2, 
	  ambas do tipo Tdata.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define TAM 5
#define TRUE 1
#define FALSE

//declara��o de tipos
typedef struct {
	int dia, mes;
} TData;

typedef struct {
	char nome[20];
	TData dataAnv;
} TPessoa;

//prot�tipos das fun��es
int aniversariantesMes (TPessoa pessoas[], int quant, int mes);
void exibirPessoas (TPessoa pessoas[], int quant, TData d1, TData d2); 
int dataNoIntervalo (TData data, TData d1, TData d2);
void preencherVetor (TPessoa pessoas[], int quant);

//main
void main ()
{
	//declara��o de vari�veis
	TPessoa p[TAM];
	TData data1, data2;
	
	//inicializando as datas
	data1.dia = 26;
	data1.mes = 5;
	
	data2.dia = 3;
	data2.mes = 8;
	
	//preenchendo o vetor
	preencherVetor (p, TAM);
	
	//testando as fun��es
	printf ("\n\nQuantidade de pessoas que fazem anivers�rio em Junho: %d\n\n", 
	         aniversariantesMes (p, TAM, 6));

	exibirPessoas (p, TAM, data1, data2);	
}

//implementa��o das fun��es

//Determinar a quantidade de pessoas que fazem anivers�rio no m�s M.
int aniversariantesMes (TPessoa pessoas[], int quant, int mes)
{
	//declara��o de vari�veis
	int i, cont = 0;
	
	//varrendo o vetor
	for (i=0;i<quant;i++)
	{
		//verificando se a pessoa na posi��o 'i' faz anivers�rio no m�s 'mes'
		if (pessoas[i].dataAnv.mes == mes)
		{
			cont++;
		}
	}
	
	//retornando a quantidade de aniversariantes do m�s 'mes'
	return cont;
}

//Exibir os nomes de todas pessoas que fazem anivers�rio entre as datas d1 e d2, 
//ambas do tipo Tdata.
void exibirPessoas (TPessoa pessoas[], int quant, TData d1, TData d2)
{
	//declara��o de vari�veis
	int i;
	
	//varrendo o vetor
	for (i=0;i<quant;i++)
	{
		//verificando se a data de anivers�rio da pessoa na posi��o 'i' est� entre 'd1' e 'd2'
		if (dataNoIntervalo (pessoas[i].dataAnv, d1, d2) == TRUE)
		{
			printf ("%s\n", pessoas[i].nome);
		}
	}
}

//verifica se 'data' est� no intervalo definido pelas datas 'd1' e 'd2'
int dataNoIntervalo (TData data, TData d1, TData d2)
{
	//se o m�s de 'data' for inferior ao m�s inicial do intervalo... 
	if (data.mes < d1.mes)
	{
		return FALSE;
	}

	//se o m�s de 'data' for superior ao m�s final do intervalo... 	
	if (data.mes > d2.mes)   //pode juntar essa condi��o com a anterior em um mesmo if, unidas por ||
	{
		return FALSE;
	}
	
	//'data' est� no mesmo m�s de 'd1', por�m em dia anterior
	if ((data.mes == d1.mes) && (data.dia < d1.dia))
	{
		return FALSE;
	}


	//'data' est� no mesmo m�s de 'd2', por�m em dia posterior
	if ((data.mes == d2.mes) && (data.dia > d2.dia))
	{
		return FALSE;
	}

	//se n�o caiu em nenhuma condi��o anterior, � pq a data est� entre 'd1' e 'd2'	
	return TRUE;
}

void preencherVetor (TPessoa pessoas[], int quant)
{
	//declara��o de vari�veis
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
