/*
   FAC - Turma B - 2020/1
   Professor Leonardo Vianna
   
   Lista de Exerc�cios VIII (Fun��es):
   
   QUEST�O 02:
   Implementar uma fun��o que converta determinada temperatura 
   em graus Celsius para graus Fahrenheit.
   
   F = 1.8 x C + 32 
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
float converterTemperatura (float C);

//main
void main ()
{	
	//declara��o de vari�veis
	float celsius, fahrenheit;
	int i;

	//Exemplo 1
	//lendo a temperatura em Celsius
	printf ("Exemplo 1:\n\n");
	printf ("Entre com a temperatura em Celsius: ");
	scanf ("%f", &celsius);
	
	//chamando a fun��o de convers�o
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

//implementa��o das fun��es
float converterTemperatura (float C)  
{
/*	float F;
	
	F = 1.8 * C + 32;	
	
	return F;*/
	
	return 1.8 * C + 32;
}
