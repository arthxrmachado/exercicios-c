/*
   FAC - Turma B
   
   Lista de Exerc�cios VI
   
   QUEST�O 02: Um fazendeiro realizou um tratamento sobre sua 
   planta��o de caf� que gerou um crescimento constante de C % 
   em sua produ��o, por ano. Considerando que atualmente sua 
   produ��o anual seja de M u.p., implementar um programa que 
   determine a quantidade de anos necess�ria para que a produ��o 
   duplique.
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int anos = 0;
	float m, c, prod;
	
	//lendo os dados de entrada
	printf ("Entre com a producao anual atual: ");
	scanf ("%f", &m);
	
	printf ("Entre com a taxa de crescimento anual: ");
	scanf ("%f", &c);
	
	prod = m;
	while (prod < 2*m)
	{
		prod += (c/100)*prod;
			
		anos++;
	}
	
	//exibindo o resultado
	printf ("Foram necessarios %d anos para a producao duplicar (%.1f --> %.1f)\n", anos, m, prod);
}
