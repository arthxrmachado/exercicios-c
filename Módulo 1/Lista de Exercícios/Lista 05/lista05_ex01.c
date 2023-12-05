/*
QUESTÃO 01: Faça um programa que leia um número inteiro x e, em seguida, solicite ao usuário outros 50 valores inteiros. Ao final, o programa deve exibir o 
total de múltiplos de x fornecidos.
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define QUANT 50

//main
void main ()
{
	//Declaração de variáveis
	int i, x, valor, cont = 0;
	
	//leitura do valor de x
	printf ("Entre com um numero inteiro: ");
	scanf ("%d", &x);
	
	//pulando uma linha
	printf ("\n");
	
	//repetição para a leitura dos QUANT valores
	for (i=1;i<=QUANT;i++)
	{
		//leitura de cada valor
		printf ("%do. valor: ", i);
		scanf ("%d", &valor);
		
		//verificando se o número lido é múltiplo de x
		if (valor % x == 0)
		{
			//se for, deve-se atualizar o contador
			cont++;
		}
	}
	
	//exibindo o resultado
	printf ("\n\nForam digitados %d multiplos de %x", cont, x);
}
