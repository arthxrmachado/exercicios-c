/*
Questão 02: Fazer uma função que permaneça lendo valores enquanto estes estiverem em ordem crescente, e determine a quantidade de valores fornecidos assim 
como a quantidade de números distintos (neste último caso, desconsiderar o valor responsável pela parada da leitura).
   
   Exemplo:
	Sequência de números fornecidos:
	5  7  9  9  12  15  15  15  18  7

	Quantidade de valores: 10
	Quantidade de valores distintos: 6 
	
	Notas:
	i. A solução deve estar na linguagem de programação C;
	ii.	Deve ser apresentada a função main() com a chamada à 
	função desenvolvida;
	iii. Salvar o arquivo com o seu nome completo, seguido da extensão .c.
*/

//importação de bibliotecas
#include <stdio.h>

//protótipo da função
void leituraCrescente (int *totalValores, int *totalDistintos);

//main
void main()
{
	//declaração de variáveis
	int quantidade, distintos;
	
	//chamando a função
	leituraCrescente (&quantidade, &distintos);
	
	//exibindo os resultados
	printf ("Quantidade: %d\nValores distintos: %d\n", quantidade, distintos);
}

//implementação da função
void leituraCrescente (int *totalValores, int *totalDistintos)
{
	//declaração de variáveis
	int cont=1, diff=1, anterior, atual;
	
	//lendo o primeiro valor
	printf("Entre com um valor: ");
	scanf("%d", &atual);
	
    //enquanto a sequência for crescente
	do
	{	
	    //antes de ler o próximo valor, guardar o atual em 'anterior'
		anterior=atual;
		
		//lendo o próximo valor
		printf("Entre com um valor: ");
		scanf("%d", &atual);		
	
		//atualizando a quantidade de números distintos			
		if (atual>anterior)
		{
			diff++;
		}			
        
        //contando o número de valores digitados
		cont++;	
	}
	while (atual>=anterior);
	
	//armazenando os resultados nos parâmetros por referência
	*totalValores = cont;   
	*totalDistintos = diff;	
}
