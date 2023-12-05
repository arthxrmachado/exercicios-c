/* Lista V

   QUESTÃO 03: 
   Implementar um programa que calcule o valor de base elevevado a expoente, onde base e 
   expoente são números inteiros dados pelo usuário.
   
   versão 2: utilizando a estrutura while
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//Declaração de variáveis
	int base, expoente, potencia, i;
	 
	//leitura dos valores de entrada
	printf ("Entre com a base: ");
	scanf ("%d", &base);
	
	printf ("Entre com o expoente: ");
	scanf ("%d", &expoente);
	
	/* A solução consistirá em calcular o produto base x base x ... x base, sendo o número
	   destas multiplicações representado por expoente.
	   
	   Exemplo: para calcular 3 elevado a 5, será necessário multiplicar o número 3 por
	            5 vezes. Ou seja: 3x3x3x3x3  
	*/
	
	potencia = 1;  //elemento neutro da multiplicação
	
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
