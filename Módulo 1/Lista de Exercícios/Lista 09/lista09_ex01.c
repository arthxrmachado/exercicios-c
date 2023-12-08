/*
QUESTÃO 01: Desenvolver uma função que, dado um número inteiro n, exiba todos os números existentes no intervalo definido por a e b (a < b), exceto aqueles 
que forem múltiplos de n.
  
  Exemplos:
  	n = 4
  	a = 10, b = 20
  	
  	Saída: 10, 11, 13, 14, 15, 17, 18, 19 
*/

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void exibir (int n, int a, int b);

//main
void main ()
{
	exibir (4, 10, 20);
}

//implementação das funções
void exibir (int n, int a, int b)
{
	//declaração de variáveis
	int i;
	
	//percorrendo o intervalo de 'a' a 'b'
	for (i=a;i<=b;i++)
	{
		//verificando se i não é múltiplo de n
		if (i%n != 0)
		{
			printf ("%d ", i);
		}
	}
}
