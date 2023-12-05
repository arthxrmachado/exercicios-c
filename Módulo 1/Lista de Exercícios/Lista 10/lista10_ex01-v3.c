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
int numOcorrencias (int x, int v[], int tamanho);

//main
void main ()
{
	//declara��o de vari�veis
	int quant, numero;
	int vet1[TAM] = {1,7,9,5,7,1,2,7,1,7},
	    vet2[5] = {1,7,4,7,5};
		
	//lendo o n�mero a ser buscado
	printf ("\n\nEntre com o numero a ser buscado no vetor: ");
	scanf ("%d", &numero);
	
	//chamando a fun��o para o 1� vetor
	quant = numOcorrencias (numero, vet1, TAM);
	
	//exibindo o resultado para o 1� vetor
	printf ("\n\nForam encontradas %d ocorrencias do numero %d em vet1.", quant, numero);
	
	//chamando a fun��o para o 2� vetor
	quant = numOcorrencias (numero, vet2, 5);
	
	//exibindo o resultado para o 2� vetor
	printf ("\n\nForam encontradas %d ocorrencias do numero %d em vet2.", quant, numero);
}

//implementa��o das fun��es
int numOcorrencias (int x, int v[], int tamanho)
{
	//declara��o de vari�veis
	int i, cont = 0;
	
	//varrendo o vetor
	for (i=0;i<tamanho;i++)
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
