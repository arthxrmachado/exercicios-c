/*
   FAC - Turma B
   Professor Leonardo Vianna
   Data: 12/11/2020
   
   Correção das questões da AV1
   
   Questão 02 [2,0 pontos]:
   Fazer uma função que permaneça lendo valores enquanto 
   estes estiverem em ordem crescente, e determine a 
   quantidade de valores fornecidos assim como a quantidade 
   de números distintos (neste último caso, desconsiderar o 
   valor responsável pela parada da leitura).
   
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
	int cont=0, diff=0, anterior, atual;
	
	//lendo o primeiro valor
	printf("Entre com um valor: ");
	scanf("%d", &atual);
	
	anterior=-9999;
	
	//enquanto a sequência for crescente
	while (atual>=anterior)
	{	
		//atualizando a quantidade de números distintos			
		if (atual!=anterior)
		{
			diff++;
		}	
		
		//antes de ler o próximo valor, guardar o atual em 'anterior'
		anterior=atual;
		
		//lendo o próximo valor
		printf("Entre com um valor: ");
		scanf("%d", &atual);		
        
        //contando o número de valores digitados
		cont++;	
	}
	
	//armazenando os resultados nos parâmetros por referência
	*totalValores = cont+1;   //+1: pois o primeiro não foi lido
	*totalDistintos = diff;	
}
