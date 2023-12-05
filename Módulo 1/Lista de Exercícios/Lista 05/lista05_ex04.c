/* Lista V

   QUEST�O 04: A prefeitura de uma cidade fez uma pesquisa com 300 de seus habitantes, 
   coletando dados sobre o sal�rio e n�mero de filhos. A prefeitura deseja saber: 

   a) m�dia do sal�rio da popula��o; 
   b) m�dia do n�mero de filhos; 
   c) maior sal�rio; 
   d) percentual de pessoas com sal�rio at� R$ 1.000,00. 
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de contantes
#define QUANT 5

//main
void main ()
{
	//Declara��o de vari�veis
	int i, nFilhos, somaFilhos=0, cont1000=0;
	float salario, somaSalario=0, mediaSalario, mediaFilhos,
	      maiorSalario=0, perc1000;
	
	//repeti��o para a leitura dos dados dos QUANT habitantes
	for (i=1;i<=QUANT;i++)
	{
		printf ("Salario: ");
		scanf ("%f", &salario);
		
		printf ("Numero de filhos: ");
		scanf ("%d", &nFilhos);
		
		//calculando a soma dos sal�rios para, ao final, calcular a m�dia		
		somaSalario += salario;
		
		//calculando o total de filhos para, ao final, calcular a m�dia		
		somaFilhos += nFilhos;

		//determinando o maior sal�rio
		if (salario > maiorSalario)
		{
			maiorSalario = salario;
		}
		
		//verificando quantas pessoas possuem sal�rio at� R$ 1.000,00
		if (salario <= 1000)
		{
			cont1000++;
		}
	}
	
	//calculando a m�dia salarial e a m�dia do n�mero de filhos
	mediaSalario = somaSalario/QUANT;
	mediaFilhos = (float)somaFilhos/QUANT;	//aqui foi preciso fazer o casting, pois os dois operandos s�o inteiros
	
	//calculando o percentual de pessoas com sal�rio at� R$ 1.000,00
	perc1000 = ((float)cont1000/QUANT)*100; //aqui foi preciso fazer o casting, pois os dois operandos s�o inteiros
	
	//exibindo os resultados
	printf ("\n\nMedia salarial: R$ %.2f\n", mediaSalario);
	printf ("Media do numero de filhos: %.1f\n", mediaFilhos);
	printf ("Maior salario: R$ %.2f\n", maiorSalario);
	printf ("Percentual de pessoas com salario ate R$ 1.000,00: %.1f%%", perc1000);
}
