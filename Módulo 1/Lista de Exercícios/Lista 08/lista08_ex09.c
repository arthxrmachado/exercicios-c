/*
QUESTÃO 09: Implementar uma função que, dado um número inteiro, calcule (e retorne) a soma e a média de seus divisores.
*/

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void calcularSomaMedia (int n, int *soma, float *media);

//main
void main ()
{	
	//declaração de variáveis
	int numero, sum;
	float avg;
	
	//lendo o valor de entrada
	printf ("Entre com um numero: ");
	scanf ("%d", &numero);
	
	//chamando a função
	calcularSomaMedia (numero, &sum, &avg);
	
	//exibindo os resultados
	printf ("Soma = %d\nMedia = %.1f\n", sum, avg);
}

//implementação das funções
void calcularSomaMedia (int n, int *soma, float *media)
{
	//declarando variáveis
	int i, s=0, cont=0;
	float m;
	
	//calculando os divisores de n
	for (i=1;i<=n;i++)
	{
		//verificando se 'i' é divisor de 'n'
		if (n%i==0)
		{
			s += i;
			cont++;
		}
	}
	
	//calculando a média
	m = (float)s/cont;
	
	//atribuindo os resultados aos parâmetros de saída
	*soma = s;
	*media = m;
}
