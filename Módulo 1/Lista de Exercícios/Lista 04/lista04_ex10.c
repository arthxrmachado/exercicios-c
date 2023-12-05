/*
QUESTÃO 10: Foi feita uma pesquisa entre os habitantes de uma região e coletados os dados de altura e gênero das pessoas. Faça um programa que leia as 
informações de 50 pessoas e informe:

 	- a maior e a menor alturas encontradas;
 	- a média de altura das mulheres;
 	- a média de altura da população;
 	- o percentual de homens na população.	
*/

//importação de bibliotecas
#include <stdio.h>

//definicação de constantes
#define Q 50

//main
void main ()
{
	//declaração de variáveis
	int i, contF = 0, contM;
	float altura, maior = 0, menor = 5, somaAlturaF = 0, somaAltura = 0, mediaAlturaF, mediaAltura, percM;
	char genero;
	
	//lendo as informações dos Q habitantes
	for (i=1;i<=Q;i++)
	{
		printf ("Altura: ");
		scanf ("%f", &altura);
		
		do
		{
			printf ("Genero [F/M]: ");
			fflush (stdin);
			scanf ("%c", &genero);
			genero = toupper (genero);
			
			//validando o gênero informado
			if ((genero != 'F') && (genero != 'M'))
			{
				printf ("\tErro: opcao invalida! Tente novamente.\n");
			}
		}
		while ((genero != 'F') && (genero != 'M'));
		
		//determinando a maior altura
		if (altura > maior)
		{
			maior = altura;
		}
		
		//determinando a menor altura
		if (altura < menor)
		{
			menor = altura;
		}
		
		//calculos para se chegar à média de altura das mulheres
		if (genero == 'F')
		{
			somaAlturaF += altura;
			contF++;	
		}	
		
		//somando todas as alturas para depois calcular a média
		somaAltura += altura;	
	}
	
	//calculando a média de altura das mulheres
	mediaAlturaF = somaAlturaF/contF;
	
	//calculando a média de altura de todos os habitantes
	mediaAltura = somaAltura/Q;
	
	//calculando o percentual de homens
	contM = Q - contF;
	percM = ((float)contM/Q)*100;
	
	//exibindo os resultados
	printf ("\n\nMaior altura = %.2f m -  Menor altura = %.2f m\n", maior, menor);
	printf ("Media de altura das mulheres: %.2f m\n", mediaAlturaF);
	printf ("Media de altura da populacao: %.2f m\n", mediaAltura);
	printf ("Percentual de homens: %.1f %%", percM);
}	

