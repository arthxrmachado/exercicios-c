/*
   FAC - Turma B
   Professor Leonardo Vianna
   Data: 12/11/2020
   
   Corre��o das quest�es da AV1
   
   Quest�o 02 [2,0 pontos]:
   Fazer uma fun��o que permane�a lendo valores enquanto 
   estes estiverem em ordem crescente, e determine a 
   quantidade de valores fornecidos assim como a quantidade 
   de n�meros distintos (neste �ltimo caso, desconsiderar o 
   valor respons�vel pela parada da leitura).
   
   Exemplo:
	Sequ�ncia de n�meros fornecidos:
	5  7  9  9  12  15  15  15  18  7

	Quantidade de valores: 10
	Quantidade de valores distintos: 6 
	
	Notas:
	i. A solu��o deve estar na linguagem de programa��o C;
	ii.	Deve ser apresentada a fun��o main() com a chamada � 
	fun��o desenvolvida;
	iii. Salvar o arquivo com o seu nome completo, seguido da extens�o .c.
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipo da fun��o
void leituraCrescente (int *totalValores, int *totalDistintos);

//main
void main()
{
	//declara��o de vari�veis
	int quantidade, distintos;
	
	//chamando a fun��o
	leituraCrescente (&quantidade, &distintos);
	
	//exibindo os resultados
	printf ("Quantidade: %d\nValores distintos: %d\n", quantidade, distintos);
}

//implementa��o da fun��o
void leituraCrescente (int *totalValores, int *totalDistintos)
{
	//declara��o de vari�veis
	int cont=0, diff=0, anterior, atual;
	
	//lendo o primeiro valor
	printf("Entre com um valor: ");
	scanf("%d", &atual);
	
	anterior=-9999;
	
	//enquanto a sequ�ncia for crescente
	while (atual>=anterior)
	{	
		//atualizando a quantidade de n�meros distintos			
		if (atual!=anterior)
		{
			diff++;
		}	
		
		//antes de ler o pr�ximo valor, guardar o atual em 'anterior'
		anterior=atual;
		
		//lendo o pr�ximo valor
		printf("Entre com um valor: ");
		scanf("%d", &atual);		
        
        //contando o n�mero de valores digitados
		cont++;	
	}
	
	//armazenando os resultados nos par�metros por refer�ncia
	*totalValores = cont+1;   //+1: pois o primeiro n�o foi lido
	*totalDistintos = diff;	
}
