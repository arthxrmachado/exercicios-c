/*
   FAC - Turma B
   Data: 17/09/2020
   
   Lista V:
   
   QUESTÃO 06: Faça um programa que leia 200 números inteiros. Ao final, exibir:
   
   a) O maior número fornecido, de ordem par (isto é, o maior dentre o segundo, quarto, 
   sexto, oitavo, etc valores fornecidos).
   b) A média dos valores pares.
   
   Exemplo: (10 números)
   
   			Valores=>	1   5   4   2   6   9   10  5  3  7
   			ordem=>		1   2   3   4   5   6   7   8  9  10 
   			
   			a. maior entre: 5, 2, 9, 5, 7 ==> Resposta = 9
   			b. média dos valores pares:  (4 + 2 + 6 + 10)/4
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define QUANT 200

//main
void main ()
{
	//declaração de variáveis
	int i, valor, maior = -99999, somaP = 0, contP = 0;
	float mediaP;
	
	//lendo os QUANT valores
	for (i=1;i<=QUANT;i++)
	{
		printf ("%do. valor: ", i);
		scanf ("%d", &valor);
		
		//verificando se a ordem é par
		if (i % 2 == 0)
		{
			if (valor > maior)
			{
				maior = valor;
			}			
		}
		
		//verificando se o número é par
		if (valor %2 == 0)
		{
			somaP += valor;
			contP++;
		}
	}
	
	//exibindo os resultados
	printf ("\nMaior elemento de ordem par: %d\n", maior);
	
	mediaP = (float)somaP/contP; 
	printf ("Media dos pares = %.1f", mediaP);	
}
