/*
   FAC - Turma B - 2020/1
   Professor Leonardo Vianna
   
   Lista de Exerc�cios VIII (Fun��es):
   
   QUEST�O 09:
   Implementar uma fun��o que, dado um n�mero inteiro, calcule 
   (e retorne) a soma e a m�dia de seus divisores.
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
void calcularSomaMedia (int n, int *soma, float *media);

//main
void main ()
{	
	//declara��o de vari�veis
	int numero, sum;
	float avg;
	
	//lendo o valor de entrada
	printf ("Entre com um numero: ");
	scanf ("%d", &numero);
	
	//chamando a fun��o
	calcularSomaMedia (numero, &sum, &avg);
	
	//exibindo os resultados
	printf ("Soma = %d\nMedia = %.1f\n", sum, avg);
}

//implementa��o das fun��es
void calcularSomaMedia (int n, int *soma, float *media)
{
	//declarando vari�veis
	int i, s=0, cont=0;
	float m;
	
	//calculando os divisores de n
	for (i=1;i<=n;i++)
	{
		//verificando se 'i' � divisor de 'n'
		if (n%i==0)
		{
			s += i;
			cont++;
		}
	}
	
	//calculando a m�dia
	m = (float)s/cont;
	
	//atribuindo os resultados aos par�metros de sa�da
	*soma = s;
	*media = m;
}
