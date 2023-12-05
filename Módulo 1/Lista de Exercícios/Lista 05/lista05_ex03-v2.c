/* Lista V

   QUEST�O 03: 
   Implementar um programa que calcule o valor de base elevevado a expoente, onde base e 
   expoente s�o n�meros inteiros dados pelo usu�rio.
   
   vers�o 2: utilizando a estrutura while
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//Declara��o de vari�veis
	int base, expoente, potencia, i;
	 
	//leitura dos valores de entrada
	printf ("Entre com a base: ");
	scanf ("%d", &base);
	
	printf ("Entre com o expoente: ");
	scanf ("%d", &expoente);
	
	/* A solu��o consistir� em calcular o produto base x base x ... x base, sendo o n�mero
	   destas multiplica��es representado por expoente.
	   
	   Exemplo: para calcular 3 elevado a 5, ser� necess�rio multiplicar o n�mero 3 por
	            5 vezes. Ou seja: 3x3x3x3x3  
	*/
	
	potencia = 1;  //elemento neutro da multiplica��o
	
	//calculando o valor da potencia
	i = 1;
	while (i<=expoente)
	{
		potencia *= base;
		i++;
	}
	
	//exibindo o resultado
	printf ("\n\n%d elevado a %d = %d", base, expoente, potencia);
}
