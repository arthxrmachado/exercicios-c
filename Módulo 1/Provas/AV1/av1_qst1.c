/*
   FAC - Turma B
   Professor Leonardo Vianna
   Data: 12/11/2020
   
   Corre��o das quest�es da AV1
   
   Quest�o 01 [2,0 pontos]:
   Desenvolver um programa que, dado um n�mero inteiro N, determine a quantidade de 
   combina��es poss�veis (e exiba-as) com tr�s n�meros (distintos entre si), com valores 
   no intervalo de 1 a N.
   
   Exemplo:

	N = 3
	
	Combina��es poss�veis:
	1 1 1			1 1 2			1 1 3			1 2 1			1 2 2
	1 2 3			1 3 1			1 3 2			1 3 3			2 1 1
	2 1 2			2 1 3			2 2 1			2 2 2			2 2 3
	2 3 1			2 3 2			2 3 3			3 1 1			3 1 2
	3 1 3			3 2 1			3 2 2			3 2 3			3 3 1
	3 3 2			3 3 3

	Portanto, a resposta �: 
	1 2 3			1 3 2			2 1 3			2 3 1			3 1 2
	3 2 1			

	Total: 6 combina��es
	
	Notas:
	i. A solu��o deve estar na linguagem de programa��o C;
	ii. Caso o valor de N seja negativo ou nulo, uma mensagem 
	de erro deve ser exibida ao usu�rio e um novo n�mero deve 
	ser solicitado (a execu��o do programa s� deve continuar 
	quando um valor positivo for fornecido);
	iii. Salvar o arquivo com o seu nome completo, seguido da extens�o .c.
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int n, i, j, k, cont = 0;
	
	
	do
	{
		//obtendo o valor de 'n'
		printf ("Entre com um numero positivo: ");
		scanf ("%d", &n);
		
		//verificando se o valor � inv�lido
		if (n <= 0)
		{
			printf ("ERRO: o numero deve ser positivo! Tente novamente.\n\n");
		}
	}
	while (n <= 0);
	
	//gerando as combina��es
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			for (k=1;k<=n;k++)
			{
				//verificando se todos os elementos s�o distintos
				if ((i!=j) && (i!=k) && (j!=k))
				{
					printf ("%d %d %d\n", i, j, k);
					cont++;
				}
			}
		}
	}
	
	//exibindo o n�mero de combina��es apresentadas
	printf ("Total: %d combinacoes.\n", cont);
}
