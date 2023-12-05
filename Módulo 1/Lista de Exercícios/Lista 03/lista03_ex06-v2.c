/*
	FAC - Turma B - 03/09/2020
	
	QUEST�O 06: Fa�a um programa que leia um n�mero N inteiro, menor ou igual a 18. Se for 
	maior do que 18, o programa exibir� uma mensagem de erro e terminar� a sua execu��o; 
	caso contr�rio, dever� exibir os n�meros no intervalo de 1 a 99 cujos algarismos somem N.

	Exemplo:
		N = 12		Portanto, o programa deve exibir os n�meros que est�o no intervalo 
			        de 1 a 99, cujos algarismos somam 12. 
					Ou seja: 39, 48, 57, 66, 75, 84 e 93.
					
	Nesta solu��o, n�o houve a varia��o direta de 1 a 99, conforme solicitado no enunciado
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int n, i, j;
	
	//leitura do valor de N
	printf ("Entre com um numero (de 1 a 18): ");
	scanf ("%d", &n);
	
	//validando o valor de N
	if ((n < 1) || (n > 18))
	{
		printf ("Valor invalido! Deve estar no intervalo de 1 a 18.");
	}
	else
	{
		//se entrou aqui, � pq o N � v�lido
		for (i=0;i<=9;i++)		//i representa a dezena
		{
			for (j=0;j<=9;j++)	//j representa a unidade
			{
				if ((i+j) == n)	//somando dezena e unidade para verificar se somam N
				{
					printf("%d%d ", i, j);
				}	
			}
		}
	}
}
