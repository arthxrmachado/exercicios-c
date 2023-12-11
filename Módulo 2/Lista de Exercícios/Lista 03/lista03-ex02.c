/********************************************************************************************

	FPR - Manh�
	Professor Leonardo Vianna
	2021/1
	Data: 07/04/2021
	
	Lista de Exerc�cios V - Recursividade
	
	Exerc�cio 2: Desenvolver uma fun��o recursiva que exiba 
	todos os m�ltiplos do n�mero N, inferiores ao valor V.
		
*******************************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
void multiplos (int n, int v);
void multiplos_aux (int n, int v, int aux);

//fun��o main
void main ()
{
	//declara��o de vari�veis
	int num, limite;
	
	//leitura dos dados
	printf ("Entre com o valor do qual serao exibidos os multiplos: ");
	scanf ("%d", &num);
	
	printf ("Entre com o limite: ");
	scanf ("%d", &limite);
	
  	multiplos (num, limite);
}

void multiplos (int n, int v)
{
	multiplos_aux (n, v, 0);
}

void multiplos_aux (int n, int v, int aux)
{
	if (aux <= v)   //caso geral
  	{
    	printf("%d ", aux);
    	multiplos_aux (n, v, aux+n);
  	}
}
