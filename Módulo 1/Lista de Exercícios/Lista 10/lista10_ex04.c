/*
	FAC		- 	   Turma B
	Lista de Exerc�cios X
	
	QUEST�O 04:
	Fazer uma fun��o que armazene em um vetor os 50 
	primeiros termos da seguinte sequ�ncia:

				S = 1, 2, 4, 7, 11, 16, ...

	Nota: observem que a diferen�a entre o 1� e 2� elementos 
	� igual a 1, entre o 2� e 3� � igual a 2, entre o 3� e o 
	4� � igual a 3, e assim sucessivamente.
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
void preencheVetor (int v[], int tamanho);
void exibir (int v[], int tamanho);

//main
void main ()
{
	//declara��o de vari�veis
	int vet[50];

	//chamando a fun��o
	preencheVetor (vet, 50);
	
	//exibindo o vetor
	exibir (vet, 50);
}

//implementa��o das fun��es
void preencheVetor (int v[], int tamanho)
{
	//declara��o de vari�veis
	int i, j=1;
	
	//preenchendo o vetor
	v[0] = 1;
	for (i=1;i<tamanho;i++)
	{
		v[i] = v[i-1] + j;
		j++;
	}
}

void exibir (int v[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	printf ("\nVetor: ");
	for (i=0;i<tamanho;i++)
	{
		printf ("%d  ", v[i]);
	}
	printf ("\n\n");
}
