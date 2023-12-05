
/*
  FAC - Turma B - 2020/1
  Professor Leonardo Vianna
  
  Lista de Exercícios IX:
  
  QUESTÃO 06:
  Desenvolver uma função que, dado um número inteiro N, 
  calcule o valor do seguinte somatório:

	S= 1+((n-1)!^1)/1!+(n-2)!^2/2!+(n-3)!^3/3!+...+1^(n-1)/((n-1)!)
*/

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
float somatorio (int n);
int potencia (int base, int expoente);
int fatorial (int n);

//main
void main ()
{
	//declaração de variáveis
	int numero;
	float soma;
	
	//lendo o valor de entrada
	printf ("Entre com um numero: ");
	scanf ("%d", &numero);
	
	//chamando a função
	soma = somatorio (numero);
	
	//exibindo o resultado
	printf ("Soma = %.1f", soma);
}

//implementação das funções
float somatorio (int n)
{
	//declaração de vaiáveis
	int i, numerador, denominador;
	float S = 0;
	
	//variando de 0 a n-1 para montar as parcelas
	for (i=0;i<n;i++)
	{
		numerador = potencia (n-i, i);
		denominador = fatorial (i);
		
		S += (float)numerador/denominador; 
	}
	
	//retornando o resultado
	return S;
}

int potencia (int base, int expoente)
{
	//declaração de variáveis
	int i, pot=1;
	
	//calculando a potência
	for (i=1;i<=expoente;i++)
	{
		pot *= base;
	}
	
	//retornando po resultado
	return pot;
}

int fatorial (int n)
{
	//declaração de variáveis
	int i, fat=1;
	
	//calculando o fatorial
	for (i=2;i<=n;i++)
	{
		fat *= i;
	}
	
	//retornando o resultado
	return fat;	
}
