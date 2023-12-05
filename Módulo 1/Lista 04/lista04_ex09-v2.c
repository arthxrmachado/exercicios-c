/*
   FAC - Turma B
   Data: 17/09/2020
   
   QUESTÃO 09:
   Escrever um programa que encontre o quinto número maior que 1000, cuja divisão por 11 
   tenha resto 5.
   
   versão 2
   
   1001  1002  1003  1004  1005  1006 ...
   							1º
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int num = 1000, cont = 0;
	
	for(cont=0;cont<5;)
	{
		num++;
		
		if(num%11==5)
		{
			cont++;
		}
	}	
	
	//exibindo o resultado
	printf("O quinto numero maior que 1000, cuja divisao por 11 tenha resto 5 e: %d", num);
}	

