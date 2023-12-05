/* Lista V

   QUEST�O 01:
   Fa�a um programa que leia um n�mero inteiro x e, em seguida, solicite ao usu�rio 
   outros 50 valores inteiros. Ao final, o programa deve exibir o total de m�ltiplos de 
   x fornecidos. 
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define QUANT 50

//main
void main ()
{
	//Declara��o de vari�veis
	int i, x, valor, cont = 0;
	
	//leitura do valor de x
	printf ("Entre com um numero inteiro: ");
	scanf ("%d", &x);
	
	//pulando uma linha
	printf ("\n");
	
	//repeti��o para a leitura dos QUANT valores
	for (i=1;i<=QUANT;i++)
	{
		//leitura de cada valor
		printf ("%do. valor: ", i);
		scanf ("%d", &valor);
		
		//verificando se o n�mero lido � m�ltiplo de x
		if (valor % x == 0)
		{
			//se for, deve-se atualizar o contador
			cont++;
		}
	}
	
	//exibindo o resultado
	printf ("\n\nForam digitados %d multiplos de %x", cont, x);
}
