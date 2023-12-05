/*
  FAC - Turma B - 2020/1
  Professor Leonardo Vianna
  
  Lista de Exerc�cios IX:
  
  QUEST�O 01:
  Desenvolver uma fun��o que, dado um n�mero inteiro n, 
  exiba todos os n�meros existentes no intervalo definido 
  por a e b (a < b), exceto aqueles que forem m�ltiplos de n.
  
  Exemplos:
  	n = 4
  	a = 10, b = 20
  	
  	Sa�da: 10, 11, 13, 14, 15, 17, 18, 19 
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
void exibir (int n, int a, int b);

//main
void main ()
{
	exibir (4, 10, 20);
}

//implementa��o das fun��es
void exibir (int n, int a, int b)
{
	//declara��o de vari�veis
	int i;
	
	//percorrendo o intervalo de 'a' a 'b'
	for (i=a;i<=b;i++)
	{
		//verificando se i n�o � m�ltiplo de n
		if (i%n != 0)
		{
			printf ("%d ", i);
		}
	}
}
