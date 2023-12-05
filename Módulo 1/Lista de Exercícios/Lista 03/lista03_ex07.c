/*
	FAC - Turma B - 03/09/2020
	
    QUESTÃO 07: Uma determinada empresa fez uma pesquisa de 
	mercado para saber se as pessoas gostaram ou não de um 
	novo produto que foi lançado. Para cada pessoa 
	entrevistada foram coletados os seguintes dados: 
	gênero (M ou F) e resposta (G [Gostou] ou N [Não Gostou]). 
	Sabendo-se que foram entrevistadas X pessoas, faça um 
	programa que forneça:

	a)	Número de pessoas que gostaram do produto;
	b)	Número de pessoas que não gostaram do produto;
	c)	Informação dizendo em que gênero o produto teve uma 
	    melhor aceitação.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int x, i, contG = 0, contNG = 0, contF = 0, contM = 0, contFG = 0, contMG = 0;
	char genero, opiniao;
	float percF, percM;
	
	//lendo o número de entrevistados
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
	
	//calculando os percentuais de aceitação
	percF = ((float)contFG/contF)*100;    //casting
	percM = ((float)contMG/contM)*100;
	
	//exibindo os resultados
	printf ("\n\nTotal de pessoas que gostaram do produto: %d\n", contG);
	printf ("Total de pessoas que nao gostaram do produto: %d\n", contNG);
	
	if (percF > percM)
	{
		printf ("O produto teve maior aceitação entre as mulheres.");
	}
	else
	{
		if (percF < percM)
		{
			printf ("O produto teve maior aceitação entre os homens.");
		}
		else
		{
			printf ("O produto teve a mesma aceitação entre os generos.");
		}
	}
}
