/*
	FAC - 2020/1
	Lista de Exerc�cios VII
	
	Quest�o 01:
	
	Dados tr�s n�meros inteiros a, b e c, implementar um programa que exiba os n�meros do 
	intervalo definido por a e b (sempre come�ando em a e terminando em b), com exce��o 
	daqueles que sejam m�ltiplos de c.

	Exemplos:

	a = 10, b = 20, c = 3
		Sa�da: 10, 11, 13, 14, 16, 17, 19, 20 
		
	a = 25, b = 18, c = 5
		Sa�da: 24, 23, 22, 21, 19, 18

	Nota: devem ser apresentadas tr�s vers�es do programa, uma para cada estrutura de 
	repeti��o estudada.
	
	VERS�O 2: WHILE
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int a, b, c, i;
	
	//leitura dos dados de entrada
	printf ("Entre com os valores a, b e c: ");
	scanf ("%d %d %d", &a, &b, &c);
	
	//verificando se trata-se de um intervalo crescente
	if (a <= b)
	{
		i=a;
		while (i<=b)
		{
			if (i%c!=0)
			{
				printf ("%d  ", i);
			}
			i++;
		}
	}
	else //intervalo decrescente
	{
		i=a;
		while (i>=b)
		{
			if (i%c!=0)
			{
				printf ("%d  ", i);
			}
			i--;
		}
		
	}
}
