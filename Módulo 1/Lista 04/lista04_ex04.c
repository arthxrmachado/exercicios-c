/* Lista IV - Exerc�cio 4

   QUEST�O 04:
   Implementar um programa que exiba os N primeiros termos de uma PA (Progress�o 
   Aritm�tica) com primeiro termo a1 e raz�o r. 
   
   Exemplo:		a1 = 2, r = 4, n = 6
   				PA: 2, 6, 10, 14, 18, 22
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//Declara��o de vari�veis
	int n, a1, r, termo, i;
	
	//Leitura dos dados de entrada
	printf ("Entre com a quantidade de termos: ");
	scanf ("%d", &n);
	
	printf ("Entre com o primeiro termo: ");
	scanf ("%d", &a1);
	
	printf ("Entre com a razao: ");
	scanf ("%d", &r);
	
	termo = a1;  //armazenar� cada um dos n termos a serem exibidos
	
	//exibindo os elementos da PA
	for (i=1;i<=n;i++)
	{
		printf ("%d ", termo);
		
		termo = termo + r;  //termo += r;
	}
}
