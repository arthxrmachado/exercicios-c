/*
QUESTÃO 06: Escrever um algoritmo que, dados um número inteiro i e três valores a, b e c, apresente os 3 números na ordem definida por i, como descrito 
abaixo:

	a) i = 1: os três valores em ordem crescente;
	b) i = 2: os três valores em ordem decrescente;
	c) i = 3: o maior valor deve ser apresentado no meio dos outros.
*/

//Importação de bibliotecas
#include <stdio.h>

void main()
{
	//declaração de variáveis
	float a, b, c, maior, menor, meio;
	int i;
	
	//leitura dos dados de entrada
	printf ("Entre com os tres valores: ");
	scanf ("%f %f %f", &a, &b, &c);
	
	printf ("Entre com o codigo" );
	scanf ("%d", &i);
	
	//determinando os valores de 'maior', 'menor, 'meio'
	if ((a >= b) && (a >= c))
	{
		maior = a;
		
		if (b >= c)
		{
			meio = b;
			menor = c;
		}
		else
		{
			meio = c;
			menor = b;
		}
	}
	else
	{
		if (/*(b >= a) && */b >= c)
		{
			maior = b;
			
			if (a >= c)
			{
				meio = a;
				menor = c;
			}
			else
			{
				meio = c;
				menor = a;
			}
		}
		else
		{
			maior = c;
			
			if (a >= b)
			{
				meio = a;
				menor = b;
			}
			else
			{
				meio = b;
				menor = a;
			}
		}
	}
	
	//exibindo os valores de acordo com o código i
	switch (i)
	{
		//ordem crescente
		case 1: printf ("%.1f %.1f %.1f", menor, meio, maior);
		        break;

		//ordem decrescente
		case 2: printf ("%.1f %.1f %.1f", maior, meio, menor);
		        break;
		        
		//maior no meio
		case 3: printf ("%.1f %.1f %.1f", menor, maior, meio);
		        break;
	}
}
