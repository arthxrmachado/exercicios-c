/*
QUESTÃO 06: Considere uma loja que mantém em uma matriz o total vendido por cada funcionário pelos diversos meses do ano. Ou seja, uma matriz de 12 linhas 
(uma por mês) e 10 colunas (10 funcionários). Pede-se o desenvolvimento de uma função para cada item abaixo:	
	
a. Calcular o total vendido durante o ano;
b. Dado um mês fornecido pelo usuário, determinar o total vendido nesse mês;
c. Dado um funcionário fornecido pelo usuário, determinar o total vendido por ele durante o ano;
d. Determinar o mês com maior índice de vendas;
e. Determinar o funcionário que menos vendeu durante o ano.

*/

//definição de constantes
#define MESES 12
#define FUNC  10

//importação de bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//protótipos das funções
float calcularTotal (float vendas[MESES][FUNC]);
float calcularVendasPorMes (float vendas[MESES][FUNC], int mes);
float calcularVendasPorFunc (float vendas[MESES][FUNC], int funcionario);
int   calcularMesMaiorVenda (float vendas[MESES][FUNC]);
int   calcularFuncMenorVenda (float vendas[MESES][FUNC]);

void preencheAleatoriamente (float vendas[MESES][FUNC]);
void exibir (float vendas[MESES][FUNC]);

//função main
void main ()
{
	//declaração de variáveis
	float v[MESES][FUNC];
	int mes, funcionario;
	
	//preenchendo a matriz
	preencheAleatoriamente (v);
	exibir (v);

	//Exibindo o total vendido na loja durante o ano
	printf ("\n\nTotal vendido = R$ %.2f\n", calcularTotal (v));

	//Verificando o total vendido em determinado mês
	printf ("\nEntre com um mes (1..12): ");
	scanf ("%d", &mes);
	
	printf ("\nTotal vendido no mes %d foi R$ %.2f\n", mes, calcularVendasPorMes (v, mes));

	//Verificando o total vendido por determinado funcionário
	printf ("\nEntre com o código de um funcionário (1..10): ");
	scanf ("%d", &funcionario);
	
	printf ("\nTotal vendido pelo funcionario %d foi R$ %.2f\n", funcionario, calcularVendasPorFunc (v, funcionario));

	//Exibindo o mês de maior índice de vendas
	printf ("\nO mes com maior indice de vendas foi %d\n", calcularMesMaiorVenda (v));
	
	//Exibindo o funcionário com menor índice de vendas
	printf ("\nO funcionario com menor indice de vendas foi %d\n", calcularFuncMenorVenda (v));
}

//implementação das funções

//a. Calcular o total vendido durante o ano.
float calcularTotal (float vendas[MESES][FUNC])
{
	//declaração de variáveis
	float soma = 0;
	int i, j;
	
	//percorrendo toda a matriz para fazer o somatório dos valores
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

//b. Dado um mês fornecido pelo usuário, determinar o total 
//vendido nesse mês;
float calcularVendasPorMes (float vendas[MESES][FUNC], int mes)
{
	//declaração de variáveis
	float soma = 0;
	int j;

	//atualizando a variável mes: de 1..12 para 0..11
	mes--;
	
	//percorrendo toda a linha referente ao mês passado por parâmetro
	for (j=0;j<FUNC;j++)
	{
		soma += vendas[mes][j];
	}
	
	//retornando o resultado
	return soma;
}

//c. Dado um funcionário fornecido pelo usuário, determinar 
//o total vendido por ele durante o ano;
float calcularVendasPorFunc (float vendas[MESES][FUNC], int funcionario)
{
	//declaração de variáveis
	float soma = 0;
	int i;

	//atualizando a variável funcionario: de 1..10 para 0..9
	funcionario--;
	
	//percorrendo toda a coluna referente ao funcionário passado por parâmetro
	for (i=0;i<MESES;i++)
	{
		soma += vendas[i][funcionario];
	}
	
	//retornando o resultado
	return soma;	
}

//d. Determinar o mês com maior índice de vendas;
int   calcularMesMaiorVenda (float vendas[MESES][FUNC])
{
	//declaração de variáveis
	float total, maior = -1;
	int mes, maiorMes;

	//percorrendo todos os meses do ano	
	for (mes=1;mes<=MESES;mes++)
	{
		//calculando o total vendido em cada mês do ano
		total = calcularVendasPorMes (vendas, mes);

		//verificando se é o mês de maior índice de vendas		
		if (total > maior)
		{
			maior = total;
			maiorMes = mes;
		}
	}
	
	//retornando o mês de maior índice de vendas
	return maiorMes;  
}


//e. Determinar o funcionário que menos vendeu durante o ano.
int   calcularFuncMenorVenda (float vendas[MESES][FUNC])
{
	//declaração de variáveis
	float total, menor = 10000000;
	int funcionario, menorFuncionario;

	//percorrendo todos os funcionários
	for (funcionario=1;funcionario<=FUNC;funcionario++)
	{
		//calculando o total vendido por cada funcionário durante o ano
		total = calcularVendasPorFunc (vendas, funcionario);

		//verificando se é o funcionário com menor índice de vendas		
		if (total < menor)
		{
			menor = total;
			menorFuncionario = funcionario;
		}
	}
	
	//retornando o funcionário de menor índice de vendas
	return menorFuncionario; 
}

//preenche a matriz com números aleatórios
void preencheAleatoriamente (float vendas[MESES][FUNC])
{
	//declaração de variáveis
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
	//declaração de variáveis
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
