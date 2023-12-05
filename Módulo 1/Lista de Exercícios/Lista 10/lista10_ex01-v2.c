/*
	FAC		- 	   Turma B
	Lista de Exerc�cios X
	
	QUEST�O 01:
	Desenvolver uma fun��o que determine o n�mero de ocorr�ncias 
	de um n�mero inteiro x em um vetor A.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define TAM 10

//prot�tipos das fun��es
int numOcorrencias (int x, int v[TAM]);

//main
void main ()
{
	//declara��o de vari�veis
	int quant, numero, i, vetor[TAM] = {1,7,9,5,7,1,2,7,1,7};
		
	//lendo o n�mero a ser buscado
	printf ("\n\nEntre com o numero a ser buscado no vetor: ");
	scanf ("%d", &numero);
	
	//chamando a fun��o
	quant = numOcorrencias (numero, vetor);
	
	//exibindo o resultado
	printf ("\n\nForam encontradas %d ocorrencias do numero %d no vetor.", quant, numero);
}

//implementa��o das fun��es
int numOcorrencias (int x, int v[TAM])
{
	//declara��o de vari�veis
	int i, cont = 0;
	
	//varrendo o vetor
	for (i=0;i<TAM;i++)
	{
		//verificando se o elemento do vetor � o 'x'
		if (v[i] == x)
		{
			cont++;
		}
	}
	
	//retornando o resultado
	return cont;
}
