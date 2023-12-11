/********************************************************************************************

	FPR - Manh�
	Professor Leonardo Vianna
	2021/1
	Data: 07/04/2021
	
	Lista de Exerc�cios V - Recursividade
	
	Exerc�cio 3: Fazer uma fun��o recursiva que, dado um n�mero 
	inteiro N, exiba o mesmo na base 2 (bin�ria)..
		
*******************************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
void binario (int n);

//fun��o main
void main ()
{
	//declara��o de vari�veis
	int num;
	
	//leitura dos dados
	printf ("Entre com o valor a ser transformado para a base 2: ");
	scanf ("%d", &num);
	
	//chamando a fun��o	
  	binario (num);
}

//implementa��o das fun��es
void binario (int n)
{
  if(n >= 1)
  {
    binario(n/2);
    printf("%d", n%2);
  }
}
