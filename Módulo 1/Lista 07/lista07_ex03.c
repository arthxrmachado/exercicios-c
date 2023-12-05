/*
	FAC - 2020/1
	Lista de Exerc�cios VII
	
	Quest�o 03:
	Desenvolver um programa que leia dois n�meros inteiros n1 e n2 e determine se n2 
	consiste em n1 com seus algarismos embaralhados.

	Nota: considerar que n�o existem algarismos repetidos no mesmo n�mero.
	
	Explica��o da ideia do algoritmo:
	Ao dividir um n�mero por 10 sucessivamente, conseguiremos ter acesso a cada um de seus 
	algarismos, a partir da opera��o de resto da divis�o.
	Ent�o, para cada um dos algarismos do primeiro valor, o compararemos com todos os 
	algarismos do segundo valor (sempre com sucessivas divis�es por 10).
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int num1, num2, aux1, aux2, alg1, alg2, cont=0, iguais=0, achei, continuar = 1;
	
	//leitura dos dois n�meros
	printf ("Entre com os dois numeros: ");
	scanf ("%d %d", &num1, &num2);
	
	//atribuindo num1 a uma vari�vel auxiliar (para preservar o seu valor original)
	aux1 = num1;
	
	//aux1 ser� dividido por 10 at� que esta divis�o n�o seja mais poss�vel
	while ((aux1 != 0) && (continuar == 1))  //a segunda condi��o controla se a busca deve continuar ou n�o
	{
		//atribuindo num2 a uma vari�vel auxiliar (para preservar o seu valor original)
		aux2 = num2;
		
		//receber� o algarismo mais � direita de aux1
		alg1 = aux1%10;
		
		//contando o n�mero de algarismos do primeiro n�mero
		cont++;
		
		//esta vari�vel controlar� se 'alg1' tamb�m existe em 'num2'
		//Come�a com 0, pois ainda n�o o encontramos em 'num2'. Caso o encontremos, ele 
		//se tornar� 1
		achei = 0;
		
		//aux2 ser� dividido por 10 at� que esta divis�o n�o seja mais poss�vel
		while ((aux2 != 0) && (achei == 0))  //a segunda condi��o foi inserida para que o while termine quando o alg1 for encontrado no segundo n�mero
 		{
			//receber� o algarismo mais � direita de aux2
			alg2 = aux2%10;
			
			//verificando se h� algarismos iguais em 'num1' e 'num2'
			if (alg1 == alg2)
			{
				//atualizando para 1 o valor da vari�vel 'achei'
				achei = 1;
			}
			
			//descartando de aux2 o algarismo mais � direita
			aux2 = aux2/10;
		}	
		
		//atualizando o total de algarismos iguais dos dois n�meros
		if (achei == 1)
		{
			iguais++;
		}
		else
		{
			continuar = 0;  //se o algarismo n�o for encontrado no segundo n�mero, n�o h� motivos para continuar o programa
		}
				
		//descartando de aux1 o algarismo mais � direita
		aux1 = aux1/10;
	}
	
	//testando se 'o n�mero de algarismos do primeiro valor' � igual 
	//ao 'n�mero de algarismos comuns entre num1 e num2'
	if (cont == iguais)
	{
		printf ("Os dois valores possuem os mesmos algarismos.");
	}
	else
	{
		printf ("Os dois valores nao possuem os mesmos algarismos.");
	}
}
