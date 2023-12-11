/******************************************************************************

	FAETERJ-Rio
	
	2FPR - Manh� - 2021/1
	
	Aluno: Arthur Louren�o Machado
	
	Data: 29/05/2021   -   Atividade 5
	
	Lista de Exerc�cios VIII - Quest�o 5: 

	O hist�rico de um aluno � representado por um vetor de structs onde cada posi��o 
	armazena o c�digo da disciplina cursada, semestre e ano que a cumpriu e a m�dia 
	final na disciplina. Implementar uma fun��o que exiba o hist�rico do aluno com 
	o seguinte formato:
	
	NomeDisciplina1 (c�digo1)   M�diaDisciplina1
	
	
	NomeDisciplina2 (c�digo2)   M�diaDisciplina2
	.
	.
	.
	NomeDisciplinaN (c�digoN)   M�diaDisciplinaN
	
	
	Coeficiente de rendimento: CR
	
	Observa��es:
	
	1. Para obter os dados da disciplina, um outro vetor de structs deve ser consultado. 
	Este, por sua vez, armazena para cada disciplina do curso as seguintes informa��es:
	c�digo, nome e n�mero de cr�ditos;
	
	
	2. O coeficiente de rendimento consiste em uma m�dia ponderada de todos os graus 
	atribu�dos �s disciplinas cursadas, onde os pesos s�o representados pelo n�mero de 
	cr�ditos da disciplina;
	
	
	3. Todos os dados em negrito apresentados no formato do hist�rico devem 
	ser obtidos a partir dos vetores.
	
******************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//defini��o de constantes
#define QUANT 4

//declara��o de tipos
typedef struct{
	
	char codigo[10];
	int semestre, ano;
	float media, cr;
	
}TAluno;

typedef struct{
	
	char nomeDisciplina[30], codigo[10];
	int creditos;
	
}TDisciplina;

//prot�tipo das fun��es
void exibirHistorico (TAluno turma[], TDisciplina dados[], int quant);
void leituraDados (TAluno turma[], TDisciplina dados[], int quant);
void calcularCR (TAluno turma[], TDisciplina dados[], int quant);

//fun��o main
void main (){
	
	//declara��o de vari�veis
	TAluno t[QUANT];
	TDisciplina d[QUANT];
	
	//preenchendo o vetor
	leituraDados (t, d, QUANT);
	
	//calculando CR
	calcularCR (t, d, QUANT);
	
	//exibindo hist�rico
	exibirHistorico (t, d, QUANT);
	
}

//implementa��es das fun��es
void leituraDados (TAluno turma[], TDisciplina dados[], int quant){
	
	//declara��o de vari�veis
	int i;
	
	//lendo dados que o usu�rio digitar
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
	
	//declara��o de vari�veis
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
	
	//declara��o de vari�veis
	int i;
	
	//exibindo hist�rico
	for (i=0; i<quant; i++){
		
		printf ("Nome da disciplina: %s ", dados[i].nomeDisciplina);
		
		printf ("(%s) ", turma[i].codigo);
		
		printf ("(%.1f)", turma[i].media);
		
		printf ("\n\n");
		
	}
	
	printf ("\n\nCoeficiente de rendimento: (%.1f)", turma[i].cr);
	
}
