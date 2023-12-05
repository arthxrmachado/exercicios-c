/*
   FAC - Turma B
   Data: 17/09/2020
   
   QUESTÃO 09:
   Escrever um programa que encontre o quinto número maior que 1000, cuja divisão por 11 
   tenha resto 5.
   
   
   1001  1002  1003  1004  1005  1006 ...
   							1º
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int numero = 1000, cont = 0;
	
	do
	{
		numero++;
		
		if (numero % 11 == 5)
		{
			cont++;
		}
	}
	while (cont < 5);
	
	//exibindo o resultado
	printf ("Resposta = %d", numero);
}
