/*
QUESTÃO 04: A prefeitura de uma cidade fez uma pesquisa com 300 de seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja
saber: 

   a) média do salário da população; 
   b) média do número de filhos; 
   c) maior salário; 
   d) percentual de pessoas com salário até R$ 1.000,00. 
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de contantes
#define QUANT 5

//main
void main ()
{
	//Declaração de variáveis
	int i, nFilhos, somaFilhos=0, cont1000=0;
	float salario, somaSalario=0, mediaSalario, mediaFilhos,
	      maiorSalario=0, perc1000;
	
	//repetição para a leitura dos dados dos QUANT habitantes
	for (i=1;i<=QUANT;i++)
	{
		printf ("Salario: ");
		scanf ("%f", &salario);
		
		printf ("Numero de filhos: ");
		scanf ("%d", &nFilhos);
		
		//calculando a soma dos salários para, ao final, calcular a média		
		somaSalario += salario;
		
		//calculando o total de filhos para, ao final, calcular a média		
		somaFilhos += nFilhos;

		//determinando o maior salário
		if (salario > maiorSalario)
		{
			maiorSalario = salario;
		}
		
		//verificando quantas pessoas possuem salário até R$ 1.000,00
		if (salario <= 1000)
		{
			cont1000++;
		}
	}
	
	//calculando a média salarial e a média do número de filhos
	mediaSalario = somaSalario/QUANT;
	mediaFilhos = (float)somaFilhos/QUANT;	//aqui foi preciso fazer o casting, pois os dois operandos são inteiros
	
	//calculando o percentual de pessoas com salário até R$ 1.000,00
	perc1000 = ((float)cont1000/QUANT)*100; //aqui foi preciso fazer o casting, pois os dois operandos são inteiros
	
	//exibindo os resultados
	printf ("\n\nMedia salarial: R$ %.2f\n", mediaSalario);
	printf ("Media do numero de filhos: %.1f\n", mediaFilhos);
	printf ("Maior salario: R$ %.2f\n", maiorSalario);
	printf ("Percentual de pessoas com salario ate R$ 1.000,00: %.1f%%", perc1000);
}
