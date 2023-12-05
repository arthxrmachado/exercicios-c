/*
	FAC - Turma B - 03/09/2020
	
    QUEST�O 07: Uma determinada empresa fez uma pesquisa de 
	mercado para saber se as pessoas gostaram ou n�o de um 
	novo produto que foi lan�ado. Para cada pessoa 
	entrevistada foram coletados os seguintes dados: 
	g�nero (M ou F) e resposta (G [Gostou] ou N [N�o Gostou]). 
	Sabendo-se que foram entrevistadas X pessoas, fa�a um 
	programa que forne�a:

	a)	N�mero de pessoas que gostaram do produto;
	b)	N�mero de pessoas que n�o gostaram do produto;
	c)	Informa��o dizendo em que g�nero o produto teve uma 
	    melhor aceita��o.
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int x, i, contG = 0, contNG = 0, contF = 0, contM = 0, contFG = 0, contMG = 0;
	char genero, opiniao;
	float percF, percM;
	
	//lendo o n�mero de entrevistados
	printf ("Quantas pessoas foram entrevistadas? ");
	scanf ("%d", &x);
	
	//criando um FOR para ler os dados de cada entrevistado
	for (i=1;i<=x;i++)
	//for (i=0;i<x;i++)
	{
		printf ("Genero (M/F): ");
		fflush (stdin);  //standard input
		scanf ("%c", &genero);
		genero = toupper (genero);
		
		printf ("Opiniao: [G]ostou ou [N]ao gostou? ");
		fflush (stdin);  //standard input
		scanf ("%c", &opiniao);
		opiniao = toupper (opiniao);
		
		//verificando o genero
		if (genero == 'F')
		{
			contF++;	//quantidade de mulheres entrevistadas
			
			if (opiniao == 'G')
			{
				contFG++;  //quantidade de mulheres que gostaram do produto
			}
		}
		else
		{
			contM++;	//quantidade de homens entrevistados
			
			if (opiniao == 'G')
			{
				contMG++;  //quantidade de homens que gostaram do produto
			}
		}
		
		//verificando se o entrevistado gostou do produto
		if (opiniao == 'G')
		{
			contG++;  //contG = contG + 1;
		}
		else
		{
			contNG++;
		}
	}
	
	//calculando os percentuais de aceita��o
	percF = ((float)contFG/contF)*100;    //casting
	percM = ((float)contMG/contM)*100;
	
	//exibindo os resultados
	printf ("\n\nTotal de pessoas que gostaram do produto: %d\n", contG);
	printf ("Total de pessoas que nao gostaram do produto: %d\n", contNG);
	
	if (percF > percM)
	{
		printf ("O produto teve maior aceita��o entre as mulheres.");
	}
	else
	{
		if (percF < percM)
		{
			printf ("O produto teve maior aceita��o entre os homens.");
		}
		else
		{
			printf ("O produto teve a mesma aceita��o entre os generos.");
		}
	}
}
