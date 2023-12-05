
/*
  FAC - Turma B - 2020/1
  Professor Leonardo Vianna
  
  Lista de Exerc�cios IX:
  
  QUEST�O 06:
  Desenvolver uma fun��o que, dado um n�mero inteiro N, 
  calcule o valor do seguinte somat�rio:

	S= 1+((n-1)!^1)/1!+(n-2)!^2/2!+(n-3)!^3/3!+...+1^(n-1)/((n-1)!)
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
float somatorio (int n);
int potencia (int base, int expoente);
int fatorial (int n);

//main
void main ()
{
	//declara��o de vari�veis
	int numero;
	float soma;
	
	//lendo o valor de entrada
	printf ("Entre com um numero: ");
	scanf ("%d", &numero);
	
	//chamando a fun��o
	soma = somatorio (numero);
	
	//exibindo o resultado
	printf ("Soma = %.1f", soma);
}

//implementa��o das fun��es
float somatorio (int n)
{
	//declara��o de vai�veis
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
	//declara��o de vari�veis
	int i, pot=1;
	
	//calculando a pot�ncia
	for (i=1;i<=expoente;i++)
	{
		pot *= base;
	}
	
	//retornando po resultado
	return pot;
}

int fatorial (int n)
{
	//declara��o de vari�veis
	int i, fat=1;
	
	//calculando o fatorial
	for (i=2;i<=n;i++)
	{
		fat *= i;
	}
	
	//retornando o resultado
	return fat;	
}
