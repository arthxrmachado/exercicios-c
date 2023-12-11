/********************************************************************************************

	FPR - Manh�
	Professor Leonardo Vianna
	2021/1
	Data: 14/04/2021
	
	Matrizes
	
	Lista de Exerc�cios IV - Exerc�cio 6
	
	Considere uma loja que mant�m em uma matriz o total vendido 
	por cada funcion�rio pelos diversos meses do ano. Ou seja, 
	uma matriz de 12 linhas (uma por m�s) e 10 colunas (10 
	funcion�rios). Pede-se o desenvolvimento de uma fun��o para 
	cada item abaixo:	
	
	a. Calcular o total vendido durante o ano;
	b. Dado um m�s fornecido pelo usu�rio, determinar o total 
	vendido nesse m�s;
	c. Dado um funcion�rio fornecido pelo usu�rio, determinar 
	o total vendido por ele durante o ano;
	d. Determinar o m�s com maior �ndice de vendas;
	e. Determinar o funcion�rio que menos vendeu durante o ano.

*******************************************************************************************/

//defini��o de constantes
#define MESES 12
#define FUNC  10

//importa��o de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//prot�tipos das fun��es
float calcularTotal (float vendas[MESES][FUNC]);
float calcularVendasPorMes (float vendas[MESES][FUNC], int mes);
float calcularVendasPorFunc (float vendas[MESES][FUNC], int funcionario);
int   calcularMesMaiorVenda (float vendas[MESES][FUNC]);
int   calcularFuncMenorVenda (float vendas[MESES][FUNC]);

void preencheAleatoriamente (float vendas[MESES][FUNC]);
void exibir (float vendas[MESES][FUNC]);

//fun��o main
void main ()
{
	//declara��o de vari�veis
	float v[MESES][FUNC];
	int mes, funcionario;
	
	//preenchendo a matriz
	preencheAleatoriamente (v);
	exibir (v);

	//Exibindo o total vendido na loja durante o ano
	printf ("\n\nTotal vendido = R$ %.2f\n", calcularTotal (v));

	//Verificando o total vendido em determinado m�s
	printf ("\nEntre com um mes (1..12): ");
	scanf ("%d", &mes);
	
	printf ("\nTotal vendido no mes %d foi R$ %.2f\n", mes, calcularVendasPorMes (v, mes));

	//Verificando o total vendido por determinado funcion�rio
	printf ("\nEntre com o c�digo de um funcion�rio (1..10): ");
	scanf ("%d", &funcionario);
	
	printf ("\nTotal vendido pelo funcionario %d foi R$ %.2f\n", funcionario, calcularVendasPorFunc (v, funcionario));

	//Exibindo o m�s de maior �ndice de vendas
	printf ("\nO mes com maior indice de vendas foi %d\n", calcularMesMaiorVenda (v));
	
	//Exibindo o funcion�rio com menor �ndice de vendas
	printf ("\nO funcionario com menor indice de vendas foi %d\n", calcularFuncMenorVenda (v));
}

//implementa��o das fun��es

//a. Calcular o total vendido durante o ano.
float calcularTotal (float vendas[MESES][FUNC])
{
	//declara��o de vari�veis
	float soma = 0;
	int i, j;
	
	//percorrendo toda a matriz para fazer o somat�rio dos valores
	for (i=0;i<MESES;i++)
	{
		for (j=0;j<FUNC;j++)
		{
			soma += vendas[i][j];
		}
	}
	
	//retornando o resultado
	return soma;
}

//b. Dado um m�s fornecido pelo usu�rio, determinar o total 
//vendido nesse m�s;
float calcularVendasPorMes (float vendas[MESES][FUNC], int mes)
{
	//declara��o de vari�veis
	float soma = 0;
	int j;

	//atualizando a vari�vel mes: de 1..12 para 0..11
	mes--;
	
	//percorrendo toda a linha referente ao m�s passado por par�metro
	for (j=0;j<FUNC;j++)
	{
		soma += vendas[mes][j];
	}
	
	//retornando o resultado
	return soma;
}

//c. Dado um funcion�rio fornecido pelo usu�rio, determinar 
//o total vendido por ele durante o ano;
float calcularVendasPorFunc (float vendas[MESES][FUNC], int funcionario)
{
	//declara��o de vari�veis
	float soma = 0;
	int i;

	//atualizando a vari�vel funcionario: de 1..10 para 0..9
	funcionario--;
	
	//percorrendo toda a coluna referente ao funcion�rio passado por par�metro
	for (i=0;i<MESES;i++)
	{
		soma += vendas[i][funcionario];
	}
	
	//retornando o resultado
	return soma;	
}

//d. Determinar o m�s com maior �ndice de vendas;
int   calcularMesMaiorVenda (float vendas[MESES][FUNC])
{
	//declara��o de vari�veis
	float total, maior = calcularVendasPorMes (vendas, 1);
	int mes, maiorMes = 1;

	//percorrendo todos os meses do ano	
	for (mes=2;mes<=MESES;mes++)
	{
		//calculando o total vendido em cada m�s do ano
		total = calcularVendasPorMes (vendas, mes);

		//verificando se � o m�s de maior �ndice de vendas		
		if (total > maior)
		{
			maior = total;
			maiorMes = mes;
		}
	}
	
	//retornando o m�s de maior �ndice de vendas
	return maiorMes;  
}


//e. Determinar o funcion�rio que menos vendeu durante o ano.
int   calcularFuncMenorVenda (float vendas[MESES][FUNC])
{
	//declara��o de vari�veis
	float total, menor = calcularVendasPorFunc (vendas, 1);
	int funcionario, menorFuncionario = 1;

	//percorrendo todos os funcion�rios
	for (funcionario=2;funcionario<=FUNC;funcionario++)
	{
		//calculando o total vendido por cada funcion�rio durante o ano
		total = calcularVendasPorFunc (vendas, funcionario);

		//verificando se � o funcion�rio com menor �ndice de vendas		
		if (total < menor)
		{
			menor = total;
			menorFuncionario = funcionario;
		}
	}
	
	//retornando o funcion�rio de menor �ndice de vendas
	return menorFuncionario; 
}

//preenche a matriz com n�meros aleat�rios
void preencheAleatoriamente (float vendas[MESES][FUNC])
{
	//declara��o de vari�veis
	int i, j;
	
	srand (time(NULL));
	
	//percorrendo toda a matriz
	for (i=0;i<MESES;i++)
	{
		for (j=0;j<FUNC;j++)
		{
			vendas[i][j] = 1000 + rand ()/100.0;
			//vendas[i][j] = rand ()%3;
		}		
	}
}

void exibir (float vendas[MESES][FUNC])
{
	//declara��o de vari�veis
	int i, j;
	
	//percorrendo toda a matriz
	for (i=0;i<MESES;i++)
	{
		for (j=0;j<FUNC;j++)
		{
			printf ("%7.2f ", vendas[i][j]);
		}		
		printf ("\n");
	}
}
