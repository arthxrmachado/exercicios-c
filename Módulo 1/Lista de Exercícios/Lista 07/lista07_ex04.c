/*
	FAC - 2020/1
	Lista de Exerc�cios VII
	
	Quest�o 04:
	Na matem�tica, dois n�meros s�o chamados de primos entre si quando o seu �nico divisor 
	em comum � a unidade (ou seja, o n�mero 1). 
	Considerando este conceito, implementar um programa que, dados dois n�meros inteiros, 
	determine se s�o ou n�o primos entre si.
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int num1, num2, i, primos, menor;
	
	//leitura dos dois n�meros
	printf ("Entre com os dois numeros: ");
	scanf ("%d %d", &num1, &num2);

	//determinando o menor entre os valores
	//afinal, basta verificar se existe algum divisor comum entre os dois n�meros no 
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
	
	//inicialmente, considerando que s�o primos entre si. Se algum divisor comum for
	//encontrado, essa vari�vel reber� 0
	primos = 1;
	
	//verificando se h� algum divisor comum entre os dois elementos
	for (i=2;(i<=menor)&&(primos==1);i++)  //se a vari�vel 'primos' mudar para 0, j� sabemos que n�o s�o primos entre si. Portanto, pode parar a busca.
	{
		if ((num1%i==0) && (num2%i==0))
		{
			primos = 0;
		}
	}
	
	//verificando se � ou n�o primo
	if (primos == 1)
	{
		printf ("Os numeros sao primos entre si.\n");
	}
	else
	{
		printf ("Os numeros nao sao primos entre si.\n");
	}
}
