/*
   FAC - Turma B
   Data: 17/09/2020
   
   QUEST�O 11:
   Implementar um programa no qual o usu�rio informa um n�mero e verifica-se se ele � 
   um n�mero triangular. 
   
   Obs.: Um n�mero � triangular quando ele for resultado do produto de tr�s n�meros 
   consecutivos. 
   
   		Exemplo: 
		   
		   24 = 2 x 3 x 4
		   6 = 1 x 2 x 3
		   60 = 3 x 4 x 5
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int num, i;
	
	//Recebendo dados
	printf ("Insira um numero: ");
	scanf("%d", &num);
	
	//Verificando se � triangular
	for (i=1;i*(i+1)*(i+2) < num;i++);
		
	if (i*(i+1)*(i+2) == num)
	{
		printf("\n\n %d e' triangular. Ele e' produto de %d*%d*%d !", num, i, i+1, i+2);
	}
	else
	{
		printf("O numero nao e' triangular");
	}
}
