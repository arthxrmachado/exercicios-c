/*
   FAC - Turma B
   Data: 17/09/2020
   
   QUEST�O 09:
   Escrever um programa que encontre o quinto n�mero maior que 1000, cuja divis�o por 11 
   tenha resto 5.
   
   
   1001  1002  1003  1004  1005  1006 ...
   							1�
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
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
