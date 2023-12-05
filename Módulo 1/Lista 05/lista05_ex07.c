/*
   FAC - Turma B
   Data: 17/09/2020
   
   Lista V:
   
   QUESTÃO 07: Faça um programa que leia 150 números reais e, ao final, exiba:
   
   a)	A soma dos 50 primeiros;
   b)	menor número do 51° ao 100° valores fornecidos;
   c)	A média entre os últimos 50 valores.
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define QUANT 150

//main
void main ()
{
	//declaração de variáveis
	int i;
	float valor, somaG1 = 0, somaG3 = 0, mediaG3, menor = 99999;
	
	//lendo os QUANT valores
	for (i=1;i<=QUANT;i++)
	{
		printf ("%do. valor: ", i);
		scanf ("%f", &valor);
		
		//verificando se está no primeiro grupo
		if (i <= QUANT/3)
		{
			somaG1 += valor;
		}
		else
		{
			//verificando se está no segundo grupo
			if (i <= 2*(QUANT/3))
			{
				if (valor < menor)
				{
					menor = valor;
				}
			}
			else  //está no terceiro grupo
			{
				somaG3 += valor;
			}
		}
	}
	
	//exibindo os resultados
	printf ("\n\nSoma dos valores do G1: %.1f\n", somaG1);
	printf ("Menor do G2: %.1f\n", menor);	
	
	mediaG3 = somaG3/(QUANT/3);
    printf ("Media dos valores do G3 = %.1f\n", mediaG3); 
}
