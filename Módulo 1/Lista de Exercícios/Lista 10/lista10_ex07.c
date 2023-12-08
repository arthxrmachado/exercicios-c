/*
QUESTÃO 07: Desenvolver uma função que remova determinado elemento (todas as suas ocorrências) de um vetor de float. Ao final, retornar o número de 
remoções realizadas.
   
   Exemplo:
   
   vetor:  10  5  4  8  4  6  5  4  8  10		capacidade: 10
           0   1  2  3  4  5  6  7  8  9		quantidade: 10
           
   Função: remover o nº 4
    
   Após a remoção:
    
   vetor:  10  5  8  6  5  8  10 ?  ?  ?		capacidade: 10
           0   1  2  3  4  5  6  7  8  9		quantidade: 7    
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define CAP 20

//protótipos das funções
void preencherVetor (float v[], int tamanho);
void exibirVetor (float v[], int tamanho);
int remover (float v[], int *quantidade, float numero);

//main
void main()
{
	//declaração de variáveis
	float vetor[CAP];
	float num;
	int quantidade, remocoes;
	
	//preenchendo o vetor aleatoriamente
    preencherVetor (vetor, CAP);
    quantidade = CAP;
    
    //exibindo o vetor antes da remoção
	exibirVetor (vetor, quantidade);	
    
    //lendo o valor a ser removido
    printf ("Entre com o valor a ser removido: ");
    scanf ("%f", &num);
    
    //chamando a função
	remocoes = remover (vetor, &quantidade, num);
    
    //exibindo o vetor após a remoção
	exibirVetor (vetor, quantidade);	
	printf ("\n\nForam realizadas %d remocoes do numero %.1f.\n", remocoes, num);
}

//implementação das funções

//preenchendo o vetor com valores gerados randomicamente
void preencherVetor (float v[], int tamanho)
{
	//declaração de variáveis
	int i;
	
	//garantindo que a sequência mude a cada alteração
	srand (time(NULL));  //semente - seed
	
	//lendo os elementos do vetor
	for (i=0;i<tamanho;i++)
	{
		v[i] = 1+rand()%10;  //1..10
	}
}

//exibe na tela os elementos de um vetor com 'tamanho' elementos
void exibirVetor (float v[], int tamanho)
{
	//declaração de variáveis
	int i;	
	
	printf ("\n\nVetor: ");
	
	for (i=0;i<tamanho;i++)
	{
		printf ("%.1f ", v[i]);
	}
	
	printf ("\n\n");
}

int remover (float v[], int *quantidade, float numero)
{
	//declaração de variáveis
	int i, pos, cont = 0;
	
	//percorrendo todo o vetor em busca de 'numero'
	for (i=0;i<*quantidade;)
	{
		//verificar se 'numero' foi encontrado
		if (v[i] == numero)
		{
			//deslocando os elementos que estão além da posição 'i'
			for (pos=i+1;pos<*quantidade;pos++)
			{
				v[pos-1] = v[pos];
			}
			
			//atualizando a quantidade de elementos do vetor
			(*quantidade)--;
			
			//atualizando o número de remoções realizadas
			cont++;
		}
		else
		{
			i++;
		}
	}
	
	//retornando a quantidade de remoções realizadas
	return cont;
}

           
   Função: remover o nº 4
    
   Após a remoção:
    
   vetor:  10  5  8  6  5  8  10 ?  ?  ?		capacidade: 10
           0   1  2  3  4  5  6  7  8  9		quantidade: 7    
*/
