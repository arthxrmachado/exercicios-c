/*
Questão 03: Desenvolver um programa que leia um número inteiro (no intervalo de 1 a 2000) e exiba o número romano equivalente.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//Declaração de variáveis
	int numero, resto, m, c, d, u;	
	
	//lendo o número
	do
	{
		printf ("Entre com um numero (de 1 a 2000): ");
		scanf ("%d", &numero);
		
		if ((numero < 1) || (numero > 2000))
		{
			printf ("ERRO: o numero deve estar no intervalo de 1 a 2000. Tente novamente.\n");
		}
	}
	while ((numero < 1) || (numero > 2000));
	
	//decompondo o número em milhares, centenas, dezenas e unidades
	m = numero/1000;
	resto = numero%1000;
	
	c = resto/100;
	resto = resto%100;
	
	d = resto/10;
	u = resto%10;
	
	//escrevendo os milhares
	switch (m)
	{
		case 1: printf ("M");
		        break;
		        
		case 2: printf ("MM");
	}
	
	//escrevendo as centenas
	switch (c)
	{
		case 1: printf ("C");
		        break;
		        
		case 2: printf ("CC");
		        break;;
		        
		case 3: printf ("CCC");
		        break;
		        
		case 4: printf ("CD");
		        break;
		
		case 5: printf ("D");
		        break;
		
		case 6: printf ("DC");
		        break;
		
		case 7: printf ("DCC");
		        break;
		
		case 8: printf ("DCCC");
		        break;
		
		case 9: printf ("CM");
	}
	
	//escrevendo as dezenas
	switch (d)
	{
		case 1: printf ("X");
		        break;
		        
		case 2: printf ("XX");
		        break;
		        
		case 3: printf ("XXX");
		        break;
		        
		case 4: printf ("XL");
		        break;
		
		case 5: printf ("L");
		        break;
		
		case 6: printf ("LX");
		        break;
		
		case 7: printf ("LXX");
		        break;
		
		case 8: printf ("LXXX");
		        break;
		
		case 9: printf ("XC");
	}

	//escrevendo as unidades
	switch (u)
	{
		case 1: printf ("I");
		        break;
		        
		case 2: printf ("II");
		        break;
		        
		case 3: printf ("III");
		        break;
		        
		case 4: printf ("IV");
		        break;
		
		case 5: printf ("V");
		        break;
		
		case 6: printf ("VI");
		        break;
		
		case 7: printf ("VII");
		        break;
		
		case 8: printf ("VIII");
		        break;
		
		case 9: printf ("IX");
	}
}
