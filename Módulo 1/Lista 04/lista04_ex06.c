/* Lista IV - Exerc�cio 6

   QUEST�O 06: Criar um programa que exiba os N primeiros termos da seguinte s�rie:  
 
									1,2,8,64,1024,... 
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int n, i, termo, razao;
	
	//Leitura dos dados de entrada
	printf ("Entre com a quantidade de termos: ");
	scanf ("%d", &n);
	
	termo = 1;
	razao = 2;
	
	//exibindo os termos
	for (i=1;i<=n;i++)
	{
		printf ("%d ", termo);
		
		termo *= razao;
		razao *= 2;
	}	
}
