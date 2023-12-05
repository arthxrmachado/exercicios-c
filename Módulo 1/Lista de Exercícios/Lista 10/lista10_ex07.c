/*
   FAC - Turma B
   Professor Leonardo Vianna
   Data: 19/11/2020
   
   Lista de Exerc�cios X
   
   QUEST�O 07:
   Desenvolver uma fun��o que remova determinado elemento (todas 
   as suas ocorr�ncias) de um vetor de float. Ao final, retornar 
   o n�mero de remo��es realizadas.
   
   Exemplo:
   
   vetor:  10  5  4  8  4  6  5  4  8  10		capacidade: 10
           0   1  2  3  4  5  6  7  8  9		quantidade: 10
           
   Fun��o: remover o n� 4
    
   Ap�s a remo��o:
    
   vetor:  10  5  8  6  5  8  10 ?  ?  ?		capacidade: 10
           0   1  2  3  4  5  6  7  8  9		quantidade: 7    
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define CAP 20

//prot�tipos das fun��es
void preencherVetor (float v[], int tamanho);
void exibirVetor (float v[], int tamanho);
int remover (float v[], int *quantidade, float numero);

//main
void main()
{
	//declara��o de vari�veis
	float vetor[CAP];
	float num;
	int quantidade, remocoes;
	
	//preenchendo o vetor aleatoriamente
    preencherVetor (vetor, CAP);
    quantidade = CAP;
    
    //exibindo o vetor antes da remo��o
	exibirVetor (vetor, quantidade);	
    
    //lendo o valor a ser removido
    printf ("Entre com o valor a ser removido: ");
    scanf ("%f", &num);
    
    //chamando a fun��o
	remocoes = remover (vetor, &quantidade, num);
    
    //exibindo o vetor ap�s a remo��o
	exibirVetor (vetor, quantidade);	
	printf ("\n\nForam realizadas %d remocoes do numero %.1f.\n", remocoes, num);
}

//implementa��o das fun��es

//preenchendo o vetor com valores gerados randomicamente
void preencherVetor (float v[], int tamanho)
{
	//declara��o de vari�veis
	int i;
	
	//garantindo que a sequ�ncia mude a cada altera��o
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
	//declara��o de vari�veis
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
	//declara��o de vari�veis
	int i, pos, cont = 0;
	
	//percorrendo todo o vetor em busca de 'numero'
	for (i=0;i<*quantidade;)
	{
		//verificar se 'numero' foi encontrado
		if (v[i] == numero)
		{
			//deslocando os elementos que est�o al�m da posi��o 'i'
			for (pos=i+1;pos<*quantidade;pos++)
			{
				v[pos-1] = v[pos];
			}
			
			//atualizando a quantidade de elementos do vetor
			(*quantidade)--;
			
			//atualizando o n�mero de remo��es realizadas
			cont++;
		}
		else
		{
			i++;
		}
	}
	
	//retornando a quantidade de remo��es realizadas
	return cont;
}

/*   Exemplo:
   
   vetor:  10  5  4  8  4  6  5  4  8  10		capacidade: 10
           0   1  2  3  4  5  6  7  8  9		quantidade: 10

   vetor:  10  5  8  4  6  5  4  8  10 ?		capacidade: 10
           0   1  2  3  4  5  6  7  8  9		quantidade: 9

   vetor:  10  5  8  6  5  4  8  10 ?  ?		capacidade: 10
           0   1  2  3  4  5  6  7  8  9		quantidade: 8

   vetor:  10  5  8  6  5  8  10 ?  ?  ?		capacidade: 10
           0   1  2  3  4  5  6  7  8  9		quantidade: 7
           
   Fun��o: remover o n� 4
    
   Ap�s a remo��o:
    
   vetor:  10  5  8  6  5  8  10 ?  ?  ?		capacidade: 10
           0   1  2  3  4  5  6  7  8  9		quantidade: 7    
*/
