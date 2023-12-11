/*

	2FPR - Manh�
	Aluno: Arthur Louren�o Machado
	2021/1 - 3� Per�odo
	Data: 14/04/2021
	
	Matrizes:
	
	Lista de Exerc�cios IV - QUEST�O 06:
	
	Considere uma loja que mant�m em uma matriz 
	o total vendido por cada funcion�rio pelos 
	diversos meses do ano. Ou seja, uma matriz 
	de 12 linhas (uma por m�s) e 10 colunas
	(10 funcion�rios). Pede-se o desenvolvimento
	de uma fun��o para cada item abaixo:
	
	a. Calcular o total vendido durante o ano;
	
	b. Dado um m�s fornecido pelo usu�rio, 
	determinar o total vendido nesse m�s;
	
	c. Dado um funcion�rio fornecido pelo 
	usu�rio, determinar o total vendido por ele 
	durante o ano;
	
	d. Determinar o m�s com maior �ndice de vendas;
	
	e. Determinar o funcion�rio que menos vendeu 
	durante o ano.

*/

//defini��o de constantes

#define MESES 12
#define FUNC 10

//importa��o de bibliotecas

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//prot�tipos das fun��es

void preencherAleatoriamente (float vendas[MESES][FUNC]);
void exibir (float vendas[MESES][FUNC]);

float calcularTotal(float vendas[MESES][FUNC]);
float calcularVendasPorMes (float vendas[MESES][FUNC], int mes);
float calcularVendasPorFunc (float vendas[MESES][FUNC], int funcionario);
int calcularMesMaiorVendas (float vendas[MESES][FUNC]);
int calcularFuncMenorVenda (float vendas[MESES][FUNC]);

//fun��o main

void main (){
	
	//declara��o de vari�veis
	
	float v[MESES][FUNC];
	int mes, funcionario;
	
	//preenchendo a matriz
	
	preencherAleatoriamente (v);
	exibir (v);
	
	//exibindo total vendido na loja durante o ano
	
	printf ("\n\nTotal vendido = R$ %.2f\n" , calcularTotal(v));
	
	//verificando o total vendido em determinado m�s
	
	printf ("Entre com um mes (1...12): ");
	scanf ("%d", &mes);
	
	printf("\nTotal vendido no mes %d foi R$ %.2f\n", mes, calcularVendasPorMes);
	
	//verificando o total vendido por determinado funcion�rio
	
	printf ("Entre com um mes (0...10): ");
	scanf ("%d", &funcionario);
	
	printf ("\nTotal vendido pelo funcionario %d foi R$ %.2f\n", funcionario, calcularVendasPorFunc);
	
	//exibindo o m�s de maior �ndice de vendas
	
	printf ("\nO mes com o maior indice de vendas foi %d\n" , calcularMesMaiorVendas);
	
	//exibindo o funcion�rio com menor �ndice de vendas
	
	printf ("\nO funcionario com o menor indice de vendas foi %d\n", calcularFuncMenorVenda);
	
}

//implementa��o das fun��es

void preencherAleatoriamente (float vendas[MESES][FUNC]){
	
	//declara��o de vari�veis
	
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
	
	//declara��o de vari�veis
	
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
	
	//declara��o de vari�veis
	
	float soma = 0
	int i, j;
	
	//percorrendo toda matriz para fazer o somat�rio dos valores
	
	for (i=0; i<MESES; i++){
		
		for (j=0; j<FUNC; j++){
			
			soma += vendas [i][j];
			
		}
		
	}
	
	//retornando resultado
	
	return soma;
	
}

//b. Dado um m�s fornecido pelo usu�rio, determinar o total vendido nesse m�s;

float calcularVendasPorMes (float vendas[MESES][FUNC], int mes){
	
	//declara��o de vari�veis
	
	float soma = 0;
	int j;
	
	//atualizando vari�vel m�s: de 0...11 para 1...12
	
	mes--;
	
	//percorrendo toda a linha referente ao m�s
	
	for (j=0; j<FUNC; j++){
		
		soma += vendas[mes][j]
		
	}
	
	//retornando resultado
	
	return soma;
	
}

//c. Dado um funcion�rio fornecido pelo usu�rio, determinar o total vendido por ele durante o ano;

float calcularVendasPorFunc (float vendas[MESES][FUNC], int funcionario){
	
	//declara��o de vari�veis
	
	float soma = 0;
	int i;
	
	//atualizando vari�vel funcionario: de 0...9 para 1...10
	
	funcionario--;
	
	//percorrendo toda a linha referente ao m�s
	
	for (i=0; i<MESES; i++){
		
		soma += vendas[i][funcionario]
		
	}
	
	//retornando resultado
	
	return soma;
	
}

//d. Determinar o m�s com maior �ndice de vendas;

int calcularMesMaiorVendas (float vendas[MESES][FUNC]){
	
	//declara��o de vari�veis
	
	float maior = -1;
	int mes, maiorMes;
	
	//percorrendo todos os meses do ano
	
	for (mes=0; mes<MESES; mes++){
		
		//calculando o total vendido a cada m�s do ano
		
		total = calcularVendasPorMes (vendas, mes);
		
		//verificando se � o m�s de maior �ndice de vendas
		
		if (total > maior){
			
			maior = total;
			maiorMes = mes;
			
		}
		
	}
	
	//retornando resultado
	
	return maiorMes+1; //transformando 0...11 para 1...12, por isso esse +1.
	
}

//e. Determinar o funcion�rio que menos vendeu durante o ano.

int calcularFuncMenorVenda (float vendas[MESES][FUNC]){
	
	//declara��o de vari�veis
	
	float total, menor = 10000000;
	int funcionario, menorFuncionario;
	
	//percorrendo todos os funcion�rios
	
	for (funcionario=0; funcionario<FUNC; funcionario++){
		
		//calculando o total vendido por cada funcion�rio
		
		total = calcularVendasPorFunc (vendas, funcionario);
		
		//verificando se � o m�s de maior �ndice de vendas
		
		if (total < menor){
			
			menor = total;
			maiorFuncionario = funcionario;
			
		}
		
	}
	
	//retornando resultado
	
	return menorFuncionario+1; //transformando 0...9 para 1...10, por isso esse +1.
	
}
