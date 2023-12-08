/*
Questão 04: Na matemática, dois números são chamados de primos entre si quando o seu único divisor em comum é a unidade (ou seja, o número 1). Considerando 
este conceito, implementar um programa que, dados dois números inteiros, determine se são ou não primos entre si.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int num1, num2, i, primos, menor;
	
	//leitura dos dois números
	printf ("Entre com os dois numeros: ");
	scanf ("%d %d", &num1, &num2);

	//determinando o menor entre os valores
	//afinal, basta verificar se existe algum divisor comum entre os dois números no 
	//intervalo de 2 ao menor dos valores
	if (num1 < num2)
	{
		menor = num1;
	}	
	else
	{
		menor = num2;
	}
	
	//ou apenas: menor = (num1<num2)?num1:num2;
	
	//inicialmente, considerando que são primos entre si. Se algum divisor comum for
	//encontrado, essa variável reberá 0
	primos = 1;
	
	//verificando se há algum divisor comum entre os dois elementos
	for (i=2;(i<=menor)&&(primos==1);i++)  //se a variável 'primos' mudar para 0, já sabemos que não são primos entre si. Portanto, pode parar a busca.
	{
		if ((num1%i==0) && (num2%i==0))
		{
			primos = 0;
		}
	}
	
	//verificando se é ou não primo
	if (primos == 1)
	{
		printf ("Os numeros sao primos entre si.\n");
	}
	else
	{
		printf ("Os numeros nao sao primos entre si.\n");
	}
}
