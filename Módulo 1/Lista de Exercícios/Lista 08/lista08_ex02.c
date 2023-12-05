/*
   FAC - Turma B - 2020/1
   Professor Leonardo Vianna
   
   Lista de Exercícios VIII (Funções):
   
   QUESTÃO 02:
   Implementar uma função que converta determinada temperatura 
   em graus Celsius para graus Fahrenheit.
   
   F = 1.8 x C + 32 
*/

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
float converterTemperatura (float C);

//main
void main ()
{	
	//declaração de variáveis
	float celsius, fahrenheit;
	int i;

	//Exemplo 1
	//lendo a temperatura em Celsius
	printf ("Exemplo 1:\n\n");
	printf ("Entre com a temperatura em Celsius: ");
	scanf ("%f", &celsius);
	
	//chamando a função de conversão
	fahrenheit = converterTemperatura (celsius);
	
	//exibindo o resultado
	printf ("%.1fo. C = %.1fo. F\n", celsius, fahrenheit);
	
	//Exemplo 2
	printf ("Exemplo 2:\n\n");
	
	for (i=0;i<=100;i++)
	{
		printf ("%4do. C\t\t%5.1fo.F\n", i, converterTemperatura(i));
	}
}

//implementação das funções
float converterTemperatura (float C)  
{
/*	float F;
	
	F = 1.8 * C + 32;	
	
	return F;*/
	
	return 1.8 * C + 32;
}
