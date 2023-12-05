/*
QUESTÃO 11: Implementar um programa no qual o usuário informa um número e verifica-se se ele é um número triangular. 
   
Obs.: Um número é triangular quando ele for resultado do produto de três números consecutivos. 
   
Exemplo: 
		   
24 = 2 x 3 x 4
6 = 1 x 2 x 3
60 = 3 x 4 x 5
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int num, i;
	
	//Recebendo dados
	printf ("Insira um numero: ");
	scanf("%d", &num);
	
	//Verificando se é triangular
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
