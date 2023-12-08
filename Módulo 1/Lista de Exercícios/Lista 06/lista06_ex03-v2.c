/*
QUESTÃO 03: Faça um programa que exiba na tela as tabuadas dos números de 1 a 9.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int i, j, r;
	
	//exibindo as tabuadas de 1 a 9
	for (j=1;j<=9;j++)
	{
		for (i=0;i<=6;i++)
		{
			r = j*i;
			printf ("%d x %d = %d\t", i, j , r);
		}
		
		printf ("\n");
	}
}
