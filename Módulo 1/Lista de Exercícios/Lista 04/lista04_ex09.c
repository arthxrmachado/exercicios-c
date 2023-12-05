/*
QUESTÃO 09: Escrever um programa que encontre o quinto número maior que 1000, cuja divisão por 11 tenha resto 5.
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
