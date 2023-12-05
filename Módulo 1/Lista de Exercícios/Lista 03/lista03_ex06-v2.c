/*
	FAC - Turma B - 03/09/2020
	
	QUESTÃO 06: Faça um programa que leia um número N inteiro, menor ou igual a 18. Se for 
	maior do que 18, o programa exibirá uma mensagem de erro e terminará a sua execução; 
	caso contrário, deverá exibir os números no intervalo de 1 a 99 cujos algarismos somem N.

	Exemplo:
		N = 12		Portanto, o programa deve exibir os números que estão no intervalo 
			        de 1 a 99, cujos algarismos somam 12. 
					Ou seja: 39, 48, 57, 66, 75, 84 e 93.
					
	Nesta solução, não houve a variação direta de 1 a 99, conforme solicitado no enunciado
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
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
		//se entrou aqui, é pq o N é válido
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
