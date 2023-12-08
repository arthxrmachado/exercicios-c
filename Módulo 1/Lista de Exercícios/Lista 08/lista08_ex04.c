/*
QUESTÃO 04: Fazer uma função que calcule o MDC (máximo divisor comum) entre dois números.
*/

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int mdc (int a, int b);
int calculaMenor (int num1, int num2);

//main
void main ()
{	
	//declaração de variáveis
	int n1, n2;
	
	//lendo os valores de entrada
	printf ("Entre com dois numeros: ");
	scanf ("%d %d", &n1, &n2);
	
	//exibindo o mdc
	printf ("MDC(%d,%d) = %d\n", n1, n2, mdc (n1,n2));		
}

//implementação das funções
int calculaMenor (int num1, int num2)
{
	return (num1<num2)?num1:num2;
}

int mdc (int a, int b)
{
	//declaração de variáveis
	int menor, i, resp;
	
	//calculando o menor entre 'a' e 'b'
	menor = calculaMenor(a,b);
	
	for (i=1;i<=menor;i++)
	{
		//verificando se 'i' é divisor dos dois valores (ou seja, se é um divisor comum)
		if ((a%i==0) && (b%i==0))
		{
			resp = i;
		}
	}

	//retornando o mdc	
	return resp;
}
