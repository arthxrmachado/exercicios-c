/*
QUESTÃO 08: Faça um programa que leia um número real x e um número inteiro y. Em seguida, o programa deve ler 100 números reais e calcular quantos destes 
estão no intervalo definido por [x-y,x+y].
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define QUANT 100

//main
void main ()
{
	//declaração de variáveis
	float x, valor, inicio, fim;
	int y, i, cont = 0;
	
	//lendo os valores de entrada
	printf ("Entre com o valor de x: ");
	scanf ("%f", &x);
	
	printf ("Entre com o valor de y: ");
	scanf ("%d", &y);
	
	//calculando os limites do intervalo
	inicio = x - y;
	fim = x + y;
	
	printf ("\n\n");
	
	//lendo os QUANT elementos
	for (i=1;i<=QUANT;i++)
	{
		printf ("%do. valor: ", i);
		scanf ("%f", &valor);
		
		//verificando se o valor está no intervalo
		if ((valor >= inicio) && (valor <= fim))
		{
			cont++;
		}
	}
	
	//exibindo o resultado
	printf ("\n%d elementos foram informados no intervalo [%.1f,%.1f]", cont, inicio, fim);
}
