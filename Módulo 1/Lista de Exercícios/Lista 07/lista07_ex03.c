/*
Questão 03: Desenvolver um programa que leia dois números inteiros n1 e n2 e determine se n2 consiste em n1 com seus algarismos embaralhados.

Nota: considerar que não existem algarismos repetidos no mesmo número.
	
Explicação da ideia do algoritmo: Ao dividir um número por 10 sucessivamente, conseguiremos ter acesso a cada um de seus algarismos, a partir da operação 
de resto da divisão. Então, para cada um dos algarismos do primeiro valor, o compararemos com todos os algarismos do segundo valor (sempre com sucessivas 
divisões por 10).
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int num1, num2, aux1, aux2, alg1, alg2, cont=0, iguais=0, achei, continuar = 1;
	
	//leitura dos dois números
	printf ("Entre com os dois numeros: ");
	scanf ("%d %d", &num1, &num2);
	
	//atribuindo num1 a uma variável auxiliar (para preservar o seu valor original)
	aux1 = num1;
	
	//aux1 será dividido por 10 até que esta divisão não seja mais possível
	while ((aux1 != 0) && (continuar == 1))  //a segunda condição controla se a busca deve continuar ou não
	{
		//atribuindo num2 a uma variável auxiliar (para preservar o seu valor original)
		aux2 = num2;
		
		//receberá o algarismo mais à direita de aux1
		alg1 = aux1%10;
		
		//contando o número de algarismos do primeiro número
		cont++;
		
		//esta variável controlará se 'alg1' também existe em 'num2'
		//Começa com 0, pois ainda não o encontramos em 'num2'. Caso o encontremos, ele 
		//se tornará 1
		achei = 0;
		
		//aux2 será dividido por 10 até que esta divisão não seja mais possível
		while ((aux2 != 0) && (achei == 0))  //a segunda condição foi inserida para que o while termine quando o alg1 for encontrado no segundo número
 		{
			//receberá o algarismo mais à direita de aux2
			alg2 = aux2%10;
			
			//verificando se há algarismos iguais em 'num1' e 'num2'
			if (alg1 == alg2)
			{
				//atualizando para 1 o valor da variável 'achei'
				achei = 1;
			}
			
			//descartando de aux2 o algarismo mais à direita
			aux2 = aux2/10;
		}	
		
		//atualizando o total de algarismos iguais dos dois números
		if (achei == 1)
		{
			iguais++;
		}
		else
		{
			continuar = 0;  //se o algarismo não for encontrado no segundo número, não há motivos para continuar o programa
		}
				
		//descartando de aux1 o algarismo mais à direita
		aux1 = aux1/10;
	}
	
	//testando se 'o número de algarismos do primeiro valor' é igual 
	//ao 'número de algarismos comuns entre num1 e num2'
	if (cont == iguais)
	{
		printf ("Os dois valores possuem os mesmos algarismos.");
	}
	else
	{
		printf ("Os dois valores nao possuem os mesmos algarismos.");
	}
}
