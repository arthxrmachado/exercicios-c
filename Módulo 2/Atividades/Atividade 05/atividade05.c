/******************************************************************************

	FAETERJ-Rio
	
	2FPR - Manhã - 2021/1
	
	Aluno: Arthur Lourenço Machado
	
	Data: 29/05/2021   -   Atividade 5
	
	Lista de Exercícios VIII - Questão 5: 

	O histórico de um aluno é representado por um vetor de structs onde cada posição 
	armazena o código da disciplina cursada, semestre e ano que a cumpriu e a média 
	final na disciplina. Implementar uma função que exiba o histórico do aluno com 
	o seguinte formato:
	
	NomeDisciplina1 (código1)   MédiaDisciplina1
	
	
	NomeDisciplina2 (código2)   MédiaDisciplina2
	.
	.
	.
	NomeDisciplinaN (códigoN)   MédiaDisciplinaN
	
	
	Coeficiente de rendimento: CR
	
	Observações:
	
	1. Para obter os dados da disciplina, um outro vetor de structs deve ser consultado. 
	Este, por sua vez, armazena para cada disciplina do curso as seguintes informações:
	código, nome e número de créditos;
	
	
	2. O coeficiente de rendimento consiste em uma média ponderada de todos os graus 
	atribuídos às disciplinas cursadas, onde os pesos são representados pelo número de 
	créditos da disciplina;
	
	
	3. Todos os dados em negrito apresentados no formato do histórico devem 
	ser obtidos a partir dos vetores.
	
******************************************************************************/

//importação de bibliotecas
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//definição de constantes
#define QUANT 4

//declaração de tipos
typedef struct{
	
	char codigo[10];
	int semestre, ano;
	float media, cr;
	
}TAluno;

typedef struct{
	
	char nomeDisciplina[30], codigo[10];
	int creditos;
	
}TDisciplina;

//protótipo das funções
void exibirHistorico (TAluno turma[], TDisciplina dados[], int quant);
void leituraDados (TAluno turma[], TDisciplina dados[], int quant);
void calcularCR (TAluno turma[], TDisciplina dados[], int quant);

//função main
void main (){
	
	//declaração de variáveis
	TAluno t[QUANT];
	TDisciplina d[QUANT];
	
	//preenchendo o vetor
	leituraDados (t, d, QUANT);
	
	//calculando CR
	calcularCR (t, d, QUANT);
	
	//exibindo histórico
	exibirHistorico (t, d, QUANT);
	
}

//implementações das funções
void leituraDados (TAluno turma[], TDisciplina dados[], int quant){
	
	//declaração de variáveis
	int i;
	
	//lendo dados que o usuário digitar
	for (i=0; i<quant; i++){
		
		fflush (stdin);
		printf ("Digite o nome da disciplina: ");
		gets (dados[i].nomeDisciplina);
		
		fflush (stdin);
		printf ("\nDigite o codigo da disciplina: ");
		gets (turma[i].codigo);
		strcpy (dados[i].codigo, turma[i].codigo);
	
		printf ("\nDigite a quantidade de creditos que essa disciplina vale: ");
		scanf ("%d", &dados[i].creditos);
	
		printf ("\nDigite o semestre que ela foi cursada: ");
		scanf ("%d", &turma[i].semestre);
		
		printf ("\nDigite o ano que ela foi cursada: ");
		scanf ("%d", &turma[i].ano);
	
		printf ("\nDigite a media do aluno nessa disciplina: ");
		scanf ("%f", &turma[i].media);
		
		//limpando tela
		system("cls");
		
	}
	
}

void calcularCR (TAluno turma[], TDisciplina dados[], int quant){
	
	//declaração de variáveis
	int i, creditos=0;
	float cr = 0;
	
	//calculando o CR
	for (i=0; i<quant; i++){
			
		cr += (turma[i].media*dados[i].creditos);
		
		creditos += dados[i].creditos;
			
	}
	
	turma[i].cr = (cr/creditos);
}

void exibirHistorico (TAluno turma[], TDisciplina dados[], int quant){
	
	//declaração de variáveis
	int i;
	
	//exibindo histórico
	for (i=0; i<quant; i++){
		
		printf ("Nome da disciplina: %s ", dados[i].nomeDisciplina);
		
		printf ("(%s) ", turma[i].codigo);
		
		printf ("(%.1f)", turma[i].media);
		
		printf ("\n\n");
		
	}
	
	printf ("\n\nCoeficiente de rendimento: (%.1f)", turma[i].cr);
	
}
