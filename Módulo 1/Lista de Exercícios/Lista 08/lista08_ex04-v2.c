/*
   FAC - Turma B - 2020/1
   Professor Leonardo Vianna
   
   Lista de Exerc�cios VIII (Fun��es):
   
   QUEST�O 04:
   Fazer uma fun��o que calcule o MDC (m�ximo divisor comum) 
   entre dois n�meros.
   						________
   				  A	-->	|      | --> mdc
   				  B	-->	|______|

   						________
   				  10-->	|      | --> 5
   				  15-->	|______|

        *   *  
    10: 1 2 5 10
    15: 1 3 5 15
    
    mdc (3,10): 1
    mdc (5,20): 5
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
int mdc (int a, int b);
int calculaMenor (int num1, int num2);

//main
void main ()
{	
	//declara��o de vari�veis
	int n1, n2;
	
	//lendo os valores de entrada
	printf ("Entre com dois numeros: ");
	scanf ("%d %d", &n1, &n2);
	
	//exibindo o mdc
	printf ("MDC(%d,%d) = %d\n", n1, n2, mdc (n1,n2));		
}

//implementa��o das fun��es
int calculaMenor (int num1, int num2)
{
	return (num1<num2)?num1:num2;
}

int mdc (int a, int b)
{
	//declara��o de vari�veis
	int menor, i;
	
	//calculando o menor entre 'a' e 'b'
	/*if (a < b)
	{
		menor = a;
	}
	else
	{
		menor = b;
	}*/
	
	//menor = (a<b)?a:b;
	menor = calculaMenor(a,b);
	
	for (i=menor;i>=1;i--)
	{
		//verificando se 'i' � divisor dos dois valores (ou seja, se � um divisor comum)
		if ((a%i==0) && (b%i==0))
		{
			return i;
		}
	}
}
