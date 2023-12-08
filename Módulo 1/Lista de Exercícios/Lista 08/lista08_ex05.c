/*
QUESTÃO 05: Fazer uma função que calcule o MMC (mínimo múltiplo comum) entre dois números.
*/

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
int mmc (int a, int b);
int calculaMaior (int num1, int num2);

//main
void main ()
{	
	//declaração de variáveis
	int n1, n2;
	
	//lendo os valores de entrada
	printf ("Entre com dois numeros: ");
	scanf ("%d %d", &n1, &n2);
	
	//exibindo o mmc
	printf ("MMC(%d,%d) = %d\n", n1, n2, mmc (n1,n2));		
}

//implementação das funções
int calculaMaior (int num1, int num2)
{
	return (num1>num2)?num1:num2;
}

int mmc (int a, int b)
{
	//declaração de variáveis
	int maior, i;
	
	maior = calculaMaior(a,b);
	
	for (i=maior;i<=a*b;i++)
	{
		//verificando se 'i' é múltiplo dos dois valores (ou seja, se é um múltiplo comum)
		if ((i%a==0) && (i%b==0))
		{
			return i;
		}
	}
}
