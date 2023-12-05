/*
   FAC - Turma B
   Professor Leonardo Vianna
   Data: 12/11/2020
   
   Correção das questões da AV1
   
   Questão 01 [2,0 pontos]:
   Desenvolver um programa que, dado um número inteiro N, determine a quantidade de 
   combinações possíveis (e exiba-as) com três números (distintos entre si), com valores 
   no intervalo de 1 a N.
   
   Exemplo:

	N = 3
	
	Combinações possíveis:
	1 1 1			1 1 2			1 1 3			1 2 1			1 2 2
	1 2 3			1 3 1			1 3 2			1 3 3			2 1 1
	2 1 2			2 1 3			2 2 1			2 2 2			2 2 3
	2 3 1			2 3 2			2 3 3			3 1 1			3 1 2
	3 1 3			3 2 1			3 2 2			3 2 3			3 3 1
	3 3 2			3 3 3

	Portanto, a resposta é: 
	1 2 3			1 3 2			2 1 3			2 3 1			3 1 2
	3 2 1			

	Total: 6 combinações
	
	Notas:
	i. A solução deve estar na linguagem de programação C;
	ii. Caso o valor de N seja negativo ou nulo, uma mensagem 
	de erro deve ser exibida ao usuário e um novo número deve 
	ser solicitado (a execução do programa só deve continuar 
	quando um valor positivo for fornecido);
	iii. Salvar o arquivo com o seu nome completo, seguido da extensão .c.
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
	int n, i, j, k, cont = 0;
	
	
	do
	{
		//obtendo o valor de 'n'
		printf ("Entre com um numero positivo: ");
		scanf ("%d", &n);
		
		//verificando se o valor é inválido
		if (n <= 0)
		{
			printf ("ERRO: o numero deve ser positivo! Tente novamente.\n\n");
		}
	}
	while (n <= 0);
	
	//gerando as combinações
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			for (k=1;k<=n;k++)
			{
				//verificando se todos os elementos são distintos
				if ((i!=j) && (i!=k) && (j!=k))
				{
					printf ("%d %d %d\n", i, j, k);
					cont++;
				}
			}
		}
	}
	
	//exibindo o número de combinações apresentadas
	printf ("Total: %d combinacoes.\n", cont);
}
