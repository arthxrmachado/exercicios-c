/*

	2FPR - Manhã
	Aluno: Arthur Lourenço Machado
	2021/1 - 3º Período
	Data: 14/04/2021
	
	Matrizes:
	
	Lista de Exercícios IV - QUESTÃO 06:
	
	Considere uma loja que mantém em uma matriz 
	o total vendido por cada funcionário pelos 
	diversos meses do ano. Ou seja, uma matriz 
	de 12 linhas (uma por mês) e 10 colunas
	(10 funcionários). Pede-se o desenvolvimento
	de uma função para cada item abaixo:
	
	a. Calcular o total vendido durante o ano;
	
	b. Dado um mês fornecido pelo usuário, 
	determinar o total vendido nesse mês;
	
	c. Dado um funcionário fornecido pelo 
	usuário, determinar o total vendido por ele 
	durante o ano;
	
	d. Determinar o mês com maior índice de vendas;
	
	e. Determinar o funcionário que menos vendeu 
	durante o ano.

*/

//definição de constantes

#define MESES 12
#define FUNC 10

//importação de bibliotecas

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//protótipos das funções

void preencherAleatoriamente (float vendas[MESES][FUNC]);
void exibir (float vendas[MESES][FUNC]);

float calcularTotal(float vendas[MESES][FUNC]);
float calcularVendasPorMes (float vendas[MESES][FUNC], int mes);
float calcularVendasPorFunc (float vendas[MESES][FUNC], int funcionario);
int calcularMesMaiorVendas (float vendas[MESES][FUNC]);
int calcularFuncMenorVenda (float vendas[MESES][FUNC]);

//função main

void main (){
	
	//declaração de variáveis
	
	float v[MESES][FUNC];
	int mes, funcionario;
	
	//preenchendo a matriz
	
	preencherAleatoriamente (v);
	exibir (v);
	
	//exibindo total vendido na loja durante o ano
	
	printf ("\n\nTotal vendido = R$ %.2f\n" , calcularTotal(v));
	
	//verificando o total vendido em determinado mês
	
	printf ("Entre com um mes (1...12): ");
	scanf ("%d", &mes);
	
	printf("\nTotal vendido no mes %d foi R$ %.2f\n", mes, calcularVendasPorMes);
	
	//verificando o total vendido por determinado funcionário
	
	printf ("Entre com um mes (0...10): ");
	scanf ("%d", &funcionario);
	
	printf ("\nTotal vendido pelo funcionario %d foi R$ %.2f\n", funcionario, calcularVendasPorFunc);
	
	//exibindo o mês de maior índice de vendas
	
	printf ("\nO mes com o maior indice de vendas foi %d\n" , calcularMesMaiorVendas);
	
	//exibindo o funcionário com menor índice de vendas
	
	printf ("\nO funcionario com o menor indice de vendas foi %d\n", calcularFuncMenorVenda);
	
}

//implementação das funções

void preencherAleatoriamente (float vendas[MESES][FUNC]){
	
	//declaração de variáveis
	
	int i, j;
	
	srand (time(NULL));
	
	//percorrendo toda a matriz
	
	for (i=0; i<MESES; i++){
		
		for (j=0; j<FUNC; j++){
			
			matriz[i][j] = 1000 + rand ()/100.0;
			
		}
		
	}
	
}

void exibir (float vendas[MESES][FUNC]){
	
	//declaração de variáveis
	
	int i, j;
	
	//percorrendo toda a matriz
	
	for (i=0; i<MESES; i++){
		
		for (j=0; j<FUNC; j++){
			
			printf ("%7.2f ", matriz[i][j]);
			
		}
		
		printf ("\n");
		
	}
	
}

//a. Calcular o total vendido durante o ano;

float calcularTotal(float vendas[MESES][FUNC]){
	
	//declaração de variáveis
	
	float soma = 0
	int i, j;
	
	//percorrendo toda matriz para fazer o somatório dos valores
	
	for (i=0; i<MESES; i++){
		
		for (j=0; j<FUNC; j++){
			
			soma += vendas [i][j];
			
		}
		
	}
	
	//retornando resultado
	
	return soma;
	
}

//b. Dado um mês fornecido pelo usuário, determinar o total vendido nesse mês;

float calcularVendasPorMes (float vendas[MESES][FUNC], int mes){
	
	//declaração de variáveis
	
	float soma = 0;
	int j;
	
	//atualizando variável mês: de 0...11 para 1...12
	
	mes--;
	
	//percorrendo toda a linha referente ao mês
	
	for (j=0; j<FUNC; j++){
		
		soma += vendas[mes][j]
		
	}
	
	//retornando resultado
	
	return soma;
	
}

//c. Dado um funcionário fornecido pelo usuário, determinar o total vendido por ele durante o ano;

float calcularVendasPorFunc (float vendas[MESES][FUNC], int funcionario){
	
	//declaração de variáveis
	
	float soma = 0;
	int i;
	
	//atualizando variável funcionario: de 0...9 para 1...10
	
	funcionario--;
	
	//percorrendo toda a linha referente ao mês
	
	for (i=0; i<MESES; i++){
		
		soma += vendas[i][funcionario]
		
	}
	
	//retornando resultado
	
	return soma;
	
}

//d. Determinar o mês com maior índice de vendas;

int calcularMesMaiorVendas (float vendas[MESES][FUNC]){
	
	//declaração de variáveis
	
	float maior = -1;
	int mes, maiorMes;
	
	//percorrendo todos os meses do ano
	
	for (mes=0; mes<MESES; mes++){
		
		//calculando o total vendido a cada mês do ano
		
		total = calcularVendasPorMes (vendas, mes);
		
		//verificando se é o mês de maior índice de vendas
		
		if (total > maior){
			
			maior = total;
			maiorMes = mes;
			
		}
		
	}
	
	//retornando resultado
	
	return maiorMes+1; //transformando 0...11 para 1...12, por isso esse +1.
	
}

//e. Determinar o funcionário que menos vendeu durante o ano.

int calcularFuncMenorVenda (float vendas[MESES][FUNC]){
	
	//declaração de variáveis
	
	float total, menor = 10000000;
	int funcionario, menorFuncionario;
	
	//percorrendo todos os funcionários
	
	for (funcionario=0; funcionario<FUNC; funcionario++){
		
		//calculando o total vendido por cada funcionário
		
		total = calcularVendasPorFunc (vendas, funcionario);
		
		//verificando se é o mês de maior índice de vendas
		
		if (total < menor){
			
			menor = total;
			maiorFuncionario = funcionario;
			
		}
		
	}
	
	//retornando resultado
	
	return menorFuncionario+1; //transformando 0...9 para 1...10, por isso esse +1.
	
}
