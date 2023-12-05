/*
   FAC - Turma B
   Data: 17/09/2020
   
   Lista V:
   
   QUEST�O 07: Fa�a um programa que leia 150 n�meros reais e, ao final, exiba:
   
   a)	A soma dos 50 primeiros;
   b)	menor n�mero do 51� ao 100� valores fornecidos;
   c)	A m�dia entre os �ltimos 50 valores.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define QUANT 150

//main
void main ()
{
	//declara��o de vari�veis
	int i;
	float valor, somaG1 = 0, somaG3 = 0, mediaG3, menor = 99999;
	
	//lendo os valores de G1
	for (i=1;i<=QUANT/3;i++)
	{
		printf ("%do. valor: ", i);
		scanf ("%f", &valor);
		
		somaG1 += valor;
	}	

	//lendo os valores de G2
	for (i=1;i<=QUANT/3;i++)
	{
		printf ("%do. valor: ", i+(QUANT/3));
		scanf ("%f", &valor);
		
		if (valor < menor)
		{
			menor = valor;
		}
	}	

	//lendo os valores de G3
	for (i=1;i<=QUANT/3;i++)
	{
		printf ("%do. valor: ", i+(2*(QUANT/3)));
		scanf ("%f", &valor);
		
		somaG3 += valor;
	}
	
	//exibindo os resultados
	printf ("\n\nSoma dos valores do G1: %.1f\n", somaG1);
	printf ("Menor do G2: %.1f\n", menor);	
	
	mediaG3 = somaG3/(QUANT/3);
    printf ("Media dos valores do G3 = %.1f\n", mediaG3); 
}
