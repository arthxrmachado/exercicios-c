/*
	FAC - Turma B - 03/09/2020
	
	QUESTÃO 06: Faça um programa que leia um número N inteiro, menor ou igual a 18. Se for 
	maior do que 18, o programa exibirá uma mensagem de erro e terminará a sua execução; 
	caso contrário, deverá exibir os números no intervalo de 1 a 99 cujos algarismos somem N.

	Exemplo:
		N = 12		Portanto, o programa deve exibir os números que estão no intervalo 
			        de 1 a 99, cujos algarismos somam 12. 
					Ou seja: 39, 48, 57, 66, 75, 84 e 93.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int n, i, dezena, unidade;
	
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
		for (i=1;i<=99;i++)
		{
			//decompondo cada numero de 1 a 99 em dezena e unidade
			dezena = i/10;
			unidade = i%10;
			
			//verificando se a soma dos algarismos é igual a N
			if (dezena + unidade == n)
			{
				printf ("%d  ", i);
			}
		}
	}
}
