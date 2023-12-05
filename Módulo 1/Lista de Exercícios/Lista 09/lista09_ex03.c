/*
  FAC - Turma B - 2020/1
  Professor Leonardo Vianna
  
  Lista de Exercícios IX:
  
  QUESTÃO 03:
  Fazer uma função leituraDados que permaneça lendo valores 
  reais até que o número 0 seja digitado. Ao final, a função 
  deve determinar a quantidade de elementos fornecidos 
  (excluindo o 0) e o maior dentre eles.
*/

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void leituraDados (int *quant, float *maior);

//main
void main ()
{
	//declaração de variáveis
	int quantidade;
	float maior;
	
	//chamando a função
	leituraDados (&quantidade, &maior);
	
	//exibindo os resultados
	printf ("Quantidade: %d\nMaior: %.1f\n", quantidade, maior);	
}

//implementação das funções
void leituraDados (int *quant, float *maior)
{
	//declaração de variáveis	
	float n, ma=-99999;
	int cont=0;
	
	do
	{
		//lendo os valores
		printf("Entre com um valor. Digite zero para sair. ");
		scanf("%f", &n);
		
		//atualizando a quantidade de elementos fornecidos
		//if (n != 0)
		//{
			cont++;
		//}
		
		//verificando se o número recém fornecido é o maior de todos
		if (n > ma)
		{
			ma = n;
		}
	}
	while (n!=0);
	
	//retornando os resultados
	*maior = ma;
	*quant = cont-1;
}
