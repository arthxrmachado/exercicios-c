/*
	FAC - Turma B (27/08/2020)
	
	Estruturas de repeti��o
	
	QUEST�O 02: Fa�a um programa que exiba todos os elementos da seguinte 
	s�rie, assim como a soma destes elementos:

	1, 50, 2, 49, 3, 48, 4, 47, 5, 46, ..., 49, 2, 50, 1

*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int i, j, s = 0;		
	
	for (i=1,j=50;(i<=50)/*&&(j>=1)*/;i++,j--)   		
	{
		printf ("%d  %d  ", i, j);
		
		s = s + i + j;
	}
	
	//exibindo a soma
	printf ("\n\nSoma = %d", s);
}
